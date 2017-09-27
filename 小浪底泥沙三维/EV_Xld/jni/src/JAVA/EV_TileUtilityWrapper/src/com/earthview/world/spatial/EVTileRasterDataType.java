package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * BIL的7z压缩格式
 */
public enum EVTileRasterDataType implements INativeEnum<EVTileRasterDataType> {
	EV_TileDataType_Unknown(EVTileRasterDataTypeHelper.ENUM_VALUES[0]),
	EV_TileDataType_Image_Multi(EVTileRasterDataTypeHelper.ENUM_VALUES[1]),
	EV_TileDataType_Image_Single(EVTileRasterDataTypeHelper.ENUM_VALUES[2]),
	EV_TileDataType_DEM_int32(EVTileRasterDataTypeHelper.ENUM_VALUES[3]),
	EV_TileDataType_DEM_Float(EVTileRasterDataTypeHelper.ENUM_VALUES[4]),
	EV_TileDataType_DEM_int8(EVTileRasterDataTypeHelper.ENUM_VALUES[5]),
	EV_TileDataType_DEM_int16(EVTileRasterDataTypeHelper.ENUM_VALUES[6]),
	EV_TileDataType_DEM_uint32(EVTileRasterDataTypeHelper.ENUM_VALUES[7]),
	EV_TileDataType_DEM_uint16(EVTileRasterDataTypeHelper.ENUM_VALUES[8]);
	private int value;
	EVTileRasterDataType(int i) {
		this.value = i;
	}
	public EVTileRasterDataType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTileRasterDataType toEnum(int retval) {
		if(retval == EV_TileDataType_Unknown.value){
			return EV_TileDataType_Unknown;
		}
		else if(retval == EV_TileDataType_Image_Multi.value){
			return EV_TileDataType_Image_Multi;
		}
		else if(retval == EV_TileDataType_Image_Single.value){
			return EV_TileDataType_Image_Single;
		}
		else if(retval == EV_TileDataType_DEM_int32.value){
			return EV_TileDataType_DEM_int32;
		}
		else if(retval == EV_TileDataType_DEM_Float.value){
			return EV_TileDataType_DEM_Float;
		}
		else if(retval == EV_TileDataType_DEM_int8.value){
			return EV_TileDataType_DEM_int8;
		}
		else if(retval == EV_TileDataType_DEM_int16.value){
			return EV_TileDataType_DEM_int16;
		}
		else if(retval == EV_TileDataType_DEM_uint32.value){
			return EV_TileDataType_DEM_uint32;
		}
		else if(retval == EV_TileDataType_DEM_uint16.value){
			return EV_TileDataType_DEM_uint16;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTileRasterDataTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
