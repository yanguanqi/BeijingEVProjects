package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVPolygonType implements INativeEnum<EVPolygonType> {
	PT_COMPOUND(EVPolygonTypeHelper.ENUM_VALUES[0]),
	PT_CIRCLE(EVPolygonTypeHelper.ENUM_VALUES[1]),
	PT_CIRCLE_CHORD(EVPolygonTypeHelper.ENUM_VALUES[2]),
	PT_CIRCLE_SECTOR(EVPolygonTypeHelper.ENUM_VALUES[3]),
	PT_ELLIPSE(EVPolygonTypeHelper.ENUM_VALUES[4]),
	PT_ELLIPTIC_CHORD(EVPolygonTypeHelper.ENUM_VALUES[5]),
	PT_ELLIPTIC_SECTOR(EVPolygonTypeHelper.ENUM_VALUES[6]),
	PT_TRIANGLE(EVPolygonTypeHelper.ENUM_VALUES[7]),
	PT_RECTANGLE(EVPolygonTypeHelper.ENUM_VALUES[8]),
	PT_EQUILATERAL(EVPolygonTypeHelper.ENUM_VALUES[9]);
	private int value;
	EVPolygonType(int i) {
		this.value = i;
	}
	public EVPolygonType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVPolygonType toEnum(int retval) {
		if(retval == PT_COMPOUND.value){
			return PT_COMPOUND;
		}
		else if(retval == PT_CIRCLE.value){
			return PT_CIRCLE;
		}
		else if(retval == PT_CIRCLE_CHORD.value){
			return PT_CIRCLE_CHORD;
		}
		else if(retval == PT_CIRCLE_SECTOR.value){
			return PT_CIRCLE_SECTOR;
		}
		else if(retval == PT_ELLIPSE.value){
			return PT_ELLIPSE;
		}
		else if(retval == PT_ELLIPTIC_CHORD.value){
			return PT_ELLIPTIC_CHORD;
		}
		else if(retval == PT_ELLIPTIC_SECTOR.value){
			return PT_ELLIPTIC_SECTOR;
		}
		else if(retval == PT_TRIANGLE.value){
			return PT_TRIANGLE;
		}
		else if(retval == PT_RECTANGLE.value){
			return PT_RECTANGLE;
		}
		else if(retval == PT_EQUILATERAL.value){
			return PT_EQUILATERAL;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVPolygonTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
