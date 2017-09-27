package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的缓存模式
 */
public enum EVSSCCacheMode implements INativeEnum<EVSSCCacheMode> {
	SSC_CacheMode_Unknown(EVSSCCacheModeHelper.ENUM_VALUES[0]),
	SSC_CacheMode_LeftTop(EVSSCCacheModeHelper.ENUM_VALUES[1]),
	SSC_CacheMode_LeftBottom(EVSSCCacheModeHelper.ENUM_VALUES[2]),
	SSC_CacheMode_RightTop(EVSSCCacheModeHelper.ENUM_VALUES[3]),
	SSC_CacheMode_RightBottom(EVSSCCacheModeHelper.ENUM_VALUES[4]),
	SSC_CacheMode_Center(EVSSCCacheModeHelper.ENUM_VALUES[5]);
	private int value;
	EVSSCCacheMode(int i) {
		this.value = i;
	}
	public EVSSCCacheMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSSCCacheMode toEnum(int retval) {
		if(retval == SSC_CacheMode_Unknown.value){
			return SSC_CacheMode_Unknown;
		}
		else if(retval == SSC_CacheMode_LeftTop.value){
			return SSC_CacheMode_LeftTop;
		}
		else if(retval == SSC_CacheMode_LeftBottom.value){
			return SSC_CacheMode_LeftBottom;
		}
		else if(retval == SSC_CacheMode_RightTop.value){
			return SSC_CacheMode_RightTop;
		}
		else if(retval == SSC_CacheMode_RightBottom.value){
			return SSC_CacheMode_RightBottom;
		}
		else if(retval == SSC_CacheMode_Center.value){
			return SSC_CacheMode_Center;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSSCCacheModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
