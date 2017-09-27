package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Program extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CProgram", new ProgramClassFactory());
	}

	native private int getType_void(long pNativeObject);
	public com.earthview.world.graphic.GpuProgramType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.GpuProgramType.toEnum(returnValue);
	}
	native private long resolveAutoParameterReal_AutoConstantType_Real_size_t(long pNativeObject, int autoType, double data, long size);
	public com.earthview.world.graphic.rtshadersystem.UniformParameterPtr resolveAutoParameterReal(com.earthview.world.graphic.GpuProgramParameters.AutoConstantType autoType, double data, long size)
	{
		int autoTypeParamValue = autoType.getValue();
		double dataParamValue = data;
		long sizeParamValue = size;
		long returnValue = resolveAutoParameterReal_AutoConstantType_Real_size_t(this.nativeObject.pointer, autoTypeParamValue, dataParamValue, sizeParamValue);
		com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		}
		return __returnValue;
	}
	native private long resolveAutoParameterReal_AutoConstantType_Real(long pNativeObject, int autoType, double data);
	public com.earthview.world.graphic.rtshadersystem.UniformParameterPtr resolveAutoParameterReal(com.earthview.world.graphic.GpuProgramParameters.AutoConstantType autoType, double data)
	{
		int autoTypeParamValue = autoType.getValue();
		double dataParamValue = data;
		long returnValue = resolveAutoParameterReal_AutoConstantType_Real(this.nativeObject.pointer, autoTypeParamValue, dataParamValue);
		com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		}
		return __returnValue;
	}
	native private long resolveAutoParameterReal_AutoConstantType_GpuConstantType_Real_size_t(long pNativeObject, int autoType, int type, double data, long size);
	public com.earthview.world.graphic.rtshadersystem.UniformParameterPtr resolveAutoParameterReal(com.earthview.world.graphic.GpuProgramParameters.AutoConstantType autoType, com.earthview.world.graphic.GpuConstantType type, double data, long size)
	{
		int autoTypeParamValue = autoType.getValue();
		int typeParamValue = type.getValue();
		double dataParamValue = data;
		long sizeParamValue = size;
		long returnValue = resolveAutoParameterReal_AutoConstantType_GpuConstantType_Real_size_t(this.nativeObject.pointer, autoTypeParamValue, typeParamValue, dataParamValue, sizeParamValue);
		com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		}
		return __returnValue;
	}
	native private long resolveAutoParameterReal_AutoConstantType_GpuConstantType_Real(long pNativeObject, int autoType, int type, double data);
	public com.earthview.world.graphic.rtshadersystem.UniformParameterPtr resolveAutoParameterReal(com.earthview.world.graphic.GpuProgramParameters.AutoConstantType autoType, com.earthview.world.graphic.GpuConstantType type, double data)
	{
		int autoTypeParamValue = autoType.getValue();
		int typeParamValue = type.getValue();
		double dataParamValue = data;
		long returnValue = resolveAutoParameterReal_AutoConstantType_GpuConstantType_Real(this.nativeObject.pointer, autoTypeParamValue, typeParamValue, dataParamValue);
		com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		}
		return __returnValue;
	}
	native private long resolveAutoParameterInt_AutoConstantType_size_t_size_t(long pNativeObject, int autoType, long data, long size);
	public com.earthview.world.graphic.rtshadersystem.UniformParameterPtr resolveAutoParameterInt(com.earthview.world.graphic.GpuProgramParameters.AutoConstantType autoType, long data, long size)
	{
		int autoTypeParamValue = autoType.getValue();
		long dataParamValue = data;
		long sizeParamValue = size;
		long returnValue = resolveAutoParameterInt_AutoConstantType_size_t_size_t(this.nativeObject.pointer, autoTypeParamValue, dataParamValue, sizeParamValue);
		com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		}
		return __returnValue;
	}
	native private long resolveAutoParameterInt_AutoConstantType_size_t(long pNativeObject, int autoType, long data);
	public com.earthview.world.graphic.rtshadersystem.UniformParameterPtr resolveAutoParameterInt(com.earthview.world.graphic.GpuProgramParameters.AutoConstantType autoType, long data)
	{
		int autoTypeParamValue = autoType.getValue();
		long dataParamValue = data;
		long returnValue = resolveAutoParameterInt_AutoConstantType_size_t(this.nativeObject.pointer, autoTypeParamValue, dataParamValue);
		com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		}
		return __returnValue;
	}
	native private long resolveAutoParameterInt_AutoConstantType_GpuConstantType_size_t_size_t(long pNativeObject, int autoType, int type, long data, long size);
	public com.earthview.world.graphic.rtshadersystem.UniformParameterPtr resolveAutoParameterInt(com.earthview.world.graphic.GpuProgramParameters.AutoConstantType autoType, com.earthview.world.graphic.GpuConstantType type, long data, long size)
	{
		int autoTypeParamValue = autoType.getValue();
		int typeParamValue = type.getValue();
		long dataParamValue = data;
		long sizeParamValue = size;
		long returnValue = resolveAutoParameterInt_AutoConstantType_GpuConstantType_size_t_size_t(this.nativeObject.pointer, autoTypeParamValue, typeParamValue, dataParamValue, sizeParamValue);
		com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		}
		return __returnValue;
	}
	native private long resolveParameter_GpuConstantType_int_ev_uint16_EVString_size_t(long pNativeObject, int type, int index, int variability, String suggestedName, long size);
	public com.earthview.world.graphic.rtshadersystem.UniformParameterPtr resolveParameter(com.earthview.world.graphic.GpuConstantType type, int index, int variability, String suggestedName, long size)
	{
		int typeParamValue = type.getValue();
		int indexParamValue = index;
		int variabilityParamValue = variability;
		String suggestedNameParamValue = suggestedName;
		long sizeParamValue = size;
		long returnValue = resolveParameter_GpuConstantType_int_ev_uint16_EVString_size_t(this.nativeObject.pointer, typeParamValue, indexParamValue, variabilityParamValue, suggestedNameParamValue, sizeParamValue);
		com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		}
		return __returnValue;
	}
	native private long resolveParameter_GpuConstantType_int_ev_uint16_EVString(long pNativeObject, int type, int index, int variability, String suggestedName);
	public com.earthview.world.graphic.rtshadersystem.UniformParameterPtr resolveParameter(com.earthview.world.graphic.GpuConstantType type, int index, int variability, String suggestedName)
	{
		int typeParamValue = type.getValue();
		int indexParamValue = index;
		int variabilityParamValue = variability;
		String suggestedNameParamValue = suggestedName;
		long returnValue = resolveParameter_GpuConstantType_int_ev_uint16_EVString(this.nativeObject.pointer, typeParamValue, indexParamValue, variabilityParamValue, suggestedNameParamValue);
		com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		}
		return __returnValue;
	}
	native private long getParameterByName_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.rtshadersystem.UniformParameterPtr getParameterByName(String name)
	{
		String nameParamValue = name;
		long returnValue = getParameterByName_EVString(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		}
		return __returnValue;
	}
	native private long getParameterByAutoType_AutoConstantType(long pNativeObject, int autoType);
	public com.earthview.world.graphic.rtshadersystem.UniformParameterPtr getParameterByAutoType(com.earthview.world.graphic.GpuProgramParameters.AutoConstantType autoType)
	{
		int autoTypeParamValue = autoType.getValue();
		long returnValue = getParameterByAutoType_AutoConstantType(this.nativeObject.pointer, autoTypeParamValue);
		com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		}
		return __returnValue;
	}
	native private long getParameterByType_GpuConstantType_int(long pNativeObject, int type, int index);
	public com.earthview.world.graphic.rtshadersystem.UniformParameterPtr getParameterByType(com.earthview.world.graphic.GpuConstantType type, int index)
	{
		int typeParamValue = type.getValue();
		int indexParamValue = index;
		long returnValue = getParameterByType_GpuConstantType_int(this.nativeObject.pointer, typeParamValue, indexParamValue);
		com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		}
		return __returnValue;
	}
	native private long getParameters_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.UniformParameterList getParameters()
	{
		long returnValue = getParameters_void(this.nativeObject.pointer);
		com.earthview.world.graphic.rtshadersystem.UniformParameterList __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterList(CreatedWhenConstruct.CWC_NotToCreate, "UniformParameterList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterList");
		}
		return __returnValue;
	}
	native private long createFunction_EVString_EVString_FunctionType(long pNativeObject, String name, String desc, int functionType);
	public com.earthview.world.graphic.rtshadersystem.Function createFunction(String name, String desc, com.earthview.world.graphic.rtshadersystem.Function.FunctionType functionType)
	{
		String nameParamValue = name;
		String descParamValue = desc;
		int functionTypeParamValue = functionType.getValue();
		long returnValue = createFunction_EVString_EVString_FunctionType(this.nativeObject.pointer, nameParamValue, descParamValue, functionTypeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.rtshadersystem.Function __returnValue = new com.earthview.world.graphic.rtshadersystem.Function(CreatedWhenConstruct.CWC_NotToCreate, "CFunction");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.Function)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFunction");
		}
		return __returnValue;
	}
	native private long getFunctionByName_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.rtshadersystem.Function getFunctionByName(String name)
	{
		String nameParamValue = name;
		long returnValue = getFunctionByName_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.rtshadersystem.Function __returnValue = new com.earthview.world.graphic.rtshadersystem.Function(CreatedWhenConstruct.CWC_NotToCreate, "CFunction");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.Function)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFunction");
		}
		return __returnValue;
	}
	native private long getFunctions_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.ShaderFunctionList getFunctions()
	{
		long returnValue = getFunctions_void(this.nativeObject.pointer);
		com.earthview.world.graphic.rtshadersystem.ShaderFunctionList __returnValue = new com.earthview.world.graphic.rtshadersystem.ShaderFunctionList(CreatedWhenConstruct.CWC_NotToCreate, "ShaderFunctionList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ShaderFunctionList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ShaderFunctionList");
		}
		return __returnValue;
	}
	native private void setEntryPointFunction_CFunction(long pNativeObject, long function);
	public void setEntryPointFunction(com.earthview.world.graphic.rtshadersystem.Function function)
	{
		long functionParamValue = (function == null ? 0L : function.nativeObject.pointer);
		setEntryPointFunction_CFunction(this.nativeObject.pointer, functionParamValue);
	}
	native private long getEntryPointFunction_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.Function getEntryPointFunction()
	{
		long returnValue = getEntryPointFunction_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.rtshadersystem.Function __returnValue = new com.earthview.world.graphic.rtshadersystem.Function(CreatedWhenConstruct.CWC_NotToCreate, "CFunction");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.Function)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFunction");
		}
		return __returnValue;
	}
	native private void addDependency_EVString(long pNativeObject, String libFileName);
	public void addDependency(String libFileName)
	{
		String libFileNameParamValue = libFileName;
		addDependency_EVString(this.nativeObject.pointer, libFileNameParamValue);
	}
	native private long getDependencyCount_void(long pNativeObject);
	public long getDependencyCount()
	{
		long returnValue = getDependencyCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getDependency_ev_uint32(long pNativeObject, long index);
	public StringPointer getDependency(long index)
	{
		long indexParamValue = index;
		long returnValue = getDependency_ev_uint32(this.nativeObject.pointer, indexParamValue);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setSkeletalAnimationIncluded_bool(long pNativeObject, boolean value);
	public void setSkeletalAnimationIncluded(boolean value)
	{
		boolean valueParamValue = value;
		setSkeletalAnimationIncluded_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getSkeletalAnimationIncluded_void(long pNativeObject);
	public boolean getSkeletalAnimationIncluded()
	{
		boolean returnValue = getSkeletalAnimationIncluded_void(this.nativeObject.pointer);
		return returnValue;
	}
	public Program(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Program(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Program fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Program obj = null;
 		if(baseObj instanceof Program)
		{
			obj = (Program)baseObj;
		} else {
			obj = new Program(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CProgram");
			obj.increaseCast();
		}

		return obj;
	}
}
