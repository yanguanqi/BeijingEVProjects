#ifndef _CAMERAMANIPULATOR_H_
#define _CAMERAMANIPULATOR_H_

#include "ga/evga_config.h"

#include "ga/guieventhandler.h"

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CCamera;
			class CViewport;
		}
	}
}

#include "mathengine/matrix4.h"

#include "spatialgui/guievent.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				class EV_GA_DLL CCameraManipulator:public EarthView::World::Spatial3D::Controls::CGUIEventHandler
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="camera">相机</param>
					/// <param name="viewport">视口</param>
					/// <returns></returns>
					CCameraManipulator(_in EarthView::World::Graphic::CCamera* ref_camera,_in EarthView::World::Graphic::CViewport* ref_viewport);
				ev_private:
					CCameraManipulator(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					virtual ~CCameraManipulator();
					/// <summary>
					/// 事件处理接口
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>					
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 鼠标事件处理接口
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>			
					virtual ev_bool handleMouseEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
					/// <summary>
					/// 自定义事件处理接口
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>			
					virtual ev_bool handleUserEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent);
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
					/// 重置状态
					/// </summary>
					/// <returns></returns>		
				    virtual ev_void reset()
					{
						if(mlastGuiEvent != NULL)
							EV_DELETE mlastGuiEvent;
						if(mcurrentEvent != NULL)
							EV_DELETE mcurrentEvent;
						mlastGuiEvent = NULL;
						mcurrentEvent = NULL;
					}
					/// <summary>
					/// 返回视口矩阵
					/// </summary>
					/// <returns></returns>		
					virtual EarthView::World::Spatial::Math::CMatrix4 computeViewportMatrix();

				ev_internal:
					EarthView::World::Graphic::CCamera* mcamera;
					EarthView::World::Graphic::CViewport* mviewport;

					EarthView::World::Spatial::SystemUI::CGUIEvent* mlastGuiEvent;
					EarthView::World::Spatial::SystemUI::CGUIEvent* mcurrentEvent;
				};

			}
		}
	}
}

#endif


