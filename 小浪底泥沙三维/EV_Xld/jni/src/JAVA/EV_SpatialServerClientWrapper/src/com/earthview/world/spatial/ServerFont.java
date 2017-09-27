package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * /EarthView服务支持的字体风格信息类/
 */
public class ServerFont extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerFont", new ServerFontClassFactory());
	}

	native private String get_fontFamily_void(long pNativeObject);
	public String get_fontFamily()
	{
		String jniValue = get_fontFamily_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_fontFamily_EVString (long pNativeObject, String value);
	public void set_fontFamily(String fontFamily)
	{
		String fontFamilyParamValue = fontFamily;
		
		set_fontFamily_EVString(this.nativeObject.pointer, fontFamilyParamValue);
	}
	
	native private int get_fontSize_void(long pNativeObject);
	public int get_fontSize()
	{
		int jniValue = get_fontSize_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_fontSize_ev_int32 (long pNativeObject, int value);
	public void set_fontSize(int fontSize)
	{
		int fontSizeParamValue = fontSize;
		
		set_fontSize_ev_int32(this.nativeObject.pointer, fontSizeParamValue);
	}
	
	native private String get_fontColor_void(long pNativeObject);
	public String get_fontColor()
	{
		String jniValue = get_fontColor_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_fontColor_EVString (long pNativeObject, String value);
	public void set_fontColor(String fontColor)
	{
		String fontColorParamValue = fontColor;
		
		set_fontColor_EVString(this.nativeObject.pointer, fontColorParamValue);
	}
	
	native private String get_backColor_void(long pNativeObject);
	public String get_backColor()
	{
		String jniValue = get_backColor_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_backColor_EVString (long pNativeObject, String value);
	public void set_backColor(String backColor)
	{
		String backColorParamValue = backColor;
		
		set_backColor_EVString(this.nativeObject.pointer, backColorParamValue);
	}
	
	native private boolean get_isFontBold_void(long pNativeObject);
	public boolean get_isFontBold()
	{
		boolean jniValue = get_isFontBold_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_isFontBold_ev_bool (long pNativeObject, boolean value);
	public void set_isFontBold(boolean isFontBold)
	{
		boolean isFontBoldParamValue = isFontBold;
		
		set_isFontBold_ev_bool(this.nativeObject.pointer, isFontBoldParamValue);
	}
	
	native private boolean get_isFontItalic_void(long pNativeObject);
	public boolean get_isFontItalic()
	{
		boolean jniValue = get_isFontItalic_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_isFontItalic_ev_bool (long pNativeObject, boolean value);
	public void set_isFontItalic(boolean isFontItalic)
	{
		boolean isFontItalicParamValue = isFontItalic;
		
		set_isFontItalic_ev_bool(this.nativeObject.pointer, isFontItalicParamValue);
	}
	
	native private boolean get_isFontUnderlined_void(long pNativeObject);
	public boolean get_isFontUnderlined()
	{
		boolean jniValue = get_isFontUnderlined_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_isFontUnderlined_ev_bool (long pNativeObject, boolean value);
	public void set_isFontUnderlined(boolean isFontUnderlined)
	{
		boolean isFontUnderlinedParamValue = isFontUnderlined;
		
		set_isFontUnderlined_ev_bool(this.nativeObject.pointer, isFontUnderlinedParamValue);
	}
	
	/**
	 * 默认构造函数
	 */
	public ServerFont() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CServerFont", null);
	}

	/**
	 * 拷贝构造函数
	 * @param font 拷贝对象1
	 */
	public ServerFont(com.earthview.world.spatial.ServerFont font) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer fontPtr = new BasePointer(font);
		list.add("font", fontPtr.get());
		Create("CServerFont", list);
	}

	public ServerFont(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerFont(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ServerFont fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerFont obj = null;
 		if(baseObj instanceof ServerFont)
		{
			obj = (ServerFont)baseObj;
		} else {
			obj = new ServerFont(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerFont");
			obj.increaseCast();
		}

		return obj;
	}
}
