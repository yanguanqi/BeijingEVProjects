package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// 二维菜单 1－200 ////
public class Imenu extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::IMenu", new ImenuClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::JIMenuProxy", new ImenuClassFactory());
	}

	protected  long getType_void_callback()
	{
		long returnValue = getType();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getType_void(long pNativeObject);
	/**
	 * 获取菜单类型
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

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取菜单名称
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
	 * 设置菜单名称
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

	protected  boolean isEnabled_void_callback()
	{
		boolean returnValue = isEnabled();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isEnabled_void(long pNativeObject);
	/**
	 * 检测是否可用
	 * @param  
	 * @return 如果可用则返回true,反之则否
	 */
	public boolean isEnabled()
	{
		boolean returnValue = isEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isEnabled_void_NoVirtual(long pNativeObject);
	protected boolean isEnabled_NoVirtual()
	{
		boolean returnValue = isEnabled_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setEnabled_ev_bool_callback(boolean enable)
	{
		boolean enableParamValue = enable;
		setEnabled(enableParamValue);
	}

	native private void setEnabled_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置是否可用
	 * @param enable 如果为true,则菜单可用,反之则否
	 */
	public void setEnabled(boolean enable)
	{
		boolean enableParamValue = enable;
		setEnabled_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private void setEnabled_ev_bool_NoVirtual(long pNativeObject, boolean enable);
	protected void setEnabled_NoVirtual(boolean enable)
	{
		boolean enableParamValue = enable;
		setEnabled_ev_bool_NoVirtual(this.nativeObject.pointer, enableParamValue);
	}

	protected  boolean appendItem_ICommand_callback(long ref_command)
	{
		com.earthview.world.spatial.systemui.Icommand ref_commandParamValue = (ref_command == 0L ? null : new com.earthview.world.spatial.systemui.Icommand(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_commandParamValue != null)
		{
		ref_commandParamValue.setDelegate(true);
		ref_commandParamValue.setInstancePointer(new InstancePointer(ref_command));
		IClassFactory ref_commandParamValueClassFactory = GlobalClassFactoryMap.get(ref_commandParamValue.getCppInstanceTypeName());
		if (ref_commandParamValueClassFactory != null)
		{
			ref_commandParamValue.setDelegate(true);
			ref_commandParamValue = (com.earthview.world.spatial.systemui.Icommand)ref_commandParamValueClassFactory.create();
			ref_commandParamValue.setDelegate(true);
			ref_commandParamValue.setInstancePointer(new InstancePointer(ref_command));
		}
		}
		boolean returnValue = appendItem(ref_commandParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean appendItem_ICommand(long pNativeObject, long ref_command);
	/**
	 * 追加一个命令项
	 * @param command 待追加的命令项
	 */
	public boolean appendItem(com.earthview.world.spatial.systemui.Icommand ref_command)
	{
		long ref_commandParamValue = (ref_command == null ? 0L : ref_command.nativeObject.pointer);
		boolean returnValue = appendItem_ICommand(this.nativeObject.pointer, ref_commandParamValue);
		return returnValue;
	}
	native private boolean appendItem_ICommand_NoVirtual(long pNativeObject, long ref_command);
	protected boolean appendItem_NoVirtual(com.earthview.world.spatial.systemui.Icommand ref_command)
	{
		long ref_commandParamValue = (ref_command == null ? 0L : ref_command.nativeObject.pointer);
		boolean returnValue = appendItem_ICommand_NoVirtual(this.nativeObject.pointer, ref_commandParamValue);
		return returnValue;
	}

	protected  boolean insertItem_ev_uint32_ICommand_callback(long index, long ref_command)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.systemui.Icommand ref_commandParamValue = (ref_command == 0L ? null : new com.earthview.world.spatial.systemui.Icommand(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_commandParamValue != null)
		{
		ref_commandParamValue.setDelegate(true);
		ref_commandParamValue.setInstancePointer(new InstancePointer(ref_command));
		IClassFactory ref_commandParamValueClassFactory = GlobalClassFactoryMap.get(ref_commandParamValue.getCppInstanceTypeName());
		if (ref_commandParamValueClassFactory != null)
		{
			ref_commandParamValue.setDelegate(true);
			ref_commandParamValue = (com.earthview.world.spatial.systemui.Icommand)ref_commandParamValueClassFactory.create();
			ref_commandParamValue.setDelegate(true);
			ref_commandParamValue.setInstancePointer(new InstancePointer(ref_command));
		}
		}
		boolean returnValue = insertItem(indexParamValue, ref_commandParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean insertItem_ev_uint32_ICommand(long pNativeObject, long index, long ref_command);
	/**
	 * 添加命令项
	 * @param index 待插入的位置
	 * @param command 待插入的命令项
	 */
	public boolean insertItem(long index, com.earthview.world.spatial.systemui.Icommand ref_command)
	{
		long indexParamValue = index;
		long ref_commandParamValue = (ref_command == null ? 0L : ref_command.nativeObject.pointer);
		boolean returnValue = insertItem_ev_uint32_ICommand(this.nativeObject.pointer, indexParamValue, ref_commandParamValue);
		return returnValue;
	}
	native private boolean insertItem_ev_uint32_ICommand_NoVirtual(long pNativeObject, long index, long ref_command);
	protected boolean insertItem_NoVirtual(long index, com.earthview.world.spatial.systemui.Icommand ref_command)
	{
		long indexParamValue = index;
		long ref_commandParamValue = (ref_command == null ? 0L : ref_command.nativeObject.pointer);
		boolean returnValue = insertItem_ev_uint32_ICommand_NoVirtual(this.nativeObject.pointer, indexParamValue, ref_commandParamValue);
		return returnValue;
	}

	protected  long getItemCount_void_callback()
	{
		long returnValue = getItemCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getItemCount_void(long pNativeObject);
	/**
	 * 获取命令项的数量
	 * @param  
	 * @return 数量
	 */
	public long getItemCount()
	{
		long returnValue = getItemCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getItemCount_void_NoVirtual(long pNativeObject);
	protected long getItemCount_NoVirtual()
	{
		long returnValue = getItemCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean removeItem_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		boolean returnValue = removeItem(indexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean removeItem_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除指定索引处的命令项
	 * @param index 待移除的命令项的索引
	 * @return 如果移除成功则返回true,反之则否
	 */
	public boolean removeItem(long index)
	{
		long indexParamValue = index;
		boolean returnValue = removeItem_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean removeItem_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected boolean removeItem_NoVirtual(long index)
	{
		long indexParamValue = index;
		boolean returnValue = removeItem_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  long getItem_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.systemui.Iitem returnValue = getItem(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getItem_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引处的显示项
	 * @param index 命令项的索引
	 * @return 命令项
	 */
	public com.earthview.world.spatial.systemui.Iitem getItem(long index)
	{
		long indexParamValue = index;
		long returnValue = getItem_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Iitem __returnValue = new com.earthview.world.spatial.systemui.Iitem(CreatedWhenConstruct.CWC_NotToCreate, "IItem");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Iitem)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IItem");
		}
		return __returnValue;
	}
	native private long getItem_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.systemui.Iitem getItem_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getItem_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Iitem __returnValue = new com.earthview.world.spatial.systemui.Iitem(CreatedWhenConstruct.CWC_NotToCreate, "IItem");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Iitem)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IItem");
		}
		return __returnValue;
	}

	protected  void clear_void_callback()
	{
		clear();
	}

	native private void clear_void(long pNativeObject);
	/**
	 * 清空所有的菜单项
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void clear_void_NoVirtual(long pNativeObject);
	protected void clear_NoVirtual()
	{
		clear_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean appendSeperator_void_callback()
	{
		boolean returnValue = appendSeperator();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean appendSeperator_void(long pNativeObject);
	/**
	 * 添加分隔符
	 * @param  
	 */
	public boolean appendSeperator()
	{
		boolean returnValue = appendSeperator_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean appendSeperator_void_NoVirtual(long pNativeObject);
	protected boolean appendSeperator_NoVirtual()
	{
		boolean returnValue = appendSeperator_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean insertSeperator_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		boolean returnValue = insertSeperator(indexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean insertSeperator_ev_uint32(long pNativeObject, long index);
	/**
	 * 插入分隔符
	 * @param index 插入的位置
	 */
	public boolean insertSeperator(long index)
	{
		long indexParamValue = index;
		boolean returnValue = insertSeperator_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean insertSeperator_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected boolean insertSeperator_NoVirtual(long index)
	{
		long indexParamValue = index;
		boolean returnValue = insertSeperator_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  long appendSubMenu_void_callback()
	{
		com.earthview.world.spatial.systemui.Imenu returnValue = appendSubMenu();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long appendSubMenu_void(long pNativeObject);
	/**
	 * 追加子菜单
	 * @param  
	 */
	public com.earthview.world.spatial.systemui.Imenu appendSubMenu()
	{
		long returnValue = appendSubMenu_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Imenu __returnValue = new com.earthview.world.spatial.systemui.Imenu(CreatedWhenConstruct.CWC_NotToCreate, "IMenu");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Imenu)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMenu");
		}
		return __returnValue;
	}
	native private long appendSubMenu_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.systemui.Imenu appendSubMenu_NoVirtual()
	{
		long returnValue = appendSubMenu_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Imenu __returnValue = new com.earthview.world.spatial.systemui.Imenu(CreatedWhenConstruct.CWC_NotToCreate, "IMenu");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Imenu)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMenu");
		}
		return __returnValue;
	}

	protected  long insertSubMenu_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.systemui.Imenu returnValue = insertSubMenu(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long insertSubMenu_ev_uint32(long pNativeObject, long index);
	/**
	 * 插入子菜单
	 * @param index 插入的位置
	 * @return 子菜单
	 */
	public com.earthview.world.spatial.systemui.Imenu insertSubMenu(long index)
	{
		long indexParamValue = index;
		long returnValue = insertSubMenu_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Imenu __returnValue = new com.earthview.world.spatial.systemui.Imenu(CreatedWhenConstruct.CWC_NotToCreate, "IMenu");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Imenu)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMenu");
		}
		return __returnValue;
	}
	native private long insertSubMenu_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.systemui.Imenu insertSubMenu_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = insertSubMenu_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Imenu __returnValue = new com.earthview.world.spatial.systemui.Imenu(CreatedWhenConstruct.CWC_NotToCreate, "IMenu");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Imenu)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMenu");
		}
		return __returnValue;
	}

	protected  long getSubMenuCount_void_callback()
	{
		long returnValue = getSubMenuCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getSubMenuCount_void(long pNativeObject);
	/**
	 * 获取子菜单的个数
	 * @param  
	 * @return 子菜单的个数
	 */
	public long getSubMenuCount()
	{
		long returnValue = getSubMenuCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSubMenuCount_void_NoVirtual(long pNativeObject);
	protected long getSubMenuCount_NoVirtual()
	{
		long returnValue = getSubMenuCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getSubMenu_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.systemui.Imenu returnValue = getSubMenu(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSubMenu_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引处的子菜单
	 * @param index 索引
	 * @return 子菜单
	 */
	public com.earthview.world.spatial.systemui.Imenu getSubMenu(long index)
	{
		long indexParamValue = index;
		long returnValue = getSubMenu_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Imenu __returnValue = new com.earthview.world.spatial.systemui.Imenu(CreatedWhenConstruct.CWC_NotToCreate, "IMenu");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Imenu)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMenu");
		}
		return __returnValue;
	}
	native private long getSubMenu_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.systemui.Imenu getSubMenu_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getSubMenu_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Imenu __returnValue = new com.earthview.world.spatial.systemui.Imenu(CreatedWhenConstruct.CWC_NotToCreate, "IMenu");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Imenu)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMenu");
		}
		return __returnValue;
	}

	protected  void popup_ev_int32_ev_int32_callback(int x, int y)
	{
		int xParamValue = x;
		int yParamValue = y;
		popup(xParamValue, yParamValue);
	}

	native private void popup_ev_int32_ev_int32(long pNativeObject, int x, int y);
	/**
	 * 弹出菜单
	 * @param x 弹出位置的x坐标
	 * @param y 弹出位置的y坐标
	 */
	public void popup(int x, int y)
	{
		int xParamValue = x;
		int yParamValue = y;
		popup_ev_int32_ev_int32(this.nativeObject.pointer, xParamValue, yParamValue);
	}
	native private void popup_ev_int32_ev_int32_NoVirtual(long pNativeObject, int x, int y);
	protected void popup_NoVirtual(int x, int y)
	{
		int xParamValue = x;
		int yParamValue = y;
		popup_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue);
	}

	public Imenu(long type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("JIMenuProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.systemui.Imenu".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Imenu(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Imenu(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_isEnabled_void(long pNativeObject, String method);
	native protected void register_setEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_appendItem_ICommand(long pNativeObject, String method);
	native protected void register_insertItem_ev_uint32_ICommand(long pNativeObject, String method);
	native protected void register_getItemCount_void(long pNativeObject, String method);
	native protected void register_removeItem_ev_uint32(long pNativeObject, String method);
	native protected void register_getItem_ev_uint32(long pNativeObject, String method);
	native protected void register_clear_void(long pNativeObject, String method);
	native protected void register_appendSeperator_void(long pNativeObject, String method);
	native protected void register_insertSeperator_ev_uint32(long pNativeObject, String method);
	native protected void register_appendSubMenu_void(long pNativeObject, String method);
	native protected void register_insertSubMenu_ev_uint32(long pNativeObject, String method);
	native protected void register_getSubMenuCount_void(long pNativeObject, String method);
	native protected void register_getSubMenu_ev_uint32(long pNativeObject, String method);
	native protected void register_popup_ev_int32_ev_int32(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_isEnabled_void(this.nativeObject.pointer, "isEnabled_void_callback");
			this.register_setEnabled_ev_bool(this.nativeObject.pointer, "setEnabled_ev_bool_callback");
			this.register_appendItem_ICommand(this.nativeObject.pointer, "appendItem_ICommand_callback");
			this.register_insertItem_ev_uint32_ICommand(this.nativeObject.pointer, "insertItem_ev_uint32_ICommand_callback");
			this.register_getItemCount_void(this.nativeObject.pointer, "getItemCount_void_callback");
			this.register_removeItem_ev_uint32(this.nativeObject.pointer, "removeItem_ev_uint32_callback");
			this.register_getItem_ev_uint32(this.nativeObject.pointer, "getItem_ev_uint32_callback");
			this.register_clear_void(this.nativeObject.pointer, "clear_void_callback");
			this.register_appendSeperator_void(this.nativeObject.pointer, "appendSeperator_void_callback");
			this.register_insertSeperator_ev_uint32(this.nativeObject.pointer, "insertSeperator_ev_uint32_callback");
			this.register_appendSubMenu_void(this.nativeObject.pointer, "appendSubMenu_void_callback");
			this.register_insertSubMenu_ev_uint32(this.nativeObject.pointer, "insertSubMenu_ev_uint32_callback");
			this.register_getSubMenuCount_void(this.nativeObject.pointer, "getSubMenuCount_void_callback");
			this.register_getSubMenu_ev_uint32(this.nativeObject.pointer, "getSubMenu_ev_uint32_callback");
			this.register_popup_ev_int32_ev_int32(this.nativeObject.pointer, "popup_ev_int32_ev_int32_callback");
		}
	}
	
	public static Imenu fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Imenu obj = null;
 		if(baseObj instanceof Imenu)
		{
			obj = (Imenu)baseObj;
		} else {
			obj = new Imenu(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IMenu");
			obj.increaseCast();
		}

		return obj;
	}
}
