#ifndef DTT_GLOBAL_H
#define DTT_GLOBAL_H
#include "core/global.h"
#include "core/ev_logger.h"

//动态库导出导入宏
#ifdef EV_BUILD_DTT
#define EV_DTT_DLL EV_DLL_EXPORT
#else
#define EV_DTT_DLL EV_DLL_IMPORT
#endif

#define DTT_LOG_TAG			"dtt_log"
#define DTT_LOG_FILE_NAME	"dtt.log"
namespace DTT
{
	extern ev_bool gEnableLog;
}
#define DTT_LOG_SETLEVEL(level)			if(DTT::gEnableLog) {EV_LOG_SETLEVEL(DTT_LOG_TAG, level);}
#define DTT_LOG_FILE					if(DTT::gEnableLog) {EV_LOG_FILE(DTT_LOG_TAG, DTT_LOG_FILE_NAME);}
#define DTT_LOG_CONSOLE					if(DTT::gEnableLog) {EV_LOG_CONSOLE(DTT_LOG_TAG);}
#define DTT_LOG_DEBUG(msg)				if(DTT::gEnableLog) {EV_LOG_DEBUG(DTT_LOG_TAG, msg);}
#define DTT_LOG_INFO(msg)				if(DTT::gEnableLog) {EV_LOG_INFO(DTT_LOG_TAG, msg);}
#define DTT_LOG_WARN(msg)				if(DTT::gEnableLog) {EV_LOG_WARN(DTT_LOG_TAG, msg);}
#define DTT_LOG_ERROR(msg)				if(DTT::gEnableLog) {EV_LOG_ERROR(DTT_LOG_TAG, msg);}
#define DTT_LOG_FATAL(msg)				if(DTT::gEnableLog) {EV_LOG_FATAL(DTT_LOG_TAG, msg);}

#endif