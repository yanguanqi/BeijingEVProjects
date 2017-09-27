package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class UtilityCalculator extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CUtilityCalculator", new UtilityCalculatorClassFactory());
	}

	public UtilityCalculator() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CUtilityCalculator", null);
	}

	native private static double screensizefix_scale_CVector3_CCamera(long nodePos, long cam);
	/**
	 * 计算当前渲染窗口尺寸下,保持固定屏幕尺寸的物体所需变换的缩放比例
	 * @param nodePos 物体所在场景节点位置
	 * @param cam 当前相机
	 * @return 缩放比例值
	 */
	public static double screensizefix_scale(com.earthview.world.spatial.math.Vector3 nodePos, com.earthview.world.graphic.Camera cam)
	{
		long nodePosParamValue = nodePos.nativeObject.pointer;
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		double returnValue = screensizefix_scale_CVector3_CCamera(nodePosParamValue, camParamValue);
		return returnValue;
	}
	native private static double screensizefix_scale_CVector3_CCamera_Real(long nodePos, long cam, long node2camDis);
	public static double screensizefix_scale(com.earthview.world.spatial.math.Vector3 nodePos, com.earthview.world.graphic.Camera cam, DoublePointer node2camDis)
	{
		long nodePosParamValue = nodePos.nativeObject.pointer;
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		long node2camDisParamValue = node2camDis.nativeObject.pointer;
		double returnValue = screensizefix_scale_CVector3_CCamera_Real(nodePosParamValue, camParamValue, node2camDisParamValue);
		return returnValue;
	}
	native private static double screensizefix_scale_Real_CCamera(double distance, long cam);
	/**
	 * @param distance 物体与相机的距离
	 * @param cam 当前相机
	 * @return 缩放比例值
	 */
	public static double screensizefix_scale(double distance, com.earthview.world.graphic.Camera cam)
	{
		double distanceParamValue = distance;
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		double returnValue = screensizefix_scale_Real_CCamera(distanceParamValue, camParamValue);
		return returnValue;
	}
	public UtilityCalculator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public UtilityCalculator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static UtilityCalculator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		UtilityCalculator obj = null;
 		if(baseObj instanceof UtilityCalculator)
		{
			obj = (UtilityCalculator)baseObj;
		} else {
			obj = new UtilityCalculator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CUtilityCalculator");
			obj.increaseCast();
		}

		return obj;
	}
}
