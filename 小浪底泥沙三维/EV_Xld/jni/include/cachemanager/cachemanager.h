#ifndef EARTHVIEW_WORLD_SPATIAL_CACHE_MANAGER_H
#define EARTHVIEW_WORLD_SPATIAL_CACHE_MANAGER_H
#include "core/mutex.h"
#include "core/thread.h"
#include "cachemanager/cachestrategy.h"
#include "cachemanager/cachemanagerglobal.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			class CacheAccessorManager;
			class CacheManageWorkFunction;

			class EV_CACHEMANAGER_DLL CacheManager : public EarthView::World::Core::CAllocatedObject
			{
			private:
				static EarthView::World::Spatial::CacheManager *ms_Singleton;

			ev_private:
				CacheManager(_in EarthView::World::Core::CNameValuePairList* pList);

			public:
				CacheManager();

				virtual ~CacheManager();

				static EarthView::World::Spatial::CacheManager& getSingleton();

				static EarthView::World::Spatial::CacheManager* getSingletonPtr();

				/// <summary>
				/// 设置缓存管理的时间间隔，
				/// </summary>
				/// <param name="interval">时间间隔，单位 分钟 </param>
				/// <returns></returns>		
				ev_void setCacheManageInterval(ev_int32 interval);

				/// <summary>
				/// 获取缓存管理事件间隔，单位 分钟
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_int32 getCacheManageInterval() const;
 
				/// <summary>
				/// 设置侦听服务器端缓存更新通知url
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_void setCacheUpdateListenURL(const EVString& url);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				const EVString& getCacheUpdateListenURL() const;

				/// <summary>
				/// 设置缓存文件总大小
				/// </summary>
				/// <param name="maxsize">缓存文件总大小，单位: 字节</param>
				/// <returns></returns>		
				ev_bool setCacheMaxSize(ev_uint64 maxsize);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回设置的缓存文件总大小，单位：字节</returns>
		
				ev_uint64 getCacheMaxSize() const;

				/// <summary>
				/// 加载缓存配置文件
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool loadConfig();

				/// <summary>
				/// 保存缓存配置文件
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_void saveConfig();

				/// <summary>
				/// 通过预设的策略管理缓存数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool manageLocalCacheData();

				/// <summary>
				/// 设置缓存数据存储路径
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool setCacheRootDir(const EVString& cacheRootDir);

				/// <summary>
				/// 获取当前缓存数据存储路径
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				const EVString& getCacheRootDir() const;

				/// <summary>
				/// 清除所有缓存数据
				/// </summary>
				/// <param name=""></param>
				/// <returns>清理的缓存数据大小</returns>
		
				ev_int32 deleteCache();

				/// <summary>
				/// 启动缓存管理服务
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool start();

				/// <summary>
				/// 启动缓存管理服务，但是不进行读写工作
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool start(ev_bool workable);

				/// <summary>
				/// 缓存服务是否在运行
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool isWorking() ;

				/// <summary>
				/// 停止缓存管理服务
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_void stop();

				/// <summary>
				/// 暂停缓存工作
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_void pauseWork();

				/// <summary>
				/// 继续缓存工作
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_void continueWork();

				/// <summary>
				/// 是否暂停工作
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool isPaused();

				/// <summary>
				/// 临时接口，清除矢量瓦片缓存
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_bool clearVectorTileCache(const EVString& datasetName);

				/// <summary>
				/// 获取当前缓存大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>当前缓存文件实际大小， 单位：M字节</returns>		
				ev_uint64 getCurrentCacheSize();

			protected:
				/// <summary>
				/// 初始化
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_void init();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_void clearDirtyDataForLayerEditor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void cacheDeleteLog(const EVString& cacheFile);

			private:
				friend class CacheManageWorkFunction;
				/// 缓存文件最大值
				ev_uint64 mCacheMaxSize;
				/// 当前缓存文件大小
				ev_uint64 mCurrentCacheSize;
				/// 进行缓存管理的时间间隔，每隔指定时间，进行一次缓存管理, 单位 分钟
				ev_int32 mCacheManageInterval;
				/// 本地web服务url，用来向服务器注册缓存侦听服务
				EVString mCacheUpdateListenURL;
				/// 进行广播更新数据的局域网IP
				EVString mBroadcastNetAddr;
				/// 进行广播更新数据的网络端口
				ev_int32 mBroadcastPort;
				/// 缓存管理策略集合
				typedef ev_map<CacheBaseType, CacheStrategy> CacheStrategyMap;
				CacheStrategyMap mCacheStrategys;
				/// 缓存管理线程对象
				EarthView::World::Core::CThread mThread;
				/// 缓存管理线程函数对象
				EarthView::World::Spatial::CacheManageWorkFunction* mThreadFunc;
				/// 缓存管理工作互斥体
				EarthView::World::Core::CRecursiveMutex mMtx;
				/// 缓存管理文件是否改变
				ev_bool mbConfigFileChanged;
				///暂停标识
				ev_bool mbPauseWork;

				ev_uint64 getCacheFileSizeMap(multimap<ev_uint64, EVString>& cacheFileSizeMap);
				ev_uint64 getDemCacheFileSizeMap(multimap<ev_uint64, EVString>& cacheFileSizeMap);
				ev_uint64 getEffectCacheFileSizeMap(multimap<ev_uint64, EVString>& cacheFileSizeMap);
				ev_uint64 getEntityCacheFileSizeMap(multimap<ev_uint64, EVString>& cacheFileSizeMap);
				ev_uint64 getImagetileCacheFileSizeMap(multimap<ev_uint64, EVString>& cacheFileSizeMap);
				ev_uint64 getModelCacheFileSizeMap(multimap<ev_uint64, EVString>& cacheFileSizeMap);
				ev_uint64 getModelTemplateCacheFileSizeMap(multimap<ev_uint64, EVString>& cacheFileSizeMap);
				ev_uint64 getvectortileCacheFileSizeMap(multimap<ev_uint64, EVString>& cacheFileSizeMap);
				ev_uint64 getKmlCacheFileSizeMap(multimap<ev_uint64, EVString>& cacheFileSizeMap);
				ev_uint64 getOBQFileSizeMap(multimap<ev_uint64, EVString>& cacheFileSizeMap);
				ev_uint64 getStreetViewCacheFileSizeMap(multimap<ev_uint64, EVString>& cacheFileSizeMap);
			};


			//缓存管理线程
			class CacheManageWorkFunction : public EarthView::World::Core::CThreadFunc
			{
			public:
				CacheManageWorkFunction();
				~CacheManageWorkFunction();
				ev_void run();
				ev_void setRunable(ev_bool runable);
			protected:
			private:
				ev_bool mRunable;
			};

		}}}
#endif
