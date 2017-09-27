#ifndef __RenderWindow_H__
#define __RenderWindow_H__
#include "graphic/graphic_config.h"
#include "rendertarget.h"


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// <summary>
            /// 管理渲染窗体的目标
            /// </summary>
            class EV_GRAPHIC_DLL CRenderWindow : public EarthView::World::Graphic::CRenderTarget
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CRenderWindow(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CRenderWindow();
                /// <summary>
                /// 创建
                /// </summary>
                /// <param name="name">窗体的名称</param>
                /// <param name="width">窗体的宽度</param>
                /// <param name="height">窗体的高度</param>
                /// <param name="fullScreen">如果为true，窗体全屏显示</param>
                /// <param name="miscParams">指向专门平台的指针</param>
                /// <returns></returns>
                virtual void create(const EVString &name, ev_uint32 width, ev_uint32 height,
                                    ev_bool fullScreen, const EarthView::World::Core::NameValuePairList *miscParams);
                /// <summary>
                /// 设置是否全屏
                /// </summary>
                /// <param name="fullScreen">是否用全屏模型</param>
                /// <param name="width">新的宽度</param>
                /// <param name="height">新的高度</param>
                /// <returns></returns>
                virtual void setFullscreen(ev_bool fullScreen, ev_uint32 width, ev_uint32 height);

                /// <summary>
                /// 销毁
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void destroy();
                /// <summary>
                /// 改变窗体的大小
                /// </summary>
                /// <param name="width">窗体的宽度</param>
                /// <param name="height">窗体的高度</param>
                /// <returns></returns>
                virtual void resize(ev_uint32 width, ev_uint32 height);

                /// <summary>
                /// 通知窗体被移动或者尺寸被改变
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void windowMovedOrResized();
                /// <summary>
                /// 重新设置窗体位置
                /// </summary>
                /// <param name="left"></param>
                /// <param name="top"></param>
                /// <returns></returns>
                virtual void reposition(ev_int32 left, ev_int32 top);
                /// <summary>
                /// 判断窗体是否可见
                /// </summary>
                /// <param name=""></param>
                /// <returns>如果可见返回true,不可见返回false</returns>
                virtual ev_bool isVisible() const;
                /// <summary>
                /// 设置窗体的可见状态
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setVisible(ev_bool visible);
                ///zxt updatefor v1.8
                /** Indicates whether the window was set to hidden (not displayed)
                */
                virtual ev_bool isHidden() const
                {
                    return false;
                }
                /** Hide (or show) the window. If called with hidden=true, this
                	will make the window completely invisible to the user.
                @remarks
                	Setting a window to hidden is useful to create a dummy primary
                	RenderWindow hidden from the user so that you can create and
                	recreate your actual RenderWindows without having to recreate
                	all your resources.
                */
                virtual ev_void setHidden(ev_bool hidden)
                {
                    (ev_void)hidden;
                }
                /** Enable or disable vertical sync for the RenderWindow.
                */
                virtual ev_void setVSyncEnabled(ev_bool vsync)
                {
                    (ev_void)vsync;
                }
                /** Indicates whether vertical sync is activated for the window.
                */
                virtual ev_bool isVSyncEnabled() const
                {
                    return false;
                }
                /** Set the vertical sync interval. This indicates the number of vertical retraces to wait for
                  	before swapping buffers. A value of 1 is the default.
                */
                virtual ev_void setVSyncInterval(ev_uint32 interval)
                {
                    (ev_void)interval;
                }
                /** Returns the vertical sync interval.
                */
                virtual ev_uint32 getVSyncInterval() const
                {
                    return 1;
                }
                /// <summary>
                /// 是否处于活动状态
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool isActive() const;
                /// <summary>
                /// 是否关闭
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool isClosed() const;

                /// <summary>
                /// 是否为主窗体
                /// </summary>
                /// <param name=""></param>
                /// <returns>如果返回true则是主要窗体，否则返回false</returns>
                virtual ev_bool isPrimary() const;
                /// <summary>
                /// 是否全屏
                /// </summary>
                /// <param name=""></param>
                /// <returns>如果为true则运行全屏模型，否则返回false</returns>
                virtual ev_bool isFullScreen() const;
                /// <summary>
                /// 获得窗体的参数
                /// <param name="width">渲染目标的宽度</param>
                /// <param name="height">渲染目标的高度</param>
                /// <param name="colourDepth">渲染目标的颜色深度</param>
                /// <param name="left"></param>
                /// <param name="top"></param>
                /// <returns></returns>
                virtual void getMetrics(_inout ev_uint32 &width, _inout ev_uint32 &height, _inout ev_uint32 &colourDepth,
                                        _inout ev_int32 &left, _inout ev_int32 &top);
                //// Override since windows don't usually have alpha
                EarthView::World::Graphic::PixelFormat suggestPixelFormat() const;
                /// <summary>
                /// 当窗体失去焦点的时候，判断窗体是否处于活跃状态
                /// </summary>
                /// <param name=""></param>
                /// <returns>如果它自动不再活跃则返回true，否则返回false</returns>
                ev_bool isDeactivatedOnFocusChange() const;
                /// <summary>
                /// 当窗体失去焦点的时候，设置窗体是否处于活跃状态
                /// </summary>
                /// <param name="deactivate"></param>
                /// <returns></returns>
                void setDeactivateOnFocusChange(ev_bool deactivate);
            protected:
                ev_bool mIsFullScreen;
                ev_bool mIsPrimary;
                ev_bool mAutoDeactivatedOnFocusChange;
                ev_int32 mLeft;
                ev_int32 mTop;

                /// <summary>
                /// 设置主要窗体，只能被CRoot调用
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _setPrimary();

                friend class CRoot;
            };
            /** @} */
            /** @} */
        }
    }
}
/// Namespace
#endif

