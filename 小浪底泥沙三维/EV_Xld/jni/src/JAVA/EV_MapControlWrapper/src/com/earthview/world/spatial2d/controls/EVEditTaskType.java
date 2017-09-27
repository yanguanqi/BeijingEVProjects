package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVEditTaskType implements INativeEnum<EVEditTaskType> {
	ETT_Unknown(EVEditTaskTypeHelper.ENUM_VALUES[0]),
	ETT_NewFeature(EVEditTaskTypeHelper.ENUM_VALUES[1]),
	ETT_ModifyFeatures(EVEditTaskTypeHelper.ENUM_VALUES[2]),
	ETT_CopyFeatures(EVEditTaskTypeHelper.ENUM_VALUES[3]),
	ETT_SplitFeatures(EVEditTaskTypeHelper.ENUM_VALUES[4]),
	ETT_MirrorFeatures(EVEditTaskTypeHelper.ENUM_VALUES[5]),
	ETT_ReshapeFeature(EVEditTaskTypeHelper.ENUM_VALUES[6]),
	ETT_FeatureIntersection(EVEditTaskTypeHelper.ENUM_VALUES[7]),
	ETT_ConbinePart(EVEditTaskTypeHelper.ENUM_VALUES[8]),
	ETT_SplitPart(EVEditTaskTypeHelper.ENUM_VALUES[9]),
	ETT_FeatureUnion(EVEditTaskTypeHelper.ENUM_VALUES[10]);
	private int value;
	EVEditTaskType(int i) {
		this.value = i;
	}
	public EVEditTaskType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVEditTaskType toEnum(int retval) {
		if(retval == ETT_Unknown.value){
			return ETT_Unknown;
		}
		else if(retval == ETT_NewFeature.value){
			return ETT_NewFeature;
		}
		else if(retval == ETT_ModifyFeatures.value){
			return ETT_ModifyFeatures;
		}
		else if(retval == ETT_CopyFeatures.value){
			return ETT_CopyFeatures;
		}
		else if(retval == ETT_SplitFeatures.value){
			return ETT_SplitFeatures;
		}
		else if(retval == ETT_MirrorFeatures.value){
			return ETT_MirrorFeatures;
		}
		else if(retval == ETT_ReshapeFeature.value){
			return ETT_ReshapeFeature;
		}
		else if(retval == ETT_FeatureIntersection.value){
			return ETT_FeatureIntersection;
		}
		else if(retval == ETT_ConbinePart.value){
			return ETT_ConbinePart;
		}
		else if(retval == ETT_SplitPart.value){
			return ETT_SplitPart;
		}
		else if(retval == ETT_FeatureUnion.value){
			return ETT_FeatureUnion;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVEditTaskTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
