package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 转换方向标识
 */
public enum EVTrackingItemChange implements INativeEnum<EVTrackingItemChange> {
	TIC_VisibleChange(EVTrackingItemChangeHelper.ENUM_VALUES[0]),
	TIC_SelectedChange(EVTrackingItemChangeHelper.ENUM_VALUES[1]),
	TIC_PositionChange(EVTrackingItemChangeHelper.ENUM_VALUES[2]),
	TIC_TransparentChange(EVTrackingItemChangeHelper.ENUM_VALUES[3]),
	TIC_RotationChange(EVTrackingItemChangeHelper.ENUM_VALUES[4]),
	TIC_ScaleChange(EVTrackingItemChangeHelper.ENUM_VALUES[5]);
	private int value;
	EVTrackingItemChange(int i) {
		this.value = i;
	}
	public EVTrackingItemChange getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTrackingItemChange toEnum(int retval) {
		if(retval == TIC_VisibleChange.value){
			return TIC_VisibleChange;
		}
		else if(retval == TIC_SelectedChange.value){
			return TIC_SelectedChange;
		}
		else if(retval == TIC_PositionChange.value){
			return TIC_PositionChange;
		}
		else if(retval == TIC_TransparentChange.value){
			return TIC_TransparentChange;
		}
		else if(retval == TIC_RotationChange.value){
			return TIC_RotationChange;
		}
		else if(retval == TIC_ScaleChange.value){
			return TIC_ScaleChange;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTrackingItemChangeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
