#ifndef __ParticleIterator_H__
#define __ParticleIterator_H__
#pragma once
#include <core/memoryallocatedobject.h>
#include "graphic_config.h"
#include "particlesystemrenderer.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CParticle;

            /// <summary>
            /// 方便地遍历粒子系统中的所有粒子
            /// </summary>
            class EV_GRAPHIC_DLL CParticleIterator : public EarthView::World::Core::CBaseObject
            {
                friend class CParticleSystem;
            protected:
                ParticleList::iterator mPos;
                ParticleList::iterator mStart;
                ParticleList::iterator mEnd;
                //// Protected constructor, only available from CParticleSystem::getIterator
                CParticleIterator(ParticleList::iterator start, ParticleList::iterator end);

            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CParticleIterator(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:

                /// <summary>
                /// 判断是否是粒子列表的末端
                /// </summary>
                /// <param name=""></param>
                /// <returns>如果是粒子列表的末端返回true，否则返回false</returns>
                ev_bool end();
                /// <summary>
                /// 返回一个指向下一个粒子的指针，移动迭代器一个元素
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回指向下一个粒子的指针</returns>
                EarthView::World::Graphic::CParticle *getNext();
            };
            /** @} */
            /** @} */
        }
    }
}


#endif

