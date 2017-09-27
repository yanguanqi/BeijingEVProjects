package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ExternalTextureSourceManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CExternalTextureSourceManager", new ExternalTextureSourceManagerClassFactory());
	}

	public ExternalTextureSourceManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CExternalTextureSourceManager", null);
	}

	native private static long getSingleton_void();
	public static com.earthview.world.graphic.ExternalTextureSourceManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.ExternalTextureSourceManager __returnValue = new com.earthview.world.graphic.ExternalTextureSourceManager(CreatedWhenConstruct.CWC_NotToCreate, "CExternalTextureSourceManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ExternalTextureSourceManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CExternalTextureSourceManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.graphic.ExternalTextureSourceManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ExternalTextureSourceManager __returnValue = new com.earthview.world.graphic.ExternalTextureSourceManager(CreatedWhenConstruct.CWC_NotToCreate, "CExternalTextureSourceManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ExternalTextureSourceManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CExternalTextureSourceManager");
		}
		return __returnValue;
	}
	native private void setCurrentPlugin_EVString(long pNativeObject, String sTexturePlugInType);
	public void setCurrentPlugin(String sTexturePlugInType)
	{
		String sTexturePlugInTypeParamValue = sTexturePlugInType;
		setCurrentPlugin_EVString(this.nativeObject.pointer, sTexturePlugInTypeParamValue);
	}
	native private long getCurrentPlugin_void(long pNativeObject);
	public com.earthview.world.graphic.ExternalTextureSource getCurrentPlugin()
	{
		long returnValue = getCurrentPlugin_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ExternalTextureSource __returnValue = new com.earthview.world.graphic.ExternalTextureSource(CreatedWhenConstruct.CWC_NotToCreate, "CExternalTextureSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ExternalTextureSource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CExternalTextureSource");
		}
		return __returnValue;
	}
	native private void destroyAdvancedTexture_EVString_EVString(long pNativeObject, String sTextureName, String groupName);
	public void destroyAdvancedTexture(String sTextureName, String groupName)
	{
		String sTextureNameParamValue = sTextureName;
		String groupNameParamValue = groupName;
		destroyAdvancedTexture_EVString_EVString(this.nativeObject.pointer, sTextureNameParamValue, groupNameParamValue);
	}
	native private void destroyAdvancedTexture_EVString(long pNativeObject, String sTextureName);
	public void destroyAdvancedTexture(String sTextureName)
	{
		String sTextureNameParamValue = sTextureName;
		destroyAdvancedTexture_EVString(this.nativeObject.pointer, sTextureNameParamValue);
	}
	native private long getExternalTextureSource_EVString(long pNativeObject, String sTexturePlugInType);
	public com.earthview.world.graphic.ExternalTextureSource getExternalTextureSource(String sTexturePlugInType)
	{
		String sTexturePlugInTypeParamValue = sTexturePlugInType;
		long returnValue = getExternalTextureSource_EVString(this.nativeObject.pointer, sTexturePlugInTypeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ExternalTextureSource __returnValue = new com.earthview.world.graphic.ExternalTextureSource(CreatedWhenConstruct.CWC_NotToCreate, "CExternalTextureSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ExternalTextureSource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CExternalTextureSource");
		}
		return __returnValue;
	}
	native private void setExternalTextureSource_EVString_CExternalTextureSource(long pNativeObject, String sTexturePlugInType, long ref_pTextureSystem);
	public void setExternalTextureSource(String sTexturePlugInType, com.earthview.world.graphic.ExternalTextureSource ref_pTextureSystem)
	{
		String sTexturePlugInTypeParamValue = sTexturePlugInType;
		long ref_pTextureSystemParamValue = (ref_pTextureSystem == null ? 0L : ref_pTextureSystem.nativeObject.pointer);
		setExternalTextureSource_EVString_CExternalTextureSource(this.nativeObject.pointer, sTexturePlugInTypeParamValue, ref_pTextureSystemParamValue);
	}
	public ExternalTextureSourceManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ExternalTextureSourceManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ExternalTextureSourceManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ExternalTextureSourceManager obj = null;
 		if(baseObj instanceof ExternalTextureSourceManager)
		{
			obj = (ExternalTextureSourceManager)baseObj;
		} else {
			obj = new ExternalTextureSourceManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CExternalTextureSourceManager");
			obj.increaseCast();
		}

		return obj;
	}
}
