package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CustomCompositionPass extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CCustomCompositionPass", new CustomCompositionPassClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCCustomCompositionPassProxy", new CustomCompositionPassClassFactory());
	}

	public CustomCompositionPass() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCCustomCompositionPassProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.CustomCompositionPass".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long createOperation_CCompositorInstance_CCompositionPass_callback(long instance, long pass)
	{
		com.earthview.world.graphic.CompositorInstance instanceParamValue = (instance == 0L ? null : new com.earthview.world.graphic.CompositorInstance(CreatedWhenConstruct.CWC_NotToCreate));
		if(instanceParamValue != null)
		{
		instanceParamValue.setDelegate(true);
		instanceParamValue.setInstancePointer(new InstancePointer(instance));
		IClassFactory instanceParamValueClassFactory = GlobalClassFactoryMap.get(instanceParamValue.getCppInstanceTypeName());
		if (instanceParamValueClassFactory != null)
		{
			instanceParamValue.setDelegate(true);
			instanceParamValue = (com.earthview.world.graphic.CompositorInstance)instanceParamValueClassFactory.create();
			instanceParamValue.setDelegate(true);
			instanceParamValue.setInstancePointer(new InstancePointer(instance));
		}
		}
		com.earthview.world.graphic.CompositionPass passParamValue = (pass == 0L ? null : new com.earthview.world.graphic.CompositionPass(CreatedWhenConstruct.CWC_NotToCreate));
		if(passParamValue != null)
		{
		passParamValue.setDelegate(true);
		passParamValue.setInstancePointer(new InstancePointer(pass));
		IClassFactory passParamValueClassFactory = GlobalClassFactoryMap.get(passParamValue.getCppInstanceTypeName());
		if (passParamValueClassFactory != null)
		{
			passParamValue.setDelegate(true);
			passParamValue = (com.earthview.world.graphic.CompositionPass)passParamValueClassFactory.create();
			passParamValue.setDelegate(true);
			passParamValue.setInstancePointer(new InstancePointer(pass));
		}
		}
		com.earthview.world.graphic.CompositorInstance.RenderSystemOperation returnValue = createOperation(instanceParamValue, passParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createOperation_CCompositorInstance_CCompositionPass(long pNativeObject, long instance, long pass);
	public com.earthview.world.graphic.CompositorInstance.RenderSystemOperation createOperation(com.earthview.world.graphic.CompositorInstance instance, com.earthview.world.graphic.CompositionPass pass)
	{
		long instanceParamValue = (instance == null ? 0L : instance.nativeObject.pointer);
		long passParamValue = (pass == null ? 0L : pass.nativeObject.pointer);
		long returnValue = createOperation_CCompositorInstance_CCompositionPass(this.nativeObject.pointer, instanceParamValue, passParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositorInstance.RenderSystemOperation __returnValue = new com.earthview.world.graphic.CompositorInstance.RenderSystemOperation(CreatedWhenConstruct.CWC_NotToCreate, "CRenderSystemOperation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositorInstance.RenderSystemOperation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderSystemOperation");
		}
		return __returnValue;
	}
	native private long createOperation_CCompositorInstance_CCompositionPass_NoVirtual(long pNativeObject, long instance, long pass);
	protected com.earthview.world.graphic.CompositorInstance.RenderSystemOperation createOperation_NoVirtual(com.earthview.world.graphic.CompositorInstance instance, com.earthview.world.graphic.CompositionPass pass)
	{
		long instanceParamValue = (instance == null ? 0L : instance.nativeObject.pointer);
		long passParamValue = (pass == null ? 0L : pass.nativeObject.pointer);
		long returnValue = createOperation_CCompositorInstance_CCompositionPass_NoVirtual(this.nativeObject.pointer, instanceParamValue, passParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositorInstance.RenderSystemOperation __returnValue = new com.earthview.world.graphic.CompositorInstance.RenderSystemOperation(CreatedWhenConstruct.CWC_NotToCreate, "CRenderSystemOperation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositorInstance.RenderSystemOperation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderSystemOperation");
		}
		return __returnValue;
	}

	public CustomCompositionPass(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CustomCompositionPass(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_createOperation_CCompositorInstance_CCompositionPass(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createOperation_CCompositorInstance_CCompositionPass(this.nativeObject.pointer, "createOperation_CCompositorInstance_CCompositionPass_callback");
		}
	}
	
	public static CustomCompositionPass fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CustomCompositionPass obj = null;
 		if(baseObj instanceof CustomCompositionPass)
		{
			obj = (CustomCompositionPass)baseObj;
		} else {
			obj = new CustomCompositionPass(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCustomCompositionPass");
			obj.increaseCast();
		}

		return obj;
	}
}
