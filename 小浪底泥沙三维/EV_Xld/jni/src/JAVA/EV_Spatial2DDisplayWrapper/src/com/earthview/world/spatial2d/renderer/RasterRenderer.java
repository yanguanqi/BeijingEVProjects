package com.earthview.world.spatial2d.renderer;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 栅格渲染类
 */
public class RasterRenderer extends com.earthview.world.spatial.display.Irenderer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::CRasterRenderer", new RasterRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::JCRasterRendererProxy", new RasterRendererClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public RasterRenderer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCRasterRendererProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.renderer.RasterRenderer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public RasterRenderer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RasterRenderer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取渲染类型
	 * @param  
	 */
	public com.earthview.world.spatial.display.EVRendererType getType()
	{
		return super.getType_NoVirtual();
	}
	
	native protected void register_getType_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
		}
	}
	
	public static RasterRenderer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RasterRenderer obj = null;
 		if(baseObj instanceof RasterRenderer)
		{
			obj = (RasterRenderer)baseObj;
		} else {
			obj = new RasterRenderer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRasterRenderer");
			obj.increaseCast();
		}

		return obj;
	}
}
