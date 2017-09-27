#ifndef EARTHVIEW_WORLD_SPATIAL_MODEL_CACHE_ACCESSOR_H
#define EARTHVIEW_WORLD_SPATIAL_MODEL_CACHE_ACCESSOR_H
#include "core/datastream.h"
#include "cachemanager/cacheaccessor.h"
#include "cachemanager/cacheasynchronousaccessor.h"
#include "cachemanager/modeltable.h"
namespace EarthView{
	namespace World{
		namespace Spatial{

			class EV_CACHEMANAGER_DLL ModelCacheAccessor : public EarthView::World::Spatial::CacheAccessor
			{
				friend class CacheAccessorManager;
			public:
				ModelCacheAccessor();

				~ModelCacheAccessor();
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readEntity(const EVString& datasourcename, 
					const EVString& layerName,
					const EVString& nodeCode,
					ev_int32 entityID,
					_out EVString& entityName,
					_out ev_int32& meshID,
					_out Real& ENT_MINX,
					_out Real& ENT_MAXX,
					_out Real& ENT_MINY,
					_out Real& ENT_MAXY,
					_out Real& ENT_MINZ,
					_out Real& ENT_MAXZ,
					_out Real& ENT_POSX,
					_out Real& ENT_POSY,
					_out Real& ENT_POSZ,
					_out Real& ENT_SCALEX,
					_out Real& ENT_SCALEY,
					_out Real& ENT_SCALEZ,
					_out Real& ENT_ROTATIONX,
					_out Real& ENT_ROTATIONY,
					_out Real& ENT_ROTATIONZ,
					_out Real& ENT_ROTATIONW,
					_out ev_bool& ENT_FROMTEMPLATE,
					_out ev_int32& altitudemode,
					_out Real& altitudevalue,
					_out Real& cameralongitude,
					_out Real& cameralatitude,
					_out Real& cameraaltitude,
					_out Real& cameradeflection,
					_out Real& camerapitch);



				/// <summary>
				///  读取模型数据和所有的资源数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readModel(const EVString& datasourcename, const EVString& layerName, const EVString& nodeCode, _inout EarthView::World::Spatial::CacheModel& CacheModel);

				
				/// <summary>
				///  读取给定模型的材质数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool readModelResource(const EVString& datasourcename, const EVString& layerName, const EVString& nodeCode, ev_int32 meshid, ev_int32 restype, _out ev_vector<EarthView::World::Spatial::CacheModelResource>& resources);

				/// <summary>
				/// 删除模型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool deleteModel(const EVString& datasourcename, const EVString& layerName, const EVString& nodeCode, const EarthView::World::Spatial::CacheEntity& entity);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updateEntityAltitud(const EVString& datasourcename, const EVString& layerName, const EarthView::World::Spatial::CacheEntity& entity);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updateEntity(const EVString& datasourcename, const EVString& layerName, const EVString& nodeCode, const EarthView::World::Spatial::CacheEntity& entity);

				/// <summary>
				/// 删除模型缓存，会删除模型缓存文件
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool deleteCache(const EVString& datasourcename, const EVString& layerName, ev_int32 testcount);
				ev_bool deleteCache(const EVString& datasourcename, const EVString& layerName);

				/// <summary>
				/// 清理模型缓存数据，删除缓存数据，不会删除文件
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_bool clearCache(const EVString& datasourcename, const EVString& layerName);
			ev_private:
				/// <summary>
				/// 写入实体，mesh和资源数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeModelData(const EVString& datasourcename, const EVString& layerName, 
					const EVString& nodeCode, 
					const EarthView::World::Spatial::CacheEntity& entity, 
					const  CacheMesh& mesh,
					const vector<CacheMeshMaterial>& cacheMeshMaterials);

			public:
				/// <summary>
				///   读取mesh数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readMesh(const EVString& datasourcename, const EVString& layerName, const EVString& nodeCode, _inout CacheMesh& cacheMesh);

				/// <summary>
				/// 写mesh数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeMesh(const EVString& datasourcename, const EVString& layerName, const EVString& nodeCode,
					const ev_int32 meshID,
					const EVString& meshName,
					const EVString&meshFileName,
					const EarthView::World::Core::MemoryDataStreamPtr& meshData,
					const ev_int32 instanceNum,
					const Real maxDistance,
					const Real minDistance);

			ev_private:
				/// <summary>
				/// 模型和资源同时写入
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeMesh(const EVString& datasourcename, const EVString& layerName, 
					const EVString& nodeCode, 
					const  CacheMesh& mesh,
					const vector<CacheMeshMaterial>& cacheMeshMaterials);

				/// <summary>
				///  读取mesh的资源引用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 readMeshRef(const EVString& datasourcename, const EVString& layerName, const EVString& nodeCode, ev_int32 meshID, vector<ev_int32>& resourceIDs);

