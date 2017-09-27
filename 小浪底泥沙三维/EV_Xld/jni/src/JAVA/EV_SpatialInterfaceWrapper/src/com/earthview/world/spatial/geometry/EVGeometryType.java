package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 几何体类型枚举
 */
public enum EVGeometryType implements INativeEnum<EVGeometryType> {
	GT_UNKNOWN(EVGeometryTypeHelper.ENUM_VALUES[0]),
	GT_POINT(EVGeometryTypeHelper.ENUM_VALUES[1]),
	GT_POLYLINE(EVGeometryTypeHelper.ENUM_VALUES[2]),
	GT_POLYGON(EVGeometryTypeHelper.ENUM_VALUES[3]),
	GT_MULTIPOINT(EVGeometryTypeHelper.ENUM_VALUES[4]),
	GT_CURVEPATH(EVGeometryTypeHelper.ENUM_VALUES[5]),
	GT_CURVERING(EVGeometryTypeHelper.ENUM_VALUES[6]),
	GT_CIRCLEARC(EVGeometryTypeHelper.ENUM_VALUES[7]),
	GT_ELLIPTICARC(EVGeometryTypeHelper.ENUM_VALUES[8]),
	GT_CIRCLE(EVGeometryTypeHelper.ENUM_VALUES[9]),
	GT_ELLIPSE(EVGeometryTypeHelper.ENUM_VALUES[10]),
	GT_TRIANGLE(EVGeometryTypeHelper.ENUM_VALUES[11]),
	GT_RECTANGLE(EVGeometryTypeHelper.ENUM_VALUES[12]),
	GT_CONE(EVGeometryTypeHelper.ENUM_VALUES[13]),
	GT_BEZIERCURVE(EVGeometryTypeHelper.ENUM_VALUES[14]),
	GT_BEZIERSURFACE(EVGeometryTypeHelper.ENUM_VALUES[15]),
	GT_TRIANGLESTRIP(EVGeometryTypeHelper.ENUM_VALUES[16]),
	GT_TRIANGLEFAN(EVGeometryTypeHelper.ENUM_VALUES[17]),
	GT_BOX(EVGeometryTypeHelper.ENUM_VALUES[18]),
	GT_CYLINDER(EVGeometryTypeHelper.ENUM_VALUES[19]),
	GT_GEOMETRYCOLLECTION(EVGeometryTypeHelper.ENUM_VALUES[20]),
	GT_LINE(EVGeometryTypeHelper.ENUM_VALUES[21]),
	GT_SPHERE(EVGeometryTypeHelper.ENUM_VALUES[22]),
	GT_ELLIPSESPHERE(EVGeometryTypeHelper.ENUM_VALUES[23]),
	GT_LINESTRING(EVGeometryTypeHelper.ENUM_VALUES[24]),
	GT_CIRCLERING(EVGeometryTypeHelper.ENUM_VALUES[25]),
	GT_CIRCLECHORDRING(EVGeometryTypeHelper.ENUM_VALUES[26]),
	GT_CIRCLESECTORRING(EVGeometryTypeHelper.ENUM_VALUES[27]),
	GT_ELLIPTICRING(EVGeometryTypeHelper.ENUM_VALUES[28]),
	GT_ELLIPTICCHORDRING(EVGeometryTypeHelper.ENUM_VALUES[29]),
	GT_ELLIPTICSECTORRING(EVGeometryTypeHelper.ENUM_VALUES[30]),
	GT_RECTANGLERING(EVGeometryTypeHelper.ENUM_VALUES[31]),
	GT_TRIANGLERING(EVGeometryTypeHelper.ENUM_VALUES[32]),
	GT_CIRCLESECTOR(EVGeometryTypeHelper.ENUM_VALUES[33]),
	GT_CIRCLECHORD(EVGeometryTypeHelper.ENUM_VALUES[34]),
	GT_ELLIPTICSECTOR(EVGeometryTypeHelper.ENUM_VALUES[35]),
	GT_ELLIPTICCHORD(EVGeometryTypeHelper.ENUM_VALUES[36]),
	GT_ENTITY(EVGeometryTypeHelper.ENUM_VALUES[37]),
	GT_ENTITY_TEMPL(EVGeometryTypeHelper.ENUM_VALUES[38]),
	GT_EFFECT(EVGeometryTypeHelper.ENUM_VALUES[39]);
	private int value;
	EVGeometryType(int i) {
		this.value = i;
	}
	public EVGeometryType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVGeometryType toEnum(int retval) {
		if(retval == GT_UNKNOWN.value){
			return GT_UNKNOWN;
		}
		else if(retval == GT_POINT.value){
			return GT_POINT;
		}
		else if(retval == GT_POLYLINE.value){
			return GT_POLYLINE;
		}
		else if(retval == GT_POLYGON.value){
			return GT_POLYGON;
		}
		else if(retval == GT_MULTIPOINT.value){
			return GT_MULTIPOINT;
		}
		else if(retval == GT_CURVEPATH.value){
			return GT_CURVEPATH;
		}
		else if(retval == GT_CURVERING.value){
			return GT_CURVERING;
		}
		else if(retval == GT_CIRCLEARC.value){
			return GT_CIRCLEARC;
		}
		else if(retval == GT_ELLIPTICARC.value){
			return GT_ELLIPTICARC;
		}
		else if(retval == GT_CIRCLE.value){
			return GT_CIRCLE;
		}
		else if(retval == GT_ELLIPSE.value){
			return GT_ELLIPSE;
		}
		else if(retval == GT_TRIANGLE.value){
			return GT_TRIANGLE;
		}
		else if(retval == GT_RECTANGLE.value){
			return GT_RECTANGLE;
		}
		else if(retval == GT_CONE.value){
			return GT_CONE;
		}
		else if(retval == GT_BEZIERCURVE.value){
			return GT_BEZIERCURVE;
		}
		else if(retval == GT_BEZIERSURFACE.value){
			return GT_BEZIERSURFACE;
		}
		else if(retval == GT_TRIANGLESTRIP.value){
			return GT_TRIANGLESTRIP;
		}
		else if(retval == GT_TRIANGLEFAN.value){
			return GT_TRIANGLEFAN;
		}
		else if(retval == GT_BOX.value){
			return GT_BOX;
		}
		else if(retval == GT_CYLINDER.value){
			return GT_CYLINDER;
		}
		else if(retval == GT_GEOMETRYCOLLECTION.value){
			return GT_GEOMETRYCOLLECTION;
		}
		else if(retval == GT_LINE.value){
			return GT_LINE;
		}
		else if(retval == GT_SPHERE.value){
			return GT_SPHERE;
		}
		else if(retval == GT_ELLIPSESPHERE.value){
			return GT_ELLIPSESPHERE;
		}
		else if(retval == GT_LINESTRING.value){
			return GT_LINESTRING;
		}
		else if(retval == GT_CIRCLERING.value){
			return GT_CIRCLERING;
		}
		else if(retval == GT_CIRCLECHORDRING.value){
			return GT_CIRCLECHORDRING;
		}
		else if(retval == GT_CIRCLESECTORRING.value){
			return GT_CIRCLESECTORRING;
		}
		else if(retval == GT_ELLIPTICRING.value){
			return GT_ELLIPTICRING;
		}
		else if(retval == GT_ELLIPTICCHORDRING.value){
			return GT_ELLIPTICCHORDRING;
		}
		else if(retval == GT_ELLIPTICSECTORRING.value){
			return GT_ELLIPTICSECTORRING;
		}
		else if(retval == GT_RECTANGLERING.value){
			return GT_RECTANGLERING;
		}
		else if(retval == GT_TRIANGLERING.value){
			return GT_TRIANGLERING;
		}
		else if(retval == GT_CIRCLESECTOR.value){
			return GT_CIRCLESECTOR;
		}
		else if(retval == GT_CIRCLECHORD.value){
			return GT_CIRCLECHORD;
		}
		else if(retval == GT_ELLIPTICSECTOR.value){
			return GT_ELLIPTICSECTOR;
		}
		else if(retval == GT_ELLIPTICCHORD.value){
			return GT_ELLIPTICCHORD;
		}
		else if(retval == GT_ENTITY.value){
			return GT_ENTITY;
		}
		else if(retval == GT_ENTITY_TEMPL.value){
			return GT_ENTITY_TEMPL;
		}
		else if(retval == GT_EFFECT.value){
			return GT_EFFECT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVGeometryTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
