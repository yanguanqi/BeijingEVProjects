package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVMapCursor implements INativeEnum<EVMapCursor> {
	MC_ArrowCursor(EVMapCursorHelper.ENUM_VALUES[0]),
	MC_CrossCursor(EVMapCursorHelper.ENUM_VALUES[1]),
	MC_OpenHandCursor(EVMapCursorHelper.ENUM_VALUES[2]),
	MC_CloseHandCursor(EVMapCursorHelper.ENUM_VALUES[3]),
	MC_PointingHandCursor(EVMapCursorHelper.ENUM_VALUES[4]),
	MC_MoveVertexCursor(EVMapCursorHelper.ENUM_VALUES[5]),
	MC_MoveFeatureCursor(EVMapCursorHelper.ENUM_VALUES[6]),
	MC_RotateFeatureCursor(EVMapCursorHelper.ENUM_VALUES[7]),
	MC_SketchFeatureCursor(EVMapCursorHelper.ENUM_VALUES[8]),
	MC_MeasureCursor(EVMapCursorHelper.ENUM_VALUES[9]),
	MC_ZoomInCursor(EVMapCursorHelper.ENUM_VALUES[10]),
	MC_ZoomOutCursor(EVMapCursorHelper.ENUM_VALUES[11]),
	MC_EditSelection(EVMapCursorHelper.ENUM_VALUES[12]),
	MC_ModifySelection(EVMapCursorHelper.ENUM_VALUES[13]),
	MC_PasteCursor(EVMapCursorHelper.ENUM_VALUES[14]);
	private int value;
	EVMapCursor(int i) {
		this.value = i;
	}
	public EVMapCursor getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVMapCursor toEnum(int retval) {
		if(retval == MC_ArrowCursor.value){
			return MC_ArrowCursor;
		}
		else if(retval == MC_CrossCursor.value){
			return MC_CrossCursor;
		}
		else if(retval == MC_OpenHandCursor.value){
			return MC_OpenHandCursor;
		}
		else if(retval == MC_CloseHandCursor.value){
			return MC_CloseHandCursor;
		}
		else if(retval == MC_PointingHandCursor.value){
			return MC_PointingHandCursor;
		}
		else if(retval == MC_MoveVertexCursor.value){
			return MC_MoveVertexCursor;
		}
		else if(retval == MC_MoveFeatureCursor.value){
			return MC_MoveFeatureCursor;
		}
		else if(retval == MC_RotateFeatureCursor.value){
			return MC_RotateFeatureCursor;
		}
		else if(retval == MC_SketchFeatureCursor.value){
			return MC_SketchFeatureCursor;
		}
		else if(retval == MC_MeasureCursor.value){
			return MC_MeasureCursor;
		}
		else if(retval == MC_ZoomInCursor.value){
			return MC_ZoomInCursor;
		}
		else if(retval == MC_ZoomOutCursor.value){
			return MC_ZoomOutCursor;
		}
		else if(retval == MC_EditSelection.value){
			return MC_EditSelection;
		}
		else if(retval == MC_ModifySelection.value){
			return MC_ModifySelection;
		}
		else if(retval == MC_PasteCursor.value){
			return MC_PasteCursor;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVMapCursorHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
