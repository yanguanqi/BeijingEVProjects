package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVLayerType implements INativeEnum<EVLayerType> {
	LT_UNKNOWN(EVLayerTypeHelper.ENUM_VALUES[0]),
	LT_VECTOR_DATALAYER(EVLayerTypeHelper.ENUM_VALUES[1]),
	LT_VECTOR_NETWORKLAYER(EVLayerTypeHelper.ENUM_VALUES[2]),
	LT_VECTOR_CHARTLAYER(EVLayerTypeHelper.ENUM_VALUES[3]),
	LT_VECTOR_ROUTELAYER(EVLayerTypeHelper.ENUM_VALUES[4]),
	LT_VECTOR_NETWORKANALYSTLAYER(EVLayerTypeHelper.ENUM_VALUES[5]),
	LT_VECTOR_ANNOLAYER(EVLayerTypeHelper.ENUM_VALUES[6]),
	LT_RASTER_IMAGE(EVLayerTypeHelper.ENUM_VALUES[7]),
	LT_DBRASTER_LAYER(EVLayerTypeHelper.ENUM_VALUES[8]),
	LT_GROUPLAYER(EVLayerTypeHelper.ENUM_VALUES[9]),
	LT_BASEGROUPLAYER(EVLayerTypeHelper.ENUM_VALUES[10]),
	LT_MAPWFSLAYER(EVLayerTypeHelper.ENUM_VALUES[11]),
	LT_MAPSERVERLAYER(EVLayerTypeHelper.ENUM_VALUES[12]),
	LT_VECTORFILE_DATALAYER(EVLayerTypeHelper.ENUM_VALUES[13]),
	LT_VECTORFILE_ANNOLAYER(EVLayerTypeHelper.ENUM_VALUES[14]),
	LT_KmlLayer(EVLayerTypeHelper.ENUM_VALUES[15]),
	LT_ImageOverLayer(EVLayerTypeHelper.ENUM_VALUES[16]),
	LT_Smart3DLayer(EVLayerTypeHelper.ENUM_VALUES[17]),
	LT_MeshXLayer(EVLayerTypeHelper.ENUM_VALUES[18]),
	LT_MeshXGLayer(EVLayerTypeHelper.ENUM_VALUES[19]),
	LT_SERVER_Smart3DLayer(EVLayerTypeHelper.ENUM_VALUES[20]),
	LT_SERVER_MeshXGLayer(EVLayerTypeHelper.ENUM_VALUES[21]),
	LT_LasLayer(EVLayerTypeHelper.ENUM_VALUES[22]),
	LT_SERVER_LasLayer(EVLayerTypeHelper.ENUM_VALUES[23]),
	LT_ImageClampLayer(EVLayerTypeHelper.ENUM_VALUES[24]),
	LT_VectorWebClampLayer(EVLayerTypeHelper.ENUM_VALUES[25]),
	LT_VectorDBClampLayer(EVLayerTypeHelper.ENUM_VALUES[26]),
	LT_ChartClampLayer(EVLayerTypeHelper.ENUM_VALUES[27]),
	LT_WmtsClampLayer(EVLayerTypeHelper.ENUM_VALUES[28]),
	LT_ChartWmsClampLayer(EVLayerTypeHelper.ENUM_VALUES[29]),
	LT_ChartWmtsClampLayer(EVLayerTypeHelper.ENUM_VALUES[30]),
	LT_ElementClampLayer(EVLayerTypeHelper.ENUM_VALUES[31]),
	LT_RasterClampLayer(EVLayerTypeHelper.ENUM_VALUES[32]),
	LT_LocalRasterClampLayer(EVLayerTypeHelper.ENUM_VALUES[33]),
	LT_VectorRelativeLayer(EVLayerTypeHelper.ENUM_VALUES[34]),
	LT_ElementRelativelayer(EVLayerTypeHelper.ENUM_VALUES[35]),
	LT_EntityLayer(EVLayerTypeHelper.ENUM_VALUES[36]),
	LT_EntityInstanceLayer(EVLayerTypeHelper.ENUM_VALUES[37]),
	LT_EffectLayer(EVLayerTypeHelper.ENUM_VALUES[38]),
	LT_OgcWmsClampLayer(EVLayerTypeHelper.ENUM_VALUES[39]),
	LT_OgcWmtsClampLayer(EVLayerTypeHelper.ENUM_VALUES[40]),
	LT_VectorWebRelativeLayer(EVLayerTypeHelper.ENUM_VALUES[41]),
	LT_VectorOctreeWebClampLayer(EVLayerTypeHelper.ENUM_VALUES[42]),
	LT_TerrainLayer(EVLayerTypeHelper.ENUM_VALUES[43]),
	LT_LocalTerrainLayer(EVLayerTypeHelper.ENUM_VALUES[44]),
	LT_NeoVectorWebLayer(EVLayerTypeHelper.ENUM_VALUES[45]),
	LT_OgcWFSVectorRelativeLayer(EVLayerTypeHelper.ENUM_VALUES[46]),
	LT_OgcWFSVectorClampLayer(EVLayerTypeHelper.ENUM_VALUES[47]),
	LT_KmlGroupLayer(EVLayerTypeHelper.ENUM_VALUES[48]),
	LT_ImageGroupLayer(EVLayerTypeHelper.ENUM_VALUES[49]),
	LT_FeatureGroupLayer(EVLayerTypeHelper.ENUM_VALUES[50]),
	LT_TerrainGroupLayer(EVLayerTypeHelper.ENUM_VALUES[51]),
	LT_TempGroupLayer(EVLayerTypeHelper.ENUM_VALUES[52]),
	LT_SERVER_WMTS_Layer(EVLayerTypeHelper.ENUM_VALUES[53]),
	LT_SERVER_WMS_Layer(EVLayerTypeHelper.ENUM_VALUES[54]),
	LT_SERVER_WFS_Layer(EVLayerTypeHelper.ENUM_VALUES[55]),
	LT_SERVER_DEM_Layer(EVLayerTypeHelper.ENUM_VALUES[56]),
	LT_SERVER_GEOCODE_Layer(EVLayerTypeHelper.ENUM_VALUES[57]),
	LT_SERVER_KML_Layer(EVLayerTypeHelper.ENUM_VALUES[58]),
	LT_SERVER_GEOMETRY_Layer(EVLayerTypeHelper.ENUM_VALUES[59]),
	LT_SERVER_MODEL_Layer(EVLayerTypeHelper.ENUM_VALUES[60]),
	LT_SERVER_MODEL_TEMPLATE_Layer(EVLayerTypeHelper.ENUM_VALUES[61]),
	LT_SERVER_OGC_WMTS_Layer(EVLayerTypeHelper.ENUM_VALUES[62]),
	LT_SERVER_OGC_WMS_Layer(EVLayerTypeHelper.ENUM_VALUES[63]),
	LT_SERVER_OGC_WFS_Layer(EVLayerTypeHelper.ENUM_VALUES[64]);
	private int value;
	EVLayerType(int i) {
		this.value = i;
	}
	public EVLayerType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVLayerType toEnum(int retval) {
		if(retval == LT_UNKNOWN.value){
			return LT_UNKNOWN;
		}
		else if(retval == LT_VECTOR_DATALAYER.value){
			return LT_VECTOR_DATALAYER;
		}
		else if(retval == LT_VECTOR_NETWORKLAYER.value){
			return LT_VECTOR_NETWORKLAYER;
		}
		else if(retval == LT_VECTOR_CHARTLAYER.value){
			return LT_VECTOR_CHARTLAYER;
		}
		else if(retval == LT_VECTOR_ROUTELAYER.value){
			return LT_VECTOR_ROUTELAYER;
		}
		else if(retval == LT_VECTOR_NETWORKANALYSTLAYER.value){
			return LT_VECTOR_NETWORKANALYSTLAYER;
		}
		else if(retval == LT_VECTOR_ANNOLAYER.value){
			return LT_VECTOR_ANNOLAYER;
		}
		else if(retval == LT_RASTER_IMAGE.value){
			return LT_RASTER_IMAGE;
		}
		else if(retval == LT_DBRASTER_LAYER.value){
			return LT_DBRASTER_LAYER;
		}
		else if(retval == LT_GROUPLAYER.value){
			return LT_GROUPLAYER;
		}
		else if(retval == LT_BASEGROUPLAYER.value){
			return LT_BASEGROUPLAYER;
		}
		else if(retval == LT_MAPWFSLAYER.value){
			return LT_MAPWFSLAYER;
		}
		else if(retval == LT_MAPSERVERLAYER.value){
			return LT_MAPSERVERLAYER;
		}
		else if(retval == LT_VECTORFILE_DATALAYER.value){
			return LT_VECTORFILE_DATALAYER;
		}
		else if(retval == LT_VECTORFILE_ANNOLAYER.value){
			return LT_VECTORFILE_ANNOLAYER;
		}
		else if(retval == LT_KmlLayer.value){
			return LT_KmlLayer;
		}
		else if(retval == LT_ImageOverLayer.value){
			return LT_ImageOverLayer;
		}
		else if(retval == LT_Smart3DLayer.value){
			return LT_Smart3DLayer;
		}
		else if(retval == LT_MeshXLayer.value){
			return LT_MeshXLayer;
		}
		else if(retval == LT_MeshXGLayer.value){
			return LT_MeshXGLayer;
		}
		else if(retval == LT_SERVER_Smart3DLayer.value){
			return LT_SERVER_Smart3DLayer;
		}
		else if(retval == LT_SERVER_MeshXGLayer.value){
			return LT_SERVER_MeshXGLayer;
		}
		else if(retval == LT_LasLayer.value){
			return LT_LasLayer;
		}
		else if(retval == LT_SERVER_LasLayer.value){
			return LT_SERVER_LasLayer;
		}
		else if(retval == LT_ImageClampLayer.value){
			return LT_ImageClampLayer;
		}
		else if(retval == LT_VectorWebClampLayer.value){
			return LT_VectorWebClampLayer;
		}
		else if(retval == LT_VectorDBClampLayer.value){
			return LT_VectorDBClampLayer;
		}
		else if(retval == LT_ChartClampLayer.value){
			return LT_ChartClampLayer;
		}
		else if(retval == LT_WmtsClampLayer.value){
			return LT_WmtsClampLayer;
		}
		else if(retval == LT_ChartWmsClampLayer.value){
			return LT_ChartWmsClampLayer;
		}
		else if(retval == LT_ChartWmtsClampLayer.value){
			return LT_ChartWmtsClampLayer;
		}
		else if(retval == LT_ElementClampLayer.value){
			return LT_ElementClampLayer;
		}
		else if(retval == LT_RasterClampLayer.value){
			return LT_RasterClampLayer;
		}
		else if(retval == LT_LocalRasterClampLayer.value){
			return LT_LocalRasterClampLayer;
		}
		else if(retval == LT_VectorRelativeLayer.value){
			return LT_VectorRelativeLayer;
		}
		else if(retval == LT_ElementRelativelayer.value){
			return LT_ElementRelativelayer;
		}
		else if(retval == LT_EntityLayer.value){
			return LT_EntityLayer;
		}
		else if(retval == LT_EntityInstanceLayer.value){
			return LT_EntityInstanceLayer;
		}
		else if(retval == LT_EffectLayer.value){
			return LT_EffectLayer;
		}
		else if(retval == LT_OgcWmsClampLayer.value){
			return LT_OgcWmsClampLayer;
		}
		else if(retval == LT_OgcWmtsClampLayer.value){
			return LT_OgcWmtsClampLayer;
		}
		else if(retval == LT_VectorWebRelativeLayer.value){
			return LT_VectorWebRelativeLayer;
		}
		else if(retval == LT_VectorOctreeWebClampLayer.value){
			return LT_VectorOctreeWebClampLayer;
		}
		else if(retval == LT_TerrainLayer.value){
			return LT_TerrainLayer;
		}
		else if(retval == LT_LocalTerrainLayer.value){
			return LT_LocalTerrainLayer;
		}
		else if(retval == LT_NeoVectorWebLayer.value){
			return LT_NeoVectorWebLayer;
		}
		else if(retval == LT_OgcWFSVectorRelativeLayer.value){
			return LT_OgcWFSVectorRelativeLayer;
		}
		else if(retval == LT_OgcWFSVectorClampLayer.value){
			return LT_OgcWFSVectorClampLayer;
		}
		else if(retval == LT_KmlGroupLayer.value){
			return LT_KmlGroupLayer;
		}
		else if(retval == LT_ImageGroupLayer.value){
			return LT_ImageGroupLayer;
		}
		else if(retval == LT_FeatureGroupLayer.value){
			return LT_FeatureGroupLayer;
		}
		else if(retval == LT_TerrainGroupLayer.value){
			return LT_TerrainGroupLayer;
		}
		else if(retval == LT_TempGroupLayer.value){
			return LT_TempGroupLayer;
		}
		else if(retval == LT_SERVER_WMTS_Layer.value){
			return LT_SERVER_WMTS_Layer;
		}
		else if(retval == LT_SERVER_WMS_Layer.value){
			return LT_SERVER_WMS_Layer;
		}
		else if(retval == LT_SERVER_WFS_Layer.value){
			return LT_SERVER_WFS_Layer;
		}
		else if(retval == LT_SERVER_DEM_Layer.value){
			return LT_SERVER_DEM_Layer;
		}
		else if(retval == LT_SERVER_GEOCODE_Layer.value){
			return LT_SERVER_GEOCODE_Layer;
		}
		else if(retval == LT_SERVER_KML_Layer.value){
			return LT_SERVER_KML_Layer;
		}
		else if(retval == LT_SERVER_GEOMETRY_Layer.value){
			return LT_SERVER_GEOMETRY_Layer;
		}
		else if(retval == LT_SERVER_MODEL_Layer.value){
			return LT_SERVER_MODEL_Layer;
		}
		else if(retval == LT_SERVER_MODEL_TEMPLATE_Layer.value){
			return LT_SERVER_MODEL_TEMPLATE_Layer;
		}
		else if(retval == LT_SERVER_OGC_WMTS_Layer.value){
			return LT_SERVER_OGC_WMTS_Layer;
		}
		else if(retval == LT_SERVER_OGC_WMS_Layer.value){
			return LT_SERVER_OGC_WMS_Layer;
		}
		else if(retval == LT_SERVER_OGC_WFS_Layer.value){
			return LT_SERVER_OGC_WFS_Layer;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVLayerTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
