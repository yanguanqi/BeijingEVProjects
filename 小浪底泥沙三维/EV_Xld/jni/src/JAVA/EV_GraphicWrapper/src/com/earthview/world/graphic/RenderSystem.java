package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 定义了3D应用程序接口的功能性
 */
public class RenderSystem extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderSystem", new RenderSystemClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCRenderSystemProxy", new RenderSystemClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public RenderSystem() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCRenderSystemProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.RenderSystem".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 返回渲染系统的名字
	 * @param  
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

	protected  long getConfigOptions_void_callback()
	{
		com.earthview.world.graphic.ConfigOptionMap returnValue = getConfigOptions();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getConfigOptions_void(long pNativeObject);
	/**
	 * 返回配置项
	 * @param  
	 */
	public com.earthview.world.graphic.ConfigOptionMap getConfigOptions()
	{
		long returnValue = getConfigOptions_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ConfigOptionMap __returnValue = new com.earthview.world.graphic.ConfigOptionMap(CreatedWhenConstruct.CWC_NotToCreate, "ConfigOptionMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ConfigOptionMap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ConfigOptionMap");
		}
		return __returnValue;
	}
	native private long getConfigOptions_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ConfigOptionMap getConfigOptions_NoVirtual()
	{
		long returnValue = getConfigOptions_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.ConfigOptionMap __returnValue = new com.earthview.world.graphic.ConfigOptionMap(CreatedWhenConstruct.CWC_NotToCreate, "ConfigOptionMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ConfigOptionMap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ConfigOptionMap");
		}
		return __returnValue;
	}

	protected  void setConfigOption_EVString_EVString_callback(String name, String value)
	{
		String nameParamValue = name;
		String valueParamValue = value;
		setConfigOption(nameParamValue, valueParamValue);
	}

	native private void setConfigOption_EVString_EVString(long pNativeObject, String name, String value);
	/**
	 * 设置配置项
	 * @param name 改变选项的名字
	 * @param value 设置选项的值
	 */
	public void setConfigOption(String name, String value)
	{
		String nameParamValue = name;
		String valueParamValue = value;
		setConfigOption_EVString_EVString(this.nativeObject.pointer, nameParamValue, valueParamValue);
	}
	native private void setConfigOption_EVString_EVString_NoVirtual(long pNativeObject, String name, String value);
	protected void setConfigOption_NoVirtual(String name, String value)
	{
		String nameParamValue = name;
		String valueParamValue = value;
		setConfigOption_EVString_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, valueParamValue);
	}

	protected  long createHardwareOcclusionQuery_void_callback()
	{
		com.earthview.world.graphic.HardwareOcclusionQuery returnValue = createHardwareOcclusionQuery();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createHardwareOcclusionQuery_void(long pNativeObject);
	/**
	 * 创建一个硬件阻塞查询对象
	 * @param  
	 */
	public com.earthview.world.graphic.HardwareOcclusionQuery createHardwareOcclusionQuery()
	{
		long returnValue = createHardwareOcclusionQuery_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.HardwareOcclusionQuery __returnValue = new com.earthview.world.graphic.HardwareOcclusionQuery(CreatedWhenConstruct.CWC_NotToCreate, "CHardwareOcclusionQuery");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareOcclusionQuery)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CHardwareOcclusionQuery");
		}
		return __returnValue;
	}
	native private long createHardwareOcclusionQuery_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.HardwareOcclusionQuery createHardwareOcclusionQuery_NoVirtual()
	{
		long returnValue = createHardwareOcclusionQuery_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.HardwareOcclusionQuery __returnValue = new com.earthview.world.graphic.HardwareOcclusionQuery(CreatedWhenConstruct.CWC_NotToCreate, "CHardwareOcclusionQuery");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareOcclusionQuery)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CHardwareOcclusionQuery");
		}
		return __returnValue;
	}

	protected  void destroyHardwareOcclusionQuery_CHardwareOcclusionQuery_callback(long hq)
	{
		com.earthview.world.graphic.HardwareOcclusionQuery hqParamValue = (hq == 0L ? null : new com.earthview.world.graphic.HardwareOcclusionQuery(CreatedWhenConstruct.CWC_NotToCreate));
		if(hqParamValue != null)
		{
		hqParamValue.setDelegate(true);
		hqParamValue.setInstancePointer(new InstancePointer(hq));
		IClassFactory hqParamValueClassFactory = GlobalClassFactoryMap.get(hqParamValue.getCppInstanceTypeName());
		if (hqParamValueClassFactory != null)
		{
			hqParamValue.setDelegate(true);
			hqParamValue = (com.earthview.world.graphic.HardwareOcclusionQuery)hqParamValueClassFactory.create();
			hqParamValue.setDelegate(true);
			hqParamValue.setInstancePointer(new InstancePointer(hq));
		}
		}
		destroyHardwareOcclusionQuery(hqParamValue);
	}

	native private void destroyHardwareOcclusionQuery_CHardwareOcclusionQuery(long pNativeObject, long hq);
	/**
	 * 销毁硬件阻塞查询对象
	 * @param hp 
	 */
	public void destroyHardwareOcclusionQuery(com.earthview.world.graphic.HardwareOcclusionQuery hq)
	{
		long hqParamValue = (hq == null ? 0L : hq.nativeObject.pointer);
		destroyHardwareOcclusionQuery_CHardwareOcclusionQuery(this.nativeObject.pointer, hqParamValue);
	}
	native private void destroyHardwareOcclusionQuery_CHardwareOcclusionQuery_NoVirtual(long pNativeObject, long hq);
	protected void destroyHardwareOcclusionQuery_NoVirtual(com.earthview.world.graphic.HardwareOcclusionQuery hq)
	{
		long hqParamValue = (hq == null ? 0L : hq.nativeObject.pointer);
		destroyHardwareOcclusionQuery_CHardwareOcclusionQuery_NoVirtual(this.nativeObject.pointer, hqParamValue);
	}

	protected  String validateConfigOptions_void_callback()
	{
		String returnValue = validateConfigOptions();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String validateConfigOptions_void(long pNativeObject);
	/**
	 * 使配置项生效
	 * @param  
	 */
	public String validateConfigOptions()
	{
		String returnValue = validateConfigOptions_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String validateConfigOptions_void_NoVirtual(long pNativeObject);
	protected String validateConfigOptions_NoVirtual()
	{
		String returnValue = validateConfigOptions_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long _initialise_ev_bool_EVString_callback(boolean autoCreateWindow, String windowTitle)
	{
		boolean autoCreateWindowParamValue = autoCreateWindow;
		String windowTitleParamValue = windowTitle;
		com.earthview.world.graphic.RenderWindow returnValue = _initialise(autoCreateWindowParamValue, windowTitleParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _initialise_ev_bool_EVString(long pNativeObject, boolean autoCreateWindow, String windowTitle);
	/**
	 * 使用配置项进行初始化
	 * @param autoCreateWindow 
	 * @param windowTitle  
	 * @return 如果需要自动创建一个渲染窗体，否则null
	 */
	public com.earthview.world.graphic.RenderWindow _initialise(boolean autoCreateWindow, String windowTitle)
	{
		boolean autoCreateWindowParamValue = autoCreateWindow;
		String windowTitleParamValue = windowTitle;
		long returnValue = _initialise_ev_bool_EVString(this.nativeObject.pointer, autoCreateWindowParamValue, windowTitleParamValue);
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
	native private long _initialise_ev_bool_EVString_NoVirtual(long pNativeObject, boolean autoCreateWindow, String windowTitle);
	protected com.earthview.world.graphic.RenderWindow _initialise_NoVirtual(boolean autoCreateWindow, String windowTitle)
	{
		boolean autoCreateWindowParamValue = autoCreateWindow;
		String windowTitleParamValue = windowTitle;
		long returnValue = _initialise_ev_bool_EVString_NoVirtual(this.nativeObject.pointer, autoCreateWindowParamValue, windowTitleParamValue);
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

	protected  long _initialise_ev_bool_callback(boolean autoCreateWindow)
	{
		boolean autoCreateWindowParamValue = autoCreateWindow;
		com.earthview.world.graphic.RenderWindow returnValue = _initialise(autoCreateWindowParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _initialise_ev_bool(long pNativeObject, boolean autoCreateWindow);
	/**
	 * 使用配置项进行初始化
	 * @param autoCreateWindow 
	 * @return 如果需要自动创建一个渲染窗体，否则null
	 */
	public com.earthview.world.graphic.RenderWindow _initialise(boolean autoCreateWindow)
	{
		boolean autoCreateWindowParamValue = autoCreateWindow;
		long returnValue = _initialise_ev_bool(this.nativeObject.pointer, autoCreateWindowParamValue);
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
	native private long _initialise_ev_bool_NoVirtual(long pNativeObject, boolean autoCreateWindow);
	protected com.earthview.world.graphic.RenderWindow _initialise_NoVirtual(boolean autoCreateWindow)
	{
		boolean autoCreateWindowParamValue = autoCreateWindow;
		long returnValue = _initialise_ev_bool_NoVirtual(this.nativeObject.pointer, autoCreateWindowParamValue);
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

	protected  long createRenderSystemCapabilities_void_callback()
	{
		com.earthview.world.graphic.RenderSystemCapabilities returnValue = createRenderSystemCapabilities();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createRenderSystemCapabilities_void(long pNativeObject);
	/**
	 * 创建渲染系统能力
	 * @param  
	 */
	public com.earthview.world.graphic.RenderSystemCapabilities createRenderSystemCapabilities()
	{
		long returnValue = createRenderSystemCapabilities_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderSystemCapabilities __returnValue = new com.earthview.world.graphic.RenderSystemCapabilities(CreatedWhenConstruct.CWC_NotToCreate, "CRenderSystemCapabilities");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderSystemCapabilities)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderSystemCapabilities");
		}
		return __returnValue;
	}
	native private long createRenderSystemCapabilities_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.RenderSystemCapabilities createRenderSystemCapabilities_NoVirtual()
	{
		long returnValue = createRenderSystemCapabilities_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderSystemCapabilities __returnValue = new com.earthview.world.graphic.RenderSystemCapabilities(CreatedWhenConstruct.CWC_NotToCreate, "CRenderSystemCapabilities");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderSystemCapabilities)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderSystemCapabilities");
		}
		return __returnValue;
	}

	native private long getMutableCapabilities_void(long pNativeObject);
	///zxt add for 1.8v
	public com.earthview.world.graphic.RenderSystemCapabilities getMutableCapabilities()
	{
		long returnValue = getMutableCapabilities_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderSystemCapabilities __returnValue = new com.earthview.world.graphic.RenderSystemCapabilities(CreatedWhenConstruct.CWC_NotToCreate, "CRenderSystemCapabilities");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderSystemCapabilities)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderSystemCapabilities");
		}
		return __returnValue;
	}
	protected  void useCustomRenderSystemCapabilities_CRenderSystemCapabilities_callback(long ref_capabilities)
	{
		com.earthview.world.graphic.RenderSystemCapabilities ref_capabilitiesParamValue = (ref_capabilities == 0L ? null : new com.earthview.world.graphic.RenderSystemCapabilities(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_capabilitiesParamValue != null)
		{
		ref_capabilitiesParamValue.setDelegate(true);
		ref_capabilitiesParamValue.setInstancePointer(new InstancePointer(ref_capabilities));
		IClassFactory ref_capabilitiesParamValueClassFactory = GlobalClassFactoryMap.get(ref_capabilitiesParamValue.getCppInstanceTypeName());
		if (ref_capabilitiesParamValueClassFactory != null)
		{
			ref_capabilitiesParamValue.setDelegate(true);
			ref_capabilitiesParamValue = (com.earthview.world.graphic.RenderSystemCapabilities)ref_capabilitiesParamValueClassFactory.create();
			ref_capabilitiesParamValue.setDelegate(true);
			ref_capabilitiesParamValue.setInstancePointer(new InstancePointer(ref_capabilities));
		}
		}
		useCustomRenderSystemCapabilities(ref_capabilitiesParamValue);
	}

	native private void useCustomRenderSystemCapabilities_CRenderSystemCapabilities(long pNativeObject, long ref_capabilities);
	/**
	 * 强制渲染系统使用指定的能力
	 * @param capabilities 
	 */
	public void useCustomRenderSystemCapabilities(com.earthview.world.graphic.RenderSystemCapabilities ref_capabilities)
	{
		long ref_capabilitiesParamValue = (ref_capabilities == null ? 0L : ref_capabilities.nativeObject.pointer);
		useCustomRenderSystemCapabilities_CRenderSystemCapabilities(this.nativeObject.pointer, ref_capabilitiesParamValue);
	}
	native private void useCustomRenderSystemCapabilities_CRenderSystemCapabilities_NoVirtual(long pNativeObject, long ref_capabilities);
	protected void useCustomRenderSystemCapabilities_NoVirtual(com.earthview.world.graphic.RenderSystemCapabilities ref_capabilities)
	{
		long ref_capabilitiesParamValue = (ref_capabilities == null ? 0L : ref_capabilities.nativeObject.pointer);
		useCustomRenderSystemCapabilities_CRenderSystemCapabilities_NoVirtual(this.nativeObject.pointer, ref_capabilitiesParamValue);
	}

	protected  void reinitialise_void_callback()
	{
		reinitialise();
	}

	native private void reinitialise_void(long pNativeObject);
	/**
	 * 重新开始渲染
	 * @param  
	 */
	public void reinitialise()
	{
		reinitialise_void(this.nativeObject.pointer);
	}
	native private void reinitialise_void_NoVirtual(long pNativeObject);
	protected void reinitialise_NoVirtual()
	{
		reinitialise_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void shutdown_void_callback()
	{
		shutdown();
	}

	native private void shutdown_void(long pNativeObject);
	/**
	 * 停止渲染，清空资源
	 * @param  
	 */
	public void shutdown()
	{
		shutdown_void(this.nativeObject.pointer);
	}
	native private void shutdown_void_NoVirtual(long pNativeObject);
	protected void shutdown_NoVirtual()
	{
		shutdown_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setAmbientLight_ev_real32_ev_real32_ev_real32_callback(float r, float g, float b)
	{
		float rParamValue = r;
		float gParamValue = g;
		float bParamValue = b;
		setAmbientLight(rParamValue, gParamValue, bParamValue);
	}

	native private void setAmbientLight_ev_real32_ev_real32_ev_real32(long pNativeObject, float r, float g, float b);
	/**
	 * 设置环境光的颜色
	 * @param r 红色
	 * @param g 绿色
	 * @param b 蓝色
	 */
	public void setAmbientLight(float r, float g, float b)
	{
		float rParamValue = r;
		float gParamValue = g;
		float bParamValue = b;
		setAmbientLight_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, rParamValue, gParamValue, bParamValue);
	}
	native private void setAmbientLight_ev_real32_ev_real32_ev_real32_NoVirtual(long pNativeObject, float r, float g, float b);
	protected void setAmbientLight_NoVirtual(float r, float g, float b)
	{
		float rParamValue = r;
		float gParamValue = g;
		float bParamValue = b;
		setAmbientLight_ev_real32_ev_real32_ev_real32_NoVirtual(this.nativeObject.pointer, rParamValue, gParamValue, bParamValue);
	}

	protected  void setShadingType_ShadeOptions_callback(int so)
	{
		com.earthview.world.graphic.ShadeOptions soParamValue = com.earthview.world.graphic.ShadeOptions.toEnum(so);
		setShadingType(soParamValue);
	}

	native private void setShadingType_ShadeOptions(long pNativeObject, int so);
	/**
	 * 设置光照的类型
	 * @param so 
	 */
	public void setShadingType(com.earthview.world.graphic.ShadeOptions so)
	{
		int soParamValue = so.getValue();
		setShadingType_ShadeOptions(this.nativeObject.pointer, soParamValue);
	}
	native private void setShadingType_ShadeOptions_NoVirtual(long pNativeObject, int so);
	protected void setShadingType_NoVirtual(com.earthview.world.graphic.ShadeOptions so)
	{
		int soParamValue = so.getValue();
		setShadingType_ShadeOptions_NoVirtual(this.nativeObject.pointer, soParamValue);
	}

	protected  void setLightingEnabled_ev_bool_callback(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setLightingEnabled(enabledParamValue);
	}

	native private void setLightingEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置动态灯光是否可用
	 * @param enabled 
	 */
	public void setLightingEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setLightingEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setLightingEnabled_ev_bool_NoVirtual(long pNativeObject, boolean enabled);
	protected void setLightingEnabled_NoVirtual(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setLightingEnabled_ev_bool_NoVirtual(this.nativeObject.pointer, enabledParamValue);
	}

	native private void setWBufferEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置W-buffers是否可用
	 * @param enabled 
	 */
	public void setWBufferEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setWBufferEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getWBufferEnabled_void(long pNativeObject);
	/**
	 * 返回W-buffers是否可用
	 * @param  
	 */
	public boolean getWBufferEnabled()
	{
		boolean returnValue = getWBufferEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  long _createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList_callback(String name, long width, long height, boolean fullScreen, long miscParams)
	{
		String nameParamValue = name;
		long widthParamValue = width;
		long heightParamValue = height;
		boolean fullScreenParamValue = fullScreen;
		com.earthview.world.core.CommonStringPairList miscParamsParamValue = (miscParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(miscParamsParamValue != null)
		{
		miscParamsParamValue.setDelegate(true);
		miscParamsParamValue.setInstancePointer(new InstancePointer(miscParams));
		IClassFactory miscParamsParamValueClassFactory = GlobalClassFactoryMap.get(miscParamsParamValue.getCppInstanceTypeName());
		if (miscParamsParamValueClassFactory != null)
		{
			miscParamsParamValue.setDelegate(true);
			miscParamsParamValue = (com.earthview.world.core.CommonStringPairList)miscParamsParamValueClassFactory.create();
			miscParamsParamValue.setDelegate(true);
			miscParamsParamValue.setInstancePointer(new InstancePointer(miscParams));
		}
		}
		com.earthview.world.graphic.RenderWindow returnValue = _createRenderWindow(nameParamValue, widthParamValue, heightParamValue, fullScreenParamValue, miscParamsParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList(long pNativeObject, String name, long width, long height, boolean fullScreen, long miscParams);
	/**
	 * 创建一个新的渲染窗体
	 * @param name 窗体的名字
	 * @param width 窗体的宽度
	 * @param height 窗体的高度
	 * @param fullScreen 全屏
	 * @param miscParams 新渲染窗体的其它参数
	 */
	public com.earthview.world.graphic.RenderWindow _createRenderWindow(String name, long width, long height, boolean fullScreen, com.earthview.world.core.CommonStringPairList miscParams)
	{
		String nameParamValue = name;
		long widthParamValue = width;
		long heightParamValue = height;
		boolean fullScreenParamValue = fullScreen;
		long miscParamsParamValue = (miscParams == null ? 0L : miscParams.nativeObject.pointer);
		long returnValue = _createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList(this.nativeObject.pointer, nameParamValue, widthParamValue, heightParamValue, fullScreenParamValue, miscParamsParamValue);
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
	native private long _createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList_NoVirtual(long pNativeObject, String name, long width, long height, boolean fullScreen, long miscParams);
	protected com.earthview.world.graphic.RenderWindow _createRenderWindow_NoVirtual(String name, long width, long height, boolean fullScreen, com.earthview.world.core.CommonStringPairList miscParams)
	{
		String nameParamValue = name;
		long widthParamValue = width;
		long heightParamValue = height;
		boolean fullScreenParamValue = fullScreen;
		long miscParamsParamValue = (miscParams == null ? 0L : miscParams.nativeObject.pointer);
		long returnValue = _createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList_NoVirtual(this.nativeObject.pointer, nameParamValue, widthParamValue, heightParamValue, fullScreenParamValue, miscParamsParamValue);
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

	protected  long _createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_callback(String name, long width, long height, boolean fullScreen)
	{
		String nameParamValue = name;
		long widthParamValue = width;
		long heightParamValue = height;
		boolean fullScreenParamValue = fullScreen;
		com.earthview.world.graphic.RenderWindow returnValue = _createRenderWindow(nameParamValue, widthParamValue, heightParamValue, fullScreenParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool(long pNativeObject, String name, long width, long height, boolean fullScreen);
	/**
	 * 创建一个新的渲染窗体
	 * @param name 窗体的名字
	 * @param width 窗体的宽度
	 * @param height 窗体的高度
	 * @param fullScreen 全屏
	 */
	public com.earthview.world.graphic.RenderWindow _createRenderWindow(String name, long width, long height, boolean fullScreen)
	{
		String nameParamValue = name;
		long widthParamValue = width;
		long heightParamValue = height;
		boolean fullScreenParamValue = fullScreen;
		long returnValue = _createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool(this.nativeObject.pointer, nameParamValue, widthParamValue, heightParamValue, fullScreenParamValue);
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
	native private long _createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_NoVirtual(long pNativeObject, String name, long width, long height, boolean fullScreen);
	protected com.earthview.world.graphic.RenderWindow _createRenderWindow_NoVirtual(String name, long width, long height, boolean fullScreen)
	{
		String nameParamValue = name;
		long widthParamValue = width;
		long heightParamValue = height;
		boolean fullScreenParamValue = fullScreen;
		long returnValue = _createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, widthParamValue, heightParamValue, fullScreenParamValue);
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

	protected  boolean _createRenderWindows_RenderWindowDescriptionList_RenderWindowList_callback(long renderWindowDescriptions, long createdWindows)
	{
		com.earthview.world.graphic.RenderWindowDescriptionList renderWindowDescriptionsParamValue = new com.earthview.world.graphic.RenderWindowDescriptionList(CreatedWhenConstruct.CWC_NotToCreate);
		renderWindowDescriptionsParamValue.setDelegate(true);
		renderWindowDescriptionsParamValue.setInstancePointer(new InstancePointer(renderWindowDescriptions));
		IClassFactory renderWindowDescriptionsParamValueClassFactory = GlobalClassFactoryMap.get(renderWindowDescriptionsParamValue.getCppInstanceTypeName());
		if (renderWindowDescriptionsParamValueClassFactory != null)
		{
			renderWindowDescriptionsParamValue.setDelegate(true);
			renderWindowDescriptionsParamValue = (com.earthview.world.graphic.RenderWindowDescriptionList)renderWindowDescriptionsParamValueClassFactory.create();
			renderWindowDescriptionsParamValue.setDelegate(true);
			renderWindowDescriptionsParamValue.setInstancePointer(new InstancePointer(renderWindowDescriptions));
		}
		com.earthview.world.graphic.RenderWindowList createdWindowsParamValue = new com.earthview.world.graphic.RenderWindowList(CreatedWhenConstruct.CWC_NotToCreate);
		createdWindowsParamValue.setDelegate(true);
		createdWindowsParamValue.setInstancePointer(new InstancePointer(createdWindows));
		IClassFactory createdWindowsParamValueClassFactory = GlobalClassFactoryMap.get(createdWindowsParamValue.getCppInstanceTypeName());
		if (createdWindowsParamValueClassFactory != null)
		{
			createdWindowsParamValue.setDelegate(true);
			createdWindowsParamValue = (com.earthview.world.graphic.RenderWindowList)createdWindowsParamValueClassFactory.create();
			createdWindowsParamValue.setDelegate(true);
			createdWindowsParamValue.setInstancePointer(new InstancePointer(createdWindows));
		}
		boolean returnValue = _createRenderWindows(renderWindowDescriptionsParamValue, createdWindowsParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean _createRenderWindows_RenderWindowDescriptionList_RenderWindowList(long pNativeObject, long renderWindowDescriptions, long createdWindows);
	/**
	 * 创建多渲染窗体
	 * @param renderWindowDescriptions 结构数组包含每一个渲染窗体的描述
	 * @param createdWindows 创建渲染窗体
	 */
	public boolean _createRenderWindows(com.earthview.world.graphic.RenderWindowDescriptionList renderWindowDescriptions, com.earthview.world.graphic.RenderWindowList createdWindows)
	{
		long renderWindowDescriptionsParamValue = renderWindowDescriptions.nativeObject.pointer;
		long createdWindowsParamValue = createdWindows.nativeObject.pointer;
		boolean returnValue = _createRenderWindows_RenderWindowDescriptionList_RenderWindowList(this.nativeObject.pointer, renderWindowDescriptionsParamValue, createdWindowsParamValue);
		return returnValue;
	}
	native private boolean _createRenderWindows_RenderWindowDescriptionList_RenderWindowList_NoVirtual(long pNativeObject, long renderWindowDescriptions, long createdWindows);
	protected boolean _createRenderWindows_NoVirtual(com.earthview.world.graphic.RenderWindowDescriptionList renderWindowDescriptions, com.earthview.world.graphic.RenderWindowList createdWindows)
	{
		long renderWindowDescriptionsParamValue = renderWindowDescriptions.nativeObject.pointer;
		long createdWindowsParamValue = createdWindows.nativeObject.pointer;
		boolean returnValue = _createRenderWindows_RenderWindowDescriptionList_RenderWindowList_NoVirtual(this.nativeObject.pointer, renderWindowDescriptionsParamValue, createdWindowsParamValue);
		return returnValue;
	}

	protected  long createMultiRenderTarget_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.MultiRenderTarget returnValue = createMultiRenderTarget(nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createMultiRenderTarget_EVString(long pNativeObject, String name);
	/**
	 * 创建一个多重渲染目标
	 * @param name 
	 */
	public com.earthview.world.graphic.MultiRenderTarget createMultiRenderTarget(String name)
	{
		String nameParamValue = name;
		long returnValue = createMultiRenderTarget_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MultiRenderTarget __returnValue = new com.earthview.world.graphic.MultiRenderTarget(CreatedWhenConstruct.CWC_NotToCreate, "CMultiRenderTarget");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MultiRenderTarget)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMultiRenderTarget");
		}
		return __returnValue;
	}
	native private long createMultiRenderTarget_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.MultiRenderTarget createMultiRenderTarget_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = createMultiRenderTarget_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MultiRenderTarget __returnValue = new com.earthview.world.graphic.MultiRenderTarget(CreatedWhenConstruct.CWC_NotToCreate, "CMultiRenderTarget");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MultiRenderTarget)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMultiRenderTarget");
		}
		return __returnValue;
	}

	protected  void destroyRenderWindow_EVString_callback(String name)
	{
		String nameParamValue = name;
		destroyRenderWindow(nameParamValue);
	}

	native private void destroyRenderWindow_EVString(long pNativeObject, String name);
	/**
	 * 销毁渲染窗体
	 * @param name 
	 */
	public void destroyRenderWindow(String name)
	{
		String nameParamValue = name;
		destroyRenderWindow_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void destroyRenderWindow_EVString_NoVirtual(long pNativeObject, String name);
	protected void destroyRenderWindow_NoVirtual(String name)
	{
		String nameParamValue = name;
		destroyRenderWindow_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	protected  void destroyRenderTexture_EVString_callback(String name)
	{
		String nameParamValue = name;
		destroyRenderTexture(nameParamValue);
	}

	native private void destroyRenderTexture_EVString(long pNativeObject, String name);
	/**
	 * 销毁渲染纹理
	 * @param name 
	 */
	public void destroyRenderTexture(String name)
	{
		String nameParamValue = name;
		destroyRenderTexture_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void destroyRenderTexture_EVString_NoVirtual(long pNativeObject, String name);
	protected void destroyRenderTexture_NoVirtual(String name)
	{
		String nameParamValue = name;
		destroyRenderTexture_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	protected  void destroyRenderTarget_EVString_callback(String name)
	{
		String nameParamValue = name;
		destroyRenderTarget(nameParamValue);
	}

	native private void destroyRenderTarget_EVString(long pNativeObject, String name);
	/**
	 * 销毁渲染目标
	 * @param  
	 */
	public void destroyRenderTarget(String name)
	{
		String nameParamValue = name;
		destroyRenderTarget_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void destroyRenderTarget_EVString_NoVirtual(long pNativeObject, String name);
	protected void destroyRenderTarget_NoVirtual(String name)
	{
		String nameParamValue = name;
		destroyRenderTarget_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	protected  void attachRenderTarget_CRenderTarget_callback(long target)
	{
		com.earthview.world.graphic.RenderTarget targetParamValue = new com.earthview.world.graphic.RenderTarget(CreatedWhenConstruct.CWC_NotToCreate);
		targetParamValue.setDelegate(true);
		targetParamValue.setInstancePointer(new InstancePointer(target));
		IClassFactory targetParamValueClassFactory = GlobalClassFactoryMap.get(targetParamValue.getCppInstanceTypeName());
		if (targetParamValueClassFactory != null)
		{
			targetParamValue.setDelegate(true);
			targetParamValue = (com.earthview.world.graphic.RenderTarget)targetParamValueClassFactory.create();
			targetParamValue.setDelegate(true);
			targetParamValue.setInstancePointer(new InstancePointer(target));
		}
		attachRenderTarget(targetParamValue);
	}

	native private void attachRenderTarget_CRenderTarget(long pNativeObject, long target);
	/**
	 * 通过通路名连接渲染目标和渲染系统
	 * @param target 
	 */
	public void attachRenderTarget(com.earthview.world.graphic.RenderTarget target)
	{
		long targetParamValue = target.nativeObject.pointer;
		attachRenderTarget_CRenderTarget(this.nativeObject.pointer, targetParamValue);
	}
	native private void attachRenderTarget_CRenderTarget_NoVirtual(long pNativeObject, long target);
	protected void attachRenderTarget_NoVirtual(com.earthview.world.graphic.RenderTarget target)
	{
		long targetParamValue = target.nativeObject.pointer;
		attachRenderTarget_CRenderTarget_NoVirtual(this.nativeObject.pointer, targetParamValue);
	}

	protected  long getRenderTarget_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.RenderTarget returnValue = getRenderTarget(nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRenderTarget_EVString(long pNativeObject, String name);
	/**
	 * 获得渲染目标如果渲染目标没有找到，返回NULL
	 * @param name 
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
	native private long getRenderTarget_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.RenderTarget getRenderTarget_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = getRenderTarget_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
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

	protected  long detachRenderTarget_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.RenderTarget returnValue = detachRenderTarget(nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long detachRenderTarget_EVString(long pNativeObject, String name);
	/**
	 * 从渲染系统中用通道名分开渲染目标，并返回一个指针如果渲染目标没有找到，返回NULL
	 * @param  
	 */
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
	native private long detachRenderTarget_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.RenderTarget detachRenderTarget_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = detachRenderTarget_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
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

	public static class StringRenderTargetMapPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair", new StringRenderTargetMapPairClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public StringRenderTargetMapPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("StringRenderTargetMapPair", null);
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
		public com.earthview.world.graphic.RenderTarget get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.RenderTarget __returnValue = new com.earthview.world.graphic.RenderTarget(CreatedWhenConstruct.CWC_NotToCreate, "CRenderTarget");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
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
		
		native private void set_second_CRenderTarget (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.RenderTarget second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_CRenderTarget(this.nativeObject.pointer, secondParamValue);
		}
		
		public StringRenderTargetMapPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public StringRenderTargetMapPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static StringRenderTargetMapPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			StringRenderTargetMapPair obj = null;
 			if(baseObj instanceof StringRenderTargetMapPair)
			{
				obj = (StringRenderTargetMapPair)baseObj;
			} else {
				obj = new StringRenderTargetMapPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "StringRenderTargetMapPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class StringRenderTargetMapPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			StringRenderTargetMapPair emptyInstance = new StringRenderTargetMapPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class RenderTargetIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderSystem::RenderTargetIterator", new RenderTargetIteratorClassFactory());
		}

		/**
		 * 构造函数
		 * @param lst 迭代器对应集合
		 */
		public RenderTargetIterator(com.earthview.world.graphic.RenderTargetMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("RenderTargetIterator", list);
		}

		/**
		 * 复制构造函数
		 * @param other 其它迭代器
		 */
		public RenderTargetIterator(com.earthview.world.graphic.RenderSystem.RenderTargetIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("RenderTargetIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		/**
		 * 判断迭代器是否到达容器末尾
		 * @param  
		 * @return 是返回true，否则false
		 */
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		/**
		 * 迭代器位置后移
		 * @param  
		 */
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private int nextKey_void(long pNativeObject);
		/**
		 * 返回容器当前的键
		 * @param  
		 * @return 键
		 */
		public int nextKey()
		{
			int returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.RenderTarget nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
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
		native private long nextValuePtr_void(long pNativeObject);
		/**
		 * 返回容器当前的值指针
		 * @param  
		 * @return 值地址
		 */
		public NativeObjectPointer<com.earthview.world.graphic.RenderTarget> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.RenderTarget> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.RenderTarget>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.RenderTarget next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
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
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器首键值对
		 * @param  
		 * @return 首键值对
		 */
		public com.earthview.world.graphic.RenderSystem.StringRenderTargetMapPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.RenderSystem.StringRenderTargetMapPair __returnValue = new com.earthview.world.graphic.RenderSystem.StringRenderTargetMapPair(CreatedWhenConstruct.CWC_NotToCreate, "StringRenderTargetMapPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderSystem.StringRenderTargetMapPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringRenderTargetMapPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾键值对
		 * @param  
		 * @return 尾键值对
		 */
		public com.earthview.world.graphic.RenderSystem.StringRenderTargetMapPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.RenderSystem.StringRenderTargetMapPair __returnValue = new com.earthview.world.graphic.RenderSystem.StringRenderTargetMapPair(CreatedWhenConstruct.CWC_NotToCreate, "StringRenderTargetMapPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderSystem.StringRenderTargetMapPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringRenderTargetMapPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前键值对
		 * @param  
		 * @return 当前键值对
		 */
		public com.earthview.world.graphic.RenderSystem.StringRenderTargetMapPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.RenderSystem.StringRenderTargetMapPair __returnValue = new com.earthview.world.graphic.RenderSystem.StringRenderTargetMapPair(CreatedWhenConstruct.CWC_NotToCreate, "StringRenderTargetMapPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderSystem.StringRenderTargetMapPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringRenderTargetMapPair");
			}
			return __returnValue;
		}
		public RenderTargetIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public RenderTargetIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static RenderTargetIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			RenderTargetIterator obj = null;
 			if(baseObj instanceof RenderTargetIterator)
			{
				obj = (RenderTargetIterator)baseObj;
			} else {
				obj = new RenderTargetIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "RenderTargetIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class RenderTargetIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			RenderTargetIterator emptyInstance = new RenderTargetIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  long getRenderTargetIterator_void_callback()
	{
		com.earthview.world.graphic.RenderSystem.RenderTargetIterator returnValue = getRenderTargetIterator();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRenderTargetIterator_void(long pNativeObject);
	/**
	 * 返回一个渲染目标的迭代器
	 * @param  
	 */
	public com.earthview.world.graphic.RenderSystem.RenderTargetIterator getRenderTargetIterator()
	{
		long returnValue = getRenderTargetIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.RenderSystem.RenderTargetIterator __returnValue = new com.earthview.world.graphic.RenderSystem.RenderTargetIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "RenderTargetIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderSystem.RenderTargetIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "RenderTargetIterator");
		}
		return __returnValue;
	}
	native private long getRenderTargetIterator_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.RenderSystem.RenderTargetIterator getRenderTargetIterator_NoVirtual()
	{
		long returnValue = getRenderTargetIterator_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.RenderSystem.RenderTargetIterator __returnValue = new com.earthview.world.graphic.RenderSystem.RenderTargetIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "RenderTargetIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderSystem.RenderTargetIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "RenderTargetIterator");
		}
		return __returnValue;
	}

	protected  String getErrorDescription_ev_int32_callback(int errorNumber)
	{
		int errorNumberParamValue = errorNumber;
		String returnValue = getErrorDescription(errorNumberParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getErrorDescription_ev_int32(long pNativeObject, int errorNumber);
	/**
	 * 返回一个错误代码的描述
	 * @param  
	 */
	public String getErrorDescription(int errorNumber)
	{
		int errorNumberParamValue = errorNumber;
		String returnValue = getErrorDescription_ev_int32(this.nativeObject.pointer, errorNumberParamValue);
		return returnValue;
	}
	native private String getErrorDescription_ev_int32_NoVirtual(long pNativeObject, int errorNumber);
	protected String getErrorDescription_NoVirtual(int errorNumber)
	{
		int errorNumberParamValue = errorNumber;
		String returnValue = getErrorDescription_ev_int32_NoVirtual(this.nativeObject.pointer, errorNumberParamValue);
		return returnValue;
	}

	native private void setWaitForVerticalBlank_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 在flipping缓冲之前设置是否渲染窗体等待垂直消隐
	 * @param  
	 */
	public void setWaitForVerticalBlank(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setWaitForVerticalBlank_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getWaitForVerticalBlank_void(long pNativeObject);
	/**
	 * 如果垂直消隐监控和帧是同步的返回true
	 * @param  
	 */
	public boolean getWaitForVerticalBlank()
	{
		boolean returnValue = getWaitForVerticalBlank_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getGlobalInstanceVertexBuffer_void(long pNativeObject);
	///zxt add for 1.8v
	public com.earthview.world.graphic.HardwareVertexBufferSharedPtr getGlobalInstanceVertexBuffer()
	{
		long returnValue = getGlobalInstanceVertexBuffer_void(this.nativeObject.pointer);
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
		}
		return __returnValue;
	}
	native private void setGlobalInstanceVertexBuffer_CHardwareVertexBufferSharedPtr(long pNativeObject, long val);
	public void setGlobalInstanceVertexBuffer(com.earthview.world.graphic.HardwareVertexBufferSharedPtr val)
	{
		long valParamValue = val.nativeObject.pointer;
		setGlobalInstanceVertexBuffer_CHardwareVertexBufferSharedPtr(this.nativeObject.pointer, valParamValue);
	}
	native private long getGlobalInstanceVertexBufferVertexDeclaration_void(long pNativeObject);
	public com.earthview.world.graphic.VertexDeclaration getGlobalInstanceVertexBufferVertexDeclaration()
	{
		long returnValue = getGlobalInstanceVertexBufferVertexDeclaration_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexDeclaration __returnValue = new com.earthview.world.graphic.VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate, "CVertexDeclaration");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexDeclaration)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexDeclaration");
		}
		return __returnValue;
	}
	native private void setGlobalInstanceVertexBufferVertexDeclaration_CVertexDeclaration(long pNativeObject, long ref_val);
	public void setGlobalInstanceVertexBufferVertexDeclaration(com.earthview.world.graphic.VertexDeclaration ref_val)
	{
		long ref_valParamValue = (ref_val == null ? 0L : ref_val.nativeObject.pointer);
		setGlobalInstanceVertexBufferVertexDeclaration_CVertexDeclaration(this.nativeObject.pointer, ref_valParamValue);
	}
	native private long getGlobalNumberOfInstances_void(long pNativeObject);
	public long getGlobalNumberOfInstances()
	{
		long returnValue = getGlobalNumberOfInstances_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setGlobalNumberOfInstances_ev_size_t(long pNativeObject, long val);
	public void setGlobalNumberOfInstances(long val)
	{
		long valParamValue = val;
		setGlobalNumberOfInstances_ev_size_t(this.nativeObject.pointer, valParamValue);
	}
	native private void setFixedPipelineEnabled_ev_bool(long pNativeObject, boolean enabled);
	public void setFixedPipelineEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setFixedPipelineEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getFixedPipelineEnabled_void(long pNativeObject);
	public boolean getFixedPipelineEnabled()
	{
		boolean returnValue = getFixedPipelineEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  void setDepthBufferFor_CRenderTarget_callback(long renderTarget)
	{
		com.earthview.world.graphic.RenderTarget renderTargetParamValue = (renderTarget == 0L ? null : new com.earthview.world.graphic.RenderTarget(CreatedWhenConstruct.CWC_NotToCreate));
		if(renderTargetParamValue != null)
		{
		renderTargetParamValue.setDelegate(true);
		renderTargetParamValue.setInstancePointer(new InstancePointer(renderTarget));
		IClassFactory renderTargetParamValueClassFactory = GlobalClassFactoryMap.get(renderTargetParamValue.getCppInstanceTypeName());
		if (renderTargetParamValueClassFactory != null)
		{
			renderTargetParamValue.setDelegate(true);
			renderTargetParamValue = (com.earthview.world.graphic.RenderTarget)renderTargetParamValueClassFactory.create();
			renderTargetParamValue.setDelegate(true);
			renderTargetParamValue.setInstancePointer(new InstancePointer(renderTarget));
		}
		}
		setDepthBufferFor(renderTargetParamValue);
	}

	native private void setDepthBufferFor_CRenderTarget(long pNativeObject, long renderTarget);
	public void setDepthBufferFor(com.earthview.world.graphic.RenderTarget renderTarget)
	{
		long renderTargetParamValue = (renderTarget == null ? 0L : renderTarget.nativeObject.pointer);
		setDepthBufferFor_CRenderTarget(this.nativeObject.pointer, renderTargetParamValue);
	}
	native private void setDepthBufferFor_CRenderTarget_NoVirtual(long pNativeObject, long renderTarget);
	protected void setDepthBufferFor_NoVirtual(com.earthview.world.graphic.RenderTarget renderTarget)
	{
		long renderTargetParamValue = (renderTarget == null ? 0L : renderTarget.nativeObject.pointer);
		setDepthBufferFor_CRenderTarget_NoVirtual(this.nativeObject.pointer, renderTargetParamValue);
	}

	protected  void _useLights_LightList_ev_uint16_callback(long lights, int limit)
	{
		com.earthview.world.graphic.LightList lightsParamValue = new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate);
		lightsParamValue.setDelegate(true);
		lightsParamValue.setInstancePointer(new InstancePointer(lights));
		IClassFactory lightsParamValueClassFactory = GlobalClassFactoryMap.get(lightsParamValue.getCppInstanceTypeName());
		if (lightsParamValueClassFactory != null)
		{
			lightsParamValue.setDelegate(true);
			lightsParamValue = (com.earthview.world.graphic.LightList)lightsParamValueClassFactory.create();
			lightsParamValue.setDelegate(true);
			lightsParamValue.setInstancePointer(new InstancePointer(lights));
		}
		int limitParamValue = limit;
		_useLights(lightsParamValue, limitParamValue);
	}

	native private void _useLights_LightList_ev_uint16(long pNativeObject, long lights, int limit);
	/**
	 * 使用光照
	 * @param lights 光源列表
	 * @param limit 
	 */
	public void _useLights(com.earthview.world.graphic.LightList lights, int limit)
	{
		long lightsParamValue = lights.nativeObject.pointer;
		int limitParamValue = limit;
		_useLights_LightList_ev_uint16(this.nativeObject.pointer, lightsParamValue, limitParamValue);
	}
	native private void _useLights_LightList_ev_uint16_NoVirtual(long pNativeObject, long lights, int limit);
	protected void _useLights_NoVirtual(com.earthview.world.graphic.LightList lights, int limit)
	{
		long lightsParamValue = lights.nativeObject.pointer;
		int limitParamValue = limit;
		_useLights_LightList_ev_uint16_NoVirtual(this.nativeObject.pointer, lightsParamValue, limitParamValue);
	}

	protected  boolean areFixedFunctionLightsInViewSpace_void_callback()
	{
		boolean returnValue = areFixedFunctionLightsInViewSpace();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean areFixedFunctionLightsInViewSpace_void(long pNativeObject);
	/**
	 * 判断是否在视口空间里提供固定功能的光照
	 * @param  
	 */
	public boolean areFixedFunctionLightsInViewSpace()
	{
		boolean returnValue = areFixedFunctionLightsInViewSpace_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean areFixedFunctionLightsInViewSpace_void_NoVirtual(long pNativeObject);
	protected boolean areFixedFunctionLightsInViewSpace_NoVirtual()
	{
		boolean returnValue = areFixedFunctionLightsInViewSpace_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void _setWorldMatrix_CMatrix4_callback(long m)
	{
		com.earthview.world.spatial.math.Matrix4 mParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		mParamValue.setDelegate(true);
		mParamValue.setInstancePointer(new InstancePointer(m));
		IClassFactory mParamValueClassFactory = GlobalClassFactoryMap.get(mParamValue.getCppInstanceTypeName());
		if (mParamValueClassFactory != null)
		{
			mParamValue.setDelegate(true);
			mParamValue = (com.earthview.world.spatial.math.Matrix4)mParamValueClassFactory.create();
			mParamValue.setDelegate(true);
			mParamValue.setInstancePointer(new InstancePointer(m));
		}
		_setWorldMatrix(mParamValue);
	}

	native private void _setWorldMatrix_CMatrix4(long pNativeObject, long m);
	/**
	 * 设置世界转换矩阵
	 * @param m 
	 */
	public void _setWorldMatrix(com.earthview.world.spatial.math.Matrix4 m)
	{
		long mParamValue = m.nativeObject.pointer;
		_setWorldMatrix_CMatrix4(this.nativeObject.pointer, mParamValue);
	}
	native private void _setWorldMatrix_CMatrix4_NoVirtual(long pNativeObject, long m);
	protected void _setWorldMatrix_NoVirtual(com.earthview.world.spatial.math.Matrix4 m)
	{
		long mParamValue = m.nativeObject.pointer;
		_setWorldMatrix_CMatrix4_NoVirtual(this.nativeObject.pointer, mParamValue);
	}

	protected  void _setWorldMatrices_CMatrix4_ev_uint16_callback(long m, int count)
	{
		com.earthview.world.spatial.math.Matrix4 mParamValue = (m == 0L ? null : new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate));
		if(mParamValue != null)
		{
		mParamValue.setDelegate(true);
		mParamValue.setInstancePointer(new InstancePointer(m));
		IClassFactory mParamValueClassFactory = GlobalClassFactoryMap.get(mParamValue.getCppInstanceTypeName());
		if (mParamValueClassFactory != null)
		{
			mParamValue.setDelegate(true);
			mParamValue = (com.earthview.world.spatial.math.Matrix4)mParamValueClassFactory.create();
			mParamValue.setDelegate(true);
			mParamValue.setInstancePointer(new InstancePointer(m));
		}
		}
		int countParamValue = count;
		_setWorldMatrices(mParamValue, countParamValue);
	}

	native private void _setWorldMatrices_CMatrix4_ev_uint16(long pNativeObject, long m, int count);
	/**
	 * 设置多世界矩阵
	 * @param m 
	 * @param count 
	 */
	public void _setWorldMatrices(com.earthview.world.spatial.math.Matrix4 m, int count)
	{
		long mParamValue = (m == null ? 0L : m.nativeObject.pointer);
		int countParamValue = count;
		_setWorldMatrices_CMatrix4_ev_uint16(this.nativeObject.pointer, mParamValue, countParamValue);
	}
	native private void _setWorldMatrices_CMatrix4_ev_uint16_NoVirtual(long pNativeObject, long m, int count);
	protected void _setWorldMatrices_NoVirtual(com.earthview.world.spatial.math.Matrix4 m, int count)
	{
		long mParamValue = (m == null ? 0L : m.nativeObject.pointer);
		int countParamValue = count;
		_setWorldMatrices_CMatrix4_ev_uint16_NoVirtual(this.nativeObject.pointer, mParamValue, countParamValue);
	}

	protected  void _setViewMatrix_CMatrix4_callback(long m)
	{
		com.earthview.world.spatial.math.Matrix4 mParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		mParamValue.setDelegate(true);
		mParamValue.setInstancePointer(new InstancePointer(m));
		IClassFactory mParamValueClassFactory = GlobalClassFactoryMap.get(mParamValue.getCppInstanceTypeName());
		if (mParamValueClassFactory != null)
		{
			mParamValue.setDelegate(true);
			mParamValue = (com.earthview.world.spatial.math.Matrix4)mParamValueClassFactory.create();
			mParamValue.setDelegate(true);
			mParamValue.setInstancePointer(new InstancePointer(m));
		}
		_setViewMatrix(mParamValue);
	}

	native private void _setViewMatrix_CMatrix4(long pNativeObject, long m);
	/**
	 * 设置观察矩阵
	 * @param m 
	 */
	public void _setViewMatrix(com.earthview.world.spatial.math.Matrix4 m)
	{
		long mParamValue = m.nativeObject.pointer;
		_setViewMatrix_CMatrix4(this.nativeObject.pointer, mParamValue);
	}
	native private void _setViewMatrix_CMatrix4_NoVirtual(long pNativeObject, long m);
	protected void _setViewMatrix_NoVirtual(com.earthview.world.spatial.math.Matrix4 m)
	{
		long mParamValue = m.nativeObject.pointer;
		_setViewMatrix_CMatrix4_NoVirtual(this.nativeObject.pointer, mParamValue);
	}

	protected  long _getViewMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = _getViewMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _getViewMatrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 _getViewMatrix()
	{
		long returnValue = _getViewMatrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate, "CMatrix4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private long _getViewMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 _getViewMatrix_NoVirtual()
	{
		long returnValue = _getViewMatrix_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate, "CMatrix4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}

	protected  void _setProjectionMatrix_CMatrix4_callback(long m)
	{
		com.earthview.world.spatial.math.Matrix4 mParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		mParamValue.setDelegate(true);
		mParamValue.setInstancePointer(new InstancePointer(m));
		IClassFactory mParamValueClassFactory = GlobalClassFactoryMap.get(mParamValue.getCppInstanceTypeName());
		if (mParamValueClassFactory != null)
		{
			mParamValue.setDelegate(true);
			mParamValue = (com.earthview.world.spatial.math.Matrix4)mParamValueClassFactory.create();
			mParamValue.setDelegate(true);
			mParamValue.setInstancePointer(new InstancePointer(m));
		}
		_setProjectionMatrix(mParamValue);
	}

	native private void _setProjectionMatrix_CMatrix4(long pNativeObject, long m);
	/**
	 * 设置投影矩阵
	 * @param m 
	 */
	public void _setProjectionMatrix(com.earthview.world.spatial.math.Matrix4 m)
	{
		long mParamValue = m.nativeObject.pointer;
		_setProjectionMatrix_CMatrix4(this.nativeObject.pointer, mParamValue);
	}
	native private void _setProjectionMatrix_CMatrix4_NoVirtual(long pNativeObject, long m);
	protected void _setProjectionMatrix_NoVirtual(com.earthview.world.spatial.math.Matrix4 m)
	{
		long mParamValue = m.nativeObject.pointer;
		_setProjectionMatrix_CMatrix4_NoVirtual(this.nativeObject.pointer, mParamValue);
	}

	protected  long _getProjectMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = _getProjectMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _getProjectMatrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 _getProjectMatrix()
	{
		long returnValue = _getProjectMatrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate, "CMatrix4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private long _getProjectMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 _getProjectMatrix_NoVirtual()
	{
		long returnValue = _getProjectMatrix_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate, "CMatrix4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}

	protected  long _getProjectMatrixDepth_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = _getProjectMatrixDepth();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _getProjectMatrixDepth_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 _getProjectMatrixDepth()
	{
		long returnValue = _getProjectMatrixDepth_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate, "CMatrix4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private long _getProjectMatrixDepth_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 _getProjectMatrixDepth_NoVirtual()
	{
		long returnValue = _getProjectMatrixDepth_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate, "CMatrix4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}

	protected  void _setTextureUnitSettings_ev_size_t_CTextureUnitState_callback(long texUnit, long tl)
	{
		long texUnitParamValue = texUnit;
		com.earthview.world.graphic.TextureUnitState tlParamValue = new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate);
		tlParamValue.setDelegate(true);
		tlParamValue.setInstancePointer(new InstancePointer(tl));
		IClassFactory tlParamValueClassFactory = GlobalClassFactoryMap.get(tlParamValue.getCppInstanceTypeName());
		if (tlParamValueClassFactory != null)
		{
			tlParamValue.setDelegate(true);
			tlParamValue = (com.earthview.world.graphic.TextureUnitState)tlParamValueClassFactory.create();
			tlParamValue.setDelegate(true);
			tlParamValue.setInstancePointer(new InstancePointer(tl));
		}
		_setTextureUnitSettings(texUnitParamValue, tlParamValue);
	}

	native private void _setTextureUnitSettings_ev_size_t_CTextureUnitState(long pNativeObject, long texUnit, long tl);
	/**
	 * 一次性设置纹理单元的特性
	 * @param texUnit 
	 * @param tl 
	 */
	public void _setTextureUnitSettings(long texUnit, com.earthview.world.graphic.TextureUnitState tl)
	{
		long texUnitParamValue = texUnit;
		long tlParamValue = tl.nativeObject.pointer;
		_setTextureUnitSettings_ev_size_t_CTextureUnitState(this.nativeObject.pointer, texUnitParamValue, tlParamValue);
	}
	native private void _setTextureUnitSettings_ev_size_t_CTextureUnitState_NoVirtual(long pNativeObject, long texUnit, long tl);
	protected void _setTextureUnitSettings_NoVirtual(long texUnit, com.earthview.world.graphic.TextureUnitState tl)
	{
		long texUnitParamValue = texUnit;
		long tlParamValue = tl.nativeObject.pointer;
		_setTextureUnitSettings_ev_size_t_CTextureUnitState_NoVirtual(this.nativeObject.pointer, texUnitParamValue, tlParamValue);
	}

	protected  void _disableTextureUnit_ev_size_t_callback(long texUnit)
	{
		long texUnitParamValue = texUnit;
		_disableTextureUnit(texUnitParamValue);
	}

	native private void _disableTextureUnit_ev_size_t(long pNativeObject, long texUnit);
	/**
	 * 使纹理单元失效
	 * @param texUnit 
	 */
	public void _disableTextureUnit(long texUnit)
	{
		long texUnitParamValue = texUnit;
		_disableTextureUnit_ev_size_t(this.nativeObject.pointer, texUnitParamValue);
	}
	native private void _disableTextureUnit_ev_size_t_NoVirtual(long pNativeObject, long texUnit);
	protected void _disableTextureUnit_NoVirtual(long texUnit)
	{
		long texUnitParamValue = texUnit;
		_disableTextureUnit_ev_size_t_NoVirtual(this.nativeObject.pointer, texUnitParamValue);
	}

	protected  void _disableTextureUnitsFrom_ev_size_t_callback(long texUnit)
	{
		long texUnitParamValue = texUnit;
		_disableTextureUnitsFrom(texUnitParamValue);
	}

	native private void _disableTextureUnitsFrom_ev_size_t(long pNativeObject, long texUnit);
	/**
	 * 使从指定序号开始的所有纹理单元失效
	 * @param texUnit 
	 */
	public void _disableTextureUnitsFrom(long texUnit)
	{
		long texUnitParamValue = texUnit;
		_disableTextureUnitsFrom_ev_size_t(this.nativeObject.pointer, texUnitParamValue);
	}
	native private void _disableTextureUnitsFrom_ev_size_t_NoVirtual(long pNativeObject, long texUnit);
	protected void _disableTextureUnitsFrom_NoVirtual(long texUnit)
	{
		long texUnitParamValue = texUnit;
		_disableTextureUnitsFrom_ev_size_t_NoVirtual(this.nativeObject.pointer, texUnitParamValue);
	}

	protected  void _setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32_callback(long ambient, long diffuse, long specular, long emissive, double shininess, int tracking)
	{
		com.earthview.world.graphic.ColourValue ambientParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		ambientParamValue.setDelegate(true);
		ambientParamValue.setInstancePointer(new InstancePointer(ambient));
		IClassFactory ambientParamValueClassFactory = GlobalClassFactoryMap.get(ambientParamValue.getCppInstanceTypeName());
		if (ambientParamValueClassFactory != null)
		{
			ambientParamValue.setDelegate(true);
			ambientParamValue = (com.earthview.world.graphic.ColourValue)ambientParamValueClassFactory.create();
			ambientParamValue.setDelegate(true);
			ambientParamValue.setInstancePointer(new InstancePointer(ambient));
		}
		com.earthview.world.graphic.ColourValue diffuseParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		diffuseParamValue.setDelegate(true);
		diffuseParamValue.setInstancePointer(new InstancePointer(diffuse));
		IClassFactory diffuseParamValueClassFactory = GlobalClassFactoryMap.get(diffuseParamValue.getCppInstanceTypeName());
		if (diffuseParamValueClassFactory != null)
		{
			diffuseParamValue.setDelegate(true);
			diffuseParamValue = (com.earthview.world.graphic.ColourValue)diffuseParamValueClassFactory.create();
			diffuseParamValue.setDelegate(true);
			diffuseParamValue.setInstancePointer(new InstancePointer(diffuse));
		}
		com.earthview.world.graphic.ColourValue specularParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		specularParamValue.setDelegate(true);
		specularParamValue.setInstancePointer(new InstancePointer(specular));
		IClassFactory specularParamValueClassFactory = GlobalClassFactoryMap.get(specularParamValue.getCppInstanceTypeName());
		if (specularParamValueClassFactory != null)
		{
			specularParamValue.setDelegate(true);
			specularParamValue = (com.earthview.world.graphic.ColourValue)specularParamValueClassFactory.create();
			specularParamValue.setDelegate(true);
			specularParamValue.setInstancePointer(new InstancePointer(specular));
		}
		com.earthview.world.graphic.ColourValue emissiveParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		emissiveParamValue.setDelegate(true);
		emissiveParamValue.setInstancePointer(new InstancePointer(emissive));
		IClassFactory emissiveParamValueClassFactory = GlobalClassFactoryMap.get(emissiveParamValue.getCppInstanceTypeName());
		if (emissiveParamValueClassFactory != null)
		{
			emissiveParamValue.setDelegate(true);
			emissiveParamValue = (com.earthview.world.graphic.ColourValue)emissiveParamValueClassFactory.create();
			emissiveParamValue.setDelegate(true);
			emissiveParamValue.setInstancePointer(new InstancePointer(emissive));
		}
		double shininessParamValue = shininess;
		int trackingParamValue = tracking;
		_setSurfaceParams(ambientParamValue, diffuseParamValue, specularParamValue, emissiveParamValue, shininessParamValue, trackingParamValue);
	}

	native private void _setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32(long pNativeObject, long ambient, long diffuse, long specular, long emissive, double shininess, int tracking);
	/**
	 * 设置物体表面的参数
	 * @param ambient 环境光的反射系数
	 * @param diffuse 漫射光的反射系数
	 * @param specular 镜面光的反射系数
	 * @param emissive 自发光的反射系数
	 * @param shininess 镜面反射光的亮度值
	 * @param tracking 顶点颜色跟踪类型
	 */
	public void _setSurfaceParams(com.earthview.world.graphic.ColourValue ambient, com.earthview.world.graphic.ColourValue diffuse, com.earthview.world.graphic.ColourValue specular, com.earthview.world.graphic.ColourValue emissive, double shininess, int tracking)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		long diffuseParamValue = diffuse.nativeObject.pointer;
		long specularParamValue = specular.nativeObject.pointer;
		long emissiveParamValue = emissive.nativeObject.pointer;
		double shininessParamValue = shininess;
		int trackingParamValue = tracking;
		_setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32(this.nativeObject.pointer, ambientParamValue, diffuseParamValue, specularParamValue, emissiveParamValue, shininessParamValue, trackingParamValue);
	}
	native private void _setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32_NoVirtual(long pNativeObject, long ambient, long diffuse, long specular, long emissive, double shininess, int tracking);
	protected void _setSurfaceParams_NoVirtual(com.earthview.world.graphic.ColourValue ambient, com.earthview.world.graphic.ColourValue diffuse, com.earthview.world.graphic.ColourValue specular, com.earthview.world.graphic.ColourValue emissive, double shininess, int tracking)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		long diffuseParamValue = diffuse.nativeObject.pointer;
		long specularParamValue = specular.nativeObject.pointer;
		long emissiveParamValue = emissive.nativeObject.pointer;
		double shininessParamValue = shininess;
		int trackingParamValue = tracking;
		_setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32_NoVirtual(this.nativeObject.pointer, ambientParamValue, diffuseParamValue, specularParamValue, emissiveParamValue, shininessParamValue, trackingParamValue);
	}

	protected  void _setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_callback(long ambient, long diffuse, long specular, long emissive, double shininess)
	{
		com.earthview.world.graphic.ColourValue ambientParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		ambientParamValue.setDelegate(true);
		ambientParamValue.setInstancePointer(new InstancePointer(ambient));
		IClassFactory ambientParamValueClassFactory = GlobalClassFactoryMap.get(ambientParamValue.getCppInstanceTypeName());
		if (ambientParamValueClassFactory != null)
		{
			ambientParamValue.setDelegate(true);
			ambientParamValue = (com.earthview.world.graphic.ColourValue)ambientParamValueClassFactory.create();
			ambientParamValue.setDelegate(true);
			ambientParamValue.setInstancePointer(new InstancePointer(ambient));
		}
		com.earthview.world.graphic.ColourValue diffuseParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		diffuseParamValue.setDelegate(true);
		diffuseParamValue.setInstancePointer(new InstancePointer(diffuse));
		IClassFactory diffuseParamValueClassFactory = GlobalClassFactoryMap.get(diffuseParamValue.getCppInstanceTypeName());
		if (diffuseParamValueClassFactory != null)
		{
			diffuseParamValue.setDelegate(true);
			diffuseParamValue = (com.earthview.world.graphic.ColourValue)diffuseParamValueClassFactory.create();
			diffuseParamValue.setDelegate(true);
			diffuseParamValue.setInstancePointer(new InstancePointer(diffuse));
		}
		com.earthview.world.graphic.ColourValue specularParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		specularParamValue.setDelegate(true);
		specularParamValue.setInstancePointer(new InstancePointer(specular));
		IClassFactory specularParamValueClassFactory = GlobalClassFactoryMap.get(specularParamValue.getCppInstanceTypeName());
		if (specularParamValueClassFactory != null)
		{
			specularParamValue.setDelegate(true);
			specularParamValue = (com.earthview.world.graphic.ColourValue)specularParamValueClassFactory.create();
			specularParamValue.setDelegate(true);
			specularParamValue.setInstancePointer(new InstancePointer(specular));
		}
		com.earthview.world.graphic.ColourValue emissiveParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		emissiveParamValue.setDelegate(true);
		emissiveParamValue.setInstancePointer(new InstancePointer(emissive));
		IClassFactory emissiveParamValueClassFactory = GlobalClassFactoryMap.get(emissiveParamValue.getCppInstanceTypeName());
		if (emissiveParamValueClassFactory != null)
		{
			emissiveParamValue.setDelegate(true);
			emissiveParamValue = (com.earthview.world.graphic.ColourValue)emissiveParamValueClassFactory.create();
			emissiveParamValue.setDelegate(true);
			emissiveParamValue.setInstancePointer(new InstancePointer(emissive));
		}
		double shininessParamValue = shininess;
		_setSurfaceParams(ambientParamValue, diffuseParamValue, specularParamValue, emissiveParamValue, shininessParamValue);
	}

	native private void _setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real(long pNativeObject, long ambient, long diffuse, long specular, long emissive, double shininess);
	public void _setSurfaceParams(com.earthview.world.graphic.ColourValue ambient, com.earthview.world.graphic.ColourValue diffuse, com.earthview.world.graphic.ColourValue specular, com.earthview.world.graphic.ColourValue emissive, double shininess)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		long diffuseParamValue = diffuse.nativeObject.pointer;
		long specularParamValue = specular.nativeObject.pointer;
		long emissiveParamValue = emissive.nativeObject.pointer;
		double shininessParamValue = shininess;
		_setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real(this.nativeObject.pointer, ambientParamValue, diffuseParamValue, specularParamValue, emissiveParamValue, shininessParamValue);
	}
	native private void _setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_NoVirtual(long pNativeObject, long ambient, long diffuse, long specular, long emissive, double shininess);
	protected void _setSurfaceParams_NoVirtual(com.earthview.world.graphic.ColourValue ambient, com.earthview.world.graphic.ColourValue diffuse, com.earthview.world.graphic.ColourValue specular, com.earthview.world.graphic.ColourValue emissive, double shininess)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		long diffuseParamValue = diffuse.nativeObject.pointer;
		long specularParamValue = specular.nativeObject.pointer;
		long emissiveParamValue = emissive.nativeObject.pointer;
		double shininessParamValue = shininess;
		_setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_NoVirtual(this.nativeObject.pointer, ambientParamValue, diffuseParamValue, specularParamValue, emissiveParamValue, shininessParamValue);
	}

	protected  void _setPointSpritesEnabled_ev_bool_callback(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		_setPointSpritesEnabled(enabledParamValue);
	}

	native private void _setPointSpritesEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置是否启用点精灵
	 * @param  
	 */
	public void _setPointSpritesEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		_setPointSpritesEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void _setPointSpritesEnabled_ev_bool_NoVirtual(long pNativeObject, boolean enabled);
	protected void _setPointSpritesEnabled_NoVirtual(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		_setPointSpritesEnabled_ev_bool_NoVirtual(this.nativeObject.pointer, enabledParamValue);
	}

	protected  void _setPointParameters_Real_ev_bool_Real_Real_Real_Real_Real_callback(double size, boolean attenuationEnabled, double constant, double linear, double quadratic, double minSize, double maxSize)
	{
		double sizeParamValue = size;
		boolean attenuationEnabledParamValue = attenuationEnabled;
		double constantParamValue = constant;
		double linearParamValue = linear;
		double quadraticParamValue = quadratic;
		double minSizeParamValue = minSize;
		double maxSizeParamValue = maxSize;
		_setPointParameters(sizeParamValue, attenuationEnabledParamValue, constantParamValue, linearParamValue, quadraticParamValue, minSizeParamValue, maxSizeParamValue);
	}

	native private void _setPointParameters_Real_ev_bool_Real_Real_Real_Real_Real(long pNativeObject, double size, boolean attenuationEnabled, double constant, double linear, double quadratic, double minSize, double maxSize);
	/**
	 * 设置点精灵参数
	 * @param  
	 */
	public void _setPointParameters(double size, boolean attenuationEnabled, double constant, double linear, double quadratic, double minSize, double maxSize)
	{
		double sizeParamValue = size;
		boolean attenuationEnabledParamValue = attenuationEnabled;
		double constantParamValue = constant;
		double linearParamValue = linear;
		double quadraticParamValue = quadratic;
		double minSizeParamValue = minSize;
		double maxSizeParamValue = maxSize;
		_setPointParameters_Real_ev_bool_Real_Real_Real_Real_Real(this.nativeObject.pointer, sizeParamValue, attenuationEnabledParamValue, constantParamValue, linearParamValue, quadraticParamValue, minSizeParamValue, maxSizeParamValue);
	}
	native private void _setPointParameters_Real_ev_bool_Real_Real_Real_Real_Real_NoVirtual(long pNativeObject, double size, boolean attenuationEnabled, double constant, double linear, double quadratic, double minSize, double maxSize);
	protected void _setPointParameters_NoVirtual(double size, boolean attenuationEnabled, double constant, double linear, double quadratic, double minSize, double maxSize)
	{
		double sizeParamValue = size;
		boolean attenuationEnabledParamValue = attenuationEnabled;
		double constantParamValue = constant;
		double linearParamValue = linear;
		double quadraticParamValue = quadratic;
		double minSizeParamValue = minSize;
		double maxSizeParamValue = maxSize;
		_setPointParameters_Real_ev_bool_Real_Real_Real_Real_Real_NoVirtual(this.nativeObject.pointer, sizeParamValue, attenuationEnabledParamValue, constantParamValue, linearParamValue, quadraticParamValue, minSizeParamValue, maxSizeParamValue);
	}

	protected  void _setTexture_ev_size_t_ev_bool_CTexturePtr_callback(long unit, boolean enabled, long texPtr)
	{
		long unitParamValue = unit;
		boolean enabledParamValue = enabled;
		com.earthview.world.graphic.TexturePtr texPtrParamValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		texPtrParamValue.setDelegate(true);
		texPtrParamValue.setInstancePointer(new InstancePointer(texPtr));
		IClassFactory texPtrParamValueClassFactory = GlobalClassFactoryMap.get(texPtrParamValue.getCppInstanceTypeName());
		if (texPtrParamValueClassFactory != null)
		{
			texPtrParamValue.setDelegate(true);
			texPtrParamValue = (com.earthview.world.graphic.TexturePtr)texPtrParamValueClassFactory.create();
			texPtrParamValue.setDelegate(true);
			texPtrParamValue.setInstancePointer(new InstancePointer(texPtr));
		}
		_setTexture(unitParamValue, enabledParamValue, texPtrParamValue);
	}

	native private void _setTexture_ev_size_t_ev_bool_CTexturePtr(long pNativeObject, long unit, boolean enabled, long texPtr);
	/**
	 * 设置纹理
	 * @param unit 纹理单元的索引
	 * @param enabled 
	 * @param texPtr 
	 */
	public void _setTexture(long unit, boolean enabled, com.earthview.world.graphic.TexturePtr texPtr)
	{
		long unitParamValue = unit;
		boolean enabledParamValue = enabled;
		long texPtrParamValue = texPtr.nativeObject.pointer;
		_setTexture_ev_size_t_ev_bool_CTexturePtr(this.nativeObject.pointer, unitParamValue, enabledParamValue, texPtrParamValue);
	}
	native private void _setTexture_ev_size_t_ev_bool_CTexturePtr_NoVirtual(long pNativeObject, long unit, boolean enabled, long texPtr);
	protected void _setTexture_NoVirtual(long unit, boolean enabled, com.earthview.world.graphic.TexturePtr texPtr)
	{
		long unitParamValue = unit;
		boolean enabledParamValue = enabled;
		long texPtrParamValue = texPtr.nativeObject.pointer;
		_setTexture_ev_size_t_ev_bool_CTexturePtr_NoVirtual(this.nativeObject.pointer, unitParamValue, enabledParamValue, texPtrParamValue);
	}

	protected  void _setTexture_ev_size_t_ev_bool_EVString_callback(long unit, boolean enabled, String texname)
	{
		long unitParamValue = unit;
		boolean enabledParamValue = enabled;
		String texnameParamValue = texname;
		_setTexture(unitParamValue, enabledParamValue, texnameParamValue);
	}

	native private void _setTexture_ev_size_t_ev_bool_EVString(long pNativeObject, long unit, boolean enabled, String texname);
	/**
	 * 设置纹理
	 * @param unit 将要修改的纹理单元的索引
	 * @param enabled 
	 * @param texname 纹理的名字
	 */
	public void _setTexture(long unit, boolean enabled, String texname)
	{
		long unitParamValue = unit;
		boolean enabledParamValue = enabled;
		String texnameParamValue = texname;
		_setTexture_ev_size_t_ev_bool_EVString(this.nativeObject.pointer, unitParamValue, enabledParamValue, texnameParamValue);
	}
	native private void _setTexture_ev_size_t_ev_bool_EVString_NoVirtual(long pNativeObject, long unit, boolean enabled, String texname);
	protected void _setTexture_NoVirtual(long unit, boolean enabled, String texname)
	{
		long unitParamValue = unit;
		boolean enabledParamValue = enabled;
		String texnameParamValue = texname;
		_setTexture_ev_size_t_ev_bool_EVString_NoVirtual(this.nativeObject.pointer, unitParamValue, enabledParamValue, texnameParamValue);
	}

	protected  void _setVertexTexture_ev_size_t_CTexturePtr_callback(long unit, long tex)
	{
		long unitParamValue = unit;
		com.earthview.world.graphic.TexturePtr texParamValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		texParamValue.setDelegate(true);
		texParamValue.setInstancePointer(new InstancePointer(tex));
		IClassFactory texParamValueClassFactory = GlobalClassFactoryMap.get(texParamValue.getCppInstanceTypeName());
		if (texParamValueClassFactory != null)
		{
			texParamValue.setDelegate(true);
			texParamValue = (com.earthview.world.graphic.TexturePtr)texParamValueClassFactory.create();
			texParamValue.setDelegate(true);
			texParamValue.setInstancePointer(new InstancePointer(tex));
		}
		_setVertexTexture(unitParamValue, texParamValue);
	}

	native private void _setVertexTexture_ev_size_t_CTexturePtr(long pNativeObject, long unit, long tex);
	/**
	 * 绑定纹理到顶点
	 * @param unit 
	 * @param tex 
	 */
	public void _setVertexTexture(long unit, com.earthview.world.graphic.TexturePtr tex)
	{
		long unitParamValue = unit;
		long texParamValue = tex.nativeObject.pointer;
		_setVertexTexture_ev_size_t_CTexturePtr(this.nativeObject.pointer, unitParamValue, texParamValue);
	}
	native private void _setVertexTexture_ev_size_t_CTexturePtr_NoVirtual(long pNativeObject, long unit, long tex);
	protected void _setVertexTexture_NoVirtual(long unit, com.earthview.world.graphic.TexturePtr tex)
	{
		long unitParamValue = unit;
		long texParamValue = tex.nativeObject.pointer;
		_setVertexTexture_ev_size_t_CTexturePtr_NoVirtual(this.nativeObject.pointer, unitParamValue, texParamValue);
	}

	protected  void _setTextureCoordSet_ev_size_t_ev_size_t_callback(long unit, long index)
	{
		long unitParamValue = unit;
		long indexParamValue = index;
		_setTextureCoordSet(unitParamValue, indexParamValue);
	}

	native private void _setTextureCoordSet_ev_size_t_ev_size_t(long pNativeObject, long unit, long index);
	/**
	 * 设置纹理坐标索引
	 * @param unit 纹理单元
	 * @param index 纹理坐标的索引
	 */
	public void _setTextureCoordSet(long unit, long index)
	{
		long unitParamValue = unit;
		long indexParamValue = index;
		_setTextureCoordSet_ev_size_t_ev_size_t(this.nativeObject.pointer, unitParamValue, indexParamValue);
	}
	native private void _setTextureCoordSet_ev_size_t_ev_size_t_NoVirtual(long pNativeObject, long unit, long index);
	protected void _setTextureCoordSet_NoVirtual(long unit, long index)
	{
		long unitParamValue = unit;
		long indexParamValue = index;
		_setTextureCoordSet_ev_size_t_ev_size_t_NoVirtual(this.nativeObject.pointer, unitParamValue, indexParamValue);
	}

	protected  void _setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_CFrustum_callback(long unit, int m, long ref_frustum)
	{
		long unitParamValue = unit;
		TexCoordCalcMethod mParamValue = TexCoordCalcMethod.toEnum(m);
		com.earthview.world.graphic.Frustum ref_frustumParamValue = (ref_frustum == 0L ? null : new com.earthview.world.graphic.Frustum(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_frustumParamValue != null)
		{
		ref_frustumParamValue.setDelegate(true);
		ref_frustumParamValue.setInstancePointer(new InstancePointer(ref_frustum));
		IClassFactory ref_frustumParamValueClassFactory = GlobalClassFactoryMap.get(ref_frustumParamValue.getCppInstanceTypeName());
		if (ref_frustumParamValueClassFactory != null)
		{
			ref_frustumParamValue.setDelegate(true);
			ref_frustumParamValue = (com.earthview.world.graphic.Frustum)ref_frustumParamValueClassFactory.create();
			ref_frustumParamValue.setDelegate(true);
			ref_frustumParamValue.setInstancePointer(new InstancePointer(ref_frustum));
		}
		}
		_setTextureCoordCalculation(unitParamValue, mParamValue, ref_frustumParamValue);
	}

	native private void _setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_CFrustum(long pNativeObject, long unit, int m, long ref_frustum);
	/**
	 * 设置一种自动计算纹理坐标的方法
	 * @param unit 纹理单元
	 * @param m 计算方法
	 * @param frustum 平截头体选项
	 */
	public void _setTextureCoordCalculation(long unit, TexCoordCalcMethod m, com.earthview.world.graphic.Frustum ref_frustum)
	{
		long unitParamValue = unit;
		int mParamValue = m.getValue();
		long ref_frustumParamValue = (ref_frustum == null ? 0L : ref_frustum.nativeObject.pointer);
		_setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_CFrustum(this.nativeObject.pointer, unitParamValue, mParamValue, ref_frustumParamValue);
	}
	native private void _setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_CFrustum_NoVirtual(long pNativeObject, long unit, int m, long ref_frustum);
	protected void _setTextureCoordCalculation_NoVirtual(long unit, TexCoordCalcMethod m, com.earthview.world.graphic.Frustum ref_frustum)
	{
		long unitParamValue = unit;
		int mParamValue = m.getValue();
		long ref_frustumParamValue = (ref_frustum == null ? 0L : ref_frustum.nativeObject.pointer);
		_setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_CFrustum_NoVirtual(this.nativeObject.pointer, unitParamValue, mParamValue, ref_frustumParamValue);
	}

	protected  void _setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_callback(long unit, int m)
	{
		long unitParamValue = unit;
		TexCoordCalcMethod mParamValue = TexCoordCalcMethod.toEnum(m);
		_setTextureCoordCalculation(unitParamValue, mParamValue);
	}

	native private void _setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod(long pNativeObject, long unit, int m);
	/**
	 * 设置一种自动计算纹理坐标的方法
	 * @param unit 纹理单元
	 * @param m 计算方法
	 * @param frustum 平截头体选项
	 */
	public void _setTextureCoordCalculation(long unit, TexCoordCalcMethod m)
	{
		long unitParamValue = unit;
		int mParamValue = m.getValue();
		_setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod(this.nativeObject.pointer, unitParamValue, mParamValue);
	}
	native private void _setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_NoVirtual(long pNativeObject, long unit, int m);
	protected void _setTextureCoordCalculation_NoVirtual(long unit, TexCoordCalcMethod m)
	{
		long unitParamValue = unit;
		int mParamValue = m.getValue();
		_setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_NoVirtual(this.nativeObject.pointer, unitParamValue, mParamValue);
	}

	protected  void _setTextureBlendMode_ev_size_t_CLayerBlendModeEx_callback(long unit, long bm)
	{
		long unitParamValue = unit;
		com.earthview.world.graphic.LayerBlendModeEx bmParamValue = new com.earthview.world.graphic.LayerBlendModeEx(CreatedWhenConstruct.CWC_NotToCreate);
		bmParamValue.setDelegate(true);
		bmParamValue.setInstancePointer(new InstancePointer(bm));
		IClassFactory bmParamValueClassFactory = GlobalClassFactoryMap.get(bmParamValue.getCppInstanceTypeName());
		if (bmParamValueClassFactory != null)
		{
			bmParamValue.setDelegate(true);
			bmParamValue = (com.earthview.world.graphic.LayerBlendModeEx)bmParamValueClassFactory.create();
			bmParamValue.setDelegate(true);
			bmParamValue.setInstancePointer(new InstancePointer(bm));
		}
		_setTextureBlendMode(unitParamValue, bmParamValue);
	}

	native private void _setTextureBlendMode_ev_size_t_CLayerBlendModeEx(long pNativeObject, long unit, long bm);
	/**
	 * 设置纹理混合方式
	 * @param unit 纹理单元
	 * @param bm 混合模型的细节
	 */
	public void _setTextureBlendMode(long unit, com.earthview.world.graphic.LayerBlendModeEx bm)
	{
		long unitParamValue = unit;
		long bmParamValue = bm.nativeObject.pointer;
		_setTextureBlendMode_ev_size_t_CLayerBlendModeEx(this.nativeObject.pointer, unitParamValue, bmParamValue);
	}
	native private void _setTextureBlendMode_ev_size_t_CLayerBlendModeEx_NoVirtual(long pNativeObject, long unit, long bm);
	protected void _setTextureBlendMode_NoVirtual(long unit, com.earthview.world.graphic.LayerBlendModeEx bm)
	{
		long unitParamValue = unit;
		long bmParamValue = bm.nativeObject.pointer;
		_setTextureBlendMode_ev_size_t_CLayerBlendModeEx_NoVirtual(this.nativeObject.pointer, unitParamValue, bmParamValue);
	}

	protected  void _setTextureUnitFiltering_ev_size_t_FilterOptions_FilterOptions_FilterOptions_callback(long unit, int minFilter, int magFilter, int mipFilter)
	{
		long unitParamValue = unit;
		com.earthview.world.graphic.FilterOptions minFilterParamValue = com.earthview.world.graphic.FilterOptions.toEnum(minFilter);
		com.earthview.world.graphic.FilterOptions magFilterParamValue = com.earthview.world.graphic.FilterOptions.toEnum(magFilter);
		com.earthview.world.graphic.FilterOptions mipFilterParamValue = com.earthview.world.graphic.FilterOptions.toEnum(mipFilter);
		_setTextureUnitFiltering(unitParamValue, minFilterParamValue, magFilterParamValue, mipFilterParamValue);
	}

	native private void _setTextureUnitFiltering_ev_size_t_FilterOptions_FilterOptions_FilterOptions(long pNativeObject, long unit, int minFilter, int magFilter, int mipFilter);
	/**
	 * 设置纹理过滤方式
	 * @param unit 纹理单元
	 * @param minFilter 
	 * @param magFilter 
	 * @param mipFilter 
	 */
	public void _setTextureUnitFiltering(long unit, com.earthview.world.graphic.FilterOptions minFilter, com.earthview.world.graphic.FilterOptions magFilter, com.earthview.world.graphic.FilterOptions mipFilter)
	{
		long unitParamValue = unit;
		int minFilterParamValue = minFilter.getValue();
		int magFilterParamValue = magFilter.getValue();
		int mipFilterParamValue = mipFilter.getValue();
		_setTextureUnitFiltering_ev_size_t_FilterOptions_FilterOptions_FilterOptions(this.nativeObject.pointer, unitParamValue, minFilterParamValue, magFilterParamValue, mipFilterParamValue);
	}
	native private void _setTextureUnitFiltering_ev_size_t_FilterOptions_FilterOptions_FilterOptions_NoVirtual(long pNativeObject, long unit, int minFilter, int magFilter, int mipFilter);
	protected void _setTextureUnitFiltering_NoVirtual(long unit, com.earthview.world.graphic.FilterOptions minFilter, com.earthview.world.graphic.FilterOptions magFilter, com.earthview.world.graphic.FilterOptions mipFilter)
	{
		long unitParamValue = unit;
		int minFilterParamValue = minFilter.getValue();
		int magFilterParamValue = magFilter.getValue();
		int mipFilterParamValue = mipFilter.getValue();
		_setTextureUnitFiltering_ev_size_t_FilterOptions_FilterOptions_FilterOptions_NoVirtual(this.nativeObject.pointer, unitParamValue, minFilterParamValue, magFilterParamValue, mipFilterParamValue);
	}

	protected  void _setTextureUnitFiltering_ev_size_t_FilterType_FilterOptions_callback(long unit, int ftype, int filter)
	{
		long unitParamValue = unit;
		com.earthview.world.graphic.FilterType ftypeParamValue = com.earthview.world.graphic.FilterType.toEnum(ftype);
		com.earthview.world.graphic.FilterOptions filterParamValue = com.earthview.world.graphic.FilterOptions.toEnum(filter);
		_setTextureUnitFiltering(unitParamValue, ftypeParamValue, filterParamValue);
	}

	native private void _setTextureUnitFiltering_ev_size_t_FilterType_FilterOptions(long pNativeObject, long unit, int ftype, int filter);
	/**
	 * 设置纹理过滤方式
	 * @param unit 纹理单元
	 * @param ftype 过滤器的类型
	 * @param filter 使用的过滤器
	 */
	public void _setTextureUnitFiltering(long unit, com.earthview.world.graphic.FilterType ftype, com.earthview.world.graphic.FilterOptions filter)
	{
		long unitParamValue = unit;
		int ftypeParamValue = ftype.getValue();
		int filterParamValue = filter.getValue();
		_setTextureUnitFiltering_ev_size_t_FilterType_FilterOptions(this.nativeObject.pointer, unitParamValue, ftypeParamValue, filterParamValue);
	}
	native private void _setTextureUnitFiltering_ev_size_t_FilterType_FilterOptions_NoVirtual(long pNativeObject, long unit, int ftype, int filter);
	protected void _setTextureUnitFiltering_NoVirtual(long unit, com.earthview.world.graphic.FilterType ftype, com.earthview.world.graphic.FilterOptions filter)
	{
		long unitParamValue = unit;
		int ftypeParamValue = ftype.getValue();
		int filterParamValue = filter.getValue();
		_setTextureUnitFiltering_ev_size_t_FilterType_FilterOptions_NoVirtual(this.nativeObject.pointer, unitParamValue, ftypeParamValue, filterParamValue);
	}

	protected  void _setTextureLayerAnisotropy_ev_size_t_ev_uint32_callback(long unit, long maxAnisotropy)
	{
		long unitParamValue = unit;
		long maxAnisotropyParamValue = maxAnisotropy;
		_setTextureLayerAnisotropy(unitParamValue, maxAnisotropyParamValue);
	}

	native private void _setTextureLayerAnisotropy_ev_size_t_ev_uint32(long pNativeObject, long unit, long maxAnisotropy);
	/**
	 * 设置纹理的各向异性值
	 * @param unit 纹理单元
	 * @param maxAnisotropy 
	 */
	public void _setTextureLayerAnisotropy(long unit, long maxAnisotropy)
	{
		long unitParamValue = unit;
		long maxAnisotropyParamValue = maxAnisotropy;
		_setTextureLayerAnisotropy_ev_size_t_ev_uint32(this.nativeObject.pointer, unitParamValue, maxAnisotropyParamValue);
	}
	native private void _setTextureLayerAnisotropy_ev_size_t_ev_uint32_NoVirtual(long pNativeObject, long unit, long maxAnisotropy);
	protected void _setTextureLayerAnisotropy_NoVirtual(long unit, long maxAnisotropy)
	{
		long unitParamValue = unit;
		long maxAnisotropyParamValue = maxAnisotropy;
		_setTextureLayerAnisotropy_ev_size_t_ev_uint32_NoVirtual(this.nativeObject.pointer, unitParamValue, maxAnisotropyParamValue);
	}

	protected  void _setTextureAddressingMode_ev_size_t_UVWAddressingMode_callback(long unit, long uvw)
	{
		long unitParamValue = unit;
		com.earthview.world.graphic.TextureUnitState.Uvwaddressingmode uvwParamValue = new com.earthview.world.graphic.TextureUnitState.Uvwaddressingmode(new InstancePointer(uvw));
		_setTextureAddressingMode(unitParamValue, uvwParamValue);
	}

	native private void _setTextureAddressingMode_ev_size_t_UVWAddressingMode(long pNativeObject, long unit, long uvw);
	/**
	 * 设置纹理单元的寻址模式
	 * @param unit 纹理单元
	 * @param uvw 
	 */
	public void _setTextureAddressingMode(long unit, com.earthview.world.graphic.TextureUnitState.Uvwaddressingmode uvw)
	{
		long unitParamValue = unit;
		long uvwParamValue = uvw.nativeObject.pointer;
		_setTextureAddressingMode_ev_size_t_UVWAddressingMode(this.nativeObject.pointer, unitParamValue, uvwParamValue);
	}
	native private void _setTextureAddressingMode_ev_size_t_UVWAddressingMode_NoVirtual(long pNativeObject, long unit, long uvw);
	protected void _setTextureAddressingMode_NoVirtual(long unit, com.earthview.world.graphic.TextureUnitState.Uvwaddressingmode uvw)
	{
		long unitParamValue = unit;
		long uvwParamValue = uvw.nativeObject.pointer;
		_setTextureAddressingMode_ev_size_t_UVWAddressingMode_NoVirtual(this.nativeObject.pointer, unitParamValue, uvwParamValue);
	}

	protected  void _setTextureBorderColour_ev_size_t_CColourValue_callback(long unit, long colour)
	{
		long unitParamValue = unit;
		com.earthview.world.graphic.ColourValue colourParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colourParamValue.setDelegate(true);
		colourParamValue.setInstancePointer(new InstancePointer(colour));
		IClassFactory colourParamValueClassFactory = GlobalClassFactoryMap.get(colourParamValue.getCppInstanceTypeName());
		if (colourParamValueClassFactory != null)
		{
			colourParamValue.setDelegate(true);
			colourParamValue = (com.earthview.world.graphic.ColourValue)colourParamValueClassFactory.create();
			colourParamValue.setDelegate(true);
			colourParamValue.setInstancePointer(new InstancePointer(colour));
		}
		_setTextureBorderColour(unitParamValue, colourParamValue);
	}

	native private void _setTextureBorderColour_ev_size_t_CColourValue(long pNativeObject, long unit, long colour);
	/**
	 * 设置纹理单元的纹理边界颜色
	 * @param unit 纹理单元
	 * @param colour 
	 */
	public void _setTextureBorderColour(long unit, com.earthview.world.graphic.ColourValue colour)
	{
		long unitParamValue = unit;
		long colourParamValue = colour.nativeObject.pointer;
		_setTextureBorderColour_ev_size_t_CColourValue(this.nativeObject.pointer, unitParamValue, colourParamValue);
	}
	native private void _setTextureBorderColour_ev_size_t_CColourValue_NoVirtual(long pNativeObject, long unit, long colour);
	protected void _setTextureBorderColour_NoVirtual(long unit, com.earthview.world.graphic.ColourValue colour)
	{
		long unitParamValue = unit;
		long colourParamValue = colour.nativeObject.pointer;
		_setTextureBorderColour_ev_size_t_CColourValue_NoVirtual(this.nativeObject.pointer, unitParamValue, colourParamValue);
	}

	protected  void _setTextureMipmapBias_ev_size_t_ev_real32_callback(long unit, float bias)
	{
		long unitParamValue = unit;
		float biasParamValue = bias;
		_setTextureMipmapBias(unitParamValue, biasParamValue);
	}

	native private void _setTextureMipmapBias_ev_size_t_ev_real32(long pNativeObject, long unit, float bias);
	/**
	 * 设置纹理单元的mipmap偏移值
	 * @param unit 纹理单元
	 * @param bias 
	 */
	public void _setTextureMipmapBias(long unit, float bias)
	{
		long unitParamValue = unit;
		float biasParamValue = bias;
		_setTextureMipmapBias_ev_size_t_ev_real32(this.nativeObject.pointer, unitParamValue, biasParamValue);
	}
	native private void _setTextureMipmapBias_ev_size_t_ev_real32_NoVirtual(long pNativeObject, long unit, float bias);
	protected void _setTextureMipmapBias_NoVirtual(long unit, float bias)
	{
		long unitParamValue = unit;
		float biasParamValue = bias;
		_setTextureMipmapBias_ev_size_t_ev_real32_NoVirtual(this.nativeObject.pointer, unitParamValue, biasParamValue);
	}

	protected  void _setTextureMatrix_ev_size_t_CMatrix4_callback(long unit, long xform)
	{
		long unitParamValue = unit;
		com.earthview.world.spatial.math.Matrix4 xformParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		xformParamValue.setDelegate(true);
		xformParamValue.setInstancePointer(new InstancePointer(xform));
		IClassFactory xformParamValueClassFactory = GlobalClassFactoryMap.get(xformParamValue.getCppInstanceTypeName());
		if (xformParamValueClassFactory != null)
		{
			xformParamValue.setDelegate(true);
			xformParamValue = (com.earthview.world.spatial.math.Matrix4)xformParamValueClassFactory.create();
			xformParamValue.setDelegate(true);
			xformParamValue.setInstancePointer(new InstancePointer(xform));
		}
		_setTextureMatrix(unitParamValue, xformParamValue);
	}

	native private void _setTextureMatrix_ev_size_t_CMatrix4(long pNativeObject, long unit, long xform);
	/**
	 * 设置纹理坐标变换矩阵
	 * @param unit 纹理单元
	 * @param xform 4*4的矩阵
	 */
	public void _setTextureMatrix(long unit, com.earthview.world.spatial.math.Matrix4 xform)
	{
		long unitParamValue = unit;
		long xformParamValue = xform.nativeObject.pointer;
		_setTextureMatrix_ev_size_t_CMatrix4(this.nativeObject.pointer, unitParamValue, xformParamValue);
	}
	native private void _setTextureMatrix_ev_size_t_CMatrix4_NoVirtual(long pNativeObject, long unit, long xform);
	protected void _setTextureMatrix_NoVirtual(long unit, com.earthview.world.spatial.math.Matrix4 xform)
	{
		long unitParamValue = unit;
		long xformParamValue = xform.nativeObject.pointer;
		_setTextureMatrix_ev_size_t_CMatrix4_NoVirtual(this.nativeObject.pointer, unitParamValue, xformParamValue);
	}

	protected  void _setSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_callback(int sourceFactor, int destFactor, int op)
	{
		com.earthview.world.graphic.SceneBlendFactor sourceFactorParamValue = com.earthview.world.graphic.SceneBlendFactor.toEnum(sourceFactor);
		com.earthview.world.graphic.SceneBlendFactor destFactorParamValue = com.earthview.world.graphic.SceneBlendFactor.toEnum(destFactor);
		com.earthview.world.graphic.SceneBlendOperation opParamValue = com.earthview.world.graphic.SceneBlendOperation.toEnum(op);
		_setSceneBlending(sourceFactorParamValue, destFactorParamValue, opParamValue);
	}

	native private void _setSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation(long pNativeObject, int sourceFactor, int destFactor, int op);
	/**
	 * 设置场景混合模式
	 * @param sourceFactor 源因数
	 * @param destFactor 目标因数
	 * @param op 联合像元的混合模型
	 */
	public void _setSceneBlending(com.earthview.world.graphic.SceneBlendFactor sourceFactor, com.earthview.world.graphic.SceneBlendFactor destFactor, com.earthview.world.graphic.SceneBlendOperation op)
	{
		int sourceFactorParamValue = sourceFactor.getValue();
		int destFactorParamValue = destFactor.getValue();
		int opParamValue = op.getValue();
		_setSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation(this.nativeObject.pointer, sourceFactorParamValue, destFactorParamValue, opParamValue);
	}
	native private void _setSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_NoVirtual(long pNativeObject, int sourceFactor, int destFactor, int op);
	protected void _setSceneBlending_NoVirtual(com.earthview.world.graphic.SceneBlendFactor sourceFactor, com.earthview.world.graphic.SceneBlendFactor destFactor, com.earthview.world.graphic.SceneBlendOperation op)
	{
		int sourceFactorParamValue = sourceFactor.getValue();
		int destFactorParamValue = destFactor.getValue();
		int opParamValue = op.getValue();
		_setSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_NoVirtual(this.nativeObject.pointer, sourceFactorParamValue, destFactorParamValue, opParamValue);
	}

	protected  void _setSceneBlending_SceneBlendFactor_SceneBlendFactor_callback(int sourceFactor, int destFactor)
	{
		com.earthview.world.graphic.SceneBlendFactor sourceFactorParamValue = com.earthview.world.graphic.SceneBlendFactor.toEnum(sourceFactor);
		com.earthview.world.graphic.SceneBlendFactor destFactorParamValue = com.earthview.world.graphic.SceneBlendFactor.toEnum(destFactor);
		_setSceneBlending(sourceFactorParamValue, destFactorParamValue);
	}

	native private void _setSceneBlending_SceneBlendFactor_SceneBlendFactor(long pNativeObject, int sourceFactor, int destFactor);
	/**
	 * 设置场景混合模式
	 * @param sourceFactor 计算的源因数
	 * @param destFactor 计算的目标因数
	 */
	public void _setSceneBlending(com.earthview.world.graphic.SceneBlendFactor sourceFactor, com.earthview.world.graphic.SceneBlendFactor destFactor)
	{
		int sourceFactorParamValue = sourceFactor.getValue();
		int destFactorParamValue = destFactor.getValue();
		_setSceneBlending_SceneBlendFactor_SceneBlendFactor(this.nativeObject.pointer, sourceFactorParamValue, destFactorParamValue);
	}
	native private void _setSceneBlending_SceneBlendFactor_SceneBlendFactor_NoVirtual(long pNativeObject, int sourceFactor, int destFactor);
	protected void _setSceneBlending_NoVirtual(com.earthview.world.graphic.SceneBlendFactor sourceFactor, com.earthview.world.graphic.SceneBlendFactor destFactor)
	{
		int sourceFactorParamValue = sourceFactor.getValue();
		int destFactorParamValue = destFactor.getValue();
		_setSceneBlending_SceneBlendFactor_SceneBlendFactor_NoVirtual(this.nativeObject.pointer, sourceFactorParamValue, destFactorParamValue);
	}

	protected  void _setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation_callback(int sourceFactor, int destFactor, int sourceFactorAlpha, int destFactorAlpha, int op, int alphaOp)
	{
		com.earthview.world.graphic.SceneBlendFactor sourceFactorParamValue = com.earthview.world.graphic.SceneBlendFactor.toEnum(sourceFactor);
		com.earthview.world.graphic.SceneBlendFactor destFactorParamValue = com.earthview.world.graphic.SceneBlendFactor.toEnum(destFactor);
		com.earthview.world.graphic.SceneBlendFactor sourceFactorAlphaParamValue = com.earthview.world.graphic.SceneBlendFactor.toEnum(sourceFactorAlpha);
		com.earthview.world.graphic.SceneBlendFactor destFactorAlphaParamValue = com.earthview.world.graphic.SceneBlendFactor.toEnum(destFactorAlpha);
		com.earthview.world.graphic.SceneBlendOperation opParamValue = com.earthview.world.graphic.SceneBlendOperation.toEnum(op);
		com.earthview.world.graphic.SceneBlendOperation alphaOpParamValue = com.earthview.world.graphic.SceneBlendOperation.toEnum(alphaOp);
		_setSeparateSceneBlending(sourceFactorParamValue, destFactorParamValue, sourceFactorAlphaParamValue, destFactorAlphaParamValue, opParamValue, alphaOpParamValue);
	}

	native private void _setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation(long pNativeObject, int sourceFactor, int destFactor, int sourceFactorAlpha, int destFactorAlpha, int op, int alphaOp);
	/**
	 * 为RGB通道和Alpha通道分别设置场景混合模式
	 * @param sourceFactor 计算的源因数
	 * @param destFactor 计算的目标因数
	 * @param sourceFactorAlpha alpha通路的计算的源因数
	 * @param destFactorAlpha alpha通路的计算的目标因数
	 * @param op 联合像元的混合模型
	 * @param alphaOp 结合像素和alpha值的混合模型
	 */
	public void _setSeparateSceneBlending(com.earthview.world.graphic.SceneBlendFactor sourceFactor, com.earthview.world.graphic.SceneBlendFactor destFactor, com.earthview.world.graphic.SceneBlendFactor sourceFactorAlpha, com.earthview.world.graphic.SceneBlendFactor destFactorAlpha, com.earthview.world.graphic.SceneBlendOperation op, com.earthview.world.graphic.SceneBlendOperation alphaOp)
	{
		int sourceFactorParamValue = sourceFactor.getValue();
		int destFactorParamValue = destFactor.getValue();
		int sourceFactorAlphaParamValue = sourceFactorAlpha.getValue();
		int destFactorAlphaParamValue = destFactorAlpha.getValue();
		int opParamValue = op.getValue();
		int alphaOpParamValue = alphaOp.getValue();
		_setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation(this.nativeObject.pointer, sourceFactorParamValue, destFactorParamValue, sourceFactorAlphaParamValue, destFactorAlphaParamValue, opParamValue, alphaOpParamValue);
	}
	native private void _setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation_NoVirtual(long pNativeObject, int sourceFactor, int destFactor, int sourceFactorAlpha, int destFactorAlpha, int op, int alphaOp);
	protected void _setSeparateSceneBlending_NoVirtual(com.earthview.world.graphic.SceneBlendFactor sourceFactor, com.earthview.world.graphic.SceneBlendFactor destFactor, com.earthview.world.graphic.SceneBlendFactor sourceFactorAlpha, com.earthview.world.graphic.SceneBlendFactor destFactorAlpha, com.earthview.world.graphic.SceneBlendOperation op, com.earthview.world.graphic.SceneBlendOperation alphaOp)
	{
		int sourceFactorParamValue = sourceFactor.getValue();
		int destFactorParamValue = destFactor.getValue();
		int sourceFactorAlphaParamValue = sourceFactorAlpha.getValue();
		int destFactorAlphaParamValue = destFactorAlpha.getValue();
		int opParamValue = op.getValue();
		int alphaOpParamValue = alphaOp.getValue();
		_setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation_NoVirtual(this.nativeObject.pointer, sourceFactorParamValue, destFactorParamValue, sourceFactorAlphaParamValue, destFactorAlphaParamValue, opParamValue, alphaOpParamValue);
	}

	protected  void _setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_callback(int sourceFactor, int destFactor, int sourceFactorAlpha, int destFactorAlpha, int op)
	{
		com.earthview.world.graphic.SceneBlendFactor sourceFactorParamValue = com.earthview.world.graphic.SceneBlendFactor.toEnum(sourceFactor);
		com.earthview.world.graphic.SceneBlendFactor destFactorParamValue = com.earthview.world.graphic.SceneBlendFactor.toEnum(destFactor);
		com.earthview.world.graphic.SceneBlendFactor sourceFactorAlphaParamValue = com.earthview.world.graphic.SceneBlendFactor.toEnum(sourceFactorAlpha);
		com.earthview.world.graphic.SceneBlendFactor destFactorAlphaParamValue = com.earthview.world.graphic.SceneBlendFactor.toEnum(destFactorAlpha);
		com.earthview.world.graphic.SceneBlendOperation opParamValue = com.earthview.world.graphic.SceneBlendOperation.toEnum(op);
		_setSeparateSceneBlending(sourceFactorParamValue, destFactorParamValue, sourceFactorAlphaParamValue, destFactorAlphaParamValue, opParamValue);
	}

	native private void _setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation(long pNativeObject, int sourceFactor, int destFactor, int sourceFactorAlpha, int destFactorAlpha, int op);
	/**
	 * 为RGB通道和Alpha通道分别设置场景混合模式
	 * @param sourceFactor 计算的源因数
	 * @param destFactor 计算的目标因数
	 * @param sourceFactorAlpha alpha通路的计算的源因数
	 * @param destFactorAlpha alpha通路的计算的目标因数
	 * @param op 联合像元的混合模型
	 */
	public void _setSeparateSceneBlending(com.earthview.world.graphic.SceneBlendFactor sourceFactor, com.earthview.world.graphic.SceneBlendFactor destFactor, com.earthview.world.graphic.SceneBlendFactor sourceFactorAlpha, com.earthview.world.graphic.SceneBlendFactor destFactorAlpha, com.earthview.world.graphic.SceneBlendOperation op)
	{
		int sourceFactorParamValue = sourceFactor.getValue();
		int destFactorParamValue = destFactor.getValue();
		int sourceFactorAlphaParamValue = sourceFactorAlpha.getValue();
		int destFactorAlphaParamValue = destFactorAlpha.getValue();
		int opParamValue = op.getValue();
		_setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation(this.nativeObject.pointer, sourceFactorParamValue, destFactorParamValue, sourceFactorAlphaParamValue, destFactorAlphaParamValue, opParamValue);
	}
	native private void _setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_NoVirtual(long pNativeObject, int sourceFactor, int destFactor, int sourceFactorAlpha, int destFactorAlpha, int op);
	protected void _setSeparateSceneBlending_NoVirtual(com.earthview.world.graphic.SceneBlendFactor sourceFactor, com.earthview.world.graphic.SceneBlendFactor destFactor, com.earthview.world.graphic.SceneBlendFactor sourceFactorAlpha, com.earthview.world.graphic.SceneBlendFactor destFactorAlpha, com.earthview.world.graphic.SceneBlendOperation op)
	{
		int sourceFactorParamValue = sourceFactor.getValue();
		int destFactorParamValue = destFactor.getValue();
		int sourceFactorAlphaParamValue = sourceFactorAlpha.getValue();
		int destFactorAlphaParamValue = destFactorAlpha.getValue();
		int opParamValue = op.getValue();
		_setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_NoVirtual(this.nativeObject.pointer, sourceFactorParamValue, destFactorParamValue, sourceFactorAlphaParamValue, destFactorAlphaParamValue, opParamValue);
	}

	protected  void _setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_callback(int sourceFactor, int destFactor, int sourceFactorAlpha, int destFactorAlpha)
	{
		com.earthview.world.graphic.SceneBlendFactor sourceFactorParamValue = com.earthview.world.graphic.SceneBlendFactor.toEnum(sourceFactor);
		com.earthview.world.graphic.SceneBlendFactor destFactorParamValue = com.earthview.world.graphic.SceneBlendFactor.toEnum(destFactor);
		com.earthview.world.graphic.SceneBlendFactor sourceFactorAlphaParamValue = com.earthview.world.graphic.SceneBlendFactor.toEnum(sourceFactorAlpha);
		com.earthview.world.graphic.SceneBlendFactor destFactorAlphaParamValue = com.earthview.world.graphic.SceneBlendFactor.toEnum(destFactorAlpha);
		_setSeparateSceneBlending(sourceFactorParamValue, destFactorParamValue, sourceFactorAlphaParamValue, destFactorAlphaParamValue);
	}

	native private void _setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor(long pNativeObject, int sourceFactor, int destFactor, int sourceFactorAlpha, int destFactorAlpha);
	/**
	 * 为RGB通道和Alpha通道分别设置场景混合模式
	 * @param sourceFactor 计算的源因数
	 * @param destFactor 计算的目标因数
	 * @param sourceFactorAlpha alpha通路的计算的源因数
	 * @param destFactorAlpha alpha通路的计算的目标因数
	 */
	public void _setSeparateSceneBlending(com.earthview.world.graphic.SceneBlendFactor sourceFactor, com.earthview.world.graphic.SceneBlendFactor destFactor, com.earthview.world.graphic.SceneBlendFactor sourceFactorAlpha, com.earthview.world.graphic.SceneBlendFactor destFactorAlpha)
	{
		int sourceFactorParamValue = sourceFactor.getValue();
		int destFactorParamValue = destFactor.getValue();
		int sourceFactorAlphaParamValue = sourceFactorAlpha.getValue();
		int destFactorAlphaParamValue = destFactorAlpha.getValue();
		_setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor(this.nativeObject.pointer, sourceFactorParamValue, destFactorParamValue, sourceFactorAlphaParamValue, destFactorAlphaParamValue);
	}
	native private void _setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_NoVirtual(long pNativeObject, int sourceFactor, int destFactor, int sourceFactorAlpha, int destFactorAlpha);
	protected void _setSeparateSceneBlending_NoVirtual(com.earthview.world.graphic.SceneBlendFactor sourceFactor, com.earthview.world.graphic.SceneBlendFactor destFactor, com.earthview.world.graphic.SceneBlendFactor sourceFactorAlpha, com.earthview.world.graphic.SceneBlendFactor destFactorAlpha)
	{
		int sourceFactorParamValue = sourceFactor.getValue();
		int destFactorParamValue = destFactor.getValue();
		int sourceFactorAlphaParamValue = sourceFactorAlpha.getValue();
		int destFactorAlphaParamValue = destFactorAlpha.getValue();
		_setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_NoVirtual(this.nativeObject.pointer, sourceFactorParamValue, destFactorParamValue, sourceFactorAlphaParamValue, destFactorAlphaParamValue);
	}

	protected  void _setAlphaRejectSettings_CompareFunction_ev_uchar_ev_bool_callback(int func, short value, boolean alphaToCoverage)
	{
		com.earthview.world.graphic.CompareFunction funcParamValue = com.earthview.world.graphic.CompareFunction.toEnum(func);
		short valueParamValue = value;
		boolean alphaToCoverageParamValue = alphaToCoverage;
		_setAlphaRejectSettings(funcParamValue, valueParamValue, alphaToCoverageParamValue);
	}

	native private void _setAlphaRejectSettings_CompareFunction_ev_uchar_ev_bool(long pNativeObject, int func, short value, boolean alphaToCoverage);
	/**
	 * 设置alpha通道拒绝参数
	 * @param func 比较函数
	 * @param value 每一个像素的alpha值
	 * @param alphaToCoverage 
	 */
	public void _setAlphaRejectSettings(com.earthview.world.graphic.CompareFunction func, short value, boolean alphaToCoverage)
	{
		int funcParamValue = func.getValue();
		short valueParamValue = value;
		boolean alphaToCoverageParamValue = alphaToCoverage;
		_setAlphaRejectSettings_CompareFunction_ev_uchar_ev_bool(this.nativeObject.pointer, funcParamValue, valueParamValue, alphaToCoverageParamValue);
	}
	native private void _setAlphaRejectSettings_CompareFunction_ev_uchar_ev_bool_NoVirtual(long pNativeObject, int func, short value, boolean alphaToCoverage);
	protected void _setAlphaRejectSettings_NoVirtual(com.earthview.world.graphic.CompareFunction func, short value, boolean alphaToCoverage)
	{
		int funcParamValue = func.getValue();
		short valueParamValue = value;
		boolean alphaToCoverageParamValue = alphaToCoverage;
		_setAlphaRejectSettings_CompareFunction_ev_uchar_ev_bool_NoVirtual(this.nativeObject.pointer, funcParamValue, valueParamValue, alphaToCoverageParamValue);
	}

	protected  void _setTextureProjectionRelativeTo_ev_bool_CVector3_callback(boolean enabled, long pos)
	{
		boolean enabledParamValue = enabled;
		com.earthview.world.spatial.math.Vector3 posParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		posParamValue.setDelegate(true);
		posParamValue.setInstancePointer(new InstancePointer(pos));
		IClassFactory posParamValueClassFactory = GlobalClassFactoryMap.get(posParamValue.getCppInstanceTypeName());
		if (posParamValueClassFactory != null)
		{
			posParamValue.setDelegate(true);
			posParamValue = (com.earthview.world.spatial.math.Vector3)posParamValueClassFactory.create();
			posParamValue.setDelegate(true);
			posParamValue.setInstancePointer(new InstancePointer(pos));
		}
		_setTextureProjectionRelativeTo(enabledParamValue, posParamValue);
	}

	native private void _setTextureProjectionRelativeTo_ev_bool_CVector3(long pNativeObject, boolean enabled, long pos);
	/**
	 * 设置纹理的相对投影
	 * @param enabled 
	 * @param pos 
	 */
	public void _setTextureProjectionRelativeTo(boolean enabled, com.earthview.world.spatial.math.Vector3 pos)
	{
		boolean enabledParamValue = enabled;
		long posParamValue = pos.nativeObject.pointer;
		_setTextureProjectionRelativeTo_ev_bool_CVector3(this.nativeObject.pointer, enabledParamValue, posParamValue);
	}
	native private void _setTextureProjectionRelativeTo_ev_bool_CVector3_NoVirtual(long pNativeObject, boolean enabled, long pos);
	protected void _setTextureProjectionRelativeTo_NoVirtual(boolean enabled, com.earthview.world.spatial.math.Vector3 pos)
	{
		boolean enabledParamValue = enabled;
		long posParamValue = pos.nativeObject.pointer;
		_setTextureProjectionRelativeTo_ev_bool_CVector3_NoVirtual(this.nativeObject.pointer, enabledParamValue, posParamValue);
	}

	protected  long _createDepthBufferFor_CRenderTarget_callback(long renderTarget)
	{
		com.earthview.world.graphic.RenderTarget renderTargetParamValue = (renderTarget == 0L ? null : new com.earthview.world.graphic.RenderTarget(CreatedWhenConstruct.CWC_NotToCreate));
		if(renderTargetParamValue != null)
		{
		renderTargetParamValue.setDelegate(true);
		renderTargetParamValue.setInstancePointer(new InstancePointer(renderTarget));
		IClassFactory renderTargetParamValueClassFactory = GlobalClassFactoryMap.get(renderTargetParamValue.getCppInstanceTypeName());
		if (renderTargetParamValueClassFactory != null)
		{
			renderTargetParamValue.setDelegate(true);
			renderTargetParamValue = (com.earthview.world.graphic.RenderTarget)renderTargetParamValueClassFactory.create();
			renderTargetParamValue.setDelegate(true);
			renderTargetParamValue.setInstancePointer(new InstancePointer(renderTarget));
		}
		}
		com.earthview.world.graphic.DepthBuffer returnValue = _createDepthBufferFor(renderTargetParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _createDepthBufferFor_CRenderTarget(long pNativeObject, long renderTarget);
	///zxt add for 1.8v
	public com.earthview.world.graphic.DepthBuffer _createDepthBufferFor(com.earthview.world.graphic.RenderTarget renderTarget)
	{
		long renderTargetParamValue = (renderTarget == null ? 0L : renderTarget.nativeObject.pointer);
		long returnValue = _createDepthBufferFor_CRenderTarget(this.nativeObject.pointer, renderTargetParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.DepthBuffer __returnValue = new com.earthview.world.graphic.DepthBuffer(CreatedWhenConstruct.CWC_NotToCreate, "CDepthBuffer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.DepthBuffer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDepthBuffer");
		}
		return __returnValue;
	}
	native private long _createDepthBufferFor_CRenderTarget_NoVirtual(long pNativeObject, long renderTarget);
	protected com.earthview.world.graphic.DepthBuffer _createDepthBufferFor_NoVirtual(com.earthview.world.graphic.RenderTarget renderTarget)
	{
		long renderTargetParamValue = (renderTarget == null ? 0L : renderTarget.nativeObject.pointer);
		long returnValue = _createDepthBufferFor_CRenderTarget_NoVirtual(this.nativeObject.pointer, renderTargetParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.DepthBuffer __returnValue = new com.earthview.world.graphic.DepthBuffer(CreatedWhenConstruct.CWC_NotToCreate, "CDepthBuffer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.DepthBuffer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDepthBuffer");
		}
		return __returnValue;
	}

	native private void _cleanupDepthBuffers_void(long pNativeObject);
	public void _cleanupDepthBuffers()
	{
		_cleanupDepthBuffers_void(this.nativeObject.pointer);
	}
	native private void _cleanupDepthBuffers_bool(long pNativeObject, boolean bCleanManualBuffers);
	public void _cleanupDepthBuffers(boolean bCleanManualBuffers)
	{
		boolean bCleanManualBuffersParamValue = bCleanManualBuffers;
		_cleanupDepthBuffers_bool(this.nativeObject.pointer, bCleanManualBuffersParamValue);
	}
	protected  void _beginFrame_void_callback()
	{
		_beginFrame();
	}

	native private void _beginFrame_void(long pNativeObject);
	/**
	 * 开始一帧的渲染
	 * @param  
	 */
	public void _beginFrame()
	{
		_beginFrame_void(this.nativeObject.pointer);
	}
	native private void _beginFrame_void_NoVirtual(long pNativeObject);
	protected void _beginFrame_NoVirtual()
	{
		_beginFrame_void_NoVirtual(this.nativeObject.pointer);
	}

	///Dummy structure for render system contexts - implementing RenderSystems can extend
	///as needed
	public static final class RenderSystemContext extends RemoteNativeObject {
	
		public RenderSystemContext(InstancePointer pointer, boolean remote) {
			super(pointer, remote);
		}
		
		public RenderSystemContext(InstancePointer pInstance) {
			super(pInstance);
		}
		
		native private static long Create();
		public RenderSystemContext() {
			super(new InstancePointer(Create()),false);
		}
		
		native private static void Destroy(long pNativeObject);
		public void destroyNativeObject() {
			Destroy(this.nativeObject.pointer);
		}
	}
	protected  long _pauseFrame_void_callback()
	{
		com.earthview.world.graphic.RenderSystem.RenderSystemContext returnValue = _pauseFrame();
		if(returnValue == null) {
			return 0L;
		}
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _pauseFrame_void(long pNativeObject);
	/**
	 * 暂停帧的渲染
	 * @param  
	 */
	public com.earthview.world.graphic.RenderSystem.RenderSystemContext _pauseFrame()
	{
		long returnValue = _pauseFrame_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderSystem.RenderSystemContext __returnValue = new com.earthview.world.graphic.RenderSystem.RenderSystemContext(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long _pauseFrame_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.RenderSystem.RenderSystemContext _pauseFrame_NoVirtual()
	{
		long returnValue = _pauseFrame_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderSystem.RenderSystemContext __returnValue = new com.earthview.world.graphic.RenderSystem.RenderSystemContext(new InstancePointer(returnValue));
		return __returnValue;
	}

	protected  void _resumeFrame_RenderSystemContext_callback(long context)
	{
		com.earthview.world.graphic.RenderSystem.RenderSystemContext contextParamValue = (context == 0L ? null : new com.earthview.world.graphic.RenderSystem.RenderSystemContext(new InstancePointer(context)));
		_resumeFrame(contextParamValue);
	}

	native private void _resumeFrame_RenderSystemContext(long pNativeObject, long context);
	/**
	 * 恢复帧的渲染
	 * @param context 
	 */
	public void _resumeFrame(com.earthview.world.graphic.RenderSystem.RenderSystemContext context)
	{
		long contextParamValue = (context == null ? 0L : context.nativeObject.pointer);
		_resumeFrame_RenderSystemContext(this.nativeObject.pointer, contextParamValue);
	}
	native private void _resumeFrame_RenderSystemContext_NoVirtual(long pNativeObject, long context);
	protected void _resumeFrame_NoVirtual(com.earthview.world.graphic.RenderSystem.RenderSystemContext context)
	{
		long contextParamValue = (context == null ? 0L : context.nativeObject.pointer);
		_resumeFrame_RenderSystemContext_NoVirtual(this.nativeObject.pointer, contextParamValue);
	}

	protected  void _endFrame_void_callback()
	{
		_endFrame();
	}

	native private void _endFrame_void(long pNativeObject);
	/**
	 * 结束一帧的渲染
	 * @param  
	 */
	public void _endFrame()
	{
		_endFrame_void(this.nativeObject.pointer);
	}
	native private void _endFrame_void_NoVirtual(long pNativeObject);
	protected void _endFrame_NoVirtual()
	{
		_endFrame_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _setViewport_CViewport_callback(long ref_vp)
	{
		com.earthview.world.graphic.Viewport ref_vpParamValue = (ref_vp == 0L ? null : new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_vpParamValue != null)
		{
		ref_vpParamValue.setDelegate(true);
		ref_vpParamValue.setInstancePointer(new InstancePointer(ref_vp));
		IClassFactory ref_vpParamValueClassFactory = GlobalClassFactoryMap.get(ref_vpParamValue.getCppInstanceTypeName());
		if (ref_vpParamValueClassFactory != null)
		{
			ref_vpParamValue.setDelegate(true);
			ref_vpParamValue = (com.earthview.world.graphic.Viewport)ref_vpParamValueClassFactory.create();
			ref_vpParamValue.setDelegate(true);
			ref_vpParamValue.setInstancePointer(new InstancePointer(ref_vp));
		}
		}
		_setViewport(ref_vpParamValue);
	}

	native private void _setViewport_CViewport(long pNativeObject, long ref_vp);
	/**
	 * 设置视口
	 * @param vp 指向适当视口的指针
	 */
	public void _setViewport(com.earthview.world.graphic.Viewport ref_vp)
	{
		long ref_vpParamValue = (ref_vp == null ? 0L : ref_vp.nativeObject.pointer);
		_setViewport_CViewport(this.nativeObject.pointer, ref_vpParamValue);
	}
	native private void _setViewport_CViewport_NoVirtual(long pNativeObject, long ref_vp);
	protected void _setViewport_NoVirtual(com.earthview.world.graphic.Viewport ref_vp)
	{
		long ref_vpParamValue = (ref_vp == null ? 0L : ref_vp.nativeObject.pointer);
		_setViewport_CViewport_NoVirtual(this.nativeObject.pointer, ref_vpParamValue);
	}

	protected  long _getViewport_void_callback()
	{
		com.earthview.world.graphic.Viewport returnValue = _getViewport();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _getViewport_void(long pNativeObject);
	/**
	 * 获得视口
	 * @param  
	 */
	public com.earthview.world.graphic.Viewport _getViewport()
	{
		long returnValue = _getViewport_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}
	native private long _getViewport_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Viewport _getViewport_NoVirtual()
	{
		long returnValue = _getViewport_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}

	protected  void _setCullingMode_CullingMode_callback(int mode)
	{
		com.earthview.world.graphic.CullingMode modeParamValue = com.earthview.world.graphic.CullingMode.toEnum(mode);
		_setCullingMode(modeParamValue);
	}

	native private void _setCullingMode_CullingMode(long pNativeObject, int mode);
	/**
	 * 设置剔除方式
	 * @param mode 精选模型
	 */
	public void _setCullingMode(com.earthview.world.graphic.CullingMode mode)
	{
		int modeParamValue = mode.getValue();
		_setCullingMode_CullingMode(this.nativeObject.pointer, modeParamValue);
	}
	native private void _setCullingMode_CullingMode_NoVirtual(long pNativeObject, int mode);
	protected void _setCullingMode_NoVirtual(com.earthview.world.graphic.CullingMode mode)
	{
		int modeParamValue = mode.getValue();
		_setCullingMode_CullingMode_NoVirtual(this.nativeObject.pointer, modeParamValue);
	}

	protected  int _getCullingMode_void_callback()
	{
		com.earthview.world.graphic.CullingMode returnValue = _getCullingMode();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int _getCullingMode_void(long pNativeObject);
	/**
	 * 获得剔除方式
	 * @param mode 精选模型
	 */
	public com.earthview.world.graphic.CullingMode _getCullingMode()
	{
		int returnValue = _getCullingMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.CullingMode.toEnum(returnValue);
	}
	native private int _getCullingMode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.CullingMode _getCullingMode_NoVirtual()
	{
		int returnValue = _getCullingMode_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.CullingMode.toEnum(returnValue);
	}

	protected  void _setDepthBufferParams_ev_bool_ev_bool_CompareFunction_callback(boolean depthTest, boolean depthWrite, int depthFunction)
	{
		boolean depthTestParamValue = depthTest;
		boolean depthWriteParamValue = depthWrite;
		com.earthview.world.graphic.CompareFunction depthFunctionParamValue = com.earthview.world.graphic.CompareFunction.toEnum(depthFunction);
		_setDepthBufferParams(depthTestParamValue, depthWriteParamValue, depthFunctionParamValue);
	}

	native private void _setDepthBufferParams_ev_bool_ev_bool_CompareFunction(long pNativeObject, boolean depthTest, boolean depthWrite, int depthFunction);
	/**
	 * 设置深度缓存测试的参数
	 * @param depthTest 
	 * @param depthWrite 
	 * @param depthFunction 深度测试函数
	 */
	public void _setDepthBufferParams(boolean depthTest, boolean depthWrite, com.earthview.world.graphic.CompareFunction depthFunction)
	{
		boolean depthTestParamValue = depthTest;
		boolean depthWriteParamValue = depthWrite;
		int depthFunctionParamValue = depthFunction.getValue();
		_setDepthBufferParams_ev_bool_ev_bool_CompareFunction(this.nativeObject.pointer, depthTestParamValue, depthWriteParamValue, depthFunctionParamValue);
	}
	native private void _setDepthBufferParams_ev_bool_ev_bool_CompareFunction_NoVirtual(long pNativeObject, boolean depthTest, boolean depthWrite, int depthFunction);
	protected void _setDepthBufferParams_NoVirtual(boolean depthTest, boolean depthWrite, com.earthview.world.graphic.CompareFunction depthFunction)
	{
		boolean depthTestParamValue = depthTest;
		boolean depthWriteParamValue = depthWrite;
		int depthFunctionParamValue = depthFunction.getValue();
		_setDepthBufferParams_ev_bool_ev_bool_CompareFunction_NoVirtual(this.nativeObject.pointer, depthTestParamValue, depthWriteParamValue, depthFunctionParamValue);
	}

	protected  void _setDepthBufferParams_ev_bool_ev_bool_callback(boolean depthTest, boolean depthWrite)
	{
		boolean depthTestParamValue = depthTest;
		boolean depthWriteParamValue = depthWrite;
		_setDepthBufferParams(depthTestParamValue, depthWriteParamValue);
	}

	native private void _setDepthBufferParams_ev_bool_ev_bool(long pNativeObject, boolean depthTest, boolean depthWrite);
	/**
	 * 设置深度缓存测试的参数
	 * @param depthTest 
	 * @param depthWrite 
	 */
	public void _setDepthBufferParams(boolean depthTest, boolean depthWrite)
	{
		boolean depthTestParamValue = depthTest;
		boolean depthWriteParamValue = depthWrite;
		_setDepthBufferParams_ev_bool_ev_bool(this.nativeObject.pointer, depthTestParamValue, depthWriteParamValue);
	}
	native private void _setDepthBufferParams_ev_bool_ev_bool_NoVirtual(long pNativeObject, boolean depthTest, boolean depthWrite);
	protected void _setDepthBufferParams_NoVirtual(boolean depthTest, boolean depthWrite)
	{
		boolean depthTestParamValue = depthTest;
		boolean depthWriteParamValue = depthWrite;
		_setDepthBufferParams_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, depthTestParamValue, depthWriteParamValue);
	}

	protected  void _setDepthBufferParams_ev_bool_callback(boolean depthTest)
	{
		boolean depthTestParamValue = depthTest;
		_setDepthBufferParams(depthTestParamValue);
	}

	native private void _setDepthBufferParams_ev_bool(long pNativeObject, boolean depthTest);
	/**
	 * 设置深度缓存测试的参数
	 * @param depthTest 
	 */
	public void _setDepthBufferParams(boolean depthTest)
	{
		boolean depthTestParamValue = depthTest;
		_setDepthBufferParams_ev_bool(this.nativeObject.pointer, depthTestParamValue);
	}
	native private void _setDepthBufferParams_ev_bool_NoVirtual(long pNativeObject, boolean depthTest);
	protected void _setDepthBufferParams_NoVirtual(boolean depthTest)
	{
		boolean depthTestParamValue = depthTest;
		_setDepthBufferParams_ev_bool_NoVirtual(this.nativeObject.pointer, depthTestParamValue);
	}

	protected  void _setDepthBufferParams_void_callback()
	{
		_setDepthBufferParams();
	}

	native private void _setDepthBufferParams_void(long pNativeObject);
	/**
	 * 设置深度缓存测试的参数
	 * @param  
	 */
	public void _setDepthBufferParams()
	{
		_setDepthBufferParams_void(this.nativeObject.pointer);
	}
	native private void _setDepthBufferParams_void_NoVirtual(long pNativeObject);
	protected void _setDepthBufferParams_NoVirtual()
	{
		_setDepthBufferParams_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _setDepthBufferCheckEnabled_ev_bool_callback(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		_setDepthBufferCheckEnabled(enabledParamValue);
	}

	native private void _setDepthBufferCheckEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置深度缓存测试是否启用
	 * @param enabled 
	 */
	public void _setDepthBufferCheckEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		_setDepthBufferCheckEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void _setDepthBufferCheckEnabled_ev_bool_NoVirtual(long pNativeObject, boolean enabled);
	protected void _setDepthBufferCheckEnabled_NoVirtual(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		_setDepthBufferCheckEnabled_ev_bool_NoVirtual(this.nativeObject.pointer, enabledParamValue);
	}

	protected  void _setDepthBufferCheckEnabled_void_callback()
	{
		_setDepthBufferCheckEnabled();
	}

	native private void _setDepthBufferCheckEnabled_void(long pNativeObject);
	/**
	 * 设置深度缓存测试是否启用
	 * @param  
	 */
	public void _setDepthBufferCheckEnabled()
	{
		_setDepthBufferCheckEnabled_void(this.nativeObject.pointer);
	}
	native private void _setDepthBufferCheckEnabled_void_NoVirtual(long pNativeObject);
	protected void _setDepthBufferCheckEnabled_NoVirtual()
	{
		_setDepthBufferCheckEnabled_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _setDepthBufferWriteEnabled_ev_bool_callback(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		_setDepthBufferWriteEnabled(enabledParamValue);
	}

	native private void _setDepthBufferWriteEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置深度缓存写入是否启用
	 * @param enabled 
	 */
	public void _setDepthBufferWriteEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		_setDepthBufferWriteEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void _setDepthBufferWriteEnabled_ev_bool_NoVirtual(long pNativeObject, boolean enabled);
	protected void _setDepthBufferWriteEnabled_NoVirtual(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		_setDepthBufferWriteEnabled_ev_bool_NoVirtual(this.nativeObject.pointer, enabledParamValue);
	}

	protected  void _setDepthBufferWriteEnabled_void_callback()
	{
		_setDepthBufferWriteEnabled();
	}

	native private void _setDepthBufferWriteEnabled_void(long pNativeObject);
	/**
	 * 设置深度缓存写入是否启用
	 * @param  
	 */
	public void _setDepthBufferWriteEnabled()
	{
		_setDepthBufferWriteEnabled_void(this.nativeObject.pointer);
	}
	native private void _setDepthBufferWriteEnabled_void_NoVirtual(long pNativeObject);
	protected void _setDepthBufferWriteEnabled_NoVirtual()
	{
		_setDepthBufferWriteEnabled_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _setDepthBufferFunction_CompareFunction_callback(int func)
	{
		com.earthview.world.graphic.CompareFunction funcParamValue = com.earthview.world.graphic.CompareFunction.toEnum(func);
		_setDepthBufferFunction(funcParamValue);
	}

	native private void _setDepthBufferFunction_CompareFunction(long pNativeObject, int func);
	/**
	 * 设置深度缓存测试的比较函数
	 * @param func 新的深度和已存在深度的比较
	 */
	public void _setDepthBufferFunction(com.earthview.world.graphic.CompareFunction func)
	{
		int funcParamValue = func.getValue();
		_setDepthBufferFunction_CompareFunction(this.nativeObject.pointer, funcParamValue);
	}
	native private void _setDepthBufferFunction_CompareFunction_NoVirtual(long pNativeObject, int func);
	protected void _setDepthBufferFunction_NoVirtual(com.earthview.world.graphic.CompareFunction func)
	{
		int funcParamValue = func.getValue();
		_setDepthBufferFunction_CompareFunction_NoVirtual(this.nativeObject.pointer, funcParamValue);
	}

	protected  void _setDepthBufferFunction_void_callback()
	{
		_setDepthBufferFunction();
	}

	native private void _setDepthBufferFunction_void(long pNativeObject);
	/**
	 * 设置深度缓存测试的比较函数
	 * @param  
	 */
	public void _setDepthBufferFunction()
	{
		_setDepthBufferFunction_void(this.nativeObject.pointer);
	}
	native private void _setDepthBufferFunction_void_NoVirtual(long pNativeObject);
	protected void _setDepthBufferFunction_NoVirtual()
	{
		_setDepthBufferFunction_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _setColourBufferWriteEnabled_ev_bool_ev_bool_ev_bool_ev_bool_callback(boolean red, boolean green, boolean blue, boolean alpha)
	{
		boolean redParamValue = red;
		boolean greenParamValue = green;
		boolean blueParamValue = blue;
		boolean alphaParamValue = alpha;
		_setColourBufferWriteEnabled(redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}

	native private void _setColourBufferWriteEnabled_ev_bool_ev_bool_ev_bool_ev_bool(long pNativeObject, boolean red, boolean green, boolean blue, boolean alpha);
	/**
	 * 设置颜色缓存写入是否可用
	 * @param red 红色
	 * @param green 绿色
	 * @param blue 蓝色
	 * @param alpha 
	 */
	public void _setColourBufferWriteEnabled(boolean red, boolean green, boolean blue, boolean alpha)
	{
		boolean redParamValue = red;
		boolean greenParamValue = green;
		boolean blueParamValue = blue;
		boolean alphaParamValue = alpha;
		_setColourBufferWriteEnabled_ev_bool_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}
	native private void _setColourBufferWriteEnabled_ev_bool_ev_bool_ev_bool_ev_bool_NoVirtual(long pNativeObject, boolean red, boolean green, boolean blue, boolean alpha);
	protected void _setColourBufferWriteEnabled_NoVirtual(boolean red, boolean green, boolean blue, boolean alpha)
	{
		boolean redParamValue = red;
		boolean greenParamValue = green;
		boolean blueParamValue = blue;
		boolean alphaParamValue = alpha;
		_setColourBufferWriteEnabled_ev_bool_ev_bool_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}

	protected  void _setDepthBias_ev_real32_ev_real32_callback(float constantBias, float slopeScaleBias)
	{
		float constantBiasParamValue = constantBias;
		float slopeScaleBiasParamValue = slopeScaleBias;
		_setDepthBias(constantBiasParamValue, slopeScaleBiasParamValue);
	}

	native private void _setDepthBias_ev_real32_ev_real32(long pNativeObject, float constantBias, float slopeScaleBias);
	/**
	 * 设置深度偏移值
	 * @param constantBias 常量偏移值
	 * @param slopeScaleBias 受多边形最大坡度影响的倾斜值
	 */
	public void _setDepthBias(float constantBias, float slopeScaleBias)
	{
		float constantBiasParamValue = constantBias;
		float slopeScaleBiasParamValue = slopeScaleBias;
		_setDepthBias_ev_real32_ev_real32(this.nativeObject.pointer, constantBiasParamValue, slopeScaleBiasParamValue);
	}
	native private void _setDepthBias_ev_real32_ev_real32_NoVirtual(long pNativeObject, float constantBias, float slopeScaleBias);
	protected void _setDepthBias_NoVirtual(float constantBias, float slopeScaleBias)
	{
		float constantBiasParamValue = constantBias;
		float slopeScaleBiasParamValue = slopeScaleBias;
		_setDepthBias_ev_real32_ev_real32_NoVirtual(this.nativeObject.pointer, constantBiasParamValue, slopeScaleBiasParamValue);
	}

	protected  void _setDepthBias_ev_real32_callback(float constantBias)
	{
		float constantBiasParamValue = constantBias;
		_setDepthBias(constantBiasParamValue);
	}

	native private void _setDepthBias_ev_real32(long pNativeObject, float constantBias);
	/**
	 * 设置深度偏移值
	 * @param constantBias 常量偏移值
	 */
	public void _setDepthBias(float constantBias)
	{
		float constantBiasParamValue = constantBias;
		_setDepthBias_ev_real32(this.nativeObject.pointer, constantBiasParamValue);
	}
	native private void _setDepthBias_ev_real32_NoVirtual(long pNativeObject, float constantBias);
	protected void _setDepthBias_NoVirtual(float constantBias)
	{
		float constantBiasParamValue = constantBias;
		_setDepthBias_ev_real32_NoVirtual(this.nativeObject.pointer, constantBiasParamValue);
	}

	protected  void _setFog_FogMode_CColourValue_Real_Real_Real_callback(int mode, long colour, double expDensity, double linearStart, double linearEnd)
	{
		com.earthview.world.graphic.FogMode modeParamValue = com.earthview.world.graphic.FogMode.toEnum(mode);
		com.earthview.world.graphic.ColourValue colourParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colourParamValue.setDelegate(true);
		colourParamValue.setInstancePointer(new InstancePointer(colour));
		IClassFactory colourParamValueClassFactory = GlobalClassFactoryMap.get(colourParamValue.getCppInstanceTypeName());
		if (colourParamValueClassFactory != null)
		{
			colourParamValue.setDelegate(true);
			colourParamValue = (com.earthview.world.graphic.ColourValue)colourParamValueClassFactory.create();
			colourParamValue.setDelegate(true);
			colourParamValue.setInstancePointer(new InstancePointer(colour));
		}
		double expDensityParamValue = expDensity;
		double linearStartParamValue = linearStart;
		double linearEndParamValue = linearEnd;
		_setFog(modeParamValue, colourParamValue, expDensityParamValue, linearStartParamValue, linearEndParamValue);
	}

	native private void _setFog_FogMode_CColourValue_Real_Real_Real(long pNativeObject, int mode, long colour, double expDensity, double linearStart, double linearEnd);
	/**
	 * 设置雾模型
	 * @param mode 雾模型
	 * @param colour 雾的颜色
	 * @param expDensity 在FOG_EXP或FOG_EXP2模型中雾的密度
	 * @param linearStart 距离线性雾开始变暗的距离
	 * @param linearEnd 距离线性雾完全不透明的距离
	 */
	public void _setFog(com.earthview.world.graphic.FogMode mode, com.earthview.world.graphic.ColourValue colour, double expDensity, double linearStart, double linearEnd)
	{
		int modeParamValue = mode.getValue();
		long colourParamValue = colour.nativeObject.pointer;
		double expDensityParamValue = expDensity;
		double linearStartParamValue = linearStart;
		double linearEndParamValue = linearEnd;
		_setFog_FogMode_CColourValue_Real_Real_Real(this.nativeObject.pointer, modeParamValue, colourParamValue, expDensityParamValue, linearStartParamValue, linearEndParamValue);
	}
	native private void _setFog_FogMode_CColourValue_Real_Real_Real_NoVirtual(long pNativeObject, int mode, long colour, double expDensity, double linearStart, double linearEnd);
	protected void _setFog_NoVirtual(com.earthview.world.graphic.FogMode mode, com.earthview.world.graphic.ColourValue colour, double expDensity, double linearStart, double linearEnd)
	{
		int modeParamValue = mode.getValue();
		long colourParamValue = colour.nativeObject.pointer;
		double expDensityParamValue = expDensity;
		double linearStartParamValue = linearStart;
		double linearEndParamValue = linearEnd;
		_setFog_FogMode_CColourValue_Real_Real_Real_NoVirtual(this.nativeObject.pointer, modeParamValue, colourParamValue, expDensityParamValue, linearStartParamValue, linearEndParamValue);
	}

	protected  void _setFog_FogMode_CColourValue_Real_Real_callback(int mode, long colour, double expDensity, double linearStart)
	{
		com.earthview.world.graphic.FogMode modeParamValue = com.earthview.world.graphic.FogMode.toEnum(mode);
		com.earthview.world.graphic.ColourValue colourParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colourParamValue.setDelegate(true);
		colourParamValue.setInstancePointer(new InstancePointer(colour));
		IClassFactory colourParamValueClassFactory = GlobalClassFactoryMap.get(colourParamValue.getCppInstanceTypeName());
		if (colourParamValueClassFactory != null)
		{
			colourParamValue.setDelegate(true);
			colourParamValue = (com.earthview.world.graphic.ColourValue)colourParamValueClassFactory.create();
			colourParamValue.setDelegate(true);
			colourParamValue.setInstancePointer(new InstancePointer(colour));
		}
		double expDensityParamValue = expDensity;
		double linearStartParamValue = linearStart;
		_setFog(modeParamValue, colourParamValue, expDensityParamValue, linearStartParamValue);
	}

	native private void _setFog_FogMode_CColourValue_Real_Real(long pNativeObject, int mode, long colour, double expDensity, double linearStart);
	/**
	 * 设置雾模型
	 * @param mode 雾模型
	 * @param colour 雾的颜色
	 * @param expDensity 在FOG_EXP或FOG_EXP2模型中雾的密度
	 * @param linearStart 距离线性雾开始变暗的距离
	 */
	public void _setFog(com.earthview.world.graphic.FogMode mode, com.earthview.world.graphic.ColourValue colour, double expDensity, double linearStart)
	{
		int modeParamValue = mode.getValue();
		long colourParamValue = colour.nativeObject.pointer;
		double expDensityParamValue = expDensity;
		double linearStartParamValue = linearStart;
		_setFog_FogMode_CColourValue_Real_Real(this.nativeObject.pointer, modeParamValue, colourParamValue, expDensityParamValue, linearStartParamValue);
	}
	native private void _setFog_FogMode_CColourValue_Real_Real_NoVirtual(long pNativeObject, int mode, long colour, double expDensity, double linearStart);
	protected void _setFog_NoVirtual(com.earthview.world.graphic.FogMode mode, com.earthview.world.graphic.ColourValue colour, double expDensity, double linearStart)
	{
		int modeParamValue = mode.getValue();
		long colourParamValue = colour.nativeObject.pointer;
		double expDensityParamValue = expDensity;
		double linearStartParamValue = linearStart;
		_setFog_FogMode_CColourValue_Real_Real_NoVirtual(this.nativeObject.pointer, modeParamValue, colourParamValue, expDensityParamValue, linearStartParamValue);
	}

	protected  void _setFog_FogMode_CColourValue_Real_callback(int mode, long colour, double expDensity)
	{
		com.earthview.world.graphic.FogMode modeParamValue = com.earthview.world.graphic.FogMode.toEnum(mode);
		com.earthview.world.graphic.ColourValue colourParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colourParamValue.setDelegate(true);
		colourParamValue.setInstancePointer(new InstancePointer(colour));
		IClassFactory colourParamValueClassFactory = GlobalClassFactoryMap.get(colourParamValue.getCppInstanceTypeName());
		if (colourParamValueClassFactory != null)
		{
			colourParamValue.setDelegate(true);
			colourParamValue = (com.earthview.world.graphic.ColourValue)colourParamValueClassFactory.create();
			colourParamValue.setDelegate(true);
			colourParamValue.setInstancePointer(new InstancePointer(colour));
		}
		double expDensityParamValue = expDensity;
		_setFog(modeParamValue, colourParamValue, expDensityParamValue);
	}

	native private void _setFog_FogMode_CColourValue_Real(long pNativeObject, int mode, long colour, double expDensity);
	/**
	 * 设置雾模型
	 * @param mode 雾模型
	 * @param colour 雾的颜色
	 * @param expDensity 在FOG_EXP或FOG_EXP2模型中雾的密度
	 */
	public void _setFog(com.earthview.world.graphic.FogMode mode, com.earthview.world.graphic.ColourValue colour, double expDensity)
	{
		int modeParamValue = mode.getValue();
		long colourParamValue = colour.nativeObject.pointer;
		double expDensityParamValue = expDensity;
		_setFog_FogMode_CColourValue_Real(this.nativeObject.pointer, modeParamValue, colourParamValue, expDensityParamValue);
	}
	native private void _setFog_FogMode_CColourValue_Real_NoVirtual(long pNativeObject, int mode, long colour, double expDensity);
	protected void _setFog_NoVirtual(com.earthview.world.graphic.FogMode mode, com.earthview.world.graphic.ColourValue colour, double expDensity)
	{
		int modeParamValue = mode.getValue();
		long colourParamValue = colour.nativeObject.pointer;
		double expDensityParamValue = expDensity;
		_setFog_FogMode_CColourValue_Real_NoVirtual(this.nativeObject.pointer, modeParamValue, colourParamValue, expDensityParamValue);
	}

	protected  void _setFog_FogMode_CColourValue_callback(int mode, long colour)
	{
		com.earthview.world.graphic.FogMode modeParamValue = com.earthview.world.graphic.FogMode.toEnum(mode);
		com.earthview.world.graphic.ColourValue colourParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colourParamValue.setDelegate(true);
		colourParamValue.setInstancePointer(new InstancePointer(colour));
		IClassFactory colourParamValueClassFactory = GlobalClassFactoryMap.get(colourParamValue.getCppInstanceTypeName());
		if (colourParamValueClassFactory != null)
		{
			colourParamValue.setDelegate(true);
			colourParamValue = (com.earthview.world.graphic.ColourValue)colourParamValueClassFactory.create();
			colourParamValue.setDelegate(true);
			colourParamValue.setInstancePointer(new InstancePointer(colour));
		}
		_setFog(modeParamValue, colourParamValue);
	}

	native private void _setFog_FogMode_CColourValue(long pNativeObject, int mode, long colour);
	/**
	 * 设置雾模型
	 * @param mode 雾模型
	 * @param colour 雾的颜色
	 */
	public void _setFog(com.earthview.world.graphic.FogMode mode, com.earthview.world.graphic.ColourValue colour)
	{
		int modeParamValue = mode.getValue();
		long colourParamValue = colour.nativeObject.pointer;
		_setFog_FogMode_CColourValue(this.nativeObject.pointer, modeParamValue, colourParamValue);
	}
	native private void _setFog_FogMode_CColourValue_NoVirtual(long pNativeObject, int mode, long colour);
	protected void _setFog_NoVirtual(com.earthview.world.graphic.FogMode mode, com.earthview.world.graphic.ColourValue colour)
	{
		int modeParamValue = mode.getValue();
		long colourParamValue = colour.nativeObject.pointer;
		_setFog_FogMode_CColourValue_NoVirtual(this.nativeObject.pointer, modeParamValue, colourParamValue);
	}

	protected  void _setFog_FogMode_callback(int mode)
	{
		com.earthview.world.graphic.FogMode modeParamValue = com.earthview.world.graphic.FogMode.toEnum(mode);
		_setFog(modeParamValue);
	}

	native private void _setFog_FogMode(long pNativeObject, int mode);
	/**
	 * 设置雾模型
	 * @param mode 雾模型
	 */
	public void _setFog(com.earthview.world.graphic.FogMode mode)
	{
		int modeParamValue = mode.getValue();
		_setFog_FogMode(this.nativeObject.pointer, modeParamValue);
	}
	native private void _setFog_FogMode_NoVirtual(long pNativeObject, int mode);
	protected void _setFog_NoVirtual(com.earthview.world.graphic.FogMode mode)
	{
		int modeParamValue = mode.getValue();
		_setFog_FogMode_NoVirtual(this.nativeObject.pointer, modeParamValue);
	}

	protected  void _setFog_void_callback()
	{
		_setFog();
	}

	native private void _setFog_void(long pNativeObject);
	/**
	 * 设置雾模型
	 * @param  
	 */
	public void _setFog()
	{
		_setFog_void(this.nativeObject.pointer);
	}
	native private void _setFog_void_NoVirtual(long pNativeObject);
	protected void _setFog_NoVirtual()
	{
		_setFog_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _beginGeometryCount_void_callback()
	{
		_beginGeometryCount();
	}

	native private void _beginGeometryCount_void(long pNativeObject);
	/**
	 * 重新渲染三角面、批次、顶点数量
	 * @param  
	 */
	public void _beginGeometryCount()
	{
		_beginGeometryCount_void(this.nativeObject.pointer);
	}
	native private void _beginGeometryCount_void_NoVirtual(long pNativeObject);
	protected void _beginGeometryCount_NoVirtual()
	{
		_beginGeometryCount_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long _getFaceCount_void_callback()
	{
		long returnValue = _getFaceCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long _getFaceCount_void(long pNativeObject);
	/**
	 * 获得渲染的三角面总数
	 * @param  
	 */
	public long _getFaceCount()
	{
		long returnValue = _getFaceCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long _getFaceCount_void_NoVirtual(long pNativeObject);
	protected long _getFaceCount_NoVirtual()
	{
		long returnValue = _getFaceCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long _getBatchCount_void_callback()
	{
		long returnValue = _getBatchCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long _getBatchCount_void(long pNativeObject);
	/**
	 * 获得渲染的批次
	 * @param  
	 */
	public long _getBatchCount()
	{
		long returnValue = _getBatchCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long _getBatchCount_void_NoVirtual(long pNativeObject);
	protected long _getBatchCount_NoVirtual()
	{
		long returnValue = _getBatchCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long _getVertexCount_void_callback()
	{
		long returnValue = _getVertexCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long _getVertexCount_void(long pNativeObject);
	/**
	 * 获得渲染的顶点总数
	 * @param  
	 */
	public long _getVertexCount()
	{
		long returnValue = _getVertexCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long _getVertexCount_void_NoVirtual(long pNativeObject);
	protected long _getVertexCount_NoVirtual()
	{
		long returnValue = _getVertexCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void convertColourValue_CColourValue_ev_uint32_callback(long colour, long pDest)
	{
		com.earthview.world.graphic.ColourValue colourParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colourParamValue.setDelegate(true);
		colourParamValue.setInstancePointer(new InstancePointer(colour));
		IClassFactory colourParamValueClassFactory = GlobalClassFactoryMap.get(colourParamValue.getCppInstanceTypeName());
		if (colourParamValueClassFactory != null)
		{
			colourParamValue.setDelegate(true);
			colourParamValue = (com.earthview.world.graphic.ColourValue)colourParamValueClassFactory.create();
			colourParamValue.setDelegate(true);
			colourParamValue.setInstancePointer(new InstancePointer(colour));
		}
		UIntegerPointer pDestParamValue = (pDest == 0L ? null : new UIntegerPointer(new InstancePointer(pDest)));
		convertColourValue(colourParamValue, pDestParamValue);
	}

	native private void convertColourValue_CColourValue_ev_uint32(long pNativeObject, long colour, long pDest);
	/**
	 * 将颜色转换并存入指定区域
	 * @param colour 转换的颜色
	 * @param pDest 指向存放结果的位置
	 */
	public void convertColourValue(com.earthview.world.graphic.ColourValue colour, UIntegerPointer pDest)
	{
		long colourParamValue = colour.nativeObject.pointer;
		long pDestParamValue = (pDest == null ? 0L : pDest.nativeObject.pointer);
		convertColourValue_CColourValue_ev_uint32(this.nativeObject.pointer, colourParamValue, pDestParamValue);
	}
	native private void convertColourValue_CColourValue_ev_uint32_NoVirtual(long pNativeObject, long colour, long pDest);
	protected void convertColourValue_NoVirtual(com.earthview.world.graphic.ColourValue colour, UIntegerPointer pDest)
	{
		long colourParamValue = colour.nativeObject.pointer;
		long pDestParamValue = (pDest == null ? 0L : pDest.nativeObject.pointer);
		convertColourValue_CColourValue_ev_uint32_NoVirtual(this.nativeObject.pointer, colourParamValue, pDestParamValue);
	}

	protected  void toColourValue_ev_uint32_CColourValue_callback(long srcColor, long colour)
	{
		long srcColorParamValue = srcColor;
		com.earthview.world.graphic.ColourValue colourParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colourParamValue.setDelegate(true);
		colourParamValue.setInstancePointer(new InstancePointer(colour));
		IClassFactory colourParamValueClassFactory = GlobalClassFactoryMap.get(colourParamValue.getCppInstanceTypeName());
		if (colourParamValueClassFactory != null)
		{
			colourParamValue.setDelegate(true);
			colourParamValue = (com.earthview.world.graphic.ColourValue)colourParamValueClassFactory.create();
			colourParamValue.setDelegate(true);
			colourParamValue.setInstancePointer(new InstancePointer(colour));
		}
		toColourValue(srcColorParamValue, colourParamValue);
	}

	native private void toColourValue_ev_uint32_CColourValue(long pNativeObject, long srcColor, long colour);
	/**
	 * 将32-bit颜色转换转换为colorvalue
	 * @param srcColor 32-bit颜色
	 * @param colour 转换的结果颜色
	 */
	public void toColourValue(long srcColor, com.earthview.world.graphic.ColourValue colour)
	{
		long srcColorParamValue = srcColor;
		long colourParamValue = colour.nativeObject.pointer;
		toColourValue_ev_uint32_CColourValue(this.nativeObject.pointer, srcColorParamValue, colourParamValue);
	}
	native private void toColourValue_ev_uint32_CColourValue_NoVirtual(long pNativeObject, long srcColor, long colour);
	protected void toColourValue_NoVirtual(long srcColor, com.earthview.world.graphic.ColourValue colour)
	{
		long srcColorParamValue = srcColor;
		long colourParamValue = colour.nativeObject.pointer;
		toColourValue_ev_uint32_CColourValue_NoVirtual(this.nativeObject.pointer, srcColorParamValue, colourParamValue);
	}

	protected  int getColourVertexElementType_void_callback()
	{
		com.earthview.world.graphic.VertexElementType returnValue = getColourVertexElementType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getColourVertexElementType_void(long pNativeObject);
	/**
	 * 获得渲染系统中32位颜色值的顶点元素类型
	 * @param  
	 */
	public com.earthview.world.graphic.VertexElementType getColourVertexElementType()
	{
		int returnValue = getColourVertexElementType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.VertexElementType.toEnum(returnValue);
	}
	native private int getColourVertexElementType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.VertexElementType getColourVertexElementType_NoVirtual()
	{
		int returnValue = getColourVertexElementType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.VertexElementType.toEnum(returnValue);
	}

	protected  void _convertProjectionMatrix_CMatrix4_CMatrix4_ev_bool_callback(long matrix, long dest, boolean forGpuProgram)
	{
		com.earthview.world.spatial.math.Matrix4 matrixParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		matrixParamValue.setDelegate(true);
		matrixParamValue.setInstancePointer(new InstancePointer(matrix));
		IClassFactory matrixParamValueClassFactory = GlobalClassFactoryMap.get(matrixParamValue.getCppInstanceTypeName());
		if (matrixParamValueClassFactory != null)
		{
			matrixParamValue.setDelegate(true);
			matrixParamValue = (com.earthview.world.spatial.math.Matrix4)matrixParamValueClassFactory.create();
			matrixParamValue.setDelegate(true);
			matrixParamValue.setInstancePointer(new InstancePointer(matrix));
		}
		com.earthview.world.spatial.math.Matrix4 destParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		destParamValue.setDelegate(true);
		destParamValue.setInstancePointer(new InstancePointer(dest));
		IClassFactory destParamValueClassFactory = GlobalClassFactoryMap.get(destParamValue.getCppInstanceTypeName());
		if (destParamValueClassFactory != null)
		{
			destParamValue.setDelegate(true);
			destParamValue = (com.earthview.world.spatial.math.Matrix4)destParamValueClassFactory.create();
			destParamValue.setDelegate(true);
			destParamValue.setInstancePointer(new InstancePointer(dest));
		}
		boolean forGpuProgramParamValue = forGpuProgram;
		_convertProjectionMatrix(matrixParamValue, destParamValue, forGpuProgramParamValue);
	}

	native private void _convertProjectionMatrix_CMatrix4_CMatrix4_ev_bool(long pNativeObject, long matrix, long dest, boolean forGpuProgram);
	/**
	 * 转换适应渲染系统的统一的投影矩阵
	 * @param matrix 
	 * @param dest 
	 * @param forGpuProgram 
	 */
	public void _convertProjectionMatrix(com.earthview.world.spatial.math.Matrix4 matrix, com.earthview.world.spatial.math.Matrix4 dest, boolean forGpuProgram)
	{
		long matrixParamValue = matrix.nativeObject.pointer;
		long destParamValue = dest.nativeObject.pointer;
		boolean forGpuProgramParamValue = forGpuProgram;
		_convertProjectionMatrix_CMatrix4_CMatrix4_ev_bool(this.nativeObject.pointer, matrixParamValue, destParamValue, forGpuProgramParamValue);
	}
	native private void _convertProjectionMatrix_CMatrix4_CMatrix4_ev_bool_NoVirtual(long pNativeObject, long matrix, long dest, boolean forGpuProgram);
	protected void _convertProjectionMatrix_NoVirtual(com.earthview.world.spatial.math.Matrix4 matrix, com.earthview.world.spatial.math.Matrix4 dest, boolean forGpuProgram)
	{
		long matrixParamValue = matrix.nativeObject.pointer;
		long destParamValue = dest.nativeObject.pointer;
		boolean forGpuProgramParamValue = forGpuProgram;
		_convertProjectionMatrix_CMatrix4_CMatrix4_ev_bool_NoVirtual(this.nativeObject.pointer, matrixParamValue, destParamValue, forGpuProgramParamValue);
	}

	protected  void _convertProjectionMatrix_CMatrix4_CMatrix4_callback(long matrix, long dest)
	{
		com.earthview.world.spatial.math.Matrix4 matrixParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		matrixParamValue.setDelegate(true);
		matrixParamValue.setInstancePointer(new InstancePointer(matrix));
		IClassFactory matrixParamValueClassFactory = GlobalClassFactoryMap.get(matrixParamValue.getCppInstanceTypeName());
		if (matrixParamValueClassFactory != null)
		{
			matrixParamValue.setDelegate(true);
			matrixParamValue = (com.earthview.world.spatial.math.Matrix4)matrixParamValueClassFactory.create();
			matrixParamValue.setDelegate(true);
			matrixParamValue.setInstancePointer(new InstancePointer(matrix));
		}
		com.earthview.world.spatial.math.Matrix4 destParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		destParamValue.setDelegate(true);
		destParamValue.setInstancePointer(new InstancePointer(dest));
		IClassFactory destParamValueClassFactory = GlobalClassFactoryMap.get(destParamValue.getCppInstanceTypeName());
		if (destParamValueClassFactory != null)
		{
			destParamValue.setDelegate(true);
			destParamValue = (com.earthview.world.spatial.math.Matrix4)destParamValueClassFactory.create();
			destParamValue.setDelegate(true);
			destParamValue.setInstancePointer(new InstancePointer(dest));
		}
		_convertProjectionMatrix(matrixParamValue, destParamValue);
	}

	native private void _convertProjectionMatrix_CMatrix4_CMatrix4(long pNativeObject, long matrix, long dest);
	/**
	 * 转换适应渲染系统的统一的投影矩阵
	 * @param matrix 
	 * @param dest 
	 */
	public void _convertProjectionMatrix(com.earthview.world.spatial.math.Matrix4 matrix, com.earthview.world.spatial.math.Matrix4 dest)
	{
		long matrixParamValue = matrix.nativeObject.pointer;
		long destParamValue = dest.nativeObject.pointer;
		_convertProjectionMatrix_CMatrix4_CMatrix4(this.nativeObject.pointer, matrixParamValue, destParamValue);
	}
	native private void _convertProjectionMatrix_CMatrix4_CMatrix4_NoVirtual(long pNativeObject, long matrix, long dest);
	protected void _convertProjectionMatrix_NoVirtual(com.earthview.world.spatial.math.Matrix4 matrix, com.earthview.world.spatial.math.Matrix4 dest)
	{
		long matrixParamValue = matrix.nativeObject.pointer;
		long destParamValue = dest.nativeObject.pointer;
		_convertProjectionMatrix_CMatrix4_CMatrix4_NoVirtual(this.nativeObject.pointer, matrixParamValue, destParamValue);
	}

	protected  void _makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool_callback(long fovy, double aspect, double nearPlane, double farPlane, long dest, boolean forGpuProgram)
	{
		com.earthview.world.spatial.math.Radian fovyParamValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		fovyParamValue.setDelegate(true);
		fovyParamValue.setInstancePointer(new InstancePointer(fovy));
		IClassFactory fovyParamValueClassFactory = GlobalClassFactoryMap.get(fovyParamValue.getCppInstanceTypeName());
		if (fovyParamValueClassFactory != null)
		{
			fovyParamValue.setDelegate(true);
			fovyParamValue = (com.earthview.world.spatial.math.Radian)fovyParamValueClassFactory.create();
			fovyParamValue.setDelegate(true);
			fovyParamValue.setInstancePointer(new InstancePointer(fovy));
		}
		double aspectParamValue = aspect;
		double nearPlaneParamValue = nearPlane;
		double farPlaneParamValue = farPlane;
		com.earthview.world.spatial.math.Matrix4 destParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		destParamValue.setDelegate(true);
		destParamValue.setInstancePointer(new InstancePointer(dest));
		IClassFactory destParamValueClassFactory = GlobalClassFactoryMap.get(destParamValue.getCppInstanceTypeName());
		if (destParamValueClassFactory != null)
		{
			destParamValue.setDelegate(true);
			destParamValue = (com.earthview.world.spatial.math.Matrix4)destParamValueClassFactory.create();
			destParamValue.setDelegate(true);
			destParamValue.setInstancePointer(new InstancePointer(dest));
		}
		boolean forGpuProgramParamValue = forGpuProgram;
		_makeProjectionMatrix(fovyParamValue, aspectParamValue, nearPlaneParamValue, farPlaneParamValue, destParamValue, forGpuProgramParamValue);
	}

	native private void _makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool(long pNativeObject, long fovy, double aspect, double nearPlane, double farPlane, long dest, boolean forGpuProgram);
	/**
	 * 生成一个适应渲染系统的透视投影矩阵
	 * @param fovy 
	 * @param aspect 
	 * @param nearPlane 
	 * @param farPlane 
	 * @param dest 
	 * @param forGpuProgram 
	 */
	public void _makeProjectionMatrix(com.earthview.world.spatial.math.Radian fovy, double aspect, double nearPlane, double farPlane, com.earthview.world.spatial.math.Matrix4 dest, boolean forGpuProgram)
	{
		long fovyParamValue = fovy.nativeObject.pointer;
		double aspectParamValue = aspect;
		double nearPlaneParamValue = nearPlane;
		double farPlaneParamValue = farPlane;
		long destParamValue = dest.nativeObject.pointer;
		boolean forGpuProgramParamValue = forGpuProgram;
		_makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool(this.nativeObject.pointer, fovyParamValue, aspectParamValue, nearPlaneParamValue, farPlaneParamValue, destParamValue, forGpuProgramParamValue);
	}
	native private void _makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool_NoVirtual(long pNativeObject, long fovy, double aspect, double nearPlane, double farPlane, long dest, boolean forGpuProgram);
	protected void _makeProjectionMatrix_NoVirtual(com.earthview.world.spatial.math.Radian fovy, double aspect, double nearPlane, double farPlane, com.earthview.world.spatial.math.Matrix4 dest, boolean forGpuProgram)
	{
		long fovyParamValue = fovy.nativeObject.pointer;
		double aspectParamValue = aspect;
		double nearPlaneParamValue = nearPlane;
		double farPlaneParamValue = farPlane;
		long destParamValue = dest.nativeObject.pointer;
		boolean forGpuProgramParamValue = forGpuProgram;
		_makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool_NoVirtual(this.nativeObject.pointer, fovyParamValue, aspectParamValue, nearPlaneParamValue, farPlaneParamValue, destParamValue, forGpuProgramParamValue);
	}

	protected  void _makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_callback(long fovy, double aspect, double nearPlane, double farPlane, long dest)
	{
		com.earthview.world.spatial.math.Radian fovyParamValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		fovyParamValue.setDelegate(true);
		fovyParamValue.setInstancePointer(new InstancePointer(fovy));
		IClassFactory fovyParamValueClassFactory = GlobalClassFactoryMap.get(fovyParamValue.getCppInstanceTypeName());
		if (fovyParamValueClassFactory != null)
		{
			fovyParamValue.setDelegate(true);
			fovyParamValue = (com.earthview.world.spatial.math.Radian)fovyParamValueClassFactory.create();
			fovyParamValue.setDelegate(true);
			fovyParamValue.setInstancePointer(new InstancePointer(fovy));
		}
		double aspectParamValue = aspect;
		double nearPlaneParamValue = nearPlane;
		double farPlaneParamValue = farPlane;
		com.earthview.world.spatial.math.Matrix4 destParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		destParamValue.setDelegate(true);
		destParamValue.setInstancePointer(new InstancePointer(dest));
		IClassFactory destParamValueClassFactory = GlobalClassFactoryMap.get(destParamValue.getCppInstanceTypeName());
		if (destParamValueClassFactory != null)
		{
			destParamValue.setDelegate(true);
			destParamValue = (com.earthview.world.spatial.math.Matrix4)destParamValueClassFactory.create();
			destParamValue.setDelegate(true);
			destParamValue.setInstancePointer(new InstancePointer(dest));
		}
		_makeProjectionMatrix(fovyParamValue, aspectParamValue, nearPlaneParamValue, farPlaneParamValue, destParamValue);
	}

	native private void _makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4(long pNativeObject, long fovy, double aspect, double nearPlane, double farPlane, long dest);
	/**
	 * 生成一个适应渲染系统的透视投影矩阵
	 * @param fovy 
	 * @param aspect 
	 * @param nearPlane 
	 * @param farPlane 
	 * @param dest 
	 */
	public void _makeProjectionMatrix(com.earthview.world.spatial.math.Radian fovy, double aspect, double nearPlane, double farPlane, com.earthview.world.spatial.math.Matrix4 dest)
	{
		long fovyParamValue = fovy.nativeObject.pointer;
		double aspectParamValue = aspect;
		double nearPlaneParamValue = nearPlane;
		double farPlaneParamValue = farPlane;
		long destParamValue = dest.nativeObject.pointer;
		_makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4(this.nativeObject.pointer, fovyParamValue, aspectParamValue, nearPlaneParamValue, farPlaneParamValue, destParamValue);
	}
	native private void _makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_NoVirtual(long pNativeObject, long fovy, double aspect, double nearPlane, double farPlane, long dest);
	protected void _makeProjectionMatrix_NoVirtual(com.earthview.world.spatial.math.Radian fovy, double aspect, double nearPlane, double farPlane, com.earthview.world.spatial.math.Matrix4 dest)
	{
		long fovyParamValue = fovy.nativeObject.pointer;
		double aspectParamValue = aspect;
		double nearPlaneParamValue = nearPlane;
		double farPlaneParamValue = farPlane;
		long destParamValue = dest.nativeObject.pointer;
		_makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_NoVirtual(this.nativeObject.pointer, fovyParamValue, aspectParamValue, nearPlaneParamValue, farPlaneParamValue, destParamValue);
	}

	protected  void _makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool_callback(double left, double right, double bottom, double top, double nearPlane, double farPlane, long dest, boolean forGpuProgram)
	{
		double leftParamValue = left;
		double rightParamValue = right;
		double bottomParamValue = bottom;
		double topParamValue = top;
		double nearPlaneParamValue = nearPlane;
		double farPlaneParamValue = farPlane;
		com.earthview.world.spatial.math.Matrix4 destParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		destParamValue.setDelegate(true);
		destParamValue.setInstancePointer(new InstancePointer(dest));
		IClassFactory destParamValueClassFactory = GlobalClassFactoryMap.get(destParamValue.getCppInstanceTypeName());
		if (destParamValueClassFactory != null)
		{
			destParamValue.setDelegate(true);
			destParamValue = (com.earthview.world.spatial.math.Matrix4)destParamValueClassFactory.create();
			destParamValue.setDelegate(true);
			destParamValue.setInstancePointer(new InstancePointer(dest));
		}
		boolean forGpuProgramParamValue = forGpuProgram;
		_makeProjectionMatrix(leftParamValue, rightParamValue, bottomParamValue, topParamValue, nearPlaneParamValue, farPlaneParamValue, destParamValue, forGpuProgramParamValue);
	}

	native private void _makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool(long pNativeObject, double left, double right, double bottom, double top, double nearPlane, double farPlane, long dest, boolean forGpuProgram);
	/**
	 * 生成一个适应渲染系统给的透视投影矩阵
	 * @param left 
	 * @param right 
	 * @param bottom 
	 * @param top 
	 * @param nearPlane 
	 * @param farPlane 
	 * @param dest 
	 * @param forGpuProgram 
	 */
	public void _makeProjectionMatrix(double left, double right, double bottom, double top, double nearPlane, double farPlane, com.earthview.world.spatial.math.Matrix4 dest, boolean forGpuProgram)
	{
		double leftParamValue = left;
		double rightParamValue = right;
		double bottomParamValue = bottom;
		double topParamValue = top;
		double nearPlaneParamValue = nearPlane;
		double farPlaneParamValue = farPlane;
		long destParamValue = dest.nativeObject.pointer;
		boolean forGpuProgramParamValue = forGpuProgram;
		_makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool(this.nativeObject.pointer, leftParamValue, rightParamValue, bottomParamValue, topParamValue, nearPlaneParamValue, farPlaneParamValue, destParamValue, forGpuProgramParamValue);
	}
	native private void _makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool_NoVirtual(long pNativeObject, double left, double right, double bottom, double top, double nearPlane, double farPlane, long dest, boolean forGpuProgram);
	protected void _makeProjectionMatrix_NoVirtual(double left, double right, double bottom, double top, double nearPlane, double farPlane, com.earthview.world.spatial.math.Matrix4 dest, boolean forGpuProgram)
	{
		double leftParamValue = left;
		double rightParamValue = right;
		double bottomParamValue = bottom;
		double topParamValue = top;
		double nearPlaneParamValue = nearPlane;
		double farPlaneParamValue = farPlane;
		long destParamValue = dest.nativeObject.pointer;
		boolean forGpuProgramParamValue = forGpuProgram;
		_makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool_NoVirtual(this.nativeObject.pointer, leftParamValue, rightParamValue, bottomParamValue, topParamValue, nearPlaneParamValue, farPlaneParamValue, destParamValue, forGpuProgramParamValue);
	}

	protected  void _makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_callback(double left, double right, double bottom, double top, double nearPlane, double farPlane, long dest)
	{
		double leftParamValue = left;
		double rightParamValue = right;
		double bottomParamValue = bottom;
		double topParamValue = top;
		double nearPlaneParamValue = nearPlane;
		double farPlaneParamValue = farPlane;
		com.earthview.world.spatial.math.Matrix4 destParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		destParamValue.setDelegate(true);
		destParamValue.setInstancePointer(new InstancePointer(dest));
		IClassFactory destParamValueClassFactory = GlobalClassFactoryMap.get(destParamValue.getCppInstanceTypeName());
		if (destParamValueClassFactory != null)
		{
			destParamValue.setDelegate(true);
			destParamValue = (com.earthview.world.spatial.math.Matrix4)destParamValueClassFactory.create();
			destParamValue.setDelegate(true);
			destParamValue.setInstancePointer(new InstancePointer(dest));
		}
		_makeProjectionMatrix(leftParamValue, rightParamValue, bottomParamValue, topParamValue, nearPlaneParamValue, farPlaneParamValue, destParamValue);
	}

	native private void _makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4(long pNativeObject, double left, double right, double bottom, double top, double nearPlane, double farPlane, long dest);
	/**
	 * 生成一个适应渲染系统给的透视投影矩阵
	 * @param left 
	 * @param right 
	 * @param bottom 
	 * @param top 
	 * @param nearPlane 
	 * @param farPlane 
	 * @param dest 
	 */
	public void _makeProjectionMatrix(double left, double right, double bottom, double top, double nearPlane, double farPlane, com.earthview.world.spatial.math.Matrix4 dest)
	{
		double leftParamValue = left;
		double rightParamValue = right;
		double bottomParamValue = bottom;
		double topParamValue = top;
		double nearPlaneParamValue = nearPlane;
		double farPlaneParamValue = farPlane;
		long destParamValue = dest.nativeObject.pointer;
		_makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4(this.nativeObject.pointer, leftParamValue, rightParamValue, bottomParamValue, topParamValue, nearPlaneParamValue, farPlaneParamValue, destParamValue);
	}
	native private void _makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_NoVirtual(long pNativeObject, double left, double right, double bottom, double top, double nearPlane, double farPlane, long dest);
	protected void _makeProjectionMatrix_NoVirtual(double left, double right, double bottom, double top, double nearPlane, double farPlane, com.earthview.world.spatial.math.Matrix4 dest)
	{
		double leftParamValue = left;
		double rightParamValue = right;
		double bottomParamValue = bottom;
		double topParamValue = top;
		double nearPlaneParamValue = nearPlane;
		double farPlaneParamValue = farPlane;
		long destParamValue = dest.nativeObject.pointer;
		_makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_NoVirtual(this.nativeObject.pointer, leftParamValue, rightParamValue, bottomParamValue, topParamValue, nearPlaneParamValue, farPlaneParamValue, destParamValue);
	}

	protected  void _makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool_callback(long fovy, double aspect, double nearPlane, double farPlane, long dest, boolean forGpuProgram)
	{
		com.earthview.world.spatial.math.Radian fovyParamValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		fovyParamValue.setDelegate(true);
		fovyParamValue.setInstancePointer(new InstancePointer(fovy));
		IClassFactory fovyParamValueClassFactory = GlobalClassFactoryMap.get(fovyParamValue.getCppInstanceTypeName());
		if (fovyParamValueClassFactory != null)
		{
			fovyParamValue.setDelegate(true);
			fovyParamValue = (com.earthview.world.spatial.math.Radian)fovyParamValueClassFactory.create();
			fovyParamValue.setDelegate(true);
			fovyParamValue.setInstancePointer(new InstancePointer(fovy));
		}
		double aspectParamValue = aspect;
		double nearPlaneParamValue = nearPlane;
		double farPlaneParamValue = farPlane;
		com.earthview.world.spatial.math.Matrix4 destParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		destParamValue.setDelegate(true);
		destParamValue.setInstancePointer(new InstancePointer(dest));
		IClassFactory destParamValueClassFactory = GlobalClassFactoryMap.get(destParamValue.getCppInstanceTypeName());
		if (destParamValueClassFactory != null)
		{
			destParamValue.setDelegate(true);
			destParamValue = (com.earthview.world.spatial.math.Matrix4)destParamValueClassFactory.create();
			destParamValue.setDelegate(true);
			destParamValue.setInstancePointer(new InstancePointer(dest));
		}
		boolean forGpuProgramParamValue = forGpuProgram;
		_makeOrthoMatrix(fovyParamValue, aspectParamValue, nearPlaneParamValue, farPlaneParamValue, destParamValue, forGpuProgramParamValue);
	}

	native private void _makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool(long pNativeObject, long fovy, double aspect, double nearPlane, double farPlane, long dest, boolean forGpuProgram);
	/**
	 * 生成一个适合渲染系统的正射投影矩阵
	 * @param fovy 
	 * @param aspect 
	 * @param nearPlane 
	 * @param farPlane 
	 * @param dest 
	 * @param forGpuProgram 
	 */
	public void _makeOrthoMatrix(com.earthview.world.spatial.math.Radian fovy, double aspect, double nearPlane, double farPlane, com.earthview.world.spatial.math.Matrix4 dest, boolean forGpuProgram)
	{
		long fovyParamValue = fovy.nativeObject.pointer;
		double aspectParamValue = aspect;
		double nearPlaneParamValue = nearPlane;
		double farPlaneParamValue = farPlane;
		long destParamValue = dest.nativeObject.pointer;
		boolean forGpuProgramParamValue = forGpuProgram;
		_makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool(this.nativeObject.pointer, fovyParamValue, aspectParamValue, nearPlaneParamValue, farPlaneParamValue, destParamValue, forGpuProgramParamValue);
	}
	native private void _makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool_NoVirtual(long pNativeObject, long fovy, double aspect, double nearPlane, double farPlane, long dest, boolean forGpuProgram);
	protected void _makeOrthoMatrix_NoVirtual(com.earthview.world.spatial.math.Radian fovy, double aspect, double nearPlane, double farPlane, com.earthview.world.spatial.math.Matrix4 dest, boolean forGpuProgram)
	{
		long fovyParamValue = fovy.nativeObject.pointer;
		double aspectParamValue = aspect;
		double nearPlaneParamValue = nearPlane;
		double farPlaneParamValue = farPlane;
		long destParamValue = dest.nativeObject.pointer;
		boolean forGpuProgramParamValue = forGpuProgram;
		_makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool_NoVirtual(this.nativeObject.pointer, fovyParamValue, aspectParamValue, nearPlaneParamValue, farPlaneParamValue, destParamValue, forGpuProgramParamValue);
	}

	protected  void _makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_callback(long fovy, double aspect, double nearPlane, double farPlane, long dest)
	{
		com.earthview.world.spatial.math.Radian fovyParamValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		fovyParamValue.setDelegate(true);
		fovyParamValue.setInstancePointer(new InstancePointer(fovy));
		IClassFactory fovyParamValueClassFactory = GlobalClassFactoryMap.get(fovyParamValue.getCppInstanceTypeName());
		if (fovyParamValueClassFactory != null)
		{
			fovyParamValue.setDelegate(true);
			fovyParamValue = (com.earthview.world.spatial.math.Radian)fovyParamValueClassFactory.create();
			fovyParamValue.setDelegate(true);
			fovyParamValue.setInstancePointer(new InstancePointer(fovy));
		}
		double aspectParamValue = aspect;
		double nearPlaneParamValue = nearPlane;
		double farPlaneParamValue = farPlane;
		com.earthview.world.spatial.math.Matrix4 destParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		destParamValue.setDelegate(true);
		destParamValue.setInstancePointer(new InstancePointer(dest));
		IClassFactory destParamValueClassFactory = GlobalClassFactoryMap.get(destParamValue.getCppInstanceTypeName());
		if (destParamValueClassFactory != null)
		{
			destParamValue.setDelegate(true);
			destParamValue = (com.earthview.world.spatial.math.Matrix4)destParamValueClassFactory.create();
			destParamValue.setDelegate(true);
			destParamValue.setInstancePointer(new InstancePointer(dest));
		}
		_makeOrthoMatrix(fovyParamValue, aspectParamValue, nearPlaneParamValue, farPlaneParamValue, destParamValue);
	}

	native private void _makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4(long pNativeObject, long fovy, double aspect, double nearPlane, double farPlane, long dest);
	/**
	 * 生成一个适合渲染系统的正射投影矩阵
	 * @param fovy 
	 * @param aspect 
	 * @param nearPlane 
	 * @param farPlane 
	 * @param dest 
	 */
	public void _makeOrthoMatrix(com.earthview.world.spatial.math.Radian fovy, double aspect, double nearPlane, double farPlane, com.earthview.world.spatial.math.Matrix4 dest)
	{
		long fovyParamValue = fovy.nativeObject.pointer;
		double aspectParamValue = aspect;
		double nearPlaneParamValue = nearPlane;
		double farPlaneParamValue = farPlane;
		long destParamValue = dest.nativeObject.pointer;
		_makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4(this.nativeObject.pointer, fovyParamValue, aspectParamValue, nearPlaneParamValue, farPlaneParamValue, destParamValue);
	}
	native private void _makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_NoVirtual(long pNativeObject, long fovy, double aspect, double nearPlane, double farPlane, long dest);
	protected void _makeOrthoMatrix_NoVirtual(com.earthview.world.spatial.math.Radian fovy, double aspect, double nearPlane, double farPlane, com.earthview.world.spatial.math.Matrix4 dest)
	{
		long fovyParamValue = fovy.nativeObject.pointer;
		double aspectParamValue = aspect;
		double nearPlaneParamValue = nearPlane;
		double farPlaneParamValue = farPlane;
		long destParamValue = dest.nativeObject.pointer;
		_makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_NoVirtual(this.nativeObject.pointer, fovyParamValue, aspectParamValue, nearPlaneParamValue, farPlaneParamValue, destParamValue);
	}

	protected  void _applyObliqueDepthProjection_CMatrix4_CPlane_ev_bool_callback(long matrix, long plane, boolean forGpuProgram)
	{
		com.earthview.world.spatial.math.Matrix4 matrixParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		matrixParamValue.setDelegate(true);
		matrixParamValue.setInstancePointer(new InstancePointer(matrix));
		IClassFactory matrixParamValueClassFactory = GlobalClassFactoryMap.get(matrixParamValue.getCppInstanceTypeName());
		if (matrixParamValueClassFactory != null)
		{
			matrixParamValue.setDelegate(true);
			matrixParamValue = (com.earthview.world.spatial.math.Matrix4)matrixParamValueClassFactory.create();
			matrixParamValue.setDelegate(true);
			matrixParamValue.setInstancePointer(new InstancePointer(matrix));
		}
		com.earthview.world.spatial.math.Plane planeParamValue = new com.earthview.world.spatial.math.Plane(CreatedWhenConstruct.CWC_NotToCreate);
		planeParamValue.setDelegate(true);
		planeParamValue.setInstancePointer(new InstancePointer(plane));
		IClassFactory planeParamValueClassFactory = GlobalClassFactoryMap.get(planeParamValue.getCppInstanceTypeName());
		if (planeParamValueClassFactory != null)
		{
			planeParamValue.setDelegate(true);
			planeParamValue = (com.earthview.world.spatial.math.Plane)planeParamValueClassFactory.create();
			planeParamValue.setDelegate(true);
			planeParamValue.setInstancePointer(new InstancePointer(plane));
		}
		boolean forGpuProgramParamValue = forGpuProgram;
		_applyObliqueDepthProjection(matrixParamValue, planeParamValue, forGpuProgramParamValue);
	}

	native private void _applyObliqueDepthProjection_CMatrix4_CPlane_ev_bool(long pNativeObject, long matrix, long plane, boolean forGpuProgram);
	/**
	 * 更新透视投影矩阵，应用倾斜深度投影
	 * @param matrix 已存在的投影矩阵
	 * @param plane 剪切平面
	 * @param forGpuProgram 
	 */
	public void _applyObliqueDepthProjection(com.earthview.world.spatial.math.Matrix4 matrix, com.earthview.world.spatial.math.Plane plane, boolean forGpuProgram)
	{
		long matrixParamValue = matrix.nativeObject.pointer;
		long planeParamValue = plane.nativeObject.pointer;
		boolean forGpuProgramParamValue = forGpuProgram;
		_applyObliqueDepthProjection_CMatrix4_CPlane_ev_bool(this.nativeObject.pointer, matrixParamValue, planeParamValue, forGpuProgramParamValue);
	}
	native private void _applyObliqueDepthProjection_CMatrix4_CPlane_ev_bool_NoVirtual(long pNativeObject, long matrix, long plane, boolean forGpuProgram);
	protected void _applyObliqueDepthProjection_NoVirtual(com.earthview.world.spatial.math.Matrix4 matrix, com.earthview.world.spatial.math.Plane plane, boolean forGpuProgram)
	{
		long matrixParamValue = matrix.nativeObject.pointer;
		long planeParamValue = plane.nativeObject.pointer;
		boolean forGpuProgramParamValue = forGpuProgram;
		_applyObliqueDepthProjection_CMatrix4_CPlane_ev_bool_NoVirtual(this.nativeObject.pointer, matrixParamValue, planeParamValue, forGpuProgramParamValue);
	}

	protected  void _setPolygonMode_PolygonMode_callback(int level)
	{
		com.earthview.world.graphic.PolygonMode levelParamValue = com.earthview.world.graphic.PolygonMode.toEnum(level);
		_setPolygonMode(levelParamValue);
	}

	native private void _setPolygonMode_PolygonMode(long pNativeObject, int level);
	public void _setPolygonMode(com.earthview.world.graphic.PolygonMode level)
	{
		int levelParamValue = level.getValue();
		_setPolygonMode_PolygonMode(this.nativeObject.pointer, levelParamValue);
	}
	native private void _setPolygonMode_PolygonMode_NoVirtual(long pNativeObject, int level);
	protected void _setPolygonMode_NoVirtual(com.earthview.world.graphic.PolygonMode level)
	{
		int levelParamValue = level.getValue();
		_setPolygonMode_PolygonMode_NoVirtual(this.nativeObject.pointer, levelParamValue);
	}

	protected  void setStencilCheckEnabled_ev_bool_callback(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setStencilCheckEnabled(enabledParamValue);
	}

	native private void setStencilCheckEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置是否启用模板缓冲测试
	 * @param evabled 
	 */
	public void setStencilCheckEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setStencilCheckEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setStencilCheckEnabled_ev_bool_NoVirtual(long pNativeObject, boolean enabled);
	protected void setStencilCheckEnabled_NoVirtual(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setStencilCheckEnabled_ev_bool_NoVirtual(this.nativeObject.pointer, enabledParamValue);
	}

	protected  void setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool_callback(int func, long refValue, long mask, int stencilFailOp, int depthFailOp, int passOp, boolean twoSidedOperation)
	{
		com.earthview.world.graphic.CompareFunction funcParamValue = com.earthview.world.graphic.CompareFunction.toEnum(func);
		long refValueParamValue = refValue;
		long maskParamValue = mask;
		StencilOperation stencilFailOpParamValue = StencilOperation.toEnum(stencilFailOp);
		StencilOperation depthFailOpParamValue = StencilOperation.toEnum(depthFailOp);
		StencilOperation passOpParamValue = StencilOperation.toEnum(passOp);
		boolean twoSidedOperationParamValue = twoSidedOperation;
		setStencilBufferParams(funcParamValue, refValueParamValue, maskParamValue, stencilFailOpParamValue, depthFailOpParamValue, passOpParamValue, twoSidedOperationParamValue);
	}

	native private void setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool(long pNativeObject, int func, long refValue, long mask, int stencilFailOp, int depthFailOp, int passOp, boolean twoSidedOperation);
	/**
	 * 设置模板缓冲测试参数
	 * @param func 比较函数
	 * @param refValue 参考值
	 * @param mask 
	 * @param stencilFailOp 模板检查失败时模板缓冲产生的行为
	 * @param depthFailOp 模板检查通过，但是深度检查失败时模板缓冲产生的行为
	 * @param passOp 模板检查和深度检查都通过时模板缓冲产生的行为
	 * @param twoSidedOperation 
	 */
	public void setStencilBufferParams(com.earthview.world.graphic.CompareFunction func, long refValue, long mask, StencilOperation stencilFailOp, StencilOperation depthFailOp, StencilOperation passOp, boolean twoSidedOperation)
	{
		int funcParamValue = func.getValue();
		long refValueParamValue = refValue;
		long maskParamValue = mask;
		int stencilFailOpParamValue = stencilFailOp.getValue();
		int depthFailOpParamValue = depthFailOp.getValue();
		int passOpParamValue = passOp.getValue();
		boolean twoSidedOperationParamValue = twoSidedOperation;
		setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool(this.nativeObject.pointer, funcParamValue, refValueParamValue, maskParamValue, stencilFailOpParamValue, depthFailOpParamValue, passOpParamValue, twoSidedOperationParamValue);
	}
	native private void setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool_NoVirtual(long pNativeObject, int func, long refValue, long mask, int stencilFailOp, int depthFailOp, int passOp, boolean twoSidedOperation);
	protected void setStencilBufferParams_NoVirtual(com.earthview.world.graphic.CompareFunction func, long refValue, long mask, StencilOperation stencilFailOp, StencilOperation depthFailOp, StencilOperation passOp, boolean twoSidedOperation)
	{
		int funcParamValue = func.getValue();
		long refValueParamValue = refValue;
		long maskParamValue = mask;
		int stencilFailOpParamValue = stencilFailOp.getValue();
		int depthFailOpParamValue = depthFailOp.getValue();
		int passOpParamValue = passOp.getValue();
		boolean twoSidedOperationParamValue = twoSidedOperation;
		setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool_NoVirtual(this.nativeObject.pointer, funcParamValue, refValueParamValue, maskParamValue, stencilFailOpParamValue, depthFailOpParamValue, passOpParamValue, twoSidedOperationParamValue);
	}

	protected  void setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_callback(int func, long refValue, long mask, int stencilFailOp, int depthFailOp, int passOp)
	{
		com.earthview.world.graphic.CompareFunction funcParamValue = com.earthview.world.graphic.CompareFunction.toEnum(func);
		long refValueParamValue = refValue;
		long maskParamValue = mask;
		StencilOperation stencilFailOpParamValue = StencilOperation.toEnum(stencilFailOp);
		StencilOperation depthFailOpParamValue = StencilOperation.toEnum(depthFailOp);
		StencilOperation passOpParamValue = StencilOperation.toEnum(passOp);
		setStencilBufferParams(funcParamValue, refValueParamValue, maskParamValue, stencilFailOpParamValue, depthFailOpParamValue, passOpParamValue);
	}

	native private void setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation(long pNativeObject, int func, long refValue, long mask, int stencilFailOp, int depthFailOp, int passOp);
	/**
	 * 设置模板缓冲测试参数
	 * @param func 比较函数
	 * @param refValue 参考值
	 * @param mask 
	 * @param stencilFailOp 模板检查失败时模板缓冲产生的行为
	 * @param depthFailOp 模板检查通过，但是深度检查失败时模板缓冲产生的行为
	 * @param passOp 模板检查和深度检查都通过时模板缓冲产生的行为
	 */
	public void setStencilBufferParams(com.earthview.world.graphic.CompareFunction func, long refValue, long mask, StencilOperation stencilFailOp, StencilOperation depthFailOp, StencilOperation passOp)
	{
		int funcParamValue = func.getValue();
		long refValueParamValue = refValue;
		long maskParamValue = mask;
		int stencilFailOpParamValue = stencilFailOp.getValue();
		int depthFailOpParamValue = depthFailOp.getValue();
		int passOpParamValue = passOp.getValue();
		setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation(this.nativeObject.pointer, funcParamValue, refValueParamValue, maskParamValue, stencilFailOpParamValue, depthFailOpParamValue, passOpParamValue);
	}
	native private void setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_NoVirtual(long pNativeObject, int func, long refValue, long mask, int stencilFailOp, int depthFailOp, int passOp);
	protected void setStencilBufferParams_NoVirtual(com.earthview.world.graphic.CompareFunction func, long refValue, long mask, StencilOperation stencilFailOp, StencilOperation depthFailOp, StencilOperation passOp)
	{
		int funcParamValue = func.getValue();
		long refValueParamValue = refValue;
		long maskParamValue = mask;
		int stencilFailOpParamValue = stencilFailOp.getValue();
		int depthFailOpParamValue = depthFailOp.getValue();
		int passOpParamValue = passOp.getValue();
		setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_NoVirtual(this.nativeObject.pointer, funcParamValue, refValueParamValue, maskParamValue, stencilFailOpParamValue, depthFailOpParamValue, passOpParamValue);
	}

	protected  void setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_callback(int func, long refValue, long mask, int stencilFailOp, int depthFailOp)
	{
		com.earthview.world.graphic.CompareFunction funcParamValue = com.earthview.world.graphic.CompareFunction.toEnum(func);
		long refValueParamValue = refValue;
		long maskParamValue = mask;
		StencilOperation stencilFailOpParamValue = StencilOperation.toEnum(stencilFailOp);
		StencilOperation depthFailOpParamValue = StencilOperation.toEnum(depthFailOp);
		setStencilBufferParams(funcParamValue, refValueParamValue, maskParamValue, stencilFailOpParamValue, depthFailOpParamValue);
	}

	native private void setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation(long pNativeObject, int func, long refValue, long mask, int stencilFailOp, int depthFailOp);
	/**
	 * 设置模板缓冲测试参数
	 * @param func 比较函数
	 * @param refValue 参考值
	 * @param mask 
	 * @param stencilFailOp 模板检查失败时模板缓冲产生的行为
	 * @param depthFailOp 模板检查通过，但是深度检查失败时模板缓冲产生的行为
	 */
	public void setStencilBufferParams(com.earthview.world.graphic.CompareFunction func, long refValue, long mask, StencilOperation stencilFailOp, StencilOperation depthFailOp)
	{
		int funcParamValue = func.getValue();
		long refValueParamValue = refValue;
		long maskParamValue = mask;
		int stencilFailOpParamValue = stencilFailOp.getValue();
		int depthFailOpParamValue = depthFailOp.getValue();
		setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation(this.nativeObject.pointer, funcParamValue, refValueParamValue, maskParamValue, stencilFailOpParamValue, depthFailOpParamValue);
	}
	native private void setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_NoVirtual(long pNativeObject, int func, long refValue, long mask, int stencilFailOp, int depthFailOp);
	protected void setStencilBufferParams_NoVirtual(com.earthview.world.graphic.CompareFunction func, long refValue, long mask, StencilOperation stencilFailOp, StencilOperation depthFailOp)
	{
		int funcParamValue = func.getValue();
		long refValueParamValue = refValue;
		long maskParamValue = mask;
		int stencilFailOpParamValue = stencilFailOp.getValue();
		int depthFailOpParamValue = depthFailOp.getValue();
		setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_NoVirtual(this.nativeObject.pointer, funcParamValue, refValueParamValue, maskParamValue, stencilFailOpParamValue, depthFailOpParamValue);
	}

	protected  void setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_callback(int func, long refValue, long mask, int stencilFailOp)
	{
		com.earthview.world.graphic.CompareFunction funcParamValue = com.earthview.world.graphic.CompareFunction.toEnum(func);
		long refValueParamValue = refValue;
		long maskParamValue = mask;
		StencilOperation stencilFailOpParamValue = StencilOperation.toEnum(stencilFailOp);
		setStencilBufferParams(funcParamValue, refValueParamValue, maskParamValue, stencilFailOpParamValue);
	}

	native private void setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation(long pNativeObject, int func, long refValue, long mask, int stencilFailOp);
	/**
	 * 设置模板缓冲测试参数
	 * @param func 比较函数
	 * @param refValue 参考值
	 * @param mask 
	 * @param stencilFailOp 模板检查失败时模板缓冲产生的行为
	 */
	public void setStencilBufferParams(com.earthview.world.graphic.CompareFunction func, long refValue, long mask, StencilOperation stencilFailOp)
	{
		int funcParamValue = func.getValue();
		long refValueParamValue = refValue;
		long maskParamValue = mask;
		int stencilFailOpParamValue = stencilFailOp.getValue();
		setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation(this.nativeObject.pointer, funcParamValue, refValueParamValue, maskParamValue, stencilFailOpParamValue);
	}
	native private void setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_NoVirtual(long pNativeObject, int func, long refValue, long mask, int stencilFailOp);
	protected void setStencilBufferParams_NoVirtual(com.earthview.world.graphic.CompareFunction func, long refValue, long mask, StencilOperation stencilFailOp)
	{
		int funcParamValue = func.getValue();
		long refValueParamValue = refValue;
		long maskParamValue = mask;
		int stencilFailOpParamValue = stencilFailOp.getValue();
		setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_NoVirtual(this.nativeObject.pointer, funcParamValue, refValueParamValue, maskParamValue, stencilFailOpParamValue);
	}

	protected  void setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_callback(int func, long refValue, long mask)
	{
		com.earthview.world.graphic.CompareFunction funcParamValue = com.earthview.world.graphic.CompareFunction.toEnum(func);
		long refValueParamValue = refValue;
		long maskParamValue = mask;
		setStencilBufferParams(funcParamValue, refValueParamValue, maskParamValue);
	}

	native private void setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32(long pNativeObject, int func, long refValue, long mask);
	/**
	 * 设置模板缓冲测试参数
	 * @param func 比较函数
	 * @param refValue 参考值
	 * @param mask 
	 */
	public void setStencilBufferParams(com.earthview.world.graphic.CompareFunction func, long refValue, long mask)
	{
		int funcParamValue = func.getValue();
		long refValueParamValue = refValue;
		long maskParamValue = mask;
		setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32(this.nativeObject.pointer, funcParamValue, refValueParamValue, maskParamValue);
	}
	native private void setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, int func, long refValue, long mask);
	protected void setStencilBufferParams_NoVirtual(com.earthview.world.graphic.CompareFunction func, long refValue, long mask)
	{
		int funcParamValue = func.getValue();
		long refValueParamValue = refValue;
		long maskParamValue = mask;
		setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, funcParamValue, refValueParamValue, maskParamValue);
	}

	protected  void setStencilBufferParams_CompareFunction_ev_uint32_callback(int func, long refValue)
	{
		com.earthview.world.graphic.CompareFunction funcParamValue = com.earthview.world.graphic.CompareFunction.toEnum(func);
		long refValueParamValue = refValue;
		setStencilBufferParams(funcParamValue, refValueParamValue);
	}

	native private void setStencilBufferParams_CompareFunction_ev_uint32(long pNativeObject, int func, long refValue);
	/**
	 * 设置模板缓冲测试参数
	 * @param func 比较函数
	 * @param refValue 参考值
	 */
	public void setStencilBufferParams(com.earthview.world.graphic.CompareFunction func, long refValue)
	{
		int funcParamValue = func.getValue();
		long refValueParamValue = refValue;
		setStencilBufferParams_CompareFunction_ev_uint32(this.nativeObject.pointer, funcParamValue, refValueParamValue);
	}
	native private void setStencilBufferParams_CompareFunction_ev_uint32_NoVirtual(long pNativeObject, int func, long refValue);
	protected void setStencilBufferParams_NoVirtual(com.earthview.world.graphic.CompareFunction func, long refValue)
	{
		int funcParamValue = func.getValue();
		long refValueParamValue = refValue;
		setStencilBufferParams_CompareFunction_ev_uint32_NoVirtual(this.nativeObject.pointer, funcParamValue, refValueParamValue);
	}

	protected  void setStencilBufferParams_CompareFunction_callback(int func)
	{
		com.earthview.world.graphic.CompareFunction funcParamValue = com.earthview.world.graphic.CompareFunction.toEnum(func);
		setStencilBufferParams(funcParamValue);
	}

	native private void setStencilBufferParams_CompareFunction(long pNativeObject, int func);
	/**
	 * 设置模板缓冲测试参数
	 * @param func 比较函数
	 */
	public void setStencilBufferParams(com.earthview.world.graphic.CompareFunction func)
	{
		int funcParamValue = func.getValue();
		setStencilBufferParams_CompareFunction(this.nativeObject.pointer, funcParamValue);
	}
	native private void setStencilBufferParams_CompareFunction_NoVirtual(long pNativeObject, int func);
	protected void setStencilBufferParams_NoVirtual(com.earthview.world.graphic.CompareFunction func)
	{
		int funcParamValue = func.getValue();
		setStencilBufferParams_CompareFunction_NoVirtual(this.nativeObject.pointer, funcParamValue);
	}

	protected  void setStencilBufferParams_void_callback()
	{
		setStencilBufferParams();
	}

	native private void setStencilBufferParams_void(long pNativeObject);
	/**
	 * 设置模板缓冲测试参数
	 * @param  
	 */
	public void setStencilBufferParams()
	{
		setStencilBufferParams_void(this.nativeObject.pointer);
	}
	native private void setStencilBufferParams_void_NoVirtual(long pNativeObject);
	protected void setStencilBufferParams_NoVirtual()
	{
		setStencilBufferParams_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setVertexDeclaration_CVertexDeclaration_callback(long decl)
	{
		com.earthview.world.graphic.VertexDeclaration declParamValue = (decl == 0L ? null : new com.earthview.world.graphic.VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate));
		if(declParamValue != null)
		{
		declParamValue.setDelegate(true);
		declParamValue.setInstancePointer(new InstancePointer(decl));
		IClassFactory declParamValueClassFactory = GlobalClassFactoryMap.get(declParamValue.getCppInstanceTypeName());
		if (declParamValueClassFactory != null)
		{
			declParamValue.setDelegate(true);
			declParamValue = (com.earthview.world.graphic.VertexDeclaration)declParamValueClassFactory.create();
			declParamValue.setDelegate(true);
			declParamValue.setInstancePointer(new InstancePointer(decl));
		}
		}
		setVertexDeclaration(declParamValue);
	}

	native private void setVertexDeclaration_CVertexDeclaration(long pNativeObject, long decl);
	/**
	 * 设置当前的顶点声明
	 * @param decl 
	 */
	public void setVertexDeclaration(com.earthview.world.graphic.VertexDeclaration decl)
	{
		long declParamValue = (decl == null ? 0L : decl.nativeObject.pointer);
		setVertexDeclaration_CVertexDeclaration(this.nativeObject.pointer, declParamValue);
	}
	native private void setVertexDeclaration_CVertexDeclaration_NoVirtual(long pNativeObject, long decl);
	protected void setVertexDeclaration_NoVirtual(com.earthview.world.graphic.VertexDeclaration decl)
	{
		long declParamValue = (decl == null ? 0L : decl.nativeObject.pointer);
		setVertexDeclaration_CVertexDeclaration_NoVirtual(this.nativeObject.pointer, declParamValue);
	}

	protected  void setVertexBufferBinding_CVertexBufferBinding_callback(long binding)
	{
		com.earthview.world.graphic.VertexBufferBinding bindingParamValue = (binding == 0L ? null : new com.earthview.world.graphic.VertexBufferBinding(CreatedWhenConstruct.CWC_NotToCreate));
		if(bindingParamValue != null)
		{
		bindingParamValue.setDelegate(true);
		bindingParamValue.setInstancePointer(new InstancePointer(binding));
		IClassFactory bindingParamValueClassFactory = GlobalClassFactoryMap.get(bindingParamValue.getCppInstanceTypeName());
		if (bindingParamValueClassFactory != null)
		{
			bindingParamValue.setDelegate(true);
			bindingParamValue = (com.earthview.world.graphic.VertexBufferBinding)bindingParamValueClassFactory.create();
			bindingParamValue.setDelegate(true);
			bindingParamValue.setInstancePointer(new InstancePointer(binding));
		}
		}
		setVertexBufferBinding(bindingParamValue);
	}

	native private void setVertexBufferBinding_CVertexBufferBinding(long pNativeObject, long binding);
	/**
	 * 设定当前的顶点缓冲的绑定状态
	 * @param  
	 */
	public void setVertexBufferBinding(com.earthview.world.graphic.VertexBufferBinding binding)
	{
		long bindingParamValue = (binding == null ? 0L : binding.nativeObject.pointer);
		setVertexBufferBinding_CVertexBufferBinding(this.nativeObject.pointer, bindingParamValue);
	}
	native private void setVertexBufferBinding_CVertexBufferBinding_NoVirtual(long pNativeObject, long binding);
	protected void setVertexBufferBinding_NoVirtual(com.earthview.world.graphic.VertexBufferBinding binding)
	{
		long bindingParamValue = (binding == null ? 0L : binding.nativeObject.pointer);
		setVertexBufferBinding_CVertexBufferBinding_NoVirtual(this.nativeObject.pointer, bindingParamValue);
	}

	protected  void setNormaliseNormals_ev_bool_callback(boolean normalise)
	{
		boolean normaliseParamValue = normalise;
		setNormaliseNormals(normaliseParamValue);
	}

	native private void setNormaliseNormals_ev_bool(long pNativeObject, boolean normalise);
	public void setNormaliseNormals(boolean normalise)
	{
		boolean normaliseParamValue = normalise;
		setNormaliseNormals_ev_bool(this.nativeObject.pointer, normaliseParamValue);
	}
	native private void setNormaliseNormals_ev_bool_NoVirtual(long pNativeObject, boolean normalise);
	protected void setNormaliseNormals_NoVirtual(boolean normalise)
	{
		boolean normaliseParamValue = normalise;
		setNormaliseNormals_ev_bool_NoVirtual(this.nativeObject.pointer, normaliseParamValue);
	}

	protected  void _render_CRenderOperation_callback(long op)
	{
		com.earthview.world.graphic.RenderOperation opParamValue = new com.earthview.world.graphic.RenderOperation(CreatedWhenConstruct.CWC_NotToCreate);
		opParamValue.setDelegate(true);
		opParamValue.setInstancePointer(new InstancePointer(op));
		IClassFactory opParamValueClassFactory = GlobalClassFactoryMap.get(opParamValue.getCppInstanceTypeName());
		if (opParamValueClassFactory != null)
		{
			opParamValue.setDelegate(true);
			opParamValue = (com.earthview.world.graphic.RenderOperation)opParamValueClassFactory.create();
			opParamValue.setDelegate(true);
			opParamValue.setInstancePointer(new InstancePointer(op));
		}
		_render(opParamValue);
	}

	native private void _render_CRenderOperation(long pNativeObject, long op);
	/**
	 * 渲染
	 * @param op 渲染操作实例
	 */
	public void _render(com.earthview.world.graphic.RenderOperation op)
	{
		long opParamValue = op.nativeObject.pointer;
		_render_CRenderOperation(this.nativeObject.pointer, opParamValue);
	}
	native private void _render_CRenderOperation_NoVirtual(long pNativeObject, long op);
	protected void _render_NoVirtual(com.earthview.world.graphic.RenderOperation op)
	{
		long opParamValue = op.nativeObject.pointer;
		_render_CRenderOperation_NoVirtual(this.nativeObject.pointer, opParamValue);
	}

	native private long getCapabilities_void(long pNativeObject);
	/**
	 * 获得渲染系统的能力
	 * @param  
	 */
	public com.earthview.world.graphic.RenderSystemCapabilities getCapabilities()
	{
		long returnValue = getCapabilities_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderSystemCapabilities __returnValue = new com.earthview.world.graphic.RenderSystemCapabilities(CreatedWhenConstruct.CWC_NotToCreate, "CRenderSystemCapabilities");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderSystemCapabilities)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderSystemCapabilities");
		}
		return __returnValue;
	}
	protected  long getDriverVersion_void_callback()
	{
		com.earthview.world.graphic.DriverVersion returnValue = getDriverVersion();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDriverVersion_void(long pNativeObject);
	/**
	 * 返回驱动的译本
	 * @param  
	 */
	public com.earthview.world.graphic.DriverVersion getDriverVersion()
	{
		long returnValue = getDriverVersion_void(this.nativeObject.pointer);
		com.earthview.world.graphic.DriverVersion __returnValue = new com.earthview.world.graphic.DriverVersion(CreatedWhenConstruct.CWC_NotToCreate, "DriverVersion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.DriverVersion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DriverVersion");
		}
		return __returnValue;
	}
	native private long getDriverVersion_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.DriverVersion getDriverVersion_NoVirtual()
	{
		long returnValue = getDriverVersion_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.DriverVersion __returnValue = new com.earthview.world.graphic.DriverVersion(CreatedWhenConstruct.CWC_NotToCreate, "DriverVersion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.DriverVersion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DriverVersion");
		}
		return __returnValue;
	}

	protected  long getActD3D9Device_void_callback()
	{
		VoidPointer returnValue = getActD3D9Device();
		if(returnValue == null) {
			return 0L;
		}
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getActD3D9Device_void(long pNativeObject);
	public VoidPointer getActD3D9Device()
	{
		long returnValue = getActD3D9Device_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getActD3D9Device_void_NoVirtual(long pNativeObject);
	protected VoidPointer getActD3D9Device_NoVirtual()
	{
		long returnValue = getActD3D9Device_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}

	protected  String _getDefaultViewportMaterialScheme_void_callback()
	{
		String returnValue = _getDefaultViewportMaterialScheme();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String _getDefaultViewportMaterialScheme_void(long pNativeObject);
	public String _getDefaultViewportMaterialScheme()
	{
		String returnValue = _getDefaultViewportMaterialScheme_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String _getDefaultViewportMaterialScheme_void_NoVirtual(long pNativeObject);
	protected String _getDefaultViewportMaterialScheme_NoVirtual()
	{
		String returnValue = _getDefaultViewportMaterialScheme_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void bindGpuProgram_CGpuProgram_callback(long ref_prg)
	{
		com.earthview.world.graphic.GpuProgram ref_prgParamValue = (ref_prg == 0L ? null : new com.earthview.world.graphic.GpuProgram(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_prgParamValue != null)
		{
		ref_prgParamValue.setDelegate(true);
		ref_prgParamValue.setInstancePointer(new InstancePointer(ref_prg));
		IClassFactory ref_prgParamValueClassFactory = GlobalClassFactoryMap.get(ref_prgParamValue.getCppInstanceTypeName());
		if (ref_prgParamValueClassFactory != null)
		{
			ref_prgParamValue.setDelegate(true);
			ref_prgParamValue = (com.earthview.world.graphic.GpuProgram)ref_prgParamValueClassFactory.create();
			ref_prgParamValue.setDelegate(true);
			ref_prgParamValue.setInstancePointer(new InstancePointer(ref_prg));
		}
		}
		bindGpuProgram(ref_prgParamValue);
	}

	native private void bindGpuProgram_CGpuProgram(long pNativeObject, long ref_prg);
	/**
	 * 绑定Gpu程序
	 * @param prg 
	 */
	public void bindGpuProgram(com.earthview.world.graphic.GpuProgram ref_prg)
	{
		long ref_prgParamValue = (ref_prg == null ? 0L : ref_prg.nativeObject.pointer);
		bindGpuProgram_CGpuProgram(this.nativeObject.pointer, ref_prgParamValue);
	}
	native private void bindGpuProgram_CGpuProgram_NoVirtual(long pNativeObject, long ref_prg);
	protected void bindGpuProgram_NoVirtual(com.earthview.world.graphic.GpuProgram ref_prg)
	{
		long ref_prgParamValue = (ref_prg == null ? 0L : ref_prg.nativeObject.pointer);
		bindGpuProgram_CGpuProgram_NoVirtual(this.nativeObject.pointer, ref_prgParamValue);
	}

	protected  void bindGpuProgramParameters_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16_callback(int gptype, long params, int variabilityMask)
	{
		com.earthview.world.graphic.GpuProgramType gptypeParamValue = com.earthview.world.graphic.GpuProgramType.toEnum(gptype);
		com.earthview.world.graphic.GpuProgramParametersSharedPtr paramsParamValue = new com.earthview.world.graphic.GpuProgramParametersSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		paramsParamValue.setDelegate(true);
		paramsParamValue.setInstancePointer(new InstancePointer(params));
		IClassFactory paramsParamValueClassFactory = GlobalClassFactoryMap.get(paramsParamValue.getCppInstanceTypeName());
		if (paramsParamValueClassFactory != null)
		{
			paramsParamValue.setDelegate(true);
			paramsParamValue = (com.earthview.world.graphic.GpuProgramParametersSharedPtr)paramsParamValueClassFactory.create();
			paramsParamValue.setDelegate(true);
			paramsParamValue.setInstancePointer(new InstancePointer(params));
		}
		int variabilityMaskParamValue = variabilityMask;
		bindGpuProgramParameters(gptypeParamValue, paramsParamValue, variabilityMaskParamValue);
	}

	native private void bindGpuProgramParameters_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16(long pNativeObject, int gptype, long params, int variabilityMask);
	/**
	 * 绑定Gpu程序的参数
	 * @param gptype 程序的类型
	 * @param params 参数
	 * @param variabilityMask 标识哪些参数需要绑定
	 */
	public void bindGpuProgramParameters(com.earthview.world.graphic.GpuProgramType gptype, com.earthview.world.graphic.GpuProgramParametersSharedPtr params, int variabilityMask)
	{
		int gptypeParamValue = gptype.getValue();
		long paramsParamValue = params.nativeObject.pointer;
		int variabilityMaskParamValue = variabilityMask;
		bindGpuProgramParameters_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16(this.nativeObject.pointer, gptypeParamValue, paramsParamValue, variabilityMaskParamValue);
	}
	native private void bindGpuProgramParameters_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16_NoVirtual(long pNativeObject, int gptype, long params, int variabilityMask);
	protected void bindGpuProgramParameters_NoVirtual(com.earthview.world.graphic.GpuProgramType gptype, com.earthview.world.graphic.GpuProgramParametersSharedPtr params, int variabilityMask)
	{
		int gptypeParamValue = gptype.getValue();
		long paramsParamValue = params.nativeObject.pointer;
		int variabilityMaskParamValue = variabilityMask;
		bindGpuProgramParameters_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16_NoVirtual(this.nativeObject.pointer, gptypeParamValue, paramsParamValue, variabilityMaskParamValue);
	}

	protected  void bindGpuProgramPassIterationParameters_GpuProgramType_callback(int gptype)
	{
		com.earthview.world.graphic.GpuProgramType gptypeParamValue = com.earthview.world.graphic.GpuProgramType.toEnum(gptype);
		bindGpuProgramPassIterationParameters(gptypeParamValue);
	}

	native private void bindGpuProgramPassIterationParameters_GpuProgramType(long pNativeObject, int gptype);
	/**
	 * 绑定Gpu程序参数用于超过一次迭代渲染的通路
	 * @param gptype 
	 */
	public void bindGpuProgramPassIterationParameters(com.earthview.world.graphic.GpuProgramType gptype)
	{
		int gptypeParamValue = gptype.getValue();
		bindGpuProgramPassIterationParameters_GpuProgramType(this.nativeObject.pointer, gptypeParamValue);
	}
	native private void bindGpuProgramPassIterationParameters_GpuProgramType_NoVirtual(long pNativeObject, int gptype);
	protected void bindGpuProgramPassIterationParameters_NoVirtual(com.earthview.world.graphic.GpuProgramType gptype)
	{
		int gptypeParamValue = gptype.getValue();
		bindGpuProgramPassIterationParameters_GpuProgramType_NoVirtual(this.nativeObject.pointer, gptypeParamValue);
	}

	protected  void unbindGpuProgram_GpuProgramType_callback(int gptype)
	{
		com.earthview.world.graphic.GpuProgramType gptypeParamValue = com.earthview.world.graphic.GpuProgramType.toEnum(gptype);
		unbindGpuProgram(gptypeParamValue);
	}

	native private void unbindGpuProgram_GpuProgramType(long pNativeObject, int gptype);
	/**
	 * 解绑定指定类型的Gpu程序
	 * @param gptype 
	 */
	public void unbindGpuProgram(com.earthview.world.graphic.GpuProgramType gptype)
	{
		int gptypeParamValue = gptype.getValue();
		unbindGpuProgram_GpuProgramType(this.nativeObject.pointer, gptypeParamValue);
	}
	native private void unbindGpuProgram_GpuProgramType_NoVirtual(long pNativeObject, int gptype);
	protected void unbindGpuProgram_NoVirtual(com.earthview.world.graphic.GpuProgramType gptype)
	{
		int gptypeParamValue = gptype.getValue();
		unbindGpuProgram_GpuProgramType_NoVirtual(this.nativeObject.pointer, gptypeParamValue);
	}

	protected  boolean isGpuProgramBound_GpuProgramType_callback(int gptype)
	{
		com.earthview.world.graphic.GpuProgramType gptypeParamValue = com.earthview.world.graphic.GpuProgramType.toEnum(gptype);
		boolean returnValue = isGpuProgramBound(gptypeParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isGpuProgramBound_GpuProgramType(long pNativeObject, int gptype);
	/**
	 * 获得指定类型Gpu程序是否已绑定
	 * @param gptype 
	 */
	public boolean isGpuProgramBound(com.earthview.world.graphic.GpuProgramType gptype)
	{
		int gptypeParamValue = gptype.getValue();
		boolean returnValue = isGpuProgramBound_GpuProgramType(this.nativeObject.pointer, gptypeParamValue);
		return returnValue;
	}
	native private boolean isGpuProgramBound_GpuProgramType_NoVirtual(long pNativeObject, int gptype);
	protected boolean isGpuProgramBound_NoVirtual(com.earthview.world.graphic.GpuProgramType gptype)
	{
		int gptypeParamValue = gptype.getValue();
		boolean returnValue = isGpuProgramBound_GpuProgramType_NoVirtual(this.nativeObject.pointer, gptypeParamValue);
		return returnValue;
	}

	protected  void setClipPlanes_PlaneList_callback(long clipPlanes)
	{
		com.earthview.world.spatial.math.PlaneList clipPlanesParamValue = new com.earthview.world.spatial.math.PlaneList(CreatedWhenConstruct.CWC_NotToCreate);
		clipPlanesParamValue.setDelegate(true);
		clipPlanesParamValue.setInstancePointer(new InstancePointer(clipPlanes));
		IClassFactory clipPlanesParamValueClassFactory = GlobalClassFactoryMap.get(clipPlanesParamValue.getCppInstanceTypeName());
		if (clipPlanesParamValueClassFactory != null)
		{
			clipPlanesParamValue.setDelegate(true);
			clipPlanesParamValue = (com.earthview.world.spatial.math.PlaneList)clipPlanesParamValueClassFactory.create();
			clipPlanesParamValue.setDelegate(true);
			clipPlanesParamValue.setInstancePointer(new InstancePointer(clipPlanes));
		}
		setClipPlanes(clipPlanesParamValue);
	}

	native private void setClipPlanes_PlaneList(long pNativeObject, long clipPlanes);
	/**
	 * 设置裁剪面
	 * @param clipPlanes 
	 */
	public void setClipPlanes(com.earthview.world.spatial.math.PlaneList clipPlanes)
	{
		long clipPlanesParamValue = clipPlanes.nativeObject.pointer;
		setClipPlanes_PlaneList(this.nativeObject.pointer, clipPlanesParamValue);
	}
	native private void setClipPlanes_PlaneList_NoVirtual(long pNativeObject, long clipPlanes);
	protected void setClipPlanes_NoVirtual(com.earthview.world.spatial.math.PlaneList clipPlanes)
	{
		long clipPlanesParamValue = clipPlanes.nativeObject.pointer;
		setClipPlanes_PlaneList_NoVirtual(this.nativeObject.pointer, clipPlanesParamValue);
	}

	protected  void addClipPlane_CPlane_callback(long p)
	{
		com.earthview.world.spatial.math.Plane pParamValue = new com.earthview.world.spatial.math.Plane(CreatedWhenConstruct.CWC_NotToCreate);
		pParamValue.setDelegate(true);
		pParamValue.setInstancePointer(new InstancePointer(p));
		IClassFactory pParamValueClassFactory = GlobalClassFactoryMap.get(pParamValue.getCppInstanceTypeName());
		if (pParamValueClassFactory != null)
		{
			pParamValue.setDelegate(true);
			pParamValue = (com.earthview.world.spatial.math.Plane)pParamValueClassFactory.create();
			pParamValue.setDelegate(true);
			pParamValue.setInstancePointer(new InstancePointer(p));
		}
		addClipPlane(pParamValue);
	}

	native private void addClipPlane_CPlane(long pNativeObject, long p);
	/**
	 * 添加裁剪面
	 * @param p 
	 */
	public void addClipPlane(com.earthview.world.spatial.math.Plane p)
	{
		long pParamValue = p.nativeObject.pointer;
		addClipPlane_CPlane(this.nativeObject.pointer, pParamValue);
	}
	native private void addClipPlane_CPlane_NoVirtual(long pNativeObject, long p);
	protected void addClipPlane_NoVirtual(com.earthview.world.spatial.math.Plane p)
	{
		long pParamValue = p.nativeObject.pointer;
		addClipPlane_CPlane_NoVirtual(this.nativeObject.pointer, pParamValue);
	}

	protected  void addClipPlane_Real_Real_Real_Real_callback(double A, double B, double C, double D)
	{
		double AParamValue = A;
		double BParamValue = B;
		double CParamValue = C;
		double DParamValue = D;
		addClipPlane(AParamValue, BParamValue, CParamValue, DParamValue);
	}

	native private void addClipPlane_Real_Real_Real_Real(long pNativeObject, double A, double B, double C, double D);
	/**
	 * 添加裁剪面
	 * @param A 
	 * @param B 
	 * @param C 
	 * @param D 
	 */
	public void addClipPlane(double A, double B, double C, double D)
	{
		double AParamValue = A;
		double BParamValue = B;
		double CParamValue = C;
		double DParamValue = D;
		addClipPlane_Real_Real_Real_Real(this.nativeObject.pointer, AParamValue, BParamValue, CParamValue, DParamValue);
	}
	native private void addClipPlane_Real_Real_Real_Real_NoVirtual(long pNativeObject, double A, double B, double C, double D);
	protected void addClipPlane_NoVirtual(double A, double B, double C, double D)
	{
		double AParamValue = A;
		double BParamValue = B;
		double CParamValue = C;
		double DParamValue = D;
		addClipPlane_Real_Real_Real_Real_NoVirtual(this.nativeObject.pointer, AParamValue, BParamValue, CParamValue, DParamValue);
	}

	protected  void resetClipPlanes_void_callback()
	{
		resetClipPlanes();
	}

	native private void resetClipPlanes_void(long pNativeObject);
	/**
	 * 重置裁剪面
	 * @param clipPlanes 
	 */
	public void resetClipPlanes()
	{
		resetClipPlanes_void(this.nativeObject.pointer);
	}
	native private void resetClipPlanes_void_NoVirtual(long pNativeObject);
	protected void resetClipPlanes_NoVirtual()
	{
		resetClipPlanes_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _initRenderTargets_void_callback()
	{
		_initRenderTargets();
	}

	native private void _initRenderTargets_void(long pNativeObject);
	/**
	 * 初始化所有渲染目标
	 * @param  
	 */
	public void _initRenderTargets()
	{
		_initRenderTargets_void(this.nativeObject.pointer);
	}
	native private void _initRenderTargets_void_NoVirtual(long pNativeObject);
	protected void _initRenderTargets_NoVirtual()
	{
		_initRenderTargets_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _notifyCameraRemoved_CCamera_callback(long cam)
	{
		com.earthview.world.graphic.Camera camParamValue = (cam == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
		if(camParamValue != null)
		{
		camParamValue.setDelegate(true);
		camParamValue.setInstancePointer(new InstancePointer(cam));
		IClassFactory camParamValueClassFactory = GlobalClassFactoryMap.get(camParamValue.getCppInstanceTypeName());
		if (camParamValueClassFactory != null)
		{
			camParamValue.setDelegate(true);
			camParamValue = (com.earthview.world.graphic.Camera)camParamValueClassFactory.create();
			camParamValue.setDelegate(true);
			camParamValue.setInstancePointer(new InstancePointer(cam));
		}
		}
		_notifyCameraRemoved(camParamValue);
	}

	native private void _notifyCameraRemoved_CCamera(long pNativeObject, long cam);
	/**
	 * 通知摄像机被移除
	 * @param cam 
	 */
	public void _notifyCameraRemoved(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		_notifyCameraRemoved_CCamera(this.nativeObject.pointer, camParamValue);
	}
	native private void _notifyCameraRemoved_CCamera_NoVirtual(long pNativeObject, long cam);
	protected void _notifyCameraRemoved_NoVirtual(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		_notifyCameraRemoved_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
	}

	protected  void _updateAllRenderTargets_ev_bool_callback(boolean swapBuffers)
	{
		boolean swapBuffersParamValue = swapBuffers;
		_updateAllRenderTargets(swapBuffersParamValue);
	}

	native private void _updateAllRenderTargets_ev_bool(long pNativeObject, boolean swapBuffers);
	/**
	 * 更新所有渲染目标
	 * @param swapBuffers 
	 */
	public void _updateAllRenderTargets(boolean swapBuffers)
	{
		boolean swapBuffersParamValue = swapBuffers;
		_updateAllRenderTargets_ev_bool(this.nativeObject.pointer, swapBuffersParamValue);
	}
	native private void _updateAllRenderTargets_ev_bool_NoVirtual(long pNativeObject, boolean swapBuffers);
	protected void _updateAllRenderTargets_NoVirtual(boolean swapBuffers)
	{
		boolean swapBuffersParamValue = swapBuffers;
		_updateAllRenderTargets_ev_bool_NoVirtual(this.nativeObject.pointer, swapBuffersParamValue);
	}

	protected  void _updateAllRenderTargets_void_callback()
	{
		_updateAllRenderTargets();
	}

	native private void _updateAllRenderTargets_void(long pNativeObject);
	/**
	 * 更新所有渲染目标
	 * @param  
	 */
	public void _updateAllRenderTargets()
	{
		_updateAllRenderTargets_void(this.nativeObject.pointer);
	}
	native private void _updateAllRenderTargets_void_NoVirtual(long pNativeObject);
	protected void _updateAllRenderTargets_NoVirtual()
	{
		_updateAllRenderTargets_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _swapAllRenderTargetBuffers_ev_bool_callback(boolean waitForVsync)
	{
		boolean waitForVsyncParamValue = waitForVsync;
		_swapAllRenderTargetBuffers(waitForVsyncParamValue);
	}

	native private void _swapAllRenderTargetBuffers_ev_bool(long pNativeObject, boolean waitForVsync);
	/**
	 * 如果传递了一个false参数，则交换所有渲染目标的缓存
	 * @param waitForVsync 
	 */
	public void _swapAllRenderTargetBuffers(boolean waitForVsync)
	{
		boolean waitForVsyncParamValue = waitForVsync;
		_swapAllRenderTargetBuffers_ev_bool(this.nativeObject.pointer, waitForVsyncParamValue);
	}
	native private void _swapAllRenderTargetBuffers_ev_bool_NoVirtual(long pNativeObject, boolean waitForVsync);
	protected void _swapAllRenderTargetBuffers_NoVirtual(boolean waitForVsync)
	{
		boolean waitForVsyncParamValue = waitForVsync;
		_swapAllRenderTargetBuffers_ev_bool_NoVirtual(this.nativeObject.pointer, waitForVsyncParamValue);
	}

	protected  void _swapAllRenderTargetBuffers_void_callback()
	{
		_swapAllRenderTargetBuffers();
	}

	native private void _swapAllRenderTargetBuffers_void(long pNativeObject);
	/**
	 * 交换所有渲染目标的缓存
	 * @param  
	 */
	public void _swapAllRenderTargetBuffers()
	{
		_swapAllRenderTargetBuffers_void(this.nativeObject.pointer);
	}
	native private void _swapAllRenderTargetBuffers_void_NoVirtual(long pNativeObject);
	protected void _swapAllRenderTargetBuffers_NoVirtual()
	{
		_swapAllRenderTargetBuffers_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setInvertVertexWinding_ev_bool_callback(boolean invert)
	{
		boolean invertParamValue = invert;
		setInvertVertexWinding(invertParamValue);
	}

	native private void setInvertVertexWinding_ev_bool(long pNativeObject, boolean invert);
	/**
	 * 设置vertexwindings设置是否被转换
	 * @param invert 
	 */
	public void setInvertVertexWinding(boolean invert)
	{
		boolean invertParamValue = invert;
		setInvertVertexWinding_ev_bool(this.nativeObject.pointer, invertParamValue);
	}
	native private void setInvertVertexWinding_ev_bool_NoVirtual(long pNativeObject, boolean invert);
	protected void setInvertVertexWinding_NoVirtual(boolean invert)
	{
		boolean invertParamValue = invert;
		setInvertVertexWinding_ev_bool_NoVirtual(this.nativeObject.pointer, invertParamValue);
	}

	protected  boolean getInvertVertexWinding_void_callback()
	{
		boolean returnValue = getInvertVertexWinding();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getInvertVertexWinding_void(long pNativeObject);
	/**
	 * 显示是否vertexwindings设置被转换成当前的渲染
	 * @param  
	 */
	public boolean getInvertVertexWinding()
	{
		boolean returnValue = getInvertVertexWinding_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getInvertVertexWinding_void_NoVirtual(long pNativeObject);
	protected boolean getInvertVertexWinding_NoVirtual()
	{
		boolean returnValue = getInvertVertexWinding_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t_callback(boolean enabled, long left, long top, long right, long bottom)
	{
		boolean enabledParamValue = enabled;
		long leftParamValue = left;
		long topParamValue = top;
		long rightParamValue = right;
		long bottomParamValue = bottom;
		setScissorTest(enabledParamValue, leftParamValue, topParamValue, rightParamValue, bottomParamValue);
	}

	native private void setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t(long pNativeObject, boolean enabled, long left, long top, long right, long bottom);
	/**
	 * 设置渲染目标的裁剪测试参数
	 * @param enabled 
	 * @param left 左侧（长方形角的位置）
	 * @param top 上面（长方形角的位置）
	 * @param right 右侧（长方形角的位置）
	 * @param bottom 下面（长方形角的位置）
	 */
	public void setScissorTest(boolean enabled, long left, long top, long right, long bottom)
	{
		boolean enabledParamValue = enabled;
		long leftParamValue = left;
		long topParamValue = top;
		long rightParamValue = right;
		long bottomParamValue = bottom;
		setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t(this.nativeObject.pointer, enabledParamValue, leftParamValue, topParamValue, rightParamValue, bottomParamValue);
	}
	native private void setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t_NoVirtual(long pNativeObject, boolean enabled, long left, long top, long right, long bottom);
	protected void setScissorTest_NoVirtual(boolean enabled, long left, long top, long right, long bottom)
	{
		boolean enabledParamValue = enabled;
		long leftParamValue = left;
		long topParamValue = top;
		long rightParamValue = right;
		long bottomParamValue = bottom;
		setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t_NoVirtual(this.nativeObject.pointer, enabledParamValue, leftParamValue, topParamValue, rightParamValue, bottomParamValue);
	}

	protected  void setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_callback(boolean enabled, long left, long top, long right)
	{
		boolean enabledParamValue = enabled;
		long leftParamValue = left;
		long topParamValue = top;
		long rightParamValue = right;
		setScissorTest(enabledParamValue, leftParamValue, topParamValue, rightParamValue);
	}

	native private void setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t(long pNativeObject, boolean enabled, long left, long top, long right);
	/**
	 * 设置渲染目标的裁剪测试参数
	 * @param enabled 
	 * @param left 左侧（长方形角的位置）
	 * @param top 上面（长方形角的位置）
	 * @param right 右侧（长方形角的位置）
	 */
	public void setScissorTest(boolean enabled, long left, long top, long right)
	{
		boolean enabledParamValue = enabled;
		long leftParamValue = left;
		long topParamValue = top;
		long rightParamValue = right;
		setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t(this.nativeObject.pointer, enabledParamValue, leftParamValue, topParamValue, rightParamValue);
	}
	native private void setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_NoVirtual(long pNativeObject, boolean enabled, long left, long top, long right);
	protected void setScissorTest_NoVirtual(boolean enabled, long left, long top, long right)
	{
		boolean enabledParamValue = enabled;
		long leftParamValue = left;
		long topParamValue = top;
		long rightParamValue = right;
		setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_NoVirtual(this.nativeObject.pointer, enabledParamValue, leftParamValue, topParamValue, rightParamValue);
	}

	protected  void setScissorTest_ev_bool_ev_size_t_ev_size_t_callback(boolean enabled, long left, long top)
	{
		boolean enabledParamValue = enabled;
		long leftParamValue = left;
		long topParamValue = top;
		setScissorTest(enabledParamValue, leftParamValue, topParamValue);
	}

	native private void setScissorTest_ev_bool_ev_size_t_ev_size_t(long pNativeObject, boolean enabled, long left, long top);
	/**
	 * 设置渲染目标的裁剪测试参数
	 * @param enabled 
	 * @param left 左侧（长方形角的位置）
	 * @param top 上面（长方形角的位置）
	 */
	public void setScissorTest(boolean enabled, long left, long top)
	{
		boolean enabledParamValue = enabled;
		long leftParamValue = left;
		long topParamValue = top;
		setScissorTest_ev_bool_ev_size_t_ev_size_t(this.nativeObject.pointer, enabledParamValue, leftParamValue, topParamValue);
	}
	native private void setScissorTest_ev_bool_ev_size_t_ev_size_t_NoVirtual(long pNativeObject, boolean enabled, long left, long top);
	protected void setScissorTest_NoVirtual(boolean enabled, long left, long top)
	{
		boolean enabledParamValue = enabled;
		long leftParamValue = left;
		long topParamValue = top;
		setScissorTest_ev_bool_ev_size_t_ev_size_t_NoVirtual(this.nativeObject.pointer, enabledParamValue, leftParamValue, topParamValue);
	}

	protected  void setScissorTest_ev_bool_ev_size_t_callback(boolean enabled, long left)
	{
		boolean enabledParamValue = enabled;
		long leftParamValue = left;
		setScissorTest(enabledParamValue, leftParamValue);
	}

	native private void setScissorTest_ev_bool_ev_size_t(long pNativeObject, boolean enabled, long left);
	/**
	 * 设置渲染目标的裁剪测试参数
	 * @param enabled 
	 * @param left 左侧（长方形角的位置）
	 */
	public void setScissorTest(boolean enabled, long left)
	{
		boolean enabledParamValue = enabled;
		long leftParamValue = left;
		setScissorTest_ev_bool_ev_size_t(this.nativeObject.pointer, enabledParamValue, leftParamValue);
	}
	native private void setScissorTest_ev_bool_ev_size_t_NoVirtual(long pNativeObject, boolean enabled, long left);
	protected void setScissorTest_NoVirtual(boolean enabled, long left)
	{
		boolean enabledParamValue = enabled;
		long leftParamValue = left;
		setScissorTest_ev_bool_ev_size_t_NoVirtual(this.nativeObject.pointer, enabledParamValue, leftParamValue);
	}

	protected  void setScissorTest_ev_bool_callback(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setScissorTest(enabledParamValue);
	}

	native private void setScissorTest_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置渲染目标的裁剪测试参数
	 * @param enabled 
	 */
	public void setScissorTest(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setScissorTest_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setScissorTest_ev_bool_NoVirtual(long pNativeObject, boolean enabled);
	protected void setScissorTest_NoVirtual(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setScissorTest_ev_bool_NoVirtual(this.nativeObject.pointer, enabledParamValue);
	}

	protected  void clearFrameBuffer_ev_uint32_CColourValue_Real_ev_uint16_callback(long buffers, long colour, double depth, int stencil)
	{
		long buffersParamValue = buffers;
		com.earthview.world.graphic.ColourValue colourParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colourParamValue.setDelegate(true);
		colourParamValue.setInstancePointer(new InstancePointer(colour));
		IClassFactory colourParamValueClassFactory = GlobalClassFactoryMap.get(colourParamValue.getCppInstanceTypeName());
		if (colourParamValueClassFactory != null)
		{
			colourParamValue.setDelegate(true);
			colourParamValue = (com.earthview.world.graphic.ColourValue)colourParamValueClassFactory.create();
			colourParamValue.setDelegate(true);
			colourParamValue.setInstancePointer(new InstancePointer(colour));
		}
		double depthParamValue = depth;
		int stencilParamValue = stencil;
		clearFrameBuffer(buffersParamValue, colourParamValue, depthParamValue, stencilParamValue);
	}

	native private void clearFrameBuffer_ev_uint32_CColourValue_Real_ev_uint16(long pNativeObject, long buffers, long colour, double depth, int stencil);
	/**
	 * 清空活动渲染目标的帧缓存
	 * @param buffers 标明哪一个缓存被清空
	 * @param colour 缓存颜色
	 * @param depth 初始化深度缓存的值
	 * @param stencil 初始化模板缓存的值
	 */
	public void clearFrameBuffer(long buffers, com.earthview.world.graphic.ColourValue colour, double depth, int stencil)
	{
		long buffersParamValue = buffers;
		long colourParamValue = colour.nativeObject.pointer;
		double depthParamValue = depth;
		int stencilParamValue = stencil;
		clearFrameBuffer_ev_uint32_CColourValue_Real_ev_uint16(this.nativeObject.pointer, buffersParamValue, colourParamValue, depthParamValue, stencilParamValue);
	}
	native private void clearFrameBuffer_ev_uint32_CColourValue_Real_ev_uint16_NoVirtual(long pNativeObject, long buffers, long colour, double depth, int stencil);
	protected void clearFrameBuffer_NoVirtual(long buffers, com.earthview.world.graphic.ColourValue colour, double depth, int stencil)
	{
		long buffersParamValue = buffers;
		long colourParamValue = colour.nativeObject.pointer;
		double depthParamValue = depth;
		int stencilParamValue = stencil;
		clearFrameBuffer_ev_uint32_CColourValue_Real_ev_uint16_NoVirtual(this.nativeObject.pointer, buffersParamValue, colourParamValue, depthParamValue, stencilParamValue);
	}

	protected  void clearFrameBuffer_ev_uint32_CColourValue_Real_callback(long buffers, long colour, double depth)
	{
		long buffersParamValue = buffers;
		com.earthview.world.graphic.ColourValue colourParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colourParamValue.setDelegate(true);
		colourParamValue.setInstancePointer(new InstancePointer(colour));
		IClassFactory colourParamValueClassFactory = GlobalClassFactoryMap.get(colourParamValue.getCppInstanceTypeName());
		if (colourParamValueClassFactory != null)
		{
			colourParamValue.setDelegate(true);
			colourParamValue = (com.earthview.world.graphic.ColourValue)colourParamValueClassFactory.create();
			colourParamValue.setDelegate(true);
			colourParamValue.setInstancePointer(new InstancePointer(colour));
		}
		double depthParamValue = depth;
		clearFrameBuffer(buffersParamValue, colourParamValue, depthParamValue);
	}

	native private void clearFrameBuffer_ev_uint32_CColourValue_Real(long pNativeObject, long buffers, long colour, double depth);
	/**
	 * 清空活动渲染目标的帧缓存
	 * @param buffers 标明哪一个缓存被清空
	 * @param colour 缓存颜色
	 * @param depth 初始化深度缓存的值
	 */
	public void clearFrameBuffer(long buffers, com.earthview.world.graphic.ColourValue colour, double depth)
	{
		long buffersParamValue = buffers;
		long colourParamValue = colour.nativeObject.pointer;
		double depthParamValue = depth;
		clearFrameBuffer_ev_uint32_CColourValue_Real(this.nativeObject.pointer, buffersParamValue, colourParamValue, depthParamValue);
	}
	native private void clearFrameBuffer_ev_uint32_CColourValue_Real_NoVirtual(long pNativeObject, long buffers, long colour, double depth);
	protected void clearFrameBuffer_NoVirtual(long buffers, com.earthview.world.graphic.ColourValue colour, double depth)
	{
		long buffersParamValue = buffers;
		long colourParamValue = colour.nativeObject.pointer;
		double depthParamValue = depth;
		clearFrameBuffer_ev_uint32_CColourValue_Real_NoVirtual(this.nativeObject.pointer, buffersParamValue, colourParamValue, depthParamValue);
	}

	protected  void clearFrameBuffer_ev_uint32_CColourValue_callback(long buffers, long colour)
	{
		long buffersParamValue = buffers;
		com.earthview.world.graphic.ColourValue colourParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colourParamValue.setDelegate(true);
		colourParamValue.setInstancePointer(new InstancePointer(colour));
		IClassFactory colourParamValueClassFactory = GlobalClassFactoryMap.get(colourParamValue.getCppInstanceTypeName());
		if (colourParamValueClassFactory != null)
		{
			colourParamValue.setDelegate(true);
			colourParamValue = (com.earthview.world.graphic.ColourValue)colourParamValueClassFactory.create();
			colourParamValue.setDelegate(true);
			colourParamValue.setInstancePointer(new InstancePointer(colour));
		}
		clearFrameBuffer(buffersParamValue, colourParamValue);
	}

	native private void clearFrameBuffer_ev_uint32_CColourValue(long pNativeObject, long buffers, long colour);
	/**
	 * 清空活动渲染目标的帧缓存
	 * @param buffers 标明哪一个缓存被清空
	 * @param colour 缓存颜色
	 */
	public void clearFrameBuffer(long buffers, com.earthview.world.graphic.ColourValue colour)
	{
		long buffersParamValue = buffers;
		long colourParamValue = colour.nativeObject.pointer;
		clearFrameBuffer_ev_uint32_CColourValue(this.nativeObject.pointer, buffersParamValue, colourParamValue);
	}
	native private void clearFrameBuffer_ev_uint32_CColourValue_NoVirtual(long pNativeObject, long buffers, long colour);
	protected void clearFrameBuffer_NoVirtual(long buffers, com.earthview.world.graphic.ColourValue colour)
	{
		long buffersParamValue = buffers;
		long colourParamValue = colour.nativeObject.pointer;
		clearFrameBuffer_ev_uint32_CColourValue_NoVirtual(this.nativeObject.pointer, buffersParamValue, colourParamValue);
	}

	protected  void clearFrameBuffer_ev_uint32_callback(long buffers)
	{
		long buffersParamValue = buffers;
		clearFrameBuffer(buffersParamValue);
	}

	native private void clearFrameBuffer_ev_uint32(long pNativeObject, long buffers);
	/**
	 * 清空活动渲染目标的帧缓存
	 * @param buffers 标明哪一个缓存被清空
	 */
	public void clearFrameBuffer(long buffers)
	{
		long buffersParamValue = buffers;
		clearFrameBuffer_ev_uint32(this.nativeObject.pointer, buffersParamValue);
	}
	native private void clearFrameBuffer_ev_uint32_NoVirtual(long pNativeObject, long buffers);
	protected void clearFrameBuffer_NoVirtual(long buffers)
	{
		long buffersParamValue = buffers;
		clearFrameBuffer_ev_uint32_NoVirtual(this.nativeObject.pointer, buffersParamValue);
	}

	protected  double getHorizontalTexelOffset_void_callback()
	{
		double returnValue = getHorizontalTexelOffset();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getHorizontalTexelOffset_void(long pNativeObject);
	/**
	 * 返回纹理的水平偏移量
	 * @param  
	 */
	public double getHorizontalTexelOffset()
	{
		double returnValue = getHorizontalTexelOffset_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getHorizontalTexelOffset_void_NoVirtual(long pNativeObject);
	protected double getHorizontalTexelOffset_NoVirtual()
	{
		double returnValue = getHorizontalTexelOffset_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getVerticalTexelOffset_void_callback()
	{
		double returnValue = getVerticalTexelOffset();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getVerticalTexelOffset_void(long pNativeObject);
	/**
	 * 返回纹理的垂直偏移量
	 * @param  
	 */
	public double getVerticalTexelOffset()
	{
		double returnValue = getVerticalTexelOffset_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getVerticalTexelOffset_void_NoVirtual(long pNativeObject);
	protected double getVerticalTexelOffset_NoVirtual()
	{
		double returnValue = getVerticalTexelOffset_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getMinimumDepthInputValue_void_callback()
	{
		double returnValue = getMinimumDepthInputValue();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getMinimumDepthInputValue_void(long pNativeObject);
	/**
	 * 当渲染应用统一的转换时获得最小的深度值
	 * @param  
	 */
	public double getMinimumDepthInputValue()
	{
		double returnValue = getMinimumDepthInputValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinimumDepthInputValue_void_NoVirtual(long pNativeObject);
	protected double getMinimumDepthInputValue_NoVirtual()
	{
		double returnValue = getMinimumDepthInputValue_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getMaximumDepthInputValue_void_callback()
	{
		double returnValue = getMaximumDepthInputValue();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getMaximumDepthInputValue_void(long pNativeObject);
	/**
	 * 当渲染应用统一的转换时获得最大的深度值
	 * @param  
	 */
	public double getMaximumDepthInputValue()
	{
		double returnValue = getMaximumDepthInputValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaximumDepthInputValue_void_NoVirtual(long pNativeObject);
	protected double getMaximumDepthInputValue_NoVirtual()
	{
		double returnValue = getMaximumDepthInputValue_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setCurrentPassIterationCount_ev_size_t_callback(long count)
	{
		long countParamValue = count;
		setCurrentPassIterationCount(countParamValue);
	}

	native private void setCurrentPassIterationCount_ev_size_t(long pNativeObject, long count);
	/**
	 * 设置当前的多通路数量值
	 * @param count 渲染当前状态的次数
	 */
	public void setCurrentPassIterationCount(long count)
	{
		long countParamValue = count;
		setCurrentPassIterationCount_ev_size_t(this.nativeObject.pointer, countParamValue);
	}
	native private void setCurrentPassIterationCount_ev_size_t_NoVirtual(long pNativeObject, long count);
	protected void setCurrentPassIterationCount_NoVirtual(long count)
	{
		long countParamValue = count;
		setCurrentPassIterationCount_ev_size_t_NoVirtual(this.nativeObject.pointer, countParamValue);
	}

	protected  void setDeriveDepthBias_ev_bool_ev_real32_ev_real32_ev_real32_callback(boolean derive, float baseValue, float multiplier, float slopeScale)
	{
		boolean deriveParamValue = derive;
		float baseValueParamValue = baseValue;
		float multiplierParamValue = multiplier;
		float slopeScaleParamValue = slopeScale;
		setDeriveDepthBias(deriveParamValue, baseValueParamValue, multiplierParamValue, slopeScaleParamValue);
	}

	native private void setDeriveDepthBias_ev_bool_ev_real32_ev_real32_ev_real32(long pNativeObject, boolean derive, float baseValue, float multiplier, float slopeScale);
	/**
	 * 设置深度偏移值
	 * @param derive 如果为true，告诉渲染系统自动获得
	 * @param baseValue 基本值
	 * @param multiplier 应用到每一个迭代中深度偏差的数量
	 * @param slopeScale 斜面偏差的常量值
	 */
	public void setDeriveDepthBias(boolean derive, float baseValue, float multiplier, float slopeScale)
	{
		boolean deriveParamValue = derive;
		float baseValueParamValue = baseValue;
		float multiplierParamValue = multiplier;
		float slopeScaleParamValue = slopeScale;
		setDeriveDepthBias_ev_bool_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, deriveParamValue, baseValueParamValue, multiplierParamValue, slopeScaleParamValue);
	}
	native private void setDeriveDepthBias_ev_bool_ev_real32_ev_real32_ev_real32_NoVirtual(long pNativeObject, boolean derive, float baseValue, float multiplier, float slopeScale);
	protected void setDeriveDepthBias_NoVirtual(boolean derive, float baseValue, float multiplier, float slopeScale)
	{
		boolean deriveParamValue = derive;
		float baseValueParamValue = baseValue;
		float multiplierParamValue = multiplier;
		float slopeScaleParamValue = slopeScale;
		setDeriveDepthBias_ev_bool_ev_real32_ev_real32_ev_real32_NoVirtual(this.nativeObject.pointer, deriveParamValue, baseValueParamValue, multiplierParamValue, slopeScaleParamValue);
	}

	protected  void setDeriveDepthBias_ev_bool_ev_real32_ev_real32_callback(boolean derive, float baseValue, float multiplier)
	{
		boolean deriveParamValue = derive;
		float baseValueParamValue = baseValue;
		float multiplierParamValue = multiplier;
		setDeriveDepthBias(deriveParamValue, baseValueParamValue, multiplierParamValue);
	}

	native private void setDeriveDepthBias_ev_bool_ev_real32_ev_real32(long pNativeObject, boolean derive, float baseValue, float multiplier);
	/**
	 * 设置深度偏移值
	 * @param derive 如果为true，告诉渲染系统自动获得
	 * @param baseValue 基本值
	 * @param multiplier 应用到每一个迭代中深度偏差的数量
	 */
	public void setDeriveDepthBias(boolean derive, float baseValue, float multiplier)
	{
		boolean deriveParamValue = derive;
		float baseValueParamValue = baseValue;
		float multiplierParamValue = multiplier;
		setDeriveDepthBias_ev_bool_ev_real32_ev_real32(this.nativeObject.pointer, deriveParamValue, baseValueParamValue, multiplierParamValue);
	}
	native private void setDeriveDepthBias_ev_bool_ev_real32_ev_real32_NoVirtual(long pNativeObject, boolean derive, float baseValue, float multiplier);
	protected void setDeriveDepthBias_NoVirtual(boolean derive, float baseValue, float multiplier)
	{
		boolean deriveParamValue = derive;
		float baseValueParamValue = baseValue;
		float multiplierParamValue = multiplier;
		setDeriveDepthBias_ev_bool_ev_real32_ev_real32_NoVirtual(this.nativeObject.pointer, deriveParamValue, baseValueParamValue, multiplierParamValue);
	}

	protected  void setDeriveDepthBias_ev_bool_ev_real32_callback(boolean derive, float baseValue)
	{
		boolean deriveParamValue = derive;
		float baseValueParamValue = baseValue;
		setDeriveDepthBias(deriveParamValue, baseValueParamValue);
	}

	native private void setDeriveDepthBias_ev_bool_ev_real32(long pNativeObject, boolean derive, float baseValue);
	/**
	 * 设置深度偏移值
	 * @param derive 如果为true，告诉渲染系统自动获得
	 * @param baseValue 基本值
	 */
	public void setDeriveDepthBias(boolean derive, float baseValue)
	{
		boolean deriveParamValue = derive;
		float baseValueParamValue = baseValue;
		setDeriveDepthBias_ev_bool_ev_real32(this.nativeObject.pointer, deriveParamValue, baseValueParamValue);
	}
	native private void setDeriveDepthBias_ev_bool_ev_real32_NoVirtual(long pNativeObject, boolean derive, float baseValue);
	protected void setDeriveDepthBias_NoVirtual(boolean derive, float baseValue)
	{
		boolean deriveParamValue = derive;
		float baseValueParamValue = baseValue;
		setDeriveDepthBias_ev_bool_ev_real32_NoVirtual(this.nativeObject.pointer, deriveParamValue, baseValueParamValue);
	}

	protected  void setDeriveDepthBias_ev_bool_callback(boolean derive)
	{
		boolean deriveParamValue = derive;
		setDeriveDepthBias(deriveParamValue);
	}

	native private void setDeriveDepthBias_ev_bool(long pNativeObject, boolean derive);
	/**
	 * 设置深度偏移值
	 * @param derive 如果为true，告诉渲染系统自动获得
	 */
	public void setDeriveDepthBias(boolean derive)
	{
		boolean deriveParamValue = derive;
		setDeriveDepthBias_ev_bool(this.nativeObject.pointer, deriveParamValue);
	}
	native private void setDeriveDepthBias_ev_bool_NoVirtual(long pNativeObject, boolean derive);
	protected void setDeriveDepthBias_NoVirtual(boolean derive)
	{
		boolean deriveParamValue = derive;
		setDeriveDepthBias_ev_bool_NoVirtual(this.nativeObject.pointer, deriveParamValue);
	}

	protected  void _setRenderTarget_CRenderTarget_callback(long ref_target)
	{
		com.earthview.world.graphic.RenderTarget ref_targetParamValue = (ref_target == 0L ? null : new com.earthview.world.graphic.RenderTarget(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_targetParamValue != null)
		{
		ref_targetParamValue.setDelegate(true);
		ref_targetParamValue.setInstancePointer(new InstancePointer(ref_target));
		IClassFactory ref_targetParamValueClassFactory = GlobalClassFactoryMap.get(ref_targetParamValue.getCppInstanceTypeName());
		if (ref_targetParamValueClassFactory != null)
		{
			ref_targetParamValue.setDelegate(true);
			ref_targetParamValue = (com.earthview.world.graphic.RenderTarget)ref_targetParamValueClassFactory.create();
			ref_targetParamValue.setDelegate(true);
			ref_targetParamValue.setInstancePointer(new InstancePointer(ref_target));
		}
		}
		_setRenderTarget(ref_targetParamValue);
	}

	native private void _setRenderTarget_CRenderTarget(long pNativeObject, long ref_target);
	/**
	 * 设置当前渲染目标
	 * @param target 
	 */
	public void _setRenderTarget(com.earthview.world.graphic.RenderTarget ref_target)
	{
		long ref_targetParamValue = (ref_target == null ? 0L : ref_target.nativeObject.pointer);
		_setRenderTarget_CRenderTarget(this.nativeObject.pointer, ref_targetParamValue);
	}
	native private void _setRenderTarget_CRenderTarget_NoVirtual(long pNativeObject, long ref_target);
	protected void _setRenderTarget_NoVirtual(com.earthview.world.graphic.RenderTarget ref_target)
	{
		long ref_targetParamValue = (ref_target == null ? 0L : ref_target.nativeObject.pointer);
		_setRenderTarget_CRenderTarget_NoVirtual(this.nativeObject.pointer, ref_targetParamValue);
	}

	/**
	 * 对渲染系统自定义的事件定义一个监听器
	 */
	public static class RenderSystemListener extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderSystem::CRenderSystemListener", new RenderSystemListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderSystem::JCRenderSystemListenerProxy", new RenderSystemListenerClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public RenderSystemListener() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCRenderSystemListenerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.RenderSystem$RenderSystemListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  void eventOccurred_EVString_CommonStringPairList_callback(String eventName, long parameters)
		{
			String eventNameParamValue = eventName;
			com.earthview.world.core.CommonStringPairList parametersParamValue = (parameters == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
			if(parametersParamValue != null)
			{
			parametersParamValue.setDelegate(true);
			parametersParamValue.setInstancePointer(new InstancePointer(parameters));
			IClassFactory parametersParamValueClassFactory = GlobalClassFactoryMap.get(parametersParamValue.getCppInstanceTypeName());
			if (parametersParamValueClassFactory != null)
			{
				parametersParamValue.setDelegate(true);
				parametersParamValue = (com.earthview.world.core.CommonStringPairList)parametersParamValueClassFactory.create();
				parametersParamValue.setDelegate(true);
				parametersParamValue.setInstancePointer(new InstancePointer(parameters));
			}
			}
			eventOccurred(eventNameParamValue, parametersParamValue);
		}

		native private void eventOccurred_EVString_CommonStringPairList(long pNativeObject, String eventName, long parameters);
		/**
		 * 渲染系统中一个已发生的特殊的事件
		 * @param eventName 事件的名称
		 * @param parameters 事件的参数列表
		 */
		public void eventOccurred(String eventName, com.earthview.world.core.CommonStringPairList parameters)
		{
			String eventNameParamValue = eventName;
			long parametersParamValue = (parameters == null ? 0L : parameters.nativeObject.pointer);
			eventOccurred_EVString_CommonStringPairList(this.nativeObject.pointer, eventNameParamValue, parametersParamValue);
		}
		native private void eventOccurred_EVString_CommonStringPairList_NoVirtual(long pNativeObject, String eventName, long parameters);
		protected void eventOccurred_NoVirtual(String eventName, com.earthview.world.core.CommonStringPairList parameters)
		{
			String eventNameParamValue = eventName;
			long parametersParamValue = (parameters == null ? 0L : parameters.nativeObject.pointer);
			eventOccurred_EVString_CommonStringPairList_NoVirtual(this.nativeObject.pointer, eventNameParamValue, parametersParamValue);
		}

		protected  void eventOccurred_EVString_callback(String eventName)
		{
			String eventNameParamValue = eventName;
			eventOccurred(eventNameParamValue);
		}

		native private void eventOccurred_EVString(long pNativeObject, String eventName);
		/**
		 * 渲染系统中一个已发生的特殊的事件
		 * @param eventName 事件的名称
		 */
		public void eventOccurred(String eventName)
		{
			String eventNameParamValue = eventName;
			eventOccurred_EVString(this.nativeObject.pointer, eventNameParamValue);
		}
		native private void eventOccurred_EVString_NoVirtual(long pNativeObject, String eventName);
		protected void eventOccurred_NoVirtual(String eventName)
		{
			String eventNameParamValue = eventName;
			eventOccurred_EVString_NoVirtual(this.nativeObject.pointer, eventNameParamValue);
		}

		public RenderSystemListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public RenderSystemListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_eventOccurred_EVString_CommonStringPairList(long pNativeObject, String method);
		native protected void register_eventOccurred_EVString(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_eventOccurred_EVString_CommonStringPairList(this.nativeObject.pointer, "eventOccurred_EVString_CommonStringPairList_callback");
				this.register_eventOccurred_EVString(this.nativeObject.pointer, "eventOccurred_EVString_callback");
			}
		}
		
		public static RenderSystemListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			RenderSystemListener obj = null;
 			if(baseObj instanceof RenderSystemListener)
			{
				obj = (RenderSystemListener)baseObj;
			} else {
				obj = new RenderSystemListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CRenderSystemListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class RenderSystemListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			RenderSystemListener emptyInstance = new RenderSystemListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  void addListener_CRenderSystemListener_callback(long ref_l)
	{
		com.earthview.world.graphic.RenderSystem.RenderSystemListener ref_lParamValue = (ref_l == 0L ? null : new com.earthview.world.graphic.RenderSystem.RenderSystemListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_lParamValue != null)
		{
		ref_lParamValue.setDelegate(true);
		ref_lParamValue.setInstancePointer(new InstancePointer(ref_l));
		IClassFactory ref_lParamValueClassFactory = GlobalClassFactoryMap.get(ref_lParamValue.getCppInstanceTypeName());
		if (ref_lParamValueClassFactory != null)
		{
			ref_lParamValue.setDelegate(true);
			ref_lParamValue = (com.earthview.world.graphic.RenderSystem.RenderSystemListener)ref_lParamValueClassFactory.create();
			ref_lParamValue.setDelegate(true);
			ref_lParamValue.setInstancePointer(new InstancePointer(ref_l));
		}
		}
		addListener(ref_lParamValue);
	}

	native private void addListener_CRenderSystemListener(long pNativeObject, long ref_l);
	/**
	 * 给渲染系统中自定义事件添加一个监听器
	 * @param l 
	 */
	public void addListener(com.earthview.world.graphic.RenderSystem.RenderSystemListener ref_l)
	{
		long ref_lParamValue = (ref_l == null ? 0L : ref_l.nativeObject.pointer);
		addListener_CRenderSystemListener(this.nativeObject.pointer, ref_lParamValue);
	}
	native private void addListener_CRenderSystemListener_NoVirtual(long pNativeObject, long ref_l);
	protected void addListener_NoVirtual(com.earthview.world.graphic.RenderSystem.RenderSystemListener ref_l)
	{
		long ref_lParamValue = (ref_l == null ? 0L : ref_l.nativeObject.pointer);
		addListener_CRenderSystemListener_NoVirtual(this.nativeObject.pointer, ref_lParamValue);
	}

	protected  void removeListener_CRenderSystemListener_callback(long l)
	{
		com.earthview.world.graphic.RenderSystem.RenderSystemListener lParamValue = (l == 0L ? null : new com.earthview.world.graphic.RenderSystem.RenderSystemListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(lParamValue != null)
		{
		lParamValue.setDelegate(true);
		lParamValue.setInstancePointer(new InstancePointer(l));
		IClassFactory lParamValueClassFactory = GlobalClassFactoryMap.get(lParamValue.getCppInstanceTypeName());
		if (lParamValueClassFactory != null)
		{
			lParamValue.setDelegate(true);
			lParamValue = (com.earthview.world.graphic.RenderSystem.RenderSystemListener)lParamValueClassFactory.create();
			lParamValue.setDelegate(true);
			lParamValue.setInstancePointer(new InstancePointer(l));
		}
		}
		removeListener(lParamValue);
	}

	native private void removeListener_CRenderSystemListener(long pNativeObject, long l);
	/**
	 * 去除掉渲染系统中自定义事件的监听器
	 * @param l 
	 */
	public void removeListener(com.earthview.world.graphic.RenderSystem.RenderSystemListener l)
	{
		long lParamValue = (l == null ? 0L : l.nativeObject.pointer);
		removeListener_CRenderSystemListener(this.nativeObject.pointer, lParamValue);
	}
	native private void removeListener_CRenderSystemListener_NoVirtual(long pNativeObject, long l);
	protected void removeListener_NoVirtual(com.earthview.world.graphic.RenderSystem.RenderSystemListener l)
	{
		long lParamValue = (l == null ? 0L : l.nativeObject.pointer);
		removeListener_CRenderSystemListener_NoVirtual(this.nativeObject.pointer, lParamValue);
	}

	protected  long getRenderSystemEvents_void_callback()
	{
		com.earthview.world.core.StringVector returnValue = getRenderSystemEvents();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRenderSystemEvents_void(long pNativeObject);
	/**
	 * 获得渲染系统中特殊事件的列表
	 * @param  
	 */
	public com.earthview.world.core.StringVector getRenderSystemEvents()
	{
		long returnValue = getRenderSystemEvents_void(this.nativeObject.pointer);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate, "StringVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	native private long getRenderSystemEvents_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.StringVector getRenderSystemEvents_NoVirtual()
	{
		long returnValue = getRenderSystemEvents_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate, "StringVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}

	protected  void preExtraThreadsStarted_void_callback()
	{
		preExtraThreadsStarted();
	}

	native private void preExtraThreadsStarted_void(long pNativeObject);
	/**
	 * 告诉渲染系统直接运行任务之前，附加线程已经注册
	 * @param  
	 */
	public void preExtraThreadsStarted()
	{
		preExtraThreadsStarted_void(this.nativeObject.pointer);
	}
	native private void preExtraThreadsStarted_void_NoVirtual(long pNativeObject);
	protected void preExtraThreadsStarted_NoVirtual()
	{
		preExtraThreadsStarted_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void postExtraThreadsStarted_void_callback()
	{
		postExtraThreadsStarted();
	}

	native private void postExtraThreadsStarted_void(long pNativeObject);
	/**
	 * 告诉渲染系统直接运行任务之后，附加线程已经注册
	 * @param  
	 */
	public void postExtraThreadsStarted()
	{
		postExtraThreadsStarted_void(this.nativeObject.pointer);
	}
	native private void postExtraThreadsStarted_void_NoVirtual(long pNativeObject);
	protected void postExtraThreadsStarted_NoVirtual()
	{
		postExtraThreadsStarted_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void registerThread_void_callback()
	{
		registerThread();
	}

	native private void registerThread_void(long pNativeObject);
	/**
	 * 注册一个附加线程，它可能调用渲染系统相关的对象
	 * @param  
	 */
	public void registerThread()
	{
		registerThread_void(this.nativeObject.pointer);
	}
	native private void registerThread_void_NoVirtual(long pNativeObject);
	protected void registerThread_NoVirtual()
	{
		registerThread_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void flushRenderSystem_void_callback()
	{
		flushRenderSystem();
	}

	native private void flushRenderSystem_void(long pNativeObject);
	/**
	 * 清空渲染系统命令队列，并全部执行
	 * @param  
	 */
	public void flushRenderSystem()
	{
		flushRenderSystem_void(this.nativeObject.pointer);
	}
	native private void flushRenderSystem_void_NoVirtual(long pNativeObject);
	protected void flushRenderSystem_NoVirtual()
	{
		flushRenderSystem_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void unregisterThread_void_callback()
	{
		unregisterThread();
	}

	native private void unregisterThread_void(long pNativeObject);
	/**
	 * 反注册一个附加线程
	 * @param  
	 */
	public void unregisterThread()
	{
		unregisterThread_void(this.nativeObject.pointer);
	}
	native private void unregisterThread_void_NoVirtual(long pNativeObject);
	protected void unregisterThread_NoVirtual()
	{
		unregisterThread_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long getDisplayMonitorCount_void_callback()
	{
		long returnValue = getDisplayMonitorCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getDisplayMonitorCount_void(long pNativeObject);
	/**
	 * 获得显示监听器的数量
	 * @param  
	 */
	public long getDisplayMonitorCount()
	{
		long returnValue = getDisplayMonitorCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getDisplayMonitorCount_void_NoVirtual(long pNativeObject);
	protected long getDisplayMonitorCount_NoVirtual()
	{
		long returnValue = getDisplayMonitorCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void fireEvent_EVString_CommonStringPairList_callback(String name, long params)
	{
		String nameParamValue = name;
		com.earthview.world.core.CommonStringPairList paramsParamValue = (params == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(paramsParamValue != null)
		{
		paramsParamValue.setDelegate(true);
		paramsParamValue.setInstancePointer(new InstancePointer(params));
		IClassFactory paramsParamValueClassFactory = GlobalClassFactoryMap.get(paramsParamValue.getCppInstanceTypeName());
		if (paramsParamValueClassFactory != null)
		{
			paramsParamValue.setDelegate(true);
			paramsParamValue = (com.earthview.world.core.CommonStringPairList)paramsParamValueClassFactory.create();
			paramsParamValue.setDelegate(true);
			paramsParamValue.setInstancePointer(new InstancePointer(params));
		}
		}
		fireEvent(nameParamValue, paramsParamValue);
	}

	native private void fireEvent_EVString_CommonStringPairList(long pNativeObject, String name, long params);
	/**
	 * 内部方法，点燃渲染系统事件
	 * @param name 
	 * @param params 
	 */
	public void fireEvent(String name, com.earthview.world.core.CommonStringPairList params)
	{
		String nameParamValue = name;
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		fireEvent_EVString_CommonStringPairList(this.nativeObject.pointer, nameParamValue, paramsParamValue);
	}
	native private void fireEvent_EVString_CommonStringPairList_NoVirtual(long pNativeObject, String name, long params);
	protected void fireEvent_NoVirtual(String name, com.earthview.world.core.CommonStringPairList params)
	{
		String nameParamValue = name;
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		fireEvent_EVString_CommonStringPairList_NoVirtual(this.nativeObject.pointer, nameParamValue, paramsParamValue);
	}

	protected  void fireEvent_EVString_callback(String name)
	{
		String nameParamValue = name;
		fireEvent(nameParamValue);
	}

	native private void fireEvent_EVString(long pNativeObject, String name);
	/**
	 * 内部方法，点燃渲染系统事件
	 * @param name 
	 */
	public void fireEvent(String name)
	{
		String nameParamValue = name;
		fireEvent_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void fireEvent_EVString_NoVirtual(long pNativeObject, String name);
	protected void fireEvent_NoVirtual(String name)
	{
		String nameParamValue = name;
		fireEvent_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	protected  void setClipPlanesImpl_PlaneList_callback(long clipPlanes)
	{
		com.earthview.world.spatial.math.PlaneList clipPlanesParamValue = new com.earthview.world.spatial.math.PlaneList(CreatedWhenConstruct.CWC_NotToCreate);
		clipPlanesParamValue.setDelegate(true);
		clipPlanesParamValue.setInstancePointer(new InstancePointer(clipPlanes));
		IClassFactory clipPlanesParamValueClassFactory = GlobalClassFactoryMap.get(clipPlanesParamValue.getCppInstanceTypeName());
		if (clipPlanesParamValueClassFactory != null)
		{
			clipPlanesParamValue.setDelegate(true);
			clipPlanesParamValue = (com.earthview.world.spatial.math.PlaneList)clipPlanesParamValueClassFactory.create();
			clipPlanesParamValue.setDelegate(true);
			clipPlanesParamValue.setInstancePointer(new InstancePointer(clipPlanes));
		}
		setClipPlanesImpl(clipPlanesParamValue);
	}

	native private void setClipPlanesImpl_PlaneList(long pNativeObject, long clipPlanes);
	/**
	 * 设置潜在的切面
	 * @param  
	 */
	public void setClipPlanesImpl(com.earthview.world.spatial.math.PlaneList clipPlanes)
	{
		long clipPlanesParamValue = clipPlanes.nativeObject.pointer;
		setClipPlanesImpl_PlaneList(this.nativeObject.pointer, clipPlanesParamValue);
	}
	native private void setClipPlanesImpl_PlaneList_NoVirtual(long pNativeObject, long clipPlanes);
	protected void setClipPlanesImpl_NoVirtual(com.earthview.world.spatial.math.PlaneList clipPlanes)
	{
		long clipPlanesParamValue = clipPlanes.nativeObject.pointer;
		setClipPlanesImpl_PlaneList_NoVirtual(this.nativeObject.pointer, clipPlanesParamValue);
	}

	protected  void initialiseFromRenderSystemCapabilities_CRenderSystemCapabilities_CRenderTarget_callback(long caps, long primary)
	{
		com.earthview.world.graphic.RenderSystemCapabilities capsParamValue = (caps == 0L ? null : new com.earthview.world.graphic.RenderSystemCapabilities(CreatedWhenConstruct.CWC_NotToCreate));
		if(capsParamValue != null)
		{
		capsParamValue.setDelegate(true);
		capsParamValue.setInstancePointer(new InstancePointer(caps));
		IClassFactory capsParamValueClassFactory = GlobalClassFactoryMap.get(capsParamValue.getCppInstanceTypeName());
		if (capsParamValueClassFactory != null)
		{
			capsParamValue.setDelegate(true);
			capsParamValue = (com.earthview.world.graphic.RenderSystemCapabilities)capsParamValueClassFactory.create();
			capsParamValue.setDelegate(true);
			capsParamValue.setInstancePointer(new InstancePointer(caps));
		}
		}
		com.earthview.world.graphic.RenderTarget primaryParamValue = (primary == 0L ? null : new com.earthview.world.graphic.RenderTarget(CreatedWhenConstruct.CWC_NotToCreate));
		if(primaryParamValue != null)
		{
		primaryParamValue.setDelegate(true);
		primaryParamValue.setInstancePointer(new InstancePointer(primary));
		IClassFactory primaryParamValueClassFactory = GlobalClassFactoryMap.get(primaryParamValue.getCppInstanceTypeName());
		if (primaryParamValueClassFactory != null)
		{
			primaryParamValue.setDelegate(true);
			primaryParamValue = (com.earthview.world.graphic.RenderTarget)primaryParamValueClassFactory.create();
			primaryParamValue.setDelegate(true);
			primaryParamValue.setInstancePointer(new InstancePointer(primary));
		}
		}
		initialiseFromRenderSystemCapabilities(capsParamValue, primaryParamValue);
	}

	native private void initialiseFromRenderSystemCapabilities_CRenderSystemCapabilities_CRenderTarget(long pNativeObject, long caps, long primary);
	/**
	 * 从性能初始化渲染系统
	 * @param caps 
	 * @param primary 
	 */
	public void initialiseFromRenderSystemCapabilities(com.earthview.world.graphic.RenderSystemCapabilities caps, com.earthview.world.graphic.RenderTarget primary)
	{
		long capsParamValue = (caps == null ? 0L : caps.nativeObject.pointer);
		long primaryParamValue = (primary == null ? 0L : primary.nativeObject.pointer);
		initialiseFromRenderSystemCapabilities_CRenderSystemCapabilities_CRenderTarget(this.nativeObject.pointer, capsParamValue, primaryParamValue);
	}
	native private void initialiseFromRenderSystemCapabilities_CRenderSystemCapabilities_CRenderTarget_NoVirtual(long pNativeObject, long caps, long primary);
	protected void initialiseFromRenderSystemCapabilities_NoVirtual(com.earthview.world.graphic.RenderSystemCapabilities caps, com.earthview.world.graphic.RenderTarget primary)
	{
		long capsParamValue = (caps == null ? 0L : caps.nativeObject.pointer);
		long primaryParamValue = (primary == null ? 0L : primary.nativeObject.pointer);
		initialiseFromRenderSystemCapabilities_CRenderSystemCapabilities_CRenderTarget_NoVirtual(this.nativeObject.pointer, capsParamValue, primaryParamValue);
	}

	public RenderSystem(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderSystem(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getConfigOptions_void(long pNativeObject, String method);
	native protected void register_setConfigOption_EVString_EVString(long pNativeObject, String method);
	native protected void register_createHardwareOcclusionQuery_void(long pNativeObject, String method);
	native protected void register_destroyHardwareOcclusionQuery_CHardwareOcclusionQuery(long pNativeObject, String method);
	native protected void register_validateConfigOptions_void(long pNativeObject, String method);
	native protected void register__initialise_ev_bool_EVString(long pNativeObject, String method);
	native protected void register__initialise_ev_bool(long pNativeObject, String method);
	native protected void register_createRenderSystemCapabilities_void(long pNativeObject, String method);
	native protected void register_useCustomRenderSystemCapabilities_CRenderSystemCapabilities(long pNativeObject, String method);
	native protected void register_reinitialise_void(long pNativeObject, String method);
	native protected void register_shutdown_void(long pNativeObject, String method);
	native protected void register_setAmbientLight_ev_real32_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register_setShadingType_ShadeOptions(long pNativeObject, String method);
	native protected void register_setLightingEnabled_ev_bool(long pNativeObject, String method);
	native protected void register__createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList(long pNativeObject, String method);
	native protected void register__createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool(long pNativeObject, String method);
	native protected void register__createRenderWindows_RenderWindowDescriptionList_RenderWindowList(long pNativeObject, String method);
	native protected void register_createMultiRenderTarget_EVString(long pNativeObject, String method);
	native protected void register_destroyRenderWindow_EVString(long pNativeObject, String method);
	native protected void register_destroyRenderTexture_EVString(long pNativeObject, String method);
	native protected void register_destroyRenderTarget_EVString(long pNativeObject, String method);
	native protected void register_attachRenderTarget_CRenderTarget(long pNativeObject, String method);
	native protected void register_getRenderTarget_EVString(long pNativeObject, String method);
	native protected void register_detachRenderTarget_EVString(long pNativeObject, String method);
	native protected void register_getRenderTargetIterator_void(long pNativeObject, String method);
	native protected void register_getErrorDescription_ev_int32(long pNativeObject, String method);
	native protected void register_setDepthBufferFor_CRenderTarget(long pNativeObject, String method);
	native protected void register__useLights_LightList_ev_uint16(long pNativeObject, String method);
	native protected void register_areFixedFunctionLightsInViewSpace_void(long pNativeObject, String method);
	native protected void register__setWorldMatrix_CMatrix4(long pNativeObject, String method);
	native protected void register__setWorldMatrices_CMatrix4_ev_uint16(long pNativeObject, String method);
	native protected void register__setViewMatrix_CMatrix4(long pNativeObject, String method);
	native protected void register__getViewMatrix_void(long pNativeObject, String method);
	native protected void register__setProjectionMatrix_CMatrix4(long pNativeObject, String method);
	native protected void register__getProjectMatrix_void(long pNativeObject, String method);
	native protected void register__getProjectMatrixDepth_void(long pNativeObject, String method);
	native protected void register__setTextureUnitSettings_ev_size_t_CTextureUnitState(long pNativeObject, String method);
	native protected void register__disableTextureUnit_ev_size_t(long pNativeObject, String method);
	native protected void register__disableTextureUnitsFrom_ev_size_t(long pNativeObject, String method);
	native protected void register__setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32(long pNativeObject, String method);
	native protected void register__setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real(long pNativeObject, String method);
	native protected void register__setPointSpritesEnabled_ev_bool(long pNativeObject, String method);
	native protected void register__setPointParameters_Real_ev_bool_Real_Real_Real_Real_Real(long pNativeObject, String method);
	native protected void register__setTexture_ev_size_t_ev_bool_CTexturePtr(long pNativeObject, String method);
	native protected void register__setTexture_ev_size_t_ev_bool_EVString(long pNativeObject, String method);
	native protected void register__setVertexTexture_ev_size_t_CTexturePtr(long pNativeObject, String method);
	native protected void register__setTextureCoordSet_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register__setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_CFrustum(long pNativeObject, String method);
	native protected void register__setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod(long pNativeObject, String method);
	native protected void register__setTextureBlendMode_ev_size_t_CLayerBlendModeEx(long pNativeObject, String method);
	native protected void register__setTextureUnitFiltering_ev_size_t_FilterOptions_FilterOptions_FilterOptions(long pNativeObject, String method);
	native protected void register__setTextureUnitFiltering_ev_size_t_FilterType_FilterOptions(long pNativeObject, String method);
	native protected void register__setTextureLayerAnisotropy_ev_size_t_ev_uint32(long pNativeObject, String method);
	native protected void register__setTextureAddressingMode_ev_size_t_UVWAddressingMode(long pNativeObject, String method);
	native protected void register__setTextureBorderColour_ev_size_t_CColourValue(long pNativeObject, String method);
	native protected void register__setTextureMipmapBias_ev_size_t_ev_real32(long pNativeObject, String method);
	native protected void register__setTextureMatrix_ev_size_t_CMatrix4(long pNativeObject, String method);
	native protected void register__setSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation(long pNativeObject, String method);
	native protected void register__setSceneBlending_SceneBlendFactor_SceneBlendFactor(long pNativeObject, String method);
	native protected void register__setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation(long pNativeObject, String method);
	native protected void register__setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation(long pNativeObject, String method);
	native protected void register__setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor(long pNativeObject, String method);
	native protected void register__setAlphaRejectSettings_CompareFunction_ev_uchar_ev_bool(long pNativeObject, String method);
	native protected void register__setTextureProjectionRelativeTo_ev_bool_CVector3(long pNativeObject, String method);
	native protected void register__createDepthBufferFor_CRenderTarget(long pNativeObject, String method);
	native protected void register__beginFrame_void(long pNativeObject, String method);
	native protected void register__pauseFrame_void(long pNativeObject, String method);
	native protected void register__resumeFrame_RenderSystemContext(long pNativeObject, String method);
	native protected void register__endFrame_void(long pNativeObject, String method);
	native protected void register__setViewport_CViewport(long pNativeObject, String method);
	native protected void register__getViewport_void(long pNativeObject, String method);
	native protected void register__setCullingMode_CullingMode(long pNativeObject, String method);
	native protected void register__getCullingMode_void(long pNativeObject, String method);
	native protected void register__setDepthBufferParams_ev_bool_ev_bool_CompareFunction(long pNativeObject, String method);
	native protected void register__setDepthBufferParams_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register__setDepthBufferParams_ev_bool(long pNativeObject, String method);
	native protected void register__setDepthBufferParams_void(long pNativeObject, String method);
	native protected void register__setDepthBufferCheckEnabled_ev_bool(long pNativeObject, String method);
	native protected void register__setDepthBufferCheckEnabled_void(long pNativeObject, String method);
	native protected void register__setDepthBufferWriteEnabled_ev_bool(long pNativeObject, String method);
	native protected void register__setDepthBufferWriteEnabled_void(long pNativeObject, String method);
	native protected void register__setDepthBufferFunction_CompareFunction(long pNativeObject, String method);
	native protected void register__setDepthBufferFunction_void(long pNativeObject, String method);
	native protected void register__setColourBufferWriteEnabled_ev_bool_ev_bool_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register__setDepthBias_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register__setDepthBias_ev_real32(long pNativeObject, String method);
	native protected void register__setFog_FogMode_CColourValue_Real_Real_Real(long pNativeObject, String method);
	native protected void register__setFog_FogMode_CColourValue_Real_Real(long pNativeObject, String method);
	native protected void register__setFog_FogMode_CColourValue_Real(long pNativeObject, String method);
	native protected void register__setFog_FogMode_CColourValue(long pNativeObject, String method);
	native protected void register__setFog_FogMode(long pNativeObject, String method);
	native protected void register__setFog_void(long pNativeObject, String method);
	native protected void register__beginGeometryCount_void(long pNativeObject, String method);
	native protected void register__getFaceCount_void(long pNativeObject, String method);
	native protected void register__getBatchCount_void(long pNativeObject, String method);
	native protected void register__getVertexCount_void(long pNativeObject, String method);
	native protected void register_convertColourValue_CColourValue_ev_uint32(long pNativeObject, String method);
	native protected void register_toColourValue_ev_uint32_CColourValue(long pNativeObject, String method);
	native protected void register_getColourVertexElementType_void(long pNativeObject, String method);
	native protected void register__convertProjectionMatrix_CMatrix4_CMatrix4_ev_bool(long pNativeObject, String method);
	native protected void register__convertProjectionMatrix_CMatrix4_CMatrix4(long pNativeObject, String method);
	native protected void register__makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool(long pNativeObject, String method);
	native protected void register__makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4(long pNativeObject, String method);
	native protected void register__makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool(long pNativeObject, String method);
	native protected void register__makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4(long pNativeObject, String method);
	native protected void register__makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool(long pNativeObject, String method);
	native protected void register__makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4(long pNativeObject, String method);
	native protected void register__applyObliqueDepthProjection_CMatrix4_CPlane_ev_bool(long pNativeObject, String method);
	native protected void register__setPolygonMode_PolygonMode(long pNativeObject, String method);
	native protected void register_setStencilCheckEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool(long pNativeObject, String method);
	native protected void register_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation(long pNativeObject, String method);
	native protected void register_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation(long pNativeObject, String method);
	native protected void register_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation(long pNativeObject, String method);
	native protected void register_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_setStencilBufferParams_CompareFunction_ev_uint32(long pNativeObject, String method);
	native protected void register_setStencilBufferParams_CompareFunction(long pNativeObject, String method);
	native protected void register_setStencilBufferParams_void(long pNativeObject, String method);
	native protected void register_setVertexDeclaration_CVertexDeclaration(long pNativeObject, String method);
	native protected void register_setVertexBufferBinding_CVertexBufferBinding(long pNativeObject, String method);
	native protected void register_setNormaliseNormals_ev_bool(long pNativeObject, String method);
	native protected void register__render_CRenderOperation(long pNativeObject, String method);
	native protected void register_getDriverVersion_void(long pNativeObject, String method);
	native protected void register_getActD3D9Device_void(long pNativeObject, String method);
	native protected void register__getDefaultViewportMaterialScheme_void(long pNativeObject, String method);
	native protected void register_bindGpuProgram_CGpuProgram(long pNativeObject, String method);
	native protected void register_bindGpuProgramParameters_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16(long pNativeObject, String method);
	native protected void register_bindGpuProgramPassIterationParameters_GpuProgramType(long pNativeObject, String method);
	native protected void register_unbindGpuProgram_GpuProgramType(long pNativeObject, String method);
	native protected void register_isGpuProgramBound_GpuProgramType(long pNativeObject, String method);
	native protected void register_setClipPlanes_PlaneList(long pNativeObject, String method);
	native protected void register_addClipPlane_CPlane(long pNativeObject, String method);
	native protected void register_addClipPlane_Real_Real_Real_Real(long pNativeObject, String method);
	native protected void register_resetClipPlanes_void(long pNativeObject, String method);
	native protected void register__initRenderTargets_void(long pNativeObject, String method);
	native protected void register__notifyCameraRemoved_CCamera(long pNativeObject, String method);
	native protected void register__updateAllRenderTargets_ev_bool(long pNativeObject, String method);
	native protected void register__updateAllRenderTargets_void(long pNativeObject, String method);
	native protected void register__swapAllRenderTargetBuffers_ev_bool(long pNativeObject, String method);
	native protected void register__swapAllRenderTargetBuffers_void(long pNativeObject, String method);
	native protected void register_setInvertVertexWinding_ev_bool(long pNativeObject, String method);
	native protected void register_getInvertVertexWinding_void(long pNativeObject, String method);
	native protected void register_setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_setScissorTest_ev_bool_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_setScissorTest_ev_bool_ev_size_t(long pNativeObject, String method);
	native protected void register_setScissorTest_ev_bool(long pNativeObject, String method);
	native protected void register_clearFrameBuffer_ev_uint32_CColourValue_Real_ev_uint16(long pNativeObject, String method);
	native protected void register_clearFrameBuffer_ev_uint32_CColourValue_Real(long pNativeObject, String method);
	native protected void register_clearFrameBuffer_ev_uint32_CColourValue(long pNativeObject, String method);
	native protected void register_clearFrameBuffer_ev_uint32(long pNativeObject, String method);
	native protected void register_getHorizontalTexelOffset_void(long pNativeObject, String method);
	native protected void register_getVerticalTexelOffset_void(long pNativeObject, String method);
	native protected void register_getMinimumDepthInputValue_void(long pNativeObject, String method);
	native protected void register_getMaximumDepthInputValue_void(long pNativeObject, String method);
	native protected void register_setCurrentPassIterationCount_ev_size_t(long pNativeObject, String method);
	native protected void register_setDeriveDepthBias_ev_bool_ev_real32_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register_setDeriveDepthBias_ev_bool_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register_setDeriveDepthBias_ev_bool_ev_real32(long pNativeObject, String method);
	native protected void register_setDeriveDepthBias_ev_bool(long pNativeObject, String method);
	native protected void register__setRenderTarget_CRenderTarget(long pNativeObject, String method);
	native protected void register_addListener_CRenderSystemListener(long pNativeObject, String method);
	native protected void register_removeListener_CRenderSystemListener(long pNativeObject, String method);
	native protected void register_getRenderSystemEvents_void(long pNativeObject, String method);
	native protected void register_preExtraThreadsStarted_void(long pNativeObject, String method);
	native protected void register_postExtraThreadsStarted_void(long pNativeObject, String method);
	native protected void register_registerThread_void(long pNativeObject, String method);
	native protected void register_flushRenderSystem_void(long pNativeObject, String method);
	native protected void register_unregisterThread_void(long pNativeObject, String method);
	native protected void register_getDisplayMonitorCount_void(long pNativeObject, String method);
	native protected void register_fireEvent_EVString_CommonStringPairList(long pNativeObject, String method);
	native protected void register_fireEvent_EVString(long pNativeObject, String method);
	native protected void register_setClipPlanesImpl_PlaneList(long pNativeObject, String method);
	native protected void register_initialiseFromRenderSystemCapabilities_CRenderSystemCapabilities_CRenderTarget(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getConfigOptions_void(this.nativeObject.pointer, "getConfigOptions_void_callback");
			this.register_setConfigOption_EVString_EVString(this.nativeObject.pointer, "setConfigOption_EVString_EVString_callback");
			this.register_createHardwareOcclusionQuery_void(this.nativeObject.pointer, "createHardwareOcclusionQuery_void_callback");
			this.register_destroyHardwareOcclusionQuery_CHardwareOcclusionQuery(this.nativeObject.pointer, "destroyHardwareOcclusionQuery_CHardwareOcclusionQuery_callback");
			this.register_validateConfigOptions_void(this.nativeObject.pointer, "validateConfigOptions_void_callback");
			this.register__initialise_ev_bool_EVString(this.nativeObject.pointer, "_initialise_ev_bool_EVString_callback");
			this.register__initialise_ev_bool(this.nativeObject.pointer, "_initialise_ev_bool_callback");
			this.register_createRenderSystemCapabilities_void(this.nativeObject.pointer, "createRenderSystemCapabilities_void_callback");
			this.register_useCustomRenderSystemCapabilities_CRenderSystemCapabilities(this.nativeObject.pointer, "useCustomRenderSystemCapabilities_CRenderSystemCapabilities_callback");
			this.register_reinitialise_void(this.nativeObject.pointer, "reinitialise_void_callback");
			this.register_shutdown_void(this.nativeObject.pointer, "shutdown_void_callback");
			this.register_setAmbientLight_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, "setAmbientLight_ev_real32_ev_real32_ev_real32_callback");
			this.register_setShadingType_ShadeOptions(this.nativeObject.pointer, "setShadingType_ShadeOptions_callback");
			this.register_setLightingEnabled_ev_bool(this.nativeObject.pointer, "setLightingEnabled_ev_bool_callback");
			this.register__createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList(this.nativeObject.pointer, "_createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList_callback");
			this.register__createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool(this.nativeObject.pointer, "_createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_callback");
			this.register__createRenderWindows_RenderWindowDescriptionList_RenderWindowList(this.nativeObject.pointer, "_createRenderWindows_RenderWindowDescriptionList_RenderWindowList_callback");
			this.register_createMultiRenderTarget_EVString(this.nativeObject.pointer, "createMultiRenderTarget_EVString_callback");
			this.register_destroyRenderWindow_EVString(this.nativeObject.pointer, "destroyRenderWindow_EVString_callback");
			this.register_destroyRenderTexture_EVString(this.nativeObject.pointer, "destroyRenderTexture_EVString_callback");
			this.register_destroyRenderTarget_EVString(this.nativeObject.pointer, "destroyRenderTarget_EVString_callback");
			this.register_attachRenderTarget_CRenderTarget(this.nativeObject.pointer, "attachRenderTarget_CRenderTarget_callback");
			this.register_getRenderTarget_EVString(this.nativeObject.pointer, "getRenderTarget_EVString_callback");
			this.register_detachRenderTarget_EVString(this.nativeObject.pointer, "detachRenderTarget_EVString_callback");
			this.register_getRenderTargetIterator_void(this.nativeObject.pointer, "getRenderTargetIterator_void_callback");
			this.register_getErrorDescription_ev_int32(this.nativeObject.pointer, "getErrorDescription_ev_int32_callback");
			this.register_setDepthBufferFor_CRenderTarget(this.nativeObject.pointer, "setDepthBufferFor_CRenderTarget_callback");
			this.register__useLights_LightList_ev_uint16(this.nativeObject.pointer, "_useLights_LightList_ev_uint16_callback");
			this.register_areFixedFunctionLightsInViewSpace_void(this.nativeObject.pointer, "areFixedFunctionLightsInViewSpace_void_callback");
			this.register__setWorldMatrix_CMatrix4(this.nativeObject.pointer, "_setWorldMatrix_CMatrix4_callback");
			this.register__setWorldMatrices_CMatrix4_ev_uint16(this.nativeObject.pointer, "_setWorldMatrices_CMatrix4_ev_uint16_callback");
			this.register__setViewMatrix_CMatrix4(this.nativeObject.pointer, "_setViewMatrix_CMatrix4_callback");
			this.register__getViewMatrix_void(this.nativeObject.pointer, "_getViewMatrix_void_callback");
			this.register__setProjectionMatrix_CMatrix4(this.nativeObject.pointer, "_setProjectionMatrix_CMatrix4_callback");
			this.register__getProjectMatrix_void(this.nativeObject.pointer, "_getProjectMatrix_void_callback");
			this.register__getProjectMatrixDepth_void(this.nativeObject.pointer, "_getProjectMatrixDepth_void_callback");
			this.register__setTextureUnitSettings_ev_size_t_CTextureUnitState(this.nativeObject.pointer, "_setTextureUnitSettings_ev_size_t_CTextureUnitState_callback");
			this.register__disableTextureUnit_ev_size_t(this.nativeObject.pointer, "_disableTextureUnit_ev_size_t_callback");
			this.register__disableTextureUnitsFrom_ev_size_t(this.nativeObject.pointer, "_disableTextureUnitsFrom_ev_size_t_callback");
			this.register__setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32(this.nativeObject.pointer, "_setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32_callback");
			this.register__setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real(this.nativeObject.pointer, "_setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_callback");
			this.register__setPointSpritesEnabled_ev_bool(this.nativeObject.pointer, "_setPointSpritesEnabled_ev_bool_callback");
			this.register__setPointParameters_Real_ev_bool_Real_Real_Real_Real_Real(this.nativeObject.pointer, "_setPointParameters_Real_ev_bool_Real_Real_Real_Real_Real_callback");
			this.register__setTexture_ev_size_t_ev_bool_CTexturePtr(this.nativeObject.pointer, "_setTexture_ev_size_t_ev_bool_CTexturePtr_callback");
			this.register__setTexture_ev_size_t_ev_bool_EVString(this.nativeObject.pointer, "_setTexture_ev_size_t_ev_bool_EVString_callback");
			this.register__setVertexTexture_ev_size_t_CTexturePtr(this.nativeObject.pointer, "_setVertexTexture_ev_size_t_CTexturePtr_callback");
			this.register__setTextureCoordSet_ev_size_t_ev_size_t(this.nativeObject.pointer, "_setTextureCoordSet_ev_size_t_ev_size_t_callback");
			this.register__setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_CFrustum(this.nativeObject.pointer, "_setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_CFrustum_callback");
			this.register__setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod(this.nativeObject.pointer, "_setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_callback");
			this.register__setTextureBlendMode_ev_size_t_CLayerBlendModeEx(this.nativeObject.pointer, "_setTextureBlendMode_ev_size_t_CLayerBlendModeEx_callback");
			this.register__setTextureUnitFiltering_ev_size_t_FilterOptions_FilterOptions_FilterOptions(this.nativeObject.pointer, "_setTextureUnitFiltering_ev_size_t_FilterOptions_FilterOptions_FilterOptions_callback");
			this.register__setTextureUnitFiltering_ev_size_t_FilterType_FilterOptions(this.nativeObject.pointer, "_setTextureUnitFiltering_ev_size_t_FilterType_FilterOptions_callback");
			this.register__setTextureLayerAnisotropy_ev_size_t_ev_uint32(this.nativeObject.pointer, "_setTextureLayerAnisotropy_ev_size_t_ev_uint32_callback");
			this.register__setTextureAddressingMode_ev_size_t_UVWAddressingMode(this.nativeObject.pointer, "_setTextureAddressingMode_ev_size_t_UVWAddressingMode_callback");
			this.register__setTextureBorderColour_ev_size_t_CColourValue(this.nativeObject.pointer, "_setTextureBorderColour_ev_size_t_CColourValue_callback");
			this.register__setTextureMipmapBias_ev_size_t_ev_real32(this.nativeObject.pointer, "_setTextureMipmapBias_ev_size_t_ev_real32_callback");
			this.register__setTextureMatrix_ev_size_t_CMatrix4(this.nativeObject.pointer, "_setTextureMatrix_ev_size_t_CMatrix4_callback");
			this.register__setSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation(this.nativeObject.pointer, "_setSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_callback");
			this.register__setSceneBlending_SceneBlendFactor_SceneBlendFactor(this.nativeObject.pointer, "_setSceneBlending_SceneBlendFactor_SceneBlendFactor_callback");
			this.register__setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation(this.nativeObject.pointer, "_setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation_callback");
			this.register__setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation(this.nativeObject.pointer, "_setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_callback");
			this.register__setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor(this.nativeObject.pointer, "_setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_callback");
			this.register__setAlphaRejectSettings_CompareFunction_ev_uchar_ev_bool(this.nativeObject.pointer, "_setAlphaRejectSettings_CompareFunction_ev_uchar_ev_bool_callback");
			this.register__setTextureProjectionRelativeTo_ev_bool_CVector3(this.nativeObject.pointer, "_setTextureProjectionRelativeTo_ev_bool_CVector3_callback");
			this.register__createDepthBufferFor_CRenderTarget(this.nativeObject.pointer, "_createDepthBufferFor_CRenderTarget_callback");
			this.register__beginFrame_void(this.nativeObject.pointer, "_beginFrame_void_callback");
			this.register__pauseFrame_void(this.nativeObject.pointer, "_pauseFrame_void_callback");
			this.register__resumeFrame_RenderSystemContext(this.nativeObject.pointer, "_resumeFrame_RenderSystemContext_callback");
			this.register__endFrame_void(this.nativeObject.pointer, "_endFrame_void_callback");
			this.register__setViewport_CViewport(this.nativeObject.pointer, "_setViewport_CViewport_callback");
			this.register__getViewport_void(this.nativeObject.pointer, "_getViewport_void_callback");
			this.register__setCullingMode_CullingMode(this.nativeObject.pointer, "_setCullingMode_CullingMode_callback");
			this.register__getCullingMode_void(this.nativeObject.pointer, "_getCullingMode_void_callback");
			this.register__setDepthBufferParams_ev_bool_ev_bool_CompareFunction(this.nativeObject.pointer, "_setDepthBufferParams_ev_bool_ev_bool_CompareFunction_callback");
			this.register__setDepthBufferParams_ev_bool_ev_bool(this.nativeObject.pointer, "_setDepthBufferParams_ev_bool_ev_bool_callback");
			this.register__setDepthBufferParams_ev_bool(this.nativeObject.pointer, "_setDepthBufferParams_ev_bool_callback");
			this.register__setDepthBufferParams_void(this.nativeObject.pointer, "_setDepthBufferParams_void_callback");
			this.register__setDepthBufferCheckEnabled_ev_bool(this.nativeObject.pointer, "_setDepthBufferCheckEnabled_ev_bool_callback");
			this.register__setDepthBufferCheckEnabled_void(this.nativeObject.pointer, "_setDepthBufferCheckEnabled_void_callback");
			this.register__setDepthBufferWriteEnabled_ev_bool(this.nativeObject.pointer, "_setDepthBufferWriteEnabled_ev_bool_callback");
			this.register__setDepthBufferWriteEnabled_void(this.nativeObject.pointer, "_setDepthBufferWriteEnabled_void_callback");
			this.register__setDepthBufferFunction_CompareFunction(this.nativeObject.pointer, "_setDepthBufferFunction_CompareFunction_callback");
			this.register__setDepthBufferFunction_void(this.nativeObject.pointer, "_setDepthBufferFunction_void_callback");
			this.register__setColourBufferWriteEnabled_ev_bool_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, "_setColourBufferWriteEnabled_ev_bool_ev_bool_ev_bool_ev_bool_callback");
			this.register__setDepthBias_ev_real32_ev_real32(this.nativeObject.pointer, "_setDepthBias_ev_real32_ev_real32_callback");
			this.register__setDepthBias_ev_real32(this.nativeObject.pointer, "_setDepthBias_ev_real32_callback");
			this.register__setFog_FogMode_CColourValue_Real_Real_Real(this.nativeObject.pointer, "_setFog_FogMode_CColourValue_Real_Real_Real_callback");
			this.register__setFog_FogMode_CColourValue_Real_Real(this.nativeObject.pointer, "_setFog_FogMode_CColourValue_Real_Real_callback");
			this.register__setFog_FogMode_CColourValue_Real(this.nativeObject.pointer, "_setFog_FogMode_CColourValue_Real_callback");
			this.register__setFog_FogMode_CColourValue(this.nativeObject.pointer, "_setFog_FogMode_CColourValue_callback");
			this.register__setFog_FogMode(this.nativeObject.pointer, "_setFog_FogMode_callback");
			this.register__setFog_void(this.nativeObject.pointer, "_setFog_void_callback");
			this.register__beginGeometryCount_void(this.nativeObject.pointer, "_beginGeometryCount_void_callback");
			this.register__getFaceCount_void(this.nativeObject.pointer, "_getFaceCount_void_callback");
			this.register__getBatchCount_void(this.nativeObject.pointer, "_getBatchCount_void_callback");
			this.register__getVertexCount_void(this.nativeObject.pointer, "_getVertexCount_void_callback");
			this.register_convertColourValue_CColourValue_ev_uint32(this.nativeObject.pointer, "convertColourValue_CColourValue_ev_uint32_callback");
			this.register_toColourValue_ev_uint32_CColourValue(this.nativeObject.pointer, "toColourValue_ev_uint32_CColourValue_callback");
			this.register_getColourVertexElementType_void(this.nativeObject.pointer, "getColourVertexElementType_void_callback");
			this.register__convertProjectionMatrix_CMatrix4_CMatrix4_ev_bool(this.nativeObject.pointer, "_convertProjectionMatrix_CMatrix4_CMatrix4_ev_bool_callback");
			this.register__convertProjectionMatrix_CMatrix4_CMatrix4(this.nativeObject.pointer, "_convertProjectionMatrix_CMatrix4_CMatrix4_callback");
			this.register__makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool(this.nativeObject.pointer, "_makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool_callback");
			this.register__makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4(this.nativeObject.pointer, "_makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_callback");
			this.register__makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool(this.nativeObject.pointer, "_makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool_callback");
			this.register__makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4(this.nativeObject.pointer, "_makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_callback");
			this.register__makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool(this.nativeObject.pointer, "_makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool_callback");
			this.register__makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4(this.nativeObject.pointer, "_makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_callback");
			this.register__applyObliqueDepthProjection_CMatrix4_CPlane_ev_bool(this.nativeObject.pointer, "_applyObliqueDepthProjection_CMatrix4_CPlane_ev_bool_callback");
			this.register__setPolygonMode_PolygonMode(this.nativeObject.pointer, "_setPolygonMode_PolygonMode_callback");
			this.register_setStencilCheckEnabled_ev_bool(this.nativeObject.pointer, "setStencilCheckEnabled_ev_bool_callback");
			this.register_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool(this.nativeObject.pointer, "setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool_callback");
			this.register_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation(this.nativeObject.pointer, "setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_callback");
			this.register_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation(this.nativeObject.pointer, "setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_callback");
			this.register_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation(this.nativeObject.pointer, "setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_callback");
			this.register_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32(this.nativeObject.pointer, "setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_callback");
			this.register_setStencilBufferParams_CompareFunction_ev_uint32(this.nativeObject.pointer, "setStencilBufferParams_CompareFunction_ev_uint32_callback");
			this.register_setStencilBufferParams_CompareFunction(this.nativeObject.pointer, "setStencilBufferParams_CompareFunction_callback");
			this.register_setStencilBufferParams_void(this.nativeObject.pointer, "setStencilBufferParams_void_callback");
			this.register_setVertexDeclaration_CVertexDeclaration(this.nativeObject.pointer, "setVertexDeclaration_CVertexDeclaration_callback");
			this.register_setVertexBufferBinding_CVertexBufferBinding(this.nativeObject.pointer, "setVertexBufferBinding_CVertexBufferBinding_callback");
			this.register_setNormaliseNormals_ev_bool(this.nativeObject.pointer, "setNormaliseNormals_ev_bool_callback");
			this.register__render_CRenderOperation(this.nativeObject.pointer, "_render_CRenderOperation_callback");
			this.register_getDriverVersion_void(this.nativeObject.pointer, "getDriverVersion_void_callback");
			this.register_getActD3D9Device_void(this.nativeObject.pointer, "getActD3D9Device_void_callback");
			this.register__getDefaultViewportMaterialScheme_void(this.nativeObject.pointer, "_getDefaultViewportMaterialScheme_void_callback");
			this.register_bindGpuProgram_CGpuProgram(this.nativeObject.pointer, "bindGpuProgram_CGpuProgram_callback");
			this.register_bindGpuProgramParameters_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16(this.nativeObject.pointer, "bindGpuProgramParameters_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16_callback");
			this.register_bindGpuProgramPassIterationParameters_GpuProgramType(this.nativeObject.pointer, "bindGpuProgramPassIterationParameters_GpuProgramType_callback");
			this.register_unbindGpuProgram_GpuProgramType(this.nativeObject.pointer, "unbindGpuProgram_GpuProgramType_callback");
			this.register_isGpuProgramBound_GpuProgramType(this.nativeObject.pointer, "isGpuProgramBound_GpuProgramType_callback");
			this.register_setClipPlanes_PlaneList(this.nativeObject.pointer, "setClipPlanes_PlaneList_callback");
			this.register_addClipPlane_CPlane(this.nativeObject.pointer, "addClipPlane_CPlane_callback");
			this.register_addClipPlane_Real_Real_Real_Real(this.nativeObject.pointer, "addClipPlane_Real_Real_Real_Real_callback");
			this.register_resetClipPlanes_void(this.nativeObject.pointer, "resetClipPlanes_void_callback");
			this.register__initRenderTargets_void(this.nativeObject.pointer, "_initRenderTargets_void_callback");
			this.register__notifyCameraRemoved_CCamera(this.nativeObject.pointer, "_notifyCameraRemoved_CCamera_callback");
			this.register__updateAllRenderTargets_ev_bool(this.nativeObject.pointer, "_updateAllRenderTargets_ev_bool_callback");
			this.register__updateAllRenderTargets_void(this.nativeObject.pointer, "_updateAllRenderTargets_void_callback");
			this.register__swapAllRenderTargetBuffers_ev_bool(this.nativeObject.pointer, "_swapAllRenderTargetBuffers_ev_bool_callback");
			this.register__swapAllRenderTargetBuffers_void(this.nativeObject.pointer, "_swapAllRenderTargetBuffers_void_callback");
			this.register_setInvertVertexWinding_ev_bool(this.nativeObject.pointer, "setInvertVertexWinding_ev_bool_callback");
			this.register_getInvertVertexWinding_void(this.nativeObject.pointer, "getInvertVertexWinding_void_callback");
			this.register_setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t(this.nativeObject.pointer, "setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t_callback");
			this.register_setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t(this.nativeObject.pointer, "setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_callback");
			this.register_setScissorTest_ev_bool_ev_size_t_ev_size_t(this.nativeObject.pointer, "setScissorTest_ev_bool_ev_size_t_ev_size_t_callback");
			this.register_setScissorTest_ev_bool_ev_size_t(this.nativeObject.pointer, "setScissorTest_ev_bool_ev_size_t_callback");
			this.register_setScissorTest_ev_bool(this.nativeObject.pointer, "setScissorTest_ev_bool_callback");
			this.register_clearFrameBuffer_ev_uint32_CColourValue_Real_ev_uint16(this.nativeObject.pointer, "clearFrameBuffer_ev_uint32_CColourValue_Real_ev_uint16_callback");
			this.register_clearFrameBuffer_ev_uint32_CColourValue_Real(this.nativeObject.pointer, "clearFrameBuffer_ev_uint32_CColourValue_Real_callback");
			this.register_clearFrameBuffer_ev_uint32_CColourValue(this.nativeObject.pointer, "clearFrameBuffer_ev_uint32_CColourValue_callback");
			this.register_clearFrameBuffer_ev_uint32(this.nativeObject.pointer, "clearFrameBuffer_ev_uint32_callback");
			this.register_getHorizontalTexelOffset_void(this.nativeObject.pointer, "getHorizontalTexelOffset_void_callback");
			this.register_getVerticalTexelOffset_void(this.nativeObject.pointer, "getVerticalTexelOffset_void_callback");
			this.register_getMinimumDepthInputValue_void(this.nativeObject.pointer, "getMinimumDepthInputValue_void_callback");
			this.register_getMaximumDepthInputValue_void(this.nativeObject.pointer, "getMaximumDepthInputValue_void_callback");
			this.register_setCurrentPassIterationCount_ev_size_t(this.nativeObject.pointer, "setCurrentPassIterationCount_ev_size_t_callback");
			this.register_setDeriveDepthBias_ev_bool_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, "setDeriveDepthBias_ev_bool_ev_real32_ev_real32_ev_real32_callback");
			this.register_setDeriveDepthBias_ev_bool_ev_real32_ev_real32(this.nativeObject.pointer, "setDeriveDepthBias_ev_bool_ev_real32_ev_real32_callback");
			this.register_setDeriveDepthBias_ev_bool_ev_real32(this.nativeObject.pointer, "setDeriveDepthBias_ev_bool_ev_real32_callback");
			this.register_setDeriveDepthBias_ev_bool(this.nativeObject.pointer, "setDeriveDepthBias_ev_bool_callback");
			this.register__setRenderTarget_CRenderTarget(this.nativeObject.pointer, "_setRenderTarget_CRenderTarget_callback");
			this.register_addListener_CRenderSystemListener(this.nativeObject.pointer, "addListener_CRenderSystemListener_callback");
			this.register_removeListener_CRenderSystemListener(this.nativeObject.pointer, "removeListener_CRenderSystemListener_callback");
			this.register_getRenderSystemEvents_void(this.nativeObject.pointer, "getRenderSystemEvents_void_callback");
			this.register_preExtraThreadsStarted_void(this.nativeObject.pointer, "preExtraThreadsStarted_void_callback");
			this.register_postExtraThreadsStarted_void(this.nativeObject.pointer, "postExtraThreadsStarted_void_callback");
			this.register_registerThread_void(this.nativeObject.pointer, "registerThread_void_callback");
			this.register_flushRenderSystem_void(this.nativeObject.pointer, "flushRenderSystem_void_callback");
			this.register_unregisterThread_void(this.nativeObject.pointer, "unregisterThread_void_callback");
			this.register_getDisplayMonitorCount_void(this.nativeObject.pointer, "getDisplayMonitorCount_void_callback");
			this.register_fireEvent_EVString_CommonStringPairList(this.nativeObject.pointer, "fireEvent_EVString_CommonStringPairList_callback");
			this.register_fireEvent_EVString(this.nativeObject.pointer, "fireEvent_EVString_callback");
			this.register_setClipPlanesImpl_PlaneList(this.nativeObject.pointer, "setClipPlanesImpl_PlaneList_callback");
			this.register_initialiseFromRenderSystemCapabilities_CRenderSystemCapabilities_CRenderTarget(this.nativeObject.pointer, "initialiseFromRenderSystemCapabilities_CRenderSystemCapabilities_CRenderTarget_callback");
		}
	}
	
	public static RenderSystem fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderSystem obj = null;
 		if(baseObj instanceof RenderSystem)
		{
			obj = (RenderSystem)baseObj;
		} else {
			obj = new RenderSystem(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderSystem");
			obj.increaseCast();
		}

		return obj;
	}
}
