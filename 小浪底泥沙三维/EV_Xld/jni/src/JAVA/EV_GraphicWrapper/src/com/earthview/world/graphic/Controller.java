package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

////template <typename T>
public class Controller extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CController", new ControllerClassFactory());
	}

	public Controller(com.earthview.world.graphic.ControllerValueRealPtr src, com.earthview.world.graphic.ControllerValueRealPtr dest, com.earthview.world.graphic.ControllerFunctionRealPtr func) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer srcPtr = new BasePointer(src);
		list.add("src", srcPtr.get());
		BasePointer destPtr = new BasePointer(dest);
		list.add("dest", destPtr.get());
		BasePointer funcPtr = new BasePointer(func);
		list.add("func", funcPtr.get());
		Create("CController", list);
	}

	native private void setSource_ControllerValueRealPtr(long pNativeObject, long src);
	//// Sets the input controller value
	public void setSource(com.earthview.world.graphic.ControllerValueRealPtr src)
	{
		long srcParamValue = src.nativeObject.pointer;
		setSource_ControllerValueRealPtr(this.nativeObject.pointer, srcParamValue);
	}
	native private long getSource_void(long pNativeObject);
	//// Gets the input controller value
	public com.earthview.world.graphic.ControllerValueRealPtr getSource()
	{
		long returnValue = getSource_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ControllerValueRealPtr __returnValue = new com.earthview.world.graphic.ControllerValueRealPtr(CreatedWhenConstruct.CWC_NotToCreate, "ControllerValueRealPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ControllerValueRealPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ControllerValueRealPtr");
		}
		return __returnValue;
	}
	native private void setDestination_ControllerValueRealPtr(long pNativeObject, long dest);
	//// Sets the output controller value
	public void setDestination(com.earthview.world.graphic.ControllerValueRealPtr dest)
	{
		long destParamValue = dest.nativeObject.pointer;
		setDestination_ControllerValueRealPtr(this.nativeObject.pointer, destParamValue);
	}
	native private long getDestination_void(long pNativeObject);
	//// Gets the output controller value
	public com.earthview.world.graphic.ControllerValueRealPtr getDestination()
	{
		long returnValue = getDestination_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ControllerValueRealPtr __returnValue = new com.earthview.world.graphic.ControllerValueRealPtr(CreatedWhenConstruct.CWC_NotToCreate, "ControllerValueRealPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ControllerValueRealPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ControllerValueRealPtr");
		}
		return __returnValue;
	}
	native private boolean getEnabled_void(long pNativeObject);
	//// Returns true if this controller is currently enabled
	public boolean getEnabled()
	{
		boolean returnValue = getEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setEnabled_ev_bool(long pNativeObject, boolean enabled);
	//// Sets whether this controller is enabled
	public void setEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setFunction_ControllerFunctionRealPtr(long pNativeObject, long func);
	public void setFunction(com.earthview.world.graphic.ControllerFunctionRealPtr func)
	{
		long funcParamValue = func.nativeObject.pointer;
		setFunction_ControllerFunctionRealPtr(this.nativeObject.pointer, funcParamValue);
	}
	native private long getFunction_void(long pNativeObject);
	public com.earthview.world.graphic.ControllerFunctionRealPtr getFunction()
	{
		long returnValue = getFunction_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ControllerFunctionRealPtr __returnValue = new com.earthview.world.graphic.ControllerFunctionRealPtr(CreatedWhenConstruct.CWC_NotToCreate, "ControllerFunctionRealPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ControllerFunctionRealPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ControllerFunctionRealPtr");
		}
		return __returnValue;
	}
	native private void update_void(long pNativeObject);
	public void update()
	{
		update_void(this.nativeObject.pointer);
	}
	public Controller(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Controller(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Controller fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Controller obj = null;
 		if(baseObj instanceof Controller)
		{
			obj = (Controller)baseObj;
		} else {
			obj = new Controller(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CController");
			obj.increaseCast();
		}

		return obj;
	}
}
