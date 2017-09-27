package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum GPUVendor implements INativeEnum<GPUVendor> {
	GPU_UNKNOWN(GPUVendorHelper.ENUM_VALUES[0]),
	GPU_NVIDIA(GPUVendorHelper.ENUM_VALUES[1]),
	GPU_ATI(GPUVendorHelper.ENUM_VALUES[2]),
	GPU_INTEL(GPUVendorHelper.ENUM_VALUES[3]),
	GPU_S3(GPUVendorHelper.ENUM_VALUES[4]),
	GPU_MATROX(GPUVendorHelper.ENUM_VALUES[5]),
	GPU_3DLABS(GPUVendorHelper.ENUM_VALUES[6]),
	GPU_SIS(GPUVendorHelper.ENUM_VALUES[7]),
	GPU_IMAGINATION_TECHNOLOGIES(GPUVendorHelper.ENUM_VALUES[8]),
	GPU_APPLE(GPUVendorHelper.ENUM_VALUES[9]),
	GPU_NOKIA(GPUVendorHelper.ENUM_VALUES[10]),
	GPU_MS_SOFTWARE(GPUVendorHelper.ENUM_VALUES[11]),
	GPU_MS_WARP(GPUVendorHelper.ENUM_VALUES[12]),
	GPU_VENDOR_COUNT(GPUVendorHelper.ENUM_VALUES[13]);
	private int value;
	GPUVendor(int i) {
		this.value = i;
	}
	public GPUVendor getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final GPUVendor toEnum(int retval) {
		if(retval == GPU_UNKNOWN.value){
			return GPU_UNKNOWN;
		}
		else if(retval == GPU_NVIDIA.value){
			return GPU_NVIDIA;
		}
		else if(retval == GPU_ATI.value){
			return GPU_ATI;
		}
		else if(retval == GPU_INTEL.value){
			return GPU_INTEL;
		}
		else if(retval == GPU_S3.value){
			return GPU_S3;
		}
		else if(retval == GPU_MATROX.value){
			return GPU_MATROX;
		}
		else if(retval == GPU_3DLABS.value){
			return GPU_3DLABS;
		}
		else if(retval == GPU_SIS.value){
			return GPU_SIS;
		}
		else if(retval == GPU_IMAGINATION_TECHNOLOGIES.value){
			return GPU_IMAGINATION_TECHNOLOGIES;
		}
		else if(retval == GPU_APPLE.value){
			return GPU_APPLE;
		}
		else if(retval == GPU_NOKIA.value){
			return GPU_NOKIA;
		}
		else if(retval == GPU_MS_SOFTWARE.value){
			return GPU_MS_SOFTWARE;
		}
		else if(retval == GPU_MS_WARP.value){
			return GPU_MS_WARP;
		}
		else if(retval == GPU_VENDOR_COUNT.value){
			return GPU_VENDOR_COUNT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class GPUVendorHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
