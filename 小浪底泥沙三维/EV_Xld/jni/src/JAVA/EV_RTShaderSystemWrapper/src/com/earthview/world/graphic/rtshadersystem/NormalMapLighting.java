package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NormalMapLighting extends com.earthview.world.graphic.rtshadersystem.SubRenderState {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting", new NormalMapLightingClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::JCNormalMapLightingProxy", new NormalMapLightingClassFactory());
	}

	public NormalMapLighting() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCNormalMapLightingProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.NormalMapLighting".equals(this.getClass().getName()))
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

	native private void setTexCoordIndex_ev_uint32(long pNativeObject, long index);
	public void setTexCoordIndex(long index)
	{
		long indexParamValue = index;
		setTexCoordIndex_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private long getTexCoordIndex_void(long pNativeObject);
	public long getTexCoordIndex()
	{
		long returnValue = getTexCoordIndex_void(this.nativeObject.pointer);
		return returnValue;
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
	
	//// Normal map space definition.
	public enum NormalMapSpace implements INativeEnum<NormalMapSpace> {
		NMS_TANGENT(NormalMapSpaceHelper.ENUM_VALUES[0]),
		NMS_OBJECT(NormalMapSpaceHelper.ENUM_VALUES[1]);
		private int value;
		NormalMapSpace(int i) {
			this.value = i;
		}
		public NormalMapSpace getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final NormalMapSpace toEnum(int retval) {
			if(retval == NMS_TANGENT.value){
				return NMS_TANGENT;
			}
			else if(retval == NMS_OBJECT.value){
				return NMS_OBJECT;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class NormalMapSpaceHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private void setNormalMapSpace_NormalMapSpace(long pNativeObject, int normalMapSpace);
	//// Normal map contains normal data in tangent space.
	//// This is the default normal mapping behavior and it requires that the
	//// target mesh will have valid tangents within its vertex data.
	public void setNormalMapSpace(com.earthview.world.graphic.rtshadersystem.NormalMapLighting.NormalMapSpace normalMapSpace)
	{
		int normalMapSpaceParamValue = normalMapSpace.getValue();
		setNormalMapSpace_NormalMapSpace(this.nativeObject.pointer, normalMapSpaceParamValue);
	}
	native private int getNormalMapSpace_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.NormalMapLighting.NormalMapSpace getNormalMapSpace()
	{
		int returnValue = getNormalMapSpace_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.rtshadersystem.NormalMapLighting.NormalMapSpace.toEnum(returnValue);
	}
	native private void setNormalMapTextureName_EVString(long pNativeObject, String textureName);
	public void setNormalMapTextureName(String textureName)
	{
		String textureNameParamValue = textureName;
		setNormalMapTextureName_EVString(this.nativeObject.pointer, textureNameParamValue);
	}
	native private long getNormalMapTextureName_void(long pNativeObject);
	public StringPointer getNormalMapTextureName()
	{
		long returnValue = getNormalMapTextureName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setNormalMapFiltering_FilterOptions_FilterOptions_FilterOptions(long pNativeObject, int minFilter, int magFilter, int mipFilter);
	public void setNormalMapFiltering(com.earthview.world.graphic.FilterOptions minFilter, com.earthview.world.graphic.FilterOptions magFilter, com.earthview.world.graphic.FilterOptions mipFilter)
	{
		int minFilterParamValue = minFilter.getValue();
		int magFilterParamValue = magFilter.getValue();
		int mipFilterParamValue = mipFilter.getValue();
		setNormalMapFiltering_FilterOptions_FilterOptions_FilterOptions(this.nativeObject.pointer, minFilterParamValue, magFilterParamValue, mipFilterParamValue);
	}
	native private void getNormalMapFiltering_FilterOptions_FilterOptions_FilterOptions(long pNativeObject, long minFilter, long magFilter, long mipFilter);
	public void getNormalMapFiltering(EnumPointer minFilter, EnumPointer magFilter, EnumPointer mipFilter)
	{
		long minFilterParamValue = minFilter.nativeObject.pointer;
		long magFilterParamValue = magFilter.nativeObject.pointer;
		long mipFilterParamValue = mipFilter.nativeObject.pointer;
		getNormalMapFiltering_FilterOptions_FilterOptions_FilterOptions(this.nativeObject.pointer, minFilterParamValue, magFilterParamValue, mipFilterParamValue);
	}
	native private void setNormalMapAnisotropy_ev_uint32(long pNativeObject, long anisotropy);
	public void setNormalMapAnisotropy(long anisotropy)
	{
		long anisotropyParamValue = anisotropy;
		setNormalMapAnisotropy_ev_uint32(this.nativeObject.pointer, anisotropyParamValue);
	}
	native private long getNormalMapAnisotropy_void(long pNativeObject);
	public long getNormalMapAnisotropy()
	{
		long returnValue = getNormalMapAnisotropy_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setNormalMapMipBias_Real(long pNativeObject, double mipBias);
	public void setNormalMapMipBias(double mipBias)
	{
		double mipBiasParamValue = mipBias;
		setNormalMapMipBias_Real(this.nativeObject.pointer, mipBiasParamValue);
	}
	native private double getNormalMapMipBias_void(long pNativeObject);
	public double getNormalMapMipBias()
	{
		double returnValue = getNormalMapMipBias_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean resolveParameters_CProgramSet(long pNativeObject, long programSet);
	//// Protected types:
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

	public NormalMapLighting(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public NormalMapLighting(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static NormalMapLighting fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		NormalMapLighting obj = null;
 		if(baseObj instanceof NormalMapLighting)
		{
			obj = (NormalMapLighting)baseObj;
		} else {
			obj = new NormalMapLighting(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CNormalMapLighting");
			obj.increaseCast();
		}

		return obj;
	}
}
