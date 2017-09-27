package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 连载RenderSystemCapabilities到渲染性能脚本
 */
public class RenderSystemCapabilitiesSerializer extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderSystemCapabilitiesSerializer", new RenderSystemCapabilitiesSerializerClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public RenderSystemCapabilitiesSerializer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRenderSystemCapabilitiesSerializer", null);
	}

	native private void writeScript_CRenderSystemCapabilities_EVString_EVString(long pNativeObject, long caps, String name, String filename);
	/**
	 * 向数据流中写入一个RenderSystemCapabilities对象
	 * @param caps 
	 * @param name 
	 * @param filename 
	 */
	public void writeScript(com.earthview.world.graphic.RenderSystemCapabilities caps, String name, String filename)
	{
		long capsParamValue = (caps == null ? 0L : caps.nativeObject.pointer);
		String nameParamValue = name;
		String filenameParamValue = filename;
		writeScript_CRenderSystemCapabilities_EVString_EVString(this.nativeObject.pointer, capsParamValue, nameParamValue, filenameParamValue);
	}
	native private String writeString_CRenderSystemCapabilities_EVString(long pNativeObject, long caps, String name);
	///zxt updatefor v1.8
	public String writeString(com.earthview.world.graphic.RenderSystemCapabilities caps, String name)
	{
		long capsParamValue = (caps == null ? 0L : caps.nativeObject.pointer);
		String nameParamValue = name;
		String returnValue = writeString_CRenderSystemCapabilities_EVString(this.nativeObject.pointer, capsParamValue, nameParamValue);
		return returnValue;
	}
	native private void parseScript_DataStreamPtr(long pNativeObject, long stream);
	/**
	 * 解析RenderSystemCapabilities脚本文件，并将其添加到RenderSystemCapabilitiesManager::_addRenderSystemCapabilities中
	 * @param  
	 */
	public void parseScript(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		parseScript_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
	}
	public RenderSystemCapabilitiesSerializer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderSystemCapabilitiesSerializer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RenderSystemCapabilitiesSerializer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderSystemCapabilitiesSerializer obj = null;
 		if(baseObj instanceof RenderSystemCapabilitiesSerializer)
		{
			obj = (RenderSystemCapabilitiesSerializer)baseObj;
		} else {
			obj = new RenderSystemCapabilitiesSerializer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderSystemCapabilitiesSerializer");
			obj.increaseCast();
		}

		return obj;
	}
}
