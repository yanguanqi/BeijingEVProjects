package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HardwareSkinningTechnique extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique", new HardwareSkinningTechniqueClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::JCHardwareSkinningTechniqueProxy", new HardwareSkinningTechniqueClassFactory());
	}

	public HardwareSkinningTechnique() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCHardwareSkinningTechniqueProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.HardwareSkinningTechnique".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void copyFrom_CHardwareSkinningTechnique_callback(long hardSkin)
	{
		com.earthview.world.graphic.rtshadersystem.HardwareSkinningTechnique hardSkinParamValue = (hardSkin == 0L ? null : new com.earthview.world.graphic.rtshadersystem.HardwareSkinningTechnique(CreatedWhenConstruct.CWC_NotToCreate));
		if(hardSkinParamValue != null)
		{
		hardSkinParamValue.setDelegate(true);
		hardSkinParamValue.setInstancePointer(new InstancePointer(hardSkin));
		IClassFactory hardSkinParamValueClassFactory = GlobalClassFactoryMap.get(hardSkinParamValue.getCppInstanceTypeName());
		if (hardSkinParamValueClassFactory != null)
		{
			hardSkinParamValue.setDelegate(true);
			hardSkinParamValue = (com.earthview.world.graphic.rtshadersystem.HardwareSkinningTechnique)hardSkinParamValueClassFactory.create();
			hardSkinParamValue.setDelegate(true);
			hardSkinParamValue.setInstancePointer(new InstancePointer(hardSkin));
		}
		}
		copyFrom(hardSkinParamValue);
	}

	native private void copyFrom_CHardwareSkinningTechnique(long pNativeObject, long hardSkin);
	public void copyFrom(com.earthview.world.graphic.rtshadersystem.HardwareSkinningTechnique hardSkin)
	{
		long hardSkinParamValue = (hardSkin == null ? 0L : hardSkin.nativeObject.pointer);
		copyFrom_CHardwareSkinningTechnique(this.nativeObject.pointer, hardSkinParamValue);
	}
	native private void copyFrom_CHardwareSkinningTechnique_NoVirtual(long pNativeObject, long hardSkin);
	protected void copyFrom_NoVirtual(com.earthview.world.graphic.rtshadersystem.HardwareSkinningTechnique hardSkin)
	{
		long hardSkinParamValue = (hardSkin == null ? 0L : hardSkin.nativeObject.pointer);
		copyFrom_CHardwareSkinningTechnique_NoVirtual(this.nativeObject.pointer, hardSkinParamValue);
	}

	native private void setHardwareSkinningParam_ev_uint16_ev_uint16_bool_bool(long pNativeObject, int boneCount, int weightCount, boolean correctAntipodalityHandling, boolean scalingShearingSupport);
	public void setHardwareSkinningParam(int boneCount, int weightCount, boolean correctAntipodalityHandling, boolean scalingShearingSupport)
	{
		int boneCountParamValue = boneCount;
		int weightCountParamValue = weightCount;
		boolean correctAntipodalityHandlingParamValue = correctAntipodalityHandling;
		boolean scalingShearingSupportParamValue = scalingShearingSupport;
		setHardwareSkinningParam_ev_uint16_ev_uint16_bool_bool(this.nativeObject.pointer, boneCountParamValue, weightCountParamValue, correctAntipodalityHandlingParamValue, scalingShearingSupportParamValue);
	}
	native private void setHardwareSkinningParam_ev_uint16_ev_uint16_bool(long pNativeObject, int boneCount, int weightCount, boolean correctAntipodalityHandling);
	public void setHardwareSkinningParam(int boneCount, int weightCount, boolean correctAntipodalityHandling)
	{
		int boneCountParamValue = boneCount;
		int weightCountParamValue = weightCount;
		boolean correctAntipodalityHandlingParamValue = correctAntipodalityHandling;
		setHardwareSkinningParam_ev_uint16_ev_uint16_bool(this.nativeObject.pointer, boneCountParamValue, weightCountParamValue, correctAntipodalityHandlingParamValue);
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
	native private void setDoBoneCalculations_bool(long pNativeObject, boolean doBoneCalculations);
	public void setDoBoneCalculations(boolean doBoneCalculations)
	{
		boolean doBoneCalculationsParamValue = doBoneCalculations;
		setDoBoneCalculations_bool(this.nativeObject.pointer, doBoneCalculationsParamValue);
	}
	protected  boolean resolveParameters_CProgramSet_callback(long programSet)
	{
		com.earthview.world.graphic.rtshadersystem.ProgramSet programSetParamValue = (programSet == 0L ? null : new com.earthview.world.graphic.rtshadersystem.ProgramSet(CreatedWhenConstruct.CWC_NotToCreate));
		if(programSetParamValue != null)
		{
		programSetParamValue.setDelegate(true);
		programSetParamValue.setInstancePointer(new InstancePointer(programSet));
		IClassFactory programSetParamValueClassFactory = GlobalClassFactoryMap.get(programSetParamValue.getCppInstanceTypeName());
		if (programSetParamValueClassFactory != null)
		{
			programSetParamValue.setDelegate(true);
			programSetParamValue = (com.earthview.world.graphic.rtshadersystem.ProgramSet)programSetParamValueClassFactory.create();
			programSetParamValue.setDelegate(true);
			programSetParamValue.setInstancePointer(new InstancePointer(programSet));
		}
		}
		boolean returnValue = resolveParameters(programSetParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean resolveParameters_CProgramSet(long pNativeObject, long programSet);
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

	protected  boolean resolveDependencies_CProgramSet_callback(long programSet)
	{
		com.earthview.world.graphic.rtshadersystem.ProgramSet programSetParamValue = (programSet == 0L ? null : new com.earthview.world.graphic.rtshadersystem.ProgramSet(CreatedWhenConstruct.CWC_NotToCreate));
		if(programSetParamValue != null)
		{
		programSetParamValue.setDelegate(true);
		programSetParamValue.setInstancePointer(new InstancePointer(programSet));
		IClassFactory programSetParamValueClassFactory = GlobalClassFactoryMap.get(programSetParamValue.getCppInstanceTypeName());
		if (programSetParamValueClassFactory != null)
		{
			programSetParamValue.setDelegate(true);
			programSetParamValue = (com.earthview.world.graphic.rtshadersystem.ProgramSet)programSetParamValueClassFactory.create();
			programSetParamValue.setDelegate(true);
			programSetParamValue.setInstancePointer(new InstancePointer(programSet));
		}
		}
		boolean returnValue = resolveDependencies(programSetParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  boolean addFunctionInvocations_CProgramSet_callback(long programSet)
	{
		com.earthview.world.graphic.rtshadersystem.ProgramSet programSetParamValue = (programSet == 0L ? null : new com.earthview.world.graphic.rtshadersystem.ProgramSet(CreatedWhenConstruct.CWC_NotToCreate));
		if(programSetParamValue != null)
		{
		programSetParamValue.setDelegate(true);
		programSetParamValue.setInstancePointer(new InstancePointer(programSet));
		IClassFactory programSetParamValueClassFactory = GlobalClassFactoryMap.get(programSetParamValue.getCppInstanceTypeName());
		if (programSetParamValueClassFactory != null)
		{
			programSetParamValue.setDelegate(true);
			programSetParamValue = (com.earthview.world.graphic.rtshadersystem.ProgramSet)programSetParamValueClassFactory.create();
			programSetParamValue.setDelegate(true);
			programSetParamValue.setInstancePointer(new InstancePointer(programSet));
		}
		}
		boolean returnValue = addFunctionInvocations(programSetParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	public HardwareSkinningTechnique(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public HardwareSkinningTechnique(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_copyFrom_CHardwareSkinningTechnique(long pNativeObject, String method);
	native protected void register_resolveParameters_CProgramSet(long pNativeObject, String method);
	native protected void register_resolveDependencies_CProgramSet(long pNativeObject, String method);
	native protected void register_addFunctionInvocations_CProgramSet(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_copyFrom_CHardwareSkinningTechnique(this.nativeObject.pointer, "copyFrom_CHardwareSkinningTechnique_callback");
			this.register_resolveParameters_CProgramSet(this.nativeObject.pointer, "resolveParameters_CProgramSet_callback");
			this.register_resolveDependencies_CProgramSet(this.nativeObject.pointer, "resolveDependencies_CProgramSet_callback");
			this.register_addFunctionInvocations_CProgramSet(this.nativeObject.pointer, "addFunctionInvocations_CProgramSet_callback");
		}
	}
	
	public static HardwareSkinningTechnique fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		HardwareSkinningTechnique obj = null;
 		if(baseObj instanceof HardwareSkinningTechnique)
		{
			obj = (HardwareSkinningTechnique)baseObj;
		} else {
			obj = new HardwareSkinningTechnique(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CHardwareSkinningTechnique");
			obj.increaseCast();
		}

		return obj;
	}
}
