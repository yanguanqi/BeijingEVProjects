package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 枚举:纹理寻址模式
 */
public enum EVTextureAddressMode implements INativeEnum<EVTextureAddressMode> {
	TAM_Wrap(EVTextureAddressModeHelper.ENUM_VALUES[0]),
	TAM_Clamp(EVTextureAddressModeHelper.ENUM_VALUES[1]),
	TAM_Mirror(EVTextureAddressModeHelper.ENUM_VALUES[2]),
	TAM_Border(EVTextureAddressModeHelper.ENUM_VALUES[3]);
	private int value;
	EVTextureAddressMode(int i) {
		this.value = i;
	}
	public EVTextureAddressMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTextureAddressMode toEnum(int retval) {
		if(retval == TAM_Wrap.value){
			return TAM_Wrap;
		}
		else if(retval == TAM_Clamp.value){
			return TAM_Clamp;
		}
		else if(retval == TAM_Mirror.value){
			return TAM_Mirror;
		}
		else if(retval == TAM_Border.value){
			return TAM_Border;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTextureAddressModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
