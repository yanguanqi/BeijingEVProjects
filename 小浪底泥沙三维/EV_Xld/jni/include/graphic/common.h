#ifndef __Common_H__
#define __Common_H__
#pragma once

#include <core/commonstringpairlist.h>
#include <core/stringdefines.h>
#include <core/threaddefines.h>
#include <mathengine/ev_math.h>
#include "graphic_config.h"
#include "core/core_common.h"
#if defined ( EV_GCC_VISIBILITY )
#pragma GCC visibility push(default)
#endif
#include <utility>
#include <sstream>
#if defined ( EV_GCC_VISIBILITY )
#pragma GCC visibility pop
#endif

#include <core/commonstringpairlist.h>

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CFixedPoint; 
			}
		}
	}
}


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            

            class CRenderWindow;
            /// <summary>
            /// 快速的hash算法
            /// </summary>
            /// <param name="data">存放字节的指针</param>
            /// <param name="len">长度</param>
            /// <returns>计算过后的hash值</returns>
            ev_uint32 EV_GRAPHIC_DLL FastHash (_in const ev_char *data, _in ev_int32 len);
            /// <summary>
            /// 快速的hash算法
            /// </summary>
            /// <param name="data">存放字节的指针</param>
            /// <param name="len">长度</param>
            /// <param name="hashSoFar">当前的hash值</param>
            /// <returns>计算过后的hash值</returns>
            ev_uint32 EV_GRAPHIC_DLL FastHash (_in const ev_char *data, _in ev_int32 len, _in ev_uint32 hashSoFar);

            template <typename T>
            ev_uint32 HashCombine (ev_uint32 hashSoFar, const T &data);
            enum CompareFunction
            {
                CMPF_ALWAYS_FAIL,
                CMPF_ALWAYS_PASS,
                CMPF_LESS,
                CMPF_LESS_EQUAL,
                CMPF_EQUAL,
                CMPF_NOT_EQUAL,
                CMPF_GREATER_EQUAL,
                CMPF_GREATER
            };
            enum TextureFilterOptions
            {
                TFO_NONE,
                TFO_BILINEAR,
                TFO_TRILINEAR,
                TFO_ANISOTROPIC
            };
            enum FilterType
            {
                FT_MIN,
                FT_MAG,
                FT_MIP
            };
            enum FilterOptions
            {
                FO_NONE,
                FO_POINT,
                FO_LINEAR,
                FO_ANISOTROPIC
            };

            enum ShadeOptions
            {
                SO_FLAT,
                SO_GOURAUD,
                SO_PHONG
            };
            enum FogMode
            {
                FOG_NONE,
                FOG_EXP,
                FOG_EXP2,
                FOG_LINEAR
            };
            enum CullingMode
            {
                CULL_NONE = 1,
                CULL_CLOCKWISE = 2,
                CULL_ANTICLOCKWISE = 3
            };
            enum ManualCullingMode
            {
                MANUAL_CULL_NONE = 1,
                MANUAL_CULL_BACK = 2,
                MANUAL_CULL_FRONT = 3
            };
            enum WaveformType
            {
                WFT_SINE,
                WFT_TRIANGLE,
                WFT_SQUARE,
                WFT_SAWTOOTH,
                WFT_INVERSE_SAWTOOTH,
                WFT_PWM
            };
            enum PolygonMode
            {
                PM_POINTS = 1,
                PM_WIREFRAME = 2,
                PM_SOLID = 3
            };
            enum ShadowTechnique
            {
                SHADOWTYPE_NONE = 0,			///0x00,
                SHADOWDETAILTYPE_ADDITIVE = 1,			///0x01,
                SHADOWDETAILTYPE_MODULATIVE = 2,			///0x02,
                SHADOWDETAILTYPE_INTEGRATED = 4,			///0x04,
                SHADOWDETAILTYPE_STENCIL = 16,			///0x10,
                SHADOWDETAILTYPE_TEXTURE = 32,			///0x20,

                SHADOWTYPE_STENCIL_MODULATIVE = 18,			///0x12,
                SHADOWTYPE_STENCIL_ADDITIVE = 17,			///0x11,
                SHADOWTYPE_TEXTURE_MODULATIVE = 34,			///0x22,

                SHADOWTYPE_TEXTURE_ADDITIVE = 33,			///0x21,
                SHADOWTYPE_TEXTURE_ADDITIVE_INTEGRATED = 37,			///0x25,
                SHADOWTYPE_TEXTURE_MODULATIVE_INTEGRATED = 38,			///0x26
            };
            typedef ev_int32 TrackVertexColourType;
            enum TrackVertexColourEnum
            {
                TVC_NONE        = 0,			///0x0,
                TVC_AMBIENT     = 1,			///0x1,
                TVC_DIFFUSE     = 2,			///0x2,
                TVC_SPECULAR    = 4,			///0x4,
                TVC_EMISSIVE    = 8 			///0x8
            };
            enum SortMode
            {
                SM_DIRECTION,
                SM_DISTANCE
            };
            enum FrameBufferType
            {
                FBT_COLOUR  = 1,			///0x1,
                FBT_DEPTH   = 2,			///0x2,
                FBT_STENCIL = 4 			///0x4
            };
            enum InstanceManagerFlags
            {
                /** Forces an amount of instances per batch low enough so that vertices * numInst < 65535
                	since usually improves performance. In HW instanced techniques, this flag is ignored
                */
                IM_USE16BIT		= 1,
                /** The num. of instances is adjusted so that as few pixels as possible are wasted
                	in the vertex texture */
                IM_VTFBESTFIT	= 2,
                /** Use a limited number of skeleton animations shared among all instances.
                Update only that limited amount of animations in the vertex texture.*/
                IM_VTFBONEMATRIXLOOKUP = 4,
                IM_USEBONEDUALQUATERNIONS = 8,
                /** Use one weight per vertex when recommended (i.e. VTF). */
                IM_USEONEWEIGHT = 16,
                /** All techniques are forced to one weight per vertex. */
                IM_FORCEONEWEIGHT = 32,
                IM_USEALL		= 19			///IM_USE16BIT|IM_VTFBESTFIT|IM_USEONEWEIGHT
            };


            template <typename T>
            class CHashedVector
            {
            public:
                typedef vector<T, EarthView::World::Core::CSTLAllocator<T, EarthView::World::Core::CPolicy> > VectorImpl;
            protected:
                VectorImpl mList;
                mutable ev_uint32 mListHash;
                mutable ev_bool mListHashDirty;
                void addToHash(const T &newPtr) const
                {
                    mListHash = FastHash((const ev_char *)&newPtr, sizeof(T), mListHash);
                }
                void recalcHash() const
                {
                    mListHash = 0;
                    for (const_iterator i = mList.begin(); i != mList.end(); ++i)
                        addToHash(*i);
                    mListHashDirty = false;

                }
            public:
                typedef typename VectorImpl::value_type value_type;
                typedef typename VectorImpl::pointer pointer;
                typedef typename VectorImpl::reference reference;
                typedef typename VectorImpl::const_reference const_reference;
                typedef typename VectorImpl::size_type size_type;
                typedef typename VectorImpl::difference_type difference_type;
                typedef typename VectorImpl::iterator iterator;
                typedef typename VectorImpl::const_iterator const_iterator;
                typedef typename VectorImpl::reverse_iterator reverse_iterator;
                typedef typename VectorImpl::const_reverse_iterator const_reverse_iterator;
                void dirtyHash()
                {
                    mListHashDirty = true;
                }
                ev_bool isHashDirty() const
                {
                    return mListHashDirty;
                }
                iterator begin()
                {
                    dirtyHash();
                    return mList.begin();
                }
                iterator end()
                {
                    return mList.end();
                }
                const_iterator begin() const
                {
                    return mList.begin();
                }
                const_iterator end() const
                {
                    return mList.end();
                }
                reverse_iterator rbegin()
                {
                    dirtyHash();
                    return mList.rbegin();
                }
                reverse_iterator rend()
                {
                    return mList.rend();
                }
                const_reverse_iterator rbegin() const
                {
                    return mList.rbegin();
                }
                const_reverse_iterator rend() const
                {
                    return mList.rend();
                }
                size_type size() const
                {
                    return mList.size();
                }
                size_type max_size() const
                {
                    return mList.max_size();
                }
                size_type capacity() const
                {
                    return mList.capacity();
                }
                ev_bool empty() const
                {
                    return mList.empty();
                }
                reference operator[](size_type n)
                {
                    dirtyHash();
                    return mList[n];
                }
                const_reference operator[](size_type n) const
                {
                    return mList[n];
                }
                reference at(size_type n)
                {
                    dirtyHash();
                    return mList[n];
                }
                const_reference at(size_type n) const
                {
                    return mList.at(n);
                }
                CHashedVector() : mListHash(0), mListHashDirty(false) {}
                CHashedVector(size_type n) : mList(n), mListHash(0), mListHashDirty(n > 0) {}
                CHashedVector(size_type n, const T &t) : mList(n, t), mListHash(0), mListHashDirty(n > 0) {}
                CHashedVector(const CHashedVector<T>& rhs)
                    : mList(rhs.mList), mListHash(rhs.mListHash), mListHashDirty(rhs.mListHashDirty) {}
                template <class InputIterator>
                CHashedVector(InputIterator a, InputIterator b)
                    : mList(a, b), mListHashDirty(false)
                {
                    dirtyHash();
                }
                ~CHashedVector() {}
                CHashedVector<T>& operator=(const CHashedVector<T>& rhs)
                {
                    mList = rhs.mList;
                    mListHash = rhs.mListHash;
                    mListHashDirty = rhs.mListHashDirty;
                    return *this;
                }
                void reserve(ev_size_t t)
                {
                    mList.reserve(t);
                }
                reference front()
                {
                    dirtyHash();
                    return mList.front();
                }
                const_reference front() const
                {
                    return mList.front();
                }
                reference back()
                {
                    dirtyHash();
                    return mList.back();
                }
                const_reference back() const
                {
                    return mList.back();
                }
                void push_back(const T &t)
                {
                    mList.push_back(t);
                    if (!isHashDirty())
                        addToHash(t);
                }
                void pop_back()
                {
                    mList.pop_back();
                    dirtyHash();
                }
                void swap(CHashedVector<T>& rhs)
                {
                    mList.swap(rhs.mList);
                    dirtyHash();
                }
                iterator insert(iterator pos, const T &t)
                {
                    ev_bool recalc = (pos != end());
                    iterator ret = mList.insert(pos, t);
                    if (recalc)
                        dirtyHash();
                    else
                        addToHash(t);
                    return ret;
                }
                template <class InputIterator>
                void insert(iterator pos,
                            InputIterator f, InputIterator l)
                {
                    mList.insert(pos, f, l);
                    dirtyHash();
                }
                void insert(iterator pos, size_type n, const T &x)
                {
                    mList.insert(pos, n, x);
                    dirtyHash();
                }
                iterator erase(iterator pos)
                {
                    iterator ret = mList.erase(pos);
                    dirtyHash();
                    return ret;
                }
                iterator erase(iterator first, iterator last)
                {
                    iterator ret = mList.erase(first, last);
                    dirtyHash();
                    return ret;
                }
                void clear()
                {
                    mList.clear();
                    mListHash = 0;
                    mListHashDirty = false;
                }
                void resize(size_type n, const T &t = T())
                {
                    ev_bool recalc = false;
                    if (n != size())
                        recalc = true;
                    mList.resize(n, t);
                    if (recalc)
                        dirtyHash();
                }
                ev_bool operator==(const CHashedVector<T>& b)
                {
                    return mListHash == b.mListHash;
                }
                ev_bool operator!=(const CHashedVector<T>& b)
                {
                    return mListHash != b.mListHash;
                }
                ev_bool operator<(const CHashedVector<T>& b)
                {
                    return mListHash < b.mListHash;
                }
                ev_bool operator>(const CHashedVector<T>& b)
                {
                    return mListHash > b.mListHash;
                }

                ev_uint32 getHash() const
                {
                    if (isHashDirty())
                        recalcHash();
                    return mListHash;
                }
            public:
            };
            class CLight;
            /// <summary>
            /// 光源容器类
            /// 管理各类的光源
            /// </summary>
            class EV_GRAPHIC_DLL LightList : public EarthView::World::Core::CBaseObject
            {
            public:
                /// <summary>
                /// 默认的构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                LightList();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                LightList(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 强行将hash置为脏(需要更新)
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void dirtyHash();
                /// <summary>
                /// 判断hash值是否需要修改
                /// </summary>
                /// <param name=""></param>
                /// <returns>需要修改则为ture，否则为false</returns>
                ev_bool isHashDirty() const;
                /// <summary>
                /// 容器的大小
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回容器的大小</returns>
                ev_size_t size() const;
                /// <summary>
                /// 返回容器的最大的空间
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回容器空间的大小</returns>
                ev_size_t max_size() const ;
                /// <summary>
                /// 返回容器的容量
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回容器容量的大小</returns>
                ev_size_t capacity() const ;
                /// <summary>
                /// 判断容器是否为空
                /// </summary>
                /// <param name=""></param>
                /// <returns>容器为空返回true，否则false</returns>
                ev_bool empty() const ;

                /// <summary>
                /// 使容器预留给定长度空间
                /// </summary>
                /// <param name="t">希望预留的空间长度</param>
                /// <returns></returns>
                void reserve(_inout ev_size_t t);
                /// <summary>
                /// 在容器后面追加对象
                /// </summary>
                /// <param name="t">需要追加的对象</param>
                /// <returns></returns>
                void push_back(_in EarthView::World::Graphic::CLight *const &ref_t);
                /// <summary>
                /// 从容器后面取出对象
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void pop_back();
                /// <summary>
                /// 清空容器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clear();
                /// <summary>
                /// 调整容器的大小
                /// </summary>
                /// <param name="n">调整的大小</param>
                /// <returns></returns>
                void resize(_in ev_size_t n);
                /// <summary>
                /// 调整容器的大小
                /// </summary>
                /// <param name="n">调整的大小</param>
                /// <param name="t">调整后的元素值</param>
                /// <returns></returns>
                void resize(_in ev_size_t n, _in EarthView::World::Graphic::CLight *const &ref_t);
                /// <summary>
                /// 等号运算符"=="的重载
                /// </summary>
                /// <param name="b">EarthView::World::Graphic::LightList类的引用</param>
                /// <returns>相等则为true，否则为false</returns>
                ev_bool operator==(_in const EarthView::World::Graphic::LightList &b);
                /// <summary>
                /// 不等号运算符"!="的重载
                /// </summary>
                /// <param name="b">EarthView::World::Graphic::LightList类的引用</param>
                /// <returns>不相等则为true，否则为false</returns>
                ev_bool operator!=(_in const EarthView::World::Graphic::LightList &b);
                /// <summary>
                /// 小于号的"<"的重载
                /// </summary>
                /// <param name="b">EarthView::World::Graphic::LightList类的引用</param>
                /// <returns>小于则为true，否则为false</returns>
                ev_bool operator<(_in const EarthView::World::Graphic::LightList &b);
                /// <summary>
                /// 大于号的">"的重载
                /// </summary>
                /// <param name="b">EarthView::World::Graphic::LightList类的引用</param>
                /// <returns>大于则为true，否则为false</returns>
                ev_bool operator>(_in const EarthView::World::Graphic::LightList &b);
                /// <summary>
                /// 交换容器中的对象
                /// </summary>
                /// <param name="rhs">用作替换的对象</param>
                /// <returns></returns>
                void swap(_inout EarthView::World::Graphic::LightList &rhs);

                /// <summary>
                /// 得到hash值
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回hash值</returns>
                ev_uint32 getHash() const ;
                /// <summary>
                /// 数组下标"[]"重载
                /// </summary>
                /// <param name="n">下标</param>
                /// <returns>返回对应下标的数组中的值</returns>
                EarthView::World::Graphic::CLight*& operator[](_in ev_size_t n);

                /// <summary>
                /// 数组下标"[]"重载
                /// </summary>
                /// <param name="n">下标</param>
                /// <returns>返回对应下标的数组中的值</returns>
                EarthView::World::Graphic::CLight *const &operator[](_in ev_size_t n) const;
                /// <summary>
                /// 获得给定位置的值
                /// </summary>
                /// <param name="n">下标</param>
                /// <returns>返回对应下标的位置</returns>
                EarthView::World::Graphic::CLight*& at(_in ev_size_t n) ;
                /// <summary>
                /// 获得给定位置的值
                /// </summary>
                /// <param name="n">下标</param>
                /// <returns>返回对应下标的位置</returns>
                EarthView::World::Graphic::CLight *const &at(_in ev_size_t n) const;
                /// <summary>
                /// 获得第一个元素
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回第一个元素</returns>
                EarthView::World::Graphic::CLight*& front() ;
                /// <summary>
                /// 获得第一个元素
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回第一个元素</returns>
                EarthView::World::Graphic::CLight *const &front()const;
                /// <summary>
                /// 获得最后一个元素
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回最后一个元素</returns>
                EarthView::World::Graphic::CLight*& back();

                /// <summary>
                /// 获得最后一个元素
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回最后一个元素</returns>
                EarthView::World::Graphic::CLight *const &back() const;
                /// <summary>
                /// 插入元素
                /// </summary>
                /// <param name="pos">插入元素的位置</param>
                /// <param name="l">插入的元素</param>
                /// <returns></returns>
                void insert(_in ev_size_t pos, _in EarthView::World::Graphic::CLight *const &ref_l);
                /// <summary>
                /// 插入元素
                /// </summary>
                /// <param name="pos">插入元素的位置</param>
                /// <param name="count">插入的元素的个数</param>
                /// <param name="l">插入的元素</param>
                /// <returns></returns>
                void insert(_in ev_size_t pos, _in ev_size_t count, _in EarthView::World::Graphic::CLight *const &ref_l);

                /// <summary>
                /// 删除元素
                /// </summary>
                /// <param name="pos">删除元素的位置</param>
                /// <returns></returns>
                void erase(_in ev_size_t pos);
                /// <summary>
                /// 删除元素
                /// </summary>
                /// <param name="first">删除元素的起始位置</param>
                /// <param name="last">删除元素的结束位置</param>
                /// <returns></returns>
                void erase(_in ev_size_t first, _in ev_size_t last);
            ev_private:
                typedef CHashedVector<EarthView::World::Graphic::CLight *> InternalList;
                typedef InternalList::value_type value_type;
                typedef InternalList::pointer pointer;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::size_type size_type;
                typedef InternalList::difference_type difference_type;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                RESERVE_CONTAINER_FUNCTION_VECTOR(mHashVec);
                /// <summary>
                /// 插入元素
                /// </summary>
                /// <param name="pos">插入元素的位置</param>
                /// <param name="t">插入的元素</param>
                /// <returns>返回插入元素位置索引</returns>
                iterator insert(_in iterator pos, _in EarthView::World::Graphic::CLight *const &t);
                template <class InputIterator>
                void insert(iterator pos,
                            InputIterator f, InputIterator l)
                {
                    mHashVec.insert(pos, f, l);
                }
                /// <summary>
                /// 插入元素
                /// </summary>
                /// <param name="pos">插入元素的位置</param>
                /// <param name="n">插入元素的个数</param>
                /// <param name="x">插入元素</param>
                /// <returns></returns>
                void insert(_in iterator pos, _in size_type n, _in EarthView::World::Graphic::CLight *const &ref_x);

                /// <summary>
                /// 赋值符号"="的重载
                /// </summary>
                /// <param name="rhs">EarthView::World::Graphic::LightList类的引用</param>
                /// <returns>返回赋完值后的类的引用</returns>
                EarthView::World::Graphic::LightList &operator=(_in const EarthView::World::Graphic::LightList &rhs);
            private:
                InternalList mHashVec;
            };
            /// <summary>
            /// 容器类
            /// 以EVString类型的键作为索引，存放ev_bool型的值的一个容器类
            /// </summary>
            class EV_GRAPHIC_DLL UnaryOptionList : public EarthView::World::Core::CBaseObject
            {
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                UnaryOptionList();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                UnaryOptionList(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 在对应键上添加值
                /// </summary>
                /// <param name="key">键</param>
                /// <param name="val">值</param>
                /// <returns>能在对应的键上添加值则返回true，否则返回false</returns>
                ev_bool add(_in const EVString &key, _in ev_bool val);
                /// <summary>
                /// 判断键是否存在
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>存在该键返回true，否则返回false</returns>
                ev_bool exist(_in const EVString &key);
                /// <summary>
                /// "[]"的重载
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>取到键返回true，否则返回false</returns>
                ev_bool operator[](_in const EVString &key);
                /// <summary>
                /// 得到值
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>得到键返回true，否则返回false</returns>
                ev_bool get(_in const EVString &key);
                /// <summary>
                /// 删除元素
                /// </summary>
                /// <param name="key">键</param>
                /// <returns></returns>
                void erase(_in const EVString &key);
                /// <summary>
                /// 得到该容器类的空间大小
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回空间的大小</returns>
                ev_size_t size() const;
                /// <summary>
                /// 判断该容器类是否为空
                /// </summary>
                /// <param name=""></param>
                /// <returns>若为空则返回true，否则返回false</returns>
                ev_bool empty() const;
                /// <summary>
                /// 清空该容器类
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clear();
            ev_private:
                typedef map<EVString, ev_bool> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::value_type value_type;
                typedef pair<InternalList::iterator, bool> _Pairib;
                RESERVE_CONTAINER_FUNCTION_MAP(mList);

                /// <summary>
                /// 插入值
                /// </summary>
                /// <param name="val">需要插入的值/param>
                /// <returns>插入成功则为true，否则为false</returns>
                _Pairib insert(_in const value_type &val);
                /// <summary>
                /// 寻找索引为某个键的元素
                /// </summary>
                /// <param name="key">键/param>
                /// <returns>返回索引为某个键的元素</returns>
                iterator find(_in const EVString &key);
                /// <summary>
                /// 寻找索引为某个键的元素
                /// </summary>
                /// <param name="key">键/param>
                /// <returns>返回索引为某个键的元素</returns>
                const_iterator find(_in const EVString &key) const;
            private:
                InternalList mList;
            };
            

            /// <summary>
            /// 矩形的模板类
            /// 存放符点型的矩形模板类
            /// </summary>
            class  EV_GRAPHIC_DLL FloatRect : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                FloatRect(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                ev_real32 left, top, right, bottom;
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                FloatRect();
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="l">左边起始值</param>
                /// <param name="t">上面起始值</param>
                /// <param name="r">右边结束值</param>
                /// <param name="b">底面结束值</param>
                /// <returns></returns>
                FloatRect(_in ev_real32 const &l, _in ev_real32 const &t, _in ev_real32 const &r, _in ev_real32 const &b );
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="o">EarthView::World::Graphic::FloatRect的引用</param>
                /// <returns></returns>
                FloatRect(_in FloatRect const &o );
                /// <summary>
                /// 赋值"="的重载
                /// </summary>
                /// <param name="o">EarthView::World::Graphic::FloatRect的引用</param>
                /// <returns>返回已赋值类的数据成员</returns>
                EarthView::World::Graphic::FloatRect &operator=(_in EarthView::World::Graphic::FloatRect const &o );
                /// <summary>
                /// 计算宽度
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回宽度</returns>
                ev_real32 width() const;
                /// <summary>
                /// 计算高度
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回高度</returns>
                ev_real32 height() const;
                /// <summary>
                /// 判断矩形是否为空
                /// </summary>
                /// <param name=""></param>
                /// <returns>有一个为零返回true，否则返回false</returns>
                ev_bool isNull() const;
                /// <summary>
                /// 置空
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void setNull();
                /// <summary>
                /// 矩形的融合
                /// </summary>
                /// <param name="rhs">EarthView::World::Graphic::FloatRect类的引用</param>
                /// <returns>返回融合后的矩形</returns>
                EarthView::World::Graphic::FloatRect &merge(_in const EarthView::World::Graphic::FloatRect &rhs);
                /// <summary>
                /// 矩形的相交
                /// </summary>
                /// <param name="rhs">EarthView::World::Graphic::FloatRect类的引用</param>
                /// <returns>返回相交后的矩形</returns>
                EarthView::World::Graphic::FloatRect intersect(_in const EarthView::World::Graphic::FloatRect &rhs) const;
            };
            /// <summary>
            /// 输出符号"<<"重载
            /// </summary>
            /// <param name="o">标准库输出流的引用</param>
            /// <param name="r">EarthView::World::Graphic::FloatRect类的引用</param>
            /// <returns>输出EarthView::World::Graphic::FloatRect类的成员</returns>
            inline std::ostream &operator<<(_inout std::ostream &o, _in const EarthView::World::Graphic::FloatRect &r)
            {
                o << "FloatRect(l:" << r.left << ", t:" << r.top << ", r:" << r.right << ", b:" << r.bottom << ")";
                return o;
            }
            /// <summary>
            /// 矩形的模板类
            /// 存放Real型的矩形模板类
            /// </summary>
            class EV_GRAPHIC_DLL RealRect : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                RealRect(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                Real left, top, right, bottom;
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                RealRect();
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="l">左边起始值</param>
                /// <param name="t">上面起始值</param>
                /// <param name="r">右边结束值</param>
                /// <param name="b">底面结束值</param>
                /// <returns></returns>
                RealRect(_in Real const &l, _in Real const &t, _in Real const &r, _in Real const &b );
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="o">EarthView::World::Graphic::RealRect的引用</param>
                /// <returns></returns>
                RealRect(_in RealRect const &o );
                /// <summary>
                /// 赋值"="的重载
                /// </summary>
                /// <param name="o">EarthView::World::Graphic::RealRect的引用</param>
                /// <returns>返回已赋值类的数据成员</returns>
                EarthView::World::Graphic::RealRect &operator=(_in EarthView::World::Graphic::RealRect const &o );
                /// <summary>
                /// 计算宽度
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回宽度</returns>
                Real width() const;
                /// <summary>
                /// 计算高度
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回高度</returns>
                Real height() const;
                /// <summary>
                /// 判断矩形是否为空
                /// </summary>
                /// <param name=""></param>
                /// <returns>有一个为零返回true，否则返回false</returns>
                ev_bool isNull() const;
                /// <summary>
                /// 置空
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void setNull();
                /// <summary>
                /// 矩形的融合
                /// </summary>
                /// <param name="rhs">EarthView::World::Graphic::RealRect类的引用</param>
                /// <returns>返回融合后的矩形</returns>
                EarthView::World::Graphic::RealRect &merge(_in const EarthView::World::Graphic::RealRect &rhs);
                /// <summary>
                /// 矩形的相交
                /// </summary>
                /// <param name="rhs">EarthView::World::Graphic::RealRect类的引用</param>
                /// <returns>返回相交后的矩形</returns>
                EarthView::World::Graphic::RealRect intersect(_in const EarthView::World::Graphic::RealRect &rhs) const;
            };
            /// <summary>
            /// 输出符号"<<"重载
            /// </summary>
            /// <param name="o">标准库输出流的引用</param>
            /// <param name="r">EarthView::World::Graphic::RealRect类的引用</param>
            /// <returns>输出EarthView::World::Graphic::RealRect类的成员</returns>
            inline std::ostream &operator<<(_inout std::ostream &o, _in const EarthView::World::Graphic::RealRect &r)
            {
                o << "RealRect(l:" << r.left << ", t:" << r.top << ", r:" << r.right << ", b:" << r.bottom << ")";
                return o;
            }
            /// <summary>
            /// 矩形的模板类
            /// 存放int型的矩形模板类
            /// </summary>
            class EV_GRAPHIC_DLL Rect : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                Rect(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                ev_int32 left, top, right, bottom;
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                Rect();

                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="l">左边起始值</param>
                /// <param name="t">上面起始值</param>
                /// <param name="r">右边结束值</param>
                /// <param name="b">底面结束值</param>
                /// <returns></returns>
                Rect(_in ev_int32 const &l, _in ev_int32 const &t, _in ev_int32 const &r, _in ev_int32 const &b );
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="o">EarthView::World::Graphic::Rect的引用</param>
                /// <returns></returns>
                Rect(_in Rect const &o );
                /// <summary>
                /// 赋值"="的重载
                /// </summary>
                /// <param name="o">EarthView::World::Graphic::Rect的引用</param>
                /// <returns>返回已赋值类的数据成员</returns>
                EarthView::World::Graphic::Rect &operator=(_in EarthView::World::Graphic::Rect const &o );
                /// <summary>
                /// 计算宽度
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回宽度</returns>
                ev_int32 width() const;
                /// <summary>
                /// 计算高度
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回高度</returns>
                ev_int32 height() const;
                /// <summary>
                /// 判断矩形是否为空
                /// </summary>
                /// <param name=""></param>
                /// <returns>有一个为零返回true，否则返回false</returns>
                ev_bool isNull() const;
                /// <summary>
                /// 置空
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void setNull();
                /// <summary>
                /// 矩形的融合
                /// </summary>
                /// <param name="rhs">EarthView::World::Graphic::Rect类的引用</param>
                /// <returns>返回融合后的矩形</returns>
                EarthView::World::Graphic::Rect &merge(_in const EarthView::World::Graphic::Rect &rhs);
                /// <summary>
                /// 矩形的相交
                /// </summary>
                /// <param name="rhs">EarthView::World::Graphic::Rect类的引用</param>
                /// <returns>返回相交后的矩形</returns>
                EarthView::World::Graphic::Rect intersect(_in const EarthView::World::Graphic::Rect &rhs) const;
            };
            /// <summary>
            /// 输出符号"<<"重载
            /// </summary>
            /// <param name="o">标准库输出流的引用</param>
            /// <param name="r">EarthView::World::Graphic::Rect类的引用</param>
            /// <returns>输出EarthView::World::Graphic::Rect类的成员</returns>
            inline std::ostream &operator<<(_inout std::ostream &o, _in const EarthView::World::Graphic::Rect &r)
            {
                o << "Rect(l:" << r.left << ", t:" << r.top << ", r:" << r.right << ", b:" << r.bottom << ")";
                return o;
            }
            /// <summary>
            /// box类
            /// 定义一个三维空间
            /// </summary>
            class EV_GRAPHIC_DLL Box : public EarthView::World::Core::CAllocatedObject
            {
            public:
                ev_size_t left, top, right, bottom, front, back;

                /// <summary>
                /// 默认的构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                Box();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                Box(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="l">x轴上左边起始值</param>
                /// <param name="t">y轴上上边起始值</param>
                /// <param name="r">x轴上右边结束值</param>
                /// <param name="b">y轴上下边结束值</param>
                /// <returns></returns>
                Box(_in ev_size_t l, _in ev_size_t t, _in ev_size_t r, _in ev_size_t b );
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="l">x轴上左边起始值</param>
                /// <param name="t">y轴上上边起始值</param>
                /// <param name="ff">z轴上前面开始值</param>
                /// <param name="r">x轴上右边结束值</param>
                /// <param name="b">y轴上下边结束值</param>
                /// <param name="bb">z轴上后面结束值</param>
                /// <returns></returns>
                Box(_in ev_size_t l, _in ev_size_t t, _in ev_size_t ff, _in ev_size_t r, _in ev_size_t b, _in ev_size_t bb );
            public:
                /// <summary>
                /// 判断这个box类包含其他的box类
                /// </summary>
                /// <param name="def">EarthView::World::Graphic::Box类的引用</param>
                /// <returns>包含则返回true，否则返回false</returns>
                ev_bool contains(_in const EarthView::World::Graphic::Box &def) const;

                /// <summary>
                /// 得到宽度
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回宽度</returns>
                ev_size_t getWidth() const ;
                /// <summary>
                /// 得到高度
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回高度</returns>
                ev_size_t getHeight() const ;
                /// <summary>
                /// 得到深度
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回深度</returns>
                ev_size_t getDepth() const;
            };
            /// <summary>
            /// 按照给定的参数名，从命令行中解析参数值
            /// </summary>
            /// <param name="numargs">参数个数</param>
            /// <param name="argv">命令行参数</param>
            /// <param name="unaryOptList">参数名和值的集合</param>
            /// <param name="binOptList">参数名与参数是否存在的集合</param>
            /// <returns>返回最后一个参数的索引</returns>
            ev_int32 EV_GRAPHIC_DLL findCommandLineOpts(_in ev_int32 numargs, _in ev_char **argv, _inout UnaryOptionList &unaryOptList,
                    _inout EarthView::World::Core::BinaryOptionList &binOptList);
            enum ClipResult
            {
                CLIPPED_NONE = 0,
                CLIPPED_SOME = 1,
                CLIPPED_ALL = 2
            };
            /// <summary>
            /// 渲染窗口类
            /// 提供渲染窗口的一些参数
            /// </summary>
            class EV_GRAPHIC_DLL RenderWindowDescription : public EarthView::World::Core::CBaseObject
            {
            public:
                /// <summary>
                /// 默认的构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                RenderWindowDescription();

            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                RenderWindowDescription(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                EVString				name;
                ev_uint32		width;
                ev_uint32		height;
                ev_bool				useFullScreen;
                EarthView::World::Core::NameValuePairList	miscParams;
            };
            /// <summary>
            /// 渲染窗口容器类
            /// 描述渲染窗口容器的一些参数
            /// </summary>
            class EV_GRAPHIC_DLL RenderWindowDescriptionList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef vector<EarthView::World::Graphic::RenderWindowDescription> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                RESERVE_CONTAINER_FUNCTION(mList);
            private:
                InternalList mList;
            public:

                /// <summary>
                /// 默认的构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                RenderWindowDescriptionList();

            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                RenderWindowDescriptionList(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 在容器后面追加对象
                /// </summary>
                /// <param name="t">需要追加的对象</param>
                /// <returns></returns>
                void push_back(_in const EarthView::World::Graphic::RenderWindowDescription &t);
                /// <summary>
                /// 移除元素
                /// </summary>
                /// <param name="pos">需要移除元素的位置</param>
                /// <returns></returns>
                void remove(_in ev_size_t pos);
                /// <summary>
                /// 判断容器是否为空
                /// </summary>
                /// <param name=""></param>
                /// <returns>容器为空返回true，否则false</returns>
                ev_bool empty() const;
                /// <summary>
                /// 数组下标"[]"重载
                /// </summary>
                /// <param name="n">下标</param>
                /// <returns>返回对应下标的数组中的值</returns>
                EarthView::World::Graphic::RenderWindowDescription &operator[](_in ev_size_t n);
                /// <summary>
                /// 数组下标"[]"重载
                /// </summary>
                /// <param name="n">下标</param>
                /// <returns>返回对应下标的数组中的值</returns>
                EarthView::World::Graphic::RenderWindowDescription const &operator[](_in ev_size_t n) const;
                /// <summary>
                /// 检查发生变化的下标
                /// </summary>
                /// <param name="n">下标</param>
                /// <returns>返回对应下标的位置</returns>
                EarthView::World::Graphic::RenderWindowDescription &at(_in ev_size_t n);
                /// <summary>
                /// 检查没有变化的下标
                /// </summary>
                /// <param name="n">下标</param>
                /// <returns>返回对应下标的位置</returns>
                EarthView::World::Graphic::RenderWindowDescription const &at(_in ev_size_t n) const;
                /// <summary>
                /// 容器的大小
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回容器的大小</returns>
                ev_size_t size() const;

                /// <summary>
                /// 清空容器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clear();
            };
            /// <summary>
            /// 渲染窗口容器类
            /// 存放渲染窗口
            /// </summary>
            class EV_GRAPHIC_DLL RenderWindowList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef vector<EarthView::World::Graphic::CRenderWindow *> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
            private:
                InternalList mList;
            public:
                /// <summary>
                /// 默认的构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                RenderWindowList();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                RenderWindowList(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 在容器后面追加对象
                /// </summary>
                /// <param name="t">需要追加的对象</param>
                /// <returns></returns>
                void push_back(_in EarthView::World::Graphic::CRenderWindow *const &ref_t);
                /// <summary>
                /// 移除元素
                /// </summary>
                /// <param name="pos">需要移除元素的位置</param>
                /// <returns></returns>
                void remove(_in ev_size_t pos);
                /// <summary>
                /// 判断容器是否为空
                /// </summary>
                /// <param name=""></param>
                /// <returns>容器为空返回true，否则false</returns>
                ev_bool empty() const;
                /// <summary>
                /// 数组下标"[]"重载
                /// </summary>
                /// <param name="n">下标</param>
                /// <returns>返回对应下标的数组中的值</returns>
                EarthView::World::Graphic::CRenderWindow*& operator[](_in ev_size_t n);
                /// <summary>
                /// 数组下标"[]"重载
                /// </summary>
                /// <param name="n">下标</param>
                /// <returns>返回对应下标的数组中的值</returns>
                EarthView::World::Graphic::CRenderWindow *const &operator[](_in ev_size_t n) const;
                /// <summary>
                /// 检查发生变化的下标
                /// </summary>
                /// <param name="n">下标</param>
                /// <returns>返回对应下标的位置</returns>
                EarthView::World::Graphic::CRenderWindow*& at(_in ev_size_t n);
                /// <summary>
                /// 检查没有变化的下标
                /// </summary>
                /// <param name="n">下标</param>
                /// <returns>返回对应下标的位置</returns>
                EarthView::World::Graphic::CRenderWindow *const &at(_in ev_size_t n) const;
                /// 容器的大小
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回容器的大小</returns>
                ev_size_t size() const;
                /// <summary>
                /// 清空容器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clear();
            };
            /// <summary>
            /// 名字的编号
            /// 按照一定的顺序给名字编号
            /// </summary>
            class EV_GRAPHIC_DLL CNameGenerator : public EarthView::World::Core::CBaseObject
            {
            protected:
                EVString mPrefix;
                ev_uint64 mNext;
                EV_AUTO_MUTEX
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CNameGenerator(_in const CNameGenerator &rhs);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="prefix">EVString类的引用</param>
                /// <returns></returns>
                CNameGenerator(_in const EVString &prefix);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CNameGenerator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 产生一个名字
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回那个名字</returns>
                EVString generate();
                /// <summary>
                /// 重置计数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void reset();
                /// <summary>
                /// 设置计数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void setNext(ev_uint64 val);
                /// <summary>
                /// 得到计数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint64 getNext() const;
            };
            template <typename T>
            class CPool;

            
        }
    }
}

#endif

