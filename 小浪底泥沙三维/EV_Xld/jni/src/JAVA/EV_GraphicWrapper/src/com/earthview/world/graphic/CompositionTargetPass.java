package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * ObjectrepresentingonerendertoaCRenderTargetorCViewportintheEV_WorldComposition	framework.
 */
public class CompositionTargetPass extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositionTargetPass", new CompositionTargetPassClassFactory());
	}

	public CompositionTargetPass(com.earthview.world.graphic.CompositionTechnique ref_parent) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		Create("CCompositionTargetPass", list);
	}

	/**
	 * InputmodeofaTargetPass
	 */
	public enum InputMode implements INativeEnum<InputMode> {
		IM_NONE(InputModeHelper.ENUM_VALUES[0]),
		IM_PREVIOUS(InputModeHelper.ENUM_VALUES[1]);
		private int value;
		InputMode(int i) {
			this.value = i;
		}
		public InputMode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final InputMode toEnum(int retval) {
			if(retval == IM_NONE.value){
				return IM_NONE;
			}
			else if(retval == IM_PREVIOUS.value){
				return IM_PREVIOUS;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class InputModeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/// No input
	public static class CompositionPasses extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses", new CompositionPassesClassFactory());
		}

		public CompositionPasses() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CompositionPasses", null);
		}

		native private void push_back_CCompositionPass(long pNativeObject, long ref_descript);
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.CompositionPass> ref_descript)
		{
			long ref_descriptParamValue = ref_descript.nativeObject.pointer;
			push_back_CCompositionPass(this.nativeObject.pointer, ref_descriptParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.CompositionPass> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.CompositionPass> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.CompositionPass>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.CompositionPass> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.CompositionPass> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.CompositionPass>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public CompositionPasses(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CompositionPasses(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static CompositionPasses fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CompositionPasses obj = null;
 			if(baseObj instanceof CompositionPasses)
			{
				obj = (CompositionPasses)baseObj;
			} else {
				obj = new CompositionPasses(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CompositionPasses");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CompositionPassesClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CompositionPasses emptyInstance = new CompositionPasses(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CompositionPassIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator", new CompositionPassIteratorClassFactory());
		}

		public CompositionPassIterator(com.earthview.world.graphic.CompositionTargetPass.CompositionPasses vec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer vecPtr = new BasePointer(vec);
			list.add("vec", vecPtr.get());
			Create("CompositionPassIterator", list);
		}

		public CompositionPassIterator(com.earthview.world.graphic.CompositionTargetPass.CompositionPassIterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("CompositionPassIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.CompositionPass getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.CompositionPass __returnValue = new com.earthview.world.graphic.CompositionPass(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionPass");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositionPass)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CCompositionPass");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.CompositionPass next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.CompositionPass __returnValue = new com.earthview.world.graphic.CompositionPass(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionPass");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositionPass)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CCompositionPass");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.CompositionPass getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.CompositionPass __returnValue = new com.earthview.world.graphic.CompositionPass(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionPass");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositionPass)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CCompositionPass");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.CompositionPass getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.CompositionPass __returnValue = new com.earthview.world.graphic.CompositionPass(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionPass");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositionPass)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CCompositionPass");
			}
			return __returnValue;
		}
		public CompositionPassIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CompositionPassIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static CompositionPassIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CompositionPassIterator obj = null;
 			if(baseObj instanceof CompositionPassIterator)
			{
				obj = (CompositionPassIterator)baseObj;
			} else {
				obj = new CompositionPassIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CompositionPassIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CompositionPassIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CompositionPassIterator emptyInstance = new CompositionPassIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private void setInputMode_InputMode(long pNativeObject, int mode);
	/**
	 * SetinputmodeofthisTargetPass
	 * @param  name="mode"
	 */
	public void setInputMode(com.earthview.world.graphic.CompositionTargetPass.InputMode mode)
	{
		int modeParamValue = mode.getValue();
		setInputMode_InputMode(this.nativeObject.pointer, modeParamValue);
	}
	native private int getInputMode_void(long pNativeObject);
	/**
	 * Getinputmode
	 * @param  
	 * @return inputmode
	 */
	public com.earthview.world.graphic.CompositionTargetPass.InputMode getInputMode()
	{
		int returnValue = getInputMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.CompositionTargetPass.InputMode.toEnum(returnValue);
	}
	native private void setOutputName_EVString(long pNativeObject, String out);
	/**
	 * Setoutputlocaltexturename
	 * @param  name="out"
	 */
	public void setOutputName(String out)
	{
		String outParamValue = out;
		setOutputName_EVString(this.nativeObject.pointer, outParamValue);
	}
	native private long getOutputName_void(long pNativeObject);
	/**
	 * Getoutputlocaltexturename
	 * @param  
	 * @return outputname
	 */
	public StringPointer getOutputName()
	{
		long returnValue = getOutputName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setOnlyInitial_ev_bool(long pNativeObject, boolean value);
	/**
	 * Set"onlyinitial"flag.Thismakesthatthistargetpassisonlyexecutedinitiallyaftertheeffecthasbeenenabled.
	 * @param  name="value"
	 */
	public void setOnlyInitial(boolean value)
	{
		boolean valueParamValue = value;
		setOnlyInitial_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getOnlyInitial_void(long pNativeObject);
	/// <summary>Get "only initial" flag.<summary>
	///<param></param>
	///<returns></returns>
	public boolean getOnlyInitial()
	{
		boolean returnValue = getOnlyInitial_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVisibilityMask_ev_uint32(long pNativeObject, long mask);
	/**
	 * Setthescenevisibilitymaskusedbythispass
	 * @param  name="mask"
	 */
	public void setVisibilityMask(long mask)
	{
		long maskParamValue = mask;
		setVisibilityMask_ev_uint32(this.nativeObject.pointer, maskParamValue);
	}
	native private long getVisibilityMask_void(long pNativeObject);
	/**
	 * Getthescenevisibilitymaskusedbythispass
	 * @param  
	 * @return visibilitymask
	 */
	public long getVisibilityMask()
	{
		long returnValue = getVisibilityMask_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaterialScheme_EVString(long pNativeObject, String schemeName);
	/**
	 * Setthematerialschemeusedbythistargetpass.@remarks	Onlyapplicabletotargetsthatrenderthesceneas	oneoftheirpasses.	@seeCTechnique::setScheme.
	 * @param  name="schemeName"
	 */
	public void setMaterialScheme(String schemeName)
	{
		String schemeNameParamValue = schemeName;
		setMaterialScheme_EVString(this.nativeObject.pointer, schemeNameParamValue);
	}
	native private long getMaterialScheme_void(long pNativeObject);
	/**
	 * Getthematerialschemeusedbythistargetpass.@remarks	Onlyapplicabletotargetsthatrenderthesceneas	oneoftheirpasses.	@seeCTechnique::setScheme.
	 * @param  
	 * @return materialscheme
	 */
	public StringPointer getMaterialScheme()
	{
		long returnValue = getMaterialScheme_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setShadowsEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * Setwhethershadowsareenabledinthistargetpass.@remarks	Onlyapplicabletotargetsthatrenderthesceneas	oneoftheirpasses.
	 * @param  name="enable"
	 */
	public void setShadowsEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setShadowsEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getShadowsEnabled_void(long pNativeObject);
	/**
	 * Getwhethershadowsareenabledinthistargetpass.@remarks	Onlyapplicabletotargetsthatrenderthesceneas	oneoftheirpasses.
	 * @param  
	 * @return isshadowenabled
	 */
	public boolean getShadowsEnabled()
	{
		boolean returnValue = getShadowsEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLodBias_ev_real32(long pNativeObject, float bias);
	/**
	 * SetthesceneLODbiasusedbythispass.Thedefaultis1.0,everythingbelowthatmeanslowerquality,highermeanshigherquality.
	 * @param  name="bias"
	 */
	public void setLodBias(float bias)
	{
		float biasParamValue = bias;
		setLodBias_ev_real32(this.nativeObject.pointer, biasParamValue);
	}
	native private float getLodBias_void(long pNativeObject);
	///<summary> Get the scene LOD bias used by this pass </summary>
	///<param></parma>
	///<returns>lod bias</returns>
	public float getLodBias()
	{
		float returnValue = getLodBias_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long createPass_void(long pNativeObject);
	/**
	 * Createanewpass,andreturnapointertoit.
	 * @param  
	 */
	public com.earthview.world.graphic.CompositionPass createPass()
	{
		long returnValue = createPass_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositionPass __returnValue = new com.earthview.world.graphic.CompositionPass(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionPass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositionPass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositionPass");
		}
		return __returnValue;
	}
	native private void removePass_ev_size_t(long pNativeObject, long idx);
	/**
	 * Removeapass.Itwillalsobedestroyed.
	 * @param  name="idx"
	 */
	public void removePass(long idx)
	{
		long idxParamValue = idx;
		removePass_ev_size_t(this.nativeObject.pointer, idxParamValue);
	}
	native private long getPass_ev_size_t(long pNativeObject, long idx);
	/**
	 * Getapass.
	 * @param  name="idx"
	 */
	public com.earthview.world.graphic.CompositionPass getPass(long idx)
	{
		long idxParamValue = idx;
		long returnValue = getPass_ev_size_t(this.nativeObject.pointer, idxParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositionPass __returnValue = new com.earthview.world.graphic.CompositionPass(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionPass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositionPass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositionPass");
		}
		return __returnValue;
	}
	native private long getNumPasses_void(long pNativeObject);
	/**
	 * Getthenumberofpasses.
	 * @param  
	 */
	public long getNumPasses()
	{
		long returnValue = getNumPasses_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void removeAllPasses_void(long pNativeObject);
	/**
	 * Removeallpasses
	 * @param  
	 */
	public void removeAllPasses()
	{
		removeAllPasses_void(this.nativeObject.pointer);
	}
	native private long getPassIterator_void(long pNativeObject);
	/**
	 * GetaniteratorovertheEarthView::World::Graphic::CCompositionTargetPass::CompositionPassesinthisTargetPass.
	 * @param  
	 */
	public com.earthview.world.graphic.CompositionTargetPass.CompositionPassIterator getPassIterator()
	{
		long returnValue = getPassIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.CompositionTargetPass.CompositionPassIterator __returnValue = new com.earthview.world.graphic.CompositionTargetPass.CompositionPassIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CompositionPassIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositionTargetPass.CompositionPassIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CompositionPassIterator");
		}
		return __returnValue;
	}
	native private long getParent_void(long pNativeObject);
	/**
	 * Getparentobject
	 * @param  
	 */
	public com.earthview.world.graphic.CompositionTechnique getParent()
	{
		long returnValue = getParent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositionTechnique __returnValue = new com.earthview.world.graphic.CompositionTechnique(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionTechnique");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositionTechnique)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositionTechnique");
		}
		return __returnValue;
	}
	native private boolean _isSupported_void(long pNativeObject);
	/**
	 * Determineifthistargetpassissupportedonthecurrentrenderingdevice.
	 * @param  
	 */
	public boolean _isSupported()
	{
		boolean returnValue = _isSupported_void(this.nativeObject.pointer);
		return returnValue;
	}
	public CompositionTargetPass(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CompositionTargetPass(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CompositionTargetPass fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CompositionTargetPass obj = null;
 		if(baseObj instanceof CompositionTargetPass)
		{
			obj = (CompositionTargetPass)baseObj;
		} else {
			obj = new CompositionTargetPass(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCompositionTargetPass");
			obj.increaseCast();
		}

		return obj;
	}
}
