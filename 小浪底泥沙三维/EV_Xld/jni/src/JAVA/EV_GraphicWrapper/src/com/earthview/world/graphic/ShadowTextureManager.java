package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ShadowTextureManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CShadowTextureManager", new ShadowTextureManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCShadowTextureManagerProxy", new ShadowTextureManagerClassFactory());
	}

	public ShadowTextureManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCShadowTextureManagerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ShadowTextureManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void getShadowTextures_ShadowTextureConfigList_ShadowTextureList_callback(long config, long listToPopulate)
	{
		com.earthview.world.graphic.ShadowTextureConfigList configParamValue = new com.earthview.world.graphic.ShadowTextureConfigList(CreatedWhenConstruct.CWC_NotToCreate);
		configParamValue.setDelegate(true);
		configParamValue.setInstancePointer(new InstancePointer(config));
		IClassFactory configParamValueClassFactory = GlobalClassFactoryMap.get(configParamValue.getCppInstanceTypeName());
		if (configParamValueClassFactory != null)
		{
			configParamValue.setDelegate(true);
			configParamValue = (com.earthview.world.graphic.ShadowTextureConfigList)configParamValueClassFactory.create();
			configParamValue.setDelegate(true);
			configParamValue.setInstancePointer(new InstancePointer(config));
		}
		com.earthview.world.graphic.ShadowTextureList listToPopulateParamValue = new com.earthview.world.graphic.ShadowTextureList(CreatedWhenConstruct.CWC_NotToCreate);
		listToPopulateParamValue.setDelegate(true);
		listToPopulateParamValue.setInstancePointer(new InstancePointer(listToPopulate));
		IClassFactory listToPopulateParamValueClassFactory = GlobalClassFactoryMap.get(listToPopulateParamValue.getCppInstanceTypeName());
		if (listToPopulateParamValueClassFactory != null)
		{
			listToPopulateParamValue.setDelegate(true);
			listToPopulateParamValue = (com.earthview.world.graphic.ShadowTextureList)listToPopulateParamValueClassFactory.create();
			listToPopulateParamValue.setDelegate(true);
			listToPopulateParamValue.setInstancePointer(new InstancePointer(listToPopulate));
		}
		getShadowTextures(configParamValue, listToPopulateParamValue);
	}

	native private void getShadowTextures_ShadowTextureConfigList_ShadowTextureList(long pNativeObject, long config, long listToPopulate);
	public void getShadowTextures(com.earthview.world.graphic.ShadowTextureConfigList config, com.earthview.world.graphic.ShadowTextureList listToPopulate)
	{
		long configParamValue = config.nativeObject.pointer;
		long listToPopulateParamValue = listToPopulate.nativeObject.pointer;
		getShadowTextures_ShadowTextureConfigList_ShadowTextureList(this.nativeObject.pointer, configParamValue, listToPopulateParamValue);
	}
	native private void getShadowTextures_ShadowTextureConfigList_ShadowTextureList_NoVirtual(long pNativeObject, long config, long listToPopulate);
	protected void getShadowTextures_NoVirtual(com.earthview.world.graphic.ShadowTextureConfigList config, com.earthview.world.graphic.ShadowTextureList listToPopulate)
	{
		long configParamValue = config.nativeObject.pointer;
		long listToPopulateParamValue = listToPopulate.nativeObject.pointer;
		getShadowTextures_ShadowTextureConfigList_ShadowTextureList_NoVirtual(this.nativeObject.pointer, configParamValue, listToPopulateParamValue);
	}

	protected  long getNullShadowTexture_PixelFormat_callback(int format)
	{
		com.earthview.world.graphic.PixelFormat formatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(format);
		com.earthview.world.graphic.TexturePtr returnValue = getNullShadowTexture(formatParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getNullShadowTexture_PixelFormat(long pNativeObject, int format);
	public com.earthview.world.graphic.TexturePtr getNullShadowTexture(com.earthview.world.graphic.PixelFormat format)
	{
		int formatParamValue = format.getValue();
		long returnValue = getNullShadowTexture_PixelFormat(this.nativeObject.pointer, formatParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long getNullShadowTexture_PixelFormat_NoVirtual(long pNativeObject, int format);
	protected com.earthview.world.graphic.TexturePtr getNullShadowTexture_NoVirtual(com.earthview.world.graphic.PixelFormat format)
	{
		int formatParamValue = format.getValue();
		long returnValue = getNullShadowTexture_PixelFormat_NoVirtual(this.nativeObject.pointer, formatParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  void clearUnused_void_callback()
	{
		clearUnused();
	}

	native private void clearUnused_void(long pNativeObject);
	public void clearUnused()
	{
		clearUnused_void(this.nativeObject.pointer);
	}
	native private void clearUnused_void_NoVirtual(long pNativeObject);
	protected void clearUnused_NoVirtual()
	{
		clearUnused_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void clear_void_callback()
	{
		clear();
	}

	native private void clear_void(long pNativeObject);
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void clear_void_NoVirtual(long pNativeObject);
	protected void clear_NoVirtual()
	{
		clear_void_NoVirtual(this.nativeObject.pointer);
	}

	native private static long getSingleton_void();
	public static com.earthview.world.graphic.ShadowTextureManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.ShadowTextureManager __returnValue = new com.earthview.world.graphic.ShadowTextureManager(CreatedWhenConstruct.CWC_NotToCreate, "CShadowTextureManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowTextureManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CShadowTextureManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.graphic.ShadowTextureManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ShadowTextureManager __returnValue = new com.earthview.world.graphic.ShadowTextureManager(CreatedWhenConstruct.CWC_NotToCreate, "CShadowTextureManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowTextureManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CShadowTextureManager");
		}
		return __returnValue;
	}
	public ShadowTextureManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ShadowTextureManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getShadowTextures_ShadowTextureConfigList_ShadowTextureList(long pNativeObject, String method);
	native protected void register_getNullShadowTexture_PixelFormat(long pNativeObject, String method);
	native protected void register_clearUnused_void(long pNativeObject, String method);
	native protected void register_clear_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getShadowTextures_ShadowTextureConfigList_ShadowTextureList(this.nativeObject.pointer, "getShadowTextures_ShadowTextureConfigList_ShadowTextureList_callback");
			this.register_getNullShadowTexture_PixelFormat(this.nativeObject.pointer, "getNullShadowTexture_PixelFormat_callback");
			this.register_clearUnused_void(this.nativeObject.pointer, "clearUnused_void_callback");
			this.register_clear_void(this.nativeObject.pointer, "clear_void_callback");
		}
	}
	
	public static ShadowTextureManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ShadowTextureManager obj = null;
 		if(baseObj instanceof ShadowTextureManager)
		{
			obj = (ShadowTextureManager)baseObj;
		} else {
			obj = new ShadowTextureManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CShadowTextureManager");
			obj.increaseCast();
		}

		return obj;
	}
}
