package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum BackgroundRequestType implements INativeEnum<BackgroundRequestType> {
	BGRT_LOAD(BackgroundRequestTypeHelper.ENUM_VALUES[0]),
	BGRT_UNLOAD(BackgroundRequestTypeHelper.ENUM_VALUES[1]),
	BGRT_ATTACHTONODE(BackgroundRequestTypeHelper.ENUM_VALUES[2]),
	BGRT_DETACHFROMNODE(BackgroundRequestTypeHelper.ENUM_VALUES[3]),
	BGRT_ATTACHTOSCENE(BackgroundRequestTypeHelper.ENUM_VALUES[4]),
	BGRT_DETACHFROMSCENE(BackgroundRequestTypeHelper.ENUM_VALUES[5]),
	BGRT_RELEASEOBJECT(BackgroundRequestTypeHelper.ENUM_VALUES[6]);
	private int value;
	BackgroundRequestType(int i) {
		this.value = i;
	}
	public BackgroundRequestType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final BackgroundRequestType toEnum(int retval) {
		if(retval == BGRT_LOAD.value){
			return BGRT_LOAD;
		}
		else if(retval == BGRT_UNLOAD.value){
			return BGRT_UNLOAD;
		}
		else if(retval == BGRT_ATTACHTONODE.value){
			return BGRT_ATTACHTONODE;
		}
		else if(retval == BGRT_DETACHFROMNODE.value){
			return BGRT_DETACHFROMNODE;
		}
		else if(retval == BGRT_ATTACHTOSCENE.value){
			return BGRT_ATTACHTOSCENE;
		}
		else if(retval == BGRT_DETACHFROMSCENE.value){
			return BGRT_DETACHFROMSCENE;
		}
		else if(retval == BGRT_RELEASEOBJECT.value){
			return BGRT_RELEASEOBJECT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class BackgroundRequestTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
