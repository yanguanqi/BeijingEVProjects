package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 抽象类定义了CParticleSystemRenderer工厂对象
 */
public class ParticleSystemRendererFactory extends com.earthview.world.graphic.ParticleSystemRendererFactoryObj {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystemRendererFactory", new ParticleSystemRendererFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCParticleSystemRendererFactoryProxy", new ParticleSystemRendererFactoryClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public ParticleSystemRendererFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCParticleSystemRendererFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ParticleSystemRendererFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public ParticleSystemRendererFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ParticleSystemRendererFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public String getType()
	{
		return super.getType_NoVirtual();
	}
	public com.earthview.world.graphic.ParticleSystemRenderer createInstance(String name)
	{
		return super.createInstance_NoVirtual(name);
	}
	public void destroyInstance(com.earthview.world.graphic.ParticleSystemRenderer renderer)
	{
		super.destroyInstance_NoVirtual(renderer);
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
	
	public static ParticleSystemRendererFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ParticleSystemRendererFactory obj = null;
 		if(baseObj instanceof ParticleSystemRendererFactory)
		{
			obj = (ParticleSystemRendererFactory)baseObj;
		} else {
			obj = new ParticleSystemRendererFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CParticleSystemRendererFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
