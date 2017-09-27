package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据集类型枚举
 */
public enum EVDatasetType implements INativeEnum<EVDatasetType> {
	DT_UNKNOWN(EVDatasetTypeHelper.ENUM_VALUES[0]),
	DT_VECTOR_FEATURECLASS(EVDatasetTypeHelper.ENUM_VALUES[1]),
	DT_VECTOR_DATASETS(EVDatasetTypeHelper.ENUM_VALUES[2]),
	DT_VECTOR_NETWORK(EVDatasetTypeHelper.ENUM_VALUES[3]),
	DT_VECTOR_CHART(EVDatasetTypeHelper.ENUM_VALUES[4]),
	DT_VECTOR_ANNOTATION(EVDatasetTypeHelper.ENUM_VALUES[5]),
	DT_VECTORFILE_DATASETS(EVDatasetTypeHelper.ENUM_VALUES[6]),
	DT_VECTORFILE_FEATURECLASS(EVDatasetTypeHelper.ENUM_VALUES[7]),
	DT_VECTORFILE_ANNOTATION(EVDatasetTypeHelper.ENUM_VALUES[8]),
	DT_RASTER_DATASET(EVDatasetTypeHelper.ENUM_VALUES[9]),
	DT_RASTER_BAND(EVDatasetTypeHelper.ENUM_VALUES[10]),
	DT_DBRASTER_DATASET(EVDatasetTypeHelper.ENUM_VALUES[11]),
	DT_DBRASTER_BAND(EVDatasetTypeHelper.ENUM_VALUES[12]),
	DT_ENTITY_TEMPL_DATASET(EVDatasetTypeHelper.ENUM_VALUES[13]),
	DT_ENTITY_DATASET(EVDatasetTypeHelper.ENUM_VALUES[14]),
	DT_MESHTEMPLATE_DATASET(EVDatasetTypeHelper.ENUM_VALUES[15]),
	DT_EFFECT_DATASET(EVDatasetTypeHelper.ENUM_VALUES[16]),
	DT_LOCAL_KML_DATASET(EVDatasetTypeHelper.ENUM_VALUES[17]),
	DT_LOCAL_FILE_SMART3D_DATASET(EVDatasetTypeHelper.ENUM_VALUES[18]),
	DT_LOCAL_7Z_SMART3D_DATASET(EVDatasetTypeHelper.ENUM_VALUES[19]),
	DT_LOCAL_7Z_MESHX_DATASET(EVDatasetTypeHelper.ENUM_VALUES[20]),
	DT_LOCAL_7Z_MESHXG_DATASET(EVDatasetTypeHelper.ENUM_VALUES[21]),
	DT_3DVECTOROCTREE_DATASET(EVDatasetTypeHelper.ENUM_VALUES[22]),
	DT_SERVER_WMTS_DATASET(EVDatasetTypeHelper.ENUM_VALUES[23]),
	DT_SERVER_WMS_DATASET(EVDatasetTypeHelper.ENUM_VALUES[24]),
	DT_SERVER_WFS_DATASET(EVDatasetTypeHelper.ENUM_VALUES[25]),
	DT_SERVER_DEM_DATASET(EVDatasetTypeHelper.ENUM_VALUES[26]),
	DT_SERVER_GEOCODE_DATASET(EVDatasetTypeHelper.ENUM_VALUES[27]),
	DT_SERVER_KML_DATASET(EVDatasetTypeHelper.ENUM_VALUES[28]),
	DT_SERVER_GEOMETRY_DATASET(EVDatasetTypeHelper.ENUM_VALUES[29]),
	DT_SERVER_MODEL_DATASET(EVDatasetTypeHelper.ENUM_VALUES[30]),
	DT_SERVER_MODEL_TEMPLATE_DATASET(EVDatasetTypeHelper.ENUM_VALUES[31]),
	DT_SERVER_OGC_WMTS_DATASET(EVDatasetTypeHelper.ENUM_VALUES[32]),
	DT_SERVER_OGC_WMS_DATASET(EVDatasetTypeHelper.ENUM_VALUES[33]),
	DT_SERVER_OGC_WFS_DATASET(EVDatasetTypeHelper.ENUM_VALUES[34]),
	DT_SERVER_MULTIMEDIA_DATASET(EVDatasetTypeHelper.ENUM_VALUES[35]),
	DT_SERVER_WMS_CHART_DATASET(EVDatasetTypeHelper.ENUM_VALUES[36]),
	DT_SERVER_WMS_IMAGE_DATASET(EVDatasetTypeHelper.ENUM_VALUES[37]),
	DT_SERVER_7Z_SMART3D_DATASET(EVDatasetTypeHelper.ENUM_VALUES[38]),
	DT_SERVER_7Z_MESHX_DATASET(EVDatasetTypeHelper.ENUM_VALUES[39]),
	DT_SERVER_7Z_MESHXG_DATASET(EVDatasetTypeHelper.ENUM_VALUES[40]),
	DT_SERVER_3DVECTOROCTREE_DATASET(EVDatasetTypeHelper.ENUM_VALUES[41]),
	DT_LOCAL_7Z_LAS_DATASET(EVDatasetTypeHelper.ENUM_VALUES[42]),
	DT_SERVER_7Z_LAS_DATASET(EVDatasetTypeHelper.ENUM_VALUES[43]);
	private int value;
	EVDatasetType(int i) {
		this.value = i;
	}
	public EVDatasetType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVDatasetType toEnum(int retval) {
		if(retval == DT_UNKNOWN.value){
			return DT_UNKNOWN;
		}
		else if(retval == DT_VECTOR_FEATURECLASS.value){
			return DT_VECTOR_FEATURECLASS;
		}
		else if(retval == DT_VECTOR_DATASETS.value){
			return DT_VECTOR_DATASETS;
		}
		else if(retval == DT_VECTOR_NETWORK.value){
			return DT_VECTOR_NETWORK;
		}
		else if(retval == DT_VECTOR_CHART.value){
			return DT_VECTOR_CHART;
		}
		else if(retval == DT_VECTOR_ANNOTATION.value){
			return DT_VECTOR_ANNOTATION;
		}
		else if(retval == DT_VECTORFILE_DATASETS.value){
			return DT_VECTORFILE_DATASETS;
		}
		else if(retval == DT_VECTORFILE_FEATURECLASS.value){
			return DT_VECTORFILE_FEATURECLASS;
		}
		else if(retval == DT_VECTORFILE_ANNOTATION.value){
			return DT_VECTORFILE_ANNOTATION;
		}
		else if(retval == DT_RASTER_DATASET.value){
			return DT_RASTER_DATASET;
		}
		else if(retval == DT_RASTER_BAND.value){
			return DT_RASTER_BAND;
		}
		else if(retval == DT_DBRASTER_DATASET.value){
			return DT_DBRASTER_DATASET;
		}
		else if(retval == DT_DBRASTER_BAND.value){
			return DT_DBRASTER_BAND;
		}
		else if(retval == DT_ENTITY_TEMPL_DATASET.value){
			return DT_ENTITY_TEMPL_DATASET;
		}
		else if(retval == DT_ENTITY_DATASET.value){
			return DT_ENTITY_DATASET;
		}
		else if(retval == DT_MESHTEMPLATE_DATASET.value){
			return DT_MESHTEMPLATE_DATASET;
		}
		else if(retval == DT_EFFECT_DATASET.value){
			return DT_EFFECT_DATASET;
		}
		else if(retval == DT_LOCAL_KML_DATASET.value){
			return DT_LOCAL_KML_DATASET;
		}
		else if(retval == DT_LOCAL_FILE_SMART3D_DATASET.value){
			return DT_LOCAL_FILE_SMART3D_DATASET;
		}
		else if(retval == DT_LOCAL_7Z_SMART3D_DATASET.value){
			return DT_LOCAL_7Z_SMART3D_DATASET;
		}
		else if(retval == DT_LOCAL_7Z_MESHX_DATASET.value){
			return DT_LOCAL_7Z_MESHX_DATASET;
		}
		else if(retval == DT_LOCAL_7Z_MESHXG_DATASET.value){
			return DT_LOCAL_7Z_MESHXG_DATASET;
		}
		else if(retval == DT_3DVECTOROCTREE_DATASET.value){
			return DT_3DVECTOROCTREE_DATASET;
		}
		else if(retval == DT_SERVER_WMTS_DATASET.value){
			return DT_SERVER_WMTS_DATASET;
		}
		else if(retval == DT_SERVER_WMS_DATASET.value){
			return DT_SERVER_WMS_DATASET;
		}
		else if(retval == DT_SERVER_WFS_DATASET.value){
			return DT_SERVER_WFS_DATASET;
		}
		else if(retval == DT_SERVER_DEM_DATASET.value){
			return DT_SERVER_DEM_DATASET;
		}
		else if(retval == DT_SERVER_GEOCODE_DATASET.value){
			return DT_SERVER_GEOCODE_DATASET;
		}
		else if(retval == DT_SERVER_KML_DATASET.value){
			return DT_SERVER_KML_DATASET;
		}
		else if(retval == DT_SERVER_GEOMETRY_DATASET.value){
			return DT_SERVER_GEOMETRY_DATASET;
		}
		else if(retval == DT_SERVER_MODEL_DATASET.value){
			return DT_SERVER_MODEL_DATASET;
		}
		else if(retval == DT_SERVER_MODEL_TEMPLATE_DATASET.value){
			return DT_SERVER_MODEL_TEMPLATE_DATASET;
		}
		else if(retval == DT_SERVER_OGC_WMTS_DATASET.value){
			return DT_SERVER_OGC_WMTS_DATASET;
		}
		else if(retval == DT_SERVER_OGC_WMS_DATASET.value){
			return DT_SERVER_OGC_WMS_DATASET;
		}
		else if(retval == DT_SERVER_OGC_WFS_DATASET.value){
			return DT_SERVER_OGC_WFS_DATASET;
		}
		else if(retval == DT_SERVER_MULTIMEDIA_DATASET.value){
			return DT_SERVER_MULTIMEDIA_DATASET;
		}
		else if(retval == DT_SERVER_WMS_CHART_DATASET.value){
			return DT_SERVER_WMS_CHART_DATASET;
		}
		else if(retval == DT_SERVER_WMS_IMAGE_DATASET.value){
			return DT_SERVER_WMS_IMAGE_DATASET;
		}
		else if(retval == DT_SERVER_7Z_SMART3D_DATASET.value){
			return DT_SERVER_7Z_SMART3D_DATASET;
		}
		else if(retval == DT_SERVER_7Z_MESHX_DATASET.value){
			return DT_SERVER_7Z_MESHX_DATASET;
		}
		else if(retval == DT_SERVER_7Z_MESHXG_DATASET.value){
			return DT_SERVER_7Z_MESHXG_DATASET;
		}
		else if(retval == DT_SERVER_3DVECTOROCTREE_DATASET.value){
			return DT_SERVER_3DVECTOROCTREE_DATASET;
		}
		else if(retval == DT_LOCAL_7Z_LAS_DATASET.value){
			return DT_LOCAL_7Z_LAS_DATASET;
		}
		else if(retval == DT_SERVER_7Z_LAS_DATASET.value){
			return DT_SERVER_7Z_LAS_DATASET;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVDatasetTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
