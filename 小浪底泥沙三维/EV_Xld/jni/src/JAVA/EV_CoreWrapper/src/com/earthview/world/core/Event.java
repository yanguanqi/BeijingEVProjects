package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * 事件基类里面定义了事件类型枚举，可通过事件类型来构造
 */
public class Event extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CEvent", new EventClassFactory());
	}

	public enum Type implements INativeEnum<Type> {
		None(TypeHelper.ENUM_VALUES[0]),
		Timer(TypeHelper.ENUM_VALUES[1]),
		MouseButtonPress(TypeHelper.ENUM_VALUES[2]),
		MouseButtonRelease(TypeHelper.ENUM_VALUES[3]),
		MouseButtonDblClick(TypeHelper.ENUM_VALUES[4]),
		MouseMove(TypeHelper.ENUM_VALUES[5]),
		KeyPress(TypeHelper.ENUM_VALUES[6]),
		KeyRelease(TypeHelper.ENUM_VALUES[7]),
		FocusIn(TypeHelper.ENUM_VALUES[8]),
		FocusOut(TypeHelper.ENUM_VALUES[9]),
		Enter(TypeHelper.ENUM_VALUES[10]),
		Leave(TypeHelper.ENUM_VALUES[11]),
		Paint(TypeHelper.ENUM_VALUES[12]),
		Move(TypeHelper.ENUM_VALUES[13]),
		Resize(TypeHelper.ENUM_VALUES[14]),
		Create(TypeHelper.ENUM_VALUES[15]),
		Destroy(TypeHelper.ENUM_VALUES[16]),
		Show(TypeHelper.ENUM_VALUES[17]),
		Hide(TypeHelper.ENUM_VALUES[18]),
		Close(TypeHelper.ENUM_VALUES[19]),
		Quit(TypeHelper.ENUM_VALUES[20]),
		ParentChange(TypeHelper.ENUM_VALUES[21]),
		ParentAboutToChange(TypeHelper.ENUM_VALUES[22]),
		WindowActivate(TypeHelper.ENUM_VALUES[23]),
		WindowDeactivate(TypeHelper.ENUM_VALUES[24]),
		WindowTitleChange(TypeHelper.ENUM_VALUES[25]),
		WindowIconChange(TypeHelper.ENUM_VALUES[26]),
		ApplicationWindowIconChange(TypeHelper.ENUM_VALUES[27]),
		ApplicationFontChange(TypeHelper.ENUM_VALUES[28]),
		ApplicationPaletteChange(TypeHelper.ENUM_VALUES[29]),
		PaletteChange(TypeHelper.ENUM_VALUES[30]),
		SocketAct(TypeHelper.ENUM_VALUES[31]),
		DeferredDelete(TypeHelper.ENUM_VALUES[32]),
		ChildAdded(TypeHelper.ENUM_VALUES[33]),
		ChildRemoved(TypeHelper.ENUM_VALUES[34]),
		LanguageChange(TypeHelper.ENUM_VALUES[35]),
		FontChange(TypeHelper.ENUM_VALUES[36]),
		EnabledChange(TypeHelper.ENUM_VALUES[37]),
		ActivationChange(TypeHelper.ENUM_VALUES[38]),
		StyleChange(TypeHelper.ENUM_VALUES[39]),
		IconTextChange(TypeHelper.ENUM_VALUES[40]),
		MouseTrackingChange(TypeHelper.ENUM_VALUES[41]),
		WindowBlocked(TypeHelper.ENUM_VALUES[42]),
		WindowUnblocked(TypeHelper.ENUM_VALUES[43]),
		ToolTip(TypeHelper.ENUM_VALUES[44]),
		ThreadChange(TypeHelper.ENUM_VALUES[45]),
		WinEventAct(TypeHelper.ENUM_VALUES[46]),
		ZeroTimerEvent(TypeHelper.ENUM_VALUES[47]),
		SockAct(TypeHelper.ENUM_VALUES[48]),
		UpdateRequest(TypeHelper.ENUM_VALUES[49]),
		User(TypeHelper.ENUM_VALUES[50]),
		MaxUser(TypeHelper.ENUM_VALUES[51]);
		private int value;
		Type(int i) {
			this.value = i;
		}
		public Type getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final Type toEnum(int retval) {
			if(retval == None.value){
				return None;
			}
			else if(retval == Timer.value){
				return Timer;
			}
			else if(retval == MouseButtonPress.value){
				return MouseButtonPress;
			}
			else if(retval == MouseButtonRelease.value){
				return MouseButtonRelease;
			}
			else if(retval == MouseButtonDblClick.value){
				return MouseButtonDblClick;
			}
			else if(retval == MouseMove.value){
				return MouseMove;
			}
			else if(retval == KeyPress.value){
				return KeyPress;
			}
			else if(retval == KeyRelease.value){
				return KeyRelease;
			}
			else if(retval == FocusIn.value){
				return FocusIn;
			}
			else if(retval == FocusOut.value){
				return FocusOut;
			}
			else if(retval == Enter.value){
				return Enter;
			}
			else if(retval == Leave.value){
				return Leave;
			}
			else if(retval == Paint.value){
				return Paint;
			}
			else if(retval == Move.value){
				return Move;
			}
			else if(retval == Resize.value){
				return Resize;
			}
			else if(retval == Create.value){
				return Create;
			}
			else if(retval == Destroy.value){
				return Destroy;
			}
			else if(retval == Show.value){
				return Show;
			}
			else if(retval == Hide.value){
				return Hide;
			}
			else if(retval == Close.value){
				return Close;
			}
			else if(retval == Quit.value){
				return Quit;
			}
			else if(retval == ParentChange.value){
				return ParentChange;
			}
			else if(retval == ParentAboutToChange.value){
				return ParentAboutToChange;
			}
			else if(retval == WindowActivate.value){
				return WindowActivate;
			}
			else if(retval == WindowDeactivate.value){
				return WindowDeactivate;
			}
			else if(retval == WindowTitleChange.value){
				return WindowTitleChange;
			}
			else if(retval == WindowIconChange.value){
				return WindowIconChange;
			}
			else if(retval == ApplicationWindowIconChange.value){
				return ApplicationWindowIconChange;
			}
			else if(retval == ApplicationFontChange.value){
				return ApplicationFontChange;
			}
			else if(retval == ApplicationPaletteChange.value){
				return ApplicationPaletteChange;
			}
			else if(retval == PaletteChange.value){
				return PaletteChange;
			}
			else if(retval == SocketAct.value){
				return SocketAct;
			}
			else if(retval == DeferredDelete.value){
				return DeferredDelete;
			}
			else if(retval == ChildAdded.value){
				return ChildAdded;
			}
			else if(retval == ChildRemoved.value){
				return ChildRemoved;
			}
			else if(retval == LanguageChange.value){
				return LanguageChange;
			}
			else if(retval == FontChange.value){
				return FontChange;
			}
			else if(retval == EnabledChange.value){
				return EnabledChange;
			}
			else if(retval == ActivationChange.value){
				return ActivationChange;
			}
			else if(retval == StyleChange.value){
				return StyleChange;
			}
			else if(retval == IconTextChange.value){
				return IconTextChange;
			}
			else if(retval == MouseTrackingChange.value){
				return MouseTrackingChange;
			}
			else if(retval == WindowBlocked.value){
				return WindowBlocked;
			}
			else if(retval == WindowUnblocked.value){
				return WindowUnblocked;
			}
			else if(retval == ToolTip.value){
				return ToolTip;
			}
			else if(retval == ThreadChange.value){
				return ThreadChange;
			}
			else if(retval == WinEventAct.value){
				return WinEventAct;
			}
			else if(retval == ZeroTimerEvent.value){
				return ZeroTimerEvent;
			}
			else if(retval == SockAct.value){
				return SockAct;
			}
			else if(retval == UpdateRequest.value){
				return UpdateRequest;
			}
			else if(retval == User.value){
				return User;
			}
			else if(retval == MaxUser.value){
				return MaxUser;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class TypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 构造函数，通过事件类型构造
	 * @param type 事件类型
	 */
	public Event(int type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CEvent", list);
	}

	public Event(int type, com.earthview.world.core.EventObject sender) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		BasePointer senderPtr = new BasePointer(sender);
		list.add("sender", senderPtr.get());
		Create("CEvent", list);
	}

	native private int type_void(long pNativeObject);
	/**
	 * 获得事件类型
	 * @param  
	 * @return 事件类型
	 */
	public int type()
	{
		int returnValue = type_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long sender_void(long pNativeObject);
	public com.earthview.world.core.EventObject sender()
	{
		long returnValue = sender_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.EventObject __returnValue = new com.earthview.world.core.EventObject(CreatedWhenConstruct.CWC_NotToCreate, "CEventObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.EventObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEventObject");
		}
		return __returnValue;
	}
	native private boolean posted_void(long pNativeObject);
	/**
	 * 判断该事件是否已被post
	 * @param  
	 * @return 是返回true，否返回false
	 */
	public boolean posted()
	{
		boolean returnValue = posted_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPosted_ev_bool(long pNativeObject, boolean posted);
	/**
	 * 设置该事件是否已被post
	 * @param posted 是否被post
	 */
	public void setPosted(boolean posted)
	{
		boolean postedParamValue = posted;
		setPosted_ev_bool(this.nativeObject.pointer, postedParamValue);
	}
	public Event(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Event(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Event fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Event obj = null;
 		if(baseObj instanceof Event)
		{
			obj = (Event)baseObj;
		} else {
			obj = new Event(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
