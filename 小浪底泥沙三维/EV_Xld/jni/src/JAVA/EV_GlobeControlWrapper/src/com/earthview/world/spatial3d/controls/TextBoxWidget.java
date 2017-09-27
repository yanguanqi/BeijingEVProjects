package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 文本框overlay控件，主要用于显示场景状态
 */
public class TextBoxWidget extends com.earthview.world.spatial3d.controls.Widget {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CTextBoxWidget", new TextBoxWidgetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCTextBoxWidgetProxy", new TextBoxWidgetClassFactory());
	}

	/**
	 * 构造函数
	 * @param name 名字
	 * @param fontName 字体的名称
	 * @param gha 部件的纵向布局方式
	 * @param gva 部件的横向布局方式
	 * @param top 左上角的Ｙ坐标
	 * @param left 左上角的Ｘ坐标
	 * @param width 宽度
	 * @param height 高度
	 * @param textOffsetX 文字在Ｘ方向上的偏移
	 * @param textOffsetY 文字在Ｙ方向上的偏移
	 * @param charHeight 文字的高度
	 * @param spaceWidth 空白字符的宽度
	 * @param color 文字的颜色
	 */
	public TextBoxWidget(String name, String fontName, com.earthview.world.graphic.GuiHorizontalAlignment gha, com.earthview.world.graphic.GuiVerticalAlignment gva, float top, float left, float width, float height, float textOffsetX, float textOffsetY, int charHeight, int spaceWidth, com.earthview.world.graphic.ColourValue color) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer fontNamePtr = new BasePointer(fontName);
		list.add("fontName", fontNamePtr.get());
		BasePointer ghaPtr = new BasePointer(gha);
		list.add("gha", ghaPtr.get());
		BasePointer gvaPtr = new BasePointer(gva);
		list.add("gva", gvaPtr.get());
		BasePointer topPtr = new BasePointer(top);
		list.add("top", topPtr.get());
		BasePointer leftPtr = new BasePointer(left);
		list.add("left", leftPtr.get());
		BasePointer widthPtr = new BasePointer(width);
		list.add("width", widthPtr.get());
		BasePointer heightPtr = new BasePointer(height);
		list.add("height", heightPtr.get());
		BasePointer textOffsetXPtr = new BasePointer(textOffsetX);
		list.add("textOffsetX", textOffsetXPtr.get());
		BasePointer textOffsetYPtr = new BasePointer(textOffsetY);
		list.add("textOffsetY", textOffsetYPtr.get());
		BasePointer charHeightPtr = new BasePointer(charHeight);
		list.add("charHeight", charHeightPtr.get());
		BasePointer spaceWidthPtr = new BasePointer(spaceWidth);
		list.add("spaceWidth", spaceWidthPtr.get());
		BasePointer colorPtr = new BasePointer(color);
		list.add("color", colorPtr.get());
		Create("JCTextBoxWidgetProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.TextBoxWidget".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setText_EVString(long pNativeObject, String text);
	/**
	 * 设置文本框要显示的文字
	 * @param text 显示的文字内容
	 */
	public void setText(String text)
	{
		String textParamValue = text;
		setText_EVString(this.nativeObject.pointer, textParamValue);
	}
	native private void setPanelMatrial_EVString_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, String matrialName, float u1, float v1, float u2, float v2);
	/**
	 * 设置背景的纹理坐标
	 * @param matrialName 材质名
	 * @param u1 左上角的u坐标
	 * @param v1 左上角的v坐标
	 * @param u2 右下角的u坐标
	 * @param v2 右下角的v坐标
	 */
	public void setPanelMatrial(String matrialName, float u1, float v1, float u2, float v2)
	{
		String matrialNameParamValue = matrialName;
		float u1ParamValue = u1;
		float v1ParamValue = v1;
		float u2ParamValue = u2;
		float v2ParamValue = v2;
		setPanelMatrial_EVString_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, matrialNameParamValue, u1ParamValue, v1ParamValue, u2ParamValue, v2ParamValue);
	}
	native private void setPanelMatrial_EVString_ev_real32_ev_real32_ev_real32_ev_real32_ev_bool(long pNativeObject, String matrialName, float u1, float v1, float u2, float v2, boolean transparent);
	/**
	 * 设置背景的纹理坐标
	 * @param matrialName 材质名
	 * @param u1 左上角的u坐标
	 * @param v1 左上角的v坐标
	 * @param u2 右下角的u坐标
	 * @param v2 右下角的v坐标
	 * @param transparent 是否透明
	 */
	public void setPanelMatrial(String matrialName, float u1, float v1, float u2, float v2, boolean transparent)
	{
		String matrialNameParamValue = matrialName;
		float u1ParamValue = u1;
		float v1ParamValue = v1;
		float u2ParamValue = u2;
		float v2ParamValue = v2;
		boolean transparentParamValue = transparent;
		setPanelMatrial_EVString_ev_real32_ev_real32_ev_real32_ev_real32_ev_bool(this.nativeObject.pointer, matrialNameParamValue, u1ParamValue, v1ParamValue, u2ParamValue, v2ParamValue, transparentParamValue);
	}
	native private boolean handleFrameEvent_CGUIEvent_CViewport(long pNativeObject, long event, long viewport);
	/**
	 * 处理帆事件
	 * @param event 事件对象
	 * @param viewport 视口
	 */
	public boolean handleFrameEvent(com.earthview.world.spatial.systemui.Guievent event, com.earthview.world.graphic.Viewport viewport)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean returnValue = handleFrameEvent_CGUIEvent_CViewport(this.nativeObject.pointer, eventParamValue, viewportParamValue);
		return returnValue;
	}
	native private boolean handleFrameEvent_CGUIEvent_CViewport_NoVirtual(long pNativeObject, long event, long viewport);
	protected boolean handleFrameEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent event, com.earthview.world.graphic.Viewport viewport)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean returnValue = handleFrameEvent_CGUIEvent_CViewport_NoVirtual(this.nativeObject.pointer, eventParamValue, viewportParamValue);
		return returnValue;
	}

	native private boolean handleUserEvent_CGUIEvent(long pNativeObject, long event);
	public boolean handleUserEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		boolean returnValue = handleUserEvent_CGUIEvent(this.nativeObject.pointer, eventParamValue);
		return returnValue;
	}
	native private boolean handleUserEvent_CGUIEvent_NoVirtual(long pNativeObject, long event);
	protected boolean handleUserEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent event)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		boolean returnValue = handleUserEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, eventParamValue);
		return returnValue;
	}

	/**
	 * 挎贝构造函数
	 */
	public TextBoxWidget(com.earthview.world.spatial3d.controls.TextBoxWidget rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("JCTextBoxWidgetProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.TextBoxWidget".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void OperatorAssign_CTextBoxWidget(long pNativeObject, long rhs);
	/**
	 * 赋值运算符
	 */
	public void OperatorAssign(com.earthview.world.spatial3d.controls.TextBoxWidget rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		OperatorAssign_CTextBoxWidget(this.nativeObject.pointer, rhsParamValue);
	}
	native private String get_mtext_void(long pNativeObject);
	public String get_mtext()
	{
		String jniValue = get_mtext_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mtext_EVString (long pNativeObject, String value);
	public void set_mtext(String mtext)
	{
		String mtextParamValue = mtext;
		
		set_mtext_EVString(this.nativeObject.pointer, mtextParamValue);
	}
	
	native private long get_mTextArea_void(long pNativeObject);
	public com.earthview.world.graphic.TextAreaOverlayElement get_mTextArea()
	{
		long jniValue = get_mTextArea_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TextAreaOverlayElement __returnValue = new com.earthview.world.graphic.TextAreaOverlayElement(CreatedWhenConstruct.CWC_NotToCreate, "CTextAreaOverlayElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TextAreaOverlayElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextAreaOverlayElement");
		}
		return __returnValue;
	}
	
	native private void set_mTextArea_CTextAreaOverlayElement (long pNativeObject, long value);
	public void set_mTextArea(com.earthview.world.graphic.TextAreaOverlayElement mTextArea)
	{
		long mTextAreaParamValue = (mTextArea == null ? 0L : mTextArea.nativeObject.pointer);
		
		set_mTextArea_CTextAreaOverlayElement(this.nativeObject.pointer, mTextAreaParamValue);
	}
	
	native private long get_mPanel_void(long pNativeObject);
	public com.earthview.world.graphic.PanelOverlayElement get_mPanel()
	{
		long jniValue = get_mPanel_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.PanelOverlayElement __returnValue = new com.earthview.world.graphic.PanelOverlayElement(CreatedWhenConstruct.CWC_NotToCreate, "CPanelOverlayElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.PanelOverlayElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPanelOverlayElement");
		}
		return __returnValue;
	}
	
	native private void set_mPanel_CPanelOverlayElement (long pNativeObject, long value);
	public void set_mPanel(com.earthview.world.graphic.PanelOverlayElement mPanel)
	{
		long mPanelParamValue = (mPanel == null ? 0L : mPanel.nativeObject.pointer);
		
		set_mPanel_CPanelOverlayElement(this.nativeObject.pointer, mPanelParamValue);
	}
	
	native private int get_mcharHeight_void(long pNativeObject);
	public int get_mcharHeight()
	{
		int jniValue = get_mcharHeight_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mcharHeight_int (long pNativeObject, int value);
	public void set_mcharHeight(int mcharHeight)
	{
		int mcharHeightParamValue = mcharHeight;
		
		set_mcharHeight_int(this.nativeObject.pointer, mcharHeightParamValue);
	}
	
	public TextBoxWidget(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TextBoxWidget(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void additionMouseUp()
	{
		super.additionMouseUp_NoVirtual();
	}
	/**
	 * 处理鼠标按键松开事件
	 * @param event 事件对象
	 */
	public boolean handleMouseUpEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		return super.handleMouseUpEvent_NoVirtual(event);
	}
	/**
	 * 处理鼠标按键移动事件
	 * @param event 事件对象
	 */
	public boolean handleMouseMoveEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		return super.handleMouseMoveEvent_NoVirtual(event);
	}
	/**
	 * 处理鼠标按键按下事件
	 * @param event 事件对象
	 */
	public boolean handleMouseDownEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		return super.handleMouseDownEvent_NoVirtual(event);
	}
	/**
	 * 处理鼠标按键双击按下事件
	 * @param event 事件对象
	 */
	public boolean handeMouseDbClickEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		return super.handeMouseDbClickEvent_NoVirtual(event);
	}
	/**
	 * 处理键盘按下事件
	 * @param event 事件对象
	 */
	public boolean handleKeyDownEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		return super.handleKeyDownEvent_NoVirtual(event);
	}
	/**
	 * 处理键盘松开事件
	 * @param event 事件对象
	 */
	public boolean handleKeyUpEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		return super.handleKeyUpEvent_NoVirtual(event);
	}
	
	native protected void register_additionMouseUp_void(long pNativeObject, String method);
	native protected void register_handleMouseUpEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleMouseMoveEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleMouseDownEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handeMouseDbClickEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleKeyDownEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleKeyUpEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleUserEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleFrameEvent_CGUIEvent_CViewport(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_additionMouseUp_void(this.nativeObject.pointer, "additionMouseUp_void_callback");
			this.register_handleMouseUpEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseUpEvent_CGUIEvent_callback");
			this.register_handleMouseMoveEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseMoveEvent_CGUIEvent_callback");
			this.register_handleMouseDownEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseDownEvent_CGUIEvent_callback");
			this.register_handeMouseDbClickEvent_CGUIEvent(this.nativeObject.pointer, "handeMouseDbClickEvent_CGUIEvent_callback");
			this.register_handleKeyDownEvent_CGUIEvent(this.nativeObject.pointer, "handleKeyDownEvent_CGUIEvent_callback");
			this.register_handleKeyUpEvent_CGUIEvent(this.nativeObject.pointer, "handleKeyUpEvent_CGUIEvent_callback");
			this.register_handleUserEvent_CGUIEvent(this.nativeObject.pointer, "handleUserEvent_CGUIEvent_callback");
			this.register_handleFrameEvent_CGUIEvent_CViewport(this.nativeObject.pointer, "handleFrameEvent_CGUIEvent_CViewport_callback");
		}
	}
	
	public static TextBoxWidget fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TextBoxWidget obj = null;
 		if(baseObj instanceof TextBoxWidget)
		{
			obj = (TextBoxWidget)baseObj;
		} else {
			obj = new TextBoxWidget(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTextBoxWidget");
			obj.increaseCast();
		}

		return obj;
	}
}
