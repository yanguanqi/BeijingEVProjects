package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// 抽象视图类型
public enum EVAbstractView implements INativeEnum<EVAbstractView> {
	AV_CAMERA(EVAbstractViewHelper.ENUM_VALUES[0]),
	AV_LOOKAT(EVAbstractViewHelper.ENUM_VALUES[1]);
	private int value;
	EVAbstractView(int i) {
		this.value = i;
	}
	public EVAbstractView getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVAbstractView toEnum(int retval) {
		if(retval == AV_CAMERA.value){
			return AV_CAMERA;
		}
		else if(retval == AV_LOOKAT.value){
			return AV_LOOKAT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVAbstractViewHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
