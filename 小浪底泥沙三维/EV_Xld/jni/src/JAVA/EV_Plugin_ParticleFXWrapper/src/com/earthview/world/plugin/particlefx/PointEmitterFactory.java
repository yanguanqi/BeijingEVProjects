package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PointEmitterFactory extends com.earthview.world.graphic.ParticleEmitterFactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CPointEmitterFactory", new PointEmitterFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::JCPointEmitterFactoryProxy", new PointEmitterFactoryClassFactory());
	}

	public PointEmitterFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCPointEmitterFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.plugin.particlefx.PointEmitterFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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

	native private long createEmitter_CParticleSystem(long pNativeObject, long psys);
	public com.earthview.world.graphic.ParticleEmitter createEmitter(com.earthview.world.graphic.ParticleSystem psys)
	{
		long psysParamValue = (psys == null ? 0L : psys.nativeObject.pointer);
		long returnValue = createEmitter_CParticleSystem(this.nativeObject.pointer, psysParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ParticleEmitter __returnValue = new com.earthview.world.graphic.ParticleEmitter(CreatedWhenConstruct.CWC_NotToCreate, "CParticleEmitter");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleEmitter)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticleEmitter");
		}
		return __returnValue;
	}
	native private long createEmitter_CParticleSystem_NoVirtual(long pNativeObject, long psys);
	protected com.earthview.world.graphic.ParticleEmitter createEmitter_NoVirtual(com.earthview.world.graphic.ParticleSystem psys)
	{
		long psysParamValue = (psys == null ? 0L : psys.nativeObject.pointer);
		long returnValue = createEmitter_CParticleSystem_NoVirtual(this.nativeObject.pointer, psysParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ParticleEmitter __returnValue = new com.earthview.world.graphic.ParticleEmitter(CreatedWhenConstruct.CWC_NotToCreate, "CParticleEmitter");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleEmitter)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticleEmitter");
		}
		return __returnValue;
	}

	public PointEmitterFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PointEmitterFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 销毁参数指定的发射器
	 * @param e 指向发射器的指针
	 */
	public void destroyEmitter(com.earthview.world.graphic.ParticleEmitter e)
	{
		super.destroyEmitter_NoVirtual(e);
	}
	
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_createEmitter_CParticleSystem(long pNativeObject, String method);
	native protected void register_destroyEmitter_CParticleEmitter(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_createEmitter_CParticleSystem(this.nativeObject.pointer, "createEmitter_CParticleSystem_callback");
			this.register_destroyEmitter_CParticleEmitter(this.nativeObject.pointer, "destroyEmitter_CParticleEmitter_callback");
		}
	}
	
	public static PointEmitterFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PointEmitterFactory obj = null;
 		if(baseObj instanceof PointEmitterFactory)
		{
			obj = (PointEmitterFactory)baseObj;
		} else {
			obj = new PointEmitterFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPointEmitterFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
