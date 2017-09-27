package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SkeletonManager extends com.earthview.world.graphic.ResourceManager {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CSkeletonManager", new SkeletonManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCSkeletonManagerProxy", new SkeletonManagerClassFactory());
	}

	//// Constructor
	public SkeletonManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSkeletonManagerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.SkeletonManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private static long getSingleton_void();
	public static com.earthview.world.graphic.SkeletonManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.SkeletonManager __returnValue = new com.earthview.world.graphic.SkeletonManager(CreatedWhenConstruct.CWC_NotToCreate, "CSkeletonManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SkeletonManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSkeletonManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.graphic.SkeletonManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SkeletonManager __returnValue = new com.earthview.world.graphic.SkeletonManager(CreatedWhenConstruct.CWC_NotToCreate, "CSkeletonManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SkeletonManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSkeletonManager");
		}
		return __returnValue;
	}
	native private long createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String name, long handle, String group, boolean isManual, long ref_loader, long createParams);
	//// @copydoc CResourceManager::createImpl
	public com.earthview.world.graphic.Resource createImpl(String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		String nameParamValue = name;
		long handleParamValue = handle.nativeObject.pointer;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		long returnValue = createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, nameParamValue, handleParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Resource __returnValue = new com.earthview.world.graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate, "CResource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Resource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CResource");
		}
		return __returnValue;
	}
	native private long createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(long pNativeObject, String name, long handle, String group, boolean isManual, long ref_loader, long createParams);
	protected com.earthview.world.graphic.Resource createImpl_NoVirtual(String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		String nameParamValue = name;
		long handleParamValue = handle.nativeObject.pointer;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		long returnValue = createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.nativeObject.pointer, nameParamValue, handleParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Resource __returnValue = new com.earthview.world.graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate, "CResource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Resource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CResource");
		}
		return __returnValue;
	}

	public SkeletonManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SkeletonManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 创建(但不加载)资源，若存在则直接返回
	 */
	public com.earthview.world.graphic.ResourcePtr create(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		return super.create_NoVirtual(name, group, isManual, ref_loader, createParams);
	}
	public com.earthview.world.graphic.ResourcePtr create(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		return super.create_NoVirtual(name, group, isManual, ref_loader);
	}
	public com.earthview.world.graphic.ResourcePtr create(String name, String group, boolean isManual)
	{
		return super.create_NoVirtual(name, group, isManual);
	}
	public com.earthview.world.graphic.ResourcePtr create(String name, String group)
	{
		return super.create_NoVirtual(name, group);
	}
	/**
	 * 只创建(不加载)资源，不考虑同名的资源是否已经存在，创建后也不再管理该资源
	 */
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		return super.createUnmanaged_NoVirtual(name, isManual, ref_loader, createParams);
	}
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		return super.createUnmanaged_NoVirtual(name, isManual, ref_loader);
	}
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual)
	{
		return super.createUnmanaged_NoVirtual(name, isManual);
	}
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name)
	{
		return super.createUnmanaged_NoVirtual(name);
	}
	/**
	 * 创建或获取资源
	 */
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		return super.createOrRetrieve_NoVirtual(name, group, isManual, ref_loader, createParams);
	}
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		return super.createOrRetrieve_NoVirtual(name, group, isManual, ref_loader);
	}
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual)
	{
		return super.createOrRetrieve_NoVirtual(name, group, isManual);
	}
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group)
	{
		return super.createOrRetrieve_NoVirtual(name, group);
	}
	/**
	 * 设置内存总容量
	 */
	public void setMemoryBudget(long bytes)
	{
		super.setMemoryBudget_NoVirtual(bytes);
	}
	/**
	 * 获取内存总容量
	 */
	public long getMemoryBudget()
	{
		return super.getMemoryBudget_NoVirtual();
	}
	/**
	 * 获取已经占用的内存容量
	 */
	public long getMemoryUsage()
	{
		return super.getMemoryUsage_NoVirtual();
	}
	/**
	 * 卸载资源
	 */
	public void unload(String name)
	{
		super.unload_NoVirtual(name);
	}
	public void unload(ULongPointer handle)
	{
		super.unload_NoVirtual(handle);
	}
	/**
	 * 卸载所有资源
	 * @param reloadableOnly 传递true，则只卸载可以重新加载的资源
	 */
	public void unloadAll(boolean reloadableOnly)
	{
		super.unloadAll_NoVirtual(reloadableOnly);
	}
	public void unloadAll()
	{
		super.unloadAll_NoVirtual();
	}
	/**
	 * 重新加载所有资源
	 */
	public void reloadAll(boolean reloadableOnly)
	{
		super.reloadAll_NoVirtual(reloadableOnly);
	}
	public void reloadAll()
	{
		super.reloadAll_NoVirtual();
	}
	/**
	 * 卸载所有未被引用的资源
	 * @param reloadableOnly 传递true，则只卸载可以重新加载的资源
	 */
	public void unloadUnreferencedResources(boolean reloadableOnly)
	{
		super.unloadUnreferencedResources_NoVirtual(reloadableOnly);
	}
	public void unloadUnreferencedResources()
	{
		super.unloadUnreferencedResources_NoVirtual();
	}
	/**
	 * 重新加载所有未被引用的资源
	 * @param reloadableOnly 
	 */
	public void reloadUnreferencedResources(boolean reloadableOnly)
	{
		super.reloadUnreferencedResources_NoVirtual(reloadableOnly);
	}
	public void reloadUnreferencedResources()
	{
		super.reloadUnreferencedResources_NoVirtual();
	}
	/**
	 * 移除资源如果资源没有其它引用，则会引起资源的析构;如果还有其它引用，则只从管理器中移除，直到所有引用都释放才会导致资源的析构
	 * @param reloadableOnly 
	 */
	public void remove(com.earthview.world.graphic.ResourcePtr r)
	{
		super.remove_NoVirtual(r);
	}
	public void remove(String name)
	{
		super.remove_NoVirtual(name);
	}
	public void remove(ULongPointer handle)
	{
		super.remove_NoVirtual(handle);
	}
	public void remove(String name, String groupname)
	{
		super.remove_NoVirtual(name, groupname);
	}
	/**
	 * 移除所有资源如果资源没有其它引用，则会引起资源的析构;如果还有其它引用，则只从管理器中移除，直到所有引用都释放才会导致资源的析构
	 * @param reloadableOnly 
	 */
	public void removeAll()
	{
		super.removeAll_NoVirtual();
	}
	/**
	 * 移除所有未被引用的资源				
	 * @param reloadableOnly 传递true，则只卸载可以重新加载的资源
	 */
	public void removeUnreferencedResources(boolean reloadableOnly)
	{
		super.removeUnreferencedResources_NoVirtual(reloadableOnly);
	}
	public void removeUnreferencedResources()
	{
		super.removeUnreferencedResources_NoVirtual();
	}
	public void removeUnreferencedResource(String name)
	{
		super.removeUnreferencedResource_NoVirtual(name);
	}
	public void removeUnreferencedResource(String name, String groupName)
	{
		super.removeUnreferencedResource_NoVirtual(name, groupName);
	}
	/**
	 * 卸载所有未被引用的资源				
	 * @param  
	 */
	public void unloadUnreferencedResource(String name, String groupName)
	{
		super.unloadUnreferencedResource_NoVirtual(name, groupName);
	}
	public void unloadUnreferencedResource(String name, String groupName, int useCount)
	{
		super.unloadUnreferencedResource_NoVirtual(name, groupName, useCount);
	}
	/**
	 * 获取资源				
	 * @param  
	 */
	public com.earthview.world.graphic.ResourcePtr getByName(String name, String groupName)
	{
		return super.getByName_NoVirtual(name, groupName);
	}
	public com.earthview.world.graphic.ResourcePtr getByName(String name)
	{
		return super.getByName_NoVirtual(name);
	}
	public com.earthview.world.graphic.ResourcePtr getByHandle(ULongPointer handle)
	{
		return super.getByHandle_NoVirtual(handle);
	}
	/**
	 * 判断资源是否存在于资源管理器中				
	 * @param  
	 */
	public boolean resourceExists(String name)
	{
		return super.resourceExists_NoVirtual(name);
	}
	public boolean resourceExists(ULongPointer handle)
	{
		return super.resourceExists_NoVirtual(handle);
	}
	/**
	 * 通知资源被开始使用				
	 * @param  
	 */
	public void _notifyResourceTouched(com.earthview.world.graphic.Resource res)
	{
		super._notifyResourceTouched_NoVirtual(res);
	}
	/**
	 * 通知资源被加载完成			
	 * @param  
	 */
	public void _notifyResourceLoaded(com.earthview.world.graphic.Resource res)
	{
		super._notifyResourceLoaded_NoVirtual(res);
	}
	/**
	 * 通知资源被卸载完成			
	 * @param  
	 */
	public void _notifyResourceUnloaded(com.earthview.world.graphic.Resource res)
	{
		super._notifyResourceUnloaded_NoVirtual(res);
	}
	/**
	 * 准备资源			
	 * @param  
	 */
	public com.earthview.world.graphic.ResourcePtr prepare(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams, boolean backgroundThread)
	{
		return super.prepare_NoVirtual(name, group, isManual, ref_loader, loadParams, backgroundThread);
	}
	public com.earthview.world.graphic.ResourcePtr prepare(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams)
	{
		return super.prepare_NoVirtual(name, group, isManual, ref_loader, loadParams);
	}
	public com.earthview.world.graphic.ResourcePtr prepare(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		return super.prepare_NoVirtual(name, group, isManual, ref_loader);
	}
	public com.earthview.world.graphic.ResourcePtr prepare(String name, String group, boolean isManual)
	{
		return super.prepare_NoVirtual(name, group, isManual);
	}
	/**
	 * 加载资源			
	 * @param  
	 */
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams, boolean backgroundThread)
	{
		return super.load_NoVirtual(name, group, isManual, ref_loader, loadParams, backgroundThread);
	}
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams)
	{
		return super.load_NoVirtual(name, group, isManual, ref_loader, loadParams);
	}
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		return super.load_NoVirtual(name, group, isManual, ref_loader);
	}
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, boolean isManual)
	{
		return super.load_NoVirtual(name, group, isManual);
	}
	public com.earthview.world.graphic.ResourcePtr load(String name, String group)
	{
		return super.load_NoVirtual(name, group);
	}
	public void setVerbose(boolean v)
	{
		super.setVerbose_NoVirtual(v);
	}
	public boolean getVerbose()
	{
		return super.getVerbose_NoVirtual();
	}
	public void addImpl(com.earthview.world.graphic.ResourcePtr res)
	{
		super.addImpl_NoVirtual(res);
	}
	public void removeImpl(com.earthview.world.graphic.ResourcePtr res)
	{
		super.removeImpl_NoVirtual(res);
	}
	public void checkUsage()
	{
		super.checkUsage_NoVirtual();
	}
	public com.earthview.world.core.StringVector getScriptPatterns()
	{
		return super.getScriptPatterns_NoVirtual();
	}
	public void parseScript(com.earthview.world.core.DataStreamPtr stream, String groupName)
	{
		super.parseScript_NoVirtual(stream, groupName);
	}
	public double getLoadingOrder()
	{
		return super.getLoadingOrder_NoVirtual();
	}
	
	native protected void register_create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String method);
	native protected void register_create_EVString_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String method);
	native protected void register_create_EVString_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_create_EVString_EVString(long pNativeObject, String method);
	native protected void register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String method);
	native protected void register_createUnmanaged_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String method);
	native protected void register_createUnmanaged_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_createUnmanaged_EVString(long pNativeObject, String method);
	native protected void register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String method);
	native protected void register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String method);
	native protected void register_createOrRetrieve_EVString_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_createOrRetrieve_EVString_EVString(long pNativeObject, String method);
	native protected void register_setMemoryBudget_ev_size_t(long pNativeObject, String method);
	native protected void register_getMemoryBudget_void(long pNativeObject, String method);
	native protected void register_getMemoryUsage_void(long pNativeObject, String method);
	native protected void register_unload_EVString(long pNativeObject, String method);
	native protected void register_unload_ev_uint64(long pNativeObject, String method);
	native protected void register_unloadAll_ev_bool(long pNativeObject, String method);
	native protected void register_unloadAll_void(long pNativeObject, String method);
	native protected void register_reloadAll_ev_bool(long pNativeObject, String method);
	native protected void register_reloadAll_void(long pNativeObject, String method);
	native protected void register_unloadUnreferencedResources_ev_bool(long pNativeObject, String method);
	native protected void register_unloadUnreferencedResources_void(long pNativeObject, String method);
	native protected void register_reloadUnreferencedResources_ev_bool(long pNativeObject, String method);
	native protected void register_reloadUnreferencedResources_void(long pNativeObject, String method);
	native protected void register_remove_ResourcePtr(long pNativeObject, String method);
	native protected void register_remove_EVString(long pNativeObject, String method);
	native protected void register_remove_ev_uint64(long pNativeObject, String method);
	native protected void register_remove_EVString_EVString(long pNativeObject, String method);
	native protected void register_removeAll_void(long pNativeObject, String method);
	native protected void register_removeUnreferencedResources_ev_bool(long pNativeObject, String method);
	native protected void register_removeUnreferencedResources_void(long pNativeObject, String method);
	native protected void register_removeUnreferencedResource_EVString(long pNativeObject, String method);
	native protected void register_removeUnreferencedResource_EVString_EVString(long pNativeObject, String method);
	native protected void register_unloadUnreferencedResource_EVString_EVString(long pNativeObject, String method);
	native protected void register_unloadUnreferencedResource_EVString_EVString_ev_uint16(long pNativeObject, String method);
	native protected void register_getByName_EVString_EVString(long pNativeObject, String method);
	native protected void register_getByName_EVString(long pNativeObject, String method);
	native protected void register_getByHandle_ev_uint64(long pNativeObject, String method);
	native protected void register_resourceExists_EVString(long pNativeObject, String method);
	native protected void register_resourceExists_ev_uint64(long pNativeObject, String method);
	native protected void register__notifyResourceTouched_CResource(long pNativeObject, String method);
	native protected void register__notifyResourceLoaded_CResource(long pNativeObject, String method);
	native protected void register__notifyResourceUnloaded_CResource(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_load_EVString_EVString(long pNativeObject, String method);
	native protected void register_setVerbose_ev_bool(long pNativeObject, String method);
	native protected void register_getVerbose_void(long pNativeObject, String method);
	native protected void register_createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String method);
	native protected void register_addImpl_ResourcePtr(long pNativeObject, String method);
	native protected void register_removeImpl_ResourcePtr(long pNativeObject, String method);
	native protected void register_checkUsage_void(long pNativeObject, String method);
	native protected void register_getScriptPatterns_void(long pNativeObject, String method);
	native protected void register_parseScript_DataStreamPtr_EVString(long pNativeObject, String method);
	native protected void register_getLoadingOrder_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, "create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
			this.register_create_EVString_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, "create_EVString_EVString_ev_bool_CManualResourceLoader_callback");
			this.register_create_EVString_EVString_ev_bool(this.nativeObject.pointer, "create_EVString_EVString_ev_bool_callback");
			this.register_create_EVString_EVString(this.nativeObject.pointer, "create_EVString_EVString_callback");
			this.register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, "createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
			this.register_createUnmanaged_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, "createUnmanaged_EVString_ev_bool_CManualResourceLoader_callback");
			this.register_createUnmanaged_EVString_ev_bool(this.nativeObject.pointer, "createUnmanaged_EVString_ev_bool_callback");
			this.register_createUnmanaged_EVString(this.nativeObject.pointer, "createUnmanaged_EVString_callback");
			this.register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, "createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
			this.register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, "createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_callback");
			this.register_createOrRetrieve_EVString_EVString_ev_bool(this.nativeObject.pointer, "createOrRetrieve_EVString_EVString_ev_bool_callback");
			this.register_createOrRetrieve_EVString_EVString(this.nativeObject.pointer, "createOrRetrieve_EVString_EVString_callback");
			this.register_setMemoryBudget_ev_size_t(this.nativeObject.pointer, "setMemoryBudget_ev_size_t_callback");
			this.register_getMemoryBudget_void(this.nativeObject.pointer, "getMemoryBudget_void_callback");
			this.register_getMemoryUsage_void(this.nativeObject.pointer, "getMemoryUsage_void_callback");
			this.register_unload_EVString(this.nativeObject.pointer, "unload_EVString_callback");
			this.register_unload_ev_uint64(this.nativeObject.pointer, "unload_ev_uint64_callback");
			this.register_unloadAll_ev_bool(this.nativeObject.pointer, "unloadAll_ev_bool_callback");
			this.register_unloadAll_void(this.nativeObject.pointer, "unloadAll_void_callback");
			this.register_reloadAll_ev_bool(this.nativeObject.pointer, "reloadAll_ev_bool_callback");
			this.register_reloadAll_void(this.nativeObject.pointer, "reloadAll_void_callback");
			this.register_unloadUnreferencedResources_ev_bool(this.nativeObject.pointer, "unloadUnreferencedResources_ev_bool_callback");
			this.register_unloadUnreferencedResources_void(this.nativeObject.pointer, "unloadUnreferencedResources_void_callback");
			this.register_reloadUnreferencedResources_ev_bool(this.nativeObject.pointer, "reloadUnreferencedResources_ev_bool_callback");
			this.register_reloadUnreferencedResources_void(this.nativeObject.pointer, "reloadUnreferencedResources_void_callback");
			this.register_remove_ResourcePtr(this.nativeObject.pointer, "remove_ResourcePtr_callback");
			this.register_remove_EVString(this.nativeObject.pointer, "remove_EVString_callback");
			this.register_remove_ev_uint64(this.nativeObject.pointer, "remove_ev_uint64_callback");
			this.register_remove_EVString_EVString(this.nativeObject.pointer, "remove_EVString_EVString_callback");
			this.register_removeAll_void(this.nativeObject.pointer, "removeAll_void_callback");
			this.register_removeUnreferencedResources_ev_bool(this.nativeObject.pointer, "removeUnreferencedResources_ev_bool_callback");
			this.register_removeUnreferencedResources_void(this.nativeObject.pointer, "removeUnreferencedResources_void_callback");
			this.register_removeUnreferencedResource_EVString(this.nativeObject.pointer, "removeUnreferencedResource_EVString_callback");
			this.register_removeUnreferencedResource_EVString_EVString(this.nativeObject.pointer, "removeUnreferencedResource_EVString_EVString_callback");
			this.register_unloadUnreferencedResource_EVString_EVString(this.nativeObject.pointer, "unloadUnreferencedResource_EVString_EVString_callback");
			this.register_unloadUnreferencedResource_EVString_EVString_ev_uint16(this.nativeObject.pointer, "unloadUnreferencedResource_EVString_EVString_ev_uint16_callback");
			this.register_getByName_EVString_EVString(this.nativeObject.pointer, "getByName_EVString_EVString_callback");
			this.register_getByName_EVString(this.nativeObject.pointer, "getByName_EVString_callback");
			this.register_getByHandle_ev_uint64(this.nativeObject.pointer, "getByHandle_ev_uint64_callback");
			this.register_resourceExists_EVString(this.nativeObject.pointer, "resourceExists_EVString_callback");
			this.register_resourceExists_ev_uint64(this.nativeObject.pointer, "resourceExists_ev_uint64_callback");
			this.register__notifyResourceTouched_CResource(this.nativeObject.pointer, "_notifyResourceTouched_CResource_callback");
			this.register__notifyResourceLoaded_CResource(this.nativeObject.pointer, "_notifyResourceLoaded_CResource_callback");
			this.register__notifyResourceUnloaded_CResource(this.nativeObject.pointer, "_notifyResourceUnloaded_CResource_callback");
			this.register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(this.nativeObject.pointer, "prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback");
			this.register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, "prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
			this.register_prepare_EVString_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, "prepare_EVString_EVString_ev_bool_CManualResourceLoader_callback");
			this.register_prepare_EVString_EVString_ev_bool(this.nativeObject.pointer, "prepare_EVString_EVString_ev_bool_callback");
			this.register_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(this.nativeObject.pointer, "load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback");
			this.register_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, "load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
			this.register_load_EVString_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, "load_EVString_EVString_ev_bool_CManualResourceLoader_callback");
			this.register_load_EVString_EVString_ev_bool(this.nativeObject.pointer, "load_EVString_EVString_ev_bool_callback");
			this.register_load_EVString_EVString(this.nativeObject.pointer, "load_EVString_EVString_callback");
			this.register_setVerbose_ev_bool(this.nativeObject.pointer, "setVerbose_ev_bool_callback");
			this.register_getVerbose_void(this.nativeObject.pointer, "getVerbose_void_callback");
			this.register_createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, "createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
			this.register_addImpl_ResourcePtr(this.nativeObject.pointer, "addImpl_ResourcePtr_callback");
			this.register_removeImpl_ResourcePtr(this.nativeObject.pointer, "removeImpl_ResourcePtr_callback");
			this.register_checkUsage_void(this.nativeObject.pointer, "checkUsage_void_callback");
			this.register_getScriptPatterns_void(this.nativeObject.pointer, "getScriptPatterns_void_callback");
			this.register_parseScript_DataStreamPtr_EVString(this.nativeObject.pointer, "parseScript_DataStreamPtr_EVString_callback");
			this.register_getLoadingOrder_void(this.nativeObject.pointer, "getLoadingOrder_void_callback");
		}
	}
	
	public static SkeletonManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SkeletonManager obj = null;
 		if(baseObj instanceof SkeletonManager)
		{
			obj = (SkeletonManager)baseObj;
		} else {
			obj = new SkeletonManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSkeletonManager");
			obj.increaseCast();
		}

		return obj;
	}
}
