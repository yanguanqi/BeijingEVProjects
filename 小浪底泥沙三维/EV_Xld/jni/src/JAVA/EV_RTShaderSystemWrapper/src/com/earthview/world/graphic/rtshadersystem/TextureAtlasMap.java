package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///typedef map<EVString, EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr> TextureAtlasMap;
public class TextureAtlasMap extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap", new TextureAtlasMapClassFactory());
	}

	public TextureAtlasMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("TextureAtlasMap", null);
	}

	native private boolean push_EVString_TextureAtlasTablePtr(long pNativeObject, String key, long val);
	public boolean push(String key, com.earthview.world.graphic.rtshadersystem.TextureAtlasTablePtr val)
	{
		String keyParamValue = key;
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = push_EVString_TextureAtlasTablePtr(this.nativeObject.pointer, keyParamValue, valParamValue);
		return returnValue;
	}
	native private boolean exist_EVString(long pNativeObject, String key);
	public boolean exist(String key)
	{
		String keyParamValue = key;
		boolean returnValue = exist_EVString(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private long OperatorIndex_EVString(long pNativeObject, String key);
	public com.earthview.world.graphic.rtshadersystem.TextureAtlasTablePtr OperatorIndex(String key)
	{
		String keyParamValue = key;
		long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.graphic.rtshadersystem.TextureAtlasTablePtr __returnValue = new com.earthview.world.graphic.rtshadersystem.TextureAtlasTablePtr(CreatedWhenConstruct.CWC_NotToCreate, "TextureAtlasTablePtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.TextureAtlasTablePtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "TextureAtlasTablePtr");
		}
		return __returnValue;
	}
	native private long get_EVString(long pNativeObject, String key);
	public com.earthview.world.graphic.rtshadersystem.TextureAtlasTablePtr get(String key)
	{
		String keyParamValue = key;
		long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.graphic.rtshadersystem.TextureAtlasTablePtr __returnValue = new com.earthview.world.graphic.rtshadersystem.TextureAtlasTablePtr(CreatedWhenConstruct.CWC_NotToCreate, "TextureAtlasTablePtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.TextureAtlasTablePtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "TextureAtlasTablePtr");
		}
		return __returnValue;
	}
	native private void erase_EVString(long pNativeObject, String key);
	public void erase(String key)
	{
		String keyParamValue = key;
		erase_EVString(this.nativeObject.pointer, keyParamValue);
	}
	native private long size_void(long pNativeObject);
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private boolean empty_void(long pNativeObject);
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	public TextureAtlasMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TextureAtlasMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TextureAtlasMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TextureAtlasMap obj = null;
 		if(baseObj instanceof TextureAtlasMap)
		{
			obj = (TextureAtlasMap)baseObj;
		} else {
			obj = new TextureAtlasMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "TextureAtlasMap");
			obj.increaseCast();
		}

		return obj;
	}
}
