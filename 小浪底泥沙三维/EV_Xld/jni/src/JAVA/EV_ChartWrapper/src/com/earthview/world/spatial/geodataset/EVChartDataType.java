package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 海图000文件中数据类型
 */
public enum EVChartDataType implements INativeEnum<EVChartDataType> {
	CFT_UNKNOWN(EVChartDataTypeHelper.ENUM_VALUES[0]),
	CFT_M(EVChartDataTypeHelper.ENUM_VALUES[1]),
	CFT_CA(EVChartDataTypeHelper.ENUM_VALUES[2]),
	CFT_G(EVChartDataTypeHelper.ENUM_VALUES[3]),
	CFT_C(EVChartDataTypeHelper.ENUM_VALUES[4]),
	CFT_F(EVChartDataTypeHelper.ENUM_VALUES[5]),
	CFT_N(EVChartDataTypeHelper.ENUM_VALUES[6]),
	CFT_S(EVChartDataTypeHelper.ENUM_VALUES[7]);
	private int value;
	EVChartDataType(int i) {
		this.value = i;
	}
	public EVChartDataType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVChartDataType toEnum(int retval) {
		if(retval == CFT_UNKNOWN.value){
			return CFT_UNKNOWN;
		}
		else if(retval == CFT_M.value){
			return CFT_M;
		}
		else if(retval == CFT_CA.value){
			return CFT_CA;
		}
		else if(retval == CFT_G.value){
			return CFT_G;
		}
		else if(retval == CFT_C.value){
			return CFT_C;
		}
		else if(retval == CFT_F.value){
			return CFT_F;
		}
		else if(retval == CFT_N.value){
			return CFT_N;
		}
		else if(retval == CFT_S.value){
			return CFT_S;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVChartDataTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
