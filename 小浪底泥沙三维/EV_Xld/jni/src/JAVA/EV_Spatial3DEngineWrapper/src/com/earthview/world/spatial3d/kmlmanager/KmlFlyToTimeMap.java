package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlFlyToTimeMap extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::KmlManager::CKmlFlyToTimeMap", new KmlFlyToTimeMapClassFactory());
	}

	/**
	 * 构造函数
	 */
	public KmlFlyToTimeMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CKmlFlyToTimeMap", null);
	}

	native private boolean push_ev_real64_ev_real64(long pNativeObject, double key, double val);
	/**
	 * 添加元素
	 * @param key 键值对的键
	 * @param val 键值对的值
	 * @return 成功返回true，否则返回false
	 */
	public boolean push(double key, double val)
	{
		double keyParamValue = key;
		double valParamValue = val;
		boolean returnValue = push_ev_real64_ev_real64(this.nativeObject.pointer, keyParamValue, valParamValue);
		return returnValue;
	}
	native private boolean exist_ev_real64(long pNativeObject, double key);
	/**
	 * 指定的键是否存在
	 * @param key 键值对的键
	 * @return 存在返回true，否则返回false
	 */
	public boolean exist(double key)
	{
		double keyParamValue = key;
		boolean returnValue = exist_ev_real64(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private long OperatorIndex_ev_real64(long pNativeObject, double key);
	/**
	 * 重载[]操作符
	 * @param key 键值对的键
	 * @return 返回对应的值
	 */
	public DoublePointer OperatorIndex(double key)
	{
		double keyParamValue = key;
		long returnValue = OperatorIndex_ev_real64(this.nativeObject.pointer, keyParamValue);
		DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long get_ev_real64(long pNativeObject, double key);
	/**
	 * 获取元素
	 * @param key 键值对的键
	 * @return 返回对应的值
	 */
	public DoublePointer get(double key)
	{
		double keyParamValue = key;
		long returnValue = get_ev_real64(this.nativeObject.pointer, keyParamValue);
		DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void erase_ev_real64(long pNativeObject, double key);
	/**
	 * 删除元素
	 * @param key 键值对的键
	 */
	public void erase(double key)
	{
		double keyParamValue = key;
		erase_ev_real64(this.nativeObject.pointer, keyParamValue);
	}
	native private long size_void(long pNativeObject);
	/**
	 * 返回元素的数量大小
	 * @return 返回元素的数量大小
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空所有元素
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private boolean empty_void(long pNativeObject);
	/**
	 * 返回容器是否为null
	 * @return 容器为空返回true，否则false
	 */
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	public KmlFlyToTimeMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlFlyToTimeMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static KmlFlyToTimeMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlFlyToTimeMap obj = null;
 		if(baseObj instanceof KmlFlyToTimeMap)
		{
			obj = (KmlFlyToTimeMap)baseObj;
		} else {
			obj = new KmlFlyToTimeMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlFlyToTimeMap");
			obj.increaseCast();
		}

		return obj;
	}
}
