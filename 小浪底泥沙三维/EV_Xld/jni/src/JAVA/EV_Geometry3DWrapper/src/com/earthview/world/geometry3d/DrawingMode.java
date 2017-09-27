package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// <summary>
/// 绘制模式
/// <summary>
public enum DrawingMode implements INativeEnum<DrawingMode> {
	DM_None(DrawingModeHelper.ENUM_VALUES[0]),
	DM_Frame(DrawingModeHelper.ENUM_VALUES[1]),
	DM_Fill(DrawingModeHelper.ENUM_VALUES[2]),
	DM_All(DrawingModeHelper.ENUM_VALUES[3]);
	private int value;
	DrawingMode(int i) {
		this.value = i;
	}
	public DrawingMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final DrawingMode toEnum(int retval) {
		if(retval == DM_None.value){
			return DM_None;
		}
		else if(retval == DM_Frame.value){
			return DM_Frame;
		}
		else if(retval == DM_Fill.value){
			return DM_Fill;
		}
		else if(retval == DM_All.value){
			return DM_All;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class DrawingModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
