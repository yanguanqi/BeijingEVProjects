#ifndef EV_CORE_LOGGER_H
#define EV_CORE_LOGGER_H
#pragma once

#include "core/global.h"
#include "core/object.h"
#include "core/config.h"

////// android 调试日志
#ifdef EV_OS_ANDROID
#include "android/log.h"
#define  EV_ANDROID_GLOBE_LOG(info) __android_log_print(ANDROID_LOG_VERBOSE, "android_globe", info);
#else
#define  EV_ANDROID_GLOBE_LOG(info) 
#endif

#ifdef EV_LOG_ENABLE  //////日志锁，定义在config.h文件中
#pragma warning(disable:4099)
#include "core/logger_def.h"
#include "core/multibytestring.h"
#include <map>
namespace EarthView
{
    namespace World
    {
        namespace Core
        {
            class EV_CORE_DLL CLogger : public EarthView::World::Core::CAllocatedObject
            {
            public:
                CLogger(const ev_string& name, const ev_string& pattern);
                virtual ~CLogger() {}
            ev_private:
                CLogger(EarthView::World::Core::CNameValuePairList *pList) 
				{
	
				}
            public:
                /*
                * 函数功能： 打开日志系统的日志调试信息
                * 参    数：
                *  ev_bool bOpen [in] ：打开日志调试
                * 返 回 值：
                * 创建日期：2012.2.13
                * 作者：邹先涛
                */
                static ev_void setInternalDebugging(ev_bool bOpen);

                /*
                * 函数功能： 根据节点名称返回记录对象，不存在则创建。
                * 参    数：
                * const ev_string& strLoggerName [in] ：参数描述
                * const ev_string &strPattern [in] : 日志模板样式，关于语法说明在本头文件最后。
                * 返 回 值：日志对象指针
                * 创建日期：2012.2.13
                * 作者：邹先涛
                */
                static EarthView::World::Core::CLogger *getInstance(const ev_string &strLoggerName);
                static EarthView::World::Core::CLogger *getInstance(const ev_string &strLoggerName, const ev_string &strPattern);
                /*
                * 函数功能： 获取日志实例的名称。
                * 参    数：
                * ev_string& strLoggerName [in] ：日志对象名称
                * 返 回 值：
                * 创建日期：2012.2.13
                * 作者：邹先涛
                */
                ev_void getLoggerName(_out ev_string &strLoggerName);

                /*
                * 函数功能： 设置当前记录对象的日志优先级别
                * 参    数：
                *  const EarthView::World::Core::LOGLEVEL &level [in] ：日志级别
                * 返 回 值：
                * 创建日期：2012.2.13
                * 作者：邹先涛
                */
                ev_void setLogLevel(const EarthView::World::Core::LOGLEVEL &level);

                /*
                * 函数功能： 获取当前记录对象的日志优先级别
                * 参    数：
                * 返 回 值：日志级别
                * 创建日期：2012.2.13
                * 作者：邹先涛
                */
                EarthView::World::Core::LOGLEVEL getLogLevel() const;

                /*
                * 函数功能： 添加控制台的输出终端
                * 参    数：
                * 返 回 值：TRUE成功，FALSE失败
                * 创建日期：2012.2.13
                * 作者：邹先涛
                */
                ev_void openConsoleAppender();

                /*
                * 函数功能： 添加本地文件的输出终端
                * 参    数：
                *  const ev_string& strFilename [in] ：文件名称（路径+文件名）
                *  ev_bool bTrunc [in] : 默认情况是写日志在文件末尾，如果bTrunc为true，那么每次都创建新的文件
                * 返 回 值：
                * 创建日期：2012.2.13
                * 作者：邹先涛
                */
                ev_void openFileAppender(const ev_string &strFilename);
                ev_void openFileAppender(const ev_string &strFilename, ev_bool bTrunc);

