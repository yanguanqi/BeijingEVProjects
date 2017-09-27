package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Iactionfactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::IActionFactory", new IactionfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::JIActionFactoryProxy", new IactionfactoryClassFactory());
	}

	protected  long createToolBar_ev_uint32_callback(long type)
	{
		long typeParamValue = type;
		com.earthview.world.spatial.systemui.Itoolbar returnValue = createToolBar(typeParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createToolBar_ev_uint32(long pNativeObject, long type);
	/**
	 * 根据指定类型创建工具栏
	 * @param type 工具栏类型
	 * @return 工具栏
	 */
	public com.earthview.world.spatial.systemui.Itoolbar createToolBar(long type)
	{
		long typeParamValue = type;
		long returnValue = createToolBar_ev_uint32(this.nativeObject.pointer, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Itoolbar __returnValue = new com.earthview.world.spatial.systemui.Itoolbar(CreatedWhenConstruct.CWC_NotToCreate, "IToolBar");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Itoolbar)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IToolBar");
		}
		return __returnValue;
	}
	native private long createToolBar_ev_uint32_NoVirtual(long pNativeObject, long type);
	protected com.earthview.world.spatial.systemui.Itoolbar createToolBar_NoVirtual(long type)
	{
		long typeParamValue = type;
		long returnValue = createToolBar_ev_uint32_NoVirtual(this.nativeObject.pointer, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Itoolbar __returnValue = new com.earthview.world.spatial.systemui.Itoolbar(CreatedWhenConstruct.CWC_NotToCreate, "IToolBar");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Itoolbar)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IToolBar");
		}
		return __returnValue;
	}

	protected  long createMenu_ev_uint32_callback(long type)
	{
		long typeParamValue = type;
		com.earthview.world.spatial.systemui.Imenu returnValue = createMenu(typeParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createMenu_ev_uint32(long pNativeObject, long type);
	/**
	 * 根据指定类型创建菜单
	 * @param type 菜单类型
	 * @return 菜单
	 */
	public com.earthview.world.spatial.systemui.Imenu createMenu(long type)
	{
		long typeParamValue = type;
		long returnValue = createMenu_ev_uint32(this.nativeObject.pointer, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Imenu __returnValue = new com.earthview.world.spatial.systemui.Imenu(CreatedWhenConstruct.CWC_NotToCreate, "IMenu");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Imenu)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IMenu");
		}
		return __returnValue;
	}
	native private long createMenu_ev_uint32_NoVirtual(long pNativeObject, long type);
	protected com.earthview.world.spatial.systemui.Imenu createMenu_NoVirtual(long type)
	{
		long typeParamValue = type;
		long returnValue = createMenu_ev_uint32_NoVirtual(this.nativeObject.pointer, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Imenu __returnValue = new com.earthview.world.spatial.systemui.Imenu(CreatedWhenConstruct.CWC_NotToCreate, "IMenu");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Imenu)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IMenu");
		}
		return __returnValue;
	}

	protected  void destoryToolBar_IToolBar_callback(long bar)
	{
		com.earthview.world.spatial.systemui.Itoolbar barParamValue = (bar == 0L ? null : new com.earthview.world.spatial.systemui.Itoolbar(CreatedWhenConstruct.CWC_NotToCreate));
		if(barParamValue != null)
		{
		barParamValue.setDelegate(true);
		barParamValue.setInstancePointer(new InstancePointer(bar));
		IClassFactory barParamValueClassFactory = GlobalClassFactoryMap.get(barParamValue.getCppInstanceTypeName());
		if (barParamValueClassFactory != null)
		{
			barParamValue.setDelegate(true);
			barParamValue = (com.earthview.world.spatial.systemui.Itoolbar)barParamValueClassFactory.create();
			barParamValue.setDelegate(true);
			barParamValue.setInstancePointer(new InstancePointer(bar));
		}
		}
		destoryToolBar(barParamValue);
	}

	native private void destoryToolBar_IToolBar(long pNativeObject, long bar);
	/**
	 * 删除工具栏
	 * @param bar 待删除的工具栏
	 */
	public void destoryToolBar(com.earthview.world.spatial.systemui.Itoolbar bar)
	{
		long barParamValue = (bar == null ? 0L : bar.nativeObject.pointer);
		destoryToolBar_IToolBar(this.nativeObject.pointer, barParamValue);
	}
	native private void destoryToolBar_IToolBar_NoVirtual(long pNativeObject, long bar);
	protected void destoryToolBar_NoVirtual(com.earthview.world.spatial.systemui.Itoolbar bar)
	{
		long barParamValue = (bar == null ? 0L : bar.nativeObject.pointer);
		destoryToolBar_IToolBar_NoVirtual(this.nativeObject.pointer, barParamValue);
	}

	protected  void destoryMenu_IMenu_callback(long menu)
	{
		com.earthview.world.spatial.systemui.Imenu menuParamValue = (menu == 0L ? null : new com.earthview.world.spatial.systemui.Imenu(CreatedWhenConstruct.CWC_NotToCreate));
		if(menuParamValue != null)
		{
		menuParamValue.setDelegate(true);
		menuParamValue.setInstancePointer(new InstancePointer(menu));
		IClassFactory menuParamValueClassFactory = GlobalClassFactoryMap.get(menuParamValue.getCppInstanceTypeName());
		if (menuParamValueClassFactory != null)
		{
			menuParamValue.setDelegate(true);
			menuParamValue = (com.earthview.world.spatial.systemui.Imenu)menuParamValueClassFactory.create();
			menuParamValue.setDelegate(true);
			menuParamValue.setInstancePointer(new InstancePointer(menu));
		}
		}
		destoryMenu(menuParamValue);
	}

	native private void destoryMenu_IMenu(long pNativeObject, long menu);
	/**
	 * 删除菜单
	 * @param menu 待删除的菜单
	 */
	public void destoryMenu(com.earthview.world.spatial.systemui.Imenu menu)
	{
		long menuParamValue = (menu == null ? 0L : menu.nativeObject.pointer);
		destoryMenu_IMenu(this.nativeObject.pointer, menuParamValue);
	}
	native private void destoryMenu_IMenu_NoVirtual(long pNativeObject, long menu);
	protected void destoryMenu_NoVirtual(com.earthview.world.spatial.systemui.Imenu menu)
	{
		long menuParamValue = (menu == null ? 0L : menu.nativeObject.pointer);
		destoryMenu_IMenu_NoVirtual(this.nativeObject.pointer, menuParamValue);
	}

	protected  long getItem_ICommand_callback(long cmd)
	{
		com.earthview.world.spatial.systemui.Icommand cmdParamValue = (cmd == 0L ? null : new com.earthview.world.spatial.systemui.Icommand(CreatedWhenConstruct.CWC_NotToCreate));
		if(cmdParamValue != null)
		{
		cmdParamValue.setDelegate(true);
		cmdParamValue.setInstancePointer(new InstancePointer(cmd));
		IClassFactory cmdParamValueClassFactory = GlobalClassFactoryMap.get(cmdParamValue.getCppInstanceTypeName());
		if (cmdParamValueClassFactory != null)
		{
			cmdParamValue.setDelegate(true);
			cmdParamValue = (com.earthview.world.spatial.systemui.Icommand)cmdParamValueClassFactory.create();
			cmdParamValue.setDelegate(true);
			cmdParamValue.setInstancePointer(new InstancePointer(cmd));
		}
		}
		com.earthview.world.spatial.systemui.Iitem returnValue = getItem(cmdParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getItem_ICommand(long pNativeObject, long cmd);
	/**
	 * 获取与command相关联的item
	 * @param cmd 命令项
	 * @return 显示项
	 */
	public com.earthview.world.spatial.systemui.Iitem getItem(com.earthview.world.spatial.systemui.Icommand cmd)
	{
		long cmdParamValue = (cmd == null ? 0L : cmd.nativeObject.pointer);
		long returnValue = getItem_ICommand(this.nativeObject.pointer, cmdParamValue);
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
	native private long getItem_ICommand_NoVirtual(long pNativeObject, long cmd);
	protected com.earthview.world.spatial.systemui.Iitem getItem_NoVirtual(com.earthview.world.spatial.systemui.Icommand cmd)
	{
		long cmdParamValue = (cmd == null ? 0L : cmd.nativeObject.pointer);
		long returnValue = getItem_ICommand_NoVirtual(this.nativeObject.pointer, cmdParamValue);
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

	protected  boolean question_EVString_callback(String text)
	{
		String textParamValue = text;
		boolean returnValue = question(textParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean question_EVString(long pNativeObject, String text);
	/**
	 * 弹出"询问"对话框
	 * @param text "询问"的内容
	 * @return 如果用户点击"确定"则返回true,反之则否
	 */
	public boolean question(String text)
	{
		String textParamValue = text;
		boolean returnValue = question_EVString(this.nativeObject.pointer, textParamValue);
		return returnValue;
	}
	native private boolean question_EVString_NoVirtual(long pNativeObject, String text);
	protected boolean question_NoVirtual(String text)
	{
		String textParamValue = text;
		boolean returnValue = question_EVString_NoVirtual(this.nativeObject.pointer, textParamValue);
		return returnValue;
	}

	protected  void information_EVString_callback(String text)
	{
		String textParamValue = text;
		information(textParamValue);
	}

	native private void information_EVString(long pNativeObject, String text);
	/**
	 * 弹出"信息"对话框
	 * @param text 信息
	 */
	public void information(String text)
	{
		String textParamValue = text;
		information_EVString(this.nativeObject.pointer, textParamValue);
	}
	native private void information_EVString_NoVirtual(long pNativeObject, String text);
	protected void information_NoVirtual(String text)
	{
		String textParamValue = text;
		information_EVString_NoVirtual(this.nativeObject.pointer, textParamValue);
	}

	public Iactionfactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JIActionFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.systemui.Iactionfactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Iactionfactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Iactionfactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_createToolBar_ev_uint32(long pNativeObject, String method);
	native protected void register_createMenu_ev_uint32(long pNativeObject, String method);
	native protected void register_destoryToolBar_IToolBar(long pNativeObject, String method);
	native protected void register_destoryMenu_IMenu(long pNativeObject, String method);
	native protected void register_getItem_ICommand(long pNativeObject, String method);
	native protected void register_question_EVString(long pNativeObject, String method);
	native protected void register_information_EVString(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createToolBar_ev_uint32(this.nativeObject.pointer, "createToolBar_ev_uint32_callback");
			this.register_createMenu_ev_uint32(this.nativeObject.pointer, "createMenu_ev_uint32_callback");
			this.register_destoryToolBar_IToolBar(this.nativeObject.pointer, "destoryToolBar_IToolBar_callback");
			this.register_destoryMenu_IMenu(this.nativeObject.pointer, "destoryMenu_IMenu_callback");
			this.register_getItem_ICommand(this.nativeObject.pointer, "getItem_ICommand_callback");
			this.register_question_EVString(this.nativeObject.pointer, "question_EVString_callback");
			this.register_information_EVString(this.nativeObject.pointer, "information_EVString_callback");
		}
	}
	
	public static Iactionfactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Iactionfactory obj = null;
 		if(baseObj instanceof Iactionfactory)
		{
			obj = (Iactionfactory)baseObj;
		} else {
			obj = new Iactionfactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IActionFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
