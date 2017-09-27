#ifndef __RenderQueueInvocation_H__
#define __RenderQueueInvocation_H__
#pragma once
#include "graphic/graphic_config.h"
#include "renderqueuesortinggrouping.h"
#include <core/iteratorwrapper.h>
#include <core/stringdefines.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CSceneManager;
            /// <summary>
            /// 实现在CRenderQueue中对队列组的调用
            /// </summary>
            class EV_GRAPHIC_DLL CRenderQueueInvocation : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CRenderQueueInvocation(_in EarthView::World::Core::CNameValuePairList *pList);
            protected:
                //// Target queue group
                ev_uint8 mRenderQueueGroupID;
                //// Invocation identifier - used in listeners
                EVString mInvocationName;
                //// Solids ordering mode
                EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode mSolidsOrganisation;
                //// Suppress shadows processing in this invocation?
                ev_bool mSuppressShadows;
                //// Suppress EV_World's render state management?
                ev_bool mSuppressRenderStateChanges;


            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="renderQueueGroupID">渲染队列的分组ID号</param>
                /// <param name="invocationName">唯一识别调用的名字</param>
                /// <returns></returns>
                CRenderQueueInvocation(ev_uint8 renderQueueGroupID,
                                       const EVString &invocationName);

                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="renderQueueGroupID">渲染队列的分组ID号</param>
                /// <returns></returns>
                CRenderQueueInvocation(ev_uint8 renderQueueGroupID);
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CRenderQueueInvocation();
                //// Get the render queue group id
                /// <summary>
                /// 获得渲染队列组的ID号
                /// </summary>
                /// <param name=""></param>
                /// <returns>ID号</returns>
                virtual ev_uint8 getRenderQueueGroupID() const;
                /// <summary>
                /// 获得调用的名字
                /// </summary>
                /// <param name=""></param>
                /// <returns>name</returns>
                virtual EVString getInvocationName() const;
                /// <summary>
                /// 在队列组调用中设置实体的组织模型
                /// </summary>
                /// <param name="org"></param>
                /// <returns></returns>
                virtual void setSolidsOrganisation(
                    EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode org);
                /// <summary>
                /// 在队列中获得实体的组织模型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode
                getSolidsOrganisation() const;
                /// <summary>
                /// 设置当调用队列时阴影是否被阻止
                /// </summary>
                /// <param name="suppress"></param>
                /// <returns>返回实体的顺序模型</returns>
                virtual void setSuppressShadows(ev_bool suppress);
                /// <summary>
                /// 获得当调用队列时阴影是否被阻止
                /// </summary>
                /// <param name=""></param>
                /// <returns>阻止返回true，否则返回false</returns>
                virtual ev_bool getSuppressShadows() const;
                /// <summary>
                /// 当调用这个队列时，设置是否阻止渲染状态的改变
                /// </summary>
                /// <param name="suppress"></param>
                /// <returns></returns>
                virtual void setSuppressRenderStateChanges(ev_bool suppress);
                /// <summary>
                /// 当调用这个队列时，获得渲染状态的改变是否被阻止
                /// </summary>
                /// <param name=""></param>
                /// <returns>阻止返回true，否则返回false</returns>
                virtual ev_bool getSuppressRenderStateChanges() const;
                /// <summary>
                /// 在具体的队列组中调用这个类
                /// </summary>
                /// <param name="group">队列组</param>
                /// <param name="targetSceneManager">目标场景</param>
                /// <returns></returns>
                virtual void invoke( EarthView::World::Graphic::CRenderQueueGroup *group, EarthView::World::Graphic::CSceneManager *targetSceneManager);

                //// Invocation identifier for shadows
                static EVString RENDER_QUEUE_INVOCATION_SHADOWS;
            };

            //// List of RenderQueueInvocations
            /*typedef vector<EarthView::World::Graphic::CRenderQueueInvocation*> EarthView::World::Graphic::RenderQueueInvocationList;*/
            class EV_GRAPHIC_DLL RenderQueueInvocationList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef vector<EarthView::World::Graphic::CRenderQueueInvocation *> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION_VECTOR(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)

            ev_private:
                RenderQueueInvocationList(_in EarthView::World::Core::CNameValuePairList *pList) {}
            ev_private:
                /// <summary>
                /// 在迭代器pos所指向的元素前面插入值为t的新元素
                /// </summary>
                /// <param name="pos">插入元素的位置</param>
                /// <param name="t">插入元素的值</param>
                /// <returns>返回指向新元素的迭代器</returns>
                iterator insert(iterator pos, EarthView::World::Graphic::CRenderQueueInvocation *const &ref_t);

            private:
                InternalList mList;
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                RenderQueueInvocationList() {}
                /// <summary>
                /// 在容器的尾部添加值为t的元素
                /// </summary>
                /// <param name="t">添加元素的值</param>
                /// <returns></returns>
                void push_back(EarthView::World::Graphic::CRenderQueueInvocation *const &ref_t);
                /// <summary>
                /// 删除容器的最后一个元素
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void pop_back();

                /// <summary>
                /// 返回容器的第一个元素的引用
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CRenderQueueInvocation*& front();
                /// <summary>
                /// 返回容器的最后一个元素的引用
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CRenderQueueInvocation*& back();
                /// <summary>
                /// 在迭代器pos所指向的元素前面插入值为t的新元素
                /// </summary>
                /// <param name="pos">插入元素的位置</param>
                /// <param name="t">插入元素的值</param>
                /// <returns></returns>
                void insert(ev_uint32 pos, EarthView::World::Graphic::CRenderQueueInvocation *const &ref_t);
                /// <summary>
                /// 去掉位置pos处元素的值
                /// </summary>
                /// <param name="pos">元素的位置</param>
                /// <returns>返回容器当前的值</returns>
                void remove(ev_size_t pos);
                /// <summary>
                /// 返回标记容器大小是否为0的布尔值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool empty() const;
                /// <summary>
                /// 重载[]操作符
                /// 只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
                /// </summary>
                /// <param name="n"></param>
                /// <returns></returns>
                EarthView::World::Graphic::CRenderQueueInvocation*& operator[](ev_size_t n)
                {
                    reference t = mList[n];
                    return t;
                }
                /// <summary>
                /// 重载[]操作符
                ///由const对象调用，并且返回值不能出现在赋值运算符左侧
                /// </summary>
                /// <param name="n"></param>
                /// <returns></returns>
                EarthView::World::Graphic::CRenderQueueInvocation *const &operator[](ev_size_t n) const
                {
                    const_reference t =  mList[n];
                    return t;
                }
                /// <summary>
                /// 返回下标为n的元素的引用
                /// 只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
                /// </summary>
                /// <param name="n"></param>
                /// <returns></returns>
                EarthView::World::Graphic::CRenderQueueInvocation*& at(ev_size_t n)
                {
                    reference t = mList[n];
                    return t;
                }
                /// <summary>
                /// 返回下标为n的元素的引用
                /// 由const对象调用，并且返回值不能出现在赋值运算符左侧
                /// </summary>
                /// <param name="n"></param>
                /// <returns></returns>
                EarthView::World::Graphic::CRenderQueueInvocation *const &at(ev_size_t n) const
                {
                    const_reference t =  mList[n];
                    return t;
                }
                /// <summary>
                /// 返回容器中元素的个数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_size_t size() const;
                /// <summary>
                /// 调整容器的长度大小，使其能容纳newSize个元素
                /// </summary>
                /// <param name="newSize">长度</param>
                /// <returns></returns>
                void resize(ev_size_t newSize);
                void reserve(ev_size_t count);
                /// <summary>
                /// 删除容器中的所有元素
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clear();
            };

            /*typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::RenderQueueInvocationList> EarthView::World::Graphic::RenderQueueInvocationIterator;*/
            class EV_GRAPHIC_DLL RenderQueueInvocationIterator : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::RenderQueueInvocationList> InternalIterator;
                typedef InternalIterator::ValueType ValueType;
                typedef InternalIterator::PointerType PointerType;
                typedef RenderQueueInvocationList::iterator IteratorType;
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="start">首迭代器</param>
                /// <param name="last">尾迭代器</param>
                /// <returns></returns>
                RenderQueueInvocationIterator(IteratorType start, IteratorType last);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="vec"></param>
                /// <returns></returns>
                RenderQueueInvocationIterator(EarthView::World::Graphic::RenderQueueInvocationList &vec);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="rhs"></param>
                /// <returns></returns>
                RenderQueueInvocationIterator(const RenderQueueInvocationIterator &rhs);
            ev_private:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~RenderQueueInvocationIterator();
                /// <summary>
                /// 赋值符号"="的重载
                /// </summary>
                /// <param name="other">NodeTrackIterator类的引用</param>
                /// <returns>返回赋值后的引用</returns>
                EarthView::World::Graphic::RenderQueueInvocationIterator &operator=(_in const EarthView::World::Graphic::RenderQueueInvocationIterator &other);
                /// <summary>
                /// 返回集合中的当前元素
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ValueType peekNext () const;
                /// <summary>
                /// 返回集合中当前元素的指针
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                PointerType peekNextPtr ()  const;
                /// <summary>
                /// 返回容器当前的值
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回容器当前的值</returns>
                ValueType getNext ();

                /// <summary>
                /// 返回首迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>首迭代器</returns>
                const IteratorType &begin();
                /// <summary>
                /// 返回末尾迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>末尾迭代器</returns>
                const IteratorType &end();
                /// <summary>
                /// 返回当前迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>当前迭代器</returns>
                const IteratorType &current();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                RenderQueueInvocationIterator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 判断迭代器是否到达容器末尾
                /// </summary>
                /// <param name=""></param>
                /// <returns>是返回true，否则false</returns>
                ev_bool hasMoreElements ( ) const;
                /// <summary>
                /// 迭代器位置后移
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void moveNext ();
                /// <summary>
                /// 返回容器当前值的指针
                /// </summary>
                /// <param name=""></param>
                /// <returns>当前值</returns>
                EarthView::World::Graphic::CRenderQueueInvocation *getCurrent();
                /// <summary>
                /// 返回容器当前的值
                /// </summary>
                /// <param name=""></param>
                /// <returns>值</returns>
                EarthView::World::Graphic::CRenderQueueInvocation *next();
                /// <summary>
                /// 返回容器首值的指针
                /// </summary>
                /// <param name=""></param>
                /// <returns>首键值对</returns>
                EarthView::World::Graphic::CRenderQueueInvocation *getBegin();
                /// <summary>
                /// 返回容器尾键值对
                /// </summary>
                /// <param name=""></param>
                /// <returns>尾键值对</returns>
                EarthView::World::Graphic::CRenderQueueInvocation *getEnd();

            private:
                InternalIterator *mIterator;
            };
            /// <summary>
            /// 拥有EarthView::World::Graphic::CRenderQueueInvocation 对象的线性序列类
            /// </summary>
            class EV_GRAPHIC_DLL CRenderQueueInvocationSequence : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CRenderQueueInvocationSequence(_in EarthView::World::Core::CNameValuePairList *pList);
            protected:
                EVString mName;
                EarthView::World::Graphic::RenderQueueInvocationList mInvocations;
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name"></param>
                /// <returns></returns>
                CRenderQueueInvocationSequence(const EVString &name);
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CRenderQueueInvocationSequence();
                /// <summary>
                /// 获得序列的名字
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EVString &getName() const;
                /// <summary>
                /// 在序列中添加一个标准的调用
                /// </summary>
                /// <param name="renderQueueGroupID">渲染器队列组的ID号</param>
                /// <param name="invocationName">识别调用的名字</param>
                /// <returns></returns>
                EarthView::World::Graphic::CRenderQueueInvocation *add(ev_uint8 renderQueueGroupID,
                                            const EVString &invocationName);
                /// <summary>
                /// 在序列中添加一个自定义调用
                /// </summary>
                /// <param name="i"></param>
                /// <returns></returns>
                void add(EarthView::World::Graphic::CRenderQueueInvocation *ref_i);
                /// <summary>
                /// 获得在序列中调用的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_size_t size() const;
                /// <summary>
                /// 清空序列中所有的调用
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clear();
                /// <summary>
                /// 在给定索引的条件下获得调用的细节
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                EarthView::World::Graphic::CRenderQueueInvocation *get(ev_size_t index);
                /// <summary>
                /// 通过索引删除调用
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                void remove(ev_size_t index);
                /** Get an iterator over the invocations. */
                /// <summary>
                /// 获得一个迭代器
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                EarthView::World::Graphic::RenderQueueInvocationIterator iterator();

            };
            /** @} */
            /** @} */
        }
    }
}

#endif

