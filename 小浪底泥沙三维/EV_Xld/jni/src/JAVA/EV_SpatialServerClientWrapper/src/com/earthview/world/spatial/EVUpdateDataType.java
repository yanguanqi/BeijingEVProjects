package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * /更新数据类型/
 */
public enum EVUpdateDataType implements INativeEnum<EVUpdateDataType> {
	UDT_Data_UnKnow(EVUpdateDataTypeHelper.ENUM_VALUES[0]),
	UDT_Data_ImageTile(EVUpdateDataTypeHelper.ENUM_VALUES[1]),
	UDT_Data_DemTile(EVUpdateDataTypeHelper.ENUM_VALUES[2]),
	UDT_Data_MapTile(EVUpdateDataTypeHelper.ENUM_VALUES[3]),
	UDT_Data_VectorTile(EVUpdateDataTypeHelper.ENUM_VALUES[4]),
	UDT_Data_VectorTile_UniqueTheme(EVUpdateDataTypeHelper.ENUM_VALUES[5]),
	UDT_Data_VectorTile_RangeTheme(EVUpdateDataTypeHelper.ENUM_VALUES[6]);
	private int value;
	EVUpdateDataType(int i) {
		this.value = i;
	}
	public EVUpdateDataType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVUpdateDataType toEnum(int retval) {
		if(retval == UDT_Data_UnKnow.value){
			return UDT_Data_UnKnow;
		}
		else if(retval == UDT_Data_ImageTile.value){
			return UDT_Data_ImageTile;
		}
		else if(retval == UDT_Data_DemTile.value){
			return UDT_Data_DemTile;
		}
		else if(retval == UDT_Data_MapTile.value){
			return UDT_Data_MapTile;
		}
		else if(retval == UDT_Data_VectorTile.value){
			return UDT_Data_VectorTile;
		}
		else if(retval == UDT_Data_VectorTile_UniqueTheme.value){
			return UDT_Data_VectorTile_UniqueTheme;
		}
		else if(retval == UDT_Data_VectorTile_RangeTheme.value){
			return UDT_Data_VectorTile_RangeTheme;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVUpdateDataTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
