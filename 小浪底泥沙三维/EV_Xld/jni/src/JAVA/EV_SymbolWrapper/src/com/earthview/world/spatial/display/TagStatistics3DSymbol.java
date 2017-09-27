package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 存放symbol、字段名、字段值、字段比例的结构体
 */
public class TagStatistics3DSymbol extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::TagStatistics3DSymbol", new TagStatistics3DSymbolClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public TagStatistics3DSymbol() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("TagStatistics3DSymbol", null);
	}

	native private long get_pSymbol_void(long pNativeObject);
	public com.earthview.world.spatial.display.Isymbol get_pSymbol()
	{
		long jniValue = get_pSymbol_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	
	native private void set_pSymbol_ISymbol (long pNativeObject, long value);
	public void set_pSymbol(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		
		set_pSymbol_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
	}
	
	native private String get_mFieldName_void(long pNativeObject);
	public String get_mFieldName()
	{
		String jniValue = get_mFieldName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mFieldName_EVString (long pNativeObject, String value);
	public void set_mFieldName(String mFieldName)
	{
		String mFieldNameParamValue = mFieldName;
		
		set_mFieldName_EVString(this.nativeObject.pointer, mFieldNameParamValue);
	}
	
	native private double get_mdValue_void(long pNativeObject);
	public double get_mdValue()
	{
		double jniValue = get_mdValue_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mdValue_ev_real64 (long pNativeObject, double value);
	public void set_mdValue(double mdValue)
	{
		double mdValueParamValue = mdValue;
		
		set_mdValue_ev_real64(this.nativeObject.pointer, mdValueParamValue);
	}
	
	native private double get_mdValueRatio_void(long pNativeObject);
	public double get_mdValueRatio()
	{
		double jniValue = get_mdValueRatio_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mdValueRatio_ev_real64 (long pNativeObject, double value);
	public void set_mdValueRatio(double mdValueRatio)
	{
		double mdValueRatioParamValue = mdValueRatio;
		
		set_mdValueRatio_ev_real64(this.nativeObject.pointer, mdValueRatioParamValue);
	}
	
	public TagStatistics3DSymbol(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TagStatistics3DSymbol(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TagStatistics3DSymbol fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TagStatistics3DSymbol obj = null;
 		if(baseObj instanceof TagStatistics3DSymbol)
		{
			obj = (TagStatistics3DSymbol)baseObj;
		} else {
			obj = new TagStatistics3DSymbol(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "TagStatistics3DSymbol");
			obj.increaseCast();
		}

		return obj;
	}
}
