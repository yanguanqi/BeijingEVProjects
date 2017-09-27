package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneOverlayData extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CSceneOverlayData", new SceneOverlayDataClassFactory());
	}

	/**
	 * SceneOverlay数据类型
	 */
	public enum EVSceneOverlayType implements INativeEnum<EVSceneOverlayType> {
		SOT_Proportion(EVSceneOverlayTypeHelper.ENUM_VALUES[0]),
		SOT_Pixels(EVSceneOverlayTypeHelper.ENUM_VALUES[1]),
		SOT_InsetPixels(EVSceneOverlayTypeHelper.ENUM_VALUES[2]);
		private int value;
		EVSceneOverlayType(int i) {
			this.value = i;
		}
		public EVSceneOverlayType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVSceneOverlayType toEnum(int retval) {
			if(retval == SOT_Proportion.value){
				return SOT_Proportion;
			}
			else if(retval == SOT_Pixels.value){
				return SOT_Pixels;
			}
			else if(retval == SOT_InsetPixels.value){
				return SOT_InsetPixels;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVSceneOverlayTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public SceneOverlayData() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSceneOverlayData", null);
	}

	native private void setData_EVSceneOverlayType_ev_real32(long pNativeObject, int type, float value);
	public void setData(com.earthview.world.spatial.kml.SceneOverlayData.EVSceneOverlayType type, float value)
	{
		int typeParamValue = type.getValue();
		float valueParamValue = value;
		setData_EVSceneOverlayType_ev_real32(this.nativeObject.pointer, typeParamValue, valueParamValue);
	}
	native private int getDataType_void(long pNativeObject);
	public com.earthview.world.spatial.kml.SceneOverlayData.EVSceneOverlayType getDataType()
	{
		int returnValue = getDataType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.kml.SceneOverlayData.EVSceneOverlayType.toEnum(returnValue);
	}
	native private float getDataValue_void(long pNativeObject);
	public float getDataValue()
	{
		float returnValue = getDataValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	public SceneOverlayData(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SceneOverlayData(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SceneOverlayData fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SceneOverlayData obj = null;
 		if(baseObj instanceof SceneOverlayData)
		{
			obj = (SceneOverlayData)baseObj;
		} else {
			obj = new SceneOverlayData(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSceneOverlayData");
			obj.increaseCast();
		}

		return obj;
	}
}
