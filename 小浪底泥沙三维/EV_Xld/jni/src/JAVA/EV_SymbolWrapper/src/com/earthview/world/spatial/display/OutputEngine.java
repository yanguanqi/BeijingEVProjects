package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OutputEngine extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::COutputEngine", new OutputEngineClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCOutputEngineProxy", new OutputEngineClassFactory());
	}

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long createDrawSymbol_ev_int32_callback(int symbolType)
	{
		int symbolTypeParamValue = symbolType;
		com.earthview.world.spatial.display.DrawSymbol returnValue = createDrawSymbol(symbolTypeParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createDrawSymbol_ev_int32(long pNativeObject, int symbolType);
	public com.earthview.world.spatial.display.DrawSymbol createDrawSymbol(int symbolType)
	{
		int symbolTypeParamValue = symbolType;
		long returnValue = createDrawSymbol_ev_int32(this.nativeObject.pointer, symbolTypeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.DrawSymbol __returnValue = new com.earthview.world.spatial.display.DrawSymbol(CreatedWhenConstruct.CWC_NotToCreate, "CDrawSymbol");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.DrawSymbol)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDrawSymbol");
		}
		return __returnValue;
	}
	native private long createDrawSymbol_ev_int32_NoVirtual(long pNativeObject, int symbolType);
	protected com.earthview.world.spatial.display.DrawSymbol createDrawSymbol_NoVirtual(int symbolType)
	{
		int symbolTypeParamValue = symbolType;
		long returnValue = createDrawSymbol_ev_int32_NoVirtual(this.nativeObject.pointer, symbolTypeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.DrawSymbol __returnValue = new com.earthview.world.spatial.display.DrawSymbol(CreatedWhenConstruct.CWC_NotToCreate, "CDrawSymbol");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.DrawSymbol)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDrawSymbol");
		}
		return __returnValue;
	}

	protected  boolean isSupportDevice_IPaintDevice_callback(long device)
	{
		com.earthview.world.display.Ipaintdevice deviceParamValue = (device == 0L ? null : new com.earthview.world.display.Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate));
		if(deviceParamValue != null)
		{
		deviceParamValue.setDelegate(true);
		deviceParamValue.setInstancePointer(new InstancePointer(device));
		IClassFactory deviceParamValueClassFactory = GlobalClassFactoryMap.get(deviceParamValue.getCppInstanceTypeName());
		if (deviceParamValueClassFactory != null)
		{
			deviceParamValue.setDelegate(true);
			deviceParamValue = (com.earthview.world.display.Ipaintdevice)deviceParamValueClassFactory.create();
			deviceParamValue.setDelegate(true);
			deviceParamValue.setInstancePointer(new InstancePointer(device));
		}
		}
		boolean returnValue = isSupportDevice(deviceParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isSupportDevice_IPaintDevice(long pNativeObject, long device);
	public boolean isSupportDevice(com.earthview.world.display.Ipaintdevice device)
	{
		long deviceParamValue = (device == null ? 0L : device.nativeObject.pointer);
		boolean returnValue = isSupportDevice_IPaintDevice(this.nativeObject.pointer, deviceParamValue);
		return returnValue;
	}
	native private boolean isSupportDevice_IPaintDevice_NoVirtual(long pNativeObject, long device);
	protected boolean isSupportDevice_NoVirtual(com.earthview.world.display.Ipaintdevice device)
	{
		long deviceParamValue = (device == null ? 0L : device.nativeObject.pointer);
		boolean returnValue = isSupportDevice_IPaintDevice_NoVirtual(this.nativeObject.pointer, deviceParamValue);
		return returnValue;
	}

	protected  void getSupportedFormat_CStringArray_callback(long array)
	{
		com.earthview.world.core.StringArray arrayParamValue = new com.earthview.world.core.StringArray(CreatedWhenConstruct.CWC_NotToCreate);
		arrayParamValue.setDelegate(true);
		arrayParamValue.setInstancePointer(new InstancePointer(array));
		IClassFactory arrayParamValueClassFactory = GlobalClassFactoryMap.get(arrayParamValue.getCppInstanceTypeName());
		if (arrayParamValueClassFactory != null)
		{
			arrayParamValue.setDelegate(true);
			arrayParamValue = (com.earthview.world.core.StringArray)arrayParamValueClassFactory.create();
			arrayParamValue.setDelegate(true);
			arrayParamValue.setInstancePointer(new InstancePointer(array));
		}
		getSupportedFormat(arrayParamValue);
	}

	native private void getSupportedFormat_CStringArray(long pNativeObject, long array);
	public void getSupportedFormat(com.earthview.world.core.StringArray array)
	{
		long arrayParamValue = array.nativeObject.pointer;
		getSupportedFormat_CStringArray(this.nativeObject.pointer, arrayParamValue);
	}
	native private void getSupportedFormat_CStringArray_NoVirtual(long pNativeObject, long array);
	protected void getSupportedFormat_NoVirtual(com.earthview.world.core.StringArray array)
	{
		long arrayParamValue = array.nativeObject.pointer;
		getSupportedFormat_CStringArray_NoVirtual(this.nativeObject.pointer, arrayParamValue);
	}

	protected  long createOutputDevice_EVString_char_double_double_callback(String format, long fileName, double w_in_p, double h_in_p)
	{
		String formatParamValue = format;
		BytePointer fileNameParamValue = (fileName == 0L ? null : new BytePointer(new InstancePointer(fileName)));
		double w_in_pParamValue = w_in_p;
		double h_in_pParamValue = h_in_p;
		com.earthview.world.display.Ipaintdevice returnValue = createOutputDevice(formatParamValue, fileNameParamValue, w_in_pParamValue, h_in_pParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createOutputDevice_EVString_char_double_double(long pNativeObject, String format, long fileName, double w_in_p, double h_in_p);
	public com.earthview.world.display.Ipaintdevice createOutputDevice(String format, BytePointer fileName, double w_in_p, double h_in_p)
	{
		String formatParamValue = format;
		long fileNameParamValue = (fileName == null ? 0L : fileName.nativeObject.pointer);
		double w_in_pParamValue = w_in_p;
		double h_in_pParamValue = h_in_p;
		long returnValue = createOutputDevice_EVString_char_double_double(this.nativeObject.pointer, formatParamValue, fileNameParamValue, w_in_pParamValue, h_in_pParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ipaintdevice __returnValue = new com.earthview.world.display.Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate, "IPaintDevice");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ipaintdevice)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPaintDevice");
		}
		return __returnValue;
	}
	native private long createOutputDevice_EVString_char_double_double_NoVirtual(long pNativeObject, String format, long fileName, double w_in_p, double h_in_p);
	protected com.earthview.world.display.Ipaintdevice createOutputDevice_NoVirtual(String format, BytePointer fileName, double w_in_p, double h_in_p)
	{
		String formatParamValue = format;
		long fileNameParamValue = (fileName == null ? 0L : fileName.nativeObject.pointer);
		double w_in_pParamValue = w_in_p;
		double h_in_pParamValue = h_in_p;
		long returnValue = createOutputDevice_EVString_char_double_double_NoVirtual(this.nativeObject.pointer, formatParamValue, fileNameParamValue, w_in_pParamValue, h_in_pParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ipaintdevice __returnValue = new com.earthview.world.display.Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate, "IPaintDevice");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ipaintdevice)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPaintDevice");
		}
		return __returnValue;
	}

	public OutputEngine(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public OutputEngine(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_createDrawSymbol_ev_int32(long pNativeObject, String method);
	native protected void register_isSupportDevice_IPaintDevice(long pNativeObject, String method);
	native protected void register_getSupportedFormat_CStringArray(long pNativeObject, String method);
	native protected void register_createOutputDevice_EVString_char_double_double(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_createDrawSymbol_ev_int32(this.nativeObject.pointer, "createDrawSymbol_ev_int32_callback");
			this.register_isSupportDevice_IPaintDevice(this.nativeObject.pointer, "isSupportDevice_IPaintDevice_callback");
			this.register_getSupportedFormat_CStringArray(this.nativeObject.pointer, "getSupportedFormat_CStringArray_callback");
			this.register_createOutputDevice_EVString_char_double_double(this.nativeObject.pointer, "createOutputDevice_EVString_char_double_double_callback");
		}
	}
	
	public static OutputEngine fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		OutputEngine obj = null;
 		if(baseObj instanceof OutputEngine)
		{
			obj = (OutputEngine)baseObj;
		} else {
			obj = new OutputEngine(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COutputEngine");
			obj.increaseCast();
		}

		return obj;
	}
}
