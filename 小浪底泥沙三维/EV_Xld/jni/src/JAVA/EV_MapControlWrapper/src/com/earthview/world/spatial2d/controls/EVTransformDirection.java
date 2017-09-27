package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 转换方向标识
 */
public enum EVTransformDirection implements INativeEnum<EVTransformDirection> {
	TD_ItemToWindow(EVTransformDirectionHelper.ENUM_VALUES[0]),
	TD_ItemToMap(EVTransformDirectionHelper.ENUM_VALUES[1]),
	TD_ItemToItemDevice(EVTransformDirectionHelper.ENUM_VALUES[2]),
	TD_WindowToItem(EVTransformDirectionHelper.ENUM_VALUES[3]),
	TD_WindowToMap(EVTransformDirectionHelper.ENUM_VALUES[4]),
	TD_WindowToItemDevice(EVTransformDirectionHelper.ENUM_VALUES[5]),
	TD_MapToItem(EVTransformDirectionHelper.ENUM_VALUES[6]),
	TD_MapToWindow(EVTransformDirectionHelper.ENUM_VALUES[7]),
	TD_MapToItemDevice(EVTransformDirectionHelper.ENUM_VALUES[8]),
	TD_ItemDeviceToItem(EVTransformDirectionHelper.ENUM_VALUES[9]),
	TD_ItemDeviceToWindow(EVTransformDirectionHelper.ENUM_VALUES[10]),
	TD_ItemDeviceToMap(EVTransformDirectionHelper.ENUM_VALUES[11]);
	private int value;
	EVTransformDirection(int i) {
		this.value = i;
	}
	public EVTransformDirection getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTransformDirection toEnum(int retval) {
		if(retval == TD_ItemToWindow.value){
			return TD_ItemToWindow;
		}
		else if(retval == TD_ItemToMap.value){
			return TD_ItemToMap;
		}
		else if(retval == TD_ItemToItemDevice.value){
			return TD_ItemToItemDevice;
		}
		else if(retval == TD_WindowToItem.value){
			return TD_WindowToItem;
		}
		else if(retval == TD_WindowToMap.value){
			return TD_WindowToMap;
		}
		else if(retval == TD_WindowToItemDevice.value){
			return TD_WindowToItemDevice;
		}
		else if(retval == TD_MapToItem.value){
			return TD_MapToItem;
		}
		else if(retval == TD_MapToWindow.value){
			return TD_MapToWindow;
		}
		else if(retval == TD_MapToItemDevice.value){
			return TD_MapToItemDevice;
		}
		else if(retval == TD_ItemDeviceToItem.value){
			return TD_ItemDeviceToItem;
		}
		else if(retval == TD_ItemDeviceToWindow.value){
			return TD_ItemDeviceToWindow;
		}
		else if(retval == TD_ItemDeviceToMap.value){
			return TD_ItemDeviceToMap;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTransformDirectionHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
