package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RotationAffector extends com.earthview.world.graphic.ParticleAffector {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CRotationAffector", new RotationAffectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::JCRotationAffectorProxy", new RotationAffectorClassFactory());
	}

	//// Command object for particle emitter  - see EarthView::World::Core::CParamCommand
	public static class CmdRotationSpeedRangeStart extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart", new CmdRotationSpeedRangeStartClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CRotationAffector::JCCmdRotationSpeedRangeStartProxy", new CmdRotationSpeedRangeStartClassFactory());
		}

		public CmdRotationSpeedRangeStart() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdRotationSpeedRangeStartProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.RotationAffector$CmdRotationSpeedRangeStart".equals(this.getClass().getName()))
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

		public CmdRotationSpeedRangeStart(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdRotationSpeedRangeStart(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdRotationSpeedRangeStart fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdRotationSpeedRangeStart obj = null;
 			if(baseObj instanceof CmdRotationSpeedRangeStart)
			{
				obj = (CmdRotationSpeedRangeStart)baseObj;
			} else {
				obj = new CmdRotationSpeedRangeStart(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdRotationSpeedRangeStart");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdRotationSpeedRangeStartClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdRotationSpeedRangeStart emptyInstance = new CmdRotationSpeedRangeStart(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Command object for particle emitter  - see EarthView::World::Core::CParamCommand
	public static class CmdRotationSpeedRangeEnd extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd", new CmdRotationSpeedRangeEndClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CRotationAffector::JCCmdRotationSpeedRangeEndProxy", new CmdRotationSpeedRangeEndClassFactory());
		}

		public CmdRotationSpeedRangeEnd() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdRotationSpeedRangeEndProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.RotationAffector$CmdRotationSpeedRangeEnd".equals(this.getClass().getName()))
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

		public CmdRotationSpeedRangeEnd(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdRotationSpeedRangeEnd(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdRotationSpeedRangeEnd fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdRotationSpeedRangeEnd obj = null;
 			if(baseObj instanceof CmdRotationSpeedRangeEnd)
			{
				obj = (CmdRotationSpeedRangeEnd)baseObj;
			} else {
				obj = new CmdRotationSpeedRangeEnd(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdRotationSpeedRangeEnd");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdRotationSpeedRangeEndClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdRotationSpeedRangeEnd emptyInstance = new CmdRotationSpeedRangeEnd(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Command object for particle emitter  - see EarthView::World::Core::CParamCommand
	public static class CmdRotationRangeStart extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart", new CmdRotationRangeStartClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CRotationAffector::JCCmdRotationRangeStartProxy", new CmdRotationRangeStartClassFactory());
		}

		public CmdRotationRangeStart() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdRotationRangeStartProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.RotationAffector$CmdRotationRangeStart".equals(this.getClass().getName()))
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

		public CmdRotationRangeStart(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdRotationRangeStart(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdRotationRangeStart fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdRotationRangeStart obj = null;
 			if(baseObj instanceof CmdRotationRangeStart)
			{
				obj = (CmdRotationRangeStart)baseObj;
			} else {
				obj = new CmdRotationRangeStart(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdRotationRangeStart");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdRotationRangeStartClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdRotationRangeStart emptyInstance = new CmdRotationRangeStart(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Command object for particle emitter  - see EarthView::World::Core::CParamCommand
	public static class CmdRotationRangeEnd extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd", new CmdRotationRangeEndClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CRotationAffector::JCCmdRotationRangeEndProxy", new CmdRotationRangeEndClassFactory());
		}

		public CmdRotationRangeEnd() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdRotationRangeEndProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.RotationAffector$CmdRotationRangeEnd".equals(this.getClass().getName()))
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

		public CmdRotationRangeEnd(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdRotationRangeEnd(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdRotationRangeEnd fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdRotationRangeEnd obj = null;
 			if(baseObj instanceof CmdRotationRangeEnd)
			{
				obj = (CmdRotationRangeEnd)baseObj;
			} else {
				obj = new CmdRotationRangeEnd(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdRotationRangeEnd");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdRotationRangeEndClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdRotationRangeEnd emptyInstance = new CmdRotationRangeEnd(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public RotationAffector(com.earthview.world.graphic.ParticleSystem psys) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer psysPtr = new BasePointer(psys);
		list.add("psys", psysPtr.get());
		Create("JCRotationAffectorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.plugin.particlefx.RotationAffector".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void _initParticle_CParticle(long pNativeObject, long pParticle);
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

	native private void setRotationSpeedRangeStart_CRadian(long pNativeObject, long angle);
	public void setRotationSpeedRangeStart(com.earthview.world.spatial.math.Radian angle)
	{
		long angleParamValue = angle.nativeObject.pointer;
		setRotationSpeedRangeStart_CRadian(this.nativeObject.pointer, angleParamValue);
	}
	native private void setRotationSpeedRangeEnd_CRadian(long pNativeObject, long angle);
	public void setRotationSpeedRangeEnd(com.earthview.world.spatial.math.Radian angle)
	{
		long angleParamValue = angle.nativeObject.pointer;
		setRotationSpeedRangeEnd_CRadian(this.nativeObject.pointer, angleParamValue);
	}
	native private long getRotationSpeedRangeStart_void(long pNativeObject);
	public com.earthview.world.spatial.math.Radian getRotationSpeedRangeStart()
	{
		long returnValue = getRotationSpeedRangeStart_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate, "CRadian");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	native private long getRotationSpeedRangeEnd_void(long pNativeObject);
	public com.earthview.world.spatial.math.Radian getRotationSpeedRangeEnd()
	{
		long returnValue = getRotationSpeedRangeEnd_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate, "CRadian");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	native private void setRotationRangeStart_CRadian(long pNativeObject, long angle);
	public void setRotationRangeStart(com.earthview.world.spatial.math.Radian angle)
	{
		long angleParamValue = angle.nativeObject.pointer;
		setRotationRangeStart_CRadian(this.nativeObject.pointer, angleParamValue);
	}
	native private void setRotationRangeEnd_CRadian(long pNativeObject, long angle);
	public void setRotationRangeEnd(com.earthview.world.spatial.math.Radian angle)
	{
		long angleParamValue = angle.nativeObject.pointer;
		setRotationRangeEnd_CRadian(this.nativeObject.pointer, angleParamValue);
	}
	native private long getRotationRangeStart_void(long pNativeObject);
	public com.earthview.world.spatial.math.Radian getRotationRangeStart()
	{
		long returnValue = getRotationRangeStart_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate, "CRadian");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	native private long getRotationRangeEnd_void(long pNativeObject);
	public com.earthview.world.spatial.math.Radian getRotationRangeEnd()
	{
		long returnValue = getRotationRangeEnd_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate, "CRadian");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	native private static long get_msRotationSpeedRangeStartCmd_void();
	public static com.earthview.world.plugin.particlefx.RotationAffector.CmdRotationSpeedRangeStart get_msRotationSpeedRangeStartCmd()
	{
		long jniValue = get_msRotationSpeedRangeStartCmd_void();
		
		com.earthview.world.plugin.particlefx.RotationAffector.CmdRotationSpeedRangeStart __returnValue = new com.earthview.world.plugin.particlefx.RotationAffector.CmdRotationSpeedRangeStart(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdRotationSpeedRangeStart");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.RotationAffector.CmdRotationSpeedRangeStart)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdRotationSpeedRangeStart");
		}
		return __returnValue;
	}
	
	native private static void set_msRotationSpeedRangeStartCmd_CCmdRotationSpeedRangeStart (long value);
	public static void set_msRotationSpeedRangeStartCmd(com.earthview.world.plugin.particlefx.RotationAffector.CmdRotationSpeedRangeStart msRotationSpeedRangeStartCmd)
	{
		long msRotationSpeedRangeStartCmdParamValue = msRotationSpeedRangeStartCmd.nativeObject.pointer;
		
		set_msRotationSpeedRangeStartCmd_CCmdRotationSpeedRangeStart(msRotationSpeedRangeStartCmdParamValue);
	}
	
	native private static long get_msRotationSpeedRangeEndCmd_void();
	public static com.earthview.world.plugin.particlefx.RotationAffector.CmdRotationSpeedRangeEnd get_msRotationSpeedRangeEndCmd()
	{
		long jniValue = get_msRotationSpeedRangeEndCmd_void();
		
		com.earthview.world.plugin.particlefx.RotationAffector.CmdRotationSpeedRangeEnd __returnValue = new com.earthview.world.plugin.particlefx.RotationAffector.CmdRotationSpeedRangeEnd(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdRotationSpeedRangeEnd");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.RotationAffector.CmdRotationSpeedRangeEnd)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdRotationSpeedRangeEnd");
		}
		return __returnValue;
	}
	
	native private static void set_msRotationSpeedRangeEndCmd_CCmdRotationSpeedRangeEnd (long value);
	public static void set_msRotationSpeedRangeEndCmd(com.earthview.world.plugin.particlefx.RotationAffector.CmdRotationSpeedRangeEnd msRotationSpeedRangeEndCmd)
	{
		long msRotationSpeedRangeEndCmdParamValue = msRotationSpeedRangeEndCmd.nativeObject.pointer;
		
		set_msRotationSpeedRangeEndCmd_CCmdRotationSpeedRangeEnd(msRotationSpeedRangeEndCmdParamValue);
	}
	
	native private static long get_msRotationRangeStartCmd_void();
	public static com.earthview.world.plugin.particlefx.RotationAffector.CmdRotationRangeStart get_msRotationRangeStartCmd()
	{
		long jniValue = get_msRotationRangeStartCmd_void();
		
		com.earthview.world.plugin.particlefx.RotationAffector.CmdRotationRangeStart __returnValue = new com.earthview.world.plugin.particlefx.RotationAffector.CmdRotationRangeStart(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdRotationRangeStart");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.RotationAffector.CmdRotationRangeStart)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdRotationRangeStart");
		}
		return __returnValue;
	}
	
	native private static void set_msRotationRangeStartCmd_CCmdRotationRangeStart (long value);
	public static void set_msRotationRangeStartCmd(com.earthview.world.plugin.particlefx.RotationAffector.CmdRotationRangeStart msRotationRangeStartCmd)
	{
		long msRotationRangeStartCmdParamValue = msRotationRangeStartCmd.nativeObject.pointer;
		
		set_msRotationRangeStartCmd_CCmdRotationRangeStart(msRotationRangeStartCmdParamValue);
	}
	
	native private static long get_msRotationRangeEndCmd_void();
	public static com.earthview.world.plugin.particlefx.RotationAffector.CmdRotationRangeEnd get_msRotationRangeEndCmd()
	{
		long jniValue = get_msRotationRangeEndCmd_void();
		
		com.earthview.world.plugin.particlefx.RotationAffector.CmdRotationRangeEnd __returnValue = new com.earthview.world.plugin.particlefx.RotationAffector.CmdRotationRangeEnd(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdRotationRangeEnd");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.RotationAffector.CmdRotationRangeEnd)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdRotationRangeEnd");
		}
		return __returnValue;
	}
	
	native private static void set_msRotationRangeEndCmd_CCmdRotationRangeEnd (long value);
	public static void set_msRotationRangeEndCmd(com.earthview.world.plugin.particlefx.RotationAffector.CmdRotationRangeEnd msRotationRangeEndCmd)
	{
		long msRotationRangeEndCmdParamValue = msRotationRangeEndCmd.nativeObject.pointer;
		
		set_msRotationRangeEndCmd_CCmdRotationRangeEnd(msRotationRangeEndCmdParamValue);
	}
	
	public RotationAffector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RotationAffector(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static RotationAffector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RotationAffector obj = null;
 		if(baseObj instanceof RotationAffector)
		{
			obj = (RotationAffector)baseObj;
		} else {
			obj = new RotationAffector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRotationAffector");
			obj.increaseCast();
		}

		return obj;
	}
}
