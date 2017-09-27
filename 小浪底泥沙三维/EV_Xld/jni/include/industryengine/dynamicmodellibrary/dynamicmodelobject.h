#ifndef __DYNAMICMODELOBJECT_H__
#define __DYNAMICMODELOBJECT_H__

#include "core/memoryallocatedobject.h"
#include "spatial3dengine/modeleffectmanager.h"
#include "spatial3dengine/controlpoint.h"
#include "mathengine/vector3.h"
#include "industryengine/industrygraphic/polylinefeature.h"
#include "ga/cameranodetrackscenemanagerlistener.h"
#include "graphic/ribbontrail.h"
#include "industryengine/dynamicmodellibrary/dynamicglobenodetrackanimation.h"
#include "graphic/animation.h"
#include "spatial3dengine/modelbaseobject.h"
#include "spatial3dengine/globecamera.h"
#include "spatial3dengine/globeflypath.h"
#include "industryengine/dynamicmodellibrary/dynamiccameranodetrackanimation.h"
#include "graphic/keyframe.h"
#include "industryengine/industrygraphic/scutcheontext.h"
#include "industryengine/dynamicmodellibrary/dynamicobjecteventmanager.h"
#include "mathengine/axisalignedbox.h"


namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			class CDynamicObjectEvent;
		}
	}
}

namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{	
			class CModelEvent;
			class CDynamicModelManagerFrameListener;
			/// <summary>
			/// 动态目标资源加载监听
			/// </summary>
			class EV_DYNAMICMODELLIBRARY_DLL CDynamicModelObjectResourceListener:public EarthView::World::Core::CBaseObject
			{
			public:
				/// <summary>
				/// 动态目标资源加载监听构造函数
				/// </summary>
				CDynamicModelObjectResourceListener(const EVString& name);
				/// <summary>
				/// 动态目标资源加载监听析构函数
				/// </summary>
				virtual ~CDynamicModelObjectResourceListener()
				{

				}
				/// <summary>
				/// 当加载完成资源，并挂接到场景图之后触发
				/// </summary>
				/// <param name="dynamicObject">动态目标对象</param>
				virtual void afterAttached(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicObject)
				{

				}
				/// <summary>
				/// 当加载完成资源，挂接到场景图之前触发
				/// </summary>
				/// <param name="dynamicObject">动态目标对象</param>
				virtual void beforeAttached(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicObject)
				{

				}
				/// <summary>
				/// 当动目标挂接或者反挂接时会被触发。
				/// </summary>
				/// <param name="dynamicObject">动态目标对象</param>
				/// <param name="atttched">模型被attcth时为true,detach时是false</param>
				virtual void attachStateHasChanged(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicObject,ev_bool atttched)
				{

				}
				/// <summary>
				/// 获取监听名称
				/// </summary>
				/// <returns>监听名称</returns>
				virtual EVString getName()const;
				/// <summary>
				/// 设置监听名称
				/// </summary>
				/// <param name="name">监听名称</param>
				virtual void setName(const EVString& name);
ev_private:
				CDynamicModelObjectResourceListener(_in EarthView::World::Core::CNameValuePairList* plist);
			protected:
				EVString mName;
			};
			/// <summary>
			/// 动态目标轨迹动画监听对象
			/// </summary>
			class EV_DYNAMICMODELLIBRARY_DLL CDynamicGlobeNodeTrackAnimationListener:public EarthView::World::Core::CBaseObject
			{
			public:
				/// <summary>
				/// 动态目标轨迹动画监听对象构造函数
				/// </summary>
				CDynamicGlobeNodeTrackAnimationListener();
				/// <summary>
				/// 动画过程到达指定帧之前调用
				/// </summary>
				/// <param name="dynamicModelObjectName">动态目标对象</param>
				/// <param name="timePosition">当前动画时间</param>
				/// <param name="isLooping">是否即将进行循环播放</param>
				virtual ev_void animationBeforeTimePositon(const EVString& dynamicModelObjectName,const ev_real64& timePosition,const ev_bool& isLooping);
				/// <summary>
				/// 动画过程到达指定帧之后调用
				/// </summary>
				/// <param name="dynamicModelObjectName">动态目标对象</param>
				/// <param name="timePosition">当前动画时间</param>
				/// <param name="isLooping">是否即将进行循环播放</param>
				virtual ev_void animationAfterTimePositon(const EVString& dynamicModelObjectName,const ev_real64& timePosition,const ev_bool& isLooping);
				/// <summary>
				/// 动画结束之前调用
				/// </summary>
				/// <param name="dynamicModelObjectName">动态目标对象</param>
				/// <param name="timePosition">当前动画时间</param>
				virtual ev_void animationBeforeEnd(const EVString& dynamicModelObjectName,const ev_real64& timePosition);
				/// <summary>
				/// 动画结束之后调用
				/// </summary>
				/// <param name="dynamicModelObjectName">动态目标对象</param>
				/// <param name="timePosition">当前动画时间</param>
				virtual ev_void animationAfterEnd(const EVString& dynamicModelObjectName,const ev_real64& timePosition);

ev_private:
				CDynamicGlobeNodeTrackAnimationListener(_in EarthView::World::Core::CNameValuePairList* plist);
			};
			/// <summary>
			/// 相机动画控制点参数对象
			/// </summary>
			class  EV_DYNAMICMODELLIBRARY_DLL CCameraAnimationParam : public EarthView::World::Core::CBaseObject
			{
			public:
				/// <summary>
				/// 构造相机动画控制点参数
				/// </summary>
				CCameraAnimationParam()
				{}
				/// <summary>
				/// 析构函数
				/// </summary>

				virtual ~CCameraAnimationParam()
				{}
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				CCameraAnimationParam(_in EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 动画控制时间
				/// </summary>
				ev_real64 Time;
				/// <summary>
				/// 模型位置
				/// </summary>
				EarthView::World::Spatial::Math::CVector3 Position;
				/// <summary>
				/// 模型偏航角
				/// </summary>
				EarthView::World::Spatial::Math::CDegree Yaw;
				/// <summary>
				/// 模型俯仰角
				/// </summary>
				EarthView::World::Spatial::Math::CDegree Pitch;
				/// <summary>
				/// 模型翻转角
				/// </summary>
				EarthView::World::Spatial::Math::CDegree Roll;
				/// <summary>
				/// 模型缩放比例
				/// </summary>
				EarthView::World::Spatial::Math::CVector3 Scale;
			};
			/// <summary>
			/// 相机动画控制点参数集合
			/// </summary>
			class EV_DYNAMICMODELLIBRARY_DLL CCameraAnimationParamSet : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				typedef vector<EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;

				RESERVE_CONTAINER_FUNCTION(mList);

				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">位置迭代器</param>
				/// <param name="t">元素值</param>
				/// <returns>插入元素后元素迭代器</returns>
				iterator insert(_in iterator pos, _in EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam const &t);
			private:
				InternalList mList;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				CCameraAnimationParamSet(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				CCameraAnimationParamSet();
				/// <summary>
				/// 在容器最后添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				void push_back(_in EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam  const &t);
				/// <summary>
				/// 删除容器最后元素
				/// </summary>
				/// <param name=""></param>
				void pop_back();
				/// <summary>
				/// 返回容器首个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器首个元素</returns>
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam &front();
				/// <summary>
				/// 返回容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器最后元素</returns>
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam &back();
				/// <summary>
				/// 容器中间位置插入元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="t">元素值</param>
				void insert(_in ev_uint32 pos, _in EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam const &t);
				/// <summary>
				/// 容器中间位置插入列表
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="other">列表</param>
				void insert(_in ev_uint32 pos, _in EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet other);
				/// <summary>
				/// 删除容器中间位置元素
				/// </summary>
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
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam &operator[](_in ev_size_t n);
				/// <summary>
				/// 重载[]操作符
				/// </summary>
				/// <param name="n">下标位置</param>
				/// <returns>返回下标对应的值</returns>
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam const &operator[](_in ev_size_t n) const;
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam &at(_in ev_size_t n);
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam const &at(_in ev_size_t n) const;
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
				void resize(_in ev_size_t newSize);
				/// <summary>
				/// 改变容器中最小的元素容纳数量
				/// </summary>
				/// <param name="count">最小的元素容纳数量</param>
				void reserve(_in ev_size_t count);
				/// <summary>
				/// 清空所有元素
				/// </summary>
				/// <param name=""></param>
				void clear();
			};

			/// <summary>
			/// 轨迹动画控制点参数集合
			/// </summary>
			class EV_DYNAMICMODELLIBRARY_DLL CGlobeControlPointSet : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				typedef vector<EarthView::World::Spatial3D::CGlobeControlPoint> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;

				RESERVE_CONTAINER_FUNCTION(mList);

				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">位置迭代器</param>
				/// <param name="t">元素值</param>
				/// <returns>插入元素后元素迭代器</returns>
				iterator insert(_in iterator pos, _in EarthView::World::Spatial3D::CGlobeControlPoint const &t);
			private:
				InternalList mList;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				CGlobeControlPointSet(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				CGlobeControlPointSet();
				/// <summary>
				/// 在容器最后添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				void push_back(_in EarthView::World::Spatial3D::CGlobeControlPoint const &t);
				/// <summary>
				/// 删除容器最后元素
				/// </summary>
				/// <param name=""></param>
				void pop_back();
				/// <summary>
				/// 返回容器首个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器首个元素</returns>
				EarthView::World::Spatial3D::CGlobeControlPoint &front();
				/// <summary>
				/// 返回容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器最后元素</returns>
				EarthView::World::Spatial3D::CGlobeControlPoint &back();
				/// <summary>
				/// 容器中间位置插入元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="t">元素值</param>
				void insert(_in ev_uint32 pos, _in EarthView::World::Spatial3D::CGlobeControlPoint const &t);
				/// <summary>
				/// 容器中间位置插入列表
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="other">列表</param>
				void insert(_in ev_uint32 pos, _in EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet other);
				/// <summary>
				/// 删除容器中间位置元素
				/// </summary>
				/// <param name="pos">位置</param>
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
				EarthView::World::Spatial3D::CGlobeControlPoint &operator[](_in ev_size_t n);
				/// <summary>
				/// 重载[]操作符
				/// </summary>
				/// <param name="n">下标位置</param>
				/// <returns>返回下标对应的值</returns>
				EarthView::World::Spatial3D::CGlobeControlPoint const &operator[](_in ev_size_t n) const;
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				EarthView::World::Spatial3D::CGlobeControlPoint &at(_in ev_size_t n);
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				EarthView::World::Spatial3D::CGlobeControlPoint const &at(_in ev_size_t n) const;
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
				void resize(_in ev_size_t newSize);
				/// <summary>
				/// 改变容器中最小的元素容纳数量
				/// </summary>
				/// <param name="count">最小的元素容纳数量</param>
				void reserve(_in ev_size_t count);
				/// <summary>
				/// 清空所有元素
				/// </summary>
				/// <param name=""></param>
				void clear();
			};

			/// <summary>
			/// 动态目标对象
			/// </summary>
			class EV_DYNAMICMODELLIBRARY_DLL CDynamicModelObject : public EarthView::World::Core::CAllocatedObject
			{
				/// <summary>
				/// 动态目标管理器
				/// </summary>
				friend class CDynamicModelObjectManager;
				/// <summary>
				/// 动态目标管理器场景监听
				/// </summary>
				friend class CDynamicModelManagerListener;
				friend class CDynamicModelManagerFrameListener;
				friend class CModelEvent;
			public:
				/// <summary>
				/// 轨迹动画监听对象
				/// </summary>
				class EV_DYNAMICMODELLIBRARY_DLL CDynamicAnimationListener:public EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener
				{
				public:
					/// <summary>
					/// 轨迹动画监听对象构造函数
					/// </summary>
					/// <param name="ref_manager">场景管理器</param>
					/// <param name="ref_modelObject">关联的动态目标对象,该参数对象的生命周期要保持大于本对象的生命周期</param>
					CDynamicAnimationListener(EarthView::World::Graphic::CSceneManager* ref_manager,EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ref_modelObject);
					/// <summary>
					/// 获取当前帧飞行控制点半径
					/// </summary>
					/// <param name="kf">当前飞行帧,该参数对象的生命周期要保持大于本对象的生命周期</param>
					/// <returns>当前帧飞行控制点半径</returns>
					virtual ev_real64 getRadius(_in EarthView::World::Graphic::CSphereTransformKeyFrame* kf);
					/// <summary>
					/// 计算当前帧飞行控制点偏航角
					/// </summary>
					/// <param name="latA">起始点纬度</param>
					/// <param name="lonA">起始点经度</param>
					/// <param name="latB">目标点纬度</param>
					/// <param name="lonB">目标点经度</param>
					/// <returns>当前帧飞行控制点偏航角</returns>
					virtual ev_real64 getHeading(_in ev_real64 latA ,_in ev_real64 lonA,_in ev_real64 latB,_in ev_real64 lonB);
					/// <summary>
					/// 计算欧拉角
					/// </summary>
					/// <param name="yawA">第一个yaw角</param>
					/// <param name="pitchA">第一个pitch角</param>
					/// <param name="bankA">第一个pitch角</param>
					/// <param name="yawB">第二个yaw角</param>
					/// <param name="pitchB">第二个pitch角</param>
					/// <param name="bankB">第二个pitch角</param>
					/// <param name="timeRatio">时间比例</param>
					/// <param name="yaw">返回的yaw角</param>
					/// <param name="pitch">返回的pitch角</param>
					/// <param name="bank">返回的pitch角</param>
					/// <returns></returns>
					virtual void getEuler(_in const EarthView::World::Spatial::Math::CDegree& yawA,_in const EarthView::World::Spatial::Math::CDegree& pitchA,_in const EarthView::World::Spatial::Math::CDegree& bankA,_in const EarthView::World::Spatial::Math::CDegree& yawB,_in const EarthView::World::Spatial::Math::CDegree& pitchB,_in const EarthView::World::Spatial::Math::CDegree& bankB,_in ev_real64 timeRatio,_inout EarthView::World::Spatial::Math::CDegree& yaw,_inout EarthView::World::Spatial::Math::CDegree& pitch,_inout EarthView::World::Spatial::Math::CDegree& bank);
					/// <summary>
					/// 设置高度模式
					/// </summary>
					/// <param name="altitudeMode">高度模式</param>
					virtual ev_void setAltitudeMode(EarthView::World::Spatial3D::CFLyParam::AltitudeMode altitudeMode);
					/// <summary>
					/// 获取高度模式
					/// </summary>
					/// <returns>高度模式</returns>
					virtual EarthView::World::Spatial3D::CFLyParam::AltitudeMode getAltitudeMode();
ev_private:
					CDynamicAnimationListener(_in EarthView::World::Core::CNameValuePairList* plist);

				private:
					EarthView::World::Spatial3D::CGeoSceneManager* mmanager;
					EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* mDynamicModelObject;
					EarthView::World::Spatial3D::CFLyParam::AltitudeMode maltitudeMode;
				};

				friend class CDynamicAnimationListener;
			public:
				/// <summary>
				/// 动态目标构造函数
				/// </summary>
				/// <param name="name">唯一标识名称</param>
				/// <param name="ref_manager">场景管理器</param>
				/// <param name="ref_camera">相机</param>
				/// <param name="scutcheonLineColor">标牌连接线颜色</param>
				/// <param name="scutcheonFrameColor">标牌边框颜色</param>
				/// <param name="scutcheonTextColor">标牌字体颜色</param>
				/// <param name="scutcheonLineLength">标牌延伸线长度</param>
				/// <param name="scutcheonLineMatName">标牌连接线材质名称</param>
				/// <param name="scutcheonFrameMatName">标牌边框材质名称</param>
				/// <param name="scutcheonOverlayMatName">标牌底图纹理材质名称</param>
				/// <param name="ref_modelObjectManager">父容器对象,该参数对象的生命周期要保持大于本对象的生命周期</param>
				CDynamicModelObject(_in const EVString& name, _in EarthView::World::Graphic::CSceneManager* ref_manager,
					_in EarthView::World::Spatial3D::CGlobeCamera* ref_camera,const EarthView::World::Graphic::CColourValue& scutcheonLineColor, 
					const EarthView::World::Graphic::CColourValue& scutcheonFrameColor, const EarthView::World::Graphic::CColourValue& scutcheonTextColor,
					const Real& scutcheonLineLength,const EVString& scutcheonLineMatName,
					const EVString& scutcheonFrameMatName, const EVString& scutcheonOverlayMatName,
					_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ref_modelObjectManager); 
				/// <summary>
				/// 动态目标析构函数
				/// </summary>
				virtual ~CDynamicModelObject(); 
				void setIsLoading(ev_bool loading);
				ev_bool isLoading();
				/// <summary>
				/// 添加资源监听
				/// </summary>
				/// <param name="ref_resourceListener">要添加的资源监听</param>
				virtual ev_bool addResourceListener(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener* ref_resourceListener);
				/// <summary>
				/// 删除资源监听
				/// </summary>
				/// <param name="name">要删除的资源监听名称</param>
				virtual ev_bool removeResourceListener(const EVString& name);
				/// <summary>
				/// 获取动目标唯一标识名称
				/// </summary>
				/// <returns>标唯一标识名称</returns>
				const EVString& getName() const;

				/// <summary>
				/// 创建轨迹动画对象
				/// </summary>
				/// <param name="name">名称</param>
				ev_void createGlobeNodeTrackAnimation(const EVString& name); 

				/// <summary>
				/// 设置是否获取动目标朝向
				/// </summary>
				/// <param name="value">是否获取动目标朝向</param>
				ev_void setEnabledToGetHeading(const ev_bool& isEnable);
				/// <summary>
				/// 获取是否获取动目标朝向
				/// </summary>
				/// <returns>是否获取动目标朝向</returns>
				ev_bool getEnabledToGetHeading() const;
				/// <summary>
				/// 设置轨迹动画飞行速度
				/// </summary>
				/// <param name="speed">飞行速度</param>
				ev_void setFlySpeed(const ev_real64& speed);
				/// <summary>
				/// 获取轨迹动画飞行速度
				/// </summary>
				/// <returns>轨迹动画飞行速度</returns>
				ev_real64 getFlySpeed()const;
				/// <summary>
				/// 设置轨迹动画是否进行插值
				/// </summary>
				/// <param name="interpolate">是否插值</param>
				ev_void setInterpolate(const ev_bool& interpolate);
				/// <summary>
				/// 获取轨迹动画是否进行插值
				/// </summary>
				/// <returns>轨迹动画是否进行插值</returns>
				ev_bool getInterpolate() const;
				/// <summary>
				/// 设置轨迹动画插值起始点位置（大于0.5，会产生两端交叉现象）
				/// </summary>
				/// <param name="pos">插值起始点</param>
				ev_void setInterpolateStartPos(const ev_real64& pos);
				/// <summary>
				/// 获取轨迹动画插值起始点位置
				/// </summary>
				/// <returns>插值起始点</returns>
				ev_real64 getInterpolateStartPos()const;
				/// <summary>
				/// 设置轨迹动画插值平滑系数（值越小越平滑)
				/// </summary>
				/// <param name="smoothFactor">插值平滑系数</param>
				ev_void setInterpolateSmoothFactor(const ev_real64& smoothFactor);
				/// <summary>
				/// 获取轨迹动画插值平滑系数（值越小越平滑)
				/// </summary>
				/// <returns>插值平滑系数</returns>
				ev_real64 getInterpolateSmoothFactor()const;
				/// <summary>
				/// 获取是否启用轨迹动画节点的LOD策略
				/// </summary>
				/// <returns>是否启用轨迹动画节点的LOD策略</returns>
				ev_bool getGlobeAnimationLodStrategyItemEnable()const;
				/// <summary>
				/// 设置是否启用轨迹动画节点的LOD策略
				/// </summary>
				/// <param name="enable">是否启用轨迹动画节点的LOD策略</param>
				ev_void setGlobeAnimationLodStrategyItemEnable(const ev_bool& enable);
				/// <summary>
				/// 获取是否启用LOD策略
				/// </summary>
				/// <returns>是否启用LOD策略</returns>
				ev_bool getModelLodStrategyItemEnable()const;
				/// <summary>
				/// 设置是否启用LOD策略
				/// </summary>
				/// <param name="enable">是否启用LOD策略</param>
				ev_void setModelLodStrategyItemEnable(const ev_bool& enable);
				/// <summary>
				/// 获取是否启用LOD策略
				/// </summary>
				/// <returns>是否启用LOD策略</returns>
				ev_bool getScutcheonLodStrategyItemEnable()const;
				/// <summary>
				/// 设置是否启用LOD策略
				/// </summary>
				/// <param name="enable">是否启用LOD策略</param>
				ev_void setScutcheonLodStrategyItemEnable(const ev_bool& enable);
				/// <summary>
				/// 获取是否启用LOD策略
				/// </summary>
				/// <returns>是否启用LOD策略</returns>
				ev_bool getRibbonTrailLodStrategyItemEnable()const;
				/// <summary>
				/// 设置是否启用LOD策略
				/// </summary>
				/// <param name="enable">是否启用LOD策略</param>
				ev_void setRibbonTrailLodStrategyItemEnable(const ev_bool& enable);
				/// <summary>
				/// 获取是否启用LOD策略
				/// </summary>
				/// <returns>是否启用LOD策略</returns>
				ev_bool getParticleLodStrategyItemEnable()const;
				/// <summary>
				/// 设置是否启用LOD策略
				/// </summary>
				/// <param name="enable">是否启用LOD策略</param>
				ev_void setParticleLodStrategyItemEnable(const ev_bool& enable);
				/// <summary>
				/// 获取是否启用LOD策略
				/// </summary>
				/// <returns>是否启用LOD策略</returns>
				ev_bool getTrackTrailLodStrategyItemEnable()const;
				/// <summary>
				/// 设置是否启用LOD策略
				/// </summary>
				/// <param name="enable">是否启用LOD策略</param>
				ev_void setTrackTrailLodStrategyItemEnable(const ev_bool& enable);
				/// <summary>
				/// 设置轨迹动画LOD子项目的最小以及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				ev_void setGlobeAnimationLodStrategyItemValue(const Real& minVisibleValue,const Real& maxVisibleValue);
				/// <summary>
				/// 获取指定名称的动态目标轨迹动画LOD的最小及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				ev_void getGlobeAnimationLodStrategyItemValue(_out Real& minVisibleValue,_out Real& maxVisibleValue);
				/// <summary>
				/// 获取指定名称的动态目标轨迹动画LOD的最小及最大可见距离的平方
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离平方</param>
				/// <param name="maxVisibleValue">最大可见距离平方</param>
				ev_void getGlobeAnimationLodStrategyItemSquareValue(_out Real& minVisibleValue,_out Real& maxVisibleValue);
				/// <summary>
				/// 设置模型LOD子项目的最小以及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				ev_void setModelLodStrategyItemValue(const Real& minVisibleValue,const Real& maxVisibleValue);
				/// <summary>
				/// 获取指定名称的动态目标模型LOD子项目的最小以及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				ev_void getModelLodStrategyItemValue(_out Real& minVisibleValue,_out Real& maxVisibleValue);
				/// <summary>
				/// 获取指定名称的动态目标模型LOD子项目的最小以及最大可见距离平方
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离平方</param>
				/// <param name="maxVisibleValue">最大可见距离平方</param>
				ev_void getModelLodStrategyItemSquareValue(_out Real& minVisibleValue,_out Real& maxVisibleValue);
				/// <summary>
				/// 设置特效LOD子项目的最小以及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				ev_void setParticleLodStrategyItemValue(const Real& minVisibleValue,const Real& maxVisibleValue);
				/// <summary>
				/// 获取指定名称的动态目标特效LOD子项目的最小以及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				ev_void getParticleLodStrategyItemValue(_out Real& minVisibleValue,_out Real& maxVisibleValue);
				/// <summary>
				/// 获取指定名称的动态目标特效LOD子项目的最小以及最大可见距离平方
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离平方</param>
				/// <param name="maxVisibleValue">最大可见距离平方</param>
				ev_void getParticleLodStrategyItemSquareValue(_out Real& minVisibleValue,_out Real& maxVisibleValue);
				/// <summary>
				/// 设置标牌LOD子项目的最小以及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				ev_void setScutcheonLodStrategyItemValue(const Real& minVisibleValue,const Real& maxVisibleValue);
				/// <summary>
				/// 获取标牌LOD子项目的最小以及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				ev_void getScutcheonLodStrategyItemValue(_out Real& minVisibleValue,_out Real& maxVisibleValue);
				/// <summary>
				/// 获取标牌LOD子项目的最小以及最大可见距离平方
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离平方</param>
				/// <param name="maxVisibleValue">最大可见距离平方</param>
				ev_void getScutcheonLodStrategyItemSquareValue(_out Real& minVisibleValue,_out Real& maxVisibleValue);
				/// <summary>
				/// 设置航迹LOD子项目的最小以及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				ev_void setTrackTrailLodStrategyItemValue(const Real& minVisibleValue,const Real& maxVisibleValue);
				/// <summary>
				/// 获取航迹LOD子项目的最小以及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				ev_void getTrackTrailLodStrategyItemValue(_out Real& minVisibleValue,_out Real& maxVisibleValue);
				/// <summary>
				/// 获取航迹LOD子项目的最小以及最大可见距离平方
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离平方</param>
				/// <param name="maxVisibleValue">最大可见距离平方</param>
				ev_void getTrackTrailLodStrategyItemSquareValue(_out Real& minVisibleValue,_out Real& maxVisibleValue);
				/// <summary>
				/// 设置飘带LOD子项目的最小以及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				ev_void setRibbonTrailLodStrategyItemValue(const Real& minVisibleValue,const Real& maxVisibleValue);
				/// <summary>
				/// 获取飘带LOD子项目的最小以及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				ev_void getRibbonTrailLodStrategyItemValue(_out Real& minVisibleValue,_out Real& maxVisibleValue);
				/// <summary>
				/// 获取飘带LOD子项目的最小以及最大可见距离平方
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离平方</param>
				/// <param name="maxVisibleValue">最大可见距离平方</param>
				ev_void getRibbonTrailLodStrategyItemSquareValue(_out Real& minVisibleValue,_out Real& maxVisibleValue);
				/// <summary>
				/// 创建相机动画对象
				/// </summary>
				/// <param name="name">名称</param>
				void createCameraNodeTrackAnimation(const EVString& name); 
				/// <summary>
				/// 启动相机动画
				/// </summary>
				void startCameraNodeTrack(); 

				/// <summary>
				/// 启动轨迹动画
				/// </summary>
				/// <param name=""></param>
				void startGlobeNodeTrack(); 
				/// <summary>
				/// 是否可以启动轨迹动画
				/// </summary>
				/// <returns>是否可以启动轨迹动画</returns>
				ev_bool canStartGlobeNodeTrack();
				/// <summary>
				/// 是否可以启动相机动画
				/// </summary>
				/// <returns>是否可以启动相机动画</returns>
				ev_bool canStartCameraNodeTrack();

				/// <summary>
				/// 添加轨迹动画关键控制点
				/// </summary>
				/// <param name="globeControlPoint">控制点</param>
				void addGlobeNodeTrackPoint(EarthView::World::Spatial3D::CGlobeControlPoint globeControlPoint); 

				/// <summary>
				/// 添加一组轨迹动画关键控制点
				/// </summary>
				/// <param name="points">一组控制点</param>
				void addGlobeNodeTrackPoints(EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet& points); 
				/// <summary>
				/// 添加一组特定关键帧时间的轨迹动画关键控制点
				/// </summary>
				/// <param name="points">一组控制点</param>
				void addGlobeNodeTrackPoints(EarthView::World::Spatial3D::CGlobeControlPointMap& points); 
				/// <summary>
				/// 清除所有轨迹动画关键控制点
				/// </summary>
				ev_void clearAllGlobeNodeTrackPoints();

				/// <summary>
				/// 刷新轨迹动画关键帧
				/// </summary>
				void refreshGlobeNodeTrackAnimation(); 

				/// <summary>
				/// 添加相机动画关键控制点
				/// </summary>
				/// <param name="cameraControlPoint">控制点参数</param>
				void addCameraNodeTrackPoint(EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam point); 

				/// <summary>
				/// 添加一组相机动画关键控制点
				/// </summary>
				/// <param name="points">一组控制点</param>
				void addCameraNodeTrackPoints(EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet& points); 

				/// <summary>
				/// 清除所有相机动画关键控制点
				/// </summary>
				ev_void clearAllCameraNodeTrackPoints();

				/// <summary>
				/// 刷新相机动画关键帧
				/// </summary>
				void refreshCameraNodeTrackAnimation(); 
				/// <summary>
				/// 设置模型对象缩放系数
				/// </summary>
				/// <param name="scale">模型对象缩放系数</param>
				void setModelScale(const EarthView::World::Spatial::Math::CVector3& scale); 
				/// <summary>
				/// 获取模型对象缩放系数
				/// </summary>
				/// <returns>模型对象缩放系数</returns>
				EarthView::World::Spatial::Math::CVector3 getModelScale()const;
				/// <summary>
				/// 设置模型对象局部坐标系偏移量
				/// </summary>
				/// <param name="offsetVector">局部坐标系偏移量</param>
				void setModelLocalOffsetVector(const EarthView::World::Spatial::Math::CVector3& offsetVector); 
				/// <summary>
				/// 获取模型局部坐标系偏移量
				/// </summary>
				/// <returns>局部坐标系偏移量</returns>
				EarthView::World::Spatial::Math::CVector3 getModelLocalOffsetVector()const;
				/// <summary>
				/// 设置模型旋转角度
				/// </summary>
				/// <param name="rotateDegree">绕XYZ轴旋转角度</param>
				void setModelRotateDegree(const EarthView::World::Spatial::Math::CVector3& rotateDegree);
				/// <summary>
				/// 获取模型旋转角度
				/// </summary>
				/// <returns>模型旋转角度</returns>
				EarthView::World::Spatial::Math::CVector3 getModelRotateDegree()const;
				
				/// <summary>
				/// 设置模型对象是否可见
				/// </summary>
				/// <param name="modelVisible">模型对象是否可见</param>
				void setModelVisible(bool modelVisible); 
				/// <summary>
				/// 获取模型对象是否可见
				/// </summary>
				/// <returns>true为可见，false为不可见</returns>
				bool getModelVisible() const;
				/// <summary>
				/// 设置标牌是否可见
				/// </summary>
				/// <param name="visible">标牌对象是否可见</param>				
				void setScutcheonVisible(bool visible); 
				/// <summary>
				/// 获取标牌是否可见
				/// </summary>
				/// <returns>标牌对象是否可见</returns>	
				bool getScutcheonVisible() const;
				/// <summary>
				/// 设置标牌连接线颜色
				/// </summary>
				/// <param name="textColor">标牌连接线颜色</param>
				ev_void setScutcheonLineColor(const EarthView::World::Graphic::CColourValue& lineColor);
				/// <summary>
				/// 获取标牌连接线颜色
				/// </summary>
				/// <returns>标牌连接线颜色</returns>	
				EarthView::World::Graphic::CColourValue getScutcheonLineColor();
				/// <summary>
				/// 设置标牌连接线长度
				/// </summary>
				/// <param name="lineLength">标牌连接线长度</param>
				ev_void setScutcheonLineLength(const Real& lineLength);
				/// <summary>
				/// 获取标牌连接线长度
				/// </summary>
				/// <returns>标牌连接线长度</returns>	
				Real getScutcheonLineLength();
				/// <summary>
				/// 设置标牌字体颜色
				/// </summary>
				/// <param name="textColor">标牌字体颜色</param>
				ev_void setScutcheonTextColor(const EarthView::World::Graphic::CColourValue& textColor);
				/// <summary>
				/// 获取标牌字体颜色
				/// </summary>
				/// <returns>标牌字体颜色</returns>	
				EarthView::World::Graphic::CColourValue getScutcheonTextColor();
				/// <summary>
				/// 设置标牌描述信息
				/// </summary>
				/// <param name="caption">标牌描述信息</param>
				ev_void setScutcheonCaption(const EVString& caption);
				/// <summary>
				/// 获取标牌描述信息
				/// </summary>
				/// <returns>标牌描述信息</returns>	
				EVString getScutcheonCaption();
				/// <summary>
				/// 获取标牌地理位置
				/// </summary>
				/// <returns>标牌地理位置</returns>	
				EarthView::World::Spatial::Math::CVector3 getScutcheonPosition();
				/// <summary>
				/// 设置标牌字体大小
				/// </summary>
				/// <param name="size">标牌字体大小</param>
				ev_void setScutcheonFontSize(ev_byte size);
				/// <summary>
				/// 设置标牌字体大小
				/// </summary>
				/// <returns>标牌字体大小</returns>	
				ev_byte getScutcheonFontSize();
				/// <summary>
				/// 设置标牌字体名称
				/// </summary>
				/// <param name="fontName">标牌字体名称</param>
				ev_void setScutcheonFontName(EVString fontName);
				/// <summary>
				/// 获取标牌字体名称
				/// </summary>
				/// <returns>标牌字体名称</returns>	
				EVString getScutcheonFontName();
				/// <summary>
				/// 获取标牌对象
				/// </summary>
				/// <returns>标牌对象</returns>	
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonText* getScutcheon() const;
				/// <summary>
				/// 锁定模型
				/// </summary>
				void lockModelObject(); 
				/// <summary>
				/// 解除锁定模型
				/// </summary>
				void unlockModelObject(); 
				/// <summary>
				/// 设置模型锁定距离
				/// </summary>
				/// <param name="distance">模型锁定距离</param>				
				ev_void setLockDistance(const ev_real64& distance);
				/// <summary>
				/// 获取模型锁定距离
				/// </summary>
				/// <returns>模型锁定距离</returns>					
				ev_real64 getLockDistance()const;
				/// <summary>
				/// 设置模型锁定俯仰角
				/// </summary>
				/// <param name="tilt">模型锁定俯仰角</param>			
				ev_void setLockTilt(const EarthView::World::Spatial::Math::CDegree& tilt);
				/// <summary>
				/// 获取模型锁定俯仰角
				/// </summary>
				/// <returns>模型锁定俯仰角</returns>			
				EarthView::World::Spatial::Math::CDegree getLockTilt()const;
				/// <summary>
				/// 设置是否锁定模型观察距离
				/// </summary>
				/// <param name="locked">是否锁定</param>		
				ev_void setIsLockDistance(const ev_bool& locked);
				/// <summary>
				/// 获取是否锁定模型观察距离
				/// </summary>
				/// <returns>是否锁定模型观察距离</returns>	
				ev_bool getIsLockDistance()const;
				/// <summary>
				/// 设置是否锁定模型俯仰角
				/// </summary>
				/// <param name="locked">是否锁定</param>		
				ev_void setIsLockTilt(const ev_bool& locked);
				/// <summary>
				/// 获取是否锁定模型俯仰角
				/// </summary>
				/// <returns>是否锁定</returns>			
				ev_bool getIsLockTilt()const;
				/// <summary>
				/// 设置是否锁定模型偏航角
				/// </summary>
				/// <param name="locked">是否锁定</param>		
				ev_void setIsLockHeading(const ev_bool& locked);
				/// <summary>
				/// 获取是否锁定模型偏航角
				/// </summary>
				/// <returns>是否锁定</returns>			
				ev_bool getIsLockHeading()const;
				/// <summary>
				/// 设置模型高亮
				/// </summary>
				/// <param name="color">高亮颜色</param>
				void setModelHighLightColor(const EarthView::World::Graphic::CColourValue& color);
				/// <summary>
				/// 获取模型高亮颜色
				/// </summary>
				/// <returns>高亮颜色</returns>	
				EarthView::World::Graphic::CColourValue getModelHighLightColor()const;
				/// <summary>
				/// 获取模型是否处于高亮状态
				/// </summary>
				/// <returns>是否高亮</returns>	
				ev_bool getModelIsHighLight()const;
				/// <summary>
				/// 设置模型是否处于高亮状态
				/// </summary>
				/// <param name="highLight">是否高亮</param>
				ev_void setModelIsHighLight(const ev_bool& highLight);
				/// <summary>
				/// 设置模型部件是否可见
				/// </summary>
				/// <param name="subEntityIndex">部件索引</param>
				/// <param name="visible">是否可见</param>
				void setSubEntityVisible(ev_int32 subEntityIndex, ev_bool visible);
				/// <summary>
				/// 获取模型部件是否可见
				/// </summary>
				/// <param name="subEntityIndex">部件索引</param>
				/// <returns>是否可见</returns>
				ev_bool getSubEntityVisible(ev_int32 subEntityIndex);
				/// <summary>
				/// 设置部件粒子特效是否可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <param name="submeshName">部件名称</param>
				/// <param name="particleAliasName">在部件上绑定特效的别名</param>
				void setSubEntityParticleVisible(bool visible, const EVString& subEntityName,const EVString& particleAliasName); 
				/// <summary>
				/// 设置部件粒子特效是否可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <param name="subEntityIndex">部件索引</param>
				/// <param name="particleAliasName">在部件上绑定特效的别名</param>
				void setSubEntityParticleVisible(bool visible, ev_int32 subEntityIndex,const EVString& particleAliasName); 
				/// <summary>
				/// 设置部件粒子特效是否可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <param name="subEntityIndex">部件索引</param>
				void setSubEntityAllParticleVisible(bool visible, ev_int32 subEntityIndex); 
				/// <summary>
				/// 设置部件粒子特效是否可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <param name="subEntityName">部件名称</param>
				void setSubEntityAllParticleVisible(bool visible, const EVString& subEntityName);
				/// <summary>
				/// 设置所有粒子是否可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				void setParticleVisible(bool visible);
				/// <summary>
				/// 获取所有粒子是否可见
				/// </summary>
				/// <returns>是否可见</returns>
				bool getParticleVisible()const;
				/// <summary>
				/// 获取部件粒子特效是否可见
				/// </summary>
				/// <param name="subEntityName">部件名称</param>
				/// <param name="particleAliasName">在部件上绑定特效的别名</param>
				/// <returns>是否可见</returns>
				bool getSubEntityParticleVisible(const EVString& subEntityName,const EVString& particleAliasName); 
				/// <summary>
				/// 获取部件粒子特效是否可见
				/// </summary>
				/// <param name="subEntityIndex">部件索引</param>
				/// <param name="particleAliasName">在部件上绑定特效的别名</param>
				/// <returns>是否可见</returns>
				bool getSubEntityParticleVisible(ev_int32 subEntityIndex,const EVString& particleAliasName); 
				/// <summary>
				/// 设置部件飘带是否可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <param name="submeshName">部件名称</param>
				/// <param name="ribbonAliasName">在部件上绑定飘带的别名</param>
				void setSubEntityRibbonTrailVisible(bool visible, const EVString& subEntityName,const EVString& ribbonAliasName); 
				/// <summary>
				/// 设置部件粒子特效是否可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <param name="subEntityIndex">部件索引</param>
				/// <param name="ribbonAliasName">在部件上绑定飘带的别名</param>
				void setSubEntityRibbonTrailVisible(bool visible, ev_int32 subEntityIndex,const EVString& ribbonAliasName); 
				/// <summary>
				/// 设置部件飘带是否可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <param name="submeshName">部件名称</param>
				void setSubEntityAllRibbonTrailVisible(bool visible, const EVString& subEntityName); 
				/// <summary>
				/// 设置部件粒子特效是否可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <param name="subEntityIndex">部件索引</param>
				void setSubEntityAllRibbonTrailVisible(bool visible, ev_int32 subEntityIndex);
				/// <summary>
				/// 获取部件粒子特效是否可见
				/// </summary>
				/// <param name="subEntityName">部件名称</param>
				/// <param name="ribbonAliasName">在部件上绑定飘带的别名</param>
				/// <returns>是否可见</returns>
				bool getSubEntityRibbonTrailVisible(const EVString& subEntityName,const EVString& ribbonAliasName); 
				/// <summary>
				/// 获取部件粒子特效是否可见
				/// </summary>
				/// <param name="subEntityIndex">部件索引</param>
				/// <param name="ribbonAliasName">在部件上绑定飘带的别名</param>
				/// <returns>是否可见</returns>
				bool getSubEntityRibbonTrailVisible(ev_int32 subEntityIndex,const EVString& ribbonAliasName); 
				/// <summary>
				/// 获取子部件上绑定的飘带对象集合
				/// </summary>
				/// <param name="subEntityIndex">部件索引</param>
				/// <returns>子部件上绑定的飘带对象集合</returns>
				EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap getSubEntityRibbonTrailObjectMap(ev_int32 subEntityIndex);
				/// <summary>
				/// 获取子部件上绑定的粒子特效对象集合
				/// </summary>
				/// <param name="subEntityIndex">部件索引</param>
				/// <returns>子部件上绑定的粒子特效对象集合</returns>
				EarthView::World::Spatial3D::ModelManager::EffectObjectMap getSubEntityParticleObjectMap(ev_int32 subEntityIndex);
				/// <summary>
				/// 获取子部件上绑定的飘带对象集合
				/// </summary>
				/// <param name="subEntityName">部件名称</param>
				/// <returns>子部件上绑定的飘带对象集合</returns>
				EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap getSubEntityRibbonTrailObjectMap(const EVString& subEntityName);
				/// <summary>
				/// 获取子部件上绑定的粒子特效对象集合
				/// </summary>
				/// <param name="subEntityName">部件名称</param>
				/// <returns>子部件上绑定的粒子特效对象集合</returns>
				EarthView::World::Spatial3D::ModelManager::EffectObjectMap getSubEntityParticleObjectMap(const EVString& subEntityName);
				/// <summary>
				/// 获取子部件数目
				/// </summary>
				/// <returns>子部件数目</returns>
				ev_int32 getSubEntityCount();
				/// <summary>
				/// 获取绑定特效的子部件索引
				/// </summary>
				/// <returns>绑定特效的子部件索引</returns>
				EarthView::World::Core::IntVector getBindedParticleSubEntityIndexVector();
				/// <summary>
				/// 获取绑定特效的子部件索引
				/// </summary>
				/// <returns>绑定特效的子部件索引</returns>
				EarthView::World::Core::IntVector getBindedRibbonTrailSubEntityIndexVector();
				/// <summary>
				/// 停止轨迹动画
				/// </summary>
				void stopGlobeNodeTrack(); 
				/// <summary>
				/// 暂停轨迹动画
				/// </summary>
				void pauseGlobeNodeTrack(); 
				/// <summary>
				/// 停止相机动画
				/// </summary>
				void stopCameraNodeTrack(); 
				/// <summary>
				/// 暂停相机动画
				/// </summary>
				void pauseCameraNodeTrack(); 
				/// <summary>
				/// 继续相机动画
				/// </summary>
				ev_void continueCameraNodeTrack();
				/// <summary>
				/// 继续轨迹动画
				/// </summary>
				ev_void continueGlobeNodeTrack();
				/// <summary>
				/// 设置轨迹动画当前帧的时间
				/// </summary>
				/// <param name="curKeyFrameTime">当前关键帧时间</param>
				ev_void setGlobeNodeTrackCurrentFrameTime(const ev_real64& curKeyFrameTime);
				/// <summary>
				/// 获取轨迹动画当前帧的时间
				/// </summary>
				/// <returns>当前关键帧时间</returns>
				ev_real64 getGlobeNodeTrackCurrentFrameTime();
				/// <summary>
				/// 设置相机动画当前帧的时间
				/// </summary>
				/// <param name="curKeyFrameTime">当前关键帧时间</param>
				ev_void setCameraNodeTrackCurrentFrameTime(const ev_real64& curKeyFrameTime);
				/// <summary>
				/// 获取相机动画当前帧的时间
				/// </summary>
				/// <returns>当前关键帧时间</returns>
				ev_real64 getCameraNodeTrackCurrentFrameTime();
				/// <summary>
				/// 获取相机动画的播放速度比率
				/// </summary>
				/// <returns>相机动画的播放速度比率</returns>
				ev_real64 getCameraNodeTrackTimeRatio();
				/// <summary>
				/// 设置相机动画的播放速度比率
				/// </summary>
				/// <param name="timeRatio">相机动画的播放速度比率</param>
				ev_void setCameraNodeTrackTimeRatio(const ev_real64& timeRatio);
				/// <summary>
				/// 获取轨迹动画的播放速度比率
				/// </summary>
				/// <returns>轨迹动画的播放速度比率</returns>
				ev_real64 getGlobeNodeTrackTimeRatio();
				/// <summary>
				/// 设置轨迹动画的播放速度比率
				/// </summary>
				/// <param name="timeRatio">轨迹动画的播放速度比率</param>
				ev_void setGlobeNodeTrackTimeRatio(const ev_real64& timeRatio);
				/// <summary>
				/// 设置轨迹动画是否循环播放
				/// </summary>
				/// <param name="loop">是否循环</param>
				ev_void setGlobeNodeTrackIsLoop(const ev_bool& loop);
				/// <summary>
				/// 获取轨迹动画是否循环播放
				/// </summary>
				/// <returns>是否循环</returns>
				ev_bool getGlobeNodeTrackIsLoop();
				/// <summary>
				/// 设置轨迹动画高度模式
				/// </summary>
				/// <param name="altitudeMode">高度模式</param>
				virtual ev_void setGlobeNodeTrackAltitudeMode(EarthView::World::Spatial3D::CFLyParam::AltitudeMode altitudeMode);
				/// <summary>
				/// 获取轨迹动画高度模式
				/// </summary>
				/// <returns>高度模式</returns>
				virtual EarthView::World::Spatial3D::CFLyParam::AltitudeMode getGlobeNodeTrackAltitudeMode();
				/// <summary>
				/// 设置相机动画是否循环播放
				/// </summary>
				/// <param name="loop">是否循环</param>
				ev_void setCameraNodeTrackIsLoop(const ev_bool& loop);
				/// <summary>
				/// 获取相机动画是否循环播放
				/// </summary>
				/// <returns>是否循环</returns>
				ev_bool getCameraNodeTrackIsLoop();
				/// <summary>
				/// 设置相机动画插值模式
				/// </summary>
				/// <param name="interpolationmode">插值模式</param>
				ev_void setCameraNodeTrackInterpolationMode(EarthView::World::Graphic::CAnimation::InterpolationMode interpolationmode); 
				/// <summary>
				/// 获取相机动画插值模式
				/// </summary>
				/// <param name=""></param>
				/// <returns>插值模式</returns>
				EarthView::World::Graphic::CAnimation::InterpolationMode getCameraNodeTrackInterpolationMode(); 
				/// <summary>
				/// 设置相机动画旋转插值模式
				/// </summary>
				/// <param name="rotationInterpolationMode">旋转插值模式</param>
				ev_void setCameraNodeTrackRotationInterpolationMode(EarthView::World::Graphic::CAnimation::RotationInterpolationMode rotationInterpolationMode); 
				/// <summary>
				/// 获取相机动画旋转插值模式
				/// </summary>
				/// <returns>旋转插值模式</returns>
				EarthView::World::Graphic::CAnimation::RotationInterpolationMode getCameraNodeTrackRotationInterpolationMode(); 
				/// <summary>
				/// 获取飘带是否可见
				/// </summary>
				/// <returns>是否可见</returns>
				ev_bool getRibbonTrailVisible(); 
				/// <summary>
				/// 设置飘带是否可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				ev_void setRibbonTrailVisible(const ev_bool& visible); 
				/// <summary>
				/// 计算模型位置是否改变
				/// </summary>
				/// <returns>模型位置是否改变</returns>
				ev_bool IsPositionChanged();
				/// <summary>
				/// 获取轨迹动画节点（该节点通过渲染系统内部设置其节点属性，外部设置无效）
				/// </summary>
				/// <returns>轨迹动画场景节点</returns>
				EarthView::World::Graphic::CSceneNode* getSceneNode() const;
				/// <summary>
				/// 获取模型世界坐标系下的包围盒
				/// </summary>
				/// <returns>模型包围盒</returns>
				EarthView::World::Spatial::Math::CAxisAlignedBox getModelAxisAlignedBox();
				/// <summary>
				/// 获取模型局部坐标系下的变换矩阵
				/// </summary>
				/// <returns>模型局部坐标系下变换矩阵</returns>
				EarthView::World::Spatial::Math::CMatrix4 getModelLocalMatrix();
				/// <summary>
				/// 获取模型最大外接圆半径
				/// </summary>
				/// <returns>模型最大外接圆半径</returns>
				ev_real64 getBoundingRadius();
				/// <summary>
				/// 获取相机动画局部观察中心
				/// </summary>
				/// <returns>相机动画局部观察中心</returns>
				EarthView::World::Spatial::Math::CVector3 getCameraNodeTrackLocalCenter()const;
				/// <summary>
				/// 设置相机动画局部观察中心
				/// </summary>
				/// <param name="localCenter">相机动画局部观察中心</param>
				ev_void setCameraNodeTrackLocalCenter(const EarthView::World::Spatial::Math::CVector3& localCenter);
				/// <summary>
				/// 设置是否具备海洋反射效果
				/// </summary>
				/// <param name="enable">是否具备海洋反射效果</param>
				ev_void setReflectable(const ev_bool& enable);
				/// <summary>
				/// 获取是否具备海洋反射效果
				/// </summary>
				/// <returns>是否具备海洋反射效果</returns>
				ev_bool getReflectable()const;
				/// <summary>
				/// 设置是否具备海洋折射效果
				/// </summary>
				/// <param name="enable">是否具备海洋折射效果</param>
				ev_void setRefractable(const ev_bool& enable);
				/// <summary>
				/// 获取是否具备海洋折射效果
				/// </summary>
				/// <param name="enable">是否具备海洋折射效果</param>
				/// <returns>是否具备海洋折射效果</returns>
				ev_bool getRefractable()const;
				/// <summary>
				/// 设置轨迹动画监听
				/// </summary>
				/// <param name="ref_listener">轨迹动画监听,该参数对象的生命周期要保持大于本对象的生命周期</param>
				ev_void setGlobeNodeTrackAnimationListener(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* ref_listener);
				/// <summary>
				/// 获取轨迹动画监听
				/// </summary>
				/// <returns>轨迹动画监听</returns>
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* getGlobeNodeTrackAnimationListener();
				/// <summary>
				/// 添加轨迹动画相关事件
				/// </summary>
				/// <param name="ref_dynamicObjectEvent">事件,该参数对象的生命周期要保持大于本对象的生命周期</param>
				ev_void addGlobeNodeTrackEvent(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ref_dynamicObjectEvent);
				/// <summary>
				/// 删除轨迹动画相关事件
				/// </summary>
				/// <param name="dynamicObjectEvent">事件</param>
				ev_void removeGlobeNodeTrackEvent(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* dynamicObjectEvent);
				/// <summary>
				/// 重置轨迹动画相关事件的状态
				/// </summary>
				ev_void resetGlobeNodeTrackEvents();

				/// <summary>
				/// 添加相机动画相关事件
				/// </summary>
				/// <param name="ref_dynamicObjectEvent">事件,该参数对象的生命周期要保持大于本对象的生命周期</param>
				ev_void addCameraNodeTrackEvent(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ref_dynamicObjectEvent);
				/// <summary>
				/// 删除轨迹动画相关事件
				/// </summary>
				/// <param name="dynamicObjectEvent">事件</param>
				ev_void removeCameraNodeTrackEvent(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* dynamicObjectEvent);
				/// <summary>
				/// 重置轨迹动画相关事件的状态
				/// </summary>
				ev_void resetCameraNodeTrackEvents();

				/// <summary>
				/// 获取模型基础对象
				/// </summary>
				/// <returns>模型基础对象</returns>
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject* getModelBaseObject() const;
				
				/// <summary>
				/// 绑定模型参数
				/// </summary>
				/// <param name="ref_dataSource">数据源</param>
				/// <param name="meshName">模型名称</param>
				/// <param name="modelType">模型显示类型</param>
				/// <returns>是否绑定成功</returns>
				ev_bool bindModelParam(EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource,const EVString& meshName,EarthView::World::Spatial3D::ModelType modelType);
				/// <summary>
				/// 绑定模型参数
				/// </summary>
				/// <param name="ref_dataSource">数据源</param>
				/// <param name="meshIndex">模型索引</param>
				/// <param name="modelType">模型显示类型</param>
				/// <returns>是否绑定成功</returns>
				ev_bool bindModelParam(EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource,const ev_int32& meshIndex,EarthView::World::Spatial3D::ModelType modelType);
				/// <summary>
				/// 绑定模型
				/// </summary>
				/// <param name="ref_modelBaseObject">模型对象</param>
				/// <returns>是否绑定成功</returns>
				ev_bool bindModelBaseObject(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_modelBaseObject);
				/// <summary>
				/// 解除绑定模型
				/// </summary>
				/// <returns>是否解除绑定成功</returns>
				ev_bool unBindModel();
				/// <summary>
				/// 设置是否需要刷新动态目标的状态
				/// </summary>
				/// <param name="needUpdate">是否需要刷新动态目标的状态</param>
				ev_void setNeedUpdate(const ev_bool& needUpdate);
				/// <summary>
				/// 获取是否需要刷新动态目标的状态
				/// </summary>
				/// <returns>是否需要刷新动态目标的状态</returns>
				ev_bool getNeedUpdate() const;
				/// <summary>
				/// 获取航迹是否可见
				/// </summary>
				/// <returns>是否可见</returns>
				ev_bool getTrackTrailVisible();
				/// <summary>
				/// 设置航迹是否可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				ev_void setTrackTrailVisible(const ev_bool& visible);
				/// <summary>
				/// 设置航迹点显示数目
				/// </summary>
				/// <param name="number">航迹点显示数目</param>
				ev_void setTrackTrailDisplayPointNum(const ev_int32& number);
				/// <summary>
				/// 获取航迹点显示数目
				/// </summary>
				/// <returns>航迹点显示数目</returns>
				ev_int32 getTrackTrailDisplayPointNum();
				/// <summary>
				/// 设置航迹显示模式
				/// </summary>
				/// <param name="displayMode">显示模式</param>
				ev_void setTrackTrailDisplayMode(EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode displayMode);
				/// <summary>
				/// 获取航迹显示模式
				/// </summary>
				/// <returns>航迹显示模式</returns>
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode getTrackTrailDisplayMode()const;
				/// <summary>
				/// 设置航迹显示风格
				/// </summary>
				/// <param name="lineSymbol">显示风格</param>
				ev_void setTrackTrailSymbol(EarthView::World::Spatial::Display::ISymbol* lineSymbol);
				/// <summary>
				/// 获取航迹显示风格
				/// </summary>
				/// <returns>航迹显示风格</returns>
				EarthView::World::Spatial::Display::ISymbol* getTrackTrailSymbol()const;
				/// <summary>
				/// 设置航迹是否显示为视高线
				/// </summary>
				/// <param name="isHighLine">是否显示为视高线</param>
				ev_void setIsTrackTrailHighLine(const ev_bool& isHighLine);
				/// <summary>
				/// 获取航迹是否显示为视高线
				/// </summary>
				/// <returns>是否显示为视高线</returns>
				ev_bool getIsTrackTrailHighLine();
				/// <summary>
				/// 设置视高线显示颜色
				/// </summary>
				/// <param name="staticHighLineColor">静态部分的颜色</param>
				/// <param name="dynamicHighLineColor">动态部分的颜色</param>
				ev_void setHighLineColorInfo(EarthView::World::Spatial::Display::CRgbColor* staticHighLineColor,EarthView::World::Spatial::Display::CRgbColor* dynamicHighLineColor);
				/// <summary>
				/// 设置视高线间距
				/// </summary>
				/// <param name="highLineDistance">间距</param>
				ev_void setHighLineDistance(const ev_real64& highLineDistance);
				/// <summary>
				/// 获取视高线间距
				/// </summary>
				/// <returns>视高线间距</returns>
				Real getHighLineDistance();
				/// <summary>
				/// 设置航迹参考坐标系
				/// </summary>
				/// <param name="ref_sr">参考坐标系,该参数对象的生命周期要保持大于本对象的生命周期</param>
				ev_void setTrackTrailSpatialReference(EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				/// <summary>
				/// 获取航迹参考坐标系
				/// </summary>
				/// <returns>参考坐标系</returns>
				EarthView::World::Spatial::Geometry::ISpatialReference const* getTrackTrailSpatialReference();
				/// <summary>
				/// 删除所有航迹点
				/// </summary>
				virtual ev_void removeAllTrackTrailPoint();
				/// <summary>
				/// 增加航迹点
				/// </summary>
				/// <param name="point">要添加的航迹点</param>
				virtual ev_void addTrackTrailPoint(const EarthView::World::Spatial::Geometry::CCoordinate& point);
				/// <summary>
				/// 获取轨迹动画节点当前的显示比例
				/// </summary>
				/// <returns>显示比例</returns>
				virtual EarthView::World::Spatial::Math::CVector3 getCurrentNodeScale()const;
				/// <summary>
				/// 获取轨迹动画节点当前的位置
				/// </summary>
				/// <returns>显示位置</returns>
				virtual EarthView::World::Spatial::Math::CVector3 getCurrentNodePosition()const;
				/// <summary>
				/// 获取轨迹动画节点当前的四元数
				/// </summary>
				/// <returns>动画节点四元数</returns>
				virtual EarthView::World::Spatial::Math::CQuaternion getCurrentNodeQuaternion()const;
				/// <summary>
				/// 设置轨迹动画是否处于休眠状态
				/// </summary>
				/// <param name="enable">轨迹动画是否处于休眠状态</param>
				/// <returns></returns>
				virtual ev_void setGlobeAnimationsetEnabled(const ev_bool& enable);
				/// <summary>
				/// 获取轨迹动画是否处于休眠状态
				/// </summary>
				/// <returns>轨迹动画是否处于休眠状态</returns>
				virtual ev_bool getGlobeAnimationsetEnabled()const;
				/// <summary>
				/// 设置轨迹动画的自动唤醒频率
				/// </summary>
				/// <param name="frequency">唤醒频率</param>
				/// <returns></returns>
				virtual ev_void setGlobeAnimationsetArouseFrequency(const ev_real64& frequency);
				/// <summary>
				/// 获取轨迹动画的自动唤醒频率
				/// </summary>
				/// <returns>唤醒频率</returns>
				virtual ev_real64 getGlobeAnimationsetArouseFrequency()const;
				/// <summary>
				/// 强制唤醒轨迹动画
				/// </summary>
				/// <returns></returns>
				virtual ev_void forceArouseGlobeAnimation();
				/// <summary>
				/// 设置是否启用模型
				/// </summary>
				/// <param name="enable">是否启用</param>
				virtual ev_void setModelEnable(const ev_bool& enable);
				/// <summary>
				/// 获取是否启用模型
				/// </summary>
				/// <returns>是否启用</returns>
				virtual ev_bool getModelEnable()const;
				/// <summary>
				/// 设置是否启用粒子
				/// </summary>
				/// <param name="enable">是否启用</param>
				virtual ev_void setParticleEnable(const ev_bool& enable);
				/// <summary>
				/// 获取是否启用粒子
				/// </summary>
				/// <returns>是否启用</returns>
				virtual ev_bool getParticleEnable()const;
				/// <summary>
				/// 设置是否启用飘带
				/// </summary>
				/// <param name="enable">是否启用</param>
				virtual ev_void setRibbonTrailEnable(const ev_bool& enable);
				/// <summary>
				/// 获取是否启用飘带
				/// </summary>
				/// <returns>是否启用</returns>
				virtual ev_bool getRibbonTrailEnable()const;
				/// <summary>
				/// 设置是否启用标牌
				/// </summary>
				/// <param name="enable">是否启用</param>
				virtual ev_void setScutcheonEnable(const ev_bool& enable);
				/// <summary>
				/// 获取是否启用标牌
				/// </summary>
				/// <returns>是否启用</returns>
				virtual ev_bool getScutcheonEnable()const;
				/// <summary>
				/// 设置是否启用航迹
				/// </summary>
				/// <param name="enable">是否启用</param>
				virtual ev_void setTrackTrailEnable(const ev_bool& enable);
				/// <summary>
				/// 获取是否启用航迹
				/// </summary>
				/// <returns>是否启用</returns>
				virtual ev_bool getTrackTrailEnable()const;
				/// <summary>
				/// 获取是否启用像素显示模式
				/// </summary>
				/// <returns>是否启用</returns>
				virtual ev_bool getPixelModeEnable()const;
				/// <summary>
				/// 设置是否启用像素显示模式
				/// </summary>
				/// <param name="enable">是否启用像素显示模式</param>
				virtual ev_void setPixelModeEnable(const ev_bool& enable);
				/// <summary>
				/// 获取像素模式显示比例系数
				/// </summary>
				/// <returns>像素模式显示比例系数</returns>
				virtual Real getPixelModeScaleRatio()const;
				/// <summary>
				/// 设置像素模式显示比例系数
				/// </summary>
				/// <param name="enable">像素模式显示比例系数</param>
				virtual ev_void setPixelModeScaleRatio(const Real& scaleRatio);
				/// <summary>
				/// 设置相机动画是否开启在线模式
				/// </summary>
				/// <param name="enable">是否开启在线模式</param>
				virtual ev_void setCameraNodeTrackOnLineMode(const ev_bool& enable);
				/// <summary>
				/// 获取相机动画是否开启在线模式
				/// </summary>
				/// <returns>是否开启在线模式</returns>
				virtual ev_bool getCameraNodeTrackOnLineMode()const;
ev_private:
				/// <summary>
				/// 动态目标对象构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CDynamicModelObject(_in EarthView::World::Core::CNameValuePairList* pList);

			protected:
				/// <summary>
				/// 生成矩阵
				/// </summary>
				/// <param name="position">平移量</param>
				/// <param name="scale">缩放</param>
				/// <param name="orientation">旋转</param>
				/// <param name="tsrMatrix">生成矩阵</param>
				/// <returns></returns>
				void makeTransform(_in const EarthView::World::Spatial::Math::CVector3 &position, _in const EarthView::World::Spatial::Math::CVector3 &scale, _in const EarthView::World::Spatial::Math::CQuaternion &orientation,_out EarthView::World::Spatial::Math::CMatrix4 &tsrMatrix);
				void makeDynamicObjectTransform(_in const EarthView::World::Spatial::Math::CVector3 &oriPosition, 
					_in const EarthView::World::Spatial::Math::CVector3 &oriScale, 
					_in const EarthView::World::Spatial::Math::CQuaternion &oriOrientation,
					_in const EarthView::World::Spatial::Math::CVector3 &position, 
					_in const EarthView::World::Spatial::Math::CVector3 &scale,
					_in const EarthView::World::Spatial::Math::CQuaternion &orientation,
					_out EarthView::World::Spatial::Math::CMatrix4 &oriMatrix,
					_out EarthView::World::Spatial::Math::CMatrix4 &userMatrix,
					_out EarthView::World::Spatial::Math::CMatrix4 &tsrMatrix);
				ev_real64 computeDistanceToControlPoint(EarthView::World::Spatial3D::CGlobeControlPointMap& flodLine,EarthView::World::Spatial::Math::CVector3 point);
				ev_void computeInterpolatePoints(EarthView::World::Spatial3D::CGlobeControlPointMap& srcMap,_out EarthView::World::Spatial3D::CGlobeControlPointMap& destMap);
				ev_void computeHeight(const EarthView::World::Spatial::Math::CVector3& pointA,const EarthView::World::Spatial::Math::CVector3& pointB,const vector<EarthView::World::Spatial::Math::CVector3>& points ,_out vector<ev_real64>& ratio);
				/// <summary>
				/// 查找轨迹动画的末尾点
				/// </summary>
				/// <param name="lastPoint">轨迹末尾点</param>
				/// <param name="length">轨迹动画的长度</param>
				/// <returns>是否查找到</returns>
				ev_bool _findLastGlobeNodeTrackControlPoint(_out EarthView::World::Spatial3D::CGlobeControlPoint& lastPoint,_out ev_real64& length);
				/// <summary>
				/// 查找轨迹动画的末尾两点
				/// </summary>
				/// <param name="lastPoint">轨迹末尾点</param>
				/// <param name="lastPointTime">轨迹末尾点帧时间</param>
				/// <param name="lastSecondPoint">轨迹控制点倒序第二点</param>
				/// <param name="lastSecondPointTime">轨迹控制点倒序第二点帧时间</param>
				/// <returns>是否查找到</returns>
				ev_bool _findLastTwoGlobeNodeTrackControlPoint(_out EarthView::World::Spatial3D::CGlobeControlPoint& lastPoint,_out ev_real64& lastPointTime,_out EarthView::World::Spatial3D::CGlobeControlPoint& lastSecondPoint,_out ev_real64& lastSecondPointTime);
				/// <summary>
				/// 查找指定索引处的角速度
				/// </summary>
				/// <param name="index">索引</param>
				/// <param name="midIndice">轨迹转弯处顶点索引列表</param>
				/// <param name="speedMap">每段直线轨迹的角速度列表</param>
				/// <returns>角速度</returns>
				ev_real64 _findAngleSpeed(const ev_int32& index,const EarthView::World::Core::IntVector& midIndice,EarthView::World::Spatial3D::CAngleDistanceMap& speedMap);
				/// <summary>
				/// 计算插值点，并将转弯处的顶点索引返回，用于计算速度
				/// </summary>
				/// <param name="srcMap">原始轨迹点</param>
				/// <param name="curveIndices">转弯处的顶点索引</param>
				/// <param name="desMap">插值后的轨迹点</param>
				/// <returns>插值后的顶点</returns>
				ev_void computeInterpolatePoints(EarthView::World::Spatial3D::CGlobeControlPointMap& srcMap,_out EarthView::World::Core::IntVector& curveIndices,_out EarthView::World::Spatial3D::CGlobeControlPointMap& desMap);

				ev_void appandNeedRefreshGlobeControlMap(EarthView::World::Spatial3D::CGlobeControlPointMap& destinationMap, EarthView::World::Spatial3D::CGlobeControlPointMap& map,ev_real64 lastAnimationLength,ev_bool isAppendedLastAnimationPoint);
				ev_void appandNeedRefreshGlobeControlMap(EarthView::World::Spatial3D::CGlobeControlPointMap& destinationMap,EarthView::World::Spatial3D::CGlobeControlPointMap& map,ev_real64 lastAnimationLength);
				ev_void _notifyGlobeTrackPointsChange(EarthView::World::Spatial3D::CGlobeControlPointMap& refreshPointMap);
				ev_void computeAngleDistance(EarthView::World::Spatial3D::CGlobeControlPointMap& map,_out EarthView::World::Spatial3D::CAngleDistanceMap& angleDistanceMap);
				bool getCameraNodeTrackEnable() const; 
				ev_void setCameraNodeTrackEnable(const ev_bool& enable);
				/// <summary>
				/// 设置相机参数
				/// </summary>
				/// <param name="ref_camera">相机对象,该参数对象的生命周期要保持大于本对象的生命周期</param>
				virtual void setCameraParams(EarthView::World::Graphic::CCamera* ref_camera);
				inline ev_bool getIsLockedGlobeNodeTrack()const
				{
					return mIsLockedGlobeNodeTrack;
				}
				inline ev_void  setIsLockedGlobeNodeTrack(const ev_bool& locked)
				{
					mIsLockedGlobeNodeTrack=locked;
				}
				/// <summary>
				/// 更新节点的挂接与反挂接状态
				/// </summary>
				ev_void updateNodeState(EarthView::World::Graphic::CSceneNode* ref_parentNode);
				/// <summary>
				/// 更新模型资源状态
				/// </summary>
				ev_void updateModelResourceState();
				ev_void attachModelNode(EarthView::World::Spatial3D::ModelManager::CModelBaseObject*  modelBaseObject,EarthView::World::Graphic::CSceneNode* parentNode);
				ev_void detachModelNode(EarthView::World::Spatial3D::ModelManager::CModelBaseObject*  modelBaseObject);
				ev_void attachParticleNode(EarthView::World::Graphic::CSceneManager*  geosceneManager,EarthView::World::Spatial3D::ModelManager::CModelBaseObject*  modelBaseObject,EarthView::World::Graphic::CSceneNode*  parentNode);
				ev_void detachParticleNode(EarthView::World::Graphic::CSceneManager*  geosceneManager,EarthView::World::Spatial3D::ModelManager::CModelBaseObject*  modelBaseObject);
				ev_void attachRibbonTrailNode(EarthView::World::Graphic::CSceneManager*  geosceneManager,EarthView::World::Spatial3D::ModelManager::CModelBaseObject*  modelBaseObject, EarthView::World::Graphic::CSceneNode*  parentNode);
				ev_void detachRibbonTrailNode(EarthView::World::Graphic::CSceneManager*  geosceneManager,EarthView::World::Spatial3D::ModelManager::CModelBaseObject*  modelBaseObject);
				ev_void detachAllChildrenMovableObject(EarthView::World::Graphic::CNode* sceneNode);

				ev_bool attachSubEffectToMainObject(EarthView::World::Graphic::CSceneNode*  parentNode,const EarthView::World::Spatial3D::ModelManager::EffectObject& obj,const EarthView::World::Spatial3D::InstancedEntityVector& instancedEntityVector);


				ev_void updateGlobeAnimationNode(EarthView::World::Graphic::CSceneNode* parentNode);
				ev_void updateCameraAnimationNode();
				ev_void updateScutcheonNode();
				ev_void updateModelNode();
				ev_void updateModelEventState();

				ev_void createTrackTrail();
				ev_void createScutcheon();

				EarthView::World::Spatial3D::ModelManager::CModelBaseObject* initializeSubModelbaseObject(); 
				ev_void destroyModelObject(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* modelBaseObject);

				private:
					ev_void _setGlobeNodeTrackOnLineModeEnable(const ev_bool& enable);
					ev_bool _getGlobeNodeTrackOnLineModeEnable()const;

					ev_void _fireBeforeResourceListener();
					ev_void _fireAfterResourceListener();

					ev_void _fireAttachStateHasChanged(ev_bool attached);

					ev_void inilizeModelState(const EarthView::World::Spatial::Math::CVector3& originalPos,const EarthView::World::Spatial::Math::CVector3& originalScale,const EarthView::World::Spatial::Math::CQuaternion& originalQuater);
					/// <summary>
					/// 设置父对象以及要显示的子部件索引
					/// </summary>
					/// <param name="ref_modelObject">数据源</param>
					/// <param name="subEntityIndex">模型索引</param>
					/// <returns>是否设置成功</returns>
					ev_bool setParentDynamicModelObject(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ref_modelObject,EarthView::World::Core::IntVector subEntityIndex);
					/// <summary>
					/// 获取父对象
					/// </summary>
					/// <returns>父对象</returns>
					EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* getParentDynamicModelObject()const;

			protected:

				std::map<EVString,EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*> mResourceListeners;
				EarthView::World::Core::CReadWriteLock mResourceListenerLocker;

				ev_bool mNeedUpdate;

				ev_bool mGlobeAnimationLodEnable;
				ev_bool mOriginalGlobeAnimationEnable;
				ev_bool mModelLodEnable;
				ev_bool mOriginalModelEnable;
				ev_bool mScutcheonLodEnable;
				ev_bool mOriginalScutcheonEnbale;
				ev_bool mRibbonTrailLodEnable;
				ev_bool mOriginalRibbonTrailEnable;
				ev_bool mTrackTrailLodEnable;
				ev_bool mOriginalTrackTrailEnable;
				ev_bool mParticleLodEnable;
				ev_bool mOriginalParticleEnable;
				////// LOD值变量/////////////
				Real mMinModelVisibleValue;
				Real mMaxModelVisibleValue;
				Real mMinScutcheonVisibleValue;
				Real mMaxScutcheonVisibleValue;
				Real mMinTrackTrailVisibleValue;
				Real mMaxTrackTrailVisibleValue;
				Real mMinParticleVisibleValue;
				Real mMaxParticleVisibleValue;
				Real mMinRibbonTrailVisibleValue;
				Real mMaxRibbonTrailVisibleValue;
				Real mMinGlobeAnimationVisibleValue;
				Real mMaxGlobeAnimationVisibleValue;
				
				ev_bool mReflectable;
				ev_bool mRefractable;

				EVString mName;
				EarthView::World::Graphic::CAnimation::InterpolationMode mCameraInterpolationMode;
				EarthView::World::Graphic::CAnimation::RotationInterpolationMode mCameraRotationInterpolationMode;
				ev_real64 mDefaultTimeSpan;
				EarthView::World::Spatial::Math::CVector3 mCameraNodeTrackLocalCenter;

				EarthView::World::Spatial::Display::ISymbol* mpLineSymbol;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode mTrackTrailDisMode;

				ev_real64 mCurrentCameraPointTime;
				EarthView::World::Graphic::CSceneNode* mpDynamicObjectNode;

				EarthView::World::Spatial::Math::CVector3 mLastModelPosition;

				EarthView::World::Spatial::Math::CVector3 mCurrentModelPosition;
				EarthView::World::Spatial::Math::CQuaternion mCurrentModelQuaternion;
				EarthView::World::Spatial::Math::CVector3 mCurrentModelScale;

				EarthView::World::Spatial::Math::CVector3 mNextModelPosition;
				EarthView::World::Spatial::Math::CQuaternion mNextModelQuaternion;

				Real mCurrentTerrainAlt;

				ev_bool mIsLockedGlobeNodeTrack;
				ev_bool mCameraNodeTrackEnable;
				ev_bool mHasLockedGlobeNodeTrack;

				ev_real64 mLockDistance;
				EarthView::World::Spatial::Math::CDegree mLockTilt;

				ev_bool mIsLockedDistance;
				ev_bool mIsLockedTilt;
				ev_bool mIsLockedHeading;

				ev_real64 mGlobeNodeTrackTimeRatio;
				ev_real64 mCameraNodeTrackTimeRatio;

				ev_bool mGlobeNodeTrackIsLoop;
				ev_bool mCameraNodeTrackIsLoop;

				/// <summary>
				/// 原始模型对象
				/// </summary>
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject* mpModelBaseObject;
				/// <summary>
				/// 相机动画
				/// </summary>
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation* mpNodeTrackAnimation;
				/// <summary>
				/// 轨迹动画
				/// </summary>
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* mpGlobeNodeTrackAnimation;

				/// <summary>
				/// 场景管理器
				/// </summary>
				EarthView::World::Graphic::CSceneManager* mpSceneManager;

				/// <summary>
				/// 相机
				/// </summary>
				EarthView::World::Spatial3D::CGlobeCamera* mpCamera;

				/// <summary>
				/// 标牌对象
				/// </summary>
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonText * mpScutcheon;

				EVString mScutcheonFontName;
				ev_byte mScutcheonFontSize;
				EVString mScutcheonCaption;
				Real mScutcheonLineLength;
				EVString mScutcheonOverlayMatName;
				EVString mScutcheonLineMatName;
				EVString mScutcheonFrameMatName;
				EarthView::World::Graphic::CColourValue mScutcheonTextColor;
				EarthView::World::Graphic::CColourValue mScutcheonLineColor;
				EarthView::World::Graphic::CColourValue mScutcheonFrameColor;
				EarthView::World::Spatial::Math::CVector3 mScutcheonPositon;
				
				EarthView::World::Graphic::CColourValue mModelHighLightColor;
				ev_bool mModelIsHighLight;
				EarthView::World::Spatial3D::CGlobeControlPointMap mLastGlobeControlPointsMap;
				/// <summary>
				/// 相机动画控制点容器
				/// </summary>
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet mNeedRefreshCameraControlPoints;
				EarthView::World::Core::CReadWriteLock mRefreshCameraControlPointsLocker;
				/// <summary>
				/// 模型缩放系数
				/// </summary>
				EarthView::World::Spatial::Math::CVector3 mModelScale;
				/// <summary>
				/// 模型旋转系数
				/// </summary>
				EarthView::World::Spatial::Math::CVector3 mModelRotateDegree;
				/// <summary>
				/// 模型相对于建模中心的偏移量
				/// </summary>
				EarthView::World::Spatial::Math::CVector3 mModelLocalOffSetVector;

				EarthView::World::Spatial::Math::CQuaternion mModelLocalQuaternion;
				/// <summary>
				/// 轨迹对象
				/// </summary>
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* mpTrackTrail;
				/// <summary>
				/// 轨迹动画是否进行插值
				/// </summary>
				ev_bool mIsInterpolate;
				/// <summary>
				/// 直线开始插值的位置，取值在0-0.5之间，超过0.5两直线之间会有交叉
				/// </summary>
				ev_real64 mInterpolatePos;
				/// <summary>
				/// 圆润参数，在0-1之间，值越小越圆滑
				/// </summary>
				ev_real64 mInterpolateT;
				/// <summary>
				/// 飞行速度
				/// </summary>
				ev_real64 mSpeed;
				/// <summary>
				/// 事件管理器
				/// </summary>
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager* mGlobeNodeTrackEventManager;
				/// <summary>
				/// 相机动画事件管理器
				/// </summary>
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager* mCameraNodeTrackEventManager;
				/// <summary>
				/// 动目标父管理对象
				/// </summary>
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* mParentManager;

				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener* mpDynamicAnimationListener;

				ev_bool mModelParamNeedUpdate;
				ev_bool mModelNeedUpdate;

				EarthView::World::Spatial::GeoDataset::IDataSource* mpModelDataSource;
				EVString mModelMeshName;
				ev_int32 mModelIndex;
				EarthView::World::Spatial3D::ModelType mModelType;

				ev_bool mRibbonTrailVisible;
				ev_bool mParticleVisible;
				ev_bool mModelVisible;
				ev_bool mScutcheonVisible;
				ev_bool mTrackTrailVisible;

				ev_bool mRibbonTrailEnable;
				ev_bool mParticleEnable;
				ev_bool mModelEnable;
				ev_bool mScutcheonEnable;
				ev_bool mTrackTrailEnable;
				ev_bool mIsLoading;

				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* mParentDynamicObject;
				EarthView::World::Core::IntVector mSubEntityIndex;

				ev_bool mSynchronousAttachChildNode;
					
			private:
				ev_void _setModelVisible(const ev_bool& visible);
				ev_void _setScutcheonVisible(const ev_bool& visible);
				ev_void _setParticleVisible(const ev_bool& visible);
				ev_void _setTrackTrailVisible(const ev_bool& visible);
				ev_void _setRibbonTrailVisible(const ev_bool& visible);

				ev_bool mGlobeAnimationsetEnabled;
				ev_real64  mGlobeAnimationsetArouseFrequency;
				ev_bool mIsAttachedGlobeAnimation;
				ev_bool mIsAttachedModelNode;
				ev_bool mIsAttachedParticleNode;
				ev_bool mIsAttachedRibbonTrailNode;

				EarthView::World::Graphic::CNode* mpGlobeAnimationParentNode;
				EarthView::World::Graphic::CNode* mpLocalParticleNode;/////局部粒子特效节点
				EarthView::World::Graphic::CNode* mpLocalRibbonTrailNode;///////局部飘带节点
				ev_bool mGlobeNodeTrackOnLineModeEnable;
				ev_bool mCameraNodeTrackOnLineModeEnable;
				ev_bool mIsImmediateRefresh;

				ev_bool mPixelModeEnable;
				Real mPixelModeScaleRatio;

				/// <summary>
				/// 模型原始缩放系数
				/// </summary>
				EarthView::World::Spatial::Math::CVector3 mOriginalModelScale;
				/// <summary>
				/// 模型原始旋转四元数
				/// </summary>
				EarthView::World::Spatial::Math::CQuaternion mOriginalModelQuaternion;
				/// <summary>
				/// 模型原始相对于建模中心的偏移量
				/// </summary>
				EarthView::World::Spatial::Math::CVector3 mOriginalModelLocalOffSetVector;

				EarthView::World::Spatial::Math::CMatrix4 mLocalMatrix;

				EarthView::World::Spatial::Math::CMatrix4 mOrinalMatrix;
				EarthView::World::Spatial::Math::CMatrix4 mUserMatrix;

				ev_bool mRequestStartGlobeNodeTrack;
				ev_uint32 mRequestStartGlobeNodeTrackTime;
				ev_bool mRequestStartCameraNodeTrack;

				ev_bool mIsInitializeSubEntity;

				EarthView::IndustryEngine::DynamicModelLibrary::CModelEvent* mpActiveModelEvent;
				EarthView::IndustryEngine::DynamicModelLibrary::CModelEvent* mpTempModelEvent;

				EarthView::World::Core::CReadWriteLock mModelEventLocker;
				EarthView::World::Core::CReadWriteLock mModelResourceLocker;
				EarthView::World::Core::CReadWriteLock mSubEntityResourceLocker;

				EarthView::World::Spatial::Math::CAxisAlignedBox mInstanceWorldBox;

				static ev_int32 UniqueID;

				static EarthView::World::Core::CMutex mUniqueMutex;
				friend class CModelParamEvent;
			};  
		}
	}
}

#endif

