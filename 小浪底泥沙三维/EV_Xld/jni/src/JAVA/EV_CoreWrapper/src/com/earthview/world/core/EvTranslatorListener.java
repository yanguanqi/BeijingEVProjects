package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class EvTranslatorListener extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CEvTranslatorListener", new EvTranslatorListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCEvTranslatorListenerProxy", new EvTranslatorListenerClassFactory());
	}

	public EvTranslatorListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEvTranslatorListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.core.EvTranslatorListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void changeLanguage_void_callback()
	{
		changeLanguage();
	}

	native private void changeLanguage_void(long pNativeObject);
	public void changeLanguage()
	{
		changeLanguage_void(this.nativeObject.pointer);
	}
	native private void changeLanguage_void_NoVirtual(long pNativeObject);
	protected void changeLanguage_NoVirtual()
	{
		changeLanguage_void_NoVirtual(this.nativeObject.pointer);
	}

	public EvTranslatorListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EvTranslatorListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_changeLanguage_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_changeLanguage_void(this.nativeObject.pointer, "changeLanguage_void_callback");
		}
	}
	
	public static EvTranslatorListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EvTranslatorListener obj = null;
 		if(baseObj instanceof EvTranslatorListener)
		{
			obj = (EvTranslatorListener)baseObj;
		} else {
			obj = new EvTranslatorListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEvTranslatorListener");
			obj.increaseCast();
		}

		return obj;
	}
}
