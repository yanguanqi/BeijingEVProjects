package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// The default blend mode where source replaces destination
public enum SceneBlendFactor implements INativeEnum<SceneBlendFactor> {
	SBF_ONE(SceneBlendFactorHelper.ENUM_VALUES[0]),
	SBF_ZERO(SceneBlendFactorHelper.ENUM_VALUES[1]),
	SBF_DEST_COLOUR(SceneBlendFactorHelper.ENUM_VALUES[2]),
	SBF_SOURCE_COLOUR(SceneBlendFactorHelper.ENUM_VALUES[3]),
	SBF_ONE_MINUS_DEST_COLOUR(SceneBlendFactorHelper.ENUM_VALUES[4]),
	SBF_ONE_MINUS_SOURCE_COLOUR(SceneBlendFactorHelper.ENUM_VALUES[5]),
	SBF_DEST_ALPHA(SceneBlendFactorHelper.ENUM_VALUES[6]),
	SBF_SOURCE_ALPHA(SceneBlendFactorHelper.ENUM_VALUES[7]),
	SBF_ONE_MINUS_DEST_ALPHA(SceneBlendFactorHelper.ENUM_VALUES[8]),
	SBF_ONE_MINUS_SOURCE_ALPHA(SceneBlendFactorHelper.ENUM_VALUES[9]);
	private int value;
	SceneBlendFactor(int i) {
		this.value = i;
	}
	public SceneBlendFactor getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final SceneBlendFactor toEnum(int retval) {
		if(retval == SBF_ONE.value){
			return SBF_ONE;
		}
		else if(retval == SBF_ZERO.value){
			return SBF_ZERO;
		}
		else if(retval == SBF_DEST_COLOUR.value){
			return SBF_DEST_COLOUR;
		}
		else if(retval == SBF_SOURCE_COLOUR.value){
			return SBF_SOURCE_COLOUR;
		}
		else if(retval == SBF_ONE_MINUS_DEST_COLOUR.value){
			return SBF_ONE_MINUS_DEST_COLOUR;
		}
		else if(retval == SBF_ONE_MINUS_SOURCE_COLOUR.value){
			return SBF_ONE_MINUS_SOURCE_COLOUR;
		}
		else if(retval == SBF_DEST_ALPHA.value){
			return SBF_DEST_ALPHA;
		}
		else if(retval == SBF_SOURCE_ALPHA.value){
			return SBF_SOURCE_ALPHA;
		}
		else if(retval == SBF_ONE_MINUS_DEST_ALPHA.value){
			return SBF_ONE_MINUS_DEST_ALPHA;
		}
		else if(retval == SBF_ONE_MINUS_SOURCE_ALPHA.value){
			return SBF_ONE_MINUS_SOURCE_ALPHA;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class SceneBlendFactorHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
