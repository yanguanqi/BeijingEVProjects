package com.earthview.world.spatial2d.geocorretion;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///<summary>
///纠正选用的数学模型
///<summary>
public enum RectifyModelType implements INativeEnum<RectifyModelType> {
	RM_Polynomial_1(RectifyModelTypeHelper.ENUM_VALUES[0]),
	RM_Polynomial_2(RectifyModelTypeHelper.ENUM_VALUES[1]),
	RM_Polynomial_3(RectifyModelTypeHelper.ENUM_VALUES[2]),
	RM_Scale(RectifyModelTypeHelper.ENUM_VALUES[3]),
	RM_Translation(RectifyModelTypeHelper.ENUM_VALUES[4]),
	RM_Unknown(RectifyModelTypeHelper.ENUM_VALUES[5]);
	private int value;
	RectifyModelType(int i) {
		this.value = i;
	}
	public RectifyModelType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final RectifyModelType toEnum(int retval) {
		if(retval == RM_Polynomial_1.value){
			return RM_Polynomial_1;
		}
		else if(retval == RM_Polynomial_2.value){
			return RM_Polynomial_2;
		}
		else if(retval == RM_Polynomial_3.value){
			return RM_Polynomial_3;
		}
		else if(retval == RM_Scale.value){
			return RM_Scale;
		}
		else if(retval == RM_Translation.value){
			return RM_Translation;
		}
		else if(retval == RM_Unknown.value){
			return RM_Unknown;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class RectifyModelTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
