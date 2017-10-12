package com.earthview.world.spatial.vectorcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 操作结果
 */
public enum EVVectorCacheProcessResult implements INativeEnum<EVVectorCacheProcessResult> {
	VectorCacheProcessResult_Ok(EVVectorCacheProcessResultHelper.ENUM_VALUES[0]),
	VectorCacheProcessResult_Error_Template(EVVectorCacheProcessResultHelper.ENUM_VALUES[1]),
	VectorCacheProcessResult_Error_TempFileNotExists(EVVectorCacheProcessResultHelper.ENUM_VALUES[2]),
	VectorCacheProcessResult_Error_TempFileAlreadyExists(EVVectorCacheProcessResultHelper.ENUM_VALUES[3]),
	VectorCacheProcessResult_Error_ResultFolderExists(EVVectorCacheProcessResultHelper.ENUM_VALUES[4]),
	VectorCacheProcessResult_Error_FileAlreadyExists(EVVectorCacheProcessResultHelper.ENUM_VALUES[5]),
	VectorCacheProcessResult_Error_CacheFormat(EVVectorCacheProcessResultHelper.ENUM_VALUES[6]),
	VectorCacheProcessResult_Error_MinRange(EVVectorCacheProcessResultHelper.ENUM_VALUES[7]),
	VectorCacheProcessResult_Error_MaxRange(EVVectorCacheProcessResultHelper.ENUM_VALUES[8]),
	VectorCacheProcessResult_Error_RangeChange(EVVectorCacheProcessResultHelper.ENUM_VALUES[9]),
	VectorCacheProcessResult_Error_NoFileName(EVVectorCacheProcessResultHelper.ENUM_VALUES[10]),
	VectorCacheProcessResult_Error_SavePathInvalid(EVVectorCacheProcessResultHelper.ENUM_VALUES[11]),
	VectorCacheProcessResult_Error_TableNameError(EVVectorCacheProcessResultHelper.ENUM_VALUES[12]),
	VectorCacheProcessResult_Error_NoSavedPath(EVVectorCacheProcessResultHelper.ENUM_VALUES[13]),
	VectorCacheProcessResult_Error_DataTime(EVVectorCacheProcessResultHelper.ENUM_VALUES[14]),
	VectorCacheProcessResult_Error_NoTotalNum(EVVectorCacheProcessResultHelper.ENUM_VALUES[15]),
	VectorCacheProcessResult_Error_CacheRect(EVVectorCacheProcessResultHelper.ENUM_VALUES[16]),
	VectorCacheProcessResult_Error_TemplateTypeNotSupport(EVVectorCacheProcessResultHelper.ENUM_VALUES[17]),
	VectorCacheProcessResult_Error_ClipLevel(EVVectorCacheProcessResultHelper.ENUM_VALUES[18]),
	VectorCacheProcessResult_Error_SubTileNum(EVVectorCacheProcessResultHelper.ENUM_VALUES[19]),
	VectorCacheProcessResult_Error_UnitType(EVVectorCacheProcessResultHelper.ENUM_VALUES[20]),
	VectorCacheProcessResult_Error_FirstTileSpace(EVVectorCacheProcessResultHelper.ENUM_VALUES[21]),
	VectorCacheProcessResult_Error_OrientPosition(EVVectorCacheProcessResultHelper.ENUM_VALUES[22]),
	VectorCacheProcessResult_Error_DevisionInfo(EVVectorCacheProcessResultHelper.ENUM_VALUES[23]),
	VectorCacheProcessResult_Error_FolderNameTooLong(EVVectorCacheProcessResultHelper.ENUM_VALUES[24]),
	VectorCacheProcessResult_Error_GeometryNotSupport(EVVectorCacheProcessResultHelper.ENUM_VALUES[25]),
	VectorCacheProcessResult_Error_OutOfCacheRect(EVVectorCacheProcessResultHelper.ENUM_VALUES[26]),
	VectorCacheProcessResult_Error_ClipError(EVVectorCacheProcessResultHelper.ENUM_VALUES[27]),
	VectorCacheProcessResult_Error_7zCompress(EVVectorCacheProcessResultHelper.ENUM_VALUES[28]),
	VectorCacheProcessResult_Error_WriteETM(EVVectorCacheProcessResultHelper.ENUM_VALUES[29]),
	VectorCacheProcessResult_Error_ETMExists(EVVectorCacheProcessResultHelper.ENUM_VALUES[30]),
	VectorCacheProcessResult_Error_ProcessInfoNotGiven(EVVectorCacheProcessResultHelper.ENUM_VALUES[31]),
	VectorCacheProcessResult_Error_DatabaseName(EVVectorCacheProcessResultHelper.ENUM_VALUES[32]),
	VectorCacheProcessResult_Error_AttributeLevel(EVVectorCacheProcessResultHelper.ENUM_VALUES[33]),
	VectorCacheProcessResult_Error_BasicParamAbsent(EVVectorCacheProcessResultHelper.ENUM_VALUES[34]),
	VectorCacheProcessResult_Error_NoDataToMakeCache(EVVectorCacheProcessResultHelper.ENUM_VALUES[35]),
	VectorCacheProcessResult_Error_ProcessInfo(EVVectorCacheProcessResultHelper.ENUM_VALUES[36]),
	VectorCacheProcessResult_Error_CoordinateSystemNotSupport(EVVectorCacheProcessResultHelper.ENUM_VALUES[37]),
	VectorCacheProcessResult_Error_CoordinateExtension(EVVectorCacheProcessResultHelper.ENUM_VALUES[38]),
	VectorCacheProcessResult_Stop(EVVectorCacheProcessResultHelper.ENUM_VALUES[39]);
	private int value;
	EVVectorCacheProcessResult(int i) {
		this.value = i;
	}
	public EVVectorCacheProcessResult getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVVectorCacheProcessResult toEnum(int retval) {
		if(retval == VectorCacheProcessResult_Ok.value){
			return VectorCacheProcessResult_Ok;
		}
		else if(retval == VectorCacheProcessResult_Error_Template.value){
			return VectorCacheProcessResult_Error_Template;
		}
		else if(retval == VectorCacheProcessResult_Error_TempFileNotExists.value){
			return VectorCacheProcessResult_Error_TempFileNotExists;
		}
		else if(retval == VectorCacheProcessResult_Error_TempFileAlreadyExists.value){
			return VectorCacheProcessResult_Error_TempFileAlreadyExists;
		}
		else if(retval == VectorCacheProcessResult_Error_ResultFolderExists.value){
			return VectorCacheProcessResult_Error_ResultFolderExists;
		}
		else if(retval == VectorCacheProcessResult_Error_FileAlreadyExists.value){
			return VectorCacheProcessResult_Error_FileAlreadyExists;
		}
		else if(retval == VectorCacheProcessResult_Error_CacheFormat.value){
			return VectorCacheProcessResult_Error_CacheFormat;
		}
		else if(retval == VectorCacheProcessResult_Error_MinRange.value){
			return VectorCacheProcessResult_Error_MinRange;
		}
		else if(retval == VectorCacheProcessResult_Error_MaxRange.value){
			return VectorCacheProcessResult_Error_MaxRange;
		}
		else if(retval == VectorCacheProcessResult_Error_RangeChange.value){
			return VectorCacheProcessResult_Error_RangeChange;
		}
		else if(retval == VectorCacheProcessResult_Error_NoFileName.value){
			return VectorCacheProcessResult_Error_NoFileName;
		}
		else if(retval == VectorCacheProcessResult_Error_SavePathInvalid.value){
			return VectorCacheProcessResult_Error_SavePathInvalid;
		}
		else if(retval == VectorCacheProcessResult_Error_TableNameError.value){
			return VectorCacheProcessResult_Error_TableNameError;
		}
		else if(retval == VectorCacheProcessResult_Error_NoSavedPath.value){
			return VectorCacheProcessResult_Error_NoSavedPath;
		}
		else if(retval == VectorCacheProcessResult_Error_DataTime.value){
			return VectorCacheProcessResult_Error_DataTime;
		}
		else if(retval == VectorCacheProcessResult_Error_NoTotalNum.value){
			return VectorCacheProcessResult_Error_NoTotalNum;
		}
		else if(retval == VectorCacheProcessResult_Error_CacheRect.value){
			return VectorCacheProcessResult_Error_CacheRect;
		}
		else if(retval == VectorCacheProcessResult_Error_TemplateTypeNotSupport.value){
			return VectorCacheProcessResult_Error_TemplateTypeNotSupport;
		}
		else if(retval == VectorCacheProcessResult_Error_ClipLevel.value){
			return VectorCacheProcessResult_Error_ClipLevel;
		}
		else if(retval == VectorCacheProcessResult_Error_SubTileNum.value){
			return VectorCacheProcessResult_Error_SubTileNum;
		}
		else if(retval == VectorCacheProcessResult_Error_UnitType.value){
			return VectorCacheProcessResult_Error_UnitType;
		}
		else if(retval == VectorCacheProcessResult_Error_FirstTileSpace.value){
			return VectorCacheProcessResult_Error_FirstTileSpace;
		}
		else if(retval == VectorCacheProcessResult_Error_OrientPosition.value){
			return VectorCacheProcessResult_Error_OrientPosition;
		}
		else if(retval == VectorCacheProcessResult_Error_DevisionInfo.value){
			return VectorCacheProcessResult_Error_DevisionInfo;
		}
		else if(retval == VectorCacheProcessResult_Error_FolderNameTooLong.value){
			return VectorCacheProcessResult_Error_FolderNameTooLong;
		}
		else if(retval == VectorCacheProcessResult_Error_GeometryNotSupport.value){
			return VectorCacheProcessResult_Error_GeometryNotSupport;
		}
		else if(retval == VectorCacheProcessResult_Error_OutOfCacheRect.value){
			return VectorCacheProcessResult_Error_OutOfCacheRect;
		}
		else if(retval == VectorCacheProcessResult_Error_ClipError.value){
			return VectorCacheProcessResult_Error_ClipError;
		}
		else if(retval == VectorCacheProcessResult_Error_7zCompress.value){
			return VectorCacheProcessResult_Error_7zCompress;
		}
		else if(retval == VectorCacheProcessResult_Error_WriteETM.value){
			return VectorCacheProcessResult_Error_WriteETM;
		}
		else if(retval == VectorCacheProcessResult_Error_ETMExists.value){
			return VectorCacheProcessResult_Error_ETMExists;
		}
		else if(retval == VectorCacheProcessResult_Error_ProcessInfoNotGiven.value){
			return VectorCacheProcessResult_Error_ProcessInfoNotGiven;
		}
		else if(retval == VectorCacheProcessResult_Error_DatabaseName.value){
			return VectorCacheProcessResult_Error_DatabaseName;
		}
		else if(retval == VectorCacheProcessResult_Error_AttributeLevel.value){
			return VectorCacheProcessResult_Error_AttributeLevel;
		}
		else if(retval == VectorCacheProcessResult_Error_BasicParamAbsent.value){
			return VectorCacheProcessResult_Error_BasicParamAbsent;
		}
		else if(retval == VectorCacheProcessResult_Error_NoDataToMakeCache.value){
			return VectorCacheProcessResult_Error_NoDataToMakeCache;
		}
		else if(retval == VectorCacheProcessResult_Error_ProcessInfo.value){
			return VectorCacheProcessResult_Error_ProcessInfo;
		}
		else if(retval == VectorCacheProcessResult_Error_CoordinateSystemNotSupport.value){
			return VectorCacheProcessResult_Error_CoordinateSystemNotSupport;
		}
		else if(retval == VectorCacheProcessResult_Error_CoordinateExtension.value){
			return VectorCacheProcessResult_Error_CoordinateExtension;
		}
		else if(retval == VectorCacheProcessResult_Stop.value){
			return VectorCacheProcessResult_Stop;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVVectorCacheProcessResultHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
