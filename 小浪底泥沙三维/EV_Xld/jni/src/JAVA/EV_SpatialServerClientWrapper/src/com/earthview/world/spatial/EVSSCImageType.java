package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的影像数据类型枚举
 */
public enum EVSSCImageType implements INativeEnum<EVSSCImageType> {
	SSC_ImageType_Unknown(EVSSCImageTypeHelper.ENUM_VALUES[0]),
	SSC_ImageType_Jpg(EVSSCImageTypeHelper.ENUM_VALUES[1]),
	SSC_ImageType_Png(EVSSCImageTypeHelper.ENUM_VALUES[2]);
	private int value;
	EVSSCImageType(int i) {
		this.value = i;
	}
	public EVSSCImageType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSSCImageType toEnum(int retval) {
		if(retval == SSC_ImageType_Unknown.value){
			return SSC_ImageType_Unknown;
		}
		else if(retval == SSC_ImageType_Jpg.value){
			return SSC_ImageType_Jpg;
		}
		else if(retval == SSC_ImageType_Png.value){
			return SSC_ImageType_Png;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSSCImageTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
