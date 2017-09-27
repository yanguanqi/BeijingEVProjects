package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的文件格式
 */
public enum EVSSCFileFormat implements INativeEnum<EVSSCFileFormat> {
	SSC_FileFormat_Unknown(EVSSCFileFormatHelper.ENUM_VALUES[0]),
	SSC_FileFormat_JPG(EVSSCFileFormatHelper.ENUM_VALUES[1]),
	SSC_FileFormat_EVG(EVSSCFileFormatHelper.ENUM_VALUES[2]),
	SSC_FileFormat_BMP_7Z(EVSSCFileFormatHelper.ENUM_VALUES[3]),
	SSC_FileFormat_EVV(EVSSCFileFormatHelper.ENUM_VALUES[4]),
	SSC_FileFormat_EVV_7Z(EVSSCFileFormatHelper.ENUM_VALUES[5]),
	SSC_FileFormat_PNG(EVSSCFileFormatHelper.ENUM_VALUES[6]),
	SSC_FileFormat_EVP(EVSSCFileFormatHelper.ENUM_VALUES[7]),
	SSC_FileFormat_EVP_7Z(EVSSCFileFormatHelper.ENUM_VALUES[8]),
	SSC_FileFormat_BIL(EVSSCFileFormatHelper.ENUM_VALUES[9]),
	SSC_FileFormat_BIL_7Z(EVSSCFileFormatHelper.ENUM_VALUES[10]);
	private int value;
	EVSSCFileFormat(int i) {
		this.value = i;
	}
	public EVSSCFileFormat getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSSCFileFormat toEnum(int retval) {
		if(retval == SSC_FileFormat_Unknown.value){
			return SSC_FileFormat_Unknown;
		}
		else if(retval == SSC_FileFormat_JPG.value){
			return SSC_FileFormat_JPG;
		}
		else if(retval == SSC_FileFormat_EVG.value){
			return SSC_FileFormat_EVG;
		}
		else if(retval == SSC_FileFormat_BMP_7Z.value){
			return SSC_FileFormat_BMP_7Z;
		}
		else if(retval == SSC_FileFormat_EVV.value){
			return SSC_FileFormat_EVV;
		}
		else if(retval == SSC_FileFormat_EVV_7Z.value){
			return SSC_FileFormat_EVV_7Z;
		}
		else if(retval == SSC_FileFormat_PNG.value){
			return SSC_FileFormat_PNG;
		}
		else if(retval == SSC_FileFormat_EVP.value){
			return SSC_FileFormat_EVP;
		}
		else if(retval == SSC_FileFormat_EVP_7Z.value){
			return SSC_FileFormat_EVP_7Z;
		}
		else if(retval == SSC_FileFormat_BIL.value){
			return SSC_FileFormat_BIL;
		}
		else if(retval == SSC_FileFormat_BIL_7Z.value){
			return SSC_FileFormat_BIL_7Z;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSSCFileFormatHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
