package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum ClashModelTreatWay implements INativeEnum<ClashModelTreatWay> {
	cover_with_clashmodel(ClashModelTreatWayHelper.ENUM_VALUES[0]),
	jump_over_clashmodel(ClashModelTreatWayHelper.ENUM_VALUES[1]);
	private int value;
	ClashModelTreatWay(int i) {
		this.value = i;
	}
	public ClashModelTreatWay getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ClashModelTreatWay toEnum(int retval) {
		if(retval == cover_with_clashmodel.value){
			return cover_with_clashmodel;
		}
		else if(retval == jump_over_clashmodel.value){
			return jump_over_clashmodel;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ClashModelTreatWayHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
