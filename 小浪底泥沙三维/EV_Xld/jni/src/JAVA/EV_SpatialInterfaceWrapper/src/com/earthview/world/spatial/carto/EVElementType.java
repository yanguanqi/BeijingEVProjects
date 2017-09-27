package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVElementType implements INativeEnum<EVElementType> {
	ET_MarkerNorthArrow(EVElementTypeHelper.ENUM_VALUES[0]),
	ET_Legend(EVElementTypeHelper.ENUM_VALUES[1]),
	ET_Scale(EVElementTypeHelper.ENUM_VALUES[2]),
	ET_MapTitle(EVElementTypeHelper.ENUM_VALUES[3]),
	ET_SquareGrid(EVElementTypeHelper.ENUM_VALUES[4]),
	ET_MapFrame(EVElementTypeHelper.ENUM_VALUES[5]),
	ET_TextInsert(EVElementTypeHelper.ENUM_VALUES[6]),
	ET_PictureInsert(EVElementTypeHelper.ENUM_VALUES[7]),
	ET_ScaleText(EVElementTypeHelper.ENUM_VALUES[8]),
	ET_GeometryInsert(EVElementTypeHelper.ENUM_VALUES[9]);
	private int value;
	EVElementType(int i) {
		this.value = i;
	}
	public EVElementType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVElementType toEnum(int retval) {
		if(retval == ET_MarkerNorthArrow.value){
			return ET_MarkerNorthArrow;
		}
		else if(retval == ET_Legend.value){
			return ET_Legend;
		}
		else if(retval == ET_Scale.value){
			return ET_Scale;
		}
		else if(retval == ET_MapTitle.value){
			return ET_MapTitle;
		}
		else if(retval == ET_SquareGrid.value){
			return ET_SquareGrid;
		}
		else if(retval == ET_MapFrame.value){
			return ET_MapFrame;
		}
		else if(retval == ET_TextInsert.value){
			return ET_TextInsert;
		}
		else if(retval == ET_PictureInsert.value){
			return ET_PictureInsert;
		}
		else if(retval == ET_ScaleText.value){
			return ET_ScaleText;
		}
		else if(retval == ET_GeometryInsert.value){
			return ET_GeometryInsert;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVElementTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
