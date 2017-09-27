package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum TerrainReviseMode implements INativeEnum<TerrainReviseMode> {
	TRM_Exaggerate(TerrainReviseModeHelper.ENUM_VALUES[0]),
	TRM_Increase(TerrainReviseModeHelper.ENUM_VALUES[1]),
	TRM_Unify(TerrainReviseModeHelper.ENUM_VALUES[2]);
	private int value;
	TerrainReviseMode(int i) {
		this.value = i;
	}
	public TerrainReviseMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final TerrainReviseMode toEnum(int retval) {
		if(retval == TRM_Exaggerate.value){
			return TRM_Exaggerate;
		}
		else if(retval == TRM_Increase.value){
			return TRM_Increase;
		}
		else if(retval == TRM_Unify.value){
			return TRM_Unify;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class TerrainReviseModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
