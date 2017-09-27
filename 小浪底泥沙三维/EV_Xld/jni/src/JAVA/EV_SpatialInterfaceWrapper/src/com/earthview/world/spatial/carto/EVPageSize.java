package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 纸张类型
 */
public enum EVPageSize implements INativeEnum<EVPageSize> {
	PS_A4(EVPageSizeHelper.ENUM_VALUES[0]),
	PS_B5(EVPageSizeHelper.ENUM_VALUES[1]),
	PS_Letter(EVPageSizeHelper.ENUM_VALUES[2]),
	PS_Legal(EVPageSizeHelper.ENUM_VALUES[3]),
	PS_Executive(EVPageSizeHelper.ENUM_VALUES[4]),
	PS_A2(EVPageSizeHelper.ENUM_VALUES[5]),
	PS_A3(EVPageSizeHelper.ENUM_VALUES[6]),
	PS_A5(EVPageSizeHelper.ENUM_VALUES[7]),
	PS_B4(EVPageSizeHelper.ENUM_VALUES[8]),
	PS_C5E(EVPageSizeHelper.ENUM_VALUES[9]),
	PS_Comm10E(EVPageSizeHelper.ENUM_VALUES[10]),
	PS_DLE(EVPageSizeHelper.ENUM_VALUES[11]),
	PS_Folio(EVPageSizeHelper.ENUM_VALUES[12]),
	PS_Ledger(EVPageSizeHelper.ENUM_VALUES[13]),
	PS_Tabloid(EVPageSizeHelper.ENUM_VALUES[14]),
	PS_Custom(EVPageSizeHelper.ENUM_VALUES[15]);
	private int value;
	EVPageSize(int i) {
		this.value = i;
	}
	public EVPageSize getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVPageSize toEnum(int retval) {
		if(retval == PS_A4.value){
			return PS_A4;
		}
		else if(retval == PS_B5.value){
			return PS_B5;
		}
		else if(retval == PS_Letter.value){
			return PS_Letter;
		}
		else if(retval == PS_Legal.value){
			return PS_Legal;
		}
		else if(retval == PS_Executive.value){
			return PS_Executive;
		}
		else if(retval == PS_A2.value){
			return PS_A2;
		}
		else if(retval == PS_A3.value){
			return PS_A3;
		}
		else if(retval == PS_A5.value){
			return PS_A5;
		}
		else if(retval == PS_B4.value){
			return PS_B4;
		}
		else if(retval == PS_C5E.value){
			return PS_C5E;
		}
		else if(retval == PS_Comm10E.value){
			return PS_Comm10E;
		}
		else if(retval == PS_DLE.value){
			return PS_DLE;
		}
		else if(retval == PS_Folio.value){
			return PS_Folio;
		}
		else if(retval == PS_Ledger.value){
			return PS_Ledger;
		}
		else if(retval == PS_Tabloid.value){
			return PS_Tabloid;
		}
		else if(retval == PS_Custom.value){
			return PS_Custom;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVPageSizeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
