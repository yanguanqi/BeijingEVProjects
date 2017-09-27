package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 面填充样式
 */
public enum EVMarkerFillStyle implements INativeEnum<EVMarkerFillStyle> {
	MFS_MarkerFillStyle_Grid(EVMarkerFillStyleHelper.ENUM_VALUES[0]),
	MFS_MarkerFillStyle_Single(EVMarkerFillStyleHelper.ENUM_VALUES[1]),
	MFS_MarkerFillStyle_Random(EVMarkerFillStyleHelper.ENUM_VALUES[2]);
	private int value;
	EVMarkerFillStyle(int i) {
		this.value = i;
	}
	public EVMarkerFillStyle getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVMarkerFillStyle toEnum(int retval) {
		if(retval == MFS_MarkerFillStyle_Grid.value){
			return MFS_MarkerFillStyle_Grid;
		}
		else if(retval == MFS_MarkerFillStyle_Single.value){
			return MFS_MarkerFillStyle_Single;
		}
		else if(retval == MFS_MarkerFillStyle_Random.value){
			return MFS_MarkerFillStyle_Random;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVMarkerFillStyleHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
