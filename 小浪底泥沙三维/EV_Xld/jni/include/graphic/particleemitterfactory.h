#ifndef __ParticleEmitterFactory_H__
#define __ParticleEmitterFactory_H__
#pragma once
#include "graphic/graphic_config.h"
#include "particleemitter.h"
#include "core/ev_string.h"
#include <core/graphic_exception.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// <summary>
            /// 抽象类
            /// 定义了EarthView::World::Graphic::CParticleEmitter子类执行的接口
            /// </summary>
            class EV_GRAPHIC_DLL CParticleEmitterFactory : public EarthView::World::Core::CAllocatedObject
            {
            protected:
                vector<EarthView::World::Graphic::CParticleEmitter *> mEmitters;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CParticleEmitterFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CParticleEmitterFactory() {}
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CParticleEmitterFactory();
                /// <summary>
                /// 返回工厂的名字，其标识了该工厂创建粒子发射器的类型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EVString getName() const
                {
                    EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                }
                /// <summary>
                /// 创建一个新的粒子发射器的实例
                /// </summary>
                /// <param name="psys">指向粒子系统的指针</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CParticleEmitter *createEmitter(EarthView::World::Graphic::CParticleSystem *psys)
                {
                    EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                }
                /// <summary>
                /// 销毁参数指定的发射器
                /// </summary>
                /// <param name="e">指向发射器的指针</param>
                /// <returns></returns>
                virtual void destroyEmitter( EarthView::World::Graphic::CParticleEmitter *e);
            };
            /** @} */
            /** @} */
        }
    }
}


#endif

