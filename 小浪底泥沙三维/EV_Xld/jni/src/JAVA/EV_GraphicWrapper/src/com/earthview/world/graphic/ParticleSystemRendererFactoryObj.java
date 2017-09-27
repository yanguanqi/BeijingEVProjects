package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ParticleSystemRendererFactoryObj extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystemRendererFactoryObj", new ParticleSystemRendererFactoryObjClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCParticleSystemRendererFactoryObjProxy", new ParticleSystemRendererFactoryObjClassFactory());
	}

	public ParticleSystemRendererFactoryObj() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCParticleSystemRendererFactoryObjProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ParticleSystemRendererFactoryObj".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  String getType_void_callback()
	{
		String returnValue = getType();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getType_void(long pNativeObject);
	public String getType()
	{
		String returnValue = getType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getType_void_NoVirtual(long pNativeObject);
	protected String getType_NoVirtual()
	{
		String returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long createInstance_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.ParticleSystemRenderer returnValue = createInstance(nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createInstance_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.ParticleSystemRenderer createInstance(String name)
	{
		String nameParamValue = name;
		long returnValue = createInstance_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ParticleSystemRenderer __returnValue = new com.earthview.world.graphic.ParticleSystemRenderer(CreatedWhenConstruct.CWC_NotToCreate, "CParticleSystemRenderer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleSystemRenderer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticleSystemRenderer");
		}
		return __returnValue;
	}
	native private long createInstance_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.ParticleSystemRenderer createInstance_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = createInstance_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ParticleSystemRenderer __returnValue = new com.earthview.world.graphic.ParticleSystemRenderer(CreatedWhenConstruct.CWC_NotToCreate, "CParticleSystemRenderer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleSystemRenderer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticleSystemRenderer");
		}
		return __returnValue;
	}

	protected  void destroyInstance_CParticleSystemRenderer_callback(long renderer)
	{
		com.earthview.world.graphic.ParticleSystemRenderer rendererParamValue = (renderer == 0L ? null : new com.earthview.world.graphic.ParticleSystemRenderer(CreatedWhenConstruct.CWC_NotToCreate));
		if(rendererParamValue != null)
		{
		rendererParamValue.setDelegate(true);
		rendererParamValue.setInstancePointer(new InstancePointer(renderer));
		IClassFactory rendererParamValueClassFactory = GlobalClassFactoryMap.get(rendererParamValue.getCppInstanceTypeName());
		if (rendererParamValueClassFactory != null)
		{
			rendererParamValue.setDelegate(true);
			rendererParamValue = (com.earthview.world.graphic.ParticleSystemRenderer)rendererParamValueClassFactory.create();
			rendererParamValue.setDelegate(true);
			rendererParamValue.setInstancePointer(new InstancePointer(renderer));
		}
		}
		destroyInstance(rendererParamValue);
	}

	native private void destroyInstance_CParticleSystemRenderer(long pNativeObject, long renderer);
	public void destroyInstance(com.earthview.world.graphic.ParticleSystemRenderer renderer)
	{
		long rendererParamValue = (renderer == null ? 0L : renderer.nativeObject.pointer);
		destroyInstance_CParticleSystemRenderer(this.nativeObject.pointer, rendererParamValue);
	}
	native private void destroyInstance_CParticleSystemRenderer_NoVirtual(long pNativeObject, long renderer);
	protected void destroyInstance_NoVirtual(com.earthview.world.graphic.ParticleSystemRenderer renderer)
	{
		long rendererParamValue = (renderer == null ? 0L : renderer.nativeObject.pointer);
		destroyInstance_CParticleSystemRenderer_NoVirtual(this.nativeObject.pointer, rendererParamValue);
	}

	public ParticleSystemRendererFactoryObj(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ParticleSystemRendererFactoryObj(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_createInstance_EVString(long pNativeObject, String method);
	native protected void register_destroyInstance_CParticleSystemRenderer(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_createInstance_EVString(this.nativeObject.pointer, "createInstance_EVString_callback");
			this.register_destroyInstance_CParticleSystemRenderer(this.nativeObject.pointer, "destroyInstance_CParticleSystemRenderer_callback");
		}
	}
	
	public static ParticleSystemRendererFactoryObj fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ParticleSystemRendererFactoryObj obj = null;
 		if(baseObj instanceof ParticleSystemRendererFactoryObj)
		{
			obj = (ParticleSystemRendererFactoryObj)baseObj;
		} else {
			obj = new ParticleSystemRendererFactoryObj(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CParticleSystemRendererFactoryObj");
			obj.increaseCast();
		}

		return obj;
	}
}
