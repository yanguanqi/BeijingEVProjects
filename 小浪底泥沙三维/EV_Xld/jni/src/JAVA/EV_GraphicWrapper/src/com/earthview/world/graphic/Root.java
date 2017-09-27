package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 根类根类是EV_World系统的入口，可帮助配置系统，获取其他对象的指针
 */
public class Root extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRoot", new RootClassFactory());
	}

	/**
	 * 插件接口列表
	 */
	public static class PluginLibList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRoot::PluginLibList", new PluginLibListClassFactory());
		}

		public PluginLibList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("PluginLibList", null);
		}

		native private void push_back_CDynLib(long pNativeObject, long ref_t);
		public void push_back(NativeObjectPointer<com.earthview.world.core.DynLib> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_CDynLib(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.core.DynLib> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.core.DynLib> __returnValue = new NativeObjectPointer<com.earthview.world.core.DynLib>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.core.DynLib> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.core.DynLib> __returnValue = new NativeObjectPointer<com.earthview.world.core.DynLib>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_CDynLib(long pNativeObject, long pos, long ref_t);
		public void insert(long pos, NativeObjectPointer<com.earthview.world.core.DynLib> ref_t)
		{
			long posParamValue = pos;
			long ref_tParamValue = ref_t.nativeObject.pointer;
			insert_ev_uint32_CDynLib(this.nativeObject.pointer, posParamValue, ref_tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.core.DynLib> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.core.DynLib> __returnValue = new NativeObjectPointer<com.earthview.world.core.DynLib>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.core.DynLib> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.core.DynLib> __returnValue = new NativeObjectPointer<com.earthview.world.core.DynLib>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public PluginLibList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public PluginLibList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static PluginLibList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			PluginLibList obj = null;
 			if(baseObj instanceof PluginLibList)
			{
				obj = (PluginLibList)baseObj;
			} else {
				obj = new PluginLibList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "PluginLibList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class PluginLibListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			PluginLibList emptyInstance = new PluginLibList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class PluginInstanceList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRoot::PluginInstanceList", new PluginInstanceListClassFactory());
		}

		public PluginInstanceList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("PluginInstanceList", null);
		}

		native private void push_back_CPlugin(long pNativeObject, long ref_t);
		public void push_back(NativeObjectPointer<com.earthview.world.core.Plugin> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_CPlugin(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.core.Plugin> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.core.Plugin> __returnValue = new NativeObjectPointer<com.earthview.world.core.Plugin>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.core.Plugin> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.core.Plugin> __returnValue = new NativeObjectPointer<com.earthview.world.core.Plugin>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_CPlugin(long pNativeObject, long pos, long ref_t);
		public void insert(long pos, NativeObjectPointer<com.earthview.world.core.Plugin> ref_t)
		{
			long posParamValue = pos;
			long ref_tParamValue = ref_t.nativeObject.pointer;
			insert_ev_uint32_CPlugin(this.nativeObject.pointer, posParamValue, ref_tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.core.Plugin> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.core.Plugin> __returnValue = new NativeObjectPointer<com.earthview.world.core.Plugin>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.core.Plugin> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.core.Plugin> __returnValue = new NativeObjectPointer<com.earthview.world.core.Plugin>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public PluginInstanceList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public PluginInstanceList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static PluginInstanceList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			PluginInstanceList obj = null;
 			if(baseObj instanceof PluginInstanceList)
			{
				obj = (PluginInstanceList)baseObj;
			} else {
				obj = new PluginInstanceList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "PluginInstanceList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class PluginInstanceListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			PluginInstanceList emptyInstance = new PluginInstanceList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class MovableObjectFactoryMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRoot::MovableObjectFactoryMap", new MovableObjectFactoryMapClassFactory());
		}

		public MovableObjectFactoryMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("MovableObjectFactoryMap", null);
		}

		native private boolean push_EVString_CMovableObjectFactory(long pNativeObject, String key, long ref_val);
		public boolean push(String key, NativeObjectPointer<com.earthview.world.graphic.MovableObjectFactory> ref_val)
		{
			String keyParamValue = key;
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_EVString_CMovableObjectFactory(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
			return returnValue;
		}
		native private boolean exist_EVString(long pNativeObject, String key);
		public boolean exist(String key)
		{
			String keyParamValue = key;
			boolean returnValue = exist_EVString(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_EVString(long pNativeObject, String key);
		public NativeObjectPointer<com.earthview.world.graphic.MovableObjectFactory> OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.MovableObjectFactory> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.MovableObjectFactory>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		public NativeObjectPointer<com.earthview.world.graphic.MovableObjectFactory> get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.MovableObjectFactory> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.MovableObjectFactory>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_EVString(long pNativeObject, String key);
		public void erase(String key)
		{
			String keyParamValue = key;
			erase_EVString(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public MovableObjectFactoryMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public MovableObjectFactoryMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static MovableObjectFactoryMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			MovableObjectFactoryMap obj = null;
 			if(baseObj instanceof MovableObjectFactoryMap)
			{
				obj = (MovableObjectFactoryMap)baseObj;
			} else {
				obj = new MovableObjectFactoryMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "MovableObjectFactoryMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class MovableObjectFactoryMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			MovableObjectFactoryMap emptyInstance = new MovableObjectFactoryMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 构造函数
	 * @param pluginFileName 需要加载的插件的配置文件，默认为"plugins.cfg"
	 * @param configFileName 3D渲染相关配置信息，默认为"ev3d.cfg"
	 * @param logFileName 日志文件，默认为"ev3d.log"
	 */
	public Root(String pluginFileName, String configFileName, String logFileName) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer pluginFileNamePtr = new BasePointer(pluginFileName);
		list.add("pluginFileName", pluginFileNamePtr.get());
		BasePointer configFileNamePtr = new BasePointer(configFileName);
		list.add("configFileName", configFileNamePtr.get());
		BasePointer logFileNamePtr = new BasePointer(logFileName);
		list.add("logFileName", logFileNamePtr.get());
		Create("CRoot", list);
	}

	public Root(String pluginFileName, String configFileName) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer pluginFileNamePtr = new BasePointer(pluginFileName);
		list.add("pluginFileName", pluginFileNamePtr.get());
		BasePointer configFileNamePtr = new BasePointer(configFileName);
		list.add("configFileName", configFileNamePtr.get());
		Create("CRoot", list);
	}

	public Root(String pluginFileName) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer pluginFileNamePtr = new BasePointer(pluginFileName);
		list.add("pluginFileName", pluginFileNamePtr.get());
		Create("CRoot", list);
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public Root() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRoot", null);
	}

	native private void saveConfig_void(long pNativeObject);
	/**
	 * 保存当前配置文件的信息
	 * @param  
	 */
	public void saveConfig()
	{
		saveConfig_void(this.nativeObject.pointer);
	}
	native private void saveConfigWithActiveRenderSystem_CRenderSystem(long pNativeObject, long ref_system);
	/**
	 * 设置渲染系统并保存设置。
	 * @param ref_system 渲染系统
	 */
	public void saveConfigWithActiveRenderSystem(com.earthview.world.graphic.RenderSystem ref_system)
	{
		long ref_systemParamValue = (ref_system == null ? 0L : ref_system.nativeObject.pointer);
		saveConfigWithActiveRenderSystem_CRenderSystem(this.nativeObject.pointer, ref_systemParamValue);
	}
	native private boolean restoreConfig_void(long pNativeObject);
	/**
	 * 从配置文件中读取配置
	 * @param  
	 * @return 发现有效配置信息，返回true，如果没有保存配置信息或系统最后一次配置错误，返回false
	 */
	public boolean restoreConfig()
	{
		boolean returnValue = restoreConfig_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean showConfigDialog_void(long pNativeObject);
	/**
	 * 显示对话框让用户选择系统配置
	 * @param  
	 * @return 用户点击OK，返回true，点击Cancel，返回false
	 */
	public boolean showConfigDialog()
	{
		boolean returnValue = showConfigDialog_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void addRenderSystem_CRenderSystem(long pNativeObject, long ref_newRend);
	/**
	 * 添加一个新的子渲染系统
	 * @param newRend 
	 */
	public void addRenderSystem(com.earthview.world.graphic.RenderSystem ref_newRend)
	{
		long ref_newRendParamValue = (ref_newRend == null ? 0L : ref_newRend.nativeObject.pointer);
		addRenderSystem_CRenderSystem(this.nativeObject.pointer, ref_newRendParamValue);
	}
	native private long getAvailableRenderers_void(long pNativeObject);
	/**
	 * 获得有效的渲染系统列表
	 * @param  
	 */
	public com.earthview.world.graphic.RenderSystemList getAvailableRenderers()
	{
		long returnValue = getAvailableRenderers_void(this.nativeObject.pointer);
		com.earthview.world.graphic.RenderSystemList __returnValue = new com.earthview.world.graphic.RenderSystemList(CreatedWhenConstruct.CWC_NotToCreate, "RenderSystemList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderSystemList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "RenderSystemList");
		}
		return __returnValue;
	}
	native private long getRenderSystemByName_EVString(long pNativeObject, String name);
	/**
	 * 通过指定名称检索渲染系统
	 * @param name 要检索的渲染系统名称
	 */
	public com.earthview.world.graphic.RenderSystem getRenderSystemByName(String name)
	{
		String nameParamValue = name;
		long returnValue = getRenderSystemByName_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderSystem __returnValue = new com.earthview.world.graphic.RenderSystem(CreatedWhenConstruct.CWC_NotToCreate, "CRenderSystem");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderSystem)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderSystem");
		}
		return __returnValue;
	}
	native private void setRenderSystem_CRenderSystem(long pNativeObject, long ref_system);
	/**
	 * 设置当前渲染系统
	 * @param system 渲染系统
	 */
	public void setRenderSystem(com.earthview.world.graphic.RenderSystem ref_system)
	{
		long ref_systemParamValue = (ref_system == null ? 0L : ref_system.nativeObject.pointer);
		setRenderSystem_CRenderSystem(this.nativeObject.pointer, ref_systemParamValue);
	}
	native private long getRenderSystem_void(long pNativeObject);
	/**
	 * 获取当前渲染系统
	 * @param system 渲染系统
	 */
	public com.earthview.world.graphic.RenderSystem getRenderSystem()
	{
		long returnValue = getRenderSystem_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderSystem __returnValue = new com.earthview.world.graphic.RenderSystem(CreatedWhenConstruct.CWC_NotToCreate, "CRenderSystem");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderSystem)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderSystem");
		}
		return __returnValue;
	}
	native private long initialise_ev_bool_EVString_EVString(long pNativeObject, boolean autoCreateWindow, String windowTitle, String customCapabilitiesConfig);
	/**
	 * 初始化渲染系统仅在选择了渲染系统之后调用，用来初始化渲染系统
	 * @param autoCreateWindow 是否自动创建渲染窗体
	 * @param windowTitle 窗体标题
	 * @param customCapabilitiesConfig 自定义的窗体支持的能力列表
	 */
	public com.earthview.world.graphic.RenderWindow initialise(boolean autoCreateWindow, String windowTitle, String customCapabilitiesConfig)
	{
		boolean autoCreateWindowParamValue = autoCreateWindow;
		String windowTitleParamValue = windowTitle;
		String customCapabilitiesConfigParamValue = customCapabilitiesConfig;
		long returnValue = initialise_ev_bool_EVString_EVString(this.nativeObject.pointer, autoCreateWindowParamValue, windowTitleParamValue, customCapabilitiesConfigParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderWindow __returnValue = new com.earthview.world.graphic.RenderWindow(CreatedWhenConstruct.CWC_NotToCreate, "CRenderWindow");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderWindow)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderWindow");
		}
		return __returnValue;
	}
	native private long initialise_ev_bool_EVString(long pNativeObject, boolean autoCreateWindow, String windowTitle);
	public com.earthview.world.graphic.RenderWindow initialise(boolean autoCreateWindow, String windowTitle)
	{
		boolean autoCreateWindowParamValue = autoCreateWindow;
		String windowTitleParamValue = windowTitle;
		long returnValue = initialise_ev_bool_EVString(this.nativeObject.pointer, autoCreateWindowParamValue, windowTitleParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderWindow __returnValue = new com.earthview.world.graphic.RenderWindow(CreatedWhenConstruct.CWC_NotToCreate, "CRenderWindow");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderWindow)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderWindow");
		}
		return __returnValue;
	}
	native private long initialise_ev_bool(long pNativeObject, boolean autoCreateWindow);
	public com.earthview.world.graphic.RenderWindow initialise(boolean autoCreateWindow)
	{
		boolean autoCreateWindowParamValue = autoCreateWindow;
		long returnValue = initialise_ev_bool(this.nativeObject.pointer, autoCreateWindowParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderWindow __returnValue = new com.earthview.world.graphic.RenderWindow(CreatedWhenConstruct.CWC_NotToCreate, "CRenderWindow");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderWindow)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderWindow");
		}
		return __returnValue;
	}
	native private boolean isInitialised_void(long pNativeObject);
	/**
	 * 获取渲染系统是否已经初始化			
	 */
	public boolean isInitialised()
	{
		boolean returnValue = isInitialised_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void useCustomRenderSystemCapabilities_CRenderSystemCapabilities(long pNativeObject, long ref_capabilities);
	/**
	 * 让渲染系统使用自定义的能力如果要调用，请在创建第一个渲染窗体前调用此函数
	 */
	public void useCustomRenderSystemCapabilities(com.earthview.world.graphic.RenderSystemCapabilities ref_capabilities)
	{
		long ref_capabilitiesParamValue = (ref_capabilities == null ? 0L : ref_capabilities.nativeObject.pointer);
		useCustomRenderSystemCapabilities_CRenderSystemCapabilities(this.nativeObject.pointer, ref_capabilitiesParamValue);
	}
	native private boolean getRemoveRenderQueueStructuresOnClear_void(long pNativeObject);
	/**
	 * 获取当渲染对象被清空时，渲染队列本身是否被移除				
	 */
	public boolean getRemoveRenderQueueStructuresOnClear()
	{
		boolean returnValue = getRemoveRenderQueueStructuresOnClear_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRemoveRenderQueueStructuresOnClear_ev_bool(long pNativeObject, boolean r);
	/**
	 * 设置当渲染对象被清空时，渲染队列本身是否被移除				
	 */
	public void setRemoveRenderQueueStructuresOnClear(boolean r)
	{
		boolean rParamValue = r;
		setRemoveRenderQueueStructuresOnClear_ev_bool(this.nativeObject.pointer, rParamValue);
	}
	native private boolean addSceneManagerFactory_CSceneManagerFactory(long pNativeObject, long ref_fact);
	/**
	 * 添加场景管理器工厂				
	 */
	public boolean addSceneManagerFactory(com.earthview.world.graphic.SceneManagerFactory ref_fact)
	{
		long ref_factParamValue = (ref_fact == null ? 0L : ref_fact.nativeObject.pointer);
		boolean returnValue = addSceneManagerFactory_CSceneManagerFactory(this.nativeObject.pointer, ref_factParamValue);
		return returnValue;
	}
	native private boolean removeSceneManagerFactory_CSceneManagerFactory(long pNativeObject, long fact);
	/**
	 * 移除场景管理器工厂				
	 */
	public boolean removeSceneManagerFactory(com.earthview.world.graphic.SceneManagerFactory fact)
	{
		long factParamValue = (fact == null ? 0L : fact.nativeObject.pointer);
		boolean returnValue = removeSceneManagerFactory_CSceneManagerFactory(this.nativeObject.pointer, factParamValue);
		return returnValue;
	}
	native private long getSceneManagerMetaData_EVString(long pNativeObject, String typeName);
	/**
	 * 获取场景管理器元数据信息				
	 */
	public com.earthview.world.graphic.SceneManagerMetaData getSceneManagerMetaData(String typeName)
	{
		String typeNameParamValue = typeName;
		long returnValue = getSceneManagerMetaData_EVString(this.nativeObject.pointer, typeNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManagerMetaData __returnValue = new com.earthview.world.graphic.SceneManagerMetaData(CreatedWhenConstruct.CWC_NotToCreate, "SceneManagerMetaData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManagerMetaData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "SceneManagerMetaData");
		}
		return __returnValue;
	}
	native private long getSceneManagerMetaDataIterator_void(long pNativeObject);
	/**
	 * 获取场景管理器元数据信息的迭代器	
	 */
	public com.earthview.world.graphic.SceneManagerEnumerator.MetaDataIterator getSceneManagerMetaDataIterator()
	{
		long returnValue = getSceneManagerMetaDataIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.SceneManagerEnumerator.MetaDataIterator __returnValue = new com.earthview.world.graphic.SceneManagerEnumerator.MetaDataIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MetaDataIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManagerEnumerator.MetaDataIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MetaDataIterator");
		}
		return __returnValue;
	}
	native private long createSceneManager_EVString_EVString(long pNativeObject, String typeName, String instanceName);
	/// 创建一个指定类型的场景管理实例
	/// 如果没有指定类型的场景管理器工厂，则返回空
	/// </summary>
	/// <param name="typeName">类型名称</param>
	/// <param name="typeMask">类型标识</param>
	/// <param name="instanceName">新实例的名称,默认为CStringUtil::BLANK</param>
	/// <returns>场景管理</returns>
	public com.earthview.world.graphic.SceneManager createSceneManager(String typeName, String instanceName)
	{
		String typeNameParamValue = typeName;
		String instanceNameParamValue = instanceName;
		long returnValue = createSceneManager_EVString_EVString(this.nativeObject.pointer, typeNameParamValue, instanceNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneManager");
		}
		return __returnValue;
	}
	native private long createSceneManager_EVString(long pNativeObject, String typeName);
	public com.earthview.world.graphic.SceneManager createSceneManager(String typeName)
	{
		String typeNameParamValue = typeName;
		long returnValue = createSceneManager_EVString(this.nativeObject.pointer, typeNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneManager");
		}
		return __returnValue;
	}
	native private long createSceneManager_ev_uint16_EVString(long pNativeObject, int typeMask, String instanceName);
	public com.earthview.world.graphic.SceneManager createSceneManager(int typeMask, String instanceName)
	{
		int typeMaskParamValue = typeMask;
		String instanceNameParamValue = instanceName;
		long returnValue = createSceneManager_ev_uint16_EVString(this.nativeObject.pointer, typeMaskParamValue, instanceNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneManager");
		}
		return __returnValue;
	}
	native private long createSceneManager_ev_uint16(long pNativeObject, int typeMask);
	public com.earthview.world.graphic.SceneManager createSceneManager(int typeMask)
	{
		int typeMaskParamValue = typeMask;
		long returnValue = createSceneManager_ev_uint16(this.nativeObject.pointer, typeMaskParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneManager");
		}
		return __returnValue;
	}
	native private boolean renameSceneManager_EVString_EVString(long pNativeObject, String oldName, String newName);
	/**
	 * 重命名场景管理器
	 * @param  
	 */
	public boolean renameSceneManager(String oldName, String newName)
	{
		String oldNameParamValue = oldName;
		String newNameParamValue = newName;
		boolean returnValue = renameSceneManager_EVString_EVString(this.nativeObject.pointer, oldNameParamValue, newNameParamValue);
		return returnValue;
	}
	native private void destroySceneManager_CSceneManager(long pNativeObject, long sm);
	/**
	 * 销毁场景管理器
	 * @param sm 场景管理
	 */
	public void destroySceneManager(com.earthview.world.graphic.SceneManager sm)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		destroySceneManager_CSceneManager(this.nativeObject.pointer, smParamValue);
	}
	native private long getSceneManager_EVString(long pNativeObject, String instanceName);
	/**
	 * 获取一个场景管理实例
	 * @param instanceName 检索实例的名称
	 */
	public com.earthview.world.graphic.SceneManager getSceneManager(String instanceName)
	{
		String instanceNameParamValue = instanceName;
		long returnValue = getSceneManager_EVString(this.nativeObject.pointer, instanceNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneManager");
		}
		return __returnValue;
	}
	native private boolean hasSceneManager_EVString(long pNativeObject, String instanceName);
	/**
	 * 判断是否存在指定名称的场景管理器
	 * @param instanceName 检索实例的名称
	 */
	public boolean hasSceneManager(String instanceName)
	{
		String instanceNameParamValue = instanceName;
		boolean returnValue = hasSceneManager_EVString(this.nativeObject.pointer, instanceNameParamValue);
		return returnValue;
	}
	native private long getSceneManagerIterator_void(long pNativeObject);
	/**
	 * 获取一个遍历所有场景管理器实例的迭代器
	 * @param  
	 */
	public com.earthview.world.graphic.SceneManagerEnumerator.SceneManagerIterator getSceneManagerIterator()
	{
		long returnValue = getSceneManagerIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.SceneManagerEnumerator.SceneManagerIterator __returnValue = new com.earthview.world.graphic.SceneManagerEnumerator.SceneManagerIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "SceneManagerIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManagerEnumerator.SceneManagerIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "SceneManagerIterator");
		}
		return __returnValue;
	}
	native private long getTextureManager_void(long pNativeObject);
	/**
	 * 获取当前的纹理管理器与CTextureManager::getSingletonPtr功能类似当未设置当前渲染系统时，此函数返回空;
	 * @param  
	 */
	public com.earthview.world.graphic.TextureManager getTextureManager()
	{
		long returnValue = getTextureManager_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TextureManager __returnValue = new com.earthview.world.graphic.TextureManager(CreatedWhenConstruct.CWC_NotToCreate, "CTextureManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TextureManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextureManager");
		}
		return __returnValue;
	}
	native private long getMeshManager_void(long pNativeObject);
	/**
	 * 获取当前的模型管理器与CMeshManager::getSingletonPtr功能类似当未设置当前渲染系统时，此函数返回空;
	 * @param  
	 */
	public com.earthview.world.graphic.MeshManager getMeshManager()
	{
		long returnValue = getMeshManager_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MeshManager __returnValue = new com.earthview.world.graphic.MeshManager(CreatedWhenConstruct.CWC_NotToCreate, "CMeshManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshManager");
		}
		return __returnValue;
	}
	native private String getErrorDescription_ev_int32(long pNativeObject, int errorNumber);
	/**
	 * 通过错误码返回错误描述信息				
	 * @param  
	 */
	public String getErrorDescription(int errorNumber)
	{
		int errorNumberParamValue = errorNumber;
		String returnValue = getErrorDescription_ev_int32(this.nativeObject.pointer, errorNumberParamValue);
		return returnValue;
	}
	native private void addFrameListener_CFrameListener(long pNativeObject, long ref_newListener);
	/**
	 * 添加帧监听者				
	 * @param  
	 */
	public void addFrameListener(com.earthview.world.graphic.FrameListener ref_newListener)
	{
		long ref_newListenerParamValue = (ref_newListener == null ? 0L : ref_newListener.nativeObject.pointer);
		addFrameListener_CFrameListener(this.nativeObject.pointer, ref_newListenerParamValue);
	}
	native private void removeFrameListener_CFrameListener(long pNativeObject, long oldListener);
	/**
	 * 移除帧监听者				
	 * @param  
	 */
	public void removeFrameListener(com.earthview.world.graphic.FrameListener oldListener)
	{
		long oldListenerParamValue = (oldListener == null ? 0L : oldListener.nativeObject.pointer);
		removeFrameListener_CFrameListener(this.nativeObject.pointer, oldListenerParamValue);
	}
	native private void queueEndRendering_void(long pNativeObject);
	/**
	 * 停止渲染				
	 * @param  
	 */
	public void queueEndRendering()
	{
		queueEndRendering_void(this.nativeObject.pointer);
	}
	native private void startRendering_void(long pNativeObject);
	/**
	 * 开始渲染的循环				
	 * @param  
	 */
	public void startRendering()
	{
		startRendering_void(this.nativeObject.pointer);
	}
	native private boolean renderOneFrame_void(long pNativeObject);
	/**
	 * 渲染一帧				
	 * @param  
	 */
	public boolean renderOneFrame()
	{
		boolean returnValue = renderOneFrame_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean renderOneFrame_Real(long pNativeObject, double timeSinceLastFrame);
	public boolean renderOneFrame(double timeSinceLastFrame)
	{
		double timeSinceLastFrameParamValue = timeSinceLastFrame;
		boolean returnValue = renderOneFrame_Real(this.nativeObject.pointer, timeSinceLastFrameParamValue);
		return returnValue;
	}
	native private void shutdown_void(long pNativeObject);
	/**
	 * 关闭				
	 * @param  
	 */
	public void shutdown()
	{
		shutdown_void(this.nativeObject.pointer);
	}
	native private void addResourceLocation_EVString_EVString_EVString_ev_bool(long pNativeObject, String name, String locType, String groupName, boolean recursive);
	/**
	 * 添加资源文件定位参照CResourceGroupManager的addResourceLocation方法
	 */
	public void addResourceLocation(String name, String locType, String groupName, boolean recursive)
	{
		String nameParamValue = name;
		String locTypeParamValue = locType;
		String groupNameParamValue = groupName;
		boolean recursiveParamValue = recursive;
		addResourceLocation_EVString_EVString_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, locTypeParamValue, groupNameParamValue, recursiveParamValue);
	}
	native private void addResourceLocation_EVString_EVString_EVString(long pNativeObject, String name, String locType, String groupName);
	public void addResourceLocation(String name, String locType, String groupName)
	{
		String nameParamValue = name;
		String locTypeParamValue = locType;
		String groupNameParamValue = groupName;
		addResourceLocation_EVString_EVString_EVString(this.nativeObject.pointer, nameParamValue, locTypeParamValue, groupNameParamValue);
	}
	native private void addResourceLocation_EVString_EVString(long pNativeObject, String name, String locType);
	public void addResourceLocation(String name, String locType)
	{
		String nameParamValue = name;
		String locTypeParamValue = locType;
		addResourceLocation_EVString_EVString(this.nativeObject.pointer, nameParamValue, locTypeParamValue);
	}
	native private void removeResourceLocation_EVString_EVString(long pNativeObject, String name, String groupName);
	/**
	 * 移除资源文件定位参照CResourceGroupManager的addResourceLocation方法
	 */
	public void removeResourceLocation(String name, String groupName)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		removeResourceLocation_EVString_EVString(this.nativeObject.pointer, nameParamValue, groupNameParamValue);
	}
	native private void removeResourceLocation_EVString(long pNativeObject, String name);
	public void removeResourceLocation(String name)
	{
		String nameParamValue = name;
		removeResourceLocation_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private long createFileStream_EVString_EVString_ev_bool_EVString(long pNativeObject, String filename, String groupName, boolean overwrite, String locationPattern);
	/**
	 * 创建可写资源文件流				
	 */
	public com.earthview.world.core.DataStreamPtr createFileStream(String filename, String groupName, boolean overwrite, String locationPattern)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		boolean overwriteParamValue = overwrite;
		String locationPatternParamValue = locationPattern;
		long returnValue = createFileStream_EVString_EVString_ev_bool_EVString(this.nativeObject.pointer, filenameParamValue, groupNameParamValue, overwriteParamValue, locationPatternParamValue);
		com.earthview.world.core.DataStreamPtr __returnValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		}
		return __returnValue;
	}
	native private long createFileStream_EVString_EVString_ev_bool(long pNativeObject, String filename, String groupName, boolean overwrite);
	public com.earthview.world.core.DataStreamPtr createFileStream(String filename, String groupName, boolean overwrite)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		boolean overwriteParamValue = overwrite;
		long returnValue = createFileStream_EVString_EVString_ev_bool(this.nativeObject.pointer, filenameParamValue, groupNameParamValue, overwriteParamValue);
		com.earthview.world.core.DataStreamPtr __returnValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		}
		return __returnValue;
	}
	native private long createFileStream_EVString_EVString(long pNativeObject, String filename, String groupName);
	public com.earthview.world.core.DataStreamPtr createFileStream(String filename, String groupName)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		long returnValue = createFileStream_EVString_EVString(this.nativeObject.pointer, filenameParamValue, groupNameParamValue);
		com.earthview.world.core.DataStreamPtr __returnValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		}
		return __returnValue;
	}
	native private long createFileStream_EVString(long pNativeObject, String filename);
	public com.earthview.world.core.DataStreamPtr createFileStream(String filename)
	{
		String filenameParamValue = filename;
		long returnValue = createFileStream_EVString(this.nativeObject.pointer, filenameParamValue);
		com.earthview.world.core.DataStreamPtr __returnValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		}
		return __returnValue;
	}
	native private long openFileStream_EVString_EVString_EVString(long pNativeObject, String filename, String groupName, String locationPattern);
	/**
	 * 打开资源文件流				
	 */
	public com.earthview.world.core.DataStreamPtr openFileStream(String filename, String groupName, String locationPattern)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		String locationPatternParamValue = locationPattern;
		long returnValue = openFileStream_EVString_EVString_EVString(this.nativeObject.pointer, filenameParamValue, groupNameParamValue, locationPatternParamValue);
		com.earthview.world.core.DataStreamPtr __returnValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		}
		return __returnValue;
	}
	native private long openFileStream_EVString_EVString(long pNativeObject, String filename, String groupName);
	public com.earthview.world.core.DataStreamPtr openFileStream(String filename, String groupName)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		long returnValue = openFileStream_EVString_EVString(this.nativeObject.pointer, filenameParamValue, groupNameParamValue);
		com.earthview.world.core.DataStreamPtr __returnValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		}
		return __returnValue;
	}
	native private long openFileStream_EVString(long pNativeObject, String filename);
	public com.earthview.world.core.DataStreamPtr openFileStream(String filename)
	{
		String filenameParamValue = filename;
		long returnValue = openFileStream_EVString(this.nativeObject.pointer, filenameParamValue);
		com.earthview.world.core.DataStreamPtr __returnValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		}
		return __returnValue;
	}
	native private void convertColourValue_CColourValue_ev_uint32(long pNativeObject, long colour, long pDest);
	/**
	 * 使用当前渲染系统将ColourValue颜色值转换到指定数组中				
	 */
	public void convertColourValue(com.earthview.world.graphic.ColourValue colour, UIntegerPointer pDest)
	{
		long colourParamValue = colour.nativeObject.pointer;
		long pDestParamValue = (pDest == null ? 0L : pDest.nativeObject.pointer);
		convertColourValue_CColourValue_ev_uint32(this.nativeObject.pointer, colourParamValue, pDestParamValue);
	}
	native private void toColourValue_ev_uint32_CColourValue(long pNativeObject, long srcColor, long colour);
	/**
	 * 使用当前渲染系统将32-bit颜色转换成ColourValue颜色值				
	 */
	public void toColourValue(long srcColor, com.earthview.world.graphic.ColourValue colour)
	{
		long srcColorParamValue = srcColor;
		long colourParamValue = colour.nativeObject.pointer;
		toColourValue_ev_uint32_CColourValue(this.nativeObject.pointer, srcColorParamValue, colourParamValue);
	}
	native private long getAutoCreatedWindow_void(long pNativeObject);
	/**
	 * 获取自动创建的渲染窗体			
	 */
	public com.earthview.world.graphic.RenderWindow getAutoCreatedWindow()
	{
		long returnValue = getAutoCreatedWindow_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderWindow __returnValue = new com.earthview.world.graphic.RenderWindow(CreatedWhenConstruct.CWC_NotToCreate, "CRenderWindow");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderWindow)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderWindow");
		}
		return __returnValue;
	}
	native private long createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList(long pNativeObject, String name, long width, long height, boolean fullScreen, long miscParams);
	/**
	 * 创建一个新的渲染窗体			
	 */
	public com.earthview.world.graphic.RenderWindow createRenderWindow(String name, long width, long height, boolean fullScreen, com.earthview.world.core.CommonStringPairList miscParams)
	{
		String nameParamValue = name;
		long widthParamValue = width;
		long heightParamValue = height;
		boolean fullScreenParamValue = fullScreen;
		long miscParamsParamValue = (miscParams == null ? 0L : miscParams.nativeObject.pointer);
		long returnValue = createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList(this.nativeObject.pointer, nameParamValue, widthParamValue, heightParamValue, fullScreenParamValue, miscParamsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderWindow __returnValue = new com.earthview.world.graphic.RenderWindow(CreatedWhenConstruct.CWC_NotToCreate, "CRenderWindow");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderWindow)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderWindow");
		}
		return __returnValue;
	}
	native private long createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool(long pNativeObject, String name, long width, long height, boolean fullScreen);
	public com.earthview.world.graphic.RenderWindow createRenderWindow(String name, long width, long height, boolean fullScreen)
	{
		String nameParamValue = name;
		long widthParamValue = width;
		long heightParamValue = height;
		boolean fullScreenParamValue = fullScreen;
		long returnValue = createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool(this.nativeObject.pointer, nameParamValue, widthParamValue, heightParamValue, fullScreenParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderWindow __returnValue = new com.earthview.world.graphic.RenderWindow(CreatedWhenConstruct.CWC_NotToCreate, "CRenderWindow");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderWindow)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderWindow");
		}
		return __returnValue;
	}
	native private boolean createRenderWindows_RenderWindowDescriptionList_RenderWindowList(long pNativeObject, long renderWindowDescriptions, long createdWindows);
	/**
	 * 创建多个新的渲染窗体			
	 */
	public boolean createRenderWindows(com.earthview.world.graphic.RenderWindowDescriptionList renderWindowDescriptions, com.earthview.world.graphic.RenderWindowList createdWindows)
	{
		long renderWindowDescriptionsParamValue = renderWindowDescriptions.nativeObject.pointer;
		long createdWindowsParamValue = createdWindows.nativeObject.pointer;
		boolean returnValue = createRenderWindows_RenderWindowDescriptionList_RenderWindowList(this.nativeObject.pointer, renderWindowDescriptionsParamValue, createdWindowsParamValue);
		return returnValue;
	}
	native private long detachRenderTarget_CRenderTarget(long pNativeObject, long pWin);
	/**
	 * 从当前渲染窗体中分离渲染目标			
	 * @return 被分离的渲染目标
	 */
	public com.earthview.world.graphic.RenderTarget detachRenderTarget(com.earthview.world.graphic.RenderTarget pWin)
	{
		long pWinParamValue = (pWin == null ? 0L : pWin.nativeObject.pointer);
		long returnValue = detachRenderTarget_CRenderTarget(this.nativeObject.pointer, pWinParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderTarget __returnValue = new com.earthview.world.graphic.RenderTarget(CreatedWhenConstruct.CWC_NotToCreate, "CRenderTarget");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderTarget)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderTarget");
		}
		return __returnValue;
	}
	native private long detachRenderTarget_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.RenderTarget detachRenderTarget(String name)
	{
		String nameParamValue = name;
		long returnValue = detachRenderTarget_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderTarget __returnValue = new com.earthview.world.graphic.RenderTarget(CreatedWhenConstruct.CWC_NotToCreate, "CRenderTarget");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderTarget)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderTarget");
		}
		return __returnValue;
	}
	native private void destroyRenderTarget_CRenderTarget(long pNativeObject, long target);
	/**
	 * 销毁给定的渲染目标			
	 */
	public void destroyRenderTarget(com.earthview.world.graphic.RenderTarget target)
	{
		long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
		destroyRenderTarget_CRenderTarget(this.nativeObject.pointer, targetParamValue);
	}
	native private void destroyRenderTarget_EVString(long pNativeObject, String name);
	public void destroyRenderTarget(String name)
	{
		String nameParamValue = name;
		destroyRenderTarget_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private long getRenderTarget_EVString(long pNativeObject, String name);
	/**
	 * 通过名称获取渲染目标
	 * @param name 名称
	 * @return 渲染目标
	 */
	public com.earthview.world.graphic.RenderTarget getRenderTarget(String name)
	{
		String nameParamValue = name;
		long returnValue = getRenderTarget_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderTarget __returnValue = new com.earthview.world.graphic.RenderTarget(CreatedWhenConstruct.CWC_NotToCreate, "CRenderTarget");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderTarget)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderTarget");
		}
		return __returnValue;
	}
	native private void loadPlugin_EVString(long pNativeObject, String pluginName);
	/**
	 * 加载插件(加载动态库)插件应该事先注册在插件配置文件中中
	 * @param pluginName 插件名称
	 */
	public void loadPlugin(String pluginName)
	{
		String pluginNameParamValue = pluginName;
		loadPlugin_EVString(this.nativeObject.pointer, pluginNameParamValue);
	}
	native private void unloadPlugin_EVString(long pNativeObject, String pluginName);
	/**
	 * 卸载插件(卸载动态库)
	 * @param pluginName 插件名称
	 */
	public void unloadPlugin(String pluginName)
	{
		String pluginNameParamValue = pluginName;
		unloadPlugin_EVString(this.nativeObject.pointer, pluginNameParamValue);
	}
	native private void installPlugin_CPlugin(long pNativeObject, long ref_plugin);
	/**
	 * 安装插件(执行插件的初始化)				
	 * @param plugin 插件
	 */
	public void installPlugin(com.earthview.world.core.Plugin ref_plugin)
	{
		long ref_pluginParamValue = (ref_plugin == null ? 0L : ref_plugin.nativeObject.pointer);
		installPlugin_CPlugin(this.nativeObject.pointer, ref_pluginParamValue);
	}
	native private void uninstallPlugin_CPlugin(long pNativeObject, long plugin);
	/**
	 * 卸载插件(执行插件的反初始化)				
	 * @param plugin 插件
	 */
	public void uninstallPlugin(com.earthview.world.core.Plugin plugin)
	{
		long pluginParamValue = (plugin == null ? 0L : plugin.nativeObject.pointer);
		uninstallPlugin_CPlugin(this.nativeObject.pointer, pluginParamValue);
	}
	native private long getInstalledPlugins_void(long pNativeObject);
	/**
	 * 获取已经安装的插件列表			
	 * @param  
	 */
	public com.earthview.world.graphic.Root.PluginInstanceList getInstalledPlugins()
	{
		long returnValue = getInstalledPlugins_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Root.PluginInstanceList __returnValue = new com.earthview.world.graphic.Root.PluginInstanceList(CreatedWhenConstruct.CWC_NotToCreate, "PluginInstanceList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Root.PluginInstanceList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "PluginInstanceList");
		}
		return __returnValue;
	}
	native private boolean _fireFrameStarted_FrameEvent(long pNativeObject, long evt);
	/**
	 * 向帧监听者通报帧开始事件				
	 * @param  
	 */
	public boolean _fireFrameStarted(com.earthview.world.graphic.FrameEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = _fireFrameStarted_FrameEvent(this.nativeObject.pointer, evtParamValue);
		return returnValue;
	}
	native private boolean _fireFrameStarted_void(long pNativeObject);
	public boolean _fireFrameStarted()
	{
		boolean returnValue = _fireFrameStarted_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean _fireFrameRenderingQueued_FrameEvent(long pNativeObject, long evt);
	/**
	 * 向帧监听者通报帧渲染结束事件(所有视口更新完毕后、交换帧缓冲前)			
	 * @param  
	 */
	public boolean _fireFrameRenderingQueued(com.earthview.world.graphic.FrameEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = _fireFrameRenderingQueued_FrameEvent(this.nativeObject.pointer, evtParamValue);
		return returnValue;
	}
	native private boolean _fireFrameRenderingQueued_void(long pNativeObject);
	public boolean _fireFrameRenderingQueued()
	{
		boolean returnValue = _fireFrameRenderingQueued_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean _fireFrameEnded_FrameEvent(long pNativeObject, long evt);
	/**
	 * 向帧监听者通报帧结束事件				
	 * @param  
	 */
	public boolean _fireFrameEnded(com.earthview.world.graphic.FrameEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = _fireFrameEnded_FrameEvent(this.nativeObject.pointer, evtParamValue);
		return returnValue;
	}
	native private boolean _fireFrameEnded_void(long pNativeObject);
	public boolean _fireFrameEnded()
	{
		boolean returnValue = _fireFrameEnded_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getNextFrameNumber_void(long pNativeObject);
	/**
	 * 获取下一帧的流水号				
	 * @param  
	 */
	public long getNextFrameNumber()
	{
		long returnValue = getNextFrameNumber_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long _getCurrentSceneManager_void(long pNativeObject);
	/**
	 * 获取当前场景管理器(处于当前场景管理器栈顶的实例)
	 * @param  
	 */
	public com.earthview.world.graphic.SceneManager _getCurrentSceneManager()
	{
		long returnValue = _getCurrentSceneManager_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneManager");
		}
		return __returnValue;
	}
	native private void _pushCurrentSceneManager_CSceneManager(long pNativeObject, long ref_sm);
	/**
	 * 向当前场景管理器栈顶压入一个场景管理器实例
	 * @param  
	 */
	public void _pushCurrentSceneManager(com.earthview.world.graphic.SceneManager ref_sm)
	{
		long ref_smParamValue = (ref_sm == null ? 0L : ref_sm.nativeObject.pointer);
		_pushCurrentSceneManager_CSceneManager(this.nativeObject.pointer, ref_smParamValue);
	}
	native private void _popCurrentSceneManager_CSceneManager(long pNativeObject, long sm);
	/**
	 * 从当前场景管理器栈顶取出一个场景管理器实例
	 * @param sm 栈顶实例
	 */
	public void _popCurrentSceneManager(com.earthview.world.graphic.SceneManager sm)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		_popCurrentSceneManager_CSceneManager(this.nativeObject.pointer, smParamValue);
	}
	native private boolean _updateAllRenderTargets_void(long pNativeObject);
	/**
	 * 更新所有渲染目标
	 * @param  
	 */
	public boolean _updateAllRenderTargets()
	{
		boolean returnValue = _updateAllRenderTargets_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean _updateAllRenderTargets_FrameEvent(long pNativeObject, long evt);
	public boolean _updateAllRenderTargets(com.earthview.world.graphic.FrameEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = _updateAllRenderTargets_FrameEvent(this.nativeObject.pointer, evtParamValue);
		return returnValue;
	}
	native private long createRenderQueueInvocationSequence_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.RenderQueueInvocationSequence createRenderQueueInvocationSequence(String name)
	{
		String nameParamValue = name;
		long returnValue = createRenderQueueInvocationSequence_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderQueueInvocationSequence __returnValue = new com.earthview.world.graphic.RenderQueueInvocationSequence(CreatedWhenConstruct.CWC_NotToCreate, "CRenderQueueInvocationSequence");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderQueueInvocationSequence)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderQueueInvocationSequence");
		}
		return __returnValue;
	}
	native private long getRenderQueueInvocationSequence_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.RenderQueueInvocationSequence getRenderQueueInvocationSequence(String name)
	{
		String nameParamValue = name;
		long returnValue = getRenderQueueInvocationSequence_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderQueueInvocationSequence __returnValue = new com.earthview.world.graphic.RenderQueueInvocationSequence(CreatedWhenConstruct.CWC_NotToCreate, "CRenderQueueInvocationSequence");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderQueueInvocationSequence)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderQueueInvocationSequence");
		}
		return __returnValue;
	}
	native private void destroyRenderQueueInvocationSequence_EVString(long pNativeObject, String name);
	public void destroyRenderQueueInvocationSequence(String name)
	{
		String nameParamValue = name;
		destroyRenderQueueInvocationSequence_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void destroyAllRenderQueueInvocationSequences_void(long pNativeObject);
	public void destroyAllRenderQueueInvocationSequences()
	{
		destroyAllRenderQueueInvocationSequences_void(this.nativeObject.pointer);
	}
	native private static long getSingleton_void();
	public static com.earthview.world.graphic.Root getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.Root __returnValue = new com.earthview.world.graphic.Root(CreatedWhenConstruct.CWC_NotToCreate, "CRoot");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Root)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRoot");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.graphic.Root getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Root __returnValue = new com.earthview.world.graphic.Root(CreatedWhenConstruct.CWC_NotToCreate, "CRoot");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Root)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRoot");
		}
		return __returnValue;
	}
	native private static void getLicServer_EVString_ev_uint16(long ip, long port);
	public static void getLicServer(StringPointer ip, UShortPointer port)
	{
		long ipParamValue = ip.nativeObject.pointer;
		long portParamValue = port.nativeObject.pointer;
		getLicServer_EVString_ev_uint16(ipParamValue, portParamValue);
	}
	native private static void setLicServer_EVString_ev_uint16(String ip, int port);
	public static void setLicServer(String ip, int port)
	{
		String ipParamValue = ip;
		int portParamValue = port;
		setLicServer_EVString_ev_uint16(ipParamValue, portParamValue);
	}
	native private static int checkLic_void();
	/**
	 * 检测SDK许可(根据是否处于调试状态，检测运行版或开发版许可)
	 * @param  
	 * @return 许可状态
	 */
	public static com.earthview.world.license.EVLicenseStatusType checkLic()
	{
		int returnValue = checkLic_void();
		return com.earthview.world.license.EVLicenseStatusType.toEnum(returnValue);
	}
	native private static int checkRuntimeLic_void();
	/**
	 * 检测SDK运行版许可
	 * @param  
	 * @return 许可状态
	 */
	public static com.earthview.world.license.EVLicenseStatusType checkRuntimeLic()
	{
		int returnValue = checkRuntimeLic_void();
		return com.earthview.world.license.EVLicenseStatusType.toEnum(returnValue);
	}
	native private static int checkDevelopeLic_void();
	/**
	 * 检测SDK开发版许可
	 * @param  
	 * @return 许可状态
	 */
	public static com.earthview.world.license.EVLicenseStatusType checkDevelopeLic()
	{
		int returnValue = checkDevelopeLic_void();
		return com.earthview.world.license.EVLicenseStatusType.toEnum(returnValue);
	}
	native private static int checkDesktopLic_void();
	/**
	 * 检测桌面版许可
	 * @param  
	 * @return 许可状态
	 */
	public static com.earthview.world.license.EVLicenseStatusType checkDesktopLic()
	{
		int returnValue = checkDesktopLic_void();
		return com.earthview.world.license.EVLicenseStatusType.toEnum(returnValue);
	}
	native private void clearEventTimes_void(long pNativeObject);
	public void clearEventTimes()
	{
		clearEventTimes_void(this.nativeObject.pointer);
	}
	native private void setFrameSmoothingPeriod_Real(long pNativeObject, double period);
	public void setFrameSmoothingPeriod(double period)
	{
		double periodParamValue = period;
		setFrameSmoothingPeriod_Real(this.nativeObject.pointer, periodParamValue);
	}
	native private double getFrameSmoothingPeriod_void(long pNativeObject);
	public double getFrameSmoothingPeriod()
	{
		double returnValue = getFrameSmoothingPeriod_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void addMovableObjectFactory_CMovableObjectFactory_ev_bool(long pNativeObject, long ref_fact, boolean overrideExisting);
	public void addMovableObjectFactory(com.earthview.world.graphic.MovableObjectFactory ref_fact, boolean overrideExisting)
	{
		long ref_factParamValue = (ref_fact == null ? 0L : ref_fact.nativeObject.pointer);
		boolean overrideExistingParamValue = overrideExisting;
		addMovableObjectFactory_CMovableObjectFactory_ev_bool(this.nativeObject.pointer, ref_factParamValue, overrideExistingParamValue);
	}
	native private void addMovableObjectFactory_CMovableObjectFactory(long pNativeObject, long ref_fact);
	///void addMovableObjectFactory(EarthView::World::Graphic::CMovableObjectFactory* fact, ev_bool overrideExisting = false);
	public void addMovableObjectFactory(com.earthview.world.graphic.MovableObjectFactory ref_fact)
	{
		long ref_factParamValue = (ref_fact == null ? 0L : ref_fact.nativeObject.pointer);
		addMovableObjectFactory_CMovableObjectFactory(this.nativeObject.pointer, ref_factParamValue);
	}
	native private void removeMovableObjectFactory_CMovableObjectFactory(long pNativeObject, long fact);
	public void removeMovableObjectFactory(com.earthview.world.graphic.MovableObjectFactory fact)
	{
		long factParamValue = (fact == null ? 0L : fact.nativeObject.pointer);
		removeMovableObjectFactory_CMovableObjectFactory(this.nativeObject.pointer, factParamValue);
	}
	native private boolean hasMovableObjectFactory_EVString(long pNativeObject, String typeName);
	//// Checks whether a factory is registered for a given CMovableObject type
	public boolean hasMovableObjectFactory(String typeName)
	{
		String typeNameParamValue = typeName;
		boolean returnValue = hasMovableObjectFactory_EVString(this.nativeObject.pointer, typeNameParamValue);
		return returnValue;
	}
	native private long getMovableObjectFactory_EVString(long pNativeObject, String typeName);
	//// Get a EarthView::World::Graphic::CMovableObjectFactory for the given type
	public com.earthview.world.graphic.MovableObjectFactory getMovableObjectFactory(String typeName)
	{
		String typeNameParamValue = typeName;
		long returnValue = getMovableObjectFactory_EVString(this.nativeObject.pointer, typeNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObjectFactory __returnValue = new com.earthview.world.graphic.MovableObjectFactory(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObjectFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObjectFactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObjectFactory");
		}
		return __returnValue;
	}
	native private long _allocateNextMovableObjectTypeFlag_void(long pNativeObject);
	public long _allocateNextMovableObjectTypeFlag()
	{
		long returnValue = _allocateNextMovableObjectTypeFlag_void(this.nativeObject.pointer);
		return returnValue;
	}
	/// <summary>
	/// 移动对象工厂类迭代器
	///typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CRoot::MovableObjectFactoryMap> EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator;
	/// </summary>
	public static class MovableObjectFactoryPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRoot::MovableObjectFactoryPair", new MovableObjectFactoryPairClassFactory());
		}

		public MovableObjectFactoryPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("MovableObjectFactoryPair", null);
		}

		native private String get_first_void(long pNativeObject);
		public String get_first()
		{
			String jniValue = get_first_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_first_EVString (long pNativeObject, String value);
		public void set_first(String first)
		{
			String firstParamValue = first;
			
			set_first_EVString(this.nativeObject.pointer, firstParamValue);
		}
		
		native private long get_second_void(long pNativeObject);
		public com.earthview.world.graphic.MovableObjectFactory get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.MovableObjectFactory __returnValue = new com.earthview.world.graphic.MovableObjectFactory(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObjectFactory");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MovableObjectFactory)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMovableObjectFactory");
			}
			return __returnValue;
		}
		
		native private void set_second_CMovableObjectFactory (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.MovableObjectFactory second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_CMovableObjectFactory(this.nativeObject.pointer, secondParamValue);
		}
		
		public MovableObjectFactoryPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public MovableObjectFactoryPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static MovableObjectFactoryPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			MovableObjectFactoryPair obj = null;
 			if(baseObj instanceof MovableObjectFactoryPair)
			{
				obj = (MovableObjectFactoryPair)baseObj;
			} else {
				obj = new MovableObjectFactoryPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "MovableObjectFactoryPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class MovableObjectFactoryPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			MovableObjectFactoryPair emptyInstance = new MovableObjectFactoryPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class MovableObjectFactoryIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator", new MovableObjectFactoryIteratorClassFactory());
		}

		public MovableObjectFactoryIterator(com.earthview.world.graphic.Root.MovableObjectFactoryMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("MovableObjectFactoryIterator", list);
		}

		public MovableObjectFactoryIterator(com.earthview.world.graphic.Root.MovableObjectFactoryIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("MovableObjectFactoryIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private int nextKey_void(long pNativeObject);
		public int nextKey()
		{
			int returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		public com.earthview.world.graphic.MovableObjectFactory nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.MovableObjectFactory __returnValue = new com.earthview.world.graphic.MovableObjectFactory(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObjectFactory");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MovableObjectFactory)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMovableObjectFactory");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.MovableObjectFactory> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.MovableObjectFactory> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.MovableObjectFactory>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.MovableObjectFactory next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.MovableObjectFactory __returnValue = new com.earthview.world.graphic.MovableObjectFactory(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObjectFactory");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MovableObjectFactory)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMovableObjectFactory");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.Root.MovableObjectFactoryPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Root.MovableObjectFactoryPair __returnValue = new com.earthview.world.graphic.Root.MovableObjectFactoryPair(CreatedWhenConstruct.CWC_NotToCreate, "MovableObjectFactoryPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Root.MovableObjectFactoryPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "MovableObjectFactoryPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.Root.MovableObjectFactoryPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Root.MovableObjectFactoryPair __returnValue = new com.earthview.world.graphic.Root.MovableObjectFactoryPair(CreatedWhenConstruct.CWC_NotToCreate, "MovableObjectFactoryPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Root.MovableObjectFactoryPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "MovableObjectFactoryPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.Root.MovableObjectFactoryPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Root.MovableObjectFactoryPair __returnValue = new com.earthview.world.graphic.Root.MovableObjectFactoryPair(CreatedWhenConstruct.CWC_NotToCreate, "MovableObjectFactoryPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Root.MovableObjectFactoryPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "MovableObjectFactoryPair");
			}
			return __returnValue;
		}
		public MovableObjectFactoryIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public MovableObjectFactoryIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static MovableObjectFactoryIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			MovableObjectFactoryIterator obj = null;
 			if(baseObj instanceof MovableObjectFactoryIterator)
			{
				obj = (MovableObjectFactoryIterator)baseObj;
			} else {
				obj = new MovableObjectFactoryIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "MovableObjectFactoryIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class MovableObjectFactoryIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			MovableObjectFactoryIterator emptyInstance = new MovableObjectFactoryIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getMovableObjectFactoryIterator_void(long pNativeObject);
	/**
	 * 获取一个迭代器遍历当前注册的所有可移动对象工厂类实例
	 * @param  
	 */
	public com.earthview.world.graphic.Root.MovableObjectFactoryIterator getMovableObjectFactoryIterator()
	{
		long returnValue = getMovableObjectFactoryIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Root.MovableObjectFactoryIterator __returnValue = new com.earthview.world.graphic.Root.MovableObjectFactoryIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MovableObjectFactoryIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Root.MovableObjectFactoryIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MovableObjectFactoryIterator");
		}
		return __returnValue;
	}
	native private long getDisplayMonitorCount_void(long pNativeObject);
	/**
	 * 获取监视器数量
	 * @param  
	 */
	public long getDisplayMonitorCount()
	{
		long returnValue = getDisplayMonitorCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getWorkQueue_void(long pNativeObject);
	/**
	 * 获取后台工作队列
	 * @param  
	 */
	public com.earthview.world.core.WorkQueue getWorkQueue()
	{
		long returnValue = getWorkQueue_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.WorkQueue __returnValue = new com.earthview.world.core.WorkQueue(CreatedWhenConstruct.CWC_NotToCreate, "CWorkQueue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.WorkQueue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWorkQueue");
		}
		return __returnValue;
	}
	native private void setWorkQueue_CWorkQueue_bool(long pNativeObject, long ref_queue, boolean forceStart);
	/**
	 * 设置后台工作队列
	 * @param ref_queue 
	 * @param forceStart 是否强制启动工作队列
	 */
	public void setWorkQueue(com.earthview.world.core.WorkQueue ref_queue, boolean forceStart)
	{
		long ref_queueParamValue = (ref_queue == null ? 0L : ref_queue.nativeObject.pointer);
		boolean forceStartParamValue = forceStart;
		setWorkQueue_CWorkQueue_bool(this.nativeObject.pointer, ref_queueParamValue, forceStartParamValue);
	}
	native private void setWorkQueue_CWorkQueue(long pNativeObject, long ref_queue);
	public void setWorkQueue(com.earthview.world.core.WorkQueue ref_queue)
	{
		long ref_queueParamValue = (ref_queue == null ? 0L : ref_queue.nativeObject.pointer);
		setWorkQueue_CWorkQueue(this.nativeObject.pointer, ref_queueParamValue);
	}
	native private void setBlendIndicesGpuRedundant_ev_bool(long pNativeObject, boolean redundant);
	///zxt updatefor v1.8
	public void setBlendIndicesGpuRedundant(boolean redundant)
	{
		boolean redundantParamValue = redundant;
		setBlendIndicesGpuRedundant_ev_bool(this.nativeObject.pointer, redundantParamValue);
	}
	native private boolean isBlendIndicesGpuRedundant_void(long pNativeObject);
	public boolean isBlendIndicesGpuRedundant()
	{
		boolean returnValue = isBlendIndicesGpuRedundant_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBlendWeightsGpuRedundantev__bool(long pNativeObject, boolean redundant);
	public void setBlendWeightsGpuRedundantev_(boolean redundant)
	{
		boolean redundantParamValue = redundant;
		setBlendWeightsGpuRedundantev__bool(this.nativeObject.pointer, redundantParamValue);
	}
	native private boolean isBlendWeightsGpuRedundant_void(long pNativeObject);
	public boolean isBlendWeightsGpuRedundant()
	{
		boolean returnValue = isBlendWeightsGpuRedundant_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDefaultMinPixelSize_Real(long pNativeObject, double pixelSize);
	public void setDefaultMinPixelSize(double pixelSize)
	{
		double pixelSizeParamValue = pixelSize;
		setDefaultMinPixelSize_Real(this.nativeObject.pointer, pixelSizeParamValue);
	}
	native private double getDefaultMinPixelSize_void(long pNativeObject);
	public double getDefaultMinPixelSize()
	{
		double returnValue = getDefaultMinPixelSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	public Root(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Root(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Root fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Root obj = null;
 		if(baseObj instanceof Root)
		{
			obj = (Root)baseObj;
		} else {
			obj = new Root(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRoot");
			obj.increaseCast();
		}

		return obj;
	}
}
