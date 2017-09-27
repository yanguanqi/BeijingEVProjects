package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// 服务器图层
public enum EVVectorLayerRendererType implements INativeEnum<EVVectorLayerRendererType> {
	VLRT_UNKNOWN(EVVectorLayerRendererTypeHelper.ENUM_VALUES[0]),
	VLRT_FEATURE(EVVectorLayerRendererTypeHelper.ENUM_VALUES[1]),
	VLRT_SELECTION(EVVectorLayerRendererTypeHelper.ENUM_VALUES[2]),
	VLRT_LABEL(EVVectorLayerRendererTypeHelper.ENUM_VALUES[3]);
	private int value;
	EVVectorLayerRendererType(int i) {
		this.value = i;
	}
	public EVVectorLayerRendererType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVVectorLayerRendererType toEnum(int retval) {
		if(retval == VLRT_UNKNOWN.value){
			return VLRT_UNKNOWN;
		}
		else if(retval == VLRT_FEATURE.value){
			return VLRT_FEATURE;
		}
		else if(retval == VLRT_SELECTION.value){
			return VLRT_SELECTION;
		}
		else if(retval == VLRT_LABEL.value){
			return VLRT_LABEL;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVVectorLayerRendererTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
