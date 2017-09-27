package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// <summary>
/// 屏幕矢量坐标类型
/// <summary>
public enum ScreenGeometryCoordinateType implements INativeEnum<ScreenGeometryCoordinateType> {
	SGCT_Pixel(ScreenGeometryCoordinateTypeHelper.ENUM_VALUES[0]),
	SGCT_Identity(ScreenGeometryCoordinateTypeHelper.ENUM_VALUES[1]);
	private int value;
	ScreenGeometryCoordinateType(int i) {
		this.value = i;
	}
	public ScreenGeometryCoordinateType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ScreenGeometryCoordinateType toEnum(int retval) {
		if(retval == SGCT_Pixel.value){
			return SGCT_Pixel;
		}
		else if(retval == SGCT_Identity.value){
			return SGCT_Identity;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ScreenGeometryCoordinateTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
