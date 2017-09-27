package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum BillboardRotationType implements INativeEnum<BillboardRotationType> {
	BBR_VERTEX(BillboardRotationTypeHelper.ENUM_VALUES[0]),
	BBR_TEXCOORD(BillboardRotationTypeHelper.ENUM_VALUES[1]);
	private int value;
	BillboardRotationType(int i) {
		this.value = i;
	}
	public BillboardRotationType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final BillboardRotationType toEnum(int retval) {
		if(retval == BBR_VERTEX.value){
			return BBR_VERTEX;
		}
		else if(retval == BBR_TEXCOORD.value){
			return BBR_TEXCOORD;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class BillboardRotationTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
