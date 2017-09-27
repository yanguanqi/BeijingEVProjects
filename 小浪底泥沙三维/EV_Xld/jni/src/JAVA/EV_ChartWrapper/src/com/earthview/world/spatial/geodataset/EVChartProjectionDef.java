package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 投影方法
 */
public enum EVChartProjectionDef implements INativeEnum<EVChartProjectionDef> {
	CPD_ALA(EVChartProjectionDefHelper.ENUM_VALUES[0]),
	CPD_AZA(EVChartProjectionDefHelper.ENUM_VALUES[1]),
	CPD_AZD(EVChartProjectionDefHelper.ENUM_VALUES[2]),
	CPD_GNO(EVChartProjectionDefHelper.ENUM_VALUES[3]),
	CPD_HOM(EVChartProjectionDefHelper.ENUM_VALUES[4]),
	CPD_LCC(EVChartProjectionDefHelper.ENUM_VALUES[5]),
	CPD_LEA(EVChartProjectionDefHelper.ENUM_VALUES[6]),
	CPD_MER(EVChartProjectionDefHelper.ENUM_VALUES[7]),
	CPD_OME(EVChartProjectionDefHelper.ENUM_VALUES[8]),
	CPD_ORT(EVChartProjectionDefHelper.ENUM_VALUES[9]),
	CPD_PST(EVChartProjectionDefHelper.ENUM_VALUES[10]),
	CPD_POL(EVChartProjectionDefHelper.ENUM_VALUES[11]),
	CPD_TME(EVChartProjectionDefHelper.ENUM_VALUES[12]),
	CPD_OST(EVChartProjectionDefHelper.ENUM_VALUES[13]);
	private int value;
	EVChartProjectionDef(int i) {
		this.value = i;
	}
	public EVChartProjectionDef getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVChartProjectionDef toEnum(int retval) {
		if(retval == CPD_ALA.value){
			return CPD_ALA;
		}
		else if(retval == CPD_AZA.value){
			return CPD_AZA;
		}
		else if(retval == CPD_AZD.value){
			return CPD_AZD;
		}
		else if(retval == CPD_GNO.value){
			return CPD_GNO;
		}
		else if(retval == CPD_HOM.value){
			return CPD_HOM;
		}
		else if(retval == CPD_LCC.value){
			return CPD_LCC;
		}
		else if(retval == CPD_LEA.value){
			return CPD_LEA;
		}
		else if(retval == CPD_MER.value){
			return CPD_MER;
		}
		else if(retval == CPD_OME.value){
			return CPD_OME;
		}
		else if(retval == CPD_ORT.value){
			return CPD_ORT;
		}
		else if(retval == CPD_PST.value){
			return CPD_PST;
		}
		else if(retval == CPD_POL.value){
			return CPD_POL;
		}
		else if(retval == CPD_TME.value){
			return CPD_TME;
		}
		else if(retval == CPD_OST.value){
			return CPD_OST;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVChartProjectionDefHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
