package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 雷达压盖标识
 */
public enum EVChartRadarFlag implements INativeEnum<EVChartRadarFlag> {
	EVChartRadarFlagUnknown(EVChartRadarFlagHelper.ENUM_VALUES[0]),
	EVChartRadarFlagOver(EVChartRadarFlagHelper.ENUM_VALUES[1]),
	EVChartRadarFlagUnder(EVChartRadarFlagHelper.ENUM_VALUES[2]);
	private int value;
	EVChartRadarFlag(int i) {
		this.value = i;
	}
	public EVChartRadarFlag getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVChartRadarFlag toEnum(int retval) {
		if(retval == EVChartRadarFlagUnknown.value){
			return EVChartRadarFlagUnknown;
		}
		else if(retval == EVChartRadarFlagOver.value){
			return EVChartRadarFlagOver;
		}
		else if(retval == EVChartRadarFlagUnder.value){
			return EVChartRadarFlagUnder;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVChartRadarFlagHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
