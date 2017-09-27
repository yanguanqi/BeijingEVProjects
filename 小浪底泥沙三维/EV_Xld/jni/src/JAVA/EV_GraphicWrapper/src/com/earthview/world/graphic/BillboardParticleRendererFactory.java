package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * CBillboardParticleRenderer类工厂定义类工厂及相关操作
 */
public class BillboardParticleRendererFactory extends com.earthview.world.graphic.ParticleSystemRendererFactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CBillboardParticleRendererFactory", new BillboardParticleRendererFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCBillboardParticleRendererFactoryProxy", new BillboardParticleRendererFactoryClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public BillboardParticleRendererFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCBillboardParticleRendererFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.BillboardParticleRendererFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private String getType_void(long pNativeObject);
	/**
	 * 获得类型
	 * @param  
	 */
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

	native private long createInstance_EVString(long pNativeObject, String name);
	/**
	 * 创建实例
	 * @param name 名称
	 * @return 实例
	 */
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

	native private void destroyInstance_CParticleSystemRenderer(long pNativeObject, long inst);
	/**
	 * 销毁实例
	 * @param inst 实例
	 */
	public void destroyInstance(com.earthview.world.graphic.ParticleSystemRenderer inst)
	{
		long instParamValue = (inst == null ? 0L : inst.nativeObject.pointer);
		destroyInstance_CParticleSystemRenderer(this.nativeObject.pointer, instParamValue);
	}
	native private void destroyInstance_CParticleSystemRenderer_NoVirtual(long pNativeObject, long inst);
	protected void destroyInstance_NoVirtual(com.earthview.world.graphic.ParticleSystemRenderer inst)
	{
		long instParamValue = (inst == null ? 0L : inst.nativeObject.pointer);
		destroyInstance_CParticleSystemRenderer_NoVirtual(this.nativeObject.pointer, instParamValue);
	}

	public BillboardParticleRendererFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BillboardParticleRendererFactory(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static BillboardParticleRendererFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BillboardParticleRendererFactory obj = null;
 		if(baseObj instanceof BillboardParticleRendererFactory)
		{
			obj = (BillboardParticleRendererFactory)baseObj;
		} else {
			obj = new BillboardParticleRendererFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBillboardParticleRendererFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
