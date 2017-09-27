package com.earthview.world.spatial2d.spatialindex;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

////////////////////////////////////////////////////////////////////
//storageType
///////////////////////////////////////////////////////////////////
public enum DRIVERTYPE implements INativeEnum<DRIVERTYPE> {
	STRG_BinaryFile(DRIVERTYPEHelper.ENUM_VALUES[0]),
	STRG_DBTable(DRIVERTYPEHelper.ENUM_VALUES[1]),
	STRG_Unkown(DRIVERTYPEHelper.ENUM_VALUES[2]);
	private int value;
	DRIVERTYPE(int i) {
		this.value = i;
	}
	public DRIVERTYPE getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final DRIVERTYPE toEnum(int retval) {
		if(retval == STRG_BinaryFile.value){
			return STRG_BinaryFile;
		}
		else if(retval == STRG_DBTable.value){
			return STRG_DBTable;
		}
		else if(retval == STRG_Unkown.value){
			return STRG_Unkown;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class DRIVERTYPEHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
