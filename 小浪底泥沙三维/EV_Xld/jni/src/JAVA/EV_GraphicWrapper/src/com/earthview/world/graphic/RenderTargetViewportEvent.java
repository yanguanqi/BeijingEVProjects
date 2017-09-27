package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 包含渲染目标特殊视口事件的信息
 */
public class RenderTargetViewportEvent extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RenderTargetViewportEvent", new RenderTargetViewportEventClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public RenderTargetViewportEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("RenderTargetViewportEvent", null);
	}

	native private long get_source_void(long pNativeObject);
	public com.earthview.world.graphic.Viewport get_source()
	{
		long jniValue = get_source_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}
	
	native private void set_source_CViewport (long pNativeObject, long value);
	public void set_source(com.earthview.world.graphic.Viewport source)
	{
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		
		set_source_CViewport(this.nativeObject.pointer, sourceParamValue);
	}
	
	public RenderTargetViewportEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderTargetViewportEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RenderTargetViewportEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderTargetViewportEvent obj = null;
 		if(baseObj instanceof RenderTargetViewportEvent)
		{
			obj = (RenderTargetViewportEvent)baseObj;
		} else {
			obj = new RenderTargetViewportEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "RenderTargetViewportEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
