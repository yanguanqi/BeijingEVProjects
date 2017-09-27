package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 节点动画插值类
 */
public class GeoInterpolation extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CGeoInterpolation", new GeoInterpolationClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GeoInterpolation() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGeoInterpolation", null);
	}

	native private static long interpolation_CGlobeControlPointMap(long controlPoints);
	/**
	 * 对原始的控制点进行球面插值
	 * @param controlPoints 控制点
	 * @return 插值而来的结果
	 */
	public static com.earthview.world.spatial3d.GlobeControlPointMap interpolation(com.earthview.world.spatial3d.GlobeControlPointMap controlPoints)
	{
		long controlPointsParamValue = controlPoints.nativeObject.pointer;
		long returnValue = interpolation_CGlobeControlPointMap(controlPointsParamValue);
		com.earthview.world.spatial3d.GlobeControlPointMap __returnValue = new com.earthview.world.spatial3d.GlobeControlPointMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPointMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeControlPointMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPointMap");
		}
		return __returnValue;
	}
	native private static void calculateTangent_CVector3_CVector3_CVector3_CVector3(long v1, long v2, long tangent1, long tangent2);
	public static void calculateTangent(com.earthview.world.spatial.math.Vector3 v1, com.earthview.world.spatial.math.Vector3 v2, com.earthview.world.spatial.math.Vector3 tangent1, com.earthview.world.spatial.math.Vector3 tangent2)
	{
		long v1ParamValue = v1.nativeObject.pointer;
		long v2ParamValue = v2.nativeObject.pointer;
		long tangent1ParamValue = tangent1.nativeObject.pointer;
		long tangent2ParamValue = tangent2.nativeObject.pointer;
		calculateTangent_CVector3_CVector3_CVector3_CVector3(v1ParamValue, v2ParamValue, tangent1ParamValue, tangent2ParamValue);
	}
	native private static long getBezierCurve_CGlobeControlPoint_CGlobeControlPoint_CVector3_CVector3_ev_uint32(long pointA, long pointB, long controlPointA, long controlPointB, long smooth);
	/**
	 * 对原始的控制点进行贝塞尔插值
	 * @param pointA 第一个点
	 * @param pointB 第二个点
	 * @param controlPointA 第一个控制点
	 * @param controlPointB 第二个控制点
	 * @param smooth 圆滑程度，0-7之间的一个数
	 * @return 插值而来的结果
	 */
	public static com.earthview.world.spatial3d.GlobeControlPointMap getBezierCurve(com.earthview.world.spatial3d.GlobeControlPoint pointA, com.earthview.world.spatial3d.GlobeControlPoint pointB, com.earthview.world.spatial.math.Vector3 controlPointA, com.earthview.world.spatial.math.Vector3 controlPointB, long smooth)
	{
		long pointAParamValue = pointA.nativeObject.pointer;
		long pointBParamValue = pointB.nativeObject.pointer;
		long controlPointAParamValue = controlPointA.nativeObject.pointer;
		long controlPointBParamValue = controlPointB.nativeObject.pointer;
		long smoothParamValue = smooth;
		long returnValue = getBezierCurve_CGlobeControlPoint_CGlobeControlPoint_CVector3_CVector3_ev_uint32(pointAParamValue, pointBParamValue, controlPointAParamValue, controlPointBParamValue, smoothParamValue);
		com.earthview.world.spatial3d.GlobeControlPointMap __returnValue = new com.earthview.world.spatial3d.GlobeControlPointMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPointMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeControlPointMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPointMap");
		}
		return __returnValue;
	}
	native private static long getBezierCurve_CGlobeControlPoint_CGlobeControlPoint_CVector3_CVector3(long pointA, long pointB, long controlPointA, long controlPointB);
	/**
	 * 对原始的控制点进行贝塞尔插值
	 * @param pointA 第一个点
	 * @param pointB 第二个点
	 * @param controlPointA 第一个控制点
	 * @param controlPointB 第二个控制点
	 * @return 插值而来的结果
	 */
	public static com.earthview.world.spatial3d.GlobeControlPointMap getBezierCurve(com.earthview.world.spatial3d.GlobeControlPoint pointA, com.earthview.world.spatial3d.GlobeControlPoint pointB, com.earthview.world.spatial.math.Vector3 controlPointA, com.earthview.world.spatial.math.Vector3 controlPointB)
	{
		long pointAParamValue = pointA.nativeObject.pointer;
		long pointBParamValue = pointB.nativeObject.pointer;
		long controlPointAParamValue = controlPointA.nativeObject.pointer;
		long controlPointBParamValue = controlPointB.nativeObject.pointer;
		long returnValue = getBezierCurve_CGlobeControlPoint_CGlobeControlPoint_CVector3_CVector3(pointAParamValue, pointBParamValue, controlPointAParamValue, controlPointBParamValue);
		com.earthview.world.spatial3d.GlobeControlPointMap __returnValue = new com.earthview.world.spatial3d.GlobeControlPointMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPointMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeControlPointMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPointMap");
		}
		return __returnValue;
	}
	native private static long bezierInterpolation_CGlobeControlPointMap(long controlPoints);
	/**
	 * 对原始的控制点进行贝塞尔插值
	 * @param controlPoints 控制点
	 * @return 插值而来的结果
	 */
	public static com.earthview.world.spatial3d.GlobeControlPointMap bezierInterpolation(com.earthview.world.spatial3d.GlobeControlPointMap controlPoints)
	{
		long controlPointsParamValue = controlPoints.nativeObject.pointer;
		long returnValue = bezierInterpolation_CGlobeControlPointMap(controlPointsParamValue);
		com.earthview.world.spatial3d.GlobeControlPointMap __returnValue = new com.earthview.world.spatial3d.GlobeControlPointMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPointMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeControlPointMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPointMap");
		}
		return __returnValue;
	}
	public GeoInterpolation(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GeoInterpolation(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GeoInterpolation fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GeoInterpolation obj = null;
 		if(baseObj instanceof GeoInterpolation)
		{
			obj = (GeoInterpolation)baseObj;
		} else {
			obj = new GeoInterpolation(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeoInterpolation");
			obj.increaseCast();
		}

		return obj;
	}
}
