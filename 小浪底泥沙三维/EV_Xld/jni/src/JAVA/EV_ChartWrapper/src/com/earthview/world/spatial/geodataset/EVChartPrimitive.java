package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 海图000文件中几何对象类型
 */
public enum EVChartPrimitive implements INativeEnum<EVChartPrimitive> {
	CP_UNKNOWN(EVChartPrimitiveHelper.ENUM_VALUES[0]),
	CP_Point(EVChartPrimitiveHelper.ENUM_VALUES[1]),
	CP_Line(EVChartPrimitiveHelper.ENUM_VALUES[2]),
	CP_Area(EVChartPrimitiveHelper.ENUM_VALUES[3]),
	CP_Collection(EVChartPrimitiveHelper.ENUM_VALUES[4]);
	private int value;
	EVChartPrimitive(int i) {
		this.value = i;
	}
	public EVChartPrimitive getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVChartPrimitive toEnum(int retval) {
		if(retval == CP_UNKNOWN.value){
			return CP_UNKNOWN;
		}
		else if(retval == CP_Point.value){
			return CP_Point;
		}
		else if(retval == CP_Line.value){
			return CP_Line;
		}
		else if(retval == CP_Area.value){
			return CP_Area;
		}
		else if(retval == CP_Collection.value){
			return CP_Collection;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVChartPrimitiveHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
