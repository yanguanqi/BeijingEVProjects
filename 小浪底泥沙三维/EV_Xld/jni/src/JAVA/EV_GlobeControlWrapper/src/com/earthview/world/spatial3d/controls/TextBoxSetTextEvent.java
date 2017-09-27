package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextBoxSetTextEvent extends com.earthview.world.spatial3d.controls.TextBoxEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent", new TextBoxSetTextEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public TextBoxSetTextEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTextBoxSetTextEvent", null);
	}

	native private void setText_EVString(long pNativeObject, String text);
	/**
	 * 设置文本内容
	 * @param text 文本内容
	 */
	public void setText(String text)
	{
		String textParamValue = text;
		setText_EVString(this.nativeObject.pointer, textParamValue);
	}
	native private String getText_void(long pNativeObject);
	/**
	 * 获取文本内容
	 */
	public String getText()
	{
		String returnValue = getText_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getTextSeted_void(long pNativeObject);
	/**
	 * 文本内容是否被设置过
	 */
	public boolean getTextSeted()
	{
		boolean returnValue = getTextSeted_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFontName_EVString(long pNativeObject, String fontName);
	/**
	 * 设置字体的名字
	 * @param fontName 字体的名字
	 */
	public void setFontName(String fontName)
	{
		String fontNameParamValue = fontName;
		setFontName_EVString(this.nativeObject.pointer, fontNameParamValue);
	}
	native private String getFontName_void(long pNativeObject);
	/**
	 * 获取文本内容
	 */
	public String getFontName()
	{
		String returnValue = getFontName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getFontSeted_void(long pNativeObject);
	/**
	 * 字体是否被设置过
	 */
	public boolean getFontSeted()
	{
		boolean returnValue = getFontSeted_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFontColor_CColourValue(long pNativeObject, long color);
	/**
	 * 设置字体的颜色
	 * @param color 颜色
	 */
	public void setFontColor(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		setFontColor_CColourValue(this.nativeObject.pointer, colorParamValue);
	}
	native private long getFontColor_void(long pNativeObject);
	/**
	 * 获取文本的颜色
	 */
	public com.earthview.world.graphic.ColourValue getFontColor()
	{
		long returnValue = getFontColor_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private boolean getFontColorHasSeted_void(long pNativeObject);
	/**
	 * 字体颜色是否被设置过
	 */
	public boolean getFontColorHasSeted()
	{
		boolean returnValue = getFontColorHasSeted_void(this.nativeObject.pointer);
		return returnValue;
	}
	public TextBoxSetTextEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TextBoxSetTextEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TextBoxSetTextEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TextBoxSetTextEvent obj = null;
 		if(baseObj instanceof TextBoxSetTextEvent)
		{
			obj = (TextBoxSetTextEvent)baseObj;
		} else {
			obj = new TextBoxSetTextEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTextBoxSetTextEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
