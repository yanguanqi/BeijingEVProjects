package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// <summary>
/// 当绘制二维的点有大小时，采用的缓冲方式
/// <summary>
public enum Point2DBufferType implements INativeEnum<Point2DBufferType> {
	PointBufferQuad(Point2DBufferTypeHelper.ENUM_VALUES[0]),
	PointBufferCircle(Point2DBufferTypeHelper.ENUM_VALUES[1]);
	private int value;
	Point2DBufferType(int i) {
		this.value = i;
	}
	public Point2DBufferType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final Point2DBufferType toEnum(int retval) {
		if(retval == PointBufferQuad.value){
			return PointBufferQuad;
		}
		else if(retval == PointBufferCircle.value){
			return PointBufferCircle;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class Point2DBufferTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
