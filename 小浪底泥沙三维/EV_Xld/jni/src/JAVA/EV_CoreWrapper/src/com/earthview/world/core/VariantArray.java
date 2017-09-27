package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class VariantArray extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CVariantArray", new VariantArrayClassFactory());
	}

	public VariantArray() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CVariantArray", null);
	}

	native private int count_void(long pNativeObject);
	public int count()
	{
		int returnValue = count_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long at_ev_int32(long pNativeObject, int index);
	public com.earthview.world.core.Variant at(int index)
	{
		int indexParamValue = index;
		long returnValue = at_ev_int32(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	native private long take_ev_int32(long pNativeObject, int index);
	public com.earthview.world.core.Variant take(int index)
	{
		int indexParamValue = index;
		long returnValue = take_ev_int32(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	native private int find_CVariant_ev_uint32(long pNativeObject, long var, long from);
	public int find(com.earthview.world.core.Variant var, long from)
	{
		long varParamValue = var.nativeObject.pointer;
		long fromParamValue = from;
		int returnValue = find_CVariant_ev_uint32(this.nativeObject.pointer, varParamValue, fromParamValue);
		return returnValue;
	}
	native private int find_CVariant(long pNativeObject, long var);
	public int find(com.earthview.world.core.Variant var)
	{
		long varParamValue = var.nativeObject.pointer;
		int returnValue = find_CVariant(this.nativeObject.pointer, varParamValue);
		return returnValue;
	}
	native private void prepend_CVariant(long pNativeObject, long var);
	public void prepend(com.earthview.world.core.Variant var)
	{
		long varParamValue = var.nativeObject.pointer;
		prepend_CVariant(this.nativeObject.pointer, varParamValue);
	}
	native private void insert_ev_int32_CVariant(long pNativeObject, int index, long var);
	public void insert(int index, com.earthview.world.core.Variant var)
	{
		int indexParamValue = index;
		long varParamValue = var.nativeObject.pointer;
		insert_ev_int32_CVariant(this.nativeObject.pointer, indexParamValue, varParamValue);
	}
	native private void append_CVariant(long pNativeObject, long var);
	public void append(com.earthview.world.core.Variant var)
	{
		long varParamValue = var.nativeObject.pointer;
		append_CVariant(this.nativeObject.pointer, varParamValue);
	}
	native private void append_CVariantArray(long pNativeObject, long other);
	public void append(com.earthview.world.core.VariantArray other)
	{
		long otherParamValue = other.nativeObject.pointer;
		append_CVariantArray(this.nativeObject.pointer, otherParamValue);
	}
	native private void erase_ev_int32(long pNativeObject, int index);
	public void erase(int index)
	{
		int indexParamValue = index;
		erase_ev_int32(this.nativeObject.pointer, indexParamValue);
	}
	native private void swap_ev_int32_ev_int32(long pNativeObject, int first, int second);
	public void swap(int first, int second)
	{
		int firstParamValue = first;
		int secondParamValue = second;
		swap_ev_int32_ev_int32(this.nativeObject.pointer, firstParamValue, secondParamValue);
	}
	native private boolean isEmpty_void(long pNativeObject);
	public boolean isEmpty()
	{
		boolean returnValue = isEmpty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private long OperatorAssign_CVariantArray(long pNativeObject, long other);
	public com.earthview.world.core.VariantArray OperatorAssign(com.earthview.world.core.VariantArray other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = OperatorAssign_CVariantArray(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.core.VariantArray __returnValue = new com.earthview.world.core.VariantArray(CreatedWhenConstruct.CWC_NotToCreate, "CVariantArray");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.VariantArray)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVariantArray");
		}
		return __returnValue;
	}
	native private long OperatorPlus_CVariantArray(long pNativeObject, long other);
	public com.earthview.world.core.VariantArray OperatorPlus(com.earthview.world.core.VariantArray other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = OperatorPlus_CVariantArray(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.core.VariantArray __returnValue = new com.earthview.world.core.VariantArray(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariantArray");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.VariantArray)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariantArray");
		}
		return __returnValue;
	}
	native private long OperatorIndex_ev_int32(long pNativeObject, int i);
	public com.earthview.world.core.Variant OperatorIndex(int i)
	{
		int iParamValue = i;
		long returnValue = OperatorIndex_ev_int32(this.nativeObject.pointer, iParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate, "CVariant");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	native private long OperatorIndex_ev_uint32(long pNativeObject, long i);
	public com.earthview.world.core.Variant OperatorIndex(long i)
	{
		long iParamValue = i;
		long returnValue = OperatorIndex_ev_uint32(this.nativeObject.pointer, iParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate, "CVariant");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	public VariantArray(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VariantArray(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static VariantArray fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VariantArray obj = null;
 		if(baseObj instanceof VariantArray)
		{
			obj = (VariantArray)baseObj;
		} else {
			obj = new VariantArray(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVariantArray");
			obj.increaseCast();
		}

		return obj;
	}
}
