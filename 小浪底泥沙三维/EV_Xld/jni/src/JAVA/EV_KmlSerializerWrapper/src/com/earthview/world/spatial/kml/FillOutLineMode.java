package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 多边形的填充轮廓模式
 */
public enum FillOutLineMode implements INativeEnum<FillOutLineMode> {
	Fill(FillOutLineModeHelper.ENUM_VALUES[0]),
	OutLine(FillOutLineModeHelper.ENUM_VALUES[1]),
	Fill_OutLine(FillOutLineModeHelper.ENUM_VALUES[2]);
	private int value;
	FillOutLineMode(int i) {
		this.value = i;
	}
	public FillOutLineMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final FillOutLineMode toEnum(int retval) {
		if(retval == Fill.value){
			return Fill;
		}
		else if(retval == OutLine.value){
			return OutLine;
		}
		else if(retval == Fill_OutLine.value){
			return Fill_OutLine;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class FillOutLineModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
