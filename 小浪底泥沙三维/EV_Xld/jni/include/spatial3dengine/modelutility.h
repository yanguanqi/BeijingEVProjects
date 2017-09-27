/**
* Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
* All rights reserved.
* 
* 文件名称：modelutility.h
* 摘    要：该文件是模型通用工具接口的声明
*
* 当前版本：1.0
* 作    者：邹先涛
* 完成日期：2013年6月28日
*
* 修改历史：
* [修改序列]   [修改日期]    [修改者]	[修改内容]
*    1		  2012-10-16		邹先涛   1.0.0版本的内容声明
* 
**/

#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MODELUTILITY_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MODELUTILITY_H

#include "core/memoryallocatedobject.h"
#include "spatial3dengine/spatial3denginecomdef.h"
#include "spatial3dengine/modelbindinfo.h"
#include "spatial3ddataset/mesheffectref.h"
#include "spatialinterface/idataset.h"
#include "graphic/mesh.h"
#include "graphic/common.h"
#include "graphic/movableobject.h"
#include "core/mutex.h"

namespace EarthView{
	namespace World{
		namespace Graphic
		{
			class CEntity;
			class CSceneManager;
			class CStreamArchive;
			class CNode;			
		}
		namespace Spatial{
			namespace GeoDataset{
				class IFeatureClass;
				class IFeature;
				class IDataset;
			}
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset
			{
				class CMeshTemplateDataset;
				class CEntityDataset;
				class CModelDataSource; 
				class CWebEntityDataset;
				class CWebMeshTemplateDataset;
			}
			namespace ModelManager
			{
				class CMaterialResourceCache;
				class CSubmeshInstanceParser;

				class  EV_Spatial3DEngine_DLL CModelUtility : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CModelUtility(_in EarthView::World::Core::CNameValuePairList *pList){}
				public:
					CModelUtility(){}
					virtual ~CModelUtility(){}
				public:

					/*********************************************模型数据流相关******************************************/
					/// <summary>
					/// 读模型数据流
					/// </summary>
					/// <param name="ds">抽象数据集</param>
					/// <param name="id">模型ID</param>
					/// <returns>返回的模型数据流，里边的feature需要外部释放</returns>
					static _extfree  ev_bool readModelDataStream(EarthView::World::Spatial::GeoDataset::IDataset* ds
																,ev_uint32 id
																,_out ModelDataStream& modelDataStream);

					/// <summary>
					/// 读模型数据流
					/// </summary>
					/// <param name="ds">图层数据集</param>
					/// <param name="id">模型ID</param>
					/// <returns>返回的模型数据流，里边的feature需要外部释放</returns>
					static _extfree ev_bool readModelDataStream_db(EarthView::World::Spatial3D::Dataset::CEntityDataset* ds
																	,ev_uint32 id
																	,_out ModelDataStream& modelDataStream);

					/// <summary>
					/// 读模型数据流
					/// </summary>
					/// <param name="ds">模板库数据集</param>
					/// <param name="id">模型ID</param>
					/// <returns>返回的模型数据流，里边的feature需要外部释放</returns>
					static _extfree ev_bool readModelDataStream_db(EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ds
																	,ev_uint32 id
																	,_out ModelDataStream& modelDataStream);

					/// <summary>
					/// 读模型数据流
					/// </summary>
					/// <param name="ds">图层数据集</param>
					/// <param name="id">模型ID</param>
					/// <returns>返回的模型数据流，里边的feature需要外部释放</returns>
					static _extfree ev_bool readModelDataStream_web(EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ds
																	,ev_uint32 id
																	,_out ModelDataStream& modelDataStream);

					/// <summary>
					/// 读模型数据流
					/// </summary>
					/// <param name="ds">模板库数据集</param>
					/// <param name="id">模型ID</param>
					/// <returns>返回的模型数据流，里边的feature需要外部释放</returns>
					static _extfree ev_bool readModelDataStream_web(EarthView::World::Spatial3D::Dataset::CWebMeshTemplateDataset* ds
						,ev_uint32 id
						,_out ModelDataStream& modelDataStream);

					/// <summary>
					/// 读模型ANI流
					/// </summary>
					/// <param name="ds">抽象数据集</param>
					/// <param name="meshID">模型mesh的ID</param>
					/// <returns>返回ani数据流</returns>
					static EarthView::World::Core::MemoryDataStreamPtr readAniDataStream(EarthView::World::Spatial::GeoDataset::IDataset* ds
																						 ,ev_uint32 meshID);

