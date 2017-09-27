package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum WaveformType implements INativeEnum<WaveformType> {
	WFT_SINE(WaveformTypeHelper.ENUM_VALUES[0]),
	WFT_TRIANGLE(WaveformTypeHelper.ENUM_VALUES[1]),
	WFT_SQUARE(WaveformTypeHelper.ENUM_VALUES[2]),
	WFT_SAWTOOTH(WaveformTypeHelper.ENUM_VALUES[3]),
	WFT_INVERSE_SAWTOOTH(WaveformTypeHelper.ENUM_VALUES[4]),
	WFT_PWM(WaveformTypeHelper.ENUM_VALUES[5]);
	private int value;
	WaveformType(int i) {
		this.value = i;
	}
	public WaveformType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final WaveformType toEnum(int retval) {
		if(retval == WFT_SINE.value){
			return WFT_SINE;
		}
		else if(retval == WFT_TRIANGLE.value){
			return WFT_TRIANGLE;
		}
		else if(retval == WFT_SQUARE.value){
			return WFT_SQUARE;
		}
		else if(retval == WFT_SAWTOOTH.value){
			return WFT_SAWTOOTH;
		}
		else if(retval == WFT_INVERSE_SAWTOOTH.value){
			return WFT_INVERSE_SAWTOOTH;
		}
		else if(retval == WFT_PWM.value){
			return WFT_PWM;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class WaveformTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
