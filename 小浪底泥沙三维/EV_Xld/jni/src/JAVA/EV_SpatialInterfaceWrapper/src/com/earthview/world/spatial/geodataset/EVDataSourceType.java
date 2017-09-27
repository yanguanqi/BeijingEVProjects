package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据源类型枚举
 */
public enum EVDataSourceType implements INativeEnum<EVDataSourceType> {
	DST_UNKNOWN(EVDataSourceTypeHelper.ENUM_VALUES[0]),
	DST_DATABASE_VECTOR(EVDataSourceTypeHelper.ENUM_VALUES[1]),
	DST_FILESYSTEM_SHAPEFILE(EVDataSourceTypeHelper.ENUM_VALUES[2]),
	DST_FILESYSTEM_CHART(EVDataSourceTypeHelper.ENUM_VALUES[3]),
	DST_DATABASE_RASTER(EVDataSourceTypeHelper.ENUM_VALUES[4]),
	DST_FILESYSTEM_RASTER(EVDataSourceTypeHelper.ENUM_VALUES[5]),
	DST_FILESYSTEM_KML(EVDataSourceTypeHelper.ENUM_VALUES[6]),
	DST_FILESYSTEM_FILE_SMART3D(EVDataSourceTypeHelper.ENUM_VALUES[7]),
	DST_FILESYSTEM_VECTOR(EVDataSourceTypeHelper.ENUM_VALUES[8]),
	DST_FILESYSTEM_SMART3D(EVDataSourceTypeHelper.ENUM_VALUES[9]),
	DST_FILESYSTEM_MESHX(EVDataSourceTypeHelper.ENUM_VALUES[10]),
	DST_FILESYSTEM_MESHXG(EVDataSourceTypeHelper.ENUM_VALUES[11]),
	DST_DATABASE_3DVECTOROCTREE(EVDataSourceTypeHelper.ENUM_VALUES[12]),
	DST_FILESYSTEM_LAS(EVDataSourceTypeHelper.ENUM_VALUES[13]),
	DST_DATABASE_MODEL(EVDataSourceTypeHelper.ENUM_VALUES[14]),
	DST_DATABASE_EFFECT(EVDataSourceTypeHelper.ENUM_VALUES[15]),
	DST_WEBSERVER_OGC_WMS(EVDataSourceTypeHelper.ENUM_VALUES[16]),
	DST_WEBSERVER_OGC_WMTS(EVDataSourceTypeHelper.ENUM_VALUES[17]),
	DST_WEBSERVER_OGC_WFS(EVDataSourceTypeHelper.ENUM_VALUES[18]),
	DST_WEBSERVER_EARTHVIEW_SERVER(EVDataSourceTypeHelper.ENUM_VALUES[19]),
	DST_CUSTOM(EVDataSourceTypeHelper.ENUM_VALUES[20]);
	private int value;
	EVDataSourceType(int i) {
		this.value = i;
	}
	public EVDataSourceType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVDataSourceType toEnum(int retval) {
		if(retval == DST_UNKNOWN.value){
			return DST_UNKNOWN;
		}
		else if(retval == DST_DATABASE_VECTOR.value){
			return DST_DATABASE_VECTOR;
		}
		else if(retval == DST_FILESYSTEM_SHAPEFILE.value){
			return DST_FILESYSTEM_SHAPEFILE;
		}
		else if(retval == DST_FILESYSTEM_CHART.value){
			return DST_FILESYSTEM_CHART;
		}
		else if(retval == DST_DATABASE_RASTER.value){
			return DST_DATABASE_RASTER;
		}
		else if(retval == DST_FILESYSTEM_RASTER.value){
			return DST_FILESYSTEM_RASTER;
		}
		else if(retval == DST_FILESYSTEM_KML.value){
			return DST_FILESYSTEM_KML;
		}
		else if(retval == DST_FILESYSTEM_FILE_SMART3D.value){
			return DST_FILESYSTEM_FILE_SMART3D;
		}
		else if(retval == DST_FILESYSTEM_VECTOR.value){
			return DST_FILESYSTEM_VECTOR;
		}
		else if(retval == DST_FILESYSTEM_SMART3D.value){
			return DST_FILESYSTEM_SMART3D;
		}
		else if(retval == DST_FILESYSTEM_MESHX.value){
			return DST_FILESYSTEM_MESHX;
		}
		else if(retval == DST_FILESYSTEM_MESHXG.value){
			return DST_FILESYSTEM_MESHXG;
		}
		else if(retval == DST_DATABASE_3DVECTOROCTREE.value){
			return DST_DATABASE_3DVECTOROCTREE;
		}
		else if(retval == DST_FILESYSTEM_LAS.value){
			return DST_FILESYSTEM_LAS;
		}
		else if(retval == DST_DATABASE_MODEL.value){
			return DST_DATABASE_MODEL;
		}
		else if(retval == DST_DATABASE_EFFECT.value){
			return DST_DATABASE_EFFECT;
		}
		else if(retval == DST_WEBSERVER_OGC_WMS.value){
			return DST_WEBSERVER_OGC_WMS;
		}
		else if(retval == DST_WEBSERVER_OGC_WMTS.value){
			return DST_WEBSERVER_OGC_WMTS;
		}
		else if(retval == DST_WEBSERVER_OGC_WFS.value){
			return DST_WEBSERVER_OGC_WFS;
		}
		else if(retval == DST_WEBSERVER_EARTHVIEW_SERVER.value){
			return DST_WEBSERVER_EARTHVIEW_SERVER;
		}
		else if(retval == DST_CUSTOM.value){
			return DST_CUSTOM;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVDataSourceTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
