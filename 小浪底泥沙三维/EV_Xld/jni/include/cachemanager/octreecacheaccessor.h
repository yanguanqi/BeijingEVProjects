#ifndef EARTHVIEW_WORLD_SPATIAL_OCTREE_CACHE_ACCESSOR_H
#define EARTHVIEW_WORLD_SPATIAL_OCTREE_CACHE_ACCESSOR_H
#include "core/datastream.h"
#include "cachemanager/cacheaccessor.h"
#include "cachemanager/cacheasynchronousaccessor.h"
#include "cachemanager/octreetable.h"

namespace EarthView{
	namespace World{
		namespace Spatial{

			class EV_CACHEMANAGER_DLL OctreeCacheAccessor : public CacheAccessor
			{
				friend class CacheAccessorManager;
			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				OctreeCacheAccessor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~OctreeCacheAccessor();
			
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 getVersion(const EVString& layerName);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readNode(const EVString& layerName, 
					const EVString& nodeCode,
					_out EarthView::World::Core::MemoryDataStreamPtr& EVIDs,
					_out Real& minX,
					_out Real& minY,
					_out Real& minZ,
					_out Real& maxX,
					_out Real& maxY,
					_out Real& maxZ,
					_out ev_int32& version);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeNode(const EVString& layerName, 
					const EVString& nodeCode,
					const EarthView::World::Core::MemoryDataStreamPtr& EVIDs,
					const Real minX,
					const Real minY,
					const Real minZ,
					const Real maxX,
					const Real maxY,
					const Real maxZ,
					const ev_int32 version);


				/// <summary>
				///   读取terraininfo
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EVString readTerrainInfo(const EVString& layerName);


				/// <summary>
				///   写入terraininfo
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool writeTerrainInfo(const EVString& layerName, const EVString& terrainInfo);


				/// <summary>
				///   更新terraininfo
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool updateTerrainInfo(const EVString& layerName, const EVString& terrainInfo);

				/// <summary>
				/// 清除指定图层的缓存数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool clearCache(const EVString& layerName)	;


ev_private:
				/// <summary>
				/// 读取八叉树 安装节点长度
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 readNodeByCodelength(const EVString& layerName,vector<CacheOctreeNode>& nodes);

			protected:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				OctreeCacheAccessor(ev_int32)
				{

				}

			private:
			};



			class EV_CACHEMANAGER_DLL OctreeCacheSyncAccessor : public CacheSyncWriteAccessor
			{
			public:
				OctreeCacheSyncAccessor();

				~OctreeCacheSyncAccessor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 writeCacheFunc();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeNode(const EVString& layerName, 
					const EVString& nodeCode,
					const EarthView::World::Core::MemoryDataStreamPtr& EVIDs,
					const Real minX,
					const Real minY,
					const Real minZ,
					const Real maxX,
					const Real maxY,
					const Real maxZ,
					const ev_int32 version);

			protected:
			private:
				class Param : public CacheSyncWriteAccessor::PrivateData
				{
				public:
					EVString layerName; 
					EVString nodeCode;
					EarthView::World::Core::MemoryDataStreamPtr EVIDs;
					Real minX;
					Real minY;
					Real minZ;
					Real maxX;
					Real maxY;
					Real maxZ;
					ev_int32 version;

					Param(const EVString& layerName, 
						const EVString& nodeCode,
						const EarthView::World::Core::MemoryDataStreamPtr& EVIDs,
						const Real minX,
						const Real minY,
						const Real minZ,
						const Real maxX,
						const Real maxY,
						const Real maxZ,
						const ev_int32 version)
						: layerName(layerName), 
						nodeCode(nodeCode),
						EVIDs(EVIDs),
						minX(minX),
						minY(minY),
						minZ(minZ),
						maxX(maxX),
						maxY(maxY),
						maxZ(maxZ),
						version(version)
					{

					}
					Param(){};
					~Param()
					{
						//if (!EVIDs.isNull())
						//{
						//	EVIDs.setNull();
						//}
					}
				};
			};
		}}}
#endif