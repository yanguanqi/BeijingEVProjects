package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// <summer>
/// 字段类型枚举
/// </summer>
public enum EVFieldType implements INativeEnum<EVFieldType> {
	FT_UNKNOWN(EVFieldTypeHelper.ENUM_VALUES[0]),
	FT_INTEGER(EVFieldTypeHelper.ENUM_VALUES[1]),
	FT_REAL(EVFieldTypeHelper.ENUM_VALUES[2]),
	FT_STRING(EVFieldTypeHelper.ENUM_VALUES[3]),
	FT_BOOLEAN(EVFieldTypeHelper.ENUM_VALUES[4]),
	FT_BINARY(EVFieldTypeHelper.ENUM_VALUES[5]),
	FT_XML(EVFieldTypeHelper.ENUM_VALUES[6]),
	FT_DATE(EVFieldTypeHelper.ENUM_VALUES[7]),
	FT_EVID(EVFieldTypeHelper.ENUM_VALUES[8]),
	FT_GEOMETRY(EVFieldTypeHelper.ENUM_VALUES[9]),
	FT_LENGTH(EVFieldTypeHelper.ENUM_VALUES[10]),
	FT_AREA(EVFieldTypeHelper.ENUM_VALUES[11]),
	FT_HEIGHT(EVFieldTypeHelper.ENUM_VALUES[12]);
	private int value;
	EVFieldType(int i) {
		this.value = i;
	}
	public EVFieldType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVFieldType toEnum(int retval) {
		if(retval == FT_UNKNOWN.value){
			return FT_UNKNOWN;
		}
		else if(retval == FT_INTEGER.value){
			return FT_INTEGER;
		}
		else if(retval == FT_REAL.value){
			return FT_REAL;
		}
		else if(retval == FT_STRING.value){
			return FT_STRING;
		}
		else if(retval == FT_BOOLEAN.value){
			return FT_BOOLEAN;
		}
		else if(retval == FT_BINARY.value){
			return FT_BINARY;
		}
		else if(retval == FT_XML.value){
			return FT_XML;
		}
		else if(retval == FT_DATE.value){
			return FT_DATE;
		}
		else if(retval == FT_EVID.value){
			return FT_EVID;
		}
		else if(retval == FT_GEOMETRY.value){
			return FT_GEOMETRY;
		}
		else if(retval == FT_LENGTH.value){
			return FT_LENGTH;
		}
		else if(retval == FT_AREA.value){
			return FT_AREA;
		}
		else if(retval == FT_HEIGHT.value){
			return FT_HEIGHT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVFieldTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
