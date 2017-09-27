package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 服务器图层信息类枚举
 */
public enum EVServerLayerInfoType implements INativeEnum<EVServerLayerInfoType> {
	SLIE_UNKNOWN(EVServerLayerInfoTypeHelper.ENUM_VALUES[0]),
	SLIE_OGC_WMS(EVServerLayerInfoTypeHelper.ENUM_VALUES[1]),
	SLIE_OGC_WMTS(EVServerLayerInfoTypeHelper.ENUM_VALUES[2]),
	SLIE_OGC_WFS(EVServerLayerInfoTypeHelper.ENUM_VALUES[3]),
	SLIE_EV_WMT(EVServerLayerInfoTypeHelper.ENUM_VALUES[4]),
	SLIE_EV_WMTS(EVServerLayerInfoTypeHelper.ENUM_VALUES[5]),
	SLIE_EV_WMT_EX(EVServerLayerInfoTypeHelper.ENUM_VALUES[6]);
	private int value;
	EVServerLayerInfoType(int i) {
		this.value = i;
	}
	public EVServerLayerInfoType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVServerLayerInfoType toEnum(int retval) {
		if(retval == SLIE_UNKNOWN.value){
			return SLIE_UNKNOWN;
		}
		else if(retval == SLIE_OGC_WMS.value){
			return SLIE_OGC_WMS;
		}
		else if(retval == SLIE_OGC_WMTS.value){
			return SLIE_OGC_WMTS;
		}
		else if(retval == SLIE_OGC_WFS.value){
			return SLIE_OGC_WFS;
		}
		else if(retval == SLIE_EV_WMT.value){
			return SLIE_EV_WMT;
		}
		else if(retval == SLIE_EV_WMTS.value){
			return SLIE_EV_WMTS;
		}
		else if(retval == SLIE_EV_WMT_EX.value){
			return SLIE_EV_WMT_EX;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVServerLayerInfoTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
