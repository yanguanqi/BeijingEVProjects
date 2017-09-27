package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Iitem extends com.earthview.world.core.EventObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::IItem", new IitemClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::JIItemProxy", new IitemClassFactory());
	}

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 显示项的名称
	 * @param  
	 * @return 名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setName_EVString_callback(String name)
	{
		String nameParamValue = name;
		setName(nameParamValue);
	}

	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置显示项的名称
	 * @param name 名称
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setName_EVString_NoVirtual(long pNativeObject, String name);
	protected void setName_NoVirtual(String name)
	{
		String nameParamValue = name;
		setName_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	protected  String getCategory_void_callback()
	{
		String returnValue = getCategory();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getCategory_void(long pNativeObject);
	/**
	 * 获取显示项的类别
	 * @param  
	 * @return 类别
	 */
	public String getCategory()
	{
		String returnValue = getCategory_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getCategory_void_NoVirtual(long pNativeObject);
	protected String getCategory_NoVirtual()
	{
		String returnValue = getCategory_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setCategory_EVString_callback(String category)
	{
		String categoryParamValue = category;
		setCategory(categoryParamValue);
	}

	native private void setCategory_EVString(long pNativeObject, String category);
	/**
	 * 设置显示项的类别
	 * @param category 类别
	 */
	public void setCategory(String category)
	{
		String categoryParamValue = category;
		setCategory_EVString(this.nativeObject.pointer, categoryParamValue);
	}
	native private void setCategory_EVString_NoVirtual(long pNativeObject, String category);
	protected void setCategory_NoVirtual(String category)
	{
		String categoryParamValue = category;
		setCategory_EVString_NoVirtual(this.nativeObject.pointer, categoryParamValue);
	}

	protected  String getToolTip_void_callback()
	{
		String returnValue = getToolTip();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getToolTip_void(long pNativeObject);
	/**
	 * 获取提示信息
	 * @param  
	 * @return 信息
	 */
	public String getToolTip()
	{
		String returnValue = getToolTip_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getToolTip_void_NoVirtual(long pNativeObject);
	protected String getToolTip_NoVirtual()
	{
		String returnValue = getToolTip_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setToolTip_EVString_callback(String toolTip)
	{
		String toolTipParamValue = toolTip;
		setToolTip(toolTipParamValue);
	}

	native private void setToolTip_EVString(long pNativeObject, String toolTip);
	/**
	 * 设置提示信息
	 * @param toolTip 提示信息
	 */
	public void setToolTip(String toolTip)
	{
		String toolTipParamValue = toolTip;
		setToolTip_EVString(this.nativeObject.pointer, toolTipParamValue);
	}
	native private void setToolTip_EVString_NoVirtual(long pNativeObject, String toolTip);
	protected void setToolTip_NoVirtual(String toolTip)
	{
		String toolTipParamValue = toolTip;
		setToolTip_EVString_NoVirtual(this.nativeObject.pointer, toolTipParamValue);
	}

	protected  long getIcon_void_callback()
	{
		com.earthview.world.display.Ibitmap returnValue = getIcon();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getIcon_void(long pNativeObject);
	/**
	 * 显示图标
	 * @param  
	 * @return 图标
	 */
	public com.earthview.world.display.Ibitmap getIcon()
	{
		long returnValue = getIcon_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ibitmap __returnValue = new com.earthview.world.display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate, "IBitmap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ibitmap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IBitmap");
		}
		return __returnValue;
	}
	native private long getIcon_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.display.Ibitmap getIcon_NoVirtual()
	{
		long returnValue = getIcon_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ibitmap __returnValue = new com.earthview.world.display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate, "IBitmap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ibitmap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IBitmap");
		}
		return __returnValue;
	}

	protected  void setIcon_IBitmap_callback(long bmp)
	{
		com.earthview.world.display.Ibitmap bmpParamValue = (bmp == 0L ? null : new com.earthview.world.display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate));
		if(bmpParamValue != null)
		{
		bmpParamValue.setDelegate(true);
		bmpParamValue.setInstancePointer(new InstancePointer(bmp));
		IClassFactory bmpParamValueClassFactory = GlobalClassFactoryMap.get(bmpParamValue.getCppInstanceTypeName());
		if (bmpParamValueClassFactory != null)
		{
			bmpParamValue.setDelegate(true);
			bmpParamValue = (com.earthview.world.display.Ibitmap)bmpParamValueClassFactory.create();
			bmpParamValue.setDelegate(true);
			bmpParamValue.setInstancePointer(new InstancePointer(bmp));
		}
		}
		setIcon(bmpParamValue);
	}

	native private void setIcon_IBitmap(long pNativeObject, long bmp);
	/**
	 * 设置显示图标
	 * @param  
	 */
	public void setIcon(com.earthview.world.display.Ibitmap bmp)
	{
		long bmpParamValue = (bmp == null ? 0L : bmp.nativeObject.pointer);
		setIcon_IBitmap(this.nativeObject.pointer, bmpParamValue);
	}
	native private void setIcon_IBitmap_NoVirtual(long pNativeObject, long bmp);
	protected void setIcon_NoVirtual(com.earthview.world.display.Ibitmap bmp)
	{
		long bmpParamValue = (bmp == null ? 0L : bmp.nativeObject.pointer);
		setIcon_IBitmap_NoVirtual(this.nativeObject.pointer, bmpParamValue);
	}

	protected  boolean isCheckable_void_callback()
	{
		boolean returnValue = isCheckable();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isCheckable_void(long pNativeObject);
	/**
	 * 判断是否支持"按下"状态
	 * @param  
	 * @return 如果支持按下操作则返回true,反之则否
	 */
	public boolean isCheckable()
	{
		boolean returnValue = isCheckable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isCheckable_void_NoVirtual(long pNativeObject);
	protected boolean isCheckable_NoVirtual()
	{
		boolean returnValue = isCheckable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setCheckable_ev_bool_callback(boolean checkable)
	{
		boolean checkableParamValue = checkable;
		setCheckable(checkableParamValue);
	}

	native private void setCheckable_ev_bool(long pNativeObject, boolean checkable);
	/**
	 * 设置是否支持"按下"状态
	 * @param checkable 如果为true,则支持按下状态,反之则否
	 */
	public void setCheckable(boolean checkable)
	{
		boolean checkableParamValue = checkable;
		setCheckable_ev_bool(this.nativeObject.pointer, checkableParamValue);
	}
	native private void setCheckable_ev_bool_NoVirtual(long pNativeObject, boolean checkable);
	protected void setCheckable_NoVirtual(boolean checkable)
	{
		boolean checkableParamValue = checkable;
		setCheckable_ev_bool_NoVirtual(this.nativeObject.pointer, checkableParamValue);
	}

	protected  boolean getChecked_void_callback()
	{
		boolean returnValue = getChecked();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getChecked_void(long pNativeObject);
	/**
	 * 获取是否被按下
	 * @param  
	 * @return 如果被按下,返回true,反之则否
	 */
	public boolean getChecked()
	{
		boolean returnValue = getChecked_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getChecked_void_NoVirtual(long pNativeObject);
	protected boolean getChecked_NoVirtual()
	{
		boolean returnValue = getChecked_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setChecked_ev_bool_callback(boolean checked)
	{
		boolean checkedParamValue = checked;
		setChecked(checkedParamValue);
	}

	native private void setChecked_ev_bool(long pNativeObject, boolean checked);
	/**
	 * 设置是否被按下
	 * @param checked 如果为true,则被按下,反之则否
	 */
	public void setChecked(boolean checked)
	{
		boolean checkedParamValue = checked;
		setChecked_ev_bool(this.nativeObject.pointer, checkedParamValue);
	}
	native private void setChecked_ev_bool_NoVirtual(long pNativeObject, boolean checked);
	protected void setChecked_NoVirtual(boolean checked)
	{
		boolean checkedParamValue = checked;
		setChecked_ev_bool_NoVirtual(this.nativeObject.pointer, checkedParamValue);
	}

	protected  boolean getEnabled_void_callback()
	{
		boolean returnValue = getEnabled();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getEnabled_void(long pNativeObject);
	/**
	 * 获取显示项是否可用
	 * @param  
	 * @return 如果可用则返回true,反之则否
	 */
	public boolean getEnabled()
	{
		boolean returnValue = getEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getEnabled_void_NoVirtual(long pNativeObject);
	protected boolean getEnabled_NoVirtual()
	{
		boolean returnValue = getEnabled_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setEnabled_ev_bool_callback(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setEnabled(enabledParamValue);
	}

	native private void setEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置是否可用
	 * @param enabled 如果为true,则显示项可用,反之则否
	 */
	public void setEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setEnabled_ev_bool_NoVirtual(long pNativeObject, boolean enabled);
	protected void setEnabled_NoVirtual(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setEnabled_ev_bool_NoVirtual(this.nativeObject.pointer, enabledParamValue);
	}

	protected  long getCommand_void_callback()
	{
		com.earthview.world.spatial.systemui.Icommand returnValue = getCommand();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCommand_void(long pNativeObject);
	/**
	 * 获取显示项所关联的命令项
	 * @param  
	 * @return 命令项
	 */
	public com.earthview.world.spatial.systemui.Icommand getCommand()
	{
		long returnValue = getCommand_void(this.nativeObject.pointer);
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
	native private long getCommand_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.systemui.Icommand getCommand_NoVirtual()
	{
		long returnValue = getCommand_void_NoVirtual(this.nativeObject.pointer);
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

	native private boolean onEvent_CEvent(long pNativeObject, long e);
	/**
	 * 事件响应
	 * @param e 事件对象
	 */
	public boolean onEvent(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onEvent_CEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onEvent_CEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onEvent_NoVirtual(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onEvent_CEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	public Iitem(com.earthview.world.spatial.systemui.Icommand command) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer commandPtr = new BasePointer(command);
		list.add("command", commandPtr.get());
		Create("JIItemProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.systemui.Iitem".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Iitem(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Iitem(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 定时器事件处理函数，可重载
	 * @param e 定时器事件，内有定时器id
	 */
	public void onTimerEvent(com.earthview.world.core.TimerEvent e)
	{
		super.onTimerEvent_NoVirtual(e);
	}
	/**
	 * 用户自定义事件处理函数，是onEvent的子过程，可重载
	 * @param e 事件
	 */
	public void onCustomEvent(com.earthview.world.core.Event e)
	{
		super.onCustomEvent_NoVirtual(e);
	}
	
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_getCategory_void(long pNativeObject, String method);
	native protected void register_setCategory_EVString(long pNativeObject, String method);
	native protected void register_getToolTip_void(long pNativeObject, String method);
	native protected void register_setToolTip_EVString(long pNativeObject, String method);
	native protected void register_getIcon_void(long pNativeObject, String method);
	native protected void register_setIcon_IBitmap(long pNativeObject, String method);
	native protected void register_isCheckable_void(long pNativeObject, String method);
	native protected void register_setCheckable_ev_bool(long pNativeObject, String method);
	native protected void register_getChecked_void(long pNativeObject, String method);
	native protected void register_setChecked_ev_bool(long pNativeObject, String method);
	native protected void register_getEnabled_void(long pNativeObject, String method);
	native protected void register_setEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_getCommand_void(long pNativeObject, String method);
	native protected void register_onEvent_CEvent(long pNativeObject, String method);
	native protected void register_onTimerEvent_CTimerEvent(long pNativeObject, String method);
	native protected void register_onCustomEvent_CEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_getCategory_void(this.nativeObject.pointer, "getCategory_void_callback");
			this.register_setCategory_EVString(this.nativeObject.pointer, "setCategory_EVString_callback");
			this.register_getToolTip_void(this.nativeObject.pointer, "getToolTip_void_callback");
			this.register_setToolTip_EVString(this.nativeObject.pointer, "setToolTip_EVString_callback");
			this.register_getIcon_void(this.nativeObject.pointer, "getIcon_void_callback");
			this.register_setIcon_IBitmap(this.nativeObject.pointer, "setIcon_IBitmap_callback");
			this.register_isCheckable_void(this.nativeObject.pointer, "isCheckable_void_callback");
			this.register_setCheckable_ev_bool(this.nativeObject.pointer, "setCheckable_ev_bool_callback");
			this.register_getChecked_void(this.nativeObject.pointer, "getChecked_void_callback");
			this.register_setChecked_ev_bool(this.nativeObject.pointer, "setChecked_ev_bool_callback");
			this.register_getEnabled_void(this.nativeObject.pointer, "getEnabled_void_callback");
			this.register_setEnabled_ev_bool(this.nativeObject.pointer, "setEnabled_ev_bool_callback");
			this.register_getCommand_void(this.nativeObject.pointer, "getCommand_void_callback");
			this.register_onEvent_CEvent(this.nativeObject.pointer, "onEvent_CEvent_callback");
			this.register_onTimerEvent_CTimerEvent(this.nativeObject.pointer, "onTimerEvent_CTimerEvent_callback");
			this.register_onCustomEvent_CEvent(this.nativeObject.pointer, "onCustomEvent_CEvent_callback");
		}
	}
	
	public static Iitem fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Iitem obj = null;
 		if(baseObj instanceof Iitem)
		{
			obj = (Iitem)baseObj;
		} else {
			obj = new Iitem(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IItem");
			obj.increaseCast();
		}

		return obj;
	}
}
