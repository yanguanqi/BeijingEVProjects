package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public enum WorkQueuePriority implements INativeEnum<WorkQueuePriority> {
	Work_Queue_Tile(WorkQueuePriorityHelper.ENUM_VALUES[0]),
	Work_Queue_Vector(WorkQueuePriorityHelper.ENUM_VALUES[1]),
	Work_Queue_Model(WorkQueuePriorityHelper.ENUM_VALUES[2]),
	Work_Queue_Effect(WorkQueuePriorityHelper.ENUM_VALUES[3]),
	Work_Queue_Kml(WorkQueuePriorityHelper.ENUM_VALUES[4]),
	Work_Queue_Default(WorkQueuePriorityHelper.ENUM_VALUES[5]),
	Work_Queue_Custom(WorkQueuePriorityHelper.ENUM_VALUES[6]);
	private int value;
	WorkQueuePriority(int i) {
		this.value = i;
	}
	public WorkQueuePriority getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final WorkQueuePriority toEnum(int retval) {
		if(retval == Work_Queue_Tile.value){
			return Work_Queue_Tile;
		}
		else if(retval == Work_Queue_Vector.value){
			return Work_Queue_Vector;
		}
		else if(retval == Work_Queue_Model.value){
			return Work_Queue_Model;
		}
		else if(retval == Work_Queue_Effect.value){
			return Work_Queue_Effect;
		}
		else if(retval == Work_Queue_Kml.value){
			return Work_Queue_Kml;
		}
		else if(retval == Work_Queue_Default.value){
			return Work_Queue_Default;
		}
		else if(retval == Work_Queue_Custom.value){
			return Work_Queue_Custom;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class WorkQueuePriorityHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
