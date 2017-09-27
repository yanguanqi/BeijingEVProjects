package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 执行高级GPU编程
 */
public class UnifiedHighLevelGpuProgram extends com.earthview.world.graphic.HighLevelGpuProgram {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CUnifiedHighLevelGpuProgram", new UnifiedHighLevelGpuProgramClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCUnifiedHighLevelGpuProgramProxy", new UnifiedHighLevelGpuProgramClassFactory());
	}

	///设置委托命令对象
	public static class UnifiedHighLevelGpuProgramCmdDelegate extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CUnifiedHighLevelGpuProgram::CUnifiedHighLevelGpuProgramCmdDelegate", new UnifiedHighLevelGpuProgramCmdDelegateClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CUnifiedHighLevelGpuProgram::JCUnifiedHighLevelGpuProgramCmdDelegateProxy", new UnifiedHighLevelGpuProgramCmdDelegateClassFactory());
		}

		public UnifiedHighLevelGpuProgramCmdDelegate() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCUnifiedHighLevelGpuProgramCmdDelegateProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.UnifiedHighLevelGpuProgram$UnifiedHighLevelGpuProgramCmdDelegate".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private String doGet_void(long pNativeObject, long target);
		/**
		 * 得到委托对象
		 * @param target 委托目标
		 * @return 返回委托对象
		 */
		public String doGet(VoidPointer target)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String returnValue = doGet_void(this.nativeObject.pointer, targetParamValue);
			return returnValue;
		}
		native private String doGet_void_NoVirtual(long pNativeObject, long target);
		protected String doGet_NoVirtual(VoidPointer target)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String returnValue = doGet_void_NoVirtual(this.nativeObject.pointer, targetParamValue);
			return returnValue;
		}

		native private void doSet_void_EVString(long pNativeObject, long target, String val);
		/**
		 * 设置委托对象
		 * @param target 委托对象
		 * @param val 值
		 */
		public void doSet(VoidPointer target, String val)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String valParamValue = val;
			doSet_void_EVString(this.nativeObject.pointer, targetParamValue, valParamValue);
		}
		native private void doSet_void_EVString_NoVirtual(long pNativeObject, long target, String val);
		protected void doSet_NoVirtual(VoidPointer target, String val)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String valParamValue = val;
			doSet_void_EVString_NoVirtual(this.nativeObject.pointer, targetParamValue, valParamValue);
		}

		public UnifiedHighLevelGpuProgramCmdDelegate(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public UnifiedHighLevelGpuProgramCmdDelegate(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/// 在doSet之前测试一次值是否有效。
		public boolean trySet(VoidPointer target, String val, StringPointer reason)
		{
			return super.trySet_NoVirtual(target, val, reason);
		}
		
		native protected void register_doGet_void(long pNativeObject, String method);
		native protected void register_doSet_void_EVString(long pNativeObject, String method);
		native protected void register_trySet_void_EVString_EVString(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_doGet_void(this.nativeObject.pointer, "doGet_void_callback");
				this.register_doSet_void_EVString(this.nativeObject.pointer, "doSet_void_EVString_callback");
				this.register_trySet_void_EVString_EVString(this.nativeObject.pointer, "trySet_void_EVString_EVString_callback");
			}
		}
		
		public static UnifiedHighLevelGpuProgramCmdDelegate fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			UnifiedHighLevelGpuProgramCmdDelegate obj = null;
 			if(baseObj instanceof UnifiedHighLevelGpuProgramCmdDelegate)
			{
				obj = (UnifiedHighLevelGpuProgramCmdDelegate)baseObj;
			} else {
				obj = new UnifiedHighLevelGpuProgramCmdDelegate(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CUnifiedHighLevelGpuProgramCmdDelegate");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class UnifiedHighLevelGpuProgramCmdDelegateClassFactory implements IClassFactory {
		public BaseObject create()
		{
			UnifiedHighLevelGpuProgramCmdDelegate emptyInstance = new UnifiedHighLevelGpuProgramCmdDelegate(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
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

	native private void unloadHighLevelImpl_void(long pNativeObject);
	public void unloadHighLevelImpl()
	{
		unloadHighLevelImpl_void(this.nativeObject.pointer);
	}
	native private void unloadHighLevelImpl_void_NoVirtual(long pNativeObject);
	protected void unloadHighLevelImpl_NoVirtual()
	{
		unloadHighLevelImpl_void_NoVirtual(this.nativeObject.pointer);
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

	native private void loadFromSource_void(long pNativeObject);
	public void loadFromSource()
	{
		loadFromSource_void(this.nativeObject.pointer);
	}
	native private void loadFromSource_void_NoVirtual(long pNativeObject);
	protected void loadFromSource_NoVirtual()
	{
		loadFromSource_void_NoVirtual(this.nativeObject.pointer);
	}

	/**
	 * 带参数的构造函数
	 * @param creator 
	 * @param name 
	 * @param handle 
	 * @param group 
	 * @param isManual 
	 * @param loader 
	 */
	public UnifiedHighLevelGpuProgram(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader) {
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
		Create("JCUnifiedHighLevelGpuProgramProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.UnifiedHighLevelGpuProgram".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public UnifiedHighLevelGpuProgram(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group, boolean isManual) {
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
		Create("JCUnifiedHighLevelGpuProgramProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.UnifiedHighLevelGpuProgram".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public UnifiedHighLevelGpuProgram(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group) {
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
		Create("JCUnifiedHighLevelGpuProgramProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.UnifiedHighLevelGpuProgram".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void addDelegateProgram_EVString(long pNativeObject, String name);
	/**
	 * 在列表上增加委托程序
	 * @param name 名称
	 */
	public void addDelegateProgram(String name)
	{
		String nameParamValue = name;
		addDelegateProgram_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void clearDelegatePrograms_void(long pNativeObject);
	/**
	 * 清除所有的委托编程
	 */
	public void clearDelegatePrograms()
	{
		clearDelegatePrograms_void(this.nativeObject.pointer);
	}
	native private long _getDelegate_void(long pNativeObject);
	/**
	 * 获得已经选择的委托
	 */
	public com.earthview.world.graphic.HighLevelGpuProgramPtr _getDelegate()
	{
		long returnValue = _getDelegate_void(this.nativeObject.pointer);
		com.earthview.world.graphic.HighLevelGpuProgramPtr __returnValue = new com.earthview.world.graphic.HighLevelGpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate, "CHighLevelGpuProgramPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HighLevelGpuProgramPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CHighLevelGpuProgramPtr");
		}
		return __returnValue;
	}
	native private String getLanguage_void(long pNativeObject);
	/**
	 * 获得语言
	 * @return 返回语言名称
	 */
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

	native private long createParameters_void(long pNativeObject);
	/**
	 * 定义参数
	 */
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
	/**
	 * 获得绑定委托
	 */
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

	native private boolean isSupported_void(long pNativeObject);
	/**
	 * CGpuProgram::isSupported
	 * @return 是否得到委托
	 */
	public boolean isSupported()
	{
		boolean returnValue = isSupported_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSupported_void_NoVirtual(long pNativeObject);
	protected boolean isSupported_NoVirtual()
	{
		boolean returnValue = isSupported_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isSkeletalAnimationIncluded_void(long pNativeObject);
	/// @copydoc CGpuProgram::isSkeletalAnimationIncluded
	public boolean isSkeletalAnimationIncluded()
	{
		boolean returnValue = isSkeletalAnimationIncluded_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSkeletalAnimationIncluded_void_NoVirtual(long pNativeObject);
	protected boolean isSkeletalAnimationIncluded_NoVirtual()
	{
		boolean returnValue = isSkeletalAnimationIncluded_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isMorphAnimationIncluded_void(long pNativeObject);
	public boolean isMorphAnimationIncluded()
	{
		boolean returnValue = isMorphAnimationIncluded_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isMorphAnimationIncluded_void_NoVirtual(long pNativeObject);
	protected boolean isMorphAnimationIncluded_NoVirtual()
	{
		boolean returnValue = isMorphAnimationIncluded_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isPoseAnimationIncluded_void(long pNativeObject);
	public boolean isPoseAnimationIncluded()
	{
		boolean returnValue = isPoseAnimationIncluded_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isPoseAnimationIncluded_void_NoVirtual(long pNativeObject);
	protected boolean isPoseAnimationIncluded_NoVirtual()
	{
		boolean returnValue = isPoseAnimationIncluded_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isVertexTextureFetchRequired_void(long pNativeObject);
	public boolean isVertexTextureFetchRequired()
	{
		boolean returnValue = isVertexTextureFetchRequired_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isVertexTextureFetchRequired_void_NoVirtual(long pNativeObject);
	protected boolean isVertexTextureFetchRequired_NoVirtual()
	{
		boolean returnValue = isVertexTextureFetchRequired_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getDefaultParameters_void(long pNativeObject);
	/**
	 * 获得默认参数
	 */
	public com.earthview.world.graphic.GpuProgramParametersSharedPtr getDefaultParameters()
	{
		long returnValue = getDefaultParameters_void(this.nativeObject.pointer);
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
	native private long getDefaultParameters_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.GpuProgramParametersSharedPtr getDefaultParameters_NoVirtual()
	{
		long returnValue = getDefaultParameters_void_NoVirtual(this.nativeObject.pointer);
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

	native private boolean hasDefaultParameters_void(long pNativeObject);
	/**
	 * 是否有默认参数
	 * @return 返回是否有默认参数的布尔值
	 */
	public boolean hasDefaultParameters()
	{
		boolean returnValue = hasDefaultParameters_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasDefaultParameters_void_NoVirtual(long pNativeObject);
	protected boolean hasDefaultParameters_NoVirtual()
	{
		boolean returnValue = hasDefaultParameters_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean getPassSurfaceAndLightStates_void(long pNativeObject);
	public boolean getPassSurfaceAndLightStates()
	{
		boolean returnValue = getPassSurfaceAndLightStates_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getPassSurfaceAndLightStates_void_NoVirtual(long pNativeObject);
	protected boolean getPassSurfaceAndLightStates_NoVirtual()
	{
		boolean returnValue = getPassSurfaceAndLightStates_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean getPassFogStates_void(long pNativeObject);
	public boolean getPassFogStates()
	{
		boolean returnValue = getPassFogStates_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getPassFogStates_void_NoVirtual(long pNativeObject);
	protected boolean getPassFogStates_NoVirtual()
	{
		boolean returnValue = getPassFogStates_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean getPassTransformStates_void(long pNativeObject);
	public boolean getPassTransformStates()
	{
		boolean returnValue = getPassTransformStates_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getPassTransformStates_void_NoVirtual(long pNativeObject);
	protected boolean getPassTransformStates_NoVirtual()
	{
		boolean returnValue = getPassTransformStates_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean hasCompileError_void(long pNativeObject);
	/**
	 * 是否有编译错误
	 * @return 返回是否有编译错误的布尔值
	 */
	public boolean hasCompileError()
	{
		boolean returnValue = hasCompileError_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasCompileError_void_NoVirtual(long pNativeObject);
	protected boolean hasCompileError_NoVirtual()
	{
		boolean returnValue = hasCompileError_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void resetCompileError_void(long pNativeObject);
	/**
	 * 重新设置编译错误
	 */
	public void resetCompileError()
	{
		resetCompileError_void(this.nativeObject.pointer);
	}
	native private void resetCompileError_void_NoVirtual(long pNativeObject);
	protected void resetCompileError_NoVirtual()
	{
		resetCompileError_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void load_ev_bool(long pNativeObject, boolean backgroundThread);
	/**
	 * 加载
	 * @param backgroundThread 后台线程
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

	native private void load_void(long pNativeObject);
	/**
	 * 加载
	 */
	public void load()
	{
		load_void(this.nativeObject.pointer);
	}
	native private void load_void_NoVirtual(long pNativeObject);
	protected void load_NoVirtual()
	{
		load_void_NoVirtual(this.nativeObject.pointer);
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

	native private boolean isReloadable_void(long pNativeObject);
	/**
	 * 判断是否加载
	 * @return 返回是否加载
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

	native private boolean isLoaded_void(long pNativeObject);
	/**
	 * 判断是否已经加载
	 * @return 返回是否已经加载
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

	native private boolean isLoading_void(long pNativeObject);
	/**
	 * 判断是否正在加载
	 * @return 返回是否正在加载
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

	native private void unload_void(long pNativeObject);
	/**
	 * 不加载
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

	native private long getSize_void(long pNativeObject);
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

	native private void touch_void(long pNativeObject);
	public void touch()
	{
		touch_void(this.nativeObject.pointer);
	}
	native private void touch_void_NoVirtual(long pNativeObject);
	protected void touch_NoVirtual()
	{
		touch_void_NoVirtual(this.nativeObject.pointer);
	}

	native private boolean isBackgroundLoaded_void(long pNativeObject);
	/**
	 * 是否是后台运行
	 * @return 返回是否是后台运行
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

	native private void setBackgroundLoaded_ev_bool(long pNativeObject, boolean bl);
	/**
	 * 设置后台运行
	 * @param bl 
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

	native private void addListener_CResourceListener(long pNativeObject, long lis);
	public void addListener(com.earthview.world.graphic.Resource.ResourceListener lis)
	{
		long lisParamValue = (lis == null ? 0L : lis.nativeObject.pointer);
		addListener_CResourceListener(this.nativeObject.pointer, lisParamValue);
	}
	native private void addListener_CResourceListener_NoVirtual(long pNativeObject, long lis);
	protected void addListener_NoVirtual(com.earthview.world.graphic.Resource.ResourceListener lis)
	{
		long lisParamValue = (lis == null ? 0L : lis.nativeObject.pointer);
		addListener_CResourceListener_NoVirtual(this.nativeObject.pointer, lisParamValue);
	}

	native private void removeListener_CResourceListener(long pNativeObject, long lis);
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

	public UnifiedHighLevelGpuProgram(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public UnifiedHighLevelGpuProgram(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	//// Internal load high-level portion if not loaded
	public void loadHighLevel()
	{
		super.loadHighLevel_NoVirtual();
	}
	//// Internal unload high-level portion if loaded
	public void unloadHighLevel()
	{
		super.unloadHighLevel_NoVirtual();
	}
	public void loadHighLevelImpl()
	{
		super.loadHighLevelImpl_NoVirtual();
	}
	//// Populate the passed parameters with name->index map
	public void populateParameterNames(com.earthview.world.graphic.GpuProgramParametersSharedPtr params)
	{
		super.populateParameterNames_NoVirtual(params);
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
	public void setSkeletalAnimationIncluded(boolean included)
	{
		super.setSkeletalAnimationIncluded_NoVirtual(included);
	}
	public void setMorphAnimationIncluded(boolean included)
	{
		super.setMorphAnimationIncluded_NoVirtual(included);
	}
	public void setPoseAnimationIncluded(int poseCount)
	{
		super.setPoseAnimationIncluded_NoVirtual(poseCount);
	}
	public int getNumberOfPosesIncluded()
	{
		return super.getNumberOfPosesIncluded_NoVirtual();
	}
	public void setVertexTextureFetchRequired(boolean r)
	{
		super.setVertexTextureFetchRequired_NoVirtual(r);
	}
	public void setAdjacencyInfoRequired(boolean r)
	{
		super.setAdjacencyInfoRequired_NoVirtual(r);
	}
	public boolean isAdjacencyInfoRequired()
	{
		return super.isAdjacencyInfoRequired_NoVirtual();
	}
	public void setManualNamedConstants(com.earthview.world.graphic.GpuNamedConstants namedConstants)
	{
		super.setManualNamedConstants_NoVirtual(namedConstants);
	}
	//// Get a read-only reference to the named constants registered for this program (manually or automatically)
	public com.earthview.world.graphic.GpuNamedConstants getNamedConstants()
	{
		return super.getNamedConstants_NoVirtual();
	}
	public void setManualNamedConstantsFile(String paramDefFile)
	{
		super.setManualNamedConstantsFile_NoVirtual(paramDefFile);
	}
	public String getManualNamedConstantsFile()
	{
		return super.getManualNamedConstantsFile_NoVirtual();
	}
	public com.earthview.world.graphic.GpuNamedConstants getConstantDefinitions()
	{
		return super.getConstantDefinitions_NoVirtual();
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
	 * 加载的实现
	 */
	public void loadImpl()
	{
		super.loadImpl_NoVirtual();
	}
	/**
	 * 卸载的实现
	 */
	public void unloadImpl()
	{
		super.unloadImpl_NoVirtual();
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
	 * 是否手动加载
	 */
	public boolean isManuallyLoaded()
	{
		return super.isManuallyLoaded_NoVirtual();
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
	
	public static UnifiedHighLevelGpuProgram fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		UnifiedHighLevelGpuProgram obj = null;
 		if(baseObj instanceof UnifiedHighLevelGpuProgram)
		{
			obj = (UnifiedHighLevelGpuProgram)baseObj;
		} else {
			obj = new UnifiedHighLevelGpuProgram(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CUnifiedHighLevelGpuProgram");
			obj.increaseCast();
		}

		return obj;
	}
}
