package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 箭头状态
 */
public enum KmlArrowState implements INativeEnum<KmlArrowState> {
	KAS_Creating(KmlArrowStateHelper.ENUM_VALUES[0]),
	KAS_Editing(KmlArrowStateHelper.ENUM_VALUES[1]);
	private int value;
	KmlArrowState(int i) {
		this.value = i;
	}
	public KmlArrowState getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final KmlArrowState toEnum(int retval) {
		if(retval == KAS_Creating.value){
			return KAS_Creating;
		}
		else if(retval == KAS_Editing.value){
			return KAS_Editing;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class KmlArrowStateHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
