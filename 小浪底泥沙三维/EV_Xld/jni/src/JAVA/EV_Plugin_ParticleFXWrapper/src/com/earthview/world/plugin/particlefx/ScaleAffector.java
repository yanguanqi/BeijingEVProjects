package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScaleAffector extends com.earthview.world.graphic.ParticleAffector {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CScaleAffector", new ScaleAffectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::JCScaleAffectorProxy", new ScaleAffectorClassFactory());
	}

	public static class CmdScaleAdjust extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CScaleAffector::CCmdScaleAdjust", new CmdScaleAdjustClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CScaleAffector::JCCmdScaleAdjustProxy", new CmdScaleAdjustClassFactory());
		}

		public CmdScaleAdjust() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdScaleAdjustProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.ScaleAffector$CmdScaleAdjust".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private String doGet_void(long pNativeObject, long target);
		public String doGet(VoidPointer target)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String returnValue = doGet_void(this.nativeObject.pointer, targetParamValue);
			return returnValue;
		}
		native private String doGet_void_NoVirtual(long pNativeObject, long target);
		protected String doGet_NoVirtual(VoidPointer target)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String returnValue = doGet_void_NoVirtual(this.nativeObject.pointer, targetParamValue);
			return returnValue;
		}

		native private void doSet_void_EVString(long pNativeObject, long target, String val);
		public void doSet(VoidPointer target, String val)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String valParamValue = val;
			doSet_void_EVString(this.nativeObject.pointer, targetParamValue, valParamValue);
		}
		native private void doSet_void_EVString_NoVirtual(long pNativeObject, long target, String val);
		protected void doSet_NoVirtual(VoidPointer target, String val)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String valParamValue = val;
			doSet_void_EVString_NoVirtual(this.nativeObject.pointer, targetParamValue, valParamValue);
		}

		public CmdScaleAdjust(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdScaleAdjust(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/// 在doSet之前测试一次值是否有效。
		public boolean trySet(VoidPointer target, String val, StringPointer reason)
		{
			return super.trySet_NoVirtual(target, val, reason);
		}
		
		native protected void register_doGet_void(long pNativeObject, String method);
		native protected void register_doSet_void_EVString(long pNativeObject, String method);
		native protected void register_trySet_void_EVString_EVString(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_doGet_void(this.nativeObject.pointer, "doGet_void_callback");
				this.register_doSet_void_EVString(this.nativeObject.pointer, "doSet_void_EVString_callback");
				this.register_trySet_void_EVString_EVString(this.nativeObject.pointer, "trySet_void_EVString_EVString_callback");
			}
		}
		
		public static CmdScaleAdjust fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdScaleAdjust obj = null;
 			if(baseObj instanceof CmdScaleAdjust)
			{
				obj = (CmdScaleAdjust)baseObj;
			} else {
				obj = new CmdScaleAdjust(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdScaleAdjust");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdScaleAdjustClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdScaleAdjust emptyInstance = new CmdScaleAdjust(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public ScaleAffector(com.earthview.world.graphic.ParticleSystem psys) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer psysPtr = new BasePointer(psys);
		list.add("psys", psysPtr.get());
		Create("JCScaleAffectorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.plugin.particlefx.ScaleAffector".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void _affectParticles_CParticleSystem_Real(long pNativeObject, long pSystem, double timeElapsed);
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

	native private void setAdjust_Real(long pNativeObject, double rate);
	public void setAdjust(double rate)
	{
		double rateParamValue = rate;
		setAdjust_Real(this.nativeObject.pointer, rateParamValue);
	}
	native private double getAdjust_void(long pNativeObject);
	public double getAdjust()
	{
		double returnValue = getAdjust_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static long get_msScaleCmd_void();
	public static com.earthview.world.plugin.particlefx.ScaleAffector.CmdScaleAdjust get_msScaleCmd()
	{
		long jniValue = get_msScaleCmd_void();
		
		com.earthview.world.plugin.particlefx.ScaleAffector.CmdScaleAdjust __returnValue = new com.earthview.world.plugin.particlefx.ScaleAffector.CmdScaleAdjust(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdScaleAdjust");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.ScaleAffector.CmdScaleAdjust)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdScaleAdjust");
		}
		return __returnValue;
	}
	
	native private static void set_msScaleCmd_CCmdScaleAdjust (long value);
	public static void set_msScaleCmd(com.earthview.world.plugin.particlefx.ScaleAffector.CmdScaleAdjust msScaleCmd)
	{
		long msScaleCmdParamValue = msScaleCmd.nativeObject.pointer;
		
		set_msScaleCmd_CCmdScaleAdjust(msScaleCmdParamValue);
	}
	
	public ScaleAffector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScaleAffector(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 初始化新粒子
	 * @param pParticle 指向初始化粒子的指针
	 */
	public void _initParticle(com.earthview.world.graphic.Particle pParticle)
	{
		super._initParticle_NoVirtual(pParticle);
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
	
	public static ScaleAffector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScaleAffector obj = null;
 		if(baseObj instanceof ScaleAffector)
		{
			obj = (ScaleAffector)baseObj;
		} else {
			obj = new ScaleAffector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScaleAffector");
			obj.increaseCast();
		}

		return obj;
	}
}
