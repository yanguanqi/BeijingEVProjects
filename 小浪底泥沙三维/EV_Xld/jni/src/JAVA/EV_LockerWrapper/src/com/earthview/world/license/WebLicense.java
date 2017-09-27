package com.earthview.world.license;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// <summary>
///  网络许可对象
/// <summary>
public class WebLicense extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::License::CWebLicense", new WebLicenseClassFactory());
	}

	public WebLicense() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CWebLicense", null);
	}

	native private int getModuleStatus_EVString_EVString_EVString(long pNativeObject, String ip, String port, String module);
	public com.earthview.world.license.EVLicenseStatusType getModuleStatus(String ip, String port, String module)
	{
		String ipParamValue = ip;
		String portParamValue = port;
		String moduleParamValue = module;
		int returnValue = getModuleStatus_EVString_EVString_EVString(this.nativeObject.pointer, ipParamValue, portParamValue, moduleParamValue);
		return com.earthview.world.license.EVLicenseStatusType.toEnum(returnValue);
	}
	public WebLicense(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public WebLicense(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static WebLicense fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		WebLicense obj = null;
 		if(baseObj instanceof WebLicense)
		{
			obj = (WebLicense)baseObj;
		} else {
			obj = new WebLicense(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWebLicense");
			obj.increaseCast();
		}

		return obj;
	}
}
