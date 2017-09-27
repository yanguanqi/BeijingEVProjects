package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 包含渲染目标事件的信息
 */
public class RenderTargetEvent extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RenderTargetEvent", new RenderTargetEventClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public RenderTargetEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("RenderTargetEvent", null);
	}

	native private long get_source_void(long pNativeObject);
	public com.earthview.world.graphic.RenderTarget get_source()
	{
		long jniValue = get_source_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderTarget __returnValue = new com.earthview.world.graphic.RenderTarget(CreatedWhenConstruct.CWC_NotToCreate, "CRenderTarget");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderTarget)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderTarget");
		}
		return __returnValue;
	}
	
	native private void set_source_CRenderTarget (long pNativeObject, long value);
	public void set_source(com.earthview.world.graphic.RenderTarget source)
	{
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		
		set_source_CRenderTarget(this.nativeObject.pointer, sourceParamValue);
	}
	
	public RenderTargetEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderTargetEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RenderTargetEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderTargetEvent obj = null;
 		if(baseObj instanceof RenderTargetEvent)
		{
			obj = (RenderTargetEvent)baseObj;
		} else {
			obj = new RenderTargetEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "RenderTargetEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
