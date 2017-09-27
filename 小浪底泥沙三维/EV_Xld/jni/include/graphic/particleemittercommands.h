#ifndef __ParticleEmitterCommands_H__
#define __ParticleEmitterCommands_H__
#pragma once
#include "graphic/graphic_config.h"
#include "core/stringinterface.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {


            namespace EmitterCommands
            {


                /// <summary>
                /// 粒子发射器的命令对象
                /// 获得/设置偏离粒子发射方向最大角度参数
                /// </summary>
                class EV_GRAPHIC_DLL CCmdAngle : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdAngle(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdAngle();
                    /// <summary>
                    /// 获得EVString类型的角度值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的角度值</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置偏离粒子发射方向最大角度值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(void *target, const EVString &val);
                };

                /// <summary>
                /// 粒子发射器的命令对象
                /// 获得/设置发射粒子颜色参数
                /// </summary>
                class EV_GRAPHIC_DLL CCmdColour : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdColour(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdColour();
                    /// <summary>
                    /// 获得EVString类型的颜色值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的颜色值</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置发射粒子的颜色值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(void *target, const EVString &val);
                };
                /// <summary>
                /// 粒子发射器的命令对象
                /// 获得/设置发射粒子最小颜色值参数
                /// </summary>
                class EV_GRAPHIC_DLL CCmdColourRangeStart : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdColourRangeStart(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdColourRangeStart();
                    /// <summary>
                    /// 获得EVString类型的最小颜色值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的最小颜色值</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置发射粒子的最小颜色值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(void *target, const EVString &val);
                };

                /// <summary>
                /// 粒子发射器的命令对象
                /// 获得/设置发射粒子的最大颜色值参数
                /// </summary>
                class EV_GRAPHIC_DLL CCmdColourRangeEnd : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdColourRangeEnd(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdColourRangeEnd();
                    /// <summary>
                    /// 获得EVString类型的最大颜色值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的最大颜色值</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置发射粒子的最大颜色值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(void *target, const EVString &val);
                };
                /// <summary>
                /// 粒子发射器的命令对象
                /// 获得/设置粒子发射方向参数
                /// </summary>
                class EV_GRAPHIC_DLL CCmdDirection : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdDirection(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdDirection();
                    /// <summary>
                    /// 获得EVString类型的粒子发射方向值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的发射方向值</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置发射粒子发射方向值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(void *target, const EVString &val);
                };
                //// Command object for particle emitter  - see ParamCommand
                class EV_GRAPHIC_DLL CCmdUp : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdUp(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdUp();
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                /// <summary>
                /// 粒子发射器的命令对象
                /// 获得/设置粒子发射速度参数
                /// </summary>
                class EV_GRAPHIC_DLL CCmdEmissionRate : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdEmissionRate(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdEmissionRate();
                    /// <summary>
                    /// 获得EVString类型的粒子发射速度值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的发射速度值</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置发射粒子发射速度值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(void *target, const EVString &val);
                };

                /// <summary>
                /// 粒子发射器的命令对象
                /// 获得/设置发射粒子的初始速度参数
                /// </summary>
                class EV_GRAPHIC_DLL CCmdVelocity : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdVelocity(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdVelocity();
                    /// <summary>
                    /// 获得EVString类型的发射粒子的初始速度值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的初始速度值</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置发射粒子的初始速度值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(void *target, const EVString &val);
                };

                /// <summary>
                /// 粒子发射器的命令对象
                /// 获得/设置粒子发射的最小初始速度参数
                /// </summary>
                class EV_GRAPHIC_DLL CCmdMinVelocity : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdMinVelocity(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdMinVelocity();
                    /// <summary>
                    /// 获得EVString类型的粒子发射的最小初始速度值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的最小初始速度值</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置发射粒子的最小初始速度值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(void *target, const EVString &val);
                };
                /// <summary>
                /// 粒子发射器的命令对象
                /// 获得/设置粒子发射的最大初始速度参数
                /// </summary>
                class EV_GRAPHIC_DLL CCmdMaxVelocity : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdMaxVelocity(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdMaxVelocity();
                    /// <summary>
                    /// 获得EVString类型的粒子发射的最大初始速度值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的最大初始速度值</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置发射粒子的最大初始速度值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(void *target, const EVString &val);
                };

                /// <summary>
                /// 粒子发射器的命令对象
                /// 获得/设置每个粒子生存周期参数
                /// </summary>
                class EV_GRAPHIC_DLL CCmdTTL : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdTTL(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdTTL();
                    /// <summary>
                    /// 获得EVString类型的粒子生存周期值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的粒子生存周期值</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置发射粒子生存周期的值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(void *target, const EVString &val);
                };

                /// <summary>
                /// 粒子发射器的命令对象
                /// 获得/设置粒子的最短生存周期参数
                /// </summary>
                class EV_GRAPHIC_DLL CCmdMinTTL : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdMinTTL(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdMinTTL();
                    /// <summary>
                    /// 获得EVString类型的粒子的最短生存周期值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的粒子最短生存周期值</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置发射粒子最短生存周期的值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(void *target, const EVString &val);
                };

                /// <summary>
                /// 粒子发射器的命令对象
                /// 获得/设置粒子的最长生存周期参数
                /// </summary>
                class EV_GRAPHIC_DLL CCmdMaxTTL : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdMaxTTL(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdMaxTTL();
                    /// <summary>
                    /// 获得EVString类型的粒子的最长生存周期值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的粒子最长生存周期值</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置发射粒子最长生存周期的值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(void *target, const EVString &val);
                };

                /// <summary>
                /// 粒子发射器的命令对象
                /// 获得/设置粒子发射相对于粒子系统中心的位置参数
                /// </summary>
                class EV_GRAPHIC_DLL CCmdPosition : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdPosition(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdPosition();
                    /// <summary>
                    /// 获得EVString类型的粒子发射相对于粒子系统中心的位置的值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的粒子发射相对于粒子系统中心的位置值</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置粒子发射相对于粒子系统中心的位置的值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(void *target, const EVString &val);
                };

                /// <summary>
                /// 粒子发射器的命令对象
                /// 获得/设置发射器持续时间参数
                /// </summary>
                class EV_GRAPHIC_DLL CCmdDuration : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdDuration (_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdDuration ();
                    /// <summary>
                    /// 获得EVString类型的发射器持续时间的值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的发射器持续时间的值</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置发射器持续时间的值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(void *target, const EVString &val);
                };

                /// <summary>
                /// 粒子发射器的命令对象
                /// 获得/设置发射器最小持续时间参数
                /// </summary>
                class EV_GRAPHIC_DLL CCmdMinDuration : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdMinDuration(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdMinDuration();
                    /// <summary>
                    /// 获得EVString类型的发射器最小持续时间的值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的发射器最小持续时间的值</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置发射器最小持续时间的值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(void *target, const EVString &val);
                };
                /// <summary>
                /// 粒子发射器的命令对象
                /// 获得/设置发射器最大持续时间参数
                /// </summary>
                class EV_GRAPHIC_DLL CCmdMaxDuration : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdMaxDuration(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdMaxDuration();
                    /// <summary>
                    /// 获得EVString类型的发射器最大持续时间的值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的发射器最小持续时间的值</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置发射器最大持续时间的值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(void *target, const EVString &val);
                };

                /// <summary>
                /// 粒子发射器的命令对象
                /// 获得/设置发射器重复发射间隔的时间参数
                /// </summary>
                class EV_GRAPHIC_DLL CCmdRepeatDelay : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdRepeatDelay(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdRepeatDelay();
                    /// <summary>
                    /// 获得EVString类型的发射器重复发射间隔的时间的值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的发射器重复发射间隔的时间的值</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置发射器重复发射间隔的时间的值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(void *target, const EVString &val);
                };

                /// <summary>
                /// 粒子发射器的命令对象
                /// 获得/设置发射器重复发射最小间隔时间参数
                /// </summary>
                class EV_GRAPHIC_DLL CCmdMinRepeatDelay : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdMinRepeatDelay(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdMinRepeatDelay();
                    /// <summary>
                    /// 获得EVString类型的发射器重复发射最小间隔时间的值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的发射器重复发射最小间隔时间的值</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置发射器重复发射最小间隔时间的值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(void *target, const EVString &val);
                };

                /// <summary>
                /// 粒子发射器的命令对象
                /// 获得/设置发射器重复发射最大间隔时间参数
                /// </summary>
                class EV_GRAPHIC_DLL CCmdMaxRepeatDelay : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdMaxRepeatDelay(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdMaxRepeatDelay();
                    /// <summary>
                    /// 获得EVString类型的发射器重复发射最大间隔时间的值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的发射器重复发射最大间隔时间的值</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置发射器重复发射最大间隔时间的值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(void *target, const EVString &val);
                };

                /// <summary>
                /// 粒子发射器的命令对象
                /// 获得/设置发射器名称
                /// </summary>
                class EV_GRAPHIC_DLL CCmdName : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdName(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdName();
                    /// <summary>
                    /// 获得发射器的名称
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回发射器的名称</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置发射器的名称
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(void *target, const EVString &val);
                };
                /// <summary>
                /// 粒子发射器的命令对象
                /// 获得/设置发射粒子的发射器名称
                /// </summary>
                class EV_GRAPHIC_DLL CCmdEmittedEmitter : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdEmittedEmitter(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdEmittedEmitter();
                    /// <summary>
                    /// 获得发射粒子的发射器的名称
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回发射粒子的发射器的名称</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置发射粒子的发射器的名称
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(void *target, const EVString &val);
                };
            }

            /** @} */
            /** @} */
        }
    }
}



#endif

