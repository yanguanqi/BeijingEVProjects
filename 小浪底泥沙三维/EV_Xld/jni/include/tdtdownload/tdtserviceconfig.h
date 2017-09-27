#ifndef tdtdownload_tdtserviceconfig_h_H
#define tdtdownload_tdtserviceconfig_h_H
#include "core/stringdefines.h"
#include "core/ev_logger.h"
#include "core/logger_def.h"
#include "download/webmetadataserviceconnection.h"
using namespace EarthView::World::Spatial::Download;
using namespace EarthView::World::Core;
namespace TDT
{

#define TDT_LOG_TAG			"tdtservice_log"
#define TDT_LOG_FILE_NAME	"tdtservice.log"
	extern ev_bool gEnableLog;
#define TDT_LOG_SETLEVEL(level)			if(TDT::gEnableLog) {EV_LOG_SETLEVEL(TDT_LOG_TAG, level);}
#define TDT_LOG_FILE						if(TDT::gEnableLog) {EV_LOG_FILE(TDT_LOG_TAG, TDT_LOG_FILE_NAME);}
#define TDT_LOG_CONSOLE					if(TDT::gEnableLog) {EV_LOG_CONSOLE(TDT_LOG_TAG);}
#define TDT_LOG_DEBUG(msg)				if(TDT::gEnableLog) {EV_LOG_DEBUG(TDT_LOG_TAG, msg);}
#define TDT_LOG_INFO(msg)				if(TDT::gEnableLog) {EV_LOG_INFO(TDT_LOG_TAG, msg);}
#define TDT_LOG_WARN(msg)				if(TDT::gEnableLog) {EV_LOG_WARN(TDT_LOG_TAG, msg);}
#define TDT_LOG_ERROR(msg)				if(TDT::gEnableLog) {EV_LOG_ERROR(TDT_LOG_TAG, msg);}
#define TDT_LOG_FATAL(msg)				if(TDT::gEnableLog) {EV_LOG_FATAL(TDT_LOG_TAG, msg);}

	class TDTServiceConfig
	{
	public:
		TDTServiceConfig();
		~TDTServiceConfig();
		static TDTServiceConfig& instance();
		ev_void setConfigFile(const EVString& configFile);
		const EVString& getConfigFile() const;
		EVString getConfigPath();
		EVString logType();
		ev_void initLog();
		EVString getServiceList(const EVString& serviceType);
		ev_bool getServiceInfo(WMTSLayerInfo& info);
		EVString getReqUrlFormat(const EVString& service);
		int getLayerDataType(const EVString& service);
		ev_bool isNullTile(ev_void* pTileData, ev_uint32 tileDataLength);
	protected:
		ev_void initNullTile();
	private:
		EVString mConfigFile;
		map<EVString, EVString> mReqUrlFormatMap;
		map<EVString, int> mLayerDataType;
		vector<MemoryDataStreamPtr> mNullTileList;
	};

}
#endif