package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 瓦片参数类工厂
 */
public class TileReferenceFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileReferenceFactory", new TileReferenceFactoryClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public TileReferenceFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTileReferenceFactory", null);
	}

	native private static long createImageTileReferenceForWGS84_void();
	/**
	 * 创建WGS84格式影像的TileReference对象
	 * @return WGS84格式影像的TileReference对象指针
	 */
	public static com.earthview.world.spatial.TileReference createImageTileReferenceForWGS84()
	{
		long returnValue = createImageTileReferenceForWGS84_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TileReference __returnValue = new com.earthview.world.spatial.TileReference(CreatedWhenConstruct.CWC_NotToCreate, "CTileReference");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TileReference)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTileReference");
		}
		return __returnValue;
	}
	native private static long createVectorTileReferenceForWGS84_void();
	/**
	 * 创建WGS84格式矢量的TileReference对象
	 * @return WGS84格式矢量的TileReference对象指针
	 */
	public static com.earthview.world.spatial.TileReference createVectorTileReferenceForWGS84()
	{
		long returnValue = createVectorTileReferenceForWGS84_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TileReference __returnValue = new com.earthview.world.spatial.TileReference(CreatedWhenConstruct.CWC_NotToCreate, "CTileReference");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TileReference)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTileReference");
		}
		return __returnValue;
	}
	native private static long createDEMTileReferenceForWGS84_void();
	/**
	 * 创建WGS84格式DEM的TileReference对象
	 * @return WGS84格式DEM的TileReference对象指针
	 */
	public static com.earthview.world.spatial.TileReference createDEMTileReferenceForWGS84()
	{
		long returnValue = createDEMTileReferenceForWGS84_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TileReference __returnValue = new com.earthview.world.spatial.TileReference(CreatedWhenConstruct.CWC_NotToCreate, "CTileReference");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TileReference)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTileReference");
		}
		return __returnValue;
	}
	native private static long createDEMTileReferenceForWGS84_ev_real64(double spanofzero);
	public static com.earthview.world.spatial.TileReference createDEMTileReferenceForWGS84(double spanofzero)
	{
		double spanofzeroParamValue = spanofzero;
		long returnValue = createDEMTileReferenceForWGS84_ev_real64(spanofzeroParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TileReference __returnValue = new com.earthview.world.spatial.TileReference(CreatedWhenConstruct.CWC_NotToCreate, "CTileReference");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TileReference)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTileReference");
		}
		return __returnValue;
	}
	native private static long createForWebMercator_void();
	/**
	 * 创建Mercator格式TileReference对象
	 * @return Merctor格式TileReference对象指针
	 */
	public static com.earthview.world.spatial.TileReference createForWebMercator()
	{
		long returnValue = createForWebMercator_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TileReference __returnValue = new com.earthview.world.spatial.TileReference(CreatedWhenConstruct.CWC_NotToCreate, "CTileReference");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TileReference)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTileReference");
		}
		return __returnValue;
	}
	native private static void destroyTileReference_CTileReference(long tileReference);
	/**
	 * 销毁动态生成的TileReference对象
	 * @param tileReference TileReference对象指针
	 */
	public static void destroyTileReference(com.earthview.world.spatial.TileReference tileReference)
	{
		long tileReferenceParamValue = (tileReference == null ? 0L : tileReference.nativeObject.pointer);
		destroyTileReference_CTileReference(tileReferenceParamValue);
	}
	public TileReferenceFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TileReferenceFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TileReferenceFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TileReferenceFactory obj = null;
 		if(baseObj instanceof TileReferenceFactory)
		{
			obj = (TileReferenceFactory)baseObj;
		} else {
			obj = new TileReferenceFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTileReferenceFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
