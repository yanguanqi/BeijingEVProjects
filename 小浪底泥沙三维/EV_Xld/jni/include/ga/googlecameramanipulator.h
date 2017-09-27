#ifndef GOOGLECAMERAMANIPULATOR_H
#define GOOGLECAMERAMANIPULATOR_H

#include "ga/evga_config.h"
#include "ga/cameramanipulator.h"

#include "mathengine/ray.h"
#include "mathengine/vector3.h"

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
			class CGlobeCamera;
			class CGeoSceneManager;				
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
				class EV_GA_DLL CGoogleCameraManipulator:public EarthView::World::Spatial3D::Controls::CCameraManipulator
				{
				ev_private:
					CGoogleCameraManipulator(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					CGoogleCameraManipulator(_in EarthView::World::Spatial3D::CGeoSceneManager* ref_manager,_in EarthView::World::Spatial3D::CGlobeCamera* ref_globecamera,_in EarthView::World::Graphic::CViewport* ref_viewport);

					virtual ~CGoogleCameraManipulator();

					/// <summary>
					/// 事件处理接口
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>					
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

					/// <summary>
					/// 由屏幕上的点计算出射线
					/// </summary>
					/// <param name="x">屏幕上的Ｘ坐标</param>
					/// <param name="y">屏幕上的Y坐标</param>
					/// <returns></returns>
					EarthView::World::Spatial::Math::CRay screenToScene(_in ev_real32 x,_in ev_real32 y);

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
					/// <param name="intersectOBQ">是否与OBQ模型求交</param>
					/// <param name="modelIntersected">是否是模型的点</param>
					/// <returns></returns>
					ev_bool intersect(_in ev_real32 x,_in ev_real32 y,_inout EarthView::World::Spatial::Math::CVector3& interectPoint,_in ev_bool intersecModel,_in ev_bool intersectSea,_in ev_bool positiveSide,_in  ev_bool negativeSide ,_in ev_bool intersectOBQ ,_inout ev_bool& modelIntersected);

					/// <summary>
					/// 鼠标事件处理接口
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>			
					virtual ev_bool handleMouseEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);

					/// <summary>
					/// 键盘事件处理接口
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>		
					virtual ev_bool handleKeyEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent);

					/// <summary>
					/// 帧事件处理接口
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>		
					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* frameEvent);

					/// <summary>
					/// 自定义事件处理接口
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>			
					virtual ev_bool handleUserEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent);

					ev_bool handleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);

					ev_bool handleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);

					ev_bool handleMouseUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);

					ev_bool handleMouseWheelEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);

					ev_void setEnableIntersectModel(_in ev_bool enable);

					ev_bool getEnableIntersectModel() const;

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

					ev_void setEnable(_in ev_bool enable);

					ev_bool getEnable() const;

				private:

					ev_bool performMovement(EarthView::World::Spatial::SystemUI::CGUIEvent* frameEvent,ev_real64 lastMouseX,ev_real64 lastMouseY);

					ev_bool performMovement(EarthView::World::Spatial::SystemUI::CGUIEvent* currentEvent,EarthView::World::Spatial::SystemUI::CGUIEvent* lastEvent);

					ev_void rightButtonMoveImplementAtYDirection(ev_bool moveForWard,double ratio);

					ev_void rotationCameraAfterZoom();

					ev_void rightButtonMoveImplementAtXDirection(ev_real64 rotationAngle);

					ev_void middleButtonMoveImplementAtYDirection(const EarthView::World::Spatial::Math::CRadian& angleRadian);

					ev_void moveCameraToSelectPoint(ev_bool moveForward,const EarthView::World::Spatial::Math::CVector3& interectPoint,EarthView::World::Spatial3D::CGlobeCamera* pGlobeCamera,double ratio);

					ev_void moveCameraToSelectPoint(const EarthView::World::Spatial::Math::CVector3& interectPoint,EarthView::World::Spatial3D::CGlobeCamera* pGlobeCamera,double moveDistance);

					ev_void rotationCamera(ev_real64 latA,ev_real64 lonA,ev_real64 latB,ev_real64 lonB,EarthView::World::Spatial3D::CGlobeCamera* globeCamera);

					/// <summary>
					///创建屏幕渲染对象
					/// </summary>
					/// <returns></returns>
					ev_void createOverlay();

					ev_void destoryOverlay();

					ev_void resetCameraAltitude();

					ev_real64 computeAltitudeDelta(const EarthView::World::Spatial::Math::CVector3& v, EarthView::World::Spatial3D::CGeoSceneManager* manager);

					ev_bool needResetCamera(const EarthView::World::Spatial::Math::CMatrix4& m,ev_real64& distance);

					ev_void pushMouseEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);

				protected:
					EarthView::World::Spatial3D::CGeoSceneManager* mGeosceneManager;
					EarthView::World::Spatial3D::CGlobeCamera* mGlobeCamera;
					ev_bool mIntersecModel;
					ev_bool mIntersectOBQ;

					ev_bool mLastIntersected;
					EarthView::World::Spatial::Math::CVector3 mLastIntersectPoint;
					ev_real64 mMouseRightButtonX;
					ev_real64 mMouseRightButtonY;
					ev_real64 mStartTime;
					ev_real64 mMouseUpTime;
					ev_real64 mTempLength;
					ev_real64 mPreLatitude;
					ev_real64 mPreLongitude;
					EarthView::World::Spatial::Math::CVector3 mOriginVector;
					ev_real64 mRotationRatio;

					EarthView::World::Graphic::COverlay* mMouseAnchorLayer;
					EarthView::World::Graphic::CPanelOverlayElement* mMouseAnchorOverlayElemt;

					EarthView::World::Spatial::Math::CDegree mMaxTilt;
					EarthView::World::Spatial::Math::CDegree mMinTilt;

					ev_bool mThrown;    

					ev_bool mEnable;

					ev_bool mRightButtonDown;

					ev_real64 mRightButonDownTime;

					ev_bool mSpaceKeyHasUp;

					ev_real64 mSpaceKeyUpTime;

					EarthView::World::Spatial::Math::CDegree mCameraInitialLatitude;
					EarthView::World::Spatial::Math::CDegree mCameraInitialLongitude;
					EarthView::World::Spatial::Math::CDegree mCameraInitialHeading;
					EarthView::World::Spatial::Math::CDegree mCameraInitialTilt;
					ev_real64 mCameraInitialAlitude;
					ev_real64 mCameraModifyAltitude;
				};
			}
		}
	}
}
#endif