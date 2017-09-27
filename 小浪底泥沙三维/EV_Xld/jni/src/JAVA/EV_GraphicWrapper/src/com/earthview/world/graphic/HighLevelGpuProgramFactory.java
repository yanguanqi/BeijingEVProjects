package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HighLevelGpuProgramFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CHighLevelGpuProgramFactory", new HighLevelGpuProgramFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCHighLevelGpuProgramFactoryProxy", new HighLevelGpuProgramFactoryClassFactory());
	}

	public HighLevelGpuProgramFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCHighLevelGpuProgramFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.HighLevelGpuProgramFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  String getLanguage_void_callback()
	{
		String returnValue = getLanguage();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getLanguage_void(long pNativeObject);
	//// Get the name of the language this factory creates programs for
	public String getLanguage()
	{
		String returnValue = getLanguage_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getLanguage_void_NoVirtual(long pNativeObject);
	protected String getLanguage_NoVirtual()
	{
		String returnValue = getLanguage_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long create_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_callback(long ref_creator, String name, long handle, String group, boolean isManual, long ref_loader)
	{
		com.earthview.world.graphic.ResourceManager ref_creatorParamValue = (ref_creator == 0L ? null : new com.earthview.world.graphic.ResourceManager(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_creatorParamValue != null)
		{
		ref_creatorParamValue.setDelegate(true);
		ref_creatorParamValue.setInstancePointer(new InstancePointer(ref_creator));
		IClassFactory ref_creatorParamValueClassFactory = GlobalClassFactoryMap.get(ref_creatorParamValue.getCppInstanceTypeName());
		if (ref_creatorParamValueClassFactory != null)
		{
			ref_creatorParamValue.setDelegate(true);
			ref_creatorParamValue = (com.earthview.world.graphic.ResourceManager)ref_creatorParamValueClassFactory.create();
			ref_creatorParamValue.setDelegate(true);
			ref_creatorParamValue.setInstancePointer(new InstancePointer(ref_creator));
		}
		}
		String nameParamValue = name;
		ULongPointer handleParamValue = new ULongPointer(new InstancePointer(handle));
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
		com.earthview.world.graphic.HighLevelGpuProgram returnValue = create(ref_creatorParamValue, nameParamValue, handleParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long create_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader(long pNativeObject, long ref_creator, String name, long handle, String group, boolean isManual, long ref_loader);
	public com.earthview.world.graphic.HighLevelGpuProgram create(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		long ref_creatorParamValue = (ref_creator == null ? 0L : ref_creator.nativeObject.pointer);
		String nameParamValue = name;
		long handleParamValue = handle.nativeObject.pointer;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long returnValue = create_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, ref_creatorParamValue, nameParamValue, handleParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.HighLevelGpuProgram __returnValue = new com.earthview.world.graphic.HighLevelGpuProgram(CreatedWhenConstruct.CWC_NotToCreate, "CHighLevelGpuProgram");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HighLevelGpuProgram)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CHighLevelGpuProgram");
		}
		return __returnValue;
	}
	native private long create_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_NoVirtual(long pNativeObject, long ref_creator, String name, long handle, String group, boolean isManual, long ref_loader);
	protected com.earthview.world.graphic.HighLevelGpuProgram create_NoVirtual(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		long ref_creatorParamValue = (ref_creator == null ? 0L : ref_creator.nativeObject.pointer);
		String nameParamValue = name;
		long handleParamValue = handle.nativeObject.pointer;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long returnValue = create_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_NoVirtual(this.nativeObject.pointer, ref_creatorParamValue, nameParamValue, handleParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.HighLevelGpuProgram __returnValue = new com.earthview.world.graphic.HighLevelGpuProgram(CreatedWhenConstruct.CWC_NotToCreate, "CHighLevelGpuProgram");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HighLevelGpuProgram)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CHighLevelGpuProgram");
		}
		return __returnValue;
	}

	protected  void destroy_CHighLevelGpuProgram_callback(long prog)
	{
		com.earthview.world.graphic.HighLevelGpuProgram progParamValue = (prog == 0L ? null : new com.earthview.world.graphic.HighLevelGpuProgram(CreatedWhenConstruct.CWC_NotToCreate));
		if(progParamValue != null)
		{
		progParamValue.setDelegate(true);
		progParamValue.setInstancePointer(new InstancePointer(prog));
		IClassFactory progParamValueClassFactory = GlobalClassFactoryMap.get(progParamValue.getCppInstanceTypeName());
		if (progParamValueClassFactory != null)
		{
			progParamValue.setDelegate(true);
			progParamValue = (com.earthview.world.graphic.HighLevelGpuProgram)progParamValueClassFactory.create();
			progParamValue.setDelegate(true);
			progParamValue.setInstancePointer(new InstancePointer(prog));
		}
		}
		destroy(progParamValue);
	}

	native private void destroy_CHighLevelGpuProgram(long pNativeObject, long prog);
	public void destroy(com.earthview.world.graphic.HighLevelGpuProgram prog)
	{
		long progParamValue = (prog == null ? 0L : prog.nativeObject.pointer);
		destroy_CHighLevelGpuProgram(this.nativeObject.pointer, progParamValue);
	}
	native private void destroy_CHighLevelGpuProgram_NoVirtual(long pNativeObject, long prog);
	protected void destroy_NoVirtual(com.earthview.world.graphic.HighLevelGpuProgram prog)
	{
		long progParamValue = (prog == null ? 0L : prog.nativeObject.pointer);
		destroy_CHighLevelGpuProgram_NoVirtual(this.nativeObject.pointer, progParamValue);
	}

	public HighLevelGpuProgramFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public HighLevelGpuProgramFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getLanguage_void(long pNativeObject, String method);
	native protected void register_create_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String method);
	native protected void register_destroy_CHighLevelGpuProgram(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getLanguage_void(this.nativeObject.pointer, "getLanguage_void_callback");
			this.register_create_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, "create_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_callback");
			this.register_destroy_CHighLevelGpuProgram(this.nativeObject.pointer, "destroy_CHighLevelGpuProgram_callback");
		}
	}
	
	public static HighLevelGpuProgramFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		HighLevelGpuProgramFactory obj = null;
 		if(baseObj instanceof HighLevelGpuProgramFactory)
		{
			obj = (HighLevelGpuProgramFactory)baseObj;
		} else {
			obj = new HighLevelGpuProgramFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CHighLevelGpuProgramFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
