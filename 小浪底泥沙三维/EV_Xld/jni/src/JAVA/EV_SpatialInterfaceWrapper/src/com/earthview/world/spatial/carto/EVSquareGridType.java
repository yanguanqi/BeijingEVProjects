package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVSquareGridType implements INativeEnum<EVSquareGridType> {
	SGT_Graticales(EVSquareGridTypeHelper.ENUM_VALUES[0]),
	SGT_KilometerGrid(EVSquareGridTypeHelper.ENUM_VALUES[1]),
	SGT_ReferenceGrid(EVSquareGridTypeHelper.ENUM_VALUES[2]);
	private int value;
	EVSquareGridType(int i) {
		this.value = i;
	}
	public EVSquareGridType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSquareGridType toEnum(int retval) {
		if(retval == SGT_Graticales.value){
			return SGT_Graticales;
		}
		else if(retval == SGT_KilometerGrid.value){
			return SGT_KilometerGrid;
		}
		else if(retval == SGT_ReferenceGrid.value){
			return SGT_ReferenceGrid;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSquareGridTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
