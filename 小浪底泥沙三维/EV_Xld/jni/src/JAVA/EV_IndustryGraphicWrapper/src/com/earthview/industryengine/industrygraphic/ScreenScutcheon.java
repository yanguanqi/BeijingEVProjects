package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScreenScutcheon extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon", new ScreenScutcheonClassFactory());
	}

	/**
	 * 构造函数
	 * @param name 屏幕标牌名称
	 * @param templateName 模板名称
	 * @param control EarthView::World::Spatial3D::Controls::CGlobeControl对象
	 */
	public ScreenScutcheon(String name, String templateName, com.earthview.world.spatial3d.controls.GlobeControl control) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer templateNamePtr = new BasePointer(templateName);
		list.add("templateName", templateNamePtr.get());
		BasePointer controlPtr = new BasePointer(control);
		list.add("control", controlPtr.get());
		Create("CScreenScutcheon", list);
	}

	native private void setSelected_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否已选择
	 * @param value bool值
	 */
	public void setSelected(boolean value)
	{
		boolean valueParamValue = value;
		setSelected_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getSelected_void(long pNativeObject);
	/**
	 * 获取是否已选择
	 * @return bool值
	 */
	public boolean getSelected()
	{
		boolean returnValue = getSelected_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSelectable_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否已可选
	 * @param value bool值
	 */
	public void setSelectable(boolean value)
	{
		boolean valueParamValue = value;
		setSelectable_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getSelectable_void(long pNativeObject);
	/**
	 * 获取是否可选
	 * @return bool值
	 */
	public boolean getSelectable()
	{
		boolean returnValue = getSelectable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDraggable_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否可拖拽
	 * @param value bool值
	 */
	public void setDraggable(boolean value)
	{
		boolean valueParamValue = value;
		setDraggable_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getDraggable_void(long pNativeObject);
	/**
	 * 获取是否可拖拽
	 * @return bool值
	 */
	public boolean getDraggable()
	{
		boolean returnValue = getDraggable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVisible_bool(long pNativeObject, boolean visible);
	/**
	 * 设置panel的显隐
	 * @param visible 是否可见
	 */
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private boolean getVisible_void(long pNativeObject);
	/**
	 * 获取panel的显隐
	 * @return 是否可见
	 */
	public boolean getVisible()
	{
		boolean returnValue = getVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void(long pNativeObject);
	/**
	 * 获取屏幕标牌名称
	 * @return 屏幕标牌名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPanelElementHeight_EVString_int(long pNativeObject, String panelElementName, int height);
	/**
	 * 设置panel的高度
	 * @param panelElementName panel名称
	 * @param height panel的高度
	 */
	public void setPanelElementHeight(String panelElementName, int height)
	{
		String panelElementNameParamValue = panelElementName;
		int heightParamValue = height;
		setPanelElementHeight_EVString_int(this.nativeObject.pointer, panelElementNameParamValue, heightParamValue);
	}
	native private int getPanelElementHeight_EVString(long pNativeObject, String panelElementName);
	/**
	 * 获取panel的高度
	 * @param panelElementName panel名称
	 * @return panel的高度
	 */
	public int getPanelElementHeight(String panelElementName)
	{
		String panelElementNameParamValue = panelElementName;
		int returnValue = getPanelElementHeight_EVString(this.nativeObject.pointer, panelElementNameParamValue);
		return returnValue;
	}
	native private void setPanelElementWidth_EVString_int(long pNativeObject, String panelElementName, int width);
	/**
	 * 设置panel的宽度
	 * @param panelElementName panel名称
	 * @param height panel的宽度
	 */
	public void setPanelElementWidth(String panelElementName, int width)
	{
		String panelElementNameParamValue = panelElementName;
		int widthParamValue = width;
		setPanelElementWidth_EVString_int(this.nativeObject.pointer, panelElementNameParamValue, widthParamValue);
	}
	native private int getPanelElementWidth_EVString(long pNativeObject, String panelElementName);
	/**
	 * 获取panel的宽度
	 * @param panelElementName panel名称
	 * @return panel的宽度
	 */
	public int getPanelElementWidth(String panelElementName)
	{
		String panelElementNameParamValue = panelElementName;
		int returnValue = getPanelElementWidth_EVString(this.nativeObject.pointer, panelElementNameParamValue);
		return returnValue;
	}
	native private void setPanelElementPostion_EVString_CVector2(long pNativeObject, String panelElementName, long pos);
	/**
	 * 设置panel的位置
	 * @param panelElementName panel名称
	 * @param pos 屏幕坐标位置
	 */
	public void setPanelElementPostion(String panelElementName, com.earthview.world.spatial.math.Vector2 pos)
	{
		String panelElementNameParamValue = panelElementName;
		long posParamValue = pos.nativeObject.pointer;
		setPanelElementPostion_EVString_CVector2(this.nativeObject.pointer, panelElementNameParamValue, posParamValue);
	}
	native private long getPanelElementPostion_EVString(long pNativeObject, String panelElementName);
	/**
	 * 获取panel的位置
	 * @param panelElementName panel名称
	 * @return 屏幕坐标位置
	 */
	public com.earthview.world.spatial.math.Vector2 getPanelElementPostion(String panelElementName)
	{
		String panelElementNameParamValue = panelElementName;
		long returnValue = getPanelElementPostion_EVString(this.nativeObject.pointer, panelElementNameParamValue);
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	native private void setTextElementFontName_EVString_EVString_EVString(long pNativeObject, String panelElementName, String textAreaName, String fontName);
	/**
	 * 设置textarea字体
	 * @param panelElementName panel名称
	 * @param textAreaName textArea名称
	 * @param fontName 字体名称
	 */
	public void setTextElementFontName(String panelElementName, String textAreaName, String fontName)
	{
		String panelElementNameParamValue = panelElementName;
		String textAreaNameParamValue = textAreaName;
		String fontNameParamValue = fontName;
		setTextElementFontName_EVString_EVString_EVString(this.nativeObject.pointer, panelElementNameParamValue, textAreaNameParamValue, fontNameParamValue);
	}
	native private String getTextElementFontName_EVString_EVString(long pNativeObject, String panelElementName, String textAreaName);
	/**
	 * 获取textarea字体名称
	 * @param panelElementName panel名称
	 * @param textAreaName textArea名称
	 * @return 字体名称
	 */
	public String getTextElementFontName(String panelElementName, String textAreaName)
	{
		String panelElementNameParamValue = panelElementName;
		String textAreaNameParamValue = textAreaName;
		String returnValue = getTextElementFontName_EVString_EVString(this.nativeObject.pointer, panelElementNameParamValue, textAreaNameParamValue);
		return returnValue;
	}
	native private void setTextElementFontColor_EVString_EVString_CColourValue(long pNativeObject, String panelElementName, String textAreaName, long color);
	/**
	 * 设置textarea字体颜色
	 * @param panelElementName panel名称
	 * @param textAreaName textArea名称
	 * @param color 字体颜色
	 */
	public void setTextElementFontColor(String panelElementName, String textAreaName, com.earthview.world.graphic.ColourValue color)
	{
		String panelElementNameParamValue = panelElementName;
		String textAreaNameParamValue = textAreaName;
		long colorParamValue = color.nativeObject.pointer;
		setTextElementFontColor_EVString_EVString_CColourValue(this.nativeObject.pointer, panelElementNameParamValue, textAreaNameParamValue, colorParamValue);
	}
	native private long getTextElementFontColor_EVString_EVString(long pNativeObject, String panelElementName, String textAreaName);
	/**
	 * 获取textarea字体颜色
	 * @param panelElementName panel名称
	 * @param textAreaName textArea名称
	 * @return 字体颜色
	 */
	public com.earthview.world.graphic.ColourValue getTextElementFontColor(String panelElementName, String textAreaName)
	{
		String panelElementNameParamValue = panelElementName;
		String textAreaNameParamValue = textAreaName;
		long returnValue = getTextElementFontColor_EVString_EVString(this.nativeObject.pointer, panelElementNameParamValue, textAreaNameParamValue);
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
	native private void setTextElementFontColorTop_EVString_EVString_CColourValue(long pNativeObject, String panelElementName, String textAreaName, long color);
	/**
	 * 设置textarea字体顶部颜色
	 * @param panelElementName panel名称
	 * @param textAreaName textArea名称
	 * @param color 字体顶部颜色
	 */
	public void setTextElementFontColorTop(String panelElementName, String textAreaName, com.earthview.world.graphic.ColourValue color)
	{
		String panelElementNameParamValue = panelElementName;
		String textAreaNameParamValue = textAreaName;
		long colorParamValue = color.nativeObject.pointer;
		setTextElementFontColorTop_EVString_EVString_CColourValue(this.nativeObject.pointer, panelElementNameParamValue, textAreaNameParamValue, colorParamValue);
	}
	native private long getTextElementFontColorTop_EVString_EVString(long pNativeObject, String panelElementName, String textAreaName);
	/**
	 * 获取textarea字体顶部颜色
	 * @param panelElementName panel名称
	 * @param textAreaName textArea名称
	 * @return 字体顶部颜色
	 */
	public com.earthview.world.graphic.ColourValue getTextElementFontColorTop(String panelElementName, String textAreaName)
	{
		String panelElementNameParamValue = panelElementName;
		String textAreaNameParamValue = textAreaName;
		long returnValue = getTextElementFontColorTop_EVString_EVString(this.nativeObject.pointer, panelElementNameParamValue, textAreaNameParamValue);
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
	native private void setTextElementFontColorBottom_EVString_EVString_CColourValue(long pNativeObject, String panelElementName, String textAreaName, long color);
	/**
	 * 设置textarea字体底部颜色
	 * @param panelElementName panel名称
	 * @param textAreaName textArea名称
	 * @param color 字体底部颜色
	 */
	public void setTextElementFontColorBottom(String panelElementName, String textAreaName, com.earthview.world.graphic.ColourValue color)
	{
		String panelElementNameParamValue = panelElementName;
		String textAreaNameParamValue = textAreaName;
		long colorParamValue = color.nativeObject.pointer;
		setTextElementFontColorBottom_EVString_EVString_CColourValue(this.nativeObject.pointer, panelElementNameParamValue, textAreaNameParamValue, colorParamValue);
	}
	native private long getTextElementFontColorBottom_EVString_EVString(long pNativeObject, String panelElementName, String textAreaName);
	/**
	 * 获取textarea字体底部颜色
	 * @param panelElementName panel名称
	 * @param textAreaName textArea名称
	 * @return 字体底部颜色
	 */
	public com.earthview.world.graphic.ColourValue getTextElementFontColorBottom(String panelElementName, String textAreaName)
	{
		String panelElementNameParamValue = panelElementName;
		String textAreaNameParamValue = textAreaName;
		long returnValue = getTextElementFontColorBottom_EVString_EVString(this.nativeObject.pointer, panelElementNameParamValue, textAreaNameParamValue);
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
	native private void setTextElementFontSize_EVString_EVString_Real(long pNativeObject, String panelElementName, String textAreaName, double size);
	/**
	 * 设置textarea字体大小
	 * @param panelElementName panel名称
	 * @param textAreaName textArea名称
	 * @param size 字体大小
	 */
	public void setTextElementFontSize(String panelElementName, String textAreaName, double size)
	{
		String panelElementNameParamValue = panelElementName;
		String textAreaNameParamValue = textAreaName;
		double sizeParamValue = size;
		setTextElementFontSize_EVString_EVString_Real(this.nativeObject.pointer, panelElementNameParamValue, textAreaNameParamValue, sizeParamValue);
	}
	native private double getTextElementFontSize_EVString_EVString(long pNativeObject, String panelElementName, String textAreaName);
	/**
	 * 获取textarea字体大小
	 * @param panelElementName panel名称
	 * @param textAreaName textArea名称
	 * @return 字体大小
	 */
	public double getTextElementFontSize(String panelElementName, String textAreaName)
	{
		String panelElementNameParamValue = panelElementName;
		String textAreaNameParamValue = textAreaName;
		double returnValue = getTextElementFontSize_EVString_EVString(this.nativeObject.pointer, panelElementNameParamValue, textAreaNameParamValue);
		return returnValue;
	}
	native private void setTextElementFontHasShadow_EVString_EVString_ev_bool(long pNativeObject, String panelElementName, String textAreaName, boolean hasShadow);
	/**
	 * 设置textarea字体是否启用阴影
	 * @param panelElementName panel名称
	 * @param textAreaName textArea名称
	 * @param hasShadow 是否启用阴影
	 */
	public void setTextElementFontHasShadow(String panelElementName, String textAreaName, boolean hasShadow)
	{
		String panelElementNameParamValue = panelElementName;
		String textAreaNameParamValue = textAreaName;
		boolean hasShadowParamValue = hasShadow;
		setTextElementFontHasShadow_EVString_EVString_ev_bool(this.nativeObject.pointer, panelElementNameParamValue, textAreaNameParamValue, hasShadowParamValue);
	}
	native private void setTextElementCaption_EVString_EVString_EVString(long pNativeObject, String panelElementName, String textAreaName, String value);
	/**
	 * 设置textarea的内容
	 * @param panelElementName panel名称
	 * @param textAreaName textArea名称
	 * @param value 内容
	 */
	public void setTextElementCaption(String panelElementName, String textAreaName, String value)
	{
		String panelElementNameParamValue = panelElementName;
		String textAreaNameParamValue = textAreaName;
		String valueParamValue = value;
		setTextElementCaption_EVString_EVString_EVString(this.nativeObject.pointer, panelElementNameParamValue, textAreaNameParamValue, valueParamValue);
	}
	native private String getTextElementCaption_EVString_EVString(long pNativeObject, String panelElementName, String textAreaName);
	/**
	 * 获取textarea的内容
	 * @param panelElementName panel名称
	 * @param textAreaName textArea名称
	 * @return textarea内容
	 */
	public String getTextElementCaption(String panelElementName, String textAreaName)
	{
		String panelElementNameParamValue = panelElementName;
		String textAreaNameParamValue = textAreaName;
		String returnValue = getTextElementCaption_EVString_EVString(this.nativeObject.pointer, panelElementNameParamValue, textAreaNameParamValue);
		return returnValue;
	}
	native private void addChildName_EVString(long pNativeObject, String name);
	/**
	 * 添加子对象名称
	 * @param name 子对象名称
	 */
	public void addChildName(String name)
	{
		String nameParamValue = name;
		addChildName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setPanelElementMaterial_EVString_EVString(long pNativeObject, String panelElementName, String materialName);
	/**
	 * 设置PanelElement的材质
	 * @param panelElementName PanelElement名称
	 * @param materialName 材质名称
	 */
	public void setPanelElementMaterial(String panelElementName, String materialName)
	{
		String panelElementNameParamValue = panelElementName;
		String materialNameParamValue = materialName;
		setPanelElementMaterial_EVString_EVString(this.nativeObject.pointer, panelElementNameParamValue, materialNameParamValue);
	}
	native private void setEventObject_CScreenScutcheonEventObject(long pNativeObject, long object);
	/**
	 * 设置事件对象
	 * @param object 对象
	 */
	public void setEventObject(com.earthview.industryengine.industrygraphic.ScreenScutcheonEventObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		setEventObject_CScreenScutcheonEventObject(this.nativeObject.pointer, objectParamValue);
	}
	native private long getEventObject_void(long pNativeObject);
	/**
	 * 获取事件对象
	 * @param object 对象
	 */
	public com.earthview.industryengine.industrygraphic.ScreenScutcheonEventObject getEventObject()
	{
		long returnValue = getEventObject_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.industrygraphic.ScreenScutcheonEventObject __returnValue = new com.earthview.industryengine.industrygraphic.ScreenScutcheonEventObject(CreatedWhenConstruct.CWC_NotToCreate, "CScreenScutcheonEventObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.industrygraphic.ScreenScutcheonEventObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CScreenScutcheonEventObject");
		}
		return __returnValue;
	}
	native private void setPanelElementTexture_EVString_CTexturePtr(long pNativeObject, String panelElementName, long texturePtr);
	/**
	 * 设置PanelElement的纹理
	 * @param panelElementName PanelElement名称
	 * @param texturePtr 纹理指针
	 */
	public void setPanelElementTexture(String panelElementName, com.earthview.world.graphic.TexturePtr texturePtr)
	{
		String panelElementNameParamValue = panelElementName;
		long texturePtrParamValue = texturePtr.nativeObject.pointer;
		setPanelElementTexture_EVString_CTexturePtr(this.nativeObject.pointer, panelElementNameParamValue, texturePtrParamValue);
	}
	native private void setPanelElementBorderTexture_EVString_CTexturePtr(long pNativeObject, String panelElementName, long texturePtr);
	/**
	 * 设置PanelElement的边框纹理
	 * @param panelElementName PanelElement名称
	 * @param texturePtr 纹理指针
	 */
	public void setPanelElementBorderTexture(String panelElementName, com.earthview.world.graphic.TexturePtr texturePtr)
	{
		String panelElementNameParamValue = panelElementName;
		long texturePtrParamValue = texturePtr.nativeObject.pointer;
		setPanelElementBorderTexture_EVString_CTexturePtr(this.nativeObject.pointer, panelElementNameParamValue, texturePtrParamValue);
	}
	native private void calculateWidth_CTextAreaOverlayElement_Real_Real(long pNativeObject, long pTextArea, long width, long height);
	/**
	 * 计算CTextAreaOverlayElement区域字符串的长宽
	 * @param pTextArea CTextAreaOverlayElement名称
	 * @param width 返回字符串宽度
	 * @param height 返回字符串高度
	 */
	public void calculateWidth(com.earthview.world.graphic.TextAreaOverlayElement pTextArea, DoublePointer width, DoublePointer height)
	{
		long pTextAreaParamValue = (pTextArea == null ? 0L : pTextArea.nativeObject.pointer);
		long widthParamValue = width.nativeObject.pointer;
		long heightParamValue = height.nativeObject.pointer;
		calculateWidth_CTextAreaOverlayElement_Real_Real(this.nativeObject.pointer, pTextAreaParamValue, widthParamValue, heightParamValue);
	}
	native private void setPanelElementVisible_EVString_ev_bool(long pNativeObject, String panelElementName, boolean isVisible);
	/**
	 * 设置PanelElement是否可见
	 * @param panelElementName PanelElement名称
	 * @param isVisible 是否可见
	 */
	public void setPanelElementVisible(String panelElementName, boolean isVisible)
	{
		String panelElementNameParamValue = panelElementName;
		boolean isVisibleParamValue = isVisible;
		setPanelElementVisible_EVString_ev_bool(this.nativeObject.pointer, panelElementNameParamValue, isVisibleParamValue);
	}
	native private boolean getPanelElementVisible_EVString(long pNativeObject, String panelElementName);
	/**
	 * 获取PanelElement是否可见
	 * @param panelElementName PanelElement名称
	 * @return 是否可见
	 */
	public boolean getPanelElementVisible(String panelElementName)
	{
		String panelElementNameParamValue = panelElementName;
		boolean returnValue = getPanelElementVisible_EVString(this.nativeObject.pointer, panelElementNameParamValue);
		return returnValue;
	}
	native private void setTextElementVisible_EVString_EVString_ev_bool(long pNativeObject, String panelElementName, String textAreaName, boolean isVisible);
	/**
	 * 设置TextAreaElement是否可见
	 * @param panelElementName PanelElement名称
	 * @param textAreaName TextAreaElement名称
	 * @param isVisible 是否可见
	 */
	public void setTextElementVisible(String panelElementName, String textAreaName, boolean isVisible)
	{
		String panelElementNameParamValue = panelElementName;
		String textAreaNameParamValue = textAreaName;
		boolean isVisibleParamValue = isVisible;
		setTextElementVisible_EVString_EVString_ev_bool(this.nativeObject.pointer, panelElementNameParamValue, textAreaNameParamValue, isVisibleParamValue);
	}
	native private boolean getTextElementVisible_EVString_EVString(long pNativeObject, String panelElementName, String textAreaName);
	/**
	 * 获取TextAreaElement是否可见
	 * @param panelElementName PanelElement名称
	 * @param textAreaName TextAreaElement名称
	 * @return 是否可见
	 */
	public boolean getTextElementVisible(String panelElementName, String textAreaName)
	{
		String panelElementNameParamValue = panelElementName;
		String textAreaNameParamValue = textAreaName;
		boolean returnValue = getTextElementVisible_EVString_EVString(this.nativeObject.pointer, panelElementNameParamValue, textAreaNameParamValue);
		return returnValue;
	}
	native private long getGlobeControl_void(long pNativeObject);
	public com.earthview.world.spatial3d.controls.GlobeControl getGlobeControl()
	{
		long returnValue = getGlobeControl_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.GlobeControl __returnValue = new com.earthview.world.spatial3d.controls.GlobeControl(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeControl)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControl");
		}
		return __returnValue;
	}
	public ScreenScutcheon(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScreenScutcheon(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ScreenScutcheon fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScreenScutcheon obj = null;
 		if(baseObj instanceof ScreenScutcheon)
		{
			obj = (ScreenScutcheon)baseObj;
		} else {
			obj = new ScreenScutcheon(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScreenScutcheon");
			obj.increaseCast();
		}

		return obj;
	}
}
