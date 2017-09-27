package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScriptCompilerEvent extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CScriptCompilerEvent", new ScriptCompilerEventClassFactory());
	}

	native private String get_mType_void(long pNativeObject);
	public String get_mType()
	{
		String jniValue = get_mType_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mType_EVString (long pNativeObject, String value);
	public void set_mType(String mType)
	{
		String mTypeParamValue = mType;
		
		set_mType_EVString(this.nativeObject.pointer, mTypeParamValue);
	}
	
	public ScriptCompilerEvent(String type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CScriptCompilerEvent", list);
	}

	public ScriptCompilerEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScriptCompilerEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ScriptCompilerEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScriptCompilerEvent obj = null;
 		if(baseObj instanceof ScriptCompilerEvent)
		{
			obj = (ScriptCompilerEvent)baseObj;
		} else {
			obj = new ScriptCompilerEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScriptCompilerEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
