#ifndef __ParticleSystemRenderer_H__
#define __ParticleSystemRenderer_H__
#pragma once
#include "graphic/graphic_config.h"
#include <core/stringinterface.h>

#include <mathengine/vector4.h>

#include <graphic/common.h>
#include <graphic/factoryobj.h>
#include <graphic/renderable.h>


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CRenderQueue;
            class CParticle;
            class CMaterialPtr;
            class CCamera;
            class CNode;
            class CParticleVisualData;

            /// <summary>
            /// 当前粒子列表类
            /// 定义当前粒子列表相关操作
            /// </summary>
            class EV_GRAPHIC_DLL ParticleList : public EarthView::World::Core::CBaseObject         			///函数_updateRenderQueue中的list封装类
            {
            ev_private:
                typedef list<EarthView::World::Graphic::CParticle *> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                /// <summary>
                /// 在迭代器pos插入粒子
                /// </summary>
                /// <param name="pos">迭代器标志</param>
                /// <param name="t">粒子</param>
                /// <returns>迭代器</returns>
                iterator insert(iterator pos, EarthView::World::Graphic::CParticle *const &ref_t);
                void splice(iterator where, EarthView::World::Graphic::ParticleList &lst, iterator first)
                {
                    mList.splice(where, lst.mList, first);
                }
                void splice(iterator where, EarthView::World::Graphic::ParticleList &lst)
                {
                    mList.splice(where, lst.mList);
                }
            private:
                InternalList mList;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                ParticleList(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ParticleList();

                /// <summary>
                /// 在当前粒子列表后面增加一个元素
                /// </summary>
                /// <param name="t">增加的元素</param>
                /// <returns></returns>
                void push_back(EarthView::World::Graphic::CParticle *const &ref_t);
                /// <summary>
                /// 在当前粒子列表前面增加一个元素
                /// </summary>
                /// <param name="t">增加的元素</param>
                /// <returns></returns>
                void push_front(EarthView::World::Graphic::CParticle *const &ref_t);
                /// <summary>
                /// 删除当前粒子列表最后一个元素
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void pop_back();

                /// <summary>
                /// 删除当前粒子列表第一个元素
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void pop_front();

                /// <summary>
                /// 返回当前粒子列表第一个元素的引用
                /// </summary>
                /// <param name=""></param>
                /// <returns>第一个元素的引用</returns>
                EarthView::World::Graphic::CParticle*& front();

                /// <summary>
                /// 返回当前粒子列表最后一个元素的引用
                /// </summary>
                /// <param name=""></param>
                /// <returns>最后一个元素的引用</returns>
                EarthView::World::Graphic::CParticle*& back();
                /// <summary>
                /// 返回当前粒子列表第pos元素的引用
                /// </summary>
                /// <param name=""></param>
                /// <returns>第pos元素的引用</returns>
                EarthView::World::Graphic::CParticle*& at(ev_uint32 pos);
                /// <summary>
                /// 在当前粒子列表第pos元素之后插入元素t
                /// </summary>
                /// <param name="pos">迭代器下标</param>
                /// <param name="t">要插入的元素</param>
                /// <returns></returns>
                void insert(ev_uint32 pos, EarthView::World::Graphic::CParticle *const &ref_t);
                /// <summary>
                /// 移除当前粒子列表中的某一个元素
                /// </summary>
                /// <param name="pos">该移除元素所在迭代器位置</param>
                /// <returns></returns>
                void remove(ev_size_t pos);

                /// <summary>
                /// 判断当前粒子列表是否为空
                /// </summary>
                /// <param name=""></param>
                /// <returns>如果为空返回true，否则false</returns>
                ev_bool empty() const;

                /// <summary>
                /// 当前粒子列表存储元素的大小
                /// </summary>
                /// <param name=""></param>
                /// <returns>当前广告版元素的个数</returns>
                ev_size_t size() const;
                /// <summary>
                /// 调整粒子列表存储元素的大小
                /// </summary>
                /// <param name="newSize">新的列表存储元素的个数</param>
                /// <returns></returns>
                void resize(ev_size_t newSize);
                /// <summary>
                /// 清空列表中的元素
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clear();
            };
            /// <summary>
            /// 抽象类，定义了提供渲染性能到粒子系统实例的接口
            /// </summary>
            class EV_GRAPHIC_DLL CParticleSystemRenderer : public EarthView::World::Core::CStringInterface
            {

            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CParticleSystemRenderer(_in EarthView::World::Core::CNameValuePairList *pList);
            public:

                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CParticleSystemRenderer() ;
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CParticleSystemRenderer();
                /// <summary>
                /// 获得渲染的类型，必须被子类执行
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EVString getType() const;
                /// <summary>
                /// 更新渲染队列
                /// </summary>
                /// <param name="queue">渲染队列</param>
                /// <param name="currentParticles"></param>
                /// <param name="cullIndividually"></param>
                /// <returns></returns>
                virtual void _updateRenderQueue( EarthView::World::Graphic::CRenderQueue *queue,
                                                 _inout EarthView::World::Graphic::ParticleList &currentParticles, ev_bool cullIndividually) ;
                /// <summary>
                /// 设置渲染用到的材质
                /// </summary>
                /// <param name="mat"></param>
                /// <returns></returns>
                virtual void _setMaterial(_inout EarthView::World::Graphic::CMaterialPtr &mat) ;
                /// <summary>
                /// 通报当前摄像机
                /// </summary>
                /// <param name="cam">摄像机指针</param>
                /// <returns></returns>
                virtual void _notifyCurrentCamera( EarthView::World::Graphic::CCamera *ref_cam);
                /// <summary>
                /// 通报被挂接
                /// </summary>
                /// <param name="parent">父节点名称</param>
                /// <param name="isTagPoint">是否挂接在节点下</param>
                /// <returns></returns>
                virtual void _notifyAttached( EarthView::World::Graphic::CNode *ref_parent, ev_bool isTagPoint) ;
                /// <summary>
                /// 通报被挂接
                /// </summary>
                /// <param name="parent">父节点名称</param>
                /// <returns></returns>
                virtual void _notifyAttached( EarthView::World::Graphic::CNode *ref_parent);
                /// <summary>
                /// 当粒子旋转时通知
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _notifyParticleRotated() ;

                /// <summary>
                /// 当粒子调整大小时通知
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _notifyParticleResized() ;

                /// <summary>
                /// 告诉渲染器粒子数目已经改变
                /// </summary>
                /// <param name="quota">粒子数目</param>
                /// <returns></returns>
                virtual void _notifyParticleQuota(ev_size_t quota);

                /// <summary>
                /// 告诉渲染器粒子默认大小已经改变
                /// </summary>
                /// <param name="width">粒子的宽度</param>
                /// <param name="height">粒子的高度</param>
                /// <returns></returns>
                virtual void _notifyDefaultDimensions(Real width, Real height) ;

                /// <summary>
                /// 当粒子发射时通知
                /// </summary>
                /// <param name="particle">粒子</param>
                /// <returns></returns>
                virtual void _notifyParticleEmitted(EarthView::World::Graphic::CParticle *particle) ;
                
                /// <summary>
                /// 当粒子消亡时通知
                /// </summary>
                /// <param name="particle">粒子</param>
                /// <returns></returns>
                virtual void _notifyParticleExpired(EarthView::World::Graphic::CParticle *particle) ;

                /// <summary>
                /// 当粒子移动时通知
                /// </summary>
                /// <param name="currentParticles">当前粒子</param>
                /// <returns></returns>
                virtual void _notifyParticleMoved(EarthView::World::Graphic::ParticleList &currentParticles) ;

                /// <summary>
                /// 当粒子清空时通知
                /// </summary>
                /// <param name="currentParticles">当前粒子</param>
                /// <returns></returns>
                virtual void _notifyParticleCleared(EarthView::World::Graphic::ParticleList &currentParticles) ;

                /// <summary>
                /// 创建一个新的EarthView::World::Graphic::CParticleVisualData实例挂接粒子
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CParticleVisualData *_createVisualData() ;

                /// <summary>
                /// 销毁EarthView::World::Graphic::CParticleVisualData实例
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _destroyVisualData( EarthView::World::Graphic::CParticleVisualData *vis) ;

                /// <summary>
                /// 设置渲染器定位目标的渲染队列组
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setRenderQueueGroup(ev_uint8 queueID) ;
                /** Setting carried over from CParticleSystem.
                */
                virtual void setKeepParticlesInLocalSpace(ev_bool keepLocal) ;
                /// <summary>
                /// 从渲染器中获得粒子分类模型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::SortMode _getSortMode() const ;
                /// <summary>
                /// 该方法允许渲染器连接可渲染对象
                /// </summary>
                /// <param name="visitor"></param>
                /// <param name="debugRenderables"></param>
                /// <returns></returns>
                virtual void visitRenderables( EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables);
                /// <summary>
                /// 该方法允许渲染器连接可渲染对象
                /// </summary>
                /// <param name="visitor"></param>
                /// <returns></returns>
                virtual void visitRenderables( EarthView::World::Graphic::CRenderable::CVisitor *visitor);
            };
            /// <summary>
            /// 抽象类
            /// 定义了CParticleSystemRenderer工厂对象
            /// </summary>
            class EV_GRAPHIC_DLL CParticleSystemRendererFactory : public EarthView::World::Graphic::CParticleSystemRendererFactoryObj			///FactoryObj<CParticleSystemRenderer>*/
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CParticleSystemRendererFactory(_in EarthView::World::Core::CNameValuePairList *pList );
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CParticleSystemRendererFactory();

                /// No methods, must just override all methods inherited from FactoryObj
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

