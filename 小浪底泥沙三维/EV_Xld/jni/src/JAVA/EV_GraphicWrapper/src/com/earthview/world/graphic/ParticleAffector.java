package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 抽象类，定义粒子效果器
 */
public class ParticleAffector extends com.earthview.world.core.StringInterface {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleAffector", new ParticleAffectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCParticleAffectorProxy", new ParticleAffectorClassFactory());
	}

	native private void addBaseParameters_void(long pNativeObject);
	/**
	 * 内部方法为子类设定了基本的参数定义
	 * @param  
	 */
	public void addBaseParameters()
	{
		addBaseParameters_void(this.nativeObject.pointer);
	}
	/**
	 * 构造函数
	 * @param parent 
	 */
	public ParticleAffector(com.earthview.world.graphic.ParticleSystem ref_parent) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		Create("JCParticleAffectorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ParticleAffector".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void _initParticle_CParticle_callback(long pParticle)
	{
		com.earthview.world.graphic.Particle pParticleParamValue = (pParticle == 0L ? null : new com.earthview.world.graphic.Particle(CreatedWhenConstruct.CWC_NotToCreate));
		if(pParticleParamValue != null)
		{
		pParticleParamValue.setDelegate(true);
		pParticleParamValue.setInstancePointer(new InstancePointer(pParticle));
		IClassFactory pParticleParamValueClassFactory = GlobalClassFactoryMap.get(pParticleParamValue.getCppInstanceTypeName());
		if (pParticleParamValueClassFactory != null)
		{
			pParticleParamValue.setDelegate(true);
			pParticleParamValue = (com.earthview.world.graphic.Particle)pParticleParamValueClassFactory.create();
			pParticleParamValue.setDelegate(true);
			pParticleParamValue.setInstancePointer(new InstancePointer(pParticle));
		}
		}
		_initParticle(pParticleParamValue);
	}

	native private void _initParticle_CParticle(long pNativeObject, long pParticle);
	/**
	 * 初始化新粒子
	 * @param pParticle 指向初始化粒子的指针
	 */
	public void _initParticle(com.earthview.world.graphic.Particle pParticle)
	{
		long pParticleParamValue = (pParticle == null ? 0L : pParticle.nativeObject.pointer);
		_initParticle_CParticle(this.nativeObject.pointer, pParticleParamValue);
	}
	native private void _initParticle_CParticle_NoVirtual(long pNativeObject, long pParticle);
	protected void _initParticle_NoVirtual(com.earthview.world.graphic.Particle pParticle)
	{
		long pParticleParamValue = (pParticle == null ? 0L : pParticle.nativeObject.pointer);
		_initParticle_CParticle_NoVirtual(this.nativeObject.pointer, pParticleParamValue);
	}

	protected  void _affectParticles_CParticleSystem_Real_callback(long pSystem, double timeElapsed)
	{
		com.earthview.world.graphic.ParticleSystem pSystemParamValue = (pSystem == 0L ? null : new com.earthview.world.graphic.ParticleSystem(CreatedWhenConstruct.CWC_NotToCreate));
		if(pSystemParamValue != null)
		{
		pSystemParamValue.setDelegate(true);
		pSystemParamValue.setInstancePointer(new InstancePointer(pSystem));
		IClassFactory pSystemParamValueClassFactory = GlobalClassFactoryMap.get(pSystemParamValue.getCppInstanceTypeName());
		if (pSystemParamValueClassFactory != null)
		{
			pSystemParamValue.setDelegate(true);
			pSystemParamValue = (com.earthview.world.graphic.ParticleSystem)pSystemParamValueClassFactory.create();
			pSystemParamValue.setDelegate(true);
			pSystemParamValue.setInstancePointer(new InstancePointer(pSystem));
		}
		}
		double timeElapsedParamValue = timeElapsed;
		_affectParticles(pSystemParamValue, timeElapsedParamValue);
	}

	native private void _affectParticles_CParticleSystem_Real(long pNativeObject, long pSystem, double timeElapsed);
	/**
	 * 作用活跃的粒子
	 * @param pSystem 指向粒子系统的指针
	 * @param timeElapsed 消耗的时间
	 */
	public void _affectParticles(com.earthview.world.graphic.ParticleSystem pSystem, double timeElapsed)
	{
		long pSystemParamValue = (pSystem == null ? 0L : pSystem.nativeObject.pointer);
		double timeElapsedParamValue = timeElapsed;
		_affectParticles_CParticleSystem_Real(this.nativeObject.pointer, pSystemParamValue, timeElapsedParamValue);
	}
	native private void _affectParticles_CParticleSystem_Real_NoVirtual(long pNativeObject, long pSystem, double timeElapsed);
	protected void _affectParticles_NoVirtual(com.earthview.world.graphic.ParticleSystem pSystem, double timeElapsed)
	{
		long pSystemParamValue = (pSystem == null ? 0L : pSystem.nativeObject.pointer);
		double timeElapsedParamValue = timeElapsed;
		_affectParticles_CParticleSystem_Real_NoVirtual(this.nativeObject.pointer, pSystemParamValue, timeElapsedParamValue);
	}

	native private long getType_void(long pNativeObject);
	/**
	 * 返回属性变换器的名称
	 * @param  
	 */
	public StringPointer getType()
	{
		long returnValue = getType_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	public ParticleAffector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ParticleAffector(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public boolean setParameter(String name, String value)
	{
		return super.setParameter_NoVirtual(name, value);
	}
	public boolean setParameter(String name, boolean readOnly, boolean enable)
	{
		return super.setParameter_NoVirtual(name, readOnly, enable);
	}
	public void setParameterList(com.earthview.world.core.CommonStringPairList paramList)
	{
		super.setParameterList_NoVirtual(paramList);
	}
	public String getParameter(String name)
	{
		return super.getParameter_NoVirtual(name);
	}
	public void copyParametersTo(com.earthview.world.core.StringInterface dest)
	{
		super.copyParametersTo_NoVirtual(dest);
	}
	
	native protected void register__initParticle_CParticle(long pNativeObject, String method);
	native protected void register__affectParticles_CParticleSystem_Real(long pNativeObject, String method);
	native protected void register_setParameter_EVString_EVString(long pNativeObject, String method);
	native protected void register_setParameter_EVString_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_setParameterList_CommonStringPairList(long pNativeObject, String method);
	native protected void register_getParameter_EVString(long pNativeObject, String method);
	native protected void register_copyParametersTo_CStringInterface(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register__initParticle_CParticle(this.nativeObject.pointer, "_initParticle_CParticle_callback");
			this.register__affectParticles_CParticleSystem_Real(this.nativeObject.pointer, "_affectParticles_CParticleSystem_Real_callback");
			this.register_setParameter_EVString_EVString(this.nativeObject.pointer, "setParameter_EVString_EVString_callback");
			this.register_setParameter_EVString_ev_bool_ev_bool(this.nativeObject.pointer, "setParameter_EVString_ev_bool_ev_bool_callback");
			this.register_setParameterList_CommonStringPairList(this.nativeObject.pointer, "setParameterList_CommonStringPairList_callback");
			this.register_getParameter_EVString(this.nativeObject.pointer, "getParameter_EVString_callback");
			this.register_copyParametersTo_CStringInterface(this.nativeObject.pointer, "copyParametersTo_CStringInterface_callback");
		}
	}
	
	public static ParticleAffector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ParticleAffector obj = null;
 		if(baseObj instanceof ParticleAffector)
		{
			obj = (ParticleAffector)baseObj;
		} else {
			obj = new ParticleAffector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CParticleAffector");
			obj.increaseCast();
		}

		return obj;
	}
}
