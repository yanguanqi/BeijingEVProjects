package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 瓦片名格式
 */
public enum EVTileNameFormat implements INativeEnum<EVTileNameFormat> {
	TNF_UNKNOWN(EVTileNameFormatHelper.ENUM_VALUES[0]),
	TNF_DECIMAL(EVTileNameFormatHelper.ENUM_VALUES[1]),
	TNF_HEX(EVTileNameFormatHelper.ENUM_VALUES[2]);
	private int value;
	EVTileNameFormat(int i) {
		this.value = i;
	}
	public EVTileNameFormat getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTileNameFormat toEnum(int retval) {
		if(retval == TNF_UNKNOWN.value){
			return TNF_UNKNOWN;
		}
		else if(retval == TNF_DECIMAL.value){
			return TNF_DECIMAL;
		}
		else if(retval == TNF_HEX.value){
			return TNF_HEX;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTileNameFormatHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
