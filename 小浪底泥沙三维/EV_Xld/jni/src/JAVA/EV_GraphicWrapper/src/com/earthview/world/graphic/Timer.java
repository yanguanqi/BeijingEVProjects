package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Timer extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CTimer", new TimerClassFactory());
	}

	public Timer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTimer", null);
	}

	native private boolean setOption_EVString_void(long pNativeObject, String strKey, long pValue);
	public boolean setOption(String strKey, VoidPointer pValue)
	{
		String strKeyParamValue = strKey;
		long pValueParamValue = (pValue == null ? 0L : pValue.nativeObject.pointer);
		boolean returnValue = setOption_EVString_void(this.nativeObject.pointer, strKeyParamValue, pValueParamValue);
		return returnValue;
	}
	native private void reset_void(long pNativeObject);
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	native private long getMilliseconds_void(long pNativeObject);
	public long getMilliseconds()
	{
		long returnValue = getMilliseconds_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMicroseconds_void(long pNativeObject);
	public long getMicroseconds()
	{
		long returnValue = getMicroseconds_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMillisecondsCPU_void(long pNativeObject);
	public long getMillisecondsCPU()
	{
		long returnValue = getMillisecondsCPU_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMicrosecondsCPU_void(long pNativeObject);
	public long getMicrosecondsCPU()
	{
		long returnValue = getMicrosecondsCPU_void(this.nativeObject.pointer);
		return returnValue;
	}
	public Timer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Timer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Timer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Timer obj = null;
 		if(baseObj instanceof Timer)
		{
			obj = (Timer)baseObj;
		} else {
			obj = new Timer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTimer");
			obj.increaseCast();
		}

		return obj;
	}
}
