package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class Istringinterfaceobserver extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::IStringInterfaceObserver", new IstringinterfaceobserverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JIStringInterfaceObserverProxy", new IstringinterfaceobserverClassFactory());
	}

	public Istringinterfaceobserver() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JIStringInterfaceObserverProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.core.Istringinterfaceobserver".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void valueChanged_EVString_callback(String name)
	{
		String nameParamValue = name;
		valueChanged(nameParamValue);
	}

	native private void valueChanged_EVString(long pNativeObject, String name);
	public void valueChanged(String name)
	{
		String nameParamValue = name;
		valueChanged_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void valueChanged_EVString_NoVirtual(long pNativeObject, String name);
	protected void valueChanged_NoVirtual(String name)
	{
		String nameParamValue = name;
		valueChanged_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	protected  void destroyed_void_callback()
	{
		destroyed();
	}

	native private void destroyed_void(long pNativeObject);
	public void destroyed()
	{
		destroyed_void(this.nativeObject.pointer);
	}
	native private void destroyed_void_NoVirtual(long pNativeObject);
	protected void destroyed_NoVirtual()
	{
		destroyed_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void statusChanged_EVString_ParamStatus_callback(String name, int status)
	{
		String nameParamValue = name;
		com.earthview.world.core.ParamStatus statusParamValue = com.earthview.world.core.ParamStatus.toEnum(status);
		statusChanged(nameParamValue, statusParamValue);
	}

	native private void statusChanged_EVString_ParamStatus(long pNativeObject, String name, int status);
	public void statusChanged(String name, com.earthview.world.core.ParamStatus status)
	{
		String nameParamValue = name;
		int statusParamValue = status.getValue();
		statusChanged_EVString_ParamStatus(this.nativeObject.pointer, nameParamValue, statusParamValue);
	}
	native private void statusChanged_EVString_ParamStatus_NoVirtual(long pNativeObject, String name, int status);
	protected void statusChanged_NoVirtual(String name, com.earthview.world.core.ParamStatus status)
	{
		String nameParamValue = name;
		int statusParamValue = status.getValue();
		statusChanged_EVString_ParamStatus_NoVirtual(this.nativeObject.pointer, nameParamValue, statusParamValue);
	}

	protected  void valueModified_EVString_callback(String name)
	{
		String nameParamValue = name;
		valueModified(nameParamValue);
	}

	native private void valueModified_EVString(long pNativeObject, String name);
	public void valueModified(String name)
	{
		String nameParamValue = name;
		valueModified_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void valueModified_EVString_NoVirtual(long pNativeObject, String name);
	protected void valueModified_NoVirtual(String name)
	{
		String nameParamValue = name;
		valueModified_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	public Istringinterfaceobserver(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Istringinterfaceobserver(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_valueChanged_EVString(long pNativeObject, String method);
	native protected void register_destroyed_void(long pNativeObject, String method);
	native protected void register_statusChanged_EVString_ParamStatus(long pNativeObject, String method);
	native protected void register_valueModified_EVString(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_valueChanged_EVString(this.nativeObject.pointer, "valueChanged_EVString_callback");
			this.register_destroyed_void(this.nativeObject.pointer, "destroyed_void_callback");
			this.register_statusChanged_EVString_ParamStatus(this.nativeObject.pointer, "statusChanged_EVString_ParamStatus_callback");
			this.register_valueModified_EVString(this.nativeObject.pointer, "valueModified_EVString_callback");
		}
	}
	
	public static Istringinterfaceobserver fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Istringinterfaceobserver obj = null;
 		if(baseObj instanceof Istringinterfaceobserver)
		{
			obj = (Istringinterfaceobserver)baseObj;
		} else {
			obj = new Istringinterfaceobserver(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IStringInterfaceObserver");
			obj.increaseCast();
		}

		return obj;
	}
}
