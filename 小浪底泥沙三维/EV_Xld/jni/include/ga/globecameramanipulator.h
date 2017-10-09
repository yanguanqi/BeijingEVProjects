#ifndef _CGLOBECAMERAMANIPULATOR_H_
#define _CGLOBECAMERAMANIPULATOR_H_

#include "ga/evga_config.h"
#include "mathengine/ray.h"
#include "ga/cameramanipulator.h"

#include "mathengine/matrix4.h"
#include "mathengine/vector3.h"
#include "graphic/scenenode.h"
#include "ga/globelockcamerahandler.h"


#include "graphic/hardwarepixelbuffer.h"
#include "graphic/rendertexture.h"
#include "graphic/compositormanager.h"
#include "core/stringdefines.h"
#include "graphic/controllermanager.h"
#include "graphic/framelistener.h"
#include "graphic/material.h"
#include "graphic/gpuprogramparams.h"
#include "core/guid.h"

#define  MOVEWORLD 0

class CUnderGroundRenderObjects;

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
		namespace Spatial3D
		{
			class CGlobeCamera;
			class CGeoSceneManager;
		}
	}
}


namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class COverlay;
			class CPanelOverlayElement;
		}
		namespace Spatial3D
		{
			namespace Controls
			{
				class CGotoEvent;
				class CLocationEvent;
				class EV_GA_DLL CGoToTargetListener:public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGoToTargetListener(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGoToTargetListener();
					/// <summary>
					/// 析析构数
					/// </summary>
					virtual ~CGoToTargetListener();
				public:
					/// <summary>
					/// 相机到达Goto终点时触发
					/// </summary>
					/// <param name="globeCamera">相机</param>
					/// <returns></returns>
					virtual void cameraHasGetAtTarget(_in EarthView::World::Spatial3D::CGlobeCamera* globeCamera);

					/// <summary>
					/// 停止Goto时触发
					/// </summary>
					/// <param name="globeCamera">相机</param>
					/// <returns></returns>
					virtual void stopGoto(_in EarthView::World::Spatial3D::CGlobeCamera* globeCamera);
				};				
				class EV_GA_DLL CGlobeCameraManipulator:public EarthView::World::Spatial3D::Controls::CCameraManipulator
				{
				public:
					enum IntersectMode
					{
						RAY_INTERSECT = 0,
						CIRCLE_INTERSECT = 1
					};
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="manager">场景管理器</param>
					/// <param name="globecamera">相机</param>
					/// <param name="viewport">视口</param>
					/// <returns></returns>
					CGlobeCameraManipulator(_in EarthView::World::Spatial3D::CGeoSceneManager* manager,_in EarthView::World::Spatial3D::CGlobeCamera* globecamera,_in EarthView::World::Graphic::CViewport* viewport);
ev_private:
					CGlobeCameraManipulator(_in EarthView::World::Core::CNameValuePairList* pList);
					/// <summary>
					/// 获取地下渲染对象
					/// </summary>
					/// <returns></returns>
					CUnderGroundRenderObjects* getUnderGroundRenderObjects();
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CGlobeCameraManipulator();
					/// <summary>
					/// 由屏幕上的点计算出射线
					/// </summary>
					/// <param name="x">屏幕上的Ｘ坐标</param>
					/// <param name="y">屏幕上的Y坐标</param>
					/// <returns></returns>
					EarthView::World::Spatial::Math::CRay screenToScene(_in ev_real32 x,_in ev_real32 y);
					/// <summary>
					///创建屏幕渲染对象
					/// </summary>
					/// <returns></returns>
					ev_void createOverlay();
					/// <summary>
					/// 设置是否与模型求交
					/// </summary>
					/// <param name="intersectModel">是否与模型求交</param>
					/// <returns></returns>
					void setIntersectModel(_in ev_bool intersectModel);
					/// <summary>
					/// 获取是否与模型求交
					/// </summary>
					/// <returns></returns>
					ev_bool getIntersectModel() const;

					/// <summary>
					/// 设置是否与摄影测量模型求交
					/// </summary>
					/// <param name="intersectModel">是否与摄影测量模型求交</param>
					/// <returns></returns>
					void setIntersectOBQ(_in ev_bool intersectOBQ);
					/// <summary>
					/// 获取是否与摄影测量模型求交
					/// </summary>
					/// <returns></returns>
					ev_bool getIntersectOBQ() const;

					/// <summary>
					/// 设置求交模式
					/// </summary>
					/// <param name="intersectMode">RAY_INTERSECT，射线求交。CIRCLE_INTERSECT，大圆求交</param>
					/// <returns></returns>
					ev_void setIntersectMode(_in IntersectMode intersectMode);
					/// <summary>
					/// 获取求交模式
					/// </summary>
					/// <returns></returns>
					IntersectMode getIntersectMode();

					/// <summary>
					///由屏幕上的点返回与场景相交的点
					/// </summary>
					/// <param name="x">屏幕上的Ｘ坐标</param>
					/// <param name="y">屏幕上的Y坐标</param>
					/// <param name="interectPoint">相交中的点</param>
					/// <returns></returns>
					ev_bool intersect(_in ev_real32 x,_in ev_real32 y,_in EarthView::World::Spatial::Math::CVector3& interectPoint)
					{
						return intersect(x,y,interectPoint,true,true,true,false);
					}
					/// <summary>
					///由屏幕上的点返回与场景相交的点
					/// </summary>
					/// <param name="x">屏幕上的Ｘ坐标</param>
					/// <param name="y">屏幕上的Y坐标</param>
					/// <param name="interectPoint">射线交中的点</param>
					/// <param name="intersecModel">是否与模型求交</param>
					/// <param name="intersectSea">是否与海水求交</param>
					/// <param name="positiveSide">是否与正面求交</param>
					/// <param name="negativeSide">是否与反面求交</param>
					/// <returns></returns>
					ev_bool intersect(_in ev_real32 x,_in ev_real32 y,_in EarthView::World::Spatial::Math::CVector3& interectPoint,ev_bool intersecModel,ev_bool intersectSea,ev_bool positiveSide, ev_bool negativeSide);
					/// <summary>
					///由屏幕上的点返回与场景相交的点
					/// </summary>
					/// <param name="x">屏幕上的Ｘ坐标</param>
					/// <param name="y">屏幕上的Y坐标</param>
					/// <param name="interectPoint">射线交中的点</param>
					/// <param name="intersecModel">是否与模型求交</param>
					/// <param name="intersectSea">是否与海水求交</param>
					/// <param name="positiveSide">是否与正面求交</param>
					/// <param name="negativeSide">是否与反面求交</param>
					/// <param name="modelIntersected">是否是模型的点</param>
					/// <returns></returns>
					ev_bool intersect(_in ev_real32 x,_in ev_real32 y,_in EarthView::World::Spatial::Math::CVector3& interectPoint,ev_bool intersecModel,ev_bool intersectSea,ev_bool positiveSide, ev_bool negativeSide ,ev_bool& modelIntersected);
					/// <summary>
					///设置相机倾角的范围
					/// </summary>
					/// <param name="min">最小值</param>
					/// <param name="max">最大值</param>
					/// <returns></returns>
					ev_void setCameraTiltRange(_in const EarthView::World::Spatial::Math::CDegree& min,_in const EarthView::World::Spatial::Math::CDegree& max);
					/// <summary>
					///计算海拔的容差
					/// </summary>
					/// <param name="v">坐标点</param>
					/// <param name="manager">场景管理器/param>
					/// <returns></returns>
					ev_real64 computeAltitudeDelta(_in const EarthView::World::Spatial::Math::CVector3& v, _in EarthView::World::Spatial3D::CGeoSceneManager* manager);
					/// <summary>
					///是否需要重置相机
					/// </summary>
					/// <param name="m">相机的矩阵</param>
					/// <returns></returns>
					ev_bool needResetCamera(_in const EarthView::World::Spatial::Math::CMatrix4& m);
					/// <summary>
					///是否需要重置相机
					/// </summary>
					/// <param name="m">相机的矩阵</param>
					/// <param name="distance">相机的距离</param>
					/// <returns></returns>
					ev_bool needResetCamera(_in const EarthView::World::Spatial::Math::CMatrix4& m,ev_real64& distance);
					/// <summary>
					///根据相机的海拔计算出旋转的比率
					/// </summary>
					/// <param name="cameraAltitude">相机的海拔</param>
					/// <returns></returns>
					ev_real64 computeRotationRatio(_in ev_real64 cameraAltitude);
					/// <summary>
					///处理鼠标事件
					/// </summary>
					/// <param name="mouseEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleMouseEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
					/// <summary>
					///处理帧事件
					/// </summary>
					/// <param name="mouseEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* frameEvent);
					/// <summary>
					///处理键盘事件
					/// </summary>
					/// <param name="mouseEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleKeyEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent);
					/// <summary>
					///处理鼠标滚轮事件
					/// </summary>
					/// <param name="mouseEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleMouseWheelEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
					/// <summary>
					///处理自定义事件
					/// </summary>
					/// <param name="mouseEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleUserEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* useEvent);
					/// <summary>
					///在相机处旋转
					/// </summary>
					/// <param name="angleRadian">转动的角度</param>
					/// <returns></returns>
					void rotationAtCameraRight(_in const EarthView::World::Spatial::Math::CRadian& angleRadian);
					/// <summary>
					///在目标点处旋转
					/// </summary>
					/// <param name="angleRadian">转动的角度</param>
					/// <returns></returns>
					void rotationAtTargetRight(_in const EarthView::World::Spatial::Math::CRadian& angleRadian);
					/// <summary>
					///鼠标右键移动的处理
					/// </summary>
					/// <param name="lastEvent">前一个鼠标事件</param>
					/// <param name="mouseEvent">当前鼠标事件</param>
					/// <returns></returns>
					ev_bool rightButtonMoveImpl(_in EarthView::World::Spatial::SystemUI::CGUIEvent* lastEvent,_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
					/// <summary>
					///鼠标左键移动的处理
					/// </summary>
					/// <param name="lastEvent">前一个鼠标事件</param>
					/// <param name="mouseEvent">当前鼠标事件</param>
					/// <returns></returns>
					ev_bool leftButtonMoveImpl(_in EarthView::World::Spatial::SystemUI::CGUIEvent* lastEvent,_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
					/// <summary>
					///指示鼠标是否移动
					/// </summary>
					/// <param name="lastEvent">前一个鼠标事件</param>
					/// <param name="mouseEvent">当前鼠标事件</param>
					/// <returns></returns>
					ev_bool calculateMoveable(_in EarthView::World::Spatial::SystemUI::CGUIEvent* const firstEvent,_in EarthView::World::Spatial::SystemUI::CGUIEvent* const secondEvent);
					/// <summary>
					///计算缩放比率
					/// </summary>
					/// <param name="mouseWheelDelta">滚轮变化量</param>
					/// <returns></returns>
					ev_real64 calculateZoomFactor(_in ev_real32 mouseWheelDelta);

					//ev_bool pickingRayIntersection(ev_int32 screenX,ev_int32 screenY,ev_real64 worldradius,ev_bool isOutside,ev_real64& latitude,ev_real64& longitude);

					//ev_bool pickingRayIntersection(const EarthView::World::Spatial::Math::CVector3& lookVector,const EarthView::World::Spatial::Math::CVector3& observerPostion,ev_real64 worldradius,EarthView::World::Spatial::Math::CVector3& intersectionPostion);
					/// <summary>
					///计算旋转角
					/// </summary>
					/// <param name="currentVector">当前方向</param>
					/// <returns></returns>
					ev_real64 computeRoll(_in const EarthView::World::Spatial::Math::CVector3& currentVector);
					/// <summary>
					///返回相机
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial3D::CGlobeCamera* getGlobeCamera()
					{
						return mpGlobeCamera;
					}
					/// <summary>
					///在指定屏幕点处旋转和缩放
					/// </summary>
					/// <param name="x">屏幕点的Ｘ坐标</param>
					/// <param name="y">屏幕点的Y坐标</param>
					/// <param name="degree">旋转的角度</param>
					/// <param name="zoomRatio">缩放比例</param>
					/// <returns></returns>
					ev_void rotationAndZoomCamera(ev_real64 x,ev_real64 y,ev_real64 degree,ev_real64 zoomRatio);
					/// <summary>
					///在指定屏幕点处倾斜
					/// </summary>
					/// <param name="x">屏幕点的Ｘ坐标</param>
					/// <param name="y">屏幕点的Y坐标</param>
					/// <param name="degree">倾斜的角度</param>
					/// <returns></returns>
					ev_void tiltCamera(ev_real64 x,ev_real64 y,ev_real64 degree);
					/// <summary>
					///进入地下模式
					/// </summary>
					/// <returns></returns>
					ev_void enterUnderGroundMode();
					/// <summary>
					///退出地下模式
					/// </summary>
					/// <returns></returns>
					ev_void exitUnderGroundMode();
					/// <summary>
					///重设相机的海拔
					/// </summary>
					/// <returns></returns>
					ev_void resetCamAltitude();
					/// <summary>
					///开启淡入淡出合成器
					/// </summary>
					/// <param name="time">合成器开启后的持续时间（秒）</param>
					/// <returns></returns>
					ev_void fadeInOut(ev_real64 time);

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
					/// 停止惯性
					/// </summary>
					/// <returns></returns>
					void stopInertiaPan();

					/// <summary>
					/// 启用/禁用惯性
					/// </summary>
					/// <param name="enable"></param>
					/// <returns></returns>
					void setInertialPanEnabled(_in ev_bool enable);

					/// <summary>
					/// 启用/禁用双击移动
					/// </summary>
					/// <param name="enable"></param>
					/// <returns></returns>
					ev_void setMoveToEnable(_in ev_bool enable);

					/// <summary>
					/// 获取是否开启双击移动
					/// </summary>
					/// <param name="enable"></param>
					/// <returns></returns>
					ev_bool getMoveToEnable();

					/// <summary>
					/// 设置磙轮缩放的比率
					/// </summary>
					/// <param name="mouseWheelRatio"></param>
					/// <returns></returns>
					ev_void setMouseWheelRatio(_in ev_real64 mouseWheelRatio);
					/// <summary>
					/// 获取磙轮缩放的比率
					/// </summary>
					/// <param name="mouseWheelRatio"></param>
					/// <returns></returns>
					ev_real64 getMouseWheelRatio();

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

#if !MOVEWORLD
					ev_bool calculateTiltAble(_in const EarthView::World::Spatial::Math::CVector3& cameraZAxis,_in const EarthView::World::Spatial::Math::CMatrix3& rotation);
#endif
               ev_private:
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

				protected:
					void go2(ev_real64 time);

					void location(ev_real64 time);

					void moveTo(ev_real64 time);

					void setupFadeInOut();

					ev_void reboundCamera(const EarthView::World::Spatial::Math::CMatrix4& viewProjectMatrixInverse);

					ev_bool copyCamera(_in EarthView::World::Spatial3D::CGlobeCamera* src, _in EarthView::World::Spatial3D::CGlobeCamera* dst);

					/// <summary>
					///鼠标左键移动的处理
					/// </summary>
					/// <param name="lastEvent">前一个鼠标事件</param>
					/// <param name="mouseEvent">当前鼠标事件</param>
					/// <returns></returns>
					ev_bool leftButtonMove(_in EarthView::World::Spatial::SystemUI::CGUIEvent* lastEvent,_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);

				protected:
					EarthView::World::Spatial3D::CGeoSceneManager* mpGeoSceneManger;
					EarthView::World::Spatial3D::CGlobeCamera* mpGlobeCamera;
					EarthView::World::Spatial3D::CGlobeCamera *mpLastCamera;

					ev_bool mIntersectModel;
					ev_bool mIntersectOBQ;

					ev_bool mCanRecordOriginPoint;
					ev_real64 mOriginLatitude;
					ev_real64 mOriginLongitude;

					ev_real64 mPreLatitude;
					ev_real64 mPreLongitude;
					ev_real64 mOriginTargetLatitude;
					ev_real64 mOriginTargetLongitude;

					EarthView::World::Spatial::Math::CDegree mMaxTilt;
					EarthView::World::Spatial::Math::CDegree mMinTilt;

#if MOVEWORLD
					EarthView::World::Spatial::Math::CVector3 mRotationAxis;
#else
					//CMatrix4d mRotationCoordinateSystemToWorldCoordinateSystem;
#endif
					EarthView::World::Spatial::Math::CVector3 mOriginVector;


					EarthView::World::Spatial::Math::CDegree mCameraInitialLatitude;
					EarthView::World::Spatial::Math::CDegree mCameraInitialLongitude;
					EarthView::World::Spatial::Math::CDegree mCameraInitialHeading;
					EarthView::World::Spatial::Math::CDegree mCameraInitialTilt;
					ev_real64 mCameraInitialAlitude;
					ev_real64 mCameraModifyAltitude;
					EarthView::World::Graphic::COverlay* mMouseAnchorLayer;
					EarthView::World::Graphic::CPanelOverlayElement* mMouseAnchorOverlayElemt;

					EarthView::World::Spatial::Math::CVector3 mLastIntersectPoint;
					ev_bool mLastIntersected;
					ev_bool mLastIntersectedWithModel;
					ev_int32 mLastStepZoomTickCount;
					ev_real64 mTempLength;
					ev_real64 mRotationRatio;

					EarthView::World::Spatial3D::CGlobeCamera* mpLastFrameCamera;

					ev_bool mRotatingAtCameraRight;
					ev_bool mMouseRightButtonMove;
					EarthView::World::Spatial::Math::CRadian mRotationAngleRadian;

					CUnderGroundRenderObjects* mUnderGroundRenderObjects;

					EarthView::World::Spatial3D::Controls::CGotoEvent* mGotoEvent;
					ev_real64 mDistanceToTarget;
					ev_real64 mTotalTime;
					ev_real64 mMoveTime;
					ev_real64 mFirstAngleAcceleration;
					ev_real64 mSecondAngleAcceleration;
					ev_real64 mThirdAngleAcceleration;
					ev_real64 mFirstAngleVelocity;
					ev_real64 mSecondAngleVelocity;
					ev_real64 mSlowAngleDistance;
					ev_real64 mUpAcceleration;
					ev_real64 mDownAcceleration;
					ev_real64 mDownAcceleration1;
					ev_real64 mDownVelocity;
					ev_real64 mDownVelocity1;
					ev_real64 mSlowDownAltitude;
					ev_real64 mTiltAccelerationUp;
					ev_real64 mtiltAccelerationDown;
					ev_bool mGoto;
					ev_real64 mStartGotoTime;
					ev_real64 mStartAltitude;
					EarthView::World::Spatial::Math::CDegree mStartGotoLatitude;
					EarthView::World::Spatial::Math::CDegree mStartGotoLongitude;
					EarthView::World::Spatial::Math::CDegree mStartGotoHeading;
					EarthView::World::Spatial::Math::CDegree mStartGotoTilt;
					ev_real64 mStartGotoAltitude;
					ev_real64 mStartGotoModifyAltitude;

					EarthView::World::Spatial3D::Controls::CGotoEvent* mStartGotoEvent;
					EarthView::World::Spatial3D::Controls::CGotoEvent* mStopGotoEvent;
					ev_real64 mModifyAltitudeDownAcceleration;
					ev_real64 mModifyAltitudeAtStop;
					ev_real64 mModifyAltitudeUpAcceleration;
					ev_real64 mSecondPartDistance;
					ev_real64 mDistanceIncreaseAcceleration;
					ev_real64 mDistanceMinishAcceleration;

					ev_bool mStartLocation;
					EarthView::World::Spatial3D::Controls::CLocationEvent* mStartLocationEvent;
					EarthView::World::Spatial3D::Controls::CLocationEvent* mStopLocationEvent;
					ev_real64 mAngleDelta;
					EarthView::World::Spatial::Math::CVector3 mDirecto1;
					EarthView::World::Spatial::Math::CVector3 mRotationAxis;

					ev_bool mEnabledInertiaPan;
					ev_bool mNeedInertiaPan;
					ev_real64 mLeftMouseDownTime;
					ev_real64 mLeftMouseUpTime;
					ev_real64 mPanTimeSpan;

					EarthView::World::Graphic::CSceneNode* mUnderGroundLockTargetNode;

					EarthView::World::Graphic::CRenderTarget* mRttTarget;
					ev_bool mFadeInOutEnabled;
					ev_real64 mFadeInOutTime;
					EarthView::World::Graphic::CMaterialPtr mFadeInOutMaterial;
					EarthView::World::Graphic::GpuProgramParametersSharedPtr mFadeInOutParameters;
					EarthView::World::Graphic::CPass* mActiveFadeInOutPass;
					EarthView::World::Graphic::CTexturePtr mFadeInOutTexture;
					EVString mFadeInOutTextureName;
					ev_real64 mGotoTimeRatio;
ev_private:
					typedef ev_set<EarthView::World::Spatial3D::Controls::CGoToTargetListener*> CGoToTargetListenerSet;
					CGoToTargetListenerSet mGotoTargetListenerSet;
					ev_bool mSpaceKeyHasUp;
					ev_bool mSpaceKeyDoubleUp;
					ev_real64 mSpaceKeyUpTime;
					ev_bool mMoveTo;
					ev_bool mEnableMoveTo;
					EarthView::World::Spatial3D::Controls::CGotoEvent* mMoveToStartEvent;
					EarthView::World::Spatial3D::Controls::CGotoEvent* mMoveToStopEvent;
					ev_real64 mStartMoveTime;
					IntersectMode mIntersectMode;
					ev_real64 mMouseWheelRatio;

					ev_bool mNeedRecordResetCamere;
					EarthView::World::Spatial::Math::CVector3 mRecordTarget;
					EarthView::World::Spatial::Math::CVector3 mRecordObserver;
					EarthView::World::Spatial::Math::CVector3 mRecordUpVector;
				};
				class EV_GA_DLL CGlobeCamUnderGroundHandler:public EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="sceneManager">场景管理器</param>
					/// <param name="camera">相机</param>
					/// <param name="cameraManipulator">相机漫游器</param>
					/// <returns></returns>
					CGlobeCamUnderGroundHandler(_in EarthView::World::Spatial3D::CGlobeCamera* camera,_in EarthView::World::Spatial3D::CGeoSceneManager* sceneManager,_in EarthView::World::Graphic::CViewport* viewport,_in EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* cameraManipulator);
ev_private:
					CGlobeCamUnderGroundHandler(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CGlobeCamUnderGroundHandler();
					/// <summary>
					/// 事件处理
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns>事件是否已被处理</returns>
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 判断传入点高程是否大于指定高程
					/// </summary>
					/// <param name="v">传入点</param>
					/// <returns>传入点高程与指定高程的高差</returns>
					virtual ev_real64 computeAltitudeDelta(_in const EarthView::World::Spatial::Math::CVector3& v);
					/// <summary>
					/// 鼠标移动事件处理
					/// </summary>
					/// <param name="mouseEvent">鼠标事件对象</param>
					/// <returns>事件是否已被处理</returns>
					virtual ev_bool handleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
					/// <summary>
					/// 鼠标滚轮事件处理
					/// </summary>
					/// <param name="mouseEvent">鼠标事件对象</param>
					/// <returns>事件是否已被处理</returns>
					virtual ev_bool handleMouseWheelEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
					/// <summary>
					/// 鼠标按下事件处理
					/// </summary>
					/// <param name="mouseEvent">鼠标事件对象</param>
					/// <returns>事件是否已被处理</returns>
					virtual ev_bool handleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
					/// <summary>
					/// 鼠标抬起事件处理
					/// </summary>
					/// <param name="mouseEvent">鼠标事件对象</param>
					/// <returns>事件是否已被处理</returns>
					virtual ev_bool handleMouseUp(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
ev_private:
					/// <summary>
					/// 判断直线与平面是否相交
					/// </summary>
					/// <param name="ray">射线</param>
					/// <param name="normal">平面法线</param>
					/// <param name="point">平面上的点</param>
					/// <param name="intersectPoint">交点</param>
					/// <returns>是否相交</returns>
					ev_bool intersect(_in const EarthView::World::Spatial::Math::CRay& ray,_in EarthView::World::Spatial::Math::CVector3& normal,_in EarthView::World::Spatial::Math::CVector3& point, _inout EarthView::World::Spatial::Math::CVector3& intersectPoint);
					/// <summary>
					/// 获取变换矩阵
					/// </summary>
					/// <param name="ray1">第一条射线</param>
					/// <param name="ray3">第二条射线</param>
					/// <param name="target">目标点</param>
					/// <param name="outMatrix">传出矩阵</param>
					/// <returns>变换矩阵是否计算成功</returns>
					ev_bool getTransformMatrix(_in const EarthView::World::Spatial::Math::CRay& ray1,_in const EarthView::World::Spatial::Math::CRay& ray3,_in EarthView::World::Spatial::Math::CVector3 target, _inout EarthView::World::Spatial::Math::CMatrix3& outMatrix);
					/// <summary>
					/// 获取射线与地形相交时的变换矩阵
					/// </summary>
					/// <param name="ray1">第一条射线</param>
					/// <param name="ray2">第二条射线</param>
					/// <param name="outMatrix">传出矩阵</param>
					/// <returns>变换矩阵是否计算成功</returns>
					ev_bool getTerrinTransMatrix(_in const EarthView::World::Spatial::Math::CRay& ray1,_in const EarthView::World::Spatial::Math::CRay& ray2,_inout EarthView::World::Spatial::Math::CMatrix3& outMatrix);
					/// <summary>
					/// 计算射线与球面的交点
					/// </summary>
					/// <param name="lookVector">射线方向</param>
					/// <param name="observerPostion">射线起点</param>
					/// <param name="worldradius">球面半径</param>
					/// <param name="intersectionPostion">返回交点</param>
					/// <returns>交点是否计算成功</returns>
					ev_bool pickingRayIntersection(_in const EarthView::World::Spatial::Math::CVector3& lookVector,_in const EarthView::World::Spatial::Math::CVector3& observerPostion,
						_in ev_real64 worldradius,_inout EarthView::World::Spatial::Math::CVector3& intersectionPostion);
					/// <summary>
					/// 判断射线是否地下渲染物相交
					/// </summary>
					/// <param name="x">鼠标屏幕坐标x</param>
					/// <param name="y">鼠标屏幕坐标y</param>
					/// <returns>交点是否计算成功</returns>
					ev_bool isIntersectWithUnderGroundObjects(_in ev_int32 x,_in ev_int32 y);
					/// <summary>
					/// 判断射线是否地下渲染物相交
					/// </summary>
					/// <param name="x">鼠标屏幕坐标x</param>
					/// <param name="y">鼠标屏幕坐标y</param>
					/// <param name="intersectionPostion">返回交点</param>
					/// <returns>交点是否计算成功</returns>
					ev_bool isIntersectWithUnderGroundObjects(_in ev_int32 x,_in ev_int32 y, _inout EarthView::World::Spatial::Math::CVector3& intersectionPostion,_inout ev_bool& isIntersectWithWall);
					/// <summary>
					/// 绕指定点旋转
					/// </summary>
					/// <param name="ratationPoint">旋转点</param>
					/// <param name="head">偏航角</param>
					/// <param name="tilt">俯仰角</param>
					/// <returns>是否旋转成功</returns>
					ev_bool rotationAtPoint(_in EarthView::World::Spatial::Math::CVector3 ratationPoint,_in ev_real64 head,_in ev_real64 tilt);
					/// <summary>
					/// 以球面平移
					/// </summary>
					/// <param name="ray1">第一条射线</param>
					/// <param name="ray2">第二条射线</param>
					/// <param name="radius">球面半径</param>
					/// <returns></returns>
					ev_void panAtGround(_in EarthView::World::Spatial::Math::CRay& ray1,_in EarthView::World::Spatial::Math::CRay& ray2,_in ev_real64 radius);
					/// <summary>
					/// 以地面平移
					/// </summary>
					/// <param name="ray1">第一条射线</param>
					/// <param name="ray2">第二条射线</param>
					/// <returns></returns>
					ev_void panAtTerrain(_in const EarthView::World::Spatial::Math::CRay& ray1,_in const EarthView::World::Spatial::Math::CRay& ray2);
					/// <summary>
					/// 以模型平移
					/// </summary>
					/// <param name="ray1">射线</param>
					/// <param name="mouseEvent">鼠标事件</param>
					/// <param name="alt">模型选中点高程</param>
					/// <returns></returns>
					ev_void panAtModel(_in const EarthView::World::Spatial::Math::CRay& ray1,_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent,_in ev_real64 alt);
					/// <summary>
					/// 以指定点所在平面平移
					/// </summary>
					/// <param name="ray1">射线</param>
					/// <param name="mouseEvent">鼠标事件</param>
					/// <param name="alt">指定点高程</param>
					/// <param name="target">指定点</param>
					/// <returns></returns>
					ev_void panAtPoint(_in const EarthView::World::Spatial::Math::CRay& ray1,_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent,_in ev_real64 alt,_in EarthView::World::Spatial::Math::CVector3 target);
					/// <summary>
					/// 获取当前目标高程
					/// </summary>
					/// <returns>目标高程</returns>
					ev_real64 getCurTargetAlt();

					/// <summary>
					/// 设置相机在局部场景模式时的移动方式。
					/// </summary>
					/// <param name="enable">true,相机在平面内移动，false,相机在大圆上移动</param>
					/// <returns></returns>
					ev_void setMoveAtPlane(_in ev_bool enable);

					/// <summary>
					/// 获取相机在局部场景模式时的移动方式。
					/// </summary>
					/// <returns></returns>
					ev_bool getMoveAtPlane();
ev_private:

					ev_real32 mLastX;
					ev_real32 mLastY;
					ev_bool   mIntersectedWithUnderGroundObjects;
					ev_bool   mIntersectedWithUnderGround;
					ev_bool   mIntersectedWithTerrain;
					ev_bool   mIntersectedWithModel;
					ev_bool   mRightButtonUnderMoving;
					ev_bool   mIntersectedWithUnderWall;
					EarthView::World::Spatial::Math::CVector3  mModelIntersectPoint;
					EarthView::World::Spatial::Math::CVector3  mGroundIntersectPoint;
					EarthView::World::Spatial::Math::CVector3  mGroundObjectsIntersectPoint;
					EarthView::World::Spatial::Math::CVector3  mTerrainIntersectPoint;
					EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator* mpCameraManipulator;
					ev_real64 mMaxRotationLength;
					ev_real64 mCurAlt;
					ev_real64 mDisToTerrain;
					ev_bool mRightButtonDown;
					ev_bool mMoveAtPlane;
					ev_bool mStartMouseWheelOnTheGround;			
	           };

			}
		}
	}
}

#endif



