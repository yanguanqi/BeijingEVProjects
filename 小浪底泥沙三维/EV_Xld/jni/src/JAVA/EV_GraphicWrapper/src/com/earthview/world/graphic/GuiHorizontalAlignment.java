package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// Positions & sizes are in virtual pixels
public enum GuiHorizontalAlignment implements INativeEnum<GuiHorizontalAlignment> {
	GHA_LEFT(GuiHorizontalAlignmentHelper.ENUM_VALUES[0]),
	GHA_CENTER(GuiHorizontalAlignmentHelper.ENUM_VALUES[1]),
	GHA_RIGHT(GuiHorizontalAlignmentHelper.ENUM_VALUES[2]);
	private int value;
	GuiHorizontalAlignment(int i) {
		this.value = i;
	}
	public GuiHorizontalAlignment getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final GuiHorizontalAlignment toEnum(int retval) {
		if(retval == GHA_LEFT.value){
			return GHA_LEFT;
		}
		else if(retval == GHA_CENTER.value){
			return GHA_CENTER;
		}
		else if(retval == GHA_RIGHT.value){
			return GHA_RIGHT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class GuiHorizontalAlignmentHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
