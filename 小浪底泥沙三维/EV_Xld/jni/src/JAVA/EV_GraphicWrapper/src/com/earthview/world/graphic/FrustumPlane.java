package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 平截头体面
 */
public enum FrustumPlane implements INativeEnum<FrustumPlane> {
	FRUSTUM_PLANE_NEAR(FrustumPlaneHelper.ENUM_VALUES[0]),
	FRUSTUM_PLANE_FAR(FrustumPlaneHelper.ENUM_VALUES[1]),
	FRUSTUM_PLANE_LEFT(FrustumPlaneHelper.ENUM_VALUES[2]),
	FRUSTUM_PLANE_RIGHT(FrustumPlaneHelper.ENUM_VALUES[3]),
	FRUSTUM_PLANE_TOP(FrustumPlaneHelper.ENUM_VALUES[4]),
	FRUSTUM_PLANE_BOTTOM(FrustumPlaneHelper.ENUM_VALUES[5]);
	private int value;
	FrustumPlane(int i) {
		this.value = i;
	}
	public FrustumPlane getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final FrustumPlane toEnum(int retval) {
		if(retval == FRUSTUM_PLANE_NEAR.value){
			return FRUSTUM_PLANE_NEAR;
		}
		else if(retval == FRUSTUM_PLANE_FAR.value){
			return FRUSTUM_PLANE_FAR;
		}
		else if(retval == FRUSTUM_PLANE_LEFT.value){
			return FRUSTUM_PLANE_LEFT;
		}
		else if(retval == FRUSTUM_PLANE_RIGHT.value){
			return FRUSTUM_PLANE_RIGHT;
		}
		else if(retval == FRUSTUM_PLANE_TOP.value){
			return FRUSTUM_PLANE_TOP;
		}
		else if(retval == FRUSTUM_PLANE_BOTTOM.value){
			return FRUSTUM_PLANE_BOTTOM;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class FrustumPlaneHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