                /*
                * 函数功能： 添加本地文件的输出终端，按存储空间备份日志，超出预设大小则备份当前且重新生成新日志
                * 参    数：
                *  const ev_string& strFilename [in] ：文件名称（路径+文件名）
                *  ev_uint32 lMaxFileSize [in] : 备份文件的大小，默认10M
                *  ev_uint32 nMaxBackupIndex [in] ：最大文件记录数，默认10
                * 返 回 值：
                * 创建日期：2012.2.13
                * 作者：邹先涛
                */
                ev_void openRollingFileAppender(const ev_string &strFilename);
                ev_void openRollingFileAppender(const ev_string &strFilename, ev_uint32 lMaxFileSize);
                ev_void openRollingFileAppender(const ev_string &strFilename , ev_uint32 lMaxFileSize, ev_uint32 nMaxBackupIndex);

                /*
                * 函数功能： 添加本地文件的输出终端，定时备份日志
                * 参    数：
                *  const ev_string& strAppenderName [in] ：日志记录对象的名称
                *  const ev_string& strFilename [in] ：文件名称（路径+文件名）
                *  const EarthView::World::Core::LOGSCHEDULE &schedule [in] : 备份文件的大小 ，默认DAILY
                *  ev_uint32 maxBackupIndex [in] ：最大文件记录数，默认10
                * 返 回 值：
                * 创建日期：2012.2.13
                * 作者：邹先涛
                */
                ev_void openDailyRollingFileAppender(const ev_string &strFilename);
                ev_void openDailyRollingFileAppender(const ev_string &strFilename, const EarthView::World::Core::LOGSCHEDULE &schedule);
                ev_void openDailyRollingFileAppender(const ev_string &strFilename, const EarthView::World::Core::LOGSCHEDULE &schedule, ev_uint32 maxBackupIndex);
                /*
                * 函数功能： 添加远程输出终端
                * 参    数：
                *  const ev_string& strFilename [in] ：文件名称（路径+文件名）
                *  const EarthView::World::Core::LOGSCHEDULE &schedule [in] : 备份文件的大小
                *  ev_uint32 maxBackupIndex [in] ：最大文件记录数
                * 返 回 值：
                * 创建日期：2012.2.13
                * 作者：邹先涛
                */
                ev_void openSocketAppender(const ev_string &strHost, ev_uint32 nPort, const ev_string &strServerName);

                /*
                * 函数功能： 关闭输出终端
                * 参    数：
                *  const EarthView::World::Core::APPENDERTYPE &type [in] ：输出终端类别
                *  const ev_string &strFileName [in] : 专门针对文件终端，如果是文件终端此处不能为空，否则strFileName=“”
                * 返 回 值：
                * 创建日期：2012.2.13
                * 作者：邹先涛
                */
                ev_void closeAppender(const EarthView::World::Core::APPENDERTYPE &type, const ev_string &strFileName);

                /*
                * 函数功能： 写日志信息到终端
                * 参    数：
                *  const EarthView::World::Core::LOGLEVEL &level [in] ：日志级别
                *  const ev_string& strMsg [in] ：日志信息
                * 返 回 值：
                * 创建日期：2012.2.13
                * 作者：邹先涛
                */
                ev_void writeLog(const EarthView::World::Core::LOGLEVEL &level, const ev_string &strMsg, const ev_string &strFile, ev_uint32 nLine);

            private:
                ev_string m_strLoggerName;
				ev_string m_strPattern;
            };


            /**************************************日志宏定义**********************************/

            ///打开输出终端宏
#define EV_LOG_CONSOLE(loggerName)\
		do{\
			EarthView::World::Core::CLogger  *ptInstance = EarthView::World::Core::CLogger::getInstance(loggerName);\
			ptInstance->openConsoleAppender();\
		}while(0)

#define EV_LOG_FILE(loggerName, fileName)\
		do{\
			EarthView::World::Core::CLogger  *ptInstance = EarthView::World::Core::CLogger::getInstance(loggerName);\
			ptInstance->openFileAppender(fileName);\
		}while(0)

#define EV_LOG_ROLLINGFILE(loggerName, fileName, lMaxFileSize, nMaxBackupIndex)\
		do{\
			EarthView::World::Core::CLogger  *ptInstance = EarthView::World::Core::CLogger::getInstance(loggerName);\
			ptInstance->openRollingFileAppender(fileName, lMaxFileSize, nMaxBackupIndex);\
		}while(0)
#define EV_LOG_DAILYROLLINGFILE(loggerName, fileName, schedule, nMaxBackupIndex)\
		do{\
			EarthView::World::Core::CLogger  *ptInstance = EarthView::World::Core::CLogger::getInstance(loggerName);\
			ptInstance->openDailyRollingFileAppender(fileName, schedule, nMaxBackupIndex);\
		}while(0)
#define EV_LOG_SOCKET(loggerName,strHost, nPort, strServerName)\
		do{\
			EarthView::World::Core::CLogger  *ptInstance = EarthView::World::Core::CLogger::getInstance(loggerName);\
			ptInstance->openSocketAppender(strHost, nPort, strServerName);\
		}while(0)


