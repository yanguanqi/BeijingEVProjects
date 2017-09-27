package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 瓦片数据类型
 */
public enum EVTileDataType implements INativeEnum<EVTileDataType> {
	TDT_UNKNOWN(EVTileDataTypeHelper.ENUM_VALUES[0]),
	TDT_IMAGE(EVTileDataTypeHelper.ENUM_VALUES[1]),
	TDT_VECTOR(EVTileDataTypeHelper.ENUM_VALUES[2]),
	TDT_DEM(EVTileDataTypeHelper.ENUM_VALUES[3]);
	private int value;
	EVTileDataType(int i) {
		this.value = i;
	}
	public EVTileDataType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTileDataType toEnum(int retval) {
		if(retval == TDT_UNKNOWN.value){
			return TDT_UNKNOWN;
		}
		else if(retval == TDT_IMAGE.value){
			return TDT_IMAGE;
		}
		else if(retval == TDT_VECTOR.value){
			return TDT_VECTOR;
		}
		else if(retval == TDT_DEM.value){
			return TDT_DEM;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTileDataTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
