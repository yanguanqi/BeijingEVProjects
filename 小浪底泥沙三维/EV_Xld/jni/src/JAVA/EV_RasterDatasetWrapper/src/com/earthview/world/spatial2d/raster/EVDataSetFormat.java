package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 栅格数据集的类型
 */
public enum EVDataSetFormat implements INativeEnum<EVDataSetFormat> {
	RT_JPG(EVDataSetFormatHelper.ENUM_VALUES[0]),
	RT_PNG(EVDataSetFormatHelper.ENUM_VALUES[1]),
	RT_BMP(EVDataSetFormatHelper.ENUM_VALUES[2]),
	RT_TIF(EVDataSetFormatHelper.ENUM_VALUES[3]),
	RT_IMG(EVDataSetFormatHelper.ENUM_VALUES[4]),
	RT_MEM(EVDataSetFormatHelper.ENUM_VALUES[5]);
	private int value;
	EVDataSetFormat(int i) {
		this.value = i;
	}
	public EVDataSetFormat getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVDataSetFormat toEnum(int retval) {
		if(retval == RT_JPG.value){
			return RT_JPG;
		}
		else if(retval == RT_PNG.value){
			return RT_PNG;
		}
		else if(retval == RT_BMP.value){
			return RT_BMP;
		}
		else if(retval == RT_TIF.value){
			return RT_TIF;
		}
		else if(retval == RT_IMG.value){
			return RT_IMG;
		}
		else if(retval == RT_MEM.value){
			return RT_MEM;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVDataSetFormatHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
