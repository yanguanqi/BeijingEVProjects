package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum OBQDataType implements INativeEnum<OBQDataType> {
	OBQ_SMART3D(OBQDataTypeHelper.ENUM_VALUES[0]),
	OBQ_QSLIM(OBQDataTypeHelper.ENUM_VALUES[1]),
	OBQ_QSLIM_MERGE(OBQDataTypeHelper.ENUM_VALUES[2]),
	OBQ_QSLIM_SHAREDTEXTURE(OBQDataTypeHelper.ENUM_VALUES[3]);
	private int value;
	OBQDataType(int i) {
		this.value = i;
	}
	public OBQDataType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final OBQDataType toEnum(int retval) {
		if(retval == OBQ_SMART3D.value){
			return OBQ_SMART3D;
		}
		else if(retval == OBQ_QSLIM.value){
			return OBQ_QSLIM;
		}
		else if(retval == OBQ_QSLIM_MERGE.value){
			return OBQ_QSLIM_MERGE;
		}
		else if(retval == OBQ_QSLIM_SHAREDTEXTURE.value){
			return OBQ_QSLIM_SHAREDTEXTURE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class OBQDataTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
