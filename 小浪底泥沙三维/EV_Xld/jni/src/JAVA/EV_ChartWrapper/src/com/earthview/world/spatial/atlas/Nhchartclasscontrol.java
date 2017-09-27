package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Nhchartclasscontrol extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::NHChartClassControl", new NhchartclasscontrolClassFactory());
	}

	public Nhchartclasscontrol() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("NHChartClassControl", null);
	}

	public Nhchartclasscontrol(com.earthview.world.spatial.atlas.Nhchartclasscontrol chartClassControl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer chartClassControlPtr = new BasePointer(chartClassControl);
		list.add("chartClassControl", chartClassControlPtr.get());
		Create("NHChartClassControl", list);
	}

	native private long OperatorAssign_NHChartClassControl(long pNativeObject, long chartClassControl);
	public com.earthview.world.spatial.atlas.Nhchartclasscontrol OperatorAssign(com.earthview.world.spatial.atlas.Nhchartclasscontrol chartClassControl)
	{
		long chartClassControlParamValue = chartClassControl.nativeObject.pointer;
		long returnValue = OperatorAssign_NHChartClassControl(this.nativeObject.pointer, chartClassControlParamValue);
		com.earthview.world.spatial.atlas.Nhchartclasscontrol __returnValue = new com.earthview.world.spatial.atlas.Nhchartclasscontrol(CreatedWhenConstruct.CWC_NotToCreate, "NHChartClassControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Nhchartclasscontrol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "NHChartClassControl");
		}
		return __returnValue;
	}
	native private void setUseChartClassControl_ev_bool(long pNativeObject, boolean flag);
	public void setUseChartClassControl(boolean flag)
	{
		boolean flagParamValue = flag;
		setUseChartClassControl_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private boolean getUseChartClassControl_void(long pNativeObject);
	public boolean getUseChartClassControl()
	{
		boolean returnValue = getUseChartClassControl_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setHasSetColor_ev_bool(long pNativeObject, boolean flag);
	public void setHasSetColor(boolean flag)
	{
		boolean flagParamValue = flag;
		setHasSetColor_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private boolean getHasSetColor_void(long pNativeObject);
	public boolean getHasSetColor()
	{
		boolean returnValue = getHasSetColor_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setScaleFactor_ev_uint32(long pNativeObject, long value);
	public void setScaleFactor(long value)
	{
		long valueParamValue = value;
		setScaleFactor_ev_uint32(this.nativeObject.pointer, valueParamValue);
	}
	native private long getScaleFactor_void(long pNativeObject);
	public long getScaleFactor()
	{
		long returnValue = getScaleFactor_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCustomColor_CRgbColor(long pNativeObject, long color);
	public void setCustomColor(com.earthview.world.spatial.display.RgbColor color)
	{
		long colorParamValue = color.nativeObject.pointer;
		setCustomColor_CRgbColor(this.nativeObject.pointer, colorParamValue);
	}
	native private long getCustomColor_void(long pNativeObject);
	public com.earthview.world.spatial.display.RgbColor getCustomColor()
	{
		long returnValue = getCustomColor_void(this.nativeObject.pointer);
		com.earthview.world.spatial.display.RgbColor __returnValue = new com.earthview.world.spatial.display.RgbColor(CreatedWhenConstruct.CWC_NotToCreate, "CRgbColor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.RgbColor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRgbColor");
		}
		return __returnValue;
	}
	native private int getColorBlendMode_void(long pNativeObject);
	public com.earthview.world.spatial.display.EVColorBlendOperation getColorBlendMode()
	{
		int returnValue = getColorBlendMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVColorBlendOperation.toEnum(returnValue);
	}
	native private void setColorBlendMode_EVColorBlendOperation(long pNativeObject, int mode);
	public void setColorBlendMode(com.earthview.world.spatial.display.EVColorBlendOperation mode)
	{
		int modeParamValue = mode.getValue();
		setColorBlendMode_EVColorBlendOperation(this.nativeObject.pointer, modeParamValue);
	}
	public Nhchartclasscontrol(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Nhchartclasscontrol(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Nhchartclasscontrol fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Nhchartclasscontrol obj = null;
 		if(baseObj instanceof Nhchartclasscontrol)
		{
			obj = (Nhchartclasscontrol)baseObj;
		} else {
			obj = new Nhchartclasscontrol(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "NHChartClassControl");
			obj.increaseCast();
		}

		return obj;
	}
}
