package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// <summary>
/// 当绘制三维的点有大小时，采用的缓冲方式
/// <summary>
public enum Point3DBufferType implements INativeEnum<Point3DBufferType> {
	PointBufferCube(Point3DBufferTypeHelper.ENUM_VALUES[0]),
	PointBufferSphere(Point3DBufferTypeHelper.ENUM_VALUES[1]);
	private int value;
	Point3DBufferType(int i) {
		this.value = i;
	}
	public Point3DBufferType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final Point3DBufferType toEnum(int retval) {
		if(retval == PointBufferCube.value){
			return PointBufferCube;
		}
		else if(retval == PointBufferSphere.value){
			return PointBufferSphere;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class Point3DBufferTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
