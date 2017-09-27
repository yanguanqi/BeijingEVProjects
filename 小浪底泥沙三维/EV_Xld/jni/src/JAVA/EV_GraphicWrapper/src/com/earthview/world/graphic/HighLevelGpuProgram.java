package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HighLevelGpuProgram extends com.earthview.world.graphic.GpuProgram {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CHighLevelGpuProgram", new HighLevelGpuProgramClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCHighLevelGpuProgramProxy", new HighLevelGpuProgramClassFactory());
	}

	protected  void loadHighLevel_void_callback()
	{
		loadHighLevel();
	}

	native private void loadHighLevel_void(long pNativeObject);
	//// Internal load high-level portion if not loaded
	public void loadHighLevel()
	{
		loadHighLevel_void(this.nativeObject.pointer);
	}
	native private void loadHighLevel_void_NoVirtual(long pNativeObject);
	protected void loadHighLevel_NoVirtual()
	{
		loadHighLevel_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void unloadHighLevel_void_callback()
	{
		unloadHighLevel();
	}

	native private void unloadHighLevel_void(long pNativeObject);
	//// Internal unload high-level portion if loaded
	public void unloadHighLevel()
	{
		unloadHighLevel_void(this.nativeObject.pointer);
	}
	native private void unloadHighLevel_void_NoVirtual(long pNativeObject);
	protected void unloadHighLevel_NoVirtual()
	{
		unloadHighLevel_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void loadHighLevelImpl_void_callback()
	{
		loadHighLevelImpl();
	}

	native private void loadHighLevelImpl_void(long pNativeObject);
	public void loadHighLevelImpl()
	{
		loadHighLevelImpl_void(this.nativeObject.pointer);
	}
	native private void loadHighLevelImpl_void_NoVirtual(long pNativeObject);
	protected void loadHighLevelImpl_NoVirtual()
	{
		loadHighLevelImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void createLowLevelImpl_void_callback()
	{
		createLowLevelImpl();
	}

	native private void createLowLevelImpl_void(long pNativeObject);
	public void createLowLevelImpl()
	{
		createLowLevelImpl_void(this.nativeObject.pointer);
	}
	native private void createLowLevelImpl_void_NoVirtual(long pNativeObject);
	protected void createLowLevelImpl_NoVirtual()
	{
		createLowLevelImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void unloadHighLevelImpl_void_callback()
	{
		unloadHighLevelImpl();
	}

	native private void unloadHighLevelImpl_void(long pNativeObject);
	//// Internal unload implementation, must be implemented by subclasses
	public void unloadHighLevelImpl()
	{
		unloadHighLevelImpl_void(this.nativeObject.pointer);
	}
	native private void unloadHighLevelImpl_void_NoVirtual(long pNativeObject);
	protected void unloadHighLevelImpl_NoVirtual()
	{
		unloadHighLevelImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void populateParameterNames_GpuProgramParametersSharedPtr_callback(long params)
	{
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
		populateParameterNames(paramsParamValue);
	}

	native private void populateParameterNames_GpuProgramParametersSharedPtr(long pNativeObject, long params);
	//// Populate the passed parameters with name->index map
	public void populateParameterNames(com.earthview.world.graphic.GpuProgramParametersSharedPtr params)
	{
		long paramsParamValue = params.nativeObject.pointer;
		populateParameterNames_GpuProgramParametersSharedPtr(this.nativeObject.pointer, paramsParamValue);
	}
	native private void populateParameterNames_GpuProgramParametersSharedPtr_NoVirtual(long pNativeObject, long params);
	protected void populateParameterNames_NoVirtual(com.earthview.world.graphic.GpuProgramParametersSharedPtr params)
	{
		long paramsParamValue = params.nativeObject.pointer;
		populateParameterNames_GpuProgramParametersSharedPtr_NoVirtual(this.nativeObject.pointer, paramsParamValue);
	}

	protected  void buildConstantDefinitions_void_callback()
	{
		buildConstantDefinitions();
	}

	native private void buildConstantDefinitions_void(long pNativeObject);
	public void buildConstantDefinitions()
	{
		buildConstantDefinitions_void(this.nativeObject.pointer);
	}
	native private void buildConstantDefinitions_void_NoVirtual(long pNativeObject);
	protected void buildConstantDefinitions_NoVirtual()
	{
		buildConstantDefinitions_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void loadImpl_void(long pNativeObject);
	public void loadImpl()
	{
		loadImpl_void(this.nativeObject.pointer);
	}
	native private void loadImpl_void_NoVirtual(long pNativeObject);
	protected void loadImpl_NoVirtual()
	{
		loadImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void unloadImpl_void(long pNativeObject);
	public void unloadImpl()
	{
		unloadImpl_void(this.nativeObject.pointer);
	}
	native private void unloadImpl_void_NoVirtual(long pNativeObject);
	protected void unloadImpl_NoVirtual()
	{
		unloadImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	public HighLevelGpuProgram(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader) {
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
		Create("JCHighLevelGpuProgramProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.HighLevelGpuProgram".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public HighLevelGpuProgram(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group, boolean isManual) {
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
		Create("JCHighLevelGpuProgramProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.HighLevelGpuProgram".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public HighLevelGpuProgram(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group) {
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
		Create("JCHighLevelGpuProgramProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.HighLevelGpuProgram".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long createParameters_void(long pNativeObject);
	public com.earthview.world.graphic.GpuProgramParametersSharedPtr createParameters()
	{
		long returnValue = createParameters_void(this.nativeObject.pointer);
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
	native private long createParameters_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.GpuProgramParametersSharedPtr createParameters_NoVirtual()
	{
		long returnValue = createParameters_void_NoVirtual(this.nativeObject.pointer);
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

	native private long _getBindingDelegate_void(long pNativeObject);
	public com.earthview.world.graphic.GpuProgram _getBindingDelegate()
	{
		long returnValue = _getBindingDelegate_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.GpuProgram __returnValue = new com.earthview.world.graphic.GpuProgram(CreatedWhenConstruct.CWC_NotToCreate, "CGpuProgram");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgram)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgram");
		}
		return __returnValue;
	}
	native private long _getBindingDelegate_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.GpuProgram _getBindingDelegate_NoVirtual()
	{
		long returnValue = _getBindingDelegate_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.GpuProgram __returnValue = new com.earthview.world.graphic.GpuProgram(CreatedWhenConstruct.CWC_NotToCreate, "CGpuProgram");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgram)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgram");
		}
		return __returnValue;
	}

	native private long getConstantDefinitions_void(long pNativeObject);
	public com.earthview.world.graphic.GpuNamedConstants getConstantDefinitions()
	{
		long returnValue = getConstantDefinitions_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuNamedConstants __returnValue = new com.earthview.world.graphic.GpuNamedConstants(CreatedWhenConstruct.CWC_NotToCreate, "GpuNamedConstants");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuNamedConstants)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuNamedConstants");
		}
		return __returnValue;
	}
	native private long getConstantDefinitions_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.GpuNamedConstants getConstantDefinitions_NoVirtual()
	{
		long returnValue = getConstantDefinitions_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuNamedConstants __returnValue = new com.earthview.world.graphic.GpuNamedConstants(CreatedWhenConstruct.CWC_NotToCreate, "GpuNamedConstants");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuNamedConstants)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuNamedConstants");
		}
		return __returnValue;
	}

	native private long getNamedConstants_void(long pNativeObject);
	//// Override CGpuProgram::getNamedConstants to ensure built
	public com.earthview.world.graphic.GpuNamedConstants getNamedConstants()
	{
		long returnValue = getNamedConstants_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuNamedConstants __returnValue = new com.earthview.world.graphic.GpuNamedConstants(CreatedWhenConstruct.CWC_NotToCreate, "GpuNamedConstants");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuNamedConstants)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuNamedConstants");
		}
		return __returnValue;
	}
	native private long getNamedConstants_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.GpuNamedConstants getNamedConstants_NoVirtual()
	{
		long returnValue = getNamedConstants_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuNamedConstants __returnValue = new com.earthview.world.graphic.GpuNamedConstants(CreatedWhenConstruct.CWC_NotToCreate, "GpuNamedConstants");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuNamedConstants)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuNamedConstants");
		}
		return __returnValue;
	}

	public HighLevelGpuProgram(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public HighLevelGpuProgram(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void setSourceFile(String filename)
	{
		super.setSourceFile_NoVirtual(filename);
	}
	public void setSource(String source)
	{
		super.setSource_NoVirtual(source);
	}
	public String getSyntaxCode()
	{
		return super.getSyntaxCode_NoVirtual();
	}
	public void setSyntaxCode(String syntax)
	{
		super.setSyntaxCode_NoVirtual(syntax);
	}
	public String getSourceFile()
	{
		return super.getSourceFile_NoVirtual();
	}
	public String getSource()
	{
		return super.getSource_NoVirtual();
	}
	//// Set the program type (only valid before load)
	public void setType(com.earthview.world.graphic.GpuProgramType t)
	{
		super.setType_NoVirtual(t);
	}
	//// Get the program type
	public com.earthview.world.graphic.GpuProgramType getType()
	{
		return super.getType_NoVirtual();
	}
	public boolean isSupported()
	{
		return super.isSupported_NoVirtual();
	}
	public void setSkeletalAnimationIncluded(boolean included)
	{
		super.setSkeletalAnimationIncluded_NoVirtual(included);
	}
	public boolean isSkeletalAnimationIncluded()
	{
		return super.isSkeletalAnimationIncluded_NoVirtual();
	}
	public void setMorphAnimationIncluded(boolean included)
	{
		super.setMorphAnimationIncluded_NoVirtual(included);
	}
	public void setPoseAnimationIncluded(int poseCount)
	{
		super.setPoseAnimationIncluded_NoVirtual(poseCount);
	}
	public boolean isMorphAnimationIncluded()
	{
		return super.isMorphAnimationIncluded_NoVirtual();
	}
	public boolean isPoseAnimationIncluded()
	{
		return super.isPoseAnimationIncluded_NoVirtual();
	}
	public int getNumberOfPosesIncluded()
	{
		return super.getNumberOfPosesIncluded_NoVirtual();
	}
	public void setVertexTextureFetchRequired(boolean r)
	{
		super.setVertexTextureFetchRequired_NoVirtual(r);
	}
	public boolean isVertexTextureFetchRequired()
	{
		return super.isVertexTextureFetchRequired_NoVirtual();
	}
	public void setAdjacencyInfoRequired(boolean r)
	{
		super.setAdjacencyInfoRequired_NoVirtual(r);
	}
	public boolean isAdjacencyInfoRequired()
	{
		return super.isAdjacencyInfoRequired_NoVirtual();
	}
	public com.earthview.world.graphic.GpuProgramParametersSharedPtr getDefaultParameters()
	{
		return super.getDefaultParameters_NoVirtual();
	}
	public boolean hasDefaultParameters()
	{
		return super.hasDefaultParameters_NoVirtual();
	}
	public boolean getPassSurfaceAndLightStates()
	{
		return super.getPassSurfaceAndLightStates_NoVirtual();
	}
	public boolean getPassFogStates()
	{
		return super.getPassFogStates_NoVirtual();
	}
	public boolean getPassTransformStates()
	{
		return super.getPassTransformStates_NoVirtual();
	}
	public String getLanguage()
	{
		return super.getLanguage_NoVirtual();
	}
	public boolean hasCompileError()
	{
		return super.hasCompileError_NoVirtual();
	}
	public void resetCompileError()
	{
		super.resetCompileError_NoVirtual();
	}
	public void setManualNamedConstants(com.earthview.world.graphic.GpuNamedConstants namedConstants)
	{
		super.setManualNamedConstants_NoVirtual(namedConstants);
	}
	public void setManualNamedConstantsFile(String paramDefFile)
	{
		super.setManualNamedConstantsFile_NoVirtual(paramDefFile);
	}
	public String getManualNamedConstantsFile()
	{
		return super.getManualNamedConstantsFile_NoVirtual();
	}
	//// Virtual method which must be implemented by subclasses, load from mSource
	public void loadFromSource()
	{
		super.loadFromSource_NoVirtual();
	}
	/**
	 * 加载前调用的函数
	 */
	public void preLoadImpl()
	{
		super.preLoadImpl_NoVirtual();
	}
	/**
	 * 加载后调用的函数
	 */
	public void postLoadImpl()
	{
		super.postLoadImpl_NoVirtual();
	}
	/**
	 * 卸载前调用的函数
	 */
	public void preUnloadImpl()
	{
		super.preUnloadImpl_NoVirtual();
	}
	/**
	 * 卸载后调用的函数
	 */
	public void postUnloadImpl()
	{
		super.postUnloadImpl_NoVirtual();
	}
	/**
	 * 准备函数的实现
	 */
	public void prepareImpl()
	{
		super.prepareImpl_NoVirtual();
	}
	/**
	 * 准备函数的逆过程的实现
	 */
	public void unprepareImpl()
	{
		super.unprepareImpl_NoVirtual();
	}
	/**
	 * 计算资源所占内存的大小
	 */
	public long calculateSize()
	{
		return super.calculateSize_NoVirtual();
	}
	/**
	 * 准备(读取资源文件)
	 */
	public void prepare(boolean backgroundThread)
	{
		super.prepare_NoVirtual(backgroundThread);
	}
	public void prepare()
	{
		super.prepare_NoVirtual();
	}
	/**
	 * 加载
	 */
	public void load(boolean backgroundThread)
	{
		super.load_NoVirtual(backgroundThread);
	}
	public void load()
	{
		super.load_NoVirtual();
	}
	/**
	 * 重新加载
	 */
	public void reload()
	{
		super.reload_NoVirtual();
	}
	/**
	 * 是否可重新加载
	 */
	public boolean isReloadable()
	{
		return super.isReloadable_NoVirtual();
	}
	/**
	 * 是否手动加载
	 */
	public boolean isManuallyLoaded()
	{
		return super.isManuallyLoaded_NoVirtual();
	}
	/**
	 * 卸载
	 */
	public void unload()
	{
		super.unload_NoVirtual();
	}
	/**
	 * 获得资源大小
	 */
	public long getSize()
	{
		return super.getSize_NoVirtual();
	}
	/**
	 * 确保在使用
	 */
	public void touch()
	{
		super.touch_NoVirtual();
	}
	/**
	 * 获得资源名
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获得资源句柄
	 */
	public ULongPointer getHandle()
	{
		return super.getHandle_NoVirtual();
	}
	/**
	 * 是否准备就绪
	 */
	public boolean isPrepared()
	{
		return super.isPrepared_NoVirtual();
	}
	/**
	 * 是否已加载
	 */
	public boolean isLoaded()
	{
		return super.isLoaded_NoVirtual();
	}
	/**
	 * 是否正在加载
	 */
	public boolean isLoading()
	{
		return super.isLoading_NoVirtual();
	}
	/**
	 * 获得加载状态
	 */
	public com.earthview.world.graphic.Resource.LoadingState getLoadingState()
	{
		return super.getLoadingState_NoVirtual();
	}
	/**
	 * 是否为后台加载
	 */
	public boolean isBackgroundLoaded()
	{
		return super.isBackgroundLoaded_NoVirtual();
	}
	/**
	 * 设置为后台加载
	 */
	public void setBackgroundLoaded(boolean bl)
	{
		super.setBackgroundLoaded_NoVirtual(bl);
	}
	public void escalateLoading()
	{
		super.escalateLoading_NoVirtual();
	}
	/**
	 * 添加监听
	 */
	public void addListener(com.earthview.world.graphic.Resource.ResourceListener ref_lis)
	{
		super.addListener_NoVirtual(ref_lis);
	}
	/**
	 * 移除监听
	 */
	public void removeListener(com.earthview.world.graphic.Resource.ResourceListener lis)
	{
		super.removeListener_NoVirtual(lis);
	}
	/**
	 * 获得组名
	 */
	public String getGroup()
	{
		return super.getGroup_NoVirtual();
	}
	/**
	 * 更换资源组
	 */
	public void changeGroupOwnership(String newGroup)
	{
		super.changeGroupOwnership_NoVirtual(newGroup);
	}
	/**
	 * 获得创建者(资源管理器)
	 */
	public com.earthview.world.graphic.ResourceManager getCreator()
	{
		return super.getCreator_NoVirtual();
	}
	public String getOrigin()
	{
		return super.getOrigin_NoVirtual();
	}
	//// Notify this resource of it's origin
	public void _notifyOrigin(String origin)
	{
		super._notifyOrigin_NoVirtual(origin);
	}
	public long getStateCount()
	{
		return super.getStateCount_NoVirtual();
	}
	/**
	 * 将状态置为脏
	 */
	public void _dirtyState()
	{
		super._dirtyState_NoVirtual();
	}
	/**
	 * 告知监听者加载完成
	 */
	public void _fireLoadingComplete(boolean wasBackgroundLoaded)
	{
		super._fireLoadingComplete_NoVirtual(wasBackgroundLoaded);
	}
	/**
	 * 告知监听者准备就绪
	 */
	public void _firePreparingComplete(boolean wasBackgroundLoaded)
	{
		super._firePreparingComplete_NoVirtual(wasBackgroundLoaded);
	}
	/**
	 * 告知监听者卸载完成
	 */
	public void _fireUnloadingComplete()
	{
		super._fireUnloadingComplete_NoVirtual();
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
	
	native protected void register_loadHighLevel_void(long pNativeObject, String method);
	native protected void register_unloadHighLevel_void(long pNativeObject, String method);
	native protected void register_loadHighLevelImpl_void(long pNativeObject, String method);
	native protected void register_createLowLevelImpl_void(long pNativeObject, String method);
	native protected void register_unloadHighLevelImpl_void(long pNativeObject, String method);
	native protected void register_populateParameterNames_GpuProgramParametersSharedPtr(long pNativeObject, String method);
	native protected void register_buildConstantDefinitions_void(long pNativeObject, String method);
	native protected void register_setSourceFile_EVString(long pNativeObject, String method);
	native protected void register_setSource_EVString(long pNativeObject, String method);
	native protected void register_getSyntaxCode_void(long pNativeObject, String method);
	native protected void register_setSyntaxCode_EVString(long pNativeObject, String method);
	native protected void register_getSourceFile_void(long pNativeObject, String method);
	native protected void register_getSource_void(long pNativeObject, String method);
	native protected void register_setType_GpuProgramType(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register__getBindingDelegate_void(long pNativeObject, String method);
	native protected void register_isSupported_void(long pNativeObject, String method);
	native protected void register_createParameters_void(long pNativeObject, String method);
	native protected void register_setSkeletalAnimationIncluded_ev_bool(long pNativeObject, String method);
	native protected void register_isSkeletalAnimationIncluded_void(long pNativeObject, String method);
	native protected void register_setMorphAnimationIncluded_ev_bool(long pNativeObject, String method);
	native protected void register_setPoseAnimationIncluded_ev_uint16(long pNativeObject, String method);
	native protected void register_isMorphAnimationIncluded_void(long pNativeObject, String method);
	native protected void register_isPoseAnimationIncluded_void(long pNativeObject, String method);
	native protected void register_getNumberOfPosesIncluded_void(long pNativeObject, String method);
	native protected void register_setVertexTextureFetchRequired_ev_bool(long pNativeObject, String method);
	native protected void register_isVertexTextureFetchRequired_void(long pNativeObject, String method);
	native protected void register_setAdjacencyInfoRequired_ev_bool(long pNativeObject, String method);
	native protected void register_isAdjacencyInfoRequired_void(long pNativeObject, String method);
	native protected void register_getDefaultParameters_void(long pNativeObject, String method);
	native protected void register_hasDefaultParameters_void(long pNativeObject, String method);
	native protected void register_getPassSurfaceAndLightStates_void(long pNativeObject, String method);
	native protected void register_getPassFogStates_void(long pNativeObject, String method);
	native protected void register_getPassTransformStates_void(long pNativeObject, String method);
	native protected void register_getLanguage_void(long pNativeObject, String method);
	native protected void register_hasCompileError_void(long pNativeObject, String method);
	native protected void register_resetCompileError_void(long pNativeObject, String method);
	native protected void register_setManualNamedConstants_GpuNamedConstants(long pNativeObject, String method);
	native protected void register_getNamedConstants_void(long pNativeObject, String method);
	native protected void register_setManualNamedConstantsFile_EVString(long pNativeObject, String method);
	native protected void register_getManualNamedConstantsFile_void(long pNativeObject, String method);
	native protected void register_getConstantDefinitions_void(long pNativeObject, String method);
	native protected void register_loadFromSource_void(long pNativeObject, String method);
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
			this.register_loadHighLevel_void(this.nativeObject.pointer, "loadHighLevel_void_callback");
			this.register_unloadHighLevel_void(this.nativeObject.pointer, "unloadHighLevel_void_callback");
			this.register_loadHighLevelImpl_void(this.nativeObject.pointer, "loadHighLevelImpl_void_callback");
			this.register_createLowLevelImpl_void(this.nativeObject.pointer, "createLowLevelImpl_void_callback");
			this.register_unloadHighLevelImpl_void(this.nativeObject.pointer, "unloadHighLevelImpl_void_callback");
			this.register_populateParameterNames_GpuProgramParametersSharedPtr(this.nativeObject.pointer, "populateParameterNames_GpuProgramParametersSharedPtr_callback");
			this.register_buildConstantDefinitions_void(this.nativeObject.pointer, "buildConstantDefinitions_void_callback");
			this.register_setSourceFile_EVString(this.nativeObject.pointer, "setSourceFile_EVString_callback");
			this.register_setSource_EVString(this.nativeObject.pointer, "setSource_EVString_callback");
			this.register_getSyntaxCode_void(this.nativeObject.pointer, "getSyntaxCode_void_callback");
			this.register_setSyntaxCode_EVString(this.nativeObject.pointer, "setSyntaxCode_EVString_callback");
			this.register_getSourceFile_void(this.nativeObject.pointer, "getSourceFile_void_callback");
			this.register_getSource_void(this.nativeObject.pointer, "getSource_void_callback");
			this.register_setType_GpuProgramType(this.nativeObject.pointer, "setType_GpuProgramType_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register__getBindingDelegate_void(this.nativeObject.pointer, "_getBindingDelegate_void_callback");
			this.register_isSupported_void(this.nativeObject.pointer, "isSupported_void_callback");
			this.register_createParameters_void(this.nativeObject.pointer, "createParameters_void_callback");
			this.register_setSkeletalAnimationIncluded_ev_bool(this.nativeObject.pointer, "setSkeletalAnimationIncluded_ev_bool_callback");
			this.register_isSkeletalAnimationIncluded_void(this.nativeObject.pointer, "isSkeletalAnimationIncluded_void_callback");
			this.register_setMorphAnimationIncluded_ev_bool(this.nativeObject.pointer, "setMorphAnimationIncluded_ev_bool_callback");
			this.register_setPoseAnimationIncluded_ev_uint16(this.nativeObject.pointer, "setPoseAnimationIncluded_ev_uint16_callback");
			this.register_isMorphAnimationIncluded_void(this.nativeObject.pointer, "isMorphAnimationIncluded_void_callback");
			this.register_isPoseAnimationIncluded_void(this.nativeObject.pointer, "isPoseAnimationIncluded_void_callback");
			this.register_getNumberOfPosesIncluded_void(this.nativeObject.pointer, "getNumberOfPosesIncluded_void_callback");
			this.register_setVertexTextureFetchRequired_ev_bool(this.nativeObject.pointer, "setVertexTextureFetchRequired_ev_bool_callback");
			this.register_isVertexTextureFetchRequired_void(this.nativeObject.pointer, "isVertexTextureFetchRequired_void_callback");
			this.register_setAdjacencyInfoRequired_ev_bool(this.nativeObject.pointer, "setAdjacencyInfoRequired_ev_bool_callback");
			this.register_isAdjacencyInfoRequired_void(this.nativeObject.pointer, "isAdjacencyInfoRequired_void_callback");
			this.register_getDefaultParameters_void(this.nativeObject.pointer, "getDefaultParameters_void_callback");
			this.register_hasDefaultParameters_void(this.nativeObject.pointer, "hasDefaultParameters_void_callback");
			this.register_getPassSurfaceAndLightStates_void(this.nativeObject.pointer, "getPassSurfaceAndLightStates_void_callback");
			this.register_getPassFogStates_void(this.nativeObject.pointer, "getPassFogStates_void_callback");
			this.register_getPassTransformStates_void(this.nativeObject.pointer, "getPassTransformStates_void_callback");
			this.register_getLanguage_void(this.nativeObject.pointer, "getLanguage_void_callback");
			this.register_hasCompileError_void(this.nativeObject.pointer, "hasCompileError_void_callback");
			this.register_resetCompileError_void(this.nativeObject.pointer, "resetCompileError_void_callback");
			this.register_setManualNamedConstants_GpuNamedConstants(this.nativeObject.pointer, "setManualNamedConstants_GpuNamedConstants_callback");
			this.register_getNamedConstants_void(this.nativeObject.pointer, "getNamedConstants_void_callback");
			this.register_setManualNamedConstantsFile_EVString(this.nativeObject.pointer, "setManualNamedConstantsFile_EVString_callback");
			this.register_getManualNamedConstantsFile_void(this.nativeObject.pointer, "getManualNamedConstantsFile_void_callback");
			this.register_getConstantDefinitions_void(this.nativeObject.pointer, "getConstantDefinitions_void_callback");
			this.register_loadFromSource_void(this.nativeObject.pointer, "loadFromSource_void_callback");
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
	
	public static HighLevelGpuProgram fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		HighLevelGpuProgram obj = null;
 		if(baseObj instanceof HighLevelGpuProgram)
		{
			obj = (HighLevelGpuProgram)baseObj;
		} else {
			obj = new HighLevelGpuProgram(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CHighLevelGpuProgram");
			obj.increaseCast();
		}

		return obj;
	}
}
