package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 简单填充样式
 */
public enum EVSimpleFillStyle implements INativeEnum<EVSimpleFillStyle> {
	SFS_SimpleFillStyle_Solid(EVSimpleFillStyleHelper.ENUM_VALUES[0]),
	SFS_SimpleFillStyle_Dense1(EVSimpleFillStyleHelper.ENUM_VALUES[1]),
	SFS_SimpleFillStyle_Dense2(EVSimpleFillStyleHelper.ENUM_VALUES[2]),
	SFS_SimpleFillStyle_Dense3(EVSimpleFillStyleHelper.ENUM_VALUES[3]),
	SFS_SimpleFillStyle_Dense4(EVSimpleFillStyleHelper.ENUM_VALUES[4]),
	SFS_SimpleFillStyle_Dense5(EVSimpleFillStyleHelper.ENUM_VALUES[5]),
	SFS_SimpleFillStyle_Dense6(EVSimpleFillStyleHelper.ENUM_VALUES[6]),
	SFS_SimpleFillStyle_Dense7(EVSimpleFillStyleHelper.ENUM_VALUES[7]),
	SFS_SimpleFillStyle_Hor(EVSimpleFillStyleHelper.ENUM_VALUES[8]),
	SFS_SimpleFillStyle_Ver(EVSimpleFillStyleHelper.ENUM_VALUES[9]),
	SFS_SimpleFillStyle_Cross(EVSimpleFillStyleHelper.ENUM_VALUES[10]),
	SFS_SimpleFillStyle_BDiag(EVSimpleFillStyleHelper.ENUM_VALUES[11]),
	SFS_SimpleFillStyle_FDiag(EVSimpleFillStyleHelper.ENUM_VALUES[12]),
	SFS_SimpleFillStyle_DiagCross(EVSimpleFillStyleHelper.ENUM_VALUES[13]);
	private int value;
	EVSimpleFillStyle(int i) {
		this.value = i;
	}
	public EVSimpleFillStyle getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSimpleFillStyle toEnum(int retval) {
		if(retval == SFS_SimpleFillStyle_Solid.value){
			return SFS_SimpleFillStyle_Solid;
		}
		else if(retval == SFS_SimpleFillStyle_Dense1.value){
			return SFS_SimpleFillStyle_Dense1;
		}
		else if(retval == SFS_SimpleFillStyle_Dense2.value){
			return SFS_SimpleFillStyle_Dense2;
		}
		else if(retval == SFS_SimpleFillStyle_Dense3.value){
			return SFS_SimpleFillStyle_Dense3;
		}
		else if(retval == SFS_SimpleFillStyle_Dense4.value){
			return SFS_SimpleFillStyle_Dense4;
		}
		else if(retval == SFS_SimpleFillStyle_Dense5.value){
			return SFS_SimpleFillStyle_Dense5;
		}
		else if(retval == SFS_SimpleFillStyle_Dense6.value){
			return SFS_SimpleFillStyle_Dense6;
		}
		else if(retval == SFS_SimpleFillStyle_Dense7.value){
			return SFS_SimpleFillStyle_Dense7;
		}
		else if(retval == SFS_SimpleFillStyle_Hor.value){
			return SFS_SimpleFillStyle_Hor;
		}
		else if(retval == SFS_SimpleFillStyle_Ver.value){
			return SFS_SimpleFillStyle_Ver;
		}
		else if(retval == SFS_SimpleFillStyle_Cross.value){
			return SFS_SimpleFillStyle_Cross;
		}
		else if(retval == SFS_SimpleFillStyle_BDiag.value){
			return SFS_SimpleFillStyle_BDiag;
		}
		else if(retval == SFS_SimpleFillStyle_FDiag.value){
			return SFS_SimpleFillStyle_FDiag;
		}
		else if(retval == SFS_SimpleFillStyle_DiagCross.value){
			return SFS_SimpleFillStyle_DiagCross;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSimpleFillStyleHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
