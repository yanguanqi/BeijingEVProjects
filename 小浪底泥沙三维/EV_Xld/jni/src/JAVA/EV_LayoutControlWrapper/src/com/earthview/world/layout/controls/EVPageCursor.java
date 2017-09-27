package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVPageCursor implements INativeEnum<EVPageCursor> {
	PC_ArrowCursor(EVPageCursorHelper.ENUM_VALUES[0]),
	PC_CrossCursor(EVPageCursorHelper.ENUM_VALUES[1]),
	PC_OpenHandCursor(EVPageCursorHelper.ENUM_VALUES[2]),
	PC_CloseHandCursor(EVPageCursorHelper.ENUM_VALUES[3]),
	PC_PointingHandCursor(EVPageCursorHelper.ENUM_VALUES[4]),
	PC_ZoomInCursor(EVPageCursorHelper.ENUM_VALUES[5]),
	PC_ZoomOutCursor(EVPageCursorHelper.ENUM_VALUES[6]),
	PC_PageZoomInCursor(EVPageCursorHelper.ENUM_VALUES[7]),
	PC_PageZoomOutCursor(EVPageCursorHelper.ENUM_VALUES[8]),
	PC_ElementSelectCursor(EVPageCursorHelper.ENUM_VALUES[9]),
	PC_MoveElementCursor(EVPageCursorHelper.ENUM_VALUES[10]),
	PC_MoveRightDownCursor(EVPageCursorHelper.ENUM_VALUES[11]),
	PC_MoveLeftDownCursor(EVPageCursorHelper.ENUM_VALUES[12]),
	PC_MoveHorizontal(EVPageCursorHelper.ENUM_VALUES[13]),
	PC_MoveVertical(EVPageCursorHelper.ENUM_VALUES[14]),
	PC_OpenHandCursorOnPage(EVPageCursorHelper.ENUM_VALUES[15]),
	PC_CloseHandCursorOnPage(EVPageCursorHelper.ENUM_VALUES[16]);
	private int value;
	EVPageCursor(int i) {
		this.value = i;
	}
	public EVPageCursor getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVPageCursor toEnum(int retval) {
		if(retval == PC_ArrowCursor.value){
			return PC_ArrowCursor;
		}
		else if(retval == PC_CrossCursor.value){
			return PC_CrossCursor;
		}
		else if(retval == PC_OpenHandCursor.value){
			return PC_OpenHandCursor;
		}
		else if(retval == PC_CloseHandCursor.value){
			return PC_CloseHandCursor;
		}
		else if(retval == PC_PointingHandCursor.value){
			return PC_PointingHandCursor;
		}
		else if(retval == PC_ZoomInCursor.value){
			return PC_ZoomInCursor;
		}
		else if(retval == PC_ZoomOutCursor.value){
			return PC_ZoomOutCursor;
		}
		else if(retval == PC_PageZoomInCursor.value){
			return PC_PageZoomInCursor;
		}
		else if(retval == PC_PageZoomOutCursor.value){
			return PC_PageZoomOutCursor;
		}
		else if(retval == PC_ElementSelectCursor.value){
			return PC_ElementSelectCursor;
		}
		else if(retval == PC_MoveElementCursor.value){
			return PC_MoveElementCursor;
		}
		else if(retval == PC_MoveRightDownCursor.value){
			return PC_MoveRightDownCursor;
		}
		else if(retval == PC_MoveLeftDownCursor.value){
			return PC_MoveLeftDownCursor;
		}
		else if(retval == PC_MoveHorizontal.value){
			return PC_MoveHorizontal;
		}
		else if(retval == PC_MoveVertical.value){
			return PC_MoveVertical;
		}
		else if(retval == PC_OpenHandCursorOnPage.value){
			return PC_OpenHandCursorOnPage;
		}
		else if(retval == PC_CloseHandCursorOnPage.value){
			return PC_CloseHandCursorOnPage;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVPageCursorHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
