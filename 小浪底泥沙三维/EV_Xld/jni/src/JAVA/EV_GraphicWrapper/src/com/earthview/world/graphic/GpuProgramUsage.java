package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuProgramUsage extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgramUsage", new GpuProgramUsageClassFactory());
	}

	public static class GpuProgramUsageListener extends com.earthview.world.graphic.Resource.ResourceListener {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener", new GpuProgramUsageListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgramUsage::JCGpuProgramUsageListenerProxy", new GpuProgramUsageListenerClassFactory());
		}

		public GpuProgramUsageListener(com.earthview.world.graphic.GpuProgramUsage ref_parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			Create("JCGpuProgramUsageListenerProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.GpuProgramUsage$GpuProgramUsageListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private void unloadingComplete_CResource(long pNativeObject, long prog);
		//// CResourceListener
		public void unloadingComplete(com.earthview.world.graphic.Resource prog)
		{
			long progParamValue = (prog == null ? 0L : prog.nativeObject.pointer);
			unloadingComplete_CResource(this.nativeObject.pointer, progParamValue);
		}
		native private void unloadingComplete_CResource_NoVirtual(long pNativeObject, long prog);
		protected void unloadingComplete_NoVirtual(com.earthview.world.graphic.Resource prog)
		{
			long progParamValue = (prog == null ? 0L : prog.nativeObject.pointer);
			unloadingComplete_CResource_NoVirtual(this.nativeObject.pointer, progParamValue);
		}

		native private void loadingComplete_CResource(long pNativeObject, long prog);
		public void loadingComplete(com.earthview.world.graphic.Resource prog)
		{
			long progParamValue = (prog == null ? 0L : prog.nativeObject.pointer);
			loadingComplete_CResource(this.nativeObject.pointer, progParamValue);
		}
		native private void loadingComplete_CResource_NoVirtual(long pNativeObject, long prog);
		protected void loadingComplete_NoVirtual(com.earthview.world.graphic.Resource prog)
		{
			long progParamValue = (prog == null ? 0L : prog.nativeObject.pointer);
			loadingComplete_CResource_NoVirtual(this.nativeObject.pointer, progParamValue);
		}

		public GpuProgramUsageListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public GpuProgramUsageListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		public void backgroundLoadingComplete(com.earthview.world.graphic.Resource pResource)
		{
			super.backgroundLoadingComplete_NoVirtual(pResource);
		}
		public void backgroundPreparingComplete(com.earthview.world.graphic.Resource pResource)
		{
			super.backgroundPreparingComplete_NoVirtual(pResource);
		}
		public void preparingComplete(com.earthview.world.graphic.Resource pResource)
		{
			super.preparingComplete_NoVirtual(pResource);
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
		
		public static GpuProgramUsageListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			GpuProgramUsageListener obj = null;
 			if(baseObj instanceof GpuProgramUsageListener)
			{
				obj = (GpuProgramUsageListener)baseObj;
			} else {
				obj = new GpuProgramUsageListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CGpuProgramUsageListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class GpuProgramUsageListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			GpuProgramUsageListener emptyInstance = new GpuProgramUsageListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getListenerPtr_void(long pNativeObject);
	public com.earthview.world.graphic.GpuProgramUsage.GpuProgramUsageListener getListenerPtr()
	{
		long returnValue = getListenerPtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.GpuProgramUsage.GpuProgramUsageListener __returnValue = new com.earthview.world.graphic.GpuProgramUsage.GpuProgramUsageListener(CreatedWhenConstruct.CWC_NotToCreate, "CGpuProgramUsageListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramUsage.GpuProgramUsageListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramUsageListener");
		}
		return __returnValue;
	}
	native private long getListener_void(long pNativeObject);
	public com.earthview.world.graphic.GpuProgramUsage.GpuProgramUsageListener getListener()
	{
		long returnValue = getListener_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramUsage.GpuProgramUsageListener __returnValue = new com.earthview.world.graphic.GpuProgramUsage.GpuProgramUsageListener(CreatedWhenConstruct.CWC_NotToCreate, "CGpuProgramUsageListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramUsage.GpuProgramUsageListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramUsageListener");
		}
		return __returnValue;
	}
	public GpuProgramUsage(com.earthview.world.graphic.GpuProgramType gptype, com.earthview.world.graphic.Pass ref_parent) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer gptypePtr = new BasePointer(gptype);
		list.add("gptype", gptypePtr.get());
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		Create("CGpuProgramUsage", list);
	}

	public GpuProgramUsage(com.earthview.world.graphic.GpuProgramUsage rhs, com.earthview.world.graphic.Pass ref_newparent) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		BasePointer ref_newparentPtr = new BasePointer(ref_newparent);
		list.add("ref_newparent", ref_newparentPtr.get());
		Create("CGpuProgramUsage", list);
	}

	native private int getType_void(long pNativeObject);
	public com.earthview.world.graphic.GpuProgramType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.GpuProgramType.toEnum(returnValue);
	}
	native private void setProgramName_EVString_ev_bool(long pNativeObject, String name, boolean resetParams);
	public void setProgramName(String name, boolean resetParams)
	{
		String nameParamValue = name;
		boolean resetParamsParamValue = resetParams;
		setProgramName_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, resetParamsParamValue);
	}
	native private void setProgramName_EVString(long pNativeObject, String name);
	public void setProgramName(String name)
	{
		String nameParamValue = name;
		setProgramName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setProgram_CGpuProgramPtr(long pNativeObject, long prog);
	public void setProgram(com.earthview.world.graphic.GpuProgramPtr prog)
	{
		long progParamValue = prog.nativeObject.pointer;
		setProgram_CGpuProgramPtr(this.nativeObject.pointer, progParamValue);
	}
	native private long getProgram_void(long pNativeObject);
	public com.earthview.world.graphic.GpuProgramPtr getProgram()
	{
		long returnValue = getProgram_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramPtr __returnValue = new com.earthview.world.graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate, "CGpuProgramPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		}
		return __returnValue;
	}
	native private String getProgramName_void(long pNativeObject);
	public String getProgramName()
	{
		String returnValue = getProgramName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setParameters_GpuProgramParametersSharedPtr(long pNativeObject, long parameters);
	public void setParameters(com.earthview.world.graphic.GpuProgramParametersSharedPtr parameters)
	{
		long parametersParamValue = parameters.nativeObject.pointer;
		setParameters_GpuProgramParametersSharedPtr(this.nativeObject.pointer, parametersParamValue);
	}
	native private long getParameters_void(long pNativeObject);
	public com.earthview.world.graphic.GpuProgramParametersSharedPtr getParameters()
	{
		long returnValue = getParameters_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramParametersSharedPtr __returnValue = new com.earthview.world.graphic.GpuProgramParametersSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParametersSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		}
		return __returnValue;
	}
	native private void _load_void(long pNativeObject);
	//// Load this usage (and ensure program is loaded)
	public void _load()
	{
		_load_void(this.nativeObject.pointer);
	}
	native private void _unload_void(long pNativeObject);
	//// Unload this usage
	public void _unload()
	{
		_unload_void(this.nativeObject.pointer);
	}
	public GpuProgramUsage(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GpuProgramUsage(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GpuProgramUsage fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GpuProgramUsage obj = null;
 		if(baseObj instanceof GpuProgramUsage)
		{
			obj = (GpuProgramUsage)baseObj;
		} else {
			obj = new GpuProgramUsage(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGpuProgramUsage");
			obj.increaseCast();
		}

		return obj;
	}
}
