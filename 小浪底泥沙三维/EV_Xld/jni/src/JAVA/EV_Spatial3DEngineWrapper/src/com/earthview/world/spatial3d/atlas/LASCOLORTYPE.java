package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum LASCOLORTYPE implements INativeEnum<LASCOLORTYPE> {
	LCT_Self(LASCOLORTYPEHelper.ENUM_VALUES[0]),
	LCT_General(LASCOLORTYPEHelper.ENUM_VALUES[1]),
	LCT_Elevation(LASCOLORTYPEHelper.ENUM_VALUES[2]),
	LCT_Intensity(LASCOLORTYPEHelper.ENUM_VALUES[3]),
	LCT_Classification(LASCOLORTYPEHelper.ENUM_VALUES[4]),
	LCT_ReturnNumber(LASCOLORTYPEHelper.ENUM_VALUES[5]);
	private int value;
	LASCOLORTYPE(int i) {
		this.value = i;
	}
	public LASCOLORTYPE getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final LASCOLORTYPE toEnum(int retval) {
		if(retval == LCT_Self.value){
			return LCT_Self;
		}
		else if(retval == LCT_General.value){
			return LCT_General;
		}
		else if(retval == LCT_Elevation.value){
			return LCT_Elevation;
		}
		else if(retval == LCT_Intensity.value){
			return LCT_Intensity;
		}
		else if(retval == LCT_Classification.value){
			return LCT_Classification;
		}
		else if(retval == LCT_ReturnNumber.value){
			return LCT_ReturnNumber;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class LASCOLORTYPEHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
