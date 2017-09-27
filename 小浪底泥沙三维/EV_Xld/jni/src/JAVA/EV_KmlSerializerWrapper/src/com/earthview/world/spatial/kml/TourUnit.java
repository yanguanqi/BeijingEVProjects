package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///漫游
public class TourUnit extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CTourUnit", new TourUnitClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::JCTourUnitProxy", new TourUnitClassFactory());
	}

	/**
	 * 构造函数
	 */
	public TourUnit() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCTourUnitProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.kml.TourUnit".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int get_m_type_void(long pNativeObject);
	public com.earthview.world.spatial.kml.EVTourUnitType get_m_type()
	{
		int jniValue = get_m_type_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial.kml.EVTourUnitType.toEnum(jniValue);
	}
	
	native private void set_m_type_EVTourUnitType (long pNativeObject, int value);
	public void set_m_type(com.earthview.world.spatial.kml.EVTourUnitType m_type)
	{
		int m_typeParamValue = m_type.getValue();
		
		set_m_type_EVTourUnitType(this.nativeObject.pointer, m_typeParamValue);
	}
	
	protected  int getType_void_callback()
	{
		com.earthview.world.spatial.kml.EVTourUnitType returnValue = getType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取漫游的类型
	 * @return 返回漫游的类型
	 */
	public com.earthview.world.spatial.kml.EVTourUnitType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.kml.EVTourUnitType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.kml.EVTourUnitType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.kml.EVTourUnitType.toEnum(returnValue);
	}

	native private void setType_EVTourUnitType(long pNativeObject, int type_tour);
	/**
	 * 设置漫游的类型
	 * @param type_tour 漫游类型
	 */
	public void setType(com.earthview.world.spatial.kml.EVTourUnitType type_tour)
	{
		int type_tourParamValue = type_tour.getValue();
		setType_EVTourUnitType(this.nativeObject.pointer, type_tourParamValue);
	}
	protected  long ev_clone_void_callback()
	{
		com.earthview.world.spatial.kml.TourUnit returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * /克隆一个漫游对象/
	 * @return 返回漫游对象
	 */
	public com.earthview.world.spatial.kml.TourUnit ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
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
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.kml.TourUnit ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
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

	public TourUnit(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TourUnit(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static TourUnit fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TourUnit obj = null;
 		if(baseObj instanceof TourUnit)
		{
			obj = (TourUnit)baseObj;
		} else {
			obj = new TourUnit(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTourUnit");
			obj.increaseCast();
		}

		return obj;
	}
}