					/// <summary>
					/// 读模型ANI流
					/// </summary>
					/// <param name="aniFile">ani文件</param>
					/// <returns>返回ani数据流</returns>
					static EarthView::World::Core::MemoryDataStreamPtr readAniDataStream(const EVString& aniFile);

					/// <summary>
					/// 读模型ANI流
					/// </summary>
					/// <param name="ds">图层数据集</param>
					/// <param name="meshID">模型mesh的ID</param>
					/// <returns>返回ani数据流</returns>
					static EarthView::World::Core::MemoryDataStreamPtr readAniDataStream_db(EarthView::World::Spatial3D::Dataset::CEntityDataset* ds
																							 ,ev_uint32 meshID);

					/// <summary>
					/// 读网络模型ANI流
					/// </summary>
					/// <param name="ds">图层数据集</param>
					/// <param name="meshID">模型mesh的ID</param>
					/// <returns>返回ani数据流</returns>
					static EarthView::World::Core::MemoryDataStreamPtr readAniDataStream_web(EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ds
						,ev_uint32 meshID);

					/// <summary>
					/// 读模型ANI流
					/// </summary>
					/// <param name="ds">模板库数据集</param>
					/// <param name="meshID">模型mesh的ID</param>
					/// <returns>返回ani数据流</returns>
					static EarthView::World::Core::MemoryDataStreamPtr readAniDataStream_db(EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ds
						,ev_uint32 meshID);
	

					/// <summary>
					/// 读取图层meshFeature
					/// </summary>
					/// <param name="ds">图层数据集</param>
					/// <param name="meshID">模型的ID</param>
					/// <returns>返回feature，NULL失败</returns>
					static _extfree EarthView::World::Spatial::GeoDataset::IFeature* readMeshFeature(EarthView::World::Spatial3D::Dataset::CEntityDataset* ds
																									,ev_uint32 id);

					/// <summary>
					/// 读取instance图层模型在模型库中模板ID
					/// </summary>
					/// <param name="ds">图层数据集</param>
					/// <param name="instID">模型在模型库的mesh的instID</param>
					/// <returns>返回feature，NULL失败</returns>
					static ev_uint32 getMeshTmplID(EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ds
													, ev_uint32 instID);

					/*********************************************模型资源相关******************************************/

					/// <summary>
					/// 加载模型资源对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="id">模型id</param>
					/// <param name="modelDataStream">模型数据流</param>
					/// <param name="groupname">模型资源组名</param>
					/// <param name="bOnlyReadOrigTexture">true加载原始纹理，false加载小纹理（false一般图层使用）</param>
					/// <param name="modelResource">模型资源</param>
					/// <returns>返回true成功，false失败</returns>
					static ev_bool loadModelResource(EarthView::World::Graphic::CSceneManager* pSceneManager
													, ev_uint32 id
													, const ModelDataStream& modelDataStream
													, const EVString& groupname
													, ev_bool bLoadOrigTexture
													, ev_bool bLoadFromLayer
													,_out ModelResource& modelResource
													);
					/// <summary>
					/// 加载模型资源对象（图层使用）
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="id">模型id</param>
					/// <param name="modelDataStream">模型数据流</param>
					/// <param name="groupname">模型资源组名</param>
					/// <param name="bOnlyReadOrigTexture">true加载原始纹理，false加载小纹理（false一般图层使用）</param>
					/// <param name="pMaterialCache">内存缓存</param>
					/// <param name="modelResource">模型资源</param>
					/// <returns>返回true成功，false失败</returns>
					static ev_bool loadModelResource(EarthView::World::Graphic::CSceneManager* pSceneManager
													, ev_uint32 id
													, const ModelDataStream& modelDataStream
													, const EVString& groupname
													, ev_bool bLoadOrigTexture
													, EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache* pMaterialCache
													, ev_bool bLoadFromLayer
													,_out ModelResource& modelResource
													);

