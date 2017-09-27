package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 资源组管理器(单键)
 */
public class ResourceGroupManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceGroupManager", new ResourceGroupManagerClassFactory());
	}

	native private static long getSingleton_void();
	public static com.earthview.world.graphic.ResourceGroupManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.ResourceGroupManager __returnValue = new com.earthview.world.graphic.ResourceGroupManager(CreatedWhenConstruct.CWC_NotToCreate, "CResourceGroupManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceGroupManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CResourceGroupManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.graphic.ResourceGroupManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ResourceGroupManager __returnValue = new com.earthview.world.graphic.ResourceGroupManager(CreatedWhenConstruct.CWC_NotToCreate, "CResourceGroupManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceGroupManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CResourceGroupManager");
		}
		return __returnValue;
	}
	native private static String get_DEFAULT_RESOURCE_GROUP_NAME_void();
	public static String get_DEFAULT_RESOURCE_GROUP_NAME()
	{
		String jniValue = get_DEFAULT_RESOURCE_GROUP_NAME_void();
		
		return jniValue;
	}
	
	native private static void set_DEFAULT_RESOURCE_GROUP_NAME_EVString (String value);
	public static void set_DEFAULT_RESOURCE_GROUP_NAME(String DEFAULT_RESOURCE_GROUP_NAME)
	{
		String DEFAULT_RESOURCE_GROUP_NAMEParamValue = DEFAULT_RESOURCE_GROUP_NAME;
		
		set_DEFAULT_RESOURCE_GROUP_NAME_EVString(DEFAULT_RESOURCE_GROUP_NAMEParamValue);
	}
	
	native private static String get_INTERNAL_RESOURCE_GROUP_NAME_void();
	public static String get_INTERNAL_RESOURCE_GROUP_NAME()
	{
		String jniValue = get_INTERNAL_RESOURCE_GROUP_NAME_void();
		
		return jniValue;
	}
	
	native private static void set_INTERNAL_RESOURCE_GROUP_NAME_EVString (String value);
	public static void set_INTERNAL_RESOURCE_GROUP_NAME(String INTERNAL_RESOURCE_GROUP_NAME)
	{
		String INTERNAL_RESOURCE_GROUP_NAMEParamValue = INTERNAL_RESOURCE_GROUP_NAME;
		
		set_INTERNAL_RESOURCE_GROUP_NAME_EVString(INTERNAL_RESOURCE_GROUP_NAMEParamValue);
	}
	
	native private static String get_AUTODETECT_RESOURCE_GROUP_NAME_void();
	public static String get_AUTODETECT_RESOURCE_GROUP_NAME()
	{
		String jniValue = get_AUTODETECT_RESOURCE_GROUP_NAME_void();
		
		return jniValue;
	}
	
	native private static void set_AUTODETECT_RESOURCE_GROUP_NAME_EVString (String value);
	public static void set_AUTODETECT_RESOURCE_GROUP_NAME(String AUTODETECT_RESOURCE_GROUP_NAME)
	{
		String AUTODETECT_RESOURCE_GROUP_NAMEParamValue = AUTODETECT_RESOURCE_GROUP_NAME;
		
		set_AUTODETECT_RESOURCE_GROUP_NAME_EVString(AUTODETECT_RESOURCE_GROUP_NAMEParamValue);
	}
	
	native private static long get_RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS_void();
	public static long get_RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS()
	{
		long jniValue = get_RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS_void();
		
		return jniValue;
	}
	
	native private static void set_RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS_ev_size_t (long value);
	public static void set_RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS(long RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS)
	{
		long RESOURCE_SYSTEM_NUM_REFERENCE_COUNTSParamValue = RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS;
		
		set_RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS_ev_size_t(RESOURCE_SYSTEM_NUM_REFERENCE_COUNTSParamValue);
	}
	
	//// Nested struct defining a resource declaration
	public static class ResourceDeclaration extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration", new ResourceDeclarationClassFactory());
		}

		public ResourceDeclaration() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ResourceDeclaration", null);
		}

		native private String get_resourceName_void(long pNativeObject);
		public String get_resourceName()
		{
			String jniValue = get_resourceName_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_resourceName_EVString (long pNativeObject, String value);
		public void set_resourceName(String resourceName)
		{
			String resourceNameParamValue = resourceName;
			
			set_resourceName_EVString(this.nativeObject.pointer, resourceNameParamValue);
		}
		
		native private String get_resourceType_void(long pNativeObject);
		public String get_resourceType()
		{
			String jniValue = get_resourceType_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_resourceType_EVString (long pNativeObject, String value);
		public void set_resourceType(String resourceType)
		{
			String resourceTypeParamValue = resourceType;
			
			set_resourceType_EVString(this.nativeObject.pointer, resourceTypeParamValue);
		}
		
		native private long get_loader_void(long pNativeObject);
		public com.earthview.world.graphic.ManualResourceLoader get_loader()
		{
			long jniValue = get_loader_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.ManualResourceLoader __returnValue = new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate, "CManualResourceLoader");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ManualResourceLoader)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CManualResourceLoader");
			}
			return __returnValue;
		}
		
		native private void set_loader_CManualResourceLoader (long pNativeObject, long value);
		public void set_loader(com.earthview.world.graphic.ManualResourceLoader loader)
		{
			long loaderParamValue = (loader == null ? 0L : loader.nativeObject.pointer);
			
			set_loader_CManualResourceLoader(this.nativeObject.pointer, loaderParamValue);
		}
		
		native private long get_parameters_void(long pNativeObject);
		public com.earthview.world.core.CommonStringPairList get_parameters()
		{
			long jniValue = get_parameters_void(this.nativeObject.pointer);
			
			com.earthview.world.core.CommonStringPairList __returnValue = new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "CommonStringPairList");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.CommonStringPairList)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CommonStringPairList");
			}
			return __returnValue;
		}
		
		native private void set_parameters_CommonStringPairList (long pNativeObject, long value);
		public void set_parameters(com.earthview.world.core.CommonStringPairList parameters)
		{
			long parametersParamValue = parameters.nativeObject.pointer;
			
			set_parameters_CommonStringPairList(this.nativeObject.pointer, parametersParamValue);
		}
		
		public ResourceDeclaration(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ResourceDeclaration(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ResourceDeclaration fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ResourceDeclaration obj = null;
 			if(baseObj instanceof ResourceDeclaration)
			{
				obj = (ResourceDeclaration)baseObj;
			} else {
				obj = new ResourceDeclaration(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ResourceDeclaration");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ResourceDeclarationClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ResourceDeclaration emptyInstance = new ResourceDeclaration(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// List of resource declarations
	public static class ResourceDeclarationList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList", new ResourceDeclarationListClassFactory());
		}

		public ResourceDeclarationList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ResourceDeclarationList", null);
		}

		native private void push_back_ResourceDeclaration(long pNativeObject, long t);
		public void push_back(com.earthview.world.graphic.ResourceGroupManager.ResourceDeclaration t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_ResourceDeclaration(this.nativeObject.pointer, tParamValue);
		}
		native private void push_front_ResourceDeclaration(long pNativeObject, long t);
		public void push_front(com.earthview.world.graphic.ResourceGroupManager.ResourceDeclaration t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_front_ResourceDeclaration(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private void pop_front_void(long pNativeObject);
		public void pop_front()
		{
			pop_front_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public com.earthview.world.graphic.ResourceGroupManager.ResourceDeclaration front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ResourceGroupManager.ResourceDeclaration __returnValue = new com.earthview.world.graphic.ResourceGroupManager.ResourceDeclaration(CreatedWhenConstruct.CWC_NotToCreate, "ResourceDeclaration");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourceGroupManager.ResourceDeclaration)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ResourceDeclaration");
			}
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public com.earthview.world.graphic.ResourceGroupManager.ResourceDeclaration back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ResourceGroupManager.ResourceDeclaration __returnValue = new com.earthview.world.graphic.ResourceGroupManager.ResourceDeclaration(CreatedWhenConstruct.CWC_NotToCreate, "ResourceDeclaration");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourceGroupManager.ResourceDeclaration)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ResourceDeclaration");
			}
			return __returnValue;
		}
		native private long at_ev_uint32(long pNativeObject, long pos);
		public com.earthview.world.graphic.ResourceGroupManager.ResourceDeclaration at(long pos)
		{
			long posParamValue = pos;
			long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
			com.earthview.world.graphic.ResourceGroupManager.ResourceDeclaration __returnValue = new com.earthview.world.graphic.ResourceGroupManager.ResourceDeclaration(CreatedWhenConstruct.CWC_NotToCreate, "ResourceDeclaration");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourceGroupManager.ResourceDeclaration)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ResourceDeclaration");
			}
			return __returnValue;
		}
		native private void insert_ev_uint32_ResourceDeclaration(long pNativeObject, long pos, long t);
		public void insert(long pos, com.earthview.world.graphic.ResourceGroupManager.ResourceDeclaration t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_ResourceDeclaration(this.nativeObject.pointer, posParamValue, tParamValue);
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
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public ResourceDeclarationList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ResourceDeclarationList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ResourceDeclarationList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ResourceDeclarationList obj = null;
 			if(baseObj instanceof ResourceDeclarationList)
			{
				obj = (ResourceDeclarationList)baseObj;
			} else {
				obj = new ResourceDeclarationList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ResourceDeclarationList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ResourceDeclarationListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ResourceDeclarationList emptyInstance = new ResourceDeclarationList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ResourceManagerMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap", new ResourceManagerMapClassFactory());
		}

		native private boolean push_EVString_CResourceManager(long pNativeObject, String key, long ref_val);
		public boolean push(String key, NativeObjectPointer<com.earthview.world.graphic.ResourceManager> ref_val)
		{
			String keyParamValue = key;
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_EVString_CResourceManager(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
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
		public NativeObjectPointer<com.earthview.world.graphic.ResourceManager> OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.ResourceManager> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ResourceManager>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		public NativeObjectPointer<com.earthview.world.graphic.ResourceManager> get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.ResourceManager> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ResourceManager>(new InstancePointer(returnValue));
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
		public ResourceManagerMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ResourceManagerMap", null);
		}

		public ResourceManagerMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ResourceManagerMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ResourceManagerMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ResourceManagerMap obj = null;
 			if(baseObj instanceof ResourceManagerMap)
			{
				obj = (ResourceManagerMap)baseObj;
			} else {
				obj = new ResourceManagerMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ResourceManagerMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ResourceManagerMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ResourceManagerMap emptyInstance = new ResourceManagerMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ResourceManagerMapPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair", new ResourceManagerMapPairClassFactory());
		}

		public ResourceManagerMapPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ResourceManagerMapPair", null);
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
		public com.earthview.world.graphic.ResourceManager get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.ResourceManager __returnValue = new com.earthview.world.graphic.ResourceManager(CreatedWhenConstruct.CWC_NotToCreate, "CResourceManager");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
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
		
		native private void set_second_CResourceManager (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.ResourceManager second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_CResourceManager(this.nativeObject.pointer, secondParamValue);
		}
		
		public ResourceManagerMapPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ResourceManagerMapPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ResourceManagerMapPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ResourceManagerMapPair obj = null;
 			if(baseObj instanceof ResourceManagerMapPair)
			{
				obj = (ResourceManagerMapPair)baseObj;
			} else {
				obj = new ResourceManagerMapPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ResourceManagerMapPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ResourceManagerMapPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ResourceManagerMapPair emptyInstance = new ResourceManagerMapPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ResourceManagerIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator", new ResourceManagerIteratorClassFactory());
		}

		public ResourceManagerIterator(com.earthview.world.graphic.ResourceGroupManager.ResourceManagerMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("ResourceManagerIterator", list);
		}

		public ResourceManagerIterator(com.earthview.world.graphic.ResourceGroupManager.ResourceManagerIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("ResourceManagerIterator", list);
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
		public com.earthview.world.graphic.ResourceManager nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
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
		native private long nextValuePtr_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.ResourceManager> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.ResourceManager> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ResourceManager>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.ResourceManager next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
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
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.ResourceGroupManager.ResourceManagerMapPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ResourceGroupManager.ResourceManagerMapPair __returnValue = new com.earthview.world.graphic.ResourceGroupManager.ResourceManagerMapPair(CreatedWhenConstruct.CWC_NotToCreate, "ResourceManagerMapPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourceGroupManager.ResourceManagerMapPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ResourceManagerMapPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.ResourceGroupManager.ResourceManagerMapPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ResourceGroupManager.ResourceManagerMapPair __returnValue = new com.earthview.world.graphic.ResourceGroupManager.ResourceManagerMapPair(CreatedWhenConstruct.CWC_NotToCreate, "ResourceManagerMapPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourceGroupManager.ResourceManagerMapPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ResourceManagerMapPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.ResourceGroupManager.ResourceManagerMapPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ResourceGroupManager.ResourceManagerMapPair __returnValue = new com.earthview.world.graphic.ResourceGroupManager.ResourceManagerMapPair(CreatedWhenConstruct.CWC_NotToCreate, "ResourceManagerMapPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourceGroupManager.ResourceManagerMapPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ResourceManagerMapPair");
			}
			return __returnValue;
		}
		public ResourceManagerIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ResourceManagerIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ResourceManagerIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ResourceManagerIterator obj = null;
 			if(baseObj instanceof ResourceManagerIterator)
			{
				obj = (ResourceManagerIterator)baseObj;
			} else {
				obj = new ResourceManagerIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ResourceManagerIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ResourceManagerIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ResourceManagerIterator emptyInstance = new ResourceManagerIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// EarthView::World::Graphic::CResource location entry
	public static class ResourceLocation extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceGroupManager::CResourceLocation", new ResourceLocationClassFactory());
		}

		native private long get_archive_void(long pNativeObject);
		public com.earthview.world.core.Archive get_archive()
		{
			long jniValue = get_archive_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.core.Archive __returnValue = new com.earthview.world.core.Archive(CreatedWhenConstruct.CWC_NotToCreate, "CArchive");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.Archive)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CArchive");
			}
			return __returnValue;
		}
		
		native private void set_archive_CArchive (long pNativeObject, long value);
		public void set_archive(com.earthview.world.core.Archive archive)
		{
			long archiveParamValue = (archive == null ? 0L : archive.nativeObject.pointer);
			
			set_archive_CArchive(this.nativeObject.pointer, archiveParamValue);
		}
		
		native private boolean get_recursive_void(long pNativeObject);
		public boolean get_recursive()
		{
			boolean jniValue = get_recursive_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_recursive_ev_bool (long pNativeObject, boolean value);
		public void set_recursive(boolean recursive)
		{
			boolean recursiveParamValue = recursive;
			
			set_recursive_ev_bool(this.nativeObject.pointer, recursiveParamValue);
		}
		
		public ResourceLocation() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CResourceLocation", null);
		}

		public ResourceLocation(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ResourceLocation(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ResourceLocation fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ResourceLocation obj = null;
 			if(baseObj instanceof ResourceLocation)
			{
				obj = (ResourceLocation)baseObj;
			} else {
				obj = new ResourceLocation(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CResourceLocation");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ResourceLocationClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ResourceLocation emptyInstance = new ResourceLocation(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// List of possible file locations
	///typedef list<ResourceLocation*> EarthView::World::Graphic::CResourceGroupManager::LocationList;
	public static class LocationList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceGroupManager::LocationList", new LocationListClassFactory());
		}

		public LocationList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("LocationList", null);
		}

		native private void push_back_CResourceLocation(long pNativeObject, long ref_t);
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.ResourceGroupManager.ResourceLocation> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_CResourceLocation(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void push_front_CResourceLocation(long pNativeObject, long ref_t);
		public void push_front(NativeObjectPointer<com.earthview.world.graphic.ResourceGroupManager.ResourceLocation> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_front_CResourceLocation(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private void pop_front_void(long pNativeObject);
		public void pop_front()
		{
			pop_front_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.ResourceGroupManager.ResourceLocation> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.ResourceGroupManager.ResourceLocation> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ResourceGroupManager.ResourceLocation>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.ResourceGroupManager.ResourceLocation> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.ResourceGroupManager.ResourceLocation> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ResourceGroupManager.ResourceLocation>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_uint32(long pNativeObject, long pos);
		public NativeObjectPointer<com.earthview.world.graphic.ResourceGroupManager.ResourceLocation> at(long pos)
		{
			long posParamValue = pos;
			long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
			NativeObjectPointer<com.earthview.world.graphic.ResourceGroupManager.ResourceLocation> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ResourceGroupManager.ResourceLocation>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_CResourceLocation(long pNativeObject, long pos, long ref_t);
		public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.ResourceGroupManager.ResourceLocation> ref_t)
		{
			long posParamValue = pos;
			long ref_tParamValue = ref_t.nativeObject.pointer;
			insert_ev_uint32_CResourceLocation(this.nativeObject.pointer, posParamValue, ref_tParamValue);
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
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public LocationList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public LocationList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static LocationList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			LocationList obj = null;
 			if(baseObj instanceof LocationList)
			{
				obj = (LocationList)baseObj;
			} else {
				obj = new LocationList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "LocationList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class LocationListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			LocationList emptyInstance = new LocationList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// EarthView::World::Graphic::CResource index entry, resourcename->location
	///typedef map<EVString, CArchive*> EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex;
	public static class ResourceLocationIndex extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex", new ResourceLocationIndexClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public ResourceLocationIndex() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ResourceLocationIndex", null);
		}

		native private boolean push_EVString_CArchive(long pNativeObject, String key, long ref_val);
		/**
		 * 增加动画集合元素
		 * @param key 键
		 * @param val 值
		 * @return 成功增加true，否则false
		 */
		public boolean push(String key, NativeObjectPointer<com.earthview.world.core.Archive> ref_val)
		{
			String keyParamValue = key;
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_EVString_CArchive(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
			return returnValue;
		}
		native private boolean exist_EVString(long pNativeObject, String key);
		/**
		 * 判断元素是否存在
		 * @param key 键
		 * @return 存在true，否则false
		 */
		public boolean exist(String key)
		{
			String keyParamValue = key;
			boolean returnValue = exist_EVString(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_EVString(long pNativeObject, String key);
		/**
		 * 重载[]操作符
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public NativeObjectPointer<com.earthview.world.core.Archive> OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.core.Archive> __returnValue = new NativeObjectPointer<com.earthview.world.core.Archive>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		/**
		 * 获得键对应的值
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public NativeObjectPointer<com.earthview.world.core.Archive> get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.core.Archive> __returnValue = new NativeObjectPointer<com.earthview.world.core.Archive>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_EVString(long pNativeObject, String key);
		/**
		 * 删除键对应的键值对
		 * @param key 键
		 */
		public void erase(String key)
		{
			String keyParamValue = key;
			erase_EVString(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回集合的大小
		 * @param  
		 * @return 集合的大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清空集合
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 判断集合是否为空
		 * @param  
		 * @return 集合为空返回true，否则false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public ResourceLocationIndex(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ResourceLocationIndex(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ResourceLocationIndex fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ResourceLocationIndex obj = null;
 			if(baseObj instanceof ResourceLocationIndex)
			{
				obj = (ResourceLocationIndex)baseObj;
			} else {
				obj = new ResourceLocationIndex(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ResourceLocationIndex");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ResourceLocationIndexClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ResourceLocationIndex emptyInstance = new ResourceLocationIndex(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// List of resources which can be loaded / unloaded
	///typedef list<EarthView::World::Graphic::ResourcePtr> EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList;
	public static class LoadUnloadResourceList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList", new LoadUnloadResourceListClassFactory());
		}

		public LoadUnloadResourceList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("LoadUnloadResourceList", null);
		}

		native private void push_back_ResourcePtr(long pNativeObject, long t);
		public void push_back(com.earthview.world.graphic.ResourcePtr t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_ResourcePtr(this.nativeObject.pointer, tParamValue);
		}
		native private void push_front_ResourcePtr(long pNativeObject, long t);
		public void push_front(com.earthview.world.graphic.ResourcePtr t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_front_ResourcePtr(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private void pop_front_void(long pNativeObject);
		public void pop_front()
		{
			pop_front_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public com.earthview.world.graphic.ResourcePtr front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate, "ResourcePtr");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
			}
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public com.earthview.world.graphic.ResourcePtr back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate, "ResourcePtr");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
			}
			return __returnValue;
		}
		native private long at_ev_uint32(long pNativeObject, long pos);
		public com.earthview.world.graphic.ResourcePtr at(long pos)
		{
			long posParamValue = pos;
			long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
			com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate, "ResourcePtr");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
			}
			return __returnValue;
		}
		native private void insert_ev_uint32_ResourcePtr(long pNativeObject, long pos, long t);
		public void insert(long pos, com.earthview.world.graphic.ResourcePtr t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_ResourcePtr(this.nativeObject.pointer, posParamValue, tParamValue);
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
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public LoadUnloadResourceList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public LoadUnloadResourceList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static LoadUnloadResourceList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			LoadUnloadResourceList obj = null;
 			if(baseObj instanceof LoadUnloadResourceList)
			{
				obj = (LoadUnloadResourceList)baseObj;
			} else {
				obj = new LoadUnloadResourceList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "LoadUnloadResourceList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class LoadUnloadResourceListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			LoadUnloadResourceList emptyInstance = new LoadUnloadResourceList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ResourceGroup extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceGroupManager::CResourceGroup", new ResourceGroupClassFactory());
		}

		public enum Status implements INativeEnum<Status> {
			UNINITIALSED(StatusHelper.ENUM_VALUES[0]),
			INITIALISING(StatusHelper.ENUM_VALUES[1]),
			INITIALISED(StatusHelper.ENUM_VALUES[2]),
			LOADING(StatusHelper.ENUM_VALUES[3]),
			LOADED(StatusHelper.ENUM_VALUES[4]);
			private int value;
			Status(int i) {
				this.value = i;
			}
			public Status getEnum(int val) {
				return toEnum(val);
			}
			public int getValue() {
				return this.value;
			}
			public static final Status toEnum(int retval) {
				if(retval == UNINITIALSED.value){
					return UNINITIALSED;
				}
				else if(retval == INITIALISING.value){
					return INITIALISING;
				}
				else if(retval == INITIALISED.value){
					return INITIALISED;
				}
				else if(retval == LOADING.value){
					return LOADING;
				}
				else if(retval == LOADED.value){
					return LOADED;
				}
				throw new RuntimeException("wrong number in jni call for an enum!");
			}
		}
		static class StatusHelper {
			public static final int[] ENUM_VALUES = getEnumValues();
			private static native int[] getEnumValues();
		}
		
		public ResourceGroup() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CResourceGroup", null);
		}

		native private String get_name_void(long pNativeObject);
		public String get_name()
		{
			String jniValue = get_name_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_name_EVString (long pNativeObject, String value);
		public void set_name(String name)
		{
			String nameParamValue = name;
			
			set_name_EVString(this.nativeObject.pointer, nameParamValue);
		}
		
		native private int get_groupStatus_void(long pNativeObject);
		public com.earthview.world.graphic.ResourceGroupManager.ResourceGroup.Status get_groupStatus()
		{
			int jniValue = get_groupStatus_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.ResourceGroupManager.ResourceGroup.Status.toEnum(jniValue);
		}
		
		native private void set_groupStatus_Status (long pNativeObject, int value);
		public void set_groupStatus(com.earthview.world.graphic.ResourceGroupManager.ResourceGroup.Status groupStatus)
		{
			int groupStatusParamValue = groupStatus.getValue();
			
			set_groupStatus_Status(this.nativeObject.pointer, groupStatusParamValue);
		}
		
		native private long get_locationList_void(long pNativeObject);
		public com.earthview.world.graphic.ResourceGroupManager.LocationList get_locationList()
		{
			long jniValue = get_locationList_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.ResourceGroupManager.LocationList __returnValue = new com.earthview.world.graphic.ResourceGroupManager.LocationList(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "LocationList");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourceGroupManager.LocationList)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "LocationList");
			}
			return __returnValue;
		}
		
		native private void set_locationList_LocationList (long pNativeObject, long value);
		public void set_locationList(com.earthview.world.graphic.ResourceGroupManager.LocationList locationList)
		{
			long locationListParamValue = locationList.nativeObject.pointer;
			
			set_locationList_LocationList(this.nativeObject.pointer, locationListParamValue);
		}
		
		native private long get_resourceIndexCaseSensitive_void(long pNativeObject);
		public com.earthview.world.graphic.ResourceGroupManager.ResourceLocationIndex get_resourceIndexCaseSensitive()
		{
			long jniValue = get_resourceIndexCaseSensitive_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.ResourceGroupManager.ResourceLocationIndex __returnValue = new com.earthview.world.graphic.ResourceGroupManager.ResourceLocationIndex(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "ResourceLocationIndex");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourceGroupManager.ResourceLocationIndex)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "ResourceLocationIndex");
			}
			return __returnValue;
		}
		
		native private void set_resourceIndexCaseSensitive_ResourceLocationIndex (long pNativeObject, long value);
		public void set_resourceIndexCaseSensitive(com.earthview.world.graphic.ResourceGroupManager.ResourceLocationIndex resourceIndexCaseSensitive)
		{
			long resourceIndexCaseSensitiveParamValue = resourceIndexCaseSensitive.nativeObject.pointer;
			
			set_resourceIndexCaseSensitive_ResourceLocationIndex(this.nativeObject.pointer, resourceIndexCaseSensitiveParamValue);
		}
		
		native private long get_resourceIndexCaseInsensitive_void(long pNativeObject);
		public com.earthview.world.graphic.ResourceGroupManager.ResourceLocationIndex get_resourceIndexCaseInsensitive()
		{
			long jniValue = get_resourceIndexCaseInsensitive_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.ResourceGroupManager.ResourceLocationIndex __returnValue = new com.earthview.world.graphic.ResourceGroupManager.ResourceLocationIndex(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "ResourceLocationIndex");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourceGroupManager.ResourceLocationIndex)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "ResourceLocationIndex");
			}
			return __returnValue;
		}
		
		native private void set_resourceIndexCaseInsensitive_ResourceLocationIndex (long pNativeObject, long value);
		public void set_resourceIndexCaseInsensitive(com.earthview.world.graphic.ResourceGroupManager.ResourceLocationIndex resourceIndexCaseInsensitive)
		{
			long resourceIndexCaseInsensitiveParamValue = resourceIndexCaseInsensitive.nativeObject.pointer;
			
			set_resourceIndexCaseInsensitive_ResourceLocationIndex(this.nativeObject.pointer, resourceIndexCaseInsensitiveParamValue);
		}
		
		native private long get_resourceDeclarations_void(long pNativeObject);
		public com.earthview.world.graphic.ResourceGroupManager.ResourceDeclarationList get_resourceDeclarations()
		{
			long jniValue = get_resourceDeclarations_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.ResourceGroupManager.ResourceDeclarationList __returnValue = new com.earthview.world.graphic.ResourceGroupManager.ResourceDeclarationList(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "ResourceDeclarationList");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourceGroupManager.ResourceDeclarationList)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "ResourceDeclarationList");
			}
			return __returnValue;
		}
		
		native private void set_resourceDeclarations_ResourceDeclarationList (long pNativeObject, long value);
		public void set_resourceDeclarations(com.earthview.world.graphic.ResourceGroupManager.ResourceDeclarationList resourceDeclarations)
		{
			long resourceDeclarationsParamValue = resourceDeclarations.nativeObject.pointer;
			
			set_resourceDeclarations_ResourceDeclarationList(this.nativeObject.pointer, resourceDeclarationsParamValue);
		}
		
		//// Created resources which are ready to be loaded / unloaded
		/// Group by loading order of the type (defined by EarthView::World::Graphic::CResourceManager)
		/// (e.g. skeletons and materials before meshes)
		///typedef map<Real, EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*> LoadResourceOrderMap;
		public static class LoadUnloadResourceOrderMap extends com.earthview.world.core.BaseObject {
			
			static {
				GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap", new LoadUnloadResourceOrderMapClassFactory());
			}

			public LoadUnloadResourceOrderMap() {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				Create("LoadUnloadResourceOrderMap", null);
			}

			native private boolean push_Real_LoadUnloadResourceList(long pNativeObject, double key, long ref_val);
			public boolean push(double key, NativeObjectPointer<com.earthview.world.graphic.ResourceGroupManager.LoadUnloadResourceList> ref_val)
			{
				double keyParamValue = key;
				long ref_valParamValue = ref_val.nativeObject.pointer;
				boolean returnValue = push_Real_LoadUnloadResourceList(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
				return returnValue;
			}
			native private boolean exist_Real(long pNativeObject, double key);
			public boolean exist(double key)
			{
				double keyParamValue = key;
				boolean returnValue = exist_Real(this.nativeObject.pointer, keyParamValue);
				return returnValue;
			}
			native private long OperatorIndex_Real(long pNativeObject, double key);
			public NativeObjectPointer<com.earthview.world.graphic.ResourceGroupManager.LoadUnloadResourceList> OperatorIndex(double key)
			{
				double keyParamValue = key;
				long returnValue = OperatorIndex_Real(this.nativeObject.pointer, keyParamValue);
				NativeObjectPointer<com.earthview.world.graphic.ResourceGroupManager.LoadUnloadResourceList> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ResourceGroupManager.LoadUnloadResourceList>(new InstancePointer(returnValue));
				return __returnValue;
			}
			native private long get_Real(long pNativeObject, double key);
			public NativeObjectPointer<com.earthview.world.graphic.ResourceGroupManager.LoadUnloadResourceList> get(double key)
			{
				double keyParamValue = key;
				long returnValue = get_Real(this.nativeObject.pointer, keyParamValue);
				NativeObjectPointer<com.earthview.world.graphic.ResourceGroupManager.LoadUnloadResourceList> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ResourceGroupManager.LoadUnloadResourceList>(new InstancePointer(returnValue));
				return __returnValue;
			}
			native private void erase_Real(long pNativeObject, double key);
			public void erase(double key)
			{
				double keyParamValue = key;
				erase_Real(this.nativeObject.pointer, keyParamValue);
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
			public LoadUnloadResourceOrderMap(CreatedWhenConstruct cwc) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
			}
			public LoadUnloadResourceOrderMap(CreatedWhenConstruct cwc, String classNameStr) {
				super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
			}
			
			
			
			
			public static LoadUnloadResourceOrderMap fromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
				{
					return null;
				}
				LoadUnloadResourceOrderMap obj = null;
 				if(baseObj instanceof LoadUnloadResourceOrderMap)
				{
					obj = (LoadUnloadResourceOrderMap)baseObj;
				} else {
					obj = new LoadUnloadResourceOrderMap(CreatedWhenConstruct.CWC_NotToCreate);
					obj.bindNativeObject(baseObj.nativeObject, "LoadUnloadResourceOrderMap");
					obj.increaseCast();
				}

				return obj;
			}
		}
		public static class LoadUnloadResourceOrderMapClassFactory implements IClassFactory {
			public BaseObject create()
			{
				LoadUnloadResourceOrderMap emptyInstance = new LoadUnloadResourceOrderMap(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}
		
		native private long get_loadResourceOrderMap_void(long pNativeObject);
		public com.earthview.world.graphic.ResourceGroupManager.ResourceGroup.LoadUnloadResourceOrderMap get_loadResourceOrderMap()
		{
			long jniValue = get_loadResourceOrderMap_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.ResourceGroupManager.ResourceGroup.LoadUnloadResourceOrderMap __returnValue = new com.earthview.world.graphic.ResourceGroupManager.ResourceGroup.LoadUnloadResourceOrderMap(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "LoadUnloadResourceOrderMap");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourceGroupManager.ResourceGroup.LoadUnloadResourceOrderMap)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "LoadUnloadResourceOrderMap");
			}
			return __returnValue;
		}
		
		native private void set_loadResourceOrderMap_LoadUnloadResourceOrderMap (long pNativeObject, long value);
		public void set_loadResourceOrderMap(com.earthview.world.graphic.ResourceGroupManager.ResourceGroup.LoadUnloadResourceOrderMap loadResourceOrderMap)
		{
			long loadResourceOrderMapParamValue = loadResourceOrderMap.nativeObject.pointer;
			
			set_loadResourceOrderMap_LoadUnloadResourceOrderMap(this.nativeObject.pointer, loadResourceOrderMapParamValue);
		}
		
		native private String get_worldGeometry_void(long pNativeObject);
		public String get_worldGeometry()
		{
			String jniValue = get_worldGeometry_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_worldGeometry_EVString (long pNativeObject, String value);
		public void set_worldGeometry(String worldGeometry)
		{
			String worldGeometryParamValue = worldGeometry;
			
			set_worldGeometry_EVString(this.nativeObject.pointer, worldGeometryParamValue);
		}
		
		native private long get_worldGeometrySceneManager_void(long pNativeObject);
		public com.earthview.world.graphic.SceneManager get_worldGeometrySceneManager()
		{
			long jniValue = get_worldGeometrySceneManager_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
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
		
		native private void set_worldGeometrySceneManager_CSceneManager (long pNativeObject, long value);
		public void set_worldGeometrySceneManager(com.earthview.world.graphic.SceneManager worldGeometrySceneManager)
		{
			long worldGeometrySceneManagerParamValue = (worldGeometrySceneManager == null ? 0L : worldGeometrySceneManager.nativeObject.pointer);
			
			set_worldGeometrySceneManager_CSceneManager(this.nativeObject.pointer, worldGeometrySceneManagerParamValue);
		}
		
		native private boolean get_inGlobalPool_void(long pNativeObject);
		public boolean get_inGlobalPool()
		{
			boolean jniValue = get_inGlobalPool_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_inGlobalPool_ev_bool (long pNativeObject, boolean value);
		public void set_inGlobalPool(boolean inGlobalPool)
		{
			boolean inGlobalPoolParamValue = inGlobalPool;
			
			set_inGlobalPool_ev_bool(this.nativeObject.pointer, inGlobalPoolParamValue);
		}
		
		native private void addToIndex_EVString_CArchive(long pNativeObject, String filename, long ref_arch);
		public void addToIndex(String filename, com.earthview.world.core.Archive ref_arch)
		{
			String filenameParamValue = filename;
			long ref_archParamValue = (ref_arch == null ? 0L : ref_arch.nativeObject.pointer);
			addToIndex_EVString_CArchive(this.nativeObject.pointer, filenameParamValue, ref_archParamValue);
		}
		native private void removeFromIndex_EVString_CArchive(long pNativeObject, String filename, long arch);
		public void removeFromIndex(String filename, com.earthview.world.core.Archive arch)
		{
			String filenameParamValue = filename;
			long archParamValue = (arch == null ? 0L : arch.nativeObject.pointer);
			removeFromIndex_EVString_CArchive(this.nativeObject.pointer, filenameParamValue, archParamValue);
		}
		native private void removeFromIndex_CArchive(long pNativeObject, long arch);
		public void removeFromIndex(com.earthview.world.core.Archive arch)
		{
			long archParamValue = (arch == null ? 0L : arch.nativeObject.pointer);
			removeFromIndex_CArchive(this.nativeObject.pointer, archParamValue);
		}
		native private int get_mRefCount_void(long pNativeObject);
		public int get_mRefCount()
		{
			int jniValue = get_mRefCount_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_mRefCount_ev_uint16 (long pNativeObject, int value);
		public void set_mRefCount(int mRefCount)
		{
			int mRefCountParamValue = mRefCount;
			
			set_mRefCount_ev_uint16(this.nativeObject.pointer, mRefCountParamValue);
		}
		
		public ResourceGroup(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ResourceGroup(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ResourceGroup fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ResourceGroup obj = null;
 			if(baseObj instanceof ResourceGroup)
			{
				obj = (ResourceGroup)baseObj;
			} else {
				obj = new ResourceGroup(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CResourceGroup");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ResourceGroupClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ResourceGroup emptyInstance = new ResourceGroup(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public ResourceGroupManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CResourceGroupManager", null);
	}

	native private void createResourceGroup_EVString_ev_bool(long pNativeObject, String name, boolean inGlobalPool);
	/**
	 * 创建资源组
	 * @param name 组名称
	 * @param inGlobalPool 是否为全局组
	 */
	public void createResourceGroup(String name, boolean inGlobalPool)
	{
		String nameParamValue = name;
		boolean inGlobalPoolParamValue = inGlobalPool;
		createResourceGroup_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, inGlobalPoolParamValue);
	}
	native private void createResourceGroup_EVString(long pNativeObject, String name);
	public void createResourceGroup(String name)
	{
		String nameParamValue = name;
		createResourceGroup_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void createResourceGroupWithRefCount_EVString_ev_bool(long pNativeObject, String name, boolean inGlobalPool);
	/**
	 * 创建资源组，带引用计数
	 * @param name 组名称
	 * @param inGlobalPool 是否为全局组
	 */
	public void createResourceGroupWithRefCount(String name, boolean inGlobalPool)
	{
		String nameParamValue = name;
		boolean inGlobalPoolParamValue = inGlobalPool;
		createResourceGroupWithRefCount_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, inGlobalPoolParamValue);
	}
	native private void createResourceGroupWithRefCount_EVString(long pNativeObject, String name);
	public void createResourceGroupWithRefCount(String name)
	{
		String nameParamValue = name;
		createResourceGroupWithRefCount_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private long getResourceGroup_EVString(long pNativeObject, String name);
	/**
	 * 获得资源组
	 * @param name 组名称
	 */
	public com.earthview.world.graphic.ResourceGroupManager.ResourceGroup getResourceGroup(String name)
	{
		String nameParamValue = name;
		long returnValue = getResourceGroup_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ResourceGroupManager.ResourceGroup __returnValue = new com.earthview.world.graphic.ResourceGroupManager.ResourceGroup(CreatedWhenConstruct.CWC_NotToCreate, "CResourceGroup");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceGroupManager.ResourceGroup)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CResourceGroup");
		}
		return __returnValue;
	}
	native private void initialiseResourceGroup_EVString(long pNativeObject, String name);
	/**
	 * 初始化资源组(组内资源将被创建)
	 * @param name 组名称
	 */
	public void initialiseResourceGroup(String name)
	{
		String nameParamValue = name;
		initialiseResourceGroup_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private boolean parseScript_DataStreamPtr_EVString(long pNativeObject, long stream, String groupName);
	/**
	 * 解析脚本
	 * @param  
	 */
	public boolean parseScript(com.earthview.world.core.DataStreamPtr stream, String groupName)
	{
		long streamParamValue = stream.nativeObject.pointer;
		String groupNameParamValue = groupName;
		boolean returnValue = parseScript_DataStreamPtr_EVString(this.nativeObject.pointer, streamParamValue, groupNameParamValue);
		return returnValue;
	}
	native private void initialiseAllResourceGroups_void(long pNativeObject);
	/**
	 * 初始化所有资源组(组内资源将被创建)
	 * @param  
	 */
	public void initialiseAllResourceGroups()
	{
		initialiseAllResourceGroups_void(this.nativeObject.pointer);
	}
	native private void prepareResourceGroup_EVString_ev_bool_ev_bool(long pNativeObject, String name, boolean prepareMainResources, boolean prepareWorldGeom);
	/**
	 * 准备资源组(加载资源文件，准备资源)
	 * @param  
	 */
	public void prepareResourceGroup(String name, boolean prepareMainResources, boolean prepareWorldGeom)
	{
		String nameParamValue = name;
		boolean prepareMainResourcesParamValue = prepareMainResources;
		boolean prepareWorldGeomParamValue = prepareWorldGeom;
		prepareResourceGroup_EVString_ev_bool_ev_bool(this.nativeObject.pointer, nameParamValue, prepareMainResourcesParamValue, prepareWorldGeomParamValue);
	}
	native private void prepareResourceGroup_EVString_ev_bool(long pNativeObject, String name, boolean prepareMainResources);
	public void prepareResourceGroup(String name, boolean prepareMainResources)
	{
		String nameParamValue = name;
		boolean prepareMainResourcesParamValue = prepareMainResources;
		prepareResourceGroup_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, prepareMainResourcesParamValue);
	}
	native private void prepareResourceGroup_EVString(long pNativeObject, String name);
	public void prepareResourceGroup(String name)
	{
		String nameParamValue = name;
		prepareResourceGroup_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void loadResourceGroup_EVString_ev_bool_ev_bool(long pNativeObject, String name, boolean loadMainResources, boolean loadWorldGeom);
	/**
	 * 加载资源组
	 * @param  
	 */
	public void loadResourceGroup(String name, boolean loadMainResources, boolean loadWorldGeom)
	{
		String nameParamValue = name;
		boolean loadMainResourcesParamValue = loadMainResources;
		boolean loadWorldGeomParamValue = loadWorldGeom;
		loadResourceGroup_EVString_ev_bool_ev_bool(this.nativeObject.pointer, nameParamValue, loadMainResourcesParamValue, loadWorldGeomParamValue);
	}
	native private void loadResourceGroup_EVString_ev_bool(long pNativeObject, String name, boolean loadMainResources);
	public void loadResourceGroup(String name, boolean loadMainResources)
	{
		String nameParamValue = name;
		boolean loadMainResourcesParamValue = loadMainResources;
		loadResourceGroup_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, loadMainResourcesParamValue);
	}
	native private void loadResourceGroup_EVString(long pNativeObject, String name);
	public void loadResourceGroup(String name)
	{
		String nameParamValue = name;
		loadResourceGroup_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void unloadResourceGroup_EVString_ev_bool(long pNativeObject, String name, boolean reloadableOnly);
	/**
	 * 卸载资源组
	 * @param  
	 */
	public void unloadResourceGroup(String name, boolean reloadableOnly)
	{
		String nameParamValue = name;
		boolean reloadableOnlyParamValue = reloadableOnly;
		unloadResourceGroup_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, reloadableOnlyParamValue);
	}
	native private void unloadResourceGroup_EVString(long pNativeObject, String name);
	public void unloadResourceGroup(String name)
	{
		String nameParamValue = name;
		unloadResourceGroup_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void unloadUnreferencedResourcesInGroup_EVString_ev_bool(long pNativeObject, String name, boolean reloadableOnly);
	/**
	 * 卸载资源组内未被引用的资源
	 * @param  
	 */
	public void unloadUnreferencedResourcesInGroup(String name, boolean reloadableOnly)
	{
		String nameParamValue = name;
		boolean reloadableOnlyParamValue = reloadableOnly;
		unloadUnreferencedResourcesInGroup_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, reloadableOnlyParamValue);
	}
	native private void unloadUnreferencedResourcesInGroup_EVString(long pNativeObject, String name);
	public void unloadUnreferencedResourcesInGroup(String name)
	{
		String nameParamValue = name;
		unloadUnreferencedResourcesInGroup_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void clearResourceGroup_EVString(long pNativeObject, String name);
	/**
	 * 清理资源组内的资源
	 * @param  
	 */
	public void clearResourceGroup(String name)
	{
		String nameParamValue = name;
		clearResourceGroup_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void destroyResourceGroup_EVString(long pNativeObject, String name);
	/**
	 * 销毁资源组
	 * @param  
	 */
	public void destroyResourceGroup(String name)
	{
		String nameParamValue = name;
		destroyResourceGroup_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void destroyResourceGroupWithRefCount_EVString(long pNativeObject, String name);
	/**
	 * 销毁空的资源组,根据引用计数。与createResourceGroupWithRefCount配对
	 * @param  
	 */
	public void destroyResourceGroupWithRefCount(String name)
	{
		String nameParamValue = name;
		destroyResourceGroupWithRefCount_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private boolean isResourceGroupInitialised_EVString(long pNativeObject, String name);
	/**
	 * 资源组是否已经被初始化
	 * @param  
	 */
	public boolean isResourceGroupInitialised(String name)
	{
		String nameParamValue = name;
		boolean returnValue = isResourceGroupInitialised_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private boolean isResourceGroupLoaded_EVString(long pNativeObject, String name);
	/**
	 * 资源组是否已经被加载
	 * @param  
	 */
	public boolean isResourceGroupLoaded(String name)
	{
		String nameParamValue = name;
		boolean returnValue = isResourceGroupLoaded_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private boolean resourceGroupExists_EVString(long pNativeObject, String name);
	/**
	 * 资源组是否已经存在
	 * @param  
	 */
	public boolean resourceGroupExists(String name)
	{
		String nameParamValue = name;
		boolean returnValue = resourceGroupExists_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void addResourceLocation_EVString_EVString_EVString_ev_bool(long pNativeObject, String name, String locType, String resGroup, boolean recursive);
	/**
	 * 添加资源文件定位
	 * @param  
	 */
	public void addResourceLocation(String name, String locType, String resGroup, boolean recursive)
	{
		String nameParamValue = name;
		String locTypeParamValue = locType;
		String resGroupParamValue = resGroup;
		boolean recursiveParamValue = recursive;
		addResourceLocation_EVString_EVString_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, locTypeParamValue, resGroupParamValue, recursiveParamValue);
	}
	native private void addResourceLocation_EVString_EVString_EVString(long pNativeObject, String name, String locType, String resGroup);
	public void addResourceLocation(String name, String locType, String resGroup)
	{
		String nameParamValue = name;
		String locTypeParamValue = locType;
		String resGroupParamValue = resGroup;
		addResourceLocation_EVString_EVString_EVString(this.nativeObject.pointer, nameParamValue, locTypeParamValue, resGroupParamValue);
	}
	native private void addResourceLocation_EVString_EVString(long pNativeObject, String name, String locType);
	public void addResourceLocation(String name, String locType)
	{
		String nameParamValue = name;
		String locTypeParamValue = locType;
		addResourceLocation_EVString_EVString(this.nativeObject.pointer, nameParamValue, locTypeParamValue);
	}
	native private void removeResourceLocation_EVString_EVString(long pNativeObject, String name, String resGroup);
	/**
	 * 移除资源文件定位
	 * @param  
	 */
	public void removeResourceLocation(String name, String resGroup)
	{
		String nameParamValue = name;
		String resGroupParamValue = resGroup;
		removeResourceLocation_EVString_EVString(this.nativeObject.pointer, nameParamValue, resGroupParamValue);
	}
	native private void removeResourceLocation_EVString(long pNativeObject, String name);
	public void removeResourceLocation(String name)
	{
		String nameParamValue = name;
		removeResourceLocation_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setResourceLocation_EVString_EVString_EVString_ev_bool(long pNativeObject, String name, String locType, String resGroup, boolean recursive);
	/**
	 * 设置资源文件定位
	 * @param  
	 */
	public void setResourceLocation(String name, String locType, String resGroup, boolean recursive)
	{
		String nameParamValue = name;
		String locTypeParamValue = locType;
		String resGroupParamValue = resGroup;
		boolean recursiveParamValue = recursive;
		setResourceLocation_EVString_EVString_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, locTypeParamValue, resGroupParamValue, recursiveParamValue);
	}
	native private void setResourceLocation_EVString_EVString_EVString(long pNativeObject, String name, String locType, String resGroup);
	public void setResourceLocation(String name, String locType, String resGroup)
	{
		String nameParamValue = name;
		String locTypeParamValue = locType;
		String resGroupParamValue = resGroup;
		setResourceLocation_EVString_EVString_EVString(this.nativeObject.pointer, nameParamValue, locTypeParamValue, resGroupParamValue);
	}
	native private void setResourceLocation_EVString_EVString(long pNativeObject, String name, String locType);
	public void setResourceLocation(String name, String locType)
	{
		String nameParamValue = name;
		String locTypeParamValue = locType;
		setResourceLocation_EVString_EVString(this.nativeObject.pointer, nameParamValue, locTypeParamValue);
	}
	native private boolean resourceLocationExists_EVString_EVString(long pNativeObject, String name, String resGroup);
	/**
	 * 资源文件定位是否已经存在
	 * @param  
	 */
	public boolean resourceLocationExists(String name, String resGroup)
	{
		String nameParamValue = name;
		String resGroupParamValue = resGroup;
		boolean returnValue = resourceLocationExists_EVString_EVString(this.nativeObject.pointer, nameParamValue, resGroupParamValue);
		return returnValue;
	}
	native private boolean resourceLocationExists_EVString(long pNativeObject, String name);
	public boolean resourceLocationExists(String name)
	{
		String nameParamValue = name;
		boolean returnValue = resourceLocationExists_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void declareResource_EVString_EVString_EVString_CommonStringPairList(long pNativeObject, String name, String resourceType, String groupName, long loadParameters);
	/**
	 * 声明资源
	 * @param  
	 */
	public void declareResource(String name, String resourceType, String groupName, com.earthview.world.core.CommonStringPairList loadParameters)
	{
		String nameParamValue = name;
		String resourceTypeParamValue = resourceType;
		String groupNameParamValue = groupName;
		long loadParametersParamValue = loadParameters.nativeObject.pointer;
		declareResource_EVString_EVString_EVString_CommonStringPairList(this.nativeObject.pointer, nameParamValue, resourceTypeParamValue, groupNameParamValue, loadParametersParamValue);
	}
	native private void declareResource_EVString_EVString_EVString(long pNativeObject, String name, String resourceType, String groupName);
	public void declareResource(String name, String resourceType, String groupName)
	{
		String nameParamValue = name;
		String resourceTypeParamValue = resourceType;
		String groupNameParamValue = groupName;
		declareResource_EVString_EVString_EVString(this.nativeObject.pointer, nameParamValue, resourceTypeParamValue, groupNameParamValue);
	}
	native private void declareResource_EVString_EVString(long pNativeObject, String name, String resourceType);
	public void declareResource(String name, String resourceType)
	{
		String nameParamValue = name;
		String resourceTypeParamValue = resourceType;
		declareResource_EVString_EVString(this.nativeObject.pointer, nameParamValue, resourceTypeParamValue);
	}
	native private void declareResource_EVString_EVString_EVString_CManualResourceLoader_CommonStringPairList(long pNativeObject, String name, String resourceType, String groupName, long ref_loader, long loadParameters);
	public void declareResource(String name, String resourceType, String groupName, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParameters)
	{
		String nameParamValue = name;
		String resourceTypeParamValue = resourceType;
		String groupNameParamValue = groupName;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long loadParametersParamValue = loadParameters.nativeObject.pointer;
		declareResource_EVString_EVString_EVString_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, nameParamValue, resourceTypeParamValue, groupNameParamValue, ref_loaderParamValue, loadParametersParamValue);
	}
	native private void declareResource_EVString_EVString_EVString_CManualResourceLoader(long pNativeObject, String name, String resourceType, String groupName, long ref_loader);
	public void declareResource(String name, String resourceType, String groupName, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		String nameParamValue = name;
		String resourceTypeParamValue = resourceType;
		String groupNameParamValue = groupName;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		declareResource_EVString_EVString_EVString_CManualResourceLoader(this.nativeObject.pointer, nameParamValue, resourceTypeParamValue, groupNameParamValue, ref_loaderParamValue);
	}
	native private void undeclareResource_EVString_EVString(long pNativeObject, String name, String groupName);
	/**
	 * 反声明资源
	 * @param  
	 */
	public void undeclareResource(String name, String groupName)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		undeclareResource_EVString_EVString(this.nativeObject.pointer, nameParamValue, groupNameParamValue);
	}
	native private long openResource_EVString_EVString_ev_bool_CResource(long pNativeObject, String resourceName, String groupName, boolean searchGroupsIfNotFound, long resourceBeingLoaded);
	/**
	 * 打开资源文件得到数据流
	 * @param  
	 */
	public com.earthview.world.core.DataStreamPtr openResource(String resourceName, String groupName, boolean searchGroupsIfNotFound, com.earthview.world.graphic.Resource resourceBeingLoaded)
	{
		String resourceNameParamValue = resourceName;
		String groupNameParamValue = groupName;
		boolean searchGroupsIfNotFoundParamValue = searchGroupsIfNotFound;
		long resourceBeingLoadedParamValue = (resourceBeingLoaded == null ? 0L : resourceBeingLoaded.nativeObject.pointer);
		long returnValue = openResource_EVString_EVString_ev_bool_CResource(this.nativeObject.pointer, resourceNameParamValue, groupNameParamValue, searchGroupsIfNotFoundParamValue, resourceBeingLoadedParamValue);
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
	native private long openResource_EVString_EVString_ev_bool(long pNativeObject, String resourceName, String groupName, boolean searchGroupsIfNotFound);
	public com.earthview.world.core.DataStreamPtr openResource(String resourceName, String groupName, boolean searchGroupsIfNotFound)
	{
		String resourceNameParamValue = resourceName;
		String groupNameParamValue = groupName;
		boolean searchGroupsIfNotFoundParamValue = searchGroupsIfNotFound;
		long returnValue = openResource_EVString_EVString_ev_bool(this.nativeObject.pointer, resourceNameParamValue, groupNameParamValue, searchGroupsIfNotFoundParamValue);
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
	native private long openResource_EVString_EVString(long pNativeObject, String resourceName, String groupName);
	public com.earthview.world.core.DataStreamPtr openResource(String resourceName, String groupName)
	{
		String resourceNameParamValue = resourceName;
		String groupNameParamValue = groupName;
		long returnValue = openResource_EVString_EVString(this.nativeObject.pointer, resourceNameParamValue, groupNameParamValue);
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
	native private long openResource_EVString(long pNativeObject, String resourceName);
	public com.earthview.world.core.DataStreamPtr openResource(String resourceName)
	{
		String resourceNameParamValue = resourceName;
		long returnValue = openResource_EVString(this.nativeObject.pointer, resourceNameParamValue);
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
	native private long openResources_EVString_EVString(long pNativeObject, String pattern, String groupName);
	/**
	 * 打开多个资源文件得到数据流
	 * @param  
	 */
	public com.earthview.world.core.DataStreamListPtr openResources(String pattern, String groupName)
	{
		String patternParamValue = pattern;
		String groupNameParamValue = groupName;
		long returnValue = openResources_EVString_EVString(this.nativeObject.pointer, patternParamValue, groupNameParamValue);
		com.earthview.world.core.DataStreamListPtr __returnValue = new com.earthview.world.core.DataStreamListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataStreamListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DataStreamListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataStreamListPtr");
		}
		return __returnValue;
	}
	native private long openResources_EVString(long pNativeObject, String pattern);
	public com.earthview.world.core.DataStreamListPtr openResources(String pattern)
	{
		String patternParamValue = pattern;
		long returnValue = openResources_EVString(this.nativeObject.pointer, patternParamValue);
		com.earthview.world.core.DataStreamListPtr __returnValue = new com.earthview.world.core.DataStreamListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataStreamListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DataStreamListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataStreamListPtr");
		}
		return __returnValue;
	}
	native private long listResourceNames_EVString_ev_bool(long pNativeObject, String groupName, boolean dirs);
	/**
	 * 枚举组内资源名称
	 * @param  
	 */
	public com.earthview.world.core.StringVectorPtr listResourceNames(String groupName, boolean dirs)
	{
		String groupNameParamValue = groupName;
		boolean dirsParamValue = dirs;
		long returnValue = listResourceNames_EVString_ev_bool(this.nativeObject.pointer, groupNameParamValue, dirsParamValue);
		com.earthview.world.core.StringVectorPtr __returnValue = new com.earthview.world.core.StringVectorPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVectorPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		}
		return __returnValue;
	}
	native private long listResourceNames_EVString(long pNativeObject, String groupName);
	public com.earthview.world.core.StringVectorPtr listResourceNames(String groupName)
	{
		String groupNameParamValue = groupName;
		long returnValue = listResourceNames_EVString(this.nativeObject.pointer, groupNameParamValue);
		com.earthview.world.core.StringVectorPtr __returnValue = new com.earthview.world.core.StringVectorPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVectorPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		}
		return __returnValue;
	}
	native private long listResourceFileInfo_EVString_ev_bool(long pNativeObject, String groupName, boolean dirs);
	/**
	 * 枚举组内资源文件
	 * @param  
	 */
	public com.earthview.world.core.FileInfoListPtr listResourceFileInfo(String groupName, boolean dirs)
	{
		String groupNameParamValue = groupName;
		boolean dirsParamValue = dirs;
		long returnValue = listResourceFileInfo_EVString_ev_bool(this.nativeObject.pointer, groupNameParamValue, dirsParamValue);
		com.earthview.world.core.FileInfoListPtr __returnValue = new com.earthview.world.core.FileInfoListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.FileInfoListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		}
		return __returnValue;
	}
	native private long listResourceFileInfo_EVString(long pNativeObject, String groupName);
	public com.earthview.world.core.FileInfoListPtr listResourceFileInfo(String groupName)
	{
		String groupNameParamValue = groupName;
		long returnValue = listResourceFileInfo_EVString(this.nativeObject.pointer, groupNameParamValue);
		com.earthview.world.core.FileInfoListPtr __returnValue = new com.earthview.world.core.FileInfoListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.FileInfoListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		}
		return __returnValue;
	}
	native private long findResourceNames_EVString_EVString_ev_bool(long pNativeObject, String groupName, String pattern, boolean dirs);
	/**
	 * 查找组内资源文件或文件夹
	 * @param  
	 */
	public com.earthview.world.core.StringVectorPtr findResourceNames(String groupName, String pattern, boolean dirs)
	{
		String groupNameParamValue = groupName;
		String patternParamValue = pattern;
		boolean dirsParamValue = dirs;
		long returnValue = findResourceNames_EVString_EVString_ev_bool(this.nativeObject.pointer, groupNameParamValue, patternParamValue, dirsParamValue);
		com.earthview.world.core.StringVectorPtr __returnValue = new com.earthview.world.core.StringVectorPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVectorPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		}
		return __returnValue;
	}
	native private long findResourceNames_EVString_EVString(long pNativeObject, String groupName, String pattern);
	public com.earthview.world.core.StringVectorPtr findResourceNames(String groupName, String pattern)
	{
		String groupNameParamValue = groupName;
		String patternParamValue = pattern;
		long returnValue = findResourceNames_EVString_EVString(this.nativeObject.pointer, groupNameParamValue, patternParamValue);
		com.earthview.world.core.StringVectorPtr __returnValue = new com.earthview.world.core.StringVectorPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVectorPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		}
		return __returnValue;
	}
	native private boolean resourceExists_EVString_EVString(long pNativeObject, String group, String filename);
	/**
	 * 询问组内是否存在资源文件
	 * @param  
	 */
	public boolean resourceExists(String group, String filename)
	{
		String groupParamValue = group;
		String filenameParamValue = filename;
		boolean returnValue = resourceExists_EVString_EVString(this.nativeObject.pointer, groupParamValue, filenameParamValue);
		return returnValue;
	}
	native private boolean resourceExists_CResourceGroup_EVString(long pNativeObject, long group, String filename);
	public boolean resourceExists(com.earthview.world.graphic.ResourceGroupManager.ResourceGroup group, String filename)
	{
		long groupParamValue = (group == null ? 0L : group.nativeObject.pointer);
		String filenameParamValue = filename;
		boolean returnValue = resourceExists_CResourceGroup_EVString(this.nativeObject.pointer, groupParamValue, filenameParamValue);
		return returnValue;
	}
	native private boolean resourceExistsInAnyGroup_EVString(long pNativeObject, String filename);
	/**
	 * 询问资源文件是否存在于任一组内
	 * @param  
	 */
	public boolean resourceExistsInAnyGroup(String filename)
	{
		String filenameParamValue = filename;
		boolean returnValue = resourceExistsInAnyGroup_EVString(this.nativeObject.pointer, filenameParamValue);
		return returnValue;
	}
	native private long findGroupContainingResource_EVString(long pNativeObject, String filename);
	/**
	 * 返回包含指定资源文件的组名
	 * @param  
	 */
	public StringPointer findGroupContainingResource(String filename)
	{
		String filenameParamValue = filename;
		long returnValue = findGroupContainingResource_EVString(this.nativeObject.pointer, filenameParamValue);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long findResourceFileInfo_EVString_EVString_ev_bool(long pNativeObject, String group, String pattern, boolean dirs);
	/**
	 * 查找组内满足一定条件的资源文件或文件夹
	 * @param  
	 */
	public com.earthview.world.core.FileInfoListPtr findResourceFileInfo(String group, String pattern, boolean dirs)
	{
		String groupParamValue = group;
		String patternParamValue = pattern;
		boolean dirsParamValue = dirs;
		long returnValue = findResourceFileInfo_EVString_EVString_ev_bool(this.nativeObject.pointer, groupParamValue, patternParamValue, dirsParamValue);
		com.earthview.world.core.FileInfoListPtr __returnValue = new com.earthview.world.core.FileInfoListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.FileInfoListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		}
		return __returnValue;
	}
	native private long findResourceFileInfo_EVString_EVString(long pNativeObject, String group, String pattern);
	public com.earthview.world.core.FileInfoListPtr findResourceFileInfo(String group, String pattern)
	{
		String groupParamValue = group;
		String patternParamValue = pattern;
		long returnValue = findResourceFileInfo_EVString_EVString(this.nativeObject.pointer, groupParamValue, patternParamValue);
		com.earthview.world.core.FileInfoListPtr __returnValue = new com.earthview.world.core.FileInfoListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.FileInfoListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		}
		return __returnValue;
	}
	native private long resourceModifiedTime_EVString_EVString(long pNativeObject, String group, String filename);
	public long resourceModifiedTime(String group, String filename)
	{
		String groupParamValue = group;
		String filenameParamValue = filename;
		long returnValue = resourceModifiedTime_EVString_EVString(this.nativeObject.pointer, groupParamValue, filenameParamValue);
		return returnValue;
	}
	native private long listResourceLocations_EVString(long pNativeObject, String groupName);
	/**
	 * 枚举资源文件定位
	 * @param  
	 */
	public com.earthview.world.core.StringVectorPtr listResourceLocations(String groupName)
	{
		String groupNameParamValue = groupName;
		long returnValue = listResourceLocations_EVString(this.nativeObject.pointer, groupNameParamValue);
		com.earthview.world.core.StringVectorPtr __returnValue = new com.earthview.world.core.StringVectorPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVectorPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		}
		return __returnValue;
	}
	native private long findResourceLocation_EVString_EVString(long pNativeObject, String groupName, String pattern);
	/**
	 * 查找资源文件定位
	 * @param  
	 */
	public com.earthview.world.core.StringVectorPtr findResourceLocation(String groupName, String pattern)
	{
		String groupNameParamValue = groupName;
		String patternParamValue = pattern;
		long returnValue = findResourceLocation_EVString_EVString(this.nativeObject.pointer, groupNameParamValue, patternParamValue);
		com.earthview.world.core.StringVectorPtr __returnValue = new com.earthview.world.core.StringVectorPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVectorPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		}
		return __returnValue;
	}
	native private long resourceModifiedTime_CResourceGroup_EVString(long pNativeObject, long group, String filename);
	public long resourceModifiedTime(com.earthview.world.graphic.ResourceGroupManager.ResourceGroup group, String filename)
	{
		long groupParamValue = (group == null ? 0L : group.nativeObject.pointer);
		String filenameParamValue = filename;
		long returnValue = resourceModifiedTime_CResourceGroup_EVString(this.nativeObject.pointer, groupParamValue, filenameParamValue);
		return returnValue;
	}
	native private long createResource_EVString_EVString_ev_bool_EVString(long pNativeObject, String filename, String groupName, boolean overwrite, String locationPattern);
	public com.earthview.world.core.DataStreamPtr createResource(String filename, String groupName, boolean overwrite, String locationPattern)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		boolean overwriteParamValue = overwrite;
		String locationPatternParamValue = locationPattern;
		long returnValue = createResource_EVString_EVString_ev_bool_EVString(this.nativeObject.pointer, filenameParamValue, groupNameParamValue, overwriteParamValue, locationPatternParamValue);
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
	native private long createResource_EVString_EVString_ev_bool(long pNativeObject, String filename, String groupName, boolean overwrite);
	public com.earthview.world.core.DataStreamPtr createResource(String filename, String groupName, boolean overwrite)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		boolean overwriteParamValue = overwrite;
		long returnValue = createResource_EVString_EVString_ev_bool(this.nativeObject.pointer, filenameParamValue, groupNameParamValue, overwriteParamValue);
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
	native private long createResource_EVString_EVString(long pNativeObject, String filename, String groupName);
	public com.earthview.world.core.DataStreamPtr createResource(String filename, String groupName)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		long returnValue = createResource_EVString_EVString(this.nativeObject.pointer, filenameParamValue, groupNameParamValue);
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
	native private long createResource_EVString(long pNativeObject, String filename);
	public com.earthview.world.core.DataStreamPtr createResource(String filename)
	{
		String filenameParamValue = filename;
		long returnValue = createResource_EVString(this.nativeObject.pointer, filenameParamValue);
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
	native private void deleteResource_EVString_EVString_EVString(long pNativeObject, String filename, String groupName, String locationPattern);
	public void deleteResource(String filename, String groupName, String locationPattern)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		String locationPatternParamValue = locationPattern;
		deleteResource_EVString_EVString_EVString(this.nativeObject.pointer, filenameParamValue, groupNameParamValue, locationPatternParamValue);
	}
	native private void deleteResource_EVString_EVString(long pNativeObject, String filename, String groupName);
	public void deleteResource(String filename, String groupName)
	{
		String filenameParamValue = filename;
		String groupNameParamValue = groupName;
		deleteResource_EVString_EVString(this.nativeObject.pointer, filenameParamValue, groupNameParamValue);
	}
	native private void deleteResource_EVString(long pNativeObject, String filename);
	public void deleteResource(String filename)
	{
		String filenameParamValue = filename;
		deleteResource_EVString(this.nativeObject.pointer, filenameParamValue);
	}
	native private void deleteMatchingResources_EVString_EVString_EVString(long pNativeObject, String filePattern, String groupName, String locationPattern);
	public void deleteMatchingResources(String filePattern, String groupName, String locationPattern)
	{
		String filePatternParamValue = filePattern;
		String groupNameParamValue = groupName;
		String locationPatternParamValue = locationPattern;
		deleteMatchingResources_EVString_EVString_EVString(this.nativeObject.pointer, filePatternParamValue, groupNameParamValue, locationPatternParamValue);
	}
	native private void deleteMatchingResources_EVString_EVString(long pNativeObject, String filePattern, String groupName);
	public void deleteMatchingResources(String filePattern, String groupName)
	{
		String filePatternParamValue = filePattern;
		String groupNameParamValue = groupName;
		deleteMatchingResources_EVString_EVString(this.nativeObject.pointer, filePatternParamValue, groupNameParamValue);
	}
	native private void deleteMatchingResources_EVString(long pNativeObject, String filePattern);
	public void deleteMatchingResources(String filePattern)
	{
		String filePatternParamValue = filePattern;
		deleteMatchingResources_EVString(this.nativeObject.pointer, filePatternParamValue);
	}
	native private void addResourceGroupListener_CResourceGroupListener(long pNativeObject, long ref_l);
	public void addResourceGroupListener(com.earthview.world.graphic.ResourceGroupListener ref_l)
	{
		long ref_lParamValue = (ref_l == null ? 0L : ref_l.nativeObject.pointer);
		addResourceGroupListener_CResourceGroupListener(this.nativeObject.pointer, ref_lParamValue);
	}
	native private void removeResourceGroupListener_CResourceGroupListener(long pNativeObject, long l);
	public void removeResourceGroupListener(com.earthview.world.graphic.ResourceGroupListener l)
	{
		long lParamValue = (l == null ? 0L : l.nativeObject.pointer);
		removeResourceGroupListener_CResourceGroupListener(this.nativeObject.pointer, lParamValue);
	}
	native private void setWorldResourceGroupName_EVString(long pNativeObject, String groupName);
	public void setWorldResourceGroupName(String groupName)
	{
		String groupNameParamValue = groupName;
		setWorldResourceGroupName_EVString(this.nativeObject.pointer, groupNameParamValue);
	}
	native private long getWorldResourceGroupName_void(long pNativeObject);
	//// Gets the resource group that 'world' resources will use.
	public StringPointer getWorldResourceGroupName()
	{
		long returnValue = getWorldResourceGroupName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void linkWorldGeometryToResourceGroup_EVString_EVString_CSceneManager(long pNativeObject, String group, String worldGeometry, long ref_sceneManager);
	public void linkWorldGeometryToResourceGroup(String group, String worldGeometry, com.earthview.world.graphic.SceneManager ref_sceneManager)
	{
		String groupParamValue = group;
		String worldGeometryParamValue = worldGeometry;
		long ref_sceneManagerParamValue = (ref_sceneManager == null ? 0L : ref_sceneManager.nativeObject.pointer);
		linkWorldGeometryToResourceGroup_EVString_EVString_CSceneManager(this.nativeObject.pointer, groupParamValue, worldGeometryParamValue, ref_sceneManagerParamValue);
	}
	native private void unlinkWorldGeometryFromResourceGroup_EVString(long pNativeObject, String group);
	public void unlinkWorldGeometryFromResourceGroup(String group)
	{
		String groupParamValue = group;
		unlinkWorldGeometryFromResourceGroup_EVString(this.nativeObject.pointer, groupParamValue);
	}
	native private boolean isResourceGroupInGlobalPool_EVString(long pNativeObject, String name);
	public boolean isResourceGroupInGlobalPool(String name)
	{
		String nameParamValue = name;
		boolean returnValue = isResourceGroupInGlobalPool_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void shutdownAll_void(long pNativeObject);
	public void shutdownAll()
	{
		shutdownAll_void(this.nativeObject.pointer);
	}
	native private void _registerResourceManager_EVString_CResourceManager(long pNativeObject, String resourceType, long ref_rm);
	public void _registerResourceManager(String resourceType, com.earthview.world.graphic.ResourceManager ref_rm)
	{
		String resourceTypeParamValue = resourceType;
		long ref_rmParamValue = (ref_rm == null ? 0L : ref_rm.nativeObject.pointer);
		_registerResourceManager_EVString_CResourceManager(this.nativeObject.pointer, resourceTypeParamValue, ref_rmParamValue);
	}
	native private void _unregisterResourceManager_EVString(long pNativeObject, String resourceType);
	public void _unregisterResourceManager(String resourceType)
	{
		String resourceTypeParamValue = resourceType;
		_unregisterResourceManager_EVString(this.nativeObject.pointer, resourceTypeParamValue);
	}
	native private long getResourceManagerIterator_void(long pNativeObject);
	public com.earthview.world.graphic.ResourceGroupManager.ResourceManagerIterator getResourceManagerIterator()
	{
		long returnValue = getResourceManagerIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ResourceGroupManager.ResourceManagerIterator __returnValue = new com.earthview.world.graphic.ResourceGroupManager.ResourceManagerIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceManagerIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceGroupManager.ResourceManagerIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceManagerIterator");
		}
		return __returnValue;
	}
	native private void _registerScriptLoader_CScriptLoader(long pNativeObject, long ref_su);
	public void _registerScriptLoader(com.earthview.world.graphic.ScriptLoader ref_su)
	{
		long ref_suParamValue = (ref_su == null ? 0L : ref_su.nativeObject.pointer);
		_registerScriptLoader_CScriptLoader(this.nativeObject.pointer, ref_suParamValue);
	}
	native private void _unregisterScriptLoader_CScriptLoader(long pNativeObject, long su);
	public void _unregisterScriptLoader(com.earthview.world.graphic.ScriptLoader su)
	{
		long suParamValue = (su == null ? 0L : su.nativeObject.pointer);
		_unregisterScriptLoader_CScriptLoader(this.nativeObject.pointer, suParamValue);
	}
	native private long _findScriptLoader_EVString(long pNativeObject, String pattern);
	public com.earthview.world.graphic.ScriptLoader _findScriptLoader(String pattern)
	{
		String patternParamValue = pattern;
		long returnValue = _findScriptLoader_EVString(this.nativeObject.pointer, patternParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ScriptLoader __returnValue = new com.earthview.world.graphic.ScriptLoader(CreatedWhenConstruct.CWC_NotToCreate, "CScriptLoader");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ScriptLoader)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CScriptLoader");
		}
		return __returnValue;
	}
	native private long _getResourceManager_EVString(long pNativeObject, String resourceType);
	public com.earthview.world.graphic.ResourceManager _getResourceManager(String resourceType)
	{
		String resourceTypeParamValue = resourceType;
		long returnValue = _getResourceManager_EVString(this.nativeObject.pointer, resourceTypeParamValue);
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
	native private void _notifyResourceCreated_ResourcePtr(long pNativeObject, long res);
	public void _notifyResourceCreated(com.earthview.world.graphic.ResourcePtr res)
	{
		long resParamValue = res.nativeObject.pointer;
		_notifyResourceCreated_ResourcePtr(this.nativeObject.pointer, resParamValue);
	}
	native private void _notifyResourceRemoved_ResourcePtr(long pNativeObject, long res);
	public void _notifyResourceRemoved(com.earthview.world.graphic.ResourcePtr res)
	{
		long resParamValue = res.nativeObject.pointer;
		_notifyResourceRemoved_ResourcePtr(this.nativeObject.pointer, resParamValue);
	}
	native private void _notifyResourceGroupChanged_EVString_CResource(long pNativeObject, String oldGroup, long res);
	public void _notifyResourceGroupChanged(String oldGroup, com.earthview.world.graphic.Resource res)
	{
		String oldGroupParamValue = oldGroup;
		long resParamValue = (res == null ? 0L : res.nativeObject.pointer);
		_notifyResourceGroupChanged_EVString_CResource(this.nativeObject.pointer, oldGroupParamValue, resParamValue);
	}
	native private void _notifyAllResourcesRemoved_CResourceManager(long pNativeObject, long manager);
	public void _notifyAllResourcesRemoved(com.earthview.world.graphic.ResourceManager manager)
	{
		long managerParamValue = (manager == null ? 0L : manager.nativeObject.pointer);
		_notifyAllResourcesRemoved_CResourceManager(this.nativeObject.pointer, managerParamValue);
	}
	native private void _notifyWorldGeometryStageStarted_EVString(long pNativeObject, String description);
	public void _notifyWorldGeometryStageStarted(String description)
	{
		String descriptionParamValue = description;
		_notifyWorldGeometryStageStarted_EVString(this.nativeObject.pointer, descriptionParamValue);
	}
	native private void _notifyWorldGeometryStageEnded_void(long pNativeObject);
	public void _notifyWorldGeometryStageEnded()
	{
		_notifyWorldGeometryStageEnded_void(this.nativeObject.pointer);
	}
	native private long getResourceGroups_void(long pNativeObject);
	public com.earthview.world.core.StringVector getResourceGroups()
	{
		long returnValue = getResourceGroups_void(this.nativeObject.pointer);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	native private long getResourceDeclarationList_EVString(long pNativeObject, String groupName);
	public com.earthview.world.graphic.ResourceGroupManager.ResourceDeclarationList getResourceDeclarationList(String groupName)
	{
		String groupNameParamValue = groupName;
		long returnValue = getResourceDeclarationList_EVString(this.nativeObject.pointer, groupNameParamValue);
		com.earthview.world.graphic.ResourceGroupManager.ResourceDeclarationList __returnValue = new com.earthview.world.graphic.ResourceGroupManager.ResourceDeclarationList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceDeclarationList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceGroupManager.ResourceDeclarationList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceDeclarationList");
		}
		return __returnValue;
	}
	native private long getResourceLocationList_EVString(long pNativeObject, String groupName);
	public com.earthview.world.graphic.ResourceGroupManager.LocationList getResourceLocationList(String groupName)
	{
		String groupNameParamValue = groupName;
		long returnValue = getResourceLocationList_EVString(this.nativeObject.pointer, groupNameParamValue);
		com.earthview.world.graphic.ResourceGroupManager.LocationList __returnValue = new com.earthview.world.graphic.ResourceGroupManager.LocationList(CreatedWhenConstruct.CWC_NotToCreate, "LocationList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceGroupManager.LocationList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "LocationList");
		}
		return __returnValue;
	}
	native private void setLoadingListener_CResourceLoadingListener(long pNativeObject, long ref_listener);
	//// Sets a new loading listener
	public void setLoadingListener(com.earthview.world.graphic.ResourceLoadingListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		setLoadingListener_CResourceLoadingListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private long getLoadingListener_void(long pNativeObject);
	//// Returns the current loading listener
	public com.earthview.world.graphic.ResourceLoadingListener getLoadingListener()
	{
		long returnValue = getLoadingListener_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ResourceLoadingListener __returnValue = new com.earthview.world.graphic.ResourceLoadingListener(CreatedWhenConstruct.CWC_NotToCreate, "CResourceLoadingListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceLoadingListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CResourceLoadingListener");
		}
		return __returnValue;
	}
	public ResourceGroupManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ResourceGroupManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ResourceGroupManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ResourceGroupManager obj = null;
 		if(baseObj instanceof ResourceGroupManager)
		{
			obj = (ResourceGroupManager)baseObj;
		} else {
			obj = new ResourceGroupManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CResourceGroupManager");
			obj.increaseCast();
		}

		return obj;
	}
}
