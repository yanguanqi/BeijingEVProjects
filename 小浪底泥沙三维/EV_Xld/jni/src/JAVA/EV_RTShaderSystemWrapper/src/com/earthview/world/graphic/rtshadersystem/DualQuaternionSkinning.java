package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DualQuaternionSkinning extends com.earthview.world.graphic.rtshadersystem.HardwareSkinningTechnique {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning", new DualQuaternionSkinningClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::JCDualQuaternionSkinningProxy", new DualQuaternionSkinningClassFactory());
	}

	public DualQuaternionSkinning() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDualQuaternionSkinningProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.DualQuaternionSkinning".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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

	public DualQuaternionSkinning(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DualQuaternionSkinning(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void copyFrom(com.earthview.world.graphic.rtshadersystem.HardwareSkinningTechnique hardSkin)
	{
		super.copyFrom_NoVirtual(hardSkin);
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
	
	public static DualQuaternionSkinning fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DualQuaternionSkinning obj = null;
 		if(baseObj instanceof DualQuaternionSkinning)
		{
			obj = (DualQuaternionSkinning)baseObj;
		} else {
			obj = new DualQuaternionSkinning(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDualQuaternionSkinning");
			obj.increaseCast();
		}

		return obj;
	}
}
