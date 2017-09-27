package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// Mesh compatibility versions
public enum MeshVersion implements INativeEnum<MeshVersion> {
	MESH_VERSION_LATEST(MeshVersionHelper.ENUM_VALUES[0]),
	MESH_VERSION_1_8(MeshVersionHelper.ENUM_VALUES[1]),
	MESH_VERSION_1_7(MeshVersionHelper.ENUM_VALUES[2]),
	MESH_VERSION_1_4(MeshVersionHelper.ENUM_VALUES[3]),
	MESH_VERSION_1_0(MeshVersionHelper.ENUM_VALUES[4]),
	MESH_VERSION_LEGACY(MeshVersionHelper.ENUM_VALUES[5]);
	private int value;
	MeshVersion(int i) {
		this.value = i;
	}
	public MeshVersion getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final MeshVersion toEnum(int retval) {
		if(retval == MESH_VERSION_LATEST.value){
			return MESH_VERSION_LATEST;
		}
		else if(retval == MESH_VERSION_1_8.value){
			return MESH_VERSION_1_8;
		}
		else if(retval == MESH_VERSION_1_7.value){
			return MESH_VERSION_1_7;
		}
		else if(retval == MESH_VERSION_1_4.value){
			return MESH_VERSION_1_4;
		}
		else if(retval == MESH_VERSION_1_0.value){
			return MESH_VERSION_1_0;
		}
		else if(retval == MESH_VERSION_LEGACY.value){
			return MESH_VERSION_LEGACY;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class MeshVersionHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
