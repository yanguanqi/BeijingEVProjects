#ifndef __RenderTexture_H__
#define __RenderTexture_H__
#pragma once
#include "graphic/graphic_config.h"
#include "rendertarget.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CHardwarePixelBuffer;
            /// <summary>
            /// 这个类代表了渲染到纹理的渲染目标
            /// </summary>
            class EV_GRAPHIC_DLL CRenderTexture: public EarthView::World::Graphic::CRenderTarget
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CRenderTexture(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="buffer"></param>
                /// <param name="zoffset"></param>
                /// <returns></returns>
                CRenderTexture( EarthView::World::Graphic::CHardwarePixelBuffer *ref_buffer, ev_size_t zoffset);

                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CRenderTexture();
                virtual void copyContentsToMemory(const EarthView::World::Graphic::CPixelBox &dst, EarthView::World::Graphic::CRenderTarget::FrameBuffer buffer);
                EarthView::World::Graphic::PixelFormat suggestPixelFormat() const;
            protected:
                EarthView::World::Graphic::CHardwarePixelBuffer *mBuffer;
                ev_size_t mZOffset;
            };
            /// <summary>
            /// 这个类代表了渲染到多纹理的渲染目标
            /// </summary>
            class EV_GRAPHIC_DLL CMultiRenderTarget: public EarthView::World::Graphic::CRenderTarget
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CMultiRenderTarget(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name"></param>
                /// <returns></returns>
                CMultiRenderTarget(const EVString &name);

                /// <summary>
                /// 绑定表面到某个特定的附加点
                /// </summary>
                /// <param name="attachment"></param>
                /// <param name="target">绑定的目标</param>
                /// <returns></returns>
                virtual void bindSurface(ev_size_t attachment,  EarthView::World::Graphic::CRenderTexture *ref_target);
                /// <summary>
                /// 未绑定表面到某个特定的附加点
                /// </summary>
                /// <param name="attachment"></param>
                /// <returns></returns>
                virtual void unbindSurface(ev_size_t attachment);
                /// <summary>
                /// 错误抛出执行，它不可能写到一个多渲染目标的磁盘中
                /// </summary>
                /// <param name="dst"></param>
                /// <param name="buffer"></param>
                /// <returns></returns>
                virtual void copyContentsToMemory(const EarthView::World::Graphic::CPixelBox &dst, EarthView::World::Graphic::CRenderTarget::FrameBuffer buffer);
                /// <summary>
                /// 不相关的执行不能复制
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::PixelFormat suggestPixelFormat() const;
                /*typedef vector<EarthView::World::Graphic::CRenderTexture*> EarthView::World::Graphic::CMultiRenderTarget::BoundSufaceList;*/
                class EV_GRAPHIC_DLL BoundSufaceList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Graphic::CRenderTexture *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    /// <summary>
                    /// 在迭代器pos所指向的元素前面插入值为t的新元素
                    /// </summary>
                    /// <param name="pos">插入元素的位置</param>
                    /// <param name="t">插入元素的值</param>
                    /// <returns>返回指向新元素的迭代器</returns>
                    iterator insert(iterator pos, EarthView::World::Graphic::CRenderTexture *const &ref_t);
                private:
                    InternalList mList;
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    BoundSufaceList(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    BoundSufaceList();
                    /// <summary>
                    /// 在容器的尾部添加值为t的元素
                    /// </summary>
                    /// <param name="t">添加元素的值</param>
                    /// <returns></returns>
                    void push_back(EarthView::World::Graphic::CRenderTexture *const &ref_t);
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
                    EarthView::World::Graphic::CRenderTexture*& front();
                    /// <summary>
                    /// 返回容器的最后一个元素的引用
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    EarthView::World::Graphic::CRenderTexture*& back();
                    /// <summary>
                    /// 在迭代器pos所指向的元素前面插入值为t的新元素
                    /// </summary>
                    /// <param name="pos">插入元素的位置</param>
                    /// <param name="t">插入元素的值</param>
                    /// <returns></returns>
                    void insert(ev_uint32 pos, EarthView::World::Graphic::CRenderTexture *const &ref_t);
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
                    EarthView::World::Graphic::CRenderTexture*& operator[](ev_size_t n);
                    /// <summary>
                    /// 重载[]操作符
                    ///由const对象调用，并且返回值不能出现在赋值运算符左侧
                    /// </summary>
                    /// <param name="n"></param>
                    /// <returns></returns>
                    EarthView::World::Graphic::CRenderTexture *const &operator[](ev_size_t n) const;
                    /// <summary>
                    /// 返回下标为n的元素的引用
                    /// 只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
                    /// </summary>
                    /// <param name="n"></param>
                    /// <returns></returns>
                    EarthView::World::Graphic::CRenderTexture*& at(ev_size_t n)
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
                    EarthView::World::Graphic::CRenderTexture *const &at(ev_size_t n) const;
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
                /// <summary>
                /// 获得绑定表面的列表
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::CMultiRenderTarget::BoundSufaceList &getBoundSurfaceList() const;
                /// <summary>
                /// 获得一个指向绑定表面的指针
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CRenderTexture *getBoundSurface(ev_size_t index);

            protected:
                EarthView::World::Graphic::CMultiRenderTarget::BoundSufaceList mBoundSurfaces;
            ev_internal:
                /// <summary>
                /// 绑定表面的实现函数，必须重写
                /// </summary>
                /// <param name="attachment"></param>
                /// <param name="target">绑定的目标</param>
                /// <returns></returns>
                virtual void bindSurfaceImpl(ev_size_t attachment,  EarthView::World::Graphic::CRenderTexture *ref_target);

                /// <summary>
                /// 解绑定表面的实现函数，必须重写
                /// </summary>
                /// <param name="attachment"></param>
                /// <returns></returns>
                virtual void unbindSurfaceImpl(ev_size_t attachment);

            };
            /** @} */
            /** @} */
        }
    }
}

#endif

