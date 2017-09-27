#ifndef __EV_POSE_H
#define __EV_POSE_H
#pragma once
#include "graphic/graphic_config.h"
#include <mathengine/vector3.h>
#include "hardwarevertexbuffer.h"
#include <core/iteratorwrapper.h>

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CVector3;
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

            /// <summary>
            /// 顶点姿态类
            /// 管理顶点的姿态变换数据，根据不同的权重和对顶点数据的偏移融合不同的姿态，来产生最后的结果
            /// </summary>
            class EV_GRAPHIC_DLL CPose : public EarthView::World::Core::CAllocatedObject
            {
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="target">目标几何姿态数据的索引</param>
                /// <param name="name">姿态名称</param>
                /// <returns></returns>
                CPose(_in ev_uint16 target, _in const EVString &name);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="target">目标几何姿态数据的索引</param>
                /// <returns></returns>
                CPose(_in ev_uint16 target);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CPose(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CPose();
                /// <summary>
                /// 获得姿态名称
                /// </summary>
                /// <param name=""></param>
                /// <returns>姿态名称</returns>
                const EVString &getName() const;
                /// <summary>
                /// 获得目标几何姿态数据索引
                /// </summary>
                /// <param name=""></param>
                /// <returns>目标几何姿态数据索引</returns>
                ev_uint16 getTarget() const;
                ///typedef map<ev_size_t, EarthView::World::Spatial::Math::CVector3> EarthView::World::Graphic::CPose::VertexOffsetMap;
                /// <summary>
                /// 顶点偏移数据集合类
                /// 管理顶点偏移数据
                /// </summary>
                class EV_GRAPHIC_DLL VertexOffsetMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    VertexOffsetMap(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    VertexOffsetMap();
                    /// <summary>
                    /// 增加动画集合元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <param name="val">值</param>
                    /// <returns>成功增加true，否则false</returns>
                    ev_bool push( _in const ev_size_t &key, _in const EarthView::World::Spatial::Math::CVector3 &val);
                    /// <summary>
                    /// 判断元素是否存在
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>存在true，否则false</returns>
                    ev_bool exist( _in const ev_size_t &key);
                    /// <summary>
                    /// 重载[]操作符
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    EarthView::World::Spatial::Math::CVector3 &operator[]( _in const ev_size_t &key);
                    /// <summary>
                    /// 获得键对应的值
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    EarthView::World::Spatial::Math::CVector3 &get( _in const ev_size_t &key);
                    /// <summary>
                    /// 删除键对应的值
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns></returns>
                    void erase( _in const ev_size_t &key);
                    /// <summary>
                    /// 返回集合的大小
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>集合的大小</returns>
                    ev_size_t size() const;
                    /// <summary>
                    /// 清空集合
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void clear();
                    /// <summary>
                    /// 判断集合是否为空
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>集合为空返回true，否则false</returns>
                    ev_bool empty() const;
                ev_private:
                    typedef map<ev_size_t, EarthView::World::Spatial::Math::CVector3> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);			/// 保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    /// <summary>
                    /// 集合插入元素
                    /// </summary>
                    /// <param name="val">值</param>
                    /// <returns>插入后的键值对</returns>
                    _Pairib insert( _in const value_type &val);
                    /// <summary>
                    /// 查找元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>查找后返回对应迭代器</returns>
                    iterator find( _in const ev_size_t &key);
                    /// <summary>
                    /// 查找元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>查找后返回对应迭代器</returns>
                    const_iterator find( _in const ev_size_t &key) const;
                private:
                    InternalList mList;
                };
                /// <summary>
                /// 顶点偏移数据键值对结构
                /// </summary>
                class EV_GRAPHIC_DLL VertexOffsetPair: public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    VertexOffsetPair(EarthView::World::Core::CNameValuePairList *pList);
                public:
                    VertexOffsetPair();
                    ev_size_t first;
                    EarthView::World::Spatial::Math::CVector3 second;
                };
                ///typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CPose::VertexOffsetMap> EarthView::World::Graphic::CPose::VertexOffsetIterator;
                /// <summary>
                /// 顶点偏移数据集合迭代器类
                /// 管理顶点偏移数据指针
                /// </summary>
                class EV_GRAPHIC_DLL VertexOffsetIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CPose::VertexOffsetMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="first">首迭代器</param>
                    /// <param name="last">尾迭代器</param>
                    /// <returns></returns>
                    VertexOffsetIterator(_in iterator first, _in iterator last);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~VertexOffsetIterator();
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CPose::VertexOffsetIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CPose::VertexOffsetIterator &operator=(_in const EarthView::World::Graphic::CPose::VertexOffsetIterator &other);
                    /// <summary>
                    /// 返回容器当前的键
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的键</returns>
                    KeyType peekNextKey() const;
                    /// <summary>
                    /// 返回下一值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType peekNextValue (  ) const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值指针</returns>
                    const PointerType peekNextValuePtr ();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType getNext();
                    /// <summary>
                    /// 返回容器首迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器首迭代器</returns>
                    const IteratorType &begin();
                    /// <summary>
                    /// 返回容器当前迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器当前迭代器</returns>
                    IteratorType &current();
                    /// <summary>
                    /// 返回容器尾迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器尾迭代器</returns>
                    const IteratorType &end();
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    VertexOffsetIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="lst">迭代器对应集合</param>
                    /// <returns></returns>
                    VertexOffsetIterator(_in EarthView::World::Graphic::CPose::VertexOffsetMap &lst);
                    /// <summary>
                    /// 复制构造函数
                    /// </summary>
                    /// <param name="other">其它迭代器</param>
                    /// <returns></returns>
                    VertexOffsetIterator( _in const VertexOffsetIterator &other);
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
                    /// 返回容器当前的键
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>键</returns>
                    EVString nextKey() const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Spatial::Math::CVector3 nextValue() const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值地址</returns>
                    EarthView::World::Spatial::Math::CVector3 *nextValuePtr();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Spatial::Math::CVector3 next();
                    /// <summary>
                    /// 返回容器首键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首键值对</returns>
                    const EarthView::World::Graphic::CPose::VertexOffsetPair &getBegin();
                    /// <summary>
                    /// 返回容器尾键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾键值对</returns>
                    const EarthView::World::Graphic::CPose::VertexOffsetPair &getEnd();
                    /// <summary>
                    /// 返回容器当前键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前键值对</returns>
                    const EarthView::World::Graphic::CPose::VertexOffsetPair &getCurrent();
                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CPose::VertexOffsetPair mBeginPair;
                    EarthView::World::Graphic::CPose::VertexOffsetPair mCurrentPair;
                    EarthView::World::Graphic::CPose::VertexOffsetPair mEndPair;
                    EarthView::World::Spatial::Math::CVector3 mptr;
                    ValueType mvt;
                };
                //// An iterator over the vertex offsets
                ///typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CPose::VertexOffsetMap> EarthView::World::Graphic::CPose::ConstVertexOffsetIterator;
                /// <summary>
                /// 顶点偏移数据集合迭代器类
                /// 管理顶点偏移数据指针
                /// </summary>
                class EV_GRAPHIC_DLL ConstVertexOffsetIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CPose::VertexOffsetMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="first">首迭代器</param>
                    /// <param name="last">尾迭代器</param>
                    /// <returns></returns>
                    ConstVertexOffsetIterator(_in const_iterator first, _in const_iterator last);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~ConstVertexOffsetIterator();
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CPose::ConstVertexOffsetIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CPose::ConstVertexOffsetIterator &operator=(_in const EarthView::World::Graphic::CPose::ConstVertexOffsetIterator &other);
                    /// <summary>
                    /// 返回容器当前的键
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的键</returns>
                    KeyType peekNextKey() const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType peekNextValue (  ) const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值指针</returns>
                    const PointerType peekNextValuePtr ();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType getNext();
                    /// <summary>
                    /// 返回容器首迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器首迭代器</returns>
                    const IteratorType &begin();
                    /// <summary>
                    /// 返回容器当前迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器当前迭代器</returns>
                    IteratorType &current();
                    /// <summary>
                    /// 返回容器尾迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器尾迭代器</returns>
                    const IteratorType &end();
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    ConstVertexOffsetIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="lst">迭代器对应集合</param>
                    /// <returns></returns>
                    ConstVertexOffsetIterator(_in EarthView::World::Graphic::CPose::VertexOffsetMap &lst);
                    /// <summary>
                    /// 复制构造函数
                    /// </summary>
                    /// <param name="other">其它迭代器</param>
                    /// <returns></returns>
                    ConstVertexOffsetIterator( _in const ConstVertexOffsetIterator &other);
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
                    void moveNext (  );
                    /// <summary>
                    /// 返回容器当前的键
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>键</returns>
                    ev_size_t nextKey() const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Spatial::Math::CVector3 nextValue() const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值地址</returns>
                    EarthView::World::Spatial::Math::CVector3 *nextValuePtr();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Spatial::Math::CVector3 next();
                    /// <summary>
                    /// 返回容器首键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首键值对</returns>
                    const EarthView::World::Graphic::CPose::VertexOffsetPair &getBegin();
                    /// <summary>
                    /// 返回容器尾键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾键值对</returns>
                    const EarthView::World::Graphic::CPose::VertexOffsetPair &getEnd();
                    /// <summary>
                    /// 返回容器当前键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前键值对</returns>
                    const EarthView::World::Graphic::CPose::VertexOffsetPair &getCurrent();
                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CPose::VertexOffsetPair mBeginPair;
                    EarthView::World::Graphic::CPose::VertexOffsetPair mCurrentPair;
                    EarthView::World::Graphic::CPose::VertexOffsetPair mEndPair;
                    EarthView::World::Spatial::Math::CVector3 mptr;
                    ValueType mvt;
                };
                //// A collection of normals based on the vertex index
                ///typedef map<size_t, EarthView::World::Spatial::Math::CVector3> EarthView::World::Graphic::CPose::NormalsMap;
                /// add for 1.8 by wj
                class EV_GRAPHIC_DLL NormalsMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    NormalsMap(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    NormalsMap();
                    ev_bool push( _in const ev_size_t &key, _in const EarthView::World::Spatial::Math::CVector3 &val);
                    ev_bool exist( _in const ev_size_t &key);
                    EarthView::World::Spatial::Math::CVector3 &operator[]( _in const ev_size_t &key);
                    EarthView::World::Spatial::Math::CVector3 &get( _in const ev_size_t &key);
                    void erase( _in const ev_size_t &key);
                    ev_size_t size() const;
                    void clear();
                    ev_bool empty() const;
                ev_private:
                    typedef map<ev_size_t, EarthView::World::Spatial::Math::CVector3> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);			/// 保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)

                    _Pairib insert( _in const value_type &val);
                    iterator find( _in const ev_size_t &key);
                    const_iterator find( _in const ev_size_t &key) const;
                private:
                    InternalList mList;
                };
                class EV_GRAPHIC_DLL NormalsPair: public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    NormalsPair(EarthView::World::Core::CNameValuePairList *pList);
                public:
                    NormalsPair();
                    ev_size_t first;
                    EarthView::World::Spatial::Math::CVector3 second;
                };
                //// An iterator over the vertex offsets
                ///typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CPose::NormalsMap> EarthView::World::Graphic::CPose::NormalsIterator;
                class EV_GRAPHIC_DLL NormalsIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CPose::NormalsMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    NormalsIterator(_in iterator first, _in iterator last);
                    ~NormalsIterator();
                    EarthView::World::Graphic::CPose::NormalsIterator &operator=(_in const EarthView::World::Graphic::CPose::NormalsIterator &other);
                    KeyType peekNextKey() const;
                    ValueType peekNextValue (  ) const;
                    const PointerType peekNextValuePtr ();
                    ValueType getNext();
                    const IteratorType &begin();
                    IteratorType &current();
                    const IteratorType &end();
                ev_private:
                    NormalsIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    NormalsIterator(_in EarthView::World::Graphic::CPose::NormalsMap &lst);
                    NormalsIterator( _in const NormalsIterator &other);
                    ev_bool hasMoreElements ( ) const;
                    void moveNext ();
                    EVString nextKey() const;
                    EarthView::World::Spatial::Math::CVector3 nextValue() const;
                    EarthView::World::Spatial::Math::CVector3 *nextValuePtr();
                    EarthView::World::Spatial::Math::CVector3 next();
                    const EarthView::World::Graphic::CPose::NormalsPair &getBegin();
                    const EarthView::World::Graphic::CPose::NormalsPair &getEnd();
                    const EarthView::World::Graphic::CPose::NormalsPair &getCurrent();
                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CPose::NormalsPair mBeginPair;
                    EarthView::World::Graphic::CPose::NormalsPair mCurrentPair;
                    EarthView::World::Graphic::CPose::NormalsPair mEndPair;
                    EarthView::World::Spatial::Math::CVector3 mptr;
                    ValueType mvt;
                };
                //// An iterator over the vertex offsets
                ///typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CPose::NormalsMap> EarthView::World::Graphic::CPose::ConstNormalsIterator;
                class EV_GRAPHIC_DLL ConstNormalsIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CPose::NormalsMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    ConstNormalsIterator(_in const_iterator first, _in const_iterator last);
                    ~ConstNormalsIterator();
                    EarthView::World::Graphic::CPose::ConstNormalsIterator &operator=(_in const EarthView::World::Graphic::CPose::ConstNormalsIterator &other);
                    KeyType peekNextKey() const;
                    ValueType peekNextValue (  ) const;
                    const PointerType peekNextValuePtr ();
                    ValueType getNext();
                    const IteratorType &begin();
                    IteratorType &current();
                    const IteratorType &end();
                ev_private:
                    ConstNormalsIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    ConstNormalsIterator(_in EarthView::World::Graphic::CPose::NormalsMap &lst);
                    ConstNormalsIterator( _in const ConstNormalsIterator &other);
                    ev_bool hasMoreElements ( ) const;
                    void moveNext (  );
                    ev_size_t nextKey() const;
                    EarthView::World::Spatial::Math::CVector3 nextValue() const;
                    EarthView::World::Spatial::Math::CVector3 *nextValuePtr();
                    EarthView::World::Spatial::Math::CVector3 next();
                    const EarthView::World::Graphic::CPose::NormalsPair &getBegin();
                    const EarthView::World::Graphic::CPose::NormalsPair &getEnd();
                    const EarthView::World::Graphic::CPose::NormalsPair &getCurrent();
                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CPose::NormalsPair mBeginPair;
                    EarthView::World::Graphic::CPose::NormalsPair mCurrentPair;
                    EarthView::World::Graphic::CPose::NormalsPair mEndPair;
                    EarthView::World::Spatial::Math::CVector3 mptr;
                    ValueType mvt;
                };
                //// Return whether the pose vertices include normals
                bool getIncludesNormals() const
                {
                    return !mNormalsMap.empty();
                }
                /// <summary>
                /// 增加顶点偏移姿态数据
                /// </summary>
                /// <param name="index">顶点索引</param>
                /// <param name="offset">偏移数据</param>
                /// <returns></returns>
                void addVertex(_in ev_size_t index, _in const EarthView::World::Spatial::Math::CVector3 &offset);

                void addVertex(size_t index, const EarthView::World::Spatial::Math::CVector3 &offset, const EarthView::World::Spatial::Math::CVector3 &normal);

                /// <summary>
                /// 删除顶点偏移姿态数据
                /// </summary>
                /// <param name="index">顶点索引</param>
                /// <returns></returns>
                void removeVertex(_in ev_size_t index);
                /// <summary>
                /// 删除所有顶点偏移姿态数据
                /// </summary>
                /// <param name="index">顶点索引</param>
                /// <returns></returns>
                void clearVertices();
                /// <summary>
                /// 获得顶点偏移姿态数据集合迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>顶点偏移姿态数据集合迭代器</returns>
                EarthView::World::Graphic::CPose::ConstVertexOffsetIterator getVertexOffsetIterator() const;
                /// <summary>
                /// 获得顶点偏移姿态数据集合迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>顶点偏移姿态数据集合迭代器</returns>
                EarthView::World::Graphic::CPose::VertexOffsetIterator getVertexOffsetIterator();
                /// <summary>
                /// 获得顶点偏移姿态数据集合
                /// </summary>
                /// <param name=""></param>
                /// <returns>顶点偏移姿态数据集合</returns>
                const EarthView::World::Graphic::CPose::VertexOffsetMap &getVertexOffsets() const;

                /** Gets an iterator over all the vertex offsets. */
                EarthView::World::Graphic::CPose::ConstNormalsIterator getNormalsIterator() const;
                /** Gets an iterator over all the vertex offsets. */
                EarthView::World::Graphic::CPose::NormalsIterator getNormalsIterator();
                /** Gets a const reference to the vertex offsets. */
                const EarthView::World::Graphic::CPose::NormalsMap &getNormals() const
                {
                    return mNormalsMap;
                }

                /// <summary>
                /// 获得顶点偏移姿态数据对应的硬件顶点缓存
                /// </summary>
                /// <param name="numVertices">顶点数量</param>
                /// <returns>顶点偏移姿态数据对应的硬件顶点缓存</returns>
                const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &_getHardwareVertexBuffer(const EarthView::World::Graphic::CVertexData *origData) const;
                /// <summary>
                /// clone顶点姿态数据
                /// </summary>
                /// <param name=""></param>
                /// <returns>clone顶点姿态数据</returns>
                _extfree EarthView::World::Graphic::CPose *clone() const;
            protected:
                ev_uint16 mTarget;
                EVString mName;
                EarthView::World::Graphic::CPose::VertexOffsetMap mVertexOffsetMap;
                //// Primary storage, sparse vertex use
                EarthView::World::Graphic::CPose::NormalsMap mNormalsMap;
                mutable EarthView::World::Graphic::CHardwareVertexBufferSharedPtr mBuffer;
            };
            ///typedef vector<EarthView::World::Graphic::CPose*> PoseList;
            /// <summary>
            /// 顶点姿态数据集合类
            /// 管理顶点的姿态数据的容器
            /// </summary>
            class EV_GRAPHIC_DLL PoseList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef vector<EarthView::World::Graphic::CPose *> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                /// <summary>
                /// 集合插入元素
                /// </summary>
                /// <param name="pos">位置迭代器</param>
                /// <param name="t">元素值</param>
                /// <returns>插入元素后元素迭代器</returns>
                iterator insert(_in iterator pos, _in EarthView::World::Graphic::CPose *const &t);
            private:
                InternalList mList;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                PoseList(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                PoseList();
                /// <summary>
                /// 在容器最后添加元素
                /// </summary>
                /// <param name="t">元素值</param>
                /// <returns></returns>
                void push_back(_in EarthView::World::Graphic::CPose *const &t);
                /// <summary>
                /// 删除容器最后元素
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void pop_back();
                /// <summary>
                /// 返回容器首个元素
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回容器首个元素</returns>
                EarthView::World::Graphic::CPose*& front();
                /// <summary>
                /// 返回容器最后元素
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回容器最后元素</returns>
                EarthView::World::Graphic::CPose*& back();
                /// <summary>
                /// 容器中间位置插入元素
                /// </summary>
                /// <param name="pos">位置</param>
                /// <param name="t">元素值</param>
                /// <returns></returns>
                void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CPose *const &t);
                /// <summary>
                /// 删除容器中间位置元素
                /// </summary>
                /// <param name="pos">位置</param>
                /// <returns></returns>
                void remove(_in ev_size_t pos);
                /// <summary>
                /// 返回容器是否为空
                /// </summary>
                /// <param name=""></param>
                /// <returns>容器为空返回true，否则false</returns>
                ev_bool empty() const;
                /// <summary>
                /// 重载[]操作符
                /// </summary>
                /// <param name="n">下标位置</param>
                /// <returns>返回下标对应的值</returns>
                EarthView::World::Graphic::CPose*& operator[](_in ev_size_t n);
                /// <summary>
                /// 重载[]操作符
                /// </summary>
                /// <param name="n">下标位置</param>
                /// <returns>返回下标对应的值</returns>
                EarthView::World::Graphic::CPose *const &operator[](_in ev_size_t n) const;
                /// <summary>
                /// 返回某位置的元素值
                /// </summary>
                /// <param name="n">位置</param>
                /// <returns>返回位置对应的值</returns>
                EarthView::World::Graphic::CPose*& at(_in ev_size_t n);
                /// <summary>
                /// 返回某位置的元素值
                /// </summary>
                /// <param name="n">位置</param>
                /// <returns>返回位置对应的值</returns>
                EarthView::World::Graphic::CPose *const &at(_in ev_size_t n) const;
                /// <summary>
                /// 返回元素的数量大小
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回元素的数量大小</returns>
                ev_size_t size() const;
                /// <summary>
                /// 改变容器中元素数量大小
                /// </summary>
                /// <param name="newSize">改变的容器中元素数量大小</param>
                /// <returns></returns>
                void resize(_in ev_size_t newSize);
                /// <summary>
                /// 改变容器中最小的元素容纳数量
                /// </summary>
                /// <param name="count">最小的元素容纳数量</param>
                /// <returns></returns>
                void reserve(_in ev_size_t count);
                /// <summary>
                /// 清空所有元素
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clear();
            };
        }
    }
}

#endif

