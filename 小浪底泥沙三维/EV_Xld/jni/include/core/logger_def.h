#ifndef EV_CORE_LOGGERDEF_H
#define EV_CORE_LOGGERDEF_H

#pragma once

#include "core/global.h"
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            ///功能：日志系统下，文件定时备份周期
            ///创建时间：2012.2.13
            ///作者：邹先涛
            enum LOGSCHEDULE
            {
                MONTHLY = 0,
                WEEKLY,
                DAILY,
                TWICE_DAILY,
                HOURLY,
                MINUTELY
            };
            ///功能：日志级别
            ///创建时间：2012.2.13
            ///作者：邹先涛
            enum LOGLEVEL
            {
                FATAL_LEVEL = 0,
                ERROR_LEVEL,
                WARN_LEVEL,
                INFO_LEVEL,
                DEBUG_LEVEL,
                TRACE_LEVEL,
                OFF_LEVEL
            };
            ///功能：输出终端类别
            ///创建时间：2012.2.13
            ///作者：邹先涛
            enum APPENDERTYPE
            {
                CONSOLE = 0,
                COMMONFILE,
                ROLLINGFILE,
                DAILYROLLINGFILE,
                REMOTE
            };
        }
    }
}

#endif
