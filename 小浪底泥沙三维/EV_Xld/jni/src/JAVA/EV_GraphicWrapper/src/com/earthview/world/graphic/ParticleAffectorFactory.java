package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 抽象类定义了EarthView::World::Graphic::CParticleAffector子类执行的接口
 */
public class ParticleAffectorFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleAffectorFactory", new ParticleAffectorFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCParticleAffectorFactoryProxy", new ParticleAffectorFactoryClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public ParticleAffectorFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCParticleAffectorFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ParticleAffectorFactory".equals(this.getClass().getName()))
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
	 * 返回工厂的名字，其标识了工厂创建粒子变换器的类型
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

	protected  long createAffector_CParticleSystem_callback(long psys)
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
		com.earthview.world.graphic.ParticleAffector returnValue = createAffector(psysParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createAffector_CParticleSystem(long pNativeObject, long psys);
	/**
	 * 创建一个新的效果器实例
	 * @param psys 
	 */
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

	protected  void destroyAffector_CParticleAffector_callback(long e)
	{
		com.earthview.world.graphic.ParticleAffector eParamValue = (e == 0L ? null : new com.earthview.world.graphic.ParticleAffector(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.graphic.ParticleAffector)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		destroyAffector(eParamValue);
	}

	native private void destroyAffector_CParticleAffector(long pNativeObject, long e);
	/**
	 * 销毁参数指针指向的效果器
	 * @param e 指向粒子效果器的指针
	 */
	public void destroyAffector(com.earthview.world.graphic.ParticleAffector e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		destroyAffector_CParticleAffector(this.nativeObject.pointer, eParamValue);
	}
	native private void destroyAffector_CParticleAffector_NoVirtual(long pNativeObject, long e);
	protected void destroyAffector_NoVirtual(com.earthview.world.graphic.ParticleAffector e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		destroyAffector_CParticleAffector_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	public ParticleAffectorFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ParticleAffectorFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static ParticleAffectorFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ParticleAffectorFactory obj = null;
 		if(baseObj instanceof ParticleAffectorFactory)
		{
			obj = (ParticleAffectorFactory)baseObj;
		} else {
			obj = new ParticleAffectorFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CParticleAffectorFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
