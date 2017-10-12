package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// ∆’Õ®
public enum Analysis3dCameraType implements INativeEnum<Analysis3dCameraType> {
	A3DCamT_Global(Analysis3dCameraTypeHelper.ENUM_VALUES[0]),
	A3DCamT_Define(Analysis3dCameraTypeHelper.ENUM_VALUES[1]);
	private int value;
	Analysis3dCameraType(int i) {
		this.value = i;
	}
	public Analysis3dCameraType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final Analysis3dCameraType toEnum(int retval) {
		if(retval == A3DCamT_Global.value){
			return A3DCamT_Global;
		}
		else if(retval == A3DCamT_Define.value){
			return A3DCamT_Define;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class Analysis3dCameraTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
