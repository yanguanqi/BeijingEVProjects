package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVTextRenderingHint implements INativeEnum<EVTextRenderingHint> {
	TRH_SystemDefault(EVTextRenderingHintHelper.ENUM_VALUES[0]),
	TRH_SingleBitPerPixelGridFit(EVTextRenderingHintHelper.ENUM_VALUES[1]),
	TRH_SingleBitPerPixel(EVTextRenderingHintHelper.ENUM_VALUES[2]),
	TRH_AntiAliasGridFit(EVTextRenderingHintHelper.ENUM_VALUES[3]),
	TRH_AntiAlias(EVTextRenderingHintHelper.ENUM_VALUES[4]),
	TRH_ClearTypeGridFit(EVTextRenderingHintHelper.ENUM_VALUES[5]);
	private int value;
	EVTextRenderingHint(int i) {
		this.value = i;
	}
	public EVTextRenderingHint getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTextRenderingHint toEnum(int retval) {
		if(retval == TRH_SystemDefault.value){
			return TRH_SystemDefault;
		}
		else if(retval == TRH_SingleBitPerPixelGridFit.value){
			return TRH_SingleBitPerPixelGridFit;
		}
		else if(retval == TRH_SingleBitPerPixel.value){
			return TRH_SingleBitPerPixel;
		}
		else if(retval == TRH_AntiAliasGridFit.value){
			return TRH_AntiAliasGridFit;
		}
		else if(retval == TRH_AntiAlias.value){
			return TRH_AntiAlias;
		}
		else if(retval == TRH_ClearTypeGridFit.value){
			return TRH_ClearTypeGridFit;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTextRenderingHintHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
