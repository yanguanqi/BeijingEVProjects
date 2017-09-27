package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGC瓦片层级描述信息类
 */
public class Ogctilematrixlimits extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCTileMatrixLimits", new OgctilematrixlimitsClassFactory());
	}

	native private void setIdentifier_EVString(long pNativeObject, String value);
	/**
	 * 设置唯一标识
	 * @param value 唯一标识
	 */
	public void setIdentifier(String value)
	{
		String valueParamValue = value;
		setIdentifier_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private long getIdentifier_void(long pNativeObject);
	/**
	 * 获取唯一标识
	 */
	public StringPointer getIdentifier()
	{
		long returnValue = getIdentifier_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setMinTileRow_ev_uint32(long pNativeObject, long value);
	/**
	 * 设置最小行号
	 * @param value 最小行号
	 */
	public void setMinTileRow(long value)
	{
		long valueParamValue = value;
		setMinTileRow_ev_uint32(this.nativeObject.pointer, valueParamValue);
	}
	native private long getMinTileRow_void(long pNativeObject);
	/**
	 * 获取最小行号
	 * @return 最小行号
	 */
	public long getMinTileRow()
	{
		long returnValue = getMinTileRow_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaxTileRow_ev_uint32(long pNativeObject, long value);
	/**
	 * 设置最大行号
	 * @param value 最大行号
	 */
	public void setMaxTileRow(long value)
	{
		long valueParamValue = value;
		setMaxTileRow_ev_uint32(this.nativeObject.pointer, valueParamValue);
	}
	native private long getMaxTileRow_void(long pNativeObject);
	/**
	 * 获取最大行号
	 * @return 最大行号
	 */
	public long getMaxTileRow()
	{
		long returnValue = getMaxTileRow_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMinTileCol_ev_uint32(long pNativeObject, long value);
	/**
	 * 设置最小列号
	 * @param value 最小列号
	 */
	public void setMinTileCol(long value)
	{
		long valueParamValue = value;
		setMinTileCol_ev_uint32(this.nativeObject.pointer, valueParamValue);
	}
	native private long getMinTileCol_void(long pNativeObject);
	/**
	 * 获取最小列号
	 * @return 最小列号
	 */
	public long getMinTileCol()
	{
		long returnValue = getMinTileCol_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaxTileCol_ev_uint32(long pNativeObject, long value);
	/**
	 * 设置最大列号
	 * @param value 最大列号
	 */
	public void setMaxTileCol(long value)
	{
		long valueParamValue = value;
		setMaxTileCol_ev_uint32(this.nativeObject.pointer, valueParamValue);
	}
	native private long getMaxTileCol_void(long pNativeObject);
	/**
	 * 获取最大列号
	 * @return 最大列号
	 */
	public long getMaxTileCol()
	{
		long returnValue = getMaxTileCol_void(this.nativeObject.pointer);
		return returnValue;
	}
	/**
	 * 构造函数
	 */
	public Ogctilematrixlimits() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("COGCTileMatrixLimits", null);
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆
	 * @return 克隆结果对象指针
	 */
	public com.earthview.world.spatial.Ogctilematrixlimits ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogctilematrixlimits __returnValue = new com.earthview.world.spatial.Ogctilematrixlimits(CreatedWhenConstruct.CWC_NotToCreate, "COGCTileMatrixLimits");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogctilematrixlimits)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "COGCTileMatrixLimits");
		}
		return __returnValue;
	}
	public Ogctilematrixlimits(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ogctilematrixlimits(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Ogctilematrixlimits fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ogctilematrixlimits obj = null;
 		if(baseObj instanceof Ogctilematrixlimits)
		{
			obj = (Ogctilematrixlimits)baseObj;
		} else {
			obj = new Ogctilematrixlimits(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COGCTileMatrixLimits");
			obj.increaseCast();
		}

		return obj;
	}
}
