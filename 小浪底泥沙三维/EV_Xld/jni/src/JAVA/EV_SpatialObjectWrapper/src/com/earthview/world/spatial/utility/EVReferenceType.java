package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///参考类型
public enum EVReferenceType implements INativeEnum<EVReferenceType> {
	RF_GAUSS(EVReferenceTypeHelper.ENUM_VALUES[0]),
	RF_UTM(EVReferenceTypeHelper.ENUM_VALUES[1]),
	RF_MERCATOR(EVReferenceTypeHelper.ENUM_VALUES[2]),
	RF_LATLONG(EVReferenceTypeHelper.ENUM_VALUES[3]),
	RF_LAMBERTCC(EVReferenceTypeHelper.ENUM_VALUES[4]),
	RF_UNKNOWN(EVReferenceTypeHelper.ENUM_VALUES[5]);
	private int value;
	EVReferenceType(int i) {
		this.value = i;
	}
	public EVReferenceType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVReferenceType toEnum(int retval) {
		if(retval == RF_GAUSS.value){
			return RF_GAUSS;
		}
		else if(retval == RF_UTM.value){
			return RF_UTM;
		}
		else if(retval == RF_MERCATOR.value){
			return RF_MERCATOR;
		}
		else if(retval == RF_LATLONG.value){
			return RF_LATLONG;
		}
		else if(retval == RF_LAMBERTCC.value){
			return RF_LAMBERTCC;
		}
		else if(retval == RF_UNKNOWN.value){
			return RF_UNKNOWN;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVReferenceTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
