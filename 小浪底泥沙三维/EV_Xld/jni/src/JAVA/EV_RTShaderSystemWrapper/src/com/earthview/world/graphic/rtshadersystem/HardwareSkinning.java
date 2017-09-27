package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HardwareSkinning extends com.earthview.world.graphic.rtshadersystem.SubRenderState {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning", new HardwareSkinningClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::JCHardwareSkinningProxy", new HardwareSkinningClassFactory());
	}

	public static class SkinningData extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData", new SkinningDataClassFactory());
		}

		public SkinningData() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SkinningData", null);
		}

		native private boolean get_isValid_void(long pNativeObject);
		public boolean get_isValid()
		{
			boolean jniValue = get_isValid_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_isValid_bool (long pNativeObject, boolean value);
		public void set_isValid(boolean isValid)
		{
			boolean isValidParamValue = isValid;
			
			set_isValid_bool(this.nativeObject.pointer, isValidParamValue);
		}
		
		native private int get_maxBoneCount_void(long pNativeObject);
		public int get_maxBoneCount()
		{
			int jniValue = get_maxBoneCount_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_maxBoneCount_ev_uint16 (long pNativeObject, int value);
		public void set_maxBoneCount(int maxBoneCount)
		{
			int maxBoneCountParamValue = maxBoneCount;
			
			set_maxBoneCount_ev_uint16(this.nativeObject.pointer, maxBoneCountParamValue);
		}
		
		native private int get_maxWeightCount_void(long pNativeObject);
		public int get_maxWeightCount()
		{
			int jniValue = get_maxWeightCount_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_maxWeightCount_ev_uint16 (long pNativeObject, int value);
		public void set_maxWeightCount(int maxWeightCount)
		{
			int maxWeightCountParamValue = maxWeightCount;
			
			set_maxWeightCount_ev_uint16(this.nativeObject.pointer, maxWeightCountParamValue);
		}
		
		native private int get_skinningType_void(long pNativeObject);
		public com.earthview.world.graphic.rtshadersystem.SkinningType get_skinningType()
		{
			int jniValue = get_skinningType_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.rtshadersystem.SkinningType.toEnum(jniValue);
		}
		
		native private void set_skinningType_SkinningType (long pNativeObject, int value);
		public void set_skinningType(com.earthview.world.graphic.rtshadersystem.SkinningType skinningType)
		{
			int skinningTypeParamValue = skinningType.getValue();
			
			set_skinningType_SkinningType(this.nativeObject.pointer, skinningTypeParamValue);
		}
		
		native private boolean get_correctAntipodalityHandling_void(long pNativeObject);
		public boolean get_correctAntipodalityHandling()
		{
			boolean jniValue = get_correctAntipodalityHandling_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_correctAntipodalityHandling_bool (long pNativeObject, boolean value);
		public void set_correctAntipodalityHandling(boolean correctAntipodalityHandling)
		{
			boolean correctAntipodalityHandlingParamValue = correctAntipodalityHandling;
			
			set_correctAntipodalityHandling_bool(this.nativeObject.pointer, correctAntipodalityHandlingParamValue);
		}
		
		native private boolean get_scalingShearingSupport_void(long pNativeObject);
		public boolean get_scalingShearingSupport()
		{
			boolean jniValue = get_scalingShearingSupport_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_scalingShearingSupport_bool (long pNativeObject, boolean value);
		public void set_scalingShearingSupport(boolean scalingShearingSupport)
		{
			boolean scalingShearingSupportParamValue = scalingShearingSupport;
			
			set_scalingShearingSupport_bool(this.nativeObject.pointer, scalingShearingSupportParamValue);
		}
		
		public SkinningData(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SkinningData(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SkinningData fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SkinningData obj = null;
 			if(baseObj instanceof SkinningData)
			{
				obj = (SkinningData)baseObj;
			} else {
				obj = new SkinningData(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SkinningData");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SkinningDataClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SkinningData emptyInstance = new SkinningData(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public HardwareSkinning() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCHardwareSkinningProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.HardwareSkinning".equals(this.getClass().getName()))
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

	native private void setHardwareSkinningParam_ev_uint16_ev_uint16_SkinningType_bool_bool(long pNativeObject, int boneCount, int weightCount, int skinningType, boolean correctAntipodalityHandling, boolean scalingShearingSupport);
	///void setHardwareSkinningParam(ev_uint16 boneCount, ev_uint16 weightCount, EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType = ST_LINEAR,  bool correctAntipodalityHandling = false, bool scalingShearingSupport = false);
	public void setHardwareSkinningParam(int boneCount, int weightCount, com.earthview.world.graphic.rtshadersystem.SkinningType skinningType, boolean correctAntipodalityHandling, boolean scalingShearingSupport)
	{
		int boneCountParamValue = boneCount;
		int weightCountParamValue = weightCount;
		int skinningTypeParamValue = skinningType.getValue();
		boolean correctAntipodalityHandlingParamValue = correctAntipodalityHandling;
		boolean scalingShearingSupportParamValue = scalingShearingSupport;
		setHardwareSkinningParam_ev_uint16_ev_uint16_SkinningType_bool_bool(this.nativeObject.pointer, boneCountParamValue, weightCountParamValue, skinningTypeParamValue, correctAntipodalityHandlingParamValue, scalingShearingSupportParamValue);
	}
	native private void setHardwareSkinningParam_ev_uint16_ev_uint16_SkinningType_bool(long pNativeObject, int boneCount, int weightCount, int skinningType, boolean correctAntipodalityHandling);
	public void setHardwareSkinningParam(int boneCount, int weightCount, com.earthview.world.graphic.rtshadersystem.SkinningType skinningType, boolean correctAntipodalityHandling)
	{
		int boneCountParamValue = boneCount;
		int weightCountParamValue = weightCount;
		int skinningTypeParamValue = skinningType.getValue();
		boolean correctAntipodalityHandlingParamValue = correctAntipodalityHandling;
		setHardwareSkinningParam_ev_uint16_ev_uint16_SkinningType_bool(this.nativeObject.pointer, boneCountParamValue, weightCountParamValue, skinningTypeParamValue, correctAntipodalityHandlingParamValue);
	}
	native private void setHardwareSkinningParam_ev_uint16_ev_uint16_SkinningType(long pNativeObject, int boneCount, int weightCount, int skinningType);
	public void setHardwareSkinningParam(int boneCount, int weightCount, com.earthview.world.graphic.rtshadersystem.SkinningType skinningType)
	{
		int boneCountParamValue = boneCount;
		int weightCountParamValue = weightCount;
		int skinningTypeParamValue = skinningType.getValue();
		setHardwareSkinningParam_ev_uint16_ev_uint16_SkinningType(this.nativeObject.pointer, boneCountParamValue, weightCountParamValue, skinningTypeParamValue);
	}
	native private void setHardwareSkinningParam_ev_uint16_ev_uint16(long pNativeObject, int boneCount, int weightCount);
	public void setHardwareSkinningParam(int boneCount, int weightCount)
	{
		int boneCountParamValue = boneCount;
		int weightCountParamValue = weightCount;
		setHardwareSkinningParam_ev_uint16_ev_uint16(this.nativeObject.pointer, boneCountParamValue, weightCountParamValue);
	}
	native private int getBoneCount_void(long pNativeObject);
	public int getBoneCount()
	{
		int returnValue = getBoneCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getWeightCount_void(long pNativeObject);
	public int getWeightCount()
	{
		int returnValue = getWeightCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSkinningType_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.SkinningType getSkinningType()
	{
		int returnValue = getSkinningType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.rtshadersystem.SkinningType.toEnum(returnValue);
	}
	native private boolean hasCorrectAntipodalityHandling_void(long pNativeObject);
	public boolean hasCorrectAntipodalityHandling()
	{
		boolean returnValue = hasCorrectAntipodalityHandling_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasScalingShearingSupport_void(long pNativeObject);
	public boolean hasScalingShearingSupport()
	{
		boolean returnValue = hasScalingShearingSupport_void(this.nativeObject.pointer);
		return returnValue;
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

	native private void _setCreator_CHardwareSkinningFactory(long pNativeObject, long pCreator);
	public void _setCreator(com.earthview.world.graphic.rtshadersystem.HardwareSkinningFactory pCreator)
	{
		long pCreatorParamValue = (pCreator == null ? 0L : pCreator.nativeObject.pointer);
		_setCreator_CHardwareSkinningFactory(this.nativeObject.pointer, pCreatorParamValue);
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

	public HardwareSkinning(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public HardwareSkinning(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static HardwareSkinning fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		HardwareSkinning obj = null;
 		if(baseObj instanceof HardwareSkinning)
		{
			obj = (HardwareSkinning)baseObj;
		} else {
			obj = new HardwareSkinning(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CHardwareSkinning");
			obj.increaseCast();
		}

		return obj;
	}
}
