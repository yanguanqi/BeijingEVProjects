package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///修改选择 	
public enum EVMapcontrolViewControlMode implements INativeEnum<EVMapcontrolViewControlMode> {
	MVR_Auto(EVMapcontrolViewControlModeHelper.ENUM_VALUES[0]),
	MVR_BetweenMapDisplayScales(EVMapcontrolViewControlModeHelper.ENUM_VALUES[1]);
	private int value;
	EVMapcontrolViewControlMode(int i) {
		this.value = i;
	}
	public EVMapcontrolViewControlMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVMapcontrolViewControlMode toEnum(int retval) {
		if(retval == MVR_Auto.value){
			return MVR_Auto;
		}
		else if(retval == MVR_BetweenMapDisplayScales.value){
			return MVR_BetweenMapDisplayScales;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVMapcontrolViewControlModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
