package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScriptParser extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CScriptParser", new ScriptParserClassFactory());
	}

	public ScriptParser() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CScriptParser", null);
	}

	native private long parse_ScriptTokenListPtr(long pNativeObject, long tokens);
	public com.earthview.world.graphic.ConcreteNodeListPtr parse(com.earthview.world.graphic.ScriptTokenListPtr tokens)
	{
		long tokensParamValue = tokens.nativeObject.pointer;
		long returnValue = parse_ScriptTokenListPtr(this.nativeObject.pointer, tokensParamValue);
		com.earthview.world.graphic.ConcreteNodeListPtr __returnValue = new com.earthview.world.graphic.ConcreteNodeListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ConcreteNodeListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ConcreteNodeListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ConcreteNodeListPtr");
		}
		return __returnValue;
	}
	native private long parseChunk_ScriptTokenListPtr(long pNativeObject, long tokens);
	public com.earthview.world.graphic.ConcreteNodeListPtr parseChunk(com.earthview.world.graphic.ScriptTokenListPtr tokens)
	{
		long tokensParamValue = tokens.nativeObject.pointer;
		long returnValue = parseChunk_ScriptTokenListPtr(this.nativeObject.pointer, tokensParamValue);
		com.earthview.world.graphic.ConcreteNodeListPtr __returnValue = new com.earthview.world.graphic.ConcreteNodeListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ConcreteNodeListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ConcreteNodeListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ConcreteNodeListPtr");
		}
		return __returnValue;
	}
	public ScriptParser(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScriptParser(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ScriptParser fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScriptParser obj = null;
 		if(baseObj instanceof ScriptParser)
		{
			obj = (ScriptParser)baseObj;
		} else {
			obj = new ScriptParser(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScriptParser");
			obj.increaseCast();
		}

		return obj;
	}
}
