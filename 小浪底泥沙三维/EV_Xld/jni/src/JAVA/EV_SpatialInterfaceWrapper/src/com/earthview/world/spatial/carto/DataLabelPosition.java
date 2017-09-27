package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数字标注位置
 */
public enum DataLabelPosition implements INativeEnum<DataLabelPosition> {
	DLP_LabelUp(DataLabelPositionHelper.ENUM_VALUES[0]),
	DLP_LabelDown(DataLabelPositionHelper.ENUM_VALUES[1]);
	private int value;
	DataLabelPosition(int i) {
		this.value = i;
	}
	public DataLabelPosition getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final DataLabelPosition toEnum(int retval) {
		if(retval == DLP_LabelUp.value){
			return DLP_LabelUp;
		}
		else if(retval == DLP_LabelDown.value){
			return DLP_LabelDown;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class DataLabelPositionHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
