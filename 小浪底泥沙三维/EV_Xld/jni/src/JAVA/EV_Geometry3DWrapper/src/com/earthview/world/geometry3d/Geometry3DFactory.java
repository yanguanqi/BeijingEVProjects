package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 可渲染几何体工厂	由相应的几何体对象创建可渲染对象
 */
public class Geometry3DFactory extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CGeometry3DFactory", new Geometry3DFactoryClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public Geometry3DFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGeometry3DFactory", null);
	}

	native private static long createBox_CBox_IColor(long box, long color);
	/**
	 * 创建可渲染的长方体
	 * @param box 几何长方体
	 * @param color 颜色
	 * @return 可渲染实体
	 */
	public static com.earthview.world.geometry3d.SimpleRenderableEx createBox(com.earthview.world.spatial.geometry.Box box, com.earthview.world.spatial.display.Icolor color)
	{
		long boxParamValue = box.nativeObject.pointer;
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		long returnValue = createBox_CBox_IColor(boxParamValue, colorParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.SimpleRenderableEx __returnValue = new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleRenderableEx");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.SimpleRenderableEx)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSimpleRenderableEx");
		}
		return __returnValue;
	}
	native private static long createCone_CCone_IColor(long cone, long color);
	/**
	 * 创建可渲染的圆锥
	 * @param cone 几何圆锥体
	 * @param color 颜色
	 * @return 可渲染实体
	 */
	public static com.earthview.world.geometry3d.SimpleRenderableEx createCone(com.earthview.world.spatial.geometry.Cone cone, com.earthview.world.spatial.display.Icolor color)
	{
		long coneParamValue = cone.nativeObject.pointer;
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		long returnValue = createCone_CCone_IColor(coneParamValue, colorParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.SimpleRenderableEx __returnValue = new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleRenderableEx");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.SimpleRenderableEx)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSimpleRenderableEx");
		}
		return __returnValue;
	}
	native private static long createColumn_CColumn_IColor(long column, long color);
	/**
	 * 创建可渲染的圆柱体
	 * @param column 圆柱体
	 * @param color 颜色
	 * @return 可渲染实体
	 */
	public static com.earthview.world.geometry3d.SimpleRenderableEx createColumn(com.earthview.world.spatial.geometry.Column column, com.earthview.world.spatial.display.Icolor color)
	{
		long columnParamValue = column.nativeObject.pointer;
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		long returnValue = createColumn_CColumn_IColor(columnParamValue, colorParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.SimpleRenderableEx __returnValue = new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleRenderableEx");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.SimpleRenderableEx)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSimpleRenderableEx");
		}
		return __returnValue;
	}
	native private static long createEllipsoid_CEllipsoid_IColor(long ellipsoid, long color);
	/**
	 * 创建可渲染的椭球体
	 * @param ellipsoid 椭球体
	 * @param color 颜色
	 * @return 可渲染实体
	 */
	public static com.earthview.world.geometry3d.SimpleRenderableEx createEllipsoid(com.earthview.world.spatial.geometry.Ellipsoid ellipsoid, com.earthview.world.spatial.display.Icolor color)
	{
		long ellipsoidParamValue = ellipsoid.nativeObject.pointer;
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		long returnValue = createEllipsoid_CEllipsoid_IColor(ellipsoidParamValue, colorParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.SimpleRenderableEx __returnValue = new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleRenderableEx");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.SimpleRenderableEx)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSimpleRenderableEx");
		}
		return __returnValue;
	}
	native private static long createRing_CRing_IColor(long ring, long color);
	/**
	 * 创建可渲染的圆环
	 * @param ring 圆环
	 * @param color 颜色
	 * @return 可渲染实体
	 */
	public static com.earthview.world.geometry3d.SimpleRenderableEx createRing(com.earthview.world.spatial.geometry.Ring ring, com.earthview.world.spatial.display.Icolor color)
	{
		long ringParamValue = ring.nativeObject.pointer;
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		long returnValue = createRing_CRing_IColor(ringParamValue, colorParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.SimpleRenderableEx __returnValue = new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleRenderableEx");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.SimpleRenderableEx)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSimpleRenderableEx");
		}
		return __returnValue;
	}
	native private static long createVolume_CRevolvingVolume_CDegree_IColor_ev_bool(long volume, long interval, long color, boolean sideClosed);
	/**
	 * 创建可渲染的旋转体面
	 * @param volume 几何旋转体
	 * @param interval 旋转间隔
	 * @param color 颜色
	 * @param sideClosed 是否封闭
	 * @return 可渲染实体
	 */
	public static com.earthview.world.geometry3d.SimpleRenderableEx createVolume(com.earthview.world.spatial.geometry.RevolvingVolume volume, com.earthview.world.spatial.math.Degree interval, com.earthview.world.spatial.display.Icolor color, boolean sideClosed)
	{
		long volumeParamValue = volume.nativeObject.pointer;
		long intervalParamValue = interval.nativeObject.pointer;
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		boolean sideClosedParamValue = sideClosed;
		long returnValue = createVolume_CRevolvingVolume_CDegree_IColor_ev_bool(volumeParamValue, intervalParamValue, colorParamValue, sideClosedParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.SimpleRenderableEx __returnValue = new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleRenderableEx");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.SimpleRenderableEx)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSimpleRenderableEx");
		}
		return __returnValue;
	}
	native private static long createVolumeFrame_CRevolvingVolume_CDegree_IColor_ev_bool(long volume, long interval, long color, boolean sideClosed);
	/**
	 * 创建可渲染的旋转体边框
	 * @param volume 几何旋转体
	 * @param interval 旋转间隔
	 * @param color 颜色
	 * @param sideClosed 是否封闭
	 * @return 可渲染实体
	 */
	public static com.earthview.world.geometry3d.SimpleRenderableEx createVolumeFrame(com.earthview.world.spatial.geometry.RevolvingVolume volume, com.earthview.world.spatial.math.Degree interval, com.earthview.world.spatial.display.Icolor color, boolean sideClosed)
	{
		long volumeParamValue = volume.nativeObject.pointer;
		long intervalParamValue = interval.nativeObject.pointer;
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		boolean sideClosedParamValue = sideClosed;
		long returnValue = createVolumeFrame_CRevolvingVolume_CDegree_IColor_ev_bool(volumeParamValue, intervalParamValue, colorParamValue, sideClosedParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.SimpleRenderableEx __returnValue = new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleRenderableEx");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.SimpleRenderableEx)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSimpleRenderableEx");
		}
		return __returnValue;
	}
	native private static void destroy_CSimpleRenderableEx(long pRenderable);
	/**
	 * 销毁几何实体
	 * @param pRenderable 几何实体
	 */
	public static void destroy(com.earthview.world.geometry3d.SimpleRenderableEx pRenderable)
	{
		long pRenderableParamValue = (pRenderable == null ? 0L : pRenderable.nativeObject.pointer);
		destroy_CSimpleRenderableEx(pRenderableParamValue);
	}
	public Geometry3DFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Geometry3DFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Geometry3DFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Geometry3DFactory obj = null;
 		if(baseObj instanceof Geometry3DFactory)
		{
			obj = (Geometry3DFactory)baseObj;
		} else {
			obj = new Geometry3DFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeometry3DFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
