package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class ParamDictionary extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CParamDictionary", new ParamDictionaryClassFactory());
	}

	public ParamDictionary() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CParamDictionary", null);
	}

	native private void addParameter_CParameterDef_CParamCommand(long pNativeObject, long paramDef, long paramCmd);
	public void addParameter(com.earthview.world.core.ParameterDef paramDef, com.earthview.world.core.ParamCommand paramCmd)
	{
		long paramDefParamValue = paramDef.nativeObject.pointer;
		long paramCmdParamValue = (paramCmd == null ? 0L : paramCmd.nativeObject.pointer);
		addParameter_CParameterDef_CParamCommand(this.nativeObject.pointer, paramDefParamValue, paramCmdParamValue);
	}
	native private long getParameters_void(long pNativeObject);
	public com.earthview.world.core.ParameterList getParameters()
	{
		long returnValue = getParameters_void(this.nativeObject.pointer);
		com.earthview.world.core.ParameterList __returnValue = new com.earthview.world.core.ParameterList(CreatedWhenConstruct.CWC_NotToCreate, "ParameterList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.ParameterList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ParameterList");
		}
		return __returnValue;
	}
	public ParamDictionary(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ParamDictionary(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ParamDictionary fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ParamDictionary obj = null;
 		if(baseObj instanceof ParamDictionary)
		{
			obj = (ParamDictionary)baseObj;
		} else {
			obj = new ParamDictionary(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CParamDictionary");
			obj.increaseCast();
		}

		return obj;
	}
}
