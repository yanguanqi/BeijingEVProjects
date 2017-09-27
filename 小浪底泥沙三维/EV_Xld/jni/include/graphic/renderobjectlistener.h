#ifndef __RenderObjectListener_H__
#define __RenderObjectListener_H__
#include "graphic/graphic_config.h"
#include "prerequisites.h"
#include "renderable.h"
#include "pass.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CPass;
            class CRenderable;
            /// <summary>
            /// 当单个渲染对象将被渲染时，如果希望从场景管理中获得事件，就必须执行该抽象接口
            /// </summary>
            class EV_GRAPHIC_DLL CRenderObjectListener : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CRenderObjectListener(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CRenderObjectListener() {}
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CRenderObjectListener() {}
                /// <summary>
                /// 开始渲染单个对象时调用该事件
                /// </summary>
                /// <param name="rend">渲染接口</param>
                /// <param name="pass">渲染通路</param>
                /// <param name="source">动态参数源</param>
                /// <param name="pLightList">光照列表</param>
                /// <param name="suppressRenderStateChanges">抑制渲染状态改变的参数</param>
                /// <returns></returns>
                virtual void notifyRenderSingleObjectStarted(EarthView::World::Graphic::CRenderable *rend, const EarthView::World::Graphic::CPass *pass, const EarthView::World::Graphic::CAutoParamDataSource *source,
                                                      const EarthView::World::Graphic::LightList *pLightList, ev_bool suppressRenderStateChanges)
                {
                    
                }

                virtual void notifyRenderSingleObjectEnd(EarthView::World::Graphic::CRenderable *rend, const EarthView::World::Graphic::CPass *pass, const EarthView::World::Graphic::CAutoParamDataSource *source,
                    const EarthView::World::Graphic::LightList *pLightList, ev_bool suppressRenderStateChanges)
                {
                    
                }
            };

        }
    }
}

#endif

