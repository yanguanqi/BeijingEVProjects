package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Hlslprogramprocessor extends com.earthview.world.graphic.rtshadersystem.ProgramProcessor {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CHLSLProgramProcessor", new HlslprogramprocessorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::JCHLSLProgramProcessorProxy", new HlslprogramprocessorClassFactory());
	}

	public Hlslprogramprocessor() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCHLSLProgramProcessorProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.Hlslprogramprocessor".equals(this.getClass().getName()))
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

	native private static String get_TargetLanguage_void();
	public static String get_TargetLanguage()
	{
		String jniValue = get_TargetLanguage_void();
		
		return jniValue;
	}
	
	native private static void set_TargetLanguage_EVString (String value);
	public static void set_TargetLanguage(String TargetLanguage)
	{
		String TargetLanguageParamValue = TargetLanguage;
		
		set_TargetLanguage_EVString(TargetLanguageParamValue);
	}
	
	public Hlslprogramprocessor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Hlslprogramprocessor(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Hlslprogramprocessor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Hlslprogramprocessor obj = null;
 		if(baseObj instanceof Hlslprogramprocessor)
		{
			obj = (Hlslprogramprocessor)baseObj;
		} else {
			obj = new Hlslprogramprocessor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CHLSLProgramProcessor");
			obj.increaseCast();
		}

		return obj;
	}
}
