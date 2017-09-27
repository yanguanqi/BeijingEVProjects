package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// Bitmask containing scene types
public enum SceneType implements INativeEnum<SceneType> {
	ST_GENERIC(SceneTypeHelper.ENUM_VALUES[0]),
	ST_EXTERIOR_CLOSE(SceneTypeHelper.ENUM_VALUES[1]),
	ST_EXTERIOR_FAR(SceneTypeHelper.ENUM_VALUES[2]),
	ST_EXTERIOR_REAL_FAR(SceneTypeHelper.ENUM_VALUES[3]),
	ST_INTERIOR(SceneTypeHelper.ENUM_VALUES[4]),
	ST_OCTREE(SceneTypeHelper.ENUM_VALUES[5]),
	ST_TERRAIN(SceneTypeHelper.ENUM_VALUES[6]),
	ST_GEO(SceneTypeHelper.ENUM_VALUES[7]),
	ST_COMMON(SceneTypeHelper.ENUM_VALUES[8]);
	private int value;
	SceneType(int i) {
		this.value = i;
	}
	public SceneType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final SceneType toEnum(int retval) {
		if(retval == ST_GENERIC.value){
			return ST_GENERIC;
		}
		else if(retval == ST_EXTERIOR_CLOSE.value){
			return ST_EXTERIOR_CLOSE;
		}
		else if(retval == ST_EXTERIOR_FAR.value){
			return ST_EXTERIOR_FAR;
		}
		else if(retval == ST_EXTERIOR_REAL_FAR.value){
			return ST_EXTERIOR_REAL_FAR;
		}
		else if(retval == ST_INTERIOR.value){
			return ST_INTERIOR;
		}
		else if(retval == ST_OCTREE.value){
			return ST_OCTREE;
		}
		else if(retval == ST_TERRAIN.value){
			return ST_TERRAIN;
		}
		else if(retval == ST_GEO.value){
			return ST_GEO;
		}
		else if(retval == ST_COMMON.value){
			return ST_COMMON;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class SceneTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
