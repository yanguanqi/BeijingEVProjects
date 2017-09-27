#ifndef __ControllerManager_H__
#define __ControllerManager_H__
#pragma once
#include "graphic/graphic_config.h"
#include "controller.h"
#include "gpuprogramparams.h"
#include "textureunitstate.h"
#include <core/sharedptr.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// <summary>
            /// 控制器管理类
            /// 对控制器的一些操作，包括控制器的创建、注册、更新等
            /// </summary>
            class EV_GRAPHIC_DLL CControllerManager : public EarthView::World::Core::CAllocatedObject
            {
            private:
                static EarthView::World::Graphic::CControllerManager *ms_Singleton;
            protected:
                typedef set<EarthView::World::Graphic::CController *> ControllerList;
                ControllerList mControllers;
                EarthView::World::Graphic::ControllerValueRealPtr mFrameTimeController;

                EarthView::World::Graphic::ControllerFunctionRealPtr mPassthroughFunction;
                ev_uint32 mLastFrameNumber;
            public:
                /// <summary>
                /// 默认的构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CControllerManager();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CControllerManager(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CControllerManager();
                /// <summary>
                /// 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回单体类的引用</returns>
                static EarthView::World::Graphic::CControllerManager &getSingleton();
                /// <summary>
                /// 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回单体类的引用</returns>
                static EarthView::World::Graphic::CControllerManager *getSingletonPtr();

                /// <summary>
                /// 用控制器的管理器来建立和注册控制器
                /// </summary>
                /// <param name="src">来源值</param>
                /// <param name="dest">目标值</param>
                /// <param name="func">功能作用</param>
                /// <returns>返回指向控制器的指针</returns>
                EarthView::World::Graphic::CController *createController(_in const EarthView::World::Graphic::ControllerValueRealPtr &src,
                                              _in const EarthView::World::Graphic::ControllerValueRealPtr &dest, _in const EarthView::World::Graphic::ControllerFunctionRealPtr &func);
                /// <summary>
                /// 建立一个时间帧的控制器
                /// </summary>
                /// <param name="dest">目标值</param>
                /// <returns>返回指向控制器的指针</returns>
                EarthView::World::Graphic::CController *createFrameTimePassthroughController(
                    _in const EarthView::World::Graphic::ControllerValueRealPtr &dest);
                /// <summary>
                /// 去除所有存在的控制器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clearControllers();
                /// <summary>
                /// 更新所有注册的控制器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void updateAllControllers();
                /// <summary>
                /// 将最后一个时间帧作为控制值的来源
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回控制值</returns>
                const EarthView::World::Graphic::ControllerValueRealPtr &getFrameTimeSource() const;
                /// <summary>
                /// 检索一个控制器的功能
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回控制功能的引用</returns>
                const EarthView::World::Graphic::ControllerFunctionRealPtr &getPassthroughControllerFunction() const;
                /// <summary>
                /// 建立一个滚动纹理的控制器
                /// </summary>
                /// <param name="layer">纹理层</param>
                /// <param name="sequenceTime">时间帧</param>
                /// <returns>返回指向控制器的指针</returns>
                EarthView::World::Graphic::CController *createTextureAnimator(_in EarthView::World::Graphic::CTextureUnitState *ref_layer, _in Real sequenceTime);
                /// <summary>
                /// 建立一个滚动纹理的控制器，是建立在水平和竖直方向上的
                /// </summary>
                /// <param name="layer">纹理层</param>
                /// <param name="speed">变动的速度</param>
                /// <returns>返回指向控制器的指针</returns>
                EarthView::World::Graphic::CController *createTextureUVScroller(_in EarthView::World::Graphic::CTextureUnitState *ref_layer, _in Real speed);
                /// <summary>
                /// 建立一个滚动纹理的控制器，是建立在水平面上的
                /// </summary>
                /// <param name="layer">纹理层</param>
                /// <param name="uspeed">水平变动的速度</param>
                /// <returns>返回指向控制器的指针</returns>
                EarthView::World::Graphic::CController *createTextureUScroller(_in EarthView::World::Graphic::CTextureUnitState *ref_layer, _in Real uSpeed);
                /// <summary>
                /// 建立一个滚动纹理的控制器，是建立在垂直面上的
                /// </summary>
                /// <param name="layer">纹理层</param>
                /// <param name="uspeed">垂直变动的速度</param>
                /// <returns>返回指向控制器的指针</returns>
                EarthView::World::Graphic::CController *createTextureVScroller(_in EarthView::World::Graphic::CTextureUnitState *ref_layer, _in Real vSpeed);
                /// <summary>
                /// 建立一个旋转纹理的控制器
                /// </summary>
                /// <param name="layer">纹理层</param>
                /// <param name="speed">变动的速度</param>
                /// <returns>返回指向控制器的指针</returns>
                EarthView::World::Graphic::CController *createTextureRotater(_in EarthView::World::Graphic::CTextureUnitState *ref_layer, _in Real speed);
                /// <summary>
                /// 建立基于时间的灵活纹理变换
                /// </summary>
                /// <param name="layer">纹理层</param>
                /// <param name="ttype">变换类型</param>
                /// <param name="waveType">变换波形类型</param>
                /// <returns>返回指向控制器的指针</returns>
                EarthView::World::Graphic::CController *createTextureWaveTransformer(_in EarthView::World::Graphic::CTextureUnitState *ref_layer, _in EarthView::World::Graphic::CTextureUnitState::TextureTransformType ttype,
                        _in EarthView::World::Graphic::WaveformType waveType);
                /// <summary>
                /// 建立基于时间的灵活纹理变换
                /// </summary>
                /// <param name="layer">纹理层</param>
                /// <param name="ttype">变换类型</param>
                /// <param name="waveType">变换波形类型</param>
                /// <param name="base">输出的基本值</param>
                /// <returns>返回指向控制器的指针</returns>
                EarthView::World::Graphic::CController *createTextureWaveTransformer(_in EarthView::World::Graphic::CTextureUnitState *ref_layer, _in EarthView::World::Graphic::CTextureUnitState::TextureTransformType ttype,
                        _in EarthView::World::Graphic::WaveformType waveType, _in Real base);
                /// <summary>
                /// 建立基于时间的灵活纹理变换
                /// </summary>
                /// <param name="layer">纹理层</param>
                /// <param name="ttype">变换类型</param>
                /// <param name="waveType">变换波形类型</param>
                /// <param name="base">输出的基本值</param>
                /// <param name="frequency">频数</param>
                /// <returns>返回指向控制器的指针</returns>
                EarthView::World::Graphic::CController *createTextureWaveTransformer(_in EarthView::World::Graphic::CTextureUnitState *ref_layer, _in EarthView::World::Graphic::CTextureUnitState::TextureTransformType ttype,
                        _in EarthView::World::Graphic::WaveformType waveType, _in Real base, _in Real frequency);
                /// <summary>
                /// 建立基于时间的灵活纹理变换
                /// </summary>
                /// <param name="layer">纹理层</param>
                /// <param name="ttype">变换类型</param>
                /// <param name="waveType">变换波形类型</param>
                /// <param name="base">输出的基本值</param>
                /// <param name="frequency">频数</param>
                /// <param name="phase">波形起始的偏移</param>
                /// <returns>返回指向控制器的指针</returns>
                EarthView::World::Graphic::CController *createTextureWaveTransformer(_in EarthView::World::Graphic::CTextureUnitState *ref_layer, _in EarthView::World::Graphic::CTextureUnitState::TextureTransformType ttype,
                        _in EarthView::World::Graphic::WaveformType waveType, _in Real base, _in Real frequency, _in Real phase);
                /// <summary>
                /// 建立基于时间的灵活纹理变换
                /// </summary>
                /// <param name="layer">纹理层</param>
                /// <param name="ttype">变换类型</param>
                /// <param name="waveType">变换波形类型</param>
                /// <param name="base">输出的基本值</param>
                /// <param name="frequency">频数</param>
                /// <param name="phase">波形起始的偏移</param>
                /// <param name="amplitude">振幅</param>
                /// <returns>返回指向控制器的指针</returns>
                EarthView::World::Graphic::CController *createTextureWaveTransformer(_in EarthView::World::Graphic::CTextureUnitState *ref_layer, _in EarthView::World::Graphic::CTextureUnitState::TextureTransformType ttype,
                        _in EarthView::World::Graphic::WaveformType waveType, _in Real base, _in Real frequency, _in Real phase, _in Real amplitude);
                /// <summary>
                /// 建立一个控制器，来给顶点或片段的程序参数传递一个时间帧值
                /// </summary>
                /// <param name="params">参数</param>
                /// <param name="paramIndex">需要更新的参数索引</param>
                /// <returns>返回指向控制器的指针</returns>
                EarthView::World::Graphic::CController *createGpuProgramTimerParam(_in EarthView::World::Graphic::GpuProgramParametersSharedPtr params, _in ev_size_t paramIndex);
                /// <summary>
                /// 建立一个控制器，来给顶点或片段的程序参数传递一个时间帧值
                /// </summary>
                /// <param name="params">参数</param>
                /// <param name="paramIndex">需要更新的参数索引</param>
                /// <param name="timeFactor">时间调整的长度</param>
                /// <returns>返回指向控制器的指针</returns>
                EarthView::World::Graphic::CController *createGpuProgramTimerParam(_in EarthView::World::Graphic::GpuProgramParametersSharedPtr params, _in ev_size_t paramIndex,
                                                        _in Real timeFactor);
                /// <summary>
                /// 删除指定的控制器
                /// </summary>
                /// <param name="controller">指向需要删除的控制器的指针</param>
                /// <returns></returns>
                void destroyController(_in EarthView::World::Graphic::CController *controller);
                /// <summary>
                /// 得到时间的相关速度
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回速度</returns>
                Real getTimeFactor() const;
                /// <summary>
                /// 设置速度来更新控制器的时间帧
                /// </summary>
                /// <param name="tf">速度（并不是真的时间速度，1.0是真实的时间）</param>
                /// <returns></returns>
                void setTimeFactor(_in Real tf);
                /// <summary>
                /// 得到帧之间的时间差
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回时间差</returns>
                Real getFrameDelay() const;
                /// <summary>
                /// 设置帧的速率
                /// </summary>
                /// <param name="fd">速率（1.0f / 25.0f意思就是1秒钟播放25帧的动画）</param>
                /// <returns></returns>
                void setFrameDelay(_in Real fd);
                /// <summary>
                /// 得到已经过去的时间
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回过去的时间</returns>
                Real getElapsedTime() const;
                /// <summary>
                /// 设置已经过去的时间
                /// </summary>
                /// <param name="elapsedTime">已经过去的时间</param>
                /// <returns></returns>
                void setElapsedTime(_in Real elapsedTime);
            };
        }
    }
}

#endif

