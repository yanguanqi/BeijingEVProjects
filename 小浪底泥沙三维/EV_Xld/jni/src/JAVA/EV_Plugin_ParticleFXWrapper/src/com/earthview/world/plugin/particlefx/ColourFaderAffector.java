package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ColourFaderAffector extends com.earthview.world.graphic.ParticleAffector {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector", new ColourFaderAffectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::JCColourFaderAffectorProxy", new ColourFaderAffectorClassFactory());
	}

	public static class CmdRedAdjust extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust", new CmdRedAdjustClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector::JCCmdRedAdjustProxy", new CmdRedAdjustClassFactory());
		}

		public CmdRedAdjust() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdRedAdjustProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.ColourFaderAffector$CmdRedAdjust".equals(this.getClass().getName()))
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

		public CmdRedAdjust(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdRedAdjust(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdRedAdjust fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdRedAdjust obj = null;
 			if(baseObj instanceof CmdRedAdjust)
			{
				obj = (CmdRedAdjust)baseObj;
			} else {
				obj = new CmdRedAdjust(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdRedAdjust");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdRedAdjustClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdRedAdjust emptyInstance = new CmdRedAdjust(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdGreenAdjust extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust", new CmdGreenAdjustClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector::JCCmdGreenAdjustProxy", new CmdGreenAdjustClassFactory());
		}

		public CmdGreenAdjust() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdGreenAdjustProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.ColourFaderAffector$CmdGreenAdjust".equals(this.getClass().getName()))
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

		public CmdGreenAdjust(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdGreenAdjust(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdGreenAdjust fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdGreenAdjust obj = null;
 			if(baseObj instanceof CmdGreenAdjust)
			{
				obj = (CmdGreenAdjust)baseObj;
			} else {
				obj = new CmdGreenAdjust(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdGreenAdjust");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdGreenAdjustClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdGreenAdjust emptyInstance = new CmdGreenAdjust(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdBlueAdjust extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust", new CmdBlueAdjustClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector::JCCmdBlueAdjustProxy", new CmdBlueAdjustClassFactory());
		}

		public CmdBlueAdjust() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdBlueAdjustProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.ColourFaderAffector$CmdBlueAdjust".equals(this.getClass().getName()))
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

		public CmdBlueAdjust(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdBlueAdjust(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdBlueAdjust fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdBlueAdjust obj = null;
 			if(baseObj instanceof CmdBlueAdjust)
			{
				obj = (CmdBlueAdjust)baseObj;
			} else {
				obj = new CmdBlueAdjust(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdBlueAdjust");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdBlueAdjustClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdBlueAdjust emptyInstance = new CmdBlueAdjust(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdAlphaAdjust extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust", new CmdAlphaAdjustClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector::JCCmdAlphaAdjustProxy", new CmdAlphaAdjustClassFactory());
		}

		public CmdAlphaAdjust() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdAlphaAdjustProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.ColourFaderAffector$CmdAlphaAdjust".equals(this.getClass().getName()))
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

		public CmdAlphaAdjust(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdAlphaAdjust(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdAlphaAdjust fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdAlphaAdjust obj = null;
 			if(baseObj instanceof CmdAlphaAdjust)
			{
				obj = (CmdAlphaAdjust)baseObj;
			} else {
				obj = new CmdAlphaAdjust(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdAlphaAdjust");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdAlphaAdjustClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdAlphaAdjust emptyInstance = new CmdAlphaAdjust(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public ColourFaderAffector(com.earthview.world.graphic.ParticleSystem psys) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer psysPtr = new BasePointer(psys);
		list.add("psys", psysPtr.get());
		Create("JCColourFaderAffectorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.plugin.particlefx.ColourFaderAffector".equals(this.getClass().getName()))
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

	native private void setAdjust_float_float_float_float(long pNativeObject, float red, float green, float blue, float alpha);
	public void setAdjust(float red, float green, float blue, float alpha)
	{
		float redParamValue = red;
		float greenParamValue = green;
		float blueParamValue = blue;
		float alphaParamValue = alpha;
		setAdjust_float_float_float_float(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}
	native private void setAdjust_float_float_float(long pNativeObject, float red, float green, float blue);
	public void setAdjust(float red, float green, float blue)
	{
		float redParamValue = red;
		float greenParamValue = green;
		float blueParamValue = blue;
		setAdjust_float_float_float(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue);
	}
	native private void setRedAdjust_float(long pNativeObject, float red);
	public void setRedAdjust(float red)
	{
		float redParamValue = red;
		setRedAdjust_float(this.nativeObject.pointer, redParamValue);
	}
	native private float getRedAdjust_void(long pNativeObject);
	public float getRedAdjust()
	{
		float returnValue = getRedAdjust_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setGreenAdjust_float(long pNativeObject, float green);
	public void setGreenAdjust(float green)
	{
		float greenParamValue = green;
		setGreenAdjust_float(this.nativeObject.pointer, greenParamValue);
	}
	native private float getGreenAdjust_void(long pNativeObject);
	public float getGreenAdjust()
	{
		float returnValue = getGreenAdjust_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBlueAdjust_float(long pNativeObject, float blue);
	public void setBlueAdjust(float blue)
	{
		float blueParamValue = blue;
		setBlueAdjust_float(this.nativeObject.pointer, blueParamValue);
	}
	native private float getBlueAdjust_void(long pNativeObject);
	public float getBlueAdjust()
	{
		float returnValue = getBlueAdjust_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAlphaAdjust_float(long pNativeObject, float alpha);
	public void setAlphaAdjust(float alpha)
	{
		float alphaParamValue = alpha;
		setAlphaAdjust_float(this.nativeObject.pointer, alphaParamValue);
	}
	native private float getAlphaAdjust_void(long pNativeObject);
	public float getAlphaAdjust()
	{
		float returnValue = getAlphaAdjust_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static long get_msRedCmd_void();
	public static com.earthview.world.plugin.particlefx.ColourFaderAffector.CmdRedAdjust get_msRedCmd()
	{
		long jniValue = get_msRedCmd_void();
		
		com.earthview.world.plugin.particlefx.ColourFaderAffector.CmdRedAdjust __returnValue = new com.earthview.world.plugin.particlefx.ColourFaderAffector.CmdRedAdjust(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdRedAdjust");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.ColourFaderAffector.CmdRedAdjust)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdRedAdjust");
		}
		return __returnValue;
	}
	
	native private static void set_msRedCmd_CCmdRedAdjust (long value);
	public static void set_msRedCmd(com.earthview.world.plugin.particlefx.ColourFaderAffector.CmdRedAdjust msRedCmd)
	{
		long msRedCmdParamValue = msRedCmd.nativeObject.pointer;
		
		set_msRedCmd_CCmdRedAdjust(msRedCmdParamValue);
	}
	
	native private static long get_msGreenCmd_void();
	public static com.earthview.world.plugin.particlefx.ColourFaderAffector.CmdGreenAdjust get_msGreenCmd()
	{
		long jniValue = get_msGreenCmd_void();
		
		com.earthview.world.plugin.particlefx.ColourFaderAffector.CmdGreenAdjust __returnValue = new com.earthview.world.plugin.particlefx.ColourFaderAffector.CmdGreenAdjust(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdGreenAdjust");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.ColourFaderAffector.CmdGreenAdjust)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdGreenAdjust");
		}
		return __returnValue;
	}
	
	native private static void set_msGreenCmd_CCmdGreenAdjust (long value);
	public static void set_msGreenCmd(com.earthview.world.plugin.particlefx.ColourFaderAffector.CmdGreenAdjust msGreenCmd)
	{
		long msGreenCmdParamValue = msGreenCmd.nativeObject.pointer;
		
		set_msGreenCmd_CCmdGreenAdjust(msGreenCmdParamValue);
	}
	
	native private static long get_msBlueCmd_void();
	public static com.earthview.world.plugin.particlefx.ColourFaderAffector.CmdBlueAdjust get_msBlueCmd()
	{
		long jniValue = get_msBlueCmd_void();
		
		com.earthview.world.plugin.particlefx.ColourFaderAffector.CmdBlueAdjust __returnValue = new com.earthview.world.plugin.particlefx.ColourFaderAffector.CmdBlueAdjust(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdBlueAdjust");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.ColourFaderAffector.CmdBlueAdjust)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdBlueAdjust");
		}
		return __returnValue;
	}
	
	native private static void set_msBlueCmd_CCmdBlueAdjust (long value);
	public static void set_msBlueCmd(com.earthview.world.plugin.particlefx.ColourFaderAffector.CmdBlueAdjust msBlueCmd)
	{
		long msBlueCmdParamValue = msBlueCmd.nativeObject.pointer;
		
		set_msBlueCmd_CCmdBlueAdjust(msBlueCmdParamValue);
	}
	
	native private static long get_msAlphaCmd_void();
	public static com.earthview.world.plugin.particlefx.ColourFaderAffector.CmdAlphaAdjust get_msAlphaCmd()
	{
		long jniValue = get_msAlphaCmd_void();
		
		com.earthview.world.plugin.particlefx.ColourFaderAffector.CmdAlphaAdjust __returnValue = new com.earthview.world.plugin.particlefx.ColourFaderAffector.CmdAlphaAdjust(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdAlphaAdjust");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.ColourFaderAffector.CmdAlphaAdjust)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdAlphaAdjust");
		}
		return __returnValue;
	}
	
	native private static void set_msAlphaCmd_CCmdAlphaAdjust (long value);
	public static void set_msAlphaCmd(com.earthview.world.plugin.particlefx.ColourFaderAffector.CmdAlphaAdjust msAlphaCmd)
	{
		long msAlphaCmdParamValue = msAlphaCmd.nativeObject.pointer;
		
		set_msAlphaCmd_CCmdAlphaAdjust(msAlphaCmdParamValue);
	}
	
	public ColourFaderAffector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ColourFaderAffector(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static ColourFaderAffector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ColourFaderAffector obj = null;
 		if(baseObj instanceof ColourFaderAffector)
		{
			obj = (ColourFaderAffector)baseObj;
		} else {
			obj = new ColourFaderAffector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CColourFaderAffector");
			obj.increaseCast();
		}

		return obj;
	}
}
