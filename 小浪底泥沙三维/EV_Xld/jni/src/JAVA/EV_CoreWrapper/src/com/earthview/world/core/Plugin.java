package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class Plugin extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CPlugin", new PluginClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCPluginProxy", new PluginClassFactory());
	}

	public Plugin() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCPluginProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.core.Plugin".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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

	protected  void install_void_callback()
	{
		install();
	}

	native private void install_void(long pNativeObject);
	public void install()
	{
		install_void(this.nativeObject.pointer);
	}
	native private void install_void_NoVirtual(long pNativeObject);
	protected void install_NoVirtual()
	{
		install_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void initialise_void_callback()
	{
		initialise();
	}

	native private void initialise_void(long pNativeObject);
	public void initialise()
	{
		initialise_void(this.nativeObject.pointer);
	}
	native private void initialise_void_NoVirtual(long pNativeObject);
	protected void initialise_NoVirtual()
	{
		initialise_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void shutdown_void_callback()
	{
		shutdown();
	}

	native private void shutdown_void(long pNativeObject);
	public void shutdown()
	{
		shutdown_void(this.nativeObject.pointer);
	}
	native private void shutdown_void_NoVirtual(long pNativeObject);
	protected void shutdown_NoVirtual()
	{
		shutdown_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void uninstall_void_callback()
	{
		uninstall();
	}

	native private void uninstall_void(long pNativeObject);
	public void uninstall()
	{
		uninstall_void(this.nativeObject.pointer);
	}
	native private void uninstall_void_NoVirtual(long pNativeObject);
	protected void uninstall_NoVirtual()
	{
		uninstall_void_NoVirtual(this.nativeObject.pointer);
	}

	public Plugin(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Plugin(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_install_void(long pNativeObject, String method);
	native protected void register_initialise_void(long pNativeObject, String method);
	native protected void register_shutdown_void(long pNativeObject, String method);
	native protected void register_uninstall_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_install_void(this.nativeObject.pointer, "install_void_callback");
			this.register_initialise_void(this.nativeObject.pointer, "initialise_void_callback");
			this.register_shutdown_void(this.nativeObject.pointer, "shutdown_void_callback");
			this.register_uninstall_void(this.nativeObject.pointer, "uninstall_void_callback");
		}
	}
	
	public static Plugin fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Plugin obj = null;
 		if(baseObj instanceof Plugin)
		{
			obj = (Plugin)baseObj;
		} else {
			obj = new Plugin(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPlugin");
			obj.increaseCast();
		}

		return obj;
	}
}
