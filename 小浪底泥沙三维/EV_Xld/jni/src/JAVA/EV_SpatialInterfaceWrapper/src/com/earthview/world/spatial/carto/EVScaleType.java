package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 比例尺类型
 */
public enum EVScaleType implements INativeEnum<EVScaleType> {
	ST_Line_MarkUp(EVScaleTypeHelper.ENUM_VALUES[0]),
	ST_Line_Crossing(EVScaleTypeHelper.ENUM_VALUES[1]),
	ST_Line_MarkDown(EVScaleTypeHelper.ENUM_VALUES[2]),
	ST_Line_Step(EVScaleTypeHelper.ENUM_VALUES[3]),
	ST_Bar_Altemating(EVScaleTypeHelper.ENUM_VALUES[4]),
	ST_Bar_DoubleAltemating(EVScaleTypeHelper.ENUM_VALUES[5]),
	ST_Bar_Hollow(EVScaleTypeHelper.ENUM_VALUES[6]),
	ST_Bar_SingleDivision(EVScaleTypeHelper.ENUM_VALUES[7]),
	ST_Bar_SawTooth(EVScaleTypeHelper.ENUM_VALUES[8]);
	private int value;
	EVScaleType(int i) {
		this.value = i;
	}
	public EVScaleType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVScaleType toEnum(int retval) {
		if(retval == ST_Line_MarkUp.value){
			return ST_Line_MarkUp;
		}
		else if(retval == ST_Line_Crossing.value){
			return ST_Line_Crossing;
		}
		else if(retval == ST_Line_MarkDown.value){
			return ST_Line_MarkDown;
		}
		else if(retval == ST_Line_Step.value){
			return ST_Line_Step;
		}
		else if(retval == ST_Bar_Altemating.value){
			return ST_Bar_Altemating;
		}
		else if(retval == ST_Bar_DoubleAltemating.value){
			return ST_Bar_DoubleAltemating;
		}
		else if(retval == ST_Bar_Hollow.value){
			return ST_Bar_Hollow;
		}
		else if(retval == ST_Bar_SingleDivision.value){
			return ST_Bar_SingleDivision;
		}
		else if(retval == ST_Bar_SawTooth.value){
			return ST_Bar_SawTooth;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVScaleTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
