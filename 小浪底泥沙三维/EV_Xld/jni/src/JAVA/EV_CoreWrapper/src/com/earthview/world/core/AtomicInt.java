package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class AtomicInt extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CAtomicInt", new AtomicIntClassFactory());
	}

	public AtomicInt(int value) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer valuePtr = new BasePointer(value);
		list.add("value", valuePtr.get());
		Create("CAtomicInt", list);
	}

	public AtomicInt(com.earthview.world.core.AtomicInt other) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer otherPtr = new BasePointer(other);
		list.add("other", otherPtr.get());
		Create("CAtomicInt", list);
	}

	native private int OperatorConvertionev_int32_void(long pNativeObject);
	public int OperatorConvertionev_int32()
	{
		int returnValue = OperatorConvertionev_int32_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean OperatorEquals_ev_int32(long pNativeObject, int value);
	public boolean OperatorEquals(int value)
	{
		int valueParamValue = value;
		boolean returnValue = OperatorEquals_ev_int32(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_ev_int32(long pNativeObject, int value);
	public boolean OperatorNotEquals(int value)
	{
		int valueParamValue = value;
		boolean returnValue = OperatorNotEquals_ev_int32(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private long OperatorAssign_CAtomicInt(long pNativeObject, long other);
	public com.earthview.world.core.AtomicInt OperatorAssign(com.earthview.world.core.AtomicInt other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = OperatorAssign_CAtomicInt(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.core.AtomicInt __returnValue = new com.earthview.world.core.AtomicInt(CreatedWhenConstruct.CWC_NotToCreate, "CAtomicInt");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.AtomicInt)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAtomicInt");
		}
		return __returnValue;
	}
	native private long OperatorAssign_ev_int32(long pNativeObject, int value);
	public com.earthview.world.core.AtomicInt OperatorAssign(int value)
	{
		int valueParamValue = value;
		long returnValue = OperatorAssign_ev_int32(this.nativeObject.pointer, valueParamValue);
		com.earthview.world.core.AtomicInt __returnValue = new com.earthview.world.core.AtomicInt(CreatedWhenConstruct.CWC_NotToCreate, "CAtomicInt");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.AtomicInt)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAtomicInt");
		}
		return __returnValue;
	}
	native private boolean ref_void(long pNativeObject);
	public boolean ref()
	{
		boolean returnValue = ref_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean deref_void(long pNativeObject);
	///ev_bool ref()
	///{
	///	Lock the ref_
	///	CMutexLocker locker(&lock);
	///	increment ref_
	///	++ref_;
	///	return ref_!=0;
	///}
	public boolean deref()
	{
		boolean returnValue = deref_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static boolean isReferenceCountingNative_void();
	///ev_bool deref()
	///{
	///	CMutexLocker locker(&lock);
	///	--ref_;
	///	return ref_!=0;
	///}
	public static boolean isReferenceCountingNative()
	{
		boolean returnValue = isReferenceCountingNative_void();
		return returnValue;
	}
	native private static boolean isReferenceCountingWaitFree_void();
	public static boolean isReferenceCountingWaitFree()
	{
		boolean returnValue = isReferenceCountingWaitFree_void();
		return returnValue;
	}
	native private static boolean isTestAndSetNative_void();
	public static boolean isTestAndSetNative()
	{
		boolean returnValue = isTestAndSetNative_void();
		return returnValue;
	}
	native private static boolean isTestAndSetWaitFree_void();
	public static boolean isTestAndSetWaitFree()
	{
		boolean returnValue = isTestAndSetWaitFree_void();
		return returnValue;
	}
	native private boolean testAndSetRelaxed_ev_int32_ev_int32(long pNativeObject, int expectedValue, int newValue);
	public boolean testAndSetRelaxed(int expectedValue, int newValue)
	{
		int expectedValueParamValue = expectedValue;
		int newValueParamValue = newValue;
		boolean returnValue = testAndSetRelaxed_ev_int32_ev_int32(this.nativeObject.pointer, expectedValueParamValue, newValueParamValue);
		return returnValue;
	}
	native private boolean testAndSetAcquire_ev_int32_ev_int32(long pNativeObject, int expectedValue, int newValue);
	public boolean testAndSetAcquire(int expectedValue, int newValue)
	{
		int expectedValueParamValue = expectedValue;
		int newValueParamValue = newValue;
		boolean returnValue = testAndSetAcquire_ev_int32_ev_int32(this.nativeObject.pointer, expectedValueParamValue, newValueParamValue);
		return returnValue;
	}
	native private boolean testAndSetRelease_ev_int32_ev_int32(long pNativeObject, int expectedValue, int newValue);
	public boolean testAndSetRelease(int expectedValue, int newValue)
	{
		int expectedValueParamValue = expectedValue;
		int newValueParamValue = newValue;
		boolean returnValue = testAndSetRelease_ev_int32_ev_int32(this.nativeObject.pointer, expectedValueParamValue, newValueParamValue);
		return returnValue;
	}
	native private boolean testAndSetOrdered_ev_int32_ev_int32(long pNativeObject, int expectedValue, int newValue);
	public boolean testAndSetOrdered(int expectedValue, int newValue)
	{
		int expectedValueParamValue = expectedValue;
		int newValueParamValue = newValue;
		boolean returnValue = testAndSetOrdered_ev_int32_ev_int32(this.nativeObject.pointer, expectedValueParamValue, newValueParamValue);
		return returnValue;
	}
	native private static boolean isFetchAndStoreNative_void();
	public static boolean isFetchAndStoreNative()
	{
		boolean returnValue = isFetchAndStoreNative_void();
		return returnValue;
	}
	native private static boolean isFetchAndStoreWaitFree_void();
	public static boolean isFetchAndStoreWaitFree()
	{
		boolean returnValue = isFetchAndStoreWaitFree_void();
		return returnValue;
	}
	native private int fetchAndStoreRelaxed_ev_int32(long pNativeObject, int newValue);
	public int fetchAndStoreRelaxed(int newValue)
	{
		int newValueParamValue = newValue;
		int returnValue = fetchAndStoreRelaxed_ev_int32(this.nativeObject.pointer, newValueParamValue);
		return returnValue;
	}
	native private int fetchAndStoreAcquire_ev_int32(long pNativeObject, int newValue);
	public int fetchAndStoreAcquire(int newValue)
	{
		int newValueParamValue = newValue;
		int returnValue = fetchAndStoreAcquire_ev_int32(this.nativeObject.pointer, newValueParamValue);
		return returnValue;
	}
	native private int fetchAndStoreRelease_ev_int32(long pNativeObject, int newValue);
	public int fetchAndStoreRelease(int newValue)
	{
		int newValueParamValue = newValue;
		int returnValue = fetchAndStoreRelease_ev_int32(this.nativeObject.pointer, newValueParamValue);
		return returnValue;
	}
	native private int fetchAndStoreOrdered_ev_int32(long pNativeObject, int newValue);
	public int fetchAndStoreOrdered(int newValue)
	{
		int newValueParamValue = newValue;
		int returnValue = fetchAndStoreOrdered_ev_int32(this.nativeObject.pointer, newValueParamValue);
		return returnValue;
	}
	native private static boolean isFetchAndAddNative_void();
	public static boolean isFetchAndAddNative()
	{
		boolean returnValue = isFetchAndAddNative_void();
		return returnValue;
	}
	native private static boolean isFetchAndAddWaitFree_void();
	public static boolean isFetchAndAddWaitFree()
	{
		boolean returnValue = isFetchAndAddWaitFree_void();
		return returnValue;
	}
	native private int fetchAndAddRelaxed_ev_int32(long pNativeObject, int valueToAdd);
	public int fetchAndAddRelaxed(int valueToAdd)
	{
		int valueToAddParamValue = valueToAdd;
		int returnValue = fetchAndAddRelaxed_ev_int32(this.nativeObject.pointer, valueToAddParamValue);
		return returnValue;
	}
	native private int fetchAndAddAcquire_ev_int32(long pNativeObject, int valueToAdd);
	public int fetchAndAddAcquire(int valueToAdd)
	{
		int valueToAddParamValue = valueToAdd;
		int returnValue = fetchAndAddAcquire_ev_int32(this.nativeObject.pointer, valueToAddParamValue);
		return returnValue;
	}
	native private int fetchAndAddRelease_ev_int32(long pNativeObject, int valueToAdd);
	public int fetchAndAddRelease(int valueToAdd)
	{
		int valueToAddParamValue = valueToAdd;
		int returnValue = fetchAndAddRelease_ev_int32(this.nativeObject.pointer, valueToAddParamValue);
		return returnValue;
	}
	native private int fetchAndAddOrdered_ev_int32(long pNativeObject, int valueToAdd);
	public int fetchAndAddOrdered(int valueToAdd)
	{
		int valueToAddParamValue = valueToAdd;
		int returnValue = fetchAndAddOrdered_ev_int32(this.nativeObject.pointer, valueToAddParamValue);
		return returnValue;
	}
	public AtomicInt(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AtomicInt(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AtomicInt fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AtomicInt obj = null;
 		if(baseObj instanceof AtomicInt)
		{
			obj = (AtomicInt)baseObj;
		} else {
			obj = new AtomicInt(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAtomicInt");
			obj.increaseCast();
		}

		return obj;
	}
}
