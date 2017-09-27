package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlTourEvent extends com.earthview.world.spatial.systemui.Guievent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CKmlTourEvent", new KmlTourEventClassFactory());
	}

	public enum KmlEventType implements INativeEnum<KmlEventType> {
		DATA(KmlEventTypeHelper.ENUM_VALUES[0]),
		START(KmlEventTypeHelper.ENUM_VALUES[1]),
		STOP(KmlEventTypeHelper.ENUM_VALUES[2]),
		STARTRECORD(KmlEventTypeHelper.ENUM_VALUES[3]),
		STOPRECORD(KmlEventTypeHelper.ENUM_VALUES[4]);
		private int value;
		KmlEventType(int i) {
			this.value = i;
		}
		public KmlEventType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final KmlEventType toEnum(int retval) {
			if(retval == DATA.value){
				return DATA;
			}
			else if(retval == START.value){
				return START;
			}
			else if(retval == STOP.value){
				return STOP;
			}
			else if(retval == STARTRECORD.value){
				return STARTRECORD;
			}
			else if(retval == STOPRECORD.value){
				return STOPRECORD;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class KmlEventTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 构造函数
	 */
	public KmlTourEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CKmlTourEvent", null);
	}

	native private int getKmlEventType_void(long pNativeObject);
	/**
	 * 返回事件的类型
	 */
	public com.earthview.world.spatial3d.controls.KmlTourEvent.KmlEventType getKmlEventType()
	{
		int returnValue = getKmlEventType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.controls.KmlTourEvent.KmlEventType.toEnum(returnValue);
	}
	public KmlTourEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlTourEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static KmlTourEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlTourEvent obj = null;
 		if(baseObj instanceof KmlTourEvent)
		{
			obj = (KmlTourEvent)baseObj;
		} else {
			obj = new KmlTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlTourEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
