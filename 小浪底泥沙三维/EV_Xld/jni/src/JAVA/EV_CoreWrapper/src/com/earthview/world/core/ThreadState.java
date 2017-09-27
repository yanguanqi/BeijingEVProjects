package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public enum ThreadState implements INativeEnum<ThreadState> {
	TS_CREATED(ThreadStateHelper.ENUM_VALUES[0]),
	TS_RUNNING(ThreadStateHelper.ENUM_VALUES[1]),
	TS_SUSPENDED(ThreadStateHelper.ENUM_VALUES[2]),
	TS_TERMINATED(ThreadStateHelper.ENUM_VALUES[3]),
	TS_FINISHED(ThreadStateHelper.ENUM_VALUES[4]);
	private int value;
	ThreadState(int i) {
		this.value = i;
	}
	public ThreadState getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ThreadState toEnum(int retval) {
		if(retval == TS_CREATED.value){
			return TS_CREATED;
		}
		else if(retval == TS_RUNNING.value){
			return TS_RUNNING;
		}
		else if(retval == TS_SUSPENDED.value){
			return TS_SUSPENDED;
		}
		else if(retval == TS_TERMINATED.value){
			return TS_TERMINATED;
		}
		else if(retval == TS_FINISHED.value){
			return TS_FINISHED;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ThreadStateHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
