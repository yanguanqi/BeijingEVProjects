package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DirectionRandomiserAffector extends com.earthview.world.graphic.ParticleAffector {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector", new DirectionRandomiserAffectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::JCDirectionRandomiserAffectorProxy", new DirectionRandomiserAffectorClassFactory());
	}

	public static class CmdRandomness extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness", new CmdRandomnessClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::JCCmdRandomnessProxy", new CmdRandomnessClassFactory());
		}

		public CmdRandomness() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdRandomnessProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.DirectionRandomiserAffector$CmdRandomness".equals(this.getClass().getName()))
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

		public CmdRandomness(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdRandomness(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdRandomness fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdRandomness obj = null;
 			if(baseObj instanceof CmdRandomness)
			{
				obj = (CmdRandomness)baseObj;
			} else {
				obj = new CmdRandomness(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdRandomness");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdRandomnessClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdRandomness emptyInstance = new CmdRandomness(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdScope extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope", new CmdScopeClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::JCmdScopeProxy", new CmdScopeClassFactory());
		}

		public CmdScope() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCmdScopeProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.DirectionRandomiserAffector$CmdScope".equals(this.getClass().getName()))
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

		public CmdScope(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdScope(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdScope fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdScope obj = null;
 			if(baseObj instanceof CmdScope)
			{
				obj = (CmdScope)baseObj;
			} else {
				obj = new CmdScope(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CmdScope");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdScopeClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdScope emptyInstance = new CmdScope(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdKeepVelocity extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity", new CmdKeepVelocityClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::JCCmdKeepVelocityProxy", new CmdKeepVelocityClassFactory());
		}

		public CmdKeepVelocity() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdKeepVelocityProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.DirectionRandomiserAffector$CmdKeepVelocity".equals(this.getClass().getName()))
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

		public CmdKeepVelocity(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdKeepVelocity(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdKeepVelocity fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdKeepVelocity obj = null;
 			if(baseObj instanceof CmdKeepVelocity)
			{
				obj = (CmdKeepVelocity)baseObj;
			} else {
				obj = new CmdKeepVelocity(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdKeepVelocity");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdKeepVelocityClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdKeepVelocity emptyInstance = new CmdKeepVelocity(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Default constructor
	public DirectionRandomiserAffector(com.earthview.world.graphic.ParticleSystem psys) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer psysPtr = new BasePointer(psys);
		list.add("psys", psysPtr.get());
		Create("JCDirectionRandomiserAffectorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.plugin.particlefx.DirectionRandomiserAffector".equals(this.getClass().getName()))
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

	native private void setRandomness_Real(long pNativeObject, double force);
	public void setRandomness(double force)
	{
		double forceParamValue = force;
		setRandomness_Real(this.nativeObject.pointer, forceParamValue);
	}
	native private void setScope_Real(long pNativeObject, double force);
	public void setScope(double force)
	{
		double forceParamValue = force;
		setScope_Real(this.nativeObject.pointer, forceParamValue);
	}
	native private void setKeepVelocity_bool(long pNativeObject, boolean keepVelocity);
	public void setKeepVelocity(boolean keepVelocity)
	{
		boolean keepVelocityParamValue = keepVelocity;
		setKeepVelocity_bool(this.nativeObject.pointer, keepVelocityParamValue);
	}
	native private double getRandomness_void(long pNativeObject);
	public double getRandomness()
	{
		double returnValue = getRandomness_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getScope_void(long pNativeObject);
	public double getScope()
	{
		double returnValue = getScope_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getKeepVelocity_void(long pNativeObject);
	public boolean getKeepVelocity()
	{
		boolean returnValue = getKeepVelocity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static long get_msRandomnessCmd_void();
	public static com.earthview.world.plugin.particlefx.DirectionRandomiserAffector.CmdRandomness get_msRandomnessCmd()
	{
		long jniValue = get_msRandomnessCmd_void();
		
		com.earthview.world.plugin.particlefx.DirectionRandomiserAffector.CmdRandomness __returnValue = new com.earthview.world.plugin.particlefx.DirectionRandomiserAffector.CmdRandomness(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdRandomness");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.DirectionRandomiserAffector.CmdRandomness)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdRandomness");
		}
		return __returnValue;
	}
	
	native private static void set_msRandomnessCmd_CCmdRandomness (long value);
	public static void set_msRandomnessCmd(com.earthview.world.plugin.particlefx.DirectionRandomiserAffector.CmdRandomness msRandomnessCmd)
	{
		long msRandomnessCmdParamValue = msRandomnessCmd.nativeObject.pointer;
		
		set_msRandomnessCmd_CCmdRandomness(msRandomnessCmdParamValue);
	}
	
	native private static long get_msScopeCmd_void();
	public static com.earthview.world.plugin.particlefx.DirectionRandomiserAffector.CmdScope get_msScopeCmd()
	{
		long jniValue = get_msScopeCmd_void();
		
		com.earthview.world.plugin.particlefx.DirectionRandomiserAffector.CmdScope __returnValue = new com.earthview.world.plugin.particlefx.DirectionRandomiserAffector.CmdScope(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CmdScope");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.DirectionRandomiserAffector.CmdScope)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CmdScope");
		}
		return __returnValue;
	}
	
	native private static void set_msScopeCmd_CmdScope (long value);
	public static void set_msScopeCmd(com.earthview.world.plugin.particlefx.DirectionRandomiserAffector.CmdScope msScopeCmd)
	{
		long msScopeCmdParamValue = msScopeCmd.nativeObject.pointer;
		
		set_msScopeCmd_CmdScope(msScopeCmdParamValue);
	}
	
	native private static long get_msKeepVelocityCmd_void();
	public static com.earthview.world.plugin.particlefx.DirectionRandomiserAffector.CmdKeepVelocity get_msKeepVelocityCmd()
	{
		long jniValue = get_msKeepVelocityCmd_void();
		
		com.earthview.world.plugin.particlefx.DirectionRandomiserAffector.CmdKeepVelocity __returnValue = new com.earthview.world.plugin.particlefx.DirectionRandomiserAffector.CmdKeepVelocity(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdKeepVelocity");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.DirectionRandomiserAffector.CmdKeepVelocity)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdKeepVelocity");
		}
		return __returnValue;
	}
	
	native private static void set_msKeepVelocityCmd_CCmdKeepVelocity (long value);
	public static void set_msKeepVelocityCmd(com.earthview.world.plugin.particlefx.DirectionRandomiserAffector.CmdKeepVelocity msKeepVelocityCmd)
	{
		long msKeepVelocityCmdParamValue = msKeepVelocityCmd.nativeObject.pointer;
		
		set_msKeepVelocityCmd_CCmdKeepVelocity(msKeepVelocityCmdParamValue);
	}
	
	public DirectionRandomiserAffector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DirectionRandomiserAffector(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static DirectionRandomiserAffector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DirectionRandomiserAffector obj = null;
 		if(baseObj instanceof DirectionRandomiserAffector)
		{
			obj = (DirectionRandomiserAffector)baseObj;
		} else {
			obj = new DirectionRandomiserAffector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDirectionRandomiserAffector");
			obj.increaseCast();
		}

		return obj;
	}
}
