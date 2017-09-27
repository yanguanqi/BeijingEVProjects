package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的几何对象集合类
 */
public class GeometryList extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CGeometryList", new GeometryListClassFactory());
	}

	native private long getGeometryCount_void(long pNativeObject);
	/**
	 * 获取几何对象数
	 * @return 集合对象数目
	 */
	public long getGeometryCount()
	{
		long returnValue = getGeometryCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getGeometryRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的几何对象
	 * @param index 索引
	 * @return 指定几何对象的指针
	 */
	public com.earthview.world.spatial.geometry.Igeometry getGeometryRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getGeometryRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}
	native private void addGeometry_IGeometry(long pNativeObject, long geom);
	/**
	 * 追加几何对象
	 * @param geom 几何对象
	 */
	public void addGeometry(com.earthview.world.spatial.geometry.Igeometry geom)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		addGeometry_IGeometry(this.nativeObject.pointer, geomParamValue);
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空内部数据
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	/**
	 * 构造函数
	 */
	public GeometryList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGeometryList", null);
	}

	public GeometryList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GeometryList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GeometryList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GeometryList obj = null;
 		if(baseObj instanceof GeometryList)
		{
			obj = (GeometryList)baseObj;
		} else {
			obj = new GeometryList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeometryList");
			obj.increaseCast();
		}

		return obj;
	}
}
