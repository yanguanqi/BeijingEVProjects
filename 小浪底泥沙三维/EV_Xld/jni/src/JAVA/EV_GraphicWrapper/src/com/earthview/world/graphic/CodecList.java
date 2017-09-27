package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///typedef map< EVString, EarthView::World::Graphic::CCodec* > EarthView::World::Graphic::CodecList; 
public class CodecList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CodecList", new CodecListClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public CodecList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CodecList", null);
	}

	native private boolean push_EVString_CCodec(long pNativeObject, String key, long ref_val);
	/**
	 * 增加动画集合元素
	 * @param key 键
	 * @param val 值
	 * @return 成功增加true，否则false
	 */
	public boolean push(String key, NativeObjectPointer<com.earthview.world.graphic.Codec> ref_val)
	{
		String keyParamValue = key;
		long ref_valParamValue = ref_val.nativeObject.pointer;
		boolean returnValue = push_EVString_CCodec(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
		return returnValue;
	}
	native private boolean exist_EVString(long pNativeObject, String key);
	/**
	 * 判断元素是否存在
	 * @param key 键
	 * @return 存在true，否则false
	 */
	public boolean exist(String key)
	{
		String keyParamValue = key;
		boolean returnValue = exist_EVString(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private long OperatorIndex_EVString(long pNativeObject, String key);
	/**
	 * 重载[]操作符
	 * @param key 键
	 * @return 返回键对应的值
	 */
	public NativeObjectPointer<com.earthview.world.graphic.Codec> OperatorIndex(String key)
	{
		String keyParamValue = key;
		long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
		NativeObjectPointer<com.earthview.world.graphic.Codec> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Codec>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long get_EVString(long pNativeObject, String key);
	/**
	 * 获得键对应的值
	 * @param key 键
	 * @return 返回键对应的值
	 */
	public NativeObjectPointer<com.earthview.world.graphic.Codec> get(String key)
	{
		String keyParamValue = key;
		long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
		NativeObjectPointer<com.earthview.world.graphic.Codec> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Codec>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void erase_EVString(long pNativeObject, String key);
	/**
	 * 删除键对应的键值对
	 * @param key 键
	 */
	public void erase(String key)
	{
		String keyParamValue = key;
		erase_EVString(this.nativeObject.pointer, keyParamValue);
	}
	native private long size_void(long pNativeObject);
	/**
	 * 返回集合的大小
	 * @param  
	 * @return 集合的大小
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空集合
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private boolean empty_void(long pNativeObject);
	/**
	 * 判断集合是否为空
	 * @param  
	 * @return 集合为空返回true，否则false
	 */
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	public CodecList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CodecList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CodecList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CodecList obj = null;
 		if(baseObj instanceof CodecList)
		{
			obj = (CodecList)baseObj;
		} else {
			obj = new CodecList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CodecList");
			obj.increaseCast();
		}

		return obj;
	}
}
