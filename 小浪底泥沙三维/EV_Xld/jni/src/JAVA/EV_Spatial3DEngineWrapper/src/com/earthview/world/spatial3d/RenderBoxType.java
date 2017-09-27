package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum RenderBoxType implements INativeEnum<RenderBoxType> {
	RBT_OCTREEBOX_AND_LEATBOX(RenderBoxTypeHelper.ENUM_VALUES[0]),
	RBT_OCTREEBOX(RenderBoxTypeHelper.ENUM_VALUES[1]),
	RBT_LEATBOX(RenderBoxTypeHelper.ENUM_VALUES[2]);
	private int value;
	RenderBoxType(int i) {
		this.value = i;
	}
	public RenderBoxType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final RenderBoxType toEnum(int retval) {
		if(retval == RBT_OCTREEBOX_AND_LEATBOX.value){
			return RBT_OCTREEBOX_AND_LEATBOX;
		}
		else if(retval == RBT_OCTREEBOX.value){
			return RBT_OCTREEBOX;
		}
		else if(retval == RBT_LEATBOX.value){
			return RBT_LEATBOX;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class RenderBoxTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
