package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * 线程的局部存储
 */
public enum ThreadPriority implements INativeEnum<ThreadPriority> {
	EV_THREAD_LOW(ThreadPriorityHelper.ENUM_VALUES[0]),
	EV_THREAD_NORMAL(ThreadPriorityHelper.ENUM_VALUES[1]),
	EV_THREAD_HIGH(ThreadPriorityHelper.ENUM_VALUES[2]),
	EV_THREAD_REAL(ThreadPriorityHelper.ENUM_VALUES[3]);
	private int value;
	ThreadPriority(int i) {
		this.value = i;
	}
	public ThreadPriority getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ThreadPriority toEnum(int retval) {
		if(retval == EV_THREAD_LOW.value){
			return EV_THREAD_LOW;
		}
		else if(retval == EV_THREAD_NORMAL.value){
			return EV_THREAD_NORMAL;
		}
		else if(retval == EV_THREAD_HIGH.value){
			return EV_THREAD_HIGH;
		}
		else if(retval == EV_THREAD_REAL.value){
			return EV_THREAD_REAL;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ThreadPriorityHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
