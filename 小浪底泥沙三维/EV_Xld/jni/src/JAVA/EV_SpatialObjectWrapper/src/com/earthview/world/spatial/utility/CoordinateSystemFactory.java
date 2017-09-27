package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * CCoordinateSystemFactory根据给定的参数或枚举值创建相应的坐标系统
 */
public class CoordinateSystemFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Utility::CCoordinateSystemFactory", new CoordinateSystemFactoryClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public CoordinateSystemFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CCoordinateSystemFactory", null);
	}

	native private static long createCoordSys_EVWellKnownGeoCSType(int eWellKnownCS);
	/**
	 * 根据常见的坐标系统枚举创建常见地理坐标系统
	 * @param eWellKnownCS EarthView::World::Spatial::Utility::EVWellKnownGeoCSType常见地理坐标系统枚举
	 * @return EarthView::World::Spatial::Utility::CSpatialReference*空间参考指针
	 */
	public static com.earthview.world.spatial.utility.SpatialReference createCoordSys(com.earthview.world.spatial.utility.EVWellKnownGeoCSType eWellKnownCS)
	{
		int eWellKnownCSParamValue = eWellKnownCS.getValue();
		long returnValue = createCoordSys_EVWellKnownGeoCSType(eWellKnownCSParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.utility.SpatialReference __returnValue = new com.earthview.world.spatial.utility.SpatialReference(CreatedWhenConstruct.CWC_NotToCreate, "CSpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.utility.SpatialReference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSpatialReference");
		}
		return __returnValue;
	}
	native private static long createCoordSys_EVWellKnownProjCSType(int eWelKnProjCS);
	/**
	 * 根据常见的坐标系统枚举创建常见投影坐标系统
	 * @param eWelKnProjCS EarthView::World::Spatial::Utility::EVWellKnownProjCSType常见投影坐标系统枚举
	 * @return EarthView::World::Spatial::Utility::CSpatialReference*空间参考指针
	 */
	public static com.earthview.world.spatial.utility.SpatialReference createCoordSys(com.earthview.world.spatial.utility.EVWellKnownProjCSType eWelKnProjCS)
	{
		int eWelKnProjCSParamValue = eWelKnProjCS.getValue();
		long returnValue = createCoordSys_EVWellKnownProjCSType(eWelKnProjCSParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.utility.SpatialReference __returnValue = new com.earthview.world.spatial.utility.SpatialReference(CreatedWhenConstruct.CWC_NotToCreate, "CSpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.utility.SpatialReference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSpatialReference");
		}
		return __returnValue;
	}
	native private static long createCoordSys_IEllipseSpheriod_CProjParameter(long pobjEllipseSphere, long pObjProjParameter);
	/**
	 * 根据给定椭球体和投影参数创建坐标系统如果pObjProjParameter=NULL则创建地理坐标系统否则创建投影坐标系统
	 * @param pobjEllipseSphere CEllipseShpere指针
	 * @param pObjProjParameter EarthView::World::Spatial::Utility::CProjParameter指针,为NULL时表示创建地理坐标系统
	 * @return EarthView::World::Spatial::Utility::CSpatialReference*空间参考指针
	 */
	public static com.earthview.world.spatial.utility.SpatialReference createCoordSys(com.earthview.world.spatial.geometry.Iellipsespheriod pobjEllipseSphere, com.earthview.world.spatial.utility.ProjParameter pObjProjParameter)
	{
		long pobjEllipseSphereParamValue = (pobjEllipseSphere == null ? 0L : pobjEllipseSphere.nativeObject.pointer);
		long pObjProjParameterParamValue = (pObjProjParameter == null ? 0L : pObjProjParameter.nativeObject.pointer);
		long returnValue = createCoordSys_IEllipseSpheriod_CProjParameter(pobjEllipseSphereParamValue, pObjProjParameterParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.utility.SpatialReference __returnValue = new com.earthview.world.spatial.utility.SpatialReference(CreatedWhenConstruct.CWC_NotToCreate, "CSpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.utility.SpatialReference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSpatialReference");
		}
		return __returnValue;
	}
	native private static long createCoordSys_EVSpatialReferenceStringType_EVString(int eStrType, String pszReference);
	/**
	 * 根据给定格式的投影参考文本创建相应的坐标系统
	 * @param eStrType EVSpatialReferenceStrTypes文本格式
	 * @param strReference 空间参考的字符串描述
	 * @return EarthView::World::Spatial::Utility::CSpatialReference*空间参考指针
	 */
	public static com.earthview.world.spatial.utility.SpatialReference createCoordSys(com.earthview.world.spatial.utility.EVSpatialReferenceStringType eStrType, String pszReference)
	{
		int eStrTypeParamValue = eStrType.getValue();
		String pszReferenceParamValue = pszReference;
		long returnValue = createCoordSys_EVSpatialReferenceStringType_EVString(eStrTypeParamValue, pszReferenceParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.utility.SpatialReference __returnValue = new com.earthview.world.spatial.utility.SpatialReference(CreatedWhenConstruct.CWC_NotToCreate, "CSpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.utility.SpatialReference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSpatialReference");
		}
		return __returnValue;
	}
	native private static long createCoordSys_ev_int32(int ESPG);
	/**
	 * 根据给ESPG代号创建相应的坐标系统
	 * @param ESPG intESPG带号
	 * @return EarthView::World::Spatial::Utility::CSpatialReference*空间参考指针
	 */
	public static com.earthview.world.spatial.utility.SpatialReference createCoordSys(int ESPG)
	{
		int ESPGParamValue = ESPG;
		long returnValue = createCoordSys_ev_int32(ESPGParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.utility.SpatialReference __returnValue = new com.earthview.world.spatial.utility.SpatialReference(CreatedWhenConstruct.CWC_NotToCreate, "CSpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.utility.SpatialReference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSpatialReference");
		}
		return __returnValue;
	}
	native private static long createCoordSys_CDataStream(long objStream);
	/**
	 * 从流创建一个坐标参考系统
	 * @param objStream 流
	 * @return EarthView::World::Spatial::Utility::CSpatialReference*从流创建指针
	 */
	public static com.earthview.world.spatial.utility.SpatialReference createCoordSys(com.earthview.world.core.DataStream objStream)
	{
		long objStreamParamValue = objStream.nativeObject.pointer;
		long returnValue = createCoordSys_CDataStream(objStreamParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.utility.SpatialReference __returnValue = new com.earthview.world.spatial.utility.SpatialReference(CreatedWhenConstruct.CWC_NotToCreate, "CSpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.utility.SpatialReference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSpatialReference");
		}
		return __returnValue;
	}
	native private static void releaseCoordSys_CSpatialReference(long pCorSys);
	/**
	 * 释放坐标系统
	 * @param pCorSys 坐标系统指针
	 */
	public static void releaseCoordSys(com.earthview.world.spatial.utility.SpatialReference pCorSys)
	{
		long pCorSysParamValue = (pCorSys == null ? 0L : pCorSys.nativeObject.pointer);
		releaseCoordSys_CSpatialReference(pCorSysParamValue);
	}
	public CoordinateSystemFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CoordinateSystemFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CoordinateSystemFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CoordinateSystemFactory obj = null;
 		if(baseObj instanceof CoordinateSystemFactory)
		{
			obj = (CoordinateSystemFactory)baseObj;
		} else {
			obj = new CoordinateSystemFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCoordinateSystemFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
