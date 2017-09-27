package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///米
public enum AreaUnit implements INativeEnum<AreaUnit> {
	AU_AutoSquareMeterToSquareKilometer(AreaUnitHelper.ENUM_VALUES[0]),
	AU_AutoMuToHectare(AreaUnitHelper.ENUM_VALUES[1]),
	AU_SquareMeter(AreaUnitHelper.ENUM_VALUES[2]),
	AU_SquareKilometer(AreaUnitHelper.ENUM_VALUES[3]),
	AU_Mu(AreaUnitHelper.ENUM_VALUES[4]),
	AU_Hectare(AreaUnitHelper.ENUM_VALUES[5]);
	private int value;
	AreaUnit(int i) {
		this.value = i;
	}
	public AreaUnit getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final AreaUnit toEnum(int retval) {
		if(retval == AU_AutoSquareMeterToSquareKilometer.value){
			return AU_AutoSquareMeterToSquareKilometer;
		}
		else if(retval == AU_AutoMuToHectare.value){
			return AU_AutoMuToHectare;
		}
		else if(retval == AU_SquareMeter.value){
			return AU_SquareMeter;
		}
		else if(retval == AU_SquareKilometer.value){
			return AU_SquareKilometer;
		}
		else if(retval == AU_Mu.value){
			return AU_Mu;
		}
		else if(retval == AU_Hectare.value){
			return AU_Hectare;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class AreaUnitHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
