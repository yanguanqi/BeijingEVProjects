#ifndef _EV_MAXTOOL_CONFIG_H_
#define _EV_MAXTOOL_CONFIG_H_
//////////////////////////////////////////
// max工具的配置文件
//////////////////////////////////////////


#include <core/global.h>

#ifdef EV_BUILD_MAXTOOL
#define EV_MAXTOOL_DLL EV_DLL_EXPORT
#else
#define EV_MAXTOOL_DLL EV_DLL_IMPORT

#endif


#endif