package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 体积量算方式
 */
public enum VolumeCalcuStyle implements INativeEnum<VolumeCalcuStyle> {
	VCS_Excavation(VolumeCalcuStyleHelper.ENUM_VALUES[0]),
	VCS_Fill(VolumeCalcuStyleHelper.ENUM_VALUES[1]),
	VCS_FillExcavation(VolumeCalcuStyleHelper.ENUM_VALUES[2]);
	private int value;
	VolumeCalcuStyle(int i) {
		this.value = i;
	}
	public VolumeCalcuStyle getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final VolumeCalcuStyle toEnum(int retval) {
		if(retval == VCS_Excavation.value){
			return VCS_Excavation;
		}
		else if(retval == VCS_Fill.value){
			return VCS_Fill;
		}
		else if(retval == VCS_FillExcavation.value){
			return VCS_FillExcavation;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class VolumeCalcuStyleHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
