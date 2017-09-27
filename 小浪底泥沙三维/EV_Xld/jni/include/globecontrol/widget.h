#ifndef _WIDGET_H_
#define _WIDGET_H_

#include "globecontrol/evglobecontrol_config.h"

#include "core/stringdefines.h"
#include "core/memoryallocatedobject.h"
#include "core/name_value_pair.h"
#include "spatialgui/guievent.h"


namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class COverlayElement;
			class COverlayContainer;
			class CViewport;
		}
		namespace Spatial3D
		{
			namespace Controls
			{
				enum VisibleMode
				{
					ForceVisible,
					ForceDisableVisible,
					AutoVisible
				};

				/// <summary>
				/// 抽象场景表层部件
				/// </summary>
				class EV_GLOBECONTROL_DLL CWidget:public EarthView::World::Core::CBaseObject
				{
				public: 
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">名字</param>
					/// <returns></returns>
					CWidget(_in const EVString& name);
					/// <summary>
					/// 设置窗口布局
					/// </summary>
					/// <param name="left">左上角的Ｘ坐标</param>
					/// <param name="top">左上角的Y坐标</param>
					/// <param name="width">宽度</param>
					/// <param name="height">高度</param>
					/// <returns></returns>
				    ev_void setPostion(_in ev_real32 left,_in ev_real32 top,_in ev_real32 width,_in ev_real32 height);
					/// <summary>
					/// 销毁窗口部件
					/// </summary>
					/// <param name="element">窗口部件</param>
					/// <returns></returns>
					ev_void nukeOverlayElement(_in EarthView::World::Graphic::COverlayElement* element);
					/// <summary>
					/// 检查窗口部件是否能处理事件
					/// </summary>
					/// <param name="event">事件</param>
					/// <param name="viewport">视口</param>
					/// <returns></returns>
					ev_bool checkMouseEventAvailable(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event,_in EarthView::World::Graphic::CViewport* viewport);
					/// <summary>
					/// 设置是否忽略检查
					/// </summary>
					/// <param name="ignoreCheckMouseMoveBound">忽略检查</param>
					/// <returns></returns>
				    ev_void setIgnoreCheckMouseMoveBound(_in ev_bool ignoreCheckMouseMoveBound);
					/// <summary>
					/// 返回顶级的overlayElement
					/// </summary>
					/// <returns></returns>
					EarthView::World::Graphic::COverlayContainer* getOverlayElement();
					/// <summary>
					/// 返回名字
					/// </summary>
					/// <returns></returns>
					const EVString& getName();
					/// <summary>
					/// 隐藏窗口部件
					/// </summary>
					/// <returns></returns>
					ev_void hide();
					/// <summary>
					/// 显示窗口部件
					/// </summary>
					/// <returns></returns>
					ev_void show();
					/// <summary>
					/// 返回窗体部件是否可见
					/// </summary>
					/// <returns></returns>
					ev_bool isVisible();
					/// <summary>
					/// 设置窗口疗部件zorder
					/// </summary>
					/// <param name="zorder">zorder</param>
					/// <returns></returns>
					ev_void setZorder(_in int zorder);
					/// <summary>
					/// 返回窗口疗部件zorder
					/// </summary>
					/// <returns></returns>
					int getZorder();
					/// <summary>
					/// 返回窗口疗部件zorder
					/// </summary>
					/// <returns></returns>
					int getZorder() const;

					virtual ev_void additionMouseUp()
					{

					}
					/// <summary>
					/// 处理鼠标按键松开事件
					/// </summary>
					/// <param name="event">事件对象</param>
					/// <returns></returns>
			        virtual ev_bool handleMouseUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
					/// <summary>
					/// 处理鼠标按键移动事件
					/// </summary>
					/// <param name="event">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
					/// <summary>
					/// 处理鼠标按键按下事件
					/// </summary>
					/// <param name="event">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
					/// <summary>
					/// 处理鼠标按键双击按下事件
					/// </summary>
					/// <param name="event">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handeMouseDbClickEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
					/// <summary>
					/// 处理键盘按下事件
					/// </summary>
					/// <param name="event">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleKeyDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
					/// <summary>
					/// 处理键盘松开事件
					/// </summary>
					/// <param name="event">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleKeyUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
					/// <summary>
					/// 处理自定义事件
					/// </summary>
					/// <param name="event">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleUserEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
					/// <summary>
					/// 处理帆事件
					/// </summary>
					/// <param name="event">事件对象</param>
					/// <param name="viewport">视口</param>
					/// <returns></returns>
					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event,_in EarthView::World::Graphic::CViewport* viewport);

ev_private:
					CWidget(_in EarthView::World::Core::CNameValuePairList* pList);
				ev_internal:

					friend class CWidgetManager;
					//friend class CCWidgetProducer;
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CWidget();
					/// <summary>
					/// 挎贝构造函数
					/// </summary>
					/// <returns></returns>
					CWidget(_in const CWidget& rhs)
					{

					}

					ev_void operator = (_in const EarthView::World::Spatial3D::Controls::CWidget& rhs)
					{

					}

					EarthView::World::Graphic::COverlayContainer* mElement;
					EVString mName;
					ev_real32 mleft;
					ev_real32 mtop;
					ev_real32 mwidth;
					ev_real32 mheight;
					int mZorder;
					EarthView::World::Spatial3D::Controls::VisibleMode mvisibleMode;
					ev_bool mignoreCheckMouseMoveBound;
				};
			}
		}
	}
}

#endif
