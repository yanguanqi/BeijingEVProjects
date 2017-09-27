package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的坐标系类型
 */
public enum EVSSCSRS implements INativeEnum<EVSSCSRS> {
	SSC_SRS_Unknown(EVSSCSRSHelper.ENUM_VALUES[0]),
	SSC_SRS_WGS_1984(EVSSCSRSHelper.ENUM_VALUES[1]),
	SSC_SRS_Beijing_1954(EVSSCSRSHelper.ENUM_VALUES[2]),
	SSC_SRS_Xian_1980(EVSSCSRSHelper.ENUM_VALUES[3]),
	SSC_SRS_China_2000(EVSSCSRSHelper.ENUM_VALUES[4]),
	SSC_SRS_Mercator(EVSSCSRSHelper.ENUM_VALUES[5]),
	SSC_SRS_Mercator_Web(EVSSCSRSHelper.ENUM_VALUES[6]);
	private int value;
	EVSSCSRS(int i) {
		this.value = i;
	}
	public EVSSCSRS getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSSCSRS toEnum(int retval) {
		if(retval == SSC_SRS_Unknown.value){
			return SSC_SRS_Unknown;
		}
		else if(retval == SSC_SRS_WGS_1984.value){
			return SSC_SRS_WGS_1984;
		}
		else if(retval == SSC_SRS_Beijing_1954.value){
			return SSC_SRS_Beijing_1954;
		}
		else if(retval == SSC_SRS_Xian_1980.value){
			return SSC_SRS_Xian_1980;
		}
		else if(retval == SSC_SRS_China_2000.value){
			return SSC_SRS_China_2000;
		}
		else if(retval == SSC_SRS_Mercator.value){
			return SSC_SRS_Mercator;
		}
		else if(retval == SSC_SRS_Mercator_Web.value){
			return SSC_SRS_Mercator_Web;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSSCSRSHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
