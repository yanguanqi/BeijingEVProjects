package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 海图几何对象类型
 */
public enum EVChartGeomType implements INativeEnum<EVChartGeomType> {
	CGT_Chart_Unknown(EVChartGeomTypeHelper.ENUM_VALUES[0]),
	CGT_Chart_Point(EVChartGeomTypeHelper.ENUM_VALUES[1]),
	CGT_Chart_Line(EVChartGeomTypeHelper.ENUM_VALUES[2]),
	CGT_Chart_Area(EVChartGeomTypeHelper.ENUM_VALUES[3]),
	CGT_Chart_Collection(EVChartGeomTypeHelper.ENUM_VALUES[4]);
	private int value;
	EVChartGeomType(int i) {
		this.value = i;
	}
	public EVChartGeomType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVChartGeomType toEnum(int retval) {
		if(retval == CGT_Chart_Unknown.value){
			return CGT_Chart_Unknown;
		}
		else if(retval == CGT_Chart_Point.value){
			return CGT_Chart_Point;
		}
		else if(retval == CGT_Chart_Line.value){
			return CGT_Chart_Line;
		}
		else if(retval == CGT_Chart_Area.value){
			return CGT_Chart_Area;
		}
		else if(retval == CGT_Chart_Collection.value){
			return CGT_Chart_Collection;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVChartGeomTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
