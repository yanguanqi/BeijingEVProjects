package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 空间关系类型
 */
public enum EVSpatialQueryRelationType implements INativeEnum<EVSpatialQueryRelationType> {
	EVSQRelTypeUnknown(EVSpatialQueryRelationTypeHelper.ENUM_VALUES[0]),
	EVSQRelTypeIntersects(EVSpatialQueryRelationTypeHelper.ENUM_VALUES[1]),
	EVSQRelTypeTouches(EVSpatialQueryRelationTypeHelper.ENUM_VALUES[2]),
	EVSQRelTypeOverlaps(EVSpatialQueryRelationTypeHelper.ENUM_VALUES[3]),
	EVSQRelTypeCrosses(EVSpatialQueryRelationTypeHelper.ENUM_VALUES[4]),
	EVSQRelTypeWithin(EVSpatialQueryRelationTypeHelper.ENUM_VALUES[5]),
	EVSQRelTypeContains(EVSpatialQueryRelationTypeHelper.ENUM_VALUES[6]),
	EVSQRelTypeEnvelopeIntersects(EVSpatialQueryRelationTypeHelper.ENUM_VALUES[7]),
	EVSQRelTypeCustom(EVSpatialQueryRelationTypeHelper.ENUM_VALUES[8]);
	private int value;
	EVSpatialQueryRelationType(int i) {
		this.value = i;
	}
	public EVSpatialQueryRelationType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSpatialQueryRelationType toEnum(int retval) {
		if(retval == EVSQRelTypeUnknown.value){
			return EVSQRelTypeUnknown;
		}
		else if(retval == EVSQRelTypeIntersects.value){
			return EVSQRelTypeIntersects;
		}
		else if(retval == EVSQRelTypeTouches.value){
			return EVSQRelTypeTouches;
		}
		else if(retval == EVSQRelTypeOverlaps.value){
			return EVSQRelTypeOverlaps;
		}
		else if(retval == EVSQRelTypeCrosses.value){
			return EVSQRelTypeCrosses;
		}
		else if(retval == EVSQRelTypeWithin.value){
			return EVSQRelTypeWithin;
		}
		else if(retval == EVSQRelTypeContains.value){
			return EVSQRelTypeContains;
		}
		else if(retval == EVSQRelTypeEnvelopeIntersects.value){
			return EVSQRelTypeEnvelopeIntersects;
		}
		else if(retval == EVSQRelTypeCustom.value){
			return EVSQRelTypeCustom;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSpatialQueryRelationTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
