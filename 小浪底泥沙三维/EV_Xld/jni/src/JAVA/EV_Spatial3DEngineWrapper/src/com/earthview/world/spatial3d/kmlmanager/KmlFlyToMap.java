package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * kml飞行集合
 */
public class KmlFlyToMap extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::KmlManager::CKmlFlyToMap", new KmlFlyToMapClassFactory());
	}

	/**
	 * 构造函数
	 */
	public KmlFlyToMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CKmlFlyToMap", null);
	}

	native private boolean push_ev_real64_CKmlFlyTo(long pNativeObject, double key, long val);
	/**
	 * 添加元素
	 * @param key 键值对的键
	 * @param val 键值对的值
	 * @return 成功返回true，否则返回false
	 */
	public boolean push(double key, com.earthview.world.spatial3d.kmlmanager.KmlFlyTo val)
	{
		double keyParamValue = key;
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = push_ev_real64_CKmlFlyTo(this.nativeObject.pointer, keyParamValue, valParamValue);
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
	public com.earthview.world.spatial3d.kmlmanager.KmlFlyTo OperatorIndex(double key)
	{
		double keyParamValue = key;
		long returnValue = OperatorIndex_ev_real64(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.spatial3d.kmlmanager.KmlFlyTo __returnValue = new com.earthview.world.spatial3d.kmlmanager.KmlFlyTo(CreatedWhenConstruct.CWC_NotToCreate, "CKmlFlyTo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.kmlmanager.KmlFlyTo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlFlyTo");
		}
		return __returnValue;
	}
	native private long get_ev_real64(long pNativeObject, double key);
	/**
	 * 获取元素
	 * @param key 键值对的键
	 * @return 返回对应的值
	 */
	public com.earthview.world.spatial3d.kmlmanager.KmlFlyTo get(double key)
	{
		double keyParamValue = key;
		long returnValue = get_ev_real64(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.spatial3d.kmlmanager.KmlFlyTo __returnValue = new com.earthview.world.spatial3d.kmlmanager.KmlFlyTo(CreatedWhenConstruct.CWC_NotToCreate, "CKmlFlyTo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.kmlmanager.KmlFlyTo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlFlyTo");
		}
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
	public KmlFlyToMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlFlyToMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static KmlFlyToMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlFlyToMap obj = null;
 		if(baseObj instanceof KmlFlyToMap)
		{
			obj = (KmlFlyToMap)baseObj;
		} else {
			obj = new KmlFlyToMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlFlyToMap");
			obj.increaseCast();
		}

		return obj;
	}
}
