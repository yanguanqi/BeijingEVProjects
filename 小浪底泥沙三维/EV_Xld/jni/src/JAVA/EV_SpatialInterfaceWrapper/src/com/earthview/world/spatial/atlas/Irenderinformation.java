package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Irenderinformation extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::IRenderInformation", new IrenderinformationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::JIRenderInformationProxy", new IrenderinformationClassFactory());
	}

	public Irenderinformation() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JIRenderInformationProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.atlas.Irenderinformation".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  boolean isRendering_void_callback()
	{
		boolean returnValue = isRendering();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isRendering_void(long pNativeObject);
	/**
	 * 检测是否正在进行渲染进程
	 * @param  
	 * @return 返回渲染是否正在进行
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

	protected  long getRenderingLayer_void_callback()
	{
		com.earthview.world.spatial.atlas.Ilayer returnValue = getRenderingLayer();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRenderingLayer_void(long pNativeObject);
	/**
	 * 获取正在渲染的图层
	 * @param  
	 * @return 正在渲染的图层
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

	protected  int getRenderingType_void_callback()
	{
		com.earthview.world.spatial.atlas.EVVectorLayerRendererType returnValue = getRenderingType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getRenderingType_void(long pNativeObject);
	/**
	 * 获取正在渲染图层的类型
	 * @param  
	 * @return 渲染图层类型
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

	public Irenderinformation(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Irenderinformation(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Irenderinformation fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Irenderinformation obj = null;
 		if(baseObj instanceof Irenderinformation)
		{
			obj = (Irenderinformation)baseObj;
		} else {
			obj = new Irenderinformation(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IRenderInformation");
			obj.increaseCast();
		}

		return obj;
	}
}
