package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataRegion extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Display::CDataRegion", new DataRegionClassFactory());
	}

	public DataRegion() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDataRegion", null);
	}

	native private void addRect_ev_real64_ev_real64_ev_real64_ev_real64_EVCombineMode(long pNativeObject, double x, double y, double w, double h, int mode);
	public void addRect(double x, double y, double w, double h, com.earthview.world.display.EVCombineMode mode)
	{
		double xParamValue = x;
		double yParamValue = y;
		double wParamValue = w;
		double hParamValue = h;
		int modeParamValue = mode.getValue();
		addRect_ev_real64_ev_real64_ev_real64_ev_real64_EVCombineMode(this.nativeObject.pointer, xParamValue, yParamValue, wParamValue, hParamValue, modeParamValue);
	}
	native private void addPath_CDataPath_EVCombineMode(long pNativeObject, long path, int mode);
	public void addPath(com.earthview.world.display.DataPath path, com.earthview.world.display.EVCombineMode mode)
	{
		long pathParamValue = (path == null ? 0L : path.nativeObject.pointer);
		int modeParamValue = mode.getValue();
		addPath_CDataPath_EVCombineMode(this.nativeObject.pointer, pathParamValue, modeParamValue);
	}
	native private void addRegion_CDataRegion_EVCombineMode(long pNativeObject, long region, int mode);
	public void addRegion(com.earthview.world.display.DataRegion region, com.earthview.world.display.EVCombineMode mode)
	{
		long regionParamValue = (region == null ? 0L : region.nativeObject.pointer);
		int modeParamValue = mode.getValue();
		addRegion_CDataRegion_EVCombineMode(this.nativeObject.pointer, regionParamValue, modeParamValue);
	}
	native private void makeEmpty_void(long pNativeObject);
	public void makeEmpty()
	{
		makeEmpty_void(this.nativeObject.pointer);
	}
	public DataRegion(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataRegion(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DataRegion fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataRegion obj = null;
 		if(baseObj instanceof DataRegion)
		{
			obj = (DataRegion)baseObj;
		} else {
			obj = new DataRegion(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDataRegion");
			obj.increaseCast();
		}

		return obj;
	}
}
