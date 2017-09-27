package com.earthview.world.license;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// <summary>
/// 许可对象
/// <summary>
public class License extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::License::CLicense", new LicenseClassFactory());
	}

	/// <summary>
	/// 默认构造函数
	/// <summary>
	public License() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLicense", null);
	}

	native private int initialize_EVLicenseModule_EVString(long pNativeObject, int module, String value);
	/// <summary>
	/// 注册模块许可
	/// <summary>
	/// <param name="module">许可模块枚举</param>
	/// <param name="value">模块字符串表示
	///                     如果许可模块为自定义，则value有效，用作判断
	///                     反之，value无效。</param>
	/// <returns>许可结果枚举</returns>
	public com.earthview.world.license.EVLicenseResult initialize(com.earthview.world.license.EVLicenseModule module, String value)
	{
		int moduleParamValue = module.getValue();
		String valueParamValue = value;
		int returnValue = initialize_EVLicenseModule_EVString(this.nativeObject.pointer, moduleParamValue, valueParamValue);
		return com.earthview.world.license.EVLicenseResult.toEnum(returnValue);
	}
	native private int uninitialize_EVLicenseModule_EVString(long pNativeObject, int module, String value);
	/// <summary>
	/// 反注册模块许可
	/// <summary>
	/// <param name="module">许可模块枚举</param>
	/// <param name="value">模块字符串表示
	///                     如果许可模块为自定义，则value有效，用作判断
	///                     反之，value无效。</param>
	/// <returns>许可结果枚举</returns>
	public com.earthview.world.license.EVLicenseResult uninitialize(com.earthview.world.license.EVLicenseModule module, String value)
	{
		int moduleParamValue = module.getValue();
		String valueParamValue = value;
		int returnValue = uninitialize_EVLicenseModule_EVString(this.nativeObject.pointer, moduleParamValue, valueParamValue);
		return com.earthview.world.license.EVLicenseResult.toEnum(returnValue);
	}
	native private int getModuleStatus_EVLicenseModule_EVString(long pNativeObject, int module, String value);
	/// <summary>
	/// 获取模块初始化状态
	/// <summary>
	/// <param name="module">许可模块枚举</param>
	/// <param name="value">模块字符串表示
	///                     如果许可模块为自定义，则value有效，用作判断
	///                     反之，value无效。</param>
	/// <returns>模块状态</returns>
	public com.earthview.world.license.EVLicenseStatusType getModuleStatus(com.earthview.world.license.EVLicenseModule module, String value)
	{
		int moduleParamValue = module.getValue();
		String valueParamValue = value;
		int returnValue = getModuleStatus_EVLicenseModule_EVString(this.nativeObject.pointer, moduleParamValue, valueParamValue);
		return com.earthview.world.license.EVLicenseStatusType.toEnum(returnValue);
	}
	native private String getExpiredDate_EVLicenseModule_EVString(long pNativeObject, int module, String value);
	/// <summary>
	/// 获取模块过期时间
	/// <summary>
	/// <param name="module">许可模块枚举</param>
	/// <param name="value">模块字符串表示
	///                     如果许可模块为自定义，则value有效，用作判断
	///                     反之，value无效。</param>
	/// <returns>过期时间字符串</returns>
	public String getExpiredDate(com.earthview.world.license.EVLicenseModule module, String value)
	{
		int moduleParamValue = module.getValue();
		String valueParamValue = value;
		String returnValue = getExpiredDate_EVLicenseModule_EVString(this.nativeObject.pointer, moduleParamValue, valueParamValue);
		return returnValue;
	}
	native private boolean isOffical_EVLicenseModule_EVString(long pNativeObject, int module, String value);
	/// <summary>
	/// 是否正式版
	/// <summary>
	/// <param name="module">许可模块枚举</param>
	/// <param name="value">模块字符串表示
	///                     如果许可模块为自定义，则value有效，用作判断
	///                     反之，value无效。</param>
	/// <returns>正式版，true；试用版，false</returns>
	public boolean isOffical(com.earthview.world.license.EVLicenseModule module, String value)
	{
		int moduleParamValue = module.getValue();
		String valueParamValue = value;
		boolean returnValue = isOffical_EVLicenseModule_EVString(this.nativeObject.pointer, moduleParamValue, valueParamValue);
		return returnValue;
	}
	native private String getModuleError_EVLicenseModule_EVString(long pNativeObject, int module, String value);
	/// <summary>
	/// 获取模块错误信息
	/// <summary>
	/// <param name="module">许可模块枚举</param>
	/// <param name="value">模块字符串表示
	///                     如果许可模块为自定义，则value有效，用作判断
	///                     反之，value无效。</param>
	/// <returns>最后一次错误描述</returns>
	public String getModuleError(com.earthview.world.license.EVLicenseModule module, String value)
	{
		int moduleParamValue = module.getValue();
		String valueParamValue = value;
		String returnValue = getModuleError_EVLicenseModule_EVString(this.nativeObject.pointer, moduleParamValue, valueParamValue);
		return returnValue;
	}
	public License(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public License(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static License fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		License obj = null;
 		if(baseObj instanceof License)
		{
			obj = (License)baseObj;
		} else {
			obj = new License(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLicense");
			obj.increaseCast();
		}

		return obj;
	}
}
