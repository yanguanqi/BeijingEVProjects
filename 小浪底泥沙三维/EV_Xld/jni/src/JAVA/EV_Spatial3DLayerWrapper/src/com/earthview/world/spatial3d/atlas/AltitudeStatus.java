package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum AltitudeStatus implements INativeEnum<AltitudeStatus> {
	FAILED(AltitudeStatusHelper.ENUM_VALUES[0]),
	INFERIOR(AltitudeStatusHelper.ENUM_VALUES[1]),
	DESIRABLE(AltitudeStatusHelper.ENUM_VALUES[2]);
	private int value;
	AltitudeStatus(int i) {
		this.value = i;
	}
	public AltitudeStatus getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final AltitudeStatus toEnum(int retval) {
		if(retval == FAILED.value){
			return FAILED;
		}
		else if(retval == INFERIOR.value){
			return INFERIOR;
		}
		else if(retval == DESIRABLE.value){
			return DESIRABLE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class AltitudeStatusHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
