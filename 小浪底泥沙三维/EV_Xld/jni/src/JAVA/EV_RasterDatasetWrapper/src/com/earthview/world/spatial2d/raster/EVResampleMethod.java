package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 采样方法
 */
public enum EVResampleMethod implements INativeEnum<EVResampleMethod> {
	EVR_NearestNeighbour(EVResampleMethodHelper.ENUM_VALUES[0]),
	EVR_Bilinear(EVResampleMethodHelper.ENUM_VALUES[1]),
	EVR_Cubic(EVResampleMethodHelper.ENUM_VALUES[2]),
	EVR_CubicSpline(EVResampleMethodHelper.ENUM_VALUES[3]),
	EVR_Lanczos(EVResampleMethodHelper.ENUM_VALUES[4]),
	EVR_GPUNearestNeighbour(EVResampleMethodHelper.ENUM_VALUES[5]),
	EVR_GPUCubic(EVResampleMethodHelper.ENUM_VALUES[6]);
	private int value;
	EVResampleMethod(int i) {
		this.value = i;
	}
	public EVResampleMethod getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVResampleMethod toEnum(int retval) {
		if(retval == EVR_NearestNeighbour.value){
			return EVR_NearestNeighbour;
		}
		else if(retval == EVR_Bilinear.value){
			return EVR_Bilinear;
		}
		else if(retval == EVR_Cubic.value){
			return EVR_Cubic;
		}
		else if(retval == EVR_CubicSpline.value){
			return EVR_CubicSpline;
		}
		else if(retval == EVR_Lanczos.value){
			return EVR_Lanczos;
		}
		else if(retval == EVR_GPUNearestNeighbour.value){
			return EVR_GPUNearestNeighbour;
		}
		else if(retval == EVR_GPUCubic.value){
			return EVR_GPUCubic;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVResampleMethodHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
