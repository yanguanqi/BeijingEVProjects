package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 简单样式线
 */
public enum EVSimleLineType implements INativeEnum<EVSimleLineType> {
	SLT_SimpleLineType_Solid(EVSimleLineTypeHelper.ENUM_VALUES[0]),
	SLT_SimpleLineType_Dot(EVSimleLineTypeHelper.ENUM_VALUES[1]),
	SLT_SimpleLineType_Dash(EVSimleLineTypeHelper.ENUM_VALUES[2]),
	SLT_SimpleLineType_DashDot(EVSimleLineTypeHelper.ENUM_VALUES[3]),
	SLT_SimpleLineType_DashDotDot(EVSimleLineTypeHelper.ENUM_VALUES[4]);
	private int value;
	EVSimleLineType(int i) {
		this.value = i;
	}
	public EVSimleLineType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSimleLineType toEnum(int retval) {
		if(retval == SLT_SimpleLineType_Solid.value){
			return SLT_SimpleLineType_Solid;
		}
		else if(retval == SLT_SimpleLineType_Dot.value){
			return SLT_SimpleLineType_Dot;
		}
		else if(retval == SLT_SimpleLineType_Dash.value){
			return SLT_SimpleLineType_Dash;
		}
		else if(retval == SLT_SimpleLineType_DashDot.value){
			return SLT_SimpleLineType_DashDot;
		}
		else if(retval == SLT_SimpleLineType_DashDotDot.value){
			return SLT_SimpleLineType_DashDotDot;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSimleLineTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
