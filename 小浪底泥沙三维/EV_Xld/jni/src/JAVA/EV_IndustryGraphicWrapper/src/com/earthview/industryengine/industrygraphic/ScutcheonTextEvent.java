package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 标牌事件对象
 */
public class ScutcheonTextEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent", new ScutcheonTextEventClassFactory());
	}

	public enum ScutcheonTextEventType implements INativeEnum<ScutcheonTextEventType> {
		STET_MouseDown(ScutcheonTextEventTypeHelper.ENUM_VALUES[0]),
		STET_MouseMove(ScutcheonTextEventTypeHelper.ENUM_VALUES[1]),
		STET_MouseUp(ScutcheonTextEventTypeHelper.ENUM_VALUES[2]),
		STET_KeyDown(ScutcheonTextEventTypeHelper.ENUM_VALUES[3]),
		STET_KeyUp(ScutcheonTextEventTypeHelper.ENUM_VALUES[4]),
		STET_Selected(ScutcheonTextEventTypeHelper.ENUM_VALUES[5]);
		private int value;
		ScutcheonTextEventType(int i) {
			this.value = i;
		}
		public ScutcheonTextEventType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final ScutcheonTextEventType toEnum(int retval) {
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
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class ScutcheonTextEventTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 构造函数
	 * @param type 事件类型
	 */
	public ScutcheonTextEvent(int type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CScutcheonTextEvent", list);
	}

	native private long getSelectedScutcheon_void(long pNativeObject);
	public com.earthview.industryengine.industrygraphic.ScutcheonText getSelectedScutcheon()
	{
		long returnValue = getSelectedScutcheon_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.industrygraphic.ScutcheonText __returnValue = new com.earthview.industryengine.industrygraphic.ScutcheonText(CreatedWhenConstruct.CWC_NotToCreate, "CScutcheonText");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.industrygraphic.ScutcheonText)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CScutcheonText");
		}
		return __returnValue;
	}
	native private void setSelectedScutcheon_CScutcheonText(long pNativeObject, long scutcheon);
	public void setSelectedScutcheon(com.earthview.industryengine.industrygraphic.ScutcheonText scutcheon)
	{
		long scutcheonParamValue = (scutcheon == null ? 0L : scutcheon.nativeObject.pointer);
		setSelectedScutcheon_CScutcheonText(this.nativeObject.pointer, scutcheonParamValue);
	}
	public ScutcheonTextEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScutcheonTextEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ScutcheonTextEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScutcheonTextEvent obj = null;
 		if(baseObj instanceof ScutcheonTextEvent)
		{
			obj = (ScutcheonTextEvent)baseObj;
		} else {
			obj = new ScutcheonTextEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScutcheonTextEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
