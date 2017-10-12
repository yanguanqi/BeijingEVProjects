package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 基于instance的字体可渲染对象
 */
public class RenderableFontInstanced extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderableFontInstanced", new RenderableFontInstancedClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCRenderableFontInstancedProxy", new RenderableFontInstancedClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public RenderableFontInstanced(com.earthview.world.graphic.TextureMovableText parent, String wstr, com.earthview.world.graphic.TextureTextStyle ref_style, com.earthview.world.graphic.SceneManager ref_mgr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer parentPtr = new BasePointer(parent);
		list.add("parent", parentPtr.get());
		BasePointer wstrPtr = new BasePointer(wstr);
		list.add("wstr", wstrPtr.get());
		BasePointer ref_stylePtr = new BasePointer(ref_style);
		list.add("ref_style", ref_stylePtr.get());
		BasePointer ref_mgrPtr = new BasePointer(ref_mgr);
		list.add("ref_mgr", ref_mgrPtr.get());
		Create("JCRenderableFontInstancedProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.RenderableFontInstanced".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setAutoLineFeed_ev_uint32(long pNativeObject, long width);
	/**
	 * 设置文字自动换行宽度
	 * @param width 以像素为单位的宽度值
	 */
	public void setAutoLineFeed(long width)
	{
		long widthParamValue = width;
		setAutoLineFeed_ev_uint32(this.nativeObject.pointer, widthParamValue);
	}
	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置是否可见
	 * @param visible 是否可见
	 */
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private void setRenderQueueGroup_ev_uint8(long pNativeObject, short queueID);
	/**
	 * 设置渲染队列组信息
	 * @param queueID 队列ID号
	 */
	public void setRenderQueueGroup(short queueID)
	{
		short queueIDParamValue = queueID;
		setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, queueIDParamValue);
	}
	native private void setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(long pNativeObject, short queueID, int priority);
	/**
	 * 设置渲染队列组信息和队列优先级
	 * @param queueID 队列ID号
	 * @param priority 优先级
	 */
	public void setRenderQueueGroupAndPriority(short queueID, int priority)
	{
		short queueIDParamValue = queueID;
		int priorityParamValue = priority;
		setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(this.nativeObject.pointer, queueIDParamValue, priorityParamValue);
	}
	native private void bindWorldMaxtrix_CMatrix4(long pNativeObject, long mx4);
	/**
	 * 绑定世界变换矩阵
	 */
	public void bindWorldMaxtrix(com.earthview.world.spatial.math.Matrix4 mx4)
	{
		long mx4ParamValue = (mx4 == null ? 0L : mx4.nativeObject.pointer);
		bindWorldMaxtrix_CMatrix4(this.nativeObject.pointer, mx4ParamValue);
	}
	protected  void setDepthCheckEnabled_ev_bool_callback(boolean enable)
	{
		boolean enableParamValue = enable;
		setDepthCheckEnabled(enableParamValue);
	}

	native private void setDepthCheckEnabled_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置是否开启深度测度
	 * @param enable 
	 */
	public void setDepthCheckEnabled(boolean enable)
	{
		boolean enableParamValue = enable;
		setDepthCheckEnabled_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private void setDepthCheckEnabled_ev_bool_NoVirtual(long pNativeObject, boolean enable);
	protected void setDepthCheckEnabled_NoVirtual(boolean enable)
	{
		boolean enableParamValue = enable;
		setDepthCheckEnabled_ev_bool_NoVirtual(this.nativeObject.pointer, enableParamValue);
	}

	native private boolean getDepthCheckEnabled_void(long pNativeObject);
	/**
	 * 获取是否开启深度测度
	 */
	public boolean getDepthCheckEnabled()
	{
		boolean returnValue = getDepthCheckEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setText_EarthView_World_Core_CUnicodeString(long pNativeObject, String wstr);
	/**
	 * 设置渲染的文本字符串
	 */
	public void setText(String wstr)
	{
		String wstrParamValue = wstr;
		setText_EarthView_World_Core_CUnicodeString(this.nativeObject.pointer, wstrParamValue);
	}
	native private long getText_void(long pNativeObject);
	/**
	 * 获取渲染的文本字符串
	 */
	public WideStringPointer getText()
	{
		long returnValue = getText_void(this.nativeObject.pointer);
		WideStringPointer __returnValue = new WideStringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setTextStyle_CTextureTextStyle(long pNativeObject, long newStyle);
	/**
	 * 设置文本风格
	 * @param newStyle 新的文本风格
	 */
	public void setTextStyle(com.earthview.world.graphic.TextureTextStyle newStyle)
	{
		long newStyleParamValue = (newStyle == null ? 0L : newStyle.nativeObject.pointer);
		setTextStyle_CTextureTextStyle(this.nativeObject.pointer, newStyleParamValue);
	}
	native private void updateRenderStatus_ev_bool_ev_bool(long pNativeObject, boolean geometryOutOfDate, boolean colorOutOfDate);
	/**
	 * 更新渲染状态
	 */
	public void updateRenderStatus(boolean geometryOutOfDate, boolean colorOutOfDate)
	{
		boolean geometryOutOfDateParamValue = geometryOutOfDate;
		boolean colorOutOfDateParamValue = colorOutOfDate;
		updateRenderStatus_ev_bool_ev_bool(this.nativeObject.pointer, geometryOutOfDateParamValue, colorOutOfDateParamValue);
	}
	native private void refresh_void(long pNativeObject);
	/**
	 * 执行renderable自身的所有需要的更新
	 * @param  
	 */
	public void refresh()
	{
		refresh_void(this.nativeObject.pointer);
	}
	native private boolean forceRefresh_void(long pNativeObject);
	/**
	 * 强制执行执行renderable自身的所有需要的更新
	 * @param  
	 */
	public boolean forceRefresh()
	{
		boolean returnValue = forceRefresh_void(this.nativeObject.pointer);
		return returnValue;
	}
	public RenderableFontInstanced(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderableFontInstanced(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setDepthCheckEnabled_ev_bool(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setDepthCheckEnabled_ev_bool(this.nativeObject.pointer, "setDepthCheckEnabled_ev_bool_callback");
		}
	}
	
	public static RenderableFontInstanced fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderableFontInstanced obj = null;
 		if(baseObj instanceof RenderableFontInstanced)
		{
			obj = (RenderableFontInstanced)baseObj;
		} else {
			obj = new RenderableFontInstanced(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderableFontInstanced");
			obj.increaseCast();
		}

		return obj;
	}
}
