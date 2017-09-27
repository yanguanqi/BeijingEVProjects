package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum LayerRefreshFactor implements INativeEnum<LayerRefreshFactor> {
	LRF_General(LayerRefreshFactorHelper.ENUM_VALUES[0]),
	LRF_VisibleChanged(LayerRefreshFactorHelper.ENUM_VALUES[1]),
	LRF_TerrainChanged(LayerRefreshFactorHelper.ENUM_VALUES[2]),
	LRF_DatasetChanged(LayerRefreshFactorHelper.ENUM_VALUES[3]),
	LRF_LabelVisibleChanged(LayerRefreshFactorHelper.ENUM_VALUES[4]),
	LRF_ThemeChanged(LayerRefreshFactorHelper.ENUM_VALUES[5]);
	private int value;
	LayerRefreshFactor(int i) {
		this.value = i;
	}
	public LayerRefreshFactor getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final LayerRefreshFactor toEnum(int retval) {
		if(retval == LRF_General.value){
			return LRF_General;
		}
		else if(retval == LRF_VisibleChanged.value){
			return LRF_VisibleChanged;
		}
		else if(retval == LRF_TerrainChanged.value){
			return LRF_TerrainChanged;
		}
		else if(retval == LRF_DatasetChanged.value){
			return LRF_DatasetChanged;
		}
		else if(retval == LRF_LabelVisibleChanged.value){
			return LRF_LabelVisibleChanged;
		}
		else if(retval == LRF_ThemeChanged.value){
			return LRF_ThemeChanged;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class LayerRefreshFactorHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
