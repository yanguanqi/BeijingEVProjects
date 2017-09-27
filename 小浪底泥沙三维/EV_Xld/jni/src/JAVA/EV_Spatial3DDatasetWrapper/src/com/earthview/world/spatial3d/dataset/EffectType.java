package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EffectType implements INativeEnum<EffectType> {
	ET_SINGLEPARTICLE(EffectTypeHelper.ENUM_VALUES[0]),
	ET_BLENDEFFECT(EffectTypeHelper.ENUM_VALUES[1]),
	ET_BLENDPARTICLE(EffectTypeHelper.ENUM_VALUES[2]),
	ET_BLENDGIF(EffectTypeHelper.ENUM_VALUES[3]),
	ET_GIF(EffectTypeHelper.ENUM_VALUES[4]),
	ET_TRAIL(EffectTypeHelper.ENUM_VALUES[5]);
	private int value;
	EffectType(int i) {
		this.value = i;
	}
	public EffectType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EffectType toEnum(int retval) {
		if(retval == ET_SINGLEPARTICLE.value){
			return ET_SINGLEPARTICLE;
		}
		else if(retval == ET_BLENDEFFECT.value){
			return ET_BLENDEFFECT;
		}
		else if(retval == ET_BLENDPARTICLE.value){
			return ET_BLENDPARTICLE;
		}
		else if(retval == ET_BLENDGIF.value){
			return ET_BLENDGIF;
		}
		else if(retval == ET_GIF.value){
			return ET_GIF;
		}
		else if(retval == ET_TRAIL.value){
			return ET_TRAIL;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EffectTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
