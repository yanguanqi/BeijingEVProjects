#ifndef  __DYNAMICCAMERALOCKHANDLER_H__
#define  __DYNAMICCAMERALOCKHANDLER_H__
#include "industryengine/dynamicmodellibrary/dynamicmodel_cfg.h"
#include "ga/guieventhandler.h"
#include "spatial3dengine/globecamera.h"
#include "graphic/scenemanager.h"
#include "graphic/viewport.h"
#include "spatialgui/guievent.h"
#include "globecontrol/globecontrol.h"

namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			class CDynamicModelObjectManager;
		}
	}
}
namespace  EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			/// <summary>
			/// 相机锁定输入交互控制器
			/// </summary>
			class EV_DYNAMICMODELLIBRARY_DLL CDynamicCameraLockHandler : public EarthView::World::Spatial3D::Controls::CGUIEventHandler
			{
			public:
				/// <summary>
				/// 相机锁定输入交互控制器构造函数
				/// </summary>
				/// <param name="ref_camera">相机</param>
				/// <param name="ref_sceneManager">场景管理器</param>
				/// <param name="ref_viewport">视口</param>
				/// <param name="ref_dynamicModelManager">动态目标管理器,该参数对象的生命周期要与本对象保持一致</param>
				/// <param name="ref_globeControl">地球窗体</param>
				CDynamicCameraLockHandler(EarthView::World::Spatial3D::CGlobeCamera* ref_camera, EarthView::World::Graphic::CSceneManager* ref_sceneManager, EarthView::World::Graphic::CViewport* ref_viewport,EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ref_dynamicModelManager,EarthView::World::Spatial3D::Controls::CGlobeControl* ref_globeControl);
				/// <summary>
				/// 相机锁定输入交互控制器析构函数
				/// </summary>
				virtual ~CDynamicCameraLockHandler();
				/// <summary>
				/// 响应处理消息
				/// </summary>
				/// <param name="guiEvent">消息事件</param>
				/// <returns>true为处理成功，false为处理失败</returns>
				ev_bool handleEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				/// <summary>
				/// 响应鼠标弹起消息
				/// </summary>
				/// <param name="guiEvent">消息事件</param>
				/// <returns>true为处理成功，false为处理失败</returns>
				ev_bool handleMouseUpEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				/// <summary>
				/// 响应帧事件消息
				/// </summary>
				/// <param name="guiEvent">消息事件</param>
				/// <returns>true为处理成功，false为处理失败</returns>
				ev_bool handleFrameEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				/// <summary>
				/// 响应鼠标按下消息
				/// </summary>
				/// <param name="guiEvent">消息事件</param>
				/// <returns>true为处理成功，false为处理失败</returns>
				ev_bool handleMouseDownEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				/// <summary>
				/// 响应鼠标移动消息
				/// </summary>
				/// <param name="guiEvent">消息事件</param>
				/// <returns>true为处理成功，false为处理失败</returns>
				ev_bool handleMouseMoveEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				/// <summary>
				/// 响应滚动鼠标滑轮消息
				/// </summary>
				/// <param name="guiEvent">消息事件</param>
				/// <returns>true为处理成功，false为处理失败</returns>
				ev_bool handleMouseWheelEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				/// <summary>
				/// 响应键盘消息
				/// </summary>
				/// <param name="guiEvent">消息事件</param>
				/// <returns>true为处理成功，false为处理失败</returns>
				ev_bool handleKeyEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
ev_private:
				/// <summary>
				/// 相机锁定输入交互控制器构造函数
				/// </summary>
				/// <param name="plist">参数列表</param>
				CDynamicCameraLockHandler(_in EarthView::World::Core::CNameValuePairList* plist);

			protected:
				EarthView::World::Spatial3D::CGlobeCamera* mpGlobeCamera;
				EarthView::World::Graphic::CSceneManager* mpSceneManager;
				EarthView::World::Graphic::CViewport* mpViewport;
				EarthView::World::Spatial::SystemUI::CGUIEvent* mpLastGuiEvent;
				EarthView::World::Spatial::SystemUI::CGUIEvent* mpCurrentEvent;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* mpDynamicModelObjectManager;
				EarthView::World::Spatial3D::Controls::CGlobeControl* mpGlobeControl;
				ev_bool mIsRun;
			};
		}
	}
}
#endif
