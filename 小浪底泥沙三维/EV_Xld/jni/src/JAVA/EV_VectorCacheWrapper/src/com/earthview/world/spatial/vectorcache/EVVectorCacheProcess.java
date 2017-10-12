package com.earthview.world.spatial.vectorcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 缓存处理阶段
 */
public enum EVVectorCacheProcess implements INativeEnum<EVVectorCacheProcess> {
	VectorCacheProcess_Process_Ready(EVVectorCacheProcessHelper.ENUM_VALUES[0]),
	VectorCacheProcess_Process_Clip(EVVectorCacheProcessHelper.ENUM_VALUES[1]),
	VectorCacheProcess_Process_Create(EVVectorCacheProcessHelper.ENUM_VALUES[2]),
	VectorCacheProcess_Process_PreCreate(EVVectorCacheProcessHelper.ENUM_VALUES[3]),
	VectorCacheProcess_Process_AllDone(EVVectorCacheProcessHelper.ENUM_VALUES[4]);
	private int value;
	EVVectorCacheProcess(int i) {
		this.value = i;
	}
	public EVVectorCacheProcess getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVVectorCacheProcess toEnum(int retval) {
		if(retval == VectorCacheProcess_Process_Ready.value){
			return VectorCacheProcess_Process_Ready;
		}
		else if(retval == VectorCacheProcess_Process_Clip.value){
			return VectorCacheProcess_Process_Clip;
		}
		else if(retval == VectorCacheProcess_Process_Create.value){
			return VectorCacheProcess_Process_Create;
		}
		else if(retval == VectorCacheProcess_Process_PreCreate.value){
			return VectorCacheProcess_Process_PreCreate;
		}
		else if(retval == VectorCacheProcess_Process_AllDone.value){
			return VectorCacheProcess_Process_AllDone;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVVectorCacheProcessHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
