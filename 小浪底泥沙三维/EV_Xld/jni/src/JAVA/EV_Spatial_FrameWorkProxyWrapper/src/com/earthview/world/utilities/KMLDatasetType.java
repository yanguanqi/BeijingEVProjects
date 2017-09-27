package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// KML数据集的类型。
public enum KMLDatasetType implements INativeEnum<KMLDatasetType> {
	KMLDataset(KMLDatasetTypeHelper.ENUM_VALUES[0]),
	KMZDataset(KMLDatasetTypeHelper.ENUM_VALUES[1]);
	private int value;
	KMLDatasetType(int i) {
		this.value = i;
	}
	public KMLDatasetType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final KMLDatasetType toEnum(int retval) {
		if(retval == KMLDataset.value){
			return KMLDataset;
		}
		else if(retval == KMZDataset.value){
			return KMZDataset;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class KMLDatasetTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
