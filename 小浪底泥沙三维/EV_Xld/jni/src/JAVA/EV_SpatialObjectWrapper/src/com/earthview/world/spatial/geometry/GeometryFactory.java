package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 几何体创建工厂类，主要负责从序列化流中反序列化成几何体对象。该类采取单件模式。
 */
public class GeometryFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::CGeometryFactory", new GeometryFactoryClassFactory());
	}

	native private static long getInstance_void();
	/**
	 * 获取创建工厂实例
	 * @param  
	 */
	public static com.earthview.world.spatial.geometry.GeometryFactory getInstance()
	{
		long returnValue = getInstance_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.GeometryFactory __returnValue = new com.earthview.world.spatial.geometry.GeometryFactory(CreatedWhenConstruct.CWC_NotToCreate, "CGeometryFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.GeometryFactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGeometryFactory");
		}
		return __returnValue;
	}
	native private long createEmptyGeometry_EVGeometryType(long pNativeObject, int type);
	/**
	 * 创建空的几何体对象。
	 * @param  
	 */
	public com.earthview.world.spatial.geometry.Igeometry createEmptyGeometry(com.earthview.world.spatial.geometry.EVGeometryType type)
	{
		int typeParamValue = type.getValue();
		long returnValue = createEmptyGeometry_EVGeometryType(this.nativeObject.pointer, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}
	native private long createGeometryFromWKB_CDataStream(long pNativeObject, long stream);
	/**
	 * 通过WKB创建几何体对象
	 * @param stream WKB格式数据流
	 */
	public com.earthview.world.spatial.geometry.Igeometry createGeometryFromWKB(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = createGeometryFromWKB_CDataStream(this.nativeObject.pointer, streamParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}
	native private long createGeometryFromWKT_EVString(long pNativeObject, String wkt);
	/**
	 * 通过WKT创建几何体对象
	 * @param wkt WKT格式字符串
	 */
	public com.earthview.world.spatial.geometry.Igeometry createGeometryFromWKT(String wkt)
	{
		String wktParamValue = wkt;
		long returnValue = createGeometryFromWKT_EVString(this.nativeObject.pointer, wktParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}
	native private long createGeometryFromShapeFileBuffer_CDataStream(long pNativeObject, long stream);
	/**
	 * 通过Shapefile数据流，创建几何体对象
	 * @param stream Shapefile格式数据流
	 */
	public com.earthview.world.spatial.geometry.Igeometry createGeometryFromShapeFileBuffer(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = createGeometryFromShapeFileBuffer_CDataStream(this.nativeObject.pointer, streamParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}
	native private long createGeometryFromEVGeometryBuffer_CDataStream(long pNativeObject, long stream);
	/**
	 * 通过EarthView几何体数据流，创建几何体对象
	 * @param stream EarthView格式数据流
	 */
	public com.earthview.world.spatial.geometry.Igeometry createGeometryFromEVGeometryBuffer(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = createGeometryFromEVGeometryBuffer_CDataStream(this.nativeObject.pointer, streamParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}
	native private void destroyGeometry_IGeometry(long pNativeObject, long geom);
	/**
	 * 销毁创建的几何体对象
	 * @param  
	 */
	public void destroyGeometry(com.earthview.world.spatial.geometry.Igeometry geom)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		destroyGeometry_IGeometry(this.nativeObject.pointer, geomParamValue);
	}
	native private void release_void(long pNativeObject);
	/**
	 * 释放创建工厂相关参数
	 * @param  
	 */
	public void release()
	{
		release_void(this.nativeObject.pointer);
	}
	public GeometryFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GeometryFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GeometryFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GeometryFactory obj = null;
 		if(baseObj instanceof GeometryFactory)
		{
			obj = (GeometryFactory)baseObj;
		} else {
			obj = new GeometryFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeometryFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
