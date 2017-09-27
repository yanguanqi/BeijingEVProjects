#ifndef EV_CORE_TIME_H
#define EV_CORE_TIME_H
#pragma once
#include "core/object.h"
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            /// <summary>
            /// 时间类
            /// 可以使用该类获得当前系统时间，并提供计时功能
            /// </summary>
            class EV_CORE_DLL CCoreTime : public EarthView::World::Core::CBaseObject
            {
                friend class TestCTime;
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CCoreTime();
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="y">年</param>
                /// <param name="mon">月</param>
                /// <param name="d">日</param>
                /// <param name="h">时</param>
                /// <param name="m">分</param>
                /// <param name="s">秒</param>
                /// <param name="ms">毫秒</param>
                /// <returns></returns>
                CCoreTime(ev_int32 y, ev_int32 mon, ev_int32 d, ev_int32 h, ev_int32 m, ev_int32 s, ev_int32 ms);
            ev_private:
                CCoreTime(EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CCoreTime();
                /// <summary>
                /// 时间是否为空，未初始化
                /// </summary>
                /// <param name=""></param>
                /// <returns>为空返回true，否则返回false</returns>
                ev_bool isNull() const;
                /// <summary>
                /// 时间是否有效
                /// </summary>
                /// <param name=""></param>
                /// <returns>有效返回true，否则返回false</returns>
                ev_bool isValid() const;
                /// <summary>
                /// 获得年份
                /// </summary>
                /// <param name=""></param>
                /// <returns>年份</returns>
                ev_int32 year() const;
                /// <summary>
                /// 获得月份
                /// </summary>
                /// <param name=""></param>
                /// <returns>月份</returns>
                ev_int32 month() const;
                /// <summary>
                /// 获得日期
                /// </summary>
                /// <param name=""></param>
                /// <returns>日期</returns>
                ev_int32 day() const;
                /// <summary>
                /// 获得当天的小时数，24小时制
                /// </summary>
                /// <param name=""></param>
                /// <returns>小时</returns>
                ev_int32 hour() const;
                /// <summary>
                /// 获得当前小时的分钟数
                /// </summary>
                /// <param name=""></param>
                /// <returns>分钟数</returns>
                ev_int32 minute() const;
                /// <summary>
                /// 获得当前分钟的秒数
                /// </summary>
                /// <param name=""></param>
                /// <returns>秒数</returns>
                ev_int32 second() const;
                /// <summary>
                /// 获得当前秒的毫秒数
                /// </summary>
                /// <param name=""></param>
                /// <returns>毫秒数</returns>
                ev_int32 msec() const;
                /// <summary>
                /// 获得当月的天数
                /// </summary>
                /// <param name="y">年</param>
                /// <param name="mon">月</param>
                /// <returns>天数</returns>
                ev_int32 daysofmonth(ev_int32 y, ev_int32 mon) const;
                /// <summary>
                /// 设置年份
                /// </summary>
                /// <param name="y">年份</param>
                /// <returns>成功返回true，否则返回false</returns>
                ev_bool setYear(ev_int32 y);
                /// <summary>
                /// 设置月份
                /// </summary>
                /// <param name="mon">月份</param>
                /// <returns>成功返回true，否则返回false</returns>
                ev_bool setMonth(ev_int32 mon);
                /// <summary>
                /// 设置日期
                /// </summary>
                /// <param name="d">日期</param>
                /// <returns>成功返回true，否则返回false</returns>
                ev_bool setDay(ev_int32 d);
                /// <summary>
                /// 设置时间
                /// </summary>
                /// <param name="y">年</param>
                /// <param name="mon">月</param>
                /// <param name="d">日</param>
                /// <param name="h">时</param>
                /// <param name="m">分</param>
                /// <param name="s">秒</param>
                /// <param name="ms">毫秒</param>
                /// <returns>成功返回true，否则返回false</returns>
                ev_bool setTime(ev_int32 y, ev_int32 mon, ev_int32 d, ev_int32 h, ev_int32 m, ev_int32 s, ev_int32 ms);
                /// <summary>
                /// 设置当天的时分秒毫秒
                /// </summary>
                /// <param name="h">时</param>
                /// <param name="m">分</param>
                /// <param name="s">秒</param>
                /// <param name="ms">毫秒</param>
                /// <returns>成功返回true，否则返回false</returns>
                ev_bool setHMS(ev_int32 h, ev_int32 m, ev_int32 s, ev_int32 ms);
                /// <summary>
                /// 获得本时间到给定时间的时间差，以秒为单位
                /// </summary>
                /// <param name="t">给定时间</param>
                /// <returns>时间差（秒数）</returns>
                ev_int32 secsTo(const EarthView::World::Core::CCoreTime &t) const;
                /// <summary>
                /// 拨动年
                /// </summary>
                /// <param name="y">年</param>
                /// <param name="onlyy">只修改年为true</param>
                /// <returns>更改后的时间</returns>
                EarthView::World::Core::CCoreTime addYear(ev_int32 y) const;
                /// <summary>
                /// 拨动月
                /// </summary>
                /// <param name="mon">月数</param>
                /// <param name="onlymon">只修改月时为true</param>
                /// <returns>更改后的时间</returns>
                EarthView::World::Core::CCoreTime addMon(ev_int32 mon, ev_bool onlymon = FALSE) const;
                /// <summary>
                /// 拨动天数
                /// </summary>
                /// <param name="d">天数</param>
                /// <returns>更改后的时间</returns>
                EarthView::World::Core::CCoreTime addDay(ev_int32 d) const;
                /// <summary>
                /// 拨动时针
                /// </summary>
                /// <param name="h">小时数</param>
                /// <returns>更改后的时间</returns>
                EarthView::World::Core::CCoreTime addHour(ev_int32 h) const;
                /// <summary>
                /// 拨动分针
                /// </summary>
                /// <param name="min">分钟数</param>
                /// <returns>更改后的时间</returns>
                EarthView::World::Core::CCoreTime addMin(ev_int32 min) const;
                /// <summary>
                /// 拨动秒针
                /// </summary>
                /// <param name="secs">秒数</param>
                /// <returns>更改后的时间</returns>
                EarthView::World::Core::CCoreTime addSecs(ev_int32 secs) const;
                /// <summary>
                /// 拨动毫秒针
                /// </summary>
                /// <param name="ms">毫秒数</param>
                /// ms + m_nMillisecondsOfDay < 2147483647
                /// 2147483647 = 24*MSECS_PER_DAY + 73883647
                /// 故限定 ms <= 23*MSECS_PER_DAY
                /// <returns>更改后的时间</returns>
                EarthView::World::Core::CCoreTime addMSecs(ev_int32 ms) const;
                /// <summary>
                /// 获得本时间到给定时间的时间差，以毫秒为单位
                /// </summary>
                /// <param name="t">给定时间</param>
                /// <returns>时间差（毫秒数）</returns>
                ev_int32 msecsTo(const EarthView::World::Core::CCoreTime &t) const;
                /// <summary>
                /// 重载==运算符
                /// </summary>
                /// <param name="other">右操作数</param>
                /// <returns>相等返回true，否则返回false</returns>
                ev_bool operator==(const EarthView::World::Core::CCoreTime &other) const;
                /// <summary>
                /// 重载!=运算符
                /// </summary>
                /// <param name="other">右操作数</param>
                /// <returns>不相等返回true，否则返回false</returns>
                ev_bool operator!=(const EarthView::World::Core::CCoreTime &other) const;
                /// <summary>
                /// 重载<运算符
                /// </summary>
                /// <param name="other">右操作数</param>
                /// <returns>小于返回true，否则返回false</returns>
                ev_bool operator<(const EarthView::World::Core::CCoreTime &other) const;
                /// <summary>
                /// 重载<=运算符
                /// </summary>
                /// <param name="other">右操作数</param>
                /// <returns>小于等于返回true，否则返回false</returns>
                ev_bool operator<=(const EarthView::World::Core::CCoreTime &other) const;
                /// <summary>
                /// 重载>运算符
                /// </summary>
                /// <param name="other">右操作数</param>
                /// <returns>大于返回true，否则返回false</returns>
                ev_bool operator>(const EarthView::World::Core::CCoreTime &other) const;
                /// <summary>
                /// 重载>=运算符
                /// </summary>
                /// <param name="other">右操作数</param>
                /// <returns>大于等于返回true，否则返回false</returns>
                ev_bool operator>=(const EarthView::World::Core::CCoreTime &other) const;
                /// <summary>
                /// 获得当前系统时间
                /// </summary>
                /// <param name=""></param>
                /// <returns>当前系统时间</returns>
                static EarthView::World::Core::CCoreTime currentTime();
                static ev_uint32 getTickCount();
                /// <summary>
                /// 判断给定时间是否有效
                /// </summary>
                /// <param name="y">年</param>
                /// <param name="mon">月</param>
                /// <param name="d">日</param>
                /// <param name="h">时</param>
                /// <param name="m">分</param>
                /// <param name="s">秒</param>
                /// <param name="ms">毫秒</param>
                /// <returns>有效返回true，否则返回false</returns>
                static ev_bool isValid(ev_int32 y, ev_int32 mon, ev_int32 d, ev_int32 h, ev_int32 m, ev_int32 s, ev_int32 ms);
                /// <summary>
                /// 从当前时间开始计时
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void start();
                /// <summary>
                /// 返回从开始计时起经过了多少毫秒并重新开始计时
                /// </summary>
                /// <param name=""></param>
                /// <returns>毫秒数</returns>
                ev_int32 restart();
                /// <summary>
                /// 返回从计时起经过了多少毫秒
                /// </summary>
                /// <param name=""></param>
                /// <returns>毫秒数</returns>
                ev_int32 elapsed() const;
                /// <summary>
                /// 获得当天经过了多少毫秒
                /// </summary>
                /// <param name=""></param>
                /// <returns>毫秒数</returns>
                ev_uint32 getDs() const;
                /// <summary>
                /// 设置当天已经过的毫秒数
                /// </summary>
                /// <param name="value">毫秒数</param>
                /// <returns></returns>
                void setDs(ev_uint32 value);
                /// <summary>
                /// 重载=运算符
                /// </summary>
                /// <param name="time">右操作数</param>
                /// <returns>本对象</returns>
                EarthView::World::Core::CCoreTime &operator=(const EarthView::World::Core::CCoreTime &time);

				/// <summary>
				/// 当前时间转换成字符串
				/// Y_M_D_H_M_S_MS
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				EVString toString();
            private:
                ev_int32 m_nYear;
                ev_int32 m_nMonth;
                ev_int32 m_nDay;
                ev_int32 m_nMillisecondsOfDay;
                ev_uint32 m_nTickCount;
            };
			typedef EarthView::World::Core::CCoreTime CTime;
        }
    }
}

#endif

