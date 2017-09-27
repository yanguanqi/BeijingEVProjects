package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum LAYERSRS implements INativeEnum<LAYERSRS> {
	LAYERSRS_Unknown(LAYERSRSHelper.ENUM_VALUES[0]),
	LAYERSRS_WGS_1984(LAYERSRSHelper.ENUM_VALUES[1]),
	LAYERSRS_Mercator(LAYERSRSHelper.ENUM_VALUES[2]);
	private int value;
	LAYERSRS(int i) {
		this.value = i;
	}
	public LAYERSRS getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final LAYERSRS toEnum(int retval) {
		if(retval == LAYERSRS_Unknown.value){
			return LAYERSRS_Unknown;
		}
		else if(retval == LAYERSRS_WGS_1984.value){
			return LAYERSRS_WGS_1984;
		}
		else if(retval == LAYERSRS_Mercator.value){
			return LAYERSRS_Mercator;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class LAYERSRSHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
