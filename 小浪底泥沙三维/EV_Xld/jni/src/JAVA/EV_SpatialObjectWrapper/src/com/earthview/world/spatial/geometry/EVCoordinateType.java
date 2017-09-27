package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 
 */
public enum EVCoordinateType implements INativeEnum<EVCoordinateType> {
	CT_UNKNOWN(EVCoordinateTypeHelper.ENUM_VALUES[0]),
	CT_XY(EVCoordinateTypeHelper.ENUM_VALUES[1]),
	CT_XYZ(EVCoordinateTypeHelper.ENUM_VALUES[2]),
	CT_XYM(EVCoordinateTypeHelper.ENUM_VALUES[3]),
	CT_XYZM(EVCoordinateTypeHelper.ENUM_VALUES[4]);
	private int value;
	EVCoordinateType(int i) {
		this.value = i;
	}
	public EVCoordinateType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVCoordinateType toEnum(int retval) {
		if(retval == CT_UNKNOWN.value){
			return CT_UNKNOWN;
		}
		else if(retval == CT_XY.value){
			return CT_XY;
		}
		else if(retval == CT_XYZ.value){
			return CT_XYZ;
		}
		else if(retval == CT_XYM.value){
			return CT_XYM;
		}
		else if(retval == CT_XYZM.value){
			return CT_XYZM;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVCoordinateTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
