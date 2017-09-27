package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EntityDatasetEvent implements INativeEnum<EntityDatasetEvent> {
	EDTEVT_STOPRENDER(EntityDatasetEventHelper.ENUM_VALUES[0]),
	EDTEVT_STARTRENDER(EntityDatasetEventHelper.ENUM_VALUES[1]),
	EDTEVT_UPDATEMODEL(EntityDatasetEventHelper.ENUM_VALUES[2]),
	EDTEVT_REFRESHALLMODEL(EntityDatasetEventHelper.ENUM_VALUES[3]),
	EDTEVT_UPDATEALTITUDE(EntityDatasetEventHelper.ENUM_VALUES[4]),
	EDTEVT_UPDATEDEM(EntityDatasetEventHelper.ENUM_VALUES[5]),
	EDTEVT_UPDATEOCTREE(EntityDatasetEventHelper.ENUM_VALUES[6]),
	EDTEVT_REFRESHOCTREE(EntityDatasetEventHelper.ENUM_VALUES[7]),
	EDTEVT_GETCOMMITID(EntityDatasetEventHelper.ENUM_VALUES[8]);
	private int value;
	EntityDatasetEvent(int i) {
		this.value = i;
	}
	public EntityDatasetEvent getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EntityDatasetEvent toEnum(int retval) {
		if(retval == EDTEVT_STOPRENDER.value){
			return EDTEVT_STOPRENDER;
		}
		else if(retval == EDTEVT_STARTRENDER.value){
			return EDTEVT_STARTRENDER;
		}
		else if(retval == EDTEVT_UPDATEMODEL.value){
			return EDTEVT_UPDATEMODEL;
		}
		else if(retval == EDTEVT_REFRESHALLMODEL.value){
			return EDTEVT_REFRESHALLMODEL;
		}
		else if(retval == EDTEVT_UPDATEALTITUDE.value){
			return EDTEVT_UPDATEALTITUDE;
		}
		else if(retval == EDTEVT_UPDATEDEM.value){
			return EDTEVT_UPDATEDEM;
		}
		else if(retval == EDTEVT_UPDATEOCTREE.value){
			return EDTEVT_UPDATEOCTREE;
		}
		else if(retval == EDTEVT_REFRESHOCTREE.value){
			return EDTEVT_REFRESHOCTREE;
		}
		else if(retval == EDTEVT_GETCOMMITID.value){
			return EDTEVT_GETCOMMITID;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EntityDatasetEventHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
