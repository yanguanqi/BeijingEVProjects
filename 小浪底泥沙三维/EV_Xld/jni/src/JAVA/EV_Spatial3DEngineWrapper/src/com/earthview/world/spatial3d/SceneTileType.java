package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum SceneTileType implements INativeEnum<SceneTileType> {
	STT_DEFAULT(SceneTileTypeHelper.ENUM_VALUES[0]),
	STT_WEBMERCATOR(SceneTileTypeHelper.ENUM_VALUES[1]),
	STT_WGS84(SceneTileTypeHelper.ENUM_VALUES[2]);
	private int value;
	SceneTileType(int i) {
		this.value = i;
	}
	public SceneTileType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final SceneTileType toEnum(int retval) {
		if(retval == STT_DEFAULT.value){
			return STT_DEFAULT;
		}
		else if(retval == STT_WEBMERCATOR.value){
			return STT_WEBMERCATOR;
		}
		else if(retval == STT_WGS84.value){
			return STT_WGS84;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class SceneTileTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
