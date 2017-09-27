package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum eTexturePlayMode implements INativeEnum<eTexturePlayMode> {
	TextureEffectPause(eTexturePlayModeHelper.ENUM_VALUES[0]),
	TextureEffectPlay_ASAP(eTexturePlayModeHelper.ENUM_VALUES[1]),
	TextureEffectPlay_Looping(eTexturePlayModeHelper.ENUM_VALUES[2]);
	private int value;
	eTexturePlayMode(int i) {
		this.value = i;
	}
	public eTexturePlayMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final eTexturePlayMode toEnum(int retval) {
		if(retval == TextureEffectPause.value){
			return TextureEffectPause;
		}
		else if(retval == TextureEffectPlay_ASAP.value){
			return TextureEffectPlay_ASAP;
		}
		else if(retval == TextureEffectPlay_Looping.value){
			return TextureEffectPlay_Looping;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class eTexturePlayModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
