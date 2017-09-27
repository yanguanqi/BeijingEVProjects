package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EntityDatasetOperType implements INativeEnum<EntityDatasetOperType> {
	EDS_ADD(EntityDatasetOperTypeHelper.ENUM_VALUES[0]),
	EDS_DELETE(EntityDatasetOperTypeHelper.ENUM_VALUES[1]),
	EDS_UPDATE(EntityDatasetOperTypeHelper.ENUM_VALUES[2]),
	EDS_DONOTHING(EntityDatasetOperTypeHelper.ENUM_VALUES[3]);
	private int value;
	EntityDatasetOperType(int i) {
		this.value = i;
	}
	public EntityDatasetOperType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EntityDatasetOperType toEnum(int retval) {
		if(retval == EDS_ADD.value){
			return EDS_ADD;
		}
		else if(retval == EDS_DELETE.value){
			return EDS_DELETE;
		}
		else if(retval == EDS_UPDATE.value){
			return EDS_UPDATE;
		}
		else if(retval == EDS_DONOTHING.value){
			return EDS_DONOTHING;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EntityDatasetOperTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
