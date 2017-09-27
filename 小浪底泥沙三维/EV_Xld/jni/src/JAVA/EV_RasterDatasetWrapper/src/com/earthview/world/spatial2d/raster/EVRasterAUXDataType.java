package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 波段统计信息类型枚举
 */
public enum EVRasterAUXDataType implements INativeEnum<EVRasterAUXDataType> {
	AUX_BandHistogram(EVRasterAUXDataTypeHelper.ENUM_VALUES[0]),
	AUX_RasterHistogram(EVRasterAUXDataTypeHelper.ENUM_VALUES[1]),
	AUX_BandStatisticsInfo(EVRasterAUXDataTypeHelper.ENUM_VALUES[2]),
	AUX_ColorTable(EVRasterAUXDataTypeHelper.ENUM_VALUES[3]),
	AUX_RasterAttributeTable(EVRasterAUXDataTypeHelper.ENUM_VALUES[4]),
	AUX_APPROXBandStatisticsInfo(EVRasterAUXDataTypeHelper.ENUM_VALUES[5]),
	AUX_NoDataValue(EVRasterAUXDataTypeHelper.ENUM_VALUES[6]);
	private int value;
	EVRasterAUXDataType(int i) {
		this.value = i;
	}
	public EVRasterAUXDataType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVRasterAUXDataType toEnum(int retval) {
		if(retval == AUX_BandHistogram.value){
			return AUX_BandHistogram;
		}
		else if(retval == AUX_RasterHistogram.value){
			return AUX_RasterHistogram;
		}
		else if(retval == AUX_BandStatisticsInfo.value){
			return AUX_BandStatisticsInfo;
		}
		else if(retval == AUX_ColorTable.value){
			return AUX_ColorTable;
		}
		else if(retval == AUX_RasterAttributeTable.value){
			return AUX_RasterAttributeTable;
		}
		else if(retval == AUX_APPROXBandStatisticsInfo.value){
			return AUX_APPROXBandStatisticsInfo;
		}
		else if(retval == AUX_NoDataValue.value){
			return AUX_NoDataValue;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVRasterAUXDataTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
