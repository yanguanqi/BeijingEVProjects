#ifndef EARTHVIEW_WORLD_SPATIAL_CACHE_ASYNCHRONOUS_ACCESSOR_H
#define EARTHVIEW_WORLD_SPATIAL_CACHE_ASYNCHRONOUS_ACCESSOR_H
#include "core/name_value_pair.h"
#include "core/memoryallocatedobject.h"
#include "core/sharedptr.h"
#include "core/mutex.h"
#include "core/ev_semaphore.h"
#include "cachemanager/cachemanagerglobal.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			class  EV_CACHEMANAGER_DLL CacheSyncWriteAccessor : public EarthView::World::Core::CAllocatedObject
			{
			public:
				class PrivateData
				{
				public:
					PrivateData(){};
					virtual ~PrivateData(){};
				protected:
				    
				private:
				};

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CacheSyncWriteAccessor();
				
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual~CacheSyncWriteAccessor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				virtual ev_int32 writeCacheFunc();

			protected:

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				PrivateData* getPrivateData();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool addToBackground(PrivateData* pData);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 waitWriteDataCount() const;

				list<PrivateData*> mPrivateDataList;
				ev_size_t mMaxWaitDataCount;
		private:
				friend class BackgroundCacheAccrssorFunc;
				friend class BackgroundCacheAccrssor;
				friend class CacheAccessor;

				EarthView::World::Core::CMutex mtx;
				ev_bool mbexit;

				static EarthView::World::Core::CSemaphore* mpSemaphore;

			protected:	
				//异步写入对象名称
				EVString mPrivateName;  
				
				//写入的数据总量
				ev_uint32 mWritedDataCount;

				//丢弃的数据个数
				ev_uint32 mChuckedDataCount;
			};

			class  BackgroundCacheAccrssor
			{
			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				BackgroundCacheAccrssor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~BackgroundCacheAccrssor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				static ev_bool  start();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				static ev_void stop();


				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				static ev_bool isWorking();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				//static ev_bool addSyncAccessor(CacheSyncWriteAccessor* pAccessor);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				static ev_void removeSyncAccessor(const CacheSyncWriteAccessor* pAccessor);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				static ev_void writeCacheData();


				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				static ev_int32 getSyncAccessorCount();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static ev_void getSyncAccessorInfo(ev_int32 index, EVString& name, ev_uint32& waitWriteDataQueueSize, ev_uint32& waitWriteDataCount, ev_uint32& writedDataCount, ev_uint32& chuckedDataCount);
			protected:
			private:
				static EarthView::World::Core::CMutex mtx;
				static list<CacheSyncWriteAccessor*> mCacheSyncList;
				static CacheSyncWriteAccessor* mCurrentAccessor;
			};
		
		}}}


#endif