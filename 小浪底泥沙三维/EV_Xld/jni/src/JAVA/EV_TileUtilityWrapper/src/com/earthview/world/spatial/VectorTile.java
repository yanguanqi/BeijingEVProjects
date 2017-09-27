package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 瓦片几何要素类，描述一个瓦片所有要素的几何信息
 */
public class VectorTile extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CVectorTile", new VectorTileClassFactory());
	}

	native private static long fromStream_CDataStream_ev_uint32_ev_uint32(long stream, long width, long height);
	/**
	 * 生成VectorTile对象
	 * @param stream 数据流
	 * @param width 瓦片宽度
	 * @param height 瓦片高度
	 * @return VectorTile对象
	 */
	public static com.earthview.world.spatial.VectorTile fromStream(com.earthview.world.core.DataStream stream, long width, long height)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long widthParamValue = width;
		long heightParamValue = height;
		long returnValue = fromStream_CDataStream_ev_uint32_ev_uint32(streamParamValue, widthParamValue, heightParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.VectorTile __returnValue = new com.earthview.world.spatial.VectorTile(CreatedWhenConstruct.CWC_NotToCreate, "CVectorTile");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.VectorTile)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVectorTile");
		}
		return __returnValue;
	}
	native private long getElementCount_void(long pNativeObject);
	/**
	 * 获取要素个数
	 * @return 要素个数
	 */
	public long getElementCount()
	{
		long returnValue = getElementCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getGeoElement_ev_uint32(long pNativeObject, long index);
	/**
	 * 按索引获取要素
	 * @param index 要素的索引号
	 * @return 指定要素对象的指针
	 */
	public com.earthview.world.spatial.GeoElement getGeoElement(long index)
	{
		long indexParamValue = index;
		long returnValue = getGeoElement_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.GeoElement __returnValue = new com.earthview.world.spatial.GeoElement(CreatedWhenConstruct.CWC_NotToCreate, "CGeoElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.GeoElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGeoElement");
		}
		return __returnValue;
	}
	native private long getID_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引号对应要素的ID
	 * @param index 索引
	 * @return 相应ID
	 */
	public long getID(long index)
	{
		long indexParamValue = index;
		long returnValue = getID_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getGeoElementByID_ev_uint32(long pNativeObject, long id);
	/**
	 * 按ID获取要素
	 * @param index 要素的ID
	 * @return 指定要素对象的指针
	 */
	public com.earthview.world.spatial.GeoElement getGeoElementByID(long id)
	{
		long idParamValue = id;
		long returnValue = getGeoElementByID_ev_uint32(this.nativeObject.pointer, idParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.GeoElement __returnValue = new com.earthview.world.spatial.GeoElement(CreatedWhenConstruct.CWC_NotToCreate, "CGeoElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.GeoElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGeoElement");
		}
		return __returnValue;
	}
	native private int getElementType_void(long pNativeObject);
	/**
	 * 要素类型
	 * @return 要素类型
	 */
	public com.earthview.world.spatial.EVGeoElementType getElementType()
	{
		int returnValue = getElementType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVGeoElementType.toEnum(returnValue);
	}
	public VectorTile(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VectorTile(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static VectorTile fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VectorTile obj = null;
 		if(baseObj instanceof VectorTile)
		{
			obj = (VectorTile)baseObj;
		} else {
			obj = new VectorTile(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVectorTile");
			obj.increaseCast();
		}

		return obj;
	}
}
