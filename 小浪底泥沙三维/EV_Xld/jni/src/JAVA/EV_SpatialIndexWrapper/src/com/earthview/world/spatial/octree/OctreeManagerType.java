package com.earthview.world.spatial.octree;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum OctreeManagerType implements INativeEnum<OctreeManagerType> {
	OMT_NULL(OctreeManagerTypeHelper.ENUM_VALUES[0]),
	OMT_DB(OctreeManagerTypeHelper.ENUM_VALUES[1]),
	OMT_Web(OctreeManagerTypeHelper.ENUM_VALUES[2]);
	private int value;
	OctreeManagerType(int i) {
		this.value = i;
	}
	public OctreeManagerType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final OctreeManagerType toEnum(int retval) {
		if(retval == OMT_NULL.value){
			return OMT_NULL;
		}
		else if(retval == OMT_DB.value){
			return OMT_DB;
		}
		else if(retval == OMT_Web.value){
			return OMT_Web;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class OctreeManagerTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
