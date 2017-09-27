package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///typedef EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable> EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr;
public class TextureAtlasTablePtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr", new TextureAtlasTablePtrClassFactory());
	}

	public TextureAtlasTablePtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("TextureAtlasTablePtr", null);
	}

	public TextureAtlasTablePtr(com.earthview.world.graphic.rtshadersystem.TextureAtlasTable rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("TextureAtlasTablePtr", list);
	}

	public TextureAtlasTablePtr(com.earthview.world.graphic.rtshadersystem.TextureAtlasTable rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		BasePointer inFreeMethodPtr = new BasePointer(inFreeMethod);
		list.add("inFreeMethod", inFreeMethodPtr.get());
		Create("TextureAtlasTablePtr", list);
	}

	public TextureAtlasTablePtr(com.earthview.world.graphic.rtshadersystem.TextureAtlasTablePtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("TextureAtlasTablePtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.TextureAtlasTable get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.rtshadersystem.TextureAtlasTable __returnValue = new com.earthview.world.graphic.rtshadersystem.TextureAtlasTable(CreatedWhenConstruct.CWC_NotToCreate, "TextureAtlasTable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.TextureAtlasTable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "TextureAtlasTable");
		}
		return __returnValue;
	}
	public TextureAtlasTablePtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TextureAtlasTablePtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TextureAtlasTablePtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TextureAtlasTablePtr obj = null;
 		if(baseObj instanceof TextureAtlasTablePtr)
		{
			obj = (TextureAtlasTablePtr)baseObj;
		} else {
			obj = new TextureAtlasTablePtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "TextureAtlasTablePtr");
			obj.increaseCast();
		}

		return obj;
	}
}
