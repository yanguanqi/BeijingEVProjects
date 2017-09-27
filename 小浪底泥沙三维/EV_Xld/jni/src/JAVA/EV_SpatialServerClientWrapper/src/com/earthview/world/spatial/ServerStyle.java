package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的渲染风格信息类
 */
public class ServerStyle extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerStyle", new ServerStyleClassFactory());
	}

	native private String get_strStyleName_void(long pNativeObject);
	public String get_strStyleName()
	{
		String jniValue = get_strStyleName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_strStyleName_EVString (long pNativeObject, String value);
	public void set_strStyleName(String strStyleName)
	{
		String strStyleNameParamValue = strStyleName;
		
		set_strStyleName_EVString(this.nativeObject.pointer, strStyleNameParamValue);
	}
	
	native private String get_strFieldName_void(long pNativeObject);
	public String get_strFieldName()
	{
		String jniValue = get_strFieldName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_strFieldName_EVString (long pNativeObject, String value);
	public void set_strFieldName(String strFieldName)
	{
		String strFieldNameParamValue = strFieldName;
		
		set_strFieldName_EVString(this.nativeObject.pointer, strFieldNameParamValue);
	}
	
	native private String get_strUniqueValue_void(long pNativeObject);
	public String get_strUniqueValue()
	{
		String jniValue = get_strUniqueValue_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_strUniqueValue_EVString (long pNativeObject, String value);
	public void set_strUniqueValue(String strUniqueValue)
	{
		String strUniqueValueParamValue = strUniqueValue;
		
		set_strUniqueValue_EVString(this.nativeObject.pointer, strUniqueValueParamValue);
	}
	
	native private double get_dfMinValue_void(long pNativeObject);
	public double get_dfMinValue()
	{
		double jniValue = get_dfMinValue_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_dfMinValue_ev_real64 (long pNativeObject, double value);
	public void set_dfMinValue(double dfMinValue)
	{
		double dfMinValueParamValue = dfMinValue;
		
		set_dfMinValue_ev_real64(this.nativeObject.pointer, dfMinValueParamValue);
	}
	
	native private double get_dfMaxValue_void(long pNativeObject);
	public double get_dfMaxValue()
	{
		double jniValue = get_dfMaxValue_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_dfMaxValue_ev_real64 (long pNativeObject, double value);
	public void set_dfMaxValue(double dfMaxValue)
	{
		double dfMaxValueParamValue = dfMaxValue;
		
		set_dfMaxValue_ev_real64(this.nativeObject.pointer, dfMaxValueParamValue);
	}
	
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆
	 * @return 克隆对象指针
	 */
	public com.earthview.world.spatial.ServerStyle ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.ServerStyle __returnValue = new com.earthview.world.spatial.ServerStyle(CreatedWhenConstruct.CWC_NotToCreate, "CServerStyle");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerStyle)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CServerStyle");
		}
		return __returnValue;
	}
	/**
	 * 构造函数
	 */
	public ServerStyle() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CServerStyle", null);
	}

	public ServerStyle(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerStyle(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ServerStyle fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerStyle obj = null;
 		if(baseObj instanceof ServerStyle)
		{
			obj = (ServerStyle)baseObj;
		} else {
			obj = new ServerStyle(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerStyle");
			obj.increaseCast();
		}

		return obj;
	}
}
