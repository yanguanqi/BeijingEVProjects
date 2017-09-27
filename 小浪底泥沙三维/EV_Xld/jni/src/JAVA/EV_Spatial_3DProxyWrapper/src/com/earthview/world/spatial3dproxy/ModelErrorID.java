package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 错误码
 */
public enum ModelErrorID implements INativeEnum<ModelErrorID> {
	modelerror_noerror(ModelErrorIDHelper.ENUM_VALUES[0]),
	modelerror_initscenefile(ModelErrorIDHelper.ENUM_VALUES[1]),
	modelerror_savescenefile(ModelErrorIDHelper.ENUM_VALUES[2]),
	modelerror_opendatasource_src(ModelErrorIDHelper.ENUM_VALUES[3]),
	modelerror_opendataset_src(ModelErrorIDHelper.ENUM_VALUES[4]),
	modelerror_opendatasource_des(ModelErrorIDHelper.ENUM_VALUES[5]),
	modelerror_opendataset_des(ModelErrorIDHelper.ENUM_VALUES[6]),
	modelerror_createdatasource(ModelErrorIDHelper.ENUM_VALUES[7]),
	modelerror_createdataset(ModelErrorIDHelper.ENUM_VALUES[8]),
	modelerror_isrunning(ModelErrorIDHelper.ENUM_VALUES[9]),
	modelerror_parametererror(ModelErrorIDHelper.ENUM_VALUES[10]),
	modelerror_desdataseterror(ModelErrorIDHelper.ENUM_VALUES[11]),
	modelerror_loaddataseterror(ModelErrorIDHelper.ENUM_VALUES[12]),
	modelerrorcount(ModelErrorIDHelper.ENUM_VALUES[13]);
	private int value;
	ModelErrorID(int i) {
		this.value = i;
	}
	public ModelErrorID getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ModelErrorID toEnum(int retval) {
		if(retval == modelerror_noerror.value){
			return modelerror_noerror;
		}
		else if(retval == modelerror_initscenefile.value){
			return modelerror_initscenefile;
		}
		else if(retval == modelerror_savescenefile.value){
			return modelerror_savescenefile;
		}
		else if(retval == modelerror_opendatasource_src.value){
			return modelerror_opendatasource_src;
		}
		else if(retval == modelerror_opendataset_src.value){
			return modelerror_opendataset_src;
		}
		else if(retval == modelerror_opendatasource_des.value){
			return modelerror_opendatasource_des;
		}
		else if(retval == modelerror_opendataset_des.value){
			return modelerror_opendataset_des;
		}
		else if(retval == modelerror_createdatasource.value){
			return modelerror_createdatasource;
		}
		else if(retval == modelerror_createdataset.value){
			return modelerror_createdataset;
		}
		else if(retval == modelerror_isrunning.value){
			return modelerror_isrunning;
		}
		else if(retval == modelerror_parametererror.value){
			return modelerror_parametererror;
		}
		else if(retval == modelerror_desdataseterror.value){
			return modelerror_desdataseterror;
		}
		else if(retval == modelerror_loaddataseterror.value){
			return modelerror_loaddataseterror;
		}
		else if(retval == modelerrorcount.value){
			return modelerrorcount;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ModelErrorIDHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
