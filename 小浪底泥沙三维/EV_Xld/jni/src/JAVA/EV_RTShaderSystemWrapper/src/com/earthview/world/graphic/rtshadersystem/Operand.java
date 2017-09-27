package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// Attributes.
public class Operand extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::COperand", new OperandClassFactory());
	}

	/// InOut semantic
	public enum OpSemantic implements INativeEnum<OpSemantic> {
		OPS_IN(OpSemanticHelper.ENUM_VALUES[0]),
		OPS_OUT(OpSemanticHelper.ENUM_VALUES[1]),
		OPS_INOUT(OpSemanticHelper.ENUM_VALUES[2]);
		private int value;
		OpSemantic(int i) {
			this.value = i;
		}
		public OpSemantic getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final OpSemantic toEnum(int retval) {
			if(retval == OPS_IN.value){
				return OPS_IN;
			}
			else if(retval == OPS_OUT.value){
				return OPS_OUT;
			}
			else if(retval == OPS_INOUT.value){
				return OPS_INOUT;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class OpSemanticHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/// Used field mask
	public enum OpMask implements INativeEnum<OpMask> {
		OPM_ALL(OpMaskHelper.ENUM_VALUES[0]),
		OPM_X(OpMaskHelper.ENUM_VALUES[1]),
		OPM_Y(OpMaskHelper.ENUM_VALUES[2]),
		OPM_Z(OpMaskHelper.ENUM_VALUES[3]),
		OPM_W(OpMaskHelper.ENUM_VALUES[4]);
		private int value;
		OpMask(int i) {
			this.value = i;
		}
		public OpMask getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final OpMask toEnum(int retval) {
			if(retval == OPM_ALL.value){
				return OPM_ALL;
			}
			else if(retval == OPM_X.value){
				return OPM_X;
			}
			else if(retval == OPM_Y.value){
				return OPM_Y;
			}
			else if(retval == OPM_Z.value){
				return OPM_Z;
			}
			else if(retval == OPM_W.value){
				return OPM_W;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class OpMaskHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public Operand(com.earthview.world.graphic.rtshadersystem.ParameterPtr parameter, com.earthview.world.graphic.rtshadersystem.Operand.OpSemantic opSemantic, int opMask, int indirectionLevel) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer parameterPtr = new BasePointer(parameter);
		list.add("parameter", parameterPtr.get());
		BasePointer opSemanticPtr = new BasePointer(opSemantic);
		list.add("opSemantic", opSemanticPtr.get());
		BasePointer opMaskPtr = new BasePointer(opMask);
		list.add("opMask", opMaskPtr.get());
		BasePointer indirectionLevelPtr = new BasePointer(indirectionLevel);
		list.add("indirectionLevel", indirectionLevelPtr.get());
		Create("COperand", list);
	}

	public Operand(com.earthview.world.graphic.rtshadersystem.ParameterPtr parameter, com.earthview.world.graphic.rtshadersystem.Operand.OpSemantic opSemantic, int opMask) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer parameterPtr = new BasePointer(parameter);
		list.add("parameter", parameterPtr.get());
		BasePointer opSemanticPtr = new BasePointer(opSemantic);
		list.add("opSemantic", opSemanticPtr.get());
		BasePointer opMaskPtr = new BasePointer(opMask);
		list.add("opMask", opMaskPtr.get());
		Create("COperand", list);
	}

	public Operand(com.earthview.world.graphic.rtshadersystem.ParameterPtr parameter, com.earthview.world.graphic.rtshadersystem.Operand.OpSemantic opSemantic) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer parameterPtr = new BasePointer(parameter);
		list.add("parameter", parameterPtr.get());
		BasePointer opSemanticPtr = new BasePointer(opSemantic);
		list.add("opSemantic", opSemanticPtr.get());
		Create("COperand", list);
	}

	public Operand(com.earthview.world.graphic.rtshadersystem.Operand rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("COperand", list);
	}

	public Operand() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("COperand", null);
	}

	native private long OperatorAssign_COperand(long pNativeObject, long rhs);
	public com.earthview.world.graphic.rtshadersystem.Operand OperatorAssign(com.earthview.world.graphic.rtshadersystem.Operand rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long returnValue = OperatorAssign_COperand(this.nativeObject.pointer, rhsParamValue);
		com.earthview.world.graphic.rtshadersystem.Operand __returnValue = new com.earthview.world.graphic.rtshadersystem.Operand(CreatedWhenConstruct.CWC_NotToCreate, "COperand");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.Operand)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COperand");
		}
		return __returnValue;
	}
	native private long getParameter_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.ParameterPtr getParameter()
	{
		long returnValue = getParameter_void(this.nativeObject.pointer);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate, "ParameterPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private boolean hasFreeFields_void(long pNativeObject);
	public boolean hasFreeFields()
	{
		boolean returnValue = hasFreeFields_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMask_void(long pNativeObject);
	public int getMask()
	{
		int returnValue = getMask_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSemantic_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.Operand.OpSemantic getSemantic()
	{
		int returnValue = getSemantic_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.rtshadersystem.Operand.OpSemantic.toEnum(returnValue);
	}
	native private int getIndirectionLevel_void(long pNativeObject);
	public int getIndirectionLevel()
	{
		int returnValue = getIndirectionLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String ev_toString_void(long pNativeObject);
	public String ev_toString()
	{
		String returnValue = ev_toString_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static String getMaskAsString_int(int mask);
	public static String getMaskAsString(int mask)
	{
		int maskParamValue = mask;
		String returnValue = getMaskAsString_int(maskParamValue);
		return returnValue;
	}
	native private static int getFloatCount_int(int mask);
	public static int getFloatCount(int mask)
	{
		int maskParamValue = mask;
		int returnValue = getFloatCount_int(maskParamValue);
		return returnValue;
	}
	native private static int getGpuConstantType_int(int mask);
	public static com.earthview.world.graphic.GpuConstantType getGpuConstantType(int mask)
	{
		int maskParamValue = mask;
		int returnValue = getGpuConstantType_int(maskParamValue);
		return com.earthview.world.graphic.GpuConstantType.toEnum(returnValue);
	}
	public Operand(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Operand(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Operand fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Operand obj = null;
 		if(baseObj instanceof Operand)
		{
			obj = (Operand)baseObj;
		} else {
			obj = new Operand(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COperand");
			obj.increaseCast();
		}

		return obj;
	}
}
