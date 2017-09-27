package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ProgramProcessor extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CProgramProcessor", new ProgramProcessorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::JCProgramProcessorProxy", new ProgramProcessorClassFactory());
	}

	public ProgramProcessor() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCProgramProcessorProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.ProgramProcessor".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  String getTargetLanguage_void_callback()
	{
		String returnValue = getTargetLanguage();
		String __returnValue = returnValue;
		return __returnValue;
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

	protected  boolean preCreateGpuPrograms_CProgramSet_callback(long programSet)
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
		boolean returnValue = preCreateGpuPrograms(programSetParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  boolean postCreateGpuPrograms_CProgramSet_callback(long programSet)
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
		boolean returnValue = postCreateGpuPrograms(programSetParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  boolean compactVsOutputs_CFunction_CFunction_callback(long vsMain, long fsMain)
	{
		com.earthview.world.graphic.rtshadersystem.Function vsMainParamValue = (vsMain == 0L ? null : new com.earthview.world.graphic.rtshadersystem.Function(CreatedWhenConstruct.CWC_NotToCreate));
		if(vsMainParamValue != null)
		{
		vsMainParamValue.setDelegate(true);
		vsMainParamValue.setInstancePointer(new InstancePointer(vsMain));
		IClassFactory vsMainParamValueClassFactory = GlobalClassFactoryMap.get(vsMainParamValue.getCppInstanceTypeName());
		if (vsMainParamValueClassFactory != null)
		{
			vsMainParamValue.setDelegate(true);
			vsMainParamValue = (com.earthview.world.graphic.rtshadersystem.Function)vsMainParamValueClassFactory.create();
			vsMainParamValue.setDelegate(true);
			vsMainParamValue.setInstancePointer(new InstancePointer(vsMain));
		}
		}
		com.earthview.world.graphic.rtshadersystem.Function fsMainParamValue = (fsMain == 0L ? null : new com.earthview.world.graphic.rtshadersystem.Function(CreatedWhenConstruct.CWC_NotToCreate));
		if(fsMainParamValue != null)
		{
		fsMainParamValue.setDelegate(true);
		fsMainParamValue.setInstancePointer(new InstancePointer(fsMain));
		IClassFactory fsMainParamValueClassFactory = GlobalClassFactoryMap.get(fsMainParamValue.getCppInstanceTypeName());
		if (fsMainParamValueClassFactory != null)
		{
			fsMainParamValue.setDelegate(true);
			fsMainParamValue = (com.earthview.world.graphic.rtshadersystem.Function)fsMainParamValueClassFactory.create();
			fsMainParamValue.setDelegate(true);
			fsMainParamValue.setInstancePointer(new InstancePointer(fsMain));
		}
		}
		boolean returnValue = compactVsOutputs(vsMainParamValue, fsMainParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean compactVsOutputs_CFunction_CFunction(long pNativeObject, long vsMain, long fsMain);
	/// Protected types.
	public boolean compactVsOutputs(com.earthview.world.graphic.rtshadersystem.Function vsMain, com.earthview.world.graphic.rtshadersystem.Function fsMain)
	{
		long vsMainParamValue = (vsMain == null ? 0L : vsMain.nativeObject.pointer);
		long fsMainParamValue = (fsMain == null ? 0L : fsMain.nativeObject.pointer);
		boolean returnValue = compactVsOutputs_CFunction_CFunction(this.nativeObject.pointer, vsMainParamValue, fsMainParamValue);
		return returnValue;
	}
	native private boolean compactVsOutputs_CFunction_CFunction_NoVirtual(long pNativeObject, long vsMain, long fsMain);
	protected boolean compactVsOutputs_NoVirtual(com.earthview.world.graphic.rtshadersystem.Function vsMain, com.earthview.world.graphic.rtshadersystem.Function fsMain)
	{
		long vsMainParamValue = (vsMain == null ? 0L : vsMain.nativeObject.pointer);
		long fsMainParamValue = (fsMain == null ? 0L : fsMain.nativeObject.pointer);
		boolean returnValue = compactVsOutputs_CFunction_CFunction_NoVirtual(this.nativeObject.pointer, vsMainParamValue, fsMainParamValue);
		return returnValue;
	}

	public ProgramProcessor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ProgramProcessor(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static ProgramProcessor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ProgramProcessor obj = null;
 		if(baseObj instanceof ProgramProcessor)
		{
			obj = (ProgramProcessor)baseObj;
		} else {
			obj = new ProgramProcessor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CProgramProcessor");
			obj.increaseCast();
		}

		return obj;
	}
}
