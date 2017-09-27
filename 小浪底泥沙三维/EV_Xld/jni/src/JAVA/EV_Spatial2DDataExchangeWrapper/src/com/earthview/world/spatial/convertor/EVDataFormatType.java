package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据存储格式类型
 */
public enum EVDataFormatType implements INativeEnum<EVDataFormatType> {
	DataFormat_EV_Sqlite(EVDataFormatTypeHelper.ENUM_VALUES[0]),
	DataFormat_EV_Odbc(EVDataFormatTypeHelper.ENUM_VALUES[1]),
	DataFormat_EV_Oracle(EVDataFormatTypeHelper.ENUM_VALUES[2]),
	DataFormat_ESRI_Shp(EVDataFormatTypeHelper.ENUM_VALUES[3]),
	DataFormat_MI_TAB(EVDataFormatTypeHelper.ENUM_VALUES[4]),
	DataFormat_MI_MIF(EVDataFormatTypeHelper.ENUM_VALUES[5]),
	DataFormat_GeoTiff(EVDataFormatTypeHelper.ENUM_VALUES[6]),
	DataFormat_Image(EVDataFormatTypeHelper.ENUM_VALUES[7]);
	private int value;
	EVDataFormatType(int i) {
		this.value = i;
	}
	public EVDataFormatType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVDataFormatType toEnum(int retval) {
		if(retval == DataFormat_EV_Sqlite.value){
			return DataFormat_EV_Sqlite;
		}
		else if(retval == DataFormat_EV_Odbc.value){
			return DataFormat_EV_Odbc;
		}
		else if(retval == DataFormat_EV_Oracle.value){
			return DataFormat_EV_Oracle;
		}
		else if(retval == DataFormat_ESRI_Shp.value){
			return DataFormat_ESRI_Shp;
		}
		else if(retval == DataFormat_MI_TAB.value){
			return DataFormat_MI_TAB;
		}
		else if(retval == DataFormat_MI_MIF.value){
			return DataFormat_MI_MIF;
		}
		else if(retval == DataFormat_GeoTiff.value){
			return DataFormat_GeoTiff;
		}
		else if(retval == DataFormat_Image.value){
			return DataFormat_Image;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVDataFormatTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
