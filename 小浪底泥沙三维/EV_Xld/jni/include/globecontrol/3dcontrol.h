#ifndef C3DCONTROL_H_
#define C3DCONTROL_H_
#include "spatialgui/ispatialcontrol.h"
#include "globecontrol/evglobecontrol_config.h"
#include "globecontrol/globequerylistener.h"
#include "spatialgui/itool.h"
#include "globecontrol/guieventhandlers.h"
#include "core/memoryallocatedobject.h"
#include "core/stdheaders.h"
#include "core/threaddefines.h"
#include "graphic/scenemanager.h"
#include "spatialgui/guievent.h"
#include "ga/guieventqueue.h"

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			//enum SceneType;
		}
		namespace Spatial
		{
			namespace Math
			{
				class CRay;
				class CVector3;
			}
		}

		namespace Graphic
		{
			class CCamera;
			class CViewport;
			class CRenderWindow;
			class CSceneManager;
		}
	}
}

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
				class IScene;
				class ISpatialControl;
			}
		}
		namespace Spatial3D
		{
			namespace Controls
			{
				class CGUIEventQueue;
				class CCameraManipulator;
				/// <summary>
				/// 三维普通场景控件类
				/// </summary>
				class EV_GLOBECONTROL_DLL C3DControl : public EarthView::World::Spatial::Atlas::ISpatialControl
				{
				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>	
					C3DControl(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="renderWindow">内部的渲染窗体</param>
					/// <returns></returns>	
					C3DControl(_in EarthView::World::Graphic::CRenderWindow* ref_renderWindow);

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="hwnd">窗口句柄</param>
					/// <param name="winWidth">窗口宽度</param>
					/// <param name="winHeight">窗口高度</param>
					/// <returns></returns>	
					C3DControl(_in ev_uint32 hwnd,_in ev_uint32 winWidth,_in ev_uint32 winHeight);

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="strHwnd">窗口句柄</param>
					/// <param name="winWidth">窗口宽度</param>
					/// <param name="winHeight">窗口高度</param>
					/// <returns></returns>	
					C3DControl(_in const EVString& strHwnd, _in ev_uint32 winWidth, _in ev_uint32 winHeight);

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="winWidth">窗口宽度</param>
					/// <param name="winHeight">窗口高度</param>
					/// <param name="windowName">窗口名称</param>
					/// <param name="isFullScreen">是否全屏</param>
					/// <returns></returns>	
					C3DControl(_in ev_uint32 winWidth, _in ev_uint32 winHeight,_in const EVString& windowName, _in ev_bool isFullScreen);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~C3DControl();

					/// <summary>
					/// 添加事件处理器
					/// </summary>
					/// <param name="guiEventHandler">事件处理器</param>
					/// <returns></returns>
					ev_void addGuiHandler(_in EarthView::World::Spatial3D::Controls::CGUIEventHandler* ref_guiEventHandler);

					/// <summary>
					/// 删除事件处理器
					/// </summary>
					/// <param name="guiEventHandler">事件处理器</param>
					/// <returns></returns>
					ev_void removeHandler(_in EarthView::World::Spatial3D::Controls::CGUIEventHandler* guiEventHandler);

					/// <summary>
					/// 添加可移动对象
					/// </summary>
					/// <param name="movable">可移动对象</param>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					ev_void addMovable(_in EarthView::World::Graphic::CMovableObject* ref_movable,_in  const EarthView::World::Spatial::Math::CVector3& pos);

					/// <summary>
					/// 删除可移动对象
					/// </summary>
					/// <param name="movable">可移动对象</param>
					/// <returns></returns>
					ev_void removeMovable( EarthView::World::Graphic::CMovableObject* movable);

					/// <summary>
					/// 删除可移动对象
					/// </summary>
					/// <param name="name">可移动对象名称</param>
					/// <returns></returns>
					ev_void removeMovable( const EVString& name);

					/// <summary>
					/// 自动调整窗口内渲染窗体的大小
					/// </summary>
					/// <returns></returns>
					virtual void windowResized();

					/// <summary>
					/// 自动调整窗口内渲染窗体的大小
					/// </summary>
					/// <param name="width">宽度</param>
					/// <param name="height">高度</param>
					/// <returns></returns>
					void resize(ev_uint32 width, ev_uint32 height);

					/// <summary>
					///接收鼠标按下事件
					/// </summary>
					/// <param name="x">鼠标的x坐标</param>
					/// <param name="y">鼠标的y坐标</param>
					/// <param name="button">鼠标对应的键值，CGUIEvent::GUIMouseButtonMask的组合</param>
					/// <returns></returns>
					virtual void mouseButtonPress(_in ev_int32 x,_in ev_int32 y,_in ev_uint32 button);
					/// <summary>
					///接收鼠标双击事件
					/// </summary>
					/// <param name="x">鼠标的x坐标</param>
					/// <param name="y">鼠标的y坐标</param>
					/// <param name="button">鼠标对应的键值，CGUIEvent::GUIMouseButtonMask的组合</param>
					/// <returns></returns>
					virtual void mouseDoubleButtonPress(_in ev_int32 x,_in ev_int32 y,_in ev_uint32 button);
					/// <summary>
					///接收鼠标松开事件
					/// </summary>
					/// <param name="x">鼠标的x坐标</param>
					/// <param name="y">鼠标的y坐标</param>
					/// <param name="button">鼠标对应的键值，CGUIEvent::GUIMouseButtonMask的组合</param>
					/// <returns></returns>
					virtual void mouseButtonRelease(_in ev_int32 x,_in ev_int32 y,_in ev_uint32 button);
					/// <summary>
					///接收鼠标移动事件
					/// </summary>
					/// <param name="x">鼠标的x坐标</param>
					/// <param name="y">鼠标的y坐标</param>
					/// <returns></returns>
					virtual void mouseMove(_in ev_int32 x,_in ev_int32 y);

					/// <summary>
					///接收鼠标滚轮事件
					/// </summary>
					/// <param name="delta">鼠标的滚动的值</param>
					/// <returns></returns>
					virtual void mouseWheel(_in ev_real32 delta);
					/// <summary>
					///接收键盘按下事件
					/// </summary>
					/// <param name="key">按键值</param>
					/// <param name="virtualKey">虚拟的按键值，CGUIEvent::GUIKeySymbol的组合</param>
					/// <returns></returns>
					void keyPress(_in ev_int32 key,_in ev_int32 virtualKey);
					/// <summary>
					///接收键盘松开事件
					/// </summary>
					/// <param name="key">按键值</param>
					/// <param name="virtualKey">虚拟的按键值，CGUIEvent::GUIKeySymbol的组合</param>
					/// <returns></returns>
					void keyRelease(_in ev_int32 key,_in ev_int32 virtualKey);

					/// <summary>
					/// 开始触屏事件，用法：
					/// CGUIEventPtr event = new CGUIEvent();
					///	event->setEventType(CGUIEvent::TOUCHBEGIN);
					///	event->setTime(time);
					///	event->addTouchPoint(0, TOUCH_BEGAN, QTouchEvent::touchPoints().at(0).lastPos().x(),QTouchEvent::touchPoints().at(0).lastPos().y());
					///	control->touchBegin(event);
					/// </summary>
					/// <param name="event">触屏事件</param>
					/// <returns></returns>
					void touchBegin(EarthView::World::Spatial::SystemUI::CGUIEventPtr event);
					/// <summary>
					/// 更新触屏事件，用法：
					/// CGUIEventPtr event = new CGUIEvent();
					///	event->setEventType(CGUIEvent::TOUCHMOVE);
					///	event->setTime(time);
					/// for (int i = 0; i < QTouchEvent::touchPoints().count(); i++)
					///		event->addTouchPoint(i, TOUCH_MOVED, QTouchEvent::touchPoints().at(i).lastPos().x(),QTouchEvent::touchPoints().at(i).lastPos().y());
					///	control->touchMove(event);
					/// </summary>
					/// <param name="event">触屏事件</param>
					/// <returns></returns>
					void touchMove(EarthView::World::Spatial::SystemUI::CGUIEventPtr event);
					/// <summary>
					/// 结束触屏事件，用法：
					/// CGUIEventPtr event = new CGUIEvent();
					///	event->setEventType(CGUIEvent::TOUCHEND);
					///	event->setTime(time);
					///	event->addTouchPoint(0, TOUCH_ENDED, QTouchEvent::touchPoints().at(0).lastPos().x(),QTouchEvent::touchPoints().at(0).lastPos().y());
					///	control->touchEnd(event);
					/// </summary>
					/// <param name="event">触屏事件</param>
					/// <returns></returns>
					void touchEnd(EarthView::World::Spatial::SystemUI::CGUIEventPtr event);
					/// <summary>
					///窗体失去焦点触发
					/// </summary>
					/// <returns></returns>
					ev_void windowLoseFocus();

					/// <summary>
					/// 处理所有事件
					/// </summary>
					/// <returns>返回true</returns>
					virtual ev_bool eventStage();	

					/// <summary>
					/// 获得渲染窗体
					/// </summary>
					/// <returns>渲染窗体</returns>
					EarthView::World::Graphic::CRenderWindow* getRenderWindow();

					/// <summary>
					/// 获得场景管理器
					/// </summary>
					/// <returns>场景管理器</returns>
					EarthView::World::Graphic::CSceneManager* getSceneManager() const;

					/// <summary>
					/// 获得相机
					/// </summary>
					/// <returns>相机</returns>
					EarthView::World::Graphic::CCamera* getCamera() const;

					/// <summary>
					/// 获得视口
					/// </summary>
					/// <returns>视口</returns>
					EarthView::World::Graphic::CViewport* getViewport() const;

					/// <summary>
					/// 获得场景
					/// </summary>
					/// <returns>场景</returns>
					EarthView::World::Spatial::Atlas::IScene* getScene() const;

					/// <summary>
					/// 获得渲染窗体名称
					/// </summary>
					/// <returns>名称</returns>
					virtual EVString getName() const;

					/// <summary>
					///接收自定义事件
					/// </summary>
					/// <param name="e">自定义事件</param>
					/// <returns></returns>
					void userEvent(_in const EarthView::World::Spatial::SystemUI::CGUIEventPtr& e);
					
				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="hwnd">窗口句柄</param>
					/// <param name="winWidth">窗口宽度</param>
					/// <param name="winHeight">窗口高度</param>
					/// <param name="type">场景类型</param>
					/// <returns></returns>
					C3DControl(_in ev_uint32 hwnd,_in ev_uint32 winWidth,_in ev_uint32 winHeight,_in EarthView::World::Graphic::SceneType type);

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="strHwnd">窗口句柄</param>
					/// <param name="winWidth">窗口宽度</param>
					/// <param name="winHeight">窗口高度</param>
					/// <param name="type">场景类型</param>
					/// <returns></returns>
					C3DControl(_in const EVString& strHwnd, _in ev_uint32 winWidth, _in ev_uint32 winHeight,_in EarthView::World::Graphic::SceneType type);
					
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="winWidth">窗口宽度</param>
					/// <param name="winHeight">窗口高度</param>
					/// <param name="windowName">窗口名称</param>
					/// <param name="isFullScreen">是否全屏</param>
					/// <returns></returns>
					C3DControl(_in ev_uint32 winWidth, _in ev_uint32 winHeight,_in const EVString& windowName, _in ev_bool isFullScreen,_in EarthView::World::Graphic::SceneType type);
					
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					C3DControl();

					/// <summary>
					/// 默认事件处理(继承用)
					/// </summary>
					/// <param name="guiEvent">Gui事件</param>
					/// <returns>ev_bool,true</returns>
					virtual ev_bool eventHandlingDefault(_inout EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

					EarthView::World::Graphic::CRenderWindow*  mWindow;
					EarthView::World::Graphic::CCamera*        mCamera;
					EarthView::World::Graphic::CViewport*      mViewport; 
					EarthView::World::Graphic::CSceneManager*  mSceneManager;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue  mGuiEventQueue;
					EarthView::World::Spatial::Atlas::IScene*         mScene;
					EarthView::World::Graphic::CLight* mLight;
					EV_MUTEX(mGuiHandleMutex);
					EarthView::World::Spatial3D::Controls::GUIEventHandlers  mGuiEventHandlers;
				private:
					/// <summary>
					/// 初始化渲染窗体
					/// </summary>
					/// <param name="strHwnd">窗口句柄</param>
					/// <param name="width">窗口宽度</param>
					/// <param name="height">窗口高度</param>
					/// <param name="type">场景类型</param>
					/// <returns></returns>
					ev_void initialiseRenderWindow(_in const EVString& strHwnd, _in ev_uint32 width, _in ev_uint32 height,_in EarthView::World::Graphic::SceneType type);
					C_DISABLE_COPY(C3DControl);
				};
			}
		}
	}
}


#endif

