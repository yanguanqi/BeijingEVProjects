#ifndef __RenderQueueListener_H__
#define __RenderQueueListener_H__
#include "graphic/graphic_config.h"
#include <core/stringdefines.h>
#include "renderqueue.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// <summary>
            /// 如果希望从渲染队列中获得事件就必须执行该抽象接口
            /// </summary>
            class EV_GRAPHIC_DLL CRenderQueueListener: public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CRenderQueueListener(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CRenderQueueListener() {}
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CRenderQueueListener() {}
                /// <summary>
                /// 在所有渲染队列被执行前事件通知
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void preRenderQueues() {}
                /// <summary>
                /// 在所有渲染队列被执行后事件通知
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void postRenderQueues() {}
                /// <summary>
                /// 在渲染队列组被渲染之前事件通知
                /// </summary>
                /// <param name="queueGroupId">队列组的ID号</param>
                /// <param name="invocation"></param>
                /// <param name="skipThisInvocation"></param>
                /// <returns></returns>
                virtual void renderQueueStarted(EarthView::World::Graphic::CSceneManager* pSceneMgr,ev_uint8 queueGroupId, const EVString &invocation,
                                                ev_bool &skipThisInvocation)
                {
					//queueGroupId;
					//invocation;
					//skipThisInvocation;
                }
                /// <summary>
                /// 在渲染队列组被渲染之后事件通知
                /// </summary>
                /// <param name="queueGroupId">队列组的ID号</param>
                /// <param name="invocation"></param>
                /// <param name="skipThisInvocation"></param>
                /// <returns></returns>
                virtual void renderQueueEnded(EarthView::World::Graphic::CSceneManager* pSceneMgr,ev_uint8 queueGroupId, const EVString &invocation,
                                              _inout ev_bool &repeatThisInvocation)
                {
                    //queueGroupId;
                    //invocation;
                    //repeatThisInvocation;
                }
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

