package com.earthview.world.spatial2d.geocorretion;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///<summary>
///重采样方法
///<summary>
public enum ResampleType implements INativeEnum<ResampleType> {
	RS_Nearest(ResampleTypeHelper.ENUM_VALUES[0]),
	RS_Bilenear(ResampleTypeHelper.ENUM_VALUES[1]),
	RS_Cubic(ResampleTypeHelper.ENUM_VALUES[2]),
	RS_UnKnown(ResampleTypeHelper.ENUM_VALUES[3]);
	private int value;
	ResampleType(int i) {
		this.value = i;
	}
	public ResampleType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ResampleType toEnum(int retval) {
		if(retval == RS_Nearest.value){
			return RS_Nearest;
		}
		else if(retval == RS_Bilenear.value){
			return RS_Bilenear;
		}
		else if(retval == RS_Cubic.value){
			return RS_Cubic;
		}
		else if(retval == RS_UnKnown.value){
			return RS_UnKnown;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ResampleTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
