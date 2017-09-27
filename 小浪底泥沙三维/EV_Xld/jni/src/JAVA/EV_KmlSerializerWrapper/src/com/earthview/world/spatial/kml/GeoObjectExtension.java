package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///------------
public class GeoObjectExtension extends com.earthview.world.spatial.GeoObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CGeoObjectExtension", new GeoObjectExtensionClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GeoObjectExtension() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGeoObjectExtension", null);
	}

	/**
	 * 构造函数
	 * @param pGeometry 几何体对象
	 * @param pSymbol 风格符号
	 */
	public GeoObjectExtension(com.earthview.world.spatial.geometry.Igeometry ref_pGeometry, com.earthview.world.spatial.display.Isymbol ref_pSymbol) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pGeometryPtr = new BasePointer(ref_pGeometry);
		list.add("ref_pGeometry", ref_pGeometryPtr.get());
		BasePointer ref_pSymbolPtr = new BasePointer(ref_pSymbol);
		list.add("ref_pSymbol", ref_pSymbolPtr.get());
		Create("CGeoObjectExtension", list);
	}

	/**
	 * 构造函数
	 * @param pGeometry 几何体对象
	 * @param pSymbol 风格符号
	 * @param bCloneGeometry 是否克隆几何体
	 * @param bCloneSymbol 是否克隆风格符号
	 */
	public GeoObjectExtension(com.earthview.world.spatial.geometry.Igeometry ref_pGeometry, com.earthview.world.spatial.display.Isymbol ref_pSymbol, boolean bCloneGeometry, boolean bCloneSymbol) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pGeometryPtr = new BasePointer(ref_pGeometry);
		list.add("ref_pGeometry", ref_pGeometryPtr.get());
		BasePointer ref_pSymbolPtr = new BasePointer(ref_pSymbol);
		list.add("ref_pSymbol", ref_pSymbolPtr.get());
		BasePointer bCloneGeometryPtr = new BasePointer(bCloneGeometry);
		list.add("bCloneGeometry", bCloneGeometryPtr.get());
		BasePointer bCloneSymbolPtr = new BasePointer(bCloneSymbol);
		list.add("bCloneSymbol", bCloneSymbolPtr.get());
		Create("CGeoObjectExtension", list);
	}

	native private long get_GeoObjectExtAttr_void(long pNativeObject);
	public com.earthview.world.spatial.kml.GeoObjectExtensionAttribute get_GeoObjectExtAttr()
	{
		long jniValue = get_GeoObjectExtAttr_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.kml.GeoObjectExtensionAttribute __returnValue = new com.earthview.world.spatial.kml.GeoObjectExtensionAttribute(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CGeoObjectExtensionAttribute");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.GeoObjectExtensionAttribute)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGeoObjectExtensionAttribute");
		}
		return __returnValue;
	}
	
	native private void set_GeoObjectExtAttr_CGeoObjectExtensionAttribute (long pNativeObject, long value);
	public void set_GeoObjectExtAttr(com.earthview.world.spatial.kml.GeoObjectExtensionAttribute GeoObjectExtAttr)
	{
		long GeoObjectExtAttrParamValue = GeoObjectExtAttr.nativeObject.pointer;
		
		set_GeoObjectExtAttr_CGeoObjectExtensionAttribute(this.nativeObject.pointer, GeoObjectExtAttrParamValue);
	}
	
	native private long get_WorkState_void(long pNativeObject);
	public com.earthview.world.spatial.kml.KmlWorkQueueState get_WorkState()
	{
		long jniValue = get_WorkState_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.KmlWorkQueueState __returnValue = new com.earthview.world.spatial.kml.KmlWorkQueueState(CreatedWhenConstruct.CWC_NotToCreate, "CKmlWorkQueueState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.KmlWorkQueueState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlWorkQueueState");
		}
		return __returnValue;
	}
	
	native private void set_WorkState_CKmlWorkQueueState (long pNativeObject, long value);
	public void set_WorkState(com.earthview.world.spatial.kml.KmlWorkQueueState WorkState)
	{
		long WorkStateParamValue = (WorkState == null ? 0L : WorkState.nativeObject.pointer);
		
		set_WorkState_CKmlWorkQueueState(this.nativeObject.pointer, WorkStateParamValue);
	}
	
	native private static long getWGS84SpatialReference_void();
	/**
	 * 获取WGS84空间参考
	 */
	public static com.earthview.world.spatial.utility.SpatialReference getWGS84SpatialReference()
	{
		long returnValue = getWGS84SpatialReference_void();
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
	native private void cloneProperty_CGeoObjectExtension(long pNativeObject, long ref_geoObject);
	/**
	 * 克隆追加CGeoObjectExtensionProperty到目标CGeoObjectExtension
	 * @param  目标CGeoObjectExtension
	 */
	public void cloneProperty(com.earthview.world.spatial.kml.GeoObjectExtension ref_geoObject)
	{
		long ref_geoObjectParamValue = (ref_geoObject == null ? 0L : ref_geoObject.nativeObject.pointer);
		cloneProperty_CGeoObjectExtension(this.nativeObject.pointer, ref_geoObjectParamValue);
	}
	native private long ev_clone_void(long pNativeObject);
	public com.earthview.world.spatial.kml.GeoObjectExtension ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.GeoObjectExtension __returnValue = new com.earthview.world.spatial.kml.GeoObjectExtension(CreatedWhenConstruct.CWC_NotToCreate, "CGeoObjectExtension");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.GeoObjectExtension)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGeoObjectExtension");
		}
		return __returnValue;
	}
	public GeoObjectExtension(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GeoObjectExtension(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GeoObjectExtension fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GeoObjectExtension obj = null;
 		if(baseObj instanceof GeoObjectExtension)
		{
			obj = (GeoObjectExtension)baseObj;
		} else {
			obj = new GeoObjectExtension(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeoObjectExtension");
			obj.increaseCast();
		}

		return obj;
	}
}
