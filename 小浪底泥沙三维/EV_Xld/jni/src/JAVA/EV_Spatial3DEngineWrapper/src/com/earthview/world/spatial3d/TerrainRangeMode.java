package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum TerrainRangeMode implements INativeEnum<TerrainRangeMode> {
	TRM_Globe(TerrainRangeModeHelper.ENUM_VALUES[0]),
	TRM_PartialGlobe(TerrainRangeModeHelper.ENUM_VALUES[1]);
	private int value;
	TerrainRangeMode(int i) {
		this.value = i;
	}
	public TerrainRangeMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final TerrainRangeMode toEnum(int retval) {
		if(retval == TRM_Globe.value){
			return TRM_Globe;
		}
		else if(retval == TRM_PartialGlobe.value){
			return TRM_PartialGlobe;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class TerrainRangeModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
