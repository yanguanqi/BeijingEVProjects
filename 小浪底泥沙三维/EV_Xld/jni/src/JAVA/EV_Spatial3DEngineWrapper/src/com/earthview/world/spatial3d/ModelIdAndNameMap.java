package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * /存储模型的ID与名称/
 */
public class ModelIdAndNameMap extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelIdAndNameMap", new ModelIdAndNameMapClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public ModelIdAndNameMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ModelIdAndNameMap", null);
	}

	native private boolean push_ev_uint16_EVString(long pNativeObject, int key, String val);
	/**
	 * 在EarthView::World::Core::hashmap容器中添加元素
	 * @param key 键
	 * @param val 值
	 * @return 成功增加true，否则false
	 */
	public boolean push(int key, String val)
	{
		int keyParamValue = key;
		String valParamValue = val;
		boolean returnValue = push_ev_uint16_EVString(this.nativeObject.pointer, keyParamValue, valParamValue);
		return returnValue;
	}
	native private boolean exist_ev_uint16(long pNativeObject, int key);
	/**
	 * 判断元素是否存在
	 * @param key 键
	 * @return 存在true，否则false
	 */
	public boolean exist(int key)
	{
		int keyParamValue = key;
		boolean returnValue = exist_ev_uint16(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private long OperatorIndex_ev_uint16(long pNativeObject, int key);
	/**
	 * 重载[]操作符
	 * @param key 键
	 * @return 返回键对应的值
	 */
	public StringPointer OperatorIndex(int key)
	{
		int keyParamValue = key;
		long returnValue = OperatorIndex_ev_uint16(this.nativeObject.pointer, keyParamValue);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long get_ev_uint16(long pNativeObject, int key);
	/**
	 * 获得键对应的值
	 * @param key 键
	 * @return 返回键对应的值
	 */
	public StringPointer get(int key)
	{
		int keyParamValue = key;
		long returnValue = get_ev_uint16(this.nativeObject.pointer, keyParamValue);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void erase_ev_uint16(long pNativeObject, int key);
	/**
	 * 删除键对应的值
	 * @param key 键
	 */
	public void erase(int key)
	{
		int keyParamValue = key;
		erase_ev_uint16(this.nativeObject.pointer, keyParamValue);
	}
	native private long size_void(long pNativeObject);
	/**
	 * 返回容器的大小
	 * @param  
	 * @return 容器的大小
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空容器
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private boolean empty_void(long pNativeObject);
	/**
	 * 判断容器是否为空
	 * @param  
	 * @return 容器为空返回true，否则false
	 */
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getKeys_void(long pNativeObject);
	public com.earthview.world.core.IntVector getKeys()
	{
		long returnValue = getKeys_void(this.nativeObject.pointer);
		com.earthview.world.core.IntVector __returnValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.IntVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntVector");
		}
		return __returnValue;
	}
	public ModelIdAndNameMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelIdAndNameMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelIdAndNameMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelIdAndNameMap obj = null;
 		if(baseObj instanceof ModelIdAndNameMap)
		{
			obj = (ModelIdAndNameMap)baseObj;
		} else {
			obj = new ModelIdAndNameMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ModelIdAndNameMap");
			obj.increaseCast();
		}

		return obj;
	}
}
