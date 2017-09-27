package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 服务器信息类型
 */
public enum EVServerInfoType implements INativeEnum<EVServerInfoType> {
	SIT_UNKNOWN(EVServerInfoTypeHelper.ENUM_VALUES[0]),
	SIT_OGC_SERVER_WMS(EVServerInfoTypeHelper.ENUM_VALUES[1]),
	SIT_OGC_SERVER_WMTS(EVServerInfoTypeHelper.ENUM_VALUES[2]),
	SIT_OGC_SERVER_WFS(EVServerInfoTypeHelper.ENUM_VALUES[3]),
	SIT_EV_SERVER(EVServerInfoTypeHelper.ENUM_VALUES[4]);
	private int value;
	EVServerInfoType(int i) {
		this.value = i;
	}
	public EVServerInfoType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVServerInfoType toEnum(int retval) {
		if(retval == SIT_UNKNOWN.value){
			return SIT_UNKNOWN;
		}
		else if(retval == SIT_OGC_SERVER_WMS.value){
			return SIT_OGC_SERVER_WMS;
		}
		else if(retval == SIT_OGC_SERVER_WMTS.value){
			return SIT_OGC_SERVER_WMTS;
		}
		else if(retval == SIT_OGC_SERVER_WFS.value){
			return SIT_OGC_SERVER_WFS;
		}
		else if(retval == SIT_EV_SERVER.value){
			return SIT_EV_SERVER;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVServerInfoTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
