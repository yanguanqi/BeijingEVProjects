package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///编辑操作枚举
public enum EVEditingOperationType implements INativeEnum<EVEditingOperationType> {
	EOT_Unknown(EVEditingOperationTypeHelper.ENUM_VALUES[0]),
	EOT_AddPoint(EVEditingOperationTypeHelper.ENUM_VALUES[1]),
	EOT_MoveVertex(EVEditingOperationTypeHelper.ENUM_VALUES[2]),
	EOT_MoveGeometryPart(EVEditingOperationTypeHelper.ENUM_VALUES[3]),
	EOT_MoveGeometry(EVEditingOperationTypeHelper.ENUM_VALUES[4]),
	EOT_InsertVertex(EVEditingOperationTypeHelper.ENUM_VALUES[5]),
	EOT_DeleteVertex(EVEditingOperationTypeHelper.ENUM_VALUES[6]),
	EOT_DeletePart(EVEditingOperationTypeHelper.ENUM_VALUES[7]),
	EOT_ChangeGeometry(EVEditingOperationTypeHelper.ENUM_VALUES[8]),
	EOT_ChangeAttribute(EVEditingOperationTypeHelper.ENUM_VALUES[9]),
	EOT_AddFeature(EVEditingOperationTypeHelper.ENUM_VALUES[10]),
	EOT_DeleteFeature(EVEditingOperationTypeHelper.ENUM_VALUES[11]),
	EOT_MultiOperation(EVEditingOperationTypeHelper.ENUM_VALUES[12]);
	private int value;
	EVEditingOperationType(int i) {
		this.value = i;
	}
	public EVEditingOperationType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVEditingOperationType toEnum(int retval) {
		if(retval == EOT_Unknown.value){
			return EOT_Unknown;
		}
		else if(retval == EOT_AddPoint.value){
			return EOT_AddPoint;
		}
		else if(retval == EOT_MoveVertex.value){
			return EOT_MoveVertex;
		}
		else if(retval == EOT_MoveGeometryPart.value){
			return EOT_MoveGeometryPart;
		}
		else if(retval == EOT_MoveGeometry.value){
			return EOT_MoveGeometry;
		}
		else if(retval == EOT_InsertVertex.value){
			return EOT_InsertVertex;
		}
		else if(retval == EOT_DeleteVertex.value){
			return EOT_DeleteVertex;
		}
		else if(retval == EOT_DeletePart.value){
			return EOT_DeletePart;
		}
		else if(retval == EOT_ChangeGeometry.value){
			return EOT_ChangeGeometry;
		}
		else if(retval == EOT_ChangeAttribute.value){
			return EOT_ChangeAttribute;
		}
		else if(retval == EOT_AddFeature.value){
			return EOT_AddFeature;
		}
		else if(retval == EOT_DeleteFeature.value){
			return EOT_DeleteFeature;
		}
		else if(retval == EOT_MultiOperation.value){
			return EOT_MultiOperation;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVEditingOperationTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
