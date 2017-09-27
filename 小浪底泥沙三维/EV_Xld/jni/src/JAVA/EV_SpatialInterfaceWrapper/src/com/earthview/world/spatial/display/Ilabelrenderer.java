package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Ilabelrenderer extends com.earthview.world.spatial.display.Irenderer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::ILabelRenderer", new IlabelrendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JILabelRendererProxy", new IlabelrendererClassFactory());
	}

	public Ilabelrenderer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JILabelRendererProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.Ilabelrenderer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getRendererType_void(long pNativeObject);
	/**
	 * 获取渲染类型
	 * @param  
	 */
	public com.earthview.world.spatial.display.EVRendererType getRendererType()
	{
		int returnValue = getRendererType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVRendererType.toEnum(returnValue);
	}
	native private void startDraw_IDisplay2D_ISymbol(long pNativeObject, long ref_display, long symbol);
	/**
	 * 开始绘制
	 * @param display 空间显示参数
	 * @param lableProperty 标注属性
	 */
	public void startDraw(com.earthview.world.display.Idisplay2d ref_display, com.earthview.world.spatial.display.Isymbol symbol)
	{
		long ref_displayParamValue = (ref_display == null ? 0L : ref_display.nativeObject.pointer);
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		startDraw_IDisplay2D_ISymbol(this.nativeObject.pointer, ref_displayParamValue, symbolParamValue);
	}
	native private void draw_CLabelElement(long pNativeObject, long element);
	/**
	 * 绘制要素
	 * @param feature 待绘制的要素
	 */
	public void draw(com.earthview.world.spatial.display.LabelElement element)
	{
		long elementParamValue = (element == null ? 0L : element.nativeObject.pointer);
		draw_CLabelElement(this.nativeObject.pointer, elementParamValue);
	}
	native private void endDraw_void(long pNativeObject);
	/**
	 * 结束绘制
	 * @param  
	 */
	public void endDraw()
	{
		endDraw_void(this.nativeObject.pointer);
	}
	public Ilabelrenderer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ilabelrenderer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取渲染类型
	 * @param  
	 */
	public com.earthview.world.spatial.display.EVRendererType getType()
	{
		return super.getType_NoVirtual();
	}
	
	native protected void register_getType_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
		}
	}
	
	public static Ilabelrenderer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ilabelrenderer obj = null;
 		if(baseObj instanceof Ilabelrenderer)
		{
			obj = (Ilabelrenderer)baseObj;
		} else {
			obj = new Ilabelrenderer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ILabelRenderer");
			obj.increaseCast();
		}

		return obj;
	}
}
