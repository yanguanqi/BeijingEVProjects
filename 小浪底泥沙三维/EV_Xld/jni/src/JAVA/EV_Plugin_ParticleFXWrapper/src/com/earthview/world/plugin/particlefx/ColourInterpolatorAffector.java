package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ColourInterpolatorAffector extends com.earthview.world.graphic.ParticleAffector {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector", new ColourInterpolatorAffectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::JCColourInterpolatorAffectorProxy", new ColourInterpolatorAffectorClassFactory());
	}

	/// this is something of a hack..
	/// needs to be replaced with something more..
	/// ..elegant
	public enum ENUM_MAX_STAGES implements INativeEnum<ENUM_MAX_STAGES> {
		MAX_STAGES(ENUM_MAX_STAGESHelper.ENUM_VALUES[0]);
		private int value;
		ENUM_MAX_STAGES(int i) {
			this.value = i;
		}
		public ENUM_MAX_STAGES getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final ENUM_MAX_STAGES toEnum(int retval) {
			if(retval == MAX_STAGES.value){
				return MAX_STAGES;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class ENUM_MAX_STAGESHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public static class CmdColourAdjust extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjust", new CmdColourAdjustClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::JCCmdColourAdjustProxy", new CmdColourAdjustClassFactory());
		}

		native private long get_mIndex_void(long pNativeObject);
		public long get_mIndex()
		{
			long jniValue = get_mIndex_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_mIndex_size_t (long pNativeObject, long value);
		public void set_mIndex(long mIndex)
		{
			long mIndexParamValue = mIndex;
			
			set_mIndex_size_t(this.nativeObject.pointer, mIndexParamValue);
		}
		
		public CmdColourAdjust() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdColourAdjustProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.ColourInterpolatorAffector$CmdColourAdjust".equals(this.getClass().getName()))
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

		public CmdColourAdjust(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdColourAdjust(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdColourAdjust fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdColourAdjust obj = null;
 			if(baseObj instanceof CmdColourAdjust)
			{
				obj = (CmdColourAdjust)baseObj;
			} else {
				obj = new CmdColourAdjust(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdColourAdjust");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdColourAdjustClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdColourAdjust emptyInstance = new CmdColourAdjust(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdTimeAdjust extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjust", new CmdTimeAdjustClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::JCCmdTimeAdjustProxy", new CmdTimeAdjustClassFactory());
		}

		native private long get_mIndex_void(long pNativeObject);
		public long get_mIndex()
		{
			long jniValue = get_mIndex_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_mIndex_size_t (long pNativeObject, long value);
		public void set_mIndex(long mIndex)
		{
			long mIndexParamValue = mIndex;
			
			set_mIndex_size_t(this.nativeObject.pointer, mIndexParamValue);
		}
		
		public CmdTimeAdjust() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdTimeAdjustProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.ColourInterpolatorAffector$CmdTimeAdjust".equals(this.getClass().getName()))
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

		public CmdTimeAdjust(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdTimeAdjust(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdTimeAdjust fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdTimeAdjust obj = null;
 			if(baseObj instanceof CmdTimeAdjust)
			{
				obj = (CmdTimeAdjust)baseObj;
			} else {
				obj = new CmdTimeAdjust(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdTimeAdjust");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdTimeAdjustClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdTimeAdjust emptyInstance = new CmdTimeAdjust(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public ColourInterpolatorAffector(com.earthview.world.graphic.ParticleSystem psys) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer psysPtr = new BasePointer(psys);
		list.add("psys", psysPtr.get());
		Create("JCColourInterpolatorAffectorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.plugin.particlefx.ColourInterpolatorAffector".equals(this.getClass().getName()))
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

	native private void setColourAdjust_size_t_CColourValue(long pNativeObject, long index, long colour);
	public void setColourAdjust(long index, com.earthview.world.graphic.ColourValue colour)
	{
		long indexParamValue = index;
		long colourParamValue = colour.nativeObject.pointer;
		setColourAdjust_size_t_CColourValue(this.nativeObject.pointer, indexParamValue, colourParamValue);
	}
	native private long getColourAdjust_size_t(long pNativeObject, long index);
	public com.earthview.world.graphic.ColourValue getColourAdjust(long index)
	{
		long indexParamValue = index;
		long returnValue = getColourAdjust_size_t(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setTimeAdjust_size_t_Real(long pNativeObject, long index, double time);
	public void setTimeAdjust(long index, double time)
	{
		long indexParamValue = index;
		double timeParamValue = time;
		setTimeAdjust_size_t_Real(this.nativeObject.pointer, indexParamValue, timeParamValue);
	}
	native private double getTimeAdjust_size_t(long pNativeObject, long index);
	public double getTimeAdjust(long index)
	{
		long indexParamValue = index;
		double returnValue = getTimeAdjust_size_t(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	public ColourInterpolatorAffector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ColourInterpolatorAffector(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static ColourInterpolatorAffector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ColourInterpolatorAffector obj = null;
 		if(baseObj instanceof ColourInterpolatorAffector)
		{
			obj = (ColourInterpolatorAffector)baseObj;
		} else {
			obj = new ColourInterpolatorAffector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CColourInterpolatorAffector");
			obj.increaseCast();
		}

		return obj;
	}
}
