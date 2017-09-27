package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Itoolbutton extends com.earthview.world.spatial.systemui.Icommand {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::IToolButton", new ItoolbuttonClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::JIToolButtonProxy", new ItoolbuttonClassFactory());
	}

	protected  void addCommand_ICommand_callback(long ref_cmd)
	{
		com.earthview.world.spatial.systemui.Icommand ref_cmdParamValue = (ref_cmd == 0L ? null : new com.earthview.world.spatial.systemui.Icommand(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_cmdParamValue != null)
		{
		ref_cmdParamValue.setDelegate(true);
		ref_cmdParamValue.setInstancePointer(new InstancePointer(ref_cmd));
		IClassFactory ref_cmdParamValueClassFactory = GlobalClassFactoryMap.get(ref_cmdParamValue.getCppInstanceTypeName());
		if (ref_cmdParamValueClassFactory != null)
		{
			ref_cmdParamValue.setDelegate(true);
			ref_cmdParamValue = (com.earthview.world.spatial.systemui.Icommand)ref_cmdParamValueClassFactory.create();
			ref_cmdParamValue.setDelegate(true);
			ref_cmdParamValue.setInstancePointer(new InstancePointer(ref_cmd));
		}
		}
		addCommand(ref_cmdParamValue);
	}

	native private void addCommand_ICommand(long pNativeObject, long ref_cmd);
	/**
	 * 添加命令项
	 * @param cmd 待添加的命令项
	 */
	public void addCommand(com.earthview.world.spatial.systemui.Icommand ref_cmd)
	{
		long ref_cmdParamValue = (ref_cmd == null ? 0L : ref_cmd.nativeObject.pointer);
		addCommand_ICommand(this.nativeObject.pointer, ref_cmdParamValue);
	}
	native private void addCommand_ICommand_NoVirtual(long pNativeObject, long ref_cmd);
	protected void addCommand_NoVirtual(com.earthview.world.spatial.systemui.Icommand ref_cmd)
	{
		long ref_cmdParamValue = (ref_cmd == null ? 0L : ref_cmd.nativeObject.pointer);
		addCommand_ICommand_NoVirtual(this.nativeObject.pointer, ref_cmdParamValue);
	}

	protected  long getCount_void_callback()
	{
		long returnValue = getCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getCount_void(long pNativeObject);
	/**
	 * 获取命令项的数量
	 * @param  
	 * @return 数量
	 */
	public long getCount()
	{
		long returnValue = getCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getCount_void_NoVirtual(long pNativeObject);
	protected long getCount_NoVirtual()
	{
		long returnValue = getCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getCommand_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.systemui.Icommand returnValue = getCommand(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCommand_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引处的命令项
	 * @param index 命令项索引
	 */
	public com.earthview.world.spatial.systemui.Icommand getCommand(long index)
	{
		long indexParamValue = index;
		long returnValue = getCommand_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Icommand __returnValue = new com.earthview.world.spatial.systemui.Icommand(CreatedWhenConstruct.CWC_NotToCreate, "ICommand");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Icommand)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ICommand");
		}
		return __returnValue;
	}
	native private long getCommand_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.systemui.Icommand getCommand_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getCommand_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Icommand __returnValue = new com.earthview.world.spatial.systemui.Icommand(CreatedWhenConstruct.CWC_NotToCreate, "ICommand");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Icommand)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ICommand");
		}
		return __returnValue;
	}

	public Itoolbutton() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JIToolButtonProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.systemui.Itoolbutton".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Itoolbutton(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Itoolbutton(CreatedWhenConstruct cwc, String classNameStr) {
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
	 * 获取命令项的类型
	 * @param  
	 * @return 类型
	 */
	public long getType()
	{
		return super.getType_NoVirtual();
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
	
	native protected void register_addCommand_ICommand(long pNativeObject, String method);
	native protected void register_getCount_void(long pNativeObject, String method);
	native protected void register_getCommand_ev_uint32(long pNativeObject, String method);
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
			this.register_addCommand_ICommand(this.nativeObject.pointer, "addCommand_ICommand_callback");
			this.register_getCount_void(this.nativeObject.pointer, "getCount_void_callback");
			this.register_getCommand_ev_uint32(this.nativeObject.pointer, "getCommand_ev_uint32_callback");
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
	
	public static Itoolbutton fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Itoolbutton obj = null;
 		if(baseObj instanceof Itoolbutton)
		{
			obj = (Itoolbutton)baseObj;
		} else {
			obj = new Itoolbutton(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IToolButton");
			obj.increaseCast();
		}

		return obj;
	}
}
