package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的字段类型
 */
public enum EVSSCWebFieldType implements INativeEnum<EVSSCWebFieldType> {
	SSC_WFT_Unknown(EVSSCWebFieldTypeHelper.ENUM_VALUES[0]),
	SSC_WFT_Int32(EVSSCWebFieldTypeHelper.ENUM_VALUES[1]),
	SSC_WFT_Long(EVSSCWebFieldTypeHelper.ENUM_VALUES[2]),
	SSC_WFT_Real64(EVSSCWebFieldTypeHelper.ENUM_VALUES[3]),
	SSC_WFT_String(EVSSCWebFieldTypeHelper.ENUM_VALUES[4]);
	private int value;
	EVSSCWebFieldType(int i) {
		this.value = i;
	}
	public EVSSCWebFieldType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSSCWebFieldType toEnum(int retval) {
		if(retval == SSC_WFT_Unknown.value){
			return SSC_WFT_Unknown;
		}
		else if(retval == SSC_WFT_Int32.value){
			return SSC_WFT_Int32;
		}
		else if(retval == SSC_WFT_Long.value){
			return SSC_WFT_Long;
		}
		else if(retval == SSC_WFT_Real64.value){
			return SSC_WFT_Real64;
		}
		else if(retval == SSC_WFT_String.value){
			return SSC_WFT_String;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSSCWebFieldTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
