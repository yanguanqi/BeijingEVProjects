package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///从球进行伸缩变换即可
/// <summary>
/// 矢量图元类型枚举
/// <summary>
public enum DrawingType implements INativeEnum<DrawingType> {
	MovableUnknown(DrawingTypeHelper.ENUM_VALUES[0]),
	MovablePoint(DrawingTypeHelper.ENUM_VALUES[1]),
	MovablePointCollection(DrawingTypeHelper.ENUM_VALUES[2]),
	MovableLine(DrawingTypeHelper.ENUM_VALUES[3]),
	MovablePolyline(DrawingTypeHelper.ENUM_VALUES[4]),
	MovableCurve(DrawingTypeHelper.ENUM_VALUES[5]),
	MovablePolygon(DrawingTypeHelper.ENUM_VALUES[6]),
	MovableSurface(DrawingTypeHelper.ENUM_VALUES[7]),
	MovableEllipse(DrawingTypeHelper.ENUM_VALUES[8]),
	MovableCube(DrawingTypeHelper.ENUM_VALUES[9]),
	MovableCylinder(DrawingTypeHelper.ENUM_VALUES[10]),
	MovableEllipticalCylinder(DrawingTypeHelper.ENUM_VALUES[11]),
	MovableCone(DrawingTypeHelper.ENUM_VALUES[12]),
	MovableSphere(DrawingTypeHelper.ENUM_VALUES[13]),
	MovableHemisphere(DrawingTypeHelper.ENUM_VALUES[14]),
	MovableEllipsoid(DrawingTypeHelper.ENUM_VALUES[15]);
	private int value;
	DrawingType(int i) {
		this.value = i;
	}
	public DrawingType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final DrawingType toEnum(int retval) {
		if(retval == MovableUnknown.value){
			return MovableUnknown;
		}
		else if(retval == MovablePoint.value){
			return MovablePoint;
		}
		else if(retval == MovablePointCollection.value){
			return MovablePointCollection;
		}
		else if(retval == MovableLine.value){
			return MovableLine;
		}
		else if(retval == MovablePolyline.value){
			return MovablePolyline;
		}
		else if(retval == MovableCurve.value){
			return MovableCurve;
		}
		else if(retval == MovablePolygon.value){
			return MovablePolygon;
		}
		else if(retval == MovableSurface.value){
			return MovableSurface;
		}
		else if(retval == MovableEllipse.value){
			return MovableEllipse;
		}
		else if(retval == MovableCube.value){
			return MovableCube;
		}
		else if(retval == MovableCylinder.value){
			return MovableCylinder;
		}
		else if(retval == MovableEllipticalCylinder.value){
			return MovableEllipticalCylinder;
		}
		else if(retval == MovableCone.value){
			return MovableCone;
		}
		else if(retval == MovableSphere.value){
			return MovableSphere;
		}
		else if(retval == MovableHemisphere.value){
			return MovableHemisphere;
		}
		else if(retval == MovableEllipsoid.value){
			return MovableEllipsoid;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class DrawingTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
