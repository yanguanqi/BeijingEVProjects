package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SphereGeometryFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::CSphereGeometryFactory", new SphereGeometryFactoryClassFactory());
	}

	public SphereGeometryFactory(double dfSemiMajor, double dfInvFlattening) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dfSemiMajorPtr = new BasePointer(dfSemiMajor);
		list.add("dfSemiMajor", dfSemiMajorPtr.get());
		BasePointer dfInvFlatteningPtr = new BasePointer(dfInvFlattening);
		list.add("dfInvFlattening", dfInvFlatteningPtr.get());
		Create("CSphereGeometryFactory", list);
	}

	native private long createFromCircle_ev_real64_ev_real64_ev_real64(long pNativeObject, double centerLon, double centerLat, double radius);
	/**
	 * 由圆创建球面折线
	 * @param centerLon 圆心经度(度)
	 * @param centerLat 圆心纬度(度)
	 * @param radius 半径(米)
	 */
	public com.earthview.world.spatial.geometry.LineString createFromCircle(double centerLon, double centerLat, double radius)
	{
		double centerLonParamValue = centerLon;
		double centerLatParamValue = centerLat;
		double radiusParamValue = radius;
		long returnValue = createFromCircle_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, centerLonParamValue, centerLatParamValue, radiusParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.LineString __returnValue = new com.earthview.world.spatial.geometry.LineString(CreatedWhenConstruct.CWC_NotToCreate, "CLineString");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.LineString)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CLineString");
		}
		return __returnValue;
	}
	native private long createFromEllipse_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double centerLon, double centerLat, double semiMajor, double semiMinor, double majorAzimuth);
	/**
	 * 由椭圆创建球面折线
	 * @param centerLon 椭圆中心经度(度)
	 * @param centerLat 椭圆中心纬度(度)
	 * @param semiMajor 椭圆长半轴长度(米)
	 * @param semiMinor 椭圆短半轴长度(米)
	 * @param majorAzimuth 长半轴的大地方位角(度,正北方向为0,顺时针为正)
	 */
	public com.earthview.world.spatial.geometry.LineString createFromEllipse(double centerLon, double centerLat, double semiMajor, double semiMinor, double majorAzimuth)
	{
		double centerLonParamValue = centerLon;
		double centerLatParamValue = centerLat;
		double semiMajorParamValue = semiMajor;
		double semiMinorParamValue = semiMinor;
		double majorAzimuthParamValue = majorAzimuth;
		long returnValue = createFromEllipse_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, centerLonParamValue, centerLatParamValue, semiMajorParamValue, semiMinorParamValue, majorAzimuthParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.LineString __returnValue = new com.earthview.world.spatial.geometry.LineString(CreatedWhenConstruct.CWC_NotToCreate, "CLineString");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.LineString)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CLineString");
		}
		return __returnValue;
	}
	native private long createFromPoints_CCoordinate_ev_uint32(long pNativeObject, long points, long nCount);
	/**
	 * 由点创建球面折线（暂未实现）
	 * @param points 点串
	 * @param nCount 点数
	 */
	public com.earthview.world.spatial.geometry.LineString createFromPoints(com.earthview.world.spatial.geometry.Coordinate points, long nCount)
	{
		long pointsParamValue = (points == null ? 0L : points.nativeObject.pointer);
		long nCountParamValue = nCount;
		long returnValue = createFromPoints_CCoordinate_ev_uint32(this.nativeObject.pointer, pointsParamValue, nCountParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.LineString __returnValue = new com.earthview.world.spatial.geometry.LineString(CreatedWhenConstruct.CWC_NotToCreate, "CLineString");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.LineString)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CLineString");
		}
		return __returnValue;
	}
	public SphereGeometryFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SphereGeometryFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SphereGeometryFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SphereGeometryFactory obj = null;
 		if(baseObj instanceof SphereGeometryFactory)
		{
			obj = (SphereGeometryFactory)baseObj;
		} else {
			obj = new SphereGeometryFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSphereGeometryFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
