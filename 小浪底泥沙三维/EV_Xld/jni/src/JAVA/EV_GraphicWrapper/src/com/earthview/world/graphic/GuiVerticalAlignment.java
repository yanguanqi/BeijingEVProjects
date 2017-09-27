package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum GuiVerticalAlignment implements INativeEnum<GuiVerticalAlignment> {
	GVA_TOP(GuiVerticalAlignmentHelper.ENUM_VALUES[0]),
	GVA_CENTER(GuiVerticalAlignmentHelper.ENUM_VALUES[1]),
	GVA_BOTTOM(GuiVerticalAlignmentHelper.ENUM_VALUES[2]);
	private int value;
	GuiVerticalAlignment(int i) {
		this.value = i;
	}
	public GuiVerticalAlignment getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final GuiVerticalAlignment toEnum(int retval) {
		if(retval == GVA_TOP.value){
			return GVA_TOP;
		}
		else if(retval == GVA_CENTER.value){
			return GVA_CENTER;
		}
		else if(retval == GVA_BOTTOM.value){
			return GVA_BOTTOM;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class GuiVerticalAlignmentHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
