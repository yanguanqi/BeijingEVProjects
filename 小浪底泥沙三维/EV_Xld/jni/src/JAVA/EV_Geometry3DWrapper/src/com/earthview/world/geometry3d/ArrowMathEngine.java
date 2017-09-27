package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// 数学计算方法类， 不导出
public class ArrowMathEngine extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CArrowMathEngine", new ArrowMathEngineClassFactory());
	}

	/**
	 * 构造函数
	 */
	public ArrowMathEngine() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CArrowMathEngine", null);
	}

	native private static long createGroundArrowPoints_VertexList(long mKeyPoints);
	/**
	 * 由四个关键点创建构造箭头的顶点
	 * @param gridPoints 关键点数组
	 * @return 构造箭头的顶点列表
	 */
	public static com.earthview.world.spatial.math.VertexList createGroundArrowPoints(com.earthview.world.spatial.math.VertexList mKeyPoints)
	{
		long mKeyPointsParamValue = mKeyPoints.nativeObject.pointer;
		long returnValue = createGroundArrowPoints_VertexList(mKeyPointsParamValue);
		com.earthview.world.spatial.math.VertexList __returnValue = new com.earthview.world.spatial.math.VertexList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "VertexList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.VertexList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "VertexList");
		}
		return __returnValue;
	}
	native private static long createThreeDArrowPoints_VertexList_VertexList_CVector3(long mKeyPoints, long drawPointsT, long endPointT);
	/**
	 * 由四个关键点生成构造空中箭头的所有顶点
	 * @param vectors 四个关键点数组
	 * @param drawPointsT 箭头头部顶点数组
	 * @param endPointT 箭头结束点顶点
	 * @return 箭头
	 */
	public static com.earthview.world.spatial.math.VertexList createThreeDArrowPoints(com.earthview.world.spatial.math.VertexList mKeyPoints, com.earthview.world.spatial.math.VertexList drawPointsT, com.earthview.world.spatial.math.Vector3 endPointT)
	{
		long mKeyPointsParamValue = mKeyPoints.nativeObject.pointer;
		long drawPointsTParamValue = drawPointsT.nativeObject.pointer;
		long endPointTParamValue = endPointT.nativeObject.pointer;
		long returnValue = createThreeDArrowPoints_VertexList_VertexList_CVector3(mKeyPointsParamValue, drawPointsTParamValue, endPointTParamValue);
		com.earthview.world.spatial.math.VertexList __returnValue = new com.earthview.world.spatial.math.VertexList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "VertexList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.VertexList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "VertexList");
		}
		return __returnValue;
	}
	public ArrowMathEngine(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ArrowMathEngine(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ArrowMathEngine fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ArrowMathEngine obj = null;
 		if(baseObj instanceof ArrowMathEngine)
		{
			obj = (ArrowMathEngine)baseObj;
		} else {
			obj = new ArrowMathEngine(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CArrowMathEngine");
			obj.increaseCast();
		}

		return obj;
	}
}
