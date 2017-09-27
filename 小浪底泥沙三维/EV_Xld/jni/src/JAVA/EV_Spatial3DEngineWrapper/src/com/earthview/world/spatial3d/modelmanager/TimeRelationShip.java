package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 动画的时间长度：由建模软件决定,同一个模型的所有部件的动画时间长度是一样的。动画的有效时间段：它就是个时间段，包含一个起始时刻和一个终止时刻。模型中的部件在这个时间段里会有方位的变化,一般会比动画的总时间长度要短。时间标记点：仅是一个名字，它对应某个时刻。区间：由时间标记点和播放的段数来决定，它就是个时间段，包含一个起始时刻和一个终止时刻。如果段数为正n，那起始时刻就是标记点对应的时刻。终止时刻为起始标记点后面第n个标记点对应的时刻。如果段数为负n，那么终止时刻为标记对应的时刻，起始时刻为终止时刻前面第n个标记点对应的时刻。NONE:动画的有效时间段与区间不相交。INSIDE：动画的有效时间段被区间包含，即有效时间段起始时刻比区间的起始时刻要大，且有效时间段的终止时刻比区间的终止时刻要小。CONTAIN:动画的有效时间段包含区间,即有效时间段起始时刻比区间的起始时刻要小，且有效时间段的终止时刻比区间的终止时刻要大。BEGININSIDE:动画的有效时间段的起始时刻在区间范围内,但是终止时刻不在区间范围内。ENDINSIDE:动画的有效时间段的终止时刻在区间范围内,但是起始时刻不在区间范围内。ALL:包含以上所有情况。
 */
public enum TimeRelationShip implements INativeEnum<TimeRelationShip> {
	NONE(TimeRelationShipHelper.ENUM_VALUES[0]),
	INSIDE(TimeRelationShipHelper.ENUM_VALUES[1]),
	CONTAIN(TimeRelationShipHelper.ENUM_VALUES[2]),
	BEGININSIDE(TimeRelationShipHelper.ENUM_VALUES[3]),
	ENDINSIDE(TimeRelationShipHelper.ENUM_VALUES[4]),
	ALL(TimeRelationShipHelper.ENUM_VALUES[5]);
	private int value;
	TimeRelationShip(int i) {
		this.value = i;
	}
	public TimeRelationShip getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final TimeRelationShip toEnum(int retval) {
		if(retval == NONE.value){
			return NONE;
		}
		else if(retval == INSIDE.value){
			return INSIDE;
		}
		else if(retval == CONTAIN.value){
			return CONTAIN;
		}
		else if(retval == BEGININSIDE.value){
			return BEGININSIDE;
		}
		else if(retval == ENDINSIDE.value){
			return ENDINSIDE;
		}
		else if(retval == ALL.value){
			return ALL;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class TimeRelationShipHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
