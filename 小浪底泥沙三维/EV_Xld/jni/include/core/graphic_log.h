#ifndef __Log_H__
#define __Log_H__
#pragma once
#include "core/threaddefines.h"
#include "core/ev_string.h"
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

#define EV_LOG_THRESHOLD 4
            enum LoggingLevel
            {
                LL_LOW = 1,
                LL_NORMAL = 2,
                LL_BOREME = 3
            };
            enum LogMessageLevel
            {
                LML_TRIVIAL = 1,
                LML_NORMAL = 2,
                LML_CRITICAL = 3
            };
            class CLogListener
            {
            public:
                virtual ~CLogListener() {}
                virtual void messageLogged( const EVString &message, LogMessageLevel lml, ev_bool maskDebug, const EVString &logName );
            };
            /// <summary>
            /// 日志类
            /// 将调试和日志数据写入文件
            /// </summary>
            class CLog : public CAllocatedObject
            {
            protected:
                std::ofstream	mfpLog;
                LoggingLevel	mLogLevel;
                ev_bool			mDebugOut;
                ev_bool			mSuppressFile;
                ev_bool			mTimeStamp;
                EVString			mLogName;
                typedef vector<CLogListener *> mtLogListener;
                mtLogListener mListeners;
            ev_private:
                EV_AUTO_MUTEX
            public:
                class CStream;

                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">EVString类的引用</param>
                /// <returns></returns>
                CLog(_in const EVString &name);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">EVString类的引用</param>
                /// <param name="debugOutput">debug是否输出</param>
                /// <returns></returns>
                CLog(_in const EVString &name, _in ev_bool debugOutput);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">EVString类的引用</param>
                /// <param name="debugOutput">调试是否输出</param>
                /// <param name="suppressFileOutput">限制文件是否输出</param>
                /// <returns></returns>
                CLog(_in const EVString &name, _in ev_bool debugOutput, _in ev_bool suppressFileOutput);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CLog(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CLog();
                /// <summary>
                /// 得到日志的名字
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回日志名字</returns>
                const EVString &getName() const;
                /// <summary>
                /// 判断调试输出是否写入日志
                /// </summary>
                /// <param name=""></param>
                /// <returns>如果写入则返回true，否则返回false</returns>
                ev_bool isDebugOutputEnabled() const;
                /// <summary>
                /// 判断文件限制输出是否写入日志
                /// </summary>
                /// <param name=""></param>
                /// <returns>如果写入则返回true，否则返回false</returns>
                ev_bool isFileOutputSuppressed() const;

                /// <summary>
                /// 判断时间标记是否打印在日志上
                /// </summary>
                /// <param name=""></param>
                /// <returns>如果需要打印则返回true，否则返回false</returns>
                ev_bool isTimeStampEnabled() const;
                /// <summary>
                /// 向调试器和日志文件中写入消息
                /// </summary>
                /// <param name="message">消息</param>
                /// <returns></returns>
                void logMessage(_in const EVString &message);
                /// <summary>
                /// 向调试器和日志文件中写入消息
                /// </summary>
                /// <param name="message">消息</param>
                /// <param name="lml">日志管理器的级别</param>
                /// <returns></returns>
                void logMessage(_in const EVString &message, _in LogMessageLevel lml);
                /// <summary>
                /// 向调试器和日志文件中写入消息
                /// </summary>
                /// <param name="message">消息</param>
                /// <param name="lml">日志管理器的级别</param>
                /// <param name="maskDebug">是否隐藏调试</param>
                /// <returns></returns>
                void logMessage(_in const EVString &message, _in LogMessageLevel lml, _in ev_bool maskDebug);
                /// <summary>
                /// 定义一个流对象指向日志
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回流对象</returns>
                CStream stream();
                /// <summary>
                /// 定义一个流对象指向日志
                /// </summary>
                /// <param name="lml">日志管理器的级别</param>
                /// <returns>返回流对象</returns>
                CStream stream(_in LogMessageLevel lml);
                /// <summary>
                /// 定义一个流对象指向日志
                /// </summary>
                /// <param name="lml">日志管理器的级别</param>
                /// <param name="maskDebug">是否隐藏调试</param>
                /// <returns>返回流对象</returns>
                CStream stream(_in LogMessageLevel lml, _in ev_bool maskDebug);
                /// <summary>
                /// 是否向调试器输出日志消息
                /// </summary>
                /// <param name="debugOutput">调试是否输出</param>
                /// <returns></returns>
                void setDebugOutputEnabled(_in ev_bool debugOutput);
                /// <summary>
                /// 设置日志细节的级别
                /// </summary>
                /// <param name="ll">日志级别</param>
                /// <returns></returns>
                void setLogDetail(_in LoggingLevel ll);
                /// <summary>
                /// 是否设置时间标记
                /// </summary>
                /// <param name="timeStamp">时间标记是否添加</param>
                /// <returns></returns>
                void setTimeStampEnabled(_in ev_bool timeStamp);

                /// <summary>
                /// 获得日志细节的级别
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回日志级别</returns>
                LoggingLevel getLogDetail() const;
                /// <summary>
                /// 给日志注册一个监听
                /// </summary>
                /// <param name="listener">指向CLogListener类的指针</param>
                /// <returns></returns>
                void addListener(_in CLogListener *listener);
                /// <summary>
                /// 将日志的一个监听的注册撤销
                /// </summary>
                /// <param name="listener">指向CLogListener类的指针</param>
                /// <returns></returns>
                void removeListener(_in CLogListener *listener);
                class CStream 			///非导出类
                {
                protected:
                    CLog *mTarget;
                    LogMessageLevel mLevel;
                    ev_bool mMaskDebug;
                    typedef CStringUtil::StrStreamType BaseStream;
                    BaseStream mCache;
                public:
                    struct Flush {};
                    CStream(CLog *target, LogMessageLevel lml, ev_bool maskDebug): mTarget(target), mLevel(lml), mMaskDebug(maskDebug) {}
                    /// copy constructor
                    CStream(const CStream &rhs): mTarget(rhs.mTarget), mLevel(rhs.mLevel),	mMaskDebug(rhs.mMaskDebug)
                    {
                        mCache.str(rhs.mCache.str());
                    }
                public:
                    ~CStream()
                    {
                        if (mCache.tellp() > 0)
                        {
                            mTarget->logMessage(mCache.str().c_str(), mLevel, mMaskDebug);
                        }
                    }
                    template <typename T>
                    CStream &operator<< (const T &v)
                    {
                        mCache << v;
                        return *this;
                    }
                    CStream &operator<< (const Flush &v)
                    {
                        mTarget->logMessage(mCache.str().c_str(), mLevel, mMaskDebug);
                        EVString s = CStringUtil::BLANK;
                        mCache.str(s.c_str());
                        return *this;
                    }
                };
            };
        }
    }
}

#endif

