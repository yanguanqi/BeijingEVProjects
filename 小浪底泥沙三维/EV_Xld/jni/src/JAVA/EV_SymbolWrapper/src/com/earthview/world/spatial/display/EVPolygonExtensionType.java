package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVPolygonExtensionType implements INativeEnum<EVPolygonExtensionType> {
	PET_Upward(EVPolygonExtensionTypeHelper.ENUM_VALUES[0]),
	PET_Downward(EVPolygonExtensionTypeHelper.ENUM_VALUES[1]),
	PET_Both(EVPolygonExtensionTypeHelper.ENUM_VALUES[2]),
	PET_DownToGround(EVPolygonExtensionTypeHelper.ENUM_VALUES[3]),
	PET_NoExtension(EVPolygonExtensionTypeHelper.ENUM_VALUES[4]);
	private int value;
	EVPolygonExtensionType(int i) {
		this.value = i;
	}
	public EVPolygonExtensionType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVPolygonExtensionType toEnum(int retval) {
		if(retval == PET_Upward.value){
			return PET_Upward;
		}
		else if(retval == PET_Downward.value){
			return PET_Downward;
		}
		else if(retval == PET_Both.value){
			return PET_Both;
		}
		else if(retval == PET_DownToGround.value){
			return PET_DownToGround;
		}
		else if(retval == PET_NoExtension.value){
			return PET_NoExtension;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVPolygonExtensionTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
