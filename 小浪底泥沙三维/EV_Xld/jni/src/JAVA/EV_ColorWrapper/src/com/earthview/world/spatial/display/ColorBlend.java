package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ColorBlend extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CColorBlend", new ColorBlendClassFactory());
	}

	public ColorBlend() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CColorBlend", null);
	}

	native private void setBlendOperationMode_EVColorBlendOperation(long pNativeObject, int mode);
	public void setBlendOperationMode(com.earthview.world.spatial.display.EVColorBlendOperation mode)
	{
		int modeParamValue = mode.getValue();
		setBlendOperationMode_EVColorBlendOperation(this.nativeObject.pointer, modeParamValue);
	}
	native private int getBlendOperationMode_void(long pNativeObject);
	public com.earthview.world.spatial.display.EVColorBlendOperation getBlendOperationMode()
	{
		int returnValue = getBlendOperationMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVColorBlendOperation.toEnum(returnValue);
	}
	native private long getBlendResult_IColor_IColor(long pNativeObject, long arg1, long arg2);
	public com.earthview.world.spatial.display.Icolor getBlendResult(com.earthview.world.spatial.display.Icolor arg1, com.earthview.world.spatial.display.Icolor arg2)
	{
		long arg1ParamValue = (arg1 == null ? 0L : arg1.nativeObject.pointer);
		long arg2ParamValue = (arg2 == null ? 0L : arg2.nativeObject.pointer);
		long returnValue = getBlendResult_IColor_IColor(this.nativeObject.pointer, arg1ParamValue, arg2ParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Icolor __returnValue = new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate, "IColor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Icolor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IColor");
		}
		return __returnValue;
	}
	public ColorBlend(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ColorBlend(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ColorBlend fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ColorBlend obj = null;
 		if(baseObj instanceof ColorBlend)
		{
			obj = (ColorBlend)baseObj;
		} else {
			obj = new ColorBlend(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CColorBlend");
			obj.increaseCast();
		}

		return obj;
	}
}
