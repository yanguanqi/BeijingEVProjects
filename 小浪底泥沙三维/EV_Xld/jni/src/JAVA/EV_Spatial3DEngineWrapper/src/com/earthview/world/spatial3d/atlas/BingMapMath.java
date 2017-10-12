package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BingMapMath extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CBingMapMath", new BingMapMathClassFactory());
	}

	native private static double Clip_Real_Real_Real(double n, double minValue, double maxValue);
	public static double Clip(double n, double minValue, double maxValue)
	{
		double nParamValue = n;
		double minValueParamValue = minValue;
		double maxValueParamValue = maxValue;
		double returnValue = Clip_Real_Real_Real(nParamValue, minValueParamValue, maxValueParamValue);
		return returnValue;
	}
	native private static long MapSize_ev_uint32(long level);
	public static long MapSize(long level)
	{
		long levelParamValue = level;
		long returnValue = MapSize_ev_uint32(levelParamValue);
		return returnValue;
	}
	native private static void LatLongToPixelXY_Real_Real_ev_uint32_ev_uint32_ev_uint32(double latitude, double longitude, long levelOfDetail, long pixelX, long pixelY);
	public static void LatLongToPixelXY(double latitude, double longitude, long levelOfDetail, UIntegerPointer pixelX, UIntegerPointer pixelY)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		long levelOfDetailParamValue = levelOfDetail;
		long pixelXParamValue = pixelX.nativeObject.pointer;
		long pixelYParamValue = pixelY.nativeObject.pointer;
		LatLongToPixelXY_Real_Real_ev_uint32_ev_uint32_ev_uint32(latitudeParamValue, longitudeParamValue, levelOfDetailParamValue, pixelXParamValue, pixelYParamValue);
	}
	native private static void PixelXYToLatLong_ev_uint32_ev_uint32_ev_uint32_Real_Real(long pixelX, long pixelY, long levelOfDetail, long latitude, long longitude);
	public static void PixelXYToLatLong(long pixelX, long pixelY, long levelOfDetail, DoublePointer latitude, DoublePointer longitude)
	{
		long pixelXParamValue = pixelX;
		long pixelYParamValue = pixelY;
		long levelOfDetailParamValue = levelOfDetail;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		PixelXYToLatLong_ev_uint32_ev_uint32_ev_uint32_Real_Real(pixelXParamValue, pixelYParamValue, levelOfDetailParamValue, latitudeParamValue, longitudeParamValue);
	}
	native private static void PixelXYToTileXY_ev_uint32_ev_uint32_ev_uint32_ev_uint32(long pixelX, long pixelY, long tileX, long tileY);
	public static void PixelXYToTileXY(long pixelX, long pixelY, UIntegerPointer tileX, UIntegerPointer tileY)
	{
		long pixelXParamValue = pixelX;
		long pixelYParamValue = pixelY;
		long tileXParamValue = tileX.nativeObject.pointer;
		long tileYParamValue = tileY.nativeObject.pointer;
		PixelXYToTileXY_ev_uint32_ev_uint32_ev_uint32_ev_uint32(pixelXParamValue, pixelYParamValue, tileXParamValue, tileYParamValue);
	}
	native private static void TileXYToPixelXY_ev_uint32_ev_uint32_ev_uint32_ev_uint32(long tileX, long tileY, long pixelX, long pixelY);
	public static void TileXYToPixelXY(long tileX, long tileY, UIntegerPointer pixelX, UIntegerPointer pixelY)
	{
		long tileXParamValue = tileX;
		long tileYParamValue = tileY;
		long pixelXParamValue = pixelX.nativeObject.pointer;
		long pixelYParamValue = pixelY.nativeObject.pointer;
		TileXYToPixelXY_ev_uint32_ev_uint32_ev_uint32_ev_uint32(tileXParamValue, tileYParamValue, pixelXParamValue, pixelYParamValue);
	}
	native private static String TileXYToQuadKey_ev_uint32_ev_uint32_ev_uint32(long tileX, long tileY, long levelOfDetail);
	public static String TileXYToQuadKey(long tileX, long tileY, long levelOfDetail)
	{
		long tileXParamValue = tileX;
		long tileYParamValue = tileY;
		long levelOfDetailParamValue = levelOfDetail;
		String returnValue = TileXYToQuadKey_ev_uint32_ev_uint32_ev_uint32(tileXParamValue, tileYParamValue, levelOfDetailParamValue);
		return returnValue;
	}
	native private static void QuadKeyToTileXY_EVString_ev_uint32_ev_uint32_ev_uint32(long quadKey, long tileX, long tileY, long levelOfDetail);
	public static void QuadKeyToTileXY(StringPointer quadKey, UIntegerPointer tileX, UIntegerPointer tileY, UIntegerPointer levelOfDetail)
	{
		long quadKeyParamValue = quadKey.nativeObject.pointer;
		long tileXParamValue = tileX.nativeObject.pointer;
		long tileYParamValue = tileY.nativeObject.pointer;
		long levelOfDetailParamValue = levelOfDetail.nativeObject.pointer;
		QuadKeyToTileXY_EVString_ev_uint32_ev_uint32_ev_uint32(quadKeyParamValue, tileXParamValue, tileYParamValue, levelOfDetailParamValue);
	}
	native private static double get_MinLatitude_void();
	public static double get_MinLatitude()
	{
		double jniValue = get_MinLatitude_void();
		
		return jniValue;
	}
	
	native private static double get_MaxLatitude_void();
	public static double get_MaxLatitude()
	{
		double jniValue = get_MaxLatitude_void();
		
		return jniValue;
	}
	
	native private static double get_MinLongitude_void();
	public static double get_MinLongitude()
	{
		double jniValue = get_MinLongitude_void();
		
		return jniValue;
	}
	
	native private static double get_MaxLongitude_void();
	public static double get_MaxLongitude()
	{
		double jniValue = get_MaxLongitude_void();
		
		return jniValue;
	}
	
	public BingMapMath(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BingMapMath(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static BingMapMath fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BingMapMath obj = null;
 		if(baseObj instanceof BingMapMath)
		{
			obj = (BingMapMath)baseObj;
		} else {
			obj = new BingMapMath(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBingMapMath");
			obj.increaseCast();
		}

		return obj;
	}
}
