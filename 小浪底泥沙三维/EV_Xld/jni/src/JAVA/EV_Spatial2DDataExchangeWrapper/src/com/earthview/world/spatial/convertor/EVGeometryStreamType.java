package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 中间数据流存储几何信息的格式
 */
public enum EVGeometryStreamType implements INativeEnum<EVGeometryStreamType> {
	EV_GST_UNKNOWN(EVGeometryStreamTypeHelper.ENUM_VALUES[0]),
	EV_GST_WKB(EVGeometryStreamTypeHelper.ENUM_VALUES[1]),
	EV_GST_WKT(EVGeometryStreamTypeHelper.ENUM_VALUES[2]),
	EV_GST_SHAPE(EVGeometryStreamTypeHelper.ENUM_VALUES[3]),
	EV_GST_EVBUF(EVGeometryStreamTypeHelper.ENUM_VALUES[4]),
	EV_GST_GeomPtr(EVGeometryStreamTypeHelper.ENUM_VALUES[5]);
	private int value;
	EVGeometryStreamType(int i) {
		this.value = i;
	}
	public EVGeometryStreamType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVGeometryStreamType toEnum(int retval) {
		if(retval == EV_GST_UNKNOWN.value){
			return EV_GST_UNKNOWN;
		}
		else if(retval == EV_GST_WKB.value){
			return EV_GST_WKB;
		}
		else if(retval == EV_GST_WKT.value){
			return EV_GST_WKT;
		}
		else if(retval == EV_GST_SHAPE.value){
			return EV_GST_SHAPE;
		}
		else if(retval == EV_GST_EVBUF.value){
			return EV_GST_EVBUF;
		}
		else if(retval == EV_GST_GeomPtr.value){
			return EV_GST_GeomPtr;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVGeometryStreamTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
