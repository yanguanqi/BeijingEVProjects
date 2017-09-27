package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 目标数据集维度枚举
 */
public enum EVDatasetDimension implements INativeEnum<EVDatasetDimension> {
	DatasetDimension_XY(EVDatasetDimensionHelper.ENUM_VALUES[0]),
	DatasetDimension_XYZ(EVDatasetDimensionHelper.ENUM_VALUES[1]),
	DatasetDimension_XYZM(EVDatasetDimensionHelper.ENUM_VALUES[2]),
	DatasetDimension_XYM(EVDatasetDimensionHelper.ENUM_VALUES[3]),
	DatasetDimension_Default(EVDatasetDimensionHelper.ENUM_VALUES[4]);
	private int value;
	EVDatasetDimension(int i) {
		this.value = i;
	}
	public EVDatasetDimension getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVDatasetDimension toEnum(int retval) {
		if(retval == DatasetDimension_XY.value){
			return DatasetDimension_XY;
		}
		else if(retval == DatasetDimension_XYZ.value){
			return DatasetDimension_XYZ;
		}
		else if(retval == DatasetDimension_XYZM.value){
			return DatasetDimension_XYZM;
		}
		else if(retval == DatasetDimension_XYM.value){
			return DatasetDimension_XYM;
		}
		else if(retval == DatasetDimension_Default.value){
			return DatasetDimension_Default;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVDatasetDimensionHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
