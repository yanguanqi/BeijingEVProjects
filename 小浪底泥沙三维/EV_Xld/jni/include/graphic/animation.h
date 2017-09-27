#ifndef __Animation_H__
#define __Animation_H__
#pragma once
#include "graphic/graphic_config.h"
#include "animationtrack.h"
#include "animationstate.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CSkeleton;
            class CEntity;
            class CAnimation;
            class EV_GRAPHIC_DLL CAnimationContainer : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CAnimationContainer(EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                CAnimationContainer() {}
                /** Gets the number of animations in this container. */
                virtual ev_uint16 getNumAnimations() const;
                /** Retrieve an animation by index.  */
                virtual EarthView::World::Graphic::CAnimation *getAnimation(ev_uint16 index) const;
                /** Retrieve an animation by name. */
                virtual EarthView::World::Graphic::CAnimation *getAnimation(const EVString &name) const;
                /** Create a new animation with a given length owned by this container. */
                virtual EarthView::World::Graphic::CAnimation *createAnimation(const EVString &name, Real length);
                /** Returns whether this object contains the named animation. */
                virtual bool hasAnimation(const EVString &name) const;
                /** Removes an Animation from this container. */
                virtual void removeAnimation(const EVString &name);
            };
            /// <summary>
            /// 动画类
            /// 管理组成动画的一系列动画轨迹等
            /// </summary>
            class EV_GRAPHIC_DLL CAnimation : public EarthView::World::Core::CAllocatedObject
            {
            public:
                enum InterpolationMode
                {
                    IM_LINEAR,
                    IM_SPLINE
                };
                enum RotationInterpolationMode
                {
                    RIM_LINEAR,
                    RIM_SPHERICAL
                };
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">动画名称</param>
                /// <param name="length">动画长度</param>
                /// <returns></returns>
                CAnimation( _in const EVString &name, _in Real length);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CAnimation( _in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CAnimation();
                /// <summary>
                /// 获得动画名称
                /// </summary>
                /// <param name=""></param>
                /// <returns>动画名称</returns>
                const EVString &getName() const;
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
                void setLength(_in Real len);
                /// <summary>
                /// 为动画节点创建动画轨迹
                /// </summary>
                /// <param name="handle">动画轨迹标识</param>
                /// <returns>动画轨迹指针</returns>
                EarthView::World::Graphic::CNodeAnimationTrack *createNodeTrack(_in ev_uint16 handle);

				EarthView::World::Graphic::CSphereNodeAnimationTrack *createSphereNodeTrack(_in ev_uint16 handle);
                /// <summary>
                /// 创建数字动画轨迹
                /// </summary>
                /// <param name="handle">动画轨迹标识</param>
                /// <returns>数字动画轨迹指针</returns>
                EarthView::World::Graphic::CNumericAnimationTrack *createNumericTrack(_in ev_uint16 handle);
                /// <summary>
                /// 创建顶点动画轨迹
                /// </summary>
                /// <param name="handle">动画轨迹标识</param>
                /// <param name="animType">顶点动画类型</param>
                /// <returns>顶点动画轨迹指针</returns>
                EarthView::World::Graphic::CVertexAnimationTrack *createVertexTrack(_in ev_uint16 handle, _in EarthView::World::Graphic::VertexAnimationType animType);
                /// <summary>
                /// 创建节点动画轨迹
                /// </summary>
                /// <param name="handle">动画轨迹标识</param>
                /// <param name="node">节点指针</param>
                /// <returns>节点动画轨迹指针</returns>
                EarthView::World::Graphic::CNodeAnimationTrack *createNodeTrack(_in ev_uint16 handle, _in EarthView::World::Graphic::CNode *ref_node);

				EarthView::World::Graphic::CSphereNodeAnimationTrack *createSphereNodeTrack(_in ev_uint16 handle, _in EarthView::World::Graphic::CNode *ref_node);
                /// <summary>
                /// 创建数字动画轨迹
                /// </summary>
                /// <param name="handle">动画轨迹标识</param>
                /// <param name="anim">可动画的值的指针</param>
                /// <returns>数字动画轨迹指针</returns>
                EarthView::World::Graphic::CNumericAnimationTrack *createNumericTrack(_in ev_uint16 handle,
                        _in const EarthView::World::Graphic::AnimableValuePtr &anim);
                /// <summary>
                /// 创建顶点动画轨迹
                /// </summary>
                /// <param name="handle">动画轨迹标识</param>
                /// <param name="data">顶点数据</param>
                /// <param name="animType">顶点动画类型</param>
                /// <returns>顶点动画轨迹指针</returns>
                EarthView::World::Graphic::CVertexAnimationTrack *createVertexTrack(_in ev_uint16 handle,
                        _in EarthView::World::Graphic::CVertexData *ref_data, _in EarthView::World::Graphic::VertexAnimationType animType);
                /// <summary>
                /// 获得动画中节点动画轨迹对象的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns>动画中节点动画轨迹对象的数量</returns>
                ev_uint16 getNumNodeTracks() const;

				ev_uint16 getNumSphereNodeTracks() const;

                /// <summary>
                /// 由动画轨迹标识获得节点动画轨迹
                /// </summary>
                /// <param name="handle">动画轨迹标识</param>
                /// <returns>节点动画轨迹指针</returns>
                EarthView::World::Graphic::CNodeAnimationTrack *getNodeTrack(_in ev_uint16 handle) const;

				EarthView::World::Graphic::CSphereNodeAnimationTrack *getSphereNodeTrack(_in ev_uint16 handle) const;

                /// <summary>
                /// 判断是否存在与动画轨迹标识对应的节点动画轨迹
                /// </summary>
                /// <param name="handle">动画轨迹标识</param>
                /// <returns>存在返回true，否则false</returns>
                ev_bool hasNodeTrack(_in ev_uint16 handle) const;

				 ev_bool hasSphereNodeTrack(_in ev_uint16 handle) const;
                /// <summary>
                /// 获得动画中数字动画轨迹对象的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns>动画中数字动画轨迹对象的数量</returns>
                ev_uint16 getNumNumericTracks() const;
                /// <summary>
                /// 由动画轨迹标识获得数字动画轨迹
                /// </summary>
                /// <param name="handle">动画轨迹标识</param>
                /// <returns>数字动画轨迹指针</returns>
                EarthView::World::Graphic::CNumericAnimationTrack *getNumericTrack(_in ev_uint16 handle) const;
                /// <summary>
                /// 判断是否存在与动画轨迹标识对应的节点动画轨迹
                /// </summary>
                /// <param name="handle">动画轨迹标识</param>
                /// <returns>存在返回true，否则false</returns>
                ev_bool hasNumericTrack(_in ev_uint16 handle) const;
                /// <summary>
                /// 获得动画中顶点动画轨迹对象的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns>动画中顶点动画轨迹对象的数量</returns>
                ev_uint16 getNumVertexTracks() const;
                /// <summary>
                /// 由动画轨迹标识获得顶点动画轨迹
                /// </summary>
                /// <param name="handle">动画轨迹标识</param>
                /// <returns>顶点动画轨迹指针</returns>
                EarthView::World::Graphic::CVertexAnimationTrack *getVertexTrack(_in ev_uint16 handle) const;
                /// <summary>
                /// 判断是否存在与动画轨迹标识对应的顶点动画轨迹
                /// </summary>
                /// <param name="handle">动画轨迹标识</param>
                /// <returns>存在返回true，否则false</returns>
                ev_bool hasVertexTrack(_in ev_uint16 handle) const;

                /// <summary>
                /// 销毁节点动画轨迹
                /// </summary>
                /// <param name="handle">动画轨迹标识</param>
                /// <returns></returns>
                void destroyNodeTrack(_in ev_uint16 handle);

				void destroySphereNodeTrack(_in ev_uint16 handle);

                /// <summary>
                /// 销毁数字动画轨迹
                /// </summary>
                /// <param name="handle">动画轨迹标识</param>
                /// <returns></returns>
                void destroyNumericTrack(_in ev_uint16 handle);
                /// <summary>
                /// 销毁顶点动画轨迹
                /// </summary>
                /// <param name="handle">动画轨迹标识</param>
                /// <returns></returns>
                void destroyVertexTrack(_in ev_uint16 handle);
                /// <summary>
                /// 销毁所有动画轨迹
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void destroyAllTracks();
                /// <summary>
                /// 销毁所有节点动画轨迹
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void destroyAllNodeTracks();

				void destroyAllSphereNodeTracks();
                /// <summary>
                /// 销毁所有数字动画轨迹
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void destroyAllNumericTracks();
                /// <summary>
                /// 销毁所有顶点动画轨迹
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void destroyAllVertexTracks();
                /// <summary>
                /// 使当前时间点的动画轨迹对其控制的对象产生作用
                /// </summary>
                /// <param name="timePos">当前时间点</param>
                /// <param name="weight">权重</param>
                /// <param name="scale">动画大小变换比例</param>
                /// <returns></returns>
                void apply(_in Real timePos, _in Real weight, _in Real scale );
                /// <summary>
                /// 使当前时间点的动画轨迹对其控制的对象产生作用，动画大小变换比例1.0
                /// </summary>
                /// <param name="timePos">当前时间点</param>
                /// <param name="weight">权重</param>
                /// <returns></returns>
                void apply(_in Real timePos, _in Real weight);
                /// <summary>
                /// 使当前时间点的动画轨迹对其控制的对象产生作用，当前权重1.0，动画大小变换比例1.0
                /// </summary>
                /// <param name="timePos">当前时间点</param>
                /// <returns></returns>
                void apply(_in Real timePos);
                /// <summary>
                /// 使当前时间点的动画轨迹对其控制的当前节点对象产生作用
                /// </summary>
                /// <param name="node">节点指针</param>
                /// <param name="timePos">当前时间点</param>
                /// <param name="weight">权重</param>
                /// <param name="scale">动画大小变换比例</param>
                /// <returns></returns>
                void applyToNode( EarthView::World::Graphic::CNode *node, _in Real timePos, _in Real weight, _in Real scale);
                /// <summary>
                /// 使当前时间点的动画轨迹对其控制的当前节点对象产生作用，动画大小变换比例1.0
                /// </summary>
                /// <param name="node">节点指针</param>
                /// <param name="timePos">当前时间点</param>
                /// <param name="weight">权重</param>
                /// <returns></returns>
                void applyToNode(EarthView::World::Graphic::CNode *node, _in Real timePos, _in Real weight);
                /// <summary>
                /// 使当前时间点的动画轨迹对其控制的当前节点对象产生作用，当前权重1.0，动画大小变换比例1.0
                /// </summary>
                /// <param name="node">节点指针</param>
                /// <param name="timePos">当前时间点</param>
                /// <returns></returns>
                void applyToNode( EarthView::World::Graphic::CNode *node, _in Real timePos);

				void applyToSphereNode( EarthView::World::Graphic::CNode *node, _in Real timePos, _in Real weight, _in Real scale);
				/// <summary>
				/// 使当前时间点的动画轨迹对其控制的当前节点对象产生作用，动画大小变换比例1.0
				/// </summary>
				/// <param name="node">节点指针</param>
				/// <param name="timePos">当前时间点</param>
				/// <param name="weight">权重</param>
				/// <returns></returns>
				void applyToSphereNode(EarthView::World::Graphic::CNode *node, _in Real timePos, _in Real weight);
				/// <summary>
				/// 使当前时间点的动画轨迹对其控制的当前节点对象产生作用，当前权重1.0，动画大小变换比例1.0
				/// </summary>
				/// <param name="node">节点指针</param>
				/// <param name="timePos">当前时间点</param>
				/// <returns></returns>
				void applyToSphereNode( EarthView::World::Graphic::CNode *node, _in Real timePos);

                /// <summary>
                /// 使当前时间点的动画轨迹对其控制的与给定的骨骼对应的节点对象产生作用
                /// </summary>
                /// <param name="skeleton">骨骼数据指针</param>
                /// <param name="timePos">当前时间点</param>
                /// <param name="weight">权重</param>
                /// <param name="scale">动画大小变换比例</param>
                /// <returns></returns>
                void apply(EarthView::World::Graphic::CSkeleton *skeleton, _in Real timePos, _in Real weight, _in Real scale);
                /// <summary>
                /// 使当前时间点的动画轨迹对其控制的与给定的骨骼对应的节点对象产生作用，动画大小变换比例1.0
                /// </summary>
                /// <param name="skeleton">骨骼数据指针</param>
                /// <param name="timePos">当前时间点</param>
                /// <param name="weight">权重</param>
                /// <returns></returns>
                void apply( EarthView::World::Graphic::CSkeleton *skeleton, _in Real timePos, _in Real weight);
                /// <summary>
                /// 使当前时间点的动画轨迹对其控制的与给定的骨骼对应的节点对象产生作用，当前权重1.0，动画大小变换比例1.0
                /// </summary>
                /// <param name="skeleton">骨骼数据指针</param>
                /// <param name="timePos">当前时间点</param>
                /// <returns></returns>
                void apply( EarthView::World::Graphic::CSkeleton *skeleton, _in Real timePos);
                /// <summary>
                /// 使当前时间点的动画轨迹对其控制的与给定的骨骼对应的节点对象产生作用
                /// </summary>
                /// <param name="skeleton">骨骼数据指针</param>
                /// <param name="timePos">当前时间点</param>
                /// <param name="weight">权重</param>
                /// <param name="blendMask">动画混合权重集合</param>
                /// <param name="scale">动画大小变换比例</param>
                /// <returns></returns>
                void apply( EarthView::World::Graphic::CSkeleton *skeleton, _in Real timePos, _in ev_real32 weight,
                            _in const EarthView::World::Graphic::CAnimationState::BoneBlendMask *blendMask, _in Real scale);
                /// <summary>
                /// 使当前时间点的动画轨迹对其控制的与给定的实体对应的顶点产生作用
                /// </summary>
                /// <param name="entity">实体对象指针</param>
                /// <param name="timePos">当前时间点</param>
                /// <param name="weight">权重</param>
                /// <param name="software">是否应用软件变形顶点数据</param>
                /// <param name="hardware">是否应用硬件变形顶点数据</param>
                /// <returns></returns>
                void apply( EarthView::World::Graphic::CEntity *entity, _in Real timePos, _in Real weight, _in ev_bool software,
                            _in ev_bool hardware);
                /// <summary>
                /// 使当前时间点的数字动画轨迹对其控制的可动画的值产生作用
                /// </summary>
                /// <param name="anim">可动画的值</param>
                /// <param name="timePos">当前时间点</param>
                /// <param name="weight">权重</param>
                /// <param name="scale">动画大小变换比例</param>
                /// <returns></returns>
                void applyToAnimable( _in const EarthView::World::Graphic::AnimableValuePtr &anim, _in Real timePos, _in Real weight, _in Real scale);
                /// <summary>
                /// 使当前时间点的数字动画轨迹对其控制的可动画的值产生作用，动画大小变换比例1.0
                /// </summary>
                /// <param name="anim">可动画的值</param>
                /// <param name="timePos">当前时间点</param>
                /// <param name="weight">权重</param>
                /// <returns></returns>
                void applyToAnimable( _in const EarthView::World::Graphic::AnimableValuePtr &anim, _in Real timePos, _in Real weight);
                /// <summary>
                /// 使当前时间点的数字动画轨迹对其控制的可动画的值产生作用，当前权重1.0，动画大小变换比例1.0
                /// </summary>
                /// <param name="anim">可动画的值</param>
                /// <param name="timePos">当前时间点</param>
                /// <returns></returns>
                void applyToAnimable( _in const EarthView::World::Graphic::AnimableValuePtr &anim, _in Real timePos);
                /// <summary>
                /// 使当前时间点的顶点动画轨迹对其控制的顶点数据产生作用
                /// </summary>
                /// <param name="data">顶点数据</param>
                /// <param name="timePos">当前时间点</param>
                /// <param name="weight">权重</param>
                /// <returns></returns>
                void applyToVertexData( EarthView::World::Graphic::CVertexData *data, _in Real timePos, _in Real weight );
                /// <summary>
                /// 使当前时间点的顶点动画轨迹对其控制的顶点数据产生作用
                /// </summary>
                /// <param name="data">顶点数据</param>
                /// <param name="timePos">当前时间点</param>
                /// <returns></returns>
                void applyToVertexData( EarthView::World::Graphic::CVertexData *data, _in Real timePos);
                /// <summary>
                /// 设置关键帧插值方式
                /// </summary>
                /// <param name="im">动画插值方式</param>
                /// <returns></returns>
                void setInterpolationMode(_in InterpolationMode im);
                /// <summary>
                /// 获得关键帧插值方式
                /// </summary>
                /// <param name=""></param>
                /// <returns>当前动画插值方式</returns>
                EarthView::World::Graphic::CAnimation::InterpolationMode getInterpolationMode() const;
                /// <summary>
                /// 设置旋转插值方式
                /// </summary>
                /// <param name="im">旋转插值方式</param>
                /// <returns></returns>
                void setRotationInterpolationMode(_in RotationInterpolationMode im);
                /// <summary>
                /// 获得旋转插值方式
                /// </summary>
                /// <param name=""></param>
                /// <returns>旋转插值方式</returns>
                EarthView::World::Graphic::CAnimation::RotationInterpolationMode getRotationInterpolationMode() const;
                /// <summary>
                /// 设置动画关键帧默认插值方式
                /// </summary>
                /// <param name="im">默认插值方式</param>
                /// <returns></returns>
                static void setDefaultInterpolationMode(_in InterpolationMode im);
                /// <summary>
                /// 活得动画关键帧默认插值方式
                /// </summary>
                /// <param name=""></param>
                /// <returns>默认插值方式</returns>
                static EarthView::World::Graphic::CAnimation::InterpolationMode getDefaultInterpolationMode();
                /// <summary>
                /// 设置默认旋转插值方式
                /// </summary>
                /// <param name="im">默认旋转插值方式</param>
                /// <returns></returns>
                static void setDefaultRotationInterpolationMode(_in RotationInterpolationMode im);
                /// <summary>
                /// 获得默认旋转插值方式
                /// </summary>
                /// <param name=""></param>
                /// <returns>默认旋转插值方式</returns>
                static EarthView::World::Graphic::CAnimation::RotationInterpolationMode getDefaultRotationInterpolationMode();
                /// <summary>
                /// 节点动画轨迹集合类
                /// 管理节点动画轨迹集合
                /// </summary>
                class EV_GRAPHIC_DLL NodeTrackList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    NodeTrackList(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    NodeTrackList();
                    /// <summary>
                    /// 增加节点动画集合元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <param name="val">值</param>
                    /// <returns>成功增加true，否则false</returns>
                    ev_bool push(_in const ev_uint16 &key, _in EarthView::World::Graphic::CNodeAnimationTrack *const &ref_val);
                    /// <summary>
                    /// 判断元素是否存在
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>存在true，否则false</returns>
                    ev_bool exist(_in const ev_uint16 &key);
                    /// <summary>
                    /// 重载[]操作符
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    EarthView::World::Graphic::CNodeAnimationTrack*& operator[](_in const ev_uint16 &key);
                    /// <summary>
                    /// 获得键对应的值
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    EarthView::World::Graphic::CNodeAnimationTrack*& get(_in const ev_uint16 &key);
                    /// <summary>
                    /// 删除键对应的值
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns></returns>
                    void erase(_in const ev_uint16 &key);
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
                    typedef map<ev_uint16, EarthView::World::Graphic::CNodeAnimationTrack *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    /// <summary>
                    /// 集合插入元素
                    /// </summary>
                    /// <param name="val">值</param>
                    /// <returns>插入后的键值对</returns>
                    _Pairib insert(_in const value_type &val);
                    /// <summary>
                    /// 查找元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>查找后返回对应迭代器</returns>
                    iterator find(_in const ev_uint16 &key);
                    /// <summary>
                    /// 查找元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>查找后返回对应迭代器</returns>
                    const_iterator find(_in const ev_uint16 &key) const;
                private:
                    InternalList mList;
                };

				/// <summary>
				/// 节点动画轨迹集合类
				/// 管理节点动画轨迹集合
				/// </summary>
				class EV_GRAPHIC_DLL SphereNodeTrackList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					SphereNodeTrackList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					SphereNodeTrackList();
					/// <summary>
					/// 增加节点动画集合元素
					/// </summary>
					/// <param name="key">键</param>
					/// <param name="val">值</param>
					/// <returns>成功增加true，否则false</returns>
					ev_bool push(_in const ev_uint16 &key, _in EarthView::World::Graphic::CSphereNodeAnimationTrack *const &ref_val);
					/// <summary>
					/// 判断元素是否存在
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>存在true，否则false</returns>
					ev_bool exist(_in const ev_uint16 &key);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>返回键对应的值</returns>
					EarthView::World::Graphic::CSphereNodeAnimationTrack*& operator[](_in const ev_uint16 &key);
					/// <summary>
					/// 获得键对应的值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>返回键对应的值</returns>
					EarthView::World::Graphic::CSphereNodeAnimationTrack*& get(_in const ev_uint16 &key);
					/// <summary>
					/// 删除键对应的值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns></returns>
					void erase(_in const ev_uint16 &key);
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
					typedef map<ev_uint16, EarthView::World::Graphic::CSphereNodeAnimationTrack *> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::mapped_type mapped_type;
					typedef InternalList::key_type key_type;
					typedef InternalList::value_type value_type;
					typedef pair<InternalList::iterator, bool> _Pairib;
					RESERVE_CONTAINER_FUNCTION_MAP(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="val">值</param>
					/// <returns>插入后的键值对</returns>
					_Pairib insert(_in const value_type &val);
					/// <summary>
					/// 查找元素
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>查找后返回对应迭代器</returns>
					iterator find(_in const ev_uint16 &key);
					/// <summary>
					/// 查找元素
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>查找后返回对应迭代器</returns>
					const_iterator find(_in const ev_uint16 &key) const;
				private:
					InternalList mList;
				};

                /// <summary>
                /// 节点动画轨迹键值对结构
                /// 管理节点动画轨迹键值
                /// </summary>
                class EV_GRAPHIC_DLL NodeTrackPair: public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    NodeTrackPair(EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    NodeTrackPair();
                    ev_uint16 first;
                    EarthView::World::Graphic::CNodeAnimationTrack *second;
                };

				class EV_GRAPHIC_DLL SphereNodeTrackPair: public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					SphereNodeTrackPair(EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					SphereNodeTrackPair();
					ev_uint16 first;
					EarthView::World::Graphic::CSphereNodeAnimationTrack *second;
				};
                /// <summary>
                /// 节点动画轨迹集合迭代器
                /// 管理节点动画轨迹集合迭代器操作
                /// </summary>
                class EV_GRAPHIC_DLL NodeTrackIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CAnimation::NodeTrackList> InternalIterator;
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
                    NodeTrackIterator(_in const_iterator first, _in const_iterator last);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~NodeTrackIterator();
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
                    ValueType peekNextValue () const;
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
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CAnimation::NodeTrackIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CAnimation::NodeTrackIterator &operator=(_in const EarthView::World::Graphic::CAnimation::NodeTrackIterator &other);
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    NodeTrackIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 复制构造函数
                    /// </summary>
                    /// <param name="other">其它迭代器</param>
                    /// <returns></returns>
                    NodeTrackIterator(_in const NodeTrackIterator &other);
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="lst">迭代器对应集合</param>
                    /// <returns></returns>
                    NodeTrackIterator(_in EarthView::World::Graphic::CAnimation::NodeTrackList &lst);
                    /// <summary>
                    /// 判断迭代器是否到达容器末尾
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>是返回true，否则false</returns>
                    ev_bool hasMoreElements () const;
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
                    ev_uint16 nextKey() const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CNodeAnimationTrack *nextValue() const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值地址</returns>
                    EarthView::World::Graphic::CNodeAnimationTrack **nextValuePtr();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CNodeAnimationTrack *next();
                    /// <summary>
                    /// 返回容器首键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首键值对</returns>
                    const EarthView::World::Graphic::CAnimation::NodeTrackPair &getBegin();
                    /// <summary>
                    /// 返回容器尾键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾键值对</returns>
                    const EarthView::World::Graphic::CAnimation::NodeTrackPair &getEnd();
                    /// <summary>
                    /// 返回容器当前键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前键值对</returns>
                    const EarthView::World::Graphic::CAnimation::NodeTrackPair &getCurrent();
                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CAnimation::NodeTrackPair mBeginPair;
                    EarthView::World::Graphic::CAnimation::NodeTrackPair mCurrentPair;
                    EarthView::World::Graphic::CAnimation::NodeTrackPair mEndPair;
                    EarthView::World::Graphic::CNodeAnimationTrack *mptr;
                    ValueType mvt;
                };

				/// <summary>
				/// 节点动画轨迹集合迭代器
				/// 管理节点动画轨迹集合迭代器操作
				/// </summary>
				class EV_GRAPHIC_DLL SphereNodeTrackIterator : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CAnimation::SphereNodeTrackList> InternalIterator;
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
					SphereNodeTrackIterator(_in const_iterator first, _in const_iterator last);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~SphereNodeTrackIterator();
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
					ValueType peekNextValue () const;
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
					/// <summary>
					/// 赋值符号"="的重载
					/// </summary>
					/// <param name="other">EarthView::World::Graphic::CAnimation::NodeTrackIterator类的引用</param>
					/// <returns>返回赋值后的引用</returns>
					EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator &operator=(_in const EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator &other);
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					SphereNodeTrackIterator(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="other">其它迭代器</param>
					/// <returns></returns>
					SphereNodeTrackIterator(_in const SphereNodeTrackIterator &other);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="lst">迭代器对应集合</param>
					/// <returns></returns>
					SphereNodeTrackIterator(_in EarthView::World::Graphic::CAnimation::SphereNodeTrackList &lst);
					/// <summary>
					/// 判断迭代器是否到达容器末尾
					/// </summary>
					/// <param name=""></param>
					/// <returns>是返回true，否则false</returns>
					ev_bool hasMoreElements () const;
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
					ev_uint16 nextKey() const;
					/// <summary>
					/// 返回容器当前的值
					/// </summary>
					/// <param name=""></param>
					/// <returns>值</returns>
					EarthView::World::Graphic::CSphereNodeAnimationTrack *nextValue() const;
					/// <summary>
					/// 返回容器当前的值指针
					/// </summary>
					/// <param name=""></param>
					/// <returns>值地址</returns>
					EarthView::World::Graphic::CSphereNodeAnimationTrack **nextValuePtr();
					/// <summary>
					/// 返回容器当前的值
					/// </summary>
					/// <param name=""></param>
					/// <returns>值</returns>
					EarthView::World::Graphic::CSphereNodeAnimationTrack *next();
					/// <summary>
					/// 返回容器首键值对
					/// </summary>
					/// <param name=""></param>
					/// <returns>首键值对</returns>
					const EarthView::World::Graphic::CAnimation::SphereNodeTrackPair &getBegin();
					/// <summary>
					/// 返回容器尾键值对
					/// </summary>
					/// <param name=""></param>
					/// <returns>尾键值对</returns>
					const EarthView::World::Graphic::CAnimation::SphereNodeTrackPair &getEnd();
					/// <summary>
					/// 返回容器当前键值对
					/// </summary>
					/// <param name=""></param>
					/// <returns>当前键值对</returns>
					const EarthView::World::Graphic::CAnimation::SphereNodeTrackPair &getCurrent();
				private:
					InternalIterator *mIterator;
					EarthView::World::Graphic::CAnimation::SphereNodeTrackPair mBeginPair;
					EarthView::World::Graphic::CAnimation::SphereNodeTrackPair mCurrentPair;
					EarthView::World::Graphic::CAnimation::SphereNodeTrackPair mEndPair;
					EarthView::World::Graphic::CSphereNodeAnimationTrack *mptr;
					ValueType mvt;
				};

                /// <summary>
                /// 数字动画轨迹集合类
                /// 管理数字动画轨迹集合操作
                /// </summary>
                class EV_GRAPHIC_DLL NumericTrackList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    NumericTrackList(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    NumericTrackList();
                    /// <summary>
                    /// 增加动画集合元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <param name="val">值</param>
                    /// <returns>成功增加true，否则false</returns>
                    ev_bool push(_in const ev_uint16 &key, _in EarthView::World::Graphic::CNumericAnimationTrack *const &ref_val);
                    /// <summary>
                    /// 判断元素是否存在
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>存在true，否则false</returns>
                    ev_bool exist(_in const ev_uint16 &key);
                    /// <summary>
                    /// 重载[]操作符
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    EarthView::World::Graphic::CNumericAnimationTrack*& operator[](const ev_uint16 &key);
                    /// <summary>
                    /// 获得键对应的值
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    EarthView::World::Graphic::CNumericAnimationTrack*& get(_in const ev_uint16 &key);
                    /// <summary>
                    /// 删除键对应的值
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns></returns>
                    void erase(_in const ev_uint16 &key);
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
                    typedef map<ev_uint16, EarthView::World::Graphic::CNumericAnimationTrack *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    /// <summary>
                    /// 集合插入元素
                    /// </summary>
                    /// <param name="val">值</param>
                    /// <returns>插入后的键值对</returns>
                    _Pairib insert(_in const value_type &val);
                    /// <summary>
                    /// 查找元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>查找后返回对应迭代器</returns>
                    iterator find(_in const ev_uint16 &key);
                    /// <summary>
                    /// 查找元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>查找后返回对应迭代器</returns>
                    const_iterator find(_in const ev_uint16 &key) const;
                private:
                    InternalList mList;
                };
                /// <summary>
                /// 数字动画轨迹键值对结构
                /// 管理数字动画轨迹键值
                /// </summary>
                class EV_GRAPHIC_DLL NumericTrackPair: public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    NumericTrackPair(EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    NumericTrackPair();
                    ev_uint16 first;
                    EarthView::World::Graphic::CNumericAnimationTrack *second;
                };
                /// <summary>
                /// 数字动画轨迹集合迭代器
                /// 管理数字动画轨迹集合迭代器操作
                /// </summary>
                class EV_GRAPHIC_DLL NumericTrackIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CAnimation::NumericTrackList> InternalIterator;
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
                    NumericTrackIterator(_in const_iterator first, _in const_iterator last);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~NumericTrackIterator();
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CAnimation::NumericTrackIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CAnimation::NumericTrackIterator &operator=(_in const EarthView::World::Graphic::CAnimation::NumericTrackIterator &other);
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
                    ValueType peekNextValue () const;
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
                    NumericTrackIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="lst">迭代器对应集合</param>
                    /// <returns></returns>
                    NumericTrackIterator(_in EarthView::World::Graphic::CAnimation::NumericTrackList &lst);
                    /// <summary>
                    /// 复制构造函数
                    /// </summary>
                    /// <param name="other">其它迭代器</param>
                    /// <returns></returns>
                    NumericTrackIterator(_in const NumericTrackIterator &other);
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
                    ev_uint16 nextKey() const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CNumericAnimationTrack *nextValue() const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值地址</returns>
                    EarthView::World::Graphic::CNumericAnimationTrack **nextValuePtr();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CNumericAnimationTrack *next();
                    /// <summary>
                    /// 返回容器首键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首键值对</returns>
                    const EarthView::World::Graphic::CAnimation::NumericTrackPair &getBegin();
                    /// <summary>
                    /// 返回容器尾键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾键值对</returns>
                    const EarthView::World::Graphic::CAnimation::NumericTrackPair &getEnd();
                    /// <summary>
                    /// 返回容器当前键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前键值对</returns>
                    const EarthView::World::Graphic::CAnimation::NumericTrackPair &getCurrent();
                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CAnimation::NumericTrackPair mBeginPair;
                    EarthView::World::Graphic::CAnimation::NumericTrackPair mCurrentPair;
                    EarthView::World::Graphic::CAnimation::NumericTrackPair mEndPair;
                    EarthView::World::Graphic::CNumericAnimationTrack *mptr;
                    ValueType mvt;
                };
                /// <summary>
                /// 顶点动画轨迹集合类
                /// 管理顶点动画轨迹集合
                /// </summary>
                class EV_GRAPHIC_DLL VertexTrackList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    VertexTrackList(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    VertexTrackList();
                    /// <summary>
                    /// 增加动画集合元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <param name="val">值</param>
                    /// <returns>成功增加true，否则false</returns>
                    ev_bool push(_in const ev_uint16 &key, _in EarthView::World::Graphic::CVertexAnimationTrack *const &ref_val);
                    /// <summary>
                    /// 判断元素是否存在
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>存在true，否则false</returns>
                    ev_bool exist(_in const ev_uint16 &key);
                    /// <summary>
                    /// 重载[]操作符
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    EarthView::World::Graphic::CVertexAnimationTrack*& operator[](_in const ev_uint16 &key);
                    /// <summary>
                    /// 获得键对应的值
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    EarthView::World::Graphic::CVertexAnimationTrack*& get(_in const ev_uint16 &key);
                    /// <summary>
                    /// 删除键对应的值
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns></returns>
                    void erase(_in const ev_uint16 &key);
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
                    typedef map<ev_uint16, EarthView::World::Graphic::CVertexAnimationTrack *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    /// <summary>
                    /// 集合插入元素
                    /// </summary>
                    /// <param name="val">值</param>
                    /// <returns>插入后的键值对</returns>
                    _Pairib insert(_in const value_type &val);
                    /// <summary>
                    /// 查找元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>查找后返回对应迭代器</returns>
                    iterator find(_in const ev_uint16 &key);
                    /// <summary>
                    /// 查找元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>查找后返回对应迭代器</returns>
                    const_iterator find(_in const ev_uint16 &key) const;
                private:
                    InternalList mList;
                };
                /// <summary>
                /// 顶点动画轨迹键值对结构
                /// 管理顶点动画轨迹键值
                /// </summary>
                class EV_GRAPHIC_DLL CVertexAnimationTrackPair: public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CVertexAnimationTrackPair(EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CVertexAnimationTrackPair();
                    ev_uint16 first;
                    EarthView::World::Graphic::CVertexAnimationTrack *second;
                };
                /// <summary>
                /// 顶点动画轨迹集合迭代器
                /// 管理顶点动画轨迹集合迭代器操作
                /// </summary>
                class EV_GRAPHIC_DLL VertexTrackIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CAnimation::VertexTrackList> InternalIterator;
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
                    VertexTrackIterator(_in const_iterator first, _in const_iterator last);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~VertexTrackIterator();
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CAnimation::VertexTrackIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CAnimation::VertexTrackIterator &operator=(_in const EarthView::World::Graphic::CAnimation::VertexTrackIterator &other);
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
                    VertexTrackIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="lst">迭代器对应集合</param>
                    /// <returns></returns>
                    VertexTrackIterator(_in EarthView::World::Graphic::CAnimation::VertexTrackList &lst);
                    /// <summary>
                    /// 复制构造函数
                    /// </summary>
                    /// <param name="other">其它迭代器</param>
                    /// <returns></returns>
                    VertexTrackIterator(_in const VertexTrackIterator &other);
                    /// <summary>
                    /// 判断迭代器是否到达容器末尾
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>是返回true，否则false</returns>
                    ev_bool hasMoreElements () const;
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
                    ev_uint16 nextKey() const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CVertexAnimationTrack *nextValue() const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值地址</returns>
                    EarthView::World::Graphic::CVertexAnimationTrack **nextValuePtr();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CVertexAnimationTrack *next();
                    /// <summary>
                    /// 返回容器首键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首键值对</returns>
                    const EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair &getBegin();
                    /// <summary>
                    /// 返回容器尾键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾键值对</returns>
                    const EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair &getEnd();
                    /// <summary>
                    /// 返回容器当前键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前键值对</returns>
                    const EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair &getCurrent();
                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair mBeginPair;
                    EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair mCurrentPair;
                    EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair mEndPair;
                    EarthView::World::Graphic::CVertexAnimationTrack *mptr;
                    ValueType mvt;
                };
                /// <summary>
                /// 获得节点动画轨迹集合
                /// </summary>
                /// <param name=""></param>
                /// <returns>节点动画轨迹集合</returns>
                const EarthView::World::Graphic::CAnimation::NodeTrackList &_getNodeTrackList() const;


				const EarthView::World::Graphic::CAnimation::SphereNodeTrackList &_getSphereNodeTrackList() const;
                /// <summary>
                /// 获得节点动画轨迹集合迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>节点动画轨迹集合迭代器</returns>
                EarthView::World::Graphic::CAnimation::NodeTrackIterator getNodeTrackIterator() const;

				EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator getSphereNodeTrackIterator() const;

                /// <summary>
                /// 获得数字动画轨迹集合
                /// </summary>
                /// <param name=""></param>
                /// <returns>数字动画轨迹集合</returns>
                const EarthView::World::Graphic::CAnimation::NumericTrackList &_getNumericTrackList() const;
                /// <summary>
                /// 获得数字动画轨迹集合迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>数字动画轨迹集合迭代器</returns>
                EarthView::World::Graphic::CAnimation::NumericTrackIterator getNumericTrackIterator() const;
                /// <summary>
                /// 获得顶点动画轨迹集合
                /// </summary>
                /// <param name=""></param>
                /// <returns>顶点动画轨迹集合</returns>
                const EarthView::World::Graphic::CAnimation::VertexTrackList &_getVertexTrackList() const;
                /// <summary>
                /// 获得顶点动画轨迹集合迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>顶点动画轨迹集合迭代器</returns>
                EarthView::World::Graphic::CAnimation::VertexTrackIterator getVertexTrackIterator() const;
                /// <summary>
                /// 优化动画
                /// </summary>
                /// <param name="discardIdentityNodeTracks">是否删除没有变化的节点轨迹</param>
                /// <returns></returns>
                void optimise(_in ev_bool discardIdentityNodeTracks);
                /// <summary>
                /// 优化动画，删除没有变化的节点轨迹
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void optimise();
                ///typedef set<ev_uint16> EarthView::World::Graphic::CAnimation::TrackHandleList;
                /// <summary>
                /// 动画轨迹Handle标识集合类
                /// 管理动画轨迹Handle标识集合
                /// </summary>
                class EV_GRAPHIC_DLL TrackHandleList: public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef set<ev_uint16> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_SET(mList);
                    /// <summary>
                    /// 集合插入元素
                    /// </summary>
                    /// <param name="pos">迭代器</param>
                    /// <param name="t">Handle标识</param>
                    /// <returns>插入后的键值对</returns>
                    iterator insert(_in iterator pos, _in ev_uint16 &t);
                private:
                    InternalList mList;
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    TrackHandleList(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    TrackHandleList();
                    /// <summary>
                    /// 集合插入元素
                    /// </summary>
                    /// <param name="val">Handle标识</param>
                    /// <returns>插入后的键值对</returns>
                    void insert(ev_uint16 val);
                    /// <summary>
                    /// 返回集合的大小
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>集合的大小</returns>
                    ev_size_t size();
                    /// <summary>
                    /// 删除键对应的值
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns></returns>
                    ev_size_t erase(_in const ev_uint16 &key);
                    /// <summary>
                    /// 判断集合是否为空
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>集合为空返回true，否则false</returns>
                    ev_bool empty();
                    /// <summary>
                    /// 清空集合
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void clear();
                    /// <summary>
                    /// 返回值元素的个数
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>值元素的个数</returns>
                    ev_size_t count(_in const ev_uint16 &key);
                    /// <summary>
                    /// 返回集合能容纳的元素的最大限值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>集合能容纳的元素的最大限值</returns>
                    ev_size_t max_size();
                    /// <summary>
                    /// 交换两个集合变量
                    /// </summary>
                    /// <param name="other">其它集合</param>
                    /// <returns></returns>
                    void swap(_inout EarthView::World::Graphic::CAnimation::TrackHandleList &other);
                };
                /// <summary>
                /// 搜集没有变化的节点轨迹
                /// </summary>
                /// <param name="tracks">动画轨迹Handle标识集合对象</param>
                /// <returns></returns>
                void _collectIdentityNodeTracks(_inout EarthView::World::Graphic::CAnimation::TrackHandleList &tracks) const;
                /// <summary>
                /// 删除节点轨迹
                /// </summary>
                /// <param name="tracks">要删除的动画轨迹Handle标识集合对象</param>
                /// <returns></returns>
                void _destroyNodeTracks( _in const EarthView::World::Graphic::CAnimation::TrackHandleList &tracks);
                /// <summary>
                /// 克隆动画
                /// </summary>
                /// <param name="newName">新产生的动画的名称</param>
                /// <returns>新产生的动画指针</returns>
                EarthView::World::Graphic::CAnimation *clone( _in const EVString &newName) const;

                /// <summary>
                /// 通知动画其关键帧列表已变化
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _keyFrameListChanged();
                /// <summary>
                /// 将动画时间点转为时间索引
                /// </summary>
                /// <param name="timePos">时间点</param>
                /// <returns>时间索引</returns>
                EarthView::World::Graphic::CTimeIndex _getTimeIndex(_in Real timePos) const;

                ev_void setUseBaseKeyFrame(ev_bool useBaseKeyFrame, Real keyframeTime/* = 0.0f*/, const EVString &baseAnimName/* = CStringUtil::BLANK*/);
                ev_void setUseBaseKeyFrame(ev_bool useBaseKeyFrame, Real keyframeTime /*= 0.0f, const EVString& baseAnimName = CStringUtil::BLANK*/);
                ev_void setUseBaseKeyFrame(ev_bool useBaseKeyFrame/*, Real keyframeTime = 0.0f, const EVString& baseAnimName = CStringUtil::BLANK*/);


                ev_bool getUseBaseKeyFrame() const;

                Real getBaseKeyFrameTime() const;

                const EVString &getBaseKeyFrameAnimationName() const;

                void _applyBaseKeyFrame();

                void _notifyContainer(EarthView::World::Graphic::CAnimationContainer *ref_c);

                EarthView::World::Graphic::CAnimationContainer *getContainer();
            protected:
                EarthView::World::Graphic::CAnimation::NodeTrackList mNodeTrackList;
				EarthView::World::Graphic::CAnimation::SphereNodeTrackList mSphereNodeTrackList;
                EarthView::World::Graphic::CAnimation::NumericTrackList mNumericTrackList;
                EarthView::World::Graphic::CAnimation::VertexTrackList mVertexTrackList;
                EVString mName;
                Real mLength;
                EarthView::World::Graphic::CAnimation::InterpolationMode mInterpolationMode;
                EarthView::World::Graphic::CAnimation::RotationInterpolationMode mRotationInterpolationMode;
                static EarthView::World::Graphic::CAnimation::InterpolationMode msDefaultInterpolationMode;
                static EarthView::World::Graphic::CAnimation::RotationInterpolationMode msDefaultRotationInterpolationMode;
                //// Global keyframe time list used to search global keyframe index.
                ///typedef vector<Real> KeyFrameTimeList;
                mutable CAnimationTrack::KeyFrameTimes mKeyFrameTimes;
                //// Dirty flag indicate that keyframe time list need to rebuild
                mutable ev_bool mKeyFrameTimesDirty;
                ev_bool mUseBaseKeyFrame;
                Real mBaseKeyFrameTime;
                EVString mBaseKeyFrameAnimationName;
                EarthView::World::Graphic::CAnimationContainer *mContainer;
                /// <summary>
                /// 优化节点动画轨迹
                /// </summary>
                /// <param name="discardIdentityNodeTracks">是否删除没有变化的节点轨迹</param>
                /// <returns></returns>
                void optimiseNodeTracks(_in ev_bool discardIdentityTracks);
                /// <summary>
                /// 优化节点动画轨迹，删除没有变化的节点轨迹
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void optimiseVertexTracks();
                /// <summary>
                /// 创建关键帧时间列表
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void buildKeyFrameTimeList() const;
            };
        }
    }
}


#endif

