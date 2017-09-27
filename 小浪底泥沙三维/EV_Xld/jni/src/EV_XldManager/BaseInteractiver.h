#include "..\..\include\globecontrol\globecontrol.h"
#include "..\..\include\ga\guieventhandler.h"
#ifndef BASEINTERACTIVER_H_
#define BASEINTERACTIVER_H_
namespace EarthView
{
	namespace Xld
	{
		namespace RenderLib
		{
			namespace Base
			{
				class CBaseInteractiver : public EarthView::World::Spatial3D::Controls::CGUIEventHandler
				{
				public:
					CBaseInteractiver(ev_bool eventEnable[]);
					~CBaseInteractiver();

					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent) override;

				protected:
					EarthView::World::Graphic::CTimer* mpTimer;
					ev_bool mIsDragging = false;
					ev_bool mIsLoaded = false;
					ev_bool mIsMouseDown = false;
					EarthView::World::Spatial::Math::CVector2 mLastMouseDownScreenPos;
					
					/// <summary>
					/// 该对象指示鼠标上一次采点的地理坐标
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mLastGeoPos;
					/// <summary>
					/// 该值指示鼠标当前采点的地理坐标
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mCurrentGeoPos;
					EarthView::World::Spatial3D::Controls::CGlobeControl* mpGlobeControl;
					/// <summary>
					/// 该方法用于初始化其他的操作或参数
					/// </summary>
					virtual void InitializeOthers() {};
					/// <summary>
					/// 该方法用于加载交互事件
					/// </summary>
					void Load();
					/// <summary>
					/// 该方法用于卸载交互事件
					/// </summary>
					void Unload();

					virtual bool HandleMouseUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

					virtual bool HandleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

					virtual bool HandleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

					virtual bool HandleMouseDoubleClickEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

				private:
					/// <summary>
					/// 该方法用于加载交互事件
					/// </summary>
					ev_bool mEvents[4];
					
					/// <summary>
					/// 该方法用于加载交互事件
					/// </summary>
					vector<EarthView::World::Spatial::Math::CVector3*> mHandlePoints;
				};
			}
		}
	}
}
#endif // BASEINTERACTIVER_H_


