package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextureAtlasRecord extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord", new TextureAtlasRecordClassFactory());
	}

	public TextureAtlasRecord(String texOriginalName, String texAtlasName, float texPosU, float texPosV, float texWidth, float texHeight, long texIndexInAtlas) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer texOriginalNamePtr = new BasePointer(texOriginalName);
		list.add("texOriginalName", texOriginalNamePtr.get());
		BasePointer texAtlasNamePtr = new BasePointer(texAtlasName);
		list.add("texAtlasName", texAtlasNamePtr.get());
		BasePointer texPosUPtr = new BasePointer(texPosU);
		list.add("texPosU", texPosUPtr.get());
		BasePointer texPosVPtr = new BasePointer(texPosV);
		list.add("texPosV", texPosVPtr.get());
		BasePointer texWidthPtr = new BasePointer(texWidth);
		list.add("texWidth", texWidthPtr.get());
		BasePointer texHeightPtr = new BasePointer(texHeight);
		list.add("texHeight", texHeightPtr.get());
		BasePointer texIndexInAtlasPtr = new BasePointer(texIndexInAtlas);
		list.add("texIndexInAtlas", texIndexInAtlasPtr.get());
		Create("TextureAtlasRecord", list);
	}

	native private float get_posU_void(long pNativeObject);
	public float get_posU()
	{
		float jniValue = get_posU_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_posU_float (long pNativeObject, float value);
	public void set_posU(float posU)
	{
		float posUParamValue = posU;
		
		set_posU_float(this.nativeObject.pointer, posUParamValue);
	}
	
	native private float get_posV_void(long pNativeObject);
	public float get_posV()
	{
		float jniValue = get_posV_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_posV_float (long pNativeObject, float value);
	public void set_posV(float posV)
	{
		float posVParamValue = posV;
		
		set_posV_float(this.nativeObject.pointer, posVParamValue);
	}
	
	native private float get_width_void(long pNativeObject);
	public float get_width()
	{
		float jniValue = get_width_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_width_float (long pNativeObject, float value);
	public void set_width(float width)
	{
		float widthParamValue = width;
		
		set_width_float(this.nativeObject.pointer, widthParamValue);
	}
	
	native private float get_height_void(long pNativeObject);
	public float get_height()
	{
		float jniValue = get_height_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_height_float (long pNativeObject, float value);
	public void set_height(float height)
	{
		float heightParamValue = height;
		
		set_height_float(this.nativeObject.pointer, heightParamValue);
	}
	
	native private String get_originalTextureName_void(long pNativeObject);
	public String get_originalTextureName()
	{
		String jniValue = get_originalTextureName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_originalTextureName_EVString (long pNativeObject, String value);
	public void set_originalTextureName(String originalTextureName)
	{
		String originalTextureNameParamValue = originalTextureName;
		
		set_originalTextureName_EVString(this.nativeObject.pointer, originalTextureNameParamValue);
	}
	
	native private String get_atlasTextureName_void(long pNativeObject);
	public String get_atlasTextureName()
	{
		String jniValue = get_atlasTextureName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_atlasTextureName_EVString (long pNativeObject, String value);
	public void set_atlasTextureName(String atlasTextureName)
	{
		String atlasTextureNameParamValue = atlasTextureName;
		
		set_atlasTextureName_EVString(this.nativeObject.pointer, atlasTextureNameParamValue);
	}
	
	native private long get_indexInAtlas_void(long pNativeObject);
	public long get_indexInAtlas()
	{
		long jniValue = get_indexInAtlas_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_indexInAtlas_size_t (long pNativeObject, long value);
	public void set_indexInAtlas(long indexInAtlas)
	{
		long indexInAtlasParamValue = indexInAtlas;
		
		set_indexInAtlas_size_t(this.nativeObject.pointer, indexInAtlasParamValue);
	}
	
	public TextureAtlasRecord() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("TextureAtlasRecord", null);
	}

	public TextureAtlasRecord(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TextureAtlasRecord(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TextureAtlasRecord fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TextureAtlasRecord obj = null;
 		if(baseObj instanceof TextureAtlasRecord)
		{
			obj = (TextureAtlasRecord)baseObj;
		} else {
			obj = new TextureAtlasRecord(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "TextureAtlasRecord");
			obj.increaseCast();
		}

		return obj;
	}
}
