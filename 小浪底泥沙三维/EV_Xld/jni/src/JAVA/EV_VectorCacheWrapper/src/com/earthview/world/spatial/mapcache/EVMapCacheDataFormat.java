package com.earthview.world.spatial.mapcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVMapCacheDataFormat implements INativeEnum<EVMapCacheDataFormat> {
	MapCacheDataFormat_File(EVMapCacheDataFormatHelper.ENUM_VALUES[0]),
	MapCacheDataFormat_Db(EVMapCacheDataFormatHelper.ENUM_VALUES[1]);
	private int value;
	EVMapCacheDataFormat(int i) {
		this.value = i;
	}
	public EVMapCacheDataFormat getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVMapCacheDataFormat toEnum(int retval) {
		if(retval == MapCacheDataFormat_File.value){
			return MapCacheDataFormat_File;
		}
		else if(retval == MapCacheDataFormat_Db.value){
			return MapCacheDataFormat_Db;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVMapCacheDataFormatHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
