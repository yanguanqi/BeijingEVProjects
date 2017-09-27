package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///盘旋标识
public enum EVTrackingItemPosition implements INativeEnum<EVTrackingItemPosition> {
	TIP_LeftTop(EVTrackingItemPositionHelper.ENUM_VALUES[0]),
	TIP_RightTop(EVTrackingItemPositionHelper.ENUM_VALUES[1]),
	TIP_RightBottom(EVTrackingItemPositionHelper.ENUM_VALUES[2]),
	TIP_LeftBottom(EVTrackingItemPositionHelper.ENUM_VALUES[3]),
	TIP_Center(EVTrackingItemPositionHelper.ENUM_VALUES[4]);
	private int value;
	EVTrackingItemPosition(int i) {
		this.value = i;
	}
	public EVTrackingItemPosition getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTrackingItemPosition toEnum(int retval) {
		if(retval == TIP_LeftTop.value){
			return TIP_LeftTop;
		}
		else if(retval == TIP_RightTop.value){
			return TIP_RightTop;
		}
		else if(retval == TIP_RightBottom.value){
			return TIP_RightBottom;
		}
		else if(retval == TIP_LeftBottom.value){
			return TIP_LeftBottom;
		}
		else if(retval == TIP_Center.value){
			return TIP_Center;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTrackingItemPositionHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
