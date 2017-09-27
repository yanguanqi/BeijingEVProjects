package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView::World::Spatial::Utility::EVDatumType标识大地水准面模型一般与椭球体是一一对应的
 */
public enum EVDatumType implements INativeEnum<EVDatumType> {
	EV_UNKNOWND(EVDatumTypeHelper.ENUM_VALUES[0]),
	EV_BEIJING54D(EVDatumTypeHelper.ENUM_VALUES[1]),
	EV_XIAN80D(EVDatumTypeHelper.ENUM_VALUES[2]),
	EV_WGS84D(EVDatumTypeHelper.ENUM_VALUES[3]),
	EV_CGCS2000D(EVDatumTypeHelper.ENUM_VALUES[4]),
	EV_WGS72D(EVDatumTypeHelper.ENUM_VALUES[5]),
	EV_NSWC9Z2D(EVDatumTypeHelper.ENUM_VALUES[6]);
	private int value;
	EVDatumType(int i) {
		this.value = i;
	}
	public EVDatumType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVDatumType toEnum(int retval) {
		if(retval == EV_UNKNOWND.value){
			return EV_UNKNOWND;
		}
		else if(retval == EV_BEIJING54D.value){
			return EV_BEIJING54D;
		}
		else if(retval == EV_XIAN80D.value){
			return EV_XIAN80D;
		}
		else if(retval == EV_WGS84D.value){
			return EV_WGS84D;
		}
		else if(retval == EV_CGCS2000D.value){
			return EV_CGCS2000D;
		}
		else if(retval == EV_WGS72D.value){
			return EV_WGS72D;
		}
		else if(retval == EV_NSWC9Z2D.value){
			return EV_NSWC9Z2D;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVDatumTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
