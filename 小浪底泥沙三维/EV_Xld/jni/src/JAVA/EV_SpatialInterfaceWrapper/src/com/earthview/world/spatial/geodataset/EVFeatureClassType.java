package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 要素类类型枚举
 */
public enum EVFeatureClassType implements INativeEnum<EVFeatureClassType> {
	FCT_UNKNOWN(EVFeatureClassTypeHelper.ENUM_VALUES[0]),
	FCT_VECTORFEATURECLASS(EVFeatureClassTypeHelper.ENUM_VALUES[1]),
	FCT_ENTITYDATASET(EVFeatureClassTypeHelper.ENUM_VALUES[2]),
	FCT_MESHDATASET(EVFeatureClassTypeHelper.ENUM_VALUES[3]),
	FCT_EFFECTDATASET(EVFeatureClassTypeHelper.ENUM_VALUES[4]),
	FCT_ANNOTATION(EVFeatureClassTypeHelper.ENUM_VALUES[5]),
	FCT_VECTORFILE_FEATURECLASS(EVFeatureClassTypeHelper.ENUM_VALUES[6]),
	FCT_VECTORFILE_ANNOTATION(EVFeatureClassTypeHelper.ENUM_VALUES[7]),
	FCT_VECTORFILE_CADFEATURECLASS(EVFeatureClassTypeHelper.ENUM_VALUES[8]);
	private int value;
	EVFeatureClassType(int i) {
		this.value = i;
	}
	public EVFeatureClassType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVFeatureClassType toEnum(int retval) {
		if(retval == FCT_UNKNOWN.value){
			return FCT_UNKNOWN;
		}
		else if(retval == FCT_VECTORFEATURECLASS.value){
			return FCT_VECTORFEATURECLASS;
		}
		else if(retval == FCT_ENTITYDATASET.value){
			return FCT_ENTITYDATASET;
		}
		else if(retval == FCT_MESHDATASET.value){
			return FCT_MESHDATASET;
		}
		else if(retval == FCT_EFFECTDATASET.value){
			return FCT_EFFECTDATASET;
		}
		else if(retval == FCT_ANNOTATION.value){
			return FCT_ANNOTATION;
		}
		else if(retval == FCT_VECTORFILE_FEATURECLASS.value){
			return FCT_VECTORFILE_FEATURECLASS;
		}
		else if(retval == FCT_VECTORFILE_ANNOTATION.value){
			return FCT_VECTORFILE_ANNOTATION;
		}
		else if(retval == FCT_VECTORFILE_CADFEATURECLASS.value){
			return FCT_VECTORFILE_CADFEATURECLASS;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVFeatureClassTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
