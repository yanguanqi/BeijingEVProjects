package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的图层数据类型
 */
public enum EVSSCLayerDataType implements INativeEnum<EVSSCLayerDataType> {
	SSC_LayerDataType_Unknown(EVSSCLayerDataTypeHelper.ENUM_VALUES[0]),
	SSC_LayerDataType_Image_Multi(EVSSCLayerDataTypeHelper.ENUM_VALUES[1]),
	SSC_LayerDataType_Image_Single(EVSSCLayerDataTypeHelper.ENUM_VALUES[2]),
	SSC_LayerDataType_DEM_int(EVSSCLayerDataTypeHelper.ENUM_VALUES[3]),
	SSC_LayerDataType_DEM_Float(EVSSCLayerDataTypeHelper.ENUM_VALUES[4]),
	SSC_LayerDataType_DEM_int8(EVSSCLayerDataTypeHelper.ENUM_VALUES[5]),
	SSC_LayerDataType_DEM_int16(EVSSCLayerDataTypeHelper.ENUM_VALUES[6]),
	SSC_LayerDataType_Vector_Point(EVSSCLayerDataTypeHelper.ENUM_VALUES[7]),
	SSC_LayerDataType_Vector_Polyline(EVSSCLayerDataTypeHelper.ENUM_VALUES[8]),
	SSC_LayerDataType_Vector_Polygon(EVSSCLayerDataTypeHelper.ENUM_VALUES[9]);
	private int value;
	EVSSCLayerDataType(int i) {
		this.value = i;
	}
	public EVSSCLayerDataType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSSCLayerDataType toEnum(int retval) {
		if(retval == SSC_LayerDataType_Unknown.value){
			return SSC_LayerDataType_Unknown;
		}
		else if(retval == SSC_LayerDataType_Image_Multi.value){
			return SSC_LayerDataType_Image_Multi;
		}
		else if(retval == SSC_LayerDataType_Image_Single.value){
			return SSC_LayerDataType_Image_Single;
		}
		else if(retval == SSC_LayerDataType_DEM_int.value){
			return SSC_LayerDataType_DEM_int;
		}
		else if(retval == SSC_LayerDataType_DEM_Float.value){
			return SSC_LayerDataType_DEM_Float;
		}
		else if(retval == SSC_LayerDataType_DEM_int8.value){
			return SSC_LayerDataType_DEM_int8;
		}
		else if(retval == SSC_LayerDataType_DEM_int16.value){
			return SSC_LayerDataType_DEM_int16;
		}
		else if(retval == SSC_LayerDataType_Vector_Point.value){
			return SSC_LayerDataType_Vector_Point;
		}
		else if(retval == SSC_LayerDataType_Vector_Polyline.value){
			return SSC_LayerDataType_Vector_Polyline;
		}
		else if(retval == SSC_LayerDataType_Vector_Polygon.value){
			return SSC_LayerDataType_Vector_Polygon;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSSCLayerDataTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
