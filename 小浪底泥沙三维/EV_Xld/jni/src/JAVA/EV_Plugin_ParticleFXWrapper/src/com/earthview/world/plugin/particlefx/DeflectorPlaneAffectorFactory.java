package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DeflectorPlaneAffectorFactory extends com.earthview.world.graphic.ParticleAffectorFactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffectorFactory", new DeflectorPlaneAffectorFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::JCDeflectorPlaneAffectorFactoryProxy", new DeflectorPlaneAffectorFactoryClassFactory());
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

	native private long createAffector_CParticleSystem(long pNativeObject, long psys);
	public com.earthview.world.graphic.ParticleAffector createAffector(com.earthview.world.graphic.ParticleSystem psys)
	{
		long psysParamValue = (psys == null ? 0L : psys.nativeObject.pointer);
		long returnValue = createAffector_CParticleSystem(this.nativeObject.pointer, psysParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ParticleAffector __returnValue = new com.earthview.world.graphic.ParticleAffector(CreatedWhenConstruct.CWC_NotToCreate, "CParticleAffector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleAffector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticleAffector");
		}
		return __returnValue;
	}
	native private long createAffector_CParticleSystem_NoVirtual(long pNativeObject, long psys);
	protected com.earthview.world.graphic.ParticleAffector createAffector_NoVirtual(com.earthview.world.graphic.ParticleSystem psys)
	{
		long psysParamValue = (psys == null ? 0L : psys.nativeObject.pointer);
		long returnValue = createAffector_CParticleSystem_NoVirtual(this.nativeObject.pointer, psysParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ParticleAffector __returnValue = new com.earthview.world.graphic.ParticleAffector(CreatedWhenConstruct.CWC_NotToCreate, "CParticleAffector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleAffector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticleAffector");
		}
		return __returnValue;
	}

	public DeflectorPlaneAffectorFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDeflectorPlaneAffectorFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.plugin.particlefx.DeflectorPlaneAffectorFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public DeflectorPlaneAffectorFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DeflectorPlaneAffectorFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 销毁参数指针指向的效果器
	 * @param e 指向粒子效果器的指针
	 */
	public void destroyAffector(com.earthview.world.graphic.ParticleAffector e)
	{
		super.destroyAffector_NoVirtual(e);
	}
	
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_createAffector_CParticleSystem(long pNativeObject, String method);
	native protected void register_destroyAffector_CParticleAffector(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_createAffector_CParticleSystem(this.nativeObject.pointer, "createAffector_CParticleSystem_callback");
			this.register_destroyAffector_CParticleAffector(this.nativeObject.pointer, "destroyAffector_CParticleAffector_callback");
		}
	}
	
	public static DeflectorPlaneAffectorFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DeflectorPlaneAffectorFactory obj = null;
 		if(baseObj instanceof DeflectorPlaneAffectorFactory)
		{
			obj = (DeflectorPlaneAffectorFactory)baseObj;
		} else {
			obj = new DeflectorPlaneAffectorFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDeflectorPlaneAffectorFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
