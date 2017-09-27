package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///typedef map<ev_size_t, EarthView::World::Graphic::GpuLogicalIndexUse> EarthView::World::Graphic::GpuLogicalIndexUseMap;
public class GpuLogicalIndexUseMap extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::GpuLogicalIndexUseMap", new GpuLogicalIndexUseMapClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public GpuLogicalIndexUseMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("GpuLogicalIndexUseMap", null);
	}

	native private boolean push_ev_size_t_GpuLogicalIndexUse(long pNativeObject, long key, long val);
	/**
	 * 增加节点动画集合元素
	 * @param key 键
	 * @param val 值
	 * @return 成功增加true，否则false
	 */
	public boolean push(long key, com.earthview.world.graphic.GpuLogicalIndexUse val)
	{
		long keyParamValue = key;
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = push_ev_size_t_GpuLogicalIndexUse(this.nativeObject.pointer, keyParamValue, valParamValue);
		return returnValue;
	}
	native private boolean exist_ev_size_t(long pNativeObject, long key);
	/**
	 * 判断元素是否存在
	 * @param key 键
	 * @return 存在true，否则false
	 */
	public boolean exist(long key)
	{
		long keyParamValue = key;
		boolean returnValue = exist_ev_size_t(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private long OperatorIndex_ev_size_t(long pNativeObject, long key);
	/**
	 * 重载[]操作符
	 * @param key 键
	 * @return 返回键对应的值
	 */
	public com.earthview.world.graphic.GpuLogicalIndexUse OperatorIndex(long key)
	{
		long keyParamValue = key;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.graphic.GpuLogicalIndexUse __returnValue = new com.earthview.world.graphic.GpuLogicalIndexUse(CreatedWhenConstruct.CWC_NotToCreate, "GpuLogicalIndexUse");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuLogicalIndexUse)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuLogicalIndexUse");
		}
		return __returnValue;
	}
	native private long get_ev_size_t(long pNativeObject, long key);
	/**
	 * 获得键对应的值
	 * @param key 键
	 * @return 返回键对应的值
	 */
	public com.earthview.world.graphic.GpuLogicalIndexUse get(long key)
	{
		long keyParamValue = key;
		long returnValue = get_ev_size_t(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.graphic.GpuLogicalIndexUse __returnValue = new com.earthview.world.graphic.GpuLogicalIndexUse(CreatedWhenConstruct.CWC_NotToCreate, "GpuLogicalIndexUse");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuLogicalIndexUse)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuLogicalIndexUse");
		}
		return __returnValue;
	}
	native private void erase_ev_size_t(long pNativeObject, long key);
	/**
	 * 删除键对应的值
	 * @param key 键
	 */
	public void erase(long key)
	{
		long keyParamValue = key;
		erase_ev_size_t(this.nativeObject.pointer, keyParamValue);
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
	public GpuLogicalIndexUseMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GpuLogicalIndexUseMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GpuLogicalIndexUseMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GpuLogicalIndexUseMap obj = null;
 		if(baseObj instanceof GpuLogicalIndexUseMap)
		{
			obj = (GpuLogicalIndexUseMap)baseObj;
		} else {
			obj = new GpuLogicalIndexUseMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "GpuLogicalIndexUseMap");
			obj.increaseCast();
		}

		return obj;
	}
}
