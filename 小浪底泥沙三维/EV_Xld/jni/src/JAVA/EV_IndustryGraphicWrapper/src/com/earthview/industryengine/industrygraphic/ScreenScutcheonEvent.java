package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScreenScutcheonEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent", new ScreenScutcheonEventClassFactory());
	}

	public enum EVScreenScutcheonEventType implements INativeEnum<EVScreenScutcheonEventType> {
		STET_MouseDown(EVScreenScutcheonEventTypeHelper.ENUM_VALUES[0]),
		STET_MouseMove(EVScreenScutcheonEventTypeHelper.ENUM_VALUES[1]),
		STET_MouseUp(EVScreenScutcheonEventTypeHelper.ENUM_VALUES[2]),
		STET_KeyDown(EVScreenScutcheonEventTypeHelper.ENUM_VALUES[3]),
		STET_KeyUp(EVScreenScutcheonEventTypeHelper.ENUM_VALUES[4]),
		STET_Selected(EVScreenScutcheonEventTypeHelper.ENUM_VALUES[5]),
		STET_MouseWheel(EVScreenScutcheonEventTypeHelper.ENUM_VALUES[6]);
		private int value;
		EVScreenScutcheonEventType(int i) {
			this.value = i;
		}
		public EVScreenScutcheonEventType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVScreenScutcheonEventType toEnum(int retval) {
			if(retval == STET_MouseDown.value){
				return STET_MouseDown;
			}
			else if(retval == STET_MouseMove.value){
				return STET_MouseMove;
			}
			else if(retval == STET_MouseUp.value){
				return STET_MouseUp;
			}
			else if(retval == STET_KeyDown.value){
				return STET_KeyDown;
			}
			else if(retval == STET_KeyUp.value){
				return STET_KeyUp;
			}
			else if(retval == STET_Selected.value){
				return STET_Selected;
			}
			else if(retval == STET_MouseWheel.value){
				return STET_MouseWheel;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVScreenScutcheonEventTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 构造函数
	 * @param type 事件类型
	 */
	public ScreenScutcheonEvent(int type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CScreenScutcheonEvent", list);
	}

	native private long getSelectedScreenScutcheon_void(long pNativeObject);
	/**
	 * 获取已选择的屏幕标牌
	 * @return 屏幕标牌对象
	 */
	public com.earthview.industryengine.industrygraphic.ScreenScutcheon getSelectedScreenScutcheon()
	{
		long returnValue = getSelectedScreenScutcheon_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.industrygraphic.ScreenScutcheon __returnValue = new com.earthview.industryengine.industrygraphic.ScreenScutcheon(CreatedWhenConstruct.CWC_NotToCreate, "CScreenScutcheon");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.industrygraphic.ScreenScutcheon)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CScreenScutcheon");
		}
		return __returnValue;
	}
	native private void setSelectedScreenScutcheon_CScreenScutcheon(long pNativeObject, long scutcheon);
	/**
	 * 设置选择的屏幕标牌
	 * @param scutcheon 屏幕标牌对象
	 */
	public void setSelectedScreenScutcheon(com.earthview.industryengine.industrygraphic.ScreenScutcheon scutcheon)
	{
		long scutcheonParamValue = (scutcheon == null ? 0L : scutcheon.nativeObject.pointer);
		setSelectedScreenScutcheon_CScreenScutcheon(this.nativeObject.pointer, scutcheonParamValue);
	}
	native private int getX_void(long pNativeObject);
	/**
	 * 获取鼠标X坐标
	 * @return X坐标值
	 */
	public int getX()
	{
		int returnValue = getX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getY_void(long pNativeObject);
	/**
	 * 获取鼠标Y坐标
	 * @return Y坐标值
	 */
	public int getY()
	{
		int returnValue = getY_void(this.nativeObject.pointer);
		return returnValue;
	}
	public ScreenScutcheonEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScreenScutcheonEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ScreenScutcheonEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScreenScutcheonEvent obj = null;
 		if(baseObj instanceof ScreenScutcheonEvent)
		{
			obj = (ScreenScutcheonEvent)baseObj;
		} else {
			obj = new ScreenScutcheonEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScreenScutcheonEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
