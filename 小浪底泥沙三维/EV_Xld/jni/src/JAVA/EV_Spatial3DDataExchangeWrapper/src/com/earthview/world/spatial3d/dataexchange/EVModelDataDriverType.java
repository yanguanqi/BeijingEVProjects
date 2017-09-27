package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据交换驱动类型
 */
public enum EVModelDataDriverType implements INativeEnum<EVModelDataDriverType> {
	MDDT_Unknown(EVModelDataDriverTypeHelper.ENUM_VALUES[0]),
	MDDT_MESHFILE(EVModelDataDriverTypeHelper.ENUM_VALUES[1]),
	MDDT_EarthView(EVModelDataDriverTypeHelper.ENUM_VALUES[2]);
	private int value;
	EVModelDataDriverType(int i) {
		this.value = i;
	}
	public EVModelDataDriverType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVModelDataDriverType toEnum(int retval) {
		if(retval == MDDT_Unknown.value){
			return MDDT_Unknown;
		}
		else if(retval == MDDT_MESHFILE.value){
			return MDDT_MESHFILE;
		}
		else if(retval == MDDT_EarthView.value){
			return MDDT_EarthView;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVModelDataDriverTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
