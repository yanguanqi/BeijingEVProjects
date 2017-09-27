package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum ClampMode implements INativeEnum<ClampMode> {
	CLM_DEM(ClampModeHelper.ENUM_VALUES[0]),
	CLM_DSM(ClampModeHelper.ENUM_VALUES[1]),
	CLM_ALL(ClampModeHelper.ENUM_VALUES[2]);
	private int value;
	ClampMode(int i) {
		this.value = i;
	}
	public ClampMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ClampMode toEnum(int retval) {
		if(retval == CLM_DEM.value){
			return CLM_DEM;
		}
		else if(retval == CLM_DSM.value){
			return CLM_DSM;
		}
		else if(retval == CLM_ALL.value){
			return CLM_ALL;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ClampModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
