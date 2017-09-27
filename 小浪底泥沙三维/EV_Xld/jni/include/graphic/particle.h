#ifndef __Particle_H__
#define __Particle_H__
#pragma once
#include "graphic/graphic_config.h"
#include <mathengine/vector3.h>
#include <mathengine/vector4.h>
#include "colourvalue.h"


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CParticleSystem;
            /// <summary>
            /// 抽象类包含了任何和粒子相关完成渲染的附加数据
            /// </summary>
            class EV_GRAPHIC_DLL CParticleVisualData : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CParticleVisualData(_in EarthView::World::Core::CNameValuePairList *pList); 			///新增加的
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CParticleVisualData();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CParticleVisualData();
            };
            /// <summary>
            /// 单独的粒子实例
            /// </summary>
            class EV_GRAPHIC_DLL CParticle : public EarthView::World::Core::CAllocatedObject
            {
            protected:

                ///父粒子系统
                EarthView::World::Graphic::CParticleSystem *mParentSystem;

                ///和粒子系统相关的附加的可视数据
                EarthView::World::Graphic::CParticleVisualData *mVisual;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CParticle(_in EarthView::World::Core::CNameValuePairList *pList);
            public:

                ///粒子的类型
                enum ParticleType
                {
                    Visual,
                    Emitter
                };
                ///粒子是否拥有自己的大小
                ev_bool mOwnDimensions;

                ///如果mOwnDimensions == true，粒子的宽度
                Real mWidth;

                ///如果mOwnDimensions == true，粒子的高度
                Real mHeight;

                ///当前的旋转值
                EarthView::World::Spatial::Math::CRadian mRotation;
                /// Note the intentional public access to internal variables
                /// Accessing via get/set would be too costly for 000's of particles
                //// World position
                EarthView::World::Spatial::Math::CVector3 position;
                //// Direction (and speed)
                EarthView::World::Spatial::Math::CVector3 direction;
                //// Current colour
                EarthView::World::Graphic::CColourValue colour;
                //// Time to live, number of seconds left of particles natural life
                Real timeToLive;
                //// Total Time to live, number of seconds of particles natural life
                Real totalTimeToLive;
                //// Speed of rotation in radians/sec
                EarthView::World::Spatial::Math::CRadian rotationSpeed;
                //// Determines the type of particle.
                EarthView::World::Graphic::CParticle::ParticleType particleType;
				ev_bool visible;
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CParticle();
                /// <summary>
                /// 设置宽高
                /// </summary>
                /// <param name="width">粒子的宽度</param>
                /// <param name="height">粒子的高度</param>
                /// <returns></returns>
                void setDimensions(Real width, Real height);

                /// <summary>
                /// 是否有独立的宽高
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool hasOwnDimensions() const;
                /// <summary>
                /// 如果 hasOwnDimensions（）返回true,重新获得粒子的宽度
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                Real getOwnWidth() const;
                /// <summary>
                /// 如果 hasOwnDimensions（）返回true,重新获得粒子的高度
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                Real getOwnHeight() const;

                /// <summary>
                /// 设置旋转
                /// </summary>
                /// <param name="rad">弧度</param>
                /// <returns></returns>
                void setRotation(const EarthView::World::Spatial::Math::CRadian &rad);
                /// <summary>
                /// 获得旋转
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Spatial::Math::CRadian &getRotation() const;
                /// <summary>
                /// 通报拥有者
                /// </summary>
                /// <param name="owner">粒子的拥有者</param>
                /// <returns></returns>
                void _notifyOwner(EarthView::World::Graphic::CParticleSystem *ref_owner);
                /// <summary>
                /// 内部方法，通知粒子的可选择的附加可见数据
                /// </summary>
                /// <param name="vis">可见数据</param>
                /// <returns></returns>
                void _notifyVisualData(EarthView::World::Graphic::CParticleVisualData *ref_vis);
                /// <summary>
                /// 获得可选择的可见数据
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CParticleVisualData *getVisualData() const;
                /// <summary>
                /// 重置宽高
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void resetDimensions();

				EarthView::World::Graphic::CParticleSystem *getParentSystem(){return mParentSystem;}

            };
            /** @} */
            /** @} */
        }
    }
}

#endif

