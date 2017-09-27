package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 鼠标采点状态，结合不同情况适用不同组合
 */
public enum MousePickState implements INativeEnum<MousePickState> {
	MPS_ToFirst(MousePickStateHelper.ENUM_VALUES[0]),
	MPS_ToSecond(MousePickStateHelper.ENUM_VALUES[1]),
	MPS_ToThird(MousePickStateHelper.ENUM_VALUES[2]),
	MPS_Picking(MousePickStateHelper.ENUM_VALUES[3]),
	MPS_Over(MousePickStateHelper.ENUM_VALUES[4]);
	private int value;
	MousePickState(int i) {
		this.value = i;
	}
	public MousePickState getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final MousePickState toEnum(int retval) {
		if(retval == MPS_ToFirst.value){
			return MPS_ToFirst;
		}
		else if(retval == MPS_ToSecond.value){
			return MPS_ToSecond;
		}
		else if(retval == MPS_ToThird.value){
			return MPS_ToThird;
		}
		else if(retval == MPS_Picking.value){
			return MPS_Picking;
		}
		else if(retval == MPS_Over.value){
			return MPS_Over;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class MousePickStateHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
