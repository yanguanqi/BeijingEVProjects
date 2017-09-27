#ifndef EV_DOWNLOAD_INTERFACE_H
#define EV_DOWNLOAD_INTERFACE_H
#include "core/stringdefines.h"
#include "core/readwritelock.h"
#include "core/ev_time.h"
#include "download/downloadglobal.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Download{

				class EV_DOWNLOAD_DLL CDownloadInterface
				{
					friend class FTPClient;
				public:
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CDownloadInterface();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CDownloadInterface();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					static CDownloadInterface& instance();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns>retuen data length, release 'pData' by releaseHttpGetData function</returns>
					ev_uint32 httpGet(const EVString& url, ev_void*& pData);
					
					ev_uint32 httpGet(const EVString& url, ev_void*& pData, ev_int32& retCode);
					ev_uint32 httpGet(const EVString& url, ev_void*& pData, ev_int32& retCode, ev_int32& responseTime);

					ev_uint32 httpGet(const EVString& url, ev_void*& pData, ev_uint32 timeout_ms);
					ev_uint32 httpGet(const EVString& url, ev_void*& pData, ev_uint32 timeout_ms, ev_int32& retCode);
					ev_uint32 httpGet(const EVString& url, ev_void*& pData, ev_uint32 timeout_ms, ev_int32& retCode, ev_int32& responseTime);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void releaseHttpGetData(ev_void*& pData);

				public:
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void init();
				ev_private:
					class DownloadInternal;
					DownloadInternal* mpInternal;
				};


				class EV_DOWNLOAD_DLL URLSpeedManager
				{
				public:
					URLSpeedManager();

					~URLSpeedManager();

					ev_void addUrl(const EVString& url);

					//获取速度最快的url
					ev_void getMaxSpeedUrl(EVString& url, ev_int32& speed);

					//获取速度最慢的url
					ev_void getMinSpeedUrl(EVString& url, ev_int32& speed);

					//更新url请求速度
					ev_void updateUrlSpeed(const EVString& url, ev_int32 lastReqSpeed);

				protected:
				private:
					EarthView::World::Core::CTime mResetTime;
					map<EVString, ev_int32> mUrlSpeedList;
					EarthView::World::Core::CReadWriteLock mUrlSpeedListLock;
				};
			}
		}
	}
}
#endif // DTT_DOWNLOAD_API_H