			public:
				/// <summary>
				/// 读取资源数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readMaterialResource(const EVString& datasourcename, const EVString& layerName, const EVString& nodeCode, _inout CacheMeshMaterial& cacheMeshMaterial);

				/// <summary>
				///写入资源数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeMaterialResource(const EVString& datasourcename, const EVString& layerName, const EVString& nodeCode,
					const ev_int32 resourceID,
					const ev_int32 type,
					const EVString& fileName,
					const EarthView::World::Core::MemoryDataStreamPtr& fileData,
					const ev_int32 refcount);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeMaterialResource(const EVString& datasourcename, const EVString& layerName, const EVString& nodeCode, const vector<CacheMeshMaterial>& cacheMeshMaterials);

			protected:
			private:
			};

			// <summary>
			// 存在分散写入数据的情况，所以在写入数据之前调用，initWrite()。 在调用doWrite()开始写入数据
			// </summary>
			class EV_CACHEMANAGER_DLL ModelCacheSyncAccessor : public CacheSyncWriteAccessor
			{
			public:
				ModelCacheSyncAccessor();

				~ModelCacheSyncAccessor();

				/// <summary>
				///   如果不成对调用，initWrite()返回的存储空间将不会删除
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_void* initWrite();
				ev_bool doWrite(ev_void* pdata);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 writeCacheFunc();

			ev_private:
				/// <summary>
				/// 写入实体，mesh和资源数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeModelData(ev_void* pdata, const EVString& datasourcename, const EVString& layerName, 
					const EVString& nodeCode, 
					const EarthView::World::Spatial::CacheEntity& entity, 
					const  CacheMesh& mesh,
					const vector<CacheMeshMaterial>& cacheMeshMaterials);

			public:
				/// <summary>
				///   写实体
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeEntity(ev_void* pdata, const EVString& datasourcename, const EVString& layerName,
					const EVString& nodeCode,
					const ev_int32 entityID,
					const EVString& entityName,
					const ev_int32 meshID,
					const Real ENT_MINX,
					const Real MaxX,
					const Real ENT_MINY,
					const Real ENT_MAXY,
					const Real ENT_MINZ,
					const Real ENT_MAXZ,
					const Real ENT_POSX,
					const Real ENT_POSY,
					const Real ENT_POSZ,
					const Real ENT_SCALEX,
					const Real ENT_SCALEY,
					const Real ENT_SCALEZ,
					const Real ENT_ROTATIONX,
					const Real ENT_ROTATIONY,
					const Real ENT_ROTATIONZ,
					const Real ENT_ROTATIONW,
					const ev_bool ENT_FROMTEMPLATE);

				/// <summary>
				/// 写mesh数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeMesh(ev_void* pdata, const EVString& datasourcename, const EVString& layerName, const EVString& nodeCode,
					const ev_int32 meshID,
					const EVString& meshName,
					const EVString&meshFileName,
					const EarthView::World::Core::MemoryDataStreamPtr& meshData,
					const ev_int32 instanceNum,
					const Real maxDistance,
					const Real minDistance);

				/// <summary>
				///写入资源数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeMaterialResource(ev_void* pdata, const EVString& datasourcename, const EVString& layerName, const EVString& nodeCode,
					const ev_int32 resourceID,
					const ev_int32 type,
					const EVString& fileName,
					const EarthView::World::Core::MemoryDataStreamPtr& fileData,
					const ev_int32 refcount);

				ev_bool writeMaterialResource(ev_void* pdata, const EVString& datasourcename, const EVString& layerName, const EVString& nodeCode, const vector<CacheMeshMaterial>& cacheMeshMaterials);

				ev_bool updateEntityAltitud(ev_void* pdata, const EVString& datasourcename, const EVString& layerName, const EarthView::World::Spatial::CacheEntity& entity);

			protected:
			private:
				class Param : public CacheSyncWriteAccessor::PrivateData
				{
				public:
					ev_bool bUpdateEntityAltitud;
					EVString datasourcename;
					EVString layerName;
					EVString nodeCode;
					EarthView::World::Spatial::CacheEntity entity; 
					CacheMesh mesh;
					vector<CacheMeshMaterial> cacheMeshMaterials;

					Param()
					{
						bUpdateEntityAltitud = false;
					};
					~Param()
					{
						//if (NULL != mesh.meshData.isNull())
						//{
						//	mesh.meshData.setNull();
						//}

						//vector<CacheMeshMaterial>::iterator ite = cacheMeshMaterials.begin();
						//vector<CacheMeshMaterial>::iterator end_ite = cacheMeshMaterials.end();
						//for (; ite != end_ite; ++ite)
						//{
						//	if (!(ite->fileData.isNull()))
						//	{
						//		ite->fileData.setNull();
						//	}
						//}
						//cacheMeshMaterials.clear();
					}
				};
			};
		}}}
#endif