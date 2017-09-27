package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 渲染系统使用的资源的基类
 */
public class Resource extends com.earthview.world.core.StringInterface {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CResource", new ResourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCResourceProxy", new ResourceClassFactory());
	}

	public static class ResourceListener extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResource::CResourceListener", new ResourceListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResource::JCResourceListenerProxy", new ResourceListenerClassFactory());
		}

		public ResourceListener() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCResourceListenerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.Resource$ResourceListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  void backgroundLoadingComplete_CResource_callback(long pResource)
		{
			com.earthview.world.graphic.Resource pResourceParamValue = (pResource == 0L ? null : new com.earthview.world.graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate));
			if(pResourceParamValue != null)
			{
			pResourceParamValue.setDelegate(true);
			pResourceParamValue.setInstancePointer(new InstancePointer(pResource));
			IClassFactory pResourceParamValueClassFactory = GlobalClassFactoryMap.get(pResourceParamValue.getCppInstanceTypeName());
			if (pResourceParamValueClassFactory != null)
			{
				pResourceParamValue.setDelegate(true);
				pResourceParamValue = (com.earthview.world.graphic.Resource)pResourceParamValueClassFactory.create();
				pResourceParamValue.setDelegate(true);
				pResourceParamValue.setInstancePointer(new InstancePointer(pResource));
			}
			}
			backgroundLoadingComplete(pResourceParamValue);
		}

		native private void backgroundLoadingComplete_CResource(long pNativeObject, long pResource);
		public void backgroundLoadingComplete(com.earthview.world.graphic.Resource pResource)
		{
			long pResourceParamValue = (pResource == null ? 0L : pResource.nativeObject.pointer);
			backgroundLoadingComplete_CResource(this.nativeObject.pointer, pResourceParamValue);
		}
		native private void backgroundLoadingComplete_CResource_NoVirtual(long pNativeObject, long pResource);
		protected void backgroundLoadingComplete_NoVirtual(com.earthview.world.graphic.Resource pResource)
		{
			long pResourceParamValue = (pResource == null ? 0L : pResource.nativeObject.pointer);
			backgroundLoadingComplete_CResource_NoVirtual(this.nativeObject.pointer, pResourceParamValue);
		}

		protected  void backgroundPreparingComplete_CResource_callback(long pResource)
		{
			com.earthview.world.graphic.Resource pResourceParamValue = (pResource == 0L ? null : new com.earthview.world.graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate));
			if(pResourceParamValue != null)
			{
			pResourceParamValue.setDelegate(true);
			pResourceParamValue.setInstancePointer(new InstancePointer(pResource));
			IClassFactory pResourceParamValueClassFactory = GlobalClassFactoryMap.get(pResourceParamValue.getCppInstanceTypeName());
			if (pResourceParamValueClassFactory != null)
			{
				pResourceParamValue.setDelegate(true);
				pResourceParamValue = (com.earthview.world.graphic.Resource)pResourceParamValueClassFactory.create();
				pResourceParamValue.setDelegate(true);
				pResourceParamValue.setInstancePointer(new InstancePointer(pResource));
			}
			}
			backgroundPreparingComplete(pResourceParamValue);
		}

		native private void backgroundPreparingComplete_CResource(long pNativeObject, long pResource);
		public void backgroundPreparingComplete(com.earthview.world.graphic.Resource pResource)
		{
			long pResourceParamValue = (pResource == null ? 0L : pResource.nativeObject.pointer);
			backgroundPreparingComplete_CResource(this.nativeObject.pointer, pResourceParamValue);
		}
		native private void backgroundPreparingComplete_CResource_NoVirtual(long pNativeObject, long pResource);
		protected void backgroundPreparingComplete_NoVirtual(com.earthview.world.graphic.Resource pResource)
		{
			long pResourceParamValue = (pResource == null ? 0L : pResource.nativeObject.pointer);
			backgroundPreparingComplete_CResource_NoVirtual(this.nativeObject.pointer, pResourceParamValue);
		}

		protected  void loadingComplete_CResource_callback(long pResource)
		{
			com.earthview.world.graphic.Resource pResourceParamValue = (pResource == 0L ? null : new com.earthview.world.graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate));
			if(pResourceParamValue != null)
			{
			pResourceParamValue.setDelegate(true);
			pResourceParamValue.setInstancePointer(new InstancePointer(pResource));
			IClassFactory pResourceParamValueClassFactory = GlobalClassFactoryMap.get(pResourceParamValue.getCppInstanceTypeName());
			if (pResourceParamValueClassFactory != null)
			{
				pResourceParamValue.setDelegate(true);
				pResourceParamValue = (com.earthview.world.graphic.Resource)pResourceParamValueClassFactory.create();
				pResourceParamValue.setDelegate(true);
				pResourceParamValue.setInstancePointer(new InstancePointer(pResource));
			}
			}
			loadingComplete(pResourceParamValue);
		}

		native private void loadingComplete_CResource(long pNativeObject, long pResource);
		public void loadingComplete(com.earthview.world.graphic.Resource pResource)
		{
			long pResourceParamValue = (pResource == null ? 0L : pResource.nativeObject.pointer);
			loadingComplete_CResource(this.nativeObject.pointer, pResourceParamValue);
		}
		native private void loadingComplete_CResource_NoVirtual(long pNativeObject, long pResource);
		protected void loadingComplete_NoVirtual(com.earthview.world.graphic.Resource pResource)
		{
			long pResourceParamValue = (pResource == null ? 0L : pResource.nativeObject.pointer);
			loadingComplete_CResource_NoVirtual(this.nativeObject.pointer, pResourceParamValue);
		}

		protected  void preparingComplete_CResource_callback(long pResource)
		{
			com.earthview.world.graphic.Resource pResourceParamValue = (pResource == 0L ? null : new com.earthview.world.graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate));
			if(pResourceParamValue != null)
			{
			pResourceParamValue.setDelegate(true);
			pResourceParamValue.setInstancePointer(new InstancePointer(pResource));
			IClassFactory pResourceParamValueClassFactory = GlobalClassFactoryMap.get(pResourceParamValue.getCppInstanceTypeName());
			if (pResourceParamValueClassFactory != null)
			{
				pResourceParamValue.setDelegate(true);
				pResourceParamValue = (com.earthview.world.graphic.Resource)pResourceParamValueClassFactory.create();
				pResourceParamValue.setDelegate(true);
				pResourceParamValue.setInstancePointer(new InstancePointer(pResource));
			}
			}
			preparingComplete(pResourceParamValue);
		}

		native private void preparingComplete_CResource(long pNativeObject, long pResource);
		public void preparingComplete(com.earthview.world.graphic.Resource pResource)
		{
			long pResourceParamValue = (pResource == null ? 0L : pResource.nativeObject.pointer);
			preparingComplete_CResource(this.nativeObject.pointer, pResourceParamValue);
		}
		native private void preparingComplete_CResource_NoVirtual(long pNativeObject, long pResource);
		protected void preparingComplete_NoVirtual(com.earthview.world.graphic.Resource pResource)
		{
			long pResourceParamValue = (pResource == null ? 0L : pResource.nativeObject.pointer);
			preparingComplete_CResource_NoVirtual(this.nativeObject.pointer, pResourceParamValue);
		}

		protected  void unloadingComplete_CResource_callback(long pResource)
		{
			com.earthview.world.graphic.Resource pResourceParamValue = (pResource == 0L ? null : new com.earthview.world.graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate));
			if(pResourceParamValue != null)
			{
			pResourceParamValue.setDelegate(true);
			pResourceParamValue.setInstancePointer(new InstancePointer(pResource));
			IClassFactory pResourceParamValueClassFactory = GlobalClassFactoryMap.get(pResourceParamValue.getCppInstanceTypeName());
			if (pResourceParamValueClassFactory != null)
			{
				pResourceParamValue.setDelegate(true);
				pResourceParamValue = (com.earthview.world.graphic.Resource)pResourceParamValueClassFactory.create();
				pResourceParamValue.setDelegate(true);
				pResourceParamValue.setInstancePointer(new InstancePointer(pResource));
			}
			}
			unloadingComplete(pResourceParamValue);
		}

		native private void unloadingComplete_CResource(long pNativeObject, long pResource);
		public void unloadingComplete(com.earthview.world.graphic.Resource pResource)
		{
			long pResourceParamValue = (pResource == null ? 0L : pResource.nativeObject.pointer);
			unloadingComplete_CResource(this.nativeObject.pointer, pResourceParamValue);
		}
		native private void unloadingComplete_CResource_NoVirtual(long pNativeObject, long pResource);
		protected void unloadingComplete_NoVirtual(com.earthview.world.graphic.Resource pResource)
		{
			long pResourceParamValue = (pResource == null ? 0L : pResource.nativeObject.pointer);
			unloadingComplete_CResource_NoVirtual(this.nativeObject.pointer, pResourceParamValue);
		}

		public ResourceListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ResourceListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_backgroundLoadingComplete_CResource(long pNativeObject, String method);
		native protected void register_backgroundPreparingComplete_CResource(long pNativeObject, String method);
		native protected void register_loadingComplete_CResource(long pNativeObject, String method);
		native protected void register_preparingComplete_CResource(long pNativeObject, String method);
		native protected void register_unloadingComplete_CResource(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_backgroundLoadingComplete_CResource(this.nativeObject.pointer, "backgroundLoadingComplete_CResource_callback");
				this.register_backgroundPreparingComplete_CResource(this.nativeObject.pointer, "backgroundPreparingComplete_CResource_callback");
				this.register_loadingComplete_CResource(this.nativeObject.pointer, "loadingComplete_CResource_callback");
				this.register_preparingComplete_CResource(this.nativeObject.pointer, "preparingComplete_CResource_callback");
				this.register_unloadingComplete_CResource(this.nativeObject.pointer, "unloadingComplete_CResource_callback");
			}
		}
		
		public static ResourceListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ResourceListener obj = null;
 			if(baseObj instanceof ResourceListener)
			{
				obj = (ResourceListener)baseObj;
			} else {
				obj = new ResourceListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CResourceListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ResourceListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ResourceListener emptyInstance = new ResourceListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Enum identifying the loading state of the resource
	public enum LoadingState implements INativeEnum<LoadingState> {
		LOADSTATE_UNLOADED(LoadingStateHelper.ENUM_VALUES[0]),
		LOADSTATE_LOADING(LoadingStateHelper.ENUM_VALUES[1]),
		LOADSTATE_LOADED(LoadingStateHelper.ENUM_VALUES[2]),
		LOADSTATE_UNLOADING(LoadingStateHelper.ENUM_VALUES[3]),
		LOADSTATE_PREPARED(LoadingStateHelper.ENUM_VALUES[4]),
		LOADSTATE_PREPARING(LoadingStateHelper.ENUM_VALUES[5]);
		private int value;
		LoadingState(int i) {
			this.value = i;
		}
		public LoadingState getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final LoadingState toEnum(int retval) {
			if(retval == LOADSTATE_UNLOADED.value){
				return LOADSTATE_UNLOADED;
			}
			else if(retval == LOADSTATE_LOADING.value){
				return LOADSTATE_LOADING;
			}
			else if(retval == LOADSTATE_LOADED.value){
				return LOADSTATE_LOADED;
			}
			else if(retval == LOADSTATE_UNLOADING.value){
				return LOADSTATE_UNLOADING;
			}
			else if(retval == LOADSTATE_PREPARED.value){
				return LOADSTATE_PREPARED;
			}
			else if(retval == LOADSTATE_PREPARING.value){
				return LOADSTATE_PREPARING;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class LoadingStateHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	protected  void preLoadImpl_void_callback()
	{
		preLoadImpl();
	}

	native private void preLoadImpl_void(long pNativeObject);
	/**
	 * 加载前调用的函数
	 */
	public void preLoadImpl()
	{
		preLoadImpl_void(this.nativeObject.pointer);
	}
	native private void preLoadImpl_void_NoVirtual(long pNativeObject);
	protected void preLoadImpl_NoVirtual()
	{
		preLoadImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void postLoadImpl_void_callback()
	{
		postLoadImpl();
	}

	native private void postLoadImpl_void(long pNativeObject);
	/**
	 * 加载后调用的函数
	 */
	public void postLoadImpl()
	{
		postLoadImpl_void(this.nativeObject.pointer);
	}
	native private void postLoadImpl_void_NoVirtual(long pNativeObject);
	protected void postLoadImpl_NoVirtual()
	{
		postLoadImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void preUnloadImpl_void_callback()
	{
		preUnloadImpl();
	}

	native private void preUnloadImpl_void(long pNativeObject);
	/**
	 * 卸载前调用的函数
	 */
	public void preUnloadImpl()
	{
		preUnloadImpl_void(this.nativeObject.pointer);
	}
	native private void preUnloadImpl_void_NoVirtual(long pNativeObject);
	protected void preUnloadImpl_NoVirtual()
	{
		preUnloadImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void postUnloadImpl_void_callback()
	{
		postUnloadImpl();
	}

	native private void postUnloadImpl_void(long pNativeObject);
	/**
	 * 卸载后调用的函数
	 */
	public void postUnloadImpl()
	{
		postUnloadImpl_void(this.nativeObject.pointer);
	}
	native private void postUnloadImpl_void_NoVirtual(long pNativeObject);
	protected void postUnloadImpl_NoVirtual()
	{
		postUnloadImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void prepareImpl_void_callback()
	{
		prepareImpl();
	}

	native private void prepareImpl_void(long pNativeObject);
	/**
	 * 准备函数的实现
	 */
	public void prepareImpl()
	{
		prepareImpl_void(this.nativeObject.pointer);
	}
	native private void prepareImpl_void_NoVirtual(long pNativeObject);
	protected void prepareImpl_NoVirtual()
	{
		prepareImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void unprepareImpl_void_callback()
	{
		unprepareImpl();
	}

	native private void unprepareImpl_void(long pNativeObject);
	/**
	 * 准备函数的逆过程的实现
	 */
	public void unprepareImpl()
	{
		unprepareImpl_void(this.nativeObject.pointer);
	}
	native private void unprepareImpl_void_NoVirtual(long pNativeObject);
	protected void unprepareImpl_NoVirtual()
	{
		unprepareImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void loadImpl_void_callback()
	{
		loadImpl();
	}

	native private void loadImpl_void(long pNativeObject);
	/**
	 * 加载的实现
	 */
	public void loadImpl()
	{
		loadImpl_void(this.nativeObject.pointer);
	}
	native private void loadImpl_void_NoVirtual(long pNativeObject);
	protected void loadImpl_NoVirtual()
	{
		loadImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void unloadImpl_void_callback()
	{
		unloadImpl();
	}

	native private void unloadImpl_void(long pNativeObject);
	/**
	 * 卸载的实现
	 */
	public void unloadImpl()
	{
		unloadImpl_void(this.nativeObject.pointer);
	}
	native private void unloadImpl_void_NoVirtual(long pNativeObject);
	protected void unloadImpl_NoVirtual()
	{
		unloadImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long calculateSize_void_callback()
	{
		long returnValue = calculateSize();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long calculateSize_void(long pNativeObject);
	/**
	 * 计算资源所占内存的大小
	 */
	public long calculateSize()
	{
		long returnValue = calculateSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long calculateSize_void_NoVirtual(long pNativeObject);
	protected long calculateSize_NoVirtual()
	{
		long returnValue = calculateSize_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public Resource() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCResourceProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Resource".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Resource(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		BasePointer groupPtr = new BasePointer(group);
		list.add("group", groupPtr.get());
		BasePointer isManualPtr = new BasePointer(isManual);
		list.add("isManual", isManualPtr.get());
		BasePointer ref_loaderPtr = new BasePointer(ref_loader);
		list.add("ref_loader", ref_loaderPtr.get());
		Create("JCResourceProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Resource".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Resource(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group, boolean isManual) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		BasePointer groupPtr = new BasePointer(group);
		list.add("group", groupPtr.get());
		BasePointer isManualPtr = new BasePointer(isManual);
		list.add("isManual", isManualPtr.get());
		Create("JCResourceProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Resource".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Resource(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		BasePointer groupPtr = new BasePointer(group);
		list.add("group", groupPtr.get());
		Create("JCResourceProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Resource".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void prepare_ev_bool_callback(boolean backgroundThread)
	{
		boolean backgroundThreadParamValue = backgroundThread;
		prepare(backgroundThreadParamValue);
	}

	native private void prepare_ev_bool(long pNativeObject, boolean backgroundThread);
	/**
	 * 准备(读取资源文件)
	 */
	public void prepare(boolean backgroundThread)
	{
		boolean backgroundThreadParamValue = backgroundThread;
		prepare_ev_bool(this.nativeObject.pointer, backgroundThreadParamValue);
	}
	native private void prepare_ev_bool_NoVirtual(long pNativeObject, boolean backgroundThread);
	protected void prepare_NoVirtual(boolean backgroundThread)
	{
		boolean backgroundThreadParamValue = backgroundThread;
		prepare_ev_bool_NoVirtual(this.nativeObject.pointer, backgroundThreadParamValue);
	}

	protected  void prepare_void_callback()
	{
		prepare();
	}

	native private void prepare_void(long pNativeObject);
	public void prepare()
	{
		prepare_void(this.nativeObject.pointer);
	}
	native private void prepare_void_NoVirtual(long pNativeObject);
	protected void prepare_NoVirtual()
	{
		prepare_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void load_ev_bool_callback(boolean backgroundThread)
	{
		boolean backgroundThreadParamValue = backgroundThread;
		load(backgroundThreadParamValue);
	}

	native private void load_ev_bool(long pNativeObject, boolean backgroundThread);
	/**
	 * 加载
	 */
	public void load(boolean backgroundThread)
	{
		boolean backgroundThreadParamValue = backgroundThread;
		load_ev_bool(this.nativeObject.pointer, backgroundThreadParamValue);
	}
	native private void load_ev_bool_NoVirtual(long pNativeObject, boolean backgroundThread);
	protected void load_NoVirtual(boolean backgroundThread)
	{
		boolean backgroundThreadParamValue = backgroundThread;
		load_ev_bool_NoVirtual(this.nativeObject.pointer, backgroundThreadParamValue);
	}

	protected  void load_void_callback()
	{
		load();
	}

	native private void load_void(long pNativeObject);
	public void load()
	{
		load_void(this.nativeObject.pointer);
	}
	native private void load_void_NoVirtual(long pNativeObject);
	protected void load_NoVirtual()
	{
		load_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void reload_void_callback()
	{
		reload();
	}

	native private void reload_void(long pNativeObject);
	/**
	 * 重新加载
	 */
	public void reload()
	{
		reload_void(this.nativeObject.pointer);
	}
	native private void reload_void_NoVirtual(long pNativeObject);
	protected void reload_NoVirtual()
	{
		reload_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean isReloadable_void_callback()
	{
		boolean returnValue = isReloadable();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isReloadable_void(long pNativeObject);
	/**
	 * 是否可重新加载
	 */
	public boolean isReloadable()
	{
		boolean returnValue = isReloadable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isReloadable_void_NoVirtual(long pNativeObject);
	protected boolean isReloadable_NoVirtual()
	{
		boolean returnValue = isReloadable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean isManuallyLoaded_void_callback()
	{
		boolean returnValue = isManuallyLoaded();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isManuallyLoaded_void(long pNativeObject);
	/**
	 * 是否手动加载
	 */
	public boolean isManuallyLoaded()
	{
		boolean returnValue = isManuallyLoaded_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isManuallyLoaded_void_NoVirtual(long pNativeObject);
	protected boolean isManuallyLoaded_NoVirtual()
	{
		boolean returnValue = isManuallyLoaded_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void unload_void_callback()
	{
		unload();
	}

	native private void unload_void(long pNativeObject);
	/**
	 * 卸载
	 */
	public void unload()
	{
		unload_void(this.nativeObject.pointer);
	}
	native private void unload_void_NoVirtual(long pNativeObject);
	protected void unload_NoVirtual()
	{
		unload_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long getSize_void_callback()
	{
		long returnValue = getSize();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getSize_void(long pNativeObject);
	/**
	 * 获得资源大小
	 */
	public long getSize()
	{
		long returnValue = getSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSize_void_NoVirtual(long pNativeObject);
	protected long getSize_NoVirtual()
	{
		long returnValue = getSize_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void touch_void_callback()
	{
		touch();
	}

	native private void touch_void(long pNativeObject);
	/**
	 * 确保在使用
	 */
	public void touch()
	{
		touch_void(this.nativeObject.pointer);
	}
	native private void touch_void_NoVirtual(long pNativeObject);
	protected void touch_NoVirtual()
	{
		touch_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void setResFilename_EVString(long pNativeObject, String filename);
	/**
	 * 获得资源文件名
	 */
	public void setResFilename(String filename)
	{
		String filenameParamValue = filename;
		setResFilename_EVString(this.nativeObject.pointer, filenameParamValue);
	}
	native private String getResFilename_void(long pNativeObject);
	public String getResFilename()
	{
		String returnValue = getResFilename_void(this.nativeObject.pointer);
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
	 * 获得资源名
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

	protected  String getHandle_void_callback()
	{
		ULongPointer returnValue = getHandle();
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String getHandle_void(long pNativeObject);
	/**
	 * 获得资源句柄
	 */
	public ULongPointer getHandle()
	{
		String returnValue = getHandle_void(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String getHandle_void_NoVirtual(long pNativeObject);
	protected ULongPointer getHandle_NoVirtual()
	{
		String returnValue = getHandle_void_NoVirtual(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  boolean isPrepared_void_callback()
	{
		boolean returnValue = isPrepared();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isPrepared_void(long pNativeObject);
	/**
	 * 是否准备就绪
	 */
	public boolean isPrepared()
	{
		boolean returnValue = isPrepared_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isPrepared_void_NoVirtual(long pNativeObject);
	protected boolean isPrepared_NoVirtual()
	{
		boolean returnValue = isPrepared_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean isLoaded_void_callback()
	{
		boolean returnValue = isLoaded();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isLoaded_void(long pNativeObject);
	/**
	 * 是否已加载
	 */
	public boolean isLoaded()
	{
		boolean returnValue = isLoaded_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isLoaded_void_NoVirtual(long pNativeObject);
	protected boolean isLoaded_NoVirtual()
	{
		boolean returnValue = isLoaded_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean isLoading_void_callback()
	{
		boolean returnValue = isLoading();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isLoading_void(long pNativeObject);
	/**
	 * 是否正在加载
	 */
	public boolean isLoading()
	{
		boolean returnValue = isLoading_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isLoading_void_NoVirtual(long pNativeObject);
	protected boolean isLoading_NoVirtual()
	{
		boolean returnValue = isLoading_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getLoadingState_void_callback()
	{
		com.earthview.world.graphic.Resource.LoadingState returnValue = getLoadingState();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getLoadingState_void(long pNativeObject);
	/**
	 * 获得加载状态
	 */
	public com.earthview.world.graphic.Resource.LoadingState getLoadingState()
	{
		int returnValue = getLoadingState_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.Resource.LoadingState.toEnum(returnValue);
	}
	native private int getLoadingState_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Resource.LoadingState getLoadingState_NoVirtual()
	{
		int returnValue = getLoadingState_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.Resource.LoadingState.toEnum(returnValue);
	}

	protected  boolean isBackgroundLoaded_void_callback()
	{
		boolean returnValue = isBackgroundLoaded();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isBackgroundLoaded_void(long pNativeObject);
	/**
	 * 是否为后台加载
	 */
	public boolean isBackgroundLoaded()
	{
		boolean returnValue = isBackgroundLoaded_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isBackgroundLoaded_void_NoVirtual(long pNativeObject);
	protected boolean isBackgroundLoaded_NoVirtual()
	{
		boolean returnValue = isBackgroundLoaded_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setBackgroundLoaded_ev_bool_callback(boolean bl)
	{
		boolean blParamValue = bl;
		setBackgroundLoaded(blParamValue);
	}

	native private void setBackgroundLoaded_ev_bool(long pNativeObject, boolean bl);
	/**
	 * 设置为后台加载
	 */
	public void setBackgroundLoaded(boolean bl)
	{
		boolean blParamValue = bl;
		setBackgroundLoaded_ev_bool(this.nativeObject.pointer, blParamValue);
	}
	native private void setBackgroundLoaded_ev_bool_NoVirtual(long pNativeObject, boolean bl);
	protected void setBackgroundLoaded_NoVirtual(boolean bl)
	{
		boolean blParamValue = bl;
		setBackgroundLoaded_ev_bool_NoVirtual(this.nativeObject.pointer, blParamValue);
	}

	protected  void escalateLoading_void_callback()
	{
		escalateLoading();
	}

	native private void escalateLoading_void(long pNativeObject);
	public void escalateLoading()
	{
		escalateLoading_void(this.nativeObject.pointer);
	}
	native private void escalateLoading_void_NoVirtual(long pNativeObject);
	protected void escalateLoading_NoVirtual()
	{
		escalateLoading_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void addListener_CResourceListener_callback(long ref_lis)
	{
		com.earthview.world.graphic.Resource.ResourceListener ref_lisParamValue = (ref_lis == 0L ? null : new com.earthview.world.graphic.Resource.ResourceListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_lisParamValue != null)
		{
		ref_lisParamValue.setDelegate(true);
		ref_lisParamValue.setInstancePointer(new InstancePointer(ref_lis));
		IClassFactory ref_lisParamValueClassFactory = GlobalClassFactoryMap.get(ref_lisParamValue.getCppInstanceTypeName());
		if (ref_lisParamValueClassFactory != null)
		{
			ref_lisParamValue.setDelegate(true);
			ref_lisParamValue = (com.earthview.world.graphic.Resource.ResourceListener)ref_lisParamValueClassFactory.create();
			ref_lisParamValue.setDelegate(true);
			ref_lisParamValue.setInstancePointer(new InstancePointer(ref_lis));
		}
		}
		addListener(ref_lisParamValue);
	}

	native private void addListener_CResourceListener(long pNativeObject, long ref_lis);
	/**
	 * 添加监听
	 */
	public void addListener(com.earthview.world.graphic.Resource.ResourceListener ref_lis)
	{
		long ref_lisParamValue = (ref_lis == null ? 0L : ref_lis.nativeObject.pointer);
		addListener_CResourceListener(this.nativeObject.pointer, ref_lisParamValue);
	}
	native private void addListener_CResourceListener_NoVirtual(long pNativeObject, long ref_lis);
	protected void addListener_NoVirtual(com.earthview.world.graphic.Resource.ResourceListener ref_lis)
	{
		long ref_lisParamValue = (ref_lis == null ? 0L : ref_lis.nativeObject.pointer);
		addListener_CResourceListener_NoVirtual(this.nativeObject.pointer, ref_lisParamValue);
	}

	protected  void removeListener_CResourceListener_callback(long lis)
	{
		com.earthview.world.graphic.Resource.ResourceListener lisParamValue = (lis == 0L ? null : new com.earthview.world.graphic.Resource.ResourceListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(lisParamValue != null)
		{
		lisParamValue.setDelegate(true);
		lisParamValue.setInstancePointer(new InstancePointer(lis));
		IClassFactory lisParamValueClassFactory = GlobalClassFactoryMap.get(lisParamValue.getCppInstanceTypeName());
		if (lisParamValueClassFactory != null)
		{
			lisParamValue.setDelegate(true);
			lisParamValue = (com.earthview.world.graphic.Resource.ResourceListener)lisParamValueClassFactory.create();
			lisParamValue.setDelegate(true);
			lisParamValue.setInstancePointer(new InstancePointer(lis));
		}
		}
		removeListener(lisParamValue);
	}

	native private void removeListener_CResourceListener(long pNativeObject, long lis);
	/**
	 * 移除监听
	 */
	public void removeListener(com.earthview.world.graphic.Resource.ResourceListener lis)
	{
		long lisParamValue = (lis == null ? 0L : lis.nativeObject.pointer);
		removeListener_CResourceListener(this.nativeObject.pointer, lisParamValue);
	}
	native private void removeListener_CResourceListener_NoVirtual(long pNativeObject, long lis);
	protected void removeListener_NoVirtual(com.earthview.world.graphic.Resource.ResourceListener lis)
	{
		long lisParamValue = (lis == null ? 0L : lis.nativeObject.pointer);
		removeListener_CResourceListener_NoVirtual(this.nativeObject.pointer, lisParamValue);
	}

	protected  String getGroup_void_callback()
	{
		String returnValue = getGroup();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getGroup_void(long pNativeObject);
	/**
	 * 获得组名
	 */
	public String getGroup()
	{
		String returnValue = getGroup_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getGroup_void_NoVirtual(long pNativeObject);
	protected String getGroup_NoVirtual()
	{
		String returnValue = getGroup_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void changeGroupOwnership_EVString_callback(String newGroup)
	{
		String newGroupParamValue = newGroup;
		changeGroupOwnership(newGroupParamValue);
	}

	native private void changeGroupOwnership_EVString(long pNativeObject, String newGroup);
	/**
	 * 更换资源组
	 */
	public void changeGroupOwnership(String newGroup)
	{
		String newGroupParamValue = newGroup;
		changeGroupOwnership_EVString(this.nativeObject.pointer, newGroupParamValue);
	}
	native private void changeGroupOwnership_EVString_NoVirtual(long pNativeObject, String newGroup);
	protected void changeGroupOwnership_NoVirtual(String newGroup)
	{
		String newGroupParamValue = newGroup;
		changeGroupOwnership_EVString_NoVirtual(this.nativeObject.pointer, newGroupParamValue);
	}

	protected  long getCreator_void_callback()
	{
		com.earthview.world.graphic.ResourceManager returnValue = getCreator();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCreator_void(long pNativeObject);
	/**
	 * 获得创建者(资源管理器)
	 */
	public com.earthview.world.graphic.ResourceManager getCreator()
	{
		long returnValue = getCreator_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ResourceManager __returnValue = new com.earthview.world.graphic.ResourceManager(CreatedWhenConstruct.CWC_NotToCreate, "CResourceManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CResourceManager");
		}
		return __returnValue;
	}
	native private long getCreator_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ResourceManager getCreator_NoVirtual()
	{
		long returnValue = getCreator_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ResourceManager __returnValue = new com.earthview.world.graphic.ResourceManager(CreatedWhenConstruct.CWC_NotToCreate, "CResourceManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CResourceManager");
		}
		return __returnValue;
	}

	protected  String getOrigin_void_callback()
	{
		String returnValue = getOrigin();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getOrigin_void(long pNativeObject);
	public String getOrigin()
	{
		String returnValue = getOrigin_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getOrigin_void_NoVirtual(long pNativeObject);
	protected String getOrigin_NoVirtual()
	{
		String returnValue = getOrigin_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void _notifyOrigin_EVString_callback(String origin)
	{
		String originParamValue = origin;
		_notifyOrigin(originParamValue);
	}

	native private void _notifyOrigin_EVString(long pNativeObject, String origin);
	//// Notify this resource of it's origin
	public void _notifyOrigin(String origin)
	{
		String originParamValue = origin;
		_notifyOrigin_EVString(this.nativeObject.pointer, originParamValue);
	}
	native private void _notifyOrigin_EVString_NoVirtual(long pNativeObject, String origin);
	protected void _notifyOrigin_NoVirtual(String origin)
	{
		String originParamValue = origin;
		_notifyOrigin_EVString_NoVirtual(this.nativeObject.pointer, originParamValue);
	}

	protected  long getStateCount_void_callback()
	{
		long returnValue = getStateCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getStateCount_void(long pNativeObject);
	public long getStateCount()
	{
		long returnValue = getStateCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getStateCount_void_NoVirtual(long pNativeObject);
	protected long getStateCount_NoVirtual()
	{
		long returnValue = getStateCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void _dirtyState_void_callback()
	{
		_dirtyState();
	}

	native private void _dirtyState_void(long pNativeObject);
	/**
	 * 将状态置为脏
	 */
	public void _dirtyState()
	{
		_dirtyState_void(this.nativeObject.pointer);
	}
	native private void _dirtyState_void_NoVirtual(long pNativeObject);
	protected void _dirtyState_NoVirtual()
	{
		_dirtyState_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _fireLoadingComplete_ev_bool_callback(boolean wasBackgroundLoaded)
	{
		boolean wasBackgroundLoadedParamValue = wasBackgroundLoaded;
		_fireLoadingComplete(wasBackgroundLoadedParamValue);
	}

	native private void _fireLoadingComplete_ev_bool(long pNativeObject, boolean wasBackgroundLoaded);
	/**
	 * 告知监听者加载完成
	 */
	public void _fireLoadingComplete(boolean wasBackgroundLoaded)
	{
		boolean wasBackgroundLoadedParamValue = wasBackgroundLoaded;
		_fireLoadingComplete_ev_bool(this.nativeObject.pointer, wasBackgroundLoadedParamValue);
	}
	native private void _fireLoadingComplete_ev_bool_NoVirtual(long pNativeObject, boolean wasBackgroundLoaded);
	protected void _fireLoadingComplete_NoVirtual(boolean wasBackgroundLoaded)
	{
		boolean wasBackgroundLoadedParamValue = wasBackgroundLoaded;
		_fireLoadingComplete_ev_bool_NoVirtual(this.nativeObject.pointer, wasBackgroundLoadedParamValue);
	}

	protected  void _firePreparingComplete_ev_bool_callback(boolean wasBackgroundLoaded)
	{
		boolean wasBackgroundLoadedParamValue = wasBackgroundLoaded;
		_firePreparingComplete(wasBackgroundLoadedParamValue);
	}

	native private void _firePreparingComplete_ev_bool(long pNativeObject, boolean wasBackgroundLoaded);
	/**
	 * 告知监听者准备就绪
	 */
	public void _firePreparingComplete(boolean wasBackgroundLoaded)
	{
		boolean wasBackgroundLoadedParamValue = wasBackgroundLoaded;
		_firePreparingComplete_ev_bool(this.nativeObject.pointer, wasBackgroundLoadedParamValue);
	}
	native private void _firePreparingComplete_ev_bool_NoVirtual(long pNativeObject, boolean wasBackgroundLoaded);
	protected void _firePreparingComplete_NoVirtual(boolean wasBackgroundLoaded)
	{
		boolean wasBackgroundLoadedParamValue = wasBackgroundLoaded;
		_firePreparingComplete_ev_bool_NoVirtual(this.nativeObject.pointer, wasBackgroundLoadedParamValue);
	}

	protected  void _fireUnloadingComplete_void_callback()
	{
		_fireUnloadingComplete();
	}

	native private void _fireUnloadingComplete_void(long pNativeObject);
	/**
	 * 告知监听者卸载完成
	 */
	public void _fireUnloadingComplete()
	{
		_fireUnloadingComplete_void(this.nativeObject.pointer);
	}
	native private void _fireUnloadingComplete_void_NoVirtual(long pNativeObject);
	protected void _fireUnloadingComplete_NoVirtual()
	{
		_fireUnloadingComplete_void_NoVirtual(this.nativeObject.pointer);
	}

	public Resource(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Resource(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public boolean setParameter(String name, String value)
	{
		return super.setParameter_NoVirtual(name, value);
	}
	public boolean setParameter(String name, boolean readOnly, boolean enable)
	{
		return super.setParameter_NoVirtual(name, readOnly, enable);
	}
	public void setParameterList(com.earthview.world.core.CommonStringPairList paramList)
	{
		super.setParameterList_NoVirtual(paramList);
	}
	public String getParameter(String name)
	{
		return super.getParameter_NoVirtual(name);
	}
	public void copyParametersTo(com.earthview.world.core.StringInterface dest)
	{
		super.copyParametersTo_NoVirtual(dest);
	}
	
	native protected void register_preLoadImpl_void(long pNativeObject, String method);
	native protected void register_postLoadImpl_void(long pNativeObject, String method);
	native protected void register_preUnloadImpl_void(long pNativeObject, String method);
	native protected void register_postUnloadImpl_void(long pNativeObject, String method);
	native protected void register_prepareImpl_void(long pNativeObject, String method);
	native protected void register_unprepareImpl_void(long pNativeObject, String method);
	native protected void register_loadImpl_void(long pNativeObject, String method);
	native protected void register_unloadImpl_void(long pNativeObject, String method);
	native protected void register_calculateSize_void(long pNativeObject, String method);
	native protected void register_prepare_ev_bool(long pNativeObject, String method);
	native protected void register_prepare_void(long pNativeObject, String method);
	native protected void register_load_ev_bool(long pNativeObject, String method);
	native protected void register_load_void(long pNativeObject, String method);
	native protected void register_reload_void(long pNativeObject, String method);
	native protected void register_isReloadable_void(long pNativeObject, String method);
	native protected void register_isManuallyLoaded_void(long pNativeObject, String method);
	native protected void register_unload_void(long pNativeObject, String method);
	native protected void register_getSize_void(long pNativeObject, String method);
	native protected void register_touch_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getHandle_void(long pNativeObject, String method);
	native protected void register_isPrepared_void(long pNativeObject, String method);
	native protected void register_isLoaded_void(long pNativeObject, String method);
	native protected void register_isLoading_void(long pNativeObject, String method);
	native protected void register_getLoadingState_void(long pNativeObject, String method);
	native protected void register_isBackgroundLoaded_void(long pNativeObject, String method);
	native protected void register_setBackgroundLoaded_ev_bool(long pNativeObject, String method);
	native protected void register_escalateLoading_void(long pNativeObject, String method);
	native protected void register_addListener_CResourceListener(long pNativeObject, String method);
	native protected void register_removeListener_CResourceListener(long pNativeObject, String method);
	native protected void register_getGroup_void(long pNativeObject, String method);
	native protected void register_changeGroupOwnership_EVString(long pNativeObject, String method);
	native protected void register_getCreator_void(long pNativeObject, String method);
	native protected void register_getOrigin_void(long pNativeObject, String method);
	native protected void register__notifyOrigin_EVString(long pNativeObject, String method);
	native protected void register_getStateCount_void(long pNativeObject, String method);
	native protected void register__dirtyState_void(long pNativeObject, String method);
	native protected void register__fireLoadingComplete_ev_bool(long pNativeObject, String method);
	native protected void register__firePreparingComplete_ev_bool(long pNativeObject, String method);
	native protected void register__fireUnloadingComplete_void(long pNativeObject, String method);
	native protected void register_setParameter_EVString_EVString(long pNativeObject, String method);
	native protected void register_setParameter_EVString_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_setParameterList_CommonStringPairList(long pNativeObject, String method);
	native protected void register_getParameter_EVString(long pNativeObject, String method);
	native protected void register_copyParametersTo_CStringInterface(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_preLoadImpl_void(this.nativeObject.pointer, "preLoadImpl_void_callback");
			this.register_postLoadImpl_void(this.nativeObject.pointer, "postLoadImpl_void_callback");
			this.register_preUnloadImpl_void(this.nativeObject.pointer, "preUnloadImpl_void_callback");
			this.register_postUnloadImpl_void(this.nativeObject.pointer, "postUnloadImpl_void_callback");
			this.register_prepareImpl_void(this.nativeObject.pointer, "prepareImpl_void_callback");
			this.register_unprepareImpl_void(this.nativeObject.pointer, "unprepareImpl_void_callback");
			this.register_loadImpl_void(this.nativeObject.pointer, "loadImpl_void_callback");
			this.register_unloadImpl_void(this.nativeObject.pointer, "unloadImpl_void_callback");
			this.register_calculateSize_void(this.nativeObject.pointer, "calculateSize_void_callback");
			this.register_prepare_ev_bool(this.nativeObject.pointer, "prepare_ev_bool_callback");
			this.register_prepare_void(this.nativeObject.pointer, "prepare_void_callback");
			this.register_load_ev_bool(this.nativeObject.pointer, "load_ev_bool_callback");
			this.register_load_void(this.nativeObject.pointer, "load_void_callback");
			this.register_reload_void(this.nativeObject.pointer, "reload_void_callback");
			this.register_isReloadable_void(this.nativeObject.pointer, "isReloadable_void_callback");
			this.register_isManuallyLoaded_void(this.nativeObject.pointer, "isManuallyLoaded_void_callback");
			this.register_unload_void(this.nativeObject.pointer, "unload_void_callback");
			this.register_getSize_void(this.nativeObject.pointer, "getSize_void_callback");
			this.register_touch_void(this.nativeObject.pointer, "touch_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getHandle_void(this.nativeObject.pointer, "getHandle_void_callback");
			this.register_isPrepared_void(this.nativeObject.pointer, "isPrepared_void_callback");
			this.register_isLoaded_void(this.nativeObject.pointer, "isLoaded_void_callback");
			this.register_isLoading_void(this.nativeObject.pointer, "isLoading_void_callback");
			this.register_getLoadingState_void(this.nativeObject.pointer, "getLoadingState_void_callback");
			this.register_isBackgroundLoaded_void(this.nativeObject.pointer, "isBackgroundLoaded_void_callback");
			this.register_setBackgroundLoaded_ev_bool(this.nativeObject.pointer, "setBackgroundLoaded_ev_bool_callback");
			this.register_escalateLoading_void(this.nativeObject.pointer, "escalateLoading_void_callback");
			this.register_addListener_CResourceListener(this.nativeObject.pointer, "addListener_CResourceListener_callback");
			this.register_removeListener_CResourceListener(this.nativeObject.pointer, "removeListener_CResourceListener_callback");
			this.register_getGroup_void(this.nativeObject.pointer, "getGroup_void_callback");
			this.register_changeGroupOwnership_EVString(this.nativeObject.pointer, "changeGroupOwnership_EVString_callback");
			this.register_getCreator_void(this.nativeObject.pointer, "getCreator_void_callback");
			this.register_getOrigin_void(this.nativeObject.pointer, "getOrigin_void_callback");
			this.register__notifyOrigin_EVString(this.nativeObject.pointer, "_notifyOrigin_EVString_callback");
			this.register_getStateCount_void(this.nativeObject.pointer, "getStateCount_void_callback");
			this.register__dirtyState_void(this.nativeObject.pointer, "_dirtyState_void_callback");
			this.register__fireLoadingComplete_ev_bool(this.nativeObject.pointer, "_fireLoadingComplete_ev_bool_callback");
			this.register__firePreparingComplete_ev_bool(this.nativeObject.pointer, "_firePreparingComplete_ev_bool_callback");
			this.register__fireUnloadingComplete_void(this.nativeObject.pointer, "_fireUnloadingComplete_void_callback");
			this.register_setParameter_EVString_EVString(this.nativeObject.pointer, "setParameter_EVString_EVString_callback");
			this.register_setParameter_EVString_ev_bool_ev_bool(this.nativeObject.pointer, "setParameter_EVString_ev_bool_ev_bool_callback");
			this.register_setParameterList_CommonStringPairList(this.nativeObject.pointer, "setParameterList_CommonStringPairList_callback");
			this.register_getParameter_EVString(this.nativeObject.pointer, "getParameter_EVString_callback");
			this.register_copyParametersTo_CStringInterface(this.nativeObject.pointer, "copyParametersTo_CStringInterface_callback");
		}
	}
	
	public static Resource fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Resource obj = null;
 		if(baseObj instanceof Resource)
		{
			obj = (Resource)baseObj;
		} else {
			obj = new Resource(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CResource");
			obj.increaseCast();
		}

		return obj;
	}
}
