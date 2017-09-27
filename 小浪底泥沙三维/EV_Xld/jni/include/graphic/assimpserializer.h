#ifndef __ASSIMPLSERIALIZER_H__  
#define __ASSIMPLSERIALIZER_H__
#include "graphic/graphic_config.h"
#include "graphic/modelserializer.h"
#include "core/graphic_exception.h"
#include "core/string_array.h"
#include "graphic/renderwindow.h"

#include <core/datastream.h>
#include "tileutility/meshstream.h"

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
			class CAssimpSerializerFactory;

			class EV_GRAPHIC_DLL CAssimpSerializerListener:public EarthView::World::Graphic::CModelSerializerListener
			{
ev_private:
				CAssimpSerializerListener(EarthView::World::Core::CNameValuePairList *pList) {}
			public:
				CAssimpSerializerListener() {}
				virtual ~CAssimpSerializerListener() {}
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

			class EV_GRAPHIC_DLL CAssimpToMeshListener : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				CAssimpToMeshListener(EarthView::World::Core::CNameValuePairList *pList){}
			public:
				CAssimpToMeshListener(){}
			public:
				virtual void beforeWriteToFile(const EarthView::World::Graphic::CMeshPtr& meshPtr){}

				virtual void beforeWriteTo7Z(EarthView::World::Spatial::MeshStream& m7zStream){}
			};

			class EV_GRAPHIC_DLL CAssimpSerializer:public EarthView::World::Graphic::CModelSerializer
			{
				friend class CAssimpSerializerFactory;
			public:
				CAssimpSerializer();
				//坐标系
ev_private:
				CAssimpSerializer(EarthView::World::Core::CNameValuePairList *pList);
			protected:
				static EVString g_FileExt;
			public:
				virtual ~CAssimpSerializer(void);
				virtual EVString getFileExtension()  const
				{
					return g_FileExt;
				}
				void useDoubleSideLight(ev_bool doubleSideLight);
				void setIsLeftHand(ev_bool isLeftHand);
				//virtual void importMesh(EarthView::World::Core::DataStreamPtr &stream, EarthView::World::Graphic::CMesh *pMesh,EarthView::World::Core::NameValuePairList& miscParams);
				virtual void importMesh(_in const EVString &filePath, _inout EarthView::World::Graphic::CMesh *pMesh,_out EarthView::World::Core::MemoryDataStreamPtr& aniStream,_out EarthView::World::Core::MemoryDataStreamPtr& skeletonStream);
				//// Sets the listener for this serializer
				//void setListener(EarthView::World::Graphic::CAssimpSerializer *ref_listener);
				//// Returns the current listener
				//EarthView::World::Graphic::CAssimpSerializer *getListener();
				void setAlphaRejection(ev_byte alphaRejection);
				void setCompositorAllSubmesh(const ev_bool b);
				//是否导出法线
				void setExportNormal(ev_bool exportNormal);
				//是否优化减少重复顶点
				void setOptimizeVertex(ev_bool optimizeVertex);
				//设置模型局部矩阵
				void setLocalMatrix( EarthView::World::Spatial::Math::CMatrix4 localMatrix);
				//protected:
				//EarthView::World::Graphic::CAssimpSerializer *mListener;

				ev_bool assimp2mesh(_in const EVString& daeFile,_in  const EVString& desFolder, _in ev_bool toDDS);

				EarthView::World::Graphic::CMeshPtr assimp2mesh2(_in const EVString& daeFile,_in  const EVString& desFolder, _in ev_bool toDDS, CAssimpToMeshListener* listener);

				EarthView::World::Graphic::CMeshPtr assimp2mesh2_no_initresource(_in const EVString& daeFile,_in  const EVString& desFolder, _in ev_bool toDDS, CAssimpToMeshListener* listener, const EVString& resourceGroup);

				EarthView::World::Graphic::CMeshPtr assimp2mesh2_7z_no_initresource(_in const EVString& daeFile,_in  const EVString& desFolder, _in ev_bool toDDS, CAssimpToMeshListener* listener, const EVString& resourceGroup);

				ev_void getSourceTextureNames(const EVString& daeFile, EarthView::World::Core::CStringArray& textures);
				//导出mesh
				ev_void exportMesh(_in EVString meshFilePath,_in const EVString& exportFilePath);
				//
				ev_void exportMesh(_in EarthView::World::Graphic::CMesh *pMesh,_in EarthView::World::Core::DataStreamPtr aniDataPtr,_in const EVString& exportFilePath,_in const ev_bool& exportFromLocal);
				//
				ev_bool isValidExportFormat(_in EarthView::World::Graphic::CMesh *pMesh,_in EarthView::World::Core::DataStreamPtr aniDataPtr,_in const EVString& exportFilePath,_inout ev_bool& isValidFormat,_in const ev_bool& exportFromLocal);
				//
				ev_bool isValidExportFormat(_in EVString meshFilePath,_in const EVString& exportFilePath,_inout ev_bool& isValidFormat);
			private:
				ev_bool mbIsLeftHand;
				ev_bool mbCompositorAllSubmesh;
				ev_bool mbUseDoubleSideLight;
				ev_bool mbExportNormal;
				ev_bool mOptimizeVertex;
				ev_byte mAlphaRejection;
				EarthView::World::Spatial::Math::CMatrix4 mLocalMatrix;
				/*ev_byte m_alphaRejection;
				EVString m_filePath;*/
				/*void convertAssimpToCMesh(aiScene* aiscene,CMesh *pMesh);*/
			};
			class EV_GRAPHIC_DLL CAssimpSerializerFactory:public EarthView::World::Graphic::CModelSerializerFactory
			{

ev_private:
				CAssimpSerializerFactory(EarthView::World::Core::CNameValuePairList *pList) {}
			public:
				CAssimpSerializerFactory() {}
				virtual ~CAssimpSerializerFactory() {}
			public:
				virtual EVString getFileExtension()  const
				{
					return CAssimpSerializer::g_FileExt;
				}
				virtual EarthView::World::Graphic::CModelSerializer *createInstance() const
				{
					return EV_NEW CAssimpSerializer();
				}
				virtual void destroyInstance(EarthView::World::Graphic::CAssimpSerializer *pSerializer) const
				{
					if(pSerializer) EV_DELETE pSerializer;
				}
			};
		}
	}
}
#endif
