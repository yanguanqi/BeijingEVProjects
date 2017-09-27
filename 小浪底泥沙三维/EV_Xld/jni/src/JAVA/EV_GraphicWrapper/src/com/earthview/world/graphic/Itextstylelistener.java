package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 文本风格监听类：用于通知相关对象在文本风格发生变化时进行更新
 */
public class Itextstylelistener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::ITextStyleListener", new ItextstylelistenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JITextStyleListenerProxy", new ItextstylelistenerClassFactory());
	}

	public Itextstylelistener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JITextStyleListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Itextstylelistener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void onStyleChanged_CTextureTextStyle_callback(long ref_style)
	{
		com.earthview.world.graphic.TextureTextStyle ref_styleParamValue = (ref_style == 0L ? null : new com.earthview.world.graphic.TextureTextStyle(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_styleParamValue != null)
		{
		ref_styleParamValue.setDelegate(true);
		ref_styleParamValue.setInstancePointer(new InstancePointer(ref_style));
		IClassFactory ref_styleParamValueClassFactory = GlobalClassFactoryMap.get(ref_styleParamValue.getCppInstanceTypeName());
		if (ref_styleParamValueClassFactory != null)
		{
			ref_styleParamValue.setDelegate(true);
			ref_styleParamValue = (com.earthview.world.graphic.TextureTextStyle)ref_styleParamValueClassFactory.create();
			ref_styleParamValue.setDelegate(true);
			ref_styleParamValue.setInstancePointer(new InstancePointer(ref_style));
		}
		}
		onStyleChanged(ref_styleParamValue);
	}

	native private void onStyleChanged_CTextureTextStyle(long pNativeObject, long ref_style);
	/**
	 * 文本风格发生变化时回调
	 */
	public void onStyleChanged(com.earthview.world.graphic.TextureTextStyle ref_style)
	{
		long ref_styleParamValue = (ref_style == null ? 0L : ref_style.nativeObject.pointer);
		onStyleChanged_CTextureTextStyle(this.nativeObject.pointer, ref_styleParamValue);
	}
	native private void onStyleChanged_CTextureTextStyle_NoVirtual(long pNativeObject, long ref_style);
	protected void onStyleChanged_NoVirtual(com.earthview.world.graphic.TextureTextStyle ref_style)
	{
		long ref_styleParamValue = (ref_style == null ? 0L : ref_style.nativeObject.pointer);
		onStyleChanged_CTextureTextStyle_NoVirtual(this.nativeObject.pointer, ref_styleParamValue);
	}

	public Itextstylelistener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Itextstylelistener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_onStyleChanged_CTextureTextStyle(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onStyleChanged_CTextureTextStyle(this.nativeObject.pointer, "onStyleChanged_CTextureTextStyle_callback");
		}
	}
	
	public static Itextstylelistener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Itextstylelistener obj = null;
 		if(baseObj instanceof Itextstylelistener)
		{
			obj = (Itextstylelistener)baseObj;
		} else {
			obj = new Itextstylelistener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ITextStyleListener");
			obj.increaseCast();
		}

		return obj;
	}
}
