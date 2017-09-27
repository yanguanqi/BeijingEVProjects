package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.display.*;
import com.earthview.world.spatial.geometry.*;
import com.earthview.world.core.*;

public enum ModifyMode implements INativeEnum<ModifyMode> {
	MM_Unknown(ModifyModeHelper.ENUM_VALUES[0]),
	MM_MoveVertex(ModifyModeHelper.ENUM_VALUES[1]),
	MM_MoveEditingGeometry(ModifyModeHelper.ENUM_VALUES[2]),
	MM_MoveSelectedFeatures(ModifyModeHelper.ENUM_VALUES[3]),
	MM_SelectFeature(ModifyModeHelper.ENUM_VALUES[4]);
	private int value;
	ModifyMode(int i) {
		this.value = i;
	}
	public ModifyMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ModifyMode toEnum(int retval) {
		if(retval == MM_Unknown.value){
			return MM_Unknown;
		}
		else if(retval == MM_MoveVertex.value){
			return MM_MoveVertex;
		}
		else if(retval == MM_MoveEditingGeometry.value){
			return MM_MoveEditingGeometry;
		}
		else if(retval == MM_MoveSelectedFeatures.value){
			return MM_MoveSelectedFeatures;
		}
		else if(retval == MM_SelectFeature.value){
			return MM_SelectFeature;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ModifyModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
