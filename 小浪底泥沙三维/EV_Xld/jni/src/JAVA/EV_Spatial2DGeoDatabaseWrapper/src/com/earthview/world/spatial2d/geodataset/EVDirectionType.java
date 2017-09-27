package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 网络方向
 */
public enum EVDirectionType implements INativeEnum<EVDirectionType> {
	DT_FT(EVDirectionTypeHelper.ENUM_VALUES[0]),
	DT_TF(EVDirectionTypeHelper.ENUM_VALUES[1]);
	private int value;
	EVDirectionType(int i) {
		this.value = i;
	}
	public EVDirectionType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVDirectionType toEnum(int retval) {
		if(retval == DT_FT.value){
			return DT_FT;
		}
		else if(retval == DT_TF.value){
			return DT_TF;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVDirectionTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
