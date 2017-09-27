package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class UniformParameter extends com.earthview.world.graphic.rtshadersystem.Parameter {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CUniformParameter", new UniformParameterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::JCUniformParameterProxy", new UniformParameterClassFactory());
	}

	public UniformParameter(com.earthview.world.graphic.GpuConstantType type, String name, com.earthview.world.graphic.rtshadersystem.Parameter.Semantic semantic, int index, com.earthview.world.graphic.rtshadersystem.Parameter.Content content, int variability, long size) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer semanticPtr = new BasePointer(semantic);
		list.add("semantic", semanticPtr.get());
		BasePointer indexPtr = new BasePointer(index);
		list.add("index", indexPtr.get());
		BasePointer contentPtr = new BasePointer(content);
		list.add("content", contentPtr.get());
		BasePointer variabilityPtr = new BasePointer(variability);
		list.add("variability", variabilityPtr.get());
		BasePointer sizePtr = new BasePointer(size);
		list.add("size", sizePtr.get());
		Create("JCUniformParameterProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.UniformParameter".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public UniformParameter(com.earthview.world.graphic.GpuProgramParameters.AutoConstantType autoType, double fAutoConstantData, long size) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer autoTypePtr = new BasePointer(autoType);
		list.add("autoType", autoTypePtr.get());
		BasePointer fAutoConstantDataPtr = new BasePointer(fAutoConstantData);
		list.add("fAutoConstantData", fAutoConstantDataPtr.get());
		BasePointer sizePtr = new BasePointer(size);
		list.add("size", sizePtr.get());
		Create("JCUniformParameterProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.UniformParameter".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public UniformParameter(com.earthview.world.graphic.GpuProgramParameters.AutoConstantType autoType, double fAutoConstantData, long size, com.earthview.world.graphic.GpuConstantType type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer autoTypePtr = new BasePointer(autoType);
		list.add("autoType", autoTypePtr.get());
		BasePointer fAutoConstantDataPtr = new BasePointer(fAutoConstantData);
		list.add("fAutoConstantData", fAutoConstantDataPtr.get());
		BasePointer sizePtr = new BasePointer(size);
		list.add("size", sizePtr.get());
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("JCUniformParameterProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.UniformParameter".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public UniformParameter(com.earthview.world.graphic.GpuProgramParameters.AutoConstantType autoType, long nAutoConstantData, long size) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer autoTypePtr = new BasePointer(autoType);
		list.add("autoType", autoTypePtr.get());
		BasePointer nAutoConstantDataPtr = new BasePointer(nAutoConstantData);
		list.add("nAutoConstantData", nAutoConstantDataPtr.get());
		BasePointer sizePtr = new BasePointer(size);
		list.add("size", sizePtr.get());
		Create("JCUniformParameterProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.UniformParameter".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public UniformParameter(com.earthview.world.graphic.GpuProgramParameters.AutoConstantType autoType, long nAutoConstantData, long size, com.earthview.world.graphic.GpuConstantType type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer autoTypePtr = new BasePointer(autoType);
		list.add("autoType", autoTypePtr.get());
		BasePointer nAutoConstantDataPtr = new BasePointer(nAutoConstantData);
		list.add("nAutoConstantData", nAutoConstantDataPtr.get());
		BasePointer sizePtr = new BasePointer(size);
		list.add("size", sizePtr.get());
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("JCUniformParameterProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.UniformParameter".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getAutoConstantIntData_void(long pNativeObject);
	public long getAutoConstantIntData()
	{
		long returnValue = getAutoConstantIntData_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getAutoConstantRealData_void(long pNativeObject);
	public double getAutoConstantRealData()
	{
		double returnValue = getAutoConstantRealData_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isFloat_void(long pNativeObject);
	public boolean isFloat()
	{
		boolean returnValue = isFloat_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSampler_void(long pNativeObject);
	public boolean isSampler()
	{
		boolean returnValue = isSampler_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isAutoConstantParameter_void(long pNativeObject);
	public boolean isAutoConstantParameter()
	{
		boolean returnValue = isAutoConstantParameter_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isAutoConstantIntParameter_void(long pNativeObject);
	public boolean isAutoConstantIntParameter()
	{
		boolean returnValue = isAutoConstantIntParameter_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isAutoConstantRealParameter_void(long pNativeObject);
	public boolean isAutoConstantRealParameter()
	{
		boolean returnValue = isAutoConstantRealParameter_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getAutoConstantType_void(long pNativeObject);
	public com.earthview.world.graphic.GpuProgramParameters.AutoConstantType getAutoConstantType()
	{
		int returnValue = getAutoConstantType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.GpuProgramParameters.AutoConstantType.toEnum(returnValue);
	}
	native private int getVariability_void(long pNativeObject);
	public int getVariability()
	{
		int returnValue = getVariability_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void bind_GpuProgramParametersSharedPtr(long pNativeObject, long paramsPtr);
	public void bind(com.earthview.world.graphic.GpuProgramParametersSharedPtr paramsPtr)
	{
		long paramsPtrParamValue = paramsPtr.nativeObject.pointer;
		bind_GpuProgramParametersSharedPtr(this.nativeObject.pointer, paramsPtrParamValue);
	}
	native private void setGpuParameter_ev_int32(long pNativeObject, int val);
	public void setGpuParameter(int val)
	{
		int valParamValue = val;
		setGpuParameter_ev_int32(this.nativeObject.pointer, valParamValue);
	}
	native private void setGpuParameter_Real(long pNativeObject, double val);
	public void setGpuParameter(double val)
	{
		double valParamValue = val;
		setGpuParameter_Real(this.nativeObject.pointer, valParamValue);
	}
	native private void setGpuParameter_CColourValue(long pNativeObject, long val);
	public void setGpuParameter(com.earthview.world.graphic.ColourValue val)
	{
		long valParamValue = val.nativeObject.pointer;
		setGpuParameter_CColourValue(this.nativeObject.pointer, valParamValue);
	}
	native private void setGpuParameter_CVector2(long pNativeObject, long val);
	public void setGpuParameter(com.earthview.world.spatial.math.Vector2 val)
	{
		long valParamValue = val.nativeObject.pointer;
		setGpuParameter_CVector2(this.nativeObject.pointer, valParamValue);
	}
	native private void setGpuParameter_CVector3(long pNativeObject, long val);
	public void setGpuParameter(com.earthview.world.spatial.math.Vector3 val)
	{
		long valParamValue = val.nativeObject.pointer;
		setGpuParameter_CVector3(this.nativeObject.pointer, valParamValue);
	}
	native private void setGpuParameter_CVector4(long pNativeObject, long val);
	public void setGpuParameter(com.earthview.world.spatial.math.Vector4 val)
	{
		long valParamValue = val.nativeObject.pointer;
		setGpuParameter_CVector4(this.nativeObject.pointer, valParamValue);
	}
	native private void setGpuParameter_CMatrix4(long pNativeObject, long val);
	public void setGpuParameter(com.earthview.world.spatial.math.Matrix4 val)
	{
		long valParamValue = val.nativeObject.pointer;
		setGpuParameter_CMatrix4(this.nativeObject.pointer, valParamValue);
	}
	native private void setGpuParameter_float_ev_size_t_ev_size_t(long pNativeObject, long val, long count, long multiple);
	public void setGpuParameter(FloatPointer val, long count, long multiple)
	{
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		long multipleParamValue = multiple;
		setGpuParameter_float_ev_size_t_ev_size_t(this.nativeObject.pointer, valParamValue, countParamValue, multipleParamValue);
	}
	native private void setGpuParameter_float_ev_size_t(long pNativeObject, long val, long count);
	public void setGpuParameter(FloatPointer val, long count)
	{
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		setGpuParameter_float_ev_size_t(this.nativeObject.pointer, valParamValue, countParamValue);
	}
	native private void setGpuParameter_double_ev_size_t_ev_size_t(long pNativeObject, long val, long count, long multiple);
	public void setGpuParameter(DoublePointer val, long count, long multiple)
	{
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		long multipleParamValue = multiple;
		setGpuParameter_double_ev_size_t_ev_size_t(this.nativeObject.pointer, valParamValue, countParamValue, multipleParamValue);
	}
	native private void setGpuParameter_double_ev_size_t(long pNativeObject, long val, long count);
	public void setGpuParameter(DoublePointer val, long count)
	{
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		setGpuParameter_double_ev_size_t(this.nativeObject.pointer, valParamValue, countParamValue);
	}
	native private void setGpuParameter_ev_int32_ev_size_t_ev_size_t(long pNativeObject, long val, long count, long multiple);
	public void setGpuParameter(IntegerPointer val, long count, long multiple)
	{
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		long multipleParamValue = multiple;
		setGpuParameter_ev_int32_ev_size_t_ev_size_t(this.nativeObject.pointer, valParamValue, countParamValue, multipleParamValue);
	}
	native private void setGpuParameter_ev_int32_ev_size_t(long pNativeObject, long val, long count);
	public void setGpuParameter(IntegerPointer val, long count)
	{
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		setGpuParameter_ev_int32_ev_size_t(this.nativeObject.pointer, valParamValue, countParamValue);
	}
	public UniformParameter(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public UniformParameter(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public boolean isConstParameter()
	{
		return super.isConstParameter_NoVirtual();
	}
	public String ev_toString()
	{
		return super.ev_toString_NoVirtual();
	}
	
	native protected void register_isConstParameter_void(long pNativeObject, String method);
	native protected void register_ev_toString_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_isConstParameter_void(this.nativeObject.pointer, "isConstParameter_void_callback");
			this.register_ev_toString_void(this.nativeObject.pointer, "ev_toString_void_callback");
		}
	}
	
	public static UniformParameter fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		UniformParameter obj = null;
 		if(baseObj instanceof UniformParameter)
		{
			obj = (UniformParameter)baseObj;
		} else {
			obj = new UniformParameter(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CUniformParameter");
			obj.increaseCast();
		}

		return obj;
	}
}
