package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ColourImageAffector extends com.earthview.world.graphic.ParticleAffector {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourImageAffector", new ColourImageAffectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::JCColourImageAffectorProxy", new ColourImageAffectorClassFactory());
	}

	public static class CmdImageAdjust extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust", new CmdImageAdjustClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourImageAffector::JCCmdImageAdjustProxy", new CmdImageAdjustClassFactory());
		}

		public CmdImageAdjust() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdImageAdjustProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.ColourImageAffector$CmdImageAdjust".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private String doGet_void(long pNativeObject, long target);
		///添加默认构造函数
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

		public CmdImageAdjust(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdImageAdjust(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdImageAdjust fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdImageAdjust obj = null;
 			if(baseObj instanceof CmdImageAdjust)
			{
				obj = (CmdImageAdjust)baseObj;
			} else {
				obj = new CmdImageAdjust(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdImageAdjust");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdImageAdjustClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdImageAdjust emptyInstance = new CmdImageAdjust(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public ColourImageAffector(com.earthview.world.graphic.ParticleSystem psys) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer psysPtr = new BasePointer(psys);
		list.add("psys", psysPtr.get());
		Create("JCColourImageAffectorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.plugin.particlefx.ColourImageAffector".equals(this.getClass().getName()))
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

	native private void setImageAdjust_EVString(long pNativeObject, String name);
	public void setImageAdjust(String name)
	{
		String nameParamValue = name;
		setImageAdjust_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private String getImageAdjust_void(long pNativeObject);
	public String getImageAdjust()
	{
		String returnValue = getImageAdjust_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void _loadImage_EVString_CImage(long pNativeObject, String imgName, long img);
	public void _loadImage(String imgName, com.earthview.world.graphic.Image img)
	{
		String imgNameParamValue = imgName;
		long imgParamValue = img.nativeObject.pointer;
		_loadImage_EVString_CImage(this.nativeObject.pointer, imgNameParamValue, imgParamValue);
	}
	native private static long get_msImageCmd_void();
	public static com.earthview.world.plugin.particlefx.ColourImageAffector.CmdImageAdjust get_msImageCmd()
	{
		long jniValue = get_msImageCmd_void();
		
		com.earthview.world.plugin.particlefx.ColourImageAffector.CmdImageAdjust __returnValue = new com.earthview.world.plugin.particlefx.ColourImageAffector.CmdImageAdjust(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdImageAdjust");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.ColourImageAffector.CmdImageAdjust)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdImageAdjust");
		}
		return __returnValue;
	}
	
	native private static void set_msImageCmd_CCmdImageAdjust (long value);
	public static void set_msImageCmd(com.earthview.world.plugin.particlefx.ColourImageAffector.CmdImageAdjust msImageCmd)
	{
		long msImageCmdParamValue = msImageCmd.nativeObject.pointer;
		
		set_msImageCmd_CCmdImageAdjust(msImageCmdParamValue);
	}
	
	public ColourImageAffector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ColourImageAffector(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static ColourImageAffector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ColourImageAffector obj = null;
 		if(baseObj instanceof ColourImageAffector)
		{
			obj = (ColourImageAffector)baseObj;
		} else {
			obj = new ColourImageAffector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CColourImageAffector");
			obj.increaseCast();
		}

		return obj;
	}
}
