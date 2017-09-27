package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Application extends com.earthview.world.core.EventObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CApplication", new ApplicationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCApplicationProxy", new ApplicationClassFactory());
	}

	native private static long getSingletonPtr_void();
	/**
	 * 获取EarthView::World::Core::CApplication的单例对象。
	 * @return EarthView::World::Core::CApplication对象
	 */
	public static com.earthview.world.core.Application getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.Application __returnValue = new com.earthview.world.core.Application(CreatedWhenConstruct.CWC_NotToCreate, "CApplication");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Application)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CApplication");
		}
		return __returnValue;
	}
	native private boolean init_void(long pNativeObject);
	/**
	 * 初始化。如果在渲染开始前不调用此函数，会产生错误。
	 */
	public boolean init()
	{
		boolean returnValue = init_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void unInit_void(long pNativeObject);
	/**
	 * 释放资源
	 */
	public void unInit()
	{
		unInit_void(this.nativeObject.pointer);
	}
	native private void processEvents_void(long pNativeObject);
	/**
	 * 处理事件，并且渲染三维窗口。需要把此函数放置在程序主线程中。
	 */
	public void processEvents()
	{
		processEvents_void(this.nativeObject.pointer);
	}
	native private long getViewManager_void(long pNativeObject);
	/**
	 * 获取视图管理类单例对象，也可以通过CViewManager::getSingleton()获取。
	 * @return CViewManager对象。
	 */
	public ViewManager getViewManager()
	{
		long returnValue = getViewManager_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		ViewManager __returnValue = new ViewManager(CreatedWhenConstruct.CWC_NotToCreate, "CViewManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (ViewManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewManager");
		}
		return __returnValue;
	}
	native private long getCommandPool_void(long pNativeObject);
	/**
	 * 获取CCommandPool对象。
	 * @return CCommandPool对象。
	 */
	public CommandPool getCommandPool()
	{
		long returnValue = getCommandPool_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		CommandPool __returnValue = new CommandPool(CreatedWhenConstruct.CWC_NotToCreate, "CCommandPool");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (CommandPool)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCommandPool");
		}
		return __returnValue;
	}
	native private boolean isInitialized_void(long pNativeObject);
	/**
	 * 检测是否已经做过初始化
	 * @param  
	 * @return 如果已经做过初始化则返回true,反之则否
	 */
	public boolean isInitialized()
	{
		boolean returnValue = isInitialized_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMenuCount_void(long pNativeObject);
	/**
	 * 获取菜单个数
	 * @param  
	 * @return 菜单个数
	 */
	public long getMenuCount()
	{
		long returnValue = getMenuCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMenu_ev_uint32(long pNativeObject, long type);
	/**
	 * 获取指定类型的菜单
	 * @param type 菜单类型
	 * @return 菜单
	 */
	public com.earthview.world.spatial.systemui.Imenu getMenu(long type)
	{
		long typeParamValue = type;
		long returnValue = getMenu_ev_uint32(this.nativeObject.pointer, typeParamValue);
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
	native private void addMenu_IMenu(long pNativeObject, long ref_menu);
	/**
	 * 添加菜单
	 * @param menu 待添加的菜单
	 */
	public void addMenu(com.earthview.world.spatial.systemui.Imenu ref_menu)
	{
		long ref_menuParamValue = (ref_menu == null ? 0L : ref_menu.nativeObject.pointer);
		addMenu_IMenu(this.nativeObject.pointer, ref_menuParamValue);
	}
	native private void removeMenu_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除菜单
	 * @param index 待移除的菜单索引
	 */
	public void removeMenu(long index)
	{
		long indexParamValue = index;
		removeMenu_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private long getToolBarCount_void(long pNativeObject);
	/**
	 * 获取工具栏的数量
	 * @param  
	 * @return 数量
	 */
	public long getToolBarCount()
	{
		long returnValue = getToolBarCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getToolBar_ev_uint32(long pNativeObject, long type);
	/**
	 * 获取指定类型的工具栏
	 * @param type 工具栏类型
	 * @return 工具栏
	 */
	public com.earthview.world.spatial.systemui.Itoolbar getToolBar(long type)
	{
		long typeParamValue = type;
		long returnValue = getToolBar_ev_uint32(this.nativeObject.pointer, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Itoolbar __returnValue = new com.earthview.world.spatial.systemui.Itoolbar(CreatedWhenConstruct.CWC_NotToCreate, "IToolBar");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Itoolbar)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IToolBar");
		}
		return __returnValue;
	}
	native private void addToolBar_IToolBar(long pNativeObject, long ref_bar);
	/**
	 * 添加工具栏
	 * @param bar 待添加的工具栏
	 */
	public void addToolBar(com.earthview.world.spatial.systemui.Itoolbar ref_bar)
	{
		long ref_barParamValue = (ref_bar == null ? 0L : ref_bar.nativeObject.pointer);
		addToolBar_IToolBar(this.nativeObject.pointer, ref_barParamValue);
	}
	native private void removeToolBar_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除工具栏
	 * @param index 待移除的工具栏的索引
	 */
	public void removeToolBar(long index)
	{
		long indexParamValue = index;
		removeToolBar_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private void setActionFactory_IActionFactory(long pNativeObject, long ref_factory);
	/**
	 * 设置命令工厂
	 * @param facotry 命令工厂
	 */
	public void setActionFactory(com.earthview.world.spatial.systemui.Iactionfactory ref_factory)
	{
		long ref_factoryParamValue = (ref_factory == null ? 0L : ref_factory.nativeObject.pointer);
		setActionFactory_IActionFactory(this.nativeObject.pointer, ref_factoryParamValue);
	}
	native private long getActionFactory_void(long pNativeObject);
	/**
	 * 获取命令工厂
	 * @param  
	 * @return 命令工厂
	 */
	public com.earthview.world.spatial.systemui.Iactionfactory getActionFactory()
	{
		long returnValue = getActionFactory_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Iactionfactory __returnValue = new com.earthview.world.spatial.systemui.Iactionfactory(CreatedWhenConstruct.CWC_NotToCreate, "IActionFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Iactionfactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IActionFactory");
		}
		return __returnValue;
	}
	native private void init1_void(long pNativeObject);
	public void init1()
	{
		init1_void(this.nativeObject.pointer);
	}
	native private void init2_void(long pNativeObject);
	public void init2()
	{
		init2_void(this.nativeObject.pointer);
	}
	native private boolean onEvent_CEvent(long pNativeObject, long e);
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

	public Application(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Application(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	native protected void register_onEvent_CEvent(long pNativeObject, String method);
	native protected void register_onTimerEvent_CTimerEvent(long pNativeObject, String method);
	native protected void register_onCustomEvent_CEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onEvent_CEvent(this.nativeObject.pointer, "onEvent_CEvent_callback");
			this.register_onTimerEvent_CTimerEvent(this.nativeObject.pointer, "onTimerEvent_CTimerEvent_callback");
			this.register_onCustomEvent_CEvent(this.nativeObject.pointer, "onCustomEvent_CEvent_callback");
		}
	}
	
	public static Application fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Application obj = null;
 		if(baseObj instanceof Application)
		{
			obj = (Application)baseObj;
		} else {
			obj = new Application(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CApplication");
			obj.increaseCast();
		}

		return obj;
	}
}
