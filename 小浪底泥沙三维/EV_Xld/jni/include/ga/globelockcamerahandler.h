#ifndef GLOBELOCKCAMERAHANDLER_H_
#define GLOBELOCKCAMERAHANDLER_H_

#include "ga/evga_config.h"
#include "ga/guieventhandler.h"
#include "graphic/scenemanager.h"
#include "spatialgui/guievent.h"


namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CSceneNode;
			class CViewport;
		}
		namespace Spatial
		{
			namespace Math
			{
				class CVector3;
			}
		}
		namespace Spatial3D
		{
			class CGlobeCamera;
			class CGeoSceneManager;
			namespace Controls
			{
				class EV_GA_DLL CGlobeLockCameraHandler:public EarthView::World::Spatial3D::Controls::CGUIEventHandler
				{
				public:
					enum RotationMode
					{
						ROTATIONBYUP = 0,
						ROTATIONBYLOOK
					};

					enum LockMode
					{
						FirstPersonMode = 0,
						ThirdPersonMode
					};

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="globeCamera">相机</param>
					/// <param name="sceneManager">场景管理器</param>
					/// <param name="viewport">视口</param>
					/// <returns></returns>
					CGlobeLockCameraHandler(EarthView::World::Spatial3D::CGlobeCamera* globeCamera,EarthView::World::Spatial3D::CGeoSceneManager* sceneManager,EarthView::World::Graphic::CViewport* viewport);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CGlobeLockCameraHandler();
					/// <summary>
					/// 处理自定义事件
					/// </summary>
					/// <param name="userEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleUseEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent);
					/// <summary>
					/// 处理事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 处理帧事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 处理鼠标按下事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
					/// <summary>
					/// 处理鼠标移动事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
					/// <summary>
					/// 处理鼠标松开事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleMouseUp(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
					/// <summary>
					/// 处理鼠标滚轮事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleMouseWheelEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
					/// <summary>
					/// 计算鼠标是否移动
					/// </summary>
					/// <param name="firstEvent">前一个鼠标事件对象</param>
					/// <param name="secondEvent">当前鼠标事件对象</param>
					/// <returns></returns>
					ev_bool calculateMoveable(_in EarthView::World::Spatial::SystemUI::CGUIEvent* const firstEvent,_in EarthView::World::Spatial::SystemUI::CGUIEvent* const secondEvent);
					/// <summary>
					///计逄相机的海拔差
					/// </summary>
					/// <param name="v">相机的位置</param>
					/// <returns></returns>
					virtual ev_real64 computeAltitudeDelta(_in const EarthView::World::Spatial::Math::CVector3& v);
					/// <summary>
					///需要重置相机
					/// </summary>
					/// <returns></returns>
					ev_bool needResetCamera();
					/// <summary>
					///计逄相机的缩放比例
					/// </summary>
					/// <param name="mouseWheelDelta">鼠标滚轮的变化量</param>
					/// <returns></returns>
					ev_real64 calculateZoomFactor(_in ev_real32 mouseWheelDelta);
					/// <summary>
					///重置
					/// </summary>
					/// <returns></returns>
					ev_void reset();
					/// <summary>
					///获取旋转方式
					/// </summary>
					/// <returns></returns>
					RotationMode getRotationMode() const
					{
						return mRotationMode;
					}
					/// <summary>
					///设置旋转方式
					/// <param name="rotationMode">旋转方式</param>
					/// </summary>
					/// <returns></returns>
					void setRotationMode(_in RotationMode rotationMode)
					{
						mRotationMode = rotationMode;
					}

					/// <summary>
					///设置是否可用
					/// <param name="enbale">是否可用</param>
					/// </summary>
					/// <returns></returns>
					void setEnable(ev_bool enbale);
					/// <summary>
					///获取是否可用
					/// </summary>
					/// <returns>是否可用</returns>
					ev_bool getEnable() const;
ev_private:
					CGlobeLockCameraHandler(_in EarthView::World::Core::CNameValuePairList* pList);

				protected:

					EarthView::World::Graphic::CSceneNode* mLockTarget;

					EarthView::World::Spatial3D::CGlobeCamera* mglobeCamera;

					EarthView::World::Spatial3D::CGeoSceneManager* msceneManager;

					EarthView::World::Graphic::CViewport* mviewport;

					ev_bool mcanHandleEvent;

					EarthView::World::Spatial::SystemUI::CGUIEvent* mlastGuiEvent;

					EarthView::World::Spatial::SystemUI::CGUIEvent* mcurrentEvent;

					ev_real64 mmaxDistance;

					ev_int32 mLastStepZoomTickCount;

					RotationMode mRotationMode;

					ev_bool mbEnable;

					ev_bool mbCanChangeTilt;

					ev_bool mbCanChangeHeading;

					ev_bool mbCanChangeDistance;

					LockMode mLockMode;

				private:
					EarthView::World::Graphic::CSceneManager::CSceneManagerListener* msceneManagerListener;
				};
			}
		}
	}
}

#endif
