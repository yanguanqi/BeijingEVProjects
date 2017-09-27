package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的几何对象格式
 */
public enum EVSSCGeometryFormat implements INativeEnum<EVSSCGeometryFormat> {
	SSC_GeometryFomat_WKB(EVSSCGeometryFormatHelper.ENUM_VALUES[0]),
	SSC_GeometryFomat_WKT(EVSSCGeometryFormatHelper.ENUM_VALUES[1]);
	private int value;
	EVSSCGeometryFormat(int i) {
		this.value = i;
	}
	public EVSSCGeometryFormat getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSSCGeometryFormat toEnum(int retval) {
		if(retval == SSC_GeometryFomat_WKB.value){
			return SSC_GeometryFomat_WKB;
		}
		else if(retval == SSC_GeometryFomat_WKT.value){
			return SSC_GeometryFomat_WKT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSSCGeometryFormatHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
