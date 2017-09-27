#ifndef _ANCHORWIDGET_H_
#define _ANCHORWIDGET_H_

#include "globecontrol/evglobecontrol_config.h"
#include "spatialgui/guievent.h"
#include "core/stringdefines.h"
#include "globecontrol/widget.h"

#include "graphic/overlayelement.h"

class CCompassElement;
class CNavigationPanelElement;
class CZoomBarElement;
class CZoomPanelElement;

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CPanelOverlayElement;
		}
		namespace Spatial3D
		{
			class CGlobeCamera;
			namespace Controls
			{
				class  CCompassWidgetPositionEvent:public EarthView::World::Spatial::SystemUI::CGUIEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>		
					CCompassWidgetPositionEvent();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>		
					virtual ~CCompassWidgetPositionEvent();

					EarthView::World::Graphic::GuiHorizontalAlignment mGHA;

					EarthView::World::Graphic::GuiVerticalAlignment mGVA;

					ev_int32 mXPosition;

					ev_int32 mYPosition;
				};


				class EV_GLOBECONTROL_DLL CCompassWidgetVisibleEvent:public EarthView::World::Spatial::SystemUI::CGUIEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>		
					CCompassWidgetVisibleEvent();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>		
					virtual ~CCompassWidgetVisibleEvent();
				ev_private:
					CCompassWidgetVisibleEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					EarthView::World::Spatial3D::Controls::VisibleMode mvisibleMode;
				};

				class EV_GLOBECONTROL_DLL CCompassWidgetVisibleEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEvent>
				{
ev_private:
					CCompassWidgetVisibleEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CCompassWidgetVisibleEventPtr(_in CCompassWidgetVisibleEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CCompassWidgetVisibleEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>		
					CCompassWidgetVisibleEventPtr();
					explicit CCompassWidgetVisibleEventPtr(_in CCompassWidgetVisibleEvent *rep);
					CCompassWidgetVisibleEventPtr(_in const CCompassWidgetVisibleEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr &r);

					EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr &operator = (_in CCompassWidgetVisibleEvent* rep);
					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr
					/// </summary>
					/// <returns></returns>		
					EarthView::World::Spatial::SystemUI::CGUIEventPtr toCGUIEventPtr()
					{
						EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

								EarthView::World::Spatial::SystemUI::CGUIEventPtr ptr;
							ptr.pRep = static_cast<EarthView::World::Spatial::SystemUI::CGUIEvent *>(getPointer());
#if EV_THREAD_SUPPORT
							ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
							ptr.pUseCount = useCountPointer();
							ptr.useFreeMethod = useFreeMethod;
							if (pUseCount)
							{
								++(*pUseCount);
							}
							return ptr;
						}
					else
					{
						return EarthView::World::Spatial::SystemUI::CGUIEventPtr();
					}
					}

					operator EarthView::World::Spatial::SystemUI::CGUIEventPtr()
					{
						EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

								EarthView::World::Spatial::SystemUI::CGUIEventPtr ptr;
							ptr.pRep = static_cast<EarthView::World::Spatial::SystemUI::CGUIEvent *>(getPointer());
#if EV_THREAD_SUPPORT
							ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
							ptr.pUseCount = useCountPointer();
							ptr.useFreeMethod = useFreeMethod;
							if (pUseCount)
							{
								++(*pUseCount);
							}
							return ptr;
						}
					else
					{
						return EarthView::World::Spatial::SystemUI::CGUIEventPtr();
					}
					}

				};

				/// <summary>
				/// 导航器控件
				/// </summary>
				class EV_GLOBECONTROL_DLL CCompassWidget:public EarthView::World::Spatial3D::Controls::CWidget
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">名字</param>
					/// <param name="camera">相机</param>
					/// <returns></returns>
					CCompassWidget(_in const EVString& name,_in EarthView::World::Spatial3D::CGlobeCamera* ref_camera);
					/// <summary>
					/// 是否能处理事件
					/// </summary>
					/// <param name="canHandle"></param>
					/// <returns></returns>
					ev_void setHandleEnable(_in ev_bool canHandle)
					{
						mcanHandleEvent=canHandle;
					}
					/// <summary>
					/// 滑动滑块松开鼠标的处理
					/// </summary>
					/// <returns></returns>
					virtual ev_void additionMouseUp();
					/// <summary>
					/// 处理帧事件
					/// </summary>
					/// <param name="event">事件对象</param>
					/// <param name="viewport">视口</param>
					/// <returns></returns>
					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event,_in EarthView::World::Graphic::CViewport* viewport);
					/// <summary>
					/// 处理鼠标按下事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
 					virtual ev_bool handleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 处理鼠标松开事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
 					virtual ev_bool handleMouseUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 处理鼠标移动事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
 					virtual ev_bool handleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 处理处定义事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleUserEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				private:
					/// <summary>
					/// 设置透明度
					/// </summary>
					/// <param name="alpha">透明度</param>
					/// <returns></returns>
					void setAlpha(_in ev_real64 alpha);

ev_private:
					CCompassWidget(_in EarthView::World::Core::CNameValuePairList* pList);
					friend class CWidgetManager;
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CCompassWidget();

					ev_bool mcanHandleEvent;
					/// <summary>
					/// 挎贝构造函数
					/// </summary>
					/// <returns></returns>
					CCompassWidget(_in const CCompassWidget& rhs)
						:EarthView::World::Spatial3D::Controls::CWidget(rhs)
					{

					}
					/// <summary>
					/// 赋值运算符
					/// </summary>
					/// <returns></returns>
					ev_void operator = (_in const CCompassWidget& rhs)
					{

					}

					EarthView::World::Graphic::CPanelOverlayElement* mPanel;

					EarthView::World::Spatial3D::CGlobeCamera* mglobeCamera;

					CCompassElement* mCompassElement;
					CNavigationPanelElement* mNavigationPanelElement;
					CZoomBarElement* mZoomBarElement;
					CZoomPanelElement* mZoomPanelElement;

					ev_real64 mcurrentAlpha;
					ev_bool mmouseMoveIn;
					ev_real64 mTime;
				};
			}
		}
	}
}

#endif
