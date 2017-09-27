#ifndef mstile_mstileserviceconfig_h_H
#define mstile_mstileserviceconfig_h_H
#include "core/stringdefines.h"
#include "core/ev_logger.h"
#include "core/logger_def.h"
#include "download/webmetadataserviceconnection.h"
#include "download/downloadinterface.h"
using namespace EarthView::World::Spatial::Download;
using namespace EarthView::World::Core;
namespace MSTile
{

#define MSTile_LOG_TAG			"mstileservice_log"
#define MSTile_LOG_FILE_NAME	"mstileservice.log"
	extern ev_bool gEnableLog;
#define MSTile_LOG_SETLEVEL(level)			if(MSTile::gEnableLog) {EV_LOG_SETLEVEL(MSTile_LOG_TAG, level);}
#define MSTile_LOG_FILE						if(MSTile::gEnableLog) {EV_LOG_FILE(MSTile_LOG_TAG, MSTile_LOG_FILE_NAME);}
#define MSTile_LOG_CONSOLE					if(MSTile::gEnableLog) {EV_LOG_CONSOLE(MSTile_LOG_TAG);}
#define MSTile_LOG_DEBUG(msg)				if(MSTile::gEnableLog) {EV_LOG_DEBUG(MSTile_LOG_TAG, msg);}
#define MSTile_LOG_INFO(msg)				if(MSTile::gEnableLog) {EV_LOG_INFO(MSTile_LOG_TAG, msg);}
#define MSTile_LOG_WARN(msg)				if(MSTile::gEnableLog) {EV_LOG_WARN(MSTile_LOG_TAG, msg);}
#define MSTile_LOG_ERROR(msg)				if(MSTile::gEnableLog) {EV_LOG_ERROR(MSTile_LOG_TAG, msg);}
#define MSTile_LOG_FATAL(msg)				if(MSTile::gEnableLog) {EV_LOG_FATAL(MSTile_LOG_TAG, msg);}

	class MSTileServiceConfig
	{
	public:
		MSTileServiceConfig();
		~MSTileServiceConfig();
		static MSTileServiceConfig& instance();
		ev_void setConfigFile(const EVString& configFile);
		const EVString& getConfigFile() const;
		EVString getConfigPath();
		EVString logType();
		ev_void initLog();
		EVString getServiceList(const EVString& serviceType);
		ev_bool getServiceInfo(WMTSLayerInfo& info);
		ev_bool getServiceInfo(DEMObjectInfo& info);
		EVString getReqUrlFormat(const EVString& service);
		int getLayerDataType(const EVString& service);
		ev_bool isNullTile(ev_void* pTileData, ev_uint32 tileDataLength);
		URLSpeedManager* getURLSpeedManager(const EVString& service);
	protected:
		ev_void initNullTile();
	private:
		EVString mConfigFile;
		map<EVString, EVString> mReqUrlFormatMap;
		map<EVString, int> mLayerDataType;
		vector<MemoryDataStreamPtr> mNullTileList;
		map<EVString, URLSpeedManager*> mReqUrlSpeedManagerMap;
	};
}

#endif