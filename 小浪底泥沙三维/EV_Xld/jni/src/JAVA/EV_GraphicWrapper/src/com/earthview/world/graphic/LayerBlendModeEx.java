package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// a colour supplied manually as a separate argument
public class LayerBlendModeEx extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CLayerBlendModeEx", new LayerBlendModeExClassFactory());
	}

	//// The type of blending (colour or alpha)
	public LayerBlendModeEx() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLayerBlendModeEx", null);
	}

	native private int get_blendType_void(long pNativeObject);
	public com.earthview.world.graphic.LayerBlendType get_blendType()
	{
		int jniValue = get_blendType_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.LayerBlendType.toEnum(jniValue);
	}
	
	native private void set_blendType_LayerBlendType (long pNativeObject, int value);
	public void set_blendType(com.earthview.world.graphic.LayerBlendType blendType)
	{
		int blendTypeParamValue = blendType.getValue();
		
		set_blendType_LayerBlendType(this.nativeObject.pointer, blendTypeParamValue);
	}
	
	native private int get_operation_void(long pNativeObject);
	public com.earthview.world.graphic.LayerBlendOperationEx get_operation()
	{
		int jniValue = get_operation_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.LayerBlendOperationEx.toEnum(jniValue);
	}
	
	native private void set_operation_LayerBlendOperationEx (long pNativeObject, int value);
	public void set_operation(com.earthview.world.graphic.LayerBlendOperationEx operation)
	{
		int operationParamValue = operation.getValue();
		
		set_operation_LayerBlendOperationEx(this.nativeObject.pointer, operationParamValue);
	}
	
	native private int get_source1_void(long pNativeObject);
	public com.earthview.world.graphic.LayerBlendSource get_source1()
	{
		int jniValue = get_source1_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.LayerBlendSource.toEnum(jniValue);
	}
	
	native private void set_source1_LayerBlendSource (long pNativeObject, int value);
	public void set_source1(com.earthview.world.graphic.LayerBlendSource source1)
	{
		int source1ParamValue = source1.getValue();
		
		set_source1_LayerBlendSource(this.nativeObject.pointer, source1ParamValue);
	}
	
	native private int get_source2_void(long pNativeObject);
	public com.earthview.world.graphic.LayerBlendSource get_source2()
	{
		int jniValue = get_source2_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.LayerBlendSource.toEnum(jniValue);
	}
	
	native private void set_source2_LayerBlendSource (long pNativeObject, int value);
	public void set_source2(com.earthview.world.graphic.LayerBlendSource source2)
	{
		int source2ParamValue = source2.getValue();
		
		set_source2_LayerBlendSource(this.nativeObject.pointer, source2ParamValue);
	}
	
	native private long get_colourArg1_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue get_colourArg1()
	{
		long jniValue = get_colourArg1_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	
	native private void set_colourArg1_CColourValue (long pNativeObject, long value);
	public void set_colourArg1(com.earthview.world.graphic.ColourValue colourArg1)
	{
		long colourArg1ParamValue = colourArg1.nativeObject.pointer;
		
		set_colourArg1_CColourValue(this.nativeObject.pointer, colourArg1ParamValue);
	}
	
	native private long get_colourArg2_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue get_colourArg2()
	{
		long jniValue = get_colourArg2_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	
	native private void set_colourArg2_CColourValue (long pNativeObject, long value);
	public void set_colourArg2(com.earthview.world.graphic.ColourValue colourArg2)
	{
		long colourArg2ParamValue = colourArg2.nativeObject.pointer;
		
		set_colourArg2_CColourValue(this.nativeObject.pointer, colourArg2ParamValue);
	}
	
	native private double get_alphaArg1_void(long pNativeObject);
	public double get_alphaArg1()
	{
		double jniValue = get_alphaArg1_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_alphaArg1_Real (long pNativeObject, double value);
	public void set_alphaArg1(double alphaArg1)
	{
		double alphaArg1ParamValue = alphaArg1;
		
		set_alphaArg1_Real(this.nativeObject.pointer, alphaArg1ParamValue);
	}
	
	native private double get_alphaArg2_void(long pNativeObject);
	public double get_alphaArg2()
	{
		double jniValue = get_alphaArg2_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_alphaArg2_Real (long pNativeObject, double value);
	public void set_alphaArg2(double alphaArg2)
	{
		double alphaArg2ParamValue = alphaArg2;
		
		set_alphaArg2_Real(this.nativeObject.pointer, alphaArg2ParamValue);
	}
	
	native private double get_factor_void(long pNativeObject);
	public double get_factor()
	{
		double jniValue = get_factor_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_factor_Real (long pNativeObject, double value);
	public void set_factor(double factor)
	{
		double factorParamValue = factor;
		
		set_factor_Real(this.nativeObject.pointer, factorParamValue);
	}
	
	native private boolean OperatorEquals_CLayerBlendModeEx(long pNativeObject, long rhs);
	public boolean OperatorEquals(com.earthview.world.graphic.LayerBlendModeEx rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CLayerBlendModeEx(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CLayerBlendModeEx(long pNativeObject, long rhs);
	public boolean OperatorNotEquals(com.earthview.world.graphic.LayerBlendModeEx rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CLayerBlendModeEx(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	public LayerBlendModeEx(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LayerBlendModeEx(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LayerBlendModeEx fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LayerBlendModeEx obj = null;
 		if(baseObj instanceof LayerBlendModeEx)
		{
			obj = (LayerBlendModeEx)baseObj;
		} else {
			obj = new LayerBlendModeEx(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLayerBlendModeEx");
			obj.increaseCast();
		}

		return obj;
	}
}
