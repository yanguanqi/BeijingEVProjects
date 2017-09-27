package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

////typedef map<EVString, EarthView::World::Graphic::GpuConstantDefinition> EarthView::World::Graphic::GpuConstantDefinitionMap;
public class GpuConstantDefinitionMap extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::GpuConstantDefinitionMap", new GpuConstantDefinitionMapClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public GpuConstantDefinitionMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("GpuConstantDefinitionMap", null);
	}

	native private boolean push_EVString_GpuConstantDefinition(long pNativeObject, String key, long val);
	/**
	 * 增加节点动画集合元素
	 * @param key 键
	 * @param val 值
	 * @return 成功增加true，否则false
	 */
	public boolean push(String key, com.earthview.world.graphic.GpuConstantDefinition val)
	{
		String keyParamValue = key;
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = push_EVString_GpuConstantDefinition(this.nativeObject.pointer, keyParamValue, valParamValue);
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
	public com.earthview.world.graphic.GpuConstantDefinition OperatorIndex(String key)
	{
		String keyParamValue = key;
		long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.graphic.GpuConstantDefinition __returnValue = new com.earthview.world.graphic.GpuConstantDefinition(CreatedWhenConstruct.CWC_NotToCreate, "GpuConstantDefinition");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuConstantDefinition)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuConstantDefinition");
		}
		return __returnValue;
	}
	native private long get_EVString(long pNativeObject, String key);
	/**
	 * 获得键对应的值
	 * @param key 键
	 * @return 返回键对应的值
	 */
	public com.earthview.world.graphic.GpuConstantDefinition get(String key)
	{
		String keyParamValue = key;
		long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.graphic.GpuConstantDefinition __returnValue = new com.earthview.world.graphic.GpuConstantDefinition(CreatedWhenConstruct.CWC_NotToCreate, "GpuConstantDefinition");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuConstantDefinition)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuConstantDefinition");
		}
		return __returnValue;
	}
	native private void erase_EVString(long pNativeObject, String key);
	/**
	 * 删除键对应的值
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
	public GpuConstantDefinitionMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GpuConstantDefinitionMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GpuConstantDefinitionMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GpuConstantDefinitionMap obj = null;
 		if(baseObj instanceof GpuConstantDefinitionMap)
		{
			obj = (GpuConstantDefinitionMap)baseObj;
		} else {
			obj = new GpuConstantDefinitionMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "GpuConstantDefinitionMap");
			obj.increaseCast();
		}

		return obj;
	}
}
