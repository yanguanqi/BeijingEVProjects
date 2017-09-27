#ifndef mstiledownload_mstiledll_h
#define mstiledownload_mstiledll_h
#include "core/global.h"
#include "core/ev_logger.h"

//动态库导出导入宏
#ifdef EV_BUILD_MSTILE_DOWNLOAD
#define EV_MSTILE_DOWNLOAD_DLL EV_DLL_EXPORT
#else
#define EV_MSTILE_DOWNLOAD_DLL EV_DLL_IMPORT
#endif

#endif