package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * WKB格式的几何体类型
 */
public enum EVWKBGeometryType implements INativeEnum<EVWKBGeometryType> {
	WKBGT_Unknown(EVWKBGeometryTypeHelper.ENUM_VALUES[0]),
	WKBGT_Point(EVWKBGeometryTypeHelper.ENUM_VALUES[1]),
	WKBGT_LineString(EVWKBGeometryTypeHelper.ENUM_VALUES[2]),
	WKBGT_Polygon(EVWKBGeometryTypeHelper.ENUM_VALUES[3]),
	WKBGT_MultiPoint(EVWKBGeometryTypeHelper.ENUM_VALUES[4]),
	WKBGT_MultiLineString(EVWKBGeometryTypeHelper.ENUM_VALUES[5]),
	WKBGT_MultiPolygon(EVWKBGeometryTypeHelper.ENUM_VALUES[6]),
	WKBGT_GeometryCollection(EVWKBGeometryTypeHelper.ENUM_VALUES[7]),
	WKBGT_PointZ(EVWKBGeometryTypeHelper.ENUM_VALUES[8]),
	WKBGT_LineStringZ(EVWKBGeometryTypeHelper.ENUM_VALUES[9]),
	WKBGT_PolygonZ(EVWKBGeometryTypeHelper.ENUM_VALUES[10]),
	WKBGT_MultiPointZ(EVWKBGeometryTypeHelper.ENUM_VALUES[11]),
	WKBGT_MultiLineStringZ(EVWKBGeometryTypeHelper.ENUM_VALUES[12]),
	WKBGT_MultiPolygonZ(EVWKBGeometryTypeHelper.ENUM_VALUES[13]),
	WKBGT_GeometryCollectionZ(EVWKBGeometryTypeHelper.ENUM_VALUES[14]),
	WKBGT_PointM(EVWKBGeometryTypeHelper.ENUM_VALUES[15]),
	WKBGT_LineStringM(EVWKBGeometryTypeHelper.ENUM_VALUES[16]),
	WKBGT_PolygonM(EVWKBGeometryTypeHelper.ENUM_VALUES[17]),
	WKBGT_MultiPointM(EVWKBGeometryTypeHelper.ENUM_VALUES[18]),
	WKBGT_MultiLineStringM(EVWKBGeometryTypeHelper.ENUM_VALUES[19]),
	WKBGT_MultiPolygonM(EVWKBGeometryTypeHelper.ENUM_VALUES[20]),
	WKBGT_GeometryCollectionM(EVWKBGeometryTypeHelper.ENUM_VALUES[21]),
	WKBGT_PointZM(EVWKBGeometryTypeHelper.ENUM_VALUES[22]),
	WKBGT_LineStringZM(EVWKBGeometryTypeHelper.ENUM_VALUES[23]),
	WKBGT_PolygonZM(EVWKBGeometryTypeHelper.ENUM_VALUES[24]),
	WKBGT_MultiPointZM(EVWKBGeometryTypeHelper.ENUM_VALUES[25]),
	WKBGT_MultiLineStringZM(EVWKBGeometryTypeHelper.ENUM_VALUES[26]),
	WKBGT_MultiPolygonZM(EVWKBGeometryTypeHelper.ENUM_VALUES[27]),
	WKBGT_GeometryCollectionZM(EVWKBGeometryTypeHelper.ENUM_VALUES[28]);
	private int value;
	EVWKBGeometryType(int i) {
		this.value = i;
	}
	public EVWKBGeometryType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVWKBGeometryType toEnum(int retval) {
		if(retval == WKBGT_Unknown.value){
			return WKBGT_Unknown;
		}
		else if(retval == WKBGT_Point.value){
			return WKBGT_Point;
		}
		else if(retval == WKBGT_LineString.value){
			return WKBGT_LineString;
		}
		else if(retval == WKBGT_Polygon.value){
			return WKBGT_Polygon;
		}
		else if(retval == WKBGT_MultiPoint.value){
			return WKBGT_MultiPoint;
		}
		else if(retval == WKBGT_MultiLineString.value){
			return WKBGT_MultiLineString;
		}
		else if(retval == WKBGT_MultiPolygon.value){
			return WKBGT_MultiPolygon;
		}
		else if(retval == WKBGT_GeometryCollection.value){
			return WKBGT_GeometryCollection;
		}
		else if(retval == WKBGT_PointZ.value){
			return WKBGT_PointZ;
		}
		else if(retval == WKBGT_LineStringZ.value){
			return WKBGT_LineStringZ;
		}
		else if(retval == WKBGT_PolygonZ.value){
			return WKBGT_PolygonZ;
		}
		else if(retval == WKBGT_MultiPointZ.value){
			return WKBGT_MultiPointZ;
		}
		else if(retval == WKBGT_MultiLineStringZ.value){
			return WKBGT_MultiLineStringZ;
		}
		else if(retval == WKBGT_MultiPolygonZ.value){
			return WKBGT_MultiPolygonZ;
		}
		else if(retval == WKBGT_GeometryCollectionZ.value){
			return WKBGT_GeometryCollectionZ;
		}
		else if(retval == WKBGT_PointM.value){
			return WKBGT_PointM;
		}
		else if(retval == WKBGT_LineStringM.value){
			return WKBGT_LineStringM;
		}
		else if(retval == WKBGT_PolygonM.value){
			return WKBGT_PolygonM;
		}
		else if(retval == WKBGT_MultiPointM.value){
			return WKBGT_MultiPointM;
		}
		else if(retval == WKBGT_MultiLineStringM.value){
			return WKBGT_MultiLineStringM;
		}
		else if(retval == WKBGT_MultiPolygonM.value){
			return WKBGT_MultiPolygonM;
		}
		else if(retval == WKBGT_GeometryCollectionM.value){
			return WKBGT_GeometryCollectionM;
		}
		else if(retval == WKBGT_PointZM.value){
			return WKBGT_PointZM;
		}
		else if(retval == WKBGT_LineStringZM.value){
			return WKBGT_LineStringZM;
		}
		else if(retval == WKBGT_PolygonZM.value){
			return WKBGT_PolygonZM;
		}
		else if(retval == WKBGT_MultiPointZM.value){
			return WKBGT_MultiPointZM;
		}
		else if(retval == WKBGT_MultiLineStringZM.value){
			return WKBGT_MultiLineStringZM;
		}
		else if(retval == WKBGT_MultiPolygonZM.value){
			return WKBGT_MultiPolygonZM;
		}
		else if(retval == WKBGT_GeometryCollectionZM.value){
			return WKBGT_GeometryCollectionZM;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVWKBGeometryTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
