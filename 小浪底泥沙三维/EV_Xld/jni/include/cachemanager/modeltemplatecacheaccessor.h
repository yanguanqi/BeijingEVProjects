#ifndef EV_MODELTEMPLATE_CACHE_ACCESSOR___H
#define   EV_MODELTEMPLATE_CACHE_ACCESSOR___H

#include "cachemanager/cacheaccessor.h"
#include "cachemanager/cacheasynchronousaccessor.h"
#include "cachemanager/modeltemplatetable.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			class EV_CACHEMANAGER_DLL ModelTemplateCacheAccessor : public CacheAccessor
			{
				friend class CacheAccessorManager;
			public:
				ModelTemplateCacheAccessor();

				~ModelTemplateCacheAccessor();
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readEntity(const EVString& templateName,
					_inout EarthView::World::Spatial::CacheEntity& entity);
				ev_bool readEntity(_in const EVString& templateName, _in ev_int32 entityID,
					_out EVString& entityName,
					_out ev_int32& meshID,
					_out Real& MinX,
					_out Real& MaxX,
					_out Real& MinY,
					_out Real& MaxY,
					_out Real& MinZ,
					_out Real& MaxZ,
					_out Real& PositionX,
					_out Real& PositionY,
					_out Real& PositionZ,
					_out Real& ScaleX,
					_out Real& ScaleY,
					_out Real& ScaleZ,
					_out Real& RotationX,
					_out Real& RotationY,
					_out Real& RotationZ,
					_out Real& RotationW,
					_out ev_bool& fromTemplate,
					_out ev_int32& altitudemode,
					_out Real& altitudevalue,
					_out Real& cameralongitude,
					_out Real& cameralatitude,
					_out Real& cameraaltitude,
					_out Real& cameradeflection,
					_out Real& camerapitch);

				ev_bool updateEntityAltitud(const EVString& templateName,
					_in EarthView::World::Spatial::CacheEntity& entity);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool deleteModel(const EVString& templateName,
					_in EarthView::World::Spatial::CacheEntity& entity);


				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool deleteCache(const EVString& templateName, ev_int32 testcount);
				ev_bool deleteCache(const EVString& templateName);

				/// <summary>
				/// 清理模型缓存数据，删除缓存数据，不会删除文件
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool clearCache(const EVString& templateName);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updateEntity(const EVString& templateName,
					_in EarthView::World::Spatial::CacheEntity& entity);				

				/// <summary>
				/// 通过 instance id获取 template id
				/// </summary>
				/// <param name=""></param>
				/// <returns>小于0  表示 无数据</returns>
		
				ev_int32 readTemplateID(const EVString& templateName, ev_int32 meshInstanceID);

			ev_private:
				ev_uint32 readEntity(const EVString& templateName,
					_out vector<EarthView::World::Spatial::CacheEntity>& entityarr);

		
				/// <summary>
				/// 写模板实体
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeEntity(_in const EVString& templateName,
					_in EarthView::World::Spatial::CacheEntity& entity);

				/// <summary>
				/// 删除模板实体
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool deleteEntity(_in const EVString& templateName, _in ev_int32 entityID);

				/// <summary>
				/// 读取模型模板数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readModelTemplateData(const EVString& templateName,
					_inout CacheModelTemplate& cacheModelTemplate);

				/// <summary>
				///  读取给定模型的资源数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool readModelTemplateResource(const EVString& templateName, ev_int32 meshid, ev_int32 restype, _out ev_vector<EarthView::World::Spatial::CacheModelResource>& resources);


				/// <summary>
				/// 写入模型模板数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeModelTemplateData(_in const EVString& templateName, _in CacheModelTemplate& cacheModelTemplate);

				/// <summary>
				/// 写EV_MESH_INSTANCE
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeMeshTemplateInstance(const EVString& templateName, 
					const ev_int32 meshInstanceID,
					const ev_int32  meshTemplateID,
					const ev_int32  meshInstanceNum,
					const ev_int32  minMeshInstanceNum,
					const ev_int32  maxMeshInstanceNum,
					const Real rotx,
					const Real roty,
					const Real rotz,
					const Real rotw,
					const Real scalex,
					const Real scaley,
					const Real scalez,
					const Real posx,
					const Real posy,
					const Real posz);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool updateMeshTemplateInstance(const EVString& templateName, 
					const ev_int32 meshInstanceID,
					const ev_int32  meshTemplateID,
					const ev_int32  meshInstanceNum,
					const ev_int32  minMeshInstanceNum,
					const ev_int32  maxMeshInstanceNum,
					const Real rotx,
					const Real roty,
					const Real rotz,
					const Real rotw,
					const Real scalex,
					const Real scaley,
					const Real scalez,
					const Real posx,
					const Real posy,
					const Real posz);

				/// <summary>
				/// 写EV_MESH_TEMPLATE
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeMeshTemplate(const EVString& templateName,
					const ev_int32  meshTemplateID,
					const EVString&   meshTemplateName,
					const EVString&  meshTemplateFileName,
					const EarthView::World::Core::MemoryDataStreamPtr&  meshTemplateData,
					const ev_int32  meshTemplateRefCount);

			ev_private:
				/// <summary>
				/// 写EV_MESH_INSTANCEREF
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeMeshTemplateRef(const EVString& templateName,
					const ev_int32 meshInstanceID,
					const vector<ev_int32>& meshResID,
					const vector<ev_int32>& meshSubIndex);

			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeMeshMaterialData(const EVString& templateName,
					const ev_int32 resourceID,
					const ev_int32 type,
					const EVString& fileName,
					const EarthView::World::Core::MemoryDataStreamPtr& fileData,
					const ev_int32 refcount);


				ev_bool writeMeshMaterialData(const EVString& templateName,
					const vector<CacheMeshMaterial>& cacheMeshMaterials);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readMeshMaterialData(const EVString& templateName,
					ev_int32 resourceID,
					ev_int32& type,
					EVString& fileName,
					EarthView::World::Core::MemoryDataStreamPtr& fileData,
					ev_int32& refcount);

			protected:
			};


			// <summary>
			// 存在分散写入数据的情况，所以在写入数据之前调用，initWrite()。 在调用doWrite()开始写入数据
			// </summary>
			class EV_CACHEMANAGER_DLL ModelTemplateCacheSyncAccessor : public CacheSyncWriteAccessor
			{
			public:
				ModelTemplateCacheSyncAccessor();

				~ModelTemplateCacheSyncAccessor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 writeCacheFunc();

				/// <summary>
				/// 写模板实体
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeEntity(_in const EVString& templateName,
					_in EarthView::World::Spatial::CacheEntity& entity);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updateEntityAltitud(const EVString& templateName,
					_in EarthView::World::Spatial::CacheEntity& entity);

				/// <summary>
				/// 写入模型模板数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeModelTemplateData(_in const EVString& templateName, _in CacheModelTemplate& cacheModelTemplate);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeMeshMaterialData(const EVString& templateName,
					const vector<CacheMeshMaterial>& cacheMeshMaterials);

				ev_bool writeMeshMaterialData(const EVString& templateName,
					const ev_int32 resourceID,
					const ev_int32 type,
					const EVString& fileName,
					const EarthView::World::Core::MemoryDataStreamPtr& fileData,
					const ev_int32 refcount);

			protected:
			private:
				class Param : public CacheSyncWriteAccessor::PrivateData
				{
				public:
					ev_bool bUpdateEntityAltitud;
					EVString templateName;
					EarthView::World::Spatial::CacheEntity entity;
					CacheModelTemplate cacheModelTemplate;

					///资源
					vector<CacheMeshMaterial> cacheMeshMaterials;

					Param()
					{
						bUpdateEntityAltitud = false;
						templateName = "";
						cacheModelTemplate.meshInstanceID = -1;
					};
					~Param(){};
				};
			};
		}}}
#endif