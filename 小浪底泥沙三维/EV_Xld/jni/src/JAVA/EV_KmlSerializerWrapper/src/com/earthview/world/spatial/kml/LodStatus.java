package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum LodStatus implements INativeEnum<LodStatus> {
	LODPASS(LodStatusHelper.ENUM_VALUES[0]),
	MINERROR(LodStatusHelper.ENUM_VALUES[1]),
	MAXERROR(LodStatusHelper.ENUM_VALUES[2]),
	HIDDEN(LodStatusHelper.ENUM_VALUES[3]);
	private int value;
	LodStatus(int i) {
		this.value = i;
	}
	public LodStatus getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final LodStatus toEnum(int retval) {
		if(retval == LODPASS.value){
			return LODPASS;
		}
		else if(retval == MINERROR.value){
			return MINERROR;
		}
		else if(retval == MAXERROR.value){
			return MAXERROR;
		}
		else if(retval == HIDDEN.value){
			return HIDDEN;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class LodStatusHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
