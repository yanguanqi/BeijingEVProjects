package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Tour extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CTour", new TourClassFactory());
	}

	native private String get_mName_void(long pNativeObject);
	public String get_mName()
	{
		String jniValue = get_mName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mName_EVString (long pNativeObject, String value);
	public void set_mName(String mName)
	{
		String mNameParamValue = mName;
		
		set_mName_EVString(this.nativeObject.pointer, mNameParamValue);
	}
	
	native private String get_mId_void(long pNativeObject);
	public String get_mId()
	{
		String jniValue = get_mId_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mId_EVString (long pNativeObject, String value);
	public void set_mId(String mId)
	{
		String mIdParamValue = mId;
		
		set_mId_EVString(this.nativeObject.pointer, mIdParamValue);
	}
	
	/**
	 * 构造函数
	 */
	public Tour() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTour", null);
	}

	/**
	 * 拷贝构造
	 * @param rhs 拷贝的对象
	 */
	public Tour(com.earthview.world.spatial.kml.Tour rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("CTour", list);
	}

	native private void addTourUnit_CTourUnit(long pNativeObject, long ref_unit);
	/**
	 * 添加对象到列表
	 * @param unit 添加的对象
	 */
	public void addTourUnit(com.earthview.world.spatial.kml.TourUnit ref_unit)
	{
		long ref_unitParamValue = (ref_unit == null ? 0L : ref_unit.nativeObject.pointer);
		addTourUnit_CTourUnit(this.nativeObject.pointer, ref_unitParamValue);
	}
	native private void removeTourUnit_ev_size_t(long pNativeObject, long index);
	/**
	 * 移除指定的索引的元素
	 * @param unit 索引位置
	 */
	public void removeTourUnit(long index)
	{
		long indexParamValue = index;
		removeTourUnit_ev_size_t(this.nativeObject.pointer, indexParamValue);
	}
	native private void clearTourUnit_void(long pNativeObject);
	/**
	 * 清空对象到列表
	 */
	public void clearTourUnit()
	{
		clearTourUnit_void(this.nativeObject.pointer);
	}
	native private long getTourUnit_ev_size_t(long pNativeObject, long index);
	/**
	 * 获取指定索引的对象
	 * @param index 索引
	 * @return 返回对象
	 */
	public com.earthview.world.spatial.kml.TourUnit getTourUnit(long index)
	{
		long indexParamValue = index;
		long returnValue = getTourUnit_ev_size_t(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.TourUnit __returnValue = new com.earthview.world.spatial.kml.TourUnit(CreatedWhenConstruct.CWC_NotToCreate, "CTourUnit");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.TourUnit)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTourUnit");
		}
		return __returnValue;
	}
	native private long getTourUnitNum_void(long pNativeObject);
	/**
	 * 获取子对象的个数
	 * @return 返回个数
	 */
	public long getTourUnitNum()
	{
		long returnValue = getTourUnitNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isVisiable_void(long pNativeObject);
	/**
	 * 判断是否可见
	 * @return 是否可见
	 */
	public boolean isVisiable()
	{
		boolean returnValue = isVisiable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVisible_ev_bool(long pNativeObject, boolean visiable);
	/**
	 * 设置是否可见
	 */
	public void setVisible(boolean visiable)
	{
		boolean visiableParamValue = visiable;
		setVisible_ev_bool(this.nativeObject.pointer, visiableParamValue);
	}
	native private boolean isOpen_void(long pNativeObject);
	/**
	 * 左侧树节点是否打开
	 * @return bool
	 */
	public boolean isOpen()
	{
		boolean returnValue = isOpen_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setOpened_ev_bool(long pNativeObject, boolean opened);
	/**
	 * 设置左侧树节点是否打开
	 */
	public void setOpened(boolean opened)
	{
		boolean openedParamValue = opened;
		setOpened_ev_bool(this.nativeObject.pointer, openedParamValue);
	}
	native private long getDescription_void(long pNativeObject);
	/**
	 * 获得描述
	 * @return 返回描述
	 */
	public StringPointer getDescription()
	{
		long returnValue = getDescription_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setDescription_EVString(long pNativeObject, String descripton);
	/**
	 * 设置描述
	 */
	public void setDescription(String descripton)
	{
		String descriptonParamValue = descripton;
		setDescription_EVString(this.nativeObject.pointer, descriptonParamValue);
	}
	native private long getTourUnits_void(long pNativeObject);
	/**
	 * /获取游览的关键点/
	 * @return 返回关键点
	 */
	public com.earthview.world.spatial.kml.TourUnitVector getTourUnits()
	{
		long returnValue = getTourUnits_void(this.nativeObject.pointer);
		com.earthview.world.spatial.kml.TourUnitVector __returnValue = new com.earthview.world.spatial.kml.TourUnitVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTourUnitVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.TourUnitVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTourUnitVector");
		}
		return __returnValue;
	}
	public Tour(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Tour(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Tour fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Tour obj = null;
 		if(baseObj instanceof Tour)
		{
			obj = (Tour)baseObj;
		} else {
			obj = new Tour(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTour");
			obj.increaseCast();
		}

		return obj;
	}
}
