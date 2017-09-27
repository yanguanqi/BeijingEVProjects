package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

//// List of parameter types available
public enum ParameterType implements INativeEnum<ParameterType> {
	PT_BOOL(ParameterTypeHelper.ENUM_VALUES[0]),
	PT_REAL(ParameterTypeHelper.ENUM_VALUES[1]),
	PT_INT(ParameterTypeHelper.ENUM_VALUES[2]),
	PT_UNSIGNED_INT(ParameterTypeHelper.ENUM_VALUES[3]),
	PT_SHORT(ParameterTypeHelper.ENUM_VALUES[4]),
	PT_UNSIGNED_SHORT(ParameterTypeHelper.ENUM_VALUES[5]),
	PT_LONG(ParameterTypeHelper.ENUM_VALUES[6]),
	PT_UNSIGNED_LONG(ParameterTypeHelper.ENUM_VALUES[7]),
	PT_STRING(ParameterTypeHelper.ENUM_VALUES[8]),
	PT_VECTOR3(ParameterTypeHelper.ENUM_VALUES[9]),
	PT_MATRIX3(ParameterTypeHelper.ENUM_VALUES[10]),
	PT_MATRIX4(ParameterTypeHelper.ENUM_VALUES[11]),
	PT_QUATERNION(ParameterTypeHelper.ENUM_VALUES[12]),
	PT_COLOURVALUE(ParameterTypeHelper.ENUM_VALUES[13]),
	PT_FONT(ParameterTypeHelper.ENUM_VALUES[14]),
	PT_ENUM(ParameterTypeHelper.ENUM_VALUES[15]),
	PT_DATETIME(ParameterTypeHelper.ENUM_VALUES[16]),
	PT_MATERIAL(ParameterTypeHelper.ENUM_VALUES[17]),
	PT_PICTURE(ParameterTypeHelper.ENUM_VALUES[18]),
	PT_UNKNOW(ParameterTypeHelper.ENUM_VALUES[19]);
	private int value;
	ParameterType(int i) {
		this.value = i;
	}
	public ParameterType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ParameterType toEnum(int retval) {
		if(retval == PT_BOOL.value){
			return PT_BOOL;
		}
		else if(retval == PT_REAL.value){
			return PT_REAL;
		}
		else if(retval == PT_INT.value){
			return PT_INT;
		}
		else if(retval == PT_UNSIGNED_INT.value){
			return PT_UNSIGNED_INT;
		}
		else if(retval == PT_SHORT.value){
			return PT_SHORT;
		}
		else if(retval == PT_UNSIGNED_SHORT.value){
			return PT_UNSIGNED_SHORT;
		}
		else if(retval == PT_LONG.value){
			return PT_LONG;
		}
		else if(retval == PT_UNSIGNED_LONG.value){
			return PT_UNSIGNED_LONG;
		}
		else if(retval == PT_STRING.value){
			return PT_STRING;
		}
		else if(retval == PT_VECTOR3.value){
			return PT_VECTOR3;
		}
		else if(retval == PT_MATRIX3.value){
			return PT_MATRIX3;
		}
		else if(retval == PT_MATRIX4.value){
			return PT_MATRIX4;
		}
		else if(retval == PT_QUATERNION.value){
			return PT_QUATERNION;
		}
		else if(retval == PT_COLOURVALUE.value){
			return PT_COLOURVALUE;
		}
		else if(retval == PT_FONT.value){
			return PT_FONT;
		}
		else if(retval == PT_ENUM.value){
			return PT_ENUM;
		}
		else if(retval == PT_DATETIME.value){
			return PT_DATETIME;
		}
		else if(retval == PT_MATERIAL.value){
			return PT_MATERIAL;
		}
		else if(retval == PT_PICTURE.value){
			return PT_PICTURE;
		}
		else if(retval == PT_UNKNOW.value){
			return PT_UNKNOW;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ParameterTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
