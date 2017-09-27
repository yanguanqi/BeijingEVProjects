package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 管理RenderSystemCapabilities的数据库
 */
public class RenderSystemCapabilitiesManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderSystemCapabilitiesManager", new RenderSystemCapabilitiesManagerClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public RenderSystemCapabilitiesManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRenderSystemCapabilitiesManager", null);
	}

	native private void parseCapabilitiesFromArchive_EVString_EVString_ev_bool(long pNativeObject, String filename, String archiveType, boolean recursive);
	/**
	 * 解析脚本文件
	 * @param filename 
	 * @param archiveType 
	 * @param recursive 
	 */
	public void parseCapabilitiesFromArchive(String filename, String archiveType, boolean recursive)
	{
		String filenameParamValue = filename;
		String archiveTypeParamValue = archiveType;
		boolean recursiveParamValue = recursive;
		parseCapabilitiesFromArchive_EVString_EVString_ev_bool(this.nativeObject.pointer, filenameParamValue, archiveTypeParamValue, recursiveParamValue);
	}
	native private void parseCapabilitiesFromArchive_EVString_EVString(long pNativeObject, String filename, String archiveType);
	/**
	 * 解析脚本文件
	 * @param filename 
	 * @param archiveType 
	 */
	public void parseCapabilitiesFromArchive(String filename, String archiveType)
	{
		String filenameParamValue = filename;
		String archiveTypeParamValue = archiveType;
		parseCapabilitiesFromArchive_EVString_EVString(this.nativeObject.pointer, filenameParamValue, archiveTypeParamValue);
	}
	native private long loadParsedCapabilities_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.RenderSystemCapabilities loadParsedCapabilities(String name)
	{
		String nameParamValue = name;
		long returnValue = loadParsedCapabilities_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderSystemCapabilities __returnValue = new com.earthview.world.graphic.RenderSystemCapabilities(CreatedWhenConstruct.CWC_NotToCreate, "CRenderSystemCapabilities");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderSystemCapabilities)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderSystemCapabilities");
		}
		return __returnValue;
	}
	native private void _addRenderSystemCapabilities_EVString_CRenderSystemCapabilities(long pNativeObject, String name, long caps);
	public void _addRenderSystemCapabilities(String name, com.earthview.world.graphic.RenderSystemCapabilities caps)
	{
		String nameParamValue = name;
		long capsParamValue = (caps == null ? 0L : caps.nativeObject.pointer);
		_addRenderSystemCapabilities_EVString_CRenderSystemCapabilities(this.nativeObject.pointer, nameParamValue, capsParamValue);
	}
	native private static long getSingleton_void();
	/**
	 * 重载标准的Singletonretrieval
	 * @param  
	 */
	public static com.earthview.world.graphic.RenderSystemCapabilitiesManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.RenderSystemCapabilitiesManager __returnValue = new com.earthview.world.graphic.RenderSystemCapabilitiesManager(CreatedWhenConstruct.CWC_NotToCreate, "CRenderSystemCapabilitiesManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderSystemCapabilitiesManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderSystemCapabilitiesManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	/**
	 * 重载标准的Singletonretrieval
	 * @param  
	 */
	public static com.earthview.world.graphic.RenderSystemCapabilitiesManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderSystemCapabilitiesManager __returnValue = new com.earthview.world.graphic.RenderSystemCapabilitiesManager(CreatedWhenConstruct.CWC_NotToCreate, "CRenderSystemCapabilitiesManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderSystemCapabilitiesManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderSystemCapabilitiesManager");
		}
		return __returnValue;
	}
	public RenderSystemCapabilitiesManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderSystemCapabilitiesManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RenderSystemCapabilitiesManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderSystemCapabilitiesManager obj = null;
 		if(baseObj instanceof RenderSystemCapabilitiesManager)
		{
			obj = (RenderSystemCapabilitiesManager)baseObj;
		} else {
			obj = new RenderSystemCapabilitiesManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderSystemCapabilitiesManager");
			obj.increaseCast();
		}

		return obj;
	}
}
