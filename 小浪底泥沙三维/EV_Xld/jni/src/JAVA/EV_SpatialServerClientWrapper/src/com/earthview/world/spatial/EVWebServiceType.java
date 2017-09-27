package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * Web服务类型
 */
public enum EVWebServiceType implements INativeEnum<EVWebServiceType> {
	WST_EV_UNKNOWN(EVWebServiceTypeHelper.ENUM_VALUES[0]),
	WST_EV_WMTS(EVWebServiceTypeHelper.ENUM_VALUES[1]),
	WST_EV_WMS(EVWebServiceTypeHelper.ENUM_VALUES[2]),
	WST_EV_WFS(EVWebServiceTypeHelper.ENUM_VALUES[3]),
	WST_EV_GlobeService(EVWebServiceTypeHelper.ENUM_VALUES[4]),
	WST_EV_GeoCodeService(EVWebServiceTypeHelper.ENUM_VALUES[5]),
	WST_EV_GeometryService(EVWebServiceTypeHelper.ENUM_VALUES[6]),
	WST_EV_WebMetadataService(EVWebServiceTypeHelper.ENUM_VALUES[7]),
	WST_UpdateService(EVWebServiceTypeHelper.ENUM_VALUES[8]),
	WST_OGC_WMTS(EVWebServiceTypeHelper.ENUM_VALUES[9]),
	WST_OGC_WMS(EVWebServiceTypeHelper.ENUM_VALUES[10]),
	WST_OGC_WFS(EVWebServiceTypeHelper.ENUM_VALUES[11]),
	WST_EV_MultimediaService(EVWebServiceTypeHelper.ENUM_VALUES[12]),
	WST_EV_OBQ(EVWebServiceTypeHelper.ENUM_VALUES[13]),
	WST_EV_CatalogService(EVWebServiceTypeHelper.ENUM_VALUES[14]),
	WST_EV_MESHX(EVWebServiceTypeHelper.ENUM_VALUES[15]),
	WST_EV_MESHXG(EVWebServiceTypeHelper.ENUM_VALUES[16]),
	WST_EV_MODELService(EVWebServiceTypeHelper.ENUM_VALUES[17]),
	WST_EV_Vector3DService(EVWebServiceTypeHelper.ENUM_VALUES[18]),
	WST_EV_LAS(EVWebServiceTypeHelper.ENUM_VALUES[19]);
	private int value;
	EVWebServiceType(int i) {
		this.value = i;
	}
	public EVWebServiceType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVWebServiceType toEnum(int retval) {
		if(retval == WST_EV_UNKNOWN.value){
			return WST_EV_UNKNOWN;
		}
		else if(retval == WST_EV_WMTS.value){
			return WST_EV_WMTS;
		}
		else if(retval == WST_EV_WMS.value){
			return WST_EV_WMS;
		}
		else if(retval == WST_EV_WFS.value){
			return WST_EV_WFS;
		}
		else if(retval == WST_EV_GlobeService.value){
			return WST_EV_GlobeService;
		}
		else if(retval == WST_EV_GeoCodeService.value){
			return WST_EV_GeoCodeService;
		}
		else if(retval == WST_EV_GeometryService.value){
			return WST_EV_GeometryService;
		}
		else if(retval == WST_EV_WebMetadataService.value){
			return WST_EV_WebMetadataService;
		}
		else if(retval == WST_UpdateService.value){
			return WST_UpdateService;
		}
		else if(retval == WST_OGC_WMTS.value){
			return WST_OGC_WMTS;
		}
		else if(retval == WST_OGC_WMS.value){
			return WST_OGC_WMS;
		}
		else if(retval == WST_OGC_WFS.value){
			return WST_OGC_WFS;
		}
		else if(retval == WST_EV_MultimediaService.value){
			return WST_EV_MultimediaService;
		}
		else if(retval == WST_EV_OBQ.value){
			return WST_EV_OBQ;
		}
		else if(retval == WST_EV_CatalogService.value){
			return WST_EV_CatalogService;
		}
		else if(retval == WST_EV_MESHX.value){
			return WST_EV_MESHX;
		}
		else if(retval == WST_EV_MESHXG.value){
			return WST_EV_MESHXG;
		}
		else if(retval == WST_EV_MODELService.value){
			return WST_EV_MODELService;
		}
		else if(retval == WST_EV_Vector3DService.value){
			return WST_EV_Vector3DService;
		}
		else if(retval == WST_EV_LAS.value){
			return WST_EV_LAS;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVWebServiceTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
