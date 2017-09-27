package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 服务器连接器枚举
 */
public enum EVServerConnectionType implements INativeEnum<EVServerConnectionType> {
	SCE_UNKNOWN(EVServerConnectionTypeHelper.ENUM_VALUES[0]),
	SCE_OGC_SERVER_WMS(EVServerConnectionTypeHelper.ENUM_VALUES[1]),
	SCE_OGC_SERVER_WMTS(EVServerConnectionTypeHelper.ENUM_VALUES[2]),
	SCE_OGC_SERVER_WFS(EVServerConnectionTypeHelper.ENUM_VALUES[3]),
	SCE_EV_SERVER(EVServerConnectionTypeHelper.ENUM_VALUES[4]);
	private int value;
	EVServerConnectionType(int i) {
		this.value = i;
	}
	public EVServerConnectionType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVServerConnectionType toEnum(int retval) {
		if(retval == SCE_UNKNOWN.value){
			return SCE_UNKNOWN;
		}
		else if(retval == SCE_OGC_SERVER_WMS.value){
			return SCE_OGC_SERVER_WMS;
		}
		else if(retval == SCE_OGC_SERVER_WMTS.value){
			return SCE_OGC_SERVER_WMTS;
		}
		else if(retval == SCE_OGC_SERVER_WFS.value){
			return SCE_OGC_SERVER_WFS;
		}
		else if(retval == SCE_EV_SERVER.value){
			return SCE_EV_SERVER;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVServerConnectionTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
