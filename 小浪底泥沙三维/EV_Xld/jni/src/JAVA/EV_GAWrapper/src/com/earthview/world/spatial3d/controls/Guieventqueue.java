package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Guieventqueue extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGUIEventQueue", new GuieventqueueClassFactory());
	}

	///typedef EarthView::World::Core::list<EarthView::World::Spatial3D::Controls::CGUIEvent*> EarthView::World::Spatial3D::Controls::CEvents;
	//// <summary>
	//// 构造函数
	//// </summary>
	//// <returns></returns>
	public Guieventqueue() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGUIEventQueue", null);
	}

	/**
	 * 挎贝构造函数
	 */
	public Guieventqueue(com.earthview.world.spatial3d.controls.Guieventqueue rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("CGUIEventQueue", list);
	}

	native private void setEvents_CEvents(long pNativeObject, long events);
	/**
	 * 设置事件队列
	 */
	public void setEvents(com.earthview.world.spatial3d.controls.Events events)
	{
		long eventsParamValue = events.nativeObject.pointer;
		setEvents_CEvents(this.nativeObject.pointer, eventsParamValue);
	}
	native private void appendEvents_CEvents(long pNativeObject, long events);
	/**
	 * 附加事件队列
	 */
	public void appendEvents(com.earthview.world.spatial3d.controls.Events events)
	{
		long eventsParamValue = events.nativeObject.pointer;
		appendEvents_CEvents(this.nativeObject.pointer, eventsParamValue);
	}
	native private void addEvent_CGUIEventPtr(long pNativeObject, long guiEvent);
	/**
	 * 加入事件
	 * @param guiEvent 事件对象
	 */
	public void addEvent(com.earthview.world.spatial.systemui.Guieventptr guiEvent)
	{
		long guiEventParamValue = guiEvent.nativeObject.pointer;
		addEvent_CGUIEventPtr(this.nativeObject.pointer, guiEventParamValue);
	}
	native private boolean takeEvent_CEvents(long pNativeObject, long events);
	/**
	 * 取出所有的事件对象
	 * @param events 事件队列
	 */
	public boolean takeEvent(com.earthview.world.spatial3d.controls.Events events)
	{
		long eventsParamValue = events.nativeObject.pointer;
		boolean returnValue = takeEvent_CEvents(this.nativeObject.pointer, eventsParamValue);
		return returnValue;
	}
	native private void windowResize_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64(long pNativeObject, int x, int y, int width, int height, double time);
	/**
	 * 处理窗体大小变化事件
	 * @param x 窗体的左上角的Ｘ坐标
	 * @param y 窗体的左上角的Ｙ坐标
	 * @param width 窗体的宽
	 * @param height 窗体的高
	 * @param time 事件发生时的时间
	 */
	public void windowResize(int x, int y, int width, int height, double time)
	{
		int xParamValue = x;
		int yParamValue = y;
		int widthParamValue = width;
		int heightParamValue = height;
		double timeParamValue = time;
		windowResize_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, widthParamValue, heightParamValue, timeParamValue);
	}
	native private void mouseWheel_ev_real32_ev_real64(long pNativeObject, float delta, double time);
	/**
	 * 处理鼠标滚轮事件
	 * @param delta 鼠标滚动的值
	 * @param time 事件发生时的时间
	 */
	public void mouseWheel(float delta, double time)
	{
		float deltaParamValue = delta;
		double timeParamValue = time;
		mouseWheel_ev_real32_ev_real64(this.nativeObject.pointer, deltaParamValue, timeParamValue);
	}
	native private void mouseMove_ev_int32_ev_int32_ev_real64(long pNativeObject, int x, int y, double time);
	/**
	 * 处理鼠标滚轮事件
	 * @param x 鼠标X坐标
	 * @param y 鼠标Y坐标
	 * @param time 事件发生时的时间
	 */
	public void mouseMove(int x, int y, double time)
	{
		int xParamValue = x;
		int yParamValue = y;
		double timeParamValue = time;
		mouseMove_ev_int32_ev_int32_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, timeParamValue);
	}
	native private void mouseButtonPress_ev_int32_ev_int32_ev_uint32_ev_real64(long pNativeObject, int x, int y, long button, double time);
	/**
	 * 处理鼠标按键事件
	 * @param x 鼠标X坐标
	 * @param y 鼠标Y坐标
	 * @param button 鼠标的键值
	 * @param time 事件发生时的时间
	 */
	public void mouseButtonPress(int x, int y, long button, double time)
	{
		int xParamValue = x;
		int yParamValue = y;
		long buttonParamValue = button;
		double timeParamValue = time;
		mouseButtonPress_ev_int32_ev_int32_ev_uint32_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, buttonParamValue, timeParamValue);
	}
	native private void mouseDoubleButtonPress_ev_int32_ev_int32_ev_uint32_ev_real64(long pNativeObject, int x, int y, long button, double time);
	/**
	 * 处理鼠标按键双击事件
	 * @param x 鼠标X坐标
	 * @param y 鼠标Y坐标
	 * @param button 鼠标的键值
	 * @param time 事件发生时的时间
	 */
	public void mouseDoubleButtonPress(int x, int y, long button, double time)
	{
		int xParamValue = x;
		int yParamValue = y;
		long buttonParamValue = button;
		double timeParamValue = time;
		mouseDoubleButtonPress_ev_int32_ev_int32_ev_uint32_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, buttonParamValue, timeParamValue);
	}
	native private void mouseButtonRelease_ev_int32_ev_int32_ev_uint32_ev_real64(long pNativeObject, int x, int y, long button, double time);
	/**
	 * 处理鼠标按键松开事件
	 * @param x 鼠标X坐标
	 * @param y 鼠标Y坐标
	 * @param button 鼠标的键值
	 * @param time 事件发生时的时间
	 */
	public void mouseButtonRelease(int x, int y, long button, double time)
	{
		int xParamValue = x;
		int yParamValue = y;
		long buttonParamValue = button;
		double timeParamValue = time;
		mouseButtonRelease_ev_int32_ev_int32_ev_uint32_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, buttonParamValue, timeParamValue);
	}
	native private void keyPress_ev_int32_ev_int32_ev_real64(long pNativeObject, int key, int virtualKey, double time);
	/**
	 * 处理键盘按下事件
	 * @param key 按键值
	 * @param virtualKey 虚拟按皱值
	 * @param time 事件发生时的时间
	 */
	public void keyPress(int key, int virtualKey, double time)
	{
		int keyParamValue = key;
		int virtualKeyParamValue = virtualKey;
		double timeParamValue = time;
		keyPress_ev_int32_ev_int32_ev_real64(this.nativeObject.pointer, keyParamValue, virtualKeyParamValue, timeParamValue);
	}
	native private void keyRelease_ev_int32_ev_int32_ev_real64(long pNativeObject, int key, int virtualKey, double time);
	/**
	 * 处理键盘松开事件
	 * @param key 按键值
	 * @param virtualKey 虚拟按皱值
	 * @param time 事件发生时的时间
	 */
	public void keyRelease(int key, int virtualKey, double time)
	{
		int keyParamValue = key;
		int virtualKeyParamValue = virtualKey;
		double timeParamValue = time;
		keyRelease_ev_int32_ev_int32_ev_real64(this.nativeObject.pointer, keyParamValue, virtualKeyParamValue, timeParamValue);
	}
	native private void touchBegan_ev_uint32_GUITouchPhase_ev_real32_ev_real32_ev_real64(long pNativeObject, long id, int phase, float x, float y, double time);
	/**
	 * 处理touchBegan事件
	 * @param id 点的ＩＤ
	 * @param phase 触摸的类型
	 * @param x 触摸点的Ｘ坐标
	 * @param y 触摸点的Ｙ坐标
	 * @param time 事件发生时的时间
	 */
	public void touchBegan(long id, com.earthview.world.spatial.systemui.GUITouchPhase phase, float x, float y, double time)
	{
		long idParamValue = id;
		int phaseParamValue = phase.getValue();
		float xParamValue = x;
		float yParamValue = y;
		double timeParamValue = time;
		touchBegan_ev_uint32_GUITouchPhase_ev_real32_ev_real32_ev_real64(this.nativeObject.pointer, idParamValue, phaseParamValue, xParamValue, yParamValue, timeParamValue);
	}
	native private void touchMove_ev_uint32_GUITouchPhase_ev_real32_ev_real32_ev_real64(long pNativeObject, long id, int phase, float x, float y, double time);
	/**
	 * 处理touchMove事件
	 * @param id 点的ＩＤ
	 * @param phase 触摸的类型
	 * @param x 触摸点的Ｘ坐标
	 * @param y 触摸点的Ｙ坐标
	 * @param time 事件发生时的时间
	 */
	public void touchMove(long id, com.earthview.world.spatial.systemui.GUITouchPhase phase, float x, float y, double time)
	{
		long idParamValue = id;
		int phaseParamValue = phase.getValue();
		float xParamValue = x;
		float yParamValue = y;
		double timeParamValue = time;
		touchMove_ev_uint32_GUITouchPhase_ev_real32_ev_real32_ev_real64(this.nativeObject.pointer, idParamValue, phaseParamValue, xParamValue, yParamValue, timeParamValue);
	}
	native private void touchEnded_ev_uint32_GUITouchPhase_ev_real32_ev_real32_ev_uint32_ev_real64(long pNativeObject, long id, int phase, float x, float y, long tap_count, double time);
	/**
	 * 处理touchEnded事件
	 * @param id 点的ＩＤ
	 * @param phase 触摸的类型
	 * @param x 触摸点的Ｘ坐标
	 * @param y 触摸点的Ｙ坐标
	 * @param time 事件发生时的时间
	 */
	public void touchEnded(long id, com.earthview.world.spatial.systemui.GUITouchPhase phase, float x, float y, long tap_count, double time)
	{
		long idParamValue = id;
		int phaseParamValue = phase.getValue();
		float xParamValue = x;
		float yParamValue = y;
		long tap_countParamValue = tap_count;
		double timeParamValue = time;
		touchEnded_ev_uint32_GUITouchPhase_ev_real32_ev_real32_ev_uint32_ev_real64(this.nativeObject.pointer, idParamValue, phaseParamValue, xParamValue, yParamValue, tap_countParamValue, timeParamValue);
	}
	native private void closeWindow_ev_real64(long pNativeObject, double time);
	/**
	 * 处理窗体关闭事件
	 * @param time 事件发生时的时间
	 */
	public void closeWindow(double time)
	{
		double timeParamValue = time;
		closeWindow_ev_real64(this.nativeObject.pointer, timeParamValue);
	}
	native private void quitApplication_ev_real64(long pNativeObject, double time);
	/**
	 * 处理程序退出事件
	 * @param key 按键值
	 * @param time 事件发生时的时间
	 */
	public void quitApplication(double time)
	{
		double timeParamValue = time;
		quitApplication_ev_real64(this.nativeObject.pointer, timeParamValue);
	}
	native private void windowResize_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int x, int y, int width, int height);
	/**
	 * 处理窗体大小变化事件
	 * @param x 窗体的左上角的Ｘ坐标
	 * @param y 窗体的左上角的Y坐标
	 * @param width 窗体的宽度
	 * @param height 窗体的高度
	 */
	public void windowResize(int x, int y, int width, int height)
	{
		int xParamValue = x;
		int yParamValue = y;
		int widthParamValue = width;
		int heightParamValue = height;
		windowResize_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, xParamValue, yParamValue, widthParamValue, heightParamValue);
	}
	native private void mouseWheel_ev_real32(long pNativeObject, float delta);
	/**
	 * 处理鼠标滚轮事件
	 * @param delta 滚动的变化量
	 */
	public void mouseWheel(float delta)
	{
		float deltaParamValue = delta;
		mouseWheel_ev_real32(this.nativeObject.pointer, deltaParamValue);
	}
	native private void mouseMove_ev_int32_ev_int32(long pNativeObject, int x, int y);
	/**
	 * 处理鼠标的移动事件
	 * @param x 鼠标的Ｘ坐标
	 * @param y 鼠标的Y坐标
	 */
	public void mouseMove(int x, int y)
	{
		int xParamValue = x;
		int yParamValue = y;
		mouseMove_ev_int32_ev_int32(this.nativeObject.pointer, xParamValue, yParamValue);
	}
	native private void mouseButtonPress_ev_int32_ev_int32_ev_uint32(long pNativeObject, int x, int y, long button);
	/**
	 * 处理鼠标的松开事件
	 * @param x 鼠标的Ｘ坐标
	 * @param y 鼠标的Y坐标
	 * @param button 鼠标的键值
	 */
	public void mouseButtonPress(int x, int y, long button)
	{
		int xParamValue = x;
		int yParamValue = y;
		long buttonParamValue = button;
		mouseButtonPress_ev_int32_ev_int32_ev_uint32(this.nativeObject.pointer, xParamValue, yParamValue, buttonParamValue);
	}
	native private void mouseDoubleButtonPress_ev_int32_ev_int32_ev_uint32(long pNativeObject, int x, int y, long button);
	/**
	 * 处理鼠标的双击事件
	 * @param x 鼠标的Ｘ坐标
	 * @param y 鼠标的Y坐标
	 * @param button 鼠标的键值
	 */
	public void mouseDoubleButtonPress(int x, int y, long button)
	{
		int xParamValue = x;
		int yParamValue = y;
		long buttonParamValue = button;
		mouseDoubleButtonPress_ev_int32_ev_int32_ev_uint32(this.nativeObject.pointer, xParamValue, yParamValue, buttonParamValue);
	}
	native private void mouseButtonRelease_ev_int32_ev_int32_ev_uint32(long pNativeObject, int x, int y, long button);
	/**
	 * 处理鼠标的松开事件
	 * @param x 鼠标的Ｘ坐标
	 * @param y 鼠标的Y坐标
	 * @param button 鼠标的键值
	 */
	public void mouseButtonRelease(int x, int y, long button)
	{
		int xParamValue = x;
		int yParamValue = y;
		long buttonParamValue = button;
		mouseButtonRelease_ev_int32_ev_int32_ev_uint32(this.nativeObject.pointer, xParamValue, yParamValue, buttonParamValue);
	}
	native private void keyPress_ev_int32_ev_int32(long pNativeObject, int key, int virtualKey);
	/**
	 * 处理键盘按下事件
	 * @param key 按键值
	 * @param virtualKey 虚拟按皱值
	 */
	public void keyPress(int key, int virtualKey)
	{
		int keyParamValue = key;
		int virtualKeyParamValue = virtualKey;
		keyPress_ev_int32_ev_int32(this.nativeObject.pointer, keyParamValue, virtualKeyParamValue);
	}
	native private void keyRelease_ev_int32_ev_int32(long pNativeObject, int key, int virtualKey);
	/**
	 * 处理键盘松开事件
	 * @param key 按键值
	 * @param virtualKey 虚拟按皱值
	 */
	public void keyRelease(int key, int virtualKey)
	{
		int keyParamValue = key;
		int virtualKeyParamValue = virtualKey;
		keyRelease_ev_int32_ev_int32(this.nativeObject.pointer, keyParamValue, virtualKeyParamValue);
	}
	native private void touchBegan_ev_uint32_GUITouchPhase_ev_real32_ev_real32(long pNativeObject, long id, int phase, float x, float y);
	/**
	 * 处理touchBegan事件
	 * @param id 点的ＩＤ
	 * @param phase 触摸的类型
	 * @param x 触摸点的Ｘ坐标
	 * @param y 触摸点的Ｙ坐标
	 */
	public void touchBegan(long id, com.earthview.world.spatial.systemui.GUITouchPhase phase, float x, float y)
	{
		long idParamValue = id;
		int phaseParamValue = phase.getValue();
		float xParamValue = x;
		float yParamValue = y;
		touchBegan_ev_uint32_GUITouchPhase_ev_real32_ev_real32(this.nativeObject.pointer, idParamValue, phaseParamValue, xParamValue, yParamValue);
	}
	native private void touchMove_ev_uint32_GUITouchPhase_ev_real32_ev_real32(long pNativeObject, long id, int phase, float x, float y);
	/**
	 * 处理touchMove事件
	 * @param id 点的ＩＤ
	 * @param phase 触摸的类型
	 * @param x 触摸点的Ｘ坐标
	 * @param y 触摸点的Ｙ坐标
	 */
	public void touchMove(long id, com.earthview.world.spatial.systemui.GUITouchPhase phase, float x, float y)
	{
		long idParamValue = id;
		int phaseParamValue = phase.getValue();
		float xParamValue = x;
		float yParamValue = y;
		touchMove_ev_uint32_GUITouchPhase_ev_real32_ev_real32(this.nativeObject.pointer, idParamValue, phaseParamValue, xParamValue, yParamValue);
	}
	native private void touchEnded_ev_uint32_GUITouchPhase_ev_real32_ev_real32_ev_uint32(long pNativeObject, long id, int phase, float x, float y, long tap_count);
	/**
	 * 处理touchEnded事件
	 * @param id 点的ＩＤ
	 * @param phase 触摸的类型
	 * @param x 触摸点的Ｘ坐标
	 * @param y 触摸点的Ｙ坐标
	 */
	public void touchEnded(long id, com.earthview.world.spatial.systemui.GUITouchPhase phase, float x, float y, long tap_count)
	{
		long idParamValue = id;
		int phaseParamValue = phase.getValue();
		float xParamValue = x;
		float yParamValue = y;
		long tap_countParamValue = tap_count;
		touchEnded_ev_uint32_GUITouchPhase_ev_real32_ev_real32_ev_uint32(this.nativeObject.pointer, idParamValue, phaseParamValue, xParamValue, yParamValue, tap_countParamValue);
	}
	native private void closeWindow_void(long pNativeObject);
	/**
	 * 处理窗体关闭事件
	 */
	public void closeWindow()
	{
		closeWindow_void(this.nativeObject.pointer);
	}
	native private void quitApplication_void(long pNativeObject);
	/**
	 * 处理程序退出事件
	 */
	public void quitApplication()
	{
		quitApplication_void(this.nativeObject.pointer);
	}
	native private long createEvent_void(long pNativeObject);
	/**
	 * 创建ＧＵＩ事件
	 */
	public com.earthview.world.spatial.systemui.Guievent createEvent()
	{
		long returnValue = createEvent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Guievent __returnValue = new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate, "CGUIEvent");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Guievent)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGUIEvent");
		}
		return __returnValue;
	}
	native private void frame_ev_real64(long pNativeObject, double time);
	/**
	 * 产生帧事件
	 * @param time 当前时间
	 */
	public void frame(double time)
	{
		double timeParamValue = time;
		frame_ev_real64(this.nativeObject.pointer, timeParamValue);
	}
	native private void resetAccumlateEvent_void(long pNativeObject);
	/**
	 * 重新设置累积事件
	 */
	public void resetAccumlateEvent()
	{
		resetAccumlateEvent_void(this.nativeObject.pointer);
	}
	native private long getAccumlateEvent_void(long pNativeObject);
	/**
	 * 返回累积事件
	 */
	public com.earthview.world.spatial.systemui.Guievent getAccumlateEvent()
	{
		long returnValue = getAccumlateEvent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Guievent __returnValue = new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate, "CGUIEvent");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Guievent)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGUIEvent");
		}
		return __returnValue;
	}
	native private long get_mevents_void(long pNativeObject);
	public com.earthview.world.spatial3d.controls.Events get_mevents()
	{
		long jniValue = get_mevents_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.controls.Events __returnValue = new com.earthview.world.spatial3d.controls.Events(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CEvents");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.Events)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CEvents");
		}
		return __returnValue;
	}
	
	native private void set_mevents_CEvents (long pNativeObject, long value);
	public void set_mevents(com.earthview.world.spatial3d.controls.Events mevents)
	{
		long meventsParamValue = mevents.nativeObject.pointer;
		
		set_mevents_CEvents(this.nativeObject.pointer, meventsParamValue);
	}
	
	native private long get_maccumlateEventState_void(long pNativeObject);
	public com.earthview.world.spatial.systemui.Guievent get_maccumlateEventState()
	{
		long jniValue = get_maccumlateEventState_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Guievent __returnValue = new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate, "CGUIEvent");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Guievent)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGUIEvent");
		}
		return __returnValue;
	}
	
	native private void set_maccumlateEventState_CGUIEvent (long pNativeObject, long value);
	public void set_maccumlateEventState(com.earthview.world.spatial.systemui.Guievent maccumlateEventState)
	{
		long maccumlateEventStateParamValue = (maccumlateEventState == null ? 0L : maccumlateEventState.nativeObject.pointer);
		
		set_maccumlateEventState_CGUIEvent(this.nativeObject.pointer, maccumlateEventStateParamValue);
	}
	
	public Guieventqueue(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Guieventqueue(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Guieventqueue fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Guieventqueue obj = null;
 		if(baseObj instanceof Guieventqueue)
		{
			obj = (Guieventqueue)baseObj;
		} else {
			obj = new Guieventqueue(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGUIEventQueue");
			obj.increaseCast();
		}

		return obj;
	}
}
