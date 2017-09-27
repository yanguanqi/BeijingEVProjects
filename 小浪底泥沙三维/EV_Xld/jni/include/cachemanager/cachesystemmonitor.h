#ifndef EV_CACHESYSTEM_MONITOR_H
#define EV_CACHESYSTEM_MONITOR_H
#include "cachemanager/cachemanagerglobal.h"
#include "core/mutex.h"
namespace EarthView{
	namespace World{
		namespace Spatial{

			enum InfoType
			{
				IT_SyncWriterInfo,
				IT_ReadInfo,
				IT_CacheDBConnectInfo
			};

			class EV_CACHEMANAGER_DLL EVCacheSystemInfoListener
			{
			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EVCacheSystemInfoListener();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~EVCacheSystemInfoListener();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void perReportInfo(InfoType infoType);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void afterReportInfo(InfoType infoType);
				
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void onSyncWriterInfo(const EVString& name, ev_uint32 waitWriteDataQueueSize, ev_uint32 waitWriteDataCount, ev_uint32 writedDataCount, ev_uint32 chuckedDataCount);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void onCacheDataReadInfo(const EVString& name, ev_uint32 readCount, ev_uint32 successCount);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void onCacheDBConnectInfo(const EVString& name, ev_uint32 connectCount);

			protected:
			private:
			};

			class EV_CACHEMANAGER_DLL EVCacheSystemMonitor
			{
			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EVCacheSystemMonitor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~EVCacheSystemMonitor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static EVCacheSystemMonitor& instance();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void setEnable(InfoType infoType, ev_bool enable);

				/// <summary>
				/// √Î
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void setReportInterval(ev_uint32 interval);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_uint32 getReportInterval();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void reportSyncWriterInfo();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void reportCacheDataReadInfo();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void reportCacheDBConnectInfo();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void addCacheSystemInfoListener(EVCacheSystemInfoListener* pListener);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void removeCacheSystemInfoListener(EVCacheSystemInfoListener* pListener);
			protected:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void perReportInfo(InfoType infoType);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void afterReportInfo(InfoType infoType);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void perReportSyncWriterInfo();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void reportSyncWriterInfo(const EVString& name, ev_uint32 waitWriteDataQueueSize, ev_uint32 waitWriteDataCount, ev_uint32 writedDataCount, ev_uint32 chuckedDataCount);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void afterReportSyncWriterInfo();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void perReportCacheDataReadInfo();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void reportCacheDataReadInfo(const EVString& name, ev_uint32 readDataCount, ev_uint32 readDataSuccessCount);


				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void afterReportCacheDataReadInfo();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void perReportCacheDBConnectInfo();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void reportCacheDBConnectInfo(const EVString& name, ev_uint32 connectCount);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void afterReportCacheDBConnectInfo();
			private:
				
				vector<EVCacheSystemInfoListener*> mpCacheSystemInfoListenerList;

				class MonitorThread;
				MonitorThread* mpMonitorThread;
				ev_uint32 mReportInterval;
				ev_bool mbReportSyncWriterInfoEnable;
				ev_bool mbReportCacheDataReadInfoEnable;
				ev_bool mbReportCacheDBConnectInfoEnable;
			};

		}
	}
}

#endif