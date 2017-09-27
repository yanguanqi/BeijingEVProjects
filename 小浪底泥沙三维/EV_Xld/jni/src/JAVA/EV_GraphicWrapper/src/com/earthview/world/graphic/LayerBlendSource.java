package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// use interpolated color values from vertices to scale source1, then add source2 scaled by (1-color)
public enum LayerBlendSource implements INativeEnum<LayerBlendSource> {
	LBS_CURRENT(LayerBlendSourceHelper.ENUM_VALUES[0]),
	LBS_TEXTURE(LayerBlendSourceHelper.ENUM_VALUES[1]),
	LBS_DIFFUSE(LayerBlendSourceHelper.ENUM_VALUES[2]),
	LBS_SPECULAR(LayerBlendSourceHelper.ENUM_VALUES[3]),
	LBS_MANUAL(LayerBlendSourceHelper.ENUM_VALUES[4]);
	private int value;
	LayerBlendSource(int i) {
		this.value = i;
	}
	public LayerBlendSource getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final LayerBlendSource toEnum(int retval) {
		if(retval == LBS_CURRENT.value){
			return LBS_CURRENT;
		}
		else if(retval == LBS_TEXTURE.value){
			return LBS_TEXTURE;
		}
		else if(retval == LBS_DIFFUSE.value){
			return LBS_DIFFUSE;
		}
		else if(retval == LBS_SPECULAR.value){
			return LBS_SPECULAR;
		}
		else if(retval == LBS_MANUAL.value){
			return LBS_MANUAL;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class LayerBlendSourceHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
