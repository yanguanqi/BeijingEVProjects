package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Guievent extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CGUIEvent", new GuieventClassFactory());
	}

	public enum GUIMouseButtonMask implements INativeEnum<GUIMouseButtonMask> {
		BUTTON_UnKnown(GUIMouseButtonMaskHelper.ENUM_VALUES[0]),
		LEFT_MOUSE_BUTTON(GUIMouseButtonMaskHelper.ENUM_VALUES[1]),
		MIDDLE_MOUSE_BUTTON(GUIMouseButtonMaskHelper.ENUM_VALUES[2]),
		RIGHT_MOUSE_BUTTON(GUIMouseButtonMaskHelper.ENUM_VALUES[3]);
		private int value;
		GUIMouseButtonMask(int i) {
			this.value = i;
		}
		public GUIMouseButtonMask getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final GUIMouseButtonMask toEnum(int retval) {
			if(retval == BUTTON_UnKnown.value){
				return BUTTON_UnKnown;
			}
			else if(retval == LEFT_MOUSE_BUTTON.value){
				return LEFT_MOUSE_BUTTON;
			}
			else if(retval == MIDDLE_MOUSE_BUTTON.value){
				return MIDDLE_MOUSE_BUTTON;
			}
			else if(retval == RIGHT_MOUSE_BUTTON.value){
				return RIGHT_MOUSE_BUTTON;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class GUIMouseButtonMaskHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public enum GUIEventType implements INativeEnum<GUIEventType> {
		NONE(GUIEventTypeHelper.ENUM_VALUES[0]),
		MOUSEDOWN(GUIEventTypeHelper.ENUM_VALUES[1]),
		MOUSEUP(GUIEventTypeHelper.ENUM_VALUES[2]),
		MOUSEDOUBLECLIK(GUIEventTypeHelper.ENUM_VALUES[3]),
		MOUSEMOVE(GUIEventTypeHelper.ENUM_VALUES[4]),
		KEYDOWN(GUIEventTypeHelper.ENUM_VALUES[5]),
		KEYUP(GUIEventTypeHelper.ENUM_VALUES[6]),
		MOUSEWHEEL(GUIEventTypeHelper.ENUM_VALUES[7]),
		TOUCHBEGIN(GUIEventTypeHelper.ENUM_VALUES[8]),
		TOUCHMOVE(GUIEventTypeHelper.ENUM_VALUES[9]),
		TOUCHEND(GUIEventTypeHelper.ENUM_VALUES[10]),
		FRAME(GUIEventTypeHelper.ENUM_VALUES[11]),
		CLOSE_WINDOW(GUIEventTypeHelper.ENUM_VALUES[12]),
		QUIT_APPLICATION(GUIEventTypeHelper.ENUM_VALUES[13]),
		WINDOW_RESIZE(GUIEventTypeHelper.ENUM_VALUES[14]),
		USER(GUIEventTypeHelper.ENUM_VALUES[15]);
		private int value;
		GUIEventType(int i) {
			this.value = i;
		}
		public GUIEventType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final GUIEventType toEnum(int retval) {
			if(retval == NONE.value){
				return NONE;
			}
			else if(retval == MOUSEDOWN.value){
				return MOUSEDOWN;
			}
			else if(retval == MOUSEUP.value){
				return MOUSEUP;
			}
			else if(retval == MOUSEDOUBLECLIK.value){
				return MOUSEDOUBLECLIK;
			}
			else if(retval == MOUSEMOVE.value){
				return MOUSEMOVE;
			}
			else if(retval == KEYDOWN.value){
				return KEYDOWN;
			}
			else if(retval == KEYUP.value){
				return KEYUP;
			}
			else if(retval == MOUSEWHEEL.value){
				return MOUSEWHEEL;
			}
			else if(retval == TOUCHBEGIN.value){
				return TOUCHBEGIN;
			}
			else if(retval == TOUCHMOVE.value){
				return TOUCHMOVE;
			}
			else if(retval == TOUCHEND.value){
				return TOUCHEND;
			}
			else if(retval == FRAME.value){
				return FRAME;
			}
			else if(retval == CLOSE_WINDOW.value){
				return CLOSE_WINDOW;
			}
			else if(retval == QUIT_APPLICATION.value){
				return QUIT_APPLICATION;
			}
			else if(retval == WINDOW_RESIZE.value){
				return WINDOW_RESIZE;
			}
			else if(retval == USER.value){
				return USER;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class GUIEventTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public enum GUIKeySymbol implements INativeEnum<GUIKeySymbol> {
		KEY_UnKnown(GUIKeySymbolHelper.ENUM_VALUES[0]),
		KEY_Space(GUIKeySymbolHelper.ENUM_VALUES[1]),
		KEY_0(GUIKeySymbolHelper.ENUM_VALUES[2]),
		KEY_1(GUIKeySymbolHelper.ENUM_VALUES[3]),
		KEY_2(GUIKeySymbolHelper.ENUM_VALUES[4]),
		KEY_3(GUIKeySymbolHelper.ENUM_VALUES[5]),
		KEY_4(GUIKeySymbolHelper.ENUM_VALUES[6]),
		KEY_5(GUIKeySymbolHelper.ENUM_VALUES[7]),
		KEY_6(GUIKeySymbolHelper.ENUM_VALUES[8]),
		KEY_7(GUIKeySymbolHelper.ENUM_VALUES[9]),
		KEY_8(GUIKeySymbolHelper.ENUM_VALUES[10]),
		KEY_9(GUIKeySymbolHelper.ENUM_VALUES[11]),
		KEY_A(GUIKeySymbolHelper.ENUM_VALUES[12]),
		KEY_B(GUIKeySymbolHelper.ENUM_VALUES[13]),
		KEY_C(GUIKeySymbolHelper.ENUM_VALUES[14]),
		KEY_D(GUIKeySymbolHelper.ENUM_VALUES[15]),
		KEY_E(GUIKeySymbolHelper.ENUM_VALUES[16]),
		KEY_F(GUIKeySymbolHelper.ENUM_VALUES[17]),
		KEY_G(GUIKeySymbolHelper.ENUM_VALUES[18]),
		KEY_H(GUIKeySymbolHelper.ENUM_VALUES[19]),
		KEY_I(GUIKeySymbolHelper.ENUM_VALUES[20]),
		KEY_J(GUIKeySymbolHelper.ENUM_VALUES[21]),
		KEY_K(GUIKeySymbolHelper.ENUM_VALUES[22]),
		KEY_L(GUIKeySymbolHelper.ENUM_VALUES[23]),
		KEY_M(GUIKeySymbolHelper.ENUM_VALUES[24]),
		KEY_N(GUIKeySymbolHelper.ENUM_VALUES[25]),
		KEY_O(GUIKeySymbolHelper.ENUM_VALUES[26]),
		KEY_P(GUIKeySymbolHelper.ENUM_VALUES[27]),
		KEY_Q(GUIKeySymbolHelper.ENUM_VALUES[28]),
		KEY_R(GUIKeySymbolHelper.ENUM_VALUES[29]),
		KEY_S(GUIKeySymbolHelper.ENUM_VALUES[30]),
		KEY_T(GUIKeySymbolHelper.ENUM_VALUES[31]),
		KEY_U(GUIKeySymbolHelper.ENUM_VALUES[32]),
		KEY_V(GUIKeySymbolHelper.ENUM_VALUES[33]),
		KEY_W(GUIKeySymbolHelper.ENUM_VALUES[34]),
		KEY_X(GUIKeySymbolHelper.ENUM_VALUES[35]),
		KEY_Y(GUIKeySymbolHelper.ENUM_VALUES[36]),
		KEY_Z(GUIKeySymbolHelper.ENUM_VALUES[37]),
		KEY_Tab(GUIKeySymbolHelper.ENUM_VALUES[38]),
		KEY_Scroll_Lock(GUIKeySymbolHelper.ENUM_VALUES[39]),
		KEY_Escape(GUIKeySymbolHelper.ENUM_VALUES[40]),
		KEY_Delete(GUIKeySymbolHelper.ENUM_VALUES[41]),
		KEY_Home(GUIKeySymbolHelper.ENUM_VALUES[42]),
		KEY_Left(GUIKeySymbolHelper.ENUM_VALUES[43]),
		KEY_Up(GUIKeySymbolHelper.ENUM_VALUES[44]),
		KEY_Right(GUIKeySymbolHelper.ENUM_VALUES[45]),
		KEY_Down(GUIKeySymbolHelper.ENUM_VALUES[46]),
		KEY_Page_Up(GUIKeySymbolHelper.ENUM_VALUES[47]),
		KEY_Page_Down(GUIKeySymbolHelper.ENUM_VALUES[48]),
		KEY_End(GUIKeySymbolHelper.ENUM_VALUES[49]),
		KEY_Begin(GUIKeySymbolHelper.ENUM_VALUES[50]),
		KEY_Num_Lock(GUIKeySymbolHelper.ENUM_VALUES[51]),
		KEY_F1(GUIKeySymbolHelper.ENUM_VALUES[52]),
		KEY_F2(GUIKeySymbolHelper.ENUM_VALUES[53]),
		KEY_F3(GUIKeySymbolHelper.ENUM_VALUES[54]),
		KEY_F4(GUIKeySymbolHelper.ENUM_VALUES[55]),
		KEY_F5(GUIKeySymbolHelper.ENUM_VALUES[56]),
		KEY_F6(GUIKeySymbolHelper.ENUM_VALUES[57]),
		KEY_F7(GUIKeySymbolHelper.ENUM_VALUES[58]),
		KEY_F8(GUIKeySymbolHelper.ENUM_VALUES[59]),
		KEY_F9(GUIKeySymbolHelper.ENUM_VALUES[60]),
		KEY_F10(GUIKeySymbolHelper.ENUM_VALUES[61]),
		KEY_F11(GUIKeySymbolHelper.ENUM_VALUES[62]),
		KEY_F12(GUIKeySymbolHelper.ENUM_VALUES[63]),
		KEY_Shift_L(GUIKeySymbolHelper.ENUM_VALUES[64]),
		KEY_Shift_R(GUIKeySymbolHelper.ENUM_VALUES[65]),
		KEY_Control_L(GUIKeySymbolHelper.ENUM_VALUES[66]),
		KEY_Control_R(GUIKeySymbolHelper.ENUM_VALUES[67]),
		KEY_Caps_Lock(GUIKeySymbolHelper.ENUM_VALUES[68]),
		KEY_Shift_Lock(GUIKeySymbolHelper.ENUM_VALUES[69]),
		KEY_Alt_L(GUIKeySymbolHelper.ENUM_VALUES[70]),
		KEY_Alt_R(GUIKeySymbolHelper.ENUM_VALUES[71]);
		private int value;
		GUIKeySymbol(int i) {
			this.value = i;
		}
		public GUIKeySymbol getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final GUIKeySymbol toEnum(int retval) {
			if(retval == KEY_UnKnown.value){
				return KEY_UnKnown;
			}
			else if(retval == KEY_Space.value){
				return KEY_Space;
			}
			else if(retval == KEY_0.value){
				return KEY_0;
			}
			else if(retval == KEY_1.value){
				return KEY_1;
			}
			else if(retval == KEY_2.value){
				return KEY_2;
			}
			else if(retval == KEY_3.value){
				return KEY_3;
			}
			else if(retval == KEY_4.value){
				return KEY_4;
			}
			else if(retval == KEY_5.value){
				return KEY_5;
			}
			else if(retval == KEY_6.value){
				return KEY_6;
			}
			else if(retval == KEY_7.value){
				return KEY_7;
			}
			else if(retval == KEY_8.value){
				return KEY_8;
			}
			else if(retval == KEY_9.value){
				return KEY_9;
			}
			else if(retval == KEY_A.value){
				return KEY_A;
			}
			else if(retval == KEY_B.value){
				return KEY_B;
			}
			else if(retval == KEY_C.value){
				return KEY_C;
			}
			else if(retval == KEY_D.value){
				return KEY_D;
			}
			else if(retval == KEY_E.value){
				return KEY_E;
			}
			else if(retval == KEY_F.value){
				return KEY_F;
			}
			else if(retval == KEY_G.value){
				return KEY_G;
			}
			else if(retval == KEY_H.value){
				return KEY_H;
			}
			else if(retval == KEY_I.value){
				return KEY_I;
			}
			else if(retval == KEY_J.value){
				return KEY_J;
			}
			else if(retval == KEY_K.value){
				return KEY_K;
			}
			else if(retval == KEY_L.value){
				return KEY_L;
			}
			else if(retval == KEY_M.value){
				return KEY_M;
			}
			else if(retval == KEY_N.value){
				return KEY_N;
			}
			else if(retval == KEY_O.value){
				return KEY_O;
			}
			else if(retval == KEY_P.value){
				return KEY_P;
			}
			else if(retval == KEY_Q.value){
				return KEY_Q;
			}
			else if(retval == KEY_R.value){
				return KEY_R;
			}
			else if(retval == KEY_S.value){
				return KEY_S;
			}
			else if(retval == KEY_T.value){
				return KEY_T;
			}
			else if(retval == KEY_U.value){
				return KEY_U;
			}
			else if(retval == KEY_V.value){
				return KEY_V;
			}
			else if(retval == KEY_W.value){
				return KEY_W;
			}
			else if(retval == KEY_X.value){
				return KEY_X;
			}
			else if(retval == KEY_Y.value){
				return KEY_Y;
			}
			else if(retval == KEY_Z.value){
				return KEY_Z;
			}
			else if(retval == KEY_Tab.value){
				return KEY_Tab;
			}
			else if(retval == KEY_Scroll_Lock.value){
				return KEY_Scroll_Lock;
			}
			else if(retval == KEY_Escape.value){
				return KEY_Escape;
			}
			else if(retval == KEY_Delete.value){
				return KEY_Delete;
			}
			else if(retval == KEY_Home.value){
				return KEY_Home;
			}
			else if(retval == KEY_Left.value){
				return KEY_Left;
			}
			else if(retval == KEY_Up.value){
				return KEY_Up;
			}
			else if(retval == KEY_Right.value){
				return KEY_Right;
			}
			else if(retval == KEY_Down.value){
				return KEY_Down;
			}
			else if(retval == KEY_Page_Up.value){
				return KEY_Page_Up;
			}
			else if(retval == KEY_Page_Down.value){
				return KEY_Page_Down;
			}
			else if(retval == KEY_End.value){
				return KEY_End;
			}
			else if(retval == KEY_Begin.value){
				return KEY_Begin;
			}
			else if(retval == KEY_Num_Lock.value){
				return KEY_Num_Lock;
			}
			else if(retval == KEY_F1.value){
				return KEY_F1;
			}
			else if(retval == KEY_F2.value){
				return KEY_F2;
			}
			else if(retval == KEY_F3.value){
				return KEY_F3;
			}
			else if(retval == KEY_F4.value){
				return KEY_F4;
			}
			else if(retval == KEY_F5.value){
				return KEY_F5;
			}
			else if(retval == KEY_F6.value){
				return KEY_F6;
			}
			else if(retval == KEY_F7.value){
				return KEY_F7;
			}
			else if(retval == KEY_F8.value){
				return KEY_F8;
			}
			else if(retval == KEY_F9.value){
				return KEY_F9;
			}
			else if(retval == KEY_F10.value){
				return KEY_F10;
			}
			else if(retval == KEY_F11.value){
				return KEY_F11;
			}
			else if(retval == KEY_F12.value){
				return KEY_F12;
			}
			else if(retval == KEY_Shift_L.value){
				return KEY_Shift_L;
			}
			else if(retval == KEY_Shift_R.value){
				return KEY_Shift_R;
			}
			else if(retval == KEY_Control_L.value){
				return KEY_Control_L;
			}
			else if(retval == KEY_Control_R.value){
				return KEY_Control_R;
			}
			else if(retval == KEY_Caps_Lock.value){
				return KEY_Caps_Lock;
			}
			else if(retval == KEY_Shift_Lock.value){
				return KEY_Shift_Lock;
			}
			else if(retval == KEY_Alt_L.value){
				return KEY_Alt_L;
			}
			else if(retval == KEY_Alt_R.value){
				return KEY_Alt_R;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class GUIKeySymbolHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public enum GUIModKeyMask implements INativeEnum<GUIModKeyMask> {
		MODKEY_LEFT_SHIFT(GUIModKeyMaskHelper.ENUM_VALUES[0]),
		MODKEY_RIGHT_SHIFT(GUIModKeyMaskHelper.ENUM_VALUES[1]),
		MODKEY_LEFT_CTRL(GUIModKeyMaskHelper.ENUM_VALUES[2]),
		MODKEY_RIGHT_CTRL(GUIModKeyMaskHelper.ENUM_VALUES[3]),
		MODKEY_LEFT_ALT(GUIModKeyMaskHelper.ENUM_VALUES[4]),
		MODKEY_RIGHT_ALT(GUIModKeyMaskHelper.ENUM_VALUES[5]),
		MODKEY_NUM_LOCK(GUIModKeyMaskHelper.ENUM_VALUES[6]),
		MODKEY_CAPS_LOCK(GUIModKeyMaskHelper.ENUM_VALUES[7]),
		MODKEY_CTRL(GUIModKeyMaskHelper.ENUM_VALUES[8]),
		MODKEY_SHIFT(GUIModKeyMaskHelper.ENUM_VALUES[9]),
		MODKEY_ALT(GUIModKeyMaskHelper.ENUM_VALUES[10]);
		private int value;
		GUIModKeyMask(int i) {
			this.value = i;
		}
		public GUIModKeyMask getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final GUIModKeyMask toEnum(int retval) {
			if(retval == MODKEY_LEFT_SHIFT.value){
				return MODKEY_LEFT_SHIFT;
			}
			else if(retval == MODKEY_RIGHT_SHIFT.value){
				return MODKEY_RIGHT_SHIFT;
			}
			else if(retval == MODKEY_LEFT_CTRL.value){
				return MODKEY_LEFT_CTRL;
			}
			else if(retval == MODKEY_RIGHT_CTRL.value){
				return MODKEY_RIGHT_CTRL;
			}
			else if(retval == MODKEY_LEFT_ALT.value){
				return MODKEY_LEFT_ALT;
			}
			else if(retval == MODKEY_RIGHT_ALT.value){
				return MODKEY_RIGHT_ALT;
			}
			else if(retval == MODKEY_NUM_LOCK.value){
				return MODKEY_NUM_LOCK;
			}
			else if(retval == MODKEY_CAPS_LOCK.value){
				return MODKEY_CAPS_LOCK;
			}
			else if(retval == MODKEY_CTRL.value){
				return MODKEY_CTRL;
			}
			else if(retval == MODKEY_SHIFT.value){
				return MODKEY_SHIFT;
			}
			else if(retval == MODKEY_ALT.value){
				return MODKEY_ALT;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class GUIModKeyMaskHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 构造函数
	 */
	public Guievent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGUIEvent", null);
	}

	/**
	 * 挎贝构造函数
	 */
	public Guievent(com.earthview.world.spatial.systemui.Guievent rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("CGUIEvent", list);
	}

	native private static long getAccumulatedEventState_void();
	/**
	 * 返回累计的事件
	 */
	public static com.earthview.world.spatial.systemui.Guievent getAccumulatedEventState()
	{
		long returnValue = getAccumulatedEventState_void();
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
	native private void setHandled_ev_bool(long pNativeObject, boolean handled);
	/**
	 * 设置事件对象的有没有被处理过
	 * @param handled 是否被处理过
	 */
	public void setHandled(boolean handled)
	{
		boolean handledParamValue = handled;
		setHandled_ev_bool(this.nativeObject.pointer, handledParamValue);
	}
	native private boolean getHandled_void(long pNativeObject);
	/**
	 * 获取事件对象有没有被处理过
	 */
	public boolean getHandled()
	{
		boolean returnValue = getHandled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setEventType_GUIEventType(long pNativeObject, int eventType);
	/**
	 * 设置事件对象的类型
	 * @param eventType 事件的类型
	 */
	public void setEventType(com.earthview.world.spatial.systemui.Guievent.GUIEventType eventType)
	{
		int eventTypeParamValue = eventType.getValue();
		setEventType_GUIEventType(this.nativeObject.pointer, eventTypeParamValue);
	}
	native private int getEventType_void(long pNativeObject);
	/**
	 * 获取事件对象的类型
	 */
	public com.earthview.world.spatial.systemui.Guievent.GUIEventType getEventType()
	{
		int returnValue = getEventType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.systemui.Guievent.GUIEventType.toEnum(returnValue);
	}
	native private void setTime_ev_real64(long pNativeObject, double time);
	/**
	 * 设置事件对象产生时的时间
	 * @param time 时间
	 */
	public void setTime(double time)
	{
		double timeParamValue = time;
		setTime_ev_real64(this.nativeObject.pointer, timeParamValue);
	}
	native private double getTime_void(long pNativeObject);
	/**
	 * 获取事件对象的时间
	 */
	public double getTime()
	{
		double returnValue = getTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setWindowRectangle_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int x, int y, int width, int height);
	/**
	 * 设置事件对象的窗口范围
	 * @param x 左上角的Ｘ坐标
	 * @param y 左上角的Ｙ坐标
	 * @param width 宽度
	 * @param height 高度
	 */
	public void setWindowRectangle(int x, int y, int width, int height)
	{
		int xParamValue = x;
		int yParamValue = y;
		int widthParamValue = width;
		int heightParamValue = height;
		setWindowRectangle_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, xParamValue, yParamValue, widthParamValue, heightParamValue);
	}
	native private int getWindowX_void(long pNativeObject);
	/**
	 * 获取窗口的Ｘ坐标
	 */
	public int getWindowX()
	{
		int returnValue = getWindowX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getWindowY_void(long pNativeObject);
	/**
	 * 获取窗口的Y坐标
	 */
	public int getWindowY()
	{
		int returnValue = getWindowY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getWindowWidth_void(long pNativeObject);
	/**
	 * 获取窗口的宽度
	 */
	public int getWindowWidth()
	{
		int returnValue = getWindowWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getWindowHeight_void(long pNativeObject);
	/**
	 * 获取窗口的高度
	 */
	public int getWindowHeight()
	{
		int returnValue = getWindowHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setKey_GUIKeySymbol(long pNativeObject, int key);
	/**
	 * 设置事件对象的按键值
	 * @param key 键盘按键值，值为GUIKeySymbol枚举中的一个
	 */
	public void setKey(com.earthview.world.spatial.systemui.Guievent.GUIKeySymbol key)
	{
		int keyParamValue = key.getValue();
		setKey_GUIKeySymbol(this.nativeObject.pointer, keyParamValue);
	}
	native private int getKey_void(long pNativeObject);
	/**
	 * 获取事件对象的按键值
	 * @return 值为GUIKeySymbol枚举中的一个
	 */
	public com.earthview.world.spatial.systemui.Guievent.GUIKeySymbol getKey()
	{
		int returnValue = getKey_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.systemui.Guievent.GUIKeySymbol.toEnum(returnValue);
	}
	native private void setVirtualKey_GUIKeySymbol(long pNativeObject, int key);
	/**
	 * 设置事件对象的虚拟按键值
	 * @param key 键盘按键值，值为GUIKeySymbol枚举中的一个
	 */
	public void setVirtualKey(com.earthview.world.spatial.systemui.Guievent.GUIKeySymbol key)
	{
		int keyParamValue = key.getValue();
		setVirtualKey_GUIKeySymbol(this.nativeObject.pointer, keyParamValue);
	}
	native private int getVirtualKey_void(long pNativeObject);
	/**
	 * 获取事件对象的虚拟按键值
	 * @return 值为GUIKeySymbol枚举中的一个
	 */
	public com.earthview.world.spatial.systemui.Guievent.GUIKeySymbol getVirtualKey()
	{
		int returnValue = getVirtualKey_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.systemui.Guievent.GUIKeySymbol.toEnum(returnValue);
	}
	native private void setButton_GUIMouseButtonMask(long pNativeObject, int button);
	/**
	 * 设置事件对象的鼠标键值
	 * @param button 鼠标键值，为GUIMouseButtonMask枚举中的一个值
	 */
	public void setButton(com.earthview.world.spatial.systemui.Guievent.GUIMouseButtonMask button)
	{
		int buttonParamValue = button.getValue();
		setButton_GUIMouseButtonMask(this.nativeObject.pointer, buttonParamValue);
	}
	native private int getButton_void(long pNativeObject);
	/**
	 * 获取事件对象的鼠标键值
	 * @return 值为GUIMouseButtonMask枚举中的一个值
	 */
	public com.earthview.world.spatial.systemui.Guievent.GUIMouseButtonMask getButton()
	{
		int returnValue = getButton_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.systemui.Guievent.GUIMouseButtonMask.toEnum(returnValue);
	}
	native private void setX_ev_int32(long pNativeObject, int x);
	/**
	 * 设置事件对象的Ｘ坐标值
	 * @param x 鼠标的Ｘ坐标
	 */
	public void setX(int x)
	{
		int xParamValue = x;
		setX_ev_int32(this.nativeObject.pointer, xParamValue);
	}
	native private int getX_void(long pNativeObject);
	/**
	 * 获取事件对象的X坐标
	 */
	public int getX()
	{
		int returnValue = getX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setY_ev_int32(long pNativeObject, int y);
	/**
	 * 设置事件对象的Y坐标值
	 * @param y 鼠标的Y坐标
	 */
	public void setY(int y)
	{
		int yParamValue = y;
		setY_ev_int32(this.nativeObject.pointer, yParamValue);
	}
	native private int getY_void(long pNativeObject);
	/**
	 * 获取事件对象的Y坐标
	 */
	public int getY()
	{
		int returnValue = getY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setButtonMask_ev_int32(long pNativeObject, int mask);
	/**
	 * 设置事件对象的鼠标掩码
	 * @param mask 鼠标的键值，值为GUIMouseButtonMask枚举的组合
	 */
	public void setButtonMask(int mask)
	{
		int maskParamValue = mask;
		setButtonMask_ev_int32(this.nativeObject.pointer, maskParamValue);
	}
	native private int getButtonMask_void(long pNativeObject);
	/**
	 * 获取事件对象的鼠标掩码，值为GUIMouseButtonMask枚举的组合
	 */
	public int getButtonMask()
	{
		int returnValue = getButtonMask_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setModKeyMask_ev_int32(long pNativeObject, int mask);
	/**
	 * 设置事件对象的辅助键的掩码
	 * @param mask 辅助按键的值，为GUIModKeyMask枚举中的一个值
	 */
	public void setModKeyMask(int mask)
	{
		int maskParamValue = mask;
		setModKeyMask_ev_int32(this.nativeObject.pointer, maskParamValue);
	}
	native private int getModKeyMask_void(long pNativeObject);
	/**
	 * 获取事件对象的辅助键的掩码
	 * @return 为GUIModKeyMask枚举中的一个值
	 */
	public int getModKeyMask()
	{
		int returnValue = getModKeyMask_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMouseWheelDelta_ev_real32(long pNativeObject, float delta);
	/**
	 * 设置事件对象的滚轮的值
	 * @param delta 鼠标滚轮的变化值,鼠标向后滚动，值为负，向前液，值为正。delta一般为120的倍数
	 */
	public void setMouseWheelDelta(float delta)
	{
		float deltaParamValue = delta;
		setMouseWheelDelta_ev_real32(this.nativeObject.pointer, deltaParamValue);
	}
	native private float getMouseWheelDelta_void(long pNativeObject);
	/**
	 * 获取事件对象的滚轮的值
	 */
	public float getMouseWheelDelta()
	{
		float returnValue = getMouseWheelDelta_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void addTouchPoint_ev_uint32_GUITouchPhase_ev_real32_ev_real32(long pNativeObject, long id, int phase, float x, float y);
	/**
	 * 添加触摸点
	 * @param id 触摸点的ＩＤ
	 * @param phase 触摸点的类型
	 * @param x 触摸点的X坐标
	 * @param y 触摸点的Ｙ坐标
	 */
	public void addTouchPoint(long id, com.earthview.world.spatial.systemui.GUITouchPhase phase, float x, float y)
	{
		long idParamValue = id;
		int phaseParamValue = phase.getValue();
		float xParamValue = x;
		float yParamValue = y;
		addTouchPoint_ev_uint32_GUITouchPhase_ev_real32_ev_real32(this.nativeObject.pointer, idParamValue, phaseParamValue, xParamValue, yParamValue);
	}
	native private void addTouchPoint_ev_uint32_GUITouchPhase_ev_real32_ev_real32_ev_uint32(long pNativeObject, long id, int phase, float x, float y, long tapCount);
	/**
	 * 添加触摸点
	 * @param id 触摸点的ＩＤ
	 * @param phase 触摸点的类型
	 * @param x 触摸点的X坐标
	 * @param y 触摸点的Ｙ坐标
	 * @param tapCount 触摸点的数量
	 */
	public void addTouchPoint(long id, com.earthview.world.spatial.systemui.GUITouchPhase phase, float x, float y, long tapCount)
	{
		long idParamValue = id;
		int phaseParamValue = phase.getValue();
		float xParamValue = x;
		float yParamValue = y;
		long tapCountParamValue = tapCount;
		addTouchPoint_ev_uint32_GUITouchPhase_ev_real32_ev_real32_ev_uint32(this.nativeObject.pointer, idParamValue, phaseParamValue, xParamValue, yParamValue, tapCountParamValue);
	}
	native private long getTouchData_void(long pNativeObject);
	/**
	 * 返回触摸事件的详细信息。
	 */
	public com.earthview.world.spatial.systemui.TouchData getTouchData()
	{
		long returnValue = getTouchData_void(this.nativeObject.pointer);
		com.earthview.world.spatial.systemui.TouchData __returnValue = new com.earthview.world.spatial.systemui.TouchData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTouchData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.TouchData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTouchData");
		}
		return __returnValue;
	}
	native private boolean isMultiTouchEvent_void(long pNativeObject);
	/**
	 * 是否为多点触摸事件
	 */
	public boolean isMultiTouchEvent()
	{
		boolean returnValue = isMultiTouchEvent_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean get_mhandled_void(long pNativeObject);
	public boolean get_mhandled()
	{
		boolean jniValue = get_mhandled_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mhandled_ev_bool (long pNativeObject, boolean value);
	public void set_mhandled(boolean mhandled)
	{
		boolean mhandledParamValue = mhandled;
		
		set_mhandled_ev_bool(this.nativeObject.pointer, mhandledParamValue);
	}
	
	native private int get_meventType_void(long pNativeObject);
	public com.earthview.world.spatial.systemui.Guievent.GUIEventType get_meventType()
	{
		int jniValue = get_meventType_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial.systemui.Guievent.GUIEventType.toEnum(jniValue);
	}
	
	native private void set_meventType_GUIEventType (long pNativeObject, int value);
	public void set_meventType(com.earthview.world.spatial.systemui.Guievent.GUIEventType meventType)
	{
		int meventTypeParamValue = meventType.getValue();
		
		set_meventType_GUIEventType(this.nativeObject.pointer, meventTypeParamValue);
	}
	
	native private double get_mtime_void(long pNativeObject);
	public double get_mtime()
	{
		double jniValue = get_mtime_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mtime_ev_real64 (long pNativeObject, double value);
	public void set_mtime(double mtime)
	{
		double mtimeParamValue = mtime;
		
		set_mtime_ev_real64(this.nativeObject.pointer, mtimeParamValue);
	}
	
	native private int get_mkey_void(long pNativeObject);
	public com.earthview.world.spatial.systemui.Guievent.GUIKeySymbol get_mkey()
	{
		int jniValue = get_mkey_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial.systemui.Guievent.GUIKeySymbol.toEnum(jniValue);
	}
	
	native private void set_mkey_GUIKeySymbol (long pNativeObject, int value);
	public void set_mkey(com.earthview.world.spatial.systemui.Guievent.GUIKeySymbol mkey)
	{
		int mkeyParamValue = mkey.getValue();
		
		set_mkey_GUIKeySymbol(this.nativeObject.pointer, mkeyParamValue);
	}
	
	native private int get_mvirtualKey_void(long pNativeObject);
	public com.earthview.world.spatial.systemui.Guievent.GUIKeySymbol get_mvirtualKey()
	{
		int jniValue = get_mvirtualKey_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial.systemui.Guievent.GUIKeySymbol.toEnum(jniValue);
	}
	
	native private void set_mvirtualKey_GUIKeySymbol (long pNativeObject, int value);
	public void set_mvirtualKey(com.earthview.world.spatial.systemui.Guievent.GUIKeySymbol mvirtualKey)
	{
		int mvirtualKeyParamValue = mvirtualKey.getValue();
		
		set_mvirtualKey_GUIKeySymbol(this.nativeObject.pointer, mvirtualKeyParamValue);
	}
	
	native private int get_mbutton_void(long pNativeObject);
	public com.earthview.world.spatial.systemui.Guievent.GUIMouseButtonMask get_mbutton()
	{
		int jniValue = get_mbutton_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial.systemui.Guievent.GUIMouseButtonMask.toEnum(jniValue);
	}
	
	native private void set_mbutton_GUIMouseButtonMask (long pNativeObject, int value);
	public void set_mbutton(com.earthview.world.spatial.systemui.Guievent.GUIMouseButtonMask mbutton)
	{
		int mbuttonParamValue = mbutton.getValue();
		
		set_mbutton_GUIMouseButtonMask(this.nativeObject.pointer, mbuttonParamValue);
	}
	
	native private int get_mbuttonMask_void(long pNativeObject);
	public int get_mbuttonMask()
	{
		int jniValue = get_mbuttonMask_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mbuttonMask_ev_int32 (long pNativeObject, int value);
	public void set_mbuttonMask(int mbuttonMask)
	{
		int mbuttonMaskParamValue = mbuttonMask;
		
		set_mbuttonMask_ev_int32(this.nativeObject.pointer, mbuttonMaskParamValue);
	}
	
	native private int get_mmodKeyMask_void(long pNativeObject);
	public int get_mmodKeyMask()
	{
		int jniValue = get_mmodKeyMask_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mmodKeyMask_ev_int32 (long pNativeObject, int value);
	public void set_mmodKeyMask(int mmodKeyMask)
	{
		int mmodKeyMaskParamValue = mmodKeyMask;
		
		set_mmodKeyMask_ev_int32(this.nativeObject.pointer, mmodKeyMaskParamValue);
	}
	
	native private int get_mx_void(long pNativeObject);
	public int get_mx()
	{
		int jniValue = get_mx_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mx_ev_int32 (long pNativeObject, int value);
	public void set_mx(int mx)
	{
		int mxParamValue = mx;
		
		set_mx_ev_int32(this.nativeObject.pointer, mxParamValue);
	}
	
	native private int get_my_void(long pNativeObject);
	public int get_my()
	{
		int jniValue = get_my_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_my_ev_int32 (long pNativeObject, int value);
	public void set_my(int my)
	{
		int myParamValue = my;
		
		set_my_ev_int32(this.nativeObject.pointer, myParamValue);
	}
	
	native private int get_mwindowX_void(long pNativeObject);
	public int get_mwindowX()
	{
		int jniValue = get_mwindowX_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mwindowX_ev_int32 (long pNativeObject, int value);
	public void set_mwindowX(int mwindowX)
	{
		int mwindowXParamValue = mwindowX;
		
		set_mwindowX_ev_int32(this.nativeObject.pointer, mwindowXParamValue);
	}
	
	native private int get_mwindowY_void(long pNativeObject);
	public int get_mwindowY()
	{
		int jniValue = get_mwindowY_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mwindowY_ev_int32 (long pNativeObject, int value);
	public void set_mwindowY(int mwindowY)
	{
		int mwindowYParamValue = mwindowY;
		
		set_mwindowY_ev_int32(this.nativeObject.pointer, mwindowYParamValue);
	}
	
	native private int get_mwindowWidth_void(long pNativeObject);
	public int get_mwindowWidth()
	{
		int jniValue = get_mwindowWidth_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mwindowWidth_ev_int32 (long pNativeObject, int value);
	public void set_mwindowWidth(int mwindowWidth)
	{
		int mwindowWidthParamValue = mwindowWidth;
		
		set_mwindowWidth_ev_int32(this.nativeObject.pointer, mwindowWidthParamValue);
	}
	
	native private int get_mwindowHeight_void(long pNativeObject);
	public int get_mwindowHeight()
	{
		int jniValue = get_mwindowHeight_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mwindowHeight_ev_int32 (long pNativeObject, int value);
	public void set_mwindowHeight(int mwindowHeight)
	{
		int mwindowHeightParamValue = mwindowHeight;
		
		set_mwindowHeight_ev_int32(this.nativeObject.pointer, mwindowHeightParamValue);
	}
	
	native private float get_mmouseWheelDelta_void(long pNativeObject);
	public float get_mmouseWheelDelta()
	{
		float jniValue = get_mmouseWheelDelta_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mmouseWheelDelta_ev_real32 (long pNativeObject, float value);
	public void set_mmouseWheelDelta(float mmouseWheelDelta)
	{
		float mmouseWheelDeltaParamValue = mmouseWheelDelta;
		
		set_mmouseWheelDelta_ev_real32(this.nativeObject.pointer, mmouseWheelDeltaParamValue);
	}
	
	native private long get_mtouchData_void(long pNativeObject);
	public com.earthview.world.spatial.systemui.TouchData get_mtouchData()
	{
		long jniValue = get_mtouchData_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.systemui.TouchData __returnValue = new com.earthview.world.spatial.systemui.TouchData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CTouchData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.TouchData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTouchData");
		}
		return __returnValue;
	}
	
	native private void set_mtouchData_CTouchData (long pNativeObject, long value);
	public void set_mtouchData(com.earthview.world.spatial.systemui.TouchData mtouchData)
	{
		long mtouchDataParamValue = mtouchData.nativeObject.pointer;
		
		set_mtouchData_CTouchData(this.nativeObject.pointer, mtouchDataParamValue);
	}
	
	public Guievent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Guievent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Guievent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Guievent obj = null;
 		if(baseObj instanceof Guievent)
		{
			obj = (Guievent)baseObj;
		} else {
			obj = new Guievent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGUIEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
