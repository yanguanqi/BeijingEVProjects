package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///依数据逐级分裂，若断级，则停止分裂
public enum SeaType implements INativeEnum<SeaType> {
	NORMAL(SeaTypeHelper.ENUM_VALUES[0]),
	WAVE(SeaTypeHelper.ENUM_VALUES[1]),
	FFTSea(SeaTypeHelper.ENUM_VALUES[2]);
	private int value;
	SeaType(int i) {
		this.value = i;
	}
	public SeaType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final SeaType toEnum(int retval) {
		if(retval == NORMAL.value){
			return NORMAL;
		}
		else if(retval == WAVE.value){
			return WAVE;
		}
		else if(retval == FFTSea.value){
			return FFTSea;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class SeaTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
