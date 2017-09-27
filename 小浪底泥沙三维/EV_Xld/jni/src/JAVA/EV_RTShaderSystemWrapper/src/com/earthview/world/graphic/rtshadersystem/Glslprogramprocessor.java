package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Glslprogramprocessor extends com.earthview.world.graphic.rtshadersystem.ProgramProcessor {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CGLSLProgramProcessor", new GlslprogramprocessorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::JCGLSLProgramProcessorProxy", new GlslprogramprocessorClassFactory());
	}

	public Glslprogramprocessor() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCGLSLProgramProcessorProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.Glslprogramprocessor".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private String getTargetLanguage_void(long pNativeObject);
	public String getTargetLanguage()
	{
		String returnValue = getTargetLanguage_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getTargetLanguage_void_NoVirtual(long pNativeObject);
	protected String getTargetLanguage_NoVirtual()
	{
		String returnValue = getTargetLanguage_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean preCreateGpuPrograms_CProgramSet(long pNativeObject, long programSet);
	public boolean preCreateGpuPrograms(com.earthview.world.graphic.rtshadersystem.ProgramSet programSet)
	{
		long programSetParamValue = (programSet == null ? 0L : programSet.nativeObject.pointer);
		boolean returnValue = preCreateGpuPrograms_CProgramSet(this.nativeObject.pointer, programSetParamValue);
		return returnValue;
	}
	native private boolean preCreateGpuPrograms_CProgramSet_NoVirtual(long pNativeObject, long programSet);
	protected boolean preCreateGpuPrograms_NoVirtual(com.earthview.world.graphic.rtshadersystem.ProgramSet programSet)
	{
		long programSetParamValue = (programSet == null ? 0L : programSet.nativeObject.pointer);
		boolean returnValue = preCreateGpuPrograms_CProgramSet_NoVirtual(this.nativeObject.pointer, programSetParamValue);
		return returnValue;
	}

	native private boolean postCreateGpuPrograms_CProgramSet(long pNativeObject, long programSet);
	public boolean postCreateGpuPrograms(com.earthview.world.graphic.rtshadersystem.ProgramSet programSet)
	{
		long programSetParamValue = (programSet == null ? 0L : programSet.nativeObject.pointer);
		boolean returnValue = postCreateGpuPrograms_CProgramSet(this.nativeObject.pointer, programSetParamValue);
		return returnValue;
	}
	native private boolean postCreateGpuPrograms_CProgramSet_NoVirtual(long pNativeObject, long programSet);
	protected boolean postCreateGpuPrograms_NoVirtual(com.earthview.world.graphic.rtshadersystem.ProgramSet programSet)
	{
		long programSetParamValue = (programSet == null ? 0L : programSet.nativeObject.pointer);
		boolean returnValue = postCreateGpuPrograms_CProgramSet_NoVirtual(this.nativeObject.pointer, programSetParamValue);
		return returnValue;
	}

	public Glslprogramprocessor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Glslprogramprocessor(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/// Protected types.
	public boolean compactVsOutputs(com.earthview.world.graphic.rtshadersystem.Function vsMain, com.earthview.world.graphic.rtshadersystem.Function fsMain)
	{
		return super.compactVsOutputs_NoVirtual(vsMain, fsMain);
	}
	
	native protected void register_getTargetLanguage_void(long pNativeObject, String method);
	native protected void register_preCreateGpuPrograms_CProgramSet(long pNativeObject, String method);
	native protected void register_postCreateGpuPrograms_CProgramSet(long pNativeObject, String method);
	native protected void register_compactVsOutputs_CFunction_CFunction(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getTargetLanguage_void(this.nativeObject.pointer, "getTargetLanguage_void_callback");
			this.register_preCreateGpuPrograms_CProgramSet(this.nativeObject.pointer, "preCreateGpuPrograms_CProgramSet_callback");
			this.register_postCreateGpuPrograms_CProgramSet(this.nativeObject.pointer, "postCreateGpuPrograms_CProgramSet_callback");
			this.register_compactVsOutputs_CFunction_CFunction(this.nativeObject.pointer, "compactVsOutputs_CFunction_CFunction_callback");
		}
	}
	
	public static Glslprogramprocessor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Glslprogramprocessor obj = null;
 		if(baseObj instanceof Glslprogramprocessor)
		{
			obj = (Glslprogramprocessor)baseObj;
		} else {
			obj = new Glslprogramprocessor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGLSLProgramProcessor");
			obj.increaseCast();
		}

		return obj;
	}
}
