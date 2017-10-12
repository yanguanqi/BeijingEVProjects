package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum ImageType implements INativeEnum<ImageType> {
	LocalDem(ImageTypeHelper.ENUM_VALUES[0]),
	CacheDem(ImageTypeHelper.ENUM_VALUES[1]);
	private int value;
	ImageType(int i) {
		this.value = i;
	}
	public ImageType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ImageType toEnum(int retval) {
		if(retval == LocalDem.value){
			return LocalDem;
		}
		else if(retval == CacheDem.value){
			return CacheDem;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ImageTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
