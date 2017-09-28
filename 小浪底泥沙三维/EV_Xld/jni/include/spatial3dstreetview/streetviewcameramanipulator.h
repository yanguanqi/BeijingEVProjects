#ifndef __STREETVIEW_CAMERAMANIPULATOR_H_
#define __STREETVIEW_CAMERAMANIPULATOR_H_

#include "spatial3dstreetview/spatial3dstreetviewconfig.h"
#include "ga/evga_config.h"
#include "mathengine/ray.h"
#include "ga/cameramanipulator.h"
#include "mathengine/matrix4.h"
#include "mathengine/vector3.h"
#include "spatial3dengine/globecamera.h"
#include "spatial3dengine/commonscenecamera.h"

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
			class CQuaternion4d;
			class CStreetViewRoam;

			namespace Controls
			{
				class CGUIEventHandler;
				class CCommonSceneControl;
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
			class CSceneManager;
			class CCamera;
			class CSceneNode;
		}
		namespace Spatial3D
		{
			/// <summary>
			/// 街景相机漫游器类
			/// 此类用来控制相机在场景中的漫游：平移、旋转、缩放。
			/// </summary>
			class EV_Spatial3DStreetView_DLL CStreetViewCameraManipulator : public EarthView::World::Spatial3D::Controls::CCameraManipulator
			{
ev_private:
				CStreetViewCameraManipulator(_in EarthView::World::Core::CNameValuePairList* pList);
			public:
				CStreetViewCameraManipulator(_in EarthView::World::Spatial3D::Controls::CCommonSceneControl* pControl);

				virtual ~CStreetViewCameraManipulator();

				/// <summary>
				/// 求屏幕点在世界空间中所在的射线
				/// </summary>
				/// <param name="x">屏幕点的x坐标</param>
				/// <param name="y">屏幕点的y坐标</param>
				/// <returns>EarthView::World::Spatial::Math::CRay，结果射线</returns>
				EarthView::World::Spatial::Math::CRay screenToScene(_in ev_real32 x,_in ev_real32 y);

				/// <summary>
				/// 射线跟平面求交
				/// </summary>
				/// <param name="ray">射线</param>
				/// <param name="plane">平面</param>
				/// <param name="normal">法线</param>
				/// <param name="point">平面上的点</param>
				/// <returns>intersectPoint，所求的交点</returns>
				ev_bool intersect(_in const EarthView::World::Spatial::Math::CRay& ray,_in const EarthView::World::Spatial::Math::CPlane& plane,_out EarthView::World::Spatial::Math::CVector3& intersectPoint);
				ev_bool intersect(_in const EarthView::World::Spatial::Math::CRay& ray,_in const EarthView::World::Spatial::Math::CVector3& normal,_in const EarthView::World::Spatial::Math::CVector3& point, _out EarthView::World::Spatial::Math::CVector3& intersectPoint);

				/// <summary>
				/// 计算旋转量
				/// </summary>
				/// <param name="cameraAltitude">相机的高度</param>
				/// <returns>ev_real64，旋转量</returns>
				ev_real64 computeRotationRatio(_in ev_real64 cameraAltitude);

				/// <summary>
				/// 计算缩放因子
				/// </summary>
				/// <param name="mouseWheelDelta">鼠标滚动量</param>
				/// <returns>ev_real64，缩放因子</returns>
				ev_real64 calculateZoomFactor(_in ev_real32 mouseWheelDelta);

				/// <summary>
				/// 判断是否发生平移
				/// </summary>
				/// <param name="firstEvent">平移之前的事件</param>
				/// <param name="secondEvent">平移之后的事件</param>
				/// <returns></returns>
				ev_bool calculateMoveable(_in EarthView::World::Spatial::SystemUI::CGUIEvent* const firstEvent,_in EarthView::World::Spatial::SystemUI::CGUIEvent* const secondEvent);

				/// <summary>
				/// 平移
				/// </summary>
				/// <param name="moriginX">平移之前鼠标所在点的x坐标</param>
				/// <param name="moriginY">平移之前鼠标所在点的y坐标</param>
				/// <param name="mlastX">平移之后鼠标所在点的x坐标</param>
				/// <param name="mlastY">平移之后鼠标所在点的y坐标</param>
				/// <returns></returns>
				ev_void roamCamera(ev_real64 moriginX,ev_real64 moriginY,ev_real64 mlastX,ev_real64 mlastY);

				/// <summary>
				/// 缩放
				/// </summary>
				/// <param name="x">进行缩放的中心点x坐标</param>
				/// <param name="y">进行缩放的中心点y坐标</param>
				/// <param name="zoomRatio">缩放因子</param>
				/// <returns></returns>
				ev_void zoomCamera(ev_real64 x,ev_real64 y,ev_real64 zoomRatio);

				/// <summary>
				/// 旋转
				/// </summary>
				/// <param name="x">旋转所围绕点的x坐标</param>
				/// <param name="y">旋转所围绕点的y坐标</param>
				/// <param name="degree">旋转角度</param>
				/// <returns></returns>
				ev_void rotationCamera(ev_real64 x,ev_real64 y,ev_real64 degree);
				ev_void rotationCamera(ev_real32 radian);

				/// <summary>
				/// 相机的俯仰
				/// </summary>
				/// <param name="x">旋转所围绕点的x坐标</param>
				/// <param name="y">旋转所围绕点的y坐标</param>
				/// <param name="degree">旋转角度</param>
				/// <returns></returns>
				ev_void tiltCamera(ev_real64 x,ev_real64 y,ev_real64 degree);

				/// <summary>
				/// 绕已知点旋转
				/// </summary>
				/// <param name="ratationPoint">已知点的坐标</param>
				/// <param name="head">相机的偏航角</param>
				/// <param name="tilt">相机的俯仰角</param>
				/// <returns></returns>
				ev_bool rotationAtPoint(EarthView::World::Spatial::Math::CVector3 ratationPoint,ev_real64 head,ev_real64 tilt);

				/// <summary>
				/// 事件处理函数
				/// </summary>
				/// <param name="guiEvent">所接受到的事件</param>
				/// <returns></returns>
				virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

				/// <summary>
				/// 处理自定义事件
				/// </summary>
				/// <param name="userEvent">自定义事件</param>
				/// <returns></returns>
				virtual ev_bool handleUserEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent);

				/// <summary>
				/// 获取所操纵的相机
				/// </summary>
				/// <param name=""></param>
				/// <returns>CCommonSceneCamera，指向相机的指针</returns>
				EarthView::World::Spatial3D::CCommonSceneCamera* getCamera()
				{
					return mpCamera;
				}

				ev_void setStreetViewRoma(EarthView::World::Spatial3D::CStreetViewRoam* pStreetViewRoam);

			private:				
				virtual ev_bool handleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
				virtual ev_bool handleMouseUp(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
				virtual ev_bool handleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
				virtual ev_bool handleMouseWheelEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
				virtual ev_bool handleMouseDoubleClickEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
				virtual ev_bool handleKeyEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* useEvent);
				virtual ev_bool handleFrameEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* useEvent);

				const ev_int16  calcDirection();
				const ev_real32 calcCameraTilt();
				const ev_real32 calcCameraHeading();

			protected:
				EarthView::World::Spatial3D::Controls::CCommonSceneControl* mp3DControl;
				EarthView::World::Spatial3D::CCommonSceneManager* mpManager;
				EarthView::World::Spatial3D::CCommonSceneCamera* mpCamera;
				EarthView::World::Spatial3D::CQuaternion4d mQuaternion;

				EarthView::World::Spatial::Math::CVector3 mCameraInitialPosition;
				EarthView::World::Spatial::Math::CDegree mCameraInitialHeading;
				EarthView::World::Spatial::Math::CDegree mCameraInitialTilt;
				ev_real64 mCameraInitalAlitude;

				ev_int64 mlastX;                     //屏幕上上一个点的横坐标
				ev_int64 mlastY;                     //屏幕上上一个点的纵坐标
				ev_int64 mcurX;                      //屏幕上当前点的横坐标
				ev_int64 mcurY;                      //屏幕上当前点的纵坐标

				ev_bool mIsButtonDown;  
				ev_bool mIsLeftButton;
				ev_bool mIsRightButton;
				ev_bool mIsMouse;
				ev_bool mIsWheel;
				ev_bool mIsMove;

				EarthView::World::Spatial::Math::CVector3 mintersectedPoint;
				EarthView::World::Spatial::Math::CVector3 mintersectedPoint1;         //与模型的交点
				EarthView::World::Spatial::Math::CVector3 mintersectedPoint2;         //与网格的交点
				EarthView::World::Spatial::Math::CVector3 mprePosition;
				EarthView::World::Spatial::Math::CVector3 mcurPosition;
				EarthView::World::Spatial::Math::CVector3 mOriginCameraPosition;
				EarthView::World::Spatial::Math::CVector3 mOriginTargetPosition;
				EarthView::World::Spatial::Math::CVector3 mlastCameraPosition;         //上一次相机所在的位置
				EarthView::World::Spatial::Math::CVector3 mcurCameraPosition;          //当前相机所在的位置
				EarthView::World::Spatial::Math::CVector3 mRotationAxis;               //绕任意轴旋转时的旋转轴
				EarthView::World::Spatial::Math::CVector3 mLocalCenter;
				EarthView::World::Spatial::Math::CVector3 mInitialUpVector;
				EarthView::World::Spatial::Math::CVector3 mInitialLookVector;
				EarthView::World::Spatial::Math::CVector3 mRightVector;

				ev_bool mintersectedToModel;
				ev_bool mIstersectedWithLocalPlane;
				ev_bool mlastIntersected;
				EarthView::World::Spatial::Math::CVector3 mlastIntersectPoint;          //上一个相交点的坐标				

				ev_int32 mlastStepZoomTickCount;
				ev_real64 mrotationratio;
				EarthView::World::Spatial::Math::CRadian mRotationAngleRadian;

				ev_bool mCanHandleEvent;
				EarthView::World::Graphic::CSceneNode* mCameraNode;
				EarthView::World::Spatial3D::CStreetViewRoam* mpStreetViewRoam;
			};
		}
	}
}

#endif // __STREETVIEW_CAMERAMANIPULATOR_H_

