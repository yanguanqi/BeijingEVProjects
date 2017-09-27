#ifndef __ParticleAffectorFactory_H__
#define __ParticleAffectorFactory_H__
#pragma once
#include "graphic/graphic_config.h"
#include "particleaffector.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// <summary>
            /// 抽象类定义了EarthView::World::Graphic::CParticleAffector子类执行的接口
            /// </summary>
            class EV_GRAPHIC_DLL CParticleAffectorFactory : public EarthView::World::Core::CAllocatedObject
            {
            protected:
                vector<EarthView::World::Graphic::CParticleAffector *> mAffectors;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CParticleAffectorFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CParticleAffectorFactory() {}
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CParticleAffectorFactory();

                /// <summary>
                /// 返回工厂的名字，其标识了工厂创建粒子变换器的类型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EVString getName() const;
                /// <summary>
                /// 创建一个新的效果器实例
                /// </summary>
                /// <param name="psys"></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CParticleAffector *createAffector(EarthView::World::Graphic::CParticleSystem *psys);
                /// <summary>
                /// 销毁参数指针指向的效果器
                /// </summary>
                /// <param name="e">指向粒子效果器的指针</param>
                /// <returns></returns>
                virtual void destroyAffector(EarthView::World::Graphic::CParticleAffector *e);
            };
            /** @} */
            /** @} */
        }
    }
}


#endif

