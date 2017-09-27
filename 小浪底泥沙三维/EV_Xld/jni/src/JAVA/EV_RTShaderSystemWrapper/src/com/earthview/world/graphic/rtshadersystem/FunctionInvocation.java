package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FunctionInvocation extends com.earthview.world.graphic.rtshadersystem.FunctionAtom {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation", new FunctionInvocationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::JCFunctionInvocationProxy", new FunctionInvocationClassFactory());
	}

	public static class OperandVector extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector", new OperandVectorClassFactory());
		}

		public OperandVector() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("OperandVector", null);
		}

		native private void push_back_COperand(long pNativeObject, long t);
		public void push_back(com.earthview.world.graphic.rtshadersystem.Operand t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_COperand(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public com.earthview.world.graphic.rtshadersystem.Operand front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
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
		native private long back_void(long pNativeObject);
		public com.earthview.world.graphic.rtshadersystem.Operand back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
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
		native private void insert_ev_uint32_COperand(long pNativeObject, long pos, long t);
		public void insert(long pos, com.earthview.world.graphic.rtshadersystem.Operand t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_COperand(this.nativeObject.pointer, posParamValue, tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.rtshadersystem.Operand OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
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
		native private long at_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.rtshadersystem.Operand at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
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
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public OperandVector(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public OperandVector(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static OperandVector fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			OperandVector obj = null;
 			if(baseObj instanceof OperandVector)
			{
				obj = (OperandVector)baseObj;
			} else {
				obj = new OperandVector(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "OperandVector");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class OperandVectorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			OperandVector emptyInstance = new OperandVector(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public FunctionInvocation(String functionName, int groupOrder, int internalOrder, String returnType) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer functionNamePtr = new BasePointer(functionName);
		list.add("functionName", functionNamePtr.get());
		BasePointer groupOrderPtr = new BasePointer(groupOrder);
		list.add("groupOrder", groupOrderPtr.get());
		BasePointer internalOrderPtr = new BasePointer(internalOrder);
		list.add("internalOrder", internalOrderPtr.get());
		BasePointer returnTypePtr = new BasePointer(returnType);
		list.add("returnType", returnTypePtr.get());
		Create("JCFunctionInvocationProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.FunctionInvocation".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public FunctionInvocation(String functionName, int groupOrder, int internalOrder) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer functionNamePtr = new BasePointer(functionName);
		list.add("functionName", functionNamePtr.get());
		BasePointer groupOrderPtr = new BasePointer(groupOrder);
		list.add("groupOrder", groupOrderPtr.get());
		BasePointer internalOrderPtr = new BasePointer(internalOrder);
		list.add("internalOrder", internalOrderPtr.get());
		Create("JCFunctionInvocationProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.FunctionInvocation".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public FunctionInvocation(com.earthview.world.graphic.rtshadersystem.FunctionInvocation rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("JCFunctionInvocationProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.FunctionInvocation".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private String getFunctionAtomType_void(long pNativeObject);
	public String getFunctionAtomType()
	{
		String returnValue = getFunctionAtomType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getFunctionAtomType_void_NoVirtual(long pNativeObject);
	protected String getFunctionAtomType_NoVirtual()
	{
		String returnValue = getFunctionAtomType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getOperandList_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.FunctionInvocation.OperandVector getOperandList()
	{
		long returnValue = getOperandList_void(this.nativeObject.pointer);
		com.earthview.world.graphic.rtshadersystem.FunctionInvocation.OperandVector __returnValue = new com.earthview.world.graphic.rtshadersystem.FunctionInvocation.OperandVector(CreatedWhenConstruct.CWC_NotToCreate, "OperandVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.FunctionInvocation.OperandVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "OperandVector");
		}
		return __returnValue;
	}
	native private void pushOperand_ParameterPtr_OpSemantic_int_int(long pNativeObject, long parameter, int opSemantic, int opMask, int indirectionLevel);
	public void pushOperand(com.earthview.world.graphic.rtshadersystem.ParameterPtr parameter, com.earthview.world.graphic.rtshadersystem.Operand.OpSemantic opSemantic, int opMask, int indirectionLevel)
	{
		long parameterParamValue = parameter.nativeObject.pointer;
		int opSemanticParamValue = opSemantic.getValue();
		int opMaskParamValue = opMask;
		int indirectionLevelParamValue = indirectionLevel;
		pushOperand_ParameterPtr_OpSemantic_int_int(this.nativeObject.pointer, parameterParamValue, opSemanticParamValue, opMaskParamValue, indirectionLevelParamValue);
	}
	native private void pushOperand_ParameterPtr_OpSemantic_int(long pNativeObject, long parameter, int opSemantic, int opMask);
	public void pushOperand(com.earthview.world.graphic.rtshadersystem.ParameterPtr parameter, com.earthview.world.graphic.rtshadersystem.Operand.OpSemantic opSemantic, int opMask)
	{
		long parameterParamValue = parameter.nativeObject.pointer;
		int opSemanticParamValue = opSemantic.getValue();
		int opMaskParamValue = opMask;
		pushOperand_ParameterPtr_OpSemantic_int(this.nativeObject.pointer, parameterParamValue, opSemanticParamValue, opMaskParamValue);
	}
	native private void pushOperand_ParameterPtr_OpSemantic(long pNativeObject, long parameter, int opSemantic);
	public void pushOperand(com.earthview.world.graphic.rtshadersystem.ParameterPtr parameter, com.earthview.world.graphic.rtshadersystem.Operand.OpSemantic opSemantic)
	{
		long parameterParamValue = parameter.nativeObject.pointer;
		int opSemanticParamValue = opSemantic.getValue();
		pushOperand_ParameterPtr_OpSemantic(this.nativeObject.pointer, parameterParamValue, opSemanticParamValue);
	}
	native private long getFunctionName_void(long pNativeObject);
	public StringPointer getFunctionName()
	{
		long returnValue = getFunctionName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getReturnType_void(long pNativeObject);
	public StringPointer getReturnType()
	{
		long returnValue = getReturnType_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private boolean OperatorEquals_CFunctionInvocation(long pNativeObject, long rhs);
	public boolean OperatorEquals(com.earthview.world.graphic.rtshadersystem.FunctionInvocation rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CFunctionInvocation(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CFunctionInvocation(long pNativeObject, long rhs);
	public boolean OperatorNotEquals(com.earthview.world.graphic.rtshadersystem.FunctionInvocation rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CFunctionInvocation(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean OperatorLessThan_CFunctionInvocation(long pNativeObject, long rhs);
	public boolean OperatorLessThan(com.earthview.world.graphic.rtshadersystem.FunctionInvocation rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorLessThan_CFunctionInvocation(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean OperatorGreaterThan_CFunctionInvocation(long pNativeObject, long rhs);
	public boolean OperatorGreaterThan(com.earthview.world.graphic.rtshadersystem.FunctionInvocation rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorGreaterThan_CFunctionInvocation(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private static String get_Type_void();
	public static String get_Type()
	{
		String jniValue = get_Type_void();
		
		return jniValue;
	}
	
	native private static void set_Type_EVString (String value);
	public static void set_Type(String Type)
	{
		String TypeParamValue = Type;
		
		set_Type_EVString(TypeParamValue);
	}
	
	public FunctionInvocation(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FunctionInvocation(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getFunctionAtomType_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getFunctionAtomType_void(this.nativeObject.pointer, "getFunctionAtomType_void_callback");
		}
	}
	
	public static FunctionInvocation fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FunctionInvocation obj = null;
 		if(baseObj instanceof FunctionInvocation)
		{
			obj = (FunctionInvocation)baseObj;
		} else {
			obj = new FunctionInvocation(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFunctionInvocation");
			obj.increaseCast();
		}

		return obj;
	}
}
