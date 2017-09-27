package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// 模型数据集的类型。
public enum ModelDatasetType implements INativeEnum<ModelDatasetType> {
	EntityModelDataset(ModelDatasetTypeHelper.ENUM_VALUES[0]),
	InstanceModelDataset(ModelDatasetTypeHelper.ENUM_VALUES[1]);
	private int value;
	ModelDatasetType(int i) {
		this.value = i;
	}
	public ModelDatasetType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ModelDatasetType toEnum(int retval) {
		if(retval == EntityModelDataset.value){
			return EntityModelDataset;
		}
		else if(retval == InstanceModelDataset.value){
			return InstanceModelDataset;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ModelDatasetTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
