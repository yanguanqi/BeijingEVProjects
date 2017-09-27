package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScriptLexer extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CScriptLexer", new ScriptLexerClassFactory());
	}

	public ScriptLexer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CScriptLexer", null);
	}

	native private long tokenize_EVString_EVString(long pNativeObject, String str, String source);
	public com.earthview.world.graphic.ScriptTokenListPtr tokenize(String str, String source)
	{
		String strParamValue = str;
		String sourceParamValue = source;
		long returnValue = tokenize_EVString_EVString(this.nativeObject.pointer, strParamValue, sourceParamValue);
		com.earthview.world.graphic.ScriptTokenListPtr __returnValue = new com.earthview.world.graphic.ScriptTokenListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ScriptTokenListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ScriptTokenListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ScriptTokenListPtr");
		}
		return __returnValue;
	}
	public ScriptLexer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScriptLexer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ScriptLexer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScriptLexer obj = null;
 		if(baseObj instanceof ScriptLexer)
		{
			obj = (ScriptLexer)baseObj;
		} else {
			obj = new ScriptLexer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScriptLexer");
			obj.increaseCast();
		}

		return obj;
	}
}
