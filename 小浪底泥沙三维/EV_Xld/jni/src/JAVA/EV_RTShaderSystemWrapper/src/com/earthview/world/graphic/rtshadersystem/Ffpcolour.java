package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Ffpcolour extends com.earthview.world.graphic.rtshadersystem.SubRenderState {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CFFPColour", new FfpcolourClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::JCFFPColourProxy", new FfpcolourClassFactory());
	}

	/// Parameter stage flags of the colour component.
	public enum StageFlags implements INativeEnum<StageFlags> {
		SF_VS_INPUT_DIFFUSE(StageFlagsHelper.ENUM_VALUES[0]),
		SF_VS_INPUT_SPECULAR(StageFlagsHelper.ENUM_VALUES[1]),
		SF_VS_OUTPUT_DIFFUSE(StageFlagsHelper.ENUM_VALUES[2]),
		SF_VS_OUTPUT_SPECULAR(StageFlagsHelper.ENUM_VALUES[3]),
		SF_PS_INPUT_DIFFUSE(StageFlagsHelper.ENUM_VALUES[4]),
		SF_PS_INPUT_SPECULAR(StageFlagsHelper.ENUM_VALUES[5]),
		SF_PS_OUTPUT_DIFFUSE(StageFlagsHelper.ENUM_VALUES[6]),
		SF_PS_OUTPUT_SPECULAR(StageFlagsHelper.ENUM_VALUES[7]);
		private int value;
		StageFlags(int i) {
			this.value = i;
		}
		public StageFlags getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final StageFlags toEnum(int retval) {
			if(retval == SF_VS_INPUT_DIFFUSE.value){
				return SF_VS_INPUT_DIFFUSE;
			}
			else if(retval == SF_VS_INPUT_SPECULAR.value){
				return SF_VS_INPUT_SPECULAR;
			}
			else if(retval == SF_VS_OUTPUT_DIFFUSE.value){
				return SF_VS_OUTPUT_DIFFUSE;
			}
			else if(retval == SF_VS_OUTPUT_SPECULAR.value){
				return SF_VS_OUTPUT_SPECULAR;
			}
			else if(retval == SF_PS_INPUT_DIFFUSE.value){
				return SF_PS_INPUT_DIFFUSE;
			}
			else if(retval == SF_PS_INPUT_SPECULAR.value){
				return SF_PS_INPUT_SPECULAR;
			}
			else if(retval == SF_PS_OUTPUT_DIFFUSE.value){
				return SF_PS_OUTPUT_DIFFUSE;
			}
			else if(retval == SF_PS_OUTPUT_SPECULAR.value){
				return SF_PS_OUTPUT_SPECULAR;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class StageFlagsHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/// Interface.
	public Ffpcolour() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCFFPColourProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.Ffpcolour".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private String getType_void(long pNativeObject);
	public String getType()
	{
		String returnValue = getType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getType_void_NoVirtual(long pNativeObject);
	protected String getType_NoVirtual()
	{
		String returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private int getExecutionOrder_void(long pNativeObject);
	public int getExecutionOrder()
	{
		int returnValue = getExecutionOrder_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getExecutionOrder_void_NoVirtual(long pNativeObject);
	protected int getExecutionOrder_NoVirtual()
	{
		int returnValue = getExecutionOrder_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void copyFrom_CSubRenderState(long pNativeObject, long rhs);
	public void copyFrom(com.earthview.world.graphic.rtshadersystem.SubRenderState rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		copyFrom_CSubRenderState(this.nativeObject.pointer, rhsParamValue);
	}
	native private void copyFrom_CSubRenderState_NoVirtual(long pNativeObject, long rhs);
	protected void copyFrom_NoVirtual(com.earthview.world.graphic.rtshadersystem.SubRenderState rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		copyFrom_CSubRenderState_NoVirtual(this.nativeObject.pointer, rhsParamValue);
	}

	native private boolean preAddToRenderState_CRenderState_CPass_CPass(long pNativeObject, long renderState, long srcPass, long dstPass);
	public boolean preAddToRenderState(com.earthview.world.graphic.rtshadersystem.RenderState renderState, com.earthview.world.graphic.Pass srcPass, com.earthview.world.graphic.Pass dstPass)
	{
		long renderStateParamValue = (renderState == null ? 0L : renderState.nativeObject.pointer);
		long srcPassParamValue = (srcPass == null ? 0L : srcPass.nativeObject.pointer);
		long dstPassParamValue = (dstPass == null ? 0L : dstPass.nativeObject.pointer);
		boolean returnValue = preAddToRenderState_CRenderState_CPass_CPass(this.nativeObject.pointer, renderStateParamValue, srcPassParamValue, dstPassParamValue);
		return returnValue;
	}
	native private boolean preAddToRenderState_CRenderState_CPass_CPass_NoVirtual(long pNativeObject, long renderState, long srcPass, long dstPass);
	protected boolean preAddToRenderState_NoVirtual(com.earthview.world.graphic.rtshadersystem.RenderState renderState, com.earthview.world.graphic.Pass srcPass, com.earthview.world.graphic.Pass dstPass)
	{
		long renderStateParamValue = (renderState == null ? 0L : renderState.nativeObject.pointer);
		long srcPassParamValue = (srcPass == null ? 0L : srcPass.nativeObject.pointer);
		long dstPassParamValue = (dstPass == null ? 0L : dstPass.nativeObject.pointer);
		boolean returnValue = preAddToRenderState_CRenderState_CPass_CPass_NoVirtual(this.nativeObject.pointer, renderStateParamValue, srcPassParamValue, dstPassParamValue);
		return returnValue;
	}

	native private void setResolveStageFlags_ev_uint32(long pNativeObject, long flags);
	public void setResolveStageFlags(long flags)
	{
		long flagsParamValue = flags;
		setResolveStageFlags_ev_uint32(this.nativeObject.pointer, flagsParamValue);
	}
	native private long getResolveStageFlags_void(long pNativeObject);
	public long getResolveStageFlags()
	{
		long returnValue = getResolveStageFlags_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void addResolveStageMask_ev_uint32(long pNativeObject, long mask);
	public void addResolveStageMask(long mask)
	{
		long maskParamValue = mask;
		addResolveStageMask_ev_uint32(this.nativeObject.pointer, maskParamValue);
	}
	native private void removeResolveStageMask_ev_uint32(long pNativeObject, long mask);
	public void removeResolveStageMask(long mask)
	{
		long maskParamValue = mask;
		removeResolveStageMask_ev_uint32(this.nativeObject.pointer, maskParamValue);
	}
	native private static String get_Type_void();
	public static String get_Type()
	{
		String jniValue = get_Type_void();
		
		return jniValue;
	}
	
	native private static void set_Type_EVString (String value);
	public static void set_Type(String Type)
	{
		String TypeParamValue = Type;
		
		set_Type_EVString(TypeParamValue);
	}
	
	native private boolean resolveParameters_CProgramSet(long pNativeObject, long programSet);
	/// Protected methods
	public boolean resolveParameters(com.earthview.world.graphic.rtshadersystem.ProgramSet programSet)
	{
		long programSetParamValue = (programSet == null ? 0L : programSet.nativeObject.pointer);
		boolean returnValue = resolveParameters_CProgramSet(this.nativeObject.pointer, programSetParamValue);
		return returnValue;
	}
	native private boolean resolveParameters_CProgramSet_NoVirtual(long pNativeObject, long programSet);
	protected boolean resolveParameters_NoVirtual(com.earthview.world.graphic.rtshadersystem.ProgramSet programSet)
	{
		long programSetParamValue = (programSet == null ? 0L : programSet.nativeObject.pointer);
		boolean returnValue = resolveParameters_CProgramSet_NoVirtual(this.nativeObject.pointer, programSetParamValue);
		return returnValue;
	}

	native private boolean resolveDependencies_CProgramSet(long pNativeObject, long programSet);
	public boolean resolveDependencies(com.earthview.world.graphic.rtshadersystem.ProgramSet programSet)
	{
		long programSetParamValue = (programSet == null ? 0L : programSet.nativeObject.pointer);
		boolean returnValue = resolveDependencies_CProgramSet(this.nativeObject.pointer, programSetParamValue);
		return returnValue;
	}
	native private boolean resolveDependencies_CProgramSet_NoVirtual(long pNativeObject, long programSet);
	protected boolean resolveDependencies_NoVirtual(com.earthview.world.graphic.rtshadersystem.ProgramSet programSet)
	{
		long programSetParamValue = (programSet == null ? 0L : programSet.nativeObject.pointer);
		boolean returnValue = resolveDependencies_CProgramSet_NoVirtual(this.nativeObject.pointer, programSetParamValue);
		return returnValue;
	}

	native private boolean addFunctionInvocations_CProgramSet(long pNativeObject, long programSet);
	public boolean addFunctionInvocations(com.earthview.world.graphic.rtshadersystem.ProgramSet programSet)
	{
		long programSetParamValue = (programSet == null ? 0L : programSet.nativeObject.pointer);
		boolean returnValue = addFunctionInvocations_CProgramSet(this.nativeObject.pointer, programSetParamValue);
		return returnValue;
	}
	native private boolean addFunctionInvocations_CProgramSet_NoVirtual(long pNativeObject, long programSet);
	protected boolean addFunctionInvocations_NoVirtual(com.earthview.world.graphic.rtshadersystem.ProgramSet programSet)
	{
		long programSetParamValue = (programSet == null ? 0L : programSet.nativeObject.pointer);
		boolean returnValue = addFunctionInvocations_CProgramSet_NoVirtual(this.nativeObject.pointer, programSetParamValue);
		return returnValue;
	}

	public Ffpcolour(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ffpcolour(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public boolean createCpuSubPrograms(com.earthview.world.graphic.rtshadersystem.ProgramSet programSet)
	{
		return super.createCpuSubPrograms_NoVirtual(programSet);
	}
	public void updateGpuProgramsParams(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.AutoParamDataSource source, com.earthview.world.graphic.LightList pLightList)
	{
		super.updateGpuProgramsParams_NoVirtual(rend, pass, source, pLightList);
	}
	
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getExecutionOrder_void(long pNativeObject, String method);
	native protected void register_copyFrom_CSubRenderState(long pNativeObject, String method);
	native protected void register_createCpuSubPrograms_CProgramSet(long pNativeObject, String method);
	native protected void register_updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList(long pNativeObject, String method);
	native protected void register_preAddToRenderState_CRenderState_CPass_CPass(long pNativeObject, String method);
	native protected void register_resolveParameters_CProgramSet(long pNativeObject, String method);
	native protected void register_resolveDependencies_CProgramSet(long pNativeObject, String method);
	native protected void register_addFunctionInvocations_CProgramSet(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getExecutionOrder_void(this.nativeObject.pointer, "getExecutionOrder_void_callback");
			this.register_copyFrom_CSubRenderState(this.nativeObject.pointer, "copyFrom_CSubRenderState_callback");
			this.register_createCpuSubPrograms_CProgramSet(this.nativeObject.pointer, "createCpuSubPrograms_CProgramSet_callback");
			this.register_updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList(this.nativeObject.pointer, "updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList_callback");
			this.register_preAddToRenderState_CRenderState_CPass_CPass(this.nativeObject.pointer, "preAddToRenderState_CRenderState_CPass_CPass_callback");
			this.register_resolveParameters_CProgramSet(this.nativeObject.pointer, "resolveParameters_CProgramSet_callback");
			this.register_resolveDependencies_CProgramSet(this.nativeObject.pointer, "resolveDependencies_CProgramSet_callback");
			this.register_addFunctionInvocations_CProgramSet(this.nativeObject.pointer, "addFunctionInvocations_CProgramSet_callback");
		}
	}
	
	public static Ffpcolour fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ffpcolour obj = null;
 		if(baseObj instanceof Ffpcolour)
		{
			obj = (Ffpcolour)baseObj;
		} else {
			obj = new Ffpcolour(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFFPColour");
			obj.increaseCast();
		}

		return obj;
	}
}
