package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EVSpatialReferenceStrTypes标识空间参考的文本描述的文本格式导入导出空间参考的文本描述的依据
 */
public enum EVSpatialReferenceStringType implements INativeEnum<EVSpatialReferenceStringType> {
	EV_WKT(EVSpatialReferenceStringTypeHelper.ENUM_VALUES[0]),
	EV_ESRI(EVSpatialReferenceStringTypeHelper.ENUM_VALUES[1]),
	EV_PROJ4(EVSpatialReferenceStringTypeHelper.ENUM_VALUES[2]),
	EV_ESPG(EVSpatialReferenceStringTypeHelper.ENUM_VALUES[3]),
	EV_UNKNOWNSTR(EVSpatialReferenceStringTypeHelper.ENUM_VALUES[4]);
	private int value;
	EVSpatialReferenceStringType(int i) {
		this.value = i;
	}
	public EVSpatialReferenceStringType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSpatialReferenceStringType toEnum(int retval) {
		if(retval == EV_WKT.value){
			return EV_WKT;
		}
		else if(retval == EV_ESRI.value){
			return EV_ESRI;
		}
		else if(retval == EV_PROJ4.value){
			return EV_PROJ4;
		}
		else if(retval == EV_ESPG.value){
			return EV_ESPG;
		}
		else if(retval == EV_UNKNOWNSTR.value){
			return EV_UNKNOWNSTR;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSpatialReferenceStringTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
