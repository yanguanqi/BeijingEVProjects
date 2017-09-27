package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///四叉树节点类型
public enum CloudTreeType implements INativeEnum<CloudTreeType> {
	CLOUDNW(CloudTreeTypeHelper.ENUM_VALUES[0]),
	CLOUDNE(CloudTreeTypeHelper.ENUM_VALUES[1]),
	CLOUDSW(CloudTreeTypeHelper.ENUM_VALUES[2]),
	CLOUDSE(CloudTreeTypeHelper.ENUM_VALUES[3]),
	CLOUDLEFT(CloudTreeTypeHelper.ENUM_VALUES[4]),
	CLOUDRIGHT(CloudTreeTypeHelper.ENUM_VALUES[5]);
	private int value;
	CloudTreeType(int i) {
		this.value = i;
	}
	public CloudTreeType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final CloudTreeType toEnum(int retval) {
		if(retval == CLOUDNW.value){
			return CLOUDNW;
		}
		else if(retval == CLOUDNE.value){
			return CLOUDNE;
		}
		else if(retval == CLOUDSW.value){
			return CLOUDSW;
		}
		else if(retval == CLOUDSE.value){
			return CLOUDSE;
		}
		else if(retval == CLOUDLEFT.value){
			return CLOUDLEFT;
		}
		else if(retval == CLOUDRIGHT.value){
			return CLOUDRIGHT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class CloudTreeTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
