package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVRendererType implements INativeEnum<EVRendererType> {
	RT_UNKNOWN(EVRendererTypeHelper.ENUM_VALUES[0]),
	RT_FEATURERENDERER(EVRendererTypeHelper.ENUM_VALUES[1]),
	RT_RASTERRENDERER(EVRendererTypeHelper.ENUM_VALUES[2]),
	RT_LABELRENDERER(EVRendererTypeHelper.ENUM_VALUES[3]);
	private int value;
	EVRendererType(int i) {
		this.value = i;
	}
	public EVRendererType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVRendererType toEnum(int retval) {
		if(retval == RT_UNKNOWN.value){
			return RT_UNKNOWN;
		}
		else if(retval == RT_FEATURERENDERER.value){
			return RT_FEATURERENDERER;
		}
		else if(retval == RT_RASTERRENDERER.value){
			return RT_RASTERRENDERER;
		}
		else if(retval == RT_LABELRENDERER.value){
			return RT_LABELRENDERER;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVRendererTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
