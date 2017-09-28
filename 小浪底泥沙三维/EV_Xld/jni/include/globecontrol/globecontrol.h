#ifndef _GLOBECONTROL_H_
#define _GLOBECONTROL_H_ 1

#include "globecontrol/evglobecontrol_config.h"
#include "globecontrol/guieventhandlers.h"
#include "core/memoryallocatedobject.h"
#include "core/stdheaders.h"
#include "core/threaddefines.h"

#include "spatialgui/itool.h"

#include "effect3d/atmosphere.h"

#include "globecontrol/globequerylistener.h"
#include "spatialgui/ispatialcontrol.h"

#include "spatial3dengine/geoscenemanager.h"

#include "ga/globeflyevent.h"
#include "ga/globelockcamerahandler.h"

#include "globecontrol/widget.h"
#include "globecontrol/globegrid.h"


#define USESETSCENE 0


#include "rtshadersystem/shadergenerator.h"
#include "graphic/technique.h"
#include "globecontrol/3dcontrol.h"

#include "graphic/overlayelement.h"
#include "globecontrol/globecontrollistener.h"
#include "graphic/rendertargetlistener.h"

#include "core/stringinterface.h"
#include "graphic/colourvalue.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CRay;
			}
		}
		namespace Graphic
		{
			class CCamera;
			class CViewport;
			class CRenderWindow;
			class CSceneManager;
		}
	}
}

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				class CToolHandler;
				class CKmlTourHandler;
			}

			namespace Atlas
			{
				class CScene;
			}
			
			class CGeoCameraListener;
			class CLayer3DEditor;
			class CLayer3DEdtiorFactory;
		}

		namespace Spatial
		{
			namespace Atlas
			{
				class IScene;
			}
		}

	}
}



namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{
				class CGlobeAtmosphere;
				class EnvironmentFactory;
			}
		}

		namespace Spatial3D
		{
			enum Compositor3DType
			{
				C3DT_Unknown = 0,
				C3DT_Gray,
				C3DT_Infrared
			};

			namespace Controls
			{
				class CGlobeControlManager;
				class CGUIEventQueue;
				class CGoToTargetListener;
				class CRouteFlyListener;
				class CGlobeCameraManipulator;
				class CWidgetManager;
				class CChildViewPort;
                class CGlobeAnimationHandler;
				class CGlobeCamUnderGroundHandler;
				class CGlobeLockCameraHandler;
				class CGoogleCameraManipulator;
#if EV_PLATFORM == EV_PLATFORM_WIN32 
				class CCollisionDetectionCameraManipulator;
#endif
				class CChildViewportMap : public EarthView::World::Core::CBaseObject
				{
ev_private:
					CChildViewportMap(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CChildViewportMap();
					ev_bool push(const EVString &key, CChildViewPort* const &val);
					ev_bool exist(const EVString &key);
					CChildViewPort*& operator[](const EVString &key);
					CChildViewPort*& get(const EVString &key);
					ev_void erase(const EVString &key);
					ev_size_t size() const;
					ev_void clear();
					ev_bool empty() const;
ev_private:
					typedef map<EVString,CChildViewPort*> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::mapped_type mapped_type;
					typedef InternalList::key_type key_type;
					typedef InternalList::value_type value_type;
					typedef pair<iterator, bool> _Pairib;
					RESERVE_CONTAINER_FUNCTION_MAP(mList);

					CChildViewportMap::_Pairib insert(const value_type &val);
					CChildViewportMap::iterator find(const EVString &key);
					CChildViewportMap::const_iterator find(const EVString &key) const;
				private:
					InternalList mList;
				};
				
				class CLatitudeLonitudeTextBox;
				/// <summary>
				/// 抽象数字地球控件
				/// </summary>
				class EV_GLOBECONTROL_DLL CGlobeControl:public EarthView::World::Spatial3D::Controls::C3DControl
				{				

					class GlobeControlRenderTargetListener:public EarthView::World::Graphic::CRenderTargetListener
					{
						
					private:
						
						EarthView::World::Spatial3D::Controls::CGlobeControl*  mpGlobeControl;
						bool mInitialised;

					public:
						/// <summary>
						/// 默认构造函数
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>
						GlobeControlRenderTargetListener(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl);
						/// <summary>
						/// 析构函数
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>
						virtual ~GlobeControlRenderTargetListener();

						/// <summary>
						/// 在渲染目标被渲染之前调用
						/// </summary>
						/// <param name="evt"></param>
						/// <returns></returns>
						virtual void preRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent &evt);
					
						/// <summary>
						/// 在渲染目标被渲染之后调用
						/// </summary>
						/// <param name="evt"></param>
						/// <returns></returns>
						virtual void postRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent &evt);		

						
					
					};
				private:
					GlobeControlRenderTargetListener* mpRenderTargetlistener;
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* mLatitudeLonitudeTextBox;

					friend class GlobeControlRenderTargetListener;
				protected:

					/*class  CCmdTileType : public CParamCommand
					{
					public:						
					EVString doGet(const void *target) const;						
					void doSet( _out void *target, const EVString &val);
					};

					class  CCmdImageTransparency : public CParamCommand
					{
					public:						
					EVString doGet(const void *target) const;						
					void doSet( _out void *target, const EVString &val);
					};

					class  CCmdShadowVisibility : public CParamCommand
					{
					public:						
					EVString doGet(const void *target) const;						
					void doSet( _out void *target, const EVString &val);
					};

					class  CCmdOceanVisibility : public CParamCommand
					{
					public:						
					EVString doGet(const void *target) const;						
					void doSet( _out void *target, const EVString &val);
					};	

					class  CCmdAerosphereVisibility : public CParamCommand
					{
					public:						
					EVString doGet(const void *target) const;						
					void doSet( _out void *target, const EVString &val);
					};					

					class  CCmdGridVisibility : public CParamCommand
					{
					public:						
					EVString doGet(const void *target) const;						
					void doSet( _out void *target, const EVString &val);
					};	

					class  CCmdUnderGroundMode : public CParamCommand
					{
					public:						
					EVString doGet(const void *target) const;						
					void doSet( _out void *target, const EVString &val);
					};	

					class CCmdPlaneBase:public CParamCommand
					{
					public:						
					EVString doGet(const void *target) const;						
					void doSet( _out void *target, const EVString &val);
					};

					class CCmdCameraControlDepth:public CParamCommand
					{
					public:						
					EVString doGet(const void *target) const;						
					void doSet( _out void *target, const EVString &val);
					};

					class CCmdCameraPostion:public CParamCommand
					{
					public:						
					EVString doGet(const void *target) const;						
					void doSet( _out void *target, const EVString &val);
					};*/

				public:
					//typedef map<EVString,CChildViewPort*> CChildViewports;

					/// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="name">名字</param>
					/// <param name="renderWindow">内部的渲染窗体</param>
					/// <param name="parent">控件的管理者</param>
                    /// <returns></returns>
					CGlobeControl(_in const EVString& name,_in EarthView::World::Graphic::CRenderWindow* ref_renderWindow,_in EarthView::World::Spatial3D::Controls::CGlobeControlManager* ref_parent);

					/// <summary>
					/// 析构函数
					/// </summary>
					virtual ~CGlobeControl();

					/// <summary>
					/// 通知视图发生变化，二三维联动的时候通过这个方法通知视图发生变化
					/// </summary>
					/// <param name="args">视图参数</param>
					/// <returns></returns>
					virtual ev_void notifyViewChanged(EarthView::World::Spatial::IViewArgs* args);

					virtual void mouseButtonPress(_in ev_int32 x,_in ev_int32 y,_in ev_uint32 button);
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* getLatitudeLonitudeTextBox();
					ev_void setKeySpeedScale(ev_real64 scale);
					ev_real64 getKeySpeedScale();
					ev_void setTextBoxColor(_in const EarthView::World::Graphic::CColourValue& color);
					ev_void setBackGroundColor(_in const EarthView::World::Graphic::CColourValue& color);
					ev_void setTextSpacerWidth(_in const Real width);
				ev_private:
					CGlobeControl(_in EarthView::World::Core::CNameValuePairList* pList);
					//挪动了球时，会通知其他其他联动control
					void notifyOtherView();
					

				protected:
					//EarthView::World::Spatial3D::CQuadTreeBackgroundQueue* mQuadTreeBackgroundQuene;
					CToolHandler* mpToolHandler;
					EarthView::World::Core::CRecursiveMutex mToolMtx;
					CKmlTourHandler* mpKmlTourHandler;
					CGlobeCameraManipulator* mpCameraManipulator;
					CGlobeAnimationHandler* mpGlobeAnimationHandler;
					EarthView::World::Core::CRecursiveMutex mGlobeAnimationHandlerMtx;
					CGlobeCamUnderGroundHandler* mpGlobeCamUnderGroundHandler;
					CGlobeLockCameraHandler* mpGlobeLockCameraHandler;
					CGoogleCameraManipulator* mpGoogleCameraManipulator;
					EarthView::World::Graphic::CColourValue mTextBoxColor;
					EarthView::World::Graphic::CColourValue mBlackGroundColor;
#if EV_PLATFORM == EV_PLATFORM_WIN32 
					CCollisionDetectionCameraManipulator* mpCollisionDetectionCameraManipulator;
#endif
					
				public:	
					/// <summary>
					/// 定位相机，相机飞行到指定位置
					/// </summary>
					/// <param name="latitude">目标点处的纬度</param>
					/// <param name="longitude">目标点处的经度</param>
					/// <param name="heading">偏航角</param>
					/// <param name="tilt">倾角</param>
					/// <param name="altitude">相机的海拔</param>
					/// <returns></returns>
					void goTo(_in ev_real64 latitude,_in ev_real64 longitude,_in ev_real64 heading,_in ev_real64 tilt,_in ev_real64 altitude)
					{
						goTo(latitude,longitude,heading,tilt,altitude,0);
					}

					/// <summary>
					/// 停止goto
					/// </summary>
					/// <returns></returns>
					ev_void stopGoto();

					/// <summary>
					///设置相机倾角的范围
					/// </summary>
					/// <param name="min">最小值</param>
					/// <param name="max">最大值</param>
					/// <returns></returns>
					ev_void setCameraTiltRange(_in const EarthView::World::Spatial::Math::CDegree& min,_in const EarthView::World::Spatial::Math::CDegree& max);

					/// <summary>
					/// 三维分析开始前的通知
					/// </summary>
					/// <param name="tool">三维分析Tool</param>
					/// <returns></returns>
					ev_void notifyAnalysisStart(EarthView::World::Spatial::SystemUI::ITool* tool);

					/// <summary>
					/// 三维分析结束后的通知
					/// </summary>
					/// <param name="tool">三维分析Tool</param>
					/// <returns></returns>
					 ev_void notifyAnalysisEnd(EarthView::World::Spatial::SystemUI::ITool* tool);

					/// <summary>
					///添加globeControlListener监听
					/// </summary>
					/// <param name="listener">监听者</param>
					/// <returns></returns>
					ev_void addGlobeControlListener(_in EarthView::World::Spatial3D::Controls::CGlobeControlListener* ref_listener);

					/// <summary>
					///移除Goto监听
					/// </summary>
					/// <param name="listener">监听者</param>
					/// <returns></returns>
					ev_void removeGlobeControlListener(_in EarthView::World::Spatial3D::Controls::CGlobeControlListener* listener);

					/// <summary>
					///添加Goto监听
					/// </summary>
					/// <param name="listener">监听者</param>
					/// <returns></returns>
					ev_void addGotoListener(_in EarthView::World::Spatial3D::Controls::CGoToTargetListener* ref_listener);

					/// <summary>
					///移除Goto监听
					/// </summary>
					/// <param name="listener">监听者</param>
					/// <returns></returns>
					ev_void removeGotoListener(_in EarthView::World::Spatial3D::Controls::CGoToTargetListener* listener);

					/// <summary>
					///添加routefly监听
					/// </summary>
					/// <param name="listener">监听者</param>
					/// <returns></returns>
					ev_void addRouteFlyListener(_in EarthView::World::Spatial3D::Controls::CRouteFlyListener* ref_listener);

					/// <summary>
					///移除RouteFly监听
					/// </summary>
					/// <param name="listener">监听者</param>
					/// <returns></returns>
					ev_void removeRouteFlyListener(_in EarthView::World::Spatial3D::Controls::CRouteFlyListener* ref_listener);

					/// <summary>
					/// 定位相机，相机飞行到指定位置
					/// </summary>
					/// <param name="latitude">目标点处的纬度</param>
					/// <param name="longitude">目标点处的经度</param>
					/// <param name="heading">偏航角</param>
					/// <param name="tilt">倾角</param>
					/// <param name="altitude">相机的海拔</param>
					/// <param name="moditifAltitude">目标点处的海拔</param>
					/// <returns></returns>
					void goTo(_in ev_real64 latitude,_in ev_real64 longitude,_in ev_real64 heading,_in ev_real64 tilt,_in ev_real64 altitude,_in ev_real64 moditifAltitude);
					/// <summary>
					/// 定位相机，相机飞行到指定位置
					/// </summary>
					/// <param name="latitude">目标点处的纬度</param>
					/// <param name="longitude">目标点处的经度</param>
					/// <param name="moditifAltitude">目标点处的海拔</param>
					/// <param name="heading">偏航角</param>
					/// <param name="tilt">倾角</param>
					/// <param name="distance">目标点与相机之间的距离</param>
					/// <returns></returns>
					void goTo(_in const EarthView::World::Spatial::Math::CDegree& latitude,_in const EarthView::World::Spatial::Math::CDegree& longitude,_in ev_real64 targetAltitude,_in const EarthView::World::Spatial::Math::CDegree& heading,_in const EarthView::World::Spatial::Math::CDegree& tilt,_in ev_real64 distance);
					/// <summary>
					/// 设置场景
					/// </summary>
					/// <param name="scene">场景</param>
					/// <returns>true 成功，false 失败</returns>
					ev_bool setScene(_in EarthView::World::Spatial::Atlas::IScene* ref_scene);
					
					/// <summary>
					/// 获取场景
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::Atlas::IScene* getScene() const;
					/// <summary>
					/// 获取相机是否被锁定
					/// </summary>
					/// <returns></returns>
					ev_bool getCameraIsLocked() const;
					/// <summary>
					/// 锁定相机到某个节点
					/// </summary>
					/// <param name="target">锁定的目标节点</param>
					/// <param name="heading">偏航角</param>
					/// <param name="tilt">倾角</param>
					/// <param name="distance">距离</param>
					/// <returns></returns>
					void lockCameraToTarget(_in EarthView::World::Graphic::CSceneNode* target,_in const EarthView::World::Spatial::Math::CDegree& heading,_in const EarthView::World::Spatial::Math::CDegree& tilt,_in ev_real64 distance);
					/// <summary>
					/// 锁定相机到某个节点
					/// </summary>
					/// <param name="target">锁定的目标节点</param>
					/// <param name="heading">偏航角</param>
					/// <param name="tilt">倾角</param>
					/// <param name="distance">距离</param>
					/// <param name="isThirdMode">是否为第三人模式。false为第一人称模式，相机的姿态与节点的姿态一致</param>
					/// <returns></returns>
					void lockCameraToTarget(_in EarthView::World::Graphic::CSceneNode* target,_in const EarthView::World::Spatial::Math::CDegree& heading,_in const EarthView::World::Spatial::Math::CDegree& tilt,_in ev_real64 distance,_in ev_bool isThirdPersonMode);
					/// <summary>
					/// 锁定相机到某个节点
					/// </summary>
					/// <param name="target">锁定的目标节点</param>
					/// <param name="heading">偏航角</param>
					/// <param name="tilt">倾角</param>
					/// <param name="distance">距离</param>
					/// <param name="canChangeTilt">允许鼠标修改Tilt角</param>
					/// <param name="canChangeHeading">允许鼠标修改Heading角</param>
					/// <param name="canChangeDistance">允许鼠标修改距离</param>
					/// <returns></returns>
					void lockCameraToTarget(_in EarthView::World::Graphic::CSceneNode* target,_in const EarthView::World::Spatial::Math::CDegree& heading,_in const EarthView::World::Spatial::Math::CDegree& tilt,_in ev_real64 distance,_in ev_bool canChangeTilt,_in ev_bool canChangeHeading,_in ev_bool canChangeDistance);
					/// <summary>
					/// 锁定相机到某个节点
					/// </summary>
					/// <param name="target">锁定的目标节点</param>
					/// <param name="heading">偏航角</param>
					/// <param name="tilt">倾角</param>
					/// <param name="distance">距离</param>
					/// <param name="canChangeTilt">允许鼠标修改Tilt角</param>
					/// <param name="canChangeHeading">允许鼠标修改Heading角</param>
					/// <param name="canChangeDistance">允许鼠标修改距离</param>
					/// <param name="isThirdMode">是否为第三人模式。false为第一人称模式，相机的姿态与节点的姿态一致</param>
					/// <returns></returns>
					void lockCameraToTarget(_in EarthView::World::Graphic::CSceneNode* target,_in const EarthView::World::Spatial::Math::CDegree& heading,_in const EarthView::World::Spatial::Math::CDegree& tilt,_in ev_real64 distance,_in ev_bool canChangeTilt,_in ev_bool canChangeHeading,_in ev_bool canChangeDistance,_in ev_bool isThirdPersonMode);
					/// <summary>
					/// 锁定相机锁定的偏航角
					/// </summary>
					/// <param name="heading">偏航角</param>
					/// <returns></returns>
					void setCameraLockHeading(_in const EarthView::World::Spatial::Math::CDegree& heading);
					/// <summary>
					/// 锁定相机锁定的倾角
					/// </summary>
					/// <param name="tilt">倾角</param>
					/// <returns></returns>
					void setCameraLockTilt(_in const EarthView::World::Spatial::Math::CDegree& tilt);
					/// <summary>
					/// 锁定相机锁定的距离
					/// </summary>
					/// <param name="distance">距离</param>
					/// <returns></returns>
					void setCameraLockDistance(_in ev_real64 distance);

					/// <summary>
					/// 设置锁定时是否为第三人称模式
					/// </summary>
					/// <param name="isThirdPersonMode">true,为第三人称模式,false,为第三人称模式。</param>
					/// <returns></returns>
					void setCameraLockMode(_in ev_bool isThirdPersonMode);

					/// <summary>
					/// 解除锁定
					/// </summary>
					/// <returns></returns>
					void unlockCamera();

					/// <summary>
					/// 设置相机漫游器是否与模型求交
					/// </summary>
					/// <param name="intersectModel">是否与模型求交</param>
					/// <returns></returns>
					void setCameraManipulatorIntersectModel(_in ev_bool intersectModel);
					/// <summary>
					/// 获取相机漫游器是否与模型求交
					/// </summary>
					/// <returns></returns>
					ev_bool getCameraManipulatorIntersectModel() const;

					/// <summary>
					/// 设置相机漫游器是否与摄影测量模型求交
					/// </summary>
					/// <param name="intersectModel">是否与模型求交</param>
					/// <returns></returns>
					void setCameraManipulatorIntersectOBQ(_in ev_bool intersectOBQ);
					/// <summary>
					/// 获取相机漫游器是否与摄影测量模型求交
					/// </summary>
					/// <returns></returns>
					ev_bool getCameraManipulatorIntersectOBQ() const;

					/// <summary>
					/// 设置相机漫游器是否与地面求交
					/// </summary>
					/// <param name="intersectModel">是否与地面求交</param>
					/// <returns></returns>
					void setCameraManipulatorIntersectFloor(_in ev_bool intersectFloor);
					/// <summary>
					/// 获取相机漫游器是否与地面求交
					/// </summary>
					/// <returns></returns>
					ev_bool getCameraManipulatorIntersectFloor() const;

					/// <summary>
					/// 取得相机的相关参数
					/// </summary>
					/// <param name="lat">目标点的纬度</param>
					/// <param name="lon">目标点的经度</param>
					/// <param name="heading">偏航角</param>
					/// <param name="tilt">倾角</param>
					/// <param name="altitude">相机的海拔</param>
					/// <returns></returns>
					void getCameraPostion(_in EarthView::World::Spatial::Math::CDegree& lat,_in EarthView::World::Spatial::Math::CDegree& lon,_in EarthView::World::Spatial::Math::CDegree& heading,_in EarthView::World::Spatial::Math::CDegree& tilt,_in ev_real64& altitude);

					/// <summary>
					///设置相机的相关参数
					/// </summary>
					/// <param name="lat">目标点的纬度</param>
					/// <param name="lon">目标点的经度</param>
					/// <param name="heading">偏航角</param>
					/// <param name="tilt">倾角</param>
					/// <param name="altitude">相机的海拔</param>
					/// <returns></returns>
					void setCameraPostion(_in const EarthView::World::Spatial::Math::CDegree& lat,_in const EarthView::World::Spatial::Math::CDegree& lon,_in const EarthView::World::Spatial::Math::CDegree& heading,_in const EarthView::World::Spatial::Math::CDegree& tilt,_in ev_real64 altitude);

					/// <summary>
					///获取地下镜头开启标志
					/// </summary>
					/// <returns>true 是，false 否</returns>
					ev_bool getCameraIsUnderGroundMode();

					/// <summary>
					///设置地下镜头开启
					/// </summary>
					/// <param name="underGroundMode">开启或关闭</param>
					/// <returns></returns>
					void setCameraIsUnderGroundMode( _in ev_bool underGroundMode);

					/// <summary>
					///是否基于平面的地下模式
					/// </summary>
					/// <returns>true 是，false 否</returns>
					ev_bool getCameraIsPlaneBase();

					/// <summary>
					///设置基于平面的地下模式
					/// </summary>
					/// <param name="planeBase">开启或关闭</param>
					/// <returns></returns>
					void setCameraIsPlaneBase(_in ev_bool planeBase);

					/// <summary>
					///获取基于平面的地下模式时基准高度
					/// </summary>
					/// <returns></returns>
					ev_real64 getCameraControlDepth();

					/// <summary>
					///设置基于平面的地下模式时基准高度
					/// </summary>
					/// <param name="cameraDepth">基准高度</param>
					/// <returns></returns>
					void setCameraControlDepth(_in ev_real64 cameraDepth);

					/// <summary>
					///获取名字
					/// </summary>
					/// <returns></returns>
					EVString getName() const 
					{
						return mName;
					}
					/// <summary>
					///获取控件类型
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::Atlas::EVSpatialControlType getType() const
					{
						return EarthView::World::Spatial::Atlas::SCT_GlobeControl;
					}
					/// <summary>
					///获取控件类型字符串
					/// </summary>
					/// <returns></returns>
					EVString getTypeString() const
					{
						return "SCT_GlobeControl";
					}

					/// <summary>
					/// 添加子视口
					/// </summary>
					/// <param name="cameraName">子视口的相机的名字</param>
					/// <param name="zorder">子视口的zorder</param>
					/// <param name="left">子视口的左边界</param>
					/// <param name="top">子视口的上边界</param>
					/// <param name="width">子视口的宽度</param>
					/// <param name="height">子视口的高度</param>
					/// <param name="cameraTilt">子视口的相机的倾角</param>
					/// <param name="cameraHeading">子视口的相机的偏航角</param>
					/// <returns></returns>
					ev_bool addViewport(_in const EVString& cameraName,_in ev_int32 zorder,_in ev_real32 left,_in ev_real32 top,_in ev_real32 width,_in ev_real32 height,_in ev_real64 cameraTilt,_in ev_real64 cameraHeading);
					/// <summary>
					///移除子视口
					/// </summary>
					/// <param name="cameraName">子视口的相机的名字</param>
					/// <returns></returns>
					ev_bool removeViewport(_in const EVString& cameraName);

					/// <summary>
					/// 获取视口
					/// </summary>
					/// <param name="cameraName">视口的相机的名字</param>					
					/// <returns>视口</returns>
					EarthView::World::Graphic::CViewport* getViewport(const EVString& cameraName) const;

					/// <summary>
					/// 获取主视口
					/// </summary>
					/// <param name=""></param>					
					/// <returns>视口</returns>
					EarthView::World::Graphic::CViewport* getViewport() const;					

					/// <summary>
					///设置相机的位置
					///</summary>
					/// <param name="cameraName">子视口相机的名字</param>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="heading">偏航角</param>
					/// <param name="tilt">倾角</param>
					/// <param name="altitude">海拔</param>
					/// <param name="moditifAltitude">目标处的海拔</param>
					/// <returns></returns>
					ev_void setChildViewportCameraPosition(_in const EVString& cameraName,_in const EarthView::World::Spatial::Math::CDegree& latitude,_in const EarthView::World::Spatial::Math::CDegree& longitude,_in const EarthView::World::Spatial::Math::CDegree& heading,_in const EarthView::World::Spatial::Math::CDegree& tilt,_in ev_real64 altitude,_in ev_real64 moditifAltitude);
					/// <summary>
					///设置子视口相机的目标点是否需与主相机一致
					///</summary>
					/// <param name="needCopyMasterCamera"></param>
					/// <returns></returns>
					ev_void setNeedCopyMasterCameraTarget(_in const EVString& cameraName,_in ev_bool needCopyMasterCameraTarget);
					/// <summary>
					///获取子视口相机的目标点是否需与主相机一致
					///</summary>
					/// <returns></returns>
					ev_bool getNeedCopyMasterCameraTarget(_in const EVString& cameraName);

					/// <summary>
					///设置当前飞行路径
					/// </summary>
					/// <param name="flyPath">飞行路径</param>
					/// <returns></returns>
					void setCurrentFlyPath(_in const EarthView::World::Spatial3D::CGlobeFlyPathPtr& flyPath);
					/// <summary>
					///设置模型的坐标轴
					/// </summary>
					/// <returns></returns>
					void showModelAxis();

					/// <summary>
					///隐藏模型的坐标轴
					/// </summary>
					/// <returns></returns>
					void hideModelAxis();

					/// <summary>
					///开始编辑控制点
					/// </summary>
					/// <returns></returns>
					void startEditControlPoint();

					/// <summary>
					///停止编辑控制点
					/// </summary>
					/// <returns></returns>
					void stopEditControlPoint();

					/// <summary>
					///开始飞行
					/// </summary>
					/// <returns></returns>
					void startFly();

					/// <summary>
					///停止飞行
					/// </summary>
					/// <returns></returns>
					void stopFly();
		
					/// <summary>
					///暂停飞行
					/// </summary>
					/// <returns></returns>
					void pauseFly();

					/// <summary>
					///当相机锁定时，设置旋转方式
					/// <param name="rotationMode">旋转方式</param>
					/// </summary>
					/// <returns></returns>
					void setLockHandleRotationMode(_in EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::RotationMode rotationMode);

					/// <summary>
					///当相机锁定时，获取当前的旋转方式
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::RotationMode getLockHandleRotationMode() const;

					/// <summary>
					/// 设置相机goto的比率
					/// </summary>
					/// <param name="gotoRatio"></param>
					/// <returns></returns>
					ev_void setGotoTimeRatio(_in ev_real64 gotoRatio);
					/// <summary>
					/// 获取相机goto的比率
					/// </summary>
					/// <returns></returns>
					ev_real64 getGotoTimeRatio();

					//ev_void addNodeTrack(_in CTrackAnimation* trackAnimation);

					//void showRecordManipulator();
					/// <summary>
					///创建场景
					/// </summary>
					/// <returns></returns>
					virtual void createGlobeScene();
					/// <summary>
					///销毁场景
					/// </summary>
					/// <returns></returns>
					virtual void destroyGlobeScene();

					/// <summary>
					/// 启用/禁用双击移动
					/// </summary>
					/// <param name="enable"></param>
					/// <returns></returns>
					ev_void setCameraManipulatorMoveToEnable(_in ev_bool enable);

					/// <summary>
					/// 获取是否开启双击移动
					/// </summary>
					/// <param name="enable"></param>
					/// <returns></returns>
					ev_bool getCameraManipulatorMoveToEnable();


					/// <summary>
					/// 设置磙轮缩放的比率
					/// </summary>
					/// <param name="mouseWheelRatio">参数为0.5-2之间的浮点数</param>
					/// <returns></returns>
					ev_void setCameraManipulatorMouseWheelRatio(_in ev_real64 mouseWheelRatio);
					/// <summary>
					/// 获取磙轮缩放的比率
					/// </summary>
					/// <param name="mouseWheelRatio"></param>
					/// <returns></returns>
					ev_real64 getCameraManipulatorMouseWheelRatio();

					//virtual ev_bool pickingRayIntersection(_in ev_int32 screenX,_in ev_int32 screenY,_in ev_real64 worldradius,_in ev_bool isOutside,_inout ev_real64& latitude,_inout ev_real64& longitude);
					/// <summary>
					///根据屏幕坐标返回射线
					/// </summary>
					/// <param name="x">屏幕的Ｘ坐标</param>
					/// <param name="y">屏幕的Ｙ坐标</param>
					/// <returns>射线对象</returns>
					EarthView::World::Spatial::Math::CRay screenToScene(_in ev_real32 x,_in ev_real32 y);
					/// <summary>
					///根据屏幕坐标返回对应的经纬度
					/// </summary>
					/// <param name="screenX">屏幕的Ｘ坐标</param>
					/// <param name="screenY">屏幕的Ｙ坐标</param>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <returns>有交点返回true，否则返回false</returns>
					virtual ev_bool pickingRayIntersection(_in ev_int32 screenX,_in ev_int32 screenY,_inout ev_real64& latitude,_inout ev_real64& longitude)
					{
						ev_bool modelIntersected = false;
						ev_real64 altitude;
						return pickingRayIntersection(screenX,screenY,false,false,latitude,longitude,altitude,modelIntersected);
					}
					/// <summary>
					///根据屏幕坐标返回对应的经纬度
					/// </summary>
					/// <param name="screenX">屏幕的Ｘ坐标</param>
					/// <param name="screenY">屏幕的Ｙ坐标</param>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="intersectModel">是否与模型相交</param>
					/// <returns>有交点返回true，否则返回false</returns>
					virtual ev_bool pickingRayIntersection(_in ev_int32 screenX,_in ev_int32 screenY,_inout ev_real64& latitude,_inout ev_real64& longitude,_in ev_bool intersectModel)
					{		
						ev_bool modelIntersected = false;
	                    ev_real64 altitude = 0.0;
						return pickingRayIntersection(screenX,screenY,intersectModel,false,latitude,longitude,altitude,modelIntersected);
					}
					/// <summary>
					///根据屏幕坐标返回对应的经纬度
					/// </summary>
					/// <param name="screenX">屏幕的Ｘ坐标</param>
					/// <param name="screenY">屏幕的Ｙ坐标</param>
					/// <param name="intersectModel">是否与模型相交</param>
					/// <param name="intersectSea">是否与海平面相交</param>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="altitude">射中点处的海拔</param>
					/// <param name="modelIntersected">射中的是否为模型</param>
					/// <returns>有交点返回true，否则返回false</returns>
					virtual ev_bool pickingRayIntersection(_in ev_int32 screenX,_in ev_int32 screenY,_in ev_bool intersectModel,_in ev_bool intersectSea,_inout ev_real64& latitude,_inout ev_real64& longitude,_inout ev_real64& altitude,_inout ev_bool& modelIntersected)
					{
						ev_bool seaIntersected = false;
						return pickingRayIntersection(screenX,screenY,intersectModel,intersectSea,latitude,longitude,altitude,modelIntersected,seaIntersected);
					}
					/// <summary>
					///根据屏幕坐标返回对应的经纬度
					/// </summary>
					/// <param name="screenX">屏幕的Ｘ坐标</param>
					/// <param name="screenY">屏幕的Ｙ坐标</param>
					/// <param name="intersectModel">是否与模型相交</param>
					/// <param name="intersectSea">是否与海平面相交</param>
					/// <param name="intersectOBQ">是否与摄影测量相交</param>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="altitude">射中点处的海拔</param>
					/// <param name="modelIntersected">射中的是否为模型</param>
					/// <param name="seaIntersected">射中的是否为海面</param>
					/// <param name="OBQIntersected">射中的是否为摄影测量图层</param>
					/// <returns>有交点返回true，否则返回false</returns>
					virtual ev_bool pickingRayIntersection(_in ev_int32 screenX,_in ev_int32 screenY,_in ev_bool intersectModel,_in ev_bool intersectSea,_in ev_bool intersectOBQ,_inout ev_real64& latitude,_inout ev_real64& longitude,_inout ev_real64& altitude,_inout ev_bool& modelIntersected,_inout ev_bool& seaIntersected,_inout ev_bool& OBQIntersected);
					/// <summary>
					///根据屏幕坐标返回对应的经纬度
					/// </summary>
					/// <param name="screenX">屏幕的Ｘ坐标</param>
					/// <param name="screenY">屏幕的Ｙ坐标</param>
					/// <param name="intersectModel">是否与模型相交</param>
					/// <param name="intersectSea">是否与海平面相交</param>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="altitude">射中点处的海拔</param>
					/// <param name="modelIntersected">射中的是否为模型</param>
					/// <param name="seaIntersected">射中的是否为海面</param>
					/// <returns>有交点返回true，否则返回false</returns>
					virtual ev_bool pickingRayIntersection(_in ev_int32 screenX,_in ev_int32 screenY,_in ev_bool intersectModel,_in ev_bool intersectSea,_inout ev_real64& latitude,_inout ev_real64& longitude,_inout ev_real64& altitude,_inout ev_bool& modelIntersected,_inout ev_bool& seaIntersected);

					//virtual ev_bool frame();


					/// <summary>
					///窗体变化处理事件，在linux下必须调用此函数给出窗口大小。
					/// </summary>
					/// <param name="width">窗体的宽度</param>
					/// <param name="height">窗体的高度</param>
					/// <returns></returns>
					virtual void windowResized(int width, int height);
					/// <summary>
					///窗体变化处理事件。
					/// </summary>
					/// <returns></returns>
					virtual void windowResized();

					/// <summary>
					///设置导航面板的显示模式
					/// </summary>
					/// <param name="visibleMode">导航面板显示模式</param>
					/// <returns></returns>
					void setCompassWidgetVisibleMode(_in VisibleMode visibleMode);

					/// <summary>
					///设置导航面板的位置
					/// 整个导航栏的长和宽190和78，它们是以像素为单位的。因为渲染窗体的大小是可以变化的，所以X（Y）坐标的最大值是不确定的。
					///为了能让导航栏能贴在窗体右边，gha应设为GHA_RIGHT,x应设为-78。同理为了能让导航栏能贴在窗体下边，gva应设为GVA_BOTTOM,y设为-190
					///GHA_RIGHT,GVA_BOTTOM,-78,-190 导航栏会在右下角
					///GHA_RIGHT,GVA_TOP,-78,0       导航栏会在右上角 
					///GHA_LEFT,GVA_TOP,0,0          导航栏会在左上角 
					///GHA_LEFT,GVA_BOTTOM,0,-190    导航栏会在左下角 
					/// </summary>
					/// <param name="gha">水平方向的分布方式</param>
					/// <param name="gva">坚直方向的分布方式</param>
					/// <param name="x">导航面板的X坐标，可以为负值</param>
					/// <param name="y">导航面板的Y坐标，可以为负值</param>
					/// <returns></returns>
					void setCompassWidgetPosition(_in EarthView::World::Graphic::GuiHorizontalAlignment gha,_in EarthView::World::Graphic::GuiVerticalAlignment gva,_in ev_int32 x ,_in ev_int32 y);

					/// <summary>
					///设置经纬度面板的显示模式
					/// </summary>
					/// <param name="visibleMode">经纬度面板显示模式</param>
					/// <returns></returns>
					void setLatitudeLonitudeTextBoxVisibleMode(_in VisibleMode visibleMode);

					/// <summary>
					///在指定的坐标点（屏幕坐标系）处倾斜相机
					/// </summary>
					/// <param name="x">x坐标</param>
					/// <param name="y">y坐标</param>
					/// <param name="tiltDegree">倾斜的角度</param>
					/// <returns></returns>
					void tiltCamera(ev_real64 x,ev_real64 y,ev_real64 tiltDegree);
					/// <summary>
					///开启相机淡入淡出效果
					/// </summary>
					/// <param name="time">淡入淡出效果开启后的持续时间(秒)</param>
					/// <returns></returns>
					void beginCameraFadeInFadeOut(ev_real64 time);
					/// <summary>
					///关闭相机淡入淡出效果
					/// </summary>
					/// <returns></returns>
					void endCameraFadeInFadeOut();
					/// <summary>
					///在指定的坐标点（屏幕坐标系）处旋转和缩放相机
					/// </summary>
					/// <param name="x">x坐标</param>
					/// <param name="y">y坐标</param>
					/// <param name="rotationDegree">旋转的角度</param>
					/// <param name="zoomRatio">缩放系数</param>
					/// <returns></returns>
					void rotationCamera(ev_real64 x,ev_real64 y,ev_real64 rotationDegree,ev_real64 zoomRatio);
					/// <summary>
					///设置相机的旋转系数
					/// </summary>
					/// <param name="cameraRatio">旋转系数</param>
					/// <returns></returns>
					void setCameraRatio(ev_real64 cameraRatio);

					//virtual void mouseWheel(ev_real32 delta,ev_int32 x,ev_int32 y);
					/// <summary>
					///处理事件
					/// </summary>
					/// <returns>成功返回true，否则返回false</returns>
					virtual ev_bool eventStage();
					/// <summary>
					///设置控件的当前工具
					/// </summary>
					/// <param name="tool">当前工具</param>
					/// <returns>成功返回true，否则返回false</returns>
					virtual ev_bool setCurrentTool(_in EarthView::World::Spatial::SystemUI::ITool* ref_tool);
					/// <summary>
					///返回控件的当前工具
					/// </summary>
					/// <returns>当前工具对象</returns>
					EarthView::World::Spatial::SystemUI::ITool* getCurrentTool()const;
					/// <summary>
					///返回自然环境对象
					/// </summary>
					/// <returns>自然环境对象</returns>
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *getCurrentAtmosphere();

					/// <summary>
					///将世界坐标系下的点转换为主视口上的像素坐标
					/// </summary>
					/// <param name="worldPt">世界坐标系下的点</param>
					/// <param name="px">转换出来的Ｘ坐标</param>
					/// <param name="py">转换出来的Ｙ坐标</param>
					/// <returns>成功返回true，否则返回false</returns>
					ev_bool cartesion2pixel(const EarthView::World::Spatial::Math::CVector3& worldPt,_out ev_real64& px,_out ev_real64& py);
					/// <summary>
					///将世界坐标系下的点转换为指定视口上的像素坐标
					/// </summary>
					/// <param name="worldPt">世界坐标系下的点</param>
					/// <param name="vp">指定的视口</param>					
					/// <param name="px">转换出来的Ｘ坐标</param>
					/// <param name="py">转换出来的Ｙ坐标</param>
					/// <returns>成功返回true，否则返回false</returns>
					ev_bool cartesion2pixel(const EarthView::World::Spatial::Math::CVector3& worldPt,EarthView::World::Graphic::CViewport* vp,  _out ev_real64& px,_out ev_real64& py);


				public:	
					/// <summary>
					///设置允许自定义文本
					/// </summary>
					/// <param name="enabled">启用</param>
					/// <returns></returns>
					void setCustomStatusbarTextEnabled(_in ev_bool enabled);
					/// <summary>
					///设置自定义文本的内容
					/// </summary>
					/// <param name="text">文本的内容</param>
					/// <returns></returns>
					void setCustomStatusbarText(_in const EVString& text);
					/// <summary>
					///设置自定义文本的内容
					/// </summary>
					/// <param name="fontName">文本的字符库的名字</param>
					/// <returns></returns>
					void setCustomStatusbarTextFontName(_in const EVString& fontName);
					/// <summary>
					///设置自定义文本的内容
					/// </summary>
					/// <param name="color">文本的颜色</param>
					/// <returns></returns>
					void setCustomStatusbarTextFontColor(_in const EarthView::World::Graphic::CColourValue& color);
					/// <summary>
					///设置自定义文本的内容
					/// </summary>
					/// <param name="text">文本的内容</param>
					/// <param name="fontName">文本的字符库的名字</param>
					/// <param name="color">文本的颜色</param>
					/// <returns></returns>
					void setCustomStatusbarText(_in const EVString& text,_in const EVString& fontName,_in const EarthView::World::Graphic::CColourValue& color);
					/// <summary>
					/// 设置自定义文本的位置
					/// </summary>
					/// <param name="x">左上角Ｘ坐标</param>
					/// <param name="y">左上角Y坐标</param>
					/// <param name="width">宽度</param>
					/// <param name="height">高度</param>
					/// <param name="textOffsetX">文字相对背景的</param>
					/// <param name="textOffsetX">高度</param>
					/// <param name="gha">水平对齐的方式</param>
					/// <param name="gva">竖直对齐的方式</param>
					/// <returns></returns>
					void setCustomStatusbarPosition(_in Real x,_in Real y,_in Real width,_in Real height,_in Real textOffsetX,_in Real textOffsetY,_in EarthView::World::Graphic::GuiHorizontalAlignment gha,_in EarthView::World::Graphic::GuiVerticalAlignment gva);
                     /// <summary>
					/// 设置自定义文本的文字高度
					/// </summary>
					/// <param name="textOffsetX">文字高度</param>
					/// <returns></returns>
					/// <summary>
                    void setCustomStatusbarFontHeight(_in Real fontHeight);
					///添加查询监听器
					/// </summary>
					/// <param name="listener">监听器</param>
					/// <returns></returns>
					ev_bool addQueryListener(EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener* ref_listener);
					/// <summary>
					///移除查询监听器
					/// </summary>
					/// <param name="listener">监听器</param>
					/// <returns></returns>
					ev_bool removeQueryListener(EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener* listener);
					/// <summary>
					///获取查询监听器的数量
					/// </summary>
					/// <returns></returns>
					ev_uint32 getQueryListenerCount()const;
					/// <summary>
					///取得查询监听器
					/// </summary>
					/// <param name="index">监听器的索引</param>
					/// <returns></returns>
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener* getQueryListener(ev_uint32 index);
					/// <summary>
					/// 清理查询监听器
					/// </summary>
					/// <param name="index">监听器的索引</param>
					/// <returns></returns>
					ev_void clearQueryListeners();	

					/// <summary>
					/// 通知选中的状态改变
					/// </summary>
					/// <param name="result">射线求交查询结果</param>
					/// <returns></returns>
					ev_void fireSelectionChanged(EarthView::World::Graphic::RaySceneQueryResult& result);					
					/// <summary>
					///通知选中的状态改变
					/// </summary>
					/// <param name="result">求交查询结果</param>
					/// <returns></returns>
					ev_void fireSelectionChanged(EarthView::World::Graphic::SceneQueryResult& result);
					/// <summary>
					///通知选中的状态改变
					/// </summary>
					/// <param name="result">场景图层对应的选择集</param>
					/// <returns></returns>
					ev_void fireSelectionChanged(EarthView::World::Spatial3D::CGlobeSelection& result);
					/// <summary>
					/// 通知选中的状态改变
					/// </summary>
					/// <param name="rayResult">射线求交查询结果</param>
					/// <param name="clamplayerResult">贴地图层查询结果</param>
					/// <returns></returns>
					ev_void fireSelectionChanged(EarthView::World::Graphic::RaySceneQueryResult& rayResult,CGlobeSelection& clamplayerResult);

					/// <summary>
					///获取所有图层对应的选择集
					/// </summary>
					/// <returns>所有场景图层对应的选择集</returns>
					EarthView::World::Spatial3D::CGlobeSelection getGlobeSelection()const{return mLayerSelectionResult;}

					/// <summary>
					///通知选中的对象被移动了
					/// </summary>
					/// <param name="entry">射线求交查询结果排序比较器</param>
					/// <param name="newMatrix">被选中对象的新的世界变换矩阵</param>
					/// <param name="type">鼠标状态</param>
					/// <returns></returns>
					ev_void fireSelectedObjectMoved(EarthView::World::Graphic::RaySceneQueryResultEntry& entry, const EarthView::World::Spatial::Math::CMatrix4& newMatrix, EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::MouseOpType type);
					/// <summary>
					/// 通知Delete键被按下
					/// </summary>
					/// <returns></returns>
					ev_void fireDeleteKeyPressed();
					/// <summary>
					///设置经纬网是否显示
					/// </summary>
					/// <returns></returns>
					ev_void setGridVisible(ev_bool visible);
					/// <summary>
					///获取经纬网是否显示
					/// </summary>
					/// <returns></returns>
					ev_bool getGridVisible()const;
					/// <summary>
					///设置海水的类型
					/// </summary>
					/// <returns></returns>
					ev_void setSeaType(SeaType seaType);
					/// <summary>
					///获取海水的类型
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial3D::SeaType getSeaType()const;
					/// <summary>
					///设置海水密度
					/// </summary>
					/// <param name="vertexNum">顶点数</param>
					/// <returns></returns>
					ev_void setSeaVertexNum(ev_int32 vertexNum);
					/// <summary>
					///获取海水密度
					/// </summary>
					/// <returns>顶点数</returns>
					ev_int32 getSeaVertexNum()const;
					/// <summary>
					///在海水类型改变后，刷新海水
					/// </summary>
					/// <returns></returns>
					ev_void refreshSeaQuadMapType();
					/// <summary>
					///获取窗口部件管理器
					/// </summary>
					/// <returns>窗口部件管理器</returns>				    
					EarthView::World::Spatial3D::Controls::CWidgetManager* getWidgetManager()const
					{
						return mWidgetManager;
					}

					/// <summary>
					///获取模型图层的编辑器
					/// </summary>
					/// <returns>模型图层的编辑器</returns>	
					EarthView::World::Spatial3D::CLayer3DEditor* getModelLayerEditor();
					/// <summary>
					///获取特效图层的编辑器
					/// </summary>
					/// <returns>特效图层的编辑器</returns>	
					EarthView::World::Spatial3D::CLayer3DEditor* getEffectLayerEditor();
					/// <summary>
					///结束编辑
					/// </summary>
					/// <returns></returns>	
					ev_void endEditing();
					/// <summary>
					///清空选择集
					/// </summary>
					/// <returns></returns>	
					ev_void clearLayerSelection();

					/// <summary>
					///设置是否正处于飞行状态
					/// </summary>
					/// <returns></returns>	
					ev_void setIsFlying(const ev_bool flying)
					{
						mIsFlying = flying;
					}
					/// <summary>
					///获取是否正处于飞行状态
					/// </summary>
					/// <returns></returns>	
					ev_bool getIsFlying()const
					{
						return mIsFlying;
					}

					/// <summary>
					/// 获取指定的合成器是否启用
					/// </summary>
					/// <returns></returns>	
					ev_bool getCompositorEnabled(EarthView::World::Spatial3D::Compositor3DType type);
					/// <summary>
					/// 设置指定的合成器是否启用
					/// </summary>
					/// <returns>true,设置成功;false,失败</returns>	
					ev_bool setCompositorEnabled(EarthView::World::Spatial3D::Compositor3DType type,ev_bool enabled);

					/// <summary>
					/// 获取启用的合成器的数量
					/// </summary>
					/// <returns></returns>	
					ev_uint32 getNumEnabledCompositors() const{return mEnabledCompositorTypes.size();}

					/// <summary>
					/// 获取指定序号的合成器
					/// </summary>
					/// <returns></returns>	
					EarthView::World::Spatial3D::Compositor3DType getEnabledCompositor (ev_uint32 index)const; 
					
					/// <summary>
					/// 定位相机（均匀飞行）
					/// </summary>
					/// <param name="target">目标点</param>
					/// <param name="tilt">相机的倾角</param>
					/// <param name="heading">相机的倾角</param>
					/// <param name="distance">相机到目标点的距离</param>
					/// <returns></returns>
					ev_void locate2(_in const EarthView::World::Spatial::Math::CVector3& target,_in const EarthView::World::Spatial::Math::CDegree& tilt, _in const EarthView::World::Spatial::Math::CDegree& heading,_in ev_real64 distance);
			

					/// <summary>
					/// 禁用所有合成器
					/// </summary>
					/// <returns></returns>	
					ev_void disableAllCompositors();

					/// <summary>
					/// 设置相机的最大海拔
					/// </summary>
					/// <param name="maxAltitude">海拔</param>
					/// <returns></returns>
					ev_void setCameraMaxLimitAltitude(_in ev_real64 maxAltitude);
					/// <summary>
					/// 获取相机的最大海拔
					/// </summary>
					/// <returns></returns>
					ev_real64 getCameraMaxLimitAltitude() const;
					
					/// <summary>
					///设置GlobeLockCameraHandler是否可用
					/// <param name="enbale">是否可用</param>
					/// </summary>
					/// <returns></returns>
					ev_void setGlobeLockCameraHandlerEnable(ev_bool enable);
					/// <summary>
					///获取GlobeLockCameraHandler是否可用
					/// </summary>
					/// <returns>是否可用</returns>
					ev_bool getGlobeLockCameraHandlerEnable() const;
					/// <summary>
					///设置GlobeCamUnderGroundHandler是否可用
					/// <param name="enbale">是否可用</param>
					/// </summary>
					/// <returns></returns>
					ev_void setGlobeCamUnderGroundHandlerEnable(ev_bool enable);
					/// <summary>
					///获取GlobeCamUnderGroundHandler是否可用
					/// </summary>
					/// <returns>是否可用</returns>
					ev_bool getGlobeCamUnderGroundHandlerEnable() const;

					/// <summary>
					/// 是否启用谷歌方式的相机漫游器
					/// </summary>
					/// <param name="enable"></param> 
					/// <returns></returns>
					ev_void setGoogleCameraManipulatorEnabled(_in ev_bool enable);
					/// <summary>
					/// 获取是否启用谷歌方式的相机漫游器
					/// </summary>
					/// <param name="enable"></param> 
					/// <returns></returns>
					ev_bool getGoogleCameraManipulatorEnabled() const;

					/// <summary>
					/// 启用/禁用惯性
					/// </summary>
					/// <param name="enable"></param>
					/// <returns></returns>
					void setInertialPanEnabled(_in ev_bool enable);

					/// <summary>
					/// 设置相机（地下镜头）在局部场景模式时的移动方式,
					/// </summary>
					/// <param name="enable">true,相机在平面内移动，false,相机在大圆上移动</param>
					/// <returns></returns>
					ev_void setUnderGroundCameraMoveAtPlane(_in ev_bool enable);

					/// <summary>
					/// 获取相机（地下镜头）在局部场景模式时是否沿平面移动,
					/// </summary>			
					/// <returns></returns>
					ev_bool getUnderGroundCameraMoveAtPlane();

					/// <summary>
					///是否显示图层信息
					/// </summary>
					/// <param name="show"></param>
					/// <returns></returns>
					ev_void setShowLayerInfo(ev_bool show);

					/// <summary>
					///设置是否允许自动计算相机的fov角
					/// </summary>
					/// <param name="enable"></param>
					/// <returns></returns>
					ev_void setAutoCalculateCameraFov(_in ev_bool enable);

					/// <summary>
					///获取是否允许自动计算相机的fov角
					/// </summary>
					/// <param name="enable"></param>
					/// <returns></returns>
					ev_bool getAutoCalculateCameraFov() const;
					/// <summary>
					///重置相机，回到工程文件中保存的位置(渲染窗口出现后才有效)
					/// </summary>
					/// <returns></returns>
					void resetCamera();
					/// <summary>
					///让相机的上方向指北(渲染窗口出现后才有效)
					/// </summary>
					/// <returns></returns>
					void setCameraUpToNorth();

					CGlobeGrid* getGrid()const
					{
						return mGlobeGrid;
					}

				public:
					ev_uint32 winId;
					
				private:
					EarthView::World::Spatial3D::CLayer3DEditor* mpModelLayer3dEditor;
					EarthView::World::Spatial3D::CLayer3DEditor* mpEffectLayer3dEditor;

				protected:
					/// <summary>
					/// 停止惯性
					/// </summary>
					/// <returns></returns>
					void stopInertiaPan();

				protected:
					C_DISABLE_COPY(CGlobeControl);
					friend class CGlobeControlManager;

					/// <summary>
					///显示网格
					/// </summary>
					/// <returns></returns>	
					ev_void showGrid();
					/// <summary>
					///隐藏网格
					/// </summary>
					/// <returns></returns>	
					ev_void hideGrid();
					/// <summary>
					///创建海水的四叉树
					/// </summary>
					/// <param name="seaType">海水类型</param>
					/// <returns></returns>	
					ev_void createSeaQuadMap(EarthView::World::Spatial3D::SeaType seaType);

					void initParams();
					ev_void initScene();

					ev_void fireSelectionChanged();
					ev_void fireSelectionChanged_internal(EarthView::World::Graphic::RaySceneQueryResult& result);	
					ev_void fireSelectionChanged_internal(EarthView::World::Graphic::SceneQueryResult& result);
					ev_void fireSelectionChanged_internal(EarthView::World::Spatial3D::CGlobeSelection& result);
					ev_void fireSelectionChanged_internal(EarthView::World::Graphic::RaySceneQueryResult& rayResult, EarthView::World::Spatial3D::CGlobeSelection& clamplayerResult);

					ev_void fillGlobeSelection(EarthView::World::Graphic::RaySceneQueryResult& result,EarthView::World::Spatial3D::CGlobeSelection& totalResult);
					ev_void fillGlobeSelection(EarthView::World::Graphic::SceneQueryResult& result,EarthView::World::Spatial3D::CGlobeSelection& totalResult);
					ev_void fillGlobeSelection(EarthView::World::Spatial3D::CGlobeSelection& result,EarthView::World::Spatial3D::CGlobeSelection& totalResult);
				ev_private:					
					ev_void setSelection(EarthView::World::Graphic::RaySceneQueryResult& result);					
					ev_void setSelection(EarthView::World::Graphic::SceneQueryResult& result);

		protected:				

					EVString mName;
					CGlobeControlManager* mParent;
					CGlobeGrid* mGlobeGrid;

					static vector<EarthView::World::Spatial3D::Controls::CGlobeControl*> s_mControlList;
					EarthView::World::Spatial3D::Controls::CWidgetManager* mWidgetManager;              

					CGeoCameraListener* mCameraListener;

					CChildViewportMap mChildViewports;

					//CTrackAnimationVector mtrackAnimation;					

					ev_bool mShowGrid;
					EarthView::World::Spatial3D::SeaType mSeaType;
					ev_int32						     mSeaVertexNum;

					list<EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*> mQueryListeners;

					enum SelectionResultType
					{
						SRT_Unknown = 0,

						SRT_Envelope = 1,

						SRT_Ray = 2,						

						SRT_Layer = 4
					};

					ev_int32 mSelectionResultType;
					EarthView::World::Graphic::RaySceneQueryResult mRaySelectionResult;					
					EarthView::World::Graphic::SceneQueryResult mEnvelopeSelectionResult;
					EarthView::World::Spatial3D::CGlobeSelection mLayerSelectionResult;					
					EarthView::World::Core::CRecursiveMutex mSelectionMutex;

					ev_bool mIsLockingTarget;

					ev_bool mLastUpdateTile;
					ev_bool mLastUpdateDSMTile;

					ev_bool mFlyFinishedLastFrame;

					ev_bool mCanAutoCalculateCameraFov;

				protected:
					/*static CCmdTileType msCmdTileType;
					static CCmdImageTransparency msCmdImageTransparency;
					static CCmdShadowVisibility msCmdShadowVisibility;
					static CCmdAerosphereVisibility msCmdAeroVisibility;
					static CCmdOceanVisibility msCmdOceanVisibility;
					static CCmdGridVisibility msCmdGridVisibility;
					static CCmdUnderGroundMode msCmdUnderGroundMode;
					static CCmdPlaneBase msCmdPlaneBase;
					static CCmdCameraControlDepth msCmdCameraControlDepth;
					static CCmdCameraPostion msCmdCameraPostion;*/

					EarthView::World::Core::CStringInterface mStringInterface;

					vector<EarthView::World::Spatial3D::Compositor3DType> mEnabledCompositorTypes;
				private:
					EarthView::World::Spatial::Math::CMatrix4 mPreCameraMat4;
					EarthView::World::Spatial::Math::CMatrix4 mCurrentCameraMat4;
					ev_uint32 mStartTime;
					ev_uint32 mStopTime;
					ev_bool mIsStartTime;
					ev_bool mIsSender;
					ev_bool mIsOperationOver;
					ev_bool mIsFlying;

					typedef vector<EarthView::World::Spatial3D::Controls::CGlobeControlListener*> CGlobeControlListenerVector;
					CGlobeControlListenerVector mGlobeControlListenerVec;
					EarthView::World::Core::CRecursiveMutex mGlobeControlListenerMtx;
                public:
					/// <summary>
					/// 获取EarthView::World::Core::CStringInterface对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Core::CStringInterface对象</returns>
					const EarthView::World::Core::CStringInterface& getStringInterface()const;

					/// <summary>
					/// 获取EarthView::World::Core::CStringInterface对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Core::CStringInterface对象</returns>
					EarthView::World::Core::CStringInterface& getStringInterface();
				};
			}
		}
	}
}

#endif



