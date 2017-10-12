package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 天际线质量分类
 */
public enum Analysis3DLineQuality implements INativeEnum<Analysis3DLineQuality> {
	A3DLQ_High(Analysis3DLineQualityHelper.ENUM_VALUES[0]),
	A3DLQ_Medium(Analysis3DLineQualityHelper.ENUM_VALUES[1]),
	A3DLQ_Common(Analysis3DLineQualityHelper.ENUM_VALUES[2]);
	private int value;
	Analysis3DLineQuality(int i) {
		this.value = i;
	}
	public Analysis3DLineQuality getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final Analysis3DLineQuality toEnum(int retval) {
		if(retval == A3DLQ_High.value){
			return A3DLQ_High;
		}
		else if(retval == A3DLQ_Medium.value){
			return A3DLQ_Medium;
		}
		else if(retval == A3DLQ_Common.value){
			return A3DLQ_Common;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class Analysis3DLineQualityHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
