package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum GUITouchPhase implements INativeEnum<GUITouchPhase> {
	TOUCH_UNKNOWN(GUITouchPhaseHelper.ENUM_VALUES[0]),
	TOUCH_BEGAN(GUITouchPhaseHelper.ENUM_VALUES[1]),
	TOUCH_MOVED(GUITouchPhaseHelper.ENUM_VALUES[2]),
	TOUCH_STATIONERY(GUITouchPhaseHelper.ENUM_VALUES[3]),
	TOUCH_ENDED(GUITouchPhaseHelper.ENUM_VALUES[4]);
	private int value;
	GUITouchPhase(int i) {
		this.value = i;
	}
	public GUITouchPhase getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final GUITouchPhase toEnum(int retval) {
		if(retval == TOUCH_UNKNOWN.value){
			return TOUCH_UNKNOWN;
		}
		else if(retval == TOUCH_BEGAN.value){
			return TOUCH_BEGAN;
		}
		else if(retval == TOUCH_MOVED.value){
			return TOUCH_MOVED;
		}
		else if(retval == TOUCH_STATIONERY.value){
			return TOUCH_STATIONERY;
		}
		else if(retval == TOUCH_ENDED.value){
			return TOUCH_ENDED;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class GUITouchPhaseHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
