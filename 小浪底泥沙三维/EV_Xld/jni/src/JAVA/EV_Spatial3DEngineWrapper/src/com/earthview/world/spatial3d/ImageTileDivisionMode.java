package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum ImageTileDivisionMode implements INativeEnum<ImageTileDivisionMode> {
	TDM_LevelByLevel(ImageTileDivisionModeHelper.ENUM_VALUES[0]),
	TDM_BypassLevel(ImageTileDivisionModeHelper.ENUM_VALUES[1]);
	private int value;
	ImageTileDivisionMode(int i) {
		this.value = i;
	}
	public ImageTileDivisionMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ImageTileDivisionMode toEnum(int retval) {
		if(retval == TDM_LevelByLevel.value){
			return TDM_LevelByLevel;
		}
		else if(retval == TDM_BypassLevel.value){
			return TDM_BypassLevel;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ImageTileDivisionModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
