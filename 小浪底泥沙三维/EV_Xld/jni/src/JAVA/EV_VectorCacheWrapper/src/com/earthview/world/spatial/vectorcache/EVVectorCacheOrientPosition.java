package com.earthview.world.spatial.vectorcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 缓存瓦片起点位置
 */
public enum EVVectorCacheOrientPosition implements INativeEnum<EVVectorCacheOrientPosition> {
	VectorCacheOrientPosition_Unknown(EVVectorCacheOrientPositionHelper.ENUM_VALUES[0]),
	VectorCacheOrientPosition_Left_Up(EVVectorCacheOrientPositionHelper.ENUM_VALUES[1]),
	VectorCacheOrientPosition_Left_Bottom(EVVectorCacheOrientPositionHelper.ENUM_VALUES[2]),
	VectorCacheOrientPosition_Right_Up(EVVectorCacheOrientPositionHelper.ENUM_VALUES[3]),
	VectorCacheOrientPosition_Right_Bottom(EVVectorCacheOrientPositionHelper.ENUM_VALUES[4]),
	VectorCacheOrientPosition_Center(EVVectorCacheOrientPositionHelper.ENUM_VALUES[5]);
	private int value;
	EVVectorCacheOrientPosition(int i) {
		this.value = i;
	}
	public EVVectorCacheOrientPosition getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVVectorCacheOrientPosition toEnum(int retval) {
		if(retval == VectorCacheOrientPosition_Unknown.value){
			return VectorCacheOrientPosition_Unknown;
		}
		else if(retval == VectorCacheOrientPosition_Left_Up.value){
			return VectorCacheOrientPosition_Left_Up;
		}
		else if(retval == VectorCacheOrientPosition_Left_Bottom.value){
			return VectorCacheOrientPosition_Left_Bottom;
		}
		else if(retval == VectorCacheOrientPosition_Right_Up.value){
			return VectorCacheOrientPosition_Right_Up;
		}
		else if(retval == VectorCacheOrientPosition_Right_Bottom.value){
			return VectorCacheOrientPosition_Right_Bottom;
		}
		else if(retval == VectorCacheOrientPosition_Center.value){
			return VectorCacheOrientPosition_Center;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVVectorCacheOrientPositionHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