					/// <summary>
					/// 加载instanced模型资源对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="id">模型id</param>
					/// <param name="modelDataStream">模型数据流</param>
					/// <param name="groupname">模型资源组名</param>
					/// <param name="bOnlyReadOrigTexture">true加载原始纹理，false加载小纹理（false一般图层使用）</param>
					/// <param name="modelResource">模型资源</param>
					/// <returns>返回true成功，false失败</returns>
					static ev_bool loadInstanceResource(EarthView::World::Graphic::CSceneManager* pSceneManager
														, ev_uint32 id
														, const ModelDataStream& modelDataStream
														, const EVString& groupname
														, ev_bool bLoadOrigTexture
														, ev_bool bLoadFromLayer
														,_out ModelResource& modelResource
														);

					/// <summary>
					/// 加载instanced模型资源对象（图层使用）
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="id">模型id</param>
					/// <param name="modelDataStream">模型数据流</param>
					/// <param name="groupname">模型资源组名</param>
					/// <param name="bOnlyReadOrigTexture">true加载原始纹理，false加载小纹理（false一般图层使用）</param>
					/// <param name="pMaterialCache">内存缓存</param>
					/// <param name="modelResource">模型资源</param>
					/// <returns>返回true成功，false失败</returns>
					static ev_bool loadInstanceResource(EarthView::World::Graphic::CSceneManager* pSceneManager
													, ev_uint32 id
													, const ModelDataStream& modelDataStream
													, const EVString& groupname
													, ev_bool bLoadOrigTexture
													, EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache* pMaterialCache
													, ev_bool bLoadFromLayer
													,_out ModelResource& modelResource
													);


					/// <summary>
					/// 加载模型资源对象（文件）
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="modelfile">模型文件</param>
					/// <param name="bFileDirAsGroup">true, 根据文件所在目录创建工作组。false，使用默认的General工作组</param>
					/// <param name="modelResource">模型资源</param>
					/// <param name="modelAniDataStream">模型ANI流</param>
					/// <returns>返回true成功，false失败</returns>
					static ev_bool loadModelResource(EarthView::World::Graphic::CSceneManager* pSceneManager
													,const EVString& modelfile
													,ev_bool bFileDirAsGroup
													,_out ModelResource& modelResource
													,_out EarthView::World::Core::MemoryDataStreamPtr& modelAniDataStream
													);

					/// <summary>
					/// 加载模型资源对象（文件）
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="modelfile">模型文件</param>
					/// <param name="bFileDirAsGroup">true, 根据文件所在目录创建工作组。false，使用默认的General工作组</param>
					/// <param name="modelResource">模型资源</param>
					/// <param name="modelAniDataStream">模型ANI流</param>
					/// <returns>返回true成功，false失败</returns>
					static ev_bool loadInstanceResource(EarthView::World::Graphic::CSceneManager* pSceneManager
														,const EVString& modelfile
														,ev_bool bFileDirAsGroup
														,_out ModelResource& modelResource
														,_out EarthView::World::Core::MemoryDataStreamPtr& modelAniDataStream
														);

					/// <summary>
					/// 卸载模型资源对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="id">模型id</param>
					/// <param name="groupname">模型资源组名</param>
					/// <param name="modelResource">模型资源</param>
					/// <returns>返回true成功，false失败</returns>
					static ev_bool unloadModelResource(EarthView::World::Graphic::CSceneManager* pSceneManager
														,ev_uint32 id
														,const EVString& groupname
														,ModelResource& modelResource
														);

					/// <summary>
					/// 卸载模型资源对象（文件）
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="groupname">模型资源组名</param>
					/// <param name="modelResource">模型资源</param>
					/// <returns>返回true成功，false失败</returns>
					static ev_bool unloadModelResource(EarthView::World::Graphic::CSceneManager* pSceneManager
														,const EVString& modelfile
														,ev_bool bFileDirAsGroup
														,ModelResource& modelResource
														);

					/// <summary>
					/// 加载模型资源对象 （图层使用）
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="id">模型id</param>
					/// <param name="groupname">模型资源组名</param>
					/// <param name="modelResource">模型mesh的ID</param>
					/// <param name="pMaterialCache">内存缓存</param>
					/// <returns>返回true成功，false失败</returns>
					static ev_bool unloadModelResource(EarthView::World::Graphic::CSceneManager* pSceneManager
														,ev_uint32 id
														,const EVString& groupname
														,ModelResource& modelResource
														,EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache* pMaterialCache
														);

