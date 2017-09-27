package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVPixelOffsetMode implements INativeEnum<EVPixelOffsetMode> {
	POM_nvalid(EVPixelOffsetModeHelper.ENUM_VALUES[0]),
	POM_Default(EVPixelOffsetModeHelper.ENUM_VALUES[1]),
	POM_HighSpeed(EVPixelOffsetModeHelper.ENUM_VALUES[2]),
	POM_HighQuality(EVPixelOffsetModeHelper.ENUM_VALUES[3]),
	POM_None(EVPixelOffsetModeHelper.ENUM_VALUES[4]),
	POM_Half(EVPixelOffsetModeHelper.ENUM_VALUES[5]);
	private int value;
	EVPixelOffsetMode(int i) {
		this.value = i;
	}
	public EVPixelOffsetMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVPixelOffsetMode toEnum(int retval) {
		if(retval == POM_nvalid.value){
			return POM_nvalid;
		}
		else if(retval == POM_Default.value){
			return POM_Default;
		}
		else if(retval == POM_HighSpeed.value){
			return POM_HighSpeed;
		}
		else if(retval == POM_HighQuality.value){
			return POM_HighQuality;
		}
		else if(retval == POM_None.value){
			return POM_None;
		}
		else if(retval == POM_Half.value){
			return POM_Half;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVPixelOffsetModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
