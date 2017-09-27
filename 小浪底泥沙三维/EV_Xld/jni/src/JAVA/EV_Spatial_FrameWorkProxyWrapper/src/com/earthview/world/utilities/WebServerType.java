package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// 网络服务器的类型，该枚举在打开网络数据源时使用。
public enum WebServerType implements INativeEnum<WebServerType> {
	EarthViewServer(WebServerTypeHelper.ENUM_VALUES[0]),
	OGC_WMTS(WebServerTypeHelper.ENUM_VALUES[1]),
	OGC_WMS(WebServerTypeHelper.ENUM_VALUES[2]),
	OGC_WFS(WebServerTypeHelper.ENUM_VALUES[3]),
	Other(WebServerTypeHelper.ENUM_VALUES[4]);
	private int value;
	WebServerType(int i) {
		this.value = i;
	}
	public WebServerType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final WebServerType toEnum(int retval) {
		if(retval == EarthViewServer.value){
			return EarthViewServer;
		}
		else if(retval == OGC_WMTS.value){
			return OGC_WMTS;
		}
		else if(retval == OGC_WMS.value){
			return OGC_WMS;
		}
		else if(retval == OGC_WFS.value){
			return OGC_WFS;
		}
		else if(retval == Other.value){
			return Other;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class WebServerTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
