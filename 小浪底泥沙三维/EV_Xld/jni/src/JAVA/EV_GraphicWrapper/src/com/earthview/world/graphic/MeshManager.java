package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 模型管理器
 */
public class MeshManager extends com.earthview.world.graphic.ResourceManager {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CMeshManager", new MeshManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCMeshManagerProxy", new MeshManagerClassFactory());
	}

	native private static long getSingleton_void();
	public static com.earthview.world.graphic.MeshManager getSingleton()
	{
		long returnValue = getSingleton_void();
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
	native private static long getSingletonPtr_void();
	public static com.earthview.world.graphic.MeshManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
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
	public static class MeshManagerInternalResourceLoader extends com.earthview.world.graphic.ManualResourceLoader {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader", new MeshManagerInternalResourceLoaderClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMeshManager::JCMeshManagerInternalResourceLoaderProxy", new MeshManagerInternalResourceLoaderClassFactory());
		}

		/**
		 * 构造函数
		 * @param _parant 
		 */
		public MeshManagerInternalResourceLoader(com.earthview.world.graphic.MeshManager ref_parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			Create("JCMeshManagerInternalResourceLoaderProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.MeshManager$MeshManagerInternalResourceLoader".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private void prepareResource_CResource(long pNativeObject, long resource);
		public void prepareResource(com.earthview.world.graphic.Resource resource)
		{
			long resourceParamValue = (resource == null ? 0L : resource.nativeObject.pointer);
			prepareResource_CResource(this.nativeObject.pointer, resourceParamValue);
		}
		native private void prepareResource_CResource_NoVirtual(long pNativeObject, long resource);
		protected void prepareResource_NoVirtual(com.earthview.world.graphic.Resource resource)
		{
			long resourceParamValue = (resource == null ? 0L : resource.nativeObject.pointer);
			prepareResource_CResource_NoVirtual(this.nativeObject.pointer, resourceParamValue);
		}

		native private void loadResource_CResource(long pNativeObject, long resource);
		public void loadResource(com.earthview.world.graphic.Resource resource)
		{
			long resourceParamValue = (resource == null ? 0L : resource.nativeObject.pointer);
			loadResource_CResource(this.nativeObject.pointer, resourceParamValue);
		}
		native private void loadResource_CResource_NoVirtual(long pNativeObject, long resource);
		protected void loadResource_NoVirtual(com.earthview.world.graphic.Resource resource)
		{
			long resourceParamValue = (resource == null ? 0L : resource.nativeObject.pointer);
			loadResource_CResource_NoVirtual(this.nativeObject.pointer, resourceParamValue);
		}

		public MeshManagerInternalResourceLoader(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public MeshManagerInternalResourceLoader(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_prepareResource_CResource(long pNativeObject, String method);
		native protected void register_loadResource_CResource(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_prepareResource_CResource(this.nativeObject.pointer, "prepareResource_CResource_callback");
				this.register_loadResource_CResource(this.nativeObject.pointer, "loadResource_CResource_callback");
			}
		}
		
		public static MeshManagerInternalResourceLoader fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			MeshManagerInternalResourceLoader obj = null;
 			if(baseObj instanceof MeshManagerInternalResourceLoader)
			{
				obj = (MeshManagerInternalResourceLoader)baseObj;
			} else {
				obj = new MeshManagerInternalResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CMeshManagerInternalResourceLoader");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class MeshManagerInternalResourceLoaderClassFactory implements IClassFactory {
		public BaseObject create()
		{
			MeshManagerInternalResourceLoader emptyInstance = new MeshManagerInternalResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  void prepareResource_CResource_callback(long resource)
	{
		com.earthview.world.graphic.Resource resourceParamValue = (resource == 0L ? null : new com.earthview.world.graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate));
		if(resourceParamValue != null)
		{
		resourceParamValue.setDelegate(true);
		resourceParamValue.setInstancePointer(new InstancePointer(resource));
		IClassFactory resourceParamValueClassFactory = GlobalClassFactoryMap.get(resourceParamValue.getCppInstanceTypeName());
		if (resourceParamValueClassFactory != null)
		{
			resourceParamValue.setDelegate(true);
			resourceParamValue = (com.earthview.world.graphic.Resource)resourceParamValueClassFactory.create();
			resourceParamValue.setDelegate(true);
			resourceParamValue.setInstancePointer(new InstancePointer(resource));
		}
		}
		prepareResource(resourceParamValue);
	}

	native private void prepareResource_CResource(long pNativeObject, long resource);
	public void prepareResource(com.earthview.world.graphic.Resource resource)
	{
		long resourceParamValue = (resource == null ? 0L : resource.nativeObject.pointer);
		prepareResource_CResource(this.nativeObject.pointer, resourceParamValue);
	}
	native private void prepareResource_CResource_NoVirtual(long pNativeObject, long resource);
	protected void prepareResource_NoVirtual(com.earthview.world.graphic.Resource resource)
	{
		long resourceParamValue = (resource == null ? 0L : resource.nativeObject.pointer);
		prepareResource_CResource_NoVirtual(this.nativeObject.pointer, resourceParamValue);
	}

	protected  long getManualResourceLoaderPtr_void_callback()
	{
		com.earthview.world.graphic.MeshManager.MeshManagerInternalResourceLoader returnValue = getManualResourceLoaderPtr();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getManualResourceLoaderPtr_void(long pNativeObject);
	///virtual void loadResource(EarthView::World::Graphic::CResource* resource) ;
	public com.earthview.world.graphic.MeshManager.MeshManagerInternalResourceLoader getManualResourceLoaderPtr()
	{
		long returnValue = getManualResourceLoaderPtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MeshManager.MeshManagerInternalResourceLoader __returnValue = new com.earthview.world.graphic.MeshManager.MeshManagerInternalResourceLoader(CreatedWhenConstruct.CWC_NotToCreate, "CMeshManagerInternalResourceLoader");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshManager.MeshManagerInternalResourceLoader)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshManagerInternalResourceLoader");
		}
		return __returnValue;
	}
	native private long getManualResourceLoaderPtr_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.MeshManager.MeshManagerInternalResourceLoader getManualResourceLoaderPtr_NoVirtual()
	{
		long returnValue = getManualResourceLoaderPtr_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MeshManager.MeshManagerInternalResourceLoader __returnValue = new com.earthview.world.graphic.MeshManager.MeshManagerInternalResourceLoader(CreatedWhenConstruct.CWC_NotToCreate, "CMeshManagerInternalResourceLoader");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshManager.MeshManagerInternalResourceLoader)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshManagerInternalResourceLoader");
		}
		return __returnValue;
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public MeshManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCMeshManagerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.MeshManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void _initialise_void(long pNativeObject);
	/**
	 * 初始化
	 * @param  
	 */
	public void _initialise()
	{
		_initialise_void(this.nativeObject.pointer);
	}
	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Usage_Usage_ev_bool_ev_bool(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long params, int vertexBufferUsage, int indexBufferUsage, boolean vertexBufferShadowed, boolean indexBufferShadowed);
	/**
	 * 创建一个新的模型，或者是获得一个和已存在模型同名的模型
	 * @param name 资源的名称
	 * @param group 资源组的名称
	 * @param isManual 设置资源是否手动下载
	 * @param loader 指向ManualLoader的指针
	 * @param params 如果创建实例需要该参数，则提供名称/值对
	 * @param vertexBufferUsage 顶点缓存创建的用法标记
	 * @param indexBufferUsage 索引缓存创建的用法标记
	 * @param vertexBufferShadowed 如果为true，顶点缓存将会被附有阴影
	 * @param indexBufferShadowed 如果为true，索引缓存将会被附有阴影
	 */
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList params, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage, boolean vertexBufferShadowed, boolean indexBufferShadowed)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		boolean vertexBufferShadowedParamValue = vertexBufferShadowed;
		boolean indexBufferShadowedParamValue = indexBufferShadowed;
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Usage_Usage_ev_bool_ev_bool(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, paramsParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue, vertexBufferShadowedParamValue, indexBufferShadowedParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}
	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Usage_Usage_ev_bool(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long params, int vertexBufferUsage, int indexBufferUsage, boolean vertexBufferShadowed);
	/**
	 * 创建一个新的模型，或者是获得一个和已存在模型同名的模型
	 * @param name 资源的名称
	 * @param group 资源组的名称
	 * @param isManual 设置资源是否手动下载
	 * @param loader 指向ManualLoader的指针
	 * @param params 如果创建实例需要该参数，则提供名称/值对
	 * @param vertexBufferUsage 顶点缓存创建的用法标记
	 * @param indexBufferUsage 索引缓存创建的用法标记
	 * @param vertexBufferShadowed 如果为true，顶点缓存将会被附有阴影
	 */
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList params, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage, boolean vertexBufferShadowed)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		boolean vertexBufferShadowedParamValue = vertexBufferShadowed;
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Usage_Usage_ev_bool(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, paramsParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue, vertexBufferShadowedParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}
	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Usage_Usage(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long params, int vertexBufferUsage, int indexBufferUsage);
	/**
	 * 创建一个新的模型，或者是获得一个和已存在模型同名的模型
	 * @param name 资源的名称
	 * @param group 资源组的名称
	 * @param isManual 设置资源是否手动下载
	 * @param loader 指向ManualLoader的指针
	 * @param params 如果创建实例需要该参数，则提供名称/值对
	 * @param vertexBufferUsage 顶点缓存创建的用法标记
	 * @param indexBufferUsage 索引缓存创建的用法标记
	 */
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList params, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Usage_Usage(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, paramsParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}
	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Usage(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long params, int vertexBufferUsage);
	/**
	 * 创建一个新的模型，或者是获得一个和已存在模型同名的模型
	 * @param name 资源的名称
	 * @param group 资源组的名称
	 * @param isManual 设置资源是否手动下载
	 * @param loader 指向ManualLoader的指针
	 * @param params 如果创建实例需要该参数，则提供名称/值对
	 * @param vertexBufferUsage 顶点缓存创建的用法标记
	 */
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList params, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Usage(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, paramsParamValue, vertexBufferUsageParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}
	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long params);
	/**
	 * 创建一个新的模型，或者是获得一个和已存在模型同名的模型
	 * @param name 资源的名称
	 * @param group 资源组的名称
	 * @param isManual 设置资源是否手动下载
	 * @param loader 指向ManualLoader的指针
	 * @param params 如果创建实例需要该参数，则提供名称/值对
	 */
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList params)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, paramsParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}
	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long params);
	protected com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve_NoVirtual(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList params)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, paramsParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}

	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String name, String group, boolean isManual, long ref_loader);
	/**
	 * 创建一个新的模型，或者是获得一个和已存在模型同名的模型
	 * @param name 资源的名称
	 * @param group 资源组的名称
	 * @param isManual 设置资源是否手动下载
	 * @param loader 指向ManualLoader的指针
	 */
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}
	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(long pNativeObject, String name, String group, boolean isManual, long ref_loader);
	protected com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve_NoVirtual(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}

	native private long createOrRetrieve_EVString_EVString_ev_bool(long pNativeObject, String name, String group, boolean isManual);
	/**
	 * 创建一个新的模型，或者是获得一个和已存在模型同名的模型
	 * @param name 资源的名称
	 * @param group 资源组的名称
	 * @param isManual 设置资源是否手动下载
	 */
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}
	native private long createOrRetrieve_EVString_EVString_ev_bool_NoVirtual(long pNativeObject, String name, String group, boolean isManual);
	protected com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve_NoVirtual(String name, String group, boolean isManual)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}

	native private long createOrRetrieve_EVString_EVString(long pNativeObject, String name, String group);
	/**
	 * 创建一个新的模型，或者是获得一个和已存在模型同名的模型
	 * @param name 资源的名称
	 * @param group 资源组的名称
	 */
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long returnValue = createOrRetrieve_EVString_EVString(this.nativeObject.pointer, nameParamValue, groupParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}
	native private long createOrRetrieve_EVString_EVString_NoVirtual(long pNativeObject, String name, String group);
	protected com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve_NoVirtual(String name, String group)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long returnValue = createOrRetrieve_EVString_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}

	protected  long prepare_EVString_EVString_Usage_Usage_ev_bool_ev_bool_callback(String filename, String groupName, int vertexBufferUsage, int indexBufferUsage, boolean vertexBufferShadowed, boolean indexBufferShadowed)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsageParamValue = com.earthview.world.graphic.HardwareBuffer.Usage.toEnum(vertexBufferUsage);
		com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsageParamValue = com.earthview.world.graphic.HardwareBuffer.Usage.toEnum(indexBufferUsage);
		boolean vertexBufferShadowedParamValue = vertexBufferShadowed;
		boolean indexBufferShadowedParamValue = indexBufferShadowed;
		com.earthview.world.graphic.MeshPtr returnValue = prepare(filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue, vertexBufferShadowedParamValue, indexBufferShadowedParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long prepare_EVString_EVString_Usage_Usage_ev_bool_ev_bool(long pNativeObject, String filename, String groupName, int vertexBufferUsage, int indexBufferUsage, boolean vertexBufferShadowed, boolean indexBufferShadowed);
	/**
	 * 准备模型，如果模型已经被创建，则返回一个已存在的实例
	 * @param filename 模型文件的实例
	 * @param groupName 资源组的名称
	 * @param vertexBufferUsage 顶点缓存创建的用法标
	 * @param indexBufferUsage 索引缓存创建的用法标
	 * @param vertexBufferShadowed 如果为true，顶点缓存将会附有阴影
	 * @param indexBufferShadowed 如果为true，索引缓存将会附有阴影
	 */
	public com.earthview.world.graphic.MeshPtr prepare(String filename, String groupName, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage, boolean vertexBufferShadowed, boolean indexBufferShadowed)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		boolean vertexBufferShadowedParamValue = vertexBufferShadowed;
		boolean indexBufferShadowedParamValue = indexBufferShadowed;
		long returnValue = prepare_EVString_EVString_Usage_Usage_ev_bool_ev_bool(this.nativeObject.pointer, filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue, vertexBufferShadowedParamValue, indexBufferShadowedParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long prepare_EVString_EVString_Usage_Usage_ev_bool_ev_bool_NoVirtual(long pNativeObject, String filename, String groupName, int vertexBufferUsage, int indexBufferUsage, boolean vertexBufferShadowed, boolean indexBufferShadowed);
	protected com.earthview.world.graphic.MeshPtr prepare_NoVirtual(String filename, String groupName, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage, boolean vertexBufferShadowed, boolean indexBufferShadowed)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		boolean vertexBufferShadowedParamValue = vertexBufferShadowed;
		boolean indexBufferShadowedParamValue = indexBufferShadowed;
		long returnValue = prepare_EVString_EVString_Usage_Usage_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue, vertexBufferShadowedParamValue, indexBufferShadowedParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}

	protected  long prepare_EVString_EVString_Usage_Usage_ev_bool_callback(String filename, String groupName, int vertexBufferUsage, int indexBufferUsage, boolean vertexBufferShadowed)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsageParamValue = com.earthview.world.graphic.HardwareBuffer.Usage.toEnum(vertexBufferUsage);
		com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsageParamValue = com.earthview.world.graphic.HardwareBuffer.Usage.toEnum(indexBufferUsage);
		boolean vertexBufferShadowedParamValue = vertexBufferShadowed;
		com.earthview.world.graphic.MeshPtr returnValue = prepare(filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue, vertexBufferShadowedParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long prepare_EVString_EVString_Usage_Usage_ev_bool(long pNativeObject, String filename, String groupName, int vertexBufferUsage, int indexBufferUsage, boolean vertexBufferShadowed);
	/**
	 * 准备模型，如果模型已经被创建，则返回一个已存在的实例
	 * @param filename 模型文件的实例
	 * @param groupName 资源组的名称
	 * @param vertexBufferUsage 顶点缓存创建的用法标
	 * @param indexBufferUsage 索引缓存创建的用法标
	 * @param vertexBufferShadowed 如果为true，顶点缓存将会附有阴影
	 */
	public com.earthview.world.graphic.MeshPtr prepare(String filename, String groupName, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage, boolean vertexBufferShadowed)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		boolean vertexBufferShadowedParamValue = vertexBufferShadowed;
		long returnValue = prepare_EVString_EVString_Usage_Usage_ev_bool(this.nativeObject.pointer, filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue, vertexBufferShadowedParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long prepare_EVString_EVString_Usage_Usage_ev_bool_NoVirtual(long pNativeObject, String filename, String groupName, int vertexBufferUsage, int indexBufferUsage, boolean vertexBufferShadowed);
	protected com.earthview.world.graphic.MeshPtr prepare_NoVirtual(String filename, String groupName, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage, boolean vertexBufferShadowed)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		boolean vertexBufferShadowedParamValue = vertexBufferShadowed;
		long returnValue = prepare_EVString_EVString_Usage_Usage_ev_bool_NoVirtual(this.nativeObject.pointer, filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue, vertexBufferShadowedParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}

	protected  long prepare_EVString_EVString_Usage_Usage_callback(String filename, String groupName, int vertexBufferUsage, int indexBufferUsage)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsageParamValue = com.earthview.world.graphic.HardwareBuffer.Usage.toEnum(vertexBufferUsage);
		com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsageParamValue = com.earthview.world.graphic.HardwareBuffer.Usage.toEnum(indexBufferUsage);
		com.earthview.world.graphic.MeshPtr returnValue = prepare(filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long prepare_EVString_EVString_Usage_Usage(long pNativeObject, String filename, String groupName, int vertexBufferUsage, int indexBufferUsage);
	/**
	 * 准备模型，如果模型已经被创建，则返回一个已存在的实例
	 * @param filename 模型文件的实例
	 * @param groupName 资源组的名称
	 * @param vertexBufferUsage 顶点缓存创建的用法标
	 * @param indexBufferUsage 索引缓存创建的用法标
	 */
	public com.earthview.world.graphic.MeshPtr prepare(String filename, String groupName, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		long returnValue = prepare_EVString_EVString_Usage_Usage(this.nativeObject.pointer, filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long prepare_EVString_EVString_Usage_Usage_NoVirtual(long pNativeObject, String filename, String groupName, int vertexBufferUsage, int indexBufferUsage);
	protected com.earthview.world.graphic.MeshPtr prepare_NoVirtual(String filename, String groupName, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		long returnValue = prepare_EVString_EVString_Usage_Usage_NoVirtual(this.nativeObject.pointer, filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}

	protected  long prepare_EVString_EVString_Usage_callback(String filename, String groupName, int vertexBufferUsage)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsageParamValue = com.earthview.world.graphic.HardwareBuffer.Usage.toEnum(vertexBufferUsage);
		com.earthview.world.graphic.MeshPtr returnValue = prepare(filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long prepare_EVString_EVString_Usage(long pNativeObject, String filename, String groupName, int vertexBufferUsage);
	/**
	 * 准备模型，如果模型已经被创建，则返回一个已存在的实例
	 * @param filename 模型文件的实例
	 * @param groupName 资源组的名称
	 * @param vertexBufferUsage 顶点缓存创建的用法标
	 */
	public com.earthview.world.graphic.MeshPtr prepare(String filename, String groupName, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		long returnValue = prepare_EVString_EVString_Usage(this.nativeObject.pointer, filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long prepare_EVString_EVString_Usage_NoVirtual(long pNativeObject, String filename, String groupName, int vertexBufferUsage);
	protected com.earthview.world.graphic.MeshPtr prepare_NoVirtual(String filename, String groupName, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		long returnValue = prepare_EVString_EVString_Usage_NoVirtual(this.nativeObject.pointer, filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}

	protected  long load_EVString_EVString_Usage_Usage_ev_bool_ev_bool_callback(String filename, String groupName, int vertexBufferUsage, int indexBufferUsage, boolean vertexBufferShadowed, boolean indexBufferShadowed)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsageParamValue = com.earthview.world.graphic.HardwareBuffer.Usage.toEnum(vertexBufferUsage);
		com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsageParamValue = com.earthview.world.graphic.HardwareBuffer.Usage.toEnum(indexBufferUsage);
		boolean vertexBufferShadowedParamValue = vertexBufferShadowed;
		boolean indexBufferShadowedParamValue = indexBufferShadowed;
		com.earthview.world.graphic.MeshPtr returnValue = load(filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue, vertexBufferShadowedParamValue, indexBufferShadowedParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long load_EVString_EVString_Usage_Usage_ev_bool_ev_bool(long pNativeObject, String filename, String groupName, int vertexBufferUsage, int indexBufferUsage, boolean vertexBufferShadowed, boolean indexBufferShadowed);
	/**
	 * 加载模型
	 * @param filename 模型文件的实例
	 * @param groupName 资源组的名称
	 * @param vertexBufferUsage 顶点缓存创建的用法标
	 * @param indexBufferUsage 索引缓存创建的用法标
	 * @param vertexBufferShadowed 如果为true，顶点缓存将会附有阴影
	 * @param indexBufferShadowed 如果为true，索引缓存将会附有阴影
	 */
	public com.earthview.world.graphic.MeshPtr load(String filename, String groupName, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage, boolean vertexBufferShadowed, boolean indexBufferShadowed)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		boolean vertexBufferShadowedParamValue = vertexBufferShadowed;
		boolean indexBufferShadowedParamValue = indexBufferShadowed;
		long returnValue = load_EVString_EVString_Usage_Usage_ev_bool_ev_bool(this.nativeObject.pointer, filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue, vertexBufferShadowedParamValue, indexBufferShadowedParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long load_EVString_EVString_Usage_Usage_ev_bool_ev_bool_NoVirtual(long pNativeObject, String filename, String groupName, int vertexBufferUsage, int indexBufferUsage, boolean vertexBufferShadowed, boolean indexBufferShadowed);
	protected com.earthview.world.graphic.MeshPtr load_NoVirtual(String filename, String groupName, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage, boolean vertexBufferShadowed, boolean indexBufferShadowed)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		boolean vertexBufferShadowedParamValue = vertexBufferShadowed;
		boolean indexBufferShadowedParamValue = indexBufferShadowed;
		long returnValue = load_EVString_EVString_Usage_Usage_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue, vertexBufferShadowedParamValue, indexBufferShadowedParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}

	protected  long load_EVString_EVString_Usage_Usage_ev_bool_callback(String filename, String groupName, int vertexBufferUsage, int indexBufferUsage, boolean vertexBufferShadowed)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsageParamValue = com.earthview.world.graphic.HardwareBuffer.Usage.toEnum(vertexBufferUsage);
		com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsageParamValue = com.earthview.world.graphic.HardwareBuffer.Usage.toEnum(indexBufferUsage);
		boolean vertexBufferShadowedParamValue = vertexBufferShadowed;
		com.earthview.world.graphic.MeshPtr returnValue = load(filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue, vertexBufferShadowedParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long load_EVString_EVString_Usage_Usage_ev_bool(long pNativeObject, String filename, String groupName, int vertexBufferUsage, int indexBufferUsage, boolean vertexBufferShadowed);
	/**
	 * 加载模型
	 * @param filename 模型文件的实例
	 * @param groupName 资源组的名称
	 * @param vertexBufferUsage 顶点缓存创建的用法标
	 * @param indexBufferUsage 索引缓存创建的用法标
	 * @param vertexBufferShadowed 如果为true，顶点缓存将会附有阴影
	 */
	public com.earthview.world.graphic.MeshPtr load(String filename, String groupName, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage, boolean vertexBufferShadowed)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		boolean vertexBufferShadowedParamValue = vertexBufferShadowed;
		long returnValue = load_EVString_EVString_Usage_Usage_ev_bool(this.nativeObject.pointer, filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue, vertexBufferShadowedParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long load_EVString_EVString_Usage_Usage_ev_bool_NoVirtual(long pNativeObject, String filename, String groupName, int vertexBufferUsage, int indexBufferUsage, boolean vertexBufferShadowed);
	protected com.earthview.world.graphic.MeshPtr load_NoVirtual(String filename, String groupName, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage, boolean vertexBufferShadowed)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		boolean vertexBufferShadowedParamValue = vertexBufferShadowed;
		long returnValue = load_EVString_EVString_Usage_Usage_ev_bool_NoVirtual(this.nativeObject.pointer, filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue, vertexBufferShadowedParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}

	protected  long load_EVString_EVString_Usage_Usage_callback(String filename, String groupName, int vertexBufferUsage, int indexBufferUsage)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsageParamValue = com.earthview.world.graphic.HardwareBuffer.Usage.toEnum(vertexBufferUsage);
		com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsageParamValue = com.earthview.world.graphic.HardwareBuffer.Usage.toEnum(indexBufferUsage);
		com.earthview.world.graphic.MeshPtr returnValue = load(filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long load_EVString_EVString_Usage_Usage(long pNativeObject, String filename, String groupName, int vertexBufferUsage, int indexBufferUsage);
	/**
	 * 加载模型
	 * @param filename 模型文件的实例
	 * @param groupName 资源组的名称
	 * @param vertexBufferUsage 顶点缓存创建的用法标
	 * @param indexBufferUsage 索引缓存创建的用法标
	 */
	public com.earthview.world.graphic.MeshPtr load(String filename, String groupName, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		long returnValue = load_EVString_EVString_Usage_Usage(this.nativeObject.pointer, filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long load_EVString_EVString_Usage_Usage_NoVirtual(long pNativeObject, String filename, String groupName, int vertexBufferUsage, int indexBufferUsage);
	protected com.earthview.world.graphic.MeshPtr load_NoVirtual(String filename, String groupName, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		long returnValue = load_EVString_EVString_Usage_Usage_NoVirtual(this.nativeObject.pointer, filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}

	protected  long load_EVString_EVString_Usage_callback(String filename, String groupName, int vertexBufferUsage)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsageParamValue = com.earthview.world.graphic.HardwareBuffer.Usage.toEnum(vertexBufferUsage);
		com.earthview.world.graphic.MeshPtr returnValue = load(filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long load_EVString_EVString_Usage(long pNativeObject, String filename, String groupName, int vertexBufferUsage);
	/**
	 * 加载模型
	 * @param filename 模型文件的实例
	 * @param groupName 资源组的名称
	 * @param vertexBufferUsage 顶点缓存创建的用法标
	 */
	public com.earthview.world.graphic.MeshPtr load(String filename, String groupName, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		long returnValue = load_EVString_EVString_Usage(this.nativeObject.pointer, filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long load_EVString_EVString_Usage_NoVirtual(long pNativeObject, String filename, String groupName, int vertexBufferUsage);
	protected com.earthview.world.graphic.MeshPtr load_NoVirtual(String filename, String groupName, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		long returnValue = load_EVString_EVString_Usage_NoVirtual(this.nativeObject.pointer, filenameParamValue, groupNameParamValue, vertexBufferUsageParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}

	native private long createManual_EVString_EVString_CManualResourceLoader(long pNativeObject, String name, String groupName, long ref_loader);
	/**
	 * 手动创建一个新的模型
	 * @param name 新模型的名称
	 * @param groupName 资源组的名称
	 * @param loader 指向EarthView::World::Graphic::CManualResourceLoader的指针，被调用下载该模型
	 */
	public com.earthview.world.graphic.MeshPtr createManual(String name, String groupName, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long returnValue = createManual_EVString_EVString_CManualResourceLoader(this.nativeObject.pointer, nameParamValue, groupNameParamValue, ref_loaderParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createManual_EVString_EVString(long pNativeObject, String name, String groupName);
	/**
	 * 手动创建一个新的模型
	 * @param name 新模型的名称
	 * @param groupName 资源组的名称
	 */
	public com.earthview.world.graphic.MeshPtr createManual(String name, String groupName)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long returnValue = createManual_EVString_EVString(this.nativeObject.pointer, nameParamValue, groupNameParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createPlane_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage_ev_bool_ev_bool(long pNativeObject, String name, String groupName, long plane, double width, double height, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, long upVector, int vertexBufferUsage, int indexBufferUsage, boolean vertexShadowBuffer, boolean indexShadowBuffer);
	/**
	 * 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 * @param uTile 纹理在U方向上重复的次数
	 * @param vTile 纹理在V方向上重复的次数
	 * @param upVector 平面的'up'方向
	 * @param vertexBufferUsage 平面创建的顶点缓存用法标记
	 * @param indexBufferUsage 平面创建的索引缓存用法标记
	 * @param vertexShadowBuffer 如果设置为true,顶点缓存会被创建并附有阴影
	 * @param indexShadowBuffer 如果设置为true,索引缓存会被创建并附有阴影
	 */
	public com.earthview.world.graphic.MeshPtr createPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, com.earthview.world.spatial.math.Vector3 upVector, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage, boolean vertexShadowBuffer, boolean indexShadowBuffer)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		double uTileParamValue = uTile;
		double vTileParamValue = vTile;
		long upVectorParamValue = upVector.nativeObject.pointer;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		boolean vertexShadowBufferParamValue = vertexShadowBuffer;
		boolean indexShadowBufferParamValue = indexShadowBuffer;
		long returnValue = createPlane_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage_ev_bool_ev_bool(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue, uTileParamValue, vTileParamValue, upVectorParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue, vertexShadowBufferParamValue, indexShadowBufferParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createPlane_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage_ev_bool(long pNativeObject, String name, String groupName, long plane, double width, double height, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, long upVector, int vertexBufferUsage, int indexBufferUsage, boolean vertexShadowBuffer);
	/**
	 * 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 * @param uTile 纹理在U方向上重复的次数
	 * @param vTile 纹理在V方向上重复的次数
	 * @param upVector 平面的'up'方向
	 * @param vertexBufferUsage 平面创建的顶点缓存用法标记
	 * @param indexBufferUsage 平面创建的索引缓存用法标记
	 * @param vertexShadowBuffer 如果设置为true,顶点缓存会被创建并附有阴影
	 */
	public com.earthview.world.graphic.MeshPtr createPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, com.earthview.world.spatial.math.Vector3 upVector, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage, boolean vertexShadowBuffer)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		double uTileParamValue = uTile;
		double vTileParamValue = vTile;
		long upVectorParamValue = upVector.nativeObject.pointer;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		boolean vertexShadowBufferParamValue = vertexShadowBuffer;
		long returnValue = createPlane_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage_ev_bool(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue, uTileParamValue, vTileParamValue, upVectorParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue, vertexShadowBufferParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createPlane_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage(long pNativeObject, String name, String groupName, long plane, double width, double height, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, long upVector, int vertexBufferUsage, int indexBufferUsage);
	/**
	 * 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 * @param uTile 纹理在U方向上重复的次数
	 * @param vTile 纹理在V方向上重复的次数
	 * @param upVector 平面的'up'方向
	 * @param vertexBufferUsage 平面创建的顶点缓存用法标记
	 * @param indexBufferUsage 平面创建的索引缓存用法标记
	 */
	public com.earthview.world.graphic.MeshPtr createPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, com.earthview.world.spatial.math.Vector3 upVector, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		double uTileParamValue = uTile;
		double vTileParamValue = vTile;
		long upVectorParamValue = upVector.nativeObject.pointer;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		long returnValue = createPlane_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue, uTileParamValue, vTileParamValue, upVectorParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createPlane_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage(long pNativeObject, String name, String groupName, long plane, double width, double height, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, long upVector, int vertexBufferUsage);
	/**
	 * 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 * @param uTile 纹理在U方向上重复的次数
	 * @param vTile 纹理在V方向上重复的次数
	 * @param upVector 平面的'up'方向
	 * @param vertexBufferUsage 平面创建的顶点缓存用法标记
	 */
	public com.earthview.world.graphic.MeshPtr createPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, com.earthview.world.spatial.math.Vector3 upVector, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		double uTileParamValue = uTile;
		double vTileParamValue = vTile;
		long upVectorParamValue = upVector.nativeObject.pointer;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		long returnValue = createPlane_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue, uTileParamValue, vTileParamValue, upVectorParamValue, vertexBufferUsageParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createPlane_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3(long pNativeObject, String name, String groupName, long plane, double width, double height, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, long upVector);
	/**
	 * 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 * @param uTile 纹理在U方向上重复的次数
	 * @param vTile 纹理在V方向上重复的次数
	 * @param upVector 平面的'up'方向
	 */
	public com.earthview.world.graphic.MeshPtr createPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, com.earthview.world.spatial.math.Vector3 upVector)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		double uTileParamValue = uTile;
		double vTileParamValue = vTile;
		long upVectorParamValue = upVector.nativeObject.pointer;
		long returnValue = createPlane_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue, uTileParamValue, vTileParamValue, upVectorParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createPlane_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real(long pNativeObject, String name, String groupName, long plane, double width, double height, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile);
	/**
	 * 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 * @param uTile 纹理在U方向上重复的次数
	 * @param vTile 纹理在V方向上重复的次数
	 */
	public com.earthview.world.graphic.MeshPtr createPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		double uTileParamValue = uTile;
		double vTileParamValue = vTile;
		long returnValue = createPlane_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue, uTileParamValue, vTileParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createPlane_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real(long pNativeObject, String name, String groupName, long plane, double width, double height, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile);
	/**
	 * 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 * @param uTile 纹理在U方向上重复的次数
	 */
	public com.earthview.world.graphic.MeshPtr createPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		double uTileParamValue = uTile;
		long returnValue = createPlane_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue, uTileParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createPlane_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16(long pNativeObject, String name, String groupName, long plane, double width, double height, int xsegments, int ysegments, boolean normals, int numTexCoordSets);
	/**
	 * 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 */
	public com.earthview.world.graphic.MeshPtr createPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, int xsegments, int ysegments, boolean normals, int numTexCoordSets)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		long returnValue = createPlane_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createPlane_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool(long pNativeObject, String name, String groupName, long plane, double width, double height, int xsegments, int ysegments, boolean normals);
	/**
	 * 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 */
	public com.earthview.world.graphic.MeshPtr createPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, int xsegments, int ysegments, boolean normals)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		long returnValue = createPlane_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createPlane_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32(long pNativeObject, String name, String groupName, long plane, double width, double height, int xsegments, int ysegments);
	/**
	 * 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 */
	public com.earthview.world.graphic.MeshPtr createPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, int xsegments, int ysegments)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		long returnValue = createPlane_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, xsegmentsParamValue, ysegmentsParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createPlane_EVString_EVString_CPlane_Real_Real_ev_int32(long pNativeObject, String name, String groupName, long plane, double width, double height, int xsegments);
	/**
	 * 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param xsegments X轴方向线段的数量
	 */
	public com.earthview.world.graphic.MeshPtr createPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, int xsegments)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		int xsegmentsParamValue = xsegments;
		long returnValue = createPlane_EVString_EVString_CPlane_Real_Real_ev_int32(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, xsegmentsParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createPlane_EVString_EVString_CPlane_Real_Real(long pNativeObject, String name, String groupName, long plane, double width, double height);
	/**
	 * 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 */
	public com.earthview.world.graphic.MeshPtr createPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		long returnValue = createPlane_EVString_EVString_CPlane_Real_Real(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion_Usage_Usage_ev_bool_ev_bool_ev_int32(long pNativeObject, String name, String groupName, long plane, double width, double height, double curvature, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, long upVector, long orientation, int vertexBufferUsage, int indexBufferUsage, boolean vertexShadowBuffer, boolean indexShadowBuffer, int ySegmentsToKeep);
	/**
	 * 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param curvature 平面的曲率
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 * @param uTile 纹理在U方向上重复的次数
	 * @param vTile 纹理在V方向上重复的次数
	 * @param upVector 平面的'up'方向
	 * @param orientation 整个曲面的方位，用来产生一种视觉上的效果
	 * @param vertexBufferUsage 平面创建的顶点缓存用法标记
	 * @param indexBufferUsage 平面创建的索引缓存用法标记
	 * @param vertexShadowBuffer 如果这个标记设置为ture,顶点缓存将会被创建，并附有阴影缓存
	 * @param indexShadowBuffer 如果这个标记设置为ture,索引缓存将会被创建，并附有阴影缓存
	 * @param ySegmentsToKeep 从半球顶向下线段的数量
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedIllusionPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, com.earthview.world.spatial.math.Vector3 upVector, com.earthview.world.spatial.math.Quaternion orientation, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage, boolean vertexShadowBuffer, boolean indexShadowBuffer, int ySegmentsToKeep)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double curvatureParamValue = curvature;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		double uTileParamValue = uTile;
		double vTileParamValue = vTile;
		long upVectorParamValue = upVector.nativeObject.pointer;
		long orientationParamValue = orientation.nativeObject.pointer;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		boolean vertexShadowBufferParamValue = vertexShadowBuffer;
		boolean indexShadowBufferParamValue = indexShadowBuffer;
		int ySegmentsToKeepParamValue = ySegmentsToKeep;
		long returnValue = createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion_Usage_Usage_ev_bool_ev_bool_ev_int32(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, curvatureParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue, uTileParamValue, vTileParamValue, upVectorParamValue, orientationParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue, vertexShadowBufferParamValue, indexShadowBufferParamValue, ySegmentsToKeepParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion_Usage_Usage_ev_bool_ev_bool(long pNativeObject, String name, String groupName, long plane, double width, double height, double curvature, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, long upVector, long orientation, int vertexBufferUsage, int indexBufferUsage, boolean vertexShadowBuffer, boolean indexShadowBuffer);
	/**
	 * 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param curvature 平面的曲率
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 * @param uTile 纹理在U方向上重复的次数
	 * @param vTile 纹理在V方向上重复的次数
	 * @param upVector 平面的'up'方向
	 * @param orientation 整个曲面的方位，用来产生一种视觉上的效果
	 * @param vertexBufferUsage 平面创建的顶点缓存用法标记
	 * @param indexBufferUsage 平面创建的索引缓存用法标记
	 * @param vertexShadowBuffer 如果这个标记设置为ture,顶点缓存将会被创建，并附有阴影缓存
	 * @param indexShadowBuffer 如果这个标记设置为ture,索引缓存将会被创建，并附有阴影缓存
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedIllusionPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, com.earthview.world.spatial.math.Vector3 upVector, com.earthview.world.spatial.math.Quaternion orientation, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage, boolean vertexShadowBuffer, boolean indexShadowBuffer)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double curvatureParamValue = curvature;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		double uTileParamValue = uTile;
		double vTileParamValue = vTile;
		long upVectorParamValue = upVector.nativeObject.pointer;
		long orientationParamValue = orientation.nativeObject.pointer;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		boolean vertexShadowBufferParamValue = vertexShadowBuffer;
		boolean indexShadowBufferParamValue = indexShadowBuffer;
		long returnValue = createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion_Usage_Usage_ev_bool_ev_bool(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, curvatureParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue, uTileParamValue, vTileParamValue, upVectorParamValue, orientationParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue, vertexShadowBufferParamValue, indexShadowBufferParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion_Usage_Usage_ev_bool(long pNativeObject, String name, String groupName, long plane, double width, double height, double curvature, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, long upVector, long orientation, int vertexBufferUsage, int indexBufferUsage, boolean vertexShadowBuffer);
	/**
	 * 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param curvature 平面的曲率
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 * @param uTile 纹理在U方向上重复的次数
	 * @param vTile 纹理在V方向上重复的次数
	 * @param upVector 平面的'up'方向
	 * @param orientation 整个曲面的方位，用来产生一种视觉上的效果
	 * @param vertexBufferUsage 平面创建的顶点缓存用法标记
	 * @param indexBufferUsage 平面创建的索引缓存用法标记
	 * @param vertexShadowBuffer 如果这个标记设置为ture,顶点缓存将会被创建，并附有阴影缓存
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedIllusionPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, com.earthview.world.spatial.math.Vector3 upVector, com.earthview.world.spatial.math.Quaternion orientation, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage, boolean vertexShadowBuffer)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double curvatureParamValue = curvature;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		double uTileParamValue = uTile;
		double vTileParamValue = vTile;
		long upVectorParamValue = upVector.nativeObject.pointer;
		long orientationParamValue = orientation.nativeObject.pointer;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		boolean vertexShadowBufferParamValue = vertexShadowBuffer;
		long returnValue = createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion_Usage_Usage_ev_bool(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, curvatureParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue, uTileParamValue, vTileParamValue, upVectorParamValue, orientationParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue, vertexShadowBufferParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion_Usage_Usage(long pNativeObject, String name, String groupName, long plane, double width, double height, double curvature, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, long upVector, long orientation, int vertexBufferUsage, int indexBufferUsage);
	/**
	 * 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param curvature 平面的曲率
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 * @param uTile 纹理在U方向上重复的次数
	 * @param vTile 纹理在V方向上重复的次数
	 * @param upVector 平面的'up'方向
	 * @param orientation 整个曲面的方位，用来产生一种视觉上的效果
	 * @param vertexBufferUsage 平面创建的顶点缓存用法标记
	 * @param indexBufferUsage 平面创建的索引缓存用法标记
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedIllusionPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, com.earthview.world.spatial.math.Vector3 upVector, com.earthview.world.spatial.math.Quaternion orientation, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double curvatureParamValue = curvature;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		double uTileParamValue = uTile;
		double vTileParamValue = vTile;
		long upVectorParamValue = upVector.nativeObject.pointer;
		long orientationParamValue = orientation.nativeObject.pointer;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		long returnValue = createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion_Usage_Usage(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, curvatureParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue, uTileParamValue, vTileParamValue, upVectorParamValue, orientationParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion_Usage(long pNativeObject, String name, String groupName, long plane, double width, double height, double curvature, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, long upVector, long orientation, int vertexBufferUsage);
	/**
	 * 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param curvature 平面的曲率
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 * @param uTile 纹理在U方向上重复的次数
	 * @param vTile 纹理在V方向上重复的次数
	 * @param upVector 平面的'up'方向
	 * @param orientation 整个曲面的方位，用来产生一种视觉上的效果
	 * @param vertexBufferUsage 平面创建的顶点缓存用法标记
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedIllusionPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, com.earthview.world.spatial.math.Vector3 upVector, com.earthview.world.spatial.math.Quaternion orientation, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double curvatureParamValue = curvature;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		double uTileParamValue = uTile;
		double vTileParamValue = vTile;
		long upVectorParamValue = upVector.nativeObject.pointer;
		long orientationParamValue = orientation.nativeObject.pointer;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		long returnValue = createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion_Usage(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, curvatureParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue, uTileParamValue, vTileParamValue, upVectorParamValue, orientationParamValue, vertexBufferUsageParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion(long pNativeObject, String name, String groupName, long plane, double width, double height, double curvature, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, long upVector, long orientation);
	/**
	 * 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param curvature 平面的曲率
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 * @param uTile 纹理在U方向上重复的次数
	 * @param vTile 纹理在V方向上重复的次数
	 * @param upVector 平面的'up'方向
	 * @param orientation 整个曲面的方位，用来产生一种视觉上的效果
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedIllusionPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, com.earthview.world.spatial.math.Vector3 upVector, com.earthview.world.spatial.math.Quaternion orientation)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double curvatureParamValue = curvature;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		double uTileParamValue = uTile;
		double vTileParamValue = vTile;
		long upVectorParamValue = upVector.nativeObject.pointer;
		long orientationParamValue = orientation.nativeObject.pointer;
		long returnValue = createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, curvatureParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue, uTileParamValue, vTileParamValue, upVectorParamValue, orientationParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3(long pNativeObject, String name, String groupName, long plane, double width, double height, double curvature, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, long upVector);
	/**
	 * 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param curvature 平面的曲率
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 * @param uTile 纹理在U方向上重复的次数
	 * @param vTile 纹理在V方向上重复的次数
	 * @param upVector 平面的'up'方向
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedIllusionPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile, com.earthview.world.spatial.math.Vector3 upVector)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double curvatureParamValue = curvature;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		double uTileParamValue = uTile;
		double vTileParamValue = vTile;
		long upVectorParamValue = upVector.nativeObject.pointer;
		long returnValue = createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, curvatureParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue, uTileParamValue, vTileParamValue, upVectorParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real(long pNativeObject, String name, String groupName, long plane, double width, double height, double curvature, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile);
	/**
	 * 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param curvature 平面的曲率
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 * @param uTile 纹理在U方向上重复的次数
	 * @param vTile 纹理在V方向上重复的次数
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedIllusionPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile, double vTile)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double curvatureParamValue = curvature;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		double uTileParamValue = uTile;
		double vTileParamValue = vTile;
		long returnValue = createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, curvatureParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue, uTileParamValue, vTileParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real(long pNativeObject, String name, String groupName, long plane, double width, double height, double curvature, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile);
	/**
	 * 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param curvature 平面的曲率
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 * @param uTile 纹理在U方向上重复的次数
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedIllusionPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double uTile)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double curvatureParamValue = curvature;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		double uTileParamValue = uTile;
		long returnValue = createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, curvatureParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue, uTileParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16(long pNativeObject, String name, String groupName, long plane, double width, double height, double curvature, int xsegments, int ysegments, boolean normals, int numTexCoordSets);
	/**
	 * 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param curvature 平面的曲率
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedIllusionPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments, boolean normals, int numTexCoordSets)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double curvatureParamValue = curvature;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		long returnValue = createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, curvatureParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool(long pNativeObject, String name, String groupName, long plane, double width, double height, double curvature, int xsegments, int ysegments, boolean normals);
	/**
	 * 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param curvature 平面的曲率
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedIllusionPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments, boolean normals)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double curvatureParamValue = curvature;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		long returnValue = createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, curvatureParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32(long pNativeObject, String name, String groupName, long plane, double width, double height, double curvature, int xsegments, int ysegments);
	/**
	 * 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param curvature 平面的曲率
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedIllusionPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double curvatureParamValue = curvature;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		long returnValue = createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, curvatureParamValue, xsegmentsParamValue, ysegmentsParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32(long pNativeObject, String name, String groupName, long plane, double width, double height, double curvature, int xsegments);
	/**
	 * 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param curvature 平面的曲率
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedIllusionPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double curvature, int xsegments)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double curvatureParamValue = curvature;
		int xsegmentsParamValue = xsegments;
		long returnValue = createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, curvatureParamValue, xsegmentsParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real(long pNativeObject, String name, String groupName, long plane, double width, double height, double curvature);
	/**
	 * 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param curvature 平面的曲率
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedIllusionPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double curvature)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double curvatureParamValue = curvature;
		long returnValue = createCurvedIllusionPlane_EVString_EVString_CPlane_Real_Real_Real(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, curvatureParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage_ev_bool_ev_bool(long pNativeObject, String name, String groupName, long plane, double width, double height, double bow, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double xTile, double yTile, long upVector, int vertexBufferUsage, int indexBufferUsage, boolean vertexShadowBuffer, boolean indexShadowBuffer);
	/**
	 * 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param bow 曲面中弓形的数量
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 * @param xTile 纹理在x方向上重复的次数
	 * @param yTile 纹理在y方向上重复的次数
	 * @param upVector 平面的'up'方向
	 * @param vertexBufferUsage 平面创建的顶点缓存用法标记
	 * @param indexBufferUsage 平面创建的索引缓存用法标记
	 * @param vertexShadowBuffer 如果这个标记设置为ture,顶点缓存将会被创建，并附有阴影缓存
	 * @param indexShadowBuffer 如果这个标记设置为ture,索引缓存将会被创建，并附有阴影缓存
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double bow, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double xTile, double yTile, com.earthview.world.spatial.math.Vector3 upVector, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage, boolean vertexShadowBuffer, boolean indexShadowBuffer)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double bowParamValue = bow;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		double xTileParamValue = xTile;
		double yTileParamValue = yTile;
		long upVectorParamValue = upVector.nativeObject.pointer;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		boolean vertexShadowBufferParamValue = vertexShadowBuffer;
		boolean indexShadowBufferParamValue = indexShadowBuffer;
		long returnValue = createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage_ev_bool_ev_bool(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, bowParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue, xTileParamValue, yTileParamValue, upVectorParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue, vertexShadowBufferParamValue, indexShadowBufferParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage_ev_bool(long pNativeObject, String name, String groupName, long plane, double width, double height, double bow, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double xTile, double yTile, long upVector, int vertexBufferUsage, int indexBufferUsage, boolean vertexShadowBuffer);
	/**
	 * 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param bow 曲面中弓形的数量
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 * @param xTile 纹理在x方向上重复的次数
	 * @param yTile 纹理在y方向上重复的次数
	 * @param upVector 平面的'up'方向
	 * @param vertexBufferUsage 平面创建的顶点缓存用法标记
	 * @param indexBufferUsage 平面创建的索引缓存用法标记
	 * @param vertexShadowBuffer 如果这个标记设置为ture,顶点缓存将会被创建，并附有阴影缓存
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double bow, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double xTile, double yTile, com.earthview.world.spatial.math.Vector3 upVector, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage, boolean vertexShadowBuffer)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double bowParamValue = bow;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		double xTileParamValue = xTile;
		double yTileParamValue = yTile;
		long upVectorParamValue = upVector.nativeObject.pointer;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		boolean vertexShadowBufferParamValue = vertexShadowBuffer;
		long returnValue = createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage_ev_bool(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, bowParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue, xTileParamValue, yTileParamValue, upVectorParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue, vertexShadowBufferParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage(long pNativeObject, String name, String groupName, long plane, double width, double height, double bow, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double xTile, double yTile, long upVector, int vertexBufferUsage, int indexBufferUsage);
	/**
	 * 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param bow 曲面中弓形的数量
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 * @param xTile 纹理在x方向上重复的次数
	 * @param yTile 纹理在y方向上重复的次数
	 * @param upVector 平面的'up'方向
	 * @param vertexBufferUsage 平面创建的顶点缓存用法标记
	 * @param indexBufferUsage 平面创建的索引缓存用法标记
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double bow, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double xTile, double yTile, com.earthview.world.spatial.math.Vector3 upVector, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage, com.earthview.world.graphic.HardwareBuffer.Usage indexBufferUsage)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double bowParamValue = bow;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		double xTileParamValue = xTile;
		double yTileParamValue = yTile;
		long upVectorParamValue = upVector.nativeObject.pointer;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		int indexBufferUsageParamValue = indexBufferUsage.getValue();
		long returnValue = createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, bowParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue, xTileParamValue, yTileParamValue, upVectorParamValue, vertexBufferUsageParamValue, indexBufferUsageParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage(long pNativeObject, String name, String groupName, long plane, double width, double height, double bow, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double xTile, double yTile, long upVector, int vertexBufferUsage);
	/**
	 * 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param bow 曲面中弓形的数量
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 * @param xTile 纹理在x方向上重复的次数
	 * @param yTile 纹理在y方向上重复的次数
	 * @param upVector 平面的'up'方向
	 * @param vertexBufferUsage 平面创建的顶点缓存用法标记
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double bow, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double xTile, double yTile, com.earthview.world.spatial.math.Vector3 upVector, com.earthview.world.graphic.HardwareBuffer.Usage vertexBufferUsage)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double bowParamValue = bow;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		double xTileParamValue = xTile;
		double yTileParamValue = yTile;
		long upVectorParamValue = upVector.nativeObject.pointer;
		int vertexBufferUsageParamValue = vertexBufferUsage.getValue();
		long returnValue = createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, bowParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue, xTileParamValue, yTileParamValue, upVectorParamValue, vertexBufferUsageParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3(long pNativeObject, String name, String groupName, long plane, double width, double height, double bow, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double xTile, double yTile, long upVector);
	/**
	 * 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param bow 曲面中弓形的数量
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 * @param xTile 纹理在x方向上重复的次数
	 * @param yTile 纹理在y方向上重复的次数
	 * @param upVector 平面的'up'方向
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double bow, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double xTile, double yTile, com.earthview.world.spatial.math.Vector3 upVector)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double bowParamValue = bow;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		double xTileParamValue = xTile;
		double yTileParamValue = yTile;
		long upVectorParamValue = upVector.nativeObject.pointer;
		long returnValue = createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, bowParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue, xTileParamValue, yTileParamValue, upVectorParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real(long pNativeObject, String name, String groupName, long plane, double width, double height, double bow, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double xTile, double yTile);
	/**
	 * 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param bow 曲面中弓形的数量
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 * @param xTile 纹理在x方向上重复的次数
	 * @param yTile 纹理在y方向上重复的次数
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double bow, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double xTile, double yTile)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double bowParamValue = bow;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		double xTileParamValue = xTile;
		double yTileParamValue = yTile;
		long returnValue = createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, bowParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue, xTileParamValue, yTileParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real(long pNativeObject, String name, String groupName, long plane, double width, double height, double bow, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double xTile);
	/**
	 * 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param bow 曲面中弓形的数量
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 * @param xTile 纹理在x方向上重复的次数
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double bow, int xsegments, int ysegments, boolean normals, int numTexCoordSets, double xTile)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double bowParamValue = bow;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		double xTileParamValue = xTile;
		long returnValue = createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, bowParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue, xTileParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16(long pNativeObject, String name, String groupName, long plane, double width, double height, double bow, int xsegments, int ysegments, boolean normals, int numTexCoordSets);
	/**
	 * 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param bow 曲面中弓形的数量
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 * @param numTexCoordSets 2D纹理坐标集合的数量
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double bow, int xsegments, int ysegments, boolean normals, int numTexCoordSets)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double bowParamValue = bow;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		int numTexCoordSetsParamValue = numTexCoordSets;
		long returnValue = createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, bowParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue, numTexCoordSetsParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool(long pNativeObject, String name, String groupName, long plane, double width, double height, double bow, int xsegments, int ysegments, boolean normals);
	/**
	 * 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param bow 曲面中弓形的数量
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 * @param normals 如果为true，创建该平面的法线
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double bow, int xsegments, int ysegments, boolean normals)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double bowParamValue = bow;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		boolean normalsParamValue = normals;
		long returnValue = createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, bowParamValue, xsegmentsParamValue, ysegmentsParamValue, normalsParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32(long pNativeObject, String name, String groupName, long plane, double width, double height, double bow, int xsegments, int ysegments);
	/**
	 * 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param bow 曲面中弓形的数量
	 * @param xsegments X轴方向线段的数量
	 * @param ysegments Y轴方向线段的数量
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double bow, int xsegments, int ysegments)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double bowParamValue = bow;
		int xsegmentsParamValue = xsegments;
		int ysegmentsParamValue = ysegments;
		long returnValue = createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, bowParamValue, xsegmentsParamValue, ysegmentsParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32(long pNativeObject, String name, String groupName, long plane, double width, double height, double bow, int xsegments);
	/**
	 * 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param bow 曲面中弓形的数量
	 * @param xsegments X轴方向线段的数量
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double bow, int xsegments)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double bowParamValue = bow;
		int xsegmentsParamValue = xsegments;
		long returnValue = createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real_ev_int32(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, bowParamValue, xsegmentsParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real(long pNativeObject, String name, String groupName, long plane, double width, double height, double bow);
	/**
	 * 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param bow 曲面中弓形的数量
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height, double bow)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		double bowParamValue = bow;
		long returnValue = createCurvedPlane_EVString_EVString_CPlane_Real_Real_Real(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue, bowParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createCurvedPlane_EVString_EVString_CPlane_Real_Real(long pNativeObject, String name, String groupName, long plane, double width, double height);
	/**
	 * 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param plane 平面的方向和到原定的距离
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 */
	public com.earthview.world.graphic.MeshPtr createCurvedPlane(String name, String groupName, com.earthview.world.spatial.math.Plane plane, double width, double height)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long planeParamValue = plane.nativeObject.pointer;
		double widthParamValue = width;
		double heightParamValue = height;
		long returnValue = createCurvedPlane_EVString_EVString_CPlane_Real_Real(this.nativeObject.pointer, nameParamValue, groupNameParamValue, planeParamValue, widthParamValue, heightParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long createBezierPatch_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage_Usage_ev_bool_ev_bool(long pNativeObject, String name, String groupName, long controlPointBuffer, long declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, int visibleSide, int vbUsage, int ibUsage, boolean vbUseShadow, boolean ibUseShadow);
	/**
	 * 基于控制顶点队列创建一个贝塞尔曲面
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param controlPointBuffer 指向包含顶点数据的缓存
	 * @param declaration 指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param uMaxSubdivisionLevel 手动设置u方向细分的最高等级
	 * @param  vMaxSubdivisionLevel 手动设置v方向细分的最高等级
	 * @param visibleSide 决定曲面的哪一面或者是两面都是表面
	 * @param vbUsage 顶点缓存的用法标记
	 * @param ibUsage 索引缓存的用法标记
	 * @param vbUseShadow 决定顶点缓存是否产生阴影缓存
	 * @param ibUseShadow 决定索引缓存是否产生阴影缓存
	 */
	public com.earthview.world.graphic.PatchMeshPtr createBezierPatch(String name, String groupName, VoidPointer controlPointBuffer, com.earthview.world.graphic.VertexDeclaration declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, com.earthview.world.graphic.PatchSurface.VisibleSide visibleSide, com.earthview.world.graphic.HardwareBuffer.Usage vbUsage, com.earthview.world.graphic.HardwareBuffer.Usage ibUsage, boolean vbUseShadow, boolean ibUseShadow)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long controlPointBufferParamValue = (controlPointBuffer == null ? 0L : controlPointBuffer.nativeObject.pointer);
		long declarationParamValue = (declaration == null ? 0L : declaration.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		long uMaxSubdivisionLevelParamValue = uMaxSubdivisionLevel;
		long vMaxSubdivisionLevelParamValue = vMaxSubdivisionLevel;
		int visibleSideParamValue = visibleSide.getValue();
		int vbUsageParamValue = vbUsage.getValue();
		int ibUsageParamValue = ibUsage.getValue();
		boolean vbUseShadowParamValue = vbUseShadow;
		boolean ibUseShadowParamValue = ibUseShadow;
		long returnValue = createBezierPatch_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage_Usage_ev_bool_ev_bool(this.nativeObject.pointer, nameParamValue, groupNameParamValue, controlPointBufferParamValue, declarationParamValue, widthParamValue, heightParamValue, uMaxSubdivisionLevelParamValue, vMaxSubdivisionLevelParamValue, visibleSideParamValue, vbUsageParamValue, ibUsageParamValue, vbUseShadowParamValue, ibUseShadowParamValue);
		com.earthview.world.graphic.PatchMeshPtr __returnValue = new com.earthview.world.graphic.PatchMeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPatchMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.PatchMeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPatchMeshPtr");
		}
		return __returnValue;
	}
	native private long createBezierPatch_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage_Usage_ev_bool(long pNativeObject, String name, String groupName, long controlPointBuffer, long declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, int visibleSide, int vbUsage, int ibUsage, boolean vbUseShadow);
	/**
	 * 基于控制顶点队列创建一个贝塞尔曲面
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param controlPointBuffer 指向包含顶点数据的缓存
	 * @param declaration 指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param uMaxSubdivisionLevel 手动设置u方向细分的最高等级
	 * @param  vMaxSubdivisionLevel 手动设置v方向细分的最高等级
	 * @param visibleSide 决定曲面的哪一面或者是两面都是表面
	 * @param vbUsage 顶点缓存的用法标记
	 * @param ibUsage 索引缓存的用法标记
	 * @param vbUseShadow 决定顶点缓存是否产生阴影缓存
	 */
	public com.earthview.world.graphic.PatchMeshPtr createBezierPatch(String name, String groupName, VoidPointer controlPointBuffer, com.earthview.world.graphic.VertexDeclaration declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, com.earthview.world.graphic.PatchSurface.VisibleSide visibleSide, com.earthview.world.graphic.HardwareBuffer.Usage vbUsage, com.earthview.world.graphic.HardwareBuffer.Usage ibUsage, boolean vbUseShadow)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long controlPointBufferParamValue = (controlPointBuffer == null ? 0L : controlPointBuffer.nativeObject.pointer);
		long declarationParamValue = (declaration == null ? 0L : declaration.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		long uMaxSubdivisionLevelParamValue = uMaxSubdivisionLevel;
		long vMaxSubdivisionLevelParamValue = vMaxSubdivisionLevel;
		int visibleSideParamValue = visibleSide.getValue();
		int vbUsageParamValue = vbUsage.getValue();
		int ibUsageParamValue = ibUsage.getValue();
		boolean vbUseShadowParamValue = vbUseShadow;
		long returnValue = createBezierPatch_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage_Usage_ev_bool(this.nativeObject.pointer, nameParamValue, groupNameParamValue, controlPointBufferParamValue, declarationParamValue, widthParamValue, heightParamValue, uMaxSubdivisionLevelParamValue, vMaxSubdivisionLevelParamValue, visibleSideParamValue, vbUsageParamValue, ibUsageParamValue, vbUseShadowParamValue);
		com.earthview.world.graphic.PatchMeshPtr __returnValue = new com.earthview.world.graphic.PatchMeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPatchMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.PatchMeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPatchMeshPtr");
		}
		return __returnValue;
	}
	native private long createBezierPatch_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage_Usage(long pNativeObject, String name, String groupName, long controlPointBuffer, long declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, int visibleSide, int vbUsage, int ibUsage);
	/**
	 * 基于控制顶点队列创建一个贝塞尔曲面
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param controlPointBuffer 指向包含顶点数据的缓存
	 * @param declaration 指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param uMaxSubdivisionLevel 手动设置u方向细分的最高等级
	 * @param  vMaxSubdivisionLevel 手动设置v方向细分的最高等级
	 * @param visibleSide 决定曲面的哪一面或者是两面都是表面
	 * @param vbUsage 顶点缓存的用法标记
	 * @param ibUsage 索引缓存的用法标记
	 */
	public com.earthview.world.graphic.PatchMeshPtr createBezierPatch(String name, String groupName, VoidPointer controlPointBuffer, com.earthview.world.graphic.VertexDeclaration declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, com.earthview.world.graphic.PatchSurface.VisibleSide visibleSide, com.earthview.world.graphic.HardwareBuffer.Usage vbUsage, com.earthview.world.graphic.HardwareBuffer.Usage ibUsage)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long controlPointBufferParamValue = (controlPointBuffer == null ? 0L : controlPointBuffer.nativeObject.pointer);
		long declarationParamValue = (declaration == null ? 0L : declaration.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		long uMaxSubdivisionLevelParamValue = uMaxSubdivisionLevel;
		long vMaxSubdivisionLevelParamValue = vMaxSubdivisionLevel;
		int visibleSideParamValue = visibleSide.getValue();
		int vbUsageParamValue = vbUsage.getValue();
		int ibUsageParamValue = ibUsage.getValue();
		long returnValue = createBezierPatch_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage_Usage(this.nativeObject.pointer, nameParamValue, groupNameParamValue, controlPointBufferParamValue, declarationParamValue, widthParamValue, heightParamValue, uMaxSubdivisionLevelParamValue, vMaxSubdivisionLevelParamValue, visibleSideParamValue, vbUsageParamValue, ibUsageParamValue);
		com.earthview.world.graphic.PatchMeshPtr __returnValue = new com.earthview.world.graphic.PatchMeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPatchMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.PatchMeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPatchMeshPtr");
		}
		return __returnValue;
	}
	native private long createBezierPatch_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage(long pNativeObject, String name, String groupName, long controlPointBuffer, long declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, int visibleSide, int vbUsage);
	/**
	 * 基于控制顶点队列创建一个贝塞尔曲面
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param controlPointBuffer 指向包含顶点数据的缓存
	 * @param declaration 指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param uMaxSubdivisionLevel 手动设置u方向细分的最高等级
	 * @param  vMaxSubdivisionLevel 手动设置v方向细分的最高等级
	 * @param visibleSide 决定曲面的哪一面或者是两面都是表面
	 * @param vbUsage 顶点缓存的用法标记
	 */
	public com.earthview.world.graphic.PatchMeshPtr createBezierPatch(String name, String groupName, VoidPointer controlPointBuffer, com.earthview.world.graphic.VertexDeclaration declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, com.earthview.world.graphic.PatchSurface.VisibleSide visibleSide, com.earthview.world.graphic.HardwareBuffer.Usage vbUsage)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long controlPointBufferParamValue = (controlPointBuffer == null ? 0L : controlPointBuffer.nativeObject.pointer);
		long declarationParamValue = (declaration == null ? 0L : declaration.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		long uMaxSubdivisionLevelParamValue = uMaxSubdivisionLevel;
		long vMaxSubdivisionLevelParamValue = vMaxSubdivisionLevel;
		int visibleSideParamValue = visibleSide.getValue();
		int vbUsageParamValue = vbUsage.getValue();
		long returnValue = createBezierPatch_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage(this.nativeObject.pointer, nameParamValue, groupNameParamValue, controlPointBufferParamValue, declarationParamValue, widthParamValue, heightParamValue, uMaxSubdivisionLevelParamValue, vMaxSubdivisionLevelParamValue, visibleSideParamValue, vbUsageParamValue);
		com.earthview.world.graphic.PatchMeshPtr __returnValue = new com.earthview.world.graphic.PatchMeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPatchMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.PatchMeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPatchMeshPtr");
		}
		return __returnValue;
	}
	native private long createBezierPatch_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide(long pNativeObject, String name, String groupName, long controlPointBuffer, long declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, int visibleSide);
	/**
	 * 基于控制顶点队列创建一个贝塞尔曲面
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param controlPointBuffer 指向包含顶点数据的缓存
	 * @param declaration 指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param uMaxSubdivisionLevel 手动设置u方向细分的最高等级
	 * @param  vMaxSubdivisionLevel 手动设置v方向细分的最高等级
	 * @param visibleSide 决定曲面的哪一面或者是两面都是表面
	 */
	public com.earthview.world.graphic.PatchMeshPtr createBezierPatch(String name, String groupName, VoidPointer controlPointBuffer, com.earthview.world.graphic.VertexDeclaration declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, com.earthview.world.graphic.PatchSurface.VisibleSide visibleSide)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long controlPointBufferParamValue = (controlPointBuffer == null ? 0L : controlPointBuffer.nativeObject.pointer);
		long declarationParamValue = (declaration == null ? 0L : declaration.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		long uMaxSubdivisionLevelParamValue = uMaxSubdivisionLevel;
		long vMaxSubdivisionLevelParamValue = vMaxSubdivisionLevel;
		int visibleSideParamValue = visibleSide.getValue();
		long returnValue = createBezierPatch_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide(this.nativeObject.pointer, nameParamValue, groupNameParamValue, controlPointBufferParamValue, declarationParamValue, widthParamValue, heightParamValue, uMaxSubdivisionLevelParamValue, vMaxSubdivisionLevelParamValue, visibleSideParamValue);
		com.earthview.world.graphic.PatchMeshPtr __returnValue = new com.earthview.world.graphic.PatchMeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPatchMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.PatchMeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPatchMeshPtr");
		}
		return __returnValue;
	}
	native private long createBezierPatch_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t(long pNativeObject, String name, String groupName, long controlPointBuffer, long declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel);
	/**
	 * 基于控制顶点队列创建一个贝塞尔曲面
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param controlPointBuffer 指向包含顶点数据的缓存
	 * @param declaration 指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param uMaxSubdivisionLevel 手动设置u方向细分的最高等级
	 * @param  vMaxSubdivisionLevel 手动设置v方向细分的最高等级
	 */
	public com.earthview.world.graphic.PatchMeshPtr createBezierPatch(String name, String groupName, VoidPointer controlPointBuffer, com.earthview.world.graphic.VertexDeclaration declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long controlPointBufferParamValue = (controlPointBuffer == null ? 0L : controlPointBuffer.nativeObject.pointer);
		long declarationParamValue = (declaration == null ? 0L : declaration.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		long uMaxSubdivisionLevelParamValue = uMaxSubdivisionLevel;
		long vMaxSubdivisionLevelParamValue = vMaxSubdivisionLevel;
		long returnValue = createBezierPatch_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t(this.nativeObject.pointer, nameParamValue, groupNameParamValue, controlPointBufferParamValue, declarationParamValue, widthParamValue, heightParamValue, uMaxSubdivisionLevelParamValue, vMaxSubdivisionLevelParamValue);
		com.earthview.world.graphic.PatchMeshPtr __returnValue = new com.earthview.world.graphic.PatchMeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPatchMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.PatchMeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPatchMeshPtr");
		}
		return __returnValue;
	}
	native private long createBezierPatch_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t(long pNativeObject, String name, String groupName, long controlPointBuffer, long declaration, long width, long height, long uMaxSubdivisionLevel);
	/**
	 * 基于控制顶点队列创建一个贝塞尔曲面
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param controlPointBuffer 指向包含顶点数据的缓存
	 * @param declaration 指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 * @param uMaxSubdivisionLevel 手动设置u方向细分的最高等级
	 */
	public com.earthview.world.graphic.PatchMeshPtr createBezierPatch(String name, String groupName, VoidPointer controlPointBuffer, com.earthview.world.graphic.VertexDeclaration declaration, long width, long height, long uMaxSubdivisionLevel)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long controlPointBufferParamValue = (controlPointBuffer == null ? 0L : controlPointBuffer.nativeObject.pointer);
		long declarationParamValue = (declaration == null ? 0L : declaration.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		long uMaxSubdivisionLevelParamValue = uMaxSubdivisionLevel;
		long returnValue = createBezierPatch_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t(this.nativeObject.pointer, nameParamValue, groupNameParamValue, controlPointBufferParamValue, declarationParamValue, widthParamValue, heightParamValue, uMaxSubdivisionLevelParamValue);
		com.earthview.world.graphic.PatchMeshPtr __returnValue = new com.earthview.world.graphic.PatchMeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPatchMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.PatchMeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPatchMeshPtr");
		}
		return __returnValue;
	}
	native private long createBezierPatch_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t(long pNativeObject, String name, String groupName, long controlPointBuffer, long declaration, long width, long height);
	/**
	 * 基于控制顶点队列创建一个贝塞尔曲面
	 * @param name 模型的名称
	 * @param groupName 资源组的名称
	 * @param controlPointBuffer 指向包含顶点数据的缓存
	 * @param declaration 指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容
	 * @param width 在世界坐标系下平面的宽
	 * @param height 在世界坐标系下平面的高
	 */
	public com.earthview.world.graphic.PatchMeshPtr createBezierPatch(String name, String groupName, VoidPointer controlPointBuffer, com.earthview.world.graphic.VertexDeclaration declaration, long width, long height)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long controlPointBufferParamValue = (controlPointBuffer == null ? 0L : controlPointBuffer.nativeObject.pointer);
		long declarationParamValue = (declaration == null ? 0L : declaration.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		long returnValue = createBezierPatch_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t(this.nativeObject.pointer, nameParamValue, groupNameParamValue, controlPointBufferParamValue, declarationParamValue, widthParamValue, heightParamValue);
		com.earthview.world.graphic.PatchMeshPtr __returnValue = new com.earthview.world.graphic.PatchMeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPatchMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.PatchMeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPatchMeshPtr");
		}
		return __returnValue;
	}
	native private void setPrepareAllMeshesForShadowVolumes_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置是否为阴影准备模型
	 * @param enable 
	 */
	public void setPrepareAllMeshesForShadowVolumes(boolean enable)
	{
		boolean enableParamValue = enable;
		setPrepareAllMeshesForShadowVolumes_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getPrepareAllMeshesForShadowVolumes_void(long pNativeObject);
	/**
	 * 获得是否为阴影准备模型
	 * @param enable 
	 */
	public boolean getPrepareAllMeshesForShadowVolumes()
	{
		boolean returnValue = getPrepareAllMeshesForShadowVolumes_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getBoundsPaddingFactor_void(long pNativeObject);
	public double getBoundsPaddingFactor()
	{
		double returnValue = getBoundsPaddingFactor_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBoundsPaddingFactor_Real(long pNativeObject, double paddingFactor);
	public void setBoundsPaddingFactor(double paddingFactor)
	{
		double paddingFactorParamValue = paddingFactor;
		setBoundsPaddingFactor_Real(this.nativeObject.pointer, paddingFactorParamValue);
	}
	native private void setListener_CModelSerializerListener(long pNativeObject, long listener);
	/**
	 * 设置一个监听器控制模型下载的连续化
	 * @param listener 
	 */
	public void setListener(com.earthview.world.graphic.ModelSerializerListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		setListener_CModelSerializerListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private long getListener_void(long pNativeObject);
	/**
	 * 获得控制模型下载的连续化的监听器
	 * @param  
	 */
	public com.earthview.world.graphic.ModelSerializerListener getListener()
	{
		long returnValue = getListener_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ModelSerializerListener __returnValue = new com.earthview.world.graphic.ModelSerializerListener(CreatedWhenConstruct.CWC_NotToCreate, "CModelSerializerListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ModelSerializerListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelSerializerListener");
		}
		return __returnValue;
	}
	native private void loadResource_CResource(long pNativeObject, long res);
	public void loadResource(com.earthview.world.graphic.Resource res)
	{
		long resParamValue = (res == null ? 0L : res.nativeObject.pointer);
		loadResource_CResource(this.nativeObject.pointer, resParamValue);
	}
	native private long createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String name, long handle, String group, boolean isManual, long loader, long createParams);
	//// @copydoc CResourceManager::createImpl
	public com.earthview.world.graphic.Resource createImpl(String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		String nameParamValue = name;
		long handleParamValue = handle.nativeObject.pointer;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long loaderParamValue = (loader == null ? 0L : loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		long returnValue = createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, nameParamValue, handleParamValue, groupParamValue, isManualParamValue, loaderParamValue, createParamsParamValue);
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
	native private long createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(long pNativeObject, String name, long handle, String group, boolean isManual, long loader, long createParams);
	protected com.earthview.world.graphic.Resource createImpl_NoVirtual(String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		String nameParamValue = name;
		long handleParamValue = handle.nativeObject.pointer;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long loaderParamValue = (loader == null ? 0L : loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		long returnValue = createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.nativeObject.pointer, nameParamValue, handleParamValue, groupParamValue, isManualParamValue, loaderParamValue, createParamsParamValue);
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

	public MeshManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshManager(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	native protected void register_prepareResource_CResource(long pNativeObject, String method);
	native protected void register_getManualResourceLoaderPtr_void(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_Usage_Usage_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_Usage_Usage_ev_bool(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_Usage_Usage(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_Usage(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_Usage_Usage_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_Usage_Usage_ev_bool(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_Usage_Usage(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_Usage(long pNativeObject, String method);
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
			this.register_prepareResource_CResource(this.nativeObject.pointer, "prepareResource_CResource_callback");
			this.register_getManualResourceLoaderPtr_void(this.nativeObject.pointer, "getManualResourceLoaderPtr_void_callback");
			this.register_prepare_EVString_EVString_Usage_Usage_ev_bool_ev_bool(this.nativeObject.pointer, "prepare_EVString_EVString_Usage_Usage_ev_bool_ev_bool_callback");
			this.register_prepare_EVString_EVString_Usage_Usage_ev_bool(this.nativeObject.pointer, "prepare_EVString_EVString_Usage_Usage_ev_bool_callback");
			this.register_prepare_EVString_EVString_Usage_Usage(this.nativeObject.pointer, "prepare_EVString_EVString_Usage_Usage_callback");
			this.register_prepare_EVString_EVString_Usage(this.nativeObject.pointer, "prepare_EVString_EVString_Usage_callback");
			this.register_load_EVString_EVString_Usage_Usage_ev_bool_ev_bool(this.nativeObject.pointer, "load_EVString_EVString_Usage_Usage_ev_bool_ev_bool_callback");
			this.register_load_EVString_EVString_Usage_Usage_ev_bool(this.nativeObject.pointer, "load_EVString_EVString_Usage_Usage_ev_bool_callback");
			this.register_load_EVString_EVString_Usage_Usage(this.nativeObject.pointer, "load_EVString_EVString_Usage_Usage_callback");
			this.register_load_EVString_EVString_Usage(this.nativeObject.pointer, "load_EVString_EVString_Usage_callback");
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
	
	public static MeshManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshManager obj = null;
 		if(baseObj instanceof MeshManager)
		{
			obj = (MeshManager)baseObj;
		} else {
			obj = new MeshManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshManager");
			obj.increaseCast();
		}

		return obj;
	}
}
