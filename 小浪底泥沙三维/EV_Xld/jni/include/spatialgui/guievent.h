#ifndef _CGUIEVENT_H_
#define _CGUIEVENT_H_ 1

#include "spatialgui/spatialguiconfig.h"
#include "core/memoryallocatedobject.h"
#include "core/stdheaders.h"
//#include "graphic/userobjectbindings.h"
#include "core/sharedptr.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace SystemUI
			{
				enum GUITouchPhase
				{
					TOUCH_UNKNOWN = 0,
					TOUCH_BEGAN = 1,
					TOUCH_MOVED = 2,
					TOUCH_STATIONERY = 3,
					TOUCH_ENDED = 4
				};

				class EV_SPATIALGUI_DLL CTouchPoint:public EarthView::World::Core::CBaseObject
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CTouchPoint();
				ev_private:
					CTouchPoint(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="in_id">触摸点的ＩＤ</param>
					/// <param name="in_phase">触摸点的类型</param>
					/// <param name="in_x">触摸点的X坐标</param>
					/// <param name="in_y">触摸点的Ｙ坐标</param>
					/// <param name="in_tap_count">总点数</param>
					/// <returns></returns>
					CTouchPoint(_in ev_uint32 in_id,_in EarthView::World::Spatial::SystemUI::GUITouchPhase in_phase,_in ev_real32 in_x,_in ev_real32 in_y,_in ev_uint32 in_tap_count);
					/// <summary>
					/// 挎贝构造函数
					/// </summary>
					/// <returns></returns>
					CTouchPoint(_in const CTouchPoint& rhs);

				public:
					ev_uint32 mid;
					EarthView::World::Spatial::SystemUI::GUITouchPhase mphase;
					ev_real32 x;
					ev_real32 y;
					ev_uint32 mtapCount;

				};

				class EV_SPATIALGUI_DLL CTouchSet : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Spatial::SystemUI::CTouchPoint> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					CTouchSet::iterator insert(_in CTouchSet::iterator pos, _in EarthView::World::Spatial::SystemUI::CTouchPoint const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CTouchSet(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CTouchSet();

					CTouchSet(_in const CTouchSet& rhs);

					ev_void operator = (_in const EarthView::World::Spatial::SystemUI::CTouchSet& rhs);
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void push_back(_in EarthView::World::Spatial::SystemUI::CTouchPoint const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Spatial::SystemUI::CTouchPoint & front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Spatial::SystemUI::CTouchPoint & back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void insert(_in ev_uint32 pos, _in EarthView::World::Spatial::SystemUI::CTouchPoint const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					ev_void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial::SystemUI::CTouchPoint & operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial::SystemUI::CTouchPoint const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial::SystemUI::CTouchPoint & at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial::SystemUI::CTouchPoint const &at(_in ev_size_t n) const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					ev_void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					ev_void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clear();
				};

				class EV_SPATIALGUI_DLL CTouchData:public EarthView::World::Core::CBaseObject
				{
				public:
					//typedef vector<EarthView::World::Spatial::SystemUI::CTouchPoint> EarthView::World::Spatial::SystemUI::CTouchSet;
					typedef CTouchSet::iterator iterator;
					typedef CTouchSet::const_iterator const_iterator;
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CTouchData();
					
					CTouchData(_in const CTouchData& rhs);

					ev_private:
					CTouchData(_in EarthView::World::Core::CNameValuePairList* pList);

					CTouchData::iterator begin();

					CTouchData::const_iterator begin() const;

					CTouchData::iterator end();

					CTouchData::const_iterator end() const;

					const EarthView::World::Spatial::SystemUI::CTouchPoint get(_in ev_uint32 i) const;

					ev_uint32 getNumTouchPoints() const;

ev_internal:

					friend class CGUIEvent;
					/// <summary>
					/// 增加触摸点
					/// </summary>
					/// <param name="id">触摸点的ＩＤ</param>
					/// <param name="phase">触摸点的类型</param>
					/// <param name="x">触摸点的X坐标</param>
					/// <param name="y">触摸点的Ｙ坐标</param>
					/// <param name="tap_count">总点数</param>
					/// <returns></returns>
					ev_void addTouchPoint(_in ev_uint32 id,_in EarthView::World::Spatial::SystemUI::GUITouchPhase phase,_in ev_real32 x,_in ev_real32 y,_in ev_uint32 tap_count);

					EarthView::World::Spatial::SystemUI::CTouchSet mtouchSet;

				};

				class EV_SPATIALGUI_DLL CGUIEvent:public EarthView::World::Core::CAllocatedObject
				{
				public:
					enum GUIMouseButtonMask
					{
						BUTTON_UnKnown = 0,
						LEFT_MOUSE_BUTTON=1,
						MIDDLE_MOUSE_BUTTON=2,
						RIGHT_MOUSE_BUTTON=4
					};

					enum GUIEventType
					{
						NONE = 0,
						MOUSEDOWN = 1,
						MOUSEUP = 2,
						MOUSEDOUBLECLIK = 4,
						MOUSEMOVE = 8,
						KEYDOWN = 16,
						KEYUP = 32,
						MOUSEWHEEL = 64,
						TOUCHBEGIN = 128,
						TOUCHMOVE = 256,
						TOUCHEND = 512,
						FRAME = 1024,
						CLOSE_WINDOW = 2048,
						QUIT_APPLICATION = 4096,
						WINDOW_RESIZE = 8192,
						USER = 16384
					};

					enum GUIKeySymbol
					{
					    KEY_UnKnown = 0,
						KEY_Space = 32,
						KEY_0 = 48,
						KEY_1 = 49,
						KEY_2 = 50,
						KEY_3 = 51,
						KEY_4 = 52,
						KEY_5 = 53,
						KEY_6 = 54,
						KEY_7 = 55,
						KEY_8 = 56,
						KEY_9 = 57,
							   
						KEY_A = 97,
						KEY_B = 98,
						KEY_C = 99,
						KEY_D = 100,
						KEY_E = 101,
						KEY_F = 102,
						KEY_G = 103,
						KEY_H = 104,
						KEY_I = 105,
						KEY_J = 106,
						KEY_K = 107,
						KEY_L = 108,
						KEY_M = 109,
						KEY_N = 110,
						KEY_O = 111,
						KEY_P = 112,
						KEY_Q = 113,
						KEY_R = 114,
						KEY_S = 115,
						KEY_T = 116,
						KEY_U = 117,
						KEY_V = 118,
						KEY_W = 119,
						KEY_X = 120,
						KEY_Y = 121,
						KEY_Z = 122,

						KEY_Tab = 65289,
						KEY_Scroll_Lock = 65300,
						KEY_Escape = 65307,
						KEY_Delete = 65535,

						KEY_Home = 5360,
						KEY_Left = 65361,
						KEY_Up = 65362,
						KEY_Right = 65363,
						KEY_Down = 65364,
						KEY_Page_Up = 65365,
						KEY_Page_Down = 65366,
						KEY_End = 65367,
						KEY_Begin = 65368,

						KEY_Num_Lock = 65407,

						KEY_F1 = 65470,
						KEY_F2 = 65471,
						KEY_F3 = 65472,
						KEY_F4 = 65473,
						KEY_F5 = 65474,
						KEY_F6 = 65475,
						KEY_F7 = 65476,
						KEY_F8 = 65477,
						KEY_F9 = 65478,
						KEY_F10 = 65479,
						KEY_F11 = 65480,
						KEY_F12 = 65481,

						KEY_Shift_L = 65505,
						KEY_Shift_R = 65506,
						KEY_Control_L = 65507,
						KEY_Control_R = 65508,
						KEY_Caps_Lock = 65509,
						KEY_Shift_Lock = 65510,
						KEY_Alt_L = 65512,
						KEY_Alt_R = 65514,
					};

					enum GUIModKeyMask
					{
						MODKEY_LEFT_SHIFT = 1,
						MODKEY_RIGHT_SHIFT = 2,
						MODKEY_LEFT_CTRL = 4,
						MODKEY_RIGHT_CTRL = 8,
						MODKEY_LEFT_ALT = 16,
						MODKEY_RIGHT_ALT = 32,
						MODKEY_NUM_LOCK = 4096,
						MODKEY_CAPS_LOCK = 8192,
						MODKEY_CTRL = (MODKEY_LEFT_CTRL|MODKEY_RIGHT_CTRL),
						MODKEY_SHIFT = (MODKEY_LEFT_SHIFT|MODKEY_RIGHT_SHIFT),
						MODKEY_ALT = (MODKEY_RIGHT_ALT|MODKEY_RIGHT_ALT)
					};

				public:
					/// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <returns></returns>
					CGUIEvent();
				ev_private:
					CGUIEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 挎贝构造函数
					/// </summary>
					/// <returns></returns>
					CGUIEvent(_in const CGUIEvent& rhs);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CGUIEvent();
					/// <summary>
					/// 返回累计的事件
					/// </summary>
					/// <returns></returns>
					static EarthView::World::Spatial::SystemUI::CGUIEvent* getAccumulatedEventState();
					/// <summary>
					/// 设置事件对象的有没有被处理过
					/// </summary>
					/// <param name="handled">是否被处理过</param>
					/// <returns></returns>
					ev_void setHandled(_in ev_bool handled)
					{
						mhandled=handled;
					}
					/// <summary>
					/// 获取事件对象有没有被处理过
					/// </summary>
					/// <returns></returns>
					ev_bool getHandled()
					{
						return mhandled;
					}
					/// <summary>
					/// 设置事件对象的类型
					/// </summary>
					/// <param name="eventType">事件的类型</param>
					/// <returns></returns>
					ev_void setEventType(_in EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType eventType)
					{
						meventType = eventType;
					}
					/// <summary>
					/// 获取事件对象的类型
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType getEventType()
					{
						return meventType;
					}
					/// <summary>
					/// 设置事件对象产生时的时间
					/// </summary>
					/// <param name="time">时间</param>
					/// <returns></returns>
					ev_void setTime(_in ev_real64 time)
					{
						mtime=time;
					}
					/// <summary>
					/// 获取事件对象的时间
					/// </summary>
					/// <returns></returns>
					ev_real64 getTime()
					{
						return mtime;
					}
					/// <summary>
					/// 设置事件对象的窗口范围
					/// </summary>
					/// <param name="x">左上角的Ｘ坐标</param>
					/// <param name="y">左上角的Ｙ坐标</param>
					/// <param name="width">宽度</param>
					/// <param name="height">高度</param>
					/// <returns></returns>
					ev_void setWindowRectangle(_in ev_int32 x,_in ev_int32 y,_in ev_int32 width,_in ev_int32 height);
					/// <summary>
					/// 获取窗口的Ｘ坐标
					/// </summary>
					/// <returns></returns>
					ev_int32 getWindowX()
					{
						return mwindowX;
					}
					/// <summary>
					/// 获取窗口的Y坐标
					/// </summary>
					/// <returns></returns>
					ev_int32 getWindowY()
					{
						return mwindowY;
					}
					/// <summary>
					/// 获取窗口的宽度
					/// </summary>
					/// <returns></returns>
					ev_int32 getWindowWidth()
					{
						return mwindowWidth;
					}
					/// <summary>
					/// 获取窗口的高度
					/// </summary>
					/// <returns></returns>
					ev_int32 getWindowHeight()
					{
						return mwindowHeight;
					}
					/// <summary>
					/// 设置事件对象的按键值
					/// </summary>
					/// <param name="key">键盘按键值，值为GUIKeySymbol枚举中的一个</param>
					/// <returns></returns>
					ev_void setKey(_in GUIKeySymbol key)
					{
						mkey = key;
					}
					/// <summary>
					/// 获取事件对象的按键值
					/// </summary>
					/// <returns>值为GUIKeySymbol枚举中的一个</returns>
					GUIKeySymbol getKey()
					{
						return mkey;
					}
					/// <summary>
					/// 设置事件对象的虚拟按键值
					/// </summary>
					/// <param name="key">键盘按键值，值为GUIKeySymbol枚举中的一个</param>
					/// <returns></returns>
					ev_void setVirtualKey(_in GUIKeySymbol key)
					{
						mvirtualKey = key;
					}
					/// <summary>
					/// 获取事件对象的虚拟按键值
					/// </summary>
					/// <returns>值为GUIKeySymbol枚举中的一个</returns>
					GUIKeySymbol getVirtualKey()
					{
						return mvirtualKey;
					}
					/// <summary>
					/// 设置事件对象的鼠标键值
					/// </summary>
					/// <param name="button">鼠标键值，为GUIMouseButtonMask枚举中的一个值</param>
					ev_void setButton(_in GUIMouseButtonMask button)
					{
						mbutton = button;
					}
					/// <summary>
					/// 获取事件对象的鼠标键值
					/// </summary>
					/// <returns>值为GUIMouseButtonMask枚举中的一个值</returns>
					GUIMouseButtonMask getButton()
					{
						return mbutton;
					}
					/// <summary>
					/// 设置事件对象的Ｘ坐标值
					/// </summary>
					/// <param name="x">鼠标的Ｘ坐标</param>
					/// <returns></returns>
					ev_void setX(_in ev_int32 x)
					{
						mx = x;
					}
					/// <summary>
					/// 获取事件对象的X坐标
					/// </summary>
					/// <returns></returns>
					ev_int32 getX()
					{
						return mx;
					}
					/// <summary>
					/// 设置事件对象的Y坐标值
					/// </summary>
					/// <param name="y">鼠标的Y坐标</param>
					/// <returns></returns>
					ev_void setY(_in ev_int32 y)
					{
						my = y;
					}
					/// <summary>
					/// 获取事件对象的Y坐标
					/// </summary>
					/// <returns></returns>
					ev_int32 getY()
					{
						return my;
					}
					/// <summary>
					/// 设置事件对象的鼠标掩码
					/// </summary>
					/// <param name="mask">鼠标的键值，值为GUIMouseButtonMask枚举的组合</param>
					/// <returns></returns>
					ev_void setButtonMask(_in ev_int32 mask)
					{
						mbuttonMask = mask;
					}
					/// <summary>
					/// 获取事件对象的鼠标掩码，值为GUIMouseButtonMask枚举的组合
					/// </summary>
					/// <returns></returns>
					ev_int32 getButtonMask()
					{
						return mbuttonMask;
					}
					/// <summary>
					/// 设置事件对象的辅助键的掩码
					/// </summary>
					/// <param name="mask">辅助按键的值，为GUIModKeyMask枚举中的一个值</param>
					/// <returns></returns>
					ev_void setModKeyMask(_in ev_int32 mask)
					{
						mmodKeyMask = mask;
					}
					/// <summary>
					/// 获取事件对象的辅助键的掩码
					/// </summary>
					/// <returns>为GUIModKeyMask枚举中的一个值</returns>
					ev_int32 getModKeyMask()
					{
						return mmodKeyMask;
					}
					/// <summary>
					/// 设置事件对象的滚轮的值
					/// </summary>
					/// <param name="delta">鼠标滚轮的变化值,鼠标向后滚动，值为负，向前液，值为正。delta一般为120的倍数</param>
					/// <returns></returns>
					ev_void setMouseWheelDelta(_in ev_real32 delta)
					{
						mmouseWheelDelta = delta;
					}
					/// <summary>
					/// 获取事件对象的滚轮的值
					/// </summary>
					/// <returns></returns>
					ev_real32 getMouseWheelDelta()
					{
						return mmouseWheelDelta;
					}

					/// <summary>
					/// 添加触摸点
					/// </summary>
					/// <param name="id">触摸点的ＩＤ</param>
					/// <param name="phase">触摸点的类型</param>
					/// <param name="x">触摸点的X坐标</param>
					/// <param name="y">触摸点的Ｙ坐标</param>
					/// <returns></returns>
					ev_void addTouchPoint(_in ev_uint32 id,_in EarthView::World::Spatial::SystemUI::GUITouchPhase phase,_in ev_real32 x, _in ev_real32 y)
					{
						addTouchPoint(id,phase,x,y,0);
					}

					/// <summary>
					/// 添加触摸点
					/// </summary>
					/// <param name="id">触摸点的ＩＤ</param>
					/// <param name="phase">触摸点的类型</param>
					/// <param name="x">触摸点的X坐标</param>
					/// <param name="y">触摸点的Ｙ坐标</param>
					/// <param name="tapCount">触摸点的数量</param>
					/// <returns></returns>
					ev_void addTouchPoint(_in ev_uint32 id,_in EarthView::World::Spatial::SystemUI::GUITouchPhase phase,_in ev_real32 x, _in ev_real32 y,_in ev_uint32 tapCount);

					/// <summary>
					/// 返回触摸事件的详细信息。
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::SystemUI::CTouchData getTouchData()
					{
						return mtouchData;
					}

					/// <summary>
					/// 是否为多点触摸事件
					/// </summary>
					/// <returns></returns>
					ev_bool isMultiTouchEvent()
					{
						return mtouchData.getNumTouchPoints()>0;
					}

//					/// <summary>
//					/// 获取事件对象的自定义数据
//					/// </summary>
//					/// <returns></returns>
// 					EarthView::World::Graphic::CUserObjectBindings& getUserObjectBindings();
//					/// <summary>
//					/// 设置事件对象的自定义事件对象
//					/// </summary>
//					/// <returns></returns>
// 					const EarthView::World::Graphic::CUserObjectBindings &getUserObjectBindings() const;
//
//ev_private:
//					/// <summary>
//					///设置事件对象的自定义数据
//					/// </summary>
//					/// <param name="anything">自定义数据</param>
//					/// <returns></returns>
//					void setUserAny( const CAny &anything );
//					/// <summary>
//					///获取事件对象的自定义数据
//					/// </summary>
//					/// <returns></returns>
//					const CAny &getUserAny() const;

protected:
					EarthView::World::Spatial::SystemUI::CGUIEvent& operator =(const EarthView::World::Spatial::SystemUI::CGUIEvent& rhs)
					{
						return *this;
					}

				ev_internal:

					mutable ev_bool mhandled; 
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType meventType;
					ev_real64 mtime;
					GUIKeySymbol mkey;
					GUIKeySymbol mvirtualKey;
					GUIMouseButtonMask mbutton;
					ev_int32 mbuttonMask;
					ev_int32 mmodKeyMask;
					ev_int32 mx;
					ev_int32 my;
					ev_int32 mwindowX;
					ev_int32 mwindowY;
					ev_int32 mwindowWidth;
					ev_int32 mwindowHeight;
					ev_real32 mmouseWheelDelta;
					EarthView::World::Spatial::SystemUI::CTouchData mtouchData;

					//EarthView::World::Graphic::CUserObjectBindings mUserObjectBindings;

				};

				class EV_SPATIALGUI_DLL CGUIEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial::SystemUI::CGUIEvent>
				{
ev_private:
					CGUIEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CGUIEventPtr(_in CGUIEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CGUIEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGUIEventPtr();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="rep">事件对象</param>
					/// <returns></returns>
				    explicit CGUIEventPtr(_in CGUIEvent *rep);
					/// <summary>
					/// 挎贝构造函数
					/// </summary>
					/// <param name="tp">待挎贝的对象</param>
					/// <returns></returns>
					CGUIEventPtr(_in const CGUIEventPtr &tp);

					/// <summary>
					/// 返回事件对象
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::SystemUI::CGUIEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial::SystemUI::CGUIEvent>::get();
					}
					/// <summary>
					/// 赋值运算符
					/// </summary>
					/// <param name="tp">的对象</param>
					/// <returns></returns>
					EarthView::World::Spatial::SystemUI::CGUIEventPtr &operator = (_in const EarthView::World::Spatial::SystemUI::CGUIEventPtr &r);
					/// <summary>
					/// 赋值运算符
					/// </summary>
					/// <param name="rep">事件对象</param>
					/// <returns></returns>
					EarthView::World::Spatial::SystemUI::CGUIEventPtr &operator = (_in CGUIEvent* ref_rep);

				};

			}
		}
	}
}

#endif




