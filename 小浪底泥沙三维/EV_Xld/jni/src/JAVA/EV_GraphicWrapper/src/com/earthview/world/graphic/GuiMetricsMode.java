package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum GuiMetricsMode implements INativeEnum<GuiMetricsMode> {
	GMM_RELATIVE(GuiMetricsModeHelper.ENUM_VALUES[0]),
	GMM_PIXELS(GuiMetricsModeHelper.ENUM_VALUES[1]),
	GMM_RELATIVE_ASPECT_ADJUSTED(GuiMetricsModeHelper.ENUM_VALUES[2]);
	private int value;
	GuiMetricsMode(int i) {
		this.value = i;
	}
	public GuiMetricsMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final GuiMetricsMode toEnum(int retval) {
		if(retval == GMM_RELATIVE.value){
			return GMM_RELATIVE;
		}
		else if(retval == GMM_PIXELS.value){
			return GMM_PIXELS;
		}
		else if(retval == GMM_RELATIVE_ASPECT_ADJUSTED.value){
			return GMM_RELATIVE_ASPECT_ADJUSTED;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class GuiMetricsModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
