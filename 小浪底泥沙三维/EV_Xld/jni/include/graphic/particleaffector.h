#ifndef __ParticleAffector_H__
#define __ParticleAffector_H__
#pragma once

#include <core/stringinterface.h>
#include <mathengine/ev_math.h>

#include <graphic/graphic_config.h>


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CParticleSystem;
            class CParticle;

            /// <summary>
            /// 抽象类，定义粒子效果器
            /// </summary>
            class EV_GRAPHIC_DLL CParticleAffector : public EarthView::World::Core::CStringInterface
            {
            ev_internal:
                /// <summary>
                /// 内部方法为子类设定了基本的参数定义
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void addBaseParameters();
            protected:

                ///效果器类型的名称，NUST被子类初始化
                EVString mType;

                EarthView::World::Graphic::CParticleSystem *mParent;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CParticleAffector( _in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="parent"></param>
                /// <returns></returns>
                CParticleAffector(EarthView::World::Graphic::CParticleSystem *ref_parent);

                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CParticleAffector();
                /// <summary>
                /// 初始化新粒子
                /// </summary>
                /// <param name="pParticle">指向初始化粒子的指针</param>
                /// <returns></returns>
                virtual void _initParticle(EarthView::World::Graphic::CParticle *pParticle);
                /// <summary>
                /// 作用活跃的粒子
                /// </summary>
                /// <param name="pSystem">指向粒子系统的指针</param>
                /// <param name="timeElapsed">消耗的时间</param>
                /// <returns></returns>
                virtual void _affectParticles(EarthView::World::Graphic::CParticleSystem *pSystem, Real timeElapsed);
                /// <summary>
                /// 返回属性变换器的名称
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EVString &getType() const;
            };
            /** @} */
            /** @} */
        }
    }
}


#endif

