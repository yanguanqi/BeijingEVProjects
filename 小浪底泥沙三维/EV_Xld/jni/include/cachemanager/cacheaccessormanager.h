#ifndef EARTHVIEW_WORLD_SPATIAL_CACHE_ACCESSOR_MANAGER_H
#define EARTHVIEW_WORLD_SPATIAL_CACHE_ACCESSOR_MANAGER_H
#include "core/mutex.h"
#include "cachemanager/cachemanagerglobal.h"

namespace EarthView{
	namespace World{
		namespace Spatial{

			class CacheAccessor;
			class CacheStrategy;

			// <summary>
			// 缓存访问类管理者
			// </summary>
			class EV_CACHEMANAGER_DLL CacheAccessorManager : public EarthView::World::Core::CAllocatedObject
			{
			friend class CacheManager;
			private:
				static EarthView::World::Spatial::CacheAccessorManager *ms_Singleton;
			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				CacheAccessorManager();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				virtual ~CacheAccessorManager();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				static EarthView::World::Spatial::CacheAccessorManager& getSingleton();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				static EarthView::World::Spatial::CacheAccessorManager* getSingletonPtr();

				/// <summary>
				/// 删除一个cacheaccessor实例
				/// </summary>
				/// <param name="cachename">实例名称</param>
				/// <returns></returns>
		
				ev_void removeCacheAccessor(EarthView::World::Spatial::CacheAccessor* paccessor);
				EarthView::World::Spatial::CacheAccessor* removeCacheAccessor(const EVString& cachename);

				/// <summary>
				/// 从外部添加一个cacheaccessor实例到管理器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool addCacheAccessor(EarthView::World::Spatial::CacheAccessor* paccessor);

				/// <summary>
				/// 获取一个cacheaccessor实例
				/// </summary>
				/// <param name="cachename">实例名称</param>
				/// <returns></returns>
		
				const EarthView::World::Spatial::CacheAccessor* getCacheAccessor(const EVString& cachename);
				
			protected:


				/// <summary>
				/// 初始化所有内置的cacheaccessor实例
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool initAllCacheAccessor();

				

				/// <summary>
				/// 清除缓存数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 deleteCache();

			private:
				ev_map<EVString, EarthView::World::Spatial::CacheAccessor*> mAccessors;
				EarthView::World::Core::CRecursiveMutex mMtx;
			};
		}}}
#endif
