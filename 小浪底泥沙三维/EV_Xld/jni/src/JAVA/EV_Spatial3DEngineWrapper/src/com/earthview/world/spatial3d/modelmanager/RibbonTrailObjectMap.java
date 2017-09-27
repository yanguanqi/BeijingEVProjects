package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RibbonTrailObjectMap extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap", new RibbonTrailObjectMapClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public RibbonTrailObjectMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("RibbonTrailObjectMap", null);
	}

	native private boolean push_EVString_RibbonTrailObject(long pNativeObject, String key, long val);
	/**
	 * 增加动画集合元素
	 * @param key 键
	 * @param val 值
	 * @return 成功增加true，否则false
	 */
	public boolean push(String key, com.earthview.world.spatial3d.modelmanager.RibbonTrailObject val)
	{
		String keyParamValue = key;
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = push_EVString_RibbonTrailObject(this.nativeObject.pointer, keyParamValue, valParamValue);
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
	public com.earthview.world.spatial3d.modelmanager.RibbonTrailObject OperatorIndex(String key)
	{
		String keyParamValue = key;
		long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.spatial3d.modelmanager.RibbonTrailObject __returnValue = new com.earthview.world.spatial3d.modelmanager.RibbonTrailObject(CreatedWhenConstruct.CWC_NotToCreate, "RibbonTrailObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.RibbonTrailObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "RibbonTrailObject");
		}
		return __returnValue;
	}
	native private long get_EVString(long pNativeObject, String key);
	/**
	 * 获得键对应的值
	 * @param key 键
	 * @return 返回键对应的值
	 */
	public com.earthview.world.spatial3d.modelmanager.RibbonTrailObject get(String key)
	{
		String keyParamValue = key;
		long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.spatial3d.modelmanager.RibbonTrailObject __returnValue = new com.earthview.world.spatial3d.modelmanager.RibbonTrailObject(CreatedWhenConstruct.CWC_NotToCreate, "RibbonTrailObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.RibbonTrailObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "RibbonTrailObject");
		}
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
	native private long getKeys_void(long pNativeObject);
	public com.earthview.world.core.StringVector getKeys()
	{
		long returnValue = getKeys_void(this.nativeObject.pointer);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	public RibbonTrailObjectMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RibbonTrailObjectMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RibbonTrailObjectMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RibbonTrailObjectMap obj = null;
 		if(baseObj instanceof RibbonTrailObjectMap)
		{
			obj = (RibbonTrailObjectMap)baseObj;
		} else {
			obj = new RibbonTrailObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "RibbonTrailObjectMap");
			obj.increaseCast();
		}

		return obj;
	}
}
