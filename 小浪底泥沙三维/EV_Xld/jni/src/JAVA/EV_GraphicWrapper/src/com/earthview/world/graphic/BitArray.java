package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BitArray extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CBitArray", new BitArrayClassFactory());
	}

	public BitArray() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CBitArray", null);
	}

	public BitArray(int bits_count) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer bits_countPtr = new BasePointer(bits_count);
		list.add("bits_count", bits_countPtr.get());
		Create("CBitArray", list);
	}

	native private long OperatorAssign_CBitArray(long pNativeObject, long ba);
	public com.earthview.world.graphic.BitArray OperatorAssign(com.earthview.world.graphic.BitArray ba)
	{
		long baParamValue = ba.nativeObject.pointer;
		long returnValue = OperatorAssign_CBitArray(this.nativeObject.pointer, baParamValue);
		com.earthview.world.graphic.BitArray __returnValue = new com.earthview.world.graphic.BitArray(CreatedWhenConstruct.CWC_NotToCreate, "CBitArray");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.BitArray)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBitArray");
		}
		return __returnValue;
	}
	native private boolean getBit_size_t(long pNativeObject, long i);
	public boolean getBit(long i)
	{
		long iParamValue = i;
		boolean returnValue = getBit_size_t(this.nativeObject.pointer, iParamValue);
		return returnValue;
	}
	native private void setBit_size_t(long pNativeObject, long i);
	public void setBit(long i)
	{
		long iParamValue = i;
		setBit_size_t(this.nativeObject.pointer, iParamValue);
	}
	native private void clearBit_size_t(long pNativeObject, long i);
	public void clearBit(long i)
	{
		long iParamValue = i;
		clearBit_size_t(this.nativeObject.pointer, iParamValue);
	}
	native private void clearAllBits_void(long pNativeObject);
	public void clearAllBits()
	{
		clearAllBits_void(this.nativeObject.pointer);
	}
	native private boolean empty_void(long pNativeObject);
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void resize_size_t(long pNativeObject, long bits_count);
	public void resize(long bits_count)
	{
		long bits_countParamValue = bits_count;
		resize_size_t(this.nativeObject.pointer, bits_countParamValue);
	}
	native private long getBitsCount_void(long pNativeObject);
	public long getBitsCount()
	{
		long returnValue = getBitsCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	public BitArray(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BitArray(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static BitArray fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BitArray obj = null;
 		if(baseObj instanceof BitArray)
		{
			obj = (BitArray)baseObj;
		} else {
			obj = new BitArray(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBitArray");
			obj.increaseCast();
		}

		return obj;
	}
}
