package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public enum EventPriority implements INativeEnum<EventPriority> {
	HighEventPriority(EventPriorityHelper.ENUM_VALUES[0]),
	NormalEventPriority(EventPriorityHelper.ENUM_VALUES[1]),
	LowEventPriority(EventPriorityHelper.ENUM_VALUES[2]);
	private int value;
	EventPriority(int i) {
		this.value = i;
	}
	public EventPriority getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EventPriority toEnum(int retval) {
		if(retval == HighEventPriority.value){
			return HighEventPriority;
		}
		else if(retval == NormalEventPriority.value){
			return NormalEventPriority;
		}
		else if(retval == LowEventPriority.value){
			return LowEventPriority;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EventPriorityHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
