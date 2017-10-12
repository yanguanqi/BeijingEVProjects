package com.earthview.world.spatial.vectorcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 操作类型
 */
public enum EVVectorCachePauseType implements INativeEnum<EVVectorCachePauseType> {
	VectorCachePauseType_UnDone(EVVectorCachePauseTypeHelper.ENUM_VALUES[0]),
	VectorCachePauseType_Stop(EVVectorCachePauseTypeHelper.ENUM_VALUES[1]),
	VectorCachePauseType_Restart(EVVectorCachePauseTypeHelper.ENUM_VALUES[2]);
	private int value;
	EVVectorCachePauseType(int i) {
		this.value = i;
	}
	public EVVectorCachePauseType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVVectorCachePauseType toEnum(int retval) {
		if(retval == VectorCachePauseType_UnDone.value){
			return VectorCachePauseType_UnDone;
		}
		else if(retval == VectorCachePauseType_Stop.value){
			return VectorCachePauseType_Stop;
		}
		else if(retval == VectorCachePauseType_Restart.value){
			return VectorCachePauseType_Restart;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVVectorCachePauseTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
