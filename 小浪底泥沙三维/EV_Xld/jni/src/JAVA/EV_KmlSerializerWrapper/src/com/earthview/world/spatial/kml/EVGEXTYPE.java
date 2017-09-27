package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVGEXTYPE implements INativeEnum<EVGEXTYPE> {
	GXT_POINT(EVGEXTYPEHelper.ENUM_VALUES[0]),
	GXT_LINE(EVGEXTYPEHelper.ENUM_VALUES[1]),
	GXT_POLYGON(EVGEXTYPEHelper.ENUM_VALUES[2]),
	GXT_SURFACEPOLYGON(EVGEXTYPEHelper.ENUM_VALUES[3]),
	GXT_GROUNDPOLYGON(EVGEXTYPEHelper.ENUM_VALUES[4]),
	GXT_IMAGEOVERLAYER(EVGEXTYPEHelper.ENUM_VALUES[5]),
	GXT_MODEL(EVGEXTYPEHelper.ENUM_VALUES[6]),
	GXT_PHOTOLAYER(EVGEXTYPEHelper.ENUM_VALUES[7]),
	GXT_TOUR(EVGEXTYPEHelper.ENUM_VALUES[8]),
	GXT_CUBE(EVGEXTYPEHelper.ENUM_VALUES[9]),
	GXT_CONE(EVGEXTYPEHelper.ENUM_VALUES[10]),
	GXT_HALFSPHERE(EVGEXTYPEHelper.ENUM_VALUES[11]),
	GXT_360(EVGEXTYPEHelper.ENUM_VALUES[12]),
	GXT_ARROW(EVGEXTYPEHelper.ENUM_VALUES[13]),
	GXT_SCREENOVERLAYER(EVGEXTYPEHelper.ENUM_VALUES[14]),
	GXT_MULTIGEOMETRY(EVGEXTYPEHelper.ENUM_VALUES[15]),
	GXT_UNKNOWN(EVGEXTYPEHelper.ENUM_VALUES[16]);
	private int value;
	EVGEXTYPE(int i) {
		this.value = i;
	}
	public EVGEXTYPE getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVGEXTYPE toEnum(int retval) {
		if(retval == GXT_POINT.value){
			return GXT_POINT;
		}
		else if(retval == GXT_LINE.value){
			return GXT_LINE;
		}
		else if(retval == GXT_POLYGON.value){
			return GXT_POLYGON;
		}
		else if(retval == GXT_SURFACEPOLYGON.value){
			return GXT_SURFACEPOLYGON;
		}
		else if(retval == GXT_GROUNDPOLYGON.value){
			return GXT_GROUNDPOLYGON;
		}
		else if(retval == GXT_IMAGEOVERLAYER.value){
			return GXT_IMAGEOVERLAYER;
		}
		else if(retval == GXT_MODEL.value){
			return GXT_MODEL;
		}
		else if(retval == GXT_PHOTOLAYER.value){
			return GXT_PHOTOLAYER;
		}
		else if(retval == GXT_TOUR.value){
			return GXT_TOUR;
		}
		else if(retval == GXT_CUBE.value){
			return GXT_CUBE;
		}
		else if(retval == GXT_CONE.value){
			return GXT_CONE;
		}
		else if(retval == GXT_HALFSPHERE.value){
			return GXT_HALFSPHERE;
		}
		else if(retval == GXT_360.value){
			return GXT_360;
		}
		else if(retval == GXT_ARROW.value){
			return GXT_ARROW;
		}
		else if(retval == GXT_SCREENOVERLAYER.value){
			return GXT_SCREENOVERLAYER;
		}
		else if(retval == GXT_MULTIGEOMETRY.value){
			return GXT_MULTIGEOMETRY;
		}
		else if(retval == GXT_UNKNOWN.value){
			return GXT_UNKNOWN;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVGEXTYPEHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
