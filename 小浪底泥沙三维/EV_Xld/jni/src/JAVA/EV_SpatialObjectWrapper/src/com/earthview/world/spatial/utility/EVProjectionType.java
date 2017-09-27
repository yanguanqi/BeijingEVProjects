package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EVProjectionType目前该系统支持的投影类型导出空间参考的字符串格式目前只支持的类型
 */
public enum EVProjectionType implements INativeEnum<EVProjectionType> {
	EV_PROJ_UNKNOWN(EVProjectionTypeHelper.ENUM_VALUES[0]),
	EV_PROJ_LATLONG(EVProjectionTypeHelper.ENUM_VALUES[1]),
	EV_PROJ_GUSSKRVGER(EVProjectionTypeHelper.ENUM_VALUES[2]),
	EV_PROJ_UTM(EVProjectionTypeHelper.ENUM_VALUES[3]),
	EV_PROJ_MERCATOR(EVProjectionTypeHelper.ENUM_VALUES[4]),
	EV_PROJ_MERCATOR_2SP(EVProjectionTypeHelper.ENUM_VALUES[5]),
	EV_PROJ_LARMBERT_COMFORMAL(EVProjectionTypeHelper.ENUM_VALUES[6]),
	EV_PROJ_LARMBERT_COMFORMAL_2SP(EVProjectionTypeHelper.ENUM_VALUES[7]);
	private int value;
	EVProjectionType(int i) {
		this.value = i;
	}
	public EVProjectionType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVProjectionType toEnum(int retval) {
		if(retval == EV_PROJ_UNKNOWN.value){
			return EV_PROJ_UNKNOWN;
		}
		else if(retval == EV_PROJ_LATLONG.value){
			return EV_PROJ_LATLONG;
		}
		else if(retval == EV_PROJ_GUSSKRVGER.value){
			return EV_PROJ_GUSSKRVGER;
		}
		else if(retval == EV_PROJ_UTM.value){
			return EV_PROJ_UTM;
		}
		else if(retval == EV_PROJ_MERCATOR.value){
			return EV_PROJ_MERCATOR;
		}
		else if(retval == EV_PROJ_MERCATOR_2SP.value){
			return EV_PROJ_MERCATOR_2SP;
		}
		else if(retval == EV_PROJ_LARMBERT_COMFORMAL.value){
			return EV_PROJ_LARMBERT_COMFORMAL;
		}
		else if(retval == EV_PROJ_LARMBERT_COMFORMAL_2SP.value){
			return EV_PROJ_LARMBERT_COMFORMAL_2SP;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVProjectionTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
