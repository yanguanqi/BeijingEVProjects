#ifndef EARTHVIEW_WORLD_SPATIAL_CACHE_ACCESSOR_H
#define EARTHVIEW_WORLD_SPATIAL_CACHE_ACCESSOR_H
#include "core/mutex.h"
#include "core/readwritelock.h"
#include "cachemanager/cachetable.h"
#include "cachemanager/cacheinfo.h"
#include "cachemanager/cachemanagerglobal.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			class CacheSyncWriteAccessor;
			class CacheStrategy;

			class EV_CACHEMANAGER_DLL CacheAccessor : public EarthView::World::Core::CAllocatedObject
			{
			friend class CacheAccessorManager;
			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				CacheAccessor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				virtual ~CacheAccessor();
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_void setCacheAccessorName(EVString& cahceAccessorName);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				const EVString& getCacheAccessorName() const;

				/// 获取异步缓存写访问对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>	
				CacheSyncWriteAccessor* getSyncAccessor() const;

				/// <summary>
				/// 获取缓存信息，用于缓存的自动更新
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>	
				ev_bool getCacheInfo(EVString& cacheRootDir, EVString& lastDownloadTime) const;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void getCacheDataWriteInfo(ev_uint32& waitWriteDataQueueSize, ev_uint32& waitWriteDataCount, ev_uint32& writedDataCount, ev_uint32& chuckedDataCount) const;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void getCacheDataReadInfo(ev_uint32& allReadCount, ev_uint32& successCount) const;
			protected:

				/// <summary>
				///清除缓存数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				virtual ev_int32 _deleteCache(EVString& cacheRootDir);
				virtual ev_int32 _deleteCache(EVString& cacheRootDir, ev_int32 testcount);
			
			protected:
				///缓存访问者对象名称
				///子类构造是请赋值
				EVString mCacheAccessorName;

				///异步写缓存数据对象
				EarthView::World::Spatial::CacheSyncWriteAccessor* mpSyncAccessor;

				/// 
				EarthView::World::Spatial::CacheTable* mpCacheTable;
				/// 
			};

		}}}
#endif