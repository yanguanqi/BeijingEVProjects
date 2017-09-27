package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// <summary>
/// 长方体点位置的枚举
/// <summary>
public enum CubeCornerEnum implements INativeEnum<CubeCornerEnum> {
	CUBE_FAR_LEFT_BOTTOM(CubeCornerEnumHelper.ENUM_VALUES[0]),
	CUBE_FAR_LEFT_TOP(CubeCornerEnumHelper.ENUM_VALUES[1]),
	CUBE_FAR_RIGHT_TOP(CubeCornerEnumHelper.ENUM_VALUES[2]),
	CUBE_FAR_RIGHT_BOTTOM(CubeCornerEnumHelper.ENUM_VALUES[3]),
	CUBE_NEAR_RIGHT_BOTTOM(CubeCornerEnumHelper.ENUM_VALUES[4]),
	CUBE_NEAR_LEFT_BOTTOM(CubeCornerEnumHelper.ENUM_VALUES[5]),
	CUBE_NEAR_LEFT_TOP(CubeCornerEnumHelper.ENUM_VALUES[6]),
	CUBE_NEAR_RIGHT_TOP(CubeCornerEnumHelper.ENUM_VALUES[7]);
	private int value;
	CubeCornerEnum(int i) {
		this.value = i;
	}
	public CubeCornerEnum getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final CubeCornerEnum toEnum(int retval) {
		if(retval == CUBE_FAR_LEFT_BOTTOM.value){
			return CUBE_FAR_LEFT_BOTTOM;
		}
		else if(retval == CUBE_FAR_LEFT_TOP.value){
			return CUBE_FAR_LEFT_TOP;
		}
		else if(retval == CUBE_FAR_RIGHT_TOP.value){
			return CUBE_FAR_RIGHT_TOP;
		}
		else if(retval == CUBE_FAR_RIGHT_BOTTOM.value){
			return CUBE_FAR_RIGHT_BOTTOM;
		}
		else if(retval == CUBE_NEAR_RIGHT_BOTTOM.value){
			return CUBE_NEAR_RIGHT_BOTTOM;
		}
		else if(retval == CUBE_NEAR_LEFT_BOTTOM.value){
			return CUBE_NEAR_LEFT_BOTTOM;
		}
		else if(retval == CUBE_NEAR_LEFT_TOP.value){
			return CUBE_NEAR_LEFT_TOP;
		}
		else if(retval == CUBE_NEAR_RIGHT_TOP.value){
			return CUBE_NEAR_RIGHT_TOP;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class CubeCornerEnumHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
