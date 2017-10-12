package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextAreaInstanceObjectCreatorManager extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CTextAreaInstanceObjectCreatorManager", new TextAreaInstanceObjectCreatorManagerClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public TextAreaInstanceObjectCreatorManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTextAreaInstanceObjectCreatorManager", null);
	}

	native private static long getSingleton_void();
	/**
	 * 获取单例
	 * @param  
	 */
	public static com.earthview.world.graphic.TextAreaInstanceObjectCreatorManager getSingleton()
	{
		long returnValue = getSingleton_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TextAreaInstanceObjectCreatorManager __returnValue = new com.earthview.world.graphic.TextAreaInstanceObjectCreatorManager(CreatedWhenConstruct.CWC_NotToCreate, "CTextAreaInstanceObjectCreatorManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TextAreaInstanceObjectCreatorManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextAreaInstanceObjectCreatorManager");
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
	native private long createInstanceObject_CTextAreaOverlayElementInstanced_EVString(long pNativeObject, long textInstance, long matName);
	/**
	 * 创建对象
	 * @param  
	 */
	public com.earthview.world.graphic.InstanceObject createInstanceObject(com.earthview.world.graphic.TextAreaOverlayElementInstanced textInstance, StringPointer matName)
	{
		long textInstanceParamValue = (textInstance == null ? 0L : textInstance.nativeObject.pointer);
		long matNameParamValue = matName.nativeObject.pointer;
		long returnValue = createInstanceObject_CTextAreaOverlayElementInstanced_EVString(this.nativeObject.pointer, textInstanceParamValue, matNameParamValue);
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
	native private void destroyInstanceObjects_CTextAreaOverlayElementInstanced(long pNativeObject, long textInstance);
	/**
	 * 销毁对象
	 * @param  
	 */
	public void destroyInstanceObjects(com.earthview.world.graphic.TextAreaOverlayElementInstanced textInstance)
	{
		long textInstanceParamValue = (textInstance == null ? 0L : textInstance.nativeObject.pointer);
		destroyInstanceObjects_CTextAreaOverlayElementInstanced(this.nativeObject.pointer, textInstanceParamValue);
	}
	native private void releaseInstanceObjectCreators_CTextAreaOverlayElementInstanced(long pNativeObject, long textInstance);
	/**
	 * 释放资源
	 * @param  
	 */
	public void releaseInstanceObjectCreators(com.earthview.world.graphic.TextAreaOverlayElementInstanced textInstance)
	{
		long textInstanceParamValue = (textInstance == null ? 0L : textInstance.nativeObject.pointer);
		releaseInstanceObjectCreators_CTextAreaOverlayElementInstanced(this.nativeObject.pointer, textInstanceParamValue);
	}
	public TextAreaInstanceObjectCreatorManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TextAreaInstanceObjectCreatorManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TextAreaInstanceObjectCreatorManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TextAreaInstanceObjectCreatorManager obj = null;
 		if(baseObj instanceof TextAreaInstanceObjectCreatorManager)
		{
			obj = (TextAreaInstanceObjectCreatorManager)baseObj;
		} else {
			obj = new TextAreaInstanceObjectCreatorManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTextAreaInstanceObjectCreatorManager");
			obj.increaseCast();
		}

		return obj;
	}
}
