package com.earthview.world.license;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// <summary>
/// 许可模块
/// <summary>
public enum EVLicenseModule implements INativeEnum<EVLicenseModule> {
	LM_UNKNOWN(EVLicenseModuleHelper.ENUM_VALUES[0]),
	LM_EV_GLOBECLIENT_RUNTIME(EVLicenseModuleHelper.ENUM_VALUES[1]),
	LM_EV_GLOBE_SDK_RUNTIME(EVLicenseModuleHelper.ENUM_VALUES[2]),
	LM_EV_GLOBECLIENT_DEVELOPE(EVLicenseModuleHelper.ENUM_VALUES[3]),
	LM_EV_GLOBE_SDK_DEVELOPE(EVLicenseModuleHelper.ENUM_VALUES[4]),
	LM_EV_GLOBE_DESKTOP(EVLicenseModuleHelper.ENUM_VALUES[5]),
	LM_EV_SERVER(EVLicenseModuleHelper.ENUM_VALUES[6]),
	LM_EV_WEBPLUGIN(EVLicenseModuleHelper.ENUM_VALUES[7]),
	LM_EV_CREATOR(EVLicenseModuleHelper.ENUM_VALUES[8]),
	LM_EV_CUSTOM(EVLicenseModuleHelper.ENUM_VALUES[9]);
	private int value;
	EVLicenseModule(int i) {
		this.value = i;
	}
	public EVLicenseModule getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVLicenseModule toEnum(int retval) {
		if(retval == LM_UNKNOWN.value){
			return LM_UNKNOWN;
		}
		else if(retval == LM_EV_GLOBECLIENT_RUNTIME.value){
			return LM_EV_GLOBECLIENT_RUNTIME;
		}
		else if(retval == LM_EV_GLOBE_SDK_RUNTIME.value){
			return LM_EV_GLOBE_SDK_RUNTIME;
		}
		else if(retval == LM_EV_GLOBECLIENT_DEVELOPE.value){
			return LM_EV_GLOBECLIENT_DEVELOPE;
		}
		else if(retval == LM_EV_GLOBE_SDK_DEVELOPE.value){
			return LM_EV_GLOBE_SDK_DEVELOPE;
		}
		else if(retval == LM_EV_GLOBE_DESKTOP.value){
			return LM_EV_GLOBE_DESKTOP;
		}
		else if(retval == LM_EV_SERVER.value){
			return LM_EV_SERVER;
		}
		else if(retval == LM_EV_WEBPLUGIN.value){
			return LM_EV_WEBPLUGIN;
		}
		else if(retval == LM_EV_CREATOR.value){
			return LM_EV_CREATOR;
		}
		else if(retval == LM_EV_CUSTOM.value){
			return LM_EV_CUSTOM;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVLicenseModuleHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
