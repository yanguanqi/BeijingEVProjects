#ifndef __MeshSerializer_H__
#define __MeshSerializer_H__
#include "graphic/graphic_config.h"
#include "modelserializer.h"
#include "core/graphic_exception.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CMesh;
            class CMeshSerializerImpl;
            class CMeshSerializerFactory;
            //// Mesh compatibility versions
            enum MeshVersion
            {
                //// Latest version available
                MESH_VERSION_LATEST,
                ////  version v1.8+
                MESH_VERSION_1_8,
                ////  version v1.7+
                MESH_VERSION_1_7,
                ////  version v1.4+
                MESH_VERSION_1_4,
                ////  version v1.0+
                MESH_VERSION_1_0,
                //// Legacy versions, DO NOT USE for writing
                MESH_VERSION_LEGACY
            };
            class EV_GRAPHIC_DLL CMeshSerializer : public EarthView::World::Graphic::CModelSerializer
            {
                friend class CMeshSerializerFactory;
            protected:
                static EVString g_FileExt;
            ev_private:
                CMeshSerializer(EarthView::World::Core::CNameValuePairList *pList);
            public:
                CMeshSerializer();

                virtual ~CMeshSerializer();

                /** Exports a mesh to the file specified.
                @remarks
                    This method takes an externally created EarthView::World::Graphic::CMesh object, and exports both it
                    and optionally the Materials it uses to a .mesh file.
                @param pMesh Pointer to the EarthView::World::Graphic::CMesh to export
                @param filename The destination filename
                @param endianMode The endian mode of the written file
                */
                void exportMesh(const EarthView::World::Graphic::CMesh *pMesh, const EVString &filename, EarthView::World::Graphic::CSerializer::Endian endianMode );
                void exportMesh(const EarthView::World::Graphic::CMesh *pMesh, const EVString &filename);

                void exportMesh(const EarthView::World::Graphic::CMesh *pMesh, const EVString &filename,
                                EarthView::World::Graphic::MeshVersion version,
                                EarthView::World::Graphic::CSerializer::Endian endianMode);
                void exportMesh(const EarthView::World::Graphic::CMesh *pMesh, const EVString &filename,
                                EarthView::World::Graphic::MeshVersion version);

                void exportMesh(const EarthView::World::Graphic::CMesh *pMesh, EarthView::World::Core::DataStreamPtr stream,
                                EarthView::World::Graphic::CSerializer::Endian endianMode );
                void exportMesh(const EarthView::World::Graphic::CMesh *pMesh, EarthView::World::Core::DataStreamPtr stream);

                void exportMesh(const EarthView::World::Graphic::CMesh *pMesh, EarthView::World::Core::DataStreamPtr stream,
                                EarthView::World::Graphic::MeshVersion version,
                                EarthView::World::Graphic::CSerializer::Endian endianMode);
                void exportMesh(const EarthView::World::Graphic::CMesh *pMesh, EarthView::World::Core::DataStreamPtr stream,
                                EarthView::World::Graphic::MeshVersion version);
                /** Imports EarthView::World::Graphic::CMesh and (optionally) CMaterial data from a .mesh file CDataStream.
                @remarks
                    This method imports data from a CDataStream opened from a .mesh file and places it's
                    contents into the EarthView::World::Graphic::CMesh object which is passed in.
                @param stream The CDataStream holding the .mesh data. Must be initialised (pos at the start of the buffer).
                @param pDest Pointer to the EarthView::World::Graphic::CMesh object which will receive the data. Should be blank already.
                */
                virtual void importMesh(EarthView::World::Core::DataStreamPtr &stream, EarthView::World::Graphic::CMesh *pMesh);

                EVString getFileExtension()  const
                {
                    return g_FileExt;
                }
            protected:
                class MeshVersionData : public EarthView::World::Core::CAllocatedObject
                {
                public:
                    EarthView::World::Graphic::MeshVersion version;
                    EVString versionString;
                    CMeshSerializerImpl *impl;
                    MeshVersionData(MeshVersion _ver, const EVString &_string, CMeshSerializerImpl *_impl)
                        : version(_ver), versionString(_string), impl(_impl) {}
                    ~MeshVersionData();
                };
                typedef vector<MeshVersionData *> MeshVersionDataList;
                MeshVersionDataList mVersionData;


            };
            class EV_GRAPHIC_DLL CMeshSerializerFactory : public EarthView::World::Graphic::CModelSerializerFactory
            {
            ev_private:
                CMeshSerializerFactory(EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                CMeshSerializerFactory() {}
            public:
                virtual EVString getFileExtension()  const
                {
                    return CMeshSerializer::g_FileExt;
                }
                virtual EarthView::World::Graphic::CModelSerializer *createInstance() const
                {
                    return EV_NEW CMeshSerializer();
                }
                virtual void destroyInstance(EarthView::World::Graphic::CModelSerializer *pSerializer) const
                {
                    if(pSerializer) EV_DELETE pSerializer;
                }
            };

            /** @} */
            /** @} */
        }
    }
}


#endif

