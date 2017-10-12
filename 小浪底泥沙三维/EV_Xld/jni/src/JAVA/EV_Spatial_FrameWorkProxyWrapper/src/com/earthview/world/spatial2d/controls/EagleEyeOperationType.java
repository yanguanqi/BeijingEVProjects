package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EagleEyeOperationType implements INativeEnum<EagleEyeOperationType> {
	EEOT_PointSelect(EagleEyeOperationTypeHelper.ENUM_VALUES[0]),
	EEOT_RectSelect(EagleEyeOperationTypeHelper.ENUM_VALUES[1]),
	EEOT_Pan(EagleEyeOperationTypeHelper.ENUM_VALUES[2]);
	private int value;
	EagleEyeOperationType(int i) {
		this.value = i;
	}
	public EagleEyeOperationType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EagleEyeOperationType toEnum(int retval) {
		if(retval == EEOT_PointSelect.value){
			return EEOT_PointSelect;
		}
		else if(retval == EEOT_RectSelect.value){
			return EEOT_RectSelect;
		}
		else if(retval == EEOT_Pan.value){
			return EEOT_Pan;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EagleEyeOperationTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
