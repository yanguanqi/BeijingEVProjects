package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class DeviceUtility extends BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CDeviceUtility", new DeviceUtilityClassFactory());
	}

	public DeviceUtility() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDeviceUtility", null);
	}

	native private static boolean getDiskFreeSpace_EVString_ev_uint64_ev_uint64(String disk, long totalSpace, long freeSpace);
	/**
	 * 获取磁盘空间信息
	 * @param disk 磁盘
	 * @param totalSpace 磁盘总空间（MB）
	 * @param freeSpace 磁盘剩余空间（MB）
	 * @return 获取信息成功返回true，失败返回false
	 */
	public static boolean getDiskFreeSpace(String disk, ULongPointer totalSpace, ULongPointer freeSpace)
	{
		String diskParamValue = disk;
		long totalSpaceParamValue = totalSpace.nativeObject.pointer;
		long freeSpaceParamValue = freeSpace.nativeObject.pointer;
		boolean returnValue = getDiskFreeSpace_EVString_ev_uint64_ev_uint64(diskParamValue, totalSpaceParamValue, freeSpaceParamValue);
		return returnValue;
	}
	native private static int get_mScreenWidth_void();
	public static int get_mScreenWidth()
	{
		int jniValue = get_mScreenWidth_void();
		
		return jniValue;
	}
	
	native private static void set_mScreenWidth_ev_uint16 (int value);
	public static void set_mScreenWidth(int mScreenWidth)
	{
		int mScreenWidthParamValue = mScreenWidth;
		
		set_mScreenWidth_ev_uint16(mScreenWidthParamValue);
	}
	
	native private static int get_mScreenHeight_void();
	public static int get_mScreenHeight()
	{
		int jniValue = get_mScreenHeight_void();
		
		return jniValue;
	}
	
	native private static void set_mScreenHeight_ev_uint16 (int value);
	public static void set_mScreenHeight(int mScreenHeight)
	{
		int mScreenHeightParamValue = mScreenHeight;
		
		set_mScreenHeight_ev_uint16(mScreenHeightParamValue);
	}
	
	native private static int get_mScreenDpi_void();
	public static int get_mScreenDpi()
	{
		int jniValue = get_mScreenDpi_void();
		
		return jniValue;
	}
	
	native private static void set_mScreenDpi_ev_uint16 (int value);
	public static void set_mScreenDpi(int mScreenDpi)
	{
		int mScreenDpiParamValue = mScreenDpi;
		
		set_mScreenDpi_ev_uint16(mScreenDpiParamValue);
	}
	
	native private static int get_mDesktopDefaultDpi_void();
	public static int get_mDesktopDefaultDpi()
	{
		int jniValue = get_mDesktopDefaultDpi_void();
		
		return jniValue;
	}
	
	public DeviceUtility(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DeviceUtility(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DeviceUtility fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DeviceUtility obj = null;
 		if(baseObj instanceof DeviceUtility)
		{
			obj = (DeviceUtility)baseObj;
		} else {
			obj = new DeviceUtility(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDeviceUtility");
			obj.increaseCast();
		}

		return obj;
	}
}