					/// <summary>
					/// 加载模型资源对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="entName">实体名</param>
					/// <param name="meshFilename">模型文件名</param>
					/// <param name="groupName">模型资源组名</param>
					/// <returns>返回实体指针，NULL失败</returns>
					static EarthView::World::Graphic::CEntity* createEntity(EarthView::World::Graphic::CSceneManager* pSceneManager
																			, const EVString& entName
																			, const EVString& meshFilename
																			, const EVString& groupName
																			);

					/// <summary>
					/// 加载模型资源对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="entName">实体名</param>
					/// <param name="meshFilename">模型文件名</param>
					/// <param name="groupName">模型资源组名</param>
					/// <param name="subEntityIndexs">实体部分组件索引集</param>
					/// <returns>返回实体指针，NULL失败</returns>
					static EarthView::World::Graphic::CEntity* createEntity(EarthView::World::Graphic::CSceneManager* pSceneManager
																			, const EVString& entName
																			, const EVString& meshFilename
																			, const EVString& groupName
																			, const EarthView::World::Core::IntVector& subEntityIndexs
																			);

					/// <summary>
					/// 销毁实体对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="pEntity">实体指针</param>
					/// <returns>返回true成功，false失败</returns>
					static ev_bool destroyEntity(EarthView::World::Graphic::CSceneManager* pSceneManager
												,EarthView::World::Graphic::CEntity* pEntity
												);

					/// <summary>
					/// 创建instanceManager
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="customName">instanceManager名称</param>
					/// <param name="meshPtr">mesh指针</param>
					/// <param name="numInstancesPerBatch">每批次渲染个数</param>
					/// <param name="groupname">模型资源组名</param>
					/// <param name="aysncUpdateBuffer">异步刷新方式创建</param>
					/// <param name="strategyForCustomer">用户工厂创建方式/图层创建方式，计算numinstanceperbatch</param>
					/// <param name="instMngerVec">传出创建好的instanceManager容器</param>
					/// <returns>返回true成功，false失败</returns>
					static ev_bool createInstanceManager(EarthView::World::Graphic::CSceneManager* pSceneManager
												, const EVString& customName
												, const EarthView::World::Graphic::CMeshPtr& meshPtr
												, ev_uint32 numInstancesPerBatch
												, const EVString& groupname
												, ev_bool aysncUpdateBuffer
												, ev_bool strategyForCustomer
												, _out EarthView::World::Spatial3D::InstanceManagerVector& instMngerVec);

					/// <summary>
					/// 销毁instanceManager
					/// </summary>
					/// <param name="instMngerVec">instanceManager容器</param>
					/// <returns>返回true成功，false失败</returns>
					static ev_bool destroyInstanceManager(const InstanceManagerVector& instMngerVec);


					/// <summary>
					/// 创建instanceEntity
					/// </summary>
					/// <param name="meshPtr">mesh指针</param>
					/// <param name="instMngerVec">instanceManager容器</param>
					/// <param name="instEntVec">instanceEntity容器</param>
					/// <returns>返回true成功，false失败</returns>
					static ev_bool createInstanceEntity(EarthView::World::Graphic::CMeshPtr meshPtr
														,const EarthView::World::Spatial3D::InstanceManagerVector& instMngerVec
														,_out EarthView::World::Spatial3D::InstancedEntityVector& instEntVec);

					/// <summary>
					/// 创建instanceEntity
					/// </summary>
					/// <param name="meshPtr">mesh指针</param>
					/// <param name="instMngerVec">instanceManager容器</param>
					/// <param name="subEntityIndexs">instanceManager容器</param>
					/// <param name="instEntVec">instanceEntity容器</param>
					/// <returns>返回true成功，false失败</returns>
					static ev_bool createInstanceEntity(EarthView::World::Graphic::CMeshPtr meshPtr
														,const EarthView::World::Spatial3D::InstanceManagerVector& instMngerVec
														,const EarthView::World::Core::IntVector& subEntityIndexs
														,_out EarthView::World::Spatial3D::InstancedEntityVector& instEntVec);

					/// <summary>
					/// 销毁instanceEntity
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="instEntVec">instanceEntity容器</param>
					/// <returns>返回true成功，false失败</returns>
					static ev_bool destroyInstanceEntity(EarthView::World::Graphic::CSceneManager* pSceneManager
														,const EarthView::World::Spatial3D::InstancedEntityVector& instEntVec);


