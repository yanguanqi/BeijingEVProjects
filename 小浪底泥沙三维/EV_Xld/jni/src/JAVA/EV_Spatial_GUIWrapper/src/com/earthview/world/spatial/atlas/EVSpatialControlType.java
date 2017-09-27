package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVSpatialControlType implements INativeEnum<EVSpatialControlType> {
	SCT_MapControl(EVSpatialControlTypeHelper.ENUM_VALUES[0]),
	SCT_GlobeControl(EVSpatialControlTypeHelper.ENUM_VALUES[1]),
	SCT_LayoutControl(EVSpatialControlTypeHelper.ENUM_VALUES[2]),
	SCT_Custom(EVSpatialControlTypeHelper.ENUM_VALUES[3]);
	private int value;
	EVSpatialControlType(int i) {
		this.value = i;
	}
	public EVSpatialControlType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSpatialControlType toEnum(int retval) {
		if(retval == SCT_MapControl.value){
			return SCT_MapControl;
		}
		else if(retval == SCT_GlobeControl.value){
			return SCT_GlobeControl;
		}
		else if(retval == SCT_LayoutControl.value){
			return SCT_LayoutControl;
		}
		else if(retval == SCT_Custom.value){
			return SCT_Custom;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSpatialControlTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
