package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 海图000文件中属性类型
 */
public enum EVChartAttributeType implements INativeEnum<EVChartAttributeType> {
	CAT_UNKNOWN(EVChartAttributeTypeHelper.ENUM_VALUES[0]),
	CAT_E(EVChartAttributeTypeHelper.ENUM_VALUES[1]),
	CAT_L(EVChartAttributeTypeHelper.ENUM_VALUES[2]),
	CAT_F(EVChartAttributeTypeHelper.ENUM_VALUES[3]),
	CAT_I(EVChartAttributeTypeHelper.ENUM_VALUES[4]),
	CAT_A(EVChartAttributeTypeHelper.ENUM_VALUES[5]),
	CAT_S(EVChartAttributeTypeHelper.ENUM_VALUES[6]);
	private int value;
	EVChartAttributeType(int i) {
		this.value = i;
	}
	public EVChartAttributeType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVChartAttributeType toEnum(int retval) {
		if(retval == CAT_UNKNOWN.value){
			return CAT_UNKNOWN;
		}
		else if(retval == CAT_E.value){
			return CAT_E;
		}
		else if(retval == CAT_L.value){
			return CAT_L;
		}
		else if(retval == CAT_F.value){
			return CAT_F;
		}
		else if(retval == CAT_I.value){
			return CAT_I;
		}
		else if(retval == CAT_A.value){
			return CAT_A;
		}
		else if(retval == CAT_S.value){
			return CAT_S;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVChartAttributeTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
