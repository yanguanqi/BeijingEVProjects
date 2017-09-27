package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LinearForceAffector extends com.earthview.world.graphic.ParticleAffector {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CLinearForceAffector", new LinearForceAffectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::JCLinearForceAffectorProxy", new LinearForceAffectorClassFactory());
	}

	public static class CmdForceVector extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector", new CmdForceVectorClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CLinearForceAffector::JCCmdForceVectorProxy", new CmdForceVectorClassFactory());
		}

		public CmdForceVector() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdForceVectorProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.LinearForceAffector$CmdForceVector".equals(this.getClass().getName()))
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

		public CmdForceVector(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdForceVector(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdForceVector fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdForceVector obj = null;
 			if(baseObj instanceof CmdForceVector)
			{
				obj = (CmdForceVector)baseObj;
			} else {
				obj = new CmdForceVector(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdForceVector");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdForceVectorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdForceVector emptyInstance = new CmdForceVector(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdForceApp extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp", new CmdForceAppClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CLinearForceAffector::JCCmdForceAppProxy", new CmdForceAppClassFactory());
		}

		public CmdForceApp() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdForceAppProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.LinearForceAffector$CmdForceApp".equals(this.getClass().getName()))
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

		public CmdForceApp(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdForceApp(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdForceApp fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdForceApp obj = null;
 			if(baseObj instanceof CmdForceApp)
			{
				obj = (CmdForceApp)baseObj;
			} else {
				obj = new CmdForceApp(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdForceApp");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdForceAppClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdForceApp emptyInstance = new CmdForceApp(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Choice of how to apply the force vector to particles
	public enum ForceApplication implements INativeEnum<ForceApplication> {
		FA_AVERAGE(ForceApplicationHelper.ENUM_VALUES[0]),
		FA_ADD(ForceApplicationHelper.ENUM_VALUES[1]);
		private int value;
		ForceApplication(int i) {
			this.value = i;
		}
		public ForceApplication getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final ForceApplication toEnum(int retval) {
			if(retval == FA_AVERAGE.value){
				return FA_AVERAGE;
			}
			else if(retval == FA_ADD.value){
				return FA_ADD;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class ForceApplicationHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	//// Default constructor
	public LinearForceAffector(com.earthview.world.graphic.ParticleSystem psys) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer psysPtr = new BasePointer(psys);
		list.add("psys", psysPtr.get());
		Create("JCLinearForceAffectorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.plugin.particlefx.LinearForceAffector".equals(this.getClass().getName()))
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

	native private void setForceVector_CVector3(long pNativeObject, long force);
	public void setForceVector(com.earthview.world.spatial.math.Vector3 force)
	{
		long forceParamValue = force.nativeObject.pointer;
		setForceVector_CVector3(this.nativeObject.pointer, forceParamValue);
	}
	native private long getForceVector_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getForceVector()
	{
		long returnValue = getForceVector_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setForceApplication_ForceApplication(long pNativeObject, int fa);
	public void setForceApplication(com.earthview.world.plugin.particlefx.LinearForceAffector.ForceApplication fa)
	{
		int faParamValue = fa.getValue();
		setForceApplication_ForceApplication(this.nativeObject.pointer, faParamValue);
	}
	native private int getForceApplication_void(long pNativeObject);
	public com.earthview.world.plugin.particlefx.LinearForceAffector.ForceApplication getForceApplication()
	{
		int returnValue = getForceApplication_void(this.nativeObject.pointer);
		return com.earthview.world.plugin.particlefx.LinearForceAffector.ForceApplication.toEnum(returnValue);
	}
	native private static long get_msForceVectorCmd_void();
	public static com.earthview.world.plugin.particlefx.LinearForceAffector.CmdForceVector get_msForceVectorCmd()
	{
		long jniValue = get_msForceVectorCmd_void();
		
		com.earthview.world.plugin.particlefx.LinearForceAffector.CmdForceVector __returnValue = new com.earthview.world.plugin.particlefx.LinearForceAffector.CmdForceVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdForceVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.LinearForceAffector.CmdForceVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdForceVector");
		}
		return __returnValue;
	}
	
	native private static void set_msForceVectorCmd_CCmdForceVector (long value);
	public static void set_msForceVectorCmd(com.earthview.world.plugin.particlefx.LinearForceAffector.CmdForceVector msForceVectorCmd)
	{
		long msForceVectorCmdParamValue = msForceVectorCmd.nativeObject.pointer;
		
		set_msForceVectorCmd_CCmdForceVector(msForceVectorCmdParamValue);
	}
	
	native private static long get_msForceAppCmd_void();
	public static com.earthview.world.plugin.particlefx.LinearForceAffector.CmdForceApp get_msForceAppCmd()
	{
		long jniValue = get_msForceAppCmd_void();
		
		com.earthview.world.plugin.particlefx.LinearForceAffector.CmdForceApp __returnValue = new com.earthview.world.plugin.particlefx.LinearForceAffector.CmdForceApp(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdForceApp");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.LinearForceAffector.CmdForceApp)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdForceApp");
		}
		return __returnValue;
	}
	
	native private static void set_msForceAppCmd_CCmdForceApp (long value);
	public static void set_msForceAppCmd(com.earthview.world.plugin.particlefx.LinearForceAffector.CmdForceApp msForceAppCmd)
	{
		long msForceAppCmdParamValue = msForceAppCmd.nativeObject.pointer;
		
		set_msForceAppCmd_CCmdForceApp(msForceAppCmdParamValue);
	}
	
	public LinearForceAffector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LinearForceAffector(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static LinearForceAffector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LinearForceAffector obj = null;
 		if(baseObj instanceof LinearForceAffector)
		{
			obj = (LinearForceAffector)baseObj;
		} else {
			obj = new LinearForceAffector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLinearForceAffector");
			obj.increaseCast();
		}

		return obj;
	}
}
