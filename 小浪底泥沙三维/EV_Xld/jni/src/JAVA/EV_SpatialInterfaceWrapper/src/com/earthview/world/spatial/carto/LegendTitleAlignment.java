package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 图例标题对齐
 */
public enum LegendTitleAlignment implements INativeEnum<LegendTitleAlignment> {
	LTA_LeftToward(LegendTitleAlignmentHelper.ENUM_VALUES[0]),
	LTA_Center(LegendTitleAlignmentHelper.ENUM_VALUES[1]),
	LTA_RightToward(LegendTitleAlignmentHelper.ENUM_VALUES[2]);
	private int value;
	LegendTitleAlignment(int i) {
		this.value = i;
	}
	public LegendTitleAlignment getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final LegendTitleAlignment toEnum(int retval) {
		if(retval == LTA_LeftToward.value){
			return LTA_LeftToward;
		}
		else if(retval == LTA_Center.value){
			return LTA_Center;
		}
		else if(retval == LTA_RightToward.value){
			return LTA_RightToward;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class LegendTitleAlignmentHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
