package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///0x26
public enum TrackVertexColourEnum implements INativeEnum<TrackVertexColourEnum> {
	TVC_NONE(TrackVertexColourEnumHelper.ENUM_VALUES[0]),
	TVC_AMBIENT(TrackVertexColourEnumHelper.ENUM_VALUES[1]),
	TVC_DIFFUSE(TrackVertexColourEnumHelper.ENUM_VALUES[2]),
	TVC_SPECULAR(TrackVertexColourEnumHelper.ENUM_VALUES[3]),
	TVC_EMISSIVE(TrackVertexColourEnumHelper.ENUM_VALUES[4]);
	private int value;
	TrackVertexColourEnum(int i) {
		this.value = i;
	}
	public TrackVertexColourEnum getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final TrackVertexColourEnum toEnum(int retval) {
		if(retval == TVC_NONE.value){
			return TVC_NONE;
		}
		else if(retval == TVC_AMBIENT.value){
			return TVC_AMBIENT;
		}
		else if(retval == TVC_DIFFUSE.value){
			return TVC_DIFFUSE;
		}
		else if(retval == TVC_SPECULAR.value){
			return TVC_SPECULAR;
		}
		else if(retval == TVC_EMISSIVE.value){
			return TVC_EMISSIVE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class TrackVertexColourEnumHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
