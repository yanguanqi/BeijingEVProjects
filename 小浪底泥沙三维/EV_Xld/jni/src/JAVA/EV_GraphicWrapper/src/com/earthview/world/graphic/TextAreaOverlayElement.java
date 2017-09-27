package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 该类执行的是包含简单无格式文本的表层元素
 */
public class TextAreaOverlayElement extends com.earthview.world.graphic.OverlayElement {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CTextAreaOverlayElement", new TextAreaOverlayElementClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCTextAreaOverlayElementProxy", new TextAreaOverlayElementClassFactory());
	}

	/**
	 * 构造函数
	 * @param name 
	 */
	public TextAreaOverlayElement(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCTextAreaOverlayElementProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.TextAreaOverlayElement".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void initialise_void(long pNativeObject);
	/**
	 * 初始化
	 * @param  
	 */
	public void initialise()
	{
		initialise_void(this.nativeObject.pointer);
	}
	native private void initialise_void_NoVirtual(long pNativeObject);
	protected void initialise_NoVirtual()
	{
		initialise_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void setCaption_EarthView_World_Core_DisplayString(long pNativeObject, String text);
	/**
	 * 设置元素的文本标题
	 * @param text 标题
	 */
	public void setCaption(String text)
	{
		String textParamValue = text;
		setCaption_EarthView_World_Core_DisplayString(this.nativeObject.pointer, textParamValue);
	}
	native private void setCaption_EarthView_World_Core_DisplayString_NoVirtual(long pNativeObject, String text);
	protected void setCaption_NoVirtual(String text)
	{
		String textParamValue = text;
		setCaption_EarthView_World_Core_DisplayString_NoVirtual(this.nativeObject.pointer, textParamValue);
	}

	native private void setCharHeight_Real(long pNativeObject, double height);
	/**
	 * 设置字符高度
	 * @param height 高度
	 */
	public void setCharHeight(double height)
	{
		double heightParamValue = height;
		setCharHeight_Real(this.nativeObject.pointer, heightParamValue);
	}
	native private double getCharHeight_void(long pNativeObject);
	/**
	 * 得到字符高度
	 * @param  
	 * @return 返回字符高度
	 */
	public double getCharHeight()
	{
		double returnValue = getCharHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSpaceWidth_Real(long pNativeObject, double width);
	/**
	 * 设置空格宽度
	 * @param width 空格宽度
	 */
	public void setSpaceWidth(double width)
	{
		double widthParamValue = width;
		setSpaceWidth_Real(this.nativeObject.pointer, widthParamValue);
	}
	native private double getSpaceWidth_void(long pNativeObject);
	/**
	 * 得到空格宽度
	 * @param  
	 * @return 返回空格宽度
	 */
	public double getSpaceWidth()
	{
		double returnValue = getSpaceWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFontStyle_FontStyle(long pNativeObject, long style);
	/**
	 * 设置字体风格
	 * @param style 风格
	 */
	public void setFontStyle(com.earthview.world.graphic.FontStyle style)
	{
		long styleParamValue = style.nativeObject.pointer;
		setFontStyle_FontStyle(this.nativeObject.pointer, styleParamValue);
	}
	native private void setFontResource_CFontPtr(long pNativeObject, long font);
	/**
	 * 使用指定的字体资源
	 */
	public void setFontResource(com.earthview.world.graphic.FontPtr font)
	{
		long fontParamValue = font.nativeObject.pointer;
		setFontResource_CFontPtr(this.nativeObject.pointer, fontParamValue);
	}
	native private long getFontResource_void(long pNativeObject);
	/**
	 * 获取当前使用中的字体资源
	 */
	public com.earthview.world.graphic.FontPtr getFontResource()
	{
		long returnValue = getFontResource_void(this.nativeObject.pointer);
		com.earthview.world.graphic.FontPtr __returnValue = new com.earthview.world.graphic.FontPtr(CreatedWhenConstruct.CWC_NotToCreate, "CFontPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.FontPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFontPtr");
		}
		return __returnValue;
	}
	native private long getFontStyle_void(long pNativeObject);
	/**
	 * 获取字体风格
	 * @return 字体风格
	 */
	public com.earthview.world.graphic.FontStyle getFontStyle()
	{
		long returnValue = getFontStyle_void(this.nativeObject.pointer);
		com.earthview.world.graphic.FontStyle __returnValue = new com.earthview.world.graphic.FontStyle(CreatedWhenConstruct.CWC_NotToCreate, "FontStyle");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.FontStyle)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FontStyle");
		}
		return __returnValue;
	}
	native private String getTypeName_void(long pNativeObject);
	/**
	 * 得到元素的类型名称
	 * @param  
	 * @return 返回元素的类型名称
	 */
	public String getTypeName()
	{
		String returnValue = getTypeName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getTypeName_void_NoVirtual(long pNativeObject);
	protected String getTypeName_NoVirtual()
	{
		String returnValue = getTypeName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getMaterial_void(long pNativeObject);
	/**
	 * 重新获得渲染实体使用的材质的弱相关性
	 * @param  
	 */
	public com.earthview.world.graphic.MaterialPtr getMaterial()
	{
		long returnValue = getMaterial_void(this.nativeObject.pointer);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}
	native private long getMaterial_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.MaterialPtr getMaterial_NoVirtual()
	{
		long returnValue = getMaterial_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}

	native private void getRenderOperation_CRenderOperation(long pNativeObject, long op);
	/**
	 * 获得要求对象到帧缓冲的渲染操作
	 * @param op 
	 */
	public void getRenderOperation(com.earthview.world.graphic.RenderOperation op)
	{
		long opParamValue = op.nativeObject.pointer;
		getRenderOperation_CRenderOperation(this.nativeObject.pointer, opParamValue);
	}
	native private void getRenderOperation_CRenderOperation_NoVirtual(long pNativeObject, long op);
	protected void getRenderOperation_NoVirtual(com.earthview.world.graphic.RenderOperation op)
	{
		long opParamValue = op.nativeObject.pointer;
		getRenderOperation_CRenderOperation_NoVirtual(this.nativeObject.pointer, opParamValue);
	}

	native private void setMaterialName_EVString(long pNativeObject, String matName);
	/**
	 * 设置用于此元素的材质名
	 * @param matName 材质名称
	 */
	public void setMaterialName(String matName)
	{
		String matNameParamValue = matName;
		setMaterialName_EVString(this.nativeObject.pointer, matNameParamValue);
	}
	native private void setMaterialName_EVString_NoVirtual(long pNativeObject, String matName);
	protected void setMaterialName_NoVirtual(String matName)
	{
		String matNameParamValue = matName;
		setMaterialName_EVString_NoVirtual(this.nativeObject.pointer, matNameParamValue);
	}

	native private void setColour_CColourValue(long pNativeObject, long col);
	/**
	 * 设置文本的颜色
	 * @param col 颜色值
	 */
	public void setColour(com.earthview.world.graphic.ColourValue col)
	{
		long colParamValue = col.nativeObject.pointer;
		setColour_CColourValue(this.nativeObject.pointer, colParamValue);
	}
	native private void setColour_CColourValue_NoVirtual(long pNativeObject, long col);
	protected void setColour_NoVirtual(com.earthview.world.graphic.ColourValue col)
	{
		long colParamValue = col.nativeObject.pointer;
		setColour_CColourValue_NoVirtual(this.nativeObject.pointer, colParamValue);
	}

	native private long getColour_void(long pNativeObject);
	/**
	 * 获得文本的颜色
	 * @param  
	 * @return 返回颜色值
	 */
	public com.earthview.world.graphic.ColourValue getColour()
	{
		long returnValue = getColour_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private long getColour_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ColourValue getColour_NoVirtual()
	{
		long returnValue = getColour_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}

	native private void setColourBottom_CColourValue(long pNativeObject, long col);
	/**
	 * 设置文字底部的颜色
	 * @param col 颜色值
	 */
	public void setColourBottom(com.earthview.world.graphic.ColourValue col)
	{
		long colParamValue = col.nativeObject.pointer;
		setColourBottom_CColourValue(this.nativeObject.pointer, colParamValue);
	}
	native private long getColourBottom_void(long pNativeObject);
	/**
	 * 得到文字底部的颜色
	 * @param  
	 * @return 返回文字底部的颜色
	 */
	public com.earthview.world.graphic.ColourValue getColourBottom()
	{
		long returnValue = getColourBottom_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setColourTop_CColourValue(long pNativeObject, long col);
	/**
	 * 设置文字顶部的颜色
	 * @param col 颜色值
	 */
	public void setColourTop(com.earthview.world.graphic.ColourValue col)
	{
		long colParamValue = col.nativeObject.pointer;
		setColourTop_CColourValue(this.nativeObject.pointer, colParamValue);
	}
	native private long getColourTop_void(long pNativeObject);
	/**
	 * 得到文字顶部的颜色
	 * @param col 颜色值
	 * @return 返回文字顶部的颜色
	 */
	public com.earthview.world.graphic.ColourValue getColourTop()
	{
		long returnValue = getColourTop_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setMetricsMode_GuiMetricsMode(long pNativeObject, int gmm);
	/**
	 * 设置元素的位置和尺寸大小
	 * @param gmm 枚举，表示不同的位置和大小
	 */
	public void setMetricsMode(com.earthview.world.graphic.GuiMetricsMode gmm)
	{
		int gmmParamValue = gmm.getValue();
		setMetricsMode_GuiMetricsMode(this.nativeObject.pointer, gmmParamValue);
	}
	native private void setMetricsMode_GuiMetricsMode_NoVirtual(long pNativeObject, int gmm);
	protected void setMetricsMode_NoVirtual(com.earthview.world.graphic.GuiMetricsMode gmm)
	{
		int gmmParamValue = gmm.getValue();
		setMetricsMode_GuiMetricsMode_NoVirtual(this.nativeObject.pointer, gmmParamValue);
	}

	native private void _update_void(long pNativeObject);
	/**
	 * 根据所提供的变换来对这些元素进行更新
	 * @param  
	 */
	public void _update()
	{
		_update_void(this.nativeObject.pointer);
	}
	native private void _update_void_NoVirtual(long pNativeObject);
	protected void _update_NoVirtual()
	{
		_update_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void show_void(long pNativeObject);
	public void show()
	{
		show_void(this.nativeObject.pointer);
	}
	native private void show_void_NoVirtual(long pNativeObject);
	protected void show_NoVirtual()
	{
		show_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void hide_void(long pNativeObject);
	public void hide()
	{
		hide_void(this.nativeObject.pointer);
	}
	native private void hide_void_NoVirtual(long pNativeObject);
	protected void hide_NoVirtual()
	{
		hide_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void addBaseParameters_void(long pNativeObject);
	//// Method for setting up base parameters for this class
	public void addBaseParameters()
	{
		addBaseParameters_void(this.nativeObject.pointer);
	}
	native private void addBaseParameters_void_NoVirtual(long pNativeObject);
	protected void addBaseParameters_NoVirtual()
	{
		addBaseParameters_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void updatePositionGeometry_void(long pNativeObject);
	///继承方法
	public void updatePositionGeometry()
	{
		updatePositionGeometry_void(this.nativeObject.pointer);
	}
	native private void updatePositionGeometry_void_NoVirtual(long pNativeObject);
	protected void updatePositionGeometry_NoVirtual()
	{
		updatePositionGeometry_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void updateTextureGeometry_void(long pNativeObject);
	///继承方法
	public void updateTextureGeometry()
	{
		updateTextureGeometry_void(this.nativeObject.pointer);
	}
	native private void updateTextureGeometry_void_NoVirtual(long pNativeObject);
	protected void updateTextureGeometry_NoVirtual()
	{
		updateTextureGeometry_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void updateColours_void_callback()
	{
		updateColours();
	}

	native private void updateColours_void(long pNativeObject);
	/**
	 * 更新顶点颜色
	 */
	public void updateColours()
	{
		updateColours_void(this.nativeObject.pointer);
	}
	native private void updateColours_void_NoVirtual(long pNativeObject);
	protected void updateColours_NoVirtual()
	{
		updateColours_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void _updateRenderQueue_CRenderQueue(long pNativeObject, long queue);
	public void _updateRenderQueue(com.earthview.world.graphic.RenderQueue queue)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		_updateRenderQueue_CRenderQueue(this.nativeObject.pointer, queueParamValue);
	}
	native private void _updateRenderQueue_CRenderQueue_NoVirtual(long pNativeObject, long queue);
	protected void _updateRenderQueue_NoVirtual(com.earthview.world.graphic.RenderQueue queue)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		_updateRenderQueue_CRenderQueue_NoVirtual(this.nativeObject.pointer, queueParamValue);
	}

	native private void visitRenderables_CVisitor_ev_bool(long pNativeObject, long visitor, boolean debugRenderables);
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		boolean debugRenderablesParamValue = debugRenderables;
		visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
	}
	native private void visitRenderables_CVisitor_ev_bool_NoVirtual(long pNativeObject, long visitor, boolean debugRenderables);
	protected void visitRenderables_NoVirtual(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		boolean debugRenderablesParamValue = debugRenderables;
		visitRenderables_CVisitor_ev_bool_NoVirtual(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
	}

	public TextAreaOverlayElement(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TextAreaOverlayElement(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void setEnabled(boolean b)
	{
		super.setEnabled_NoVirtual(b);
	}
	public String getMaterialName()
	{
		return super.getMaterialName_NoVirtual();
	}
	public void _positionsOutOfDate()
	{
		super._positionsOutOfDate_NoVirtual();
	}
	public void _updateFromParent()
	{
		super._updateFromParent_NoVirtual();
	}
	public void _notifyParent(com.earthview.world.graphic.OverlayContainer ref_parent, com.earthview.world.graphic.Overlay ref_overlay)
	{
		super._notifyParent_NoVirtual(ref_parent, ref_overlay);
	}
	public double _getDerivedLeft()
	{
		return super._getDerivedLeft_NoVirtual();
	}
	public double _getDerivedTop()
	{
		return super._getDerivedTop_NoVirtual();
	}
	public double _getRelativeWidth()
	{
		return super._getRelativeWidth_NoVirtual();
	}
	public double _getRelativeHeight()
	{
		return super._getRelativeHeight_NoVirtual();
	}
	public void _getClippingRegion(com.earthview.world.graphic.Rectangle clippingRegion)
	{
		super._getClippingRegion_NoVirtual(clippingRegion);
	}
	public int _notifyZOrder(int newZOrder)
	{
		return super._notifyZOrder_NoVirtual(newZOrder);
	}
	public void _notifyWorldTransforms(com.earthview.world.spatial.math.Matrix4 xform)
	{
		super._notifyWorldTransforms_NoVirtual(xform);
	}
	public void _notifyViewport()
	{
		super._notifyViewport_NoVirtual();
	}
	public String getCaption()
	{
		return super.getCaption_NoVirtual();
	}
	public com.earthview.world.graphic.GuiMetricsMode getMetricsMode()
	{
		return super.getMetricsMode_NoVirtual();
	}
	public void setHorizontalAlignment(com.earthview.world.graphic.GuiHorizontalAlignment gha)
	{
		super.setHorizontalAlignment_NoVirtual(gha);
	}
	public com.earthview.world.graphic.GuiHorizontalAlignment getHorizontalAlignment()
	{
		return super.getHorizontalAlignment_NoVirtual();
	}
	public void setVerticalAlignment(com.earthview.world.graphic.GuiVerticalAlignment gva)
	{
		super.setVerticalAlignment_NoVirtual(gva);
	}
	public com.earthview.world.graphic.GuiVerticalAlignment getVerticalAlignment()
	{
		return super.getVerticalAlignment_NoVirtual();
	}
	public boolean contains(double x, double y)
	{
		return super.contains_NoVirtual(x, y);
	}
	public com.earthview.world.graphic.OverlayElement findElementAt(double x, double y)
	{
		return super.findElementAt_NoVirtual(x, y);
	}
	/// relative to parent
	public boolean isContainer()
	{
		return super.isContainer_NoVirtual();
	}
	public boolean isKeyEnabled()
	{
		return super.isKeyEnabled_NoVirtual();
	}
	public boolean isCloneable()
	{
		return super.isCloneable_NoVirtual();
	}
	public void setCloneable(boolean c)
	{
		super.setCloneable_NoVirtual(c);
	}
	public void copyFromTemplate(com.earthview.world.graphic.OverlayElement ref_templateOverlay)
	{
		super.copyFromTemplate_NoVirtual(ref_templateOverlay);
	}
	public com.earthview.world.graphic.OverlayElement ev_clone(String instanceName)
	{
		return super.ev_clone_NoVirtual(instanceName);
	}
	/**
	 * 获得技术
	 * @param  
	 */
	public com.earthview.world.graphic.Technique getTechnique()
	{
		return super.getTechnique_NoVirtual();
	}
	/**
	 * 渲染开始时向外通知的事件
	 * @param sm 渲染场景
	 * @param rsys 渲染系统
	 * @return 如果自动执行渲染过程返回true,手动执行返回false
	 */
	public boolean preRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
	{
		return super.preRender_NoVirtual(sm, rsys);
	}
	/**
	 * 渲染完成时向外通知的事件
	 * @param sm 渲染场景
	 * @param rsys 渲染系统
	 */
	public void postRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
	{
		super.postRender_NoVirtual(sm, rsys);
	}
	/**
	 * 获得渲染对象的世界变换矩阵
	 * @param xform 
	 */
	public void getWorldTransforms(com.earthview.world.spatial.math.Matrix4 xform)
	{
		super.getWorldTransforms_NoVirtual(xform);
	}
	/**
	 * 获得渲染对象的世界变换矩阵的数量
	 * @param  
	 */
	public int getNumWorldTransforms()
	{
		return super.getNumWorldTransforms_NoVirtual();
	}
	/// <summary>
	/// 返回渲染实体相对虚拟相机的观察深度的平方
	/// </summary>
	/// <param name="cam"></param>
	/// <returns</returns>
	public double getSquaredViewDepth(com.earthview.world.graphic.Camera cam)
	{
		return super.getSquaredViewDepth_NoVirtual(cam);
	}
	/**
	 * 获得光照的列表，按照相对于渲染实体的远近排列
	 * @param  
	 */
	public com.earthview.world.graphic.LightList getLights()
	{
		return super.getLights_NoVirtual();
	}
	/**
	 * 是否投射投影
	 * @param  
	 */
	public boolean getCastsShadows()
	{
		return super.getCastsShadows_NoVirtual();
	}
	/**
	 * 更新自定义的EarthView::World::Graphic::CGpuProgramParameters常量，该值只有从渲染系统中获得
	 * @param constantEntry CAutoConstantEntry的别名
	 * @param params EarthView::World::Graphic::CGpuProgramParameters的指针
	 */
	public void _updateCustomGpuParameter(com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry constantEntry, com.earthview.world.graphic.GpuProgramParameters params)
	{
		super._updateCustomGpuParameter_NoVirtual(constantEntry, params);
	}
	/**
	 * 设置多边形渲染方式是否可重写
	 * @param override 设置参数
	 * @return true可以超越，false不可以
	 */
	public void setPolygonModeOverrideable(boolean override)
	{
		super.setPolygonModeOverrideable_NoVirtual(override);
	}
	/**
	 * 获得多边形渲染方式是否可重写
	 * @param  
	 */
	public boolean getPolygonModeOverrideable()
	{
		return super.getPolygonModeOverrideable_NoVirtual();
	}
	/**
	 * 设置自定义环境光系数
	 * @param  
	 */
	public void setCustomAmbient(com.earthview.world.graphic.ColourValue ambient)
	{
		super.setCustomAmbient_NoVirtual(ambient);
	}
	/**
	 * 获取自定义环境光系数
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getCustomAmbient()
	{
		return super.getCustomAmbient_NoVirtual();
	}
	/**
	 * 获取自定义环境光系数是否启用
	 * @param  
	 */
	public boolean getCustomAmbientEnabled()
	{
		return super.getCustomAmbientEnabled_NoVirtual();
	}
	/**
	 * 设置自定义环境光系数是否启用
	 * @param  
	 */
	public void setCustomAmbientEnabled(boolean enabled)
	{
		super.setCustomAmbientEnabled_NoVirtual(enabled);
	}
	public com.earthview.world.graphic.MovableObject getMovableObject()
	{
		return super.getMovableObject_NoVirtual();
	}
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public void addListener(com.earthview.world.graphic.Renderable.RenderableListener ref_listener)
	{
		super.addListener_NoVirtual(ref_listener);
	}
	/**
	 * 移除监听器
	 * @param listener 
	 */
	public void removeListener(com.earthview.world.graphic.Renderable.RenderableListener listener)
	{
		super.removeListener_NoVirtual(listener);
	}
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public boolean existListener(com.earthview.world.graphic.Renderable.RenderableListener listener)
	{
		return super.existListener_NoVirtual(listener);
	}
	/**
	 * 获取监听器
	 * @param  
	 */
	public long getListenerCount()
	{
		return super.getListenerCount_NoVirtual();
	}
	/**
	 * 获取监听器
	 * @param  
	 */
	public com.earthview.world.graphic.Renderable.RenderableListener getListener(long index)
	{
		return super.getListener_NoVirtual(index);
	}
	/**
	 * 设置渲染系统的私有数据
	 * @param  
	 */
	public com.earthview.world.graphic.Renderable.RenderSystemData getRenderSystemData()
	{
		return super.getRenderSystemData_NoVirtual();
	}
	/**
	 * 获得渲染系统的私有数据
	 * @param  
	 */
	public void setRenderSystemData(com.earthview.world.graphic.Renderable.RenderSystemData ref_val)
	{
		super.setRenderSystemData_NoVirtual(ref_val);
	}
	
	native protected void register_updateColours_void(long pNativeObject, String method);
	native protected void register_updatePositionGeometry_void(long pNativeObject, String method);
	native protected void register_updateTextureGeometry_void(long pNativeObject, String method);
	native protected void register_addBaseParameters_void(long pNativeObject, String method);
	native protected void register_initialise_void(long pNativeObject, String method);
	native protected void register_show_void(long pNativeObject, String method);
	native protected void register_hide_void(long pNativeObject, String method);
	native protected void register_setEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_getMaterialName_void(long pNativeObject, String method);
	native protected void register_setMaterialName_EVString(long pNativeObject, String method);
	native protected void register__positionsOutOfDate_void(long pNativeObject, String method);
	native protected void register__update_void(long pNativeObject, String method);
	native protected void register__updateFromParent_void(long pNativeObject, String method);
	native protected void register__notifyParent_COverlayContainer_COverlay(long pNativeObject, String method);
	native protected void register__getDerivedLeft_void(long pNativeObject, String method);
	native protected void register__getDerivedTop_void(long pNativeObject, String method);
	native protected void register__getRelativeWidth_void(long pNativeObject, String method);
	native protected void register__getRelativeHeight_void(long pNativeObject, String method);
	native protected void register__getClippingRegion_Rectangle(long pNativeObject, String method);
	native protected void register__notifyZOrder_ev_uint16(long pNativeObject, String method);
	native protected void register__notifyWorldTransforms_CMatrix4(long pNativeObject, String method);
	native protected void register__notifyViewport_void(long pNativeObject, String method);
	native protected void register__updateRenderQueue_CRenderQueue(long pNativeObject, String method);
	native protected void register_visitRenderables_CVisitor_ev_bool(long pNativeObject, String method);
	native protected void register_getTypeName_void(long pNativeObject, String method);
	native protected void register_setCaption_EarthView_World_Core_DisplayString(long pNativeObject, String method);
	native protected void register_getCaption_void(long pNativeObject, String method);
	native protected void register_setColour_CColourValue(long pNativeObject, String method);
	native protected void register_getColour_void(long pNativeObject, String method);
	native protected void register_setMetricsMode_GuiMetricsMode(long pNativeObject, String method);
	native protected void register_getMetricsMode_void(long pNativeObject, String method);
	native protected void register_setHorizontalAlignment_GuiHorizontalAlignment(long pNativeObject, String method);
	native protected void register_getHorizontalAlignment_void(long pNativeObject, String method);
	native protected void register_setVerticalAlignment_GuiVerticalAlignment(long pNativeObject, String method);
	native protected void register_getVerticalAlignment_void(long pNativeObject, String method);
	native protected void register_contains_Real_Real(long pNativeObject, String method);
	native protected void register_findElementAt_Real_Real(long pNativeObject, String method);
	native protected void register_isContainer_void(long pNativeObject, String method);
	native protected void register_isKeyEnabled_void(long pNativeObject, String method);
	native protected void register_isCloneable_void(long pNativeObject, String method);
	native protected void register_setCloneable_ev_bool(long pNativeObject, String method);
	native protected void register_copyFromTemplate_COverlayElement(long pNativeObject, String method);
	native protected void register_ev_clone_EVString(long pNativeObject, String method);
	native protected void register_getMaterial_void(long pNativeObject, String method);
	native protected void register_getTechnique_void(long pNativeObject, String method);
	native protected void register_getRenderOperation_CRenderOperation(long pNativeObject, String method);
	native protected void register_preRender_CSceneManager_CRenderSystem(long pNativeObject, String method);
	native protected void register_postRender_CSceneManager_CRenderSystem(long pNativeObject, String method);
	native protected void register_getWorldTransforms_CMatrix4(long pNativeObject, String method);
	native protected void register_getNumWorldTransforms_void(long pNativeObject, String method);
	native protected void register_getSquaredViewDepth_CCamera(long pNativeObject, String method);
	native protected void register_getLights_void(long pNativeObject, String method);
	native protected void register_getCastsShadows_void(long pNativeObject, String method);
	native protected void register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(long pNativeObject, String method);
	native protected void register_setPolygonModeOverrideable_ev_bool(long pNativeObject, String method);
	native protected void register_getPolygonModeOverrideable_void(long pNativeObject, String method);
	native protected void register_setCustomAmbient_CColourValue(long pNativeObject, String method);
	native protected void register_getCustomAmbient_void(long pNativeObject, String method);
	native protected void register_getCustomAmbientEnabled_void(long pNativeObject, String method);
	native protected void register_setCustomAmbientEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_getMovableObject_void(long pNativeObject, String method);
	native protected void register_addListener_CRenderableListener(long pNativeObject, String method);
	native protected void register_removeListener_CRenderableListener(long pNativeObject, String method);
	native protected void register_existListener_CRenderableListener(long pNativeObject, String method);
	native protected void register_getListenerCount_void(long pNativeObject, String method);
	native protected void register_getListener_ev_uint32(long pNativeObject, String method);
	native protected void register_getRenderSystemData_void(long pNativeObject, String method);
	native protected void register_setRenderSystemData_CRenderSystemData(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_updateColours_void(this.nativeObject.pointer, "updateColours_void_callback");
			this.register_updatePositionGeometry_void(this.nativeObject.pointer, "updatePositionGeometry_void_callback");
			this.register_updateTextureGeometry_void(this.nativeObject.pointer, "updateTextureGeometry_void_callback");
			this.register_addBaseParameters_void(this.nativeObject.pointer, "addBaseParameters_void_callback");
			this.register_initialise_void(this.nativeObject.pointer, "initialise_void_callback");
			this.register_show_void(this.nativeObject.pointer, "show_void_callback");
			this.register_hide_void(this.nativeObject.pointer, "hide_void_callback");
			this.register_setEnabled_ev_bool(this.nativeObject.pointer, "setEnabled_ev_bool_callback");
			this.register_getMaterialName_void(this.nativeObject.pointer, "getMaterialName_void_callback");
			this.register_setMaterialName_EVString(this.nativeObject.pointer, "setMaterialName_EVString_callback");
			this.register__positionsOutOfDate_void(this.nativeObject.pointer, "_positionsOutOfDate_void_callback");
			this.register__update_void(this.nativeObject.pointer, "_update_void_callback");
			this.register__updateFromParent_void(this.nativeObject.pointer, "_updateFromParent_void_callback");
			this.register__notifyParent_COverlayContainer_COverlay(this.nativeObject.pointer, "_notifyParent_COverlayContainer_COverlay_callback");
			this.register__getDerivedLeft_void(this.nativeObject.pointer, "_getDerivedLeft_void_callback");
			this.register__getDerivedTop_void(this.nativeObject.pointer, "_getDerivedTop_void_callback");
			this.register__getRelativeWidth_void(this.nativeObject.pointer, "_getRelativeWidth_void_callback");
			this.register__getRelativeHeight_void(this.nativeObject.pointer, "_getRelativeHeight_void_callback");
			this.register__getClippingRegion_Rectangle(this.nativeObject.pointer, "_getClippingRegion_Rectangle_callback");
			this.register__notifyZOrder_ev_uint16(this.nativeObject.pointer, "_notifyZOrder_ev_uint16_callback");
			this.register__notifyWorldTransforms_CMatrix4(this.nativeObject.pointer, "_notifyWorldTransforms_CMatrix4_callback");
			this.register__notifyViewport_void(this.nativeObject.pointer, "_notifyViewport_void_callback");
			this.register__updateRenderQueue_CRenderQueue(this.nativeObject.pointer, "_updateRenderQueue_CRenderQueue_callback");
			this.register_visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, "visitRenderables_CVisitor_ev_bool_callback");
			this.register_getTypeName_void(this.nativeObject.pointer, "getTypeName_void_callback");
			this.register_setCaption_EarthView_World_Core_DisplayString(this.nativeObject.pointer, "setCaption_EarthView_World_Core_DisplayString_callback");
			this.register_getCaption_void(this.nativeObject.pointer, "getCaption_void_callback");
			this.register_setColour_CColourValue(this.nativeObject.pointer, "setColour_CColourValue_callback");
			this.register_getColour_void(this.nativeObject.pointer, "getColour_void_callback");
			this.register_setMetricsMode_GuiMetricsMode(this.nativeObject.pointer, "setMetricsMode_GuiMetricsMode_callback");
			this.register_getMetricsMode_void(this.nativeObject.pointer, "getMetricsMode_void_callback");
			this.register_setHorizontalAlignment_GuiHorizontalAlignment(this.nativeObject.pointer, "setHorizontalAlignment_GuiHorizontalAlignment_callback");
			this.register_getHorizontalAlignment_void(this.nativeObject.pointer, "getHorizontalAlignment_void_callback");
			this.register_setVerticalAlignment_GuiVerticalAlignment(this.nativeObject.pointer, "setVerticalAlignment_GuiVerticalAlignment_callback");
			this.register_getVerticalAlignment_void(this.nativeObject.pointer, "getVerticalAlignment_void_callback");
			this.register_contains_Real_Real(this.nativeObject.pointer, "contains_Real_Real_callback");
			this.register_findElementAt_Real_Real(this.nativeObject.pointer, "findElementAt_Real_Real_callback");
			this.register_isContainer_void(this.nativeObject.pointer, "isContainer_void_callback");
			this.register_isKeyEnabled_void(this.nativeObject.pointer, "isKeyEnabled_void_callback");
			this.register_isCloneable_void(this.nativeObject.pointer, "isCloneable_void_callback");
			this.register_setCloneable_ev_bool(this.nativeObject.pointer, "setCloneable_ev_bool_callback");
			this.register_copyFromTemplate_COverlayElement(this.nativeObject.pointer, "copyFromTemplate_COverlayElement_callback");
			this.register_ev_clone_EVString(this.nativeObject.pointer, "ev_clone_EVString_callback");
			this.register_getMaterial_void(this.nativeObject.pointer, "getMaterial_void_callback");
			this.register_getTechnique_void(this.nativeObject.pointer, "getTechnique_void_callback");
			this.register_getRenderOperation_CRenderOperation(this.nativeObject.pointer, "getRenderOperation_CRenderOperation_callback");
			this.register_preRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, "preRender_CSceneManager_CRenderSystem_callback");
			this.register_postRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, "postRender_CSceneManager_CRenderSystem_callback");
			this.register_getWorldTransforms_CMatrix4(this.nativeObject.pointer, "getWorldTransforms_CMatrix4_callback");
			this.register_getNumWorldTransforms_void(this.nativeObject.pointer, "getNumWorldTransforms_void_callback");
			this.register_getSquaredViewDepth_CCamera(this.nativeObject.pointer, "getSquaredViewDepth_CCamera_callback");
			this.register_getLights_void(this.nativeObject.pointer, "getLights_void_callback");
			this.register_getCastsShadows_void(this.nativeObject.pointer, "getCastsShadows_void_callback");
			this.register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(this.nativeObject.pointer, "_updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback");
			this.register_setPolygonModeOverrideable_ev_bool(this.nativeObject.pointer, "setPolygonModeOverrideable_ev_bool_callback");
			this.register_getPolygonModeOverrideable_void(this.nativeObject.pointer, "getPolygonModeOverrideable_void_callback");
			this.register_setCustomAmbient_CColourValue(this.nativeObject.pointer, "setCustomAmbient_CColourValue_callback");
			this.register_getCustomAmbient_void(this.nativeObject.pointer, "getCustomAmbient_void_callback");
			this.register_getCustomAmbientEnabled_void(this.nativeObject.pointer, "getCustomAmbientEnabled_void_callback");
			this.register_setCustomAmbientEnabled_ev_bool(this.nativeObject.pointer, "setCustomAmbientEnabled_ev_bool_callback");
			this.register_getMovableObject_void(this.nativeObject.pointer, "getMovableObject_void_callback");
			this.register_addListener_CRenderableListener(this.nativeObject.pointer, "addListener_CRenderableListener_callback");
			this.register_removeListener_CRenderableListener(this.nativeObject.pointer, "removeListener_CRenderableListener_callback");
			this.register_existListener_CRenderableListener(this.nativeObject.pointer, "existListener_CRenderableListener_callback");
			this.register_getListenerCount_void(this.nativeObject.pointer, "getListenerCount_void_callback");
			this.register_getListener_ev_uint32(this.nativeObject.pointer, "getListener_ev_uint32_callback");
			this.register_getRenderSystemData_void(this.nativeObject.pointer, "getRenderSystemData_void_callback");
			this.register_setRenderSystemData_CRenderSystemData(this.nativeObject.pointer, "setRenderSystemData_CRenderSystemData_callback");
		}
	}
	
	public static TextAreaOverlayElement fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TextAreaOverlayElement obj = null;
 		if(baseObj instanceof TextAreaOverlayElement)
		{
			obj = (TextAreaOverlayElement)baseObj;
		} else {
			obj = new TextAreaOverlayElement(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTextAreaOverlayElement");
			obj.increaseCast();
		}

		return obj;
	}
}
