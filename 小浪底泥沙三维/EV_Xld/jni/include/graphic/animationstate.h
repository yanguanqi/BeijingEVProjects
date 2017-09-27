#ifndef __AnimationSet_H__
#define __AnimationSet_H__
#pragma once
#include "graphic/graphic_config.h"
#include "controller.h"
#include <core/iteratorwrappers.h>
#include <core/stringdefines.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
			class CAnimation;
            class CAnimationStateSet;
            /// <summary>
            /// 动画状态类
            /// 管理动画的状态
            /// </summary>
            class EV_GRAPHIC_DLL CAnimationState : public EarthView::World::Core::CAllocatedObject
            {
            public:

				friend class CSceneManager;

                //// typedef for an array of ev_real32 values used as a bone blend mask
                /// <summary>
                /// 骨骼动画混合权重集合类
                /// 管理骨骼动画混合权重
                /// </summary>
                class EV_GRAPHIC_DLL BoneBlendMask : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<ev_real32> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                private:
                    InternalList mList;
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    BoneBlendMask(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="blendMaskSizeHint">初始构造的元素数量</param>
                    /// <param name="initialWeight">初始构造的元素值</param>
                    /// <returns></returns>
                    BoneBlendMask(_in ev_size_t blendMaskSizeHint, _in ev_real32 initialWeight);
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="blendMaskSizeHint">初始构造集合的大小</param>
                    /// <returns></returns>
                    BoneBlendMask(_in ev_size_t blendMaskSizeHint);
                    /// <summary>
                    /// 在容器最后添加元素
                    /// </summary>
                    /// <param name="t">元素值</param>
                    /// <returns></returns>
                    void push_back( _in const ev_real32 &t);
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
                    ev_real32 &front();
                    /// <summary>
                    /// 返回容器最后元素
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器最后元素</returns>
                    ev_real32 &back();
                    /// <summary>
                    /// 容器中间位置插入元素
                    /// </summary>
                    /// <param name="pos">位置</param>
                    /// <param name="t">元素值</param>
                    /// <returns></returns>
                    void insert(_in ev_uint32 pos, _in ev_real32 const &t);
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
                    ev_real32 &operator[](_in ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    /// <summary>
                    /// 重载[]操作符
                    /// </summary>
                    /// <param name="n">下标位置</param>
                    /// <returns>返回下标对应的值</returns>
                    ev_real32 const &operator[](_in ev_size_t n) const
                    {
                        const_reference l =  mList[n];
                        return l;
                    }
                    /// <summary>
                    /// 返回某位置的元素值
                    /// </summary>
                    /// <param name="n">位置</param>
                    /// <returns>返回位置对应的值</returns>
                    ev_real32 &at(_in ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    /// <summary>
                    /// 返回某位置的元素值
                    /// </summary>
                    /// <param name="n">位置</param>
                    /// <returns>返回位置对应的值</returns>
                    ev_real32 const &at(_in ev_size_t n) const
                    {
                        const_reference l =  mList[n];
                        return l;
                    }
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
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="animName">动画名称</param>
                /// <param name="parent">所属动画状态集合</param>
                /// <param name="timePos">当前时间点</param>
                /// <param name="length">动画长度</param>
                /// <param name="weight">动画权重</param>
                /// <param name="enabled">动画enable开关</param>
                /// <returns></returns>
                CAnimationState( _in const EVString &animName,  EarthView::World::Graphic::CAnimationStateSet *ref_parent,
                                 _in Real timePos, _in Real length, _in Real weight, _in ev_bool enabled);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="animName">动画名称</param>
                /// <param name="parent">所属动画状态集合</param>
                /// <param name="timePos">当前时间点</param>
                /// <param name="length">动画长度</param>
                /// <param name="weight">动画权重</param>
                /// <returns></returns>
                CAnimationState( _in const EVString &animName,  EarthView::World::Graphic::CAnimationStateSet *ref_parent,
                                 _in Real timePos, _in Real length, _in Real weight);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="animName">动画名称</param>
                /// <param name="parent">所属动画状态集合</param>
                /// <param name="timePos">当前时间点</param>
                /// <param name="length">动画长度</param>
                /// <returns></returns>
                CAnimationState( _in const EVString &animName,  EarthView::World::Graphic::CAnimationStateSet *ref_parent,
                                 _in Real timePos, _in Real length);
                /// <summary>
                /// 复制构造函数
                /// </summary>
                /// <param name="parent">所属动画状态集合</param>
                /// <param name="rhs">其它动画状态</param>
                /// <returns></returns>
                CAnimationState(_in EarthView::World::Graphic::CAnimationStateSet *ref_parent, _in const CAnimationState &rhs);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CAnimationState(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CAnimationState();
                /// <summary>
                /// 获得动画名称
                /// </summary>
                /// <param name=""></param>
                /// <returns>动画名称</returns>
                const EVString &getAnimationName() const;
                /// <summary>
                /// 获得动画当前时间点
                /// </summary>
                /// <param name=""></param>
                /// <returns>当前时间点</returns>
                Real getTimePosition() const;
                /// <summary>
                /// 设置动画当前时间点
                /// </summary>
                /// <param name="timePos">当前时间点</param>
                /// <returns></returns>
                void setTimePosition( _in Real timePos);
				/// <summary>
				/// 设置动画当前时间点,并保持在夹取时间段内
				/// </summary>
				/// <param name="timePos">当前时间点</param>
				/// <returns></returns>
				void setTimePositionInRange(_in Real timePos);
                /// <summary>
                /// 获得动画长度
                /// </summary>
                /// <param name=""></param>
                /// <returns>动画长度</returns>
                Real getLength() const;
                /// <summary>
                /// 设置动画长度
                /// </summary>
                /// <param name="len">动画长度</param>
                /// <returns></returns>
                void setLength( _in Real len);
                /// <summary>
                /// 获得动画权重
                /// </summary>
                /// <param name=""></param>
                /// <returns>动画权重</returns>
                Real getWeight() const;
                /// <summary>
                /// 设置动画权重
                /// </summary>
                /// <param name="weight">动画权重</param>
                /// <returns></returns>
                void setWeight( _in Real weight);
                /// <summary>
                /// 移动当前时间点，使动画状态在时间线上向前移
                /// </summary>
                /// <param name="offset">时间移动量</param>
                /// <returns></returns>
                void addTime( _in Real offset);
                /// <summary>
                /// 返回动画是否播放结束
                /// </summary>
                /// <param name=""></param>
                /// <returns>动画状态在end返回true，否则false</returns>
                ev_bool hasEnded() const;
                /// <summary>
                /// 返回动画是否处于启用状态
                /// </summary>
                /// <param name=""></param>
                /// <returns>动画状态enable返回true，否则false</returns>
                ev_bool getEnabled() const;
                /// <summary>
                /// 设置动画启用状态
                /// </summary>
                /// <param name="enabled">动画启用状态</param>
                /// <returns></returns>
                void setEnabled(_in ev_bool enabled);
                /// <summary>
                /// 重载==操作符
                /// </summary>
                /// <param name="rhs">其它动画状态</param>
                /// <returns>相等返回true，否则false</returns>
                ev_bool operator==( _in const EarthView::World::Graphic::CAnimationState &rhs) const;
                /// <summary>
                /// 重载!=操作符
                /// </summary>
                /// <param name="rhs">其它动画状态</param>
                /// <returns>不相等返回true，否则false</returns>
                ev_bool operator!=( _in const EarthView::World::Graphic::CAnimationState &rhs) const;
                /// <summary>
                /// 设置动画是否循环
                /// </summary>
                /// <param name="loop">动画循环状态</param>
                /// <returns></returns>
                void setLoop(_in ev_bool loop);
                /// <summary>
                /// 获得动画是否循环
                /// </summary>
                /// <param name=""></param>
                /// <returns>动画循环状态</returns>
                ev_bool getLoop() const;

				/// <summary>
				/// 获得动画是否播放到末尾并停止
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool isFinished() const;

                /// <summary>
                /// 从其它动画状态复制状态
                /// </summary>
                /// <param name="animState">其它动画状态</param>
                /// <returns></returns>
                void copyStateFrom( _in const EarthView::World::Graphic::CAnimationState &animState);
                /// <summary>
                /// 获得所属动画状态集合
                /// </summary>
                /// <param name=""></param>
                /// <returns>动画状态集合</returns>
                EarthView::World::Graphic::CAnimationStateSet *getParent() const;
                /// <summary>
                /// 创建骨骼动画混合权重集合
                /// </summary>
                /// <param name="blendMaskSizeHint">骨骼中骨的数量</param>
                /// <param name="initialWeight">权重</param>
                /// <returns></returns>
                void createBlendMask(_in ev_size_t blendMaskSizeHint, _in ev_real32 initialWeight);
                /// <summary>
                /// 创建骨骼动画混合权重集合，权重为1.0
                /// </summary>
                /// <param name="blendMaskSizeHint">骨骼中骨的数量</param>
                /// <returns></returns>
                void createBlendMask(_in ev_size_t blendMaskSizeHint);
                /// <summary>
                /// 删除当前动画混合权重集合
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void destroyBlendMask();
                /// <summary>
                /// 设置动画混合权重集合
                /// </summary>
                /// <param name="blendMaskData">权重数组</param>
                /// <returns></returns>
                void _setBlendMaskData( _in const ev_real32 *blendMaskData);
                /// <summary>
                /// 设置动画混合权重集合
                /// </summary>
                /// <param name="blendMask">骨骼动画混合权重集合类对象</param>
                /// <returns></returns>
                void _setBlendMask( _in const EarthView::World::Graphic::CAnimationState::BoneBlendMask *blendMask);
                /// <summary>
                /// 获得当前动画混合权重集合
                /// </summary>
                /// <param name=""></param>
                /// <returns>当前动画混合权重集合</returns>
                const EarthView::World::Graphic::CAnimationState::BoneBlendMask *getBlendMask() const;
                /// <summary>
                /// 判断当前动画是否具有有效权重集合
                /// </summary>
                /// <param name=""></param>
                /// <returns>存在返回true，否则false</returns>
                ev_bool hasBlendMask() const;
                /// <summary>
                /// 根据Bone标识设置其动画权重
                /// </summary>
                /// <param name="boneHandle">bone标识</param>
                /// <param name="weight">权重</param>
                /// <returns></returns>
                void setBlendMaskEntry(_in ev_size_t boneHandle, _in ev_real32 weight);
                /// <summary>
                /// 根据Bone标识获得其动画权重
                /// </summary>
                /// <param name="boneHandle">bone标识</param>
                /// <returns>权重</returns>
                inline ev_real32 getBlendMaskEntry(_in ev_size_t boneHandle) const
                {
                    EV_ASSERT(mBlendMask && mBlendMask->size() > boneHandle);
                    return (*mBlendMask)[boneHandle];
                }
				/// <summary>
				/// 设置是否夹取播放动画
				/// </summary>
				/// <param name="clip">是否夹取</param>
				/// <returns></returns>
				void setClipToRange(_in ev_bool clip);
				/// <summary>
				/// 返回是否夹取播放动画
				/// </summary>
				/// <returns></returns>
				ev_bool getClipToRange() const;
				/// <summary>
				/// 设置播放动画的边界
				/// </summary>
				/// <param name="start">边界的起始时间</param>
				/// <param name="end">边界的终止时间</param>
				/// <returns></returns>
				void setRange(_in Real start,_in Real end);
				/// <summary>
				/// 返回边界的起始点
				/// </summary>
				/// <returns></returns>
				Real getRangeStart() const;
				/// <summary>
				/// 返回边界的终止点
				/// </summary>
				/// <returns></returns>
				Real getRangeEnd() const;

            protected:
                //// the blend mask (containing per bone weights)
                EarthView::World::Graphic::CAnimationState::BoneBlendMask *mBlendMask;
                EVString mAnimationName;
                EarthView::World::Graphic::CAnimationStateSet *mParent;
				CAnimation* mAnimation;
                Real mTimePos;
                Real mLength;
                Real mWeight;
                ev_bool mEnabled;
                ev_bool mLoop;
				//2013-10-13 add by zk
				bool mCilpToRange;
				Real mRangeStart;
				Real mRangeEnd;

				ev_bool mFinished;
            };
            /// A map of animation states
            ///typedef map<EVString, EarthView::World::Graphic::CAnimationState*> EarthView::World::Graphic::AnimationStateMap;
            /// <summary>
            /// 动画名与动画状态集合类
            /// 管理动画的状态
            /// </summary>
            class EV_GRAPHIC_DLL AnimationStateMap : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                AnimationStateMap(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                AnimationStateMap();
                /// <summary>
                /// 增加动画集合元素
                /// </summary>
                /// <param name="key">键</param>
                /// <param name="val">值</param>
                /// <returns>成功增加true，否则false</returns>
                ev_bool push( _in const EVString &key, _in EarthView::World::Graphic::CAnimationState *const &ref_val);
                /// <summary>
                /// 判断元素是否存在
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>存在true，否则false</returns>
                ev_bool exist( _in const EVString &key);
                /// <summary>
                /// 重载[]操作符
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>返回键对应的值</returns>
                EarthView::World::Graphic::CAnimationState*& operator[]( _in const EVString &key);
                /// <summary>
                /// 获得键对应的值
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>返回键对应的值</returns>
                EarthView::World::Graphic::CAnimationState*& get( _in const EVString &key);
                /// <summary>
                /// 删除键对应的键值对
                /// </summary>
                /// <param name="key">键</param>
                /// <returns></returns>
                void erase( _in const EVString &key);
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
                typedef map<EVString, EarthView::World::Graphic::CAnimationState *> InternalList;
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
                iterator find( _in const EVString &key);
                const_iterator find( _in const EVString &key) const;
            private:
                InternalList mList;
            };
            ///typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::AnimationStateMap> AnimationStateIterator;
            ///typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::AnimationStateMap> ConstAnimationStateIterator;
            /// <summary>
            /// 动画状态键值对类
            /// 管理动画状态键值
            /// </summary>
            class EV_GRAPHIC_DLL AnimationStatePair: public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                AnimationStatePair(EarthView::World::Core::CNameValuePairList *pList);
            public:
                EVString first;
                EarthView::World::Graphic::CAnimationState *second;
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                AnimationStatePair();
            };
            /// <summary>
            /// 动画状态集合迭代器
            /// 管理动画状态集合迭代器操作
            /// </summary>
            class EV_GRAPHIC_DLL AnimationStateMapIterator : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::AnimationStateMap> InternalIterator;
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
                AnimationStateMapIterator(_in iterator first, _in iterator last);
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~AnimationStateMapIterator();
                /// <summary>
                /// 赋值符号"="的重载
                /// </summary>
                /// <param name="other">AnimationStateIterator类的引用</param>
                /// <returns>返回赋值后的引用</returns>
                EarthView::World::Graphic::AnimationStateMapIterator &operator=(_in const EarthView::World::Graphic::AnimationStateMapIterator &other);
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
                AnimationStateMapIterator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="lst">迭代器对应集合</param>
                /// <returns></returns>
                AnimationStateMapIterator(_in AnimationStateMap &lst);
                /// <summary>
                /// 复制构造函数
                /// </summary>
                /// <param name="other">其它迭代器</param>
                /// <returns></returns>
                AnimationStateMapIterator( _in const AnimationStateMapIterator &other);
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
                EVString nextKey() const;
                /// <summary>
                /// 返回容器当前的值
                /// </summary>
                /// <param name=""></param>
                /// <returns>值</returns>
                EarthView::World::Graphic::CAnimationState *nextValue() const;
                /// <summary>
                /// 返回容器当前的值指针
                /// </summary>
                /// <param name=""></param>
                /// <returns>值地址</returns>
                EarthView::World::Graphic::CAnimationState **nextValuePtr();
                /// <summary>
                /// 返回容器当前的值
                /// </summary>
                /// <param name=""></param>
                /// <returns>值</returns>
                EarthView::World::Graphic::CAnimationState *next();
                /// <summary>
                /// 返回容器首键值对
                /// </summary>
                /// <param name=""></param>
                /// <returns>首键值对</returns>
                const EarthView::World::Graphic::AnimationStatePair &getBegin();
                /// <summary>
                /// 返回容器尾键值对
                /// </summary>
                /// <param name=""></param>
                /// <returns>尾键值对</returns>
                const EarthView::World::Graphic::AnimationStatePair &getEnd();
                /// <summary>
                /// 返回容器当前键值对
                /// </summary>
                /// <param name=""></param>
                /// <returns>当前键值对</returns>
                const EarthView::World::Graphic::AnimationStatePair &getCurrent();
            private:
                InternalIterator *mIterator;
                EarthView::World::Graphic::AnimationStatePair mBeginPair;
                EarthView::World::Graphic::AnimationStatePair mCurrentPair;
                EarthView::World::Graphic::AnimationStatePair mEndPair;
                EarthView::World::Graphic::CAnimationState *mptr;
                ValueType mvt;
            };
            /// <summary>
            /// 节点动画轨迹集合const迭代器
            /// 管理节点动画轨迹集合const迭代器操作
            /// </summary>
            class EV_GRAPHIC_DLL ConstAnimationStateMapIterator : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::AnimationStateMap> InternalIterator;
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
                ConstAnimationStateMapIterator(_in const_iterator first, _in const_iterator last);
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~ConstAnimationStateMapIterator();
                /// <summary>
                /// 赋值符号"="的重载
                /// </summary>
                /// <param name="other">ConstAnimationStateIterator类的引用</param>
                /// <returns>返回赋值后的引用</returns>
                EarthView::World::Graphic::ConstAnimationStateMapIterator &operator=(_in const EarthView::World::Graphic::ConstAnimationStateMapIterator &other);
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
                ConstAnimationStateMapIterator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="lst">迭代器对应集合</param>
                /// <returns></returns>
                ConstAnimationStateMapIterator(_in AnimationStateMap &lst);
                /// <summary>
                /// 复制构造函数
                /// </summary>
                /// <param name="other">其它迭代器</param>
                /// <returns></returns>
                ConstAnimationStateMapIterator( _in const ConstAnimationStateMapIterator &other);
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
                EVString nextKey() const;
                /// <summary>
                /// 返回容器当前的值
                /// </summary>
                /// <param name=""></param>
                /// <returns>值</returns>
                EarthView::World::Graphic::CAnimationState *nextValue() const;
                /// <summary>
                /// 返回容器当前的值指针
                /// </summary>
                /// <param name=""></param>
                /// <returns>值地址</returns>
                EarthView::World::Graphic::CAnimationState **nextValuePtr();
                /// <summary>
                /// 返回容器当前的值
                /// </summary>
                /// <param name=""></param>
                /// <returns>值</returns>
                EarthView::World::Graphic::CAnimationState *next();
                /// <summary>
                /// 返回容器首键值对
                /// </summary>
                /// <param name=""></param>
                /// <returns>首键值对</returns>
                const EarthView::World::Graphic::AnimationStatePair &getBegin();
                /// <summary>
                /// 返回容器尾键值对
                /// </summary>
                /// <param name=""></param>
                /// <returns>尾键值对</returns>
                const EarthView::World::Graphic::AnimationStatePair &getEnd();
                /// <summary>
                /// 返回容器当前键值对
                /// </summary>
                /// <param name=""></param>
                /// <returns>当前键值对</returns>
                const EarthView::World::Graphic::AnimationStatePair &getCurrent();

            private:
                InternalIterator *mIterator;
                EarthView::World::Graphic::AnimationStatePair mBeginPair;
                EarthView::World::Graphic::AnimationStatePair mCurrentPair;
                EarthView::World::Graphic::AnimationStatePair mEndPair;
                EarthView::World::Graphic::CAnimationState *mptr;
                ValueType mvt;
            };
            /// A list of enabled animation states
            ///typedef list<EarthView::World::Graphic::CAnimationState*> EnabledAnimationStateList;
            ///typedef EarthView::World::Core::CConstVectorIterator<EnabledAnimationStateList> ConstEnabledAnimationStateIterator;
            /// <summary>
            /// 开启的动画状态List集合类
            /// 管理开启的动画状态
            /// </summary>
            class EV_GRAPHIC_DLL AnimationStateList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef list<EarthView::World::Graphic::CAnimationState *> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                /// <summary>
                /// 集合插入元素
                /// </summary>
                /// <param name="pos">迭代器</param>
                /// <param name="t">Handle标识</param>
                /// <returns>插入后的键值对</returns>
                iterator insert(_in iterator pos, _in EarthView::World::Graphic::CAnimationState *const &ref_t);

            private:
                InternalList mList;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                AnimationStateList(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                AnimationStateList();
                /// <summary>
                /// 在容器末尾添加元素
                /// </summary>
                /// <param name="t">元素值</param>
                /// <returns></returns>
                void push_back(_in EarthView::World::Graphic::CAnimationState *const &t);
                /// <summary>
                /// 在容器头部添加元素
                /// </summary>
                /// <param name="t">元素值</param>
                /// <returns></returns>
                void push_front(_in EarthView::World::Graphic::CAnimationState *const   &t);
                /// <summary>
                /// 删除最后元素
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void pop_back();
                /// <summary>
                /// 删除头部元素
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void pop_front();
                /// <summary>
                /// 返回第一个元素
                /// </summary>
                /// <param name=""></param>
                /// <returns>第一个元素值</returns>
                EarthView::World::Graphic::CAnimationState*& front();
                /// <summary>
                /// 返回最后元素
                /// </summary>
                /// <param name=""></param>
                /// <returns>最后元素值</returns>
                EarthView::World::Graphic::CAnimationState*& back();
                /// <summary>
                /// 返回中间某元素
                /// </summary>
                /// <param name=""></param>
                /// <returns>元素值</returns>
                EarthView::World::Graphic::CAnimationState*& at(_in ev_uint32 pos);
                /// <summary>
                /// 插入元素
                /// </summary>
                /// <param name="pos">插入位置</param>
                /// <param name="t">元素值</param>
                /// <returns></returns>
                void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CAnimationState *const &t);
                /// <summary>
                /// 删除元素
                /// </summary>
                /// <param name="pos">位置</param>
                /// <returns></returns>
                void remove(_in ev_size_t pos);
                /// <summary>
                /// 删除元素
                /// </summary>
                /// <param name="val">元素值</param>
                /// <returns></returns>
                void remove( _in EarthView::World::Graphic::CAnimationState *const &val);
                /// <summary>
                /// 判断容器是否为空
                /// </summary>
                /// <param name=""></param>
                /// <returns>为空返回true，否则false</returns>
                ev_bool empty() const;
                /// <summary>
                /// 返回容器中元素数量大小
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回容器中元素数量大小</returns>
                ev_size_t size() const;
                /// <summary>
                /// 改变容器大小
                /// </summary>
                /// <param name="newSize">容器大小</param>
                /// <returns></returns>
                void resize(_in ev_size_t newSize);
                /// <summary>
                /// 清空容器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clear();
            };
            class EV_GRAPHIC_DLL ConstAnimationStateListIterator : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::AnimationStateList> InternalIterator;
                typedef InternalIterator::iterator iterator;
                typedef InternalIterator::const_iterator IteratorType;
                typedef InternalIterator::ValueType ValueType;
                typedef InternalIterator::PointerType PointerType;
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="start">首迭代器</param>
                /// <param name="last">尾迭代器</param>
                /// <returns></returns>
                ConstAnimationStateListIterator(_in IteratorType start, _in IteratorType last);
                /// <summary>
                /// 赋值符号"="的重载
                /// </summary>
                /// <param name="other">ConstEnabledAnimationStateIterator类的引用</param>
                /// <returns>返回赋值后的引用</returns>
                EarthView::World::Graphic::ConstAnimationStateListIterator &operator=(_in const EarthView::World::Graphic::ConstAnimationStateListIterator &other);
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~ConstAnimationStateListIterator();
                /// <summary>
                /// 返回容器当前的值
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回容器当前的值</returns>
                ValueType peekNext () const;
                /// <summary>
                /// 返回容器当前的值
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回容器当前的值</returns>
                ValueType getNext ();
                /// <summary>
                /// 返回容器首迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>容器首迭代器</returns>
                const IteratorType &begin();
                /// <summary>
                /// 返回容器尾迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>容器尾迭代器</returns>
                const IteratorType &end();
                /// <summary>
                /// 返回容器当前迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>容器当前迭代器</returns>
                const IteratorType &current();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                ConstAnimationStateListIterator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="vec">迭代器对应集合</param>
                /// <returns></returns>
                ConstAnimationStateListIterator(_in AnimationStateList &vec);
                /// <summary>
                /// 复制构造函数
                /// </summary>
                /// <param name="rhs">其它迭代器</param>
                /// <returns></returns>
                ConstAnimationStateListIterator(_in const ConstAnimationStateListIterator &rhs);
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
                /// 返回容器当前元素值
                /// </summary>
                /// <param name=""></param>
                /// <returns>当前元素值</returns>
                EarthView::World::Graphic::CAnimationState *getCurrent();
                /// <summary>
                /// 返回容器下一元素值
                /// </summary>
                /// <param name=""></param>
                /// <returns>下一元素值</returns>
                EarthView::World::Graphic::CAnimationState *next();
                /// <summary>
                /// 返回容器头部元素值
                /// </summary>
                /// <param name=""></param>
                /// <returns>头部元素值</returns>
                EarthView::World::Graphic::CAnimationState *getBegin();
                /// <summary>
                /// 返回容器尾部元素值
                /// </summary>
                /// <param name=""></param>
                /// <returns>尾部元素值</returns>
                EarthView::World::Graphic::CAnimationState *getEnd();
            private:
                InternalIterator *mIterator;
            };
            /// <summary>
            /// 动画状态集合类
            /// 管理动画状态集合
            /// </summary>
            class EV_GRAPHIC_DLL CAnimationStateSet : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                EV_AUTO_MUTEX
            public:

                /// <summary>
                /// 默认构造函数，创建空集合
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CAnimationStateSet();
                /// <summary>
                /// 复制构造函数
                /// </summary>
                /// <param name="rhs">其它动画状态集合对象</param>
                /// <returns></returns>
                CAnimationStateSet( _in const CAnimationStateSet &rhs);

            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CAnimationStateSet(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CAnimationStateSet();
                /// <summary>
                /// 创建动画状态实例
                /// </summary>
                /// <param name="animName">动画名称</param>
                /// <param name="timePos">当前时间点</param>
                /// <param name="length">动画长度</param>
                /// <param name="weight">动画权重</param>
                /// <param name="enabled">动画enable开关</param>
                /// <returns>动画状态指针</returns>
                EarthView::World::Graphic::CAnimationState *createAnimationState( _in const EVString &animName,
                                                       _in Real timePos, _in Real length, _in Real weight, _in ev_bool enabled);
                /// <summary>
                /// 创建动画状态实例，状态为unable
                /// </summary>
                /// <param name="animName">动画名称</param>
                /// <param name="timePos">当前时间点</param>
                /// <param name="length">动画长度</param>
                /// <param name="weight">动画权重</param>
                /// <returns>动画状态指针</returns>
                EarthView::World::Graphic::CAnimationState *createAnimationState( _in const EVString &animName,
                                                       _in Real timePos, _in Real length, _in Real weight);
                /// <summary>
                /// 创建动画状态实例，权重1.0，状态为unable
                /// </summary>
                /// <param name="animName">动画名称</param>
                /// <param name="timePos">当前时间点</param>
                /// <param name="length">动画长度</param>
                /// <param name="weight">动画权重</param>
                /// <returns>动画状态指针</returns>
                EarthView::World::Graphic::CAnimationState *createAnimationState( _in const EVString &animName,
                                                       _in Real timePos, _in Real length);
                /// <summary>
                /// 根据动画名称获得动画状态
                /// </summary>
                /// <param name="name">动画名称</param>
                /// <returns>动画状态指针</returns>
                EarthView::World::Graphic::CAnimationState *getAnimationState( _in const EVString &name) const;
                /// <summary>
                /// 根据动画名称判断动画状态是否存在
                /// </summary>
                /// <param name="name">动画名称</param>
                /// <returns>存在返回true，否则false</returns>
                ev_bool hasAnimationState( _in const EVString &name) const;
                /// <summary>
                /// 根据动画名称删除其动画状态
                /// </summary>
                /// <param name="name">动画名称</param>
                /// <returns></returns>
                void removeAnimationState( _in const EVString &name);
                /// <summary>
                /// 删除集合中所有动画状态
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void removeAllAnimationStates();
                /// <summary>
                /// 获得动画状态集合迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>迭代器</returns>
                EarthView::World::Graphic::AnimationStateMapIterator getAnimationStateIterator();
                /// <summary>
                /// 获得动画状态集合const迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>const迭代器</returns>
                EarthView::World::Graphic::ConstAnimationStateMapIterator getAnimationStateIterator() const;
                /// <summary>
                /// 复制动画状态到另一个匹配的集合
                /// </summary>
                /// <param name="target">另一动画状态集合</param>
                /// <returns></returns>
                void copyMatchingState( EarthView::World::Graphic::CAnimationStateSet *target) const;
                /// <summary>
                /// 通知动画状态已改变
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _notifyDirty();
                /// <summary>
                /// 获得已改变动画状态的帧数量
                /// </summary>
                /// <param name=""></param>
                /// <returns>改变动画状态的帧数量</returns>
                ev_uint32 getDirtyFrameNumber() const;
                /// <summary>
                /// 通知动画状态的开启状态
                /// </summary>
                /// <param name="target">动画状态指针</param>
                /// <param name="enabled">开启状态</param>
                /// <returns></returns>
                void _notifyAnimationStateEnabled(_in EarthView::World::Graphic::CAnimationState *ref_target, _in ev_bool enabled);
                /// <summary>
                /// 返回当前动画状态集合中是否存在激活状态的动画
                /// </summary>
                /// <param name=""></param>
                /// <returns>存在为true，否则false</returns>
                ev_bool hasEnabledAnimationState() const;
                /// <summary>
                /// 返回当前动画状态集合中激活状态的动画状态迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回当前动画状态集合中激活状态的动画状态迭代器</returns>
                EarthView::World::Graphic::ConstAnimationStateListIterator getEnabledAnimationStateIterator() const;
				/// <summary>
				/// 返回当前动画状态集合中激活状态的动画状态的数目
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_uint32 getNumOfEnabledAnimationStates() const;
            protected:
                ev_uint32 mDirtyFrameNumber;
                EarthView::World::Graphic::AnimationStateMap mAnimationStates;
                EarthView::World::Graphic::AnimationStateList mEnabledAnimationStates;
            };
            /// <summary>
            /// 动画状态控制器的值类
            /// 管理动画状态控制器的值
            /// </summary>
            class EV_GRAPHIC_DLL CAnimationStateControllerValue : public EarthView::World::Graphic::CControllerValue
            {
            protected:
                EarthView::World::Graphic::CAnimationState *mTargetAnimationState;
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="targetAnimationState"></param>
                /// <returns></returns>
                CAnimationStateControllerValue(_in CAnimationState *ref_targetAnimationState);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CAnimationStateControllerValue(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CAnimationStateControllerValue();
                /// <summary>
                /// 获得动画状态控制器的值
                /// </summary>
                /// <param name=""></param>
                /// <returns>动画状态控制器的值</returns>
                Real getValue() const;
                /// <summary>
                /// 设置动画状态控制器的值
                /// </summary>
                /// <param name=""></param>
                /// <returns>设置动画状态控制器的值</returns>
                void setValue( _in Real value);
            };
        }
    }
}

#endif

