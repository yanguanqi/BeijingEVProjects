package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextBoxSetPositionEvent extends com.earthview.world.spatial3d.controls.TextBoxEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEvent", new TextBoxSetPositionEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public TextBoxSetPositionEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTextBoxSetPositionEvent", null);
	}

	native private void setPosition_Real_Real_Real_Real_Real_Real_GuiHorizontalAlignment_GuiVerticalAlignment(long pNativeObject, double x, double y, double width, double height, double textOffsetX, double textOffsetY, int gha, int gva);
	/**
	 * 设置位置
	 * @param x 左上角Ｘ坐标
	 * @param y 左上角Y坐标
	 * @param width 宽度
	 * @param height 高度
	 * @param textOffsetX 文字相对背景的
	 * @param textOffsetX 高度
	 * @param gha 水平对齐的方式
	 * @param gva 竖直对齐的方式
	 */
	public void setPosition(double x, double y, double width, double height, double textOffsetX, double textOffsetY, com.earthview.world.graphic.GuiHorizontalAlignment gha, com.earthview.world.graphic.GuiVerticalAlignment gva)
	{
		double xParamValue = x;
		double yParamValue = y;
		double widthParamValue = width;
		double heightParamValue = height;
		double textOffsetXParamValue = textOffsetX;
		double textOffsetYParamValue = textOffsetY;
		int ghaParamValue = gha.getValue();
		int gvaParamValue = gva.getValue();
		setPosition_Real_Real_Real_Real_Real_Real_GuiHorizontalAlignment_GuiVerticalAlignment(this.nativeObject.pointer, xParamValue, yParamValue, widthParamValue, heightParamValue, textOffsetXParamValue, textOffsetYParamValue, ghaParamValue, gvaParamValue);
	}
	native private void getPosition_Real_Real_Real_Real_Real_Real_GuiHorizontalAlignment_GuiVerticalAlignment(long pNativeObject, long x, long y, long width, long height, long textOffsetX, long textOffsetY, long gha, long gva);
	/**
	 * 获取位置
	 * @param x 左上角Ｘ坐标
	 * @param y 左上角Y坐标
	 * @param width 宽度
	 * @param height 高度
	 * @param textOffsetX 文字相对背景的
	 * @param textOffsetX 高度
	 * @param gha 水平对齐的方式
	 * @param gva 竖直对齐的方式
	 */
	public void getPosition(DoublePointer x, DoublePointer y, DoublePointer width, DoublePointer height, DoublePointer textOffsetX, DoublePointer textOffsetY, EnumPointer gha, EnumPointer gva)
	{
		long xParamValue = x.nativeObject.pointer;
		long yParamValue = y.nativeObject.pointer;
		long widthParamValue = width.nativeObject.pointer;
		long heightParamValue = height.nativeObject.pointer;
		long textOffsetXParamValue = textOffsetX.nativeObject.pointer;
		long textOffsetYParamValue = textOffsetY.nativeObject.pointer;
		long ghaParamValue = gha.nativeObject.pointer;
		long gvaParamValue = gva.nativeObject.pointer;
		getPosition_Real_Real_Real_Real_Real_Real_GuiHorizontalAlignment_GuiVerticalAlignment(this.nativeObject.pointer, xParamValue, yParamValue, widthParamValue, heightParamValue, textOffsetXParamValue, textOffsetYParamValue, ghaParamValue, gvaParamValue);
	}
	public TextBoxSetPositionEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TextBoxSetPositionEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TextBoxSetPositionEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TextBoxSetPositionEvent obj = null;
 		if(baseObj instanceof TextBoxSetPositionEvent)
		{
			obj = (TextBoxSetPositionEvent)baseObj;
		} else {
			obj = new TextBoxSetPositionEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTextBoxSetPositionEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