            ///日志打印宏
#define EV_LOG_TRACE(loggerName, msg)\
	do{\
		EarthView::World::Core::CLogger  *ptInstance = EarthView::World::Core::CLogger::getInstance(loggerName);\
		ptInstance->writeLog(TRACE_LEVEL, msg, __FILE__, __LINE__);\
	}while(0)
#define EV_LOG_DEBUG(loggerName, msg)\
	do{\
		EarthView::World::Core::CLogger  *ptInstance = EarthView::World::Core::CLogger::getInstance(loggerName);\
		ptInstance->writeLog(DEBUG_LEVEL, msg, __FILE__, __LINE__);\
	}while(0)
#define EV_LOG_INFO(loggerName, msg)\
	do{\
		EarthView::World::Core::CLogger  *ptInstance = EarthView::World::Core::CLogger::getInstance(loggerName);\
		ptInstance->writeLog(INFO_LEVEL, msg, __FILE__, __LINE__);\
	}while(0)
#define EV_LOG_WARN(loggerName, msg)\
	do{\
		EarthView::World::Core::CLogger  *ptInstance = EarthView::World::Core::CLogger::getInstance(loggerName);\
		ptInstance->writeLog(WARN_LEVEL, msg, __FILE__, __LINE__);\
	}while(0)
#define EV_LOG_ERROR(loggerName, msg)\
	do{\
		EarthView::World::Core::CLogger  *ptInstance = EarthView::World::Core::CLogger::getInstance(loggerName);\
		ptInstance->writeLog(ERROR_LEVEL, msg, __FILE__, __LINE__);\
	}while(0)
#define EV_LOG_FATAL(loggerName, msg)\
	do{\
		EarthView::World::Core::CLogger  *ptInstance = EarthView::World::Core::CLogger::getInstance(loggerName);\
		ptInstance->writeLog(FATAL_LEVEL, msg, __FILE__, __LINE__);\
	}while(0)

            ///关闭输出终端宏，如果不显式关闭，程序会在最后自动关闭
#define EV_LOG_CLOSE(loggerName, appenderType, fileName)\
	do{\
		EarthView::World::Core::CLogger  *ptInstance = EarthView::World::Core::CLogger::getInstance(loggerName);\
		ptInstance->closeAppender(appenderType, fileName);\
	}while(0)
            ///设置日志调试级别
#define EV_LOG_SETLEVEL(loggerName, level)\
	do{\
		EarthView::World::Core::CLogger  *ptInstance = EarthView::World::Core::CLogger::getInstance(loggerName);\
		ptInstance->setLogLevel(level);\
	}while(0)

