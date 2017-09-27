package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 海图查询表类型
 */
public enum EVChartLookUpType implements INativeEnum<EVChartLookUpType> {
	EVChartLookUpTypePaperChart(EVChartLookUpTypeHelper.ENUM_VALUES[0]),
	EVChartLookUpTypeSimplified(EVChartLookUpTypeHelper.ENUM_VALUES[1]),
	EVChartLookUpTypeLine(EVChartLookUpTypeHelper.ENUM_VALUES[2]),
	EVChartLookUpTypePlainBoundary(EVChartLookUpTypeHelper.ENUM_VALUES[3]),
	EVChartLookUpTypeSymbolizedBoundary(EVChartLookUpTypeHelper.ENUM_VALUES[4]);
	private int value;
	EVChartLookUpType(int i) {
		this.value = i;
	}
	public EVChartLookUpType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVChartLookUpType toEnum(int retval) {
		if(retval == EVChartLookUpTypePaperChart.value){
			return EVChartLookUpTypePaperChart;
		}
		else if(retval == EVChartLookUpTypeSimplified.value){
			return EVChartLookUpTypeSimplified;
		}
		else if(retval == EVChartLookUpTypeLine.value){
			return EVChartLookUpTypeLine;
		}
		else if(retval == EVChartLookUpTypePlainBoundary.value){
			return EVChartLookUpTypePlainBoundary;
		}
		else if(retval == EVChartLookUpTypeSymbolizedBoundary.value){
			return EVChartLookUpTypeSymbolizedBoundary;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVChartLookUpTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