					/// <summary>
					/// 销毁节点对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="n">场景节点对象</param>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					static ev_bool destroySceneNode(EarthView::World::Graphic::CSceneManager* pSceneManager
													,EarthView::World::Graphic::CSceneNode* n);


					/// <summary>
					/// 加载小纹理影像对象 (图层使用)
					/// </summary>
					/// <param name="thumbTextures">小纹理feature集</param>
					/// <param name="imgItems">小纹理的影像流容器</param>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					static ev_bool switchThumbTexture(const EarthView::World::Spatial3D::Dataset::FeatureVector& thumbTextures
													, const EVString& groupname
													, ev_bool bLoadFromLayer
													, _out EarthView::World::Spatial3D::TexturePtrVector& thumbTexturePtrVector);

					/// <summary>
					/// 加载小纹理对象 (图层使用)
					/// </summary>
					/// <param name="thumbTextures">小纹理feature集</param>
					/// <param name="groupname">组名</param>
					/// <param name="imgItems">小纹理的影像流容器</param>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					static ev_bool attachThumbTexture(EarthView::World::Spatial3D::MaterialPtrVector& materialObjs
													,EarthView::World::Spatial3D::TexturePtrVector& textureObjs
													,EarthView::World::Spatial3D::TexturePtrVector& thumbTexturePtrVector
													,const EVString& groupname);

					/// <summary>
					/// 加载大纹理影像对象 (图层使用)
					/// </summary>
					/// <param name="ds">图层数据集</param>
					/// <param name="type">模型资源类别</param>
					/// <param name="meshID">meshID</param>
					/// <param name="origTextures">大纹理数据流</param>
					/// <param name="imgItems">大纹理的影像流容器</param>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					static ev_bool switchOrigTexture(EarthView::World::Spatial::GeoDataset::IDataset* ds
													, ModelType type
													, ev_uint32 meshID
													, const EarthView::World::Spatial3D::Dataset::FeatureVector& origTextures
													, const EVString& groupname
													, ev_bool bLoadFromLayer
													, _out EarthView::World::Spatial3D::TexturePtrVector& origTexturePtrVector);

					/// <summary>
					/// 加载大纹理对象 (图层使用)
					/// </summary>
					/// <param name="origTextures">大纹理数据流</param>
					/// <param name="thumbTextures">小纹理数据流</param>
					/// <param name="groupname">模型资源组名</param>
					/// <param name="imgItems">大纹理的影像流容器</param>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					static ev_bool attachOrigTexture(EarthView::World::Spatial3D::MaterialPtrVector& materialObjs
													,EarthView::World::Spatial3D::TexturePtrVector& textureObjs
													,EarthView::World::Spatial3D::TexturePtrVector& origTexturePtrVector
													,const EVString& groupname);

				private:
					class CModelObjectListener : public EarthView::World::Graphic::CMovableObject::CLightQueriedListener
					{
					public:
						CModelObjectListener();

					public:
						void objectQueryLightsFinished(const EarthView::World::Graphic::CMovableObject *pMovableObject,const EarthView::World::Graphic::LightList * lightList);
						void sceneShadowEnabled(const EarthView::World::Graphic::CMovableObject *pMovableObject,const EarthView::World::Graphic::CSceneManager* pSceneManager,ev_bool enabled);
						
					private:						
						ev_int16 mLightCount;
					};

					friend class CModelObjectListener;

					static ev_void listen(EarthView::World::Graphic::CEntity* pEntity);
					static ev_void listen(EarthView::World::Graphic::CInstanceBatch* pBatch);
					static ev_void unlisten(EarthView::World::Graphic::CEntity* pEntity);
					static ev_void unlisten(EarthView::World::Graphic::CInstanceBatch* pBatch);

					static ev_void switchFragmentProgram(EarthView::World::Graphic::CMaterialPtr& material,ev_uint16 lightCount);
					static ev_void switchVertexProgram(EarthView::World::Graphic::CMaterialPtr& material,ev_bool shadow);

					typedef map<EarthView::World::Graphic::CMovableObject*,CModelObjectListener*> ObjectListeners;
					static ObjectListeners gObjListeners;
					static EarthView::World::Core::CRecursiveMutex gMutex;
				};


			}//end namespace
		}
	}
}
#endif