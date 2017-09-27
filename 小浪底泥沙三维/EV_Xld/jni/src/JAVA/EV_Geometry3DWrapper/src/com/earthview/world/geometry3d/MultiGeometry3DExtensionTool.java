package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 二维图形扩展工具类管理图形扩展方法
 */
public class MultiGeometry3DExtensionTool extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CMultiGeometry3DExtensionTool", new MultiGeometry3DExtensionToolClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public MultiGeometry3DExtensionTool() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMultiGeometry3DExtensionTool", null);
	}

	native private static void extensionPointToBillboard_CMultiPoint3DExtension(long pointExtension);
	/**
	 * 将点用公告板符号拉伸成公告板
	 * @param pointExtension 点扩展的存储信息
	 */
	public static void extensionPointToBillboard(com.earthview.world.geometry3d.MultiPoint3DExtension pointExtension)
	{
		long pointExtensionParamValue = (pointExtension == null ? 0L : pointExtension.nativeObject.pointer);
		extensionPointToBillboard_CMultiPoint3DExtension(pointExtensionParamValue);
	}
	native private static void extensionPointToIcon_CMultiPoint3DExtension(long pointExtension);
	/**
	 * 将点用图标符号拉伸成图标元素
	 * @param pointExtension 点扩展的存储信息
	 */
	public static void extensionPointToIcon(com.earthview.world.geometry3d.MultiPoint3DExtension pointExtension)
	{
		long pointExtensionParamValue = (pointExtension == null ? 0L : pointExtension.nativeObject.pointer);
		extensionPointToIcon_CMultiPoint3DExtension(pointExtensionParamValue);
	}
	native private static void extensionPointToPhoto_CMultiPoint3DExtension(long pointExtension);
	/**
	 * 将点用图片符号拉伸成图片元素
	 * @param pointExtension 点扩展的存储信息
	 */
	public static void extensionPointToPhoto(com.earthview.world.geometry3d.MultiPoint3DExtension pointExtension)
	{
		long pointExtensionParamValue = (pointExtension == null ? 0L : pointExtension.nativeObject.pointer);
		extensionPointToPhoto_CMultiPoint3DExtension(pointExtensionParamValue);
	}
	native private static void extensionPointToModel_CMultiPoint3DExtension(long pointExtension);
	/**
	 * 将点用模型符号拉伸成模型
	 * @param pointExtension 点扩展的存储信息
	 */
	public static void extensionPointToModel(com.earthview.world.geometry3d.MultiPoint3DExtension pointExtension)
	{
		long pointExtensionParamValue = (pointExtension == null ? 0L : pointExtension.nativeObject.pointer);
		extensionPointToModel_CMultiPoint3DExtension(pointExtensionParamValue);
	}
	native private static void extensionLineToSquard_CMultiPolyline3DExtension(long lineExtension);
	/**
	 * 将线用线符号拉伸成立方体
	 * @param lineExtension 线扩展的存储信息
	 */
	public static void extensionLineToSquard(com.earthview.world.geometry3d.MultiPolyline3DExtension lineExtension)
	{
		long lineExtensionParamValue = (lineExtension == null ? 0L : lineExtension.nativeObject.pointer);
		extensionLineToSquard_CMultiPolyline3DExtension(lineExtensionParamValue);
	}
	native private static void extensionLineToSurface_CMultiPolyline3DExtension(long lineExtension);
	/**
	 * 将线用线符号拉伸成墙
	 * @param lineExtension 线扩展的存储信息
	 */
	public static void extensionLineToSurface(com.earthview.world.geometry3d.MultiPolyline3DExtension lineExtension)
	{
		long lineExtensionParamValue = (lineExtension == null ? 0L : lineExtension.nativeObject.pointer);
		extensionLineToSurface_CMultiPolyline3DExtension(lineExtensionParamValue);
	}
	native private static void extensionLineToConduit_CMultiPolyline3DExtension(long lineExtension);
	/**
	 * 将线用线符号拉伸成管道
	 * @param lineExtension 线扩展的存储信息
	 */
	public static void extensionLineToConduit(com.earthview.world.geometry3d.MultiPolyline3DExtension lineExtension)
	{
		long lineExtensionParamValue = (lineExtension == null ? 0L : lineExtension.nativeObject.pointer);
		extensionLineToConduit_CMultiPolyline3DExtension(lineExtensionParamValue);
	}
	native private static void extensionPolygonToCuboid_CMultiPolygon3DExtension(long ploygonExtension);
	/**
	 * 将面用面符号拉伸成体
	 * @param ploygonExtension 面扩展的存储信息
	 */
	public static void extensionPolygonToCuboid(com.earthview.world.geometry3d.MultiPolygon3DExtension ploygonExtension)
	{
		long ploygonExtensionParamValue = (ploygonExtension == null ? 0L : ploygonExtension.nativeObject.pointer);
		extensionPolygonToCuboid_CMultiPolygon3DExtension(ploygonExtensionParamValue);
	}
	public MultiGeometry3DExtensionTool(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MultiGeometry3DExtensionTool(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MultiGeometry3DExtensionTool fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MultiGeometry3DExtensionTool obj = null;
 		if(baseObj instanceof MultiGeometry3DExtensionTool)
		{
			obj = (MultiGeometry3DExtensionTool)baseObj;
		} else {
			obj = new MultiGeometry3DExtensionTool(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMultiGeometry3DExtensionTool");
			obj.increaseCast();
		}

		return obj;
	}
}
