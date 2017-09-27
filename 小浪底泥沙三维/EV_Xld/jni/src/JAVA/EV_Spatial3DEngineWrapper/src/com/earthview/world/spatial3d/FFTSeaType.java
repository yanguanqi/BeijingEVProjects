package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum FFTSeaType implements INativeEnum<FFTSeaType> {
	FFT_TESSENDORF(FFTSeaTypeHelper.ENUM_VALUES[0]),
	FFT_PIERSON_MOSKOWITZ(FFTSeaTypeHelper.ENUM_VALUES[1]),
	FFT_JONSWAP(FFTSeaTypeHelper.ENUM_VALUES[2]);
	private int value;
	FFTSeaType(int i) {
		this.value = i;
	}
	public FFTSeaType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final FFTSeaType toEnum(int retval) {
		if(retval == FFT_TESSENDORF.value){
			return FFT_TESSENDORF;
		}
		else if(retval == FFT_PIERSON_MOSKOWITZ.value){
			return FFT_PIERSON_MOSKOWITZ;
		}
		else if(retval == FFT_JONSWAP.value){
			return FFT_JONSWAP;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class FFTSeaTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
