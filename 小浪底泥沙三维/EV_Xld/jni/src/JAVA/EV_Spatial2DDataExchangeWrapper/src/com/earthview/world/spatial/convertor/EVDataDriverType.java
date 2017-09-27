package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据交换驱动类型
 */
public enum EVDataDriverType implements INativeEnum<EVDataDriverType> {
	DDT_Unknown(EVDataDriverTypeHelper.ENUM_VALUES[0]),
	DDT_EarthView(EVDataDriverTypeHelper.ENUM_VALUES[1]),
	DDT_EarthView2(EVDataDriverTypeHelper.ENUM_VALUES[2]),
	DDT_Shapefile(EVDataDriverTypeHelper.ENUM_VALUES[3]),
	DDT_MapInfo(EVDataDriverTypeHelper.ENUM_VALUES[4]),
	DDT_FileRaster(EVDataDriverTypeHelper.ENUM_VALUES[5]),
	DDT_DBRaster(EVDataDriverTypeHelper.ENUM_VALUES[6]);
	private int value;
	EVDataDriverType(int i) {
		this.value = i;
	}
	public EVDataDriverType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVDataDriverType toEnum(int retval) {
		if(retval == DDT_Unknown.value){
			return DDT_Unknown;
		}
		else if(retval == DDT_EarthView.value){
			return DDT_EarthView;
		}
		else if(retval == DDT_EarthView2.value){
			return DDT_EarthView2;
		}
		else if(retval == DDT_Shapefile.value){
			return DDT_Shapefile;
		}
		else if(retval == DDT_MapInfo.value){
			return DDT_MapInfo;
		}
		else if(retval == DDT_FileRaster.value){
			return DDT_FileRaster;
		}
		else if(retval == DDT_DBRaster.value){
			return DDT_DBRaster;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVDataDriverTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
