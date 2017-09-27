package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///0x2,
public enum InstanceManagerFlags implements INativeEnum<InstanceManagerFlags> {
	IM_USE16BIT(InstanceManagerFlagsHelper.ENUM_VALUES[0]),
	IM_VTFBESTFIT(InstanceManagerFlagsHelper.ENUM_VALUES[1]),
	IM_VTFBONEMATRIXLOOKUP(InstanceManagerFlagsHelper.ENUM_VALUES[2]),
	IM_USEBONEDUALQUATERNIONS(InstanceManagerFlagsHelper.ENUM_VALUES[3]),
	IM_USEONEWEIGHT(InstanceManagerFlagsHelper.ENUM_VALUES[4]),
	IM_FORCEONEWEIGHT(InstanceManagerFlagsHelper.ENUM_VALUES[5]),
	IM_USEALL(InstanceManagerFlagsHelper.ENUM_VALUES[6]);
	private int value;
	InstanceManagerFlags(int i) {
		this.value = i;
	}
	public InstanceManagerFlags getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final InstanceManagerFlags toEnum(int retval) {
		if(retval == IM_USE16BIT.value){
			return IM_USE16BIT;
		}
		else if(retval == IM_VTFBESTFIT.value){
			return IM_VTFBESTFIT;
		}
		else if(retval == IM_VTFBONEMATRIXLOOKUP.value){
			return IM_VTFBONEMATRIXLOOKUP;
		}
		else if(retval == IM_USEBONEDUALQUATERNIONS.value){
			return IM_USEBONEDUALQUATERNIONS;
		}
		else if(retval == IM_USEONEWEIGHT.value){
			return IM_USEONEWEIGHT;
		}
		else if(retval == IM_FORCEONEWEIGHT.value){
			return IM_FORCEONEWEIGHT;
		}
		else if(retval == IM_USEALL.value){
			return IM_USEALL;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class InstanceManagerFlagsHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
