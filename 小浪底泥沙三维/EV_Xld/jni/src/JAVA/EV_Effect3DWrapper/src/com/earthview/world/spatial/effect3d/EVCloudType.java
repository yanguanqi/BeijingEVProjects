package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 云的类型枚举
 */
public enum EVCloudType implements INativeEnum<EVCloudType> {
	CT_UNKNOW(EVCloudTypeHelper.ENUM_VALUES[0]),
	CT_ST(EVCloudTypeHelper.ENUM_VALUES[1]),
	CT_SC(EVCloudTypeHelper.ENUM_VALUES[2]),
	CT_NS(EVCloudTypeHelper.ENUM_VALUES[3]),
	CT_AC(EVCloudTypeHelper.ENUM_VALUES[4]),
	CT_AS(EVCloudTypeHelper.ENUM_VALUES[5]),
	CT_CI(EVCloudTypeHelper.ENUM_VALUES[6]),
	CT_CS(EVCloudTypeHelper.ENUM_VALUES[7]),
	CT_CC(EVCloudTypeHelper.ENUM_VALUES[8]),
	CT_CU(EVCloudTypeHelper.ENUM_VALUES[9]),
	CT_CB(EVCloudTypeHelper.ENUM_VALUES[10]),
	CT_DF(EVCloudTypeHelper.ENUM_VALUES[11]),
	CT_MC(EVCloudTypeHelper.ENUM_VALUES[12]);
	private int value;
	EVCloudType(int i) {
		this.value = i;
	}
	public EVCloudType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVCloudType toEnum(int retval) {
		if(retval == CT_UNKNOW.value){
			return CT_UNKNOW;
		}
		else if(retval == CT_ST.value){
			return CT_ST;
		}
		else if(retval == CT_SC.value){
			return CT_SC;
		}
		else if(retval == CT_NS.value){
			return CT_NS;
		}
		else if(retval == CT_AC.value){
			return CT_AC;
		}
		else if(retval == CT_AS.value){
			return CT_AS;
		}
		else if(retval == CT_CI.value){
			return CT_CI;
		}
		else if(retval == CT_CS.value){
			return CT_CS;
		}
		else if(retval == CT_CC.value){
			return CT_CC;
		}
		else if(retval == CT_CU.value){
			return CT_CU;
		}
		else if(retval == CT_CB.value){
			return CT_CB;
		}
		else if(retval == CT_DF.value){
			return CT_DF;
		}
		else if(retval == CT_MC.value){
			return CT_MC;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVCloudTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
