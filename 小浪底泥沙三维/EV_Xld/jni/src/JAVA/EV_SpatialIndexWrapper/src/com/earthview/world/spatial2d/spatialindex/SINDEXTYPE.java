package com.earthview.world.spatial2d.spatialindex;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//////////////////////////////////////////////////////////
///index Type
//////////////////////////////////////////////////////////////
public enum SINDEXTYPE implements INativeEnum<SINDEXTYPE> {
	INDEX_Unkown(SINDEXTYPEHelper.ENUM_VALUES[0]),
	INDEX_Quad(SINDEXTYPEHelper.ENUM_VALUES[1]),
	INDEX_R_plus(SINDEXTYPEHelper.ENUM_VALUES[2]);
	private int value;
	SINDEXTYPE(int i) {
		this.value = i;
	}
	public SINDEXTYPE getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final SINDEXTYPE toEnum(int retval) {
		if(retval == INDEX_Unkown.value){
			return INDEX_Unkown;
		}
		else if(retval == INDEX_Quad.value){
			return INDEX_Quad;
		}
		else if(retval == INDEX_R_plus.value){
			return INDEX_R_plus;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class SINDEXTYPEHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
