package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum FrameworkEventType implements INativeEnum<FrameworkEventType> {
	FET_EventTypeStart_DataSourceManager(FrameworkEventTypeHelper.ENUM_VALUES[0]),
	FET_CreateDataSourceRequest(FrameworkEventTypeHelper.ENUM_VALUES[1]),
	FET_CreateDataSourceResponse(FrameworkEventTypeHelper.ENUM_VALUES[2]),
	FET_DeleteDataSourceRequest(FrameworkEventTypeHelper.ENUM_VALUES[3]),
	FET_DeleteDataSourceResponse(FrameworkEventTypeHelper.ENUM_VALUES[4]),
	FET_OpenDataSourceRequest(FrameworkEventTypeHelper.ENUM_VALUES[5]),
	FET_OpenDataSourceResponse(FrameworkEventTypeHelper.ENUM_VALUES[6]),
	FET_CloseDataSourceRequest(FrameworkEventTypeHelper.ENUM_VALUES[7]),
	FET_CloseDataSourceResponse(FrameworkEventTypeHelper.ENUM_VALUES[8]),
	FET_GetOpenedDataSourceArrResponse(FrameworkEventTypeHelper.ENUM_VALUES[9]),
	FET_OpenDataSetRequest(FrameworkEventTypeHelper.ENUM_VALUES[10]),
	FET_OpenDataSetResponse(FrameworkEventTypeHelper.ENUM_VALUES[11]),
	FET_CreateDataSetRequest(FrameworkEventTypeHelper.ENUM_VALUES[12]),
	FET_CreateDataSetResponse(FrameworkEventTypeHelper.ENUM_VALUES[13]),
	FET_CloseDataSetRequest(FrameworkEventTypeHelper.ENUM_VALUES[14]),
	FET_CloseDataSetResponse(FrameworkEventTypeHelper.ENUM_VALUES[15]),
	FET_RemoveDataSourceRequest(FrameworkEventTypeHelper.ENUM_VALUES[16]),
	FET_RemoveDataSourceResponse(FrameworkEventTypeHelper.ENUM_VALUES[17]),
	FET_ImportDataSourceRequest(FrameworkEventTypeHelper.ENUM_VALUES[18]),
	FET_ImportDataSourceResponse(FrameworkEventTypeHelper.ENUM_VALUES[19]),
	FET_ExportDataSourceRequest(FrameworkEventTypeHelper.ENUM_VALUES[20]),
	FET_ExportDataSourceResponse(FrameworkEventTypeHelper.ENUM_VALUES[21]),
	FET_EventTypeEnd_DataSourceManager(FrameworkEventTypeHelper.ENUM_VALUES[22]);
	private int value;
	FrameworkEventType(int i) {
		this.value = i;
	}
	public FrameworkEventType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final FrameworkEventType toEnum(int retval) {
		if(retval == FET_EventTypeStart_DataSourceManager.value){
			return FET_EventTypeStart_DataSourceManager;
		}
		else if(retval == FET_CreateDataSourceRequest.value){
			return FET_CreateDataSourceRequest;
		}
		else if(retval == FET_CreateDataSourceResponse.value){
			return FET_CreateDataSourceResponse;
		}
		else if(retval == FET_DeleteDataSourceRequest.value){
			return FET_DeleteDataSourceRequest;
		}
		else if(retval == FET_DeleteDataSourceResponse.value){
			return FET_DeleteDataSourceResponse;
		}
		else if(retval == FET_OpenDataSourceRequest.value){
			return FET_OpenDataSourceRequest;
		}
		else if(retval == FET_OpenDataSourceResponse.value){
			return FET_OpenDataSourceResponse;
		}
		else if(retval == FET_CloseDataSourceRequest.value){
			return FET_CloseDataSourceRequest;
		}
		else if(retval == FET_CloseDataSourceResponse.value){
			return FET_CloseDataSourceResponse;
		}
		else if(retval == FET_GetOpenedDataSourceArrResponse.value){
			return FET_GetOpenedDataSourceArrResponse;
		}
		else if(retval == FET_OpenDataSetRequest.value){
			return FET_OpenDataSetRequest;
		}
		else if(retval == FET_OpenDataSetResponse.value){
			return FET_OpenDataSetResponse;
		}
		else if(retval == FET_CreateDataSetRequest.value){
			return FET_CreateDataSetRequest;
		}
		else if(retval == FET_CreateDataSetResponse.value){
			return FET_CreateDataSetResponse;
		}
		else if(retval == FET_CloseDataSetRequest.value){
			return FET_CloseDataSetRequest;
		}
		else if(retval == FET_CloseDataSetResponse.value){
			return FET_CloseDataSetResponse;
		}
		else if(retval == FET_RemoveDataSourceRequest.value){
			return FET_RemoveDataSourceRequest;
		}
		else if(retval == FET_RemoveDataSourceResponse.value){
			return FET_RemoveDataSourceResponse;
		}
		else if(retval == FET_ImportDataSourceRequest.value){
			return FET_ImportDataSourceRequest;
		}
		else if(retval == FET_ImportDataSourceResponse.value){
			return FET_ImportDataSourceResponse;
		}
		else if(retval == FET_ExportDataSourceRequest.value){
			return FET_ExportDataSourceRequest;
		}
		else if(retval == FET_ExportDataSourceResponse.value){
			return FET_ExportDataSourceResponse;
		}
		else if(retval == FET_EventTypeEnd_DataSourceManager.value){
			return FET_EventTypeEnd_DataSourceManager;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class FrameworkEventTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
