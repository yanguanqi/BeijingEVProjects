#ifndef EARTHVIEW_WORLD_SPATIAL3D_KMLPANORAMAEVENTHANDLER_H
#define EARTHVIEW_WORLD_SPATIAL3D_KMLPANORAMAEVENTHANDLER_H

#include "spatial3dproxy/spatial3dproxy_config.h"
#include "spatialgui/itool.h"
#include "spatial3dengine/panoramatile.h"
#include "globecontrol/globecontrol.h"
#include "ga/globecameramanipulator.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			namespace KmlManager
			{
				class EV_SPATIAL3DPROXY_DLL CGui360EventHandler : public EarthView::World::Spatial3D::Controls::CGUIEventHandler
				{
				public:
					CGui360EventHandler(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl);

					virtual ~CGui360EventHandler();
					/// <summary>
					/// 事件处理接口
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

					void create(EarthView::World::Spatial3D::Atlas::CPanoramaTile* tile);

					void setCameraInPanorama(ev_bool isIn);
					ev_bool isCameraInPanorama();
				private:
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
					EarthView::World::Spatial3D::Controls::CGlobeControl* mpGlobeControl;
					EarthView::World::Spatial3D::Atlas::CPanoramaTile* mpPanoramaTile;
					ev_bool mIsCameraInPanorama;


ev_private:

					CGui360EventHandler(EarthView::World::Core::CNameValuePairList* pList);

				};
				class EV_SPATIAL3DPROXY_DLL CGotoListener360:public EarthView::World::Spatial3D::Controls::CGoToTargetListener
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGotoListener360(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGotoListener360(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler* handler);
					/// <summary>
					/// 析析构数
					/// </summary>
					virtual ~CGotoListener360();
				public:
					/// <summary>
					/// 相机到达ＧＯＴＯ终点外触发
					/// </summary>
					/// <param name="globeCamera">相机</param>
					/// <returns></returns>
					virtual void cameraHasGetAtTarget(_in EarthView::World::Spatial3D::CGlobeCamera* globeCamera);

					void create(EarthView::World::Spatial3D::Atlas::CPanoramaTile* tile);
					
					
				private:
					EarthView::World::Spatial3D::Controls::CGlobeControl* mpGlobeControl;
					EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler* mpHandler;
					EarthView::World::Spatial3D::Atlas::CPanoramaTile* mpPanorama360;
					
					

				};
			}
		}
	}
}
#endif