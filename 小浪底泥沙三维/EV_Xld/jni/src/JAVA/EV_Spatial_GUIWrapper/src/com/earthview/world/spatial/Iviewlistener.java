package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 视图监听者的基类纯虚类
 */
public class Iviewlistener extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::IViewListener", new IviewlistenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JIViewListenerProxy", new IviewlistenerClassFactory());
	}

	public Iviewlistener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JIViewListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.Iviewlistener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void onViewChanged_IViewArgs_callback(long args)
	{
		com.earthview.world.spatial.Iviewargs argsParamValue = (args == 0L ? null : new com.earthview.world.spatial.Iviewargs(CreatedWhenConstruct.CWC_NotToCreate));
		if(argsParamValue != null)
		{
		argsParamValue.setDelegate(true);
		argsParamValue.setInstancePointer(new InstancePointer(args));
		IClassFactory argsParamValueClassFactory = GlobalClassFactoryMap.get(argsParamValue.getCppInstanceTypeName());
		if (argsParamValueClassFactory != null)
		{
			argsParamValue.setDelegate(true);
			argsParamValue = (com.earthview.world.spatial.Iviewargs)argsParamValueClassFactory.create();
			argsParamValue.setDelegate(true);
			argsParamValue.setInstancePointer(new InstancePointer(args));
		}
		}
		onViewChanged(argsParamValue);
	}

	native private void onViewChanged_IViewArgs(long pNativeObject, long args);
	public void onViewChanged(com.earthview.world.spatial.Iviewargs args)
	{
		long argsParamValue = (args == null ? 0L : args.nativeObject.pointer);
		onViewChanged_IViewArgs(this.nativeObject.pointer, argsParamValue);
	}
	native private void onViewChanged_IViewArgs_NoVirtual(long pNativeObject, long args);
	protected void onViewChanged_NoVirtual(com.earthview.world.spatial.Iviewargs args)
	{
		long argsParamValue = (args == null ? 0L : args.nativeObject.pointer);
		onViewChanged_IViewArgs_NoVirtual(this.nativeObject.pointer, argsParamValue);
	}

	public Iviewlistener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Iviewlistener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_onViewChanged_IViewArgs(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onViewChanged_IViewArgs(this.nativeObject.pointer, "onViewChanged_IViewArgs_callback");
		}
	}
	
	public static Iviewlistener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Iviewlistener obj = null;
 		if(baseObj instanceof Iviewlistener)
		{
			obj = (Iviewlistener)baseObj;
		} else {
			obj = new Iviewlistener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IViewListener");
			obj.increaseCast();
		}

		return obj;
	}
}
