package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeoObjects extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::GeoObjects", new GeoObjectsClassFactory());
	}

	native private long get_mEnvelope_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Envelope get_mEnvelope()
	{
		long jniValue = get_mEnvelope_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.geometry.Envelope __returnValue = new com.earthview.world.spatial.geometry.Envelope(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CEnvelope");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Envelope)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CEnvelope");
		}
		return __returnValue;
	}
	
	native private void set_mEnvelope_CEnvelope (long pNativeObject, long value);
	public void set_mEnvelope(com.earthview.world.spatial.geometry.Envelope mEnvelope)
	{
		long mEnvelopeParamValue = mEnvelope.nativeObject.pointer;
		
		set_mEnvelope_CEnvelope(this.nativeObject.pointer, mEnvelopeParamValue);
	}
	
	/**
	 * 构造函数
	 */
	public GeoObjects() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("GeoObjects", null);
	}

	native private void addListener_CEnvelopListener(long pNativeObject, long ref_listener);
	/**
	 * 添加包围盒的监听
	 * @param listener 包围盒监听器
	 */
	public void addListener(com.earthview.world.spatial.kml.EnvelopListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		addListener_CEnvelopListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private void removeListener_CEnvelopListener(long pNativeObject, long listener);
	/**
	 * 移除指定的包围盒监听
	 * @param listener 包围盒监听器
	 */
	public void removeListener(com.earthview.world.spatial.kml.EnvelopListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		removeListener_CEnvelopListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private void clearAllListener_void(long pNativeObject);
	/**
	 * 移除所有的监听
	 */
	public void clearAllListener()
	{
		clearAllListener_void(this.nativeObject.pointer);
	}
	native private void _notifyEnvelopChange_void(long pNativeObject);
	/**
	 * 包围盒变化的消息响应
	 */
	public void _notifyEnvelopChange()
	{
		_notifyEnvelopChange_void(this.nativeObject.pointer);
	}
	native private void push_back_CGeoObjectExtension(long pNativeObject, long ref_t);
	/**
	 * 在容器最后添加对象
	 * @param t 待增加的队像
	 */
	public void push_back(NativeObjectPointer<com.earthview.world.spatial.kml.GeoObjectExtension> ref_t)
	{
		long ref_tParamValue = ref_t.nativeObject.pointer;
		push_back_CGeoObjectExtension(this.nativeObject.pointer, ref_tParamValue);
	}
	native private void remove_ev_size_t(long pNativeObject, long pos);
	/**
	 * 移除容器指定位置的对象
	 * @param pos 对象的位置
	 */
	public void remove(long pos)
	{
		long posParamValue = pos;
		remove_ev_size_t(this.nativeObject.pointer, posParamValue);
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
	native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
	/**
	 * 重载[]操作符
	 * @param n 下标位置
	 * @return 返回下标对应的值
	 */
	public NativeObjectPointer<com.earthview.world.spatial.kml.GeoObjectExtension> OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.spatial.kml.GeoObjectExtension> __returnValue = new NativeObjectPointer<com.earthview.world.spatial.kml.GeoObjectExtension>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	/**
	 * 返回某位置的元素值
	 * @param n 位置
	 * @return 返回位置对应的值
	 */
	public NativeObjectPointer<com.earthview.world.spatial.kml.GeoObjectExtension> at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.spatial.kml.GeoObjectExtension> __returnValue = new NativeObjectPointer<com.earthview.world.spatial.kml.GeoObjectExtension>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long size_void(long pNativeObject);
	/**
	 * 返回元素的数量大小
	 * @param  
	 * @return 返回元素的数量大小
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void resize_ev_size_t(long pNativeObject, long newSize);
	/**
	 * 改变容器中元素数量大小
	 * @param newSize 改变的容器中元素数量大小
	 */
	public void resize(long newSize)
	{
		long newSizeParamValue = newSize;
		resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
	}
	native private void reserve_ev_size_t(long pNativeObject, long count);
	/**
	 * 改变容器中最小的元素容纳数量
	 * @param count 最小的元素容纳数量
	 */
	public void reserve(long count)
	{
		long countParamValue = count;
		reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空所有元素
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private long getEnvelopRef_void(long pNativeObject);
	/**
	 * 获取几何体的外包盒
	 * @return 外包盒对象
	 */
	public com.earthview.world.spatial.geometry.Envelope getEnvelopRef()
	{
		long returnValue = getEnvelopRef_void(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.Envelope __returnValue = new com.earthview.world.spatial.geometry.Envelope(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CEnvelope");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Envelope)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CEnvelope");
		}
		return __returnValue;
	}
	native private void computeEnvelop_CGeoObjectExtension_CEnvelope(long pNativeObject, long t, long envelop);
	/// <summary>
	/// 计算包几何体围盒
	/// </summary>
	/// <param t>待计算的几何体</param>
	/// <param envelop>包围盒对象</param>
	/// <returns></returns>
	public void computeEnvelop(com.earthview.world.spatial.kml.GeoObjectExtension t, com.earthview.world.spatial.geometry.Envelope envelop)
	{
		long tParamValue = t.nativeObject.pointer;
		long envelopParamValue = envelop.nativeObject.pointer;
		computeEnvelop_CGeoObjectExtension_CEnvelope(this.nativeObject.pointer, tParamValue, envelopParamValue);
	}
	public GeoObjects(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GeoObjects(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GeoObjects fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GeoObjects obj = null;
 		if(baseObj instanceof GeoObjects)
		{
			obj = (GeoObjects)baseObj;
		} else {
			obj = new GeoObjects(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "GeoObjects");
			obj.increaseCast();
		}

		return obj;
	}
}
