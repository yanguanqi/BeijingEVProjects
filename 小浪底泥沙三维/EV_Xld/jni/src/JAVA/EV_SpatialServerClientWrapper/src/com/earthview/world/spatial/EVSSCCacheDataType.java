package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的缓存数据类型
 */
public enum EVSSCCacheDataType implements INativeEnum<EVSSCCacheDataType> {
	SSC_CacheDataType_Image(EVSSCCacheDataTypeHelper.ENUM_VALUES[0]),
	SSC_CacheDataType_DEM(EVSSCCacheDataTypeHelper.ENUM_VALUES[1]),
	SSC_CacheDataType_Vector(EVSSCCacheDataTypeHelper.ENUM_VALUES[2]),
	SSC_CacheDataType_Chart(EVSSCCacheDataTypeHelper.ENUM_VALUES[3]),
	SSC_CacheDataType_Unknown(EVSSCCacheDataTypeHelper.ENUM_VALUES[4]);
	private int value;
	EVSSCCacheDataType(int i) {
		this.value = i;
	}
	public EVSSCCacheDataType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSSCCacheDataType toEnum(int retval) {
		if(retval == SSC_CacheDataType_Image.value){
			return SSC_CacheDataType_Image;
		}
		else if(retval == SSC_CacheDataType_DEM.value){
			return SSC_CacheDataType_DEM;
		}
		else if(retval == SSC_CacheDataType_Vector.value){
			return SSC_CacheDataType_Vector;
		}
		else if(retval == SSC_CacheDataType_Chart.value){
			return SSC_CacheDataType_Chart;
		}
		else if(retval == SSC_CacheDataType_Unknown.value){
			return SSC_CacheDataType_Unknown;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSSCCacheDataTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
