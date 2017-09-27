package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 字体风格
 */
public class FontStyle extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::FontStyle", new FontStyleClassFactory());
	}

	public FontStyle() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("FontStyle", null);
	}

	public FontStyle(String fontFamily, short size, boolean isItalic, boolean isBold, boolean hasShadow) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer fontFamilyPtr = new BasePointer(fontFamily);
		list.add("fontFamily", fontFamilyPtr.get());
		BasePointer sizePtr = new BasePointer(size);
		list.add("size", sizePtr.get());
		BasePointer isItalicPtr = new BasePointer(isItalic);
		list.add("isItalic", isItalicPtr.get());
		BasePointer isBoldPtr = new BasePointer(isBold);
		list.add("isBold", isBoldPtr.get());
		BasePointer hasShadowPtr = new BasePointer(hasShadow);
		list.add("hasShadow", hasShadowPtr.get());
		Create("FontStyle", list);
	}

	public FontStyle(String fontFamily, short size, boolean isItalic, boolean isBold, boolean hasShadow, boolean antiAlias) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer fontFamilyPtr = new BasePointer(fontFamily);
		list.add("fontFamily", fontFamilyPtr.get());
		BasePointer sizePtr = new BasePointer(size);
		list.add("size", sizePtr.get());
		BasePointer isItalicPtr = new BasePointer(isItalic);
		list.add("isItalic", isItalicPtr.get());
		BasePointer isBoldPtr = new BasePointer(isBold);
		list.add("isBold", isBoldPtr.get());
		BasePointer hasShadowPtr = new BasePointer(hasShadow);
		list.add("hasShadow", hasShadowPtr.get());
		BasePointer antiAliasPtr = new BasePointer(antiAlias);
		list.add("antiAlias", antiAliasPtr.get());
		Create("FontStyle", list);
	}

	public FontStyle(long val) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer valPtr = new BasePointer(val);
		list.add("val", valPtr.get());
		Create("FontStyle", list);
	}

	native private long getFontFamily_void(long pNativeObject);
	public StringPointer getFontFamily()
	{
		long returnValue = getFontFamily_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setFontFamily_EVString(long pNativeObject, String fontFamily);
	public void setFontFamily(String fontFamily)
	{
		String fontFamilyParamValue = fontFamily;
		setFontFamily_EVString(this.nativeObject.pointer, fontFamilyParamValue);
	}
	native private int fontIndex_void(long pNativeObject);
	public int fontIndex()
	{
		int returnValue = fontIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isItalic_void(long pNativeObject);
	public boolean isItalic()
	{
		boolean returnValue = isItalic_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setItalic_ev_bool(long pNativeObject, boolean val);
	public void setItalic(boolean val)
	{
		boolean valParamValue = val;
		setItalic_ev_bool(this.nativeObject.pointer, valParamValue);
	}
	native private short size_void(long pNativeObject);
	public short size()
	{
		short returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSize_ev_uint8(long pNativeObject, short val);
	public void setSize(short val)
	{
		short valParamValue = val;
		setSize_ev_uint8(this.nativeObject.pointer, valParamValue);
	}
	native private boolean isBold_void(long pNativeObject);
	public boolean isBold()
	{
		boolean returnValue = isBold_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBold_ev_bool(long pNativeObject, boolean val);
	public void setBold(boolean val)
	{
		boolean valParamValue = val;
		setBold_ev_bool(this.nativeObject.pointer, valParamValue);
	}
	native private boolean hasShadow_void(long pNativeObject);
	public boolean hasShadow()
	{
		boolean returnValue = hasShadow_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setShadow_ev_bool(long pNativeObject, boolean val);
	public void setShadow(boolean val)
	{
		boolean valParamValue = val;
		setShadow_ev_bool(this.nativeObject.pointer, valParamValue);
	}
	native private boolean isAntiAlias_void(long pNativeObject);
	public boolean isAntiAlias()
	{
		boolean returnValue = isAntiAlias_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAntiAlias_ev_bool(long pNativeObject, boolean val);
	public void setAntiAlias(boolean val)
	{
		boolean valParamValue = val;
		setAntiAlias_ev_bool(this.nativeObject.pointer, valParamValue);
	}
	native private long key_void(long pNativeObject);
	public long key()
	{
		long returnValue = key_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long flag_void(long pNativeObject);
	/**
	 * 获取风格标识:取出字段“mIsBold”和“mIsItalic”所占的位
	 */
	public long flag()
	{
		long returnValue = flag_void(this.nativeObject.pointer);
		return returnValue;
	}
	public FontStyle(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FontStyle(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static FontStyle fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FontStyle obj = null;
 		if(baseObj instanceof FontStyle)
		{
			obj = (FontStyle)baseObj;
		} else {
			obj = new FontStyle(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "FontStyle");
			obj.increaseCast();
		}

		return obj;
	}
}
