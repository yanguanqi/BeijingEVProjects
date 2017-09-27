package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///截面形状
public enum EVTransectShapeType implements INativeEnum<EVTransectShapeType> {
	TST_Unknown(EVTransectShapeTypeHelper.ENUM_VALUES[0]),
	TST_Point(EVTransectShapeTypeHelper.ENUM_VALUES[1]),
	TST_Wall(EVTransectShapeTypeHelper.ENUM_VALUES[2]),
	TST_Triangle(EVTransectShapeTypeHelper.ENUM_VALUES[3]),
	TST_Rectangle(EVTransectShapeTypeHelper.ENUM_VALUES[4]),
	TST_Ellipse(EVTransectShapeTypeHelper.ENUM_VALUES[5]),
	TST_Trapezia(EVTransectShapeTypeHelper.ENUM_VALUES[6]),
	TST_Channel(EVTransectShapeTypeHelper.ENUM_VALUES[7]),
	TST_Tunnel(EVTransectShapeTypeHelper.ENUM_VALUES[8]),
	TST_Dome(EVTransectShapeTypeHelper.ENUM_VALUES[9]),
	TST_WideLine(EVTransectShapeTypeHelper.ENUM_VALUES[10]),
	TST_Road(EVTransectShapeTypeHelper.ENUM_VALUES[11]);
	private int value;
	EVTransectShapeType(int i) {
		this.value = i;
	}
	public EVTransectShapeType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTransectShapeType toEnum(int retval) {
		if(retval == TST_Unknown.value){
			return TST_Unknown;
		}
		else if(retval == TST_Point.value){
			return TST_Point;
		}
		else if(retval == TST_Wall.value){
			return TST_Wall;
		}
		else if(retval == TST_Triangle.value){
			return TST_Triangle;
		}
		else if(retval == TST_Rectangle.value){
			return TST_Rectangle;
		}
		else if(retval == TST_Ellipse.value){
			return TST_Ellipse;
		}
		else if(retval == TST_Trapezia.value){
			return TST_Trapezia;
		}
		else if(retval == TST_Channel.value){
			return TST_Channel;
		}
		else if(retval == TST_Tunnel.value){
			return TST_Tunnel;
		}
		else if(retval == TST_Dome.value){
			return TST_Dome;
		}
		else if(retval == TST_WideLine.value){
			return TST_WideLine;
		}
		else if(retval == TST_Road.value){
			return TST_Road;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTransectShapeTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
