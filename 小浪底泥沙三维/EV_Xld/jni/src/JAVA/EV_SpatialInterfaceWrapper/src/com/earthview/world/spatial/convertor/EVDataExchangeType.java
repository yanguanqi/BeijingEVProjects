package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据交换类型
 */
public enum EVDataExchangeType implements INativeEnum<EVDataExchangeType> {
	DataExchangeType_Unknown(EVDataExchangeTypeHelper.ENUM_VALUES[0]),
	DataExchangeType_Spatial2D(EVDataExchangeTypeHelper.ENUM_VALUES[1]),
	DataExchangeType_Spatial3D(EVDataExchangeTypeHelper.ENUM_VALUES[2]);
	private int value;
	EVDataExchangeType(int i) {
		this.value = i;
	}
	public EVDataExchangeType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVDataExchangeType toEnum(int retval) {
		if(retval == DataExchangeType_Unknown.value){
			return DataExchangeType_Unknown;
		}
		else if(retval == DataExchangeType_Spatial2D.value){
			return DataExchangeType_Spatial2D;
		}
		else if(retval == DataExchangeType_Spatial3D.value){
			return DataExchangeType_Spatial3D;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVDataExchangeTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
