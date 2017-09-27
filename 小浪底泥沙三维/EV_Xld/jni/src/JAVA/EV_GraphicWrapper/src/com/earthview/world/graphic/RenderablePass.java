package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 联系单个通路和单个渲染接口的类通过深度对实体分类而不是通过通路分类
 */
public class RenderablePass extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RenderablePass", new RenderablePassClassFactory());
	}

	native private long get_renderable_void(long pNativeObject);
	public com.earthview.world.graphic.Renderable get_renderable()
	{
		long jniValue = get_renderable_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Renderable __returnValue = new com.earthview.world.graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate, "CRenderable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Renderable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderable");
		}
		return __returnValue;
	}
	
	native private void set_renderable_CRenderable (long pNativeObject, long value);
	public void set_renderable(com.earthview.world.graphic.Renderable renderable)
	{
		long renderableParamValue = (renderable == null ? 0L : renderable.nativeObject.pointer);
		
		set_renderable_CRenderable(this.nativeObject.pointer, renderableParamValue);
	}
	
	native private long get_pass_void(long pNativeObject);
	public com.earthview.world.graphic.Pass get_pass()
	{
		long jniValue = get_pass_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Pass __returnValue = new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate, "CPass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Pass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPass");
		}
		return __returnValue;
	}
	
	native private void set_pass_CPass (long pNativeObject, long value);
	public void set_pass(com.earthview.world.graphic.Pass pass)
	{
		long passParamValue = (pass == null ? 0L : pass.nativeObject.pointer);
		
		set_pass_CPass(this.nativeObject.pointer, passParamValue);
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public RenderablePass() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("RenderablePass", null);
	}

	/**
	 * 构造函数
	 * @param rend 渲染接口
	 * @param p 通路
	 */
	public RenderablePass(com.earthview.world.graphic.Renderable ref_rend, com.earthview.world.graphic.Pass ref_p) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_rendPtr = new BasePointer(ref_rend);
		list.add("ref_rend", ref_rendPtr.get());
		BasePointer ref_pPtr = new BasePointer(ref_p);
		list.add("ref_p", ref_pPtr.get());
		Create("RenderablePass", list);
	}

	public RenderablePass(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderablePass(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RenderablePass fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderablePass obj = null;
 		if(baseObj instanceof RenderablePass)
		{
			obj = (RenderablePass)baseObj;
		} else {
			obj = new RenderablePass(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "RenderablePass");
			obj.increaseCast();
		}

		return obj;
	}
}
