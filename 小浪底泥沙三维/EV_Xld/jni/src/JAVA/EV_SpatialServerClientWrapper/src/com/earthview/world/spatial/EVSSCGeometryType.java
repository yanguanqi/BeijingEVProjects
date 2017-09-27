package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的矢量数据几何类型
 */
public enum EVSSCGeometryType implements INativeEnum<EVSSCGeometryType> {
	SSC_GeometryType_Unknown(EVSSCGeometryTypeHelper.ENUM_VALUES[0]),
	SSC_GeometryType_Point(EVSSCGeometryTypeHelper.ENUM_VALUES[1]),
	SSC_GeometryType_Line(EVSSCGeometryTypeHelper.ENUM_VALUES[2]),
	SSC_GeometryType_Ring(EVSSCGeometryTypeHelper.ENUM_VALUES[3]),
	SSC_GeometryType_MultiPoint(EVSSCGeometryTypeHelper.ENUM_VALUES[4]),
	SSC_GeometryType_Polyline(EVSSCGeometryTypeHelper.ENUM_VALUES[5]),
	SSC_GeometryType_Polygon(EVSSCGeometryTypeHelper.ENUM_VALUES[6]),
	SSC_GeometryType_Collection(EVSSCGeometryTypeHelper.ENUM_VALUES[7]);
	private int value;
	EVSSCGeometryType(int i) {
		this.value = i;
	}
	public EVSSCGeometryType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSSCGeometryType toEnum(int retval) {
		if(retval == SSC_GeometryType_Unknown.value){
			return SSC_GeometryType_Unknown;
		}
		else if(retval == SSC_GeometryType_Point.value){
			return SSC_GeometryType_Point;
		}
		else if(retval == SSC_GeometryType_Line.value){
			return SSC_GeometryType_Line;
		}
		else if(retval == SSC_GeometryType_Ring.value){
			return SSC_GeometryType_Ring;
		}
		else if(retval == SSC_GeometryType_MultiPoint.value){
			return SSC_GeometryType_MultiPoint;
		}
		else if(retval == SSC_GeometryType_Polyline.value){
			return SSC_GeometryType_Polyline;
		}
		else if(retval == SSC_GeometryType_Polygon.value){
			return SSC_GeometryType_Polygon;
		}
		else if(retval == SSC_GeometryType_Collection.value){
			return SSC_GeometryType_Collection;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSSCGeometryTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
