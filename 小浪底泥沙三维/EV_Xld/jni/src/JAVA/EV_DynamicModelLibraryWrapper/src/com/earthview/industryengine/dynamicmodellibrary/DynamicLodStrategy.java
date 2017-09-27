package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 动态目标LOD策略
 */
public class DynamicLodStrategy extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy", new DynamicLodStrategyClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::JCDynamicLodStrategyProxy", new DynamicLodStrategyClassFactory());
	}

	/**
	 * 动态目标LOD策略监听
	 */
	public static class DynamicLodStrategyListener extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener", new DynamicLodStrategyListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::JCDynamicLodStrategyListenerProxy", new DynamicLodStrategyListenerClassFactory());
		}

		/**
		 * 动态目标LOD策略监听构造函数
		 * @param name 名称
		 */
		public DynamicLodStrategyListener(String name) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer namePtr = new BasePointer(name);
			list.add("name", namePtr.get());
			Create("JCDynamicLodStrategyListenerProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy$DynamicLodStrategyListener".equals(this.getClass().getName()))
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
		 * 获取名称
		 * @return 名称
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

		protected  void setName_EVString_callback(String name)
		{
			String nameParamValue = name;
			setName(nameParamValue);
		}

		native private void setName_EVString(long pNativeObject, String name);
		/**
		 * 设置名称
		 * @param name 名称
		 */
		public void setName(String name)
		{
			String nameParamValue = name;
			setName_EVString(this.nativeObject.pointer, nameParamValue);
		}
		native private void setName_EVString_NoVirtual(long pNativeObject, String name);
		protected void setName_NoVirtual(String name)
		{
			String nameParamValue = name;
			setName_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		}

		protected  void beforeUpdateLodState_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_callback(long lodStrategy, long dynamicModelObject, long camera)
		{
			com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy lodStrategyParamValue = (lodStrategy == 0L ? null : new com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy(CreatedWhenConstruct.CWC_NotToCreate));
			if(lodStrategyParamValue != null)
			{
			lodStrategyParamValue.setDelegate(true);
			lodStrategyParamValue.setInstancePointer(new InstancePointer(lodStrategy));
			IClassFactory lodStrategyParamValueClassFactory = GlobalClassFactoryMap.get(lodStrategyParamValue.getCppInstanceTypeName());
			if (lodStrategyParamValueClassFactory != null)
			{
				lodStrategyParamValue.setDelegate(true);
				lodStrategyParamValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy)lodStrategyParamValueClassFactory.create();
				lodStrategyParamValue.setDelegate(true);
				lodStrategyParamValue.setInstancePointer(new InstancePointer(lodStrategy));
			}
			}
			com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject dynamicModelObjectParamValue = (dynamicModelObject == 0L ? null : new com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate));
			if(dynamicModelObjectParamValue != null)
			{
			dynamicModelObjectParamValue.setDelegate(true);
			dynamicModelObjectParamValue.setInstancePointer(new InstancePointer(dynamicModelObject));
			IClassFactory dynamicModelObjectParamValueClassFactory = GlobalClassFactoryMap.get(dynamicModelObjectParamValue.getCppInstanceTypeName());
			if (dynamicModelObjectParamValueClassFactory != null)
			{
				dynamicModelObjectParamValue.setDelegate(true);
				dynamicModelObjectParamValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject)dynamicModelObjectParamValueClassFactory.create();
				dynamicModelObjectParamValue.setDelegate(true);
				dynamicModelObjectParamValue.setInstancePointer(new InstancePointer(dynamicModelObject));
			}
			}
			com.earthview.world.spatial3d.GlobeCamera cameraParamValue = (camera == 0L ? null : new com.earthview.world.spatial3d.GlobeCamera(CreatedWhenConstruct.CWC_NotToCreate));
			if(cameraParamValue != null)
			{
			cameraParamValue.setDelegate(true);
			cameraParamValue.setInstancePointer(new InstancePointer(camera));
			IClassFactory cameraParamValueClassFactory = GlobalClassFactoryMap.get(cameraParamValue.getCppInstanceTypeName());
			if (cameraParamValueClassFactory != null)
			{
				cameraParamValue.setDelegate(true);
				cameraParamValue = (com.earthview.world.spatial3d.GlobeCamera)cameraParamValueClassFactory.create();
				cameraParamValue.setDelegate(true);
				cameraParamValue.setInstancePointer(new InstancePointer(camera));
			}
			}
			beforeUpdateLodState(lodStrategyParamValue, dynamicModelObjectParamValue, cameraParamValue);
		}

		native private void beforeUpdateLodState_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera(long pNativeObject, long lodStrategy, long dynamicModelObject, long camera);
		/**
		 * 刷新LOD状态之前触发
		 * @param lodStrategy LOD策略
		 * @param dynamicModelObject 动态目标对象
		 * @param camera 相机对象
		 */
		public void beforeUpdateLodState(com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy lodStrategy, com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject dynamicModelObject, com.earthview.world.spatial3d.GlobeCamera camera)
		{
			long lodStrategyParamValue = (lodStrategy == null ? 0L : lodStrategy.nativeObject.pointer);
			long dynamicModelObjectParamValue = (dynamicModelObject == null ? 0L : dynamicModelObject.nativeObject.pointer);
			long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
			beforeUpdateLodState_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera(this.nativeObject.pointer, lodStrategyParamValue, dynamicModelObjectParamValue, cameraParamValue);
		}
		native private void beforeUpdateLodState_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_NoVirtual(long pNativeObject, long lodStrategy, long dynamicModelObject, long camera);
		protected void beforeUpdateLodState_NoVirtual(com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy lodStrategy, com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject dynamicModelObject, com.earthview.world.spatial3d.GlobeCamera camera)
		{
			long lodStrategyParamValue = (lodStrategy == null ? 0L : lodStrategy.nativeObject.pointer);
			long dynamicModelObjectParamValue = (dynamicModelObject == null ? 0L : dynamicModelObject.nativeObject.pointer);
			long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
			beforeUpdateLodState_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_NoVirtual(this.nativeObject.pointer, lodStrategyParamValue, dynamicModelObjectParamValue, cameraParamValue);
		}

		public DynamicLodStrategyListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public DynamicLodStrategyListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_getName_void(long pNativeObject, String method);
		native protected void register_setName_EVString(long pNativeObject, String method);
		native protected void register_beforeUpdateLodState_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
				this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
				this.register_beforeUpdateLodState_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera(this.nativeObject.pointer, "beforeUpdateLodState_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_callback");
			}
		}
		
		public static DynamicLodStrategyListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			DynamicLodStrategyListener obj = null;
 			if(baseObj instanceof DynamicLodStrategyListener)
			{
				obj = (DynamicLodStrategyListener)baseObj;
			} else {
				obj = new DynamicLodStrategyListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CDynamicLodStrategyListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class DynamicLodStrategyListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			DynamicLodStrategyListener emptyInstance = new DynamicLodStrategyListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 动态目标LOD策略子项目，可以动态添加该项目
	 */
	public static class DynamicLodStrategyItem extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem", new DynamicLodStrategyItemClassFactory());
			GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::JCDynamicLodStrategyItemProxy", new DynamicLodStrategyItemClassFactory());
		}

		/**
		 * 动态目标LOD策略子项目构造函数
		 * @param name 名称
		 */
		public DynamicLodStrategyItem(String name) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer namePtr = new BasePointer(name);
			list.add("name", namePtr.get());
			Create("JCDynamicLodStrategyItemProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy$DynamicLodStrategyItem".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  boolean isPassed_Real_callback(double lodvalue)
		{
			double lodvalueParamValue = lodvalue;
			boolean returnValue = isPassed(lodvalueParamValue);
			boolean __returnValue = returnValue;
			return __returnValue;
		}

		native private boolean isPassed_Real(long pNativeObject, double lodvalue);
		/**
		 * 是否通过验证
		 * @param lodvalue 要判断LOD的值
		 */
		public boolean isPassed(double lodvalue)
		{
			double lodvalueParamValue = lodvalue;
			boolean returnValue = isPassed_Real(this.nativeObject.pointer, lodvalueParamValue);
			return returnValue;
		}
		native private boolean isPassed_Real_NoVirtual(long pNativeObject, double lodvalue);
		protected boolean isPassed_NoVirtual(double lodvalue)
		{
			double lodvalueParamValue = lodvalue;
			boolean returnValue = isPassed_Real_NoVirtual(this.nativeObject.pointer, lodvalueParamValue);
			return returnValue;
		}

		protected  void setMaxVisibleValue_Real_callback(double maxVisibleValue)
		{
			double maxVisibleValueParamValue = maxVisibleValue;
			setMaxVisibleValue(maxVisibleValueParamValue);
		}

		native private void setMaxVisibleValue_Real(long pNativeObject, double maxVisibleValue);
		/**
		 * 设置最大可见值
		 * @param maxVisibleValue 最大可见值
		 */
		public void setMaxVisibleValue(double maxVisibleValue)
		{
			double maxVisibleValueParamValue = maxVisibleValue;
			setMaxVisibleValue_Real(this.nativeObject.pointer, maxVisibleValueParamValue);
		}
		native private void setMaxVisibleValue_Real_NoVirtual(long pNativeObject, double maxVisibleValue);
		protected void setMaxVisibleValue_NoVirtual(double maxVisibleValue)
		{
			double maxVisibleValueParamValue = maxVisibleValue;
			setMaxVisibleValue_Real_NoVirtual(this.nativeObject.pointer, maxVisibleValueParamValue);
		}

		protected  void setMinVisibleValue_Real_callback(double minVisibleValue)
		{
			double minVisibleValueParamValue = minVisibleValue;
			setMinVisibleValue(minVisibleValueParamValue);
		}

		native private void setMinVisibleValue_Real(long pNativeObject, double minVisibleValue);
		/**
		 * 设置最小可见值
		 * @param minVisibleValue 最小可见值
		 */
		public void setMinVisibleValue(double minVisibleValue)
		{
			double minVisibleValueParamValue = minVisibleValue;
			setMinVisibleValue_Real(this.nativeObject.pointer, minVisibleValueParamValue);
		}
		native private void setMinVisibleValue_Real_NoVirtual(long pNativeObject, double minVisibleValue);
		protected void setMinVisibleValue_NoVirtual(double minVisibleValue)
		{
			double minVisibleValueParamValue = minVisibleValue;
			setMinVisibleValue_Real_NoVirtual(this.nativeObject.pointer, minVisibleValueParamValue);
		}

		protected  double getMaxVisibleValue_void_callback()
		{
			double returnValue = getMaxVisibleValue();
			double __returnValue = returnValue;
			return __returnValue;
		}

		native private double getMaxVisibleValue_void(long pNativeObject);
		/**
		 * 获取最大可见值
		 * @return 最大可见值
		 */
		public double getMaxVisibleValue()
		{
			double returnValue = getMaxVisibleValue_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private double getMaxVisibleValue_void_NoVirtual(long pNativeObject);
		protected double getMaxVisibleValue_NoVirtual()
		{
			double returnValue = getMaxVisibleValue_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		protected  double getMinVisibleValue_void_callback()
		{
			double returnValue = getMinVisibleValue();
			double __returnValue = returnValue;
			return __returnValue;
		}

		native private double getMinVisibleValue_void(long pNativeObject);
		/**
		 * 获取最小可见值
		 * @return 最小可见值
		 */
		public double getMinVisibleValue()
		{
			double returnValue = getMinVisibleValue_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private double getMinVisibleValue_void_NoVirtual(long pNativeObject);
		protected double getMinVisibleValue_NoVirtual()
		{
			double returnValue = getMinVisibleValue_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		native private String getName_void(long pNativeObject);
		/**
		 * 获取名称
		 * @return 名称
		 */
		public String getName()
		{
			String returnValue = getName_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void setName_EVString(long pNativeObject, String name);
		/**
		 * 设置名称
		 * @param name 名称
		 */
		public void setName(String name)
		{
			String nameParamValue = name;
			setName_EVString(this.nativeObject.pointer, nameParamValue);
		}
		public DynamicLodStrategyItem(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public DynamicLodStrategyItem(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_isPassed_Real(long pNativeObject, String method);
		native protected void register_setMaxVisibleValue_Real(long pNativeObject, String method);
		native protected void register_setMinVisibleValue_Real(long pNativeObject, String method);
		native protected void register_getMaxVisibleValue_void(long pNativeObject, String method);
		native protected void register_getMinVisibleValue_void(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_isPassed_Real(this.nativeObject.pointer, "isPassed_Real_callback");
				this.register_setMaxVisibleValue_Real(this.nativeObject.pointer, "setMaxVisibleValue_Real_callback");
				this.register_setMinVisibleValue_Real(this.nativeObject.pointer, "setMinVisibleValue_Real_callback");
				this.register_getMaxVisibleValue_void(this.nativeObject.pointer, "getMaxVisibleValue_void_callback");
				this.register_getMinVisibleValue_void(this.nativeObject.pointer, "getMinVisibleValue_void_callback");
			}
		}
		
		public static DynamicLodStrategyItem fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			DynamicLodStrategyItem obj = null;
 			if(baseObj instanceof DynamicLodStrategyItem)
			{
				obj = (DynamicLodStrategyItem)baseObj;
			} else {
				obj = new DynamicLodStrategyItem(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CDynamicLodStrategyItem");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class DynamicLodStrategyItemClassFactory implements IClassFactory {
		public BaseObject create()
		{
			DynamicLodStrategyItem emptyInstance = new DynamicLodStrategyItem(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 动态目标LOD策略子项目集合
	 */
	public static class DynamicLodStrategyItemMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap", new DynamicLodStrategyItemMapClassFactory());
		}

		/**
		 * 动态目标LOD策略子项目集合构造函数
		 */
		public DynamicLodStrategyItemMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CDynamicLodStrategyItemMap", null);
		}

		native private boolean push_EVString_CDynamicLodStrategyItem(long pNativeObject, String key, long ref_val);
		/**
		 * 压入指定键值对象
		 * @param key 关键字
		 * @param ref_val 值对象,该参数对象的生命周期要保持大于本对象的生命周期
		 * @return 是否成功
		 */
		public boolean push(String key, NativeObjectPointer<com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy.DynamicLodStrategyItem> ref_val)
		{
			String keyParamValue = key;
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_EVString_CDynamicLodStrategyItem(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
			return returnValue;
		}
		native private boolean exist_EVString(long pNativeObject, String key);
		/**
		 * 获取是否存在指定键值对象
		 * @param key 关键字
		 * @return 是否存在指定键值对象
		 */
		public boolean exist(String key)
		{
			String keyParamValue = key;
			boolean returnValue = exist_EVString(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_EVString(long pNativeObject, String key);
		/**
		 * 获取指定键的值对象
		 * @param key 关键字
		 * @return 指定键值对象
		 */
		public NativeObjectPointer<com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy.DynamicLodStrategyItem> OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy.DynamicLodStrategyItem> __returnValue = new NativeObjectPointer<com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy.DynamicLodStrategyItem>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		/**
		 * 获取指定键的值对象
		 * @param key 关键字
		 * @return 指定键值对象
		 */
		public NativeObjectPointer<com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy.DynamicLodStrategyItem> get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy.DynamicLodStrategyItem> __returnValue = new NativeObjectPointer<com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy.DynamicLodStrategyItem>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_EVString(long pNativeObject, String key);
		/**
		 * 移除指定键的值对象
		 * @param key 关键字
		 */
		public void erase(String key)
		{
			String keyParamValue = key;
			erase_EVString(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回对象个数
		 * @return 对象个数
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清除所有对象
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 获取集合是否为空
		 * @return 是否为空
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public DynamicLodStrategyItemMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public DynamicLodStrategyItemMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static DynamicLodStrategyItemMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			DynamicLodStrategyItemMap obj = null;
 			if(baseObj instanceof DynamicLodStrategyItemMap)
			{
				obj = (DynamicLodStrategyItemMap)baseObj;
			} else {
				obj = new DynamicLodStrategyItemMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CDynamicLodStrategyItemMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class DynamicLodStrategyItemMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			DynamicLodStrategyItemMap emptyInstance = new DynamicLodStrategyItemMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 动态目标LOD策略构造函数
	 */
	public DynamicLodStrategy() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDynamicLodStrategyProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  boolean isPassed_CDynamicModelObject_EVString_CGlobeCamera_callback(long modelObject, String lodStrategyItemName, long camera)
	{
		com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject modelObjectParamValue = (modelObject == 0L ? null : new com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(modelObjectParamValue != null)
		{
		modelObjectParamValue.setDelegate(true);
		modelObjectParamValue.setInstancePointer(new InstancePointer(modelObject));
		IClassFactory modelObjectParamValueClassFactory = GlobalClassFactoryMap.get(modelObjectParamValue.getCppInstanceTypeName());
		if (modelObjectParamValueClassFactory != null)
		{
			modelObjectParamValue.setDelegate(true);
			modelObjectParamValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject)modelObjectParamValueClassFactory.create();
			modelObjectParamValue.setDelegate(true);
			modelObjectParamValue.setInstancePointer(new InstancePointer(modelObject));
		}
		}
		String lodStrategyItemNameParamValue = lodStrategyItemName;
		com.earthview.world.spatial3d.GlobeCamera cameraParamValue = (camera == 0L ? null : new com.earthview.world.spatial3d.GlobeCamera(CreatedWhenConstruct.CWC_NotToCreate));
		if(cameraParamValue != null)
		{
		cameraParamValue.setDelegate(true);
		cameraParamValue.setInstancePointer(new InstancePointer(camera));
		IClassFactory cameraParamValueClassFactory = GlobalClassFactoryMap.get(cameraParamValue.getCppInstanceTypeName());
		if (cameraParamValueClassFactory != null)
		{
			cameraParamValue.setDelegate(true);
			cameraParamValue = (com.earthview.world.spatial3d.GlobeCamera)cameraParamValueClassFactory.create();
			cameraParamValue.setDelegate(true);
			cameraParamValue.setInstancePointer(new InstancePointer(camera));
		}
		}
		boolean returnValue = isPassed(modelObjectParamValue, lodStrategyItemNameParamValue, cameraParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isPassed_CDynamicModelObject_EVString_CGlobeCamera(long pNativeObject, long modelObject, String lodStrategyItemName, long camera);
	/**
	 * 判断动态目标是否通过LOD验证
	 * @param modelObject 动态目标
	 * @param lodStrategyItemName 子LOD项目名称
	 * @param camera 相机
	 * @return 是否通过验证
	 */
	public boolean isPassed(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject modelObject, String lodStrategyItemName, com.earthview.world.spatial3d.GlobeCamera camera)
	{
		long modelObjectParamValue = (modelObject == null ? 0L : modelObject.nativeObject.pointer);
		String lodStrategyItemNameParamValue = lodStrategyItemName;
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		boolean returnValue = isPassed_CDynamicModelObject_EVString_CGlobeCamera(this.nativeObject.pointer, modelObjectParamValue, lodStrategyItemNameParamValue, cameraParamValue);
		return returnValue;
	}
	native private boolean isPassed_CDynamicModelObject_EVString_CGlobeCamera_NoVirtual(long pNativeObject, long modelObject, String lodStrategyItemName, long camera);
	protected boolean isPassed_NoVirtual(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject modelObject, String lodStrategyItemName, com.earthview.world.spatial3d.GlobeCamera camera)
	{
		long modelObjectParamValue = (modelObject == null ? 0L : modelObject.nativeObject.pointer);
		String lodStrategyItemNameParamValue = lodStrategyItemName;
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		boolean returnValue = isPassed_CDynamicModelObject_EVString_CGlobeCamera_NoVirtual(this.nativeObject.pointer, modelObjectParamValue, lodStrategyItemNameParamValue, cameraParamValue);
		return returnValue;
	}

	protected  void setMaxVisibleValue_EVString_Real_callback(String name, double maxVisibleValue)
	{
		String nameParamValue = name;
		double maxVisibleValueParamValue = maxVisibleValue;
		setMaxVisibleValue(nameParamValue, maxVisibleValueParamValue);
	}

	native private void setMaxVisibleValue_EVString_Real(long pNativeObject, String name, double maxVisibleValue);
	/**
	 * 设置最大可见值
	 * @param name lod子项名称
	 * @param maxVisibleValue 最大可见值
	 */
	public void setMaxVisibleValue(String name, double maxVisibleValue)
	{
		String nameParamValue = name;
		double maxVisibleValueParamValue = maxVisibleValue;
		setMaxVisibleValue_EVString_Real(this.nativeObject.pointer, nameParamValue, maxVisibleValueParamValue);
	}
	native private void setMaxVisibleValue_EVString_Real_NoVirtual(long pNativeObject, String name, double maxVisibleValue);
	protected void setMaxVisibleValue_NoVirtual(String name, double maxVisibleValue)
	{
		String nameParamValue = name;
		double maxVisibleValueParamValue = maxVisibleValue;
		setMaxVisibleValue_EVString_Real_NoVirtual(this.nativeObject.pointer, nameParamValue, maxVisibleValueParamValue);
	}

	protected  void setMinVisibleValue_EVString_Real_callback(String name, double minVisibleValue)
	{
		String nameParamValue = name;
		double minVisibleValueParamValue = minVisibleValue;
		setMinVisibleValue(nameParamValue, minVisibleValueParamValue);
	}

	native private void setMinVisibleValue_EVString_Real(long pNativeObject, String name, double minVisibleValue);
	/**
	 * 设置最小可见值
	 * @param name lod子项名称
	 * @param minVisibleValue 最小可见值
	 */
	public void setMinVisibleValue(String name, double minVisibleValue)
	{
		String nameParamValue = name;
		double minVisibleValueParamValue = minVisibleValue;
		setMinVisibleValue_EVString_Real(this.nativeObject.pointer, nameParamValue, minVisibleValueParamValue);
	}
	native private void setMinVisibleValue_EVString_Real_NoVirtual(long pNativeObject, String name, double minVisibleValue);
	protected void setMinVisibleValue_NoVirtual(String name, double minVisibleValue)
	{
		String nameParamValue = name;
		double minVisibleValueParamValue = minVisibleValue;
		setMinVisibleValue_EVString_Real_NoVirtual(this.nativeObject.pointer, nameParamValue, minVisibleValueParamValue);
	}

	protected  double getMaxVisibleValue_EVString_callback(String name)
	{
		String nameParamValue = name;
		double returnValue = getMaxVisibleValue(nameParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getMaxVisibleValue_EVString(long pNativeObject, String name);
	/**
	 * 获取最大可见值
	 * @param name lod子项名称
	 * @return 最大可见值
	 */
	public double getMaxVisibleValue(String name)
	{
		String nameParamValue = name;
		double returnValue = getMaxVisibleValue_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private double getMaxVisibleValue_EVString_NoVirtual(long pNativeObject, String name);
	protected double getMaxVisibleValue_NoVirtual(String name)
	{
		String nameParamValue = name;
		double returnValue = getMaxVisibleValue_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}

	protected  double getMinVisibleValue_EVString_callback(String name)
	{
		String nameParamValue = name;
		double returnValue = getMinVisibleValue(nameParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getMinVisibleValue_EVString(long pNativeObject, String name);
	/**
	 * 获取最小可见值
	 * @param name lod子项名称
	 * @return 最小可见值
	 */
	public double getMinVisibleValue(String name)
	{
		String nameParamValue = name;
		double returnValue = getMinVisibleValue_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private double getMinVisibleValue_EVString_NoVirtual(long pNativeObject, String name);
	protected double getMinVisibleValue_NoVirtual(String name)
	{
		String nameParamValue = name;
		double returnValue = getMinVisibleValue_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}

	protected  void registerLodStrategyItem_CDynamicLodStrategyItem_callback(long ref_lodStrategyItem)
	{
		com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy.DynamicLodStrategyItem ref_lodStrategyItemParamValue = (ref_lodStrategyItem == 0L ? null : new com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy.DynamicLodStrategyItem(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_lodStrategyItemParamValue != null)
		{
		ref_lodStrategyItemParamValue.setDelegate(true);
		ref_lodStrategyItemParamValue.setInstancePointer(new InstancePointer(ref_lodStrategyItem));
		IClassFactory ref_lodStrategyItemParamValueClassFactory = GlobalClassFactoryMap.get(ref_lodStrategyItemParamValue.getCppInstanceTypeName());
		if (ref_lodStrategyItemParamValueClassFactory != null)
		{
			ref_lodStrategyItemParamValue.setDelegate(true);
			ref_lodStrategyItemParamValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy.DynamicLodStrategyItem)ref_lodStrategyItemParamValueClassFactory.create();
			ref_lodStrategyItemParamValue.setDelegate(true);
			ref_lodStrategyItemParamValue.setInstancePointer(new InstancePointer(ref_lodStrategyItem));
		}
		}
		registerLodStrategyItem(ref_lodStrategyItemParamValue);
	}

	native private void registerLodStrategyItem_CDynamicLodStrategyItem(long pNativeObject, long ref_lodStrategyItem);
	/**
	 * 注册子LOD项目
	 * @param ref_lodStrategyItem 子LOD项目,该参数对象的生命周期要保持大于本对象的生命周期
	 */
	public void registerLodStrategyItem(com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy.DynamicLodStrategyItem ref_lodStrategyItem)
	{
		long ref_lodStrategyItemParamValue = (ref_lodStrategyItem == null ? 0L : ref_lodStrategyItem.nativeObject.pointer);
		registerLodStrategyItem_CDynamicLodStrategyItem(this.nativeObject.pointer, ref_lodStrategyItemParamValue);
	}
	native private void registerLodStrategyItem_CDynamicLodStrategyItem_NoVirtual(long pNativeObject, long ref_lodStrategyItem);
	protected void registerLodStrategyItem_NoVirtual(com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy.DynamicLodStrategyItem ref_lodStrategyItem)
	{
		long ref_lodStrategyItemParamValue = (ref_lodStrategyItem == null ? 0L : ref_lodStrategyItem.nativeObject.pointer);
		registerLodStrategyItem_CDynamicLodStrategyItem_NoVirtual(this.nativeObject.pointer, ref_lodStrategyItemParamValue);
	}

	protected  void unregisterLodStrategyItem_EVString_callback(String name)
	{
		String nameParamValue = name;
		unregisterLodStrategyItem(nameParamValue);
	}

	native private void unregisterLodStrategyItem_EVString(long pNativeObject, String name);
	/**
	 * 反注册LOD项目
	 * @param name lod子项名称
	 */
	public void unregisterLodStrategyItem(String name)
	{
		String nameParamValue = name;
		unregisterLodStrategyItem_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void unregisterLodStrategyItem_EVString_NoVirtual(long pNativeObject, String name);
	protected void unregisterLodStrategyItem_NoVirtual(String name)
	{
		String nameParamValue = name;
		unregisterLodStrategyItem_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	native private long getLodStrategyItemMap_void(long pNativeObject);
	/**
	 * 获取LOD子项目列表
	 * @return LOD子项目列表
	 */
	public com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy.DynamicLodStrategyItemMap getLodStrategyItemMap()
	{
		long returnValue = getLodStrategyItemMap_void(this.nativeObject.pointer);
		com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy.DynamicLodStrategyItemMap __returnValue = new com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy.DynamicLodStrategyItemMap(CreatedWhenConstruct.CWC_NotToCreate, "CDynamicLodStrategyItemMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy.DynamicLodStrategyItemMap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDynamicLodStrategyItemMap");
		}
		return __returnValue;
	}
	protected  void addLodStrategyListener_CDynamicLodStrategyListener_callback(long ref_lodStrategyListener)
	{
		com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy.DynamicLodStrategyListener ref_lodStrategyListenerParamValue = (ref_lodStrategyListener == 0L ? null : new com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy.DynamicLodStrategyListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_lodStrategyListenerParamValue != null)
		{
		ref_lodStrategyListenerParamValue.setDelegate(true);
		ref_lodStrategyListenerParamValue.setInstancePointer(new InstancePointer(ref_lodStrategyListener));
		IClassFactory ref_lodStrategyListenerParamValueClassFactory = GlobalClassFactoryMap.get(ref_lodStrategyListenerParamValue.getCppInstanceTypeName());
		if (ref_lodStrategyListenerParamValueClassFactory != null)
		{
			ref_lodStrategyListenerParamValue.setDelegate(true);
			ref_lodStrategyListenerParamValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy.DynamicLodStrategyListener)ref_lodStrategyListenerParamValueClassFactory.create();
			ref_lodStrategyListenerParamValue.setDelegate(true);
			ref_lodStrategyListenerParamValue.setInstancePointer(new InstancePointer(ref_lodStrategyListener));
		}
		}
		addLodStrategyListener(ref_lodStrategyListenerParamValue);
	}

	native private void addLodStrategyListener_CDynamicLodStrategyListener(long pNativeObject, long ref_lodStrategyListener);
	/**
	 * 添加LOD策略监听
	 * @param ref_lodStrategyListener LOD策略监听,该参数对象的生命周期要保持大于本对象的生命周期
	 */
	public void addLodStrategyListener(com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy.DynamicLodStrategyListener ref_lodStrategyListener)
	{
		long ref_lodStrategyListenerParamValue = (ref_lodStrategyListener == null ? 0L : ref_lodStrategyListener.nativeObject.pointer);
		addLodStrategyListener_CDynamicLodStrategyListener(this.nativeObject.pointer, ref_lodStrategyListenerParamValue);
	}
	native private void addLodStrategyListener_CDynamicLodStrategyListener_NoVirtual(long pNativeObject, long ref_lodStrategyListener);
	protected void addLodStrategyListener_NoVirtual(com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy.DynamicLodStrategyListener ref_lodStrategyListener)
	{
		long ref_lodStrategyListenerParamValue = (ref_lodStrategyListener == null ? 0L : ref_lodStrategyListener.nativeObject.pointer);
		addLodStrategyListener_CDynamicLodStrategyListener_NoVirtual(this.nativeObject.pointer, ref_lodStrategyListenerParamValue);
	}

	protected  void removeLodStrategyListener_EVString_callback(String name)
	{
		String nameParamValue = name;
		removeLodStrategyListener(nameParamValue);
	}

	native private void removeLodStrategyListener_EVString(long pNativeObject, String name);
	/**
	 * 删除LOD策略监听
	 * @param name lod监听名称
	 */
	public void removeLodStrategyListener(String name)
	{
		String nameParamValue = name;
		removeLodStrategyListener_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void removeLodStrategyListener_EVString_NoVirtual(long pNativeObject, String name);
	protected void removeLodStrategyListener_NoVirtual(String name)
	{
		String nameParamValue = name;
		removeLodStrategyListener_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	protected  double getLodValue_CDynamicModelObject_CGlobeCamera_callback(long modelObject, long camera)
	{
		com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject modelObjectParamValue = (modelObject == 0L ? null : new com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(modelObjectParamValue != null)
		{
		modelObjectParamValue.setDelegate(true);
		modelObjectParamValue.setInstancePointer(new InstancePointer(modelObject));
		IClassFactory modelObjectParamValueClassFactory = GlobalClassFactoryMap.get(modelObjectParamValue.getCppInstanceTypeName());
		if (modelObjectParamValueClassFactory != null)
		{
			modelObjectParamValue.setDelegate(true);
			modelObjectParamValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject)modelObjectParamValueClassFactory.create();
			modelObjectParamValue.setDelegate(true);
			modelObjectParamValue.setInstancePointer(new InstancePointer(modelObject));
		}
		}
		com.earthview.world.spatial3d.GlobeCamera cameraParamValue = (camera == 0L ? null : new com.earthview.world.spatial3d.GlobeCamera(CreatedWhenConstruct.CWC_NotToCreate));
		if(cameraParamValue != null)
		{
		cameraParamValue.setDelegate(true);
		cameraParamValue.setInstancePointer(new InstancePointer(camera));
		IClassFactory cameraParamValueClassFactory = GlobalClassFactoryMap.get(cameraParamValue.getCppInstanceTypeName());
		if (cameraParamValueClassFactory != null)
		{
			cameraParamValue.setDelegate(true);
			cameraParamValue = (com.earthview.world.spatial3d.GlobeCamera)cameraParamValueClassFactory.create();
			cameraParamValue.setDelegate(true);
			cameraParamValue.setInstancePointer(new InstancePointer(camera));
		}
		}
		double returnValue = getLodValue(modelObjectParamValue, cameraParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getLodValue_CDynamicModelObject_CGlobeCamera(long pNativeObject, long modelObject, long camera);
	/**
	 * 计算动态目标对象当前的LOD值
	 * @param modelObject 动态目标对象
	 * @param camera 相机对象
	 * @return 动态目标对象当前的LOD值
	 */
	public double getLodValue(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject modelObject, com.earthview.world.spatial3d.GlobeCamera camera)
	{
		long modelObjectParamValue = (modelObject == null ? 0L : modelObject.nativeObject.pointer);
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		double returnValue = getLodValue_CDynamicModelObject_CGlobeCamera(this.nativeObject.pointer, modelObjectParamValue, cameraParamValue);
		return returnValue;
	}
	native private double getLodValue_CDynamicModelObject_CGlobeCamera_NoVirtual(long pNativeObject, long modelObject, long camera);
	protected double getLodValue_NoVirtual(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject modelObject, com.earthview.world.spatial3d.GlobeCamera camera)
	{
		long modelObjectParamValue = (modelObject == null ? 0L : modelObject.nativeObject.pointer);
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		double returnValue = getLodValue_CDynamicModelObject_CGlobeCamera_NoVirtual(this.nativeObject.pointer, modelObjectParamValue, cameraParamValue);
		return returnValue;
	}

	protected  void fireLodStrategyListener_CDynamicModelObject_CGlobeCamera_callback(long modelObject, long camera)
	{
		com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject modelObjectParamValue = (modelObject == 0L ? null : new com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(modelObjectParamValue != null)
		{
		modelObjectParamValue.setDelegate(true);
		modelObjectParamValue.setInstancePointer(new InstancePointer(modelObject));
		IClassFactory modelObjectParamValueClassFactory = GlobalClassFactoryMap.get(modelObjectParamValue.getCppInstanceTypeName());
		if (modelObjectParamValueClassFactory != null)
		{
			modelObjectParamValue.setDelegate(true);
			modelObjectParamValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject)modelObjectParamValueClassFactory.create();
			modelObjectParamValue.setDelegate(true);
			modelObjectParamValue.setInstancePointer(new InstancePointer(modelObject));
		}
		}
		com.earthview.world.spatial3d.GlobeCamera cameraParamValue = (camera == 0L ? null : new com.earthview.world.spatial3d.GlobeCamera(CreatedWhenConstruct.CWC_NotToCreate));
		if(cameraParamValue != null)
		{
		cameraParamValue.setDelegate(true);
		cameraParamValue.setInstancePointer(new InstancePointer(camera));
		IClassFactory cameraParamValueClassFactory = GlobalClassFactoryMap.get(cameraParamValue.getCppInstanceTypeName());
		if (cameraParamValueClassFactory != null)
		{
			cameraParamValue.setDelegate(true);
			cameraParamValue = (com.earthview.world.spatial3d.GlobeCamera)cameraParamValueClassFactory.create();
			cameraParamValue.setDelegate(true);
			cameraParamValue.setInstancePointer(new InstancePointer(camera));
		}
		}
		fireLodStrategyListener(modelObjectParamValue, cameraParamValue);
	}

	native private void fireLodStrategyListener_CDynamicModelObject_CGlobeCamera(long pNativeObject, long modelObject, long camera);
	/**
	 * 触发lod策略响应
	 * @param modelObject 动态目标对象
	 * @param camera 相机对象
	 */
	public void fireLodStrategyListener(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject modelObject, com.earthview.world.spatial3d.GlobeCamera camera)
	{
		long modelObjectParamValue = (modelObject == null ? 0L : modelObject.nativeObject.pointer);
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		fireLodStrategyListener_CDynamicModelObject_CGlobeCamera(this.nativeObject.pointer, modelObjectParamValue, cameraParamValue);
	}
	native private void fireLodStrategyListener_CDynamicModelObject_CGlobeCamera_NoVirtual(long pNativeObject, long modelObject, long camera);
	protected void fireLodStrategyListener_NoVirtual(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject modelObject, com.earthview.world.spatial3d.GlobeCamera camera)
	{
		long modelObjectParamValue = (modelObject == null ? 0L : modelObject.nativeObject.pointer);
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		fireLodStrategyListener_CDynamicModelObject_CGlobeCamera_NoVirtual(this.nativeObject.pointer, modelObjectParamValue, cameraParamValue);
	}

	public DynamicLodStrategy(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DynamicLodStrategy(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_isPassed_CDynamicModelObject_EVString_CGlobeCamera(long pNativeObject, String method);
	native protected void register_setMaxVisibleValue_EVString_Real(long pNativeObject, String method);
	native protected void register_setMinVisibleValue_EVString_Real(long pNativeObject, String method);
	native protected void register_getMaxVisibleValue_EVString(long pNativeObject, String method);
	native protected void register_getMinVisibleValue_EVString(long pNativeObject, String method);
	native protected void register_registerLodStrategyItem_CDynamicLodStrategyItem(long pNativeObject, String method);
	native protected void register_unregisterLodStrategyItem_EVString(long pNativeObject, String method);
	native protected void register_addLodStrategyListener_CDynamicLodStrategyListener(long pNativeObject, String method);
	native protected void register_removeLodStrategyListener_EVString(long pNativeObject, String method);
	native protected void register_getLodValue_CDynamicModelObject_CGlobeCamera(long pNativeObject, String method);
	native protected void register_fireLodStrategyListener_CDynamicModelObject_CGlobeCamera(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_isPassed_CDynamicModelObject_EVString_CGlobeCamera(this.nativeObject.pointer, "isPassed_CDynamicModelObject_EVString_CGlobeCamera_callback");
			this.register_setMaxVisibleValue_EVString_Real(this.nativeObject.pointer, "setMaxVisibleValue_EVString_Real_callback");
			this.register_setMinVisibleValue_EVString_Real(this.nativeObject.pointer, "setMinVisibleValue_EVString_Real_callback");
			this.register_getMaxVisibleValue_EVString(this.nativeObject.pointer, "getMaxVisibleValue_EVString_callback");
			this.register_getMinVisibleValue_EVString(this.nativeObject.pointer, "getMinVisibleValue_EVString_callback");
			this.register_registerLodStrategyItem_CDynamicLodStrategyItem(this.nativeObject.pointer, "registerLodStrategyItem_CDynamicLodStrategyItem_callback");
			this.register_unregisterLodStrategyItem_EVString(this.nativeObject.pointer, "unregisterLodStrategyItem_EVString_callback");
			this.register_addLodStrategyListener_CDynamicLodStrategyListener(this.nativeObject.pointer, "addLodStrategyListener_CDynamicLodStrategyListener_callback");
			this.register_removeLodStrategyListener_EVString(this.nativeObject.pointer, "removeLodStrategyListener_EVString_callback");
			this.register_getLodValue_CDynamicModelObject_CGlobeCamera(this.nativeObject.pointer, "getLodValue_CDynamicModelObject_CGlobeCamera_callback");
			this.register_fireLodStrategyListener_CDynamicModelObject_CGlobeCamera(this.nativeObject.pointer, "fireLodStrategyListener_CDynamicModelObject_CGlobeCamera_callback");
		}
	}
	
	public static DynamicLodStrategy fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DynamicLodStrategy obj = null;
 		if(baseObj instanceof DynamicLodStrategy)
		{
			obj = (DynamicLodStrategy)baseObj;
		} else {
			obj = new DynamicLodStrategy(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDynamicLodStrategy");
			obj.increaseCast();
		}

		return obj;
	}
}
