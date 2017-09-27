package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 渲染信息类
 */
public class RenderInformation extends com.earthview.world.spatial.atlas.Irenderinformation {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CRenderInformation", new RenderInformationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCRenderInformationProxy", new RenderInformationClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public RenderInformation() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCRenderInformationProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.atlas.RenderInformation".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean isRendering_void(long pNativeObject);
	/**
	 * 检测是否正在渲染
	 * @param  
	 * @return 如果正在渲染返回true,反之则否
	 */
	public boolean isRendering()
	{
		boolean returnValue = isRendering_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isRendering_void_NoVirtual(long pNativeObject);
	protected boolean isRendering_NoVirtual()
	{
		boolean returnValue = isRendering_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getRenderingLayer_void(long pNativeObject);
	/**
	 * 获取正在渲染的图层
	 * @param  
	 * @return 图层
	 */
	public com.earthview.world.spatial.atlas.Ilayer getRenderingLayer()
	{
		long returnValue = getRenderingLayer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}
	native private long getRenderingLayer_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.Ilayer getRenderingLayer_NoVirtual()
	{
		long returnValue = getRenderingLayer_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}

	native private int getRenderingType_void(long pNativeObject);
	/**
	 * 获取正在渲染的类型
	 * @param  
	 * @return 渲染类型
	 */
	public com.earthview.world.spatial.atlas.EVVectorLayerRendererType getRenderingType()
	{
		int returnValue = getRenderingType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVVectorLayerRendererType.toEnum(returnValue);
	}
	native private int getRenderingType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.EVVectorLayerRendererType getRenderingType_NoVirtual()
	{
		int returnValue = getRenderingType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVVectorLayerRendererType.toEnum(returnValue);
	}

	public RenderInformation(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderInformation(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_isRendering_void(long pNativeObject, String method);
	native protected void register_getRenderingLayer_void(long pNativeObject, String method);
	native protected void register_getRenderingType_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_isRendering_void(this.nativeObject.pointer, "isRendering_void_callback");
			this.register_getRenderingLayer_void(this.nativeObject.pointer, "getRenderingLayer_void_callback");
			this.register_getRenderingType_void(this.nativeObject.pointer, "getRenderingType_void_callback");
		}
	}
	
	public static RenderInformation fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderInformation obj = null;
 		if(baseObj instanceof RenderInformation)
		{
			obj = (RenderInformation)baseObj;
		} else {
			obj = new RenderInformation(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderInformation");
			obj.increaseCast();
		}

		return obj;
	}
}
