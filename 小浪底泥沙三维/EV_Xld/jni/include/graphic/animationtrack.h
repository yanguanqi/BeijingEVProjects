#ifndef __AnimationTrack_H__
#define __AnimationTrack_H__
#pragma once
#include "graphic/graphic_config.h"
#include <mathengine/ev_math.h>
#include "animable.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CVertexPoseKeyFrame;
            class PoseList;
            class CKeyFrame;
            class CAnimation;
            class CNumericKeyFrame;
            class CNode;
            class CTransformKeyFrame;
			class CSphereTransformKeyFrame;
            class CVertexData;
            class CVertexMorphKeyFrame;
            class CPose;
            class CVertexData;
            /// <summary>
            /// 动画帧的时间索引类
            /// 管理通过时间索引位置查找动画帧
            /// </summary>
            class EV_GRAPHIC_DLL CTimeIndex: public EarthView::World::Core::CBaseObject
            {
            protected:
                Real mTimePos;
                ev_uint32 mKeyIndex;
                static const ev_uint32 INVALID_KEY_INDEX = (ev_uint32) - 1;
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="timePos">时间点</param>
                /// <returns></returns>
                CTimeIndex( _in Real timePos);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="timePos">时间点</param>
                /// <param name="keyIndex">关键帧索引</param>
                /// <returns></returns>
                CTimeIndex( _in Real timePos, _in ev_uint32 keyIndex);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CTimeIndex(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 判断是否存在有效的关键帧索引
                /// </summary>
                /// <param name=""></param>
                /// <returns>存在返回true，否则false</returns>
                ev_bool hasKeyIndex() const;
                /// <summary>
                /// 获得动画帧的时间点
                /// </summary>
                /// <param name=""></param>
                /// <returns>时间点</returns>
                Real getTimePos() const;
                /// <summary>
                /// 获得动画关键帧索引
                /// </summary>
                /// <param name=""></param>
                /// <returns>关键帧索引</returns>
                ev_uint32 getKeyIndex() const;
            };
            /// <summary>
            /// 动画轨迹类
            /// 管理动画轨迹
            /// </summary>
            class EV_GRAPHIC_DLL CAnimationTrack : public EarthView::World::Core::CAllocatedObject
            {
            public:
                /// <summary>
                /// 动画帧监听类
                /// 管理动画帧
                /// </summary>
                class EV_GRAPHIC_DLL CAnimationTrackListener : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CAnimationTrackListener(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CAnimationTrackListener();
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    virtual ~CAnimationTrackListener();
                    /// <summary>
                    /// 关键帧插值
                    /// </summary>
                    /// <param name="t">动画轨迹</param>
                    /// <param name="timeIndex">时间索引</param>
                    /// <param name="kf">插值结果</param>
                    /// <returns>标识是否插值成功</returns>
                    virtual ev_bool getInterpolatedKeyFrame( _in const EarthView::World::Graphic::CAnimationTrack *t, _in const EarthView::World::Graphic::CTimeIndex &timeIndex,  EarthView::World::Graphic::CKeyFrame *kf);
                };
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="parent">动画类对象</param>
                /// <param name="handle">动画轨迹标识</param>
                /// <returns></returns>
                CAnimationTrack(_in CAnimation *ref_parent, _in ev_uint16 handle);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CAnimationTrack(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CAnimationTrack();
                /// <summary>
                /// 获得动轨迹标识
                /// </summary>
                /// <param name=""></param>
                /// <returns>标识值</returns>
                ev_uint16 getHandle() const;
                /// <summary>
                /// 返回动画中关键帧数量
                /// </summary>
                /// <param name=""></param>
                /// <returns>关键帧数量</returns>
                virtual ev_uint16 getNumKeyFrames() const;
                /// <summary>
                /// 根据索引获得关键帧
                /// </summary>
                /// <param name="index">关键帧索引</param>
                /// <returns>关键帧指针</returns>
                virtual EarthView::World::Graphic::CKeyFrame *getKeyFrame(_in ev_uint16 index) const;
                /// <summary>
                /// 返回某时间点前后激活状态的关键帧，及从当前时间点开始的帧索引
                /// </summary>
                /// <param name="timeIndex">时间索引</param>
                /// <param name="keyFrame1">关键帧1</param>
                /// <param name="keyFrame2">关键帧2</param>
                /// <param name="firstKeyIndex">关键帧索引</param>
                /// <returns>前后两关键帧之间的时间距离</returns>
                virtual Real getKeyFramesAtTime( _in const EarthView::World::Graphic::CTimeIndex &timeIndex, _out EarthView::World::Graphic::CKeyFrame **keyFrame1, _out EarthView::World::Graphic::CKeyFrame **keyFrame2,
                                                 _out ev_uint16 *firstKeyIndex ) const;
                /// <summary>
                /// 返回某时间点前后激活状态的关键帧，及从当前时间点开始的帧索引，当前关键帧索引0
                /// </summary>
                /// <param name="timeIndex">时间索引</param>
                /// <param name="keyFrame1">关键帧1</param>
                /// <param name="keyFrame2">关键帧2</param>
                /// <returns>前后两关键帧之间的时间距离</returns>
                virtual Real getKeyFramesAtTime( _in const EarthView::World::Graphic::CTimeIndex &timeIndex, _out EarthView::World::Graphic::CKeyFrame **keyFrame1, _out EarthView::World::Graphic::CKeyFrame **keyFrame2) const;
                /// <summary>
                /// 在给定的时间点创建关键帧
                /// </summary>
                /// <param name="timePos">时间点</param>
                /// <returns>创建的关键帧</returns>
                virtual EarthView::World::Graphic::CKeyFrame *createKeyFrame( _in Real timePos);
                /// <summary>
                /// 根据索引删除关键帧
                /// </summary>
                /// <param name="index">关键帧索引</param>
                /// <returns></returns>
                virtual void removeKeyFrame(_in ev_uint16 index);
                /// <summary>
                /// 删除所有关键帧
                /// </summary>
                /// <param name="0">0</param>
                /// <returns></returns>
                virtual void removeAllKeyFrames();
                /// <summary>
                /// 关键帧插值
                /// </summary>
                /// <param name="timeIndex">时间索引</param>
                /// <param name="kf">插值结果</param>
                /// <returns></returns>
                virtual void getInterpolatedKeyFrame( _in const EarthView::World::Graphic::CTimeIndex &timeIndex, EarthView::World::Graphic::CKeyFrame *kf) const;
                /// <summary>
                /// 对特定的动画帧应用动画轨迹
                /// </summary>
                /// <param name="timeIndex">时间索引</param>
                /// <param name="weight">动画轨迹影响权重</param>
                /// <param name="scale">动画大小变换比例</param>
                /// <returns></returns>
                virtual void apply( _in const EarthView::World::Graphic::CTimeIndex &timeIndex, _in Real weight, _in Real scale);
                /// <summary>
                /// 对特定的动画帧应用动画轨迹
                /// </summary>
                /// <param name="timeIndex">时间索引</param>
                /// <param name="weight">动画轨迹影响权重</param>
                /// <returns></returns>
                virtual void apply( _in const EarthView::World::Graphic::CTimeIndex &timeIndex, _in Real weight);
                /// <summary>
                /// 对特定的动画帧应用动画轨迹
                /// </summary>
                /// <param name="timeIndex">时间索引</param>
                /// <returns></returns>
                virtual void apply( _in const EarthView::World::Graphic::CTimeIndex &timeIndex);
                /// <summary>
                /// 通知动画轨迹动画帧已经改变
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _keyFrameDataChanged() const;
                /// <summary>
                /// 判断动画轨迹是否含有效帧
                /// </summary>
                /// <param name=""></param>
                /// <returns>存在返回true，否则false</returns>
                virtual ev_bool hasNonZeroKeyFrames() const;
                /// <summary>
                /// 通过删除相同关键帧优化动画轨迹
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void optimise();
                /// <summary>
                /// 关键帧时间集合类
                /// 管理关键帧时间集合
                /// </summary>
                class EV_GRAPHIC_DLL KeyFrameTimes : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<Real> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    /// <summary>
                    /// 集合插入元素
                    /// </summary>
                    /// <param name="pos">位置迭代器</param>
                    /// <param name="t">元素值</param>
                    /// <returns>插入元素后元素迭代器</returns>
                    iterator insert(_in iterator pos , _in Real const &t);
                private:
                    InternalList mList;
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    KeyFrameTimes(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    KeyFrameTimes();
                    /// <summary>
                    /// 在容器最后添加元素
                    /// </summary>
                    /// <param name="t">元素值</param>
                    /// <returns></returns>
                    void push_back(_in Real const &t);
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
                    Real &front();
                    /// <summary>
                    /// 返回容器最后元素
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器最后元素</returns>
                    Real &back();
                    /// <summary>
                    /// 容器中间位置插入元素
                    /// </summary>
                    /// <param name="pos">位置</param>
                    /// <param name="t">元素值</param>
                    /// <returns></returns>
                    void insert(_in ev_uint32 pos , _in Real const &t);
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
                    Real &operator[](_in ev_size_t n);
                    /// <summary>
                    /// 重载[]操作符
                    /// </summary>
                    /// <param name="n">下标位置</param>
                    /// <returns>返回下标对应的值</returns>
                    Real const &operator[](_in ev_size_t n) const;
                    /// <summary>
                    /// 返回某位置的元素值
                    /// </summary>
                    /// <param name="n">位置</param>
                    /// <returns>返回位置对应的值</returns>
                    Real &at(_in ev_size_t n);
                    /// <summary>
                    /// 返回某位置的元素值
                    /// </summary>
                    /// <param name="n">位置</param>
                    /// <returns>返回位置对应的值</returns>
                    Real const &at(_in ev_size_t n) const;
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
                /// 以唯一、有序的排列方式收集关键帧时间
                /// </summary>
                /// <param name="keyFrameTimes">关键帧时间对象</param>
                /// <returns></returns>
                virtual void _collectKeyFrameTimes(_inout KeyFrameTimes &keyFrameTimes);
                /// <summary>
                /// 创建关键帧时间索引集合
                /// </summary>
                /// <param name="keyFrameTimes">关键帧时间对象</param>
                /// <returns></returns>
                virtual void _buildKeyFrameIndexMap( _in const EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes &keyFrameTimes);
                /// <summary>
                /// 应用关键帧
                /// </summary>
                /// <param name="keyFrameTimes">关键帧对象</param>
                /// <returns></returns>
                virtual void _applyBaseKeyFrame(const EarthView::World::Graphic::CKeyFrame *base) {}
                /// <summary>
                /// 设置动画轨迹的监听器
                /// </summary>
                /// <param name="l">动画轨迹的监听器对象</param>
                /// <returns></returns>
                virtual void setListener(_in EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener *ref_l);
                /// <summary>
                /// 获得动画轨迹所属动画对象
                /// </summary>
                /// <param name=""></param>
                /// <returns>动画对象</returns>
                EarthView::World::Graphic::CAnimation *getParent() const;
            protected:
                typedef vector<EarthView::World::Graphic::CKeyFrame *> KeyFrameList;
                KeyFrameList mKeyFrames;
                EarthView::World::Graphic::CAnimation *mParent;
                ev_uint16 mHandle;
                EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener *mListener;
                typedef vector<ev_uint16> KeyFrameIndexMap;
                KeyFrameIndexMap mKeyFrameIndexMap;
            ev_internal:
                /// <summary>
                /// 创建关键帧执行实例
                /// </summary>
                /// <param name="time">动画时间</param>
                /// <returns>关键帧对象</returns>
                virtual EarthView::World::Graphic::CKeyFrame *createKeyFrameImpl( _in Real time);
                /// <summary>
                /// clone动画轨迹
                /// </summary>
                /// <param name="clone">动画轨迹</param>
                /// <returns></returns>
                virtual void populateClone(_out EarthView::World::Graphic::CAnimationTrack *clone) const;
            };
            /// <summary>
            /// 数字动画轨迹类
            /// 管理数字动画轨迹
            /// </summary>
            class EV_GRAPHIC_DLL CNumericAnimationTrack : public EarthView::World::Graphic::CAnimationTrack
            {
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="parent">动画对象</param>
                /// <param name="handle">数字动画标识</param>
                /// <returns></returns>
                CNumericAnimationTrack(_in EarthView::World::Graphic::CAnimation *ref_parent, _in ev_uint16 handle);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="parent">动画对象</param>
                /// <param name="handle">数字动画标识</param>
                /// <param name="target">可动画值对象</param>
                /// <returns></returns>
                CNumericAnimationTrack(_in EarthView::World::Graphic::CAnimation *ref_parent, _in ev_uint16 handle,
                                       EarthView::World::Graphic::AnimableValuePtr &target);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CNumericAnimationTrack(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 在给定时间点产生新的数字动画关键帧并加入到动画序列
                /// </summary>
                /// <param name="timePos">动画时间点</param>
                /// <returns>产生的数字动画关键帧</returns>
                virtual EarthView::World::Graphic::CNumericKeyFrame *createNumericKeyFrame( _in Real timePos);
                /// <summary>
                /// 数字动画关键帧插值
                /// </summary>
                /// <param name="timeIndex">时间索引</param>
                /// <param name="kf">插值结果</param>
                /// <returns>标识是否插值成功</returns>
                virtual void getInterpolatedKeyFrame( _in const EarthView::World::Graphic::CTimeIndex &timeIndex,  EarthView::World::Graphic::CKeyFrame *kf) const;
                /// <summary>
                /// 对特定的数字动画帧应用动画轨迹
                /// </summary>
                /// <param name="timeIndex">时间索引</param>
                /// <param name="weight">动画轨迹影响权重</param>
                /// <param name="scale">动画大小变换比例</param>
                /// <returns></returns>
                virtual void apply( _in const EarthView::World::Graphic::CTimeIndex &timeIndex, _in Real weight, _in  Real scale);
                /// <summary>
                /// 对特定的数字动画帧应用动画轨迹
                /// </summary>
                /// <param name="timeIndex">时间索引</param>
                /// <param name="weight">动画轨迹影响权重</param>
                /// <returns></returns>
                virtual void apply( _in const EarthView::World::Graphic::CTimeIndex &timeIndex, _in Real weight);
                /// <summary>
                /// 对特定的数字动画帧应用动画轨迹
                /// </summary>
                /// <param name="timeIndex">时间索引</param>
                /// <returns></returns>
                virtual void apply( _in const EarthView::World::Graphic::CTimeIndex &timeIndex);
                /// <summary>
                /// 对可动画值应用动画轨迹
                /// </summary>
                /// <param name="anim">可动画值对象</param>
                /// <param name="timeIndex">时间索引</param>
                /// <param name="weight">权重</param>
                /// <param name="scale">动画大小变化比例</param>
                /// <returns></returns>
                void applyToAnimable( _in const EarthView::World::Graphic::AnimableValuePtr &anim, _in const EarthView::World::Graphic::CTimeIndex &timeIndex,
                                      _in Real weight, _in Real scale);
                /// <summary>
                /// 对可动画值应用动画轨迹
                /// </summary>
                /// <param name="anim">可动画值对象</param>
                /// <param name="timeIndex">时间索引</param>
                /// <param name="weight">权重</param>
                /// <returns></returns>
                void applyToAnimable( _in const EarthView::World::Graphic::AnimableValuePtr &anim, _in const EarthView::World::Graphic::CTimeIndex &timeIndex,
                                      _in Real weight);
                /// <summary>
                /// 对可动画值应用动画轨迹
                /// </summary>
                /// <param name="anim">可动画值对象</param>
                /// <param name="timeIndex">时间索引</param>
                /// <returns></returns>
                void applyToAnimable( _in const EarthView::World::Graphic::AnimableValuePtr &anim, _in const EarthView::World::Graphic::CTimeIndex &timeIndex);
                /// <summary>
                /// 获得相关的可动画对象指针
                /// </summary>
                /// <param name=""></param>
                /// <returns>可动画对象指针</returns>
                virtual const EarthView::World::Graphic::AnimableValuePtr &getAssociatedAnimable() const;
                /// <summary>
                /// 设置相关的可动画对象
                /// </summary>
                /// <param name="val">可动画对象指针</param>
                /// <returns></returns>
                virtual void setAssociatedAnimable( _in const EarthView::World::Graphic::AnimableValuePtr &val);
                /// <summary>
                /// 根据索引获得数字动画关键帧
                /// </summary>
                /// <param name=""></param>
                /// <returns>数字动画关键帧指针</returns>
                EarthView::World::Graphic::CNumericKeyFrame *getNumericKeyFrame(_in ev_uint16 index) const;
                /// <summary>
                /// clone数字动画轨迹
                /// </summary>
                /// <param name="newParent">所属动画序列</param>
                /// <returns>数字动画轨迹指针</returns>
                EarthView::World::Graphic::CNumericAnimationTrack *_clone( EarthView::World::Graphic::CAnimation *newParent) const;


            protected:
                //// Target to animate
                EarthView::World::Graphic::AnimableValuePtr mTargetAnim;
            ev_internal:
                /// <summary>
                /// 创建关键帧执行实例
                /// </summary>
                /// <param name="time">动画时间</param>
                /// <returns>关键帧对象</returns>
                EarthView::World::Graphic::CKeyFrame *createKeyFrameImpl( _in Real time);

            };
            /// <summary>
            /// 节点动画轨迹类
            /// 管理节点动画轨迹变换
            /// </summary>
            class EV_GRAPHIC_DLL CNodeAnimationTrack : public EarthView::World::Graphic::CAnimationTrack
            {
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="parent">动画对象</param>
                /// <param name="handle">数字动画标识</param>
                /// <returns></returns>
                CNodeAnimationTrack(_in EarthView::World::Graphic::CAnimation *ref_parent, _in ev_uint16 handle);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="parent">动画对象</param>
                /// <param name="handle">数字动画标识</param>
                /// <param name="targetNode">目标节点对象</param>
                /// <returns></returns>
                CNodeAnimationTrack(_in EarthView::World::Graphic::CAnimation *ref_parent, _in ev_uint16 handle,
                                    _in EarthView::World::Graphic::CNode *ref_targetNode);

            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CNodeAnimationTrack(_in EarthView::World::Core::CNameValuePairList *pList);

            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CNodeAnimationTrack();
                /// <summary>
                /// 创建新的节点动画关键帧
                /// </summary>
                /// <param name="timePos">时间点</param>
                /// <returns>返回变换帧指针</returns>
                virtual EarthView::World::Graphic::CTransformKeyFrame *createNodeKeyFrame( _in Real timePos);
                /// <summary>
                /// 获得节点动画轨迹相关节点对象
                /// </summary>
                /// <param name=""></param>
                /// <returns>相关节点对象</returns>
                virtual EarthView::World::Graphic::CNode *getAssociatedNode() const;
                /// <summary>
                /// 设置节点动画轨迹相关节点对象
                /// </summary>
                /// <param name="node">相关节点对象</param>
                /// <returns></returns>
                virtual void setAssociatedNode(_in EarthView::World::Graphic::CNode *ref_node);
                /// <summary>
                /// 动画轨迹应用到特定的节点
                /// </summary>
                /// <param name="node">节点</param>
                /// <param name="timeIndex">时间索引</param>
                /// <param name="weight">权重</param>
                /// <param name="scale">动画大小变化比例</param>
                /// <returns></returns>
                virtual void applyToNode( EarthView::World::Graphic::CNode *node, _in const EarthView::World::Graphic::CTimeIndex &timeIndex, _in Real weight, _in Real scale);
                /// <summary>
                /// 动画轨迹应用到特定的节点
                /// </summary>
                /// <param name="node">节点</param>
                /// <param name="timeIndex">时间索引</param>
                /// <param name="weight">权重</param>
                /// <returns></returns>
                virtual void applyToNode( EarthView::World::Graphic::CNode *node, _in const EarthView::World::Graphic::CTimeIndex &timeIndex, _in Real weight);
                /// <summary>
                /// 动画轨迹应用到特定的节点
                /// </summary>
                /// <param name="node">节点</param>
                /// <param name="timeIndex">时间索引</param>
                /// <returns></returns>
                virtual void applyToNode( EarthView::World::Graphic::CNode *node, _in const EarthView::World::Graphic::CTimeIndex &timeIndex);
                /// <summary>
                /// 设置是否应用最短旋转路径
                /// </summary>
                /// <param name="useShortestPath">是否应用最短旋转路径标识</param>
                /// <returns></returns>
                virtual void setUseShortestRotationPath(_in ev_bool useShortestPath);
                /// <summary>
                /// 获得是否应用最短旋转路径
                /// </summary>
                /// <param name=""></param>
                /// <returns>是返回true，否则false</returns>
                virtual ev_bool getUseShortestRotationPath() const;
                /// <summary>
                /// 关键帧插值
                /// </summary>
                /// <param name="timeIndex">时间索引</param>
                /// <param name="kf">插值结果</param>
                /// <returns></returns>
                virtual void getInterpolatedKeyFrame( _in const EarthView::World::Graphic::CTimeIndex &timeIndex, _in EarthView::World::Graphic::CKeyFrame *kf) const;
                /// <summary>
                /// 对特定的节点动画帧应用动画轨迹
                /// </summary>
                /// <param name="timeIndex">时间索引</param>
                /// <param name="weight">动画轨迹影响权重</param>
                /// <param name="scale">动画大小变换比例</param>
                /// <returns></returns>
                virtual void apply( _in const EarthView::World::Graphic::CTimeIndex &timeIndex, _in Real weight, _in Real scale);
                /// <summary>
                /// 对特定的节点动画帧应用动画轨迹
                /// </summary>
                /// <param name="timeIndex">时间索引</param>
                /// <param name="weight">动画轨迹影响权重</param>
                /// <returns></returns>
                virtual void apply( _in const EarthView::World::Graphic::CTimeIndex &timeIndex, _in Real weight);
                /// <summary>
                /// 对特定的节点动画帧应用动画轨迹
                /// </summary>
                /// <param name="timeIndex">时间索引</param>
                /// <returns></returns>
                virtual void apply( _in const EarthView::World::Graphic::CTimeIndex &timeIndex);
                /// <summary>
                /// 通知动画轨迹动画帧已经改变
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _keyFrameDataChanged() const;
                /// <summary>
                /// 根据索引返回节点动画
                /// </summary>
                /// <param name="index">动画索引</param>
                /// <returns>返回变换节点动画</returns>
                virtual EarthView::World::Graphic::CTransformKeyFrame *getNodeKeyFrame(_in ev_uint16 index) const;

                /// <summary>
                /// 判断动画轨迹是否含有效帧
                /// </summary>
                /// <param name=""></param>
                /// <returns>存在返回true，否则false</returns>
                virtual ev_bool hasNonZeroKeyFrames() const;
                /// <summary>
                /// 通过删除相同关键帧优化动画轨迹
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void optimise();
                /// <summary>
                /// clone节点动画轨迹
                /// </summary>
                /// <param name="newParent">所属动画序列</param>
                /// <returns>数字动画轨迹指针</returns>
                EarthView::World::Graphic::CNodeAnimationTrack *_clone(_in EarthView::World::Graphic::CAnimation *newParent) const;

                /// <summary>
                /// 应用关键帧
                /// </summary>
                /// <param name="newParent">所属动画序列</param>
                /// <returns>数字动画轨迹指针</returns>
                void _applyBaseKeyFrame(const EarthView::World::Graphic::CKeyFrame *base);
            ev_internal:
                /// <summary>
                /// 创建关键帧执行实例
                /// </summary>
                /// <param name="time">动画时间</param>
                /// <returns>关键帧对象</returns>
                EarthView::World::Graphic::CKeyFrame *createKeyFrameImpl( _in Real time);
                /// <summary>
                /// 创建动画轨迹插值曲线
                /// </summary>
                /// <param name="time">动画时间</param>
                /// <returns>关键帧对象</returns>
                virtual void buildInterpolationSplines() const;
            protected:
                /// <summary>
                /// 动画轨迹曲线类型
                ///
                /// </summary>
                struct Splines;
                EarthView::World::Graphic::CNode *mTargetNode;

                mutable Splines *mSplines;
                mutable ev_bool mSplineBuildNeeded;

                mutable ev_bool mUseShortestRotationPath ;
            };

			class EV_GRAPHIC_DLL CSphereNodeAnimationTrack : public EarthView::World::Graphic::CAnimationTrack
			{
			public:
				class EV_GRAPHIC_DLL CSphereNodeAnimationTrackListener : public EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CSphereNodeAnimationTrackListener(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CSphereNodeAnimationTrackListener();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CSphereNodeAnimationTrackListener();
					/// <summary>
					/// 关键帧插值
					/// </summary>
					/// <param name="t">动画轨迹</param>
					/// <param name="timeIndex">时间索引</param>
					/// <param name="kf">插值结果</param>
					/// <returns>标识是否插值成功</returns>
					//virtual ev_real64 getRadius(_in ev_real64 lat,_in ev_real64 lon);
					virtual ev_real64 getRadius(_in EarthView::World::Graphic::CSphereTransformKeyFrame* kf);
					/// <summary>
					///根据两个控制点计算heading角
					/// </summary>
					/// <param name="latA">第一个纬度</param>
					/// <param name="lonA">第一个经度</param>
					/// <param name="latB">第二个纬度</param>
					/// <param name="lonB">第二个经度</param>
					/// <returns></returns>
					virtual ev_real64 getHeading(_in ev_real64 latA ,_in ev_real64 lonA,_in ev_real64 latB,_in ev_real64 lonB);
                 	/// <summary>
	                /// 计算当前帧的欧拉角
					/// </summary>
					/// <param name="yawA">第一个关键帧的yaw角</param>
					/// <param name="pitchA">第一个关键帧的pitch角</param>
					/// <param name="rollA">第一个关键帧的roll角</param>
					/// <param name="yawB">第二个关键帧的yaw角</param>
					/// <param name="pitchB">第二个关键帧的pitch角</param>
					/// <param name="rollB">第二个关键帧的roll角</param>
					/// <param name="timeRatio">时间比例</param>
					/// <param name="yaw">返回的yaw角</param>
					/// <param name="pitch">返回的pitch角</param>
					/// <param name="roll">返回的roll角</param>
					/// <returns></returns>
					virtual void getEuler(_in const EarthView::World::Spatial::Math::CDegree& yawA,_in const EarthView::World::Spatial::Math::CDegree& pitchA,_in const EarthView::World::Spatial::Math::CDegree& rollA,_in const EarthView::World::Spatial::Math::CDegree& yawB,_in const EarthView::World::Spatial::Math::CDegree& pitchB,_in const EarthView::World::Spatial::Math::CDegree& rollB,_in ev_real64 timeRatio,_inout EarthView::World::Spatial::Math::CDegree& yaw,_inout EarthView::World::Spatial::Math::CDegree& pitch,_inout EarthView::World::Spatial::Math::CDegree& roll);
					/// <summary>
					/// 设置是否启用获取半径功能
					/// </summary>
					/// <param name="enableGetRadius">是否启用</param>
					/// <returns></returns>
					void setEnabledToGetRadius(_in ev_bool enableGetRadius );
					/// <summary>
					/// 获取是否启用获取半径功能
					/// </summary>
					/// <returns></returns>
					ev_bool getEnabledToGetRadius()const;
					/// <summary>
					/// 设置是否启用获取偏航角功能
					/// </summary>
					/// <param name="enableGetHeading">是否启用</param>
					/// <returns></returns>
					void setEnabledToGetHeading(_in ev_bool enableGetHeading);
					/// <summary>
					/// 获取是否启用获取偏航角功能
					/// </summary>
					/// <returns></returns>
					ev_bool getEnabledToGetHeading()const;
					/// <summary>
					/// 设置是否启用计算欧拉角功能
					/// </summary>
					/// <param name="enableGetEuler">是否启用</param>
					/// <returns></returns>
					void setEnabledToGetEuler(_in ev_bool enableGetEuler);
					/// <summary>
					/// 获取是否启用计算欧拉角功能
					/// </summary>
					/// <returns></returns>
					ev_bool getEnabledToGetEuler()const;

 				protected:
 					ev_bool mEnabledToGetRadius;
					ev_bool mEnabledToGetHeading;
					ev_bool mEnabledToGetEuler;
				};

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="parent">动画对象</param>
				/// <param name="handle">数字动画标识</param>
				/// <returns></returns>
				CSphereNodeAnimationTrack(_in EarthView::World::Graphic::CAnimation *ref_parent, _in ev_uint16 handle);
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="parent">动画对象</param>
				/// <param name="handle">数字动画标识</param>
				/// <param name="targetNode">目标节点对象</param>
				/// <returns></returns>
				CSphereNodeAnimationTrack(_in EarthView::World::Graphic::CAnimation *ref_parent, _in ev_uint16 handle,
					_in EarthView::World::Graphic::CNode *ref_targetNode);

ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CSphereNodeAnimationTrack(_in EarthView::World::Core::CNameValuePairList *pList);

			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CSphereNodeAnimationTrack();
				/// <summary>
				/// 创建新的节点动画关键帧
				/// </summary>
				/// <param name="timePos">时间点</param>
				/// <returns>返回变换帧指针</returns>
				virtual EarthView::World::Graphic::CSphereTransformKeyFrame *createNodeKeyFrame( _in Real timePos);
				/// <summary>
				/// 获得节点动画轨迹相关节点对象
				/// </summary>
				/// <param name=""></param>
				/// <returns>相关节点对象</returns>
				virtual EarthView::World::Graphic::CNode *getAssociatedNode() const;
				/// <summary>
				/// 设置节点动画轨迹相关节点对象
				/// </summary>
				/// <param name="node">相关节点对象</param>
				/// <returns></returns>
				virtual void setAssociatedNode(_in EarthView::World::Graphic::CNode *ref_node);
				/// <summary>
				/// 动画轨迹应用到特定的节点
				/// </summary>
				/// <param name="node">节点</param>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">权重</param>
				/// <param name="scale">动画大小变化比例</param>
				/// <returns></returns>
				virtual void applyToNode( EarthView::World::Graphic::CNode *node, _in const EarthView::World::Graphic::CTimeIndex &timeIndex, _in Real weight, _in Real scale);
				/// <summary>
				/// 动画轨迹应用到特定的节点
				/// </summary>
				/// <param name="node">节点</param>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">权重</param>
				/// <returns></returns>
				virtual void applyToNode( EarthView::World::Graphic::CNode *node, _in const EarthView::World::Graphic::CTimeIndex &timeIndex, _in Real weight);
				/// <summary>
				/// 动画轨迹应用到特定的节点
				/// </summary>
				/// <param name="node">节点</param>
				/// <param name="timeIndex">时间索引</param>
				/// <returns></returns>
				virtual void applyToNode( EarthView::World::Graphic::CNode *node, _in const EarthView::World::Graphic::CTimeIndex &timeIndex);

				/// <summary>
				/// 关键帧插值
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="kf">插值结果</param>
				/// <returns></returns>
				virtual void getInterpolatedKeyFrame( _in const EarthView::World::Graphic::CTimeIndex &timeIndex, _in EarthView::World::Graphic::CKeyFrame *kf) const;
				/// <summary>
				/// 对特定的节点动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">动画轨迹影响权重</param>
				/// <param name="scale">动画大小变换比例</param>
				/// <returns></returns>
				virtual void apply( _in const EarthView::World::Graphic::CTimeIndex &timeIndex, _in Real weight, _in Real scale);
				/// <summary>
				/// 对特定的节点动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">动画轨迹影响权重</param>
				/// <returns></returns>
				virtual void apply( _in const EarthView::World::Graphic::CTimeIndex &timeIndex, _in Real weight);
				/// <summary>
				/// 对特定的节点动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <returns></returns>
				virtual void apply( _in const EarthView::World::Graphic::CTimeIndex &timeIndex);
				/// <summary>
				/// 通知动画轨迹动画帧已经改变
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void _keyFrameDataChanged() const;
				/// <summary>
				/// 根据索引返回节点动画
				/// </summary>
				/// <param name="index">动画索引</param>
				/// <returns>返回变换节点动画</returns>
				virtual EarthView::World::Graphic::CSphereTransformKeyFrame *getNodeKeyFrame(_in ev_uint16 index) const;
//
//				/// <summary>
//				/// 判断动画轨迹是否含有效帧
//				/// </summary>
//				/// <param name=""></param>
//				/// <returns>存在返回true，否则false</returns>
//				virtual ev_bool hasNonZeroKeyFrames() const;
//				/// <summary>
//				/// 通过删除相同关键帧优化动画轨迹
//				/// </summary>
//				/// <param name=""></param>
//				/// <returns></returns>
//				virtual void optimise();
				/// <summary>
				/// clone节点动画轨迹
				/// </summary>
				/// <param name="newParent">所属动画序列</param>
				/// <returns>数字动画轨迹指针</returns>
				EarthView::World::Graphic::CSphereNodeAnimationTrack *_clone(_in EarthView::World::Graphic::CAnimation *newParent) const;

				 virtual void setListener(_in EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener *ref_l);

				/// <summary>
				/// 应用关键帧
				/// </summary>
				/// <param name="newParent">所属动画序列</param>
				/// <returns>数字动画轨迹指针</returns>
				void _applyBaseKeyFrame(const EarthView::World::Graphic::CKeyFrame *base);
ev_internal:
				/// <summary>
				/// 创建关键帧执行实例
				/// </summary>
				/// <param name="time">动画时间</param>
				/// <returns>关键帧对象</returns>
				EarthView::World::Graphic::CKeyFrame *createKeyFrameImpl( _in Real time);

			protected:
				EarthView::World::Graphic::CNode *mTargetNode;
				CSphereNodeAnimationTrackListener* mSphereNodeAnimationTrackListener;
			};


            enum VertexAnimationType
            {

                VAT_NONE = 0,

                VAT_MORPH = 1,

                VAT_POSE = 2
            };
            /// <summary>
            /// 顶点动画轨迹类
            /// 管理顶点动画轨迹
            /// </summary>
            class EV_GRAPHIC_DLL CVertexAnimationTrack : public EarthView::World::Graphic::CAnimationTrack
            {
            public:
                enum TargetMode
                {
                    TM_SOFTWARE,

                    TM_HARDWARE
                };
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="parent">动画对象</param>
                /// <param name="handle">数字动画标识</param>
                /// <param name="animType">顶点变换动画类型</param>
                /// <returns></returns>
                CVertexAnimationTrack(_in EarthView::World::Graphic::CAnimation *ref_parent, _in ev_uint16 handle, _in EarthView::World::Graphic::VertexAnimationType animType);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="parent">动画对象</param>
                /// <param name="handle">数字动画标识</param>
                /// <param name="animType">顶点变换动画类型</param>
                /// <param name="targetData">顶点数据对象</param>
                /// <param name="target">动画类型(软/硬)</param>
                /// <returns></returns>
                CVertexAnimationTrack(_in EarthView::World::Graphic::CAnimation *ref_parent, _in ev_uint16 handle, _in EarthView::World::Graphic::VertexAnimationType animType,
                                      _in EarthView::World::Graphic::CVertexData *ref_targetData, _in EarthView::World::Graphic::CVertexAnimationTrack::TargetMode target);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="parent">动画对象</param>
                /// <param name="handle">数字动画标识</param>
                /// <param name="animType">顶点变换动画类型</param>
                /// <param name="targetData">顶点数据对象</param>
                /// <returns></returns>
                CVertexAnimationTrack(_in EarthView::World::Graphic::CAnimation *ref_parent, _in ev_uint16 handle, _in EarthView::World::Graphic::VertexAnimationType animType,
                                      _in EarthView::World::Graphic::CVertexData *ref_targetData);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CVertexAnimationTrack(_in EarthView::World::Core::CNameValuePairList *pList);

            public:
                /// <summary>
                /// 获得顶点动画类型
                /// </summary>
                /// <param name=""></param>
                /// <returns>顶点动画类型</returns>
                EarthView::World::Graphic::VertexAnimationType getAnimationType() const;
                /// <summary>
                /// 获得顶点动画是否包含法向量
                /// </summary>
                /// <param name=""></param>
                /// <returns>顶点动画类型</returns>
                ev_bool getVertexAnimationIncludesNormals() const;
                /// <summary>
                /// 创建变形动画关键帧
                /// </summary>
                /// <param name="timePos">时间点</param>
                /// <returns>变形动画关键帧指针</returns>
                virtual EarthView::World::Graphic::CVertexMorphKeyFrame *createVertexMorphKeyFrame( _in Real timePos);
                /// <summary>
                /// 创建姿态动画关键帧
                /// </summary>
                /// <param name="timePos">时间点</param>
                /// <returns>姿态动画关键帧指针</returns>
                virtual EarthView::World::Graphic::CVertexPoseKeyFrame *createVertexPoseKeyFrame( _in Real timePos);
                /// <summary>
                /// 关键帧插值
                /// </summary>
                /// <param name="timeIndex">时间索引</param>
                /// <param name="kf">插值结果</param>
                /// <returns></returns>
                virtual void getInterpolatedKeyFrame( _in const EarthView::World::Graphic::CTimeIndex &timeIndex, _in EarthView::World::Graphic::CKeyFrame *kf) const;
                /// <summary>
                /// 对特定的动画帧应用动画轨迹
                /// </summary>
                /// <param name="timeIndex">时间索引</param>
                /// <param name="weight">动画轨迹影响权重</param>
                /// <param name="scale">动画大小变换比例</param>
                /// <returns></returns>
                virtual void apply( _in const EarthView::World::Graphic::CTimeIndex &timeIndex, _in Real weight, _in Real scale);
                /// <summary>
                /// 对特定的动画帧应用动画轨迹
                /// </summary>
                /// <param name="timeIndex">时间索引</param>
                /// <param name="weight">动画轨迹影响权重</param>
                /// <returns></returns>
                virtual void apply( _in const EarthView::World::Graphic::CTimeIndex &timeIndex, _in Real weight);
                /// <summary>
                /// 对特定的动画帧应用动画轨迹
                /// </summary>
                /// <param name="timeIndex">时间索引</param>
                /// <returns></returns>
                virtual void apply( _in const EarthView::World::Graphic::CTimeIndex &timeIndex);
                /// <summary>
                /// 动画轨迹应用到特定的顶点
                /// </summary>
                /// <param name="data">顶点数据</param>
                /// <param name="timeIndex">时间索引</param>
                /// <param name="weight">权重</param>
                /// <param name="poseList">姿态集合</param>
                /// <returns></returns>
                virtual void applyToVertexData(_in EarthView::World::Graphic::CVertexData *data,
                                               _in const EarthView::World::Graphic::CTimeIndex &timeIndex, _in Real weight,
                                               _in const EarthView::World::Graphic::PoseList *poseList);
                /// <summary>
                /// 动画轨迹应用到特定的顶点
                /// </summary>
                /// <param name="data">顶点数据</param>
                /// <param name="timeIndex">时间索引</param>
                /// <param name="weight">权重</param>
                /// <returns></returns>
                virtual void applyToVertexData(_in EarthView::World::Graphic::CVertexData *data,
                                               _in const EarthView::World::Graphic::CTimeIndex &timeIndex, _in Real weight);
                /// <summary>
                /// 动画轨迹应用到特定的顶点
                /// </summary>
                /// <param name="data">顶点数据</param>
                /// <param name="timeIndex">时间索引</param>
                /// <returns></returns>
                virtual void applyToVertexData(_in EarthView::World::Graphic::CVertexData *data,
                                               _in const EarthView::World::Graphic::CTimeIndex &timeIndex);
                /// <summary>
                /// 获得顶点变形关键帧
                /// </summary>
                /// <param name="index">关键帧索引</param>
                /// <returns>顶点变形关键帧</returns>
                EarthView::World::Graphic::CVertexMorphKeyFrame *getVertexMorphKeyFrame(_in ev_uint16 index) const;
                /// <summary>
                /// 获得顶点姿态关键帧
                /// </summary>
                /// <param name="index">关键帧索引</param>
                /// <returns>顶点姿态关键帧</returns>
                EarthView::World::Graphic::CVertexPoseKeyFrame *getVertexPoseKeyFrame(_in ev_uint16 index) const;
                /// <summary>
                /// 设置顶点动画轨迹相关顶点数据
                /// </summary>
                /// <param name="data">顶点数据</param>
                /// <returns></returns>
                void setAssociatedVertexData( EarthView::World::Graphic::CVertexData *ref_data);
                /// <summary>
                /// 获得顶点动画轨迹相关顶点数据
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回顶点动画轨迹相关顶点数据</returns>
                EarthView::World::Graphic::CVertexData *getAssociatedVertexData() const;
                /// <summary>
                /// 设置定点动画类型
                /// </summary>
                /// <param name="m">定点动画类型</param>
                /// <returns></returns>
                void setTargetMode(_in TargetMode m);
                /// <summary>
                /// 获得定点动画类型
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回定点动画类型</returns>
                EarthView::World::Graphic::CVertexAnimationTrack::TargetMode getTargetMode() const;
                /// <summary>
                /// 判断动画轨迹是否含有效帧
                /// </summary>
                /// <param name=""></param>
                /// <returns>存在返回true，否则false</returns>
                virtual ev_bool hasNonZeroKeyFrames() const;
                /// <summary>
                /// 通过删除相同关键帧优化动画轨迹
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void optimise();
                /// <summary>
                /// clone顶点动画轨迹
                /// </summary>
                /// <param name="newParent">所属动画序列</param>
                /// <returns>数字动画轨迹指针</returns>
                EarthView::World::Graphic::CVertexAnimationTrack *_clone(_in EarthView::World::Graphic::CAnimation *newParent) const;
                /// <summary>
                /// 应用关键帧
                /// </summary>
                /// <param name="newParent">所属动画序列</param>
                /// <returns>数字动画轨迹指针</returns>
                void _applyBaseKeyFrame(const EarthView::World::Graphic::CKeyFrame *base);
            protected:
                EarthView::World::Graphic::VertexAnimationType mAnimationType;
                EarthView::World::Graphic::CVertexData *mTargetVertexData;
                EarthView::World::Graphic::CVertexAnimationTrack::TargetMode mTargetMode;
            ev_internal:
                /// <summary>
                /// 创建关键帧执行实例
                /// </summary>
                /// <param name="time">动画时间</param>
                /// <returns>关键帧对象</returns>
                EarthView::World::Graphic::CKeyFrame *createKeyFrameImpl( _in Real time);
                /// <summary>
                /// 将姿态数据集合应用到顶点数据产生顶点姿态动画
                /// </summary>
                /// <param name="pose">姿态数据</param>
                /// <param name="data">顶点数据</param>
                /// <param name="influence">姿态影响系数</param>
                /// <returns></returns>
                void applyPoseToVertexData( _in const EarthView::World::Graphic::CPose *pose, _in EarthView::World::Graphic::CVertexData *data, _in Real influence);

            };
        }
    }
}

#endif