            /*
            关于日志模板样式语法说明：

            （1）"%%"，转义为%, 即，std::string pattern = "%%" 时输出: "%"
            （2）"%c"，输出logger名称，比如std::string pattern ="%c" 时输出: "test_logger.subtest"， 也可以控制logger名称的显示层次
            ，比如"%c{1}"时输出"test_logger"，其中数字表示层次。
            （3）"%D"，显示本地时间，当std::string pattern ="%D" 时输出:"2004-10-16 18:55:45"，%d显示标准时间，所以当std::string
            pattern ="%d" 时输出 "2004-10-16 10:55:45" （因为我们是东8区，差8个小时啊）。可以通过%d{...}定义更详细的显示格式，比
            如%d{%H:%M:%s}表示要显示小时:分钟：秒。大括号中可显示的预定义标识符如下：
            	%a -- 表示礼拜几，英文缩写形式，比如"Fri" %A -- 表示礼拜几，比如"Friday"
            	%b -- 表示几月份，英文缩写形式，比如"Oct" %B -- 表示几月份，"October"
            	%c -- 标准的日期＋时间格式，如 "Sat Oct 16 18:56:19 2004"
            	%d -- 表示今天是这个月的几号(1-31)"16"
            	%H -- 表示当前时刻是几时(0-23)，如 "18"
            	%I -- 表示当前时刻是几时(1-12)，如 "6"
            	%j -- 表示今天是哪一天(1-366)，如 "290"
            	%m -- 表示本月是哪一月(1-12)，如 "10"
            	%M -- 表示当前时刻是哪一分钟(0-59)，如 "59"
            	%p -- 表示现在是上午还是下午， AM or PM
            	%q -- 表示当前时刻中毫秒部分(0-999)，如 "237"
            	%Q -- 表示当前时刻中带小数的毫秒部分(0-999.999)，如 "430.732"
            	%S -- 表示当前时刻的多少秒(0-59)，如 "32"
            	%U -- 表示本周是今年的第几个礼拜，以周日为第一天开始计算(0-53)，如 "41"
            	%w -- 表示礼拜几，(0-6, 礼拜天为0)，如 "6"
            	%W -- 表示本周是今年的第几个礼拜，以周一为第一天开始计算(0-53)，如 "41"
            	%x -- 标准的日期格式，如 "10/16/04"
            	%X -- 标准的时间格式，如 "19:02:34"
            	%y -- 两位数的年份(0-99)，如 "04"
            	%Y -- 四位数的年份，如 "2004"
            	%Z -- 时区名，比如 "GMT"
            （4）"%F"，输出当前记录器所在的文件名称，比如std::string pattern ="%F" 时输出: "main.cpp"
            （5）"%L"，输出当前记录器所在的文件行号，比如std::string pattern ="%L" 时输出: "51"
            （6）"%l"，输出当前记录器所在的文件名称和行号，比如std::string pattern ="%L" 时输出: "main.cpp:51"
            （7）"%m"，输出原始信息，比如std::string pattern ="%m" 时输出: "teststr"，即上述代码中 LOG4CPLUS_DEBUG的第二个参数，这
            	种实现机制可以确保原始信息被嵌入到带格式的信息中。
            （8）"%n"，换行符，没什么好解释的
            （9）"%p"，输出LogLevel，比如std::string pattern ="%p" 时输出: "DEBUG"
            （10）"%t"，输出记录器所在的线程ID，比如std::string pattern ="%t" 时输出: "1075298944"
            （11）"%x"，嵌套诊断上下文NDC
            (nested diagnostic context) 输出，从堆栈中弹出上下文信息，NDC可以用对不同源的log信息（同时地）交叉输出进行区分，关于NDC
            方面的详细介绍会在下文中提到。
            （12）格式对齐，比如std::string pattern ="%-10m"时表示左对齐，宽度
            */
        }
    }
}

#else
///打开输出终端宏
#define EV_LOG_CONSOLE(loggerName)


#define EV_LOG_FILE(loggerName, fileName)

#define EV_LOG_ROLLINGFILE(loggerName, fileName, lMaxFileSize, nMaxBackupIndex)

#define EV_LOG_DAILYROLLINGFILE(loggerName, fileName, schedule, nMaxBackupIndex)

#define EV_LOG_SOCKET(loggerName,strHost, nPort, strServerName)

///日志打印宏
#define EV_LOG_TRACE(loggerName, msg)

#define EV_LOG_DEBUG(loggerName, msg)

#define EV_LOG_INFO(loggerName, msg)

#define EV_LOG_WARN(loggerName, msg)

#define EV_LOG_ERROR(loggerName, msg)

#define EV_LOG_FATAL(loggerName, msg)

///关闭输出终端宏，如果不显式关闭，程序会在最后自动关闭
#define EV_LOG_CLOSE(loggerName, appenderType, fileName)

///设置日志调试级别
#define EV_LOG_SETLEVEL(loggerName, level)

#endif ///EV_LOG_DIABLE

#endif

