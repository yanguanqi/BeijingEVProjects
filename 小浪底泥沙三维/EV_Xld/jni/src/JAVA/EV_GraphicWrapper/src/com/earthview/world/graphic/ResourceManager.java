package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ResourceManager extends com.earthview.world.graphic.ScriptLoader {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceManager", new ResourceManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCResourceManagerProxy", new ResourceManagerClassFactory());
	}

	public ResourceManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCResourceManagerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ResourceManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private static long getSingleton_void();
	public static com.earthview.world.graphic.ResourceManager getSingleton()
	{
		long returnValue = getSingleton_void();
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
	native private static long getSingletonPtr_void();
	public static com.earthview.world.graphic.ResourceManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
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
	protected  long create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(String name, String group, boolean isManual, long ref_loader, long createParams)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.core.CommonStringPairList createParamsParamValue = (createParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(createParamsParamValue != null)
		{
		createParamsParamValue.setDelegate(true);
		createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		IClassFactory createParamsParamValueClassFactory = GlobalClassFactoryMap.get(createParamsParamValue.getCppInstanceTypeName());
		if (createParamsParamValueClassFactory != null)
		{
			createParamsParamValue.setDelegate(true);
			createParamsParamValue = (com.earthview.world.core.CommonStringPairList)createParamsParamValueClassFactory.create();
			createParamsParamValue.setDelegate(true);
			createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		}
		}
		com.earthview.world.graphic.ResourcePtr returnValue = create(nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long createParams);
	/**
	 * 创建(但不加载)资源，若存在则直接返回
	 */
	public com.earthview.world.graphic.ResourcePtr create(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		long returnValue = create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long createParams);
	protected com.earthview.world.graphic.ResourcePtr create_NoVirtual(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		long returnValue = create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long create_EVString_EVString_ev_bool_CManualResourceLoader_callback(String name, String group, boolean isManual, long ref_loader)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.graphic.ResourcePtr returnValue = create(nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long create_EVString_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String name, String group, boolean isManual, long ref_loader);
	public com.earthview.world.graphic.ResourcePtr create(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long returnValue = create_EVString_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long create_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(long pNativeObject, String name, String group, boolean isManual, long ref_loader);
	protected com.earthview.world.graphic.ResourcePtr create_NoVirtual(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long returnValue = create_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long create_EVString_EVString_ev_bool_callback(String name, String group, boolean isManual)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ResourcePtr returnValue = create(nameParamValue, groupParamValue, isManualParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long create_EVString_EVString_ev_bool(long pNativeObject, String name, String group, boolean isManual);
	public com.earthview.world.graphic.ResourcePtr create(String name, String group, boolean isManual)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long returnValue = create_EVString_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long create_EVString_EVString_ev_bool_NoVirtual(long pNativeObject, String name, String group, boolean isManual);
	protected com.earthview.world.graphic.ResourcePtr create_NoVirtual(String name, String group, boolean isManual)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long returnValue = create_EVString_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long create_EVString_EVString_callback(String name, String group)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.ResourcePtr returnValue = create(nameParamValue, groupParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long create_EVString_EVString(long pNativeObject, String name, String group);
	public com.earthview.world.graphic.ResourcePtr create(String name, String group)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long returnValue = create_EVString_EVString(this.nativeObject.pointer, nameParamValue, groupParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long create_EVString_EVString_NoVirtual(long pNativeObject, String name, String group);
	protected com.earthview.world.graphic.ResourcePtr create_NoVirtual(String name, String group)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long returnValue = create_EVString_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(String name, boolean isManual, long ref_loader, long createParams)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.core.CommonStringPairList createParamsParamValue = (createParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(createParamsParamValue != null)
		{
		createParamsParamValue.setDelegate(true);
		createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		IClassFactory createParamsParamValueClassFactory = GlobalClassFactoryMap.get(createParamsParamValue.getCppInstanceTypeName());
		if (createParamsParamValueClassFactory != null)
		{
			createParamsParamValue.setDelegate(true);
			createParamsParamValue = (com.earthview.world.core.CommonStringPairList)createParamsParamValueClassFactory.create();
			createParamsParamValue.setDelegate(true);
			createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		}
		}
		com.earthview.world.graphic.ResourcePtr returnValue = createUnmanaged(nameParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String name, boolean isManual, long ref_loader, long createParams);
	/**
	 * 只创建(不加载)资源，不考虑同名的资源是否已经存在，创建后也不再管理该资源
	 */
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		long returnValue = createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, nameParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(long pNativeObject, String name, boolean isManual, long ref_loader, long createParams);
	protected com.earthview.world.graphic.ResourcePtr createUnmanaged_NoVirtual(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		long returnValue = createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.nativeObject.pointer, nameParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long createUnmanaged_EVString_ev_bool_CManualResourceLoader_callback(String name, boolean isManual, long ref_loader)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.graphic.ResourcePtr returnValue = createUnmanaged(nameParamValue, isManualParamValue, ref_loaderParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createUnmanaged_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String name, boolean isManual, long ref_loader);
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long returnValue = createUnmanaged_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, nameParamValue, isManualParamValue, ref_loaderParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long createUnmanaged_EVString_ev_bool_CManualResourceLoader_NoVirtual(long pNativeObject, String name, boolean isManual, long ref_loader);
	protected com.earthview.world.graphic.ResourcePtr createUnmanaged_NoVirtual(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long returnValue = createUnmanaged_EVString_ev_bool_CManualResourceLoader_NoVirtual(this.nativeObject.pointer, nameParamValue, isManualParamValue, ref_loaderParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long createUnmanaged_EVString_ev_bool_callback(String name, boolean isManual)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ResourcePtr returnValue = createUnmanaged(nameParamValue, isManualParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createUnmanaged_EVString_ev_bool(long pNativeObject, String name, boolean isManual);
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long returnValue = createUnmanaged_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, isManualParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long createUnmanaged_EVString_ev_bool_NoVirtual(long pNativeObject, String name, boolean isManual);
	protected com.earthview.world.graphic.ResourcePtr createUnmanaged_NoVirtual(String name, boolean isManual)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long returnValue = createUnmanaged_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, isManualParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long createUnmanaged_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.ResourcePtr returnValue = createUnmanaged(nameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createUnmanaged_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name)
	{
		String nameParamValue = name;
		long returnValue = createUnmanaged_EVString(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long createUnmanaged_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.ResourcePtr createUnmanaged_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = createUnmanaged_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	public static class ResourceCreateOrRetrieveResult extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult", new ResourceCreateOrRetrieveResultClassFactory());
		}

		native private long get_first_void(long pNativeObject);
		public com.earthview.world.graphic.ResourcePtr get_first()
		{
			long jniValue = get_first_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
			}
			return __returnValue;
		}
		
		native private void set_first_ResourcePtr (long pNativeObject, long value);
		public void set_first(com.earthview.world.graphic.ResourcePtr first)
		{
			long firstParamValue = first.nativeObject.pointer;
			
			set_first_ResourcePtr(this.nativeObject.pointer, firstParamValue);
		}
		
		native private boolean get_second_void(long pNativeObject);
		public boolean get_second()
		{
			boolean jniValue = get_second_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_second_ev_bool (long pNativeObject, boolean value);
		public void set_second(boolean second)
		{
			boolean secondParamValue = second;
			
			set_second_ev_bool(this.nativeObject.pointer, secondParamValue);
		}
		
		public ResourceCreateOrRetrieveResult() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ResourceCreateOrRetrieveResult", null);
		}

		public ResourceCreateOrRetrieveResult(com.earthview.world.graphic.ResourcePtr fir, boolean sec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer firPtr = new BasePointer(fir);
			list.add("fir", firPtr.get());
			BasePointer secPtr = new BasePointer(sec);
			list.add("sec", secPtr.get());
			Create("ResourceCreateOrRetrieveResult", list);
		}

		native private long OperatorAssign_ResourceCreateOrRetrieveResult(long pNativeObject, long other);
		public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult OperatorAssign(com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult other)
		{
			long otherParamValue = other.nativeObject.pointer;
			long returnValue = OperatorAssign_ResourceCreateOrRetrieveResult(this.nativeObject.pointer, otherParamValue);
			com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate, "ResourceCreateOrRetrieveResult");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
			}
			return __returnValue;
		}
		public ResourceCreateOrRetrieveResult(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ResourceCreateOrRetrieveResult(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ResourceCreateOrRetrieveResult fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ResourceCreateOrRetrieveResult obj = null;
 			if(baseObj instanceof ResourceCreateOrRetrieveResult)
			{
				obj = (ResourceCreateOrRetrieveResult)baseObj;
			} else {
				obj = new ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ResourceCreateOrRetrieveResult");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ResourceCreateOrRetrieveResultClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ResourceCreateOrRetrieveResult emptyInstance = new ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(String name, String group, boolean isManual, long ref_loader, long createParams)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.core.CommonStringPairList createParamsParamValue = (createParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(createParamsParamValue != null)
		{
		createParamsParamValue.setDelegate(true);
		createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		IClassFactory createParamsParamValueClassFactory = GlobalClassFactoryMap.get(createParamsParamValue.getCppInstanceTypeName());
		if (createParamsParamValueClassFactory != null)
		{
			createParamsParamValue.setDelegate(true);
			createParamsParamValue = (com.earthview.world.core.CommonStringPairList)createParamsParamValueClassFactory.create();
			createParamsParamValue.setDelegate(true);
			createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		}
		}
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult returnValue = createOrRetrieve(nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long createParams);
	/**
	 * 创建或获取资源
	 */
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue);
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
	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long createParams);
	protected com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve_NoVirtual(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue);
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

	protected  long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_callback(String name, String group, boolean isManual, long ref_loader)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult returnValue = createOrRetrieve(nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String name, String group, boolean isManual, long ref_loader);
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

	protected  long createOrRetrieve_EVString_EVString_ev_bool_callback(String name, String group, boolean isManual)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult returnValue = createOrRetrieve(nameParamValue, groupParamValue, isManualParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createOrRetrieve_EVString_EVString_ev_bool(long pNativeObject, String name, String group, boolean isManual);
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

	protected  long createOrRetrieve_EVString_EVString_callback(String name, String group)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult returnValue = createOrRetrieve(nameParamValue, groupParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createOrRetrieve_EVString_EVString(long pNativeObject, String name, String group);
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

	protected  void setMemoryBudget_ev_size_t_callback(long bytes)
	{
		long bytesParamValue = bytes;
		setMemoryBudget(bytesParamValue);
	}

	native private void setMemoryBudget_ev_size_t(long pNativeObject, long bytes);
	/**
	 * 设置内存总容量
	 */
	public void setMemoryBudget(long bytes)
	{
		long bytesParamValue = bytes;
		setMemoryBudget_ev_size_t(this.nativeObject.pointer, bytesParamValue);
	}
	native private void setMemoryBudget_ev_size_t_NoVirtual(long pNativeObject, long bytes);
	protected void setMemoryBudget_NoVirtual(long bytes)
	{
		long bytesParamValue = bytes;
		setMemoryBudget_ev_size_t_NoVirtual(this.nativeObject.pointer, bytesParamValue);
	}

	protected  long getMemoryBudget_void_callback()
	{
		long returnValue = getMemoryBudget();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getMemoryBudget_void(long pNativeObject);
	/**
	 * 获取内存总容量
	 */
	public long getMemoryBudget()
	{
		long returnValue = getMemoryBudget_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMemoryBudget_void_NoVirtual(long pNativeObject);
	protected long getMemoryBudget_NoVirtual()
	{
		long returnValue = getMemoryBudget_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getMemoryUsage_void_callback()
	{
		long returnValue = getMemoryUsage();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getMemoryUsage_void(long pNativeObject);
	/**
	 * 获取已经占用的内存容量
	 */
	public long getMemoryUsage()
	{
		long returnValue = getMemoryUsage_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMemoryUsage_void_NoVirtual(long pNativeObject);
	protected long getMemoryUsage_NoVirtual()
	{
		long returnValue = getMemoryUsage_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void unload_EVString_callback(String name)
	{
		String nameParamValue = name;
		unload(nameParamValue);
	}

	native private void unload_EVString(long pNativeObject, String name);
	/**
	 * 卸载资源
	 */
	public void unload(String name)
	{
		String nameParamValue = name;
		unload_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void unload_EVString_NoVirtual(long pNativeObject, String name);
	protected void unload_NoVirtual(String name)
	{
		String nameParamValue = name;
		unload_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	protected  void unload_ev_uint64_callback(long handle)
	{
		ULongPointer handleParamValue = new ULongPointer(new InstancePointer(handle));
		unload(handleParamValue);
	}

	native private void unload_ev_uint64(long pNativeObject, long handle);
	public void unload(ULongPointer handle)
	{
		long handleParamValue = handle.nativeObject.pointer;
		unload_ev_uint64(this.nativeObject.pointer, handleParamValue);
	}
	native private void unload_ev_uint64_NoVirtual(long pNativeObject, long handle);
	protected void unload_NoVirtual(ULongPointer handle)
	{
		long handleParamValue = handle.nativeObject.pointer;
		unload_ev_uint64_NoVirtual(this.nativeObject.pointer, handleParamValue);
	}

	protected  void unloadAll_ev_bool_callback(boolean reloadableOnly)
	{
		boolean reloadableOnlyParamValue = reloadableOnly;
		unloadAll(reloadableOnlyParamValue);
	}

	native private void unloadAll_ev_bool(long pNativeObject, boolean reloadableOnly);
	/**
	 * 卸载所有资源
	 * @param reloadableOnly 传递true，则只卸载可以重新加载的资源
	 */
	public void unloadAll(boolean reloadableOnly)
	{
		boolean reloadableOnlyParamValue = reloadableOnly;
		unloadAll_ev_bool(this.nativeObject.pointer, reloadableOnlyParamValue);
	}
	native private void unloadAll_ev_bool_NoVirtual(long pNativeObject, boolean reloadableOnly);
	protected void unloadAll_NoVirtual(boolean reloadableOnly)
	{
		boolean reloadableOnlyParamValue = reloadableOnly;
		unloadAll_ev_bool_NoVirtual(this.nativeObject.pointer, reloadableOnlyParamValue);
	}

	protected  void unloadAll_void_callback()
	{
		unloadAll();
	}

	native private void unloadAll_void(long pNativeObject);
	public void unloadAll()
	{
		unloadAll_void(this.nativeObject.pointer);
	}
	native private void unloadAll_void_NoVirtual(long pNativeObject);
	protected void unloadAll_NoVirtual()
	{
		unloadAll_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void reloadAll_ev_bool_callback(boolean reloadableOnly)
	{
		boolean reloadableOnlyParamValue = reloadableOnly;
		reloadAll(reloadableOnlyParamValue);
	}

	native private void reloadAll_ev_bool(long pNativeObject, boolean reloadableOnly);
	/**
	 * 重新加载所有资源
	 */
	public void reloadAll(boolean reloadableOnly)
	{
		boolean reloadableOnlyParamValue = reloadableOnly;
		reloadAll_ev_bool(this.nativeObject.pointer, reloadableOnlyParamValue);
	}
	native private void reloadAll_ev_bool_NoVirtual(long pNativeObject, boolean reloadableOnly);
	protected void reloadAll_NoVirtual(boolean reloadableOnly)
	{
		boolean reloadableOnlyParamValue = reloadableOnly;
		reloadAll_ev_bool_NoVirtual(this.nativeObject.pointer, reloadableOnlyParamValue);
	}

	protected  void reloadAll_void_callback()
	{
		reloadAll();
	}

	native private void reloadAll_void(long pNativeObject);
	public void reloadAll()
	{
		reloadAll_void(this.nativeObject.pointer);
	}
	native private void reloadAll_void_NoVirtual(long pNativeObject);
	protected void reloadAll_NoVirtual()
	{
		reloadAll_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void unloadUnreferencedResources_ev_bool_callback(boolean reloadableOnly)
	{
		boolean reloadableOnlyParamValue = reloadableOnly;
		unloadUnreferencedResources(reloadableOnlyParamValue);
	}

	native private void unloadUnreferencedResources_ev_bool(long pNativeObject, boolean reloadableOnly);
	/**
	 * 卸载所有未被引用的资源
	 * @param reloadableOnly 传递true，则只卸载可以重新加载的资源
	 */
	public void unloadUnreferencedResources(boolean reloadableOnly)
	{
		boolean reloadableOnlyParamValue = reloadableOnly;
		unloadUnreferencedResources_ev_bool(this.nativeObject.pointer, reloadableOnlyParamValue);
	}
	native private void unloadUnreferencedResources_ev_bool_NoVirtual(long pNativeObject, boolean reloadableOnly);
	protected void unloadUnreferencedResources_NoVirtual(boolean reloadableOnly)
	{
		boolean reloadableOnlyParamValue = reloadableOnly;
		unloadUnreferencedResources_ev_bool_NoVirtual(this.nativeObject.pointer, reloadableOnlyParamValue);
	}

	protected  void unloadUnreferencedResources_void_callback()
	{
		unloadUnreferencedResources();
	}

	native private void unloadUnreferencedResources_void(long pNativeObject);
	public void unloadUnreferencedResources()
	{
		unloadUnreferencedResources_void(this.nativeObject.pointer);
	}
	native private void unloadUnreferencedResources_void_NoVirtual(long pNativeObject);
	protected void unloadUnreferencedResources_NoVirtual()
	{
		unloadUnreferencedResources_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void reloadUnreferencedResources_ev_bool_callback(boolean reloadableOnly)
	{
		boolean reloadableOnlyParamValue = reloadableOnly;
		reloadUnreferencedResources(reloadableOnlyParamValue);
	}

	native private void reloadUnreferencedResources_ev_bool(long pNativeObject, boolean reloadableOnly);
	/**
	 * 重新加载所有未被引用的资源
	 * @param reloadableOnly 
	 */
	public void reloadUnreferencedResources(boolean reloadableOnly)
	{
		boolean reloadableOnlyParamValue = reloadableOnly;
		reloadUnreferencedResources_ev_bool(this.nativeObject.pointer, reloadableOnlyParamValue);
	}
	native private void reloadUnreferencedResources_ev_bool_NoVirtual(long pNativeObject, boolean reloadableOnly);
	protected void reloadUnreferencedResources_NoVirtual(boolean reloadableOnly)
	{
		boolean reloadableOnlyParamValue = reloadableOnly;
		reloadUnreferencedResources_ev_bool_NoVirtual(this.nativeObject.pointer, reloadableOnlyParamValue);
	}

	protected  void reloadUnreferencedResources_void_callback()
	{
		reloadUnreferencedResources();
	}

	native private void reloadUnreferencedResources_void(long pNativeObject);
	public void reloadUnreferencedResources()
	{
		reloadUnreferencedResources_void(this.nativeObject.pointer);
	}
	native private void reloadUnreferencedResources_void_NoVirtual(long pNativeObject);
	protected void reloadUnreferencedResources_NoVirtual()
	{
		reloadUnreferencedResources_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void remove_ResourcePtr_callback(long r)
	{
		com.earthview.world.graphic.ResourcePtr rParamValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		rParamValue.setDelegate(true);
		rParamValue.setInstancePointer(new InstancePointer(r));
		IClassFactory rParamValueClassFactory = GlobalClassFactoryMap.get(rParamValue.getCppInstanceTypeName());
		if (rParamValueClassFactory != null)
		{
			rParamValue.setDelegate(true);
			rParamValue = (com.earthview.world.graphic.ResourcePtr)rParamValueClassFactory.create();
			rParamValue.setDelegate(true);
			rParamValue.setInstancePointer(new InstancePointer(r));
		}
		remove(rParamValue);
	}

	native private void remove_ResourcePtr(long pNativeObject, long r);
	/**
	 * 移除资源如果资源没有其它引用，则会引起资源的析构;如果还有其它引用，则只从管理器中移除，直到所有引用都释放才会导致资源的析构
	 * @param reloadableOnly 
	 */
	public void remove(com.earthview.world.graphic.ResourcePtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		remove_ResourcePtr(this.nativeObject.pointer, rParamValue);
	}
	native private void remove_ResourcePtr_NoVirtual(long pNativeObject, long r);
	protected void remove_NoVirtual(com.earthview.world.graphic.ResourcePtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		remove_ResourcePtr_NoVirtual(this.nativeObject.pointer, rParamValue);
	}

	protected  void remove_EVString_callback(String name)
	{
		String nameParamValue = name;
		remove(nameParamValue);
	}

	native private void remove_EVString(long pNativeObject, String name);
	public void remove(String name)
	{
		String nameParamValue = name;
		remove_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void remove_EVString_NoVirtual(long pNativeObject, String name);
	protected void remove_NoVirtual(String name)
	{
		String nameParamValue = name;
		remove_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	protected  void remove_ev_uint64_callback(long handle)
	{
		ULongPointer handleParamValue = new ULongPointer(new InstancePointer(handle));
		remove(handleParamValue);
	}

	native private void remove_ev_uint64(long pNativeObject, long handle);
	public void remove(ULongPointer handle)
	{
		long handleParamValue = handle.nativeObject.pointer;
		remove_ev_uint64(this.nativeObject.pointer, handleParamValue);
	}
	native private void remove_ev_uint64_NoVirtual(long pNativeObject, long handle);
	protected void remove_NoVirtual(ULongPointer handle)
	{
		long handleParamValue = handle.nativeObject.pointer;
		remove_ev_uint64_NoVirtual(this.nativeObject.pointer, handleParamValue);
	}

	protected  void remove_EVString_EVString_callback(String name, String groupname)
	{
		String nameParamValue = name;
		String groupnameParamValue = groupname;
		remove(nameParamValue, groupnameParamValue);
	}

	native private void remove_EVString_EVString(long pNativeObject, String name, String groupname);
	public void remove(String name, String groupname)
	{
		String nameParamValue = name;
		String groupnameParamValue = groupname;
		remove_EVString_EVString(this.nativeObject.pointer, nameParamValue, groupnameParamValue);
	}
	native private void remove_EVString_EVString_NoVirtual(long pNativeObject, String name, String groupname);
	protected void remove_NoVirtual(String name, String groupname)
	{
		String nameParamValue = name;
		String groupnameParamValue = groupname;
		remove_EVString_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, groupnameParamValue);
	}

	protected  void removeAll_void_callback()
	{
		removeAll();
	}

	native private void removeAll_void(long pNativeObject);
	/**
	 * 移除所有资源如果资源没有其它引用，则会引起资源的析构;如果还有其它引用，则只从管理器中移除，直到所有引用都释放才会导致资源的析构
	 * @param reloadableOnly 
	 */
	public void removeAll()
	{
		removeAll_void(this.nativeObject.pointer);
	}
	native private void removeAll_void_NoVirtual(long pNativeObject);
	protected void removeAll_NoVirtual()
	{
		removeAll_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void removeUnreferencedResources_ev_bool_callback(boolean reloadableOnly)
	{
		boolean reloadableOnlyParamValue = reloadableOnly;
		removeUnreferencedResources(reloadableOnlyParamValue);
	}

	native private void removeUnreferencedResources_ev_bool(long pNativeObject, boolean reloadableOnly);
	/**
	 * 移除所有未被引用的资源				
	 * @param reloadableOnly 传递true，则只卸载可以重新加载的资源
	 */
	public void removeUnreferencedResources(boolean reloadableOnly)
	{
		boolean reloadableOnlyParamValue = reloadableOnly;
		removeUnreferencedResources_ev_bool(this.nativeObject.pointer, reloadableOnlyParamValue);
	}
	native private void removeUnreferencedResources_ev_bool_NoVirtual(long pNativeObject, boolean reloadableOnly);
	protected void removeUnreferencedResources_NoVirtual(boolean reloadableOnly)
	{
		boolean reloadableOnlyParamValue = reloadableOnly;
		removeUnreferencedResources_ev_bool_NoVirtual(this.nativeObject.pointer, reloadableOnlyParamValue);
	}

	protected  void removeUnreferencedResources_void_callback()
	{
		removeUnreferencedResources();
	}

	native private void removeUnreferencedResources_void(long pNativeObject);
	public void removeUnreferencedResources()
	{
		removeUnreferencedResources_void(this.nativeObject.pointer);
	}
	native private void removeUnreferencedResources_void_NoVirtual(long pNativeObject);
	protected void removeUnreferencedResources_NoVirtual()
	{
		removeUnreferencedResources_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void removeUnreferencedResource_EVString_callback(String name)
	{
		String nameParamValue = name;
		removeUnreferencedResource(nameParamValue);
	}

	native private void removeUnreferencedResource_EVString(long pNativeObject, String name);
	public void removeUnreferencedResource(String name)
	{
		String nameParamValue = name;
		removeUnreferencedResource_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void removeUnreferencedResource_EVString_NoVirtual(long pNativeObject, String name);
	protected void removeUnreferencedResource_NoVirtual(String name)
	{
		String nameParamValue = name;
		removeUnreferencedResource_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	protected  void removeUnreferencedResource_EVString_EVString_callback(String name, String groupName)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		removeUnreferencedResource(nameParamValue, groupNameParamValue);
	}

	native private void removeUnreferencedResource_EVString_EVString(long pNativeObject, String name, String groupName);
	public void removeUnreferencedResource(String name, String groupName)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		removeUnreferencedResource_EVString_EVString(this.nativeObject.pointer, nameParamValue, groupNameParamValue);
	}
	native private void removeUnreferencedResource_EVString_EVString_NoVirtual(long pNativeObject, String name, String groupName);
	protected void removeUnreferencedResource_NoVirtual(String name, String groupName)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		removeUnreferencedResource_EVString_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, groupNameParamValue);
	}

	protected  void unloadUnreferencedResource_EVString_EVString_callback(String name, String groupName)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		unloadUnreferencedResource(nameParamValue, groupNameParamValue);
	}

	native private void unloadUnreferencedResource_EVString_EVString(long pNativeObject, String name, String groupName);
	/**
	 * 卸载所有未被引用的资源				
	 * @param  
	 */
	public void unloadUnreferencedResource(String name, String groupName)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		unloadUnreferencedResource_EVString_EVString(this.nativeObject.pointer, nameParamValue, groupNameParamValue);
	}
	native private void unloadUnreferencedResource_EVString_EVString_NoVirtual(long pNativeObject, String name, String groupName);
	protected void unloadUnreferencedResource_NoVirtual(String name, String groupName)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		unloadUnreferencedResource_EVString_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, groupNameParamValue);
	}

	protected  void unloadUnreferencedResource_EVString_EVString_ev_uint16_callback(String name, String groupName, int useCount)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		int useCountParamValue = useCount;
		unloadUnreferencedResource(nameParamValue, groupNameParamValue, useCountParamValue);
	}

	native private void unloadUnreferencedResource_EVString_EVString_ev_uint16(long pNativeObject, String name, String groupName, int useCount);
	public void unloadUnreferencedResource(String name, String groupName, int useCount)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		int useCountParamValue = useCount;
		unloadUnreferencedResource_EVString_EVString_ev_uint16(this.nativeObject.pointer, nameParamValue, groupNameParamValue, useCountParamValue);
	}
	native private void unloadUnreferencedResource_EVString_EVString_ev_uint16_NoVirtual(long pNativeObject, String name, String groupName, int useCount);
	protected void unloadUnreferencedResource_NoVirtual(String name, String groupName, int useCount)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		int useCountParamValue = useCount;
		unloadUnreferencedResource_EVString_EVString_ev_uint16_NoVirtual(this.nativeObject.pointer, nameParamValue, groupNameParamValue, useCountParamValue);
	}

	protected  long getByName_EVString_EVString_callback(String name, String groupName)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		com.earthview.world.graphic.ResourcePtr returnValue = getByName(nameParamValue, groupNameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getByName_EVString_EVString(long pNativeObject, String name, String groupName);
	/**
	 * 获取资源				
	 * @param  
	 */
	public com.earthview.world.graphic.ResourcePtr getByName(String name, String groupName)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long returnValue = getByName_EVString_EVString(this.nativeObject.pointer, nameParamValue, groupNameParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long getByName_EVString_EVString_NoVirtual(long pNativeObject, String name, String groupName);
	protected com.earthview.world.graphic.ResourcePtr getByName_NoVirtual(String name, String groupName)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long returnValue = getByName_EVString_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, groupNameParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long getByName_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.ResourcePtr returnValue = getByName(nameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getByName_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.ResourcePtr getByName(String name)
	{
		String nameParamValue = name;
		long returnValue = getByName_EVString(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long getByName_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.ResourcePtr getByName_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = getByName_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long getByHandle_ev_uint64_callback(long handle)
	{
		ULongPointer handleParamValue = new ULongPointer(new InstancePointer(handle));
		com.earthview.world.graphic.ResourcePtr returnValue = getByHandle(handleParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getByHandle_ev_uint64(long pNativeObject, long handle);
	public com.earthview.world.graphic.ResourcePtr getByHandle(ULongPointer handle)
	{
		long handleParamValue = handle.nativeObject.pointer;
		long returnValue = getByHandle_ev_uint64(this.nativeObject.pointer, handleParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long getByHandle_ev_uint64_NoVirtual(long pNativeObject, long handle);
	protected com.earthview.world.graphic.ResourcePtr getByHandle_NoVirtual(ULongPointer handle)
	{
		long handleParamValue = handle.nativeObject.pointer;
		long returnValue = getByHandle_ev_uint64_NoVirtual(this.nativeObject.pointer, handleParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  boolean resourceExists_EVString_callback(String name)
	{
		String nameParamValue = name;
		boolean returnValue = resourceExists(nameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean resourceExists_EVString(long pNativeObject, String name);
	/**
	 * 判断资源是否存在于资源管理器中				
	 * @param  
	 */
	public boolean resourceExists(String name)
	{
		String nameParamValue = name;
		boolean returnValue = resourceExists_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private boolean resourceExists_EVString_NoVirtual(long pNativeObject, String name);
	protected boolean resourceExists_NoVirtual(String name)
	{
		String nameParamValue = name;
		boolean returnValue = resourceExists_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}

	protected  boolean resourceExists_ev_uint64_callback(long handle)
	{
		ULongPointer handleParamValue = new ULongPointer(new InstancePointer(handle));
		boolean returnValue = resourceExists(handleParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean resourceExists_ev_uint64(long pNativeObject, long handle);
	public boolean resourceExists(ULongPointer handle)
	{
		long handleParamValue = handle.nativeObject.pointer;
		boolean returnValue = resourceExists_ev_uint64(this.nativeObject.pointer, handleParamValue);
		return returnValue;
	}
	native private boolean resourceExists_ev_uint64_NoVirtual(long pNativeObject, long handle);
	protected boolean resourceExists_NoVirtual(ULongPointer handle)
	{
		long handleParamValue = handle.nativeObject.pointer;
		boolean returnValue = resourceExists_ev_uint64_NoVirtual(this.nativeObject.pointer, handleParamValue);
		return returnValue;
	}

	protected  void _notifyResourceTouched_CResource_callback(long res)
	{
		com.earthview.world.graphic.Resource resParamValue = (res == 0L ? null : new com.earthview.world.graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate));
		if(resParamValue != null)
		{
		resParamValue.setDelegate(true);
		resParamValue.setInstancePointer(new InstancePointer(res));
		IClassFactory resParamValueClassFactory = GlobalClassFactoryMap.get(resParamValue.getCppInstanceTypeName());
		if (resParamValueClassFactory != null)
		{
			resParamValue.setDelegate(true);
			resParamValue = (com.earthview.world.graphic.Resource)resParamValueClassFactory.create();
			resParamValue.setDelegate(true);
			resParamValue.setInstancePointer(new InstancePointer(res));
		}
		}
		_notifyResourceTouched(resParamValue);
	}

	native private void _notifyResourceTouched_CResource(long pNativeObject, long res);
	/**
	 * 通知资源被开始使用				
	 * @param  
	 */
	public void _notifyResourceTouched(com.earthview.world.graphic.Resource res)
	{
		long resParamValue = (res == null ? 0L : res.nativeObject.pointer);
		_notifyResourceTouched_CResource(this.nativeObject.pointer, resParamValue);
	}
	native private void _notifyResourceTouched_CResource_NoVirtual(long pNativeObject, long res);
	protected void _notifyResourceTouched_NoVirtual(com.earthview.world.graphic.Resource res)
	{
		long resParamValue = (res == null ? 0L : res.nativeObject.pointer);
		_notifyResourceTouched_CResource_NoVirtual(this.nativeObject.pointer, resParamValue);
	}

	protected  void _notifyResourceLoaded_CResource_callback(long res)
	{
		com.earthview.world.graphic.Resource resParamValue = (res == 0L ? null : new com.earthview.world.graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate));
		if(resParamValue != null)
		{
		resParamValue.setDelegate(true);
		resParamValue.setInstancePointer(new InstancePointer(res));
		IClassFactory resParamValueClassFactory = GlobalClassFactoryMap.get(resParamValue.getCppInstanceTypeName());
		if (resParamValueClassFactory != null)
		{
			resParamValue.setDelegate(true);
			resParamValue = (com.earthview.world.graphic.Resource)resParamValueClassFactory.create();
			resParamValue.setDelegate(true);
			resParamValue.setInstancePointer(new InstancePointer(res));
		}
		}
		_notifyResourceLoaded(resParamValue);
	}

	native private void _notifyResourceLoaded_CResource(long pNativeObject, long res);
	/**
	 * 通知资源被加载完成			
	 * @param  
	 */
	public void _notifyResourceLoaded(com.earthview.world.graphic.Resource res)
	{
		long resParamValue = (res == null ? 0L : res.nativeObject.pointer);
		_notifyResourceLoaded_CResource(this.nativeObject.pointer, resParamValue);
	}
	native private void _notifyResourceLoaded_CResource_NoVirtual(long pNativeObject, long res);
	protected void _notifyResourceLoaded_NoVirtual(com.earthview.world.graphic.Resource res)
	{
		long resParamValue = (res == null ? 0L : res.nativeObject.pointer);
		_notifyResourceLoaded_CResource_NoVirtual(this.nativeObject.pointer, resParamValue);
	}

	protected  void _notifyResourceUnloaded_CResource_callback(long res)
	{
		com.earthview.world.graphic.Resource resParamValue = (res == 0L ? null : new com.earthview.world.graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate));
		if(resParamValue != null)
		{
		resParamValue.setDelegate(true);
		resParamValue.setInstancePointer(new InstancePointer(res));
		IClassFactory resParamValueClassFactory = GlobalClassFactoryMap.get(resParamValue.getCppInstanceTypeName());
		if (resParamValueClassFactory != null)
		{
			resParamValue.setDelegate(true);
			resParamValue = (com.earthview.world.graphic.Resource)resParamValueClassFactory.create();
			resParamValue.setDelegate(true);
			resParamValue.setInstancePointer(new InstancePointer(res));
		}
		}
		_notifyResourceUnloaded(resParamValue);
	}

	native private void _notifyResourceUnloaded_CResource(long pNativeObject, long res);
	/**
	 * 通知资源被卸载完成			
	 * @param  
	 */
	public void _notifyResourceUnloaded(com.earthview.world.graphic.Resource res)
	{
		long resParamValue = (res == null ? 0L : res.nativeObject.pointer);
		_notifyResourceUnloaded_CResource(this.nativeObject.pointer, resParamValue);
	}
	native private void _notifyResourceUnloaded_CResource_NoVirtual(long pNativeObject, long res);
	protected void _notifyResourceUnloaded_NoVirtual(com.earthview.world.graphic.Resource res)
	{
		long resParamValue = (res == null ? 0L : res.nativeObject.pointer);
		_notifyResourceUnloaded_CResource_NoVirtual(this.nativeObject.pointer, resParamValue);
	}

	protected  long prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback(String name, String group, boolean isManual, long ref_loader, long loadParams, boolean backgroundThread)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.core.CommonStringPairList loadParamsParamValue = (loadParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(loadParamsParamValue != null)
		{
		loadParamsParamValue.setDelegate(true);
		loadParamsParamValue.setInstancePointer(new InstancePointer(loadParams));
		IClassFactory loadParamsParamValueClassFactory = GlobalClassFactoryMap.get(loadParamsParamValue.getCppInstanceTypeName());
		if (loadParamsParamValueClassFactory != null)
		{
			loadParamsParamValue.setDelegate(true);
			loadParamsParamValue = (com.earthview.world.core.CommonStringPairList)loadParamsParamValueClassFactory.create();
			loadParamsParamValue.setDelegate(true);
			loadParamsParamValue.setInstancePointer(new InstancePointer(loadParams));
		}
		}
		boolean backgroundThreadParamValue = backgroundThread;
		com.earthview.world.graphic.ResourcePtr returnValue = prepare(nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue, backgroundThreadParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long loadParams, boolean backgroundThread);
	/**
	 * 准备资源			
	 * @param  
	 */
	public com.earthview.world.graphic.ResourcePtr prepare(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams, boolean backgroundThread)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long loadParamsParamValue = (loadParams == null ? 0L : loadParams.nativeObject.pointer);
		boolean backgroundThreadParamValue = backgroundThread;
		long returnValue = prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue, backgroundThreadParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_NoVirtual(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long loadParams, boolean backgroundThread);
	protected com.earthview.world.graphic.ResourcePtr prepare_NoVirtual(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams, boolean backgroundThread)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long loadParamsParamValue = (loadParams == null ? 0L : loadParams.nativeObject.pointer);
		boolean backgroundThreadParamValue = backgroundThread;
		long returnValue = prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue, backgroundThreadParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(String name, String group, boolean isManual, long ref_loader, long loadParams)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.core.CommonStringPairList loadParamsParamValue = (loadParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(loadParamsParamValue != null)
		{
		loadParamsParamValue.setDelegate(true);
		loadParamsParamValue.setInstancePointer(new InstancePointer(loadParams));
		IClassFactory loadParamsParamValueClassFactory = GlobalClassFactoryMap.get(loadParamsParamValue.getCppInstanceTypeName());
		if (loadParamsParamValueClassFactory != null)
		{
			loadParamsParamValue.setDelegate(true);
			loadParamsParamValue = (com.earthview.world.core.CommonStringPairList)loadParamsParamValueClassFactory.create();
			loadParamsParamValue.setDelegate(true);
			loadParamsParamValue.setInstancePointer(new InstancePointer(loadParams));
		}
		}
		com.earthview.world.graphic.ResourcePtr returnValue = prepare(nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long loadParams);
	public com.earthview.world.graphic.ResourcePtr prepare(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long loadParamsParamValue = (loadParams == null ? 0L : loadParams.nativeObject.pointer);
		long returnValue = prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long loadParams);
	protected com.earthview.world.graphic.ResourcePtr prepare_NoVirtual(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long loadParamsParamValue = (loadParams == null ? 0L : loadParams.nativeObject.pointer);
		long returnValue = prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long prepare_EVString_EVString_ev_bool_CManualResourceLoader_callback(String name, String group, boolean isManual, long ref_loader)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.graphic.ResourcePtr returnValue = prepare(nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long prepare_EVString_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String name, String group, boolean isManual, long ref_loader);
	public com.earthview.world.graphic.ResourcePtr prepare(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long returnValue = prepare_EVString_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long prepare_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(long pNativeObject, String name, String group, boolean isManual, long ref_loader);
	protected com.earthview.world.graphic.ResourcePtr prepare_NoVirtual(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long returnValue = prepare_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long prepare_EVString_EVString_ev_bool_callback(String name, String group, boolean isManual)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ResourcePtr returnValue = prepare(nameParamValue, groupParamValue, isManualParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long prepare_EVString_EVString_ev_bool(long pNativeObject, String name, String group, boolean isManual);
	public com.earthview.world.graphic.ResourcePtr prepare(String name, String group, boolean isManual)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long returnValue = prepare_EVString_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long prepare_EVString_EVString_ev_bool_NoVirtual(long pNativeObject, String name, String group, boolean isManual);
	protected com.earthview.world.graphic.ResourcePtr prepare_NoVirtual(String name, String group, boolean isManual)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long returnValue = prepare_EVString_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback(String name, String group, boolean isManual, long ref_loader, long loadParams, boolean backgroundThread)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.core.CommonStringPairList loadParamsParamValue = (loadParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(loadParamsParamValue != null)
		{
		loadParamsParamValue.setDelegate(true);
		loadParamsParamValue.setInstancePointer(new InstancePointer(loadParams));
		IClassFactory loadParamsParamValueClassFactory = GlobalClassFactoryMap.get(loadParamsParamValue.getCppInstanceTypeName());
		if (loadParamsParamValueClassFactory != null)
		{
			loadParamsParamValue.setDelegate(true);
			loadParamsParamValue = (com.earthview.world.core.CommonStringPairList)loadParamsParamValueClassFactory.create();
			loadParamsParamValue.setDelegate(true);
			loadParamsParamValue.setInstancePointer(new InstancePointer(loadParams));
		}
		}
		boolean backgroundThreadParamValue = backgroundThread;
		com.earthview.world.graphic.ResourcePtr returnValue = load(nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue, backgroundThreadParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long loadParams, boolean backgroundThread);
	/**
	 * 加载资源			
	 * @param  
	 */
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams, boolean backgroundThread)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long loadParamsParamValue = (loadParams == null ? 0L : loadParams.nativeObject.pointer);
		boolean backgroundThreadParamValue = backgroundThread;
		long returnValue = load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue, backgroundThreadParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_NoVirtual(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long loadParams, boolean backgroundThread);
	protected com.earthview.world.graphic.ResourcePtr load_NoVirtual(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams, boolean backgroundThread)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long loadParamsParamValue = (loadParams == null ? 0L : loadParams.nativeObject.pointer);
		boolean backgroundThreadParamValue = backgroundThread;
		long returnValue = load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue, backgroundThreadParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(String name, String group, boolean isManual, long ref_loader, long loadParams)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.core.CommonStringPairList loadParamsParamValue = (loadParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(loadParamsParamValue != null)
		{
		loadParamsParamValue.setDelegate(true);
		loadParamsParamValue.setInstancePointer(new InstancePointer(loadParams));
		IClassFactory loadParamsParamValueClassFactory = GlobalClassFactoryMap.get(loadParamsParamValue.getCppInstanceTypeName());
		if (loadParamsParamValueClassFactory != null)
		{
			loadParamsParamValue.setDelegate(true);
			loadParamsParamValue = (com.earthview.world.core.CommonStringPairList)loadParamsParamValueClassFactory.create();
			loadParamsParamValue.setDelegate(true);
			loadParamsParamValue.setInstancePointer(new InstancePointer(loadParams));
		}
		}
		com.earthview.world.graphic.ResourcePtr returnValue = load(nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long loadParams);
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long loadParamsParamValue = (loadParams == null ? 0L : loadParams.nativeObject.pointer);
		long returnValue = load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long loadParams);
	protected com.earthview.world.graphic.ResourcePtr load_NoVirtual(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long loadParamsParamValue = (loadParams == null ? 0L : loadParams.nativeObject.pointer);
		long returnValue = load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long load_EVString_EVString_ev_bool_CManualResourceLoader_callback(String name, String group, boolean isManual, long ref_loader)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.graphic.ResourcePtr returnValue = load(nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long load_EVString_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String name, String group, boolean isManual, long ref_loader);
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long returnValue = load_EVString_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long load_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(long pNativeObject, String name, String group, boolean isManual, long ref_loader);
	protected com.earthview.world.graphic.ResourcePtr load_NoVirtual(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long returnValue = load_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long load_EVString_EVString_ev_bool_callback(String name, String group, boolean isManual)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ResourcePtr returnValue = load(nameParamValue, groupParamValue, isManualParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long load_EVString_EVString_ev_bool(long pNativeObject, String name, String group, boolean isManual);
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, boolean isManual)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long returnValue = load_EVString_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long load_EVString_EVString_ev_bool_NoVirtual(long pNativeObject, String name, String group, boolean isManual);
	protected com.earthview.world.graphic.ResourcePtr load_NoVirtual(String name, String group, boolean isManual)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long returnValue = load_EVString_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long load_EVString_EVString_callback(String name, String group)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.ResourcePtr returnValue = load(nameParamValue, groupParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long load_EVString_EVString(long pNativeObject, String name, String group);
	public com.earthview.world.graphic.ResourcePtr load(String name, String group)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long returnValue = load_EVString_EVString(this.nativeObject.pointer, nameParamValue, groupParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long load_EVString_EVString_NoVirtual(long pNativeObject, String name, String group);
	protected com.earthview.world.graphic.ResourcePtr load_NoVirtual(String name, String group)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long returnValue = load_EVString_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	native private long getScriptPatterns_void(long pNativeObject);
	public com.earthview.world.core.StringVector getScriptPatterns()
	{
		long returnValue = getScriptPatterns_void(this.nativeObject.pointer);
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
	native private long getScriptPatterns_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.StringVector getScriptPatterns_NoVirtual()
	{
		long returnValue = getScriptPatterns_void_NoVirtual(this.nativeObject.pointer);
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

	native private void parseScript_DataStreamPtr_EVString(long pNativeObject, long stream, String groupName);
	/**
	 * 解析脚本			
	 * @param  
	 */
	public void parseScript(com.earthview.world.core.DataStreamPtr stream, String groupName)
	{
		long streamParamValue = stream.nativeObject.pointer;
		String groupNameParamValue = groupName;
		parseScript_DataStreamPtr_EVString(this.nativeObject.pointer, streamParamValue, groupNameParamValue);
	}
	native private void parseScript_DataStreamPtr_EVString_NoVirtual(long pNativeObject, long stream, String groupName);
	protected void parseScript_NoVirtual(com.earthview.world.core.DataStreamPtr stream, String groupName)
	{
		long streamParamValue = stream.nativeObject.pointer;
		String groupNameParamValue = groupName;
		parseScript_DataStreamPtr_EVString_NoVirtual(this.nativeObject.pointer, streamParamValue, groupNameParamValue);
	}

	native private double getLoadingOrder_void(long pNativeObject);
	/**
	 * 获得此类型资源的加载顺序			
	 * @param  
	 */
	public double getLoadingOrder()
	{
		double returnValue = getLoadingOrder_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getLoadingOrder_void_NoVirtual(long pNativeObject);
	protected double getLoadingOrder_NoVirtual()
	{
		double returnValue = getLoadingOrder_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getResourceType_void(long pNativeObject);
	/**
	 * 获得资源的类型	
	 * @param  
	 */
	public StringPointer getResourceType()
	{
		long returnValue = getResourceType_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	protected  void setVerbose_ev_bool_callback(boolean v)
	{
		boolean vParamValue = v;
		setVerbose(vParamValue);
	}

	native private void setVerbose_ev_bool(long pNativeObject, boolean v);
	public void setVerbose(boolean v)
	{
		boolean vParamValue = v;
		setVerbose_ev_bool(this.nativeObject.pointer, vParamValue);
	}
	native private void setVerbose_ev_bool_NoVirtual(long pNativeObject, boolean v);
	protected void setVerbose_NoVirtual(boolean v)
	{
		boolean vParamValue = v;
		setVerbose_ev_bool_NoVirtual(this.nativeObject.pointer, vParamValue);
	}

	protected  boolean getVerbose_void_callback()
	{
		boolean returnValue = getVerbose();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getVerbose_void(long pNativeObject);
	public boolean getVerbose()
	{
		boolean returnValue = getVerbose_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getVerbose_void_NoVirtual(long pNativeObject);
	protected boolean getVerbose_NoVirtual()
	{
		boolean returnValue = getVerbose_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public static class ResourcePool extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceManager::CResourcePool", new ResourcePoolClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceManager::JCResourcePoolProxy", new ResourcePoolClassFactory());
		}

		public ResourcePool(String name) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer namePtr = new BasePointer(name);
			list.add("name", namePtr.get());
			Create("JCResourcePoolProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.ResourceManager$ResourcePool".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private long getName_void(long pNativeObject);
		//// Get the name of the pool
		public StringPointer getName()
		{
			long returnValue = getName_void(this.nativeObject.pointer);
			StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		protected  long removeItem_void_callback()
		{
			com.earthview.world.graphic.ResourcePtr returnValue = removeItem();
			long __returnValue = returnValue.nativeObject.pointer;
			return __returnValue;
		}

		native private long removeItem_void(long pNativeObject);
		public com.earthview.world.graphic.ResourcePtr removeItem()
		{
			long returnValue = removeItem_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
			}
			return __returnValue;
		}
		native private long removeItem_void_NoVirtual(long pNativeObject);
		protected com.earthview.world.graphic.ResourcePtr removeItem_NoVirtual()
		{
			long returnValue = removeItem_void_NoVirtual(this.nativeObject.pointer);
			com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
			}
			return __returnValue;
		}

		protected  void addItem_ResourcePtr_callback(long i)
		{
			com.earthview.world.graphic.ResourcePtr iParamValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
			iParamValue.setDelegate(true);
			iParamValue.setInstancePointer(new InstancePointer(i));
			IClassFactory iParamValueClassFactory = GlobalClassFactoryMap.get(iParamValue.getCppInstanceTypeName());
			if (iParamValueClassFactory != null)
			{
				iParamValue.setDelegate(true);
				iParamValue = (com.earthview.world.graphic.ResourcePtr)iParamValueClassFactory.create();
				iParamValue.setDelegate(true);
				iParamValue.setInstancePointer(new InstancePointer(i));
			}
			addItem(iParamValue);
		}

		native private void addItem_ResourcePtr(long pNativeObject, long i);
		public void addItem(com.earthview.world.graphic.ResourcePtr i)
		{
			long iParamValue = i.nativeObject.pointer;
			addItem_ResourcePtr(this.nativeObject.pointer, iParamValue);
		}
		native private void addItem_ResourcePtr_NoVirtual(long pNativeObject, long i);
		protected void addItem_NoVirtual(com.earthview.world.graphic.ResourcePtr i)
		{
			long iParamValue = i.nativeObject.pointer;
			addItem_ResourcePtr_NoVirtual(this.nativeObject.pointer, iParamValue);
		}

		protected  void clear_void_callback()
		{
			clear();
		}

		native private void clear_void(long pNativeObject);
		//// Clear the pool
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private void clear_void_NoVirtual(long pNativeObject);
		protected void clear_NoVirtual()
		{
			clear_void_NoVirtual(this.nativeObject.pointer);
		}

		public ResourcePool(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ResourcePool(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_removeItem_void(long pNativeObject, String method);
		native protected void register_addItem_ResourcePtr(long pNativeObject, String method);
		native protected void register_clear_void(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_removeItem_void(this.nativeObject.pointer, "removeItem_void_callback");
				this.register_addItem_ResourcePtr(this.nativeObject.pointer, "addItem_ResourcePtr_callback");
				this.register_clear_void(this.nativeObject.pointer, "clear_void_callback");
			}
		}
		
		public static ResourcePool fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ResourcePool obj = null;
 			if(baseObj instanceof ResourcePool)
			{
				obj = (ResourcePool)baseObj;
			} else {
				obj = new ResourcePool(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CResourcePool");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ResourcePoolClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ResourcePool emptyInstance = new ResourcePool(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getResourcePool_EVString(long pNativeObject, String name);
	//// Create a resource pool, or reuse one that already exists
	public com.earthview.world.graphic.ResourceManager.ResourcePool getResourcePool(String name)
	{
		String nameParamValue = name;
		long returnValue = getResourcePool_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ResourceManager.ResourcePool __returnValue = new com.earthview.world.graphic.ResourceManager.ResourcePool(CreatedWhenConstruct.CWC_NotToCreate, "CResourcePool");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourcePool)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CResourcePool");
		}
		return __returnValue;
	}
	native private void destroyResourcePool_CResourcePool(long pNativeObject, long pool);
	//// Destroy a resource pool
	public void destroyResourcePool(com.earthview.world.graphic.ResourceManager.ResourcePool pool)
	{
		long poolParamValue = (pool == null ? 0L : pool.nativeObject.pointer);
		destroyResourcePool_CResourcePool(this.nativeObject.pointer, poolParamValue);
	}
	native private void destroyResourcePool_EVString(long pNativeObject, String name);
	//// Destroy a resource pool
	public void destroyResourcePool(String name)
	{
		String nameParamValue = name;
		destroyResourcePool_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void destroyAllResourcePools_void(long pNativeObject);
	//// destroy all pools
	public void destroyAllResourcePools()
	{
		destroyAllResourcePools_void(this.nativeObject.pointer);
	}
	protected  long createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(String name, long handle, String group, boolean isManual, long loader, long createParams)
	{
		String nameParamValue = name;
		ULongPointer handleParamValue = new ULongPointer(new InstancePointer(handle));
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader loaderParamValue = (loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(loaderParamValue != null)
		{
		loaderParamValue.setDelegate(true);
		loaderParamValue.setInstancePointer(new InstancePointer(loader));
		IClassFactory loaderParamValueClassFactory = GlobalClassFactoryMap.get(loaderParamValue.getCppInstanceTypeName());
		if (loaderParamValueClassFactory != null)
		{
			loaderParamValue.setDelegate(true);
			loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)loaderParamValueClassFactory.create();
			loaderParamValue.setDelegate(true);
			loaderParamValue.setInstancePointer(new InstancePointer(loader));
		}
		}
		com.earthview.world.core.CommonStringPairList createParamsParamValue = (createParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(createParamsParamValue != null)
		{
		createParamsParamValue.setDelegate(true);
		createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		IClassFactory createParamsParamValueClassFactory = GlobalClassFactoryMap.get(createParamsParamValue.getCppInstanceTypeName());
		if (createParamsParamValueClassFactory != null)
		{
			createParamsParamValue.setDelegate(true);
			createParamsParamValue = (com.earthview.world.core.CommonStringPairList)createParamsParamValueClassFactory.create();
			createParamsParamValue.setDelegate(true);
			createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		}
		}
		com.earthview.world.graphic.Resource returnValue = createImpl(nameParamValue, handleParamValue, groupParamValue, isManualParamValue, loaderParamValue, createParamsParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String name, long handle, String group, boolean isManual, long loader, long createParams);
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

	protected  void addImpl_ResourcePtr_callback(long res)
	{
		com.earthview.world.graphic.ResourcePtr resParamValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		resParamValue.setDelegate(true);
		resParamValue.setInstancePointer(new InstancePointer(res));
		IClassFactory resParamValueClassFactory = GlobalClassFactoryMap.get(resParamValue.getCppInstanceTypeName());
		if (resParamValueClassFactory != null)
		{
			resParamValue.setDelegate(true);
			resParamValue = (com.earthview.world.graphic.ResourcePtr)resParamValueClassFactory.create();
			resParamValue.setDelegate(true);
			resParamValue.setInstancePointer(new InstancePointer(res));
		}
		addImpl(resParamValue);
	}

	native private void addImpl_ResourcePtr(long pNativeObject, long res);
	public void addImpl(com.earthview.world.graphic.ResourcePtr res)
	{
		long resParamValue = res.nativeObject.pointer;
		addImpl_ResourcePtr(this.nativeObject.pointer, resParamValue);
	}
	native private void addImpl_ResourcePtr_NoVirtual(long pNativeObject, long res);
	protected void addImpl_NoVirtual(com.earthview.world.graphic.ResourcePtr res)
	{
		long resParamValue = res.nativeObject.pointer;
		addImpl_ResourcePtr_NoVirtual(this.nativeObject.pointer, resParamValue);
	}

	protected  void removeImpl_ResourcePtr_callback(long res)
	{
		com.earthview.world.graphic.ResourcePtr resParamValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		resParamValue.setDelegate(true);
		resParamValue.setInstancePointer(new InstancePointer(res));
		IClassFactory resParamValueClassFactory = GlobalClassFactoryMap.get(resParamValue.getCppInstanceTypeName());
		if (resParamValueClassFactory != null)
		{
			resParamValue.setDelegate(true);
			resParamValue = (com.earthview.world.graphic.ResourcePtr)resParamValueClassFactory.create();
			resParamValue.setDelegate(true);
			resParamValue.setInstancePointer(new InstancePointer(res));
		}
		removeImpl(resParamValue);
	}

	native private void removeImpl_ResourcePtr(long pNativeObject, long res);
	public void removeImpl(com.earthview.world.graphic.ResourcePtr res)
	{
		long resParamValue = res.nativeObject.pointer;
		removeImpl_ResourcePtr(this.nativeObject.pointer, resParamValue);
	}
	native private void removeImpl_ResourcePtr_NoVirtual(long pNativeObject, long res);
	protected void removeImpl_NoVirtual(com.earthview.world.graphic.ResourcePtr res)
	{
		long resParamValue = res.nativeObject.pointer;
		removeImpl_ResourcePtr_NoVirtual(this.nativeObject.pointer, resParamValue);
	}

	protected  void checkUsage_void_callback()
	{
		checkUsage();
	}

	native private void checkUsage_void(long pNativeObject);
	public void checkUsage()
	{
		checkUsage_void(this.nativeObject.pointer);
	}
	native private void checkUsage_void_NoVirtual(long pNativeObject);
	protected void checkUsage_NoVirtual()
	{
		checkUsage_void_NoVirtual(this.nativeObject.pointer);
	}

	public static class ResourceMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceManager::ResourceMap", new ResourceMapClassFactory());
		}

		public ResourceMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ResourceMap", null);
		}

		native private boolean push_EVString_ResourcePtr(long pNativeObject, String key, long val);
		public boolean push(String key, com.earthview.world.graphic.ResourcePtr val)
		{
			String keyParamValue = key;
			long valParamValue = val.nativeObject.pointer;
			boolean returnValue = push_EVString_ResourcePtr(this.nativeObject.pointer, keyParamValue, valParamValue);
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
		public com.earthview.world.graphic.ResourcePtr OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
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
		native private long get_EVString(long pNativeObject, String key);
		public com.earthview.world.graphic.ResourcePtr get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
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
		public ResourceMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ResourceMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ResourceMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ResourceMap obj = null;
 			if(baseObj instanceof ResourceMap)
			{
				obj = (ResourceMap)baseObj;
			} else {
				obj = new ResourceMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ResourceMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ResourceMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ResourceMap emptyInstance = new ResourceMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ResourceWithGroupMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceManager::ResourceWithGroupMap", new ResourceWithGroupMapClassFactory());
		}

		public ResourceWithGroupMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ResourceWithGroupMap", null);
		}

		native private boolean push_EVString_ResourceMap(long pNativeObject, String key, long val);
		public boolean push(String key, com.earthview.world.graphic.ResourceManager.ResourceMap val)
		{
			String keyParamValue = key;
			long valParamValue = val.nativeObject.pointer;
			boolean returnValue = push_EVString_ResourceMap(this.nativeObject.pointer, keyParamValue, valParamValue);
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
		public com.earthview.world.graphic.ResourceManager.ResourceMap OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			com.earthview.world.graphic.ResourceManager.ResourceMap __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceMap(CreatedWhenConstruct.CWC_NotToCreate, "ResourceMap");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceMap)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ResourceMap");
			}
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		public com.earthview.world.graphic.ResourceManager.ResourceMap get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			com.earthview.world.graphic.ResourceManager.ResourceMap __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceMap(CreatedWhenConstruct.CWC_NotToCreate, "ResourceMap");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceMap)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ResourceMap");
			}
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
		public ResourceWithGroupMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ResourceWithGroupMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ResourceWithGroupMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ResourceWithGroupMap obj = null;
 			if(baseObj instanceof ResourceWithGroupMap)
			{
				obj = (ResourceWithGroupMap)baseObj;
			} else {
				obj = new ResourceWithGroupMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ResourceWithGroupMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ResourceWithGroupMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ResourceWithGroupMap emptyInstance = new ResourceWithGroupMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ResourceHandleMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceManager::ResourceHandleMap", new ResourceHandleMapClassFactory());
		}

		native private boolean push_ev_uint64_ResourcePtr(long pNativeObject, long key, long val);
		public boolean push(ULongPointer key, com.earthview.world.graphic.ResourcePtr val)
		{
			long keyParamValue = key.nativeObject.pointer;
			long valParamValue = val.nativeObject.pointer;
			boolean returnValue = push_ev_uint64_ResourcePtr(this.nativeObject.pointer, keyParamValue, valParamValue);
			return returnValue;
		}
		native private boolean exist_ev_uint64(long pNativeObject, long key);
		public boolean exist(ULongPointer key)
		{
			long keyParamValue = key.nativeObject.pointer;
			boolean returnValue = exist_ev_uint64(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_ev_uint64(long pNativeObject, long key);
		public com.earthview.world.graphic.ResourcePtr OperatorIndex(ULongPointer key)
		{
			long keyParamValue = key.nativeObject.pointer;
			long returnValue = OperatorIndex_ev_uint64(this.nativeObject.pointer, keyParamValue);
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
		native private long get_ev_uint64(long pNativeObject, long key);
		public com.earthview.world.graphic.ResourcePtr get(ULongPointer key)
		{
			long keyParamValue = key.nativeObject.pointer;
			long returnValue = get_ev_uint64(this.nativeObject.pointer, keyParamValue);
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
		native private void erase_ev_uint64(long pNativeObject, long key);
		public void erase(ULongPointer key)
		{
			long keyParamValue = key.nativeObject.pointer;
			erase_ev_uint64(this.nativeObject.pointer, keyParamValue);
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
		public ResourceHandleMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ResourceHandleMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ResourceHandleMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ResourceHandleMap obj = null;
 			if(baseObj instanceof ResourceHandleMap)
			{
				obj = (ResourceHandleMap)baseObj;
			} else {
				obj = new ResourceHandleMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ResourceHandleMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ResourceHandleMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ResourceHandleMap emptyInstance = new ResourceHandleMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ResourceHandlePair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceManager::ResourceHandlePair", new ResourceHandlePairClassFactory());
		}

		public ResourceHandlePair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ResourceHandlePair", null);
		}

		native private String get_first_void(long pNativeObject);
		public ULongPointer get_first()
		{
			String jniValue = get_first_void(this.nativeObject.pointer);
			
			ULongPointer __returnValue = new ULongPointer(jniValue);
			return __returnValue;
		}
		
		native private void set_first_ev_uint64 (long pNativeObject, long value);
		public void set_first(ULongPointer first)
		{
			long firstParamValue = first.nativeObject.pointer;
			
			set_first_ev_uint64(this.nativeObject.pointer, firstParamValue);
		}
		
		native private long get_second_void(long pNativeObject);
		public com.earthview.world.graphic.ResourcePtr get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
			}
			return __returnValue;
		}
		
		native private void set_second_ResourcePtr (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.ResourcePtr second)
		{
			long secondParamValue = second.nativeObject.pointer;
			
			set_second_ResourcePtr(this.nativeObject.pointer, secondParamValue);
		}
		
		public ResourceHandlePair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ResourceHandlePair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ResourceHandlePair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ResourceHandlePair obj = null;
 			if(baseObj instanceof ResourceHandlePair)
			{
				obj = (ResourceHandlePair)baseObj;
			} else {
				obj = new ResourceHandlePair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ResourceHandlePair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ResourceHandlePairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ResourceHandlePair emptyInstance = new ResourceHandlePair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ResourceHandleIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceManager::ResourceHandleIterator", new ResourceHandleIteratorClassFactory());
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
		native private String nextKey_void(long pNativeObject);
		public ULongPointer nextKey()
		{
			String returnValue = nextKey_void(this.nativeObject.pointer);
			ULongPointer __returnValue = new ULongPointer(returnValue);
			return __returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		public com.earthview.world.graphic.ResourcePtr nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		public com.earthview.world.graphic.ResourcePtr nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
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
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.ResourcePtr next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.ResourceManager.ResourceHandlePair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ResourceManager.ResourceHandlePair __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceHandlePair(CreatedWhenConstruct.CWC_NotToCreate, "ResourceHandlePair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceHandlePair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ResourceHandlePair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.ResourceManager.ResourceHandlePair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ResourceManager.ResourceHandlePair __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceHandlePair(CreatedWhenConstruct.CWC_NotToCreate, "ResourceHandlePair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceHandlePair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ResourceHandlePair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.ResourceManager.ResourceHandlePair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ResourceManager.ResourceHandlePair __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceHandlePair(CreatedWhenConstruct.CWC_NotToCreate, "ResourceHandlePair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceHandlePair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ResourceHandlePair");
			}
			return __returnValue;
		}
		public ResourceHandleIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ResourceHandleIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ResourceHandleIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ResourceHandleIterator obj = null;
 			if(baseObj instanceof ResourceHandleIterator)
			{
				obj = (ResourceHandleIterator)baseObj;
			} else {
				obj = new ResourceHandleIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ResourceHandleIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ResourceHandleIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ResourceHandleIterator emptyInstance = new ResourceHandleIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getResourceIterator_void(long pNativeObject);
	public com.earthview.world.graphic.ResourceManager.ResourceHandleIterator getResourceIterator()
	{
		long returnValue = getResourceIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ResourceManager.ResourceHandleIterator __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceHandleIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceHandleIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceHandleIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceHandleIterator");
		}
		return __returnValue;
	}
	public ResourceManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ResourceManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static ResourceManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ResourceManager obj = null;
 		if(baseObj instanceof ResourceManager)
		{
			obj = (ResourceManager)baseObj;
		} else {
			obj = new ResourceManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CResourceManager");
			obj.increaseCast();
		}

		return obj;
	}
}
