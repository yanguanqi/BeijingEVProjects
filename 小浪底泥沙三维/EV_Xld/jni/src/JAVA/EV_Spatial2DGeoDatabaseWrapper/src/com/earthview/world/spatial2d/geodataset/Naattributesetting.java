package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 网络数据集属性设置
 */
public class Naattributesetting extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting", new NaattributesettingClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public Naattributesetting() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CNAAttributeSetting", null);
	}

	native private String get_m_sourceName_void(long pNativeObject);
	public String get_m_sourceName()
	{
		String jniValue = get_m_sourceName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_sourceName_EVString (long pNativeObject, String value);
	public void set_m_sourceName(String m_sourceName)
	{
		String m_sourceNameParamValue = m_sourceName;
		
		set_m_sourceName_EVString(this.nativeObject.pointer, m_sourceNameParamValue);
	}
	
	native private int get_m_direction_void(long pNativeObject);
	public com.earthview.world.spatial2d.geodataset.EVDirectionType get_m_direction()
	{
		int jniValue = get_m_direction_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial2d.geodataset.EVDirectionType.toEnum(jniValue);
	}
	
	native private void set_m_direction_EVDirectionType (long pNativeObject, int value);
	public void set_m_direction(com.earthview.world.spatial2d.geodataset.EVDirectionType m_direction)
	{
		int m_directionParamValue = m_direction.getValue();
		
		set_m_direction_EVDirectionType(this.nativeObject.pointer, m_directionParamValue);
	}
	
	native private int get_m_element_void(long pNativeObject);
	public com.earthview.world.spatial2d.geodataset.EVElementType get_m_element()
	{
		int jniValue = get_m_element_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial2d.geodataset.EVElementType.toEnum(jniValue);
	}
	
	native private void set_m_element_EVElementType (long pNativeObject, int value);
	public void set_m_element(com.earthview.world.spatial2d.geodataset.EVElementType m_element)
	{
		int m_elementParamValue = m_element.getValue();
		
		set_m_element_EVElementType(this.nativeObject.pointer, m_elementParamValue);
	}
	
	native private int get_m_type_void(long pNativeObject);
	public com.earthview.world.spatial2d.geodataset.EVDataValueType get_m_type()
	{
		int jniValue = get_m_type_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial2d.geodataset.EVDataValueType.toEnum(jniValue);
	}
	
	native private void set_m_type_EVDataValueType (long pNativeObject, int value);
	public void set_m_type(com.earthview.world.spatial2d.geodataset.EVDataValueType m_type)
	{
		int m_typeParamValue = m_type.getValue();
		
		set_m_type_EVDataValueType(this.nativeObject.pointer, m_typeParamValue);
	}
	
	native private String get_m_value_void(long pNativeObject);
	public String get_m_value()
	{
		String jniValue = get_m_value_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_value_EVString (long pNativeObject, String value);
	public void set_m_value(String m_value)
	{
		String m_valueParamValue = m_value;
		
		set_m_value_EVString(this.nativeObject.pointer, m_valueParamValue);
	}
	
	public Naattributesetting(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Naattributesetting(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Naattributesetting fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Naattributesetting obj = null;
 		if(baseObj instanceof Naattributesetting)
		{
			obj = (Naattributesetting)baseObj;
		} else {
			obj = new Naattributesetting(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CNAAttributeSetting");
			obj.increaseCast();
		}

		return obj;
	}
}
