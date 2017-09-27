package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 函数类型
 */
public class ElevationSetting extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::ElevationSetting", new ElevationSettingClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public ElevationSetting() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ElevationSetting", null);
	}

	native private String get_srcName_void(long pNativeObject);
	public String get_srcName()
	{
		String jniValue = get_srcName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_srcName_EVString (long pNativeObject, String value);
	public void set_srcName(String srcName)
	{
		String srcNameParamValue = srcName;
		
		set_srcName_EVString(this.nativeObject.pointer, srcNameParamValue);
	}
	
	native private int get_direction_void(long pNativeObject);
	public com.earthview.world.spatial2d.geodataset.EVDirectionType get_direction()
	{
		int jniValue = get_direction_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial2d.geodataset.EVDirectionType.toEnum(jniValue);
	}
	
	native private void set_direction_EVDirectionType (long pNativeObject, int value);
	public void set_direction(com.earthview.world.spatial2d.geodataset.EVDirectionType direction)
	{
		int directionParamValue = direction.getValue();
		
		set_direction_EVDirectionType(this.nativeObject.pointer, directionParamValue);
	}
	
	native private String get_fieldName_void(long pNativeObject);
	public String get_fieldName()
	{
		String jniValue = get_fieldName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_fieldName_EVString (long pNativeObject, String value);
	public void set_fieldName(String fieldName)
	{
		String fieldNameParamValue = fieldName;
		
		set_fieldName_EVString(this.nativeObject.pointer, fieldNameParamValue);
	}
	
	public ElevationSetting(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ElevationSetting(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ElevationSetting fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ElevationSetting obj = null;
 		if(baseObj instanceof ElevationSetting)
		{
			obj = (ElevationSetting)baseObj;
		} else {
			obj = new ElevationSetting(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ElevationSetting");
			obj.increaseCast();
		}

		return obj;
	}
}
