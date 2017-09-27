package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 抽象类定义了EarthView::World::Graphic::CParticleEmitter子类执行的接口
 */
public class ParticleEmitterFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleEmitterFactory", new ParticleEmitterFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCParticleEmitterFactoryProxy", new ParticleEmitterFactoryClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public ParticleEmitterFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCParticleEmitterFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ParticleEmitterFactory".equals(this.getClass().getName()))
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
	/**
	 * 返回工厂的名字，其标识了该工厂创建粒子发射器的类型
	 * @param  
	 */
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

	protected  long createEmitter_CParticleSystem_callback(long psys)
	{
		com.earthview.world.graphic.ParticleSystem psysParamValue = (psys == 0L ? null : new com.earthview.world.graphic.ParticleSystem(CreatedWhenConstruct.CWC_NotToCreate));
		if(psysParamValue != null)
		{
		psysParamValue.setDelegate(true);
		psysParamValue.setInstancePointer(new InstancePointer(psys));
		IClassFactory psysParamValueClassFactory = GlobalClassFactoryMap.get(psysParamValue.getCppInstanceTypeName());
		if (psysParamValueClassFactory != null)
		{
			psysParamValue.setDelegate(true);
			psysParamValue = (com.earthview.world.graphic.ParticleSystem)psysParamValueClassFactory.create();
			psysParamValue.setDelegate(true);
			psysParamValue.setInstancePointer(new InstancePointer(psys));
		}
		}
		com.earthview.world.graphic.ParticleEmitter returnValue = createEmitter(psysParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createEmitter_CParticleSystem(long pNativeObject, long psys);
	/**
	 * 创建一个新的粒子发射器的实例
	 * @param psys 指向粒子系统的指针
	 */
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

	protected  void destroyEmitter_CParticleEmitter_callback(long e)
	{
		com.earthview.world.graphic.ParticleEmitter eParamValue = (e == 0L ? null : new com.earthview.world.graphic.ParticleEmitter(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.graphic.ParticleEmitter)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		destroyEmitter(eParamValue);
	}

	native private void destroyEmitter_CParticleEmitter(long pNativeObject, long e);
	/**
	 * 销毁参数指定的发射器
	 * @param e 指向发射器的指针
	 */
	public void destroyEmitter(com.earthview.world.graphic.ParticleEmitter e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		destroyEmitter_CParticleEmitter(this.nativeObject.pointer, eParamValue);
	}
	native private void destroyEmitter_CParticleEmitter_NoVirtual(long pNativeObject, long e);
	protected void destroyEmitter_NoVirtual(com.earthview.world.graphic.ParticleEmitter e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		destroyEmitter_CParticleEmitter_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	public ParticleEmitterFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ParticleEmitterFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static ParticleEmitterFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ParticleEmitterFactory obj = null;
 		if(baseObj instanceof ParticleEmitterFactory)
		{
			obj = (ParticleEmitterFactory)baseObj;
		} else {
			obj = new ParticleEmitterFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CParticleEmitterFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
