package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 矢量瓦片
 */
public enum EVTileFormatType implements INativeEnum<EVTileFormatType> {
	EV_TileFormatType_Unknown(EVTileFormatTypeHelper.ENUM_VALUES[0]),
	EV_TileFormatType_JPG(EVTileFormatTypeHelper.ENUM_VALUES[1]),
	EV_TileFormatType_EVG(EVTileFormatTypeHelper.ENUM_VALUES[2]),
	EV_TileFormatType_BMP_7Z(EVTileFormatTypeHelper.ENUM_VALUES[3]),
	EV_TileFormatType_EVV(EVTileFormatTypeHelper.ENUM_VALUES[4]),
	EV_TileFormatType_EVV_7Z(EVTileFormatTypeHelper.ENUM_VALUES[5]),
	EV_TileFormatType_PNG(EVTileFormatTypeHelper.ENUM_VALUES[6]),
	EV_TileFormatType_EVP(EVTileFormatTypeHelper.ENUM_VALUES[7]),
	EV_TileFormatType_EVP_7Z(EVTileFormatTypeHelper.ENUM_VALUES[8]),
	EV_TileFormatType_BIL(EVTileFormatTypeHelper.ENUM_VALUES[9]),
	EV_TileFormatType_BIL_7Z(EVTileFormatTypeHelper.ENUM_VALUES[10]);
	private int value;
	EVTileFormatType(int i) {
		this.value = i;
	}
	public EVTileFormatType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTileFormatType toEnum(int retval) {
		if(retval == EV_TileFormatType_Unknown.value){
			return EV_TileFormatType_Unknown;
		}
		else if(retval == EV_TileFormatType_JPG.value){
			return EV_TileFormatType_JPG;
		}
		else if(retval == EV_TileFormatType_EVG.value){
			return EV_TileFormatType_EVG;
		}
		else if(retval == EV_TileFormatType_BMP_7Z.value){
			return EV_TileFormatType_BMP_7Z;
		}
		else if(retval == EV_TileFormatType_EVV.value){
			return EV_TileFormatType_EVV;
		}
		else if(retval == EV_TileFormatType_EVV_7Z.value){
			return EV_TileFormatType_EVV_7Z;
		}
		else if(retval == EV_TileFormatType_PNG.value){
			return EV_TileFormatType_PNG;
		}
		else if(retval == EV_TileFormatType_EVP.value){
			return EV_TileFormatType_EVP;
		}
		else if(retval == EV_TileFormatType_EVP_7Z.value){
			return EV_TileFormatType_EVP_7Z;
		}
		else if(retval == EV_TileFormatType_BIL.value){
			return EV_TileFormatType_BIL;
		}
		else if(retval == EV_TileFormatType_BIL_7Z.value){
			return EV_TileFormatType_BIL_7Z;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTileFormatTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
