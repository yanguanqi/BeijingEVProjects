#ifndef _GUIEVENTQUEUE_H_
#define _GUIEVENTQUEUE_H_

#include "ga/evga_config.h"

#include "spatialgui/guievent.h"

#include "core/stdheaders.h"
#include "core/threaddefines.h"
#include "core/global.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				class EV_GA_DLL CEvents:public EarthView::World::Core::CBaseObject 
				{
                ev_private:
					typedef list<EarthView::World::Spatial::SystemUI::CGUIEventPtr> InternalList;

					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;

					CEvents::iterator erase(_in CEvents::iterator pos);
					CEvents::iterator erase(_in CEvents::iterator first,_in CEvents::iterator last);

					CEvents::iterator insert(_in CEvents::iterator pos, _in EarthView::World::Spatial::SystemUI::CGUIEventPtr const &t);

					void splice(_in CEvents::iterator _Where,_in CEvents& _Right);

					void insert(_in CEvents::iterator _Where, _in CEvents::iterator _First,_in CEvents::iterator _Last);

					CEvents::reference front();

					CEvents::reference back();

					CEvents::const_reference front() const;

					CEvents::const_reference back() const;

				private:
					InternalList mList;
				public:
					CEvents();

					virtual ~CEvents();
				ev_private:				
					CEvents(_in EarthView::World::Core::CNameValuePairList *pList);
					CEvents::iterator begin();
					CEvents::iterator end();
					CEvents::const_iterator begin() const;
					CEvents::const_iterator end() const;

					CEvents::reverse_iterator rbegin();
					CEvents::reverse_iterator rend();
					CEvents::const_reverse_iterator rbegin() const;
					CEvents::const_reverse_iterator rend() const;

					void push_back(_in EarthView::World::Spatial::SystemUI::CGUIEventPtr const &t);

					void push_front(_in EarthView::World::Spatial::SystemUI::CGUIEventPtr const &t);

					void pop_back();

					void pop_front();

					EarthView::World::Spatial::SystemUI::CGUIEventPtr at(_in ev_uint32 pos);

					void insert(_in ev_uint32 pos, _in EarthView::World::Spatial::SystemUI::CGUIEventPtr const &t);

					void remove(_in ev_size_t pos);

					ev_bool empty() const;

					ev_size_t size() const;

					void resize(_in ev_size_t newSize);

					void clear();

					void operator=(_in const EarthView::World::Spatial3D::Controls::CEvents& rhs);

				};

				class EV_GA_DLL CGUIEventQueue:public EarthView::World::Core::CBaseObject
				{
				public:

					//typedef EarthView::World::Core::list<EarthView::World::Spatial3D::Controls::CGUIEvent*> EarthView::World::Spatial3D::Controls::CEvents;
					/// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <returns></returns>
					CGUIEventQueue();
				ev_private:
					CGUIEventQueue(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 挎贝构造函数
					/// </summary>
					/// <returns></returns>
					CGUIEventQueue(_in const CGUIEventQueue& rhs);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CGUIEventQueue();
					/// <summary>
					/// 设置事件队列
					/// </summary>
					/// <returns></returns>
					ev_void setEvents(_in EarthView::World::Spatial3D::Controls::CEvents& events);
					/// <summary>
					/// 附加事件队列
					/// </summary>
					/// <returns></returns>
					ev_void appendEvents(_in EarthView::World::Spatial3D::Controls::CEvents& events);
					/// <summary>
					/// 加入事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					ev_void addEvent(_in const EarthView::World::Spatial::SystemUI::CGUIEventPtr& guiEvent);
					/// <summary>
					/// 取出所有的事件对象
					/// </summary>
					/// <param name="events">事件队列</param>
					/// <returns></returns>
					ev_bool takeEvent(_in EarthView::World::Spatial3D::Controls::CEvents& events);
					/// <summary>
					/// 处理窗体大小变化事件
					/// </summary>
					/// <param name="x">窗体的左上角的Ｘ坐标</param>
					/// <param name="y">窗体的左上角的Ｙ坐标</param>
					/// <param name="width">窗体的宽</param>
					/// <param name="height">窗体的高</param>
					/// <param name="time">事件发生时的时间</param>
					/// <returns></returns>
					ev_void windowResize(_in ev_int32 x,_in ev_int32 y,_in ev_int32 width,_in ev_int32 height,_in ev_real64 time);
					/// <summary>
					/// 处理鼠标滚轮事件
					/// </summary>
					/// <param name="delta">鼠标滚动的值</param>
					/// <param name="time">事件发生时的时间</param>
					/// <returns></returns>
					ev_void mouseWheel(_in ev_real32 delta,_in ev_real64 time);
					/// <summary>
					/// 处理鼠标滚轮事件
					/// </summary>
					/// <param name="x">鼠标X坐标</param>
					/// <param name="y">鼠标Y坐标</param>
					/// <param name="time">事件发生时的时间</param>
					/// <returns></returns>
					ev_void mouseMove(_in ev_int32 x,_in ev_int32 y,_in ev_real64 time);
					/// <summary>
					/// 处理鼠标按键事件
					/// </summary>
					/// <param name="x">鼠标X坐标</param>
					/// <param name="y">鼠标Y坐标</param>
					/// <param name="button">鼠标的键值</param>
					/// <param name="time">事件发生时的时间</param>
					/// <returns></returns>
					ev_void mouseButtonPress(_in ev_int32 x,_in ev_int32 y,_in ev_uint32 button,_in ev_real64 time);
					/// <summary>
					/// 处理鼠标按键双击事件
					/// </summary>
					/// <param name="x">鼠标X坐标</param>
					/// <param name="y">鼠标Y坐标</param>
					/// <param name="button">鼠标的键值</param>
					/// <param name="time">事件发生时的时间</param>
					/// <returns></returns>
					ev_void mouseDoubleButtonPress(_in ev_int32 x,_in ev_int32 y,_in ev_uint32 button,_in ev_real64 time);
					/// <summary>
					/// 处理鼠标按键松开事件
					/// </summary>
					/// <param name="x">鼠标X坐标</param>
					/// <param name="y">鼠标Y坐标</param>
					/// <param name="button">鼠标的键值</param>
					/// <param name="time">事件发生时的时间</param>
					/// <returns></returns>
					ev_void mouseButtonRelease(_in ev_int32 x,_in ev_int32 y,_in ev_uint32 button,_in ev_real64 time);
					/// <summary>
					/// 处理键盘按下事件
					/// </summary>
					/// <param name="key">按键值</param>
					/// <param name="virtualKey">虚拟按皱值</param>
					/// <param name="time">事件发生时的时间</param>
					/// <returns></returns>
					ev_void keyPress(_in ev_int32 key,_in ev_int32 virtualKey,_in ev_real64 time);
					/// <summary>
					/// 处理键盘松开事件
					/// </summary>
					/// <param name="key">按键值</param>
					/// <param name="virtualKey">虚拟按皱值</param>
					/// <param name="time">事件发生时的时间</param>
					/// <returns></returns>
					ev_void keyRelease(_in ev_int32 key,_in ev_int32 virtualKey,_in ev_real64 time);
					///// <summary>
					///// 处理touchBegan事件
					///// </summary>
					///// <param name="id">点的ＩＤ</param>
					///// <param name="phase">触摸的类型</param>
					///// <param name="x">触摸点的Ｘ坐标</param>
					///// <param name="y">触摸点的Ｙ坐标</param>
					///// <param name="time">事件发生时的时间</param>
					///// <returns></returns>
					//ev_void touchBegan(_in ev_uint32 id,_in EarthView::World::Spatial::SystemUI::GUITouchPhase phase,_in ev_real32 x,_in ev_real32 y,_in ev_real64 time);
					///// <summary>
					///// 处理touchMove事件
					///// </summary>
					///// <param name="id">点的ＩＤ</param>
					///// <param name="phase">触摸的类型</param>
					///// <param name="x">触摸点的Ｘ坐标</param>
					///// <param name="y">触摸点的Ｙ坐标</param>
					///// <param name="time">事件发生时的时间</param>
					///// <returns></returns>
					//ev_void touchMove(_in ev_uint32 id,_in EarthView::World::Spatial::SystemUI::GUITouchPhase phase,_in ev_real32 x,_in ev_real32 y,_in ev_real64 time);
					///// <summary>
					///// 处理touchEnded事件
					///// </summary>
					///// <param name="id">点的ＩＤ</param>
					///// <param name="phase">触摸的类型</param>
					///// <param name="x">触摸点的Ｘ坐标</param>
					///// <param name="y">触摸点的Ｙ坐标</param>
					///// <param name="time">事件发生时的时间</param>
					///// <returns></returns>
					//ev_void touchEnded(_in ev_uint32 id,_in EarthView::World::Spatial::SystemUI::GUITouchPhase phase,_in ev_real32 x,_in ev_real32 y,_in ev_uint32 tap_count,_in ev_real64 time);
					/// <summary>
					/// 处理窗体关闭事件
					/// </summary>
					/// <param name="time">事件发生时的时间</param>
					/// <returns></returns>
					ev_void closeWindow(_in ev_real64 time);
					/// <summary>
					/// 处理程序退出事件
					/// </summary>
					/// <param name="key">按键值</param>
					/// <param name="time">事件发生时的时间</param>
					/// <returns></returns>
					ev_void quitApplication(_in ev_real64 time);
					/// <summary>
					/// 处理窗体大小变化事件
					/// </summary>
					/// <param name="x">窗体的左上角的Ｘ坐标</param>
					/// <param name="y">窗体的左上角的Y坐标</param>
					/// <param name="width">窗体的宽度</param>
					/// <param name="height">窗体的高度</param>
					/// <returns></returns>
					ev_void windowResize(_in ev_int32 x,_in ev_int32 y,_in ev_int32 width,_in ev_int32 height)
					{
						windowResize(x,y,width,height,0.0);
					}
					/// <summary>
					/// 处理鼠标滚轮事件
					/// </summary>
					/// <param name="delta">滚动的变化量</param>
					/// <returns></returns>
					ev_void mouseWheel(_in ev_real32 delta)
					{
						mouseWheel(delta,0.0);
					}
					/// <summary>
					/// 处理鼠标的移动事件
					/// </summary>
					/// <param name="x">鼠标的Ｘ坐标</param>
				    /// <param name="y">鼠标的Y坐标</param>
					/// <returns></returns>
					ev_void mouseMove(_in ev_int32 x,_in ev_int32 y)
					{
						mouseMove(x,y,0.0);
					}
					/// <summary>
					/// 处理鼠标的松开事件
					/// </summary>
					/// <param name="x">鼠标的Ｘ坐标</param>
					/// <param name="y">鼠标的Y坐标</param>
					/// <param name="button">鼠标的键值</param>
					/// <returns></returns>
					ev_void mouseButtonPress(_in ev_int32 x,_in ev_int32 y,_in ev_uint32 button)
					{
						mouseButtonPress(x,y,button,0.0);
					}
					/// <summary>
					/// 处理鼠标的双击事件
					/// </summary>
					/// <param name="x">鼠标的Ｘ坐标</param>
					/// <param name="y">鼠标的Y坐标</param>
					/// <param name="button">鼠标的键值</param>
					/// <returns></returns>
					ev_void mouseDoubleButtonPress(_in ev_int32 x,_in ev_int32 y,_in ev_uint32 button)
					{
						mouseDoubleButtonPress(x,y,button,0.0);
					}
					/// <summary>
					/// 处理鼠标的松开事件
					/// </summary>
					/// <param name="x">鼠标的Ｘ坐标</param>
					/// <param name="y">鼠标的Y坐标</param>
					/// <param name="button">鼠标的键值</param>
					/// <returns></returns>
					ev_void mouseButtonRelease(_in ev_int32 x,_in ev_int32 y,_in ev_uint32 button)
					{
						mouseButtonRelease(x,y,button,0.0);
					}
					/// <summary>
					/// 处理键盘按下事件
					/// </summary>
					/// <param name="key">按键值</param>
					/// <param name="virtualKey">虚拟按皱值</param>
					/// <returns></returns>
					ev_void keyPress(_in ev_int32 key,_in ev_int32 virtualKey)
					{
						keyPress(key,virtualKey,0.0);
					}
					/// <summary>
					/// 处理键盘松开事件
					/// </summary>
					/// <param name="key">按键值</param>
					/// <param name="virtualKey">虚拟按皱值</param>
					/// <returns></returns>
					ev_void keyRelease(_in ev_int32 key,_in ev_int32 virtualKey)
					{
						keyRelease(key,virtualKey,0.0);
					}
					///// <summary>
					///// 处理touchBegan事件
					///// </summary>
					///// <param name="id">点的ＩＤ</param>
					///// <param name="phase">触摸的类型</param>
					///// <param name="x">触摸点的Ｘ坐标</param>
					///// <param name="y">触摸点的Ｙ坐标</param>
					///// <returns></returns>
					//ev_void touchBegan(_in ev_uint32 id,_in EarthView::World::Spatial::SystemUI::GUITouchPhase phase,_in ev_real32 x,_in ev_real32 y)
					//{
					//	touchBegan(id,phase,x,y,0.0);
					//}
					///// <summary>
					///// 处理touchMove事件
					///// </summary>
					///// <param name="id">点的ＩＤ</param>
					///// <param name="phase">触摸的类型</param>
					///// <param name="x">触摸点的Ｘ坐标</param>
					///// <param name="y">触摸点的Ｙ坐标</param>
					///// <returns></returns>
					//ev_void touchMove(_in ev_uint32 id,_in EarthView::World::Spatial::SystemUI::GUITouchPhase phase,_in ev_real32 x,_in ev_real32 y)
					//{
					//	touchMove(id,phase,x,y,0.0);
					//}
					///// <summary>
					///// 处理touchEnded事件
					///// </summary>
					///// <param name="id">点的ＩＤ</param>
					///// <param name="phase">触摸的类型</param>
					///// <param name="x">触摸点的Ｘ坐标</param>
					///// <param name="y">触摸点的Ｙ坐标</param>
					///// <returns></returns>
					//ev_void touchEnded(_in ev_uint32 id,_in EarthView::World::Spatial::SystemUI::GUITouchPhase phase,_in ev_real32 x,_in ev_real32 y,_in ev_uint32 tap_count)
					//{
					//	touchEnded(id,phase,x,y,tap_count,0.0);
					//}
					/// <summary>
					/// 处理窗体关闭事件
					/// </summary>
					/// <returns></returns>
					ev_void closeWindow()
					{
						closeWindow(0.0);
					}
					/// <summary>
					/// 处理程序退出事件
					/// </summary>
					/// <returns></returns>
					ev_void quitApplication()
					{
						quitApplication(0.0);
					}
					/// <summary>
					/// 创建ＧＵＩ事件
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::SystemUI::CGUIEvent* createEvent();
					/// <summary>
					/// 产生帧事件
					/// </summary>
					/// <param name="time">当前时间</param>
					/// <returns></returns>
					ev_void frame(_in ev_real64 time);

					/// <summary>
					/// 重新设置累积事件
					/// </summary>
					/// <returns></returns>

					ev_void resetAccumlateEvent();

					/// <summary>
					/// 返回累积事件
					/// </summary>
					/// <returns></returns>

					EarthView::World::Spatial::SystemUI::CGUIEvent* getAccumlateEvent();

				protected:
					EarthView::World::Spatial3D::Controls::CGUIEventQueue& operator =(_in const EarthView::World::Spatial3D::Controls::CGUIEventQueue&)
					{
						return *this;
					}
				ev_internal:

					EarthView::World::Spatial3D::Controls::CEvents mevents;

					EarthView::World::Spatial::SystemUI::CGUIEvent* maccumlateEventState;

                    EV_MUTEX(mMutex)
				};
			}
		}
	}
}

#endif




