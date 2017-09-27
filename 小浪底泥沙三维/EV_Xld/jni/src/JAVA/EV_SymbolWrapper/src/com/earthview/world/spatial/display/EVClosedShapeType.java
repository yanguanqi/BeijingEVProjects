package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///闭合形状
public enum EVClosedShapeType implements INativeEnum<EVClosedShapeType> {
	CST_None(EVClosedShapeTypeHelper.ENUM_VALUES[0]),
	CST_Line(EVClosedShapeTypeHelper.ENUM_VALUES[1]),
	CST_Arc(EVClosedShapeTypeHelper.ENUM_VALUES[2]);
	private int value;
	EVClosedShapeType(int i) {
		this.value = i;
	}
	public EVClosedShapeType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVClosedShapeType toEnum(int retval) {
		if(retval == CST_None.value){
			return CST_None;
		}
		else if(retval == CST_Line.value){
			return CST_Line;
		}
		else if(retval == CST_Arc.value){
			return CST_Arc;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVClosedShapeTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
