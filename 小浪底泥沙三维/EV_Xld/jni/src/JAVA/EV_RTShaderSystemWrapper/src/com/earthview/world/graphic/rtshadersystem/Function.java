package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Function extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CFunction", new FunctionClassFactory());
	}

	public enum FunctionType implements INativeEnum<FunctionType> {
		FFT_INTERNAL(FunctionTypeHelper.ENUM_VALUES[0]),
		FFT_VS_MAIN(FunctionTypeHelper.ENUM_VALUES[1]),
		FFT_PS_MAIN(FunctionTypeHelper.ENUM_VALUES[2]);
		private int value;
		FunctionType(int i) {
			this.value = i;
		}
		public FunctionType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final FunctionType toEnum(int retval) {
			if(retval == FFT_INTERNAL.value){
				return FFT_INTERNAL;
			}
			else if(retval == FFT_VS_MAIN.value){
				return FFT_VS_MAIN;
			}
			else if(retval == FFT_PS_MAIN.value){
				return FFT_PS_MAIN;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class FunctionTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private long getName_void(long pNativeObject);
	/// Pixel shader main
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getDescription_void(long pNativeObject);
	public StringPointer getDescription()
	{
		long returnValue = getDescription_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long resolveInputParameter_Semantic_int_Content_GpuConstantType(long pNativeObject, int semantic, int index, int content, int type);
	public com.earthview.world.graphic.rtshadersystem.ParameterPtr resolveInputParameter(com.earthview.world.graphic.rtshadersystem.Parameter.Semantic semantic, int index, com.earthview.world.graphic.rtshadersystem.Parameter.Content content, com.earthview.world.graphic.GpuConstantType type)
	{
		int semanticParamValue = semantic.getValue();
		int indexParamValue = index;
		int contentParamValue = content.getValue();
		int typeParamValue = type.getValue();
		long returnValue = resolveInputParameter_Semantic_int_Content_GpuConstantType(this.nativeObject.pointer, semanticParamValue, indexParamValue, contentParamValue, typeParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private long resolveOutputParameter_Semantic_int_Content_GpuConstantType(long pNativeObject, int semantic, int index, int content, int type);
	public com.earthview.world.graphic.rtshadersystem.ParameterPtr resolveOutputParameter(com.earthview.world.graphic.rtshadersystem.Parameter.Semantic semantic, int index, com.earthview.world.graphic.rtshadersystem.Parameter.Content content, com.earthview.world.graphic.GpuConstantType type)
	{
		int semanticParamValue = semantic.getValue();
		int indexParamValue = index;
		int contentParamValue = content.getValue();
		int typeParamValue = type.getValue();
		long returnValue = resolveOutputParameter_Semantic_int_Content_GpuConstantType(this.nativeObject.pointer, semanticParamValue, indexParamValue, contentParamValue, typeParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private long resolveLocalParameter_Semantic_int_EVString_GpuConstantType(long pNativeObject, int semantic, int index, String name, int type);
	public com.earthview.world.graphic.rtshadersystem.ParameterPtr resolveLocalParameter(com.earthview.world.graphic.rtshadersystem.Parameter.Semantic semantic, int index, String name, com.earthview.world.graphic.GpuConstantType type)
	{
		int semanticParamValue = semantic.getValue();
		int indexParamValue = index;
		String nameParamValue = name;
		int typeParamValue = type.getValue();
		long returnValue = resolveLocalParameter_Semantic_int_EVString_GpuConstantType(this.nativeObject.pointer, semanticParamValue, indexParamValue, nameParamValue, typeParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private long resolveLocalParameter_Semantic_int_Content_GpuConstantType(long pNativeObject, int semantic, int index, int content, int type);
	public com.earthview.world.graphic.rtshadersystem.ParameterPtr resolveLocalParameter(com.earthview.world.graphic.rtshadersystem.Parameter.Semantic semantic, int index, com.earthview.world.graphic.rtshadersystem.Parameter.Content content, com.earthview.world.graphic.GpuConstantType type)
	{
		int semanticParamValue = semantic.getValue();
		int indexParamValue = index;
		int contentParamValue = content.getValue();
		int typeParamValue = type.getValue();
		long returnValue = resolveLocalParameter_Semantic_int_Content_GpuConstantType(this.nativeObject.pointer, semanticParamValue, indexParamValue, contentParamValue, typeParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long getParameterByName_ShaderParameterList_EVString(long parameterList, String name);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr getParameterByName(com.earthview.world.graphic.rtshadersystem.ShaderParameterList parameterList, String name)
	{
		long parameterListParamValue = parameterList.nativeObject.pointer;
		String nameParamValue = name;
		long returnValue = getParameterByName_ShaderParameterList_EVString(parameterListParamValue, nameParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long getParameterBySemantic_ShaderParameterList_Semantic_int(long parameterList, int semantic, int index);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr getParameterBySemantic(com.earthview.world.graphic.rtshadersystem.ShaderParameterList parameterList, com.earthview.world.graphic.rtshadersystem.Parameter.Semantic semantic, int index)
	{
		long parameterListParamValue = parameterList.nativeObject.pointer;
		int semanticParamValue = semantic.getValue();
		int indexParamValue = index;
		long returnValue = getParameterBySemantic_ShaderParameterList_Semantic_int(parameterListParamValue, semanticParamValue, indexParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private long getParameterByContent_ShaderParameterList_Content_GpuConstantType(long pNativeObject, long parameterList, int content, int type);
	public com.earthview.world.graphic.rtshadersystem.ParameterPtr getParameterByContent(com.earthview.world.graphic.rtshadersystem.ShaderParameterList parameterList, com.earthview.world.graphic.rtshadersystem.Parameter.Content content, com.earthview.world.graphic.GpuConstantType type)
	{
		long parameterListParamValue = parameterList.nativeObject.pointer;
		int contentParamValue = content.getValue();
		int typeParamValue = type.getValue();
		long returnValue = getParameterByContent_ShaderParameterList_Content_GpuConstantType(this.nativeObject.pointer, parameterListParamValue, contentParamValue, typeParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private long getInputParameters_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.ShaderParameterList getInputParameters()
	{
		long returnValue = getInputParameters_void(this.nativeObject.pointer);
		com.earthview.world.graphic.rtshadersystem.ShaderParameterList __returnValue = new com.earthview.world.graphic.rtshadersystem.ShaderParameterList(CreatedWhenConstruct.CWC_NotToCreate, "ShaderParameterList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ShaderParameterList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ShaderParameterList");
		}
		return __returnValue;
	}
	native private long getOutputParameters_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.ShaderParameterList getOutputParameters()
	{
		long returnValue = getOutputParameters_void(this.nativeObject.pointer);
		com.earthview.world.graphic.rtshadersystem.ShaderParameterList __returnValue = new com.earthview.world.graphic.rtshadersystem.ShaderParameterList(CreatedWhenConstruct.CWC_NotToCreate, "ShaderParameterList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ShaderParameterList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ShaderParameterList");
		}
		return __returnValue;
	}
	native private long getLocalParameters_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.ShaderParameterList getLocalParameters()
	{
		long returnValue = getLocalParameters_void(this.nativeObject.pointer);
		com.earthview.world.graphic.rtshadersystem.ShaderParameterList __returnValue = new com.earthview.world.graphic.rtshadersystem.ShaderParameterList(CreatedWhenConstruct.CWC_NotToCreate, "ShaderParameterList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ShaderParameterList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ShaderParameterList");
		}
		return __returnValue;
	}
	native private void addAtomInstance_CFunctionAtom(long pNativeObject, long atomInstance);
	public void addAtomInstance(com.earthview.world.graphic.rtshadersystem.FunctionAtom atomInstance)
	{
		long atomInstanceParamValue = (atomInstance == null ? 0L : atomInstance.nativeObject.pointer);
		addAtomInstance_CFunctionAtom(this.nativeObject.pointer, atomInstanceParamValue);
	}
	native private boolean deleteAtomInstance_CFunctionAtom(long pNativeObject, long atomInstance);
	public boolean deleteAtomInstance(com.earthview.world.graphic.rtshadersystem.FunctionAtom atomInstance)
	{
		long atomInstanceParamValue = (atomInstance == null ? 0L : atomInstance.nativeObject.pointer);
		boolean returnValue = deleteAtomInstance_CFunctionAtom(this.nativeObject.pointer, atomInstanceParamValue);
		return returnValue;
	}
	native private void sortAtomInstances_void(long pNativeObject);
	public void sortAtomInstances()
	{
		sortAtomInstances_void(this.nativeObject.pointer);
	}
	native private long getAtomInstances_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.FunctionAtomInstanceList getAtomInstances()
	{
		long returnValue = getAtomInstances_void(this.nativeObject.pointer);
		com.earthview.world.graphic.rtshadersystem.FunctionAtomInstanceList __returnValue = new com.earthview.world.graphic.rtshadersystem.FunctionAtomInstanceList(CreatedWhenConstruct.CWC_NotToCreate, "FunctionAtomInstanceList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.FunctionAtomInstanceList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FunctionAtomInstanceList");
		}
		return __returnValue;
	}
	native private void addInputParameter_ParameterPtr(long pNativeObject, long parameter);
	public void addInputParameter(com.earthview.world.graphic.rtshadersystem.ParameterPtr parameter)
	{
		long parameterParamValue = parameter.nativeObject.pointer;
		addInputParameter_ParameterPtr(this.nativeObject.pointer, parameterParamValue);
	}
	native private void addOutputParameter_ParameterPtr(long pNativeObject, long parameter);
	public void addOutputParameter(com.earthview.world.graphic.rtshadersystem.ParameterPtr parameter)
	{
		long parameterParamValue = parameter.nativeObject.pointer;
		addOutputParameter_ParameterPtr(this.nativeObject.pointer, parameterParamValue);
	}
	native private void deleteInputParameter_ParameterPtr(long pNativeObject, long parameter);
	public void deleteInputParameter(com.earthview.world.graphic.rtshadersystem.ParameterPtr parameter)
	{
		long parameterParamValue = parameter.nativeObject.pointer;
		deleteInputParameter_ParameterPtr(this.nativeObject.pointer, parameterParamValue);
	}
	native private void deleteOutputParameter_ParameterPtr(long pNativeObject, long parameter);
	public void deleteOutputParameter(com.earthview.world.graphic.rtshadersystem.ParameterPtr parameter)
	{
		long parameterParamValue = parameter.nativeObject.pointer;
		deleteOutputParameter_ParameterPtr(this.nativeObject.pointer, parameterParamValue);
	}
	native private void deleteAllInputParameters_void(long pNativeObject);
	public void deleteAllInputParameters()
	{
		deleteAllInputParameters_void(this.nativeObject.pointer);
	}
	native private void deleteAllOutputParameters_void(long pNativeObject);
	public void deleteAllOutputParameters()
	{
		deleteAllOutputParameters_void(this.nativeObject.pointer);
	}
	native private int getFunctionType_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.Function.FunctionType getFunctionType()
	{
		int returnValue = getFunctionType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.rtshadersystem.Function.FunctionType.toEnum(returnValue);
	}
	public Function(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Function(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Function fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Function obj = null;
 		if(baseObj instanceof Function)
		{
			obj = (Function)baseObj;
		} else {
			obj = new Function(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFunction");
			obj.increaseCast();
		}

		return obj;
	}
}
