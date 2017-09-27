#ifndef __LogManager_H__
#define __LogManager_H__

#pragma once
#include "core/graphic_log.h"

namespace EarthView
{
    namespace World
    {
        namespace Core
        {
            class CLogger;
        }
    }
}

namespace EarthView
{
    namespace World
    {
        namespace Core
        {

#if defined(EV_LOG_ENABLE) && EV_DEBUG_MODE
#define LOGNAME "EV_Graphic"
#define EV_GRAPHIC_LOG(msg)\
	do{\
		ev_writeGraphicLog(msg, __FILE__, __LINE__);\
	}while(0)
#define EV_GRAPHIC_LOG_CUSTOM(ptLog, msg)\
	do{\
		ev_writeGraphicLogCustom(ptLog, msg, __FILE__, __LINE__);\
	}while(0)
            void EV_CORE_DLL ev_writeGraphicLog(const EVString &msg, const ev_char *file, ev_int32 line);
            void EV_CORE_DLL ev_writeGraphicLogCustom(CLogger *logger, const EVString &msg, const ev_char *file, ev_int32 line);
#else
#define EV_GRAPHIC_LOG(msg)
#define EV_GRAPHIC_LOG_CUSTOM(ptLog, msg)
#endif
        }
    }
}

/*
namespace EarthView::World::Core
{

	// <summary>
	// 日志管理器类
	// 用于日志的创建和恢复
	// </summary>
    class EV_CORE_DLL CLogManager : public CAllocatedObject
    {
	private:
		static CLogManager* ms_Singleton;
	protected:
		typedef map<EVString, CLog*>	LogList;

        LogList mLogs;

        CLog* mDefaultLog;

    public:
		EV_AUTO_MUTEX

		// <summary>
		// 默认构造函数
		// </summary>
		// <param name=""></param>
		// <returns></returns>
        CLogManager();

		// <summary>
		// 析构函数
		// </summary>
		// <param name=""></param>
		// <returns></returns>
        ~CLogManager();

		// <summary>
		// 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
		// </summary>
		// <param name=""></param>
		// <returns>返回单体类的引用</returns>
		static CLogManager& getSingleton();

		// <summary>
		// 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
		// </summary>
		// <param name=""></param>
		// <returns>返回单体类的引用</returns>
		static CLogManager* getSingletonPtr();
   ev_private:

		// <summary>
		// 构造函数
		// </summary>
		// <param name="pList">构造函数参数键值对表</param>
		// <returns></returns>
		CLogManager(_in EarthView::World::Core::CNameValuePairList* pList);

	public:

		// <summary>
		// 根据给定的名字建立日志
		// </summary>
		// <param name="name">名字</param>
		// <returns>返回指向日志的指针</returns>
		CLog* createLog(_in const EVString& name);

		// <summary>
		// 根据给定的名字建立日志
		// </summary>
		// <param name="name">名字</param>
		// <param name="defaultLog">是否使用缺省的日志</param>
		// <returns>返回指向日志的指针</returns>
		CLog* createLog(_in const EVString& name,_in ev_bool defaultLog);

		// <summary>
		// 根据给定的名字建立日志
		// </summary>
		// <param name="name">名字</param>
		// <param name="defaultLog">是否使用缺省的日志</param>
		// <param name="debuggerOutput">是否在调试器中输出</param>
		// <returns>返回指向日志的指针</returns>
		CLog* createLog(_in const EVString& name,_in ev_bool defaultLog,_in ev_bool debuggerOutput);

		// <summary>
		// 根据给定的名字建立日志
		// </summary>
		// <param name="name">名字</param>
		// <param name="defaultLog">是否使用缺省的日志</param>
		// <param name="debuggerOutput">是否在调试器中输出</param>
		// <param name="suppressFileOutput">限制的文件是否输出</param>
		// <returns>返回指向日志的指针</returns>
        CLog* createLog(_in const EVString& name,_in ev_bool defaultLog,_in ev_bool debuggerOutput,
			_in ev_bool suppressFileOutput);

		// <summary>
		// 恢复日志
		// </summary>
		// <param name="name">日志名字</param>
		// <returns>返回指向日志的指针</returns>
        CLog* getLog(_in const EVString& name);

		// <summary>
		// 得到一个指向缺省日志的指针
		// </summary>
		// <param name=""></param>
		// <returns>返回指向缺省日志的指针</returns>
        CLog* getDefaultLog();

		// <summary>
		// 关闭并且移除已命名的日志
		// </summary>
		// <param name="name">日志的名字</param>
		// <returns></returns>
		void destroyLog(_in const EVString& name);

		// <summary>
		// 关闭并且移除日志
		// </summary>
		// <param name="log">指向日志的指针</param>
		// <returns></returns>
		void destroyLog(_in CLog* log);

		// <summary>
		// 将输入的日志作为缺省日志
		// </summary>
		// <param name="newLog">输入的日志</param>
		// <returns>返回指向缺省日志文件的指针</returns>
        CLog* setDefaultLog(_in CLog* newLog);

		// <summary>
		// 像缺省日志中写入消息
		// </summary>
		// <param name="message">消息</param>
		// <returns></returns>
		void logMessage(_in const EVString& message);

		// <summary>
		// 像缺省日志中写入消息
		// </summary>
		// <param name="message">消息</param>
		// <param name="">日至管理器的级别</param>
		// <returns></returns>
		void logMessage(_in const EVString& message,_in LogMessageLevel);

		// <summary>
		// 像缺省日志中写入消息
		// </summary>
		// <param name="message">消息</param>
		// <param name="">日至管理器的级别</param>
		// <param name="maskDebug">是否隐藏调试</param>
		// <returns></returns>
        void logMessage(_in const EVString& message,_in LogMessageLevel,
           _in ev_bool maskDebug);

		// <summary>
		// 像缺省日志中写入消息
		// </summary>
		// <param name="lml">日至管理器的级别</param>
		// <param name="message">消息</param>
		// <returns></returns>
		void logMessage(_in LogMessageLevel lml,_in const EVString& message);

		// <summary>
		// 像缺省日志中写入消息
		// </summary>
		// <param name="lml">日至管理器的级别</param>
		// <param name="message">消息</param>
		// <param name="maskDebug">是否隐藏调试</param>
		// <returns></returns>
        void logMessage(_in LogMessageLevel lml,_in const EVString& message,_in ev_bool maskDebug);

		// <summary>
		// 为缺省日志定义一个流
		// </summary>
		// <param name=""></param>
		// <param name=""></param>
		// <returns>返回流对象</returns>
		CLog::CStream stream();

		// <summary>
		// 为缺省日志定义一个流
		// </summary>
		// <param name="lml">日至管理器的级别</param>
		// <returns>返回流对象</returns>
		CLog::CStream stream(_in LogMessageLevel lml);

		// <summary>
		// 为缺省日志定义一个流
		// </summary>
		// <param name="lml">日至管理器的级别</param>
		// <param name="maskDebug">是否隐藏调试</param>
		// <returns>返回流对象</returns>
		CLog::CStream stream(_in LogMessageLevel lml,_in ev_bool maskDebug);

		// <summary>
		// 设置日志细节的级别
		// </summary>
		// <param name="ll">日志管理器级别</param>
		// <returns></returns>
        void setLogDetail(_in LoggingLevel ll);

    };
}
*/
#endif

