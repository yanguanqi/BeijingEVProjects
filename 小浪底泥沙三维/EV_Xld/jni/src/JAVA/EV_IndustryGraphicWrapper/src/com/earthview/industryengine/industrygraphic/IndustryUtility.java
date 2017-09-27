package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 工具类，提供创建基础对象的功能
 */
public class IndustryUtility extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::CIndustryUtility", new IndustryUtilityClassFactory());
	}

	public IndustryUtility() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CIndustryUtility", null);
	}

	native private static long createDefaultMaterial_EVString_EVString(String name, String groupName);
	/**
	 * 创建材质对象
	 * @param name 构造函数参数键值对表
	 */
	public static com.earthview.world.graphic.MaterialPtr createDefaultMaterial(String name, String groupName)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long returnValue = createDefaultMaterial_EVString_EVString(nameParamValue, groupNameParamValue);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}
	public IndustryUtility(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public IndustryUtility(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static IndustryUtility fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		IndustryUtility obj = null;
 		if(baseObj instanceof IndustryUtility)
		{
			obj = (IndustryUtility)baseObj;
		} else {
			obj = new IndustryUtility(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CIndustryUtility");
			obj.increaseCast();
		}

		return obj;
	}
}
