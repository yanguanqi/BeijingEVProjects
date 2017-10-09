#ifndef EARTHVIEW_WORLD_SPATIAL_DOWNLOADEXPORTS_H
#define EARTHVIEW_WORLD_SPATIAL_DOWNLOADEXPORTS_H
#include "core/global.h"
#include "core/ev_logger.h"

//动态库导出导入宏
#ifdef EV_BUILD_DOWNLOAD
#define EV_DOWNLOAD_DLL EV_DLL_EXPORT
#else
#define EV_DOWNLOAD_DLL EV_DLL_IMPORT
#endif


//web客户端名称，如果添加了一个web客户端连接，需要在这里列出它的名称
#define		EV_GEOCODE_SERVICE_CONNECTION				"ev_geo_service_connection"
#define		EV_GEOMETRY_SERVICE_CONNECTION				"ev_geometry_service_connection"			
#define		EV_GLOBE_SERVICE_CONNECTION						"ev_globe_service_connection"
#define		EV_WEBMETADATA_SERVICE_CONNECTION		"ev_webmetadata_wervice_connection"
#define		EV_WFS_CONNECTION										"ev_wfs_connection"
#define		EV_WMS_CONNECTION										"ev_wms_connection"
#define		EV_WMTS_CONNECTION									"ev_wmts_connection"
#define		EV_MULTIMEDIA_CONNECTION									"ev_multimedia_connection"
#define		EV_REGISTER_SERVICE_CONNECTION					"ev_register_service_connection"

//server 6.0的服务
#define		EV_OBQ_CONNECTION									"ev_obq_connection"
#define		EV_CATALOG_CONNECTION									"ev_catalog_connection"
#define		EV_MESHX_CONNECTION									"ev_meshx_connection"
#define		EV_MESHXG_CONNECTION									"ev_meshxg_connection"


/// 网络服务类型
#define  WebConnectionType				0
#define  WCT_UNKNOW						WebConnectionType
#define  WCT_GEOCODE						WebConnectionType + 1
#define  WCT_GEOMETRY						WebConnectionType + 2
#define  WCT_GLOBE								WebConnectionType + 3
#define  WCT_WEBMETADATA				WebConnectionType + 4
#define  WCT_WMS								WebConnectionType + 5
#define  WCT_WFS									WebConnectionType + 6
#define  WCT_WMTS								WebConnectionType + 7
#define  WCT_UPDATE							WebConnectionType + 8
#define  WCT_MULTIMEDIA							WebConnectionType + 9

//server 6.0的服务
#define  WCT_OBQ                            WebConnectionType + 10
#define  WCT_CATALOG                            WebConnectionType + 11
#define  WCT_MESHX                            WebConnectionType + 12
#define  WCT_MESHXG                            WebConnectionType + 13
#define  WCT_MODELSERVICE                      WebConnectionType + 14

#define  WCT_VECTOR3D                            WebConnectionType + 15
#define WCT_LAS                              WebConnectionType + 16

#ifndef EV_OS_WIN
#define SOCKET int
#define  USING_DOWNLOAD_SPEED_TEST 0
#else
#define  USING_DOWNLOAD_SPEED_TEST 0
#endif

#if USING_DOWNLOAD_SPEED_TEST
#include <Windows.h>
#include "core/ev_time.h"
#include "core/stringdefines.h"
#include "core/mutex.h"
class DownloadSpeedTest
{
public:
	DownloadSpeedTest(EarthView::World::Core::ev_string name);
	~DownloadSpeedTest();
protected:
private:
	friend class DownloadSpeedTestIniter;
	EarthView::World::Core::CCoreTime mSpeed;
	EarthView::World::Core::ev_string mName;
	static HANDLE msConsole;
	static EarthView::World::Core::CMutex msMtx;
};
#	define DOWNLOAD_SPEED_TEST(name)  DownloadSpeedTest download_speed_test(name);
#else
#	define DOWNLOAD_SPEED_TEST(name) 
#endif


ev_bool badService(ev_int32 serviceReturnCode);


#define EV_DOWNLOAD_LOG_TAG			"EV_Download_Log_Tag"
#define EV_DOWNLOAD_LOG_FILE		"ev_download.log"

namespace _EV_DOWNLOAD_LOG
{
	extern ev_bool gEnableLog;
}

#define EV_DOWNLOAD_LOG_SETLEVEL(level)			if(_EV_DOWNLOAD_LOG::gEnableLog) {EV_LOG_SETLEVEL(EV_DOWNLOAD_LOG_TAG, level);}
#define OPEN_EV_DOWNLOAD_FILE_LOG						if(_EV_DOWNLOAD_LOG::gEnableLog) {EV_LOG_FILE(EV_DOWNLOAD_LOG_TAG, EV_DOWNLOAD_LOG_FILE);}
#define OPEN_EV_DOWNLOAD_CONSOLE_LOG					if(_EV_DOWNLOAD_LOG::gEnableLog) {EV_LOG_CONSOLE(EV_DOWNLOAD_LOG_TAG);}
#define EV_DOWNLOAD_LOG_DEBUG(msg)					if(_EV_DOWNLOAD_LOG::gEnableLog) {EV_LOG_DEBUG(EV_DOWNLOAD_LOG_TAG, msg);}
#define EV_DOWNLOAD_LOG_INFO(msg)					if(_EV_DOWNLOAD_LOG::gEnableLog) {EV_LOG_INFO(EV_DOWNLOAD_LOG_TAG, msg);}
#define EV_DOWNLOAD_LOG_WARN(msg)					if(_EV_DOWNLOAD_LOG::gEnableLog) {EV_LOG_WARN(EV_DOWNLOAD_LOG_TAG, msg);}
#define EV_DOWNLOAD_LOG_ERROR(msg)					if(_EV_DOWNLOAD_LOG::gEnableLog) {EV_LOG_ERROR(EV_DOWNLOAD_LOG_TAG, msg);}
#define EV_DOWNLOAD_LOG_FATAL(msg)					if(_EV_DOWNLOAD_LOG::gEnableLog) {EV_LOG_FATAL(EV_DOWNLOAD_LOG_TAG, msg);}


#endif
