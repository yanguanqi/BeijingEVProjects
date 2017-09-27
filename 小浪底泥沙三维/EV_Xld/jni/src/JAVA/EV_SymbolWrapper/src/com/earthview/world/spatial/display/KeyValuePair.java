package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 键值对				
 */
public class KeyValuePair extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::KeyValuePair", new KeyValuePairClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public KeyValuePair() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("KeyValuePair", null);
	}

	/**
	 * 构造函数
	 * @param key 键
	 * @param val 值
	 * @param type 数据类型
	 * @param memo 描述
	 */
	public KeyValuePair(String key, String val, com.earthview.world.spatial.display.EVPropertyValueType type, String memo) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer keyPtr = new BasePointer(key);
		list.add("key", keyPtr.get());
		BasePointer valPtr = new BasePointer(val);
		list.add("val", valPtr.get());
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		BasePointer memoPtr = new BasePointer(memo);
		list.add("memo", memoPtr.get());
		Create("KeyValuePair", list);
	}

	native private String get_Key_void(long pNativeObject);
	public String get_Key()
	{
		String jniValue = get_Key_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_Key_EVString (long pNativeObject, String value);
	public void set_Key(String Key)
	{
		String KeyParamValue = Key;
		
		set_Key_EVString(this.nativeObject.pointer, KeyParamValue);
	}
	
	native private String get_Value_void(long pNativeObject);
	public String get_Value()
	{
		String jniValue = get_Value_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_Value_EVString (long pNativeObject, String value);
	public void set_Value(String Value)
	{
		String ValueParamValue = Value;
		
		set_Value_EVString(this.nativeObject.pointer, ValueParamValue);
	}
	
	native private int get_ValueType_void(long pNativeObject);
	public com.earthview.world.spatial.display.EVPropertyValueType get_ValueType()
	{
		int jniValue = get_ValueType_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial.display.EVPropertyValueType.toEnum(jniValue);
	}
	
	native private void set_ValueType_EVPropertyValueType (long pNativeObject, int value);
	public void set_ValueType(com.earthview.world.spatial.display.EVPropertyValueType ValueType)
	{
		int ValueTypeParamValue = ValueType.getValue();
		
		set_ValueType_EVPropertyValueType(this.nativeObject.pointer, ValueTypeParamValue);
	}
	
	native private String get_Memo_void(long pNativeObject);
	public String get_Memo()
	{
		String jniValue = get_Memo_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_Memo_EVString (long pNativeObject, String value);
	public void set_Memo(String Memo)
	{
		String MemoParamValue = Memo;
		
		set_Memo_EVString(this.nativeObject.pointer, MemoParamValue);
	}
	
	public KeyValuePair(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KeyValuePair(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static KeyValuePair fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KeyValuePair obj = null;
 		if(baseObj instanceof KeyValuePair)
		{
			obj = (KeyValuePair)baseObj;
		} else {
			obj = new KeyValuePair(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "KeyValuePair");
			obj.increaseCast();
		}

		return obj;
	}
}
