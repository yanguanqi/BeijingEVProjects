#ifndef __GemSerializer_H__
#define __GemSerializer_H__
#include "graphic/graphic_config.h"
#include "mesh.h"
#include "modelserializer.h"
#include "core/graphic_exception.h"

#include <core/datastream.h>


namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			class DataStreamPtr;
			class CArchive;
			class CArchiveFactory;
			class CArchiveManager;
		}
	}
}


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CGemSerializerFactory;
            class EV_GRAPHIC_DLL CGemSerializer : public EarthView::World::Graphic::CModelSerializer
            {
                friend class CGemSerializerFactory;
            protected:
                struct  GEMBlock
                {
                    ev_uint32 vertexNum;
                    ev_uint32 indexNum;
                    EarthView::World::Spatial::Math::CVector3 posVertex;
                    EarthView::World::Spatial::Math::CVector3 posNormal;
                    ev_vector<EarthView::World::Spatial::Math::CVector3> vectexPosVec;
                    ev_vector<EarthView::World::Spatial::Math::CVector3> PosNormalVec;
                    ev_vector<ev_uint32> indexDataVec;
                    ev_uint32 matrixBufferNum;
                    ev_vector<EarthView::World::Spatial::Math::CMatrix4> matrix4Vec;
                    ev_vector<CColourValue> colorValueVec;
                };
                struct lineBlock
                {
                    ev_uint32 lineIndexNum;
                    ev_uint32 lineVertexNum;
                    ev_vector<EarthView::World::Spatial::Math::CVector3> lineVectexPosVec;
                    ev_vector<ev_uint32> lineIndexDataVec;
                    ev_vector<CColourValue> lineColorVec;
                };
                static EVString g_FileExt;
            private:
                EarthView::World::Spatial::Math::CVector3 maxPoint;
                EarthView::World::Spatial::Math::CVector3 minPoint;
                ev_vector<GEMBlock *> GemBlockVec;
                int blockSize;
                int lineBlockSize;
                lineBlock *mpLineBlock;
                ev_vector<ev_int32> matrix22;
                EarthView::World::Spatial::Math::CMatrix4 gemTransMatrix;
                Real gemScale;

            public:
                CGemSerializer();
            ev_private:
                CGemSerializer(EarthView::World::Core::CNameValuePairList *pList);
            public:
                virtual ~CGemSerializer();
                EVString getFileExtension()  const
                {
                    return g_FileExt;
                }
                virtual void importMesh(EarthView::World::Core::DataStreamPtr &stream, EarthView::World::Graphic::CMesh *pMesh);
            private:
                void readGem(EarthView::World::Core::DataStreamPtr &stream);
            };

            class EV_GRAPHIC_DLL CGemSerializerFactory : public EarthView::World::Graphic::CModelSerializerFactory
            {
            ev_private:
                CGemSerializerFactory(EarthView::World::Core::CNameValuePairList *pList0) {}
            public:
                CGemSerializerFactory() {}
            public:
                virtual EVString getFileExtension()  const
                {
                    return CGemSerializer::g_FileExt;
                }
                virtual EarthView::World::Graphic::CModelSerializer *createInstance() const
                {
                    return EV_NEW CGemSerializer();
                }
                virtual void destroyInstance(EarthView::World::Graphic::CModelSerializer *pSerializer) const
                {
                    if(pSerializer) EV_DELETE pSerializer;
                }
            };
        }
    }
}

#endif
