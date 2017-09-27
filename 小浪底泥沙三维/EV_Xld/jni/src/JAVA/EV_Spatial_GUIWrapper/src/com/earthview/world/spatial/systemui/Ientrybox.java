package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Ientrybox extends com.earthview.world.spatial.systemui.Icommand {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::IEntryBox", new IentryboxClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::JIEntryBoxProxy", new IentryboxClassFactory());
	}

	protected  long getWidth_void_callback()
	{
		long returnValue = getWidth();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getWidth_void(long pNativeObject);
	/**
	 * 获取组合框的宽度
	 * @param  
	 * @return 宽度值
	 */
	public long getWidth()
	{
		long returnValue = getWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getWidth_void_NoVirtual(long pNativeObject);
	protected long getWidth_NoVirtual()
	{
		long returnValue = getWidth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getEntryCount_void_callback()
	{
		long returnValue = getEntryCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getEntryCount_void(long pNativeObject);
	/**
	 * 获取组合项中条目的个数
	 * @param  
	 * @return 条目数量
	 */
	public long getEntryCount()
	{
		long returnValue = getEntryCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getEntryCount_void_NoVirtual(long pNativeObject);
	protected long getEntryCount_NoVirtual()
	{
		long returnValue = getEntryCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getEntry_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		String returnValue = getEntry(indexParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getEntry_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定的条目
	 * @param index 索引
	 */
	public String getEntry(long index)
	{
		long indexParamValue = index;
		String returnValue = getEntry_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String getEntry_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected String getEntry_NoVirtual(long index)
	{
		long indexParamValue = index;
		String returnValue = getEntry_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  int getCurrentIndex_void_callback()
	{
		int returnValue = getCurrentIndex();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getCurrentIndex_void(long pNativeObject);
	/**
	 * 获取当前的索引
	 * @param  
	 * @return 索引
	 */
	public int getCurrentIndex()
	{
		int returnValue = getCurrentIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getCurrentIndex_void_NoVirtual(long pNativeObject);
	protected int getCurrentIndex_NoVirtual()
	{
		int returnValue = getCurrentIndex_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void currentIndexChanged_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		currentIndexChanged(indexParamValue);
	}

	native private void currentIndexChanged_ev_uint32(long pNativeObject, long index);
	/**
	 * 当前的索引发生变化时,会调用该方法
	 * @param index 新的当前索引
	 */
	public void currentIndexChanged(long index)
	{
		long indexParamValue = index;
		currentIndexChanged_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private void currentIndexChanged_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected void currentIndexChanged_NoVirtual(long index)
	{
		long indexParamValue = index;
		currentIndexChanged_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
	}

	native private long getType_void(long pNativeObject);
	/**
	 * 类型
	 * @param  
	 * @return 类型
	 */
	public long getType()
	{
		long returnValue = getType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getType_void_NoVirtual(long pNativeObject);
	protected long getType_NoVirtual()
	{
		long returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public Ientrybox() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JIEntryBoxProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.systemui.Ientrybox".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Ientrybox(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ientrybox(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取命令项所属的工具栏类型
	 * @param  
	 * @return 工具栏类型
	 */
	public long getToolBarType()
	{
		return super.getToolBarType_NoVirtual();
	}
	/**
	 * 获取命令项的名称
	 * @param  
	 * @return 名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获取命令项所属类别
	 * @param  
	 * @return 类别
	 */
	public String getCategory()
	{
		return super.getCategory_NoVirtual();
	}
	/**
	 * 工具提示
	 * @param  
	 * @return 提示信息
	 */
	public String getToolTip()
	{
		return super.getToolTip_NoVirtual();
	}
	/**
	 * 命令项的显示图标
	 * @param  
	 * @return 图标
	 */
	public com.earthview.world.display.Ibitmap getIcon()
	{
		return super.getIcon_NoVirtual();
	}
	/**
	 * 判断命令项是否支持"按下"状态
	 * @param  
	 * @return 如果支持"按下"则返回true,反之则否
	 */
	public boolean isCheckable()
	{
		return super.isCheckable_NoVirtual();
	}
	/**
	 * 当命令项按钮被点击的时候,调用该方法
	 * @param  
	 */
	public void onClicked()
	{
		super.onClicked_NoVirtual();
	}
	/**
	 * 获取命令项是否被按下
	 * @param  
	 * @return 如果命令项被按下了则返回true,反之则否
	 */
	public boolean getChecked()
	{
		return super.getChecked_NoVirtual();
	}
	/**
	 * 设置命令项是否按下
	 * @param checked 如果为true,则命令项被按下,反之则否
	 */
	public void setChecked(boolean checked)
	{
		super.setChecked_NoVirtual(checked);
	}
	/**
	 * 获取命令项是否可用
	 * @param  
	 * @return 如果命令项可用则返回true,反之则否
	 */
	public boolean getEnabled()
	{
		return super.getEnabled_NoVirtual();
	}
	/**
	 * 设置命令项是否可用
	 * @param enabled 如果为true,则设置该命令项可用,反之则否
	 */
	public void setEnabled(boolean enabled)
	{
		super.setEnabled_NoVirtual(enabled);
	}
	/**
	 * 使命令项与指定的控件相关联
	 * @param ctrl 待关联的控件
	 */
	public void create(com.earthview.world.spatial.atlas.Ispatialcontrol ref_ctrl)
	{
		super.create_NoVirtual(ref_ctrl);
	}
	/**
	 * 当有事件被触发时,会调用该方法
	 * @param e 事件
	 * @return 如果状态发生变化则返回true,反之则否
	 */
	public boolean update(com.earthview.world.core.Event e)
	{
		return super.update_NoVirtual(e);
	}
	
	native protected void register_getWidth_void(long pNativeObject, String method);
	native protected void register_getEntryCount_void(long pNativeObject, String method);
	native protected void register_getEntry_ev_uint32(long pNativeObject, String method);
	native protected void register_getCurrentIndex_void(long pNativeObject, String method);
	native protected void register_currentIndexChanged_ev_uint32(long pNativeObject, String method);
	native protected void register_getToolBarType_void(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getCategory_void(long pNativeObject, String method);
	native protected void register_getToolTip_void(long pNativeObject, String method);
	native protected void register_getIcon_void(long pNativeObject, String method);
	native protected void register_isCheckable_void(long pNativeObject, String method);
	native protected void register_onClicked_void(long pNativeObject, String method);
	native protected void register_getChecked_void(long pNativeObject, String method);
	native protected void register_setChecked_ev_bool(long pNativeObject, String method);
	native protected void register_getEnabled_void(long pNativeObject, String method);
	native protected void register_setEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_create_ISpatialControl(long pNativeObject, String method);
	native protected void register_update_CEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getWidth_void(this.nativeObject.pointer, "getWidth_void_callback");
			this.register_getEntryCount_void(this.nativeObject.pointer, "getEntryCount_void_callback");
			this.register_getEntry_ev_uint32(this.nativeObject.pointer, "getEntry_ev_uint32_callback");
			this.register_getCurrentIndex_void(this.nativeObject.pointer, "getCurrentIndex_void_callback");
			this.register_currentIndexChanged_ev_uint32(this.nativeObject.pointer, "currentIndexChanged_ev_uint32_callback");
			this.register_getToolBarType_void(this.nativeObject.pointer, "getToolBarType_void_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getCategory_void(this.nativeObject.pointer, "getCategory_void_callback");
			this.register_getToolTip_void(this.nativeObject.pointer, "getToolTip_void_callback");
			this.register_getIcon_void(this.nativeObject.pointer, "getIcon_void_callback");
			this.register_isCheckable_void(this.nativeObject.pointer, "isCheckable_void_callback");
			this.register_onClicked_void(this.nativeObject.pointer, "onClicked_void_callback");
			this.register_getChecked_void(this.nativeObject.pointer, "getChecked_void_callback");
			this.register_setChecked_ev_bool(this.nativeObject.pointer, "setChecked_ev_bool_callback");
			this.register_getEnabled_void(this.nativeObject.pointer, "getEnabled_void_callback");
			this.register_setEnabled_ev_bool(this.nativeObject.pointer, "setEnabled_ev_bool_callback");
			this.register_create_ISpatialControl(this.nativeObject.pointer, "create_ISpatialControl_callback");
			this.register_update_CEvent(this.nativeObject.pointer, "update_CEvent_callback");
		}
	}
	
	public static Ientrybox fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ientrybox obj = null;
 		if(baseObj instanceof Ientrybox)
		{
			obj = (Ientrybox)baseObj;
		} else {
			obj = new Ientrybox(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IEntryBox");
			obj.increaseCast();
		}

		return obj;
	}
}
