package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVStatisticsThemeType implements INativeEnum<EVStatisticsThemeType> {
	STT_Unkown(EVStatisticsThemeTypeHelper.ENUM_VALUES[0]),
	STT_Pie(EVStatisticsThemeTypeHelper.ENUM_VALUES[1]),
	STT_Bar(EVStatisticsThemeTypeHelper.ENUM_VALUES[2]),
	STT_Stacked(EVStatisticsThemeTypeHelper.ENUM_VALUES[3]),
	STT_3DPie(EVStatisticsThemeTypeHelper.ENUM_VALUES[4]),
	STT_3DBar(EVStatisticsThemeTypeHelper.ENUM_VALUES[5]),
	STT_3DStacked(EVStatisticsThemeTypeHelper.ENUM_VALUES[6]);
	private int value;
	EVStatisticsThemeType(int i) {
		this.value = i;
	}
	public EVStatisticsThemeType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVStatisticsThemeType toEnum(int retval) {
		if(retval == STT_Unkown.value){
			return STT_Unkown;
		}
		else if(retval == STT_Pie.value){
			return STT_Pie;
		}
		else if(retval == STT_Bar.value){
			return STT_Bar;
		}
		else if(retval == STT_Stacked.value){
			return STT_Stacked;
		}
		else if(retval == STT_3DPie.value){
			return STT_3DPie;
		}
		else if(retval == STT_3DBar.value){
			return STT_3DBar;
		}
		else if(retval == STT_3DStacked.value){
			return STT_3DStacked;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVStatisticsThemeTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
