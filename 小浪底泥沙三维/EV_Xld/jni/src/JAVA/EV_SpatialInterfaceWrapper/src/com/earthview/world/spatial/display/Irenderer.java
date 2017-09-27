package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///渲染栅格
public class Irenderer extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::IRenderer", new IrendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JIRendererProxy", new IrendererClassFactory());
	}

	protected  int getType_void_callback()
	{
		com.earthview.world.spatial.display.EVRendererType returnValue = getType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取渲染类型
	 * @param  
	 */
	public com.earthview.world.spatial.display.EVRendererType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVRendererType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.EVRendererType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVRendererType.toEnum(returnValue);
	}

	public Irenderer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Irenderer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getType_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
		}
	}
	
	public static Irenderer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Irenderer obj = null;
 		if(baseObj instanceof Irenderer)
		{
			obj = (Irenderer)baseObj;
		} else {
			obj = new Irenderer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IRenderer");
			obj.increaseCast();
		}

		return obj;
	}
}
