package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Evoutputenginemanager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::EVOutputEngineManager", new EvoutputenginemanagerClassFactory());
	}

	native private static long getSingletonPtr_void();
	public static com.earthview.world.spatial.display.Evoutputenginemanager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Evoutputenginemanager __returnValue = new com.earthview.world.spatial.display.Evoutputenginemanager(CreatedWhenConstruct.CWC_NotToCreate, "EVOutputEngineManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Evoutputenginemanager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "EVOutputEngineManager");
		}
		return __returnValue;
	}
	native private long getOutputEngine_IPaintDevice(long pNativeObject, long device);
	/**
	 * 获取当前输出引擎
	 */
	public com.earthview.world.spatial.display.OutputEngine getOutputEngine(com.earthview.world.display.Ipaintdevice device)
	{
		long deviceParamValue = (device == null ? 0L : device.nativeObject.pointer);
		long returnValue = getOutputEngine_IPaintDevice(this.nativeObject.pointer, deviceParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.OutputEngine __returnValue = new com.earthview.world.spatial.display.OutputEngine(CreatedWhenConstruct.CWC_NotToCreate, "COutputEngine");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.OutputEngine)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COutputEngine");
		}
		return __returnValue;
	}
	native private long getSupportedFormat_void(long pNativeObject);
	public com.earthview.world.core.StringArray getSupportedFormat()
	{
		long returnValue = getSupportedFormat_void(this.nativeObject.pointer);
		com.earthview.world.core.StringArray __returnValue = new com.earthview.world.core.StringArray(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CStringArray");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringArray)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CStringArray");
		}
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
	native private void registerOutputEngine_COutputEngine(long pNativeObject, long pEngine);
	public void registerOutputEngine(com.earthview.world.spatial.display.OutputEngine pEngine)
	{
		long pEngineParamValue = (pEngine == null ? 0L : pEngine.nativeObject.pointer);
		registerOutputEngine_COutputEngine(this.nativeObject.pointer, pEngineParamValue);
	}
	native private long getOutputEngine_EVString(long pNativeObject, String engineName);
	public com.earthview.world.spatial.display.OutputEngine getOutputEngine(String engineName)
	{
		String engineNameParamValue = engineName;
		long returnValue = getOutputEngine_EVString(this.nativeObject.pointer, engineNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.OutputEngine __returnValue = new com.earthview.world.spatial.display.OutputEngine(CreatedWhenConstruct.CWC_NotToCreate, "COutputEngine");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.OutputEngine)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COutputEngine");
		}
		return __returnValue;
	}
	native private long getOutputEngine_ev_uint32(long pNativeObject, long index);
	public com.earthview.world.spatial.display.OutputEngine getOutputEngine(long index)
	{
		long indexParamValue = index;
		long returnValue = getOutputEngine_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.OutputEngine __returnValue = new com.earthview.world.spatial.display.OutputEngine(CreatedWhenConstruct.CWC_NotToCreate, "COutputEngine");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.OutputEngine)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COutputEngine");
		}
		return __returnValue;
	}
	native private long getOutputEngineCount_void(long pNativeObject);
	public long getOutputEngineCount()
	{
		long returnValue = getOutputEngineCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void loadEngines_void(long pNativeObject);
	public void loadEngines()
	{
		loadEngines_void(this.nativeObject.pointer);
	}
	public Evoutputenginemanager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evoutputenginemanager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Evoutputenginemanager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evoutputenginemanager obj = null;
 		if(baseObj instanceof Evoutputenginemanager)
		{
			obj = (Evoutputenginemanager)baseObj;
		} else {
			obj = new Evoutputenginemanager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "EVOutputEngineManager");
			obj.increaseCast();
		}

		return obj;
	}
}
