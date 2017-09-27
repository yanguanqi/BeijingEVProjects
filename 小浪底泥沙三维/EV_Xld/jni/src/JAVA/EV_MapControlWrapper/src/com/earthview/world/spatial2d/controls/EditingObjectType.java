package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geometry.*;
import com.earthview.world.core.*;

/**
 * 编辑对象类型枚举
 */
public enum EditingObjectType implements INativeEnum<EditingObjectType> {
	Unknown(EditingObjectTypeHelper.ENUM_VALUES[0]),
	Point(EditingObjectTypeHelper.ENUM_VALUES[1]),
	LineString(EditingObjectTypeHelper.ENUM_VALUES[2]),
	CircleArc(EditingObjectTypeHelper.ENUM_VALUES[3]),
	EllipticArc(EditingObjectTypeHelper.ENUM_VALUES[4]),
	BezierCurve(EditingObjectTypeHelper.ENUM_VALUES[5]),
	Circle(EditingObjectTypeHelper.ENUM_VALUES[6]),
	Ellipse(EditingObjectTypeHelper.ENUM_VALUES[7]),
	RoundRect(EditingObjectTypeHelper.ENUM_VALUES[8]),
	CircleSector(EditingObjectTypeHelper.ENUM_VALUES[9]),
	EllipticSector(EditingObjectTypeHelper.ENUM_VALUES[10]),
	CircleArched(EditingObjectTypeHelper.ENUM_VALUES[11]),
	EllipticArched(EditingObjectTypeHelper.ENUM_VALUES[12]),
	CurvePath(EditingObjectTypeHelper.ENUM_VALUES[13]),
	CurveRing(EditingObjectTypeHelper.ENUM_VALUES[14]),
	LongCircle(EditingObjectTypeHelper.ENUM_VALUES[15]);
	private int value;
	EditingObjectType(int i) {
		this.value = i;
	}
	public EditingObjectType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EditingObjectType toEnum(int retval) {
		if(retval == Unknown.value){
			return Unknown;
		}
		else if(retval == Point.value){
			return Point;
		}
		else if(retval == LineString.value){
			return LineString;
		}
		else if(retval == CircleArc.value){
			return CircleArc;
		}
		else if(retval == EllipticArc.value){
			return EllipticArc;
		}
		else if(retval == BezierCurve.value){
			return BezierCurve;
		}
		else if(retval == Circle.value){
			return Circle;
		}
		else if(retval == Ellipse.value){
			return Ellipse;
		}
		else if(retval == RoundRect.value){
			return RoundRect;
		}
		else if(retval == CircleSector.value){
			return CircleSector;
		}
		else if(retval == EllipticSector.value){
			return EllipticSector;
		}
		else if(retval == CircleArched.value){
			return CircleArched;
		}
		else if(retval == EllipticArched.value){
			return EllipticArched;
		}
		else if(retval == CurvePath.value){
			return CurvePath;
		}
		else if(retval == CurveRing.value){
			return CurveRing;
		}
		else if(retval == LongCircle.value){
			return LongCircle;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EditingObjectTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
