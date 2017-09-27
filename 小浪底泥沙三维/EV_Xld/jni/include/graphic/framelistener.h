#ifndef __FrameListener_H__
#define __FrameListener_H__
#include <mathengine/ev_math.h>
#include "graphic_config.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// <summary>
            /// 包含帧事件的信息
            /// </summary>
            struct FrameEvent
            {
                ///从最后一个事件消耗的时间
                Real timeSinceLastEvent;

                ///从最后一个同样类型事件消耗的时间（帧时间）
                Real timeSinceLastFrame;
            };
            /// <summary>
            /// 接口类，定义了一个帧监听器，用来获得帧事件的通知
            /// </summary>
            class EV_GRAPHIC_DLL CFrameListener: public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CFrameListener(_in EarthView::World::Core::CNameValuePairList *pList) {}

            public:

                /// <summary>
                /// 帧渲染之前调用
                /// </summary>
                /// <param name="evt"></param>
                /// <returns></returns>
                virtual ev_bool frameStarted(const EarthView::World::Graphic::FrameEvent &evt)
                {
                    evt;
                    return true;
                }

                /// <summary>
                /// 视口更新之后调用
                /// </summary>
                /// <param name="evt"></param>
                /// <returns></returns>
                virtual ev_bool frameRenderingQueued(const EarthView::World::Graphic::FrameEvent &evt)
                {
                    evt;
                    return true;
                }
                /// <summary>
                /// 帧渲染之后被调用
                /// </summary>
                /// <param name="evt"></param>
                /// <returns></returns>
                virtual ev_bool frameEnded(const EarthView::World::Graphic::FrameEvent &evt)
                {
                    evt;
                    return true;
                }
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CFrameListener() {}
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CFrameListener() {}

            };
        }
    }
}

#endif

