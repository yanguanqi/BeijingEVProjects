package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 天气类型
 */
public enum EVWeatherType implements INativeEnum<EVWeatherType> {
	WT_CUSTOM(EVWeatherTypeHelper.ENUM_VALUES[0]),
	WT_CLEARNESS(EVWeatherTypeHelper.ENUM_VALUES[1]),
	WT_CLOUDY(EVWeatherTypeHelper.ENUM_VALUES[2]),
	WT_LOWERY(EVWeatherTypeHelper.ENUM_VALUES[3]),
	WT_DRIZZLE(EVWeatherTypeHelper.ENUM_VALUES[4]),
	WT_RAIN(EVWeatherTypeHelper.ENUM_VALUES[5]),
	WT_DRENCHER(EVWeatherTypeHelper.ENUM_VALUES[6]),
	WT_RAINSTORM(EVWeatherTypeHelper.ENUM_VALUES[7]),
	WT_SLEET(EVWeatherTypeHelper.ENUM_VALUES[8]),
	WT_FLURRY(EVWeatherTypeHelper.ENUM_VALUES[9]),
	WT_SNOW(EVWeatherTypeHelper.ENUM_VALUES[10]),
	WT_HEAVYSNOW(EVWeatherTypeHelper.ENUM_VALUES[11]),
	WT_SNOWSTORM(EVWeatherTypeHelper.ENUM_VALUES[12]),
	WT_ICECRYSTALS(EVWeatherTypeHelper.ENUM_VALUES[13]),
	WT_ICEPELLETS(EVWeatherTypeHelper.ENUM_VALUES[14]),
	WT_SMALLHAIL(EVWeatherTypeHelper.ENUM_VALUES[15]),
	WT_HAIL(EVWeatherTypeHelper.ENUM_VALUES[16]);
	private int value;
	EVWeatherType(int i) {
		this.value = i;
	}
	public EVWeatherType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVWeatherType toEnum(int retval) {
		if(retval == WT_CUSTOM.value){
			return WT_CUSTOM;
		}
		else if(retval == WT_CLEARNESS.value){
			return WT_CLEARNESS;
		}
		else if(retval == WT_CLOUDY.value){
			return WT_CLOUDY;
		}
		else if(retval == WT_LOWERY.value){
			return WT_LOWERY;
		}
		else if(retval == WT_DRIZZLE.value){
			return WT_DRIZZLE;
		}
		else if(retval == WT_RAIN.value){
			return WT_RAIN;
		}
		else if(retval == WT_DRENCHER.value){
			return WT_DRENCHER;
		}
		else if(retval == WT_RAINSTORM.value){
			return WT_RAINSTORM;
		}
		else if(retval == WT_SLEET.value){
			return WT_SLEET;
		}
		else if(retval == WT_FLURRY.value){
			return WT_FLURRY;
		}
		else if(retval == WT_SNOW.value){
			return WT_SNOW;
		}
		else if(retval == WT_HEAVYSNOW.value){
			return WT_HEAVYSNOW;
		}
		else if(retval == WT_SNOWSTORM.value){
			return WT_SNOWSTORM;
		}
		else if(retval == WT_ICECRYSTALS.value){
			return WT_ICECRYSTALS;
		}
		else if(retval == WT_ICEPELLETS.value){
			return WT_ICEPELLETS;
		}
		else if(retval == WT_SMALLHAIL.value){
			return WT_SMALLHAIL;
		}
		else if(retval == WT_HAIL.value){
			return WT_HAIL;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVWeatherTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
