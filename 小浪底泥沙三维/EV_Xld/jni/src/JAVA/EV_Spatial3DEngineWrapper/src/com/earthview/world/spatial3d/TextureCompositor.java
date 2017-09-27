package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextureCompositor extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CTextureCompositor", new TextureCompositorClassFactory());
	}

	/**
	 * 构造函数
	 */
	public TextureCompositor() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTextureCompositor", null);
	}

	native private void thumbImage_EarthView_World_Core_ev_wstring_EarthView_World_Core_ev_wstring(long pNativeObject, String path, String imagefilename);
	/**
	 * 生成小纹理
	 * @param path 结果文件路径
	 * @param imagefilename 结果文件名
	 */
	public void thumbImage(String path, String imagefilename)
	{
		String pathParamValue = path;
		String imagefilenameParamValue = imagefilename;
		thumbImage_EarthView_World_Core_ev_wstring_EarthView_World_Core_ev_wstring(this.nativeObject.pointer, pathParamValue, imagefilenameParamValue);
	}
	public TextureCompositor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TextureCompositor(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TextureCompositor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TextureCompositor obj = null;
 		if(baseObj instanceof TextureCompositor)
		{
			obj = (TextureCompositor)baseObj;
		} else {
			obj = new TextureCompositor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTextureCompositor");
			obj.increaseCast();
		}

		return obj;
	}
}
