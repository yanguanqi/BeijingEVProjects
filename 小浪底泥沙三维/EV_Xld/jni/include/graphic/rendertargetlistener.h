#ifndef __RenderTargetListener_H__
#define __RenderTargetListener_H__

#include <core/memoryallocatedobject.h>
#include "graphic_config.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CRenderTarget;
            class CViewport;

            /// <summary>
            /// 包含渲染目标事件的信息
            /// </summary>
            class EV_GRAPHIC_DLL RenderTargetEvent : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                RenderTargetEvent(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                RenderTargetEvent() {}
                //// The source of the event being raised
                EarthView::World::Graphic::CRenderTarget *source;
            };
            /// <summary>
            /// 包含渲染目标特殊视口事件的信息
            /// </summary>
            class EV_GRAPHIC_DLL RenderTargetViewportEvent : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                RenderTargetViewportEvent(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                RenderTargetViewportEvent() {}
                //// The source of the event being raised
                EarthView::World::Graphic::CViewport *source;
            };
            /// <summary>
            /// 接口类，定义了一个监听器可以被用来获得渲染目标事件的通知
            /// </summary>
            class EV_GRAPHIC_DLL CRenderTargetListener: public EarthView::World::Core::CAllocatedObject
            {

            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CRenderTargetListener(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CRenderTargetListener() {}
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CRenderTargetListener() {}

                /// <summary>
                /// 在渲染目标被渲染之前调用
                /// </summary>
                /// <param name="evt"></param>
                /// <returns></returns>
                virtual void preRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent &evt)
                {
                   // evt;
                }
                /// <summary>
                /// 在渲染目标被渲染之后调用
                /// </summary>
                /// <param name="evt"></param>
                /// <returns></returns>
                virtual void postRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent &evt)
                {
                   // evt;
                }
                /// <summary>
                /// 在视口被更新前调用
                /// </summary>
                /// <param name="evt"></param>
                /// <returns></returns>
                virtual void preViewportUpdate(const EarthView::World::Graphic::RenderTargetViewportEvent &evt)
                {
                   // evt;
                }
                /// <summary>
                /// 在视口被更新后调用
                /// </summary>
                /// <param name="evt"></param>
                /// <returns></returns>
                virtual void postViewportUpdate(const EarthView::World::Graphic::RenderTargetViewportEvent &evt)
                {
                   // evt;
                }
                /// <summary>
                /// 通知监听器视口已经被加到正在讨论渲染目标中
                /// </summary>
                /// <param name="evt"></param>
                /// <returns></returns>
                virtual void viewportAdded(const EarthView::World::Graphic::RenderTargetViewportEvent &evt)
                {
                   // evt;
                }
                /** Called to notify listener that a EarthView::World::Graphic::CViewport has been removed from the
                	target in question.
                */
                /// <summary>
                /// 通知监听器视口已经从正在讨论的渲染目标中去除掉
                /// </summary>
                /// <param name="evt"></param>
                /// <returns></returns>
                virtual void viewportRemoved(const EarthView::World::Graphic::RenderTargetViewportEvent &evt)
                {
                   // evt;
                }
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

