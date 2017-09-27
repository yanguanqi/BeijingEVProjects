package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 指北针类型
 */
public enum EVNorthArrowType implements INativeEnum<EVNorthArrowType> {
	NAT_DoubleTriangle(EVNorthArrowTypeHelper.ENUM_VALUES[0]),
	NAT_Prismatic(EVNorthArrowTypeHelper.ENUM_VALUES[1]),
	NAT_FourAngleStar(EVNorthArrowTypeHelper.ENUM_VALUES[2]),
	NAT_EightAngleStar(EVNorthArrowTypeHelper.ENUM_VALUES[3]),
	NAT_SingleArrow_Line(EVNorthArrowTypeHelper.ENUM_VALUES[4]),
	NAT_SingleArrow_Solid(EVNorthArrowTypeHelper.ENUM_VALUES[5]),
	NAT_Fan_Line(EVNorthArrowTypeHelper.ENUM_VALUES[6]),
	NAT_Fan_Solid(EVNorthArrowTypeHelper.ENUM_VALUES[7]),
	NAT_Compass_Line(EVNorthArrowTypeHelper.ENUM_VALUES[8]),
	NAT_Compass_Solid(EVNorthArrowTypeHelper.ENUM_VALUES[9]),
	NAT_FourArrow_Line(EVNorthArrowTypeHelper.ENUM_VALUES[10]),
	NAT_FourArrow_Solid(EVNorthArrowTypeHelper.ENUM_VALUES[11]),
	NAT_LibMarkSymbol(EVNorthArrowTypeHelper.ENUM_VALUES[12]);
	private int value;
	EVNorthArrowType(int i) {
		this.value = i;
	}
	public EVNorthArrowType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVNorthArrowType toEnum(int retval) {
		if(retval == NAT_DoubleTriangle.value){
			return NAT_DoubleTriangle;
		}
		else if(retval == NAT_Prismatic.value){
			return NAT_Prismatic;
		}
		else if(retval == NAT_FourAngleStar.value){
			return NAT_FourAngleStar;
		}
		else if(retval == NAT_EightAngleStar.value){
			return NAT_EightAngleStar;
		}
		else if(retval == NAT_SingleArrow_Line.value){
			return NAT_SingleArrow_Line;
		}
		else if(retval == NAT_SingleArrow_Solid.value){
			return NAT_SingleArrow_Solid;
		}
		else if(retval == NAT_Fan_Line.value){
			return NAT_Fan_Line;
		}
		else if(retval == NAT_Fan_Solid.value){
			return NAT_Fan_Solid;
		}
		else if(retval == NAT_Compass_Line.value){
			return NAT_Compass_Line;
		}
		else if(retval == NAT_Compass_Solid.value){
			return NAT_Compass_Solid;
		}
		else if(retval == NAT_FourArrow_Line.value){
			return NAT_FourArrow_Line;
		}
		else if(retval == NAT_FourArrow_Solid.value){
			return NAT_FourArrow_Solid;
		}
		else if(retval == NAT_LibMarkSymbol.value){
			return NAT_LibMarkSymbol;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVNorthArrowTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
