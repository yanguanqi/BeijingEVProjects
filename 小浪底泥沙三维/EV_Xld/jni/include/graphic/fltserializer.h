#ifndef _FLT_SERIALIZER_H_
#define _FLT_SERIALIZER_H_
#include "graphic/graphic_config.h"
#include "fltserializer/fltdocument.h"
#include "graphic/modelserializer.h"

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CFltSerializerFactory;
			class EV_GRAPHIC_DLL CFltSerializerListener:public EarthView::World::Graphic::CModelSerializerListener
			{
ev_private:
				CFltSerializerListener(EarthView::World::Core::CNameValuePairList *pList) {}
			public:
				CFltSerializerListener() {}
				virtual ~CFltSerializerListener() {}
				//// Called to override the loading of the given named material
				virtual void processMaterialName(EarthView::World::Graphic::CMesh *mesh, _inout EVString &name)
				{
					EV_EXCEPT(EarthView::World::Core::CException::ERR_ITEM_NOT_FOUND, "processMaterialName", "EarthView::World::Graphic::CModelSerializerListener");
				}
				//// Called to override the reference to a skeleton
				virtual void processSkeletonName(EarthView::World::Graphic::CMesh *mesh, EVString &name)
				{
					EV_EXCEPT(EarthView::World::Core::CException::ERR_ITEM_NOT_FOUND, "processSkeletonName", "EarthView::World::Graphic::CModelSerializerListener");
				}
			};
			class EV_GRAPHIC_DLL CFltSerializer: public CModelSerializer
			{
				friend class CFltSerializerFactory;
			public:
				CFltSerializer();
				~CFltSerializer();
ev_private:
				CFltSerializer(EarthView::World::Core::CNameValuePairList *pList);
			public:
				virtual EVString getFileExtension()  const
				{
					return g_FileExt;
				}
				virtual ev_void importMesh(const EVString &filePath, EarthView::World::Graphic::CMesh *pMesh,_out EarthView::World::Core::MemoryDataStreamPtr& aniStream,_out EarthView::World::Core::MemoryDataStreamPtr& skeletonStream);
				ev_void setCompositorAllSubmesh(const ev_bool b);
				ev_void setAlphaRejection(ev_byte alphaRejection);
				ev_bool flt2mesh(const EVString& fltFile, const EVString& desFolder, ev_bool toDDS);
				void useDoubleSideLight(ev_bool doubleSideLight);
				//设置模型局部矩阵
				void setLocalMatrix( EarthView::World::Spatial::Math::CMatrix4 localMatrix);
			protected:	
				EVString getFileName(const EVString& file);
				ev_void convertDocumentToMesh(const EarthView::World::Spatial::FLT::CFltDocument& doc, EarthView::World::Graphic::CMesh *pMesh, EarthView::World::Core::MemoryDataStreamPtr& aniStream);
				ev_bool mbCompositeSubMesh;
				ev_bool mbUseDoubleSideLight;
				static EVString g_FileExt;
				ev_byte mFltAlphaRejection;
				EVString mFilePath;
				EarthView::World::Spatial::Math::CMatrix4 mLocalMatrix;
			};
			class EV_GRAPHIC_DLL CFltSerializerFactory:public EarthView::World::Graphic::CModelSerializerFactory
			{

ev_private:
				CFltSerializerFactory(EarthView::World::Core::CNameValuePairList *pList) {}
			public:
				CFltSerializerFactory() {}
				virtual ~CFltSerializerFactory() {}
			public:
				virtual EVString getFileExtension()  const
				{
					return "flt";
				}
				virtual EarthView::World::Graphic::CModelSerializer *createInstance() const
				{
					return EV_NEW CFltSerializer();
				}
				virtual void destroyInstance(EarthView::World::Graphic::CFltSerializer *pSerializer) const
				{
					if(pSerializer) EV_DELETE pSerializer;
				}
			};

		}
	}
}


#endif