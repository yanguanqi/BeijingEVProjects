package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DeflectorPlaneAffector extends com.earthview.world.graphic.ParticleAffector {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector", new DeflectorPlaneAffectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::JCDeflectorPlaneAffectorProxy", new DeflectorPlaneAffectorClassFactory());
	}

	public static class CmdPlanePoint extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint", new CmdPlanePointClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::JCCmdPlanePointProxy", new CmdPlanePointClassFactory());
		}

		public CmdPlanePoint() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdPlanePointProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.DeflectorPlaneAffector$CmdPlanePoint".equals(this.getClass().getName()))
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

		public CmdPlanePoint(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdPlanePoint(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdPlanePoint fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdPlanePoint obj = null;
 			if(baseObj instanceof CmdPlanePoint)
			{
				obj = (CmdPlanePoint)baseObj;
			} else {
				obj = new CmdPlanePoint(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdPlanePoint");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdPlanePointClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdPlanePoint emptyInstance = new CmdPlanePoint(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdPlaneNormal extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal", new CmdPlaneNormalClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::JCCmdPlaneNormalProxy", new CmdPlaneNormalClassFactory());
		}

		public CmdPlaneNormal() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdPlaneNormalProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.DeflectorPlaneAffector$CmdPlaneNormal".equals(this.getClass().getName()))
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

		public CmdPlaneNormal(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdPlaneNormal(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdPlaneNormal fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdPlaneNormal obj = null;
 			if(baseObj instanceof CmdPlaneNormal)
			{
				obj = (CmdPlaneNormal)baseObj;
			} else {
				obj = new CmdPlaneNormal(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdPlaneNormal");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdPlaneNormalClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdPlaneNormal emptyInstance = new CmdPlaneNormal(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdBounce extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce", new CmdBounceClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::JCCmdBounceProxy", new CmdBounceClassFactory());
		}

		public CmdBounce() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdBounceProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.DeflectorPlaneAffector$CmdBounce".equals(this.getClass().getName()))
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

		public CmdBounce(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdBounce(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdBounce fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdBounce obj = null;
 			if(baseObj instanceof CmdBounce)
			{
				obj = (CmdBounce)baseObj;
			} else {
				obj = new CmdBounce(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdBounce");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdBounceClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdBounce emptyInstance = new CmdBounce(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Default constructor
	public DeflectorPlaneAffector(com.earthview.world.graphic.ParticleSystem psys) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer psysPtr = new BasePointer(psys);
		list.add("psys", psysPtr.get());
		Create("JCDeflectorPlaneAffectorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.plugin.particlefx.DeflectorPlaneAffector".equals(this.getClass().getName()))
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

	native private void setPlanePoint_CVector3(long pNativeObject, long pos);
	public void setPlanePoint(com.earthview.world.spatial.math.Vector3 pos)
	{
		long posParamValue = pos.nativeObject.pointer;
		setPlanePoint_CVector3(this.nativeObject.pointer, posParamValue);
	}
	native private long getPlanePoint_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getPlanePoint()
	{
		long returnValue = getPlanePoint_void(this.nativeObject.pointer);
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
	native private void setPlaneNormal_CVector3(long pNativeObject, long normal);
	public void setPlaneNormal(com.earthview.world.spatial.math.Vector3 normal)
	{
		long normalParamValue = normal.nativeObject.pointer;
		setPlaneNormal_CVector3(this.nativeObject.pointer, normalParamValue);
	}
	native private long getPlaneNormal_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getPlaneNormal()
	{
		long returnValue = getPlaneNormal_void(this.nativeObject.pointer);
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
	native private void setBounce_Real(long pNativeObject, double bounce);
	public void setBounce(double bounce)
	{
		double bounceParamValue = bounce;
		setBounce_Real(this.nativeObject.pointer, bounceParamValue);
	}
	native private double getBounce_void(long pNativeObject);
	public double getBounce()
	{
		double returnValue = getBounce_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static long get_msPlanePointCmd_void();
	public static com.earthview.world.plugin.particlefx.DeflectorPlaneAffector.CmdPlanePoint get_msPlanePointCmd()
	{
		long jniValue = get_msPlanePointCmd_void();
		
		com.earthview.world.plugin.particlefx.DeflectorPlaneAffector.CmdPlanePoint __returnValue = new com.earthview.world.plugin.particlefx.DeflectorPlaneAffector.CmdPlanePoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdPlanePoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.DeflectorPlaneAffector.CmdPlanePoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdPlanePoint");
		}
		return __returnValue;
	}
	
	native private static void set_msPlanePointCmd_CCmdPlanePoint (long value);
	public static void set_msPlanePointCmd(com.earthview.world.plugin.particlefx.DeflectorPlaneAffector.CmdPlanePoint msPlanePointCmd)
	{
		long msPlanePointCmdParamValue = msPlanePointCmd.nativeObject.pointer;
		
		set_msPlanePointCmd_CCmdPlanePoint(msPlanePointCmdParamValue);
	}
	
	native private static long get_msPlaneNormalCmd_void();
	public static com.earthview.world.plugin.particlefx.DeflectorPlaneAffector.CmdPlaneNormal get_msPlaneNormalCmd()
	{
		long jniValue = get_msPlaneNormalCmd_void();
		
		com.earthview.world.plugin.particlefx.DeflectorPlaneAffector.CmdPlaneNormal __returnValue = new com.earthview.world.plugin.particlefx.DeflectorPlaneAffector.CmdPlaneNormal(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdPlaneNormal");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.DeflectorPlaneAffector.CmdPlaneNormal)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdPlaneNormal");
		}
		return __returnValue;
	}
	
	native private static void set_msPlaneNormalCmd_CCmdPlaneNormal (long value);
	public static void set_msPlaneNormalCmd(com.earthview.world.plugin.particlefx.DeflectorPlaneAffector.CmdPlaneNormal msPlaneNormalCmd)
	{
		long msPlaneNormalCmdParamValue = msPlaneNormalCmd.nativeObject.pointer;
		
		set_msPlaneNormalCmd_CCmdPlaneNormal(msPlaneNormalCmdParamValue);
	}
	
	native private static long get_msBounceCmd_void();
	public static com.earthview.world.plugin.particlefx.DeflectorPlaneAffector.CmdBounce get_msBounceCmd()
	{
		long jniValue = get_msBounceCmd_void();
		
		com.earthview.world.plugin.particlefx.DeflectorPlaneAffector.CmdBounce __returnValue = new com.earthview.world.plugin.particlefx.DeflectorPlaneAffector.CmdBounce(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdBounce");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.DeflectorPlaneAffector.CmdBounce)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdBounce");
		}
		return __returnValue;
	}
	
	native private static void set_msBounceCmd_CCmdBounce (long value);
	public static void set_msBounceCmd(com.earthview.world.plugin.particlefx.DeflectorPlaneAffector.CmdBounce msBounceCmd)
	{
		long msBounceCmdParamValue = msBounceCmd.nativeObject.pointer;
		
		set_msBounceCmd_CCmdBounce(msBounceCmdParamValue);
	}
	
	public DeflectorPlaneAffector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DeflectorPlaneAffector(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static DeflectorPlaneAffector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DeflectorPlaneAffector obj = null;
 		if(baseObj instanceof DeflectorPlaneAffector)
		{
			obj = (DeflectorPlaneAffector)baseObj;
		} else {
			obj = new DeflectorPlaneAffector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDeflectorPlaneAffector");
			obj.increaseCast();
		}

		return obj;
	}
}
