package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVRasterRendererType implements INativeEnum<EVRasterRendererType> {
	EV_UnknownRenderer(EVRasterRendererTypeHelper.ENUM_VALUES[0]),
	EV_UniqueValueRenderer(EVRasterRendererTypeHelper.ENUM_VALUES[1]),
	EV_ClassificationRenderer(EVRasterRendererTypeHelper.ENUM_VALUES[2]),
	EV_StretchRenderer(EVRasterRendererTypeHelper.ENUM_VALUES[3]),
	EV_RGBRenderer(EVRasterRendererTypeHelper.ENUM_VALUES[4]),
	EV_ColorMapRenderer(EVRasterRendererTypeHelper.ENUM_VALUES[5]);
	private int value;
	EVRasterRendererType(int i) {
		this.value = i;
	}
	public EVRasterRendererType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVRasterRendererType toEnum(int retval) {
		if(retval == EV_UnknownRenderer.value){
			return EV_UnknownRenderer;
		}
		else if(retval == EV_UniqueValueRenderer.value){
			return EV_UniqueValueRenderer;
		}
		else if(retval == EV_ClassificationRenderer.value){
			return EV_ClassificationRenderer;
		}
		else if(retval == EV_StretchRenderer.value){
			return EV_StretchRenderer;
		}
		else if(retval == EV_RGBRenderer.value){
			return EV_RGBRenderer;
		}
		else if(retval == EV_ColorMapRenderer.value){
			return EV_ColorMapRenderer;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVRasterRendererTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
