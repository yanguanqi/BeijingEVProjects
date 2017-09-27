package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum ImageFlags implements INativeEnum<ImageFlags> {
	IF_COMPRESSED(ImageFlagsHelper.ENUM_VALUES[0]),
	IF_CUBEMAP(ImageFlagsHelper.ENUM_VALUES[1]),
	IF_3D_TEXTURE(ImageFlagsHelper.ENUM_VALUES[2]);
	private int value;
	ImageFlags(int i) {
		this.value = i;
	}
	public ImageFlags getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ImageFlags toEnum(int retval) {
		if(retval == IF_COMPRESSED.value){
			return IF_COMPRESSED;
		}
		else if(retval == IF_CUBEMAP.value){
			return IF_CUBEMAP;
		}
		else if(retval == IF_3D_TEXTURE.value){
			return IF_3D_TEXTURE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ImageFlagsHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
