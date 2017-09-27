package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVAnchorPoint implements INativeEnum<EVAnchorPoint> {
	TopLeftPoint(EVAnchorPointHelper.ENUM_VALUES[0]),
	TopMidPoint(EVAnchorPointHelper.ENUM_VALUES[1]),
	TopRightPoint(EVAnchorPointHelper.ENUM_VALUES[2]),
	LeftMidPoint(EVAnchorPointHelper.ENUM_VALUES[3]),
	CenterPoint(EVAnchorPointHelper.ENUM_VALUES[4]),
	RightMidPoint(EVAnchorPointHelper.ENUM_VALUES[5]),
	BottomLeftPoint(EVAnchorPointHelper.ENUM_VALUES[6]),
	BottomMidPoint(EVAnchorPointHelper.ENUM_VALUES[7]),
	BottomRightPoint(EVAnchorPointHelper.ENUM_VALUES[8]);
	private int value;
	EVAnchorPoint(int i) {
		this.value = i;
	}
	public EVAnchorPoint getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVAnchorPoint toEnum(int retval) {
		if(retval == TopLeftPoint.value){
			return TopLeftPoint;
		}
		else if(retval == TopMidPoint.value){
			return TopMidPoint;
		}
		else if(retval == TopRightPoint.value){
			return TopRightPoint;
		}
		else if(retval == LeftMidPoint.value){
			return LeftMidPoint;
		}
		else if(retval == CenterPoint.value){
			return CenterPoint;
		}
		else if(retval == RightMidPoint.value){
			return RightMidPoint;
		}
		else if(retval == BottomLeftPoint.value){
			return BottomLeftPoint;
		}
		else if(retval == BottomMidPoint.value){
			return BottomMidPoint;
		}
		else if(retval == BottomRightPoint.value){
			return BottomRightPoint;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVAnchorPointHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
