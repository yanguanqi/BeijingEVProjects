package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVTileDatasetType implements INativeEnum<EVTileDatasetType> {
	EV_TileDatasetType_Unknown(EVTileDatasetTypeHelper.ENUM_VALUES[0]),
	EV_TileDatasetType_Image(EVTileDatasetTypeHelper.ENUM_VALUES[1]),
	EV_TileDatasetType_DEM(EVTileDatasetTypeHelper.ENUM_VALUES[2]),
	EV_TileDatasetType_Vector(EVTileDatasetTypeHelper.ENUM_VALUES[3]);
	private int value;
	EVTileDatasetType(int i) {
		this.value = i;
	}
	public EVTileDatasetType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTileDatasetType toEnum(int retval) {
		if(retval == EV_TileDatasetType_Unknown.value){
			return EV_TileDatasetType_Unknown;
		}
		else if(retval == EV_TileDatasetType_Image.value){
			return EV_TileDatasetType_Image;
		}
		else if(retval == EV_TileDatasetType_DEM.value){
			return EV_TileDatasetType_DEM;
		}
		else if(retval == EV_TileDatasetType_Vector.value){
			return EV_TileDatasetType_Vector;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTileDatasetTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
