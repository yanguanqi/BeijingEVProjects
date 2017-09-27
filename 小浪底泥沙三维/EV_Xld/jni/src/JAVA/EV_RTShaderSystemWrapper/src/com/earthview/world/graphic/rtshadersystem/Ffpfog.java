package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Ffpfog extends com.earthview.world.graphic.rtshadersystem.SubRenderState {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CFFPFog", new FfpfogClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::JCFFPFogProxy", new FfpfogClassFactory());
	}

	/// Fog calculation mode enum.
	public enum CalcMode implements INativeEnum<CalcMode> {
		CM_PER_VERTEX(CalcModeHelper.ENUM_VALUES[0]),
		CM_PER_PIXEL(CalcModeHelper.ENUM_VALUES[1]);
		private int value;
		CalcMode(int i) {
			this.value = i;
		}
		public CalcMode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final CalcMode toEnum(int retval) {
			if(retval == CM_PER_VERTEX.value){
				return CM_PER_VERTEX;
			}
			else if(retval == CM_PER_PIXEL.value){
				return CM_PER_PIXEL;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class CalcModeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/// Per vertex fog calculations. (Default).
	public Ffpfog() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCFFPFogProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.Ffpfog".equals(this.getClass().getName()))
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

	native private void updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList(long pNativeObject, long rend, long pass, long source, long pLightList);
	public void updateGpuProgramsParams(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.AutoParamDataSource source, com.earthview.world.graphic.LightList pLightList)
	{
		long rendParamValue = (rend == null ? 0L : rend.nativeObject.pointer);
		long passParamValue = (pass == null ? 0L : pass.nativeObject.pointer);
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		long pLightListParamValue = (pLightList == null ? 0L : pLightList.nativeObject.pointer);
		updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList(this.nativeObject.pointer, rendParamValue, passParamValue, sourceParamValue, pLightListParamValue);
	}
	native private void updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList_NoVirtual(long pNativeObject, long rend, long pass, long source, long pLightList);
	protected void updateGpuProgramsParams_NoVirtual(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.AutoParamDataSource source, com.earthview.world.graphic.LightList pLightList)
	{
		long rendParamValue = (rend == null ? 0L : rend.nativeObject.pointer);
		long passParamValue = (pass == null ? 0L : pass.nativeObject.pointer);
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		long pLightListParamValue = (pLightList == null ? 0L : pLightList.nativeObject.pointer);
		updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList_NoVirtual(this.nativeObject.pointer, rendParamValue, passParamValue, sourceParamValue, pLightListParamValue);
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

	native private void setFogProperties_FogMode_CColourValue_float_float_float(long pNativeObject, int fogMode, long fogColour, float fogStart, float fogEnd, float fogDensity);
	public void setFogProperties(com.earthview.world.graphic.FogMode fogMode, com.earthview.world.graphic.ColourValue fogColour, float fogStart, float fogEnd, float fogDensity)
	{
		int fogModeParamValue = fogMode.getValue();
		long fogColourParamValue = fogColour.nativeObject.pointer;
		float fogStartParamValue = fogStart;
		float fogEndParamValue = fogEnd;
		float fogDensityParamValue = fogDensity;
		setFogProperties_FogMode_CColourValue_float_float_float(this.nativeObject.pointer, fogModeParamValue, fogColourParamValue, fogStartParamValue, fogEndParamValue, fogDensityParamValue);
	}
	native private void setCalcMode_CalcMode(long pNativeObject, int calcMode);
	public void setCalcMode(com.earthview.world.graphic.rtshadersystem.Ffpfog.CalcMode calcMode)
	{
		int calcModeParamValue = calcMode.getValue();
		setCalcMode_CalcMode(this.nativeObject.pointer, calcModeParamValue);
	}
	native private int getCalcMode_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.Ffpfog.CalcMode getCalcMode()
	{
		int returnValue = getCalcMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.rtshadersystem.Ffpfog.CalcMode.toEnum(returnValue);
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

	public Ffpfog(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ffpfog(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public boolean createCpuSubPrograms(com.earthview.world.graphic.rtshadersystem.ProgramSet programSet)
	{
		return super.createCpuSubPrograms_NoVirtual(programSet);
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
	
	public static Ffpfog fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ffpfog obj = null;
 		if(baseObj instanceof Ffpfog)
		{
			obj = (Ffpfog)baseObj;
		} else {
			obj = new Ffpfog(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFFPFog");
			obj.increaseCast();
		}

		return obj;
	}
}
