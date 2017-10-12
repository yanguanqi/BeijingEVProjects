package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderableFontInstanceObjectCreatorManager extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager", new RenderableFontInstanceObjectCreatorManagerClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public RenderableFontInstanceObjectCreatorManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRenderableFontInstanceObjectCreatorManager", null);
	}

	native private static long getSingleton_void();
	/**
	 * 获取单例
	 * @param  
	 */
	public static com.earthview.world.graphic.RenderableFontInstanceObjectCreatorManager getSingleton()
	{
		long returnValue = getSingleton_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderableFontInstanceObjectCreatorManager __returnValue = new com.earthview.world.graphic.RenderableFontInstanceObjectCreatorManager(CreatedWhenConstruct.CWC_NotToCreate, "CRenderableFontInstanceObjectCreatorManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderableFontInstanceObjectCreatorManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderableFontInstanceObjectCreatorManager");
		}
		return __returnValue;
	}
	native private static void destorySingleton_void();
	/**
	 * 销毁单例
	 * @param  
	 */
	public static void destorySingleton()
	{
		destorySingleton_void();
	}
	native private long createInstanceObject_CRenderableFontInstanced_CTextureTextStyle_EVString(long pNativeObject, long textInstance, long textStyle, long matName);
	/**
	 * 创建对象
	 * @param  
	 */
	public com.earthview.world.graphic.InstanceObject createInstanceObject(com.earthview.world.graphic.RenderableFontInstanced textInstance, com.earthview.world.graphic.TextureTextStyle textStyle, StringPointer matName)
	{
		long textInstanceParamValue = (textInstance == null ? 0L : textInstance.nativeObject.pointer);
		long textStyleParamValue = (textStyle == null ? 0L : textStyle.nativeObject.pointer);
		long matNameParamValue = matName.nativeObject.pointer;
		long returnValue = createInstanceObject_CRenderableFontInstanced_CTextureTextStyle_EVString(this.nativeObject.pointer, textInstanceParamValue, textStyleParamValue, matNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstanceObject __returnValue = new com.earthview.world.graphic.InstanceObject(CreatedWhenConstruct.CWC_NotToCreate, "CInstanceObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstanceObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CInstanceObject");
		}
		return __returnValue;
	}
	native private void destroyInstanceObjects_CRenderableFontInstanced(long pNativeObject, long textInstance);
	/**
	 * 销毁对象
	 * @param  
	 */
	public void destroyInstanceObjects(com.earthview.world.graphic.RenderableFontInstanced textInstance)
	{
		long textInstanceParamValue = (textInstance == null ? 0L : textInstance.nativeObject.pointer);
		destroyInstanceObjects_CRenderableFontInstanced(this.nativeObject.pointer, textInstanceParamValue);
	}
	native private void addRenderableFontInstancedRequest_CRenderableFontInstanced(long pNativeObject, long textInstance);
	/**
	 * 添加请求
	 * @param  
	 */
	public void addRenderableFontInstancedRequest(com.earthview.world.graphic.RenderableFontInstanced textInstance)
	{
		long textInstanceParamValue = (textInstance == null ? 0L : textInstance.nativeObject.pointer);
		addRenderableFontInstancedRequest_CRenderableFontInstanced(this.nativeObject.pointer, textInstanceParamValue);
	}
	native private void abortRenderableFontInstancedRequest_CRenderableFontInstanced(long pNativeObject, long textInstance);
	/**
	 * 中断请求
	 * @param  
	 */
	public void abortRenderableFontInstancedRequest(com.earthview.world.graphic.RenderableFontInstanced textInstance)
	{
		long textInstanceParamValue = (textInstance == null ? 0L : textInstance.nativeObject.pointer);
		abortRenderableFontInstancedRequest_CRenderableFontInstanced(this.nativeObject.pointer, textInstanceParamValue);
	}
	public RenderableFontInstanceObjectCreatorManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderableFontInstanceObjectCreatorManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RenderableFontInstanceObjectCreatorManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderableFontInstanceObjectCreatorManager obj = null;
 		if(baseObj instanceof RenderableFontInstanceObjectCreatorManager)
		{
			obj = (RenderableFontInstanceObjectCreatorManager)baseObj;
		} else {
			obj = new RenderableFontInstanceObjectCreatorManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderableFontInstanceObjectCreatorManager");
			obj.increaseCast();
		}

		return obj;
	}
}
