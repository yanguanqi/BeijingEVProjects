package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 缓存模式
 */
public enum EVCacheMode implements INativeEnum<EVCacheMode> {
	CM_NoCache(EVCacheModeHelper.ENUM_VALUES[0]),
	CM_ImageCache(EVCacheModeHelper.ENUM_VALUES[1]),
	CM_QuickImageCache(EVCacheModeHelper.ENUM_VALUES[2]);
	private int value;
	EVCacheMode(int i) {
		this.value = i;
	}
	public EVCacheMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVCacheMode toEnum(int retval) {
		if(retval == CM_NoCache.value){
			return CM_NoCache;
		}
		else if(retval == CM_ImageCache.value){
			return CM_ImageCache;
		}
		else if(retval == CM_QuickImageCache.value){
			return CM_QuickImageCache;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVCacheModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
