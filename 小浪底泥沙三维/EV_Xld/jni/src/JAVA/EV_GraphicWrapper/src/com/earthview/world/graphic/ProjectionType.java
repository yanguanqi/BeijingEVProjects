package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 投影类型正射投影，透视投影
 */
public enum ProjectionType implements INativeEnum<ProjectionType> {
	PT_ORTHOGRAPHIC(ProjectionTypeHelper.ENUM_VALUES[0]),
	PT_PERSPECTIVE(ProjectionTypeHelper.ENUM_VALUES[1]);
	private int value;
	ProjectionType(int i) {
		this.value = i;
	}
	public ProjectionType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ProjectionType toEnum(int retval) {
		if(retval == PT_ORTHOGRAPHIC.value){
			return PT_ORTHOGRAPHIC;
		}
		else if(retval == PT_PERSPECTIVE.value){
			return PT_PERSPECTIVE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ProjectionTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
