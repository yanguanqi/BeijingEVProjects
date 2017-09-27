package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 跟踪对象类型枚举
 */
public enum EVTrackingItemType implements INativeEnum<EVTrackingItemType> {
	TIT_Unknown(EVTrackingItemTypeHelper.ENUM_VALUES[0]),
	TIT_GroupItem(EVTrackingItemTypeHelper.ENUM_VALUES[1]),
	TIT_ImageItem(EVTrackingItemTypeHelper.ENUM_VALUES[2]),
	TIT_TextItem(EVTrackingItemTypeHelper.ENUM_VALUES[3]),
	TIT_GeometryItem(EVTrackingItemTypeHelper.ENUM_VALUES[4]),
	TIT_GeomItemEx(EVTrackingItemTypeHelper.ENUM_VALUES[5]),
	TIT_GeomsItem(EVTrackingItemTypeHelper.ENUM_VALUES[6]),
	TIT_PolylineShape(EVTrackingItemTypeHelper.ENUM_VALUES[7]),
	TIT_PolygonShape(EVTrackingItemTypeHelper.ENUM_VALUES[8]),
	TIT_RectangleShape(EVTrackingItemTypeHelper.ENUM_VALUES[9]),
	TIT_EllipseShape(EVTrackingItemTypeHelper.ENUM_VALUES[10]);
	private int value;
	EVTrackingItemType(int i) {
		this.value = i;
	}
	public EVTrackingItemType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTrackingItemType toEnum(int retval) {
		if(retval == TIT_Unknown.value){
			return TIT_Unknown;
		}
		else if(retval == TIT_GroupItem.value){
			return TIT_GroupItem;
		}
		else if(retval == TIT_ImageItem.value){
			return TIT_ImageItem;
		}
		else if(retval == TIT_TextItem.value){
			return TIT_TextItem;
		}
		else if(retval == TIT_GeometryItem.value){
			return TIT_GeometryItem;
		}
		else if(retval == TIT_GeomItemEx.value){
			return TIT_GeomItemEx;
		}
		else if(retval == TIT_GeomsItem.value){
			return TIT_GeomsItem;
		}
		else if(retval == TIT_PolylineShape.value){
			return TIT_PolylineShape;
		}
		else if(retval == TIT_PolygonShape.value){
			return TIT_PolygonShape;
		}
		else if(retval == TIT_RectangleShape.value){
			return TIT_RectangleShape;
		}
		else if(retval == TIT_EllipseShape.value){
			return TIT_EllipseShape;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTrackingItemTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
