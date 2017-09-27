package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 要素几何对象类，描述一个要素的几何对象
 */
public class GeoElement extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CGeoElement", new GeoElementClassFactory());
	}

	native private static long fromStream_CDataStream_EVGeoElementType_ev_uint32_ev_uint32_ev_int32(long stream, int type, long width, long height, int byteOrder);
	/**
	 * 从数据流中解析地理元素对象
	 * @param stream 数据流
	 * @param type 地理要素类型
	 * @param width 瓦片宽度，单位：像素
	 * @param height 瓦片高度，单位：像素
	 * @param byteOrder 数据流所对应大小尾：大尾为0，小尾为1
	 * @return 生成地理元素对象的指针
	 */
	public static com.earthview.world.spatial.GeoElement fromStream(com.earthview.world.core.DataStream stream, com.earthview.world.spatial.EVGeoElementType type, long width, long height, int byteOrder)
	{
		long streamParamValue = stream.nativeObject.pointer;
		int typeParamValue = type.getValue();
		long widthParamValue = width;
		long heightParamValue = height;
		int byteOrderParamValue = byteOrder;
		long returnValue = fromStream_CDataStream_EVGeoElementType_ev_uint32_ev_uint32_ev_int32(streamParamValue, typeParamValue, widthParamValue, heightParamValue, byteOrderParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.GeoElement __returnValue = new com.earthview.world.spatial.GeoElement(CreatedWhenConstruct.CWC_NotToCreate, "CGeoElement");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.GeoElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGeoElement");
		}
		return __returnValue;
	}
	native private static long fromTileStreamByID_CDataStream_ev_uint32_ev_uint32_ev_uint32(long stream, long id, long width, long height);
	/**
	 * 从数据流中获取指定ID的地理元素对象
	 * @param stream 数据流
	 * @param id 所要解析要素的ID
	 * @param width 瓦片宽度，单位：像素
	 * @param height 瓦片高度，单位：像素
	 * @return 生成地理元素对象的指针
	 */
	public static com.earthview.world.spatial.GeoElement fromTileStreamByID(com.earthview.world.core.DataStream stream, long id, long width, long height)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long idParamValue = id;
		long widthParamValue = width;
		long heightParamValue = height;
		long returnValue = fromTileStreamByID_CDataStream_ev_uint32_ev_uint32_ev_uint32(streamParamValue, idParamValue, widthParamValue, heightParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.GeoElement __returnValue = new com.earthview.world.spatial.GeoElement(CreatedWhenConstruct.CWC_NotToCreate, "CGeoElement");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.GeoElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGeoElement");
		}
		return __returnValue;
	}
	native private static long fromTileStreamByIndex_CDataStream_ev_uint32_ev_uint32_ev_uint32(long stream, long index, long width, long height);
	/**
	 * 从数据流中获取指定索引的地理元素对象
	 * @param stream 数据流
	 * @param index 所要解析要素的索引
	 * @param width 瓦片宽度，单位：像素
	 * @param height 瓦片高度，单位：像素
	 * @return 生成地理元素对象的指针
	 */
	public static com.earthview.world.spatial.GeoElement fromTileStreamByIndex(com.earthview.world.core.DataStream stream, long index, long width, long height)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long indexParamValue = index;
		long widthParamValue = width;
		long heightParamValue = height;
		long returnValue = fromTileStreamByIndex_CDataStream_ev_uint32_ev_uint32_ev_uint32(streamParamValue, indexParamValue, widthParamValue, heightParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.GeoElement __returnValue = new com.earthview.world.spatial.GeoElement(CreatedWhenConstruct.CWC_NotToCreate, "CGeoElement");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.GeoElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGeoElement");
		}
		return __returnValue;
	}
	native private long getID_void(long pNativeObject);
	/**
	 * 获取要素ID
	 * @return 要素ID
	 */
	public long getID()
	{
		long returnValue = getID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getElementType_void(long pNativeObject);
	/**
	 * 获取要素类型
	 * @return 要素类型
	 */
	public com.earthview.world.spatial.EVGeoElementType getElementType()
	{
		int returnValue = getElementType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVGeoElementType.toEnum(returnValue);
	}
	native private long getPartNum_void(long pNativeObject);
	/**
	 * 获取要素部分数
	 * @return 要素部分数
	 */
	public long getPartNum()
	{
		long returnValue = getPartNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getPointNum_void(long pNativeObject);
	/**
	 * 获取要素总点数
	 * @return 要素总点数
	 */
	public long getPointNum()
	{
		long returnValue = getPointNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getPointNumByPart_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取要素指定部分点数
	 * @param index 部分索引
	 * @return 要素指定部分点数
	 */
	public long getPointNumByPart(long index)
	{
		long indexParamValue = index;
		long returnValue = getPointNumByPart_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private double getMinX_void(long pNativeObject);
	/**
	 * 获取要素包围盒x方向最小值
	 * @return 要素包围盒x方向最小值
	 */
	public double getMinX()
	{
		double returnValue = getMinX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinY_void(long pNativeObject);
	/**
	 * 获取要素包围盒y方向最小值
	 * @return 要素包围盒y方向最小值
	 */
	public double getMinY()
	{
		double returnValue = getMinY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxX_void(long pNativeObject);
	/**
	 * 获取要素包围盒x方向最大值
	 * @return 要素包围盒x方向最大值
	 */
	public double getMaxX()
	{
		double returnValue = getMaxX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxY_void(long pNativeObject);
	/**
	 * 获取要素包围盒y方向最大值
	 * @return 要素包围盒y方向最大值
	 */
	public double getMaxY()
	{
		double returnValue = getMaxY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getPointRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定像素点
	 * @param index 点的索引号
	 * @return 像素点对象指针
	 */
	public com.earthview.world.spatial.PixelPoint getPointRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getPointRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.PixelPoint __returnValue = new com.earthview.world.spatial.PixelPoint(CreatedWhenConstruct.CWC_NotToCreate, "CPixelPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.PixelPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPixelPoint");
		}
		return __returnValue;
	}
	public GeoElement(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GeoElement(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GeoElement fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GeoElement obj = null;
 		if(baseObj instanceof GeoElement)
		{
			obj = (GeoElement)baseObj;
		} else {
			obj = new GeoElement(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeoElement");
			obj.increaseCast();
		}

		return obj;
	}
}
