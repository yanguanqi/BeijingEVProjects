#ifndef __KeyFrame_H__
#define __KeyFrame_H__
#pragma once
#include "graphic/graphic_config.h"
#include "mathengine/vector3.h"
#include <core/any.h>
#include "hardwarevertexbuffer.h"
#include <core/iteratorwrapper.h>
#include "mathengine/ev_math.h"


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CAnimationTrack;
            /// <summary>
            /// 关键帧类
            /// 管理关键帧
            /// </summary>
            class EV_GRAPHIC_DLL CKeyFrame : public EarthView::World::Core::CAllocatedObject
            {
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="parent">动画轨迹对象</param>
                /// <param name="time">关键帧时间点</param>
                /// <returns></returns>
                CKeyFrame(_in const EarthView::World::Graphic::CAnimationTrack *ref_parent, _in Real time);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CKeyFrame(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CKeyFrame();
                /// <summary>
                /// 获得关键帧时间点
                /// </summary>
                /// <param name=""></param>
                /// <returns>关键帧时间点</returns>
                Real getTime() const;
                /// <summary>
                /// clone当前关键帧
                /// </summary>
                /// <param name="newParent">关键帧所属动画轨迹</param>
                /// <returns>复制的关键帧</returns>
                virtual _extfree EarthView::World::Graphic::CKeyFrame *_clone( EarthView::World::Graphic::CAnimationTrack *ref_newParent) const;

            protected:
                Real mTime;
                const EarthView::World::Graphic::CAnimationTrack *mParentTrack;
            };
            /// <summary>
            /// 数字关键帧类
            /// 管理数字关键帧
            /// </summary>
            class EV_GRAPHIC_DLL CNumericKeyFrame : public EarthView::World::Graphic::CKeyFrame
            {
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="parent">动画轨迹对象</param>
                /// <param name="time">数字关键帧时间点</param>
                /// <returns></returns>
                CNumericKeyFrame( _in const EarthView::World::Graphic::CAnimationTrack *ref_parent, _in Real time);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CNumericKeyFrame(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CNumericKeyFrame();
                /// <summary>
                /// clone当前数字关键帧
                /// </summary>
                /// <param name="newParent">数字关键帧所属动画轨迹</param>
                /// <returns>复制的数字关键帧</returns>
                _extfree EarthView::World::Graphic::CKeyFrame *_clone(_in EarthView::World::Graphic::CAnimationTrack *ref_newParent) const;
            ev_private:
                /// <summary>
                /// 获得数字关键帧可动画的值
                /// </summary>
                /// <param name=""></param>
                /// <returns>数字关键帧可动画的值</returns>
                virtual const EarthView::World::Core::CAnyNumeric &getValue() const;
                /// <summary>
                /// 设置数字关键帧可动画的值
                /// </summary>
                /// <param name="val">数字关键帧可动画的值</param>
                /// <returns></returns>
                virtual void setValue( _in const EarthView::World::Core::CAnyNumeric &val);

            protected:
                EarthView::World::Core::CAnyNumeric mValue;
            };
            /// <summary>
            /// 关键帧变换类
            /// 管理关键帧的变换
            /// </summary>
            class EV_GRAPHIC_DLL CTransformKeyFrame : public EarthView::World::Graphic::CKeyFrame
            {
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="parent">动画轨迹对象</param>
                /// <param name="time">变换的关键帧时间点</param>
                /// <returns></returns>
                CTransformKeyFrame( _in const EarthView::World::Graphic::CAnimationTrack *ref_parent, _in Real time);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CTransformKeyFrame(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CTransformKeyFrame();
                /// <summary>
                /// 设置关键帧变换向量
                /// </summary>
                /// <param name="trans">关键帧变换向量</param>
                /// <returns></returns>
                virtual void setTranslate( _in const EarthView::World::Spatial::Math::CVector3 &trans);
                /// <summary>
                /// 获得关键帧变换向量
                /// </summary>
                /// <param name=""></param>
                /// <returns>关键帧变换向量</returns>
                const EarthView::World::Spatial::Math::CVector3 &getTranslate() const;
                /// <summary>
                /// 设置关键帧缩放系数
                /// </summary>
                /// <param name="scale">关键帧缩放系数</param>
                /// <returns></returns>
                virtual void setScale( _in const EarthView::World::Spatial::Math::CVector3 &scale);
                /// <summary>
                /// 获得关键帧缩放系数
                /// </summary>
                /// <param name=""></param>
                /// <returns>关键帧缩放系数</returns>
                virtual const EarthView::World::Spatial::Math::CVector3 &getScale() const;
                /// <summary>
                /// 设置关键帧旋转四元数
                /// </summary>
                /// <param name="rot">关键帧旋转四元数</param>
                /// <returns></returns>
                virtual void setRotation( _in const EarthView::World::Spatial::Math::CQuaternion &rot);
                /// <summary>
                /// 获得关键帧旋转四元数
                /// </summary>
                /// <param name=""></param>
                /// <returns>关键帧旋转四元数</returns>
                virtual const EarthView::World::Spatial::Math::CQuaternion &getRotation() const;
				virtual void setMatrix(const EarthView::World::Spatial::Math::CMatrix4& mat);
                /// <summary>
                /// clone当前转换的关键帧
                /// </summary>
                /// <param name="newParent">转换关键帧所属动画轨迹</param>
                /// <returns>复制的关键帧</returns>
                _extfree EarthView::World::Graphic::CKeyFrame *_clone(_in EarthView::World::Graphic::CAnimationTrack *ref_newParent) const;
            protected:
                EarthView::World::Spatial::Math::CVector3 mTranslate;
                EarthView::World::Spatial::Math::CVector3 mScale;
                EarthView::World::Spatial::Math::CQuaternion mRotate;

            };

			class EV_GRAPHIC_DLL CSphereTransformKeyFrame:public EarthView::World::Graphic::CKeyFrame
			{
 			public:
 				/// <summary>
 				/// 构造函数
 				/// </summary>
 				/// <param name="parent">动画轨迹对象</param>
 				/// <param name="time">变换的关键帧时间点</param>
 				/// <returns></returns>
 				CSphereTransformKeyFrame( _in const EarthView::World::Graphic::CAnimationTrack *ref_parent, _in Real time);
 ev_private:
 				/// <summary>
 				/// 构造函数
 				/// </summary>
 				/// <param name="pList">构造函数参数键值对表</param>
 				/// <returns></returns>
 				CSphereTransformKeyFrame(_in EarthView::World::Core::CNameValuePairList *pList);
 			public:
 				/// <summary>
 				/// 析构函数
 				/// </summary>
 				/// <param name=""></param>
 				/// <returns></returns>
 				~CSphereTransformKeyFrame();
				/// <summary>
                /// 设置纬度
                /// </summary>
                /// <param name="latitude">纬度</param>
                /// <returns></returns>
 				virtual void setLatiude( _in ev_real64 latitude );
				/// <summary>
				/// 获取纬度
				/// </summary>
				/// <returns></returns>
 				ev_real64 getLatiude() const;
				/// <summary>
				/// 设置经度
				/// </summary>
				/// <param name="longitude">经度</param>
				/// <returns></returns>
 				virtual void setLongitude( _in ev_real64 longitude);
				/// <summary>
				/// 获取经度
				/// </summary>
				/// <returns></returns>
 				ev_real64 getLongitude() const;
				/// <summary>
				/// 设置偏航角
				/// </summary>
				/// <param name="heading">偏航角</param>
				/// <returns></returns>
				virtual void setHeading(_in ev_real64 heading);
				/// <summary>
				/// 获取偏航角
				/// </summary>
				/// <returns></returns>
				ev_real64 getHeading() const;
				/// <summary>
				/// 设置半径
				/// </summary>
				/// <param name="radius">半径</param>
				/// <returns></returns>
 				virtual void setRadius( _in ev_real64 radius);
				/// <summary>
				/// 获取半径
				/// </summary>
				/// <returns></returns>
 				virtual ev_real64 getRadius() const;
				/// <summary>
				/// 设置yaw角
				/// </summary>
				/// <param name="yaw">yaw角</param>
				/// <returns></returns>
				virtual void setYaw( _in const EarthView::World::Spatial::Math::CDegree& yaw);
				/// <summary>
				/// 获取yaw角
				/// </summary>
				/// <returns></returns>
				virtual EarthView::World::Spatial::Math::CDegree getYaw() const;
				/// <summary>
				/// 设置pitch角
				/// </summary>
				/// <param name="pitch">pitch角</param>
				/// <returns></returns>
				virtual void setPitch(  _in const EarthView::World::Spatial::Math::CDegree& pitch);
				/// <summary>
				/// 获取pitch角
				/// </summary>
				/// <returns></returns>
				virtual EarthView::World::Spatial::Math::CDegree getPitch() const;
				/// <summary>
				/// 设置roll角
				/// </summary>
				/// <param name="bank">roll角</param>
				/// <returns></returns>
				virtual void setRoll( _in const EarthView::World::Spatial::Math::CDegree& roll);
				/// <summary>
				/// 获取roll角
				/// </summary>
				/// <returns></returns>
				virtual EarthView::World::Spatial::Math::CDegree getRoll() const;

 				_extfree EarthView::World::Graphic::CKeyFrame *_clone(_in EarthView::World::Graphic::CAnimationTrack *ref_newParent) const;
 			protected:
 				ev_real64 mlatitude;
 				ev_real64 mlongitude;
				ev_real64 mheading;
 				ev_real64 mradius;
				//Z轴
				EarthView::World::Spatial::Math::CDegree myaw;
				//Y轴
				EarthView::World::Spatial::Math::CDegree mpitch;
				//X轴
				EarthView::World::Spatial::Math::CDegree mroll;
			};

            /// <summary>
            /// 顶点变形关键帧
            /// 管理关键帧的顶点变形操作
            /// </summary>
            class EV_GRAPHIC_DLL CVertexMorphKeyFrame : public EarthView::World::Graphic::CKeyFrame
            {
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="parent">动画轨迹对象</param>
                /// <param name="time">变换的关键帧时间点</param>
                /// <returns></returns>
                CVertexMorphKeyFrame( _in const EarthView::World::Graphic::CAnimationTrack *ref_parent, _in Real time);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CVertexMorphKeyFrame(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CVertexMorphKeyFrame();
                /// <summary>
                /// 设置变形顶点缓存
                /// </summary>
                /// <param name="buf">变形顶点缓存</param>
                /// <returns></returns>
                void setVertexBuffer( _in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &buf);
                /// <summary>
                /// 获得变形顶点缓存
                /// </summary>
                /// <param name=""></param>
                /// <returns>变形顶点缓存</returns>
                const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &getVertexBuffer() const;
                /// <summary>
                /// clone当前变形关键帧
                /// </summary>
                /// <param name="newParent">变形关键帧所属动画轨迹</param>
                /// <returns>复制的关键帧</returns>
                _extfree EarthView::World::Graphic::CKeyFrame *_clone(_in EarthView::World::Graphic::CAnimationTrack *ref_newParent) const;

            protected:
                EarthView::World::Graphic::CHardwareVertexBufferSharedPtr mBuffer;
            };
            /// <summary>
            /// 顶点姿态关键帧
            /// 管理关键帧的顶点姿态操作
            /// </summary>
            class EV_GRAPHIC_DLL CVertexPoseKeyFrame : public EarthView::World::Graphic::CKeyFrame
            {
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="parent">动画轨迹对象</param>
                /// <param name="time">变换的关键帧时间点</param>
                /// <returns></returns>
                CVertexPoseKeyFrame( _in const EarthView::World::Graphic::CAnimationTrack *ref_parent, _in Real time);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CVertexPoseKeyFrame(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CVertexPoseKeyFrame();
                /// <summary>
                /// 一定的影响系数下，顶点姿态关键帧姿态的引用类
                /// 管理关键帧的顶点姿态的引用
                /// </summary>
                class EV_GRAPHIC_DLL PoseRef : public EarthView::World::Core::CBaseObject
                {
                public:
                    ev_uint16 poseIndex;
                    Real influence;
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    PoseRef();
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="p">姿态索引</param>
                    /// <param name="i">影响系数</param>
                    /// <returns></returns>
                    PoseRef(_in ev_uint16 p, _in Real i);
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    PoseRef(_in EarthView::World::Core::CNameValuePairList *pList);
                };
                /// <summary>
                /// 姿态集合
                /// 管理顶点动画姿态
                /// </summary>
                class EV_GRAPHIC_DLL PoseRefList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    PoseRefList(_in EarthView::World::Core::CNameValuePairList *pList);
                    typedef vector<EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    /// <summary>
                    /// 容器中间位置插入元素
                    /// </summary>
                    /// <param name="pos">位置</param>
                    /// <param name="t">元素值</param>
                    /// <returns>插入元素后的迭代器</returns>
                    iterator insert(_in iterator pos, _in EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef const &t);
                private:
                    InternalList mList;
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    PoseRefList();

                    /// <summary>
                    /// 在容器最后添加元素
                    /// </summary>
                    /// <param name="t">元素值</param>
                    /// <returns></returns>
                    void push_back(_in EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef  const &t);
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
                    EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef &front();
                    /// <summary>
                    /// 返回容器最后元素
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器最后元素</returns>
                    EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef &back();
                    /// <summary>
                    /// 容器中间位置插入元素
                    /// </summary>
                    /// <param name="pos">位置</param>
                    /// <param name="t">元素值</param>
                    /// <returns></returns>
                    void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef const &t);
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
                    EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef &operator[](_in ev_size_t n);
                    /// <summary>
                    /// 重载[]操作符
                    /// </summary>
                    /// <param name="n">下标位置</param>
                    /// <returns>返回下标对应的值</returns>
                    EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef const &operator[](_in ev_size_t n) const;
                    /// <summary>
                    /// 返回某位置的元素值
                    /// </summary>
                    /// <param name="n">位置</param>
                    /// <returns>返回位置对应的值</returns>
                    EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef &at(_in ev_size_t n);
                    /// <summary>
                    /// 返回某位置的元素值
                    /// </summary>
                    /// <param name="n">位置</param>
                    /// <returns>返回位置对应的值</returns>
                    EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef const &at(_in ev_size_t n) const;
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
                /// 增加关键帧姿态
                /// </summary>
                /// <param name="poseIndex">姿态索引</param>
                /// <param name="influence">影响系数</param>
                /// <returns></returns>
                void addPoseReference(_in ev_uint16 poseIndex, _in Real influence);
                /// <summary>
                /// 更新关键帧姿态
                /// </summary>
                /// <param name="poseIndex">姿态索引</param>
                /// <param name="influence">影响系数</param>
                /// <returns></returns>
                void updatePoseReference(_in ev_uint16 poseIndex, _in Real influence);
                /// <summary>
                /// 删除关键帧姿态
                /// </summary>
                /// <param name="poseIndex">姿态索引</param>
                /// <returns></returns>
                void removePoseReference(_in ev_uint16 poseIndex);
                /// <summary>
                /// 删除所有关键帧姿态
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void removeAllPoseReferences();
                /// <summary>
                ///获得关键帧姿态集合
                /// </summary>
                /// <param name=""></param>
                /// <returns>关键帧姿态集合</returns>
                const EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList &getPoseReferences() const;
                ///typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList> EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator;
                /// <summary>
                /// 姿态集合迭代器
                /// 管理姿态集合迭代器操作
                /// </summary>
                class EV_GRAPHIC_DLL PoseRefIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList> InternalIterator;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    typedef PoseRefList::iterator IteratorType;
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="first">首迭代器</param>
                    /// <param name="last">尾迭代器</param>
                    /// <returns></returns>
                    PoseRefIterator(_in IteratorType start, _in IteratorType last);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~PoseRefIterator();
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator &operator=(_in const EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator &other);
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>

                    ValueType peekNext () const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值指针</returns>
                    PointerType peekNextPtr ()  const;
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
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="vec">迭代器对应集合</param>
                    /// <returns></returns>
                    PoseRefIterator(_in EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList &vec);

                    PoseRefIterator(_in const PoseRefIterator &rhs);

                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    PoseRefIterator(_in EarthView::World::Core::CNameValuePairList *pList);
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
                    /// 返回容器当前元素值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前元素值</returns>
                    EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef getCurrent();
                    /// <summary>
                    /// 返回容器下一元素值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>下一元素值</returns>
                    EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef next();
                    /// <summary>
                    /// 返回容器头部元素值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>头部元素值</returns>
                    EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef getBegin();
                    /// <summary>
                    /// 返回容器尾部元素值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾部元素值</returns>
                    EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef getEnd();
                private:
                    InternalIterator *mIterator;
                };
                ///typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList> EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator;
                /// <summary>
                /// 姿态集合迭代器
                /// 管理姿态集合迭代器操作
                /// </summary>
                class EV_GRAPHIC_DLL ConstPoseRefIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList> InternalIterator;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    typedef PoseRefList::const_iterator IteratorType;
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="start">首迭代器</param>
                    /// <param name="last">尾迭代器</param>
                    /// <returns></returns>
                    ConstPoseRefIterator(_in IteratorType start, _in IteratorType last);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~ConstPoseRefIterator();
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator &operator=(_in const EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator &other);
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
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="vec">迭代器对应集合</param>
                    /// <returns></returns>
                    ConstPoseRefIterator(_in EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList &vec);
                    /// <summary>
                    /// 复制构造函数
                    /// </summary>
                    /// <param name="rhs">其它迭代器</param>
                    /// <returns></returns>
                    ConstPoseRefIterator(_in const ConstPoseRefIterator &rhs);
                    /// <summary>
                    /// 判断迭代器是否到达容器末尾
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>是返回true，否则false</returns>
                    ev_bool hasMoreElements ( ) const;
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    ConstPoseRefIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
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
                    EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef getCurrent();
                    /// <summary>
                    /// 返回容器下一元素值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>下一元素值</returns>
                    EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef next();
                    /// <summary>
                    /// 返回容器头部元素值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>头部元素值</returns>
                    EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef getBegin();
                    /// <summary>
                    /// 返回容器尾部元素值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾部元素值</returns>
                    EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef getEnd();
                private:
                    InternalIterator *mIterator;
                };
                /// <summary>
                /// 返回姿态容器迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>尾部元素值</returns>
                EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator getPoseReferenceIterator();
                /// <summary>
                /// 返回姿态容器const迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>尾部元素值</returns>
                EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator getPoseReferenceIterator() const;
                /// <summary>
                /// clone当前顶点动画关键帧
                /// </summary>
                /// <param name="newParent">数字关键帧所属动画轨迹</param>
                /// <returns>复制的数字关键帧</returns>
                _extfree EarthView::World::Graphic::CKeyFrame *_clone(_in EarthView::World::Graphic::CAnimationTrack *ref_newParent) const;

                void _applyBaseKeyFrame(const EarthView::World::Graphic::CVertexPoseKeyFrame *base);
            protected:
                EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList mPoseRefs;
            };
        }
    }
}


#endif

