package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 大地测量
 */
public class GeodesicMeasure extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::CGeodesicMeasure", new GeodesicMeasureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::JCGeodesicMeasureProxy", new GeodesicMeasureClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param dfSemiMajor 椭球长半轴
	 * @param dfInvFlattening 椭球偏率倒数
	 */
	public GeodesicMeasure(double dfSemiMajor, double dfInvFlattening) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dfSemiMajorPtr = new BasePointer(dfSemiMajor);
		list.add("dfSemiMajor", dfSemiMajorPtr.get());
		BasePointer dfInvFlatteningPtr = new BasePointer(dfInvFlattening);
		list.add("dfInvFlattening", dfInvFlatteningPtr.get());
		Create("JCGeodesicMeasureProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geometry.GeodesicMeasure".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  double distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_callback(double longitude1, double latitude1, double longitude2, double latitude2, long polyline, long count)
	{
		double longitude1ParamValue = longitude1;
		double latitude1ParamValue = latitude1;
		double longitude2ParamValue = longitude2;
		double latitude2ParamValue = latitude2;
		com.earthview.world.spatial.geometry.Polyline polylineParamValue = (polyline == 0L ? null : new com.earthview.world.spatial.geometry.Polyline(CreatedWhenConstruct.CWC_NotToCreate));
		if(polylineParamValue != null)
		{
		polylineParamValue.setDelegate(true);
		polylineParamValue.setInstancePointer(new InstancePointer(polyline));
		IClassFactory polylineParamValueClassFactory = GlobalClassFactoryMap.get(polylineParamValue.getCppInstanceTypeName());
		if (polylineParamValueClassFactory != null)
		{
			polylineParamValue.setDelegate(true);
			polylineParamValue = (com.earthview.world.spatial.geometry.Polyline)polylineParamValueClassFactory.create();
			polylineParamValue.setDelegate(true);
			polylineParamValue.setInstancePointer(new InstancePointer(polyline));
		}
		}
		long countParamValue = count;
		double returnValue = distanceMeasure(longitude1ParamValue, latitude1ParamValue, longitude2ParamValue, latitude2ParamValue, polylineParamValue, countParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32(long pNativeObject, double longitude1, double latitude1, double longitude2, double latitude2, long polyline, long count);
	/**
	 * 测量距离（两点）
	 * @param longitude1 第一个点经度
	 * @param latitude1 第一个点纬度
	 * @param longitude2 第二个点经度
	 * @param latitude2 第二个点纬度
	 * @param linestring 可为NULL，两点在球面进行加密
	 * @param count linestring为NULL时忽略此参数，设置加密点个数
	 */
	public double distanceMeasure(double longitude1, double latitude1, double longitude2, double latitude2, com.earthview.world.spatial.geometry.Polyline polyline, long count)
	{
		double longitude1ParamValue = longitude1;
		double latitude1ParamValue = latitude1;
		double longitude2ParamValue = longitude2;
		double latitude2ParamValue = latitude2;
		long polylineParamValue = (polyline == null ? 0L : polyline.nativeObject.pointer);
		long countParamValue = count;
		double returnValue = distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32(this.nativeObject.pointer, longitude1ParamValue, latitude1ParamValue, longitude2ParamValue, latitude2ParamValue, polylineParamValue, countParamValue);
		return returnValue;
	}
	native private double distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_NoVirtual(long pNativeObject, double longitude1, double latitude1, double longitude2, double latitude2, long polyline, long count);
	protected double distanceMeasure_NoVirtual(double longitude1, double latitude1, double longitude2, double latitude2, com.earthview.world.spatial.geometry.Polyline polyline, long count)
	{
		double longitude1ParamValue = longitude1;
		double latitude1ParamValue = latitude1;
		double longitude2ParamValue = longitude2;
		double latitude2ParamValue = latitude2;
		long polylineParamValue = (polyline == null ? 0L : polyline.nativeObject.pointer);
		long countParamValue = count;
		double returnValue = distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_NoVirtual(this.nativeObject.pointer, longitude1ParamValue, latitude1ParamValue, longitude2ParamValue, latitude2ParamValue, polylineParamValue, countParamValue);
		return returnValue;
	}

	protected  void polylineMeasure_CPolyline_ev_real64_callback(long polyline, long distance)
	{
		com.earthview.world.spatial.geometry.Polyline polylineParamValue = (polyline == 0L ? null : new com.earthview.world.spatial.geometry.Polyline(CreatedWhenConstruct.CWC_NotToCreate));
		if(polylineParamValue != null)
		{
		polylineParamValue.setDelegate(true);
		polylineParamValue.setInstancePointer(new InstancePointer(polyline));
		IClassFactory polylineParamValueClassFactory = GlobalClassFactoryMap.get(polylineParamValue.getCppInstanceTypeName());
		if (polylineParamValueClassFactory != null)
		{
			polylineParamValue.setDelegate(true);
			polylineParamValue = (com.earthview.world.spatial.geometry.Polyline)polylineParamValueClassFactory.create();
			polylineParamValue.setDelegate(true);
			polylineParamValue.setInstancePointer(new InstancePointer(polyline));
		}
		}
		DoublePointer distanceParamValue = new DoublePointer(new InstancePointer(distance));
		polylineMeasure(polylineParamValue, distanceParamValue);
	}

	native private void polylineMeasure_CPolyline_ev_real64(long pNativeObject, long polyline, long distance);
	/**
	 * 线长度测量polyline
	 * @param polygon 待测量线
	 * @param periMeter 总长度
	 */
	public void polylineMeasure(com.earthview.world.spatial.geometry.Polyline polyline, DoublePointer distance)
	{
		long polylineParamValue = (polyline == null ? 0L : polyline.nativeObject.pointer);
		long distanceParamValue = distance.nativeObject.pointer;
		polylineMeasure_CPolyline_ev_real64(this.nativeObject.pointer, polylineParamValue, distanceParamValue);
	}
	native private void polylineMeasure_CPolyline_ev_real64_NoVirtual(long pNativeObject, long polyline, long distance);
	protected void polylineMeasure_NoVirtual(com.earthview.world.spatial.geometry.Polyline polyline, DoublePointer distance)
	{
		long polylineParamValue = (polyline == null ? 0L : polyline.nativeObject.pointer);
		long distanceParamValue = distance.nativeObject.pointer;
		polylineMeasure_CPolyline_ev_real64_NoVirtual(this.nativeObject.pointer, polylineParamValue, distanceParamValue);
	}

	protected  void polygonMeasure_CPolygon_ev_real64_ev_real64_callback(long polygon, long area, long periMeter)
	{
		com.earthview.world.spatial.geometry.Polygon polygonParamValue = (polygon == 0L ? null : new com.earthview.world.spatial.geometry.Polygon(CreatedWhenConstruct.CWC_NotToCreate));
		if(polygonParamValue != null)
		{
		polygonParamValue.setDelegate(true);
		polygonParamValue.setInstancePointer(new InstancePointer(polygon));
		IClassFactory polygonParamValueClassFactory = GlobalClassFactoryMap.get(polygonParamValue.getCppInstanceTypeName());
		if (polygonParamValueClassFactory != null)
		{
			polygonParamValue.setDelegate(true);
			polygonParamValue = (com.earthview.world.spatial.geometry.Polygon)polygonParamValueClassFactory.create();
			polygonParamValue.setDelegate(true);
			polygonParamValue.setInstancePointer(new InstancePointer(polygon));
		}
		}
		DoublePointer areaParamValue = new DoublePointer(new InstancePointer(area));
		DoublePointer periMeterParamValue = new DoublePointer(new InstancePointer(periMeter));
		polygonMeasure(polygonParamValue, areaParamValue, periMeterParamValue);
	}

	native private void polygonMeasure_CPolygon_ev_real64_ev_real64(long pNativeObject, long polygon, long area, long periMeter);
	/**
	 * 多边形测量polygon
	 * @param polygon 待测量多边形
	 * @param area 面积
	 * @param periMeter 周长
	 */
	public void polygonMeasure(com.earthview.world.spatial.geometry.Polygon polygon, DoublePointer area, DoublePointer periMeter)
	{
		long polygonParamValue = (polygon == null ? 0L : polygon.nativeObject.pointer);
		long areaParamValue = area.nativeObject.pointer;
		long periMeterParamValue = periMeter.nativeObject.pointer;
		polygonMeasure_CPolygon_ev_real64_ev_real64(this.nativeObject.pointer, polygonParamValue, areaParamValue, periMeterParamValue);
	}
	native private void polygonMeasure_CPolygon_ev_real64_ev_real64_NoVirtual(long pNativeObject, long polygon, long area, long periMeter);
	protected void polygonMeasure_NoVirtual(com.earthview.world.spatial.geometry.Polygon polygon, DoublePointer area, DoublePointer periMeter)
	{
		long polygonParamValue = (polygon == null ? 0L : polygon.nativeObject.pointer);
		long areaParamValue = area.nativeObject.pointer;
		long periMeterParamValue = periMeter.nativeObject.pointer;
		polygonMeasure_CPolygon_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, polygonParamValue, areaParamValue, periMeterParamValue);
	}

	public GeodesicMeasure(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GeodesicMeasure(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32(long pNativeObject, String method);
	native protected void register_polylineMeasure_CPolyline_ev_real64(long pNativeObject, String method);
	native protected void register_polygonMeasure_CPolygon_ev_real64_ev_real64(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32(this.nativeObject.pointer, "distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_callback");
			this.register_polylineMeasure_CPolyline_ev_real64(this.nativeObject.pointer, "polylineMeasure_CPolyline_ev_real64_callback");
			this.register_polygonMeasure_CPolygon_ev_real64_ev_real64(this.nativeObject.pointer, "polygonMeasure_CPolygon_ev_real64_ev_real64_callback");
		}
	}
	
	public static GeodesicMeasure fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GeodesicMeasure obj = null;
 		if(baseObj instanceof GeodesicMeasure)
		{
			obj = (GeodesicMeasure)baseObj;
		} else {
			obj = new GeodesicMeasure(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeodesicMeasure");
			obj.increaseCast();
		}

		return obj;
	}
}
