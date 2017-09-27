package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 动态目标管理器
 */
public class DynamicModelObjectManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager", new DynamicModelObjectManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::JCDynamicModelObjectManagerProxy", new DynamicModelObjectManagerClassFactory());
	}

	/**
	 * 动态目标集合
	 */
	public static class DynamicModelObjectMap extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap", new DynamicModelObjectMapClassFactory());
		}

		/**
		 * 动态目标哈希表构造函数
		 */
		public DynamicModelObjectMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CDynamicModelObjectMap", null);
		}

		native private boolean push_EVString_CDynamicModelObject(long pNativeObject, String key, long val);
		/**
		 * 压入指定键值对象
		 * @param key 关键字
		 * @param val 值对象
		 * @return 是否成功
		 */
		public boolean push(String key, NativeObjectPointer<com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject> val)
		{
			String keyParamValue = key;
			long valParamValue = val.nativeObject.pointer;
			boolean returnValue = push_EVString_CDynamicModelObject(this.nativeObject.pointer, keyParamValue, valParamValue);
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
		public NativeObjectPointer<com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject> OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject> __returnValue = new NativeObjectPointer<com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		/**
		 * 获取指定键的值对象
		 * @param key 关键字
		 * @return 指定键值对象
		 */
		public NativeObjectPointer<com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject> get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject> __returnValue = new NativeObjectPointer<com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject>(new InstancePointer(returnValue));
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
		public DynamicModelObjectMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public DynamicModelObjectMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static DynamicModelObjectMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			DynamicModelObjectMap obj = null;
 			if(baseObj instanceof DynamicModelObjectMap)
			{
				obj = (DynamicModelObjectMap)baseObj;
			} else {
				obj = new DynamicModelObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CDynamicModelObjectMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class DynamicModelObjectMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			DynamicModelObjectMap emptyInstance = new DynamicModelObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 动态目标键值对
	 */
	public static class DynamicModelObjectIteratorPair extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair", new DynamicModelObjectIteratorPairClassFactory());
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
		public com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject __returnValue = new com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate, "CDynamicModelObject");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CDynamicModelObject");
			}
			return __returnValue;
		}
		
		native private void set_second_CDynamicModelObject (long pNativeObject, long value);
		public void set_second(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_CDynamicModelObject(this.nativeObject.pointer, secondParamValue);
		}
		
		/**
		 * 动态目标键值对构造函数
		 */
		public DynamicModelObjectIteratorPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CDynamicModelObjectIteratorPair", null);
		}

		public DynamicModelObjectIteratorPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public DynamicModelObjectIteratorPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static DynamicModelObjectIteratorPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			DynamicModelObjectIteratorPair obj = null;
 			if(baseObj instanceof DynamicModelObjectIteratorPair)
			{
				obj = (DynamicModelObjectIteratorPair)baseObj;
			} else {
				obj = new DynamicModelObjectIteratorPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CDynamicModelObjectIteratorPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class DynamicModelObjectIteratorPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			DynamicModelObjectIteratorPair emptyInstance = new DynamicModelObjectIteratorPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 动态目标遍历对象
	 */
	public static class DynamicModelObjectIterator extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator", new DynamicModelObjectIteratorClassFactory());
		}

		/**
		 * 动态目标遍历对象构造函数
		 * @param lst 构造参数
		 */
		public DynamicModelObjectIterator(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager.DynamicModelObjectMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("CDynamicModelObjectIterator", list);
		}

		/**
		 * 动态目标遍历对象构造函数
		 * @param other 构造参数
		 */
		public DynamicModelObjectIterator(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager.DynamicModelObjectIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("CDynamicModelObjectIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		/**
		 * 是否存在下一个元素
		 * @param lst 构造参数
		 * @return true为存在，false为不存在
		 */
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		/**
		 * 移动到下一个元素
		 * @param lst 构造参数
		 */
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private int nextKey_void(long pNativeObject);
		/**
		 * 获取下一个元素键值
		 * @return 下一个元素键值
		 */
		public int nextKey()
		{
			int returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		/**
		 * 获取下一个元素
		 * @return 下一个元素
		 */
		public com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject __returnValue = new com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate, "CDynamicModelObject");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CDynamicModelObject");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		/**
		 * 获取下一个元素智能指针
		 * @return 下一个元素智能指针
		 */
		public NativeObjectPointer<com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject> __returnValue = new NativeObjectPointer<com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		/**
		 * 获取下一个元素
		 * @return 下一个元素
		 */
		public com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject __returnValue = new com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate, "CDynamicModelObject");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CDynamicModelObject");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		/**
		 * 获取起始对象键值对
		 * @return 起始对象键值对
		 */
		public com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair __returnValue = new com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair(CreatedWhenConstruct.CWC_NotToCreate, "CDynamicModelObjectIteratorPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CDynamicModelObjectIteratorPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 获取终止对象键值对
		 * @return 终止对象键值对
		 */
		public com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair __returnValue = new com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair(CreatedWhenConstruct.CWC_NotToCreate, "CDynamicModelObjectIteratorPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CDynamicModelObjectIteratorPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 获取当前对象键值对
		 * @return 当前对象键值对
		 */
		public com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair __returnValue = new com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair(CreatedWhenConstruct.CWC_NotToCreate, "CDynamicModelObjectIteratorPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CDynamicModelObjectIteratorPair");
			}
			return __returnValue;
		}
		public DynamicModelObjectIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public DynamicModelObjectIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static DynamicModelObjectIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			DynamicModelObjectIterator obj = null;
 			if(baseObj instanceof DynamicModelObjectIterator)
			{
				obj = (DynamicModelObjectIterator)baseObj;
			} else {
				obj = new DynamicModelObjectIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CDynamicModelObjectIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class DynamicModelObjectIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			DynamicModelObjectIterator emptyInstance = new DynamicModelObjectIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 动态目标管理器构造函数
	 * @param name 唯一标识名称
	 * @param ref_sceneManager 场景管理器
	 * @param ref_globeControl 三维场景核心控件
	 */
	public DynamicModelObjectManager(String name, com.earthview.world.graphic.SceneManager ref_sceneManager, com.earthview.world.spatial3d.controls.GlobeControl ref_globeControl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer ref_sceneManagerPtr = new BasePointer(ref_sceneManager);
		list.add("ref_sceneManager", ref_sceneManagerPtr.get());
		BasePointer ref_globeControlPtr = new BasePointer(ref_globeControl);
		list.add("ref_globeControl", ref_globeControlPtr.get());
		Create("JCDynamicModelObjectManagerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean addDynamicModelObject_IDataSource_EVString_EVString_ModelType_ev_bool(long pNativeObject, long ref_modelDataSource, String name, String meshName, int modelType, boolean immediateRefresh);
	/**
	 * 添加动态目标对象
	 * @param ref_modelDataSource 模型数据源,该参数对象的生命周期要保持大于本对象的生命周期
	 * @param name 动态目标对象名称
	 * @param meshName 模型Mesh名称
	 * @param modelType 模型类型
	 * @param immediateRefresh 是否立即刷新模型资源
	 * @return 是否添加成功
	 */
	public boolean addDynamicModelObject(com.earthview.world.spatial.geodataset.Idatasource ref_modelDataSource, String name, String meshName, com.earthview.world.spatial3d.ModelType modelType, boolean immediateRefresh)
	{
		long ref_modelDataSourceParamValue = (ref_modelDataSource == null ? 0L : ref_modelDataSource.nativeObject.pointer);
		String nameParamValue = name;
		String meshNameParamValue = meshName;
		int modelTypeParamValue = modelType.getValue();
		boolean immediateRefreshParamValue = immediateRefresh;
		boolean returnValue = addDynamicModelObject_IDataSource_EVString_EVString_ModelType_ev_bool(this.nativeObject.pointer, ref_modelDataSourceParamValue, nameParamValue, meshNameParamValue, modelTypeParamValue, immediateRefreshParamValue);
		return returnValue;
	}
	native private boolean addDynamicModelObject_IDataSource_EVString_EVString_ModelType_ev_bool_ev_bool(long pNativeObject, long ref_modelDataSource, String name, String meshName, int modelType, boolean immediateRefresh, boolean onLineModeEnable);
	/**
	 * 添加动态目标对象
	 * @param ref_modelDataSource 模型数据源,该参数对象的生命周期要保持大于本对象的生命周期
	 * @param name 动态目标对象名称
	 * @param meshName 模型Mesh名称
	 * @param modelType 模型类型
	 * @param immediateRefresh 是否立即刷新模型资源
	 * @param onLineModeEnable 是否启用在线模式（在线模式会定时清除冗余的轨迹点，优化内存管理，不可以进行动画回放功能）
	 * @return 是否添加成功
	 */
	public boolean addDynamicModelObject(com.earthview.world.spatial.geodataset.Idatasource ref_modelDataSource, String name, String meshName, com.earthview.world.spatial3d.ModelType modelType, boolean immediateRefresh, boolean onLineModeEnable)
	{
		long ref_modelDataSourceParamValue = (ref_modelDataSource == null ? 0L : ref_modelDataSource.nativeObject.pointer);
		String nameParamValue = name;
		String meshNameParamValue = meshName;
		int modelTypeParamValue = modelType.getValue();
		boolean immediateRefreshParamValue = immediateRefresh;
		boolean onLineModeEnableParamValue = onLineModeEnable;
		boolean returnValue = addDynamicModelObject_IDataSource_EVString_EVString_ModelType_ev_bool_ev_bool(this.nativeObject.pointer, ref_modelDataSourceParamValue, nameParamValue, meshNameParamValue, modelTypeParamValue, immediateRefreshParamValue, onLineModeEnableParamValue);
		return returnValue;
	}
	native private boolean addDynamicModelObject_IDataSource_EVString_EVString_ModelType(long pNativeObject, long ref_modelDataSource, String name, String meshName, int modelType);
	/**
	 * 添加动态目标对象
	 * @param ref_modelDataSource 模型数据源,该参数对象的生命周期要保持大于本对象的生命周期
	 * @param name 动态目标对象名称
	 * @param meshName 模型Mesh名称
	 * @param modelType 模型类型
	 * @return 是否添加成功
	 */
	public boolean addDynamicModelObject(com.earthview.world.spatial.geodataset.Idatasource ref_modelDataSource, String name, String meshName, com.earthview.world.spatial3d.ModelType modelType)
	{
		long ref_modelDataSourceParamValue = (ref_modelDataSource == null ? 0L : ref_modelDataSource.nativeObject.pointer);
		String nameParamValue = name;
		String meshNameParamValue = meshName;
		int modelTypeParamValue = modelType.getValue();
		boolean returnValue = addDynamicModelObject_IDataSource_EVString_EVString_ModelType(this.nativeObject.pointer, ref_modelDataSourceParamValue, nameParamValue, meshNameParamValue, modelTypeParamValue);
		return returnValue;
	}
	native private boolean addDynamicModelObject_IDataSource_EVString_ev_uint32_ModelType(long pNativeObject, long ref_modelDataSource, String name, long meshIndex, int modelType);
	/**
	 * 添加动态目标对象
	 * @param ref_modelDataSource 模型数据源,该参数对象的生命周期要保持大于本对象的生命周期
	 * @param name 动态目标对象名称
	 * @param meshIndex 模型索引号
	 * @param modelType 模型类型
	 * @return 是否添加成功
	 */
	public boolean addDynamicModelObject(com.earthview.world.spatial.geodataset.Idatasource ref_modelDataSource, String name, long meshIndex, com.earthview.world.spatial3d.ModelType modelType)
	{
		long ref_modelDataSourceParamValue = (ref_modelDataSource == null ? 0L : ref_modelDataSource.nativeObject.pointer);
		String nameParamValue = name;
		long meshIndexParamValue = meshIndex;
		int modelTypeParamValue = modelType.getValue();
		boolean returnValue = addDynamicModelObject_IDataSource_EVString_ev_uint32_ModelType(this.nativeObject.pointer, ref_modelDataSourceParamValue, nameParamValue, meshIndexParamValue, modelTypeParamValue);
		return returnValue;
	}
	native private boolean addDynamicModelObject_IDataSource_EVString_ev_uint32_ModelType_ev_bool_ev_bool(long pNativeObject, long ref_modelDataSource, String name, long meshIndex, int modelType, boolean immediateRefresh, boolean onLineModeEnable);
	/**
	 * 添加动态目标对象
	 * @param ref_modelDataSource 模型数据源,该参数对象的生命周期要保持大于本对象的生命周期
	 * @param name 动态目标对象名称
	 * @param meshIndex 模型索引号
	 * @param modelType 模型类型
	 * @param immediateRefresh 是否立即刷新模型资源
	 * @param onLineModeEnable 是否启用在线模式（在线模式会定时清除冗余的轨迹点，优化内存管理，不可以进行动画回放功能）
	 * @return 是否添加成功
	 */
	public boolean addDynamicModelObject(com.earthview.world.spatial.geodataset.Idatasource ref_modelDataSource, String name, long meshIndex, com.earthview.world.spatial3d.ModelType modelType, boolean immediateRefresh, boolean onLineModeEnable)
	{
		long ref_modelDataSourceParamValue = (ref_modelDataSource == null ? 0L : ref_modelDataSource.nativeObject.pointer);
		String nameParamValue = name;
		long meshIndexParamValue = meshIndex;
		int modelTypeParamValue = modelType.getValue();
		boolean immediateRefreshParamValue = immediateRefresh;
		boolean onLineModeEnableParamValue = onLineModeEnable;
		boolean returnValue = addDynamicModelObject_IDataSource_EVString_ev_uint32_ModelType_ev_bool_ev_bool(this.nativeObject.pointer, ref_modelDataSourceParamValue, nameParamValue, meshIndexParamValue, modelTypeParamValue, immediateRefreshParamValue, onLineModeEnableParamValue);
		return returnValue;
	}
	native private boolean addDynamicModelObject_IDataSource_EVString_ev_uint32_ModelType_ev_bool(long pNativeObject, long ref_modelDataSource, String name, long meshIndex, int modelType, boolean immediateRefresh);
	/**
	 * 添加动态目标对象
	 * @param ref_modelDataSource 模型数据源,该参数对象的生命周期要保持大于本对象的生命周期
	 * @param name 动态目标对象名称
	 * @param meshIndex 模型索引号
	 * @param modelType 模型类型
	 * @param immediateRefresh 是否立即刷新模型资源
	 * @return 是否添加成功
	 */
	public boolean addDynamicModelObject(com.earthview.world.spatial.geodataset.Idatasource ref_modelDataSource, String name, long meshIndex, com.earthview.world.spatial3d.ModelType modelType, boolean immediateRefresh)
	{
		long ref_modelDataSourceParamValue = (ref_modelDataSource == null ? 0L : ref_modelDataSource.nativeObject.pointer);
		String nameParamValue = name;
		long meshIndexParamValue = meshIndex;
		int modelTypeParamValue = modelType.getValue();
		boolean immediateRefreshParamValue = immediateRefresh;
		boolean returnValue = addDynamicModelObject_IDataSource_EVString_ev_uint32_ModelType_ev_bool(this.nativeObject.pointer, ref_modelDataSourceParamValue, nameParamValue, meshIndexParamValue, modelTypeParamValue, immediateRefreshParamValue);
		return returnValue;
	}
	native private boolean addSubEntityDynamicModelObject_CDynamicModelObject_EVString_IntVector(long pNativeObject, long ref_modelObject, String name, long subEntityIndex);
	/**
	 * 由子部件生成动态目标对象
	 * @param ref_modelObject 源动态目标对象,该参数对象的生命周期要保持大于本对象的生命周期
	 * @param name 动态目标对象名称
	 * @param subEntityIndex 子部件索引集合
	 * @return 是否添加成功
	 */
	public boolean addSubEntityDynamicModelObject(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject ref_modelObject, String name, com.earthview.world.core.IntVector subEntityIndex)
	{
		long ref_modelObjectParamValue = (ref_modelObject == null ? 0L : ref_modelObject.nativeObject.pointer);
		String nameParamValue = name;
		long subEntityIndexParamValue = subEntityIndex.nativeObject.pointer;
		boolean returnValue = addSubEntityDynamicModelObject_CDynamicModelObject_EVString_IntVector(this.nativeObject.pointer, ref_modelObjectParamValue, nameParamValue, subEntityIndexParamValue);
		return returnValue;
	}
	native private boolean addSubEntityDynamicModelObject_CDynamicModelObject_EVString_IntVector_ev_bool(long pNativeObject, long ref_modelObject, String name, long subEntityIndex, boolean immediateRefresh);
	/**
	 * 由子部件生成动态目标对象
	 * @param ref_modelObject 源动态目标对象,该参数对象的生命周期要保持大于本对象的生命周期
	 * @param name 动态目标对象名称
	 * @param subEntityIndex 子部件索引集合
	 * @param immediateRefresh 是否立即刷新模型资源
	 * @return 是否添加成功
	 */
	public boolean addSubEntityDynamicModelObject(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject ref_modelObject, String name, com.earthview.world.core.IntVector subEntityIndex, boolean immediateRefresh)
	{
		long ref_modelObjectParamValue = (ref_modelObject == null ? 0L : ref_modelObject.nativeObject.pointer);
		String nameParamValue = name;
		long subEntityIndexParamValue = subEntityIndex.nativeObject.pointer;
		boolean immediateRefreshParamValue = immediateRefresh;
		boolean returnValue = addSubEntityDynamicModelObject_CDynamicModelObject_EVString_IntVector_ev_bool(this.nativeObject.pointer, ref_modelObjectParamValue, nameParamValue, subEntityIndexParamValue, immediateRefreshParamValue);
		return returnValue;
	}
	native private boolean addSubEntityDynamicModelObject_CDynamicModelObject_EVString_IntVector_ev_bool_ev_bool(long pNativeObject, long ref_modelObject, String name, long subEntityIndex, boolean immediateRefresh, boolean onLineModeEnable);
	/**
	 * 由子部件生成动态目标对象
	 * @param ref_modelObject 源动态目标对象,该参数对象的生命周期要保持大于本对象的生命周期
	 * @param name 动态目标对象名称
	 * @param subEntityIndex 子部件索引集合
	 * @param immediateRefresh 是否立即刷新模型资源
	 * @param onLineModeEnable 是否启用在线模式（在线模式会定时清除冗余的轨迹点，优化内存管理，不可以进行动画回放功能）
	 * @return 是否添加成功
	 */
	public boolean addSubEntityDynamicModelObject(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject ref_modelObject, String name, com.earthview.world.core.IntVector subEntityIndex, boolean immediateRefresh, boolean onLineModeEnable)
	{
		long ref_modelObjectParamValue = (ref_modelObject == null ? 0L : ref_modelObject.nativeObject.pointer);
		String nameParamValue = name;
		long subEntityIndexParamValue = subEntityIndex.nativeObject.pointer;
		boolean immediateRefreshParamValue = immediateRefresh;
		boolean onLineModeEnableParamValue = onLineModeEnable;
		boolean returnValue = addSubEntityDynamicModelObject_CDynamicModelObject_EVString_IntVector_ev_bool_ev_bool(this.nativeObject.pointer, ref_modelObjectParamValue, nameParamValue, subEntityIndexParamValue, immediateRefreshParamValue, onLineModeEnableParamValue);
		return returnValue;
	}
	native private boolean removeDynamicModelObject_EVString(long pNativeObject, String name);
	/**
	 * 移除动态目标对象
	 * @param name 动态目标对象名称
	 * @return 是否移除成功
	 */
	public boolean removeDynamicModelObject(String name)
	{
		String nameParamValue = name;
		boolean returnValue = removeDynamicModelObject_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private long getDynamicModelObject_EVString(long pNativeObject, String name);
	/**
	 * 获取动态目标对象
	 * @param name 动态目标对象名称
	 * @return 动态目标对象
	 */
	public com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject getDynamicModelObject(String name)
	{
		String nameParamValue = name;
		long returnValue = getDynamicModelObject_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject __returnValue = new com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate, "CDynamicModelObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDynamicModelObject");
		}
		return __returnValue;
	}
	native private boolean existDynamicModelObject_EVString(long pNativeObject, String name);
	/**
	 * 是否存在动态目标对象
	 * @param name 动态目标对象名称
	 * @return 是否存在动态目标对象
	 */
	public boolean existDynamicModelObject(String name)
	{
		String nameParamValue = name;
		boolean returnValue = existDynamicModelObject_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void setDynamicModelObjectEnabledToGetHeading_EVString_ev_bool(long pNativeObject, String name, boolean isEnable);
	/**
	 * 设置指定名称的动目标是否获取动目标朝向
	 * @param value 是否获取模型朝向
	 */
	public void setDynamicModelObjectEnabledToGetHeading(String name, boolean isEnable)
	{
		String nameParamValue = name;
		boolean isEnableParamValue = isEnable;
		setDynamicModelObjectEnabledToGetHeading_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, isEnableParamValue);
	}
	native private boolean getDynamicModelObjectEnabledToGetHeading_EVString(long pNativeObject, String name);
	/**
	 * 获取指定名称的动目标是否获取动目标朝向
	 * @return 是否获取模型朝向
	 */
	public boolean getDynamicModelObjectEnabledToGetHeading(String name)
	{
		String nameParamValue = name;
		boolean returnValue = getDynamicModelObjectEnabledToGetHeading_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void setDynamicModelManagerListener_CDynamicModelManagerListener(long pNativeObject, long ref_listener);
	/**
	 * 设置自定义动态目标场景监听对象
	 * @param ref_listener 自定义动态目标场景监听对象,该参数对象的生命周期要保持大于本对象的生命周期
	 */
	public void setDynamicModelManagerListener(com.earthview.industryengine.dynamicmodellibrary.DynamicModelManagerListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		setDynamicModelManagerListener_CDynamicModelManagerListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private void removeDynamicModelManagerListener_void(long pNativeObject);
	/**
	 * 移除自定义动态目标场景监听对象
	 */
	public void removeDynamicModelManagerListener()
	{
		removeDynamicModelManagerListener_void(this.nativeObject.pointer);
	}
	native private void addDynamicModelGlobeTrackPoints_EVString_CGlobeControlPointSet(long pNativeObject, String name, long controlPoints);
	/**
	 * 向指定名称动态目标对象添加一组轨迹动画控制点
	 * @param name 动态目标名称
	 * @param controlPoints 一组轨迹动画控制点
	 */
	public void addDynamicModelGlobeTrackPoints(String name, com.earthview.industryengine.dynamicmodellibrary.GlobeControlPointSet controlPoints)
	{
		String nameParamValue = name;
		long controlPointsParamValue = controlPoints.nativeObject.pointer;
		addDynamicModelGlobeTrackPoints_EVString_CGlobeControlPointSet(this.nativeObject.pointer, nameParamValue, controlPointsParamValue);
	}
	native private void addDynamicModelGlobeNodeTrackPoints_EVString_CGlobeControlPointMap(long pNativeObject, String name, long controlPoints);
	/**
	 * 添加一组特定关键帧时间的轨迹动画关键控制点
	 * @param name 动态目标名称
	 * @param controlPoints 一组控制点
	 */
	public void addDynamicModelGlobeNodeTrackPoints(String name, com.earthview.world.spatial3d.GlobeControlPointMap controlPoints)
	{
		String nameParamValue = name;
		long controlPointsParamValue = controlPoints.nativeObject.pointer;
		addDynamicModelGlobeNodeTrackPoints_EVString_CGlobeControlPointMap(this.nativeObject.pointer, nameParamValue, controlPointsParamValue);
	}
	native private void clearAllDynamicModelGlobeNodeTrackPoints_EVString(long pNativeObject, String name);
	/**
	 * 清除指定名称动态目标对象的所有轨迹动画关键控制点
	 * @param name 动态目标名称
	 */
	public void clearAllDynamicModelGlobeNodeTrackPoints(String name)
	{
		String nameParamValue = name;
		clearAllDynamicModelGlobeNodeTrackPoints_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void addDynamicModelCameraTrackPoints_EVString_CCameraAnimationParamSet(long pNativeObject, String name, long cameraanimations);
	/**
	 * 向指定名称动态目标对象添加一组相机动画控制点
	 * @param name 动态目标名称
	 * @param cameraanimations 一组相机动画控制点
	 */
	public void addDynamicModelCameraTrackPoints(String name, com.earthview.industryengine.dynamicmodellibrary.CameraAnimationParamSet cameraanimations)
	{
		String nameParamValue = name;
		long cameraanimationsParamValue = cameraanimations.nativeObject.pointer;
		addDynamicModelCameraTrackPoints_EVString_CCameraAnimationParamSet(this.nativeObject.pointer, nameParamValue, cameraanimationsParamValue);
	}
	native private void addDynamicModelGlobeTrackPoint_EVString_CGlobeControlPoint(long pNativeObject, String name, long controlPoint);
	/**
	 * 向指定名称动态目标对象追加一个轨迹动画控制点
	 * @param name 动态目标名称
	 * @param controlPoint 轨迹动画控制点
	 */
	public void addDynamicModelGlobeTrackPoint(String name, com.earthview.world.spatial3d.GlobeControlPoint controlPoint)
	{
		String nameParamValue = name;
		long controlPointParamValue = controlPoint.nativeObject.pointer;
		addDynamicModelGlobeTrackPoint_EVString_CGlobeControlPoint(this.nativeObject.pointer, nameParamValue, controlPointParamValue);
	}
	native private void addDynamicModelCameraTrackPoints_EVString_CCameraAnimationParam(long pNativeObject, String name, long cameraanimation);
	/**
	 * 向指定名称动态目标对象追加一个相机动画控制点
	 * @param name 动态目标名称
	 * @param cameraanimation 相机动画控制点
	 */
	public void addDynamicModelCameraTrackPoints(String name, com.earthview.industryengine.dynamicmodellibrary.CameraAnimationParam cameraanimation)
	{
		String nameParamValue = name;
		long cameraanimationParamValue = cameraanimation.nativeObject.pointer;
		addDynamicModelCameraTrackPoints_EVString_CCameraAnimationParam(this.nativeObject.pointer, nameParamValue, cameraanimationParamValue);
	}
	native private void clearAllDynamicModelCameraNodeTrackPoints_EVString(long pNativeObject, String name);
	/**
	 * 清除指定名称动态目标对象的所有相机动画关键控制点
	 * @param name 动态目标名称
	 */
	public void clearAllDynamicModelCameraNodeTrackPoints(String name)
	{
		String nameParamValue = name;
		clearAllDynamicModelCameraNodeTrackPoints_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setTrackTrailVisible_EVString_ev_bool(long pNativeObject, String name, boolean visible);
	/**
	 * 设置指定名称动态目标对象的航迹可见性
	 * @param name 动态目标名称
	 * @param visible 航迹是否可见
	 */
	public void setTrackTrailVisible(String name, boolean visible)
	{
		String nameParamValue = name;
		boolean visibleParamValue = visible;
		setTrackTrailVisible_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, visibleParamValue);
	}
	native private boolean getTrackTrailVisible_EVString(long pNativeObject, String name);
	/**
	 * 获取指定名称动态目标对象的航迹可见性
	 * @param name 动态目标名称
	 * @return 航迹是否可见
	 */
	public boolean getTrackTrailVisible(String name)
	{
		String nameParamValue = name;
		boolean returnValue = getTrackTrailVisible_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void setTrackTrailDisplayPointNum_EVString_ev_int32(long pNativeObject, String name, int number);
	/**
	 * 设置指定名称动态目标对象的航迹点显示数目
	 * @param name 动态目标名称
	 * @param number 航迹点显示数目
	 */
	public void setTrackTrailDisplayPointNum(String name, int number)
	{
		String nameParamValue = name;
		int numberParamValue = number;
		setTrackTrailDisplayPointNum_EVString_ev_int32(this.nativeObject.pointer, nameParamValue, numberParamValue);
	}
	native private int getTrackTrailDisplayPointNum_EVString(long pNativeObject, String name);
	/**
	 * 获取指定名称动态目标对象的航迹点显示数目
	 * @param name 动态目标名称
	 * @return 航迹点显示数目
	 */
	public int getTrackTrailDisplayPointNum(String name)
	{
		String nameParamValue = name;
		int returnValue = getTrackTrailDisplayPointNum_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void setTrackTrailSymbol_EVString_ISymbol(long pNativeObject, String name, long trackTrailSymbol);
	/**
	 * 设置指定名称动态目标对象的航迹显示风格
	 * @param name 动态目标名称
	 * @param trackTrailSymbol 显示风格
	 */
	public void setTrackTrailSymbol(String name, com.earthview.world.spatial.display.Isymbol trackTrailSymbol)
	{
		String nameParamValue = name;
		long trackTrailSymbolParamValue = (trackTrailSymbol == null ? 0L : trackTrailSymbol.nativeObject.pointer);
		setTrackTrailSymbol_EVString_ISymbol(this.nativeObject.pointer, nameParamValue, trackTrailSymbolParamValue);
	}
	native private void setIsTrackTrailHighLine_EVString_ev_bool(long pNativeObject, String name, boolean isHighLine);
	/**
	 * 设置指定名称动态目标对象的航迹是否显示为视高线
	 * @param name 动态目标名称
	 * @param isHighLine 是否显示为视高线
	 */
	public void setIsTrackTrailHighLine(String name, boolean isHighLine)
	{
		String nameParamValue = name;
		boolean isHighLineParamValue = isHighLine;
		setIsTrackTrailHighLine_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, isHighLineParamValue);
	}
	native private boolean getIsTrackTrailHighLine_EVString(long pNativeObject, String name);
	/**
	 * 获取指定名称动态目标对象的航迹是否显示为视高线
	 * @param name 动态目标名称
	 * @return 是否显示为视高线
	 */
	public boolean getIsTrackTrailHighLine(String name)
	{
		String nameParamValue = name;
		boolean returnValue = getIsTrackTrailHighLine_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void setHighLineColorInfo_EVString_CRgbColor_CRgbColor(long pNativeObject, String name, long staticHighLineColor, long dynamicHighLineColor);
	/**
	 * 设置指定名称动态目标对象的视高线显示颜色
	 * @param name 动态目标名称
	 * @param staticHighLineColor 静态部分的颜色
	 * @param dynamicHighLineColor 动态部分的颜色
	 */
	public void setHighLineColorInfo(String name, com.earthview.world.spatial.display.RgbColor staticHighLineColor, com.earthview.world.spatial.display.RgbColor dynamicHighLineColor)
	{
		String nameParamValue = name;
		long staticHighLineColorParamValue = (staticHighLineColor == null ? 0L : staticHighLineColor.nativeObject.pointer);
		long dynamicHighLineColorParamValue = (dynamicHighLineColor == null ? 0L : dynamicHighLineColor.nativeObject.pointer);
		setHighLineColorInfo_EVString_CRgbColor_CRgbColor(this.nativeObject.pointer, nameParamValue, staticHighLineColorParamValue, dynamicHighLineColorParamValue);
	}
	native private void setHighLineDistance_EVString_ev_real64(long pNativeObject, String name, double highLineDistance);
	/**
	 * 设置指定名称动态目标对象的视高线间距
	 * @param name 动态目标名称
	 * @param highLineDistance 间距
	 */
	public void setHighLineDistance(String name, double highLineDistance)
	{
		String nameParamValue = name;
		double highLineDistanceParamValue = highLineDistance;
		setHighLineDistance_EVString_ev_real64(this.nativeObject.pointer, nameParamValue, highLineDistanceParamValue);
	}
	native private double getHighLineDistance_EVString(long pNativeObject, String name);
	/**
	 * 获取指定名称动态目标对象的视高线间距
	 * @param name 动态目标名称
	 * @return 视高线间距
	 */
	public double getHighLineDistance(String name)
	{
		String nameParamValue = name;
		double returnValue = getHighLineDistance_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private long getTrackTrailSymbol_EVString(long pNativeObject, String name);
	/**
	 * 获取指定名称动态目标对象的航迹显示风格
	 * @param name 动态目标名称
	 * @return 显示风格
	 */
	public com.earthview.world.spatial.display.Isymbol getTrackTrailSymbol(String name)
	{
		String nameParamValue = name;
		long returnValue = getTrackTrailSymbol_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private void setTrackTrailSpatialReference_EVString_ISpatialReference(long pNativeObject, String name, long ref_sr);
	/**
	 * 设置指定名称动态目标对象的航迹参考坐标系
	 * @param name 动态目标名称
	 * @param ref_sr 参考坐标系,该参数对象的生命周期要保持大于本对象的生命周期
	 */
	public void setTrackTrailSpatialReference(String name, com.earthview.world.spatial.geometry.Ispatialreference ref_sr)
	{
		String nameParamValue = name;
		long ref_srParamValue = (ref_sr == null ? 0L : ref_sr.nativeObject.pointer);
		setTrackTrailSpatialReference_EVString_ISpatialReference(this.nativeObject.pointer, nameParamValue, ref_srParamValue);
	}
	native private long getTrackTrailSpatialReference_EVString(long pNativeObject, String name);
	/**
	 * 获取指定名称动态目标对象的航迹参考坐标系
	 * @param name 动态目标名称
	 * @return 参考坐标系
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getTrackTrailSpatialReference(String name)
	{
		String nameParamValue = name;
		long returnValue = getTrackTrailSpatialReference_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}
	native private void setTrackTrailDisplayMode_EVString_EVDisplayMode(long pNativeObject, String name, int displayMode);
	/**
	 * 设置航迹显示模式
	 * @param name 动态目标名称
	 * @param displayMode 航迹显示模式
	 */
	public void setTrackTrailDisplayMode(String name, com.earthview.industryengine.industrygraphic.PolylineFeature.EVDisplayMode displayMode)
	{
		String nameParamValue = name;
		int displayModeParamValue = displayMode.getValue();
		setTrackTrailDisplayMode_EVString_EVDisplayMode(this.nativeObject.pointer, nameParamValue, displayModeParamValue);
	}
	native private int getTrackTrailDisplayMode_EVString(long pNativeObject, String name);
	/**
	 * 获取航迹显示模式
	 * @param name 动态目标名称
	 * @return 航迹显示模式
	 */
	public com.earthview.industryengine.industrygraphic.PolylineFeature.EVDisplayMode getTrackTrailDisplayMode(String name)
	{
		String nameParamValue = name;
		int returnValue = getTrackTrailDisplayMode_EVString(this.nativeObject.pointer, nameParamValue);
		return com.earthview.industryengine.industrygraphic.PolylineFeature.EVDisplayMode.toEnum(returnValue);
	}
	native private void setScutcheonVisible_EVString_ev_bool(long pNativeObject, String name, boolean visible);
	/**
	 * 设置指定名称动态目标对象的标牌可见性
	 * @param name 动态目标名称
	 * @param visible 标牌可见性
	 */
	public void setScutcheonVisible(String name, boolean visible)
	{
		String nameParamValue = name;
		boolean visibleParamValue = visible;
		setScutcheonVisible_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, visibleParamValue);
	}
	native private boolean getScutcheonVisible_EVString(long pNativeObject, String name);
	/**
	 * 获取指定名称动态目标对象的标牌可见性
	 * @param name 动态目标名称
	 * @return 标牌可见性
	 */
	public boolean getScutcheonVisible(String name)
	{
		String nameParamValue = name;
		boolean returnValue = getScutcheonVisible_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void setScutcheonTextColor_EVString_CColourValue(long pNativeObject, String modelName, long textColor);
	/**
	 * 设置标牌字体颜色
	 * @param modelName 动态目标名称
	 * @param textColor 标牌字体颜色
	 */
	public void setScutcheonTextColor(String modelName, com.earthview.world.graphic.ColourValue textColor)
	{
		String modelNameParamValue = modelName;
		long textColorParamValue = textColor.nativeObject.pointer;
		setScutcheonTextColor_EVString_CColourValue(this.nativeObject.pointer, modelNameParamValue, textColorParamValue);
	}
	native private long getScutcheonTextColor_EVString(long pNativeObject, String modelName);
	/**
	 * 获取标牌字体颜色
	 * @param modelName 动态目标名称
	 * @return 标牌字体颜色
	 */
	public com.earthview.world.graphic.ColourValue getScutcheonTextColor(String modelName)
	{
		String modelNameParamValue = modelName;
		long returnValue = getScutcheonTextColor_EVString(this.nativeObject.pointer, modelNameParamValue);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setScutcheonCaption_EVString_EVString(long pNativeObject, String modelName, String caption);
	/**
	 * 设置标牌描述信息
	 * @param modelName 动态目标名称
	 * @param caption 标牌描述信息
	 */
	public void setScutcheonCaption(String modelName, String caption)
	{
		String modelNameParamValue = modelName;
		String captionParamValue = caption;
		setScutcheonCaption_EVString_EVString(this.nativeObject.pointer, modelNameParamValue, captionParamValue);
	}
	native private String getScutcheonCaption_EVString(long pNativeObject, String modelName);
	/**
	 * 获取标牌描述信息
	 * @param modelName 动态目标名称
	 * @return 标牌描述信息
	 */
	public String getScutcheonCaption(String modelName)
	{
		String modelNameParamValue = modelName;
		String returnValue = getScutcheonCaption_EVString(this.nativeObject.pointer, modelNameParamValue);
		return returnValue;
	}
	native private void setScutcheonFontSize_EVString_ev_byte(long pNativeObject, String modelName, short size);
	/**
	 * 设置标牌字体大小
	 * @param modelName 动态目标名称
	 * @param size 标牌字体大小
	 */
	public void setScutcheonFontSize(String modelName, short size)
	{
		String modelNameParamValue = modelName;
		short sizeParamValue = size;
		setScutcheonFontSize_EVString_ev_byte(this.nativeObject.pointer, modelNameParamValue, sizeParamValue);
	}
	native private short getScutcheonFontSize_EVString(long pNativeObject, String modelName);
	/**
	 * 设置标牌字体大小
	 * @param modelName 动态目标名称
	 * @return 标牌字体大小
	 */
	public short getScutcheonFontSize(String modelName)
	{
		String modelNameParamValue = modelName;
		short returnValue = getScutcheonFontSize_EVString(this.nativeObject.pointer, modelNameParamValue);
		return returnValue;
	}
	native private void setScutcheonFontName_EVString_EVString(long pNativeObject, String modelName, String fontName);
	/**
	 * 设置标牌字体名称
	 * @param modelName 动态目标名称
	 * @param fontName 标牌字体名称
	 */
	public void setScutcheonFontName(String modelName, String fontName)
	{
		String modelNameParamValue = modelName;
		String fontNameParamValue = fontName;
		setScutcheonFontName_EVString_EVString(this.nativeObject.pointer, modelNameParamValue, fontNameParamValue);
	}
	native private String getScutcheonFontName_EVString(long pNativeObject, String modelName);
	/**
	 * 获取标牌字体名称
	 * @param modelName 动态目标名称
	 * @return 标牌字体名称
	 */
	public String getScutcheonFontName(String modelName)
	{
		String modelNameParamValue = modelName;
		String returnValue = getScutcheonFontName_EVString(this.nativeObject.pointer, modelNameParamValue);
		return returnValue;
	}
	native private long getScutcheonLineColor_EVString(long pNativeObject, String modelName);
	/**
	 * 获取标牌连接线颜色
	 * @param modelName 动态目标名称
	 * @return 标牌连接线颜色
	 */
	public com.earthview.world.graphic.ColourValue getScutcheonLineColor(String modelName)
	{
		String modelNameParamValue = modelName;
		long returnValue = getScutcheonLineColor_EVString(this.nativeObject.pointer, modelNameParamValue);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setScutcheonLineColor_EVString_CColourValue(long pNativeObject, String modelName, long lineColor);
	/**
	 * 设置标牌连接线颜色
	 * @param modelName 动态目标名称
	 * @param lineColor 标牌连接线颜色
	 */
	public void setScutcheonLineColor(String modelName, com.earthview.world.graphic.ColourValue lineColor)
	{
		String modelNameParamValue = modelName;
		long lineColorParamValue = lineColor.nativeObject.pointer;
		setScutcheonLineColor_EVString_CColourValue(this.nativeObject.pointer, modelNameParamValue, lineColorParamValue);
	}
	native private long getScutcheonFrameColor_EVString(long pNativeObject, String modelName);
	/**
	 * 获取标牌边框颜色
	 * @param modelName 动态目标名称
	 * @return 标牌边框颜色
	 */
	public com.earthview.world.graphic.ColourValue getScutcheonFrameColor(String modelName)
	{
		String modelNameParamValue = modelName;
		long returnValue = getScutcheonFrameColor_EVString(this.nativeObject.pointer, modelNameParamValue);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setScutcheonFrameColor_EVString_CColourValue(long pNativeObject, String modelName, long frameColor);
	/**
	 * 设置标牌边框颜色
	 * @param modelName 动态目标名称
	 * @param boardColor 标牌边框颜色
	 */
	public void setScutcheonFrameColor(String modelName, com.earthview.world.graphic.ColourValue frameColor)
	{
		String modelNameParamValue = modelName;
		long frameColorParamValue = frameColor.nativeObject.pointer;
		setScutcheonFrameColor_EVString_CColourValue(this.nativeObject.pointer, modelNameParamValue, frameColorParamValue);
	}
	native private long getScutcheonLineLength_EVString(long pNativeObject, String modelName);
	/**
	 * 获取标牌延伸线长度
	 * @param modelName 动态目标名称
	 * @return 标牌延伸线长度
	 */
	public com.earthview.world.spatial.math.Vector3 getScutcheonLineLength(String modelName)
	{
		String modelNameParamValue = modelName;
		long returnValue = getScutcheonLineLength_EVString(this.nativeObject.pointer, modelNameParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setScutcheonLineLength_EVString_CVector3(long pNativeObject, String modelName, long lineLength);
	/**
	 * 设置标牌延伸线长度
	 * @param modelName 动态目标名称
	 * @param lineLength 标牌延伸线长度
	 */
	public void setScutcheonLineLength(String modelName, com.earthview.world.spatial.math.Vector3 lineLength)
	{
		String modelNameParamValue = modelName;
		long lineLengthParamValue = lineLength.nativeObject.pointer;
		setScutcheonLineLength_EVString_CVector3(this.nativeObject.pointer, modelNameParamValue, lineLengthParamValue);
	}
	native private void setScutcheonTextureMatName_EVString_EVString(long pNativeObject, String modelName, String matName);
	/**
	 * 设置标牌纹理材质名称
	 * @param modelName 动态目标名称
	 * @param matName 材质名称
	 */
	public void setScutcheonTextureMatName(String modelName, String matName)
	{
		String modelNameParamValue = modelName;
		String matNameParamValue = matName;
		setScutcheonTextureMatName_EVString_EVString(this.nativeObject.pointer, modelNameParamValue, matNameParamValue);
	}
	native private void setParticleVisible_EVString_ev_bool(long pNativeObject, String name, boolean visible);
	/**
	 * 设置指定名称动态目标对象的粒子可见性
	 * @param name 动态目标名称
	 * @param visible 粒子可见性
	 */
	public void setParticleVisible(String name, boolean visible)
	{
		String nameParamValue = name;
		boolean visibleParamValue = visible;
		setParticleVisible_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, visibleParamValue);
	}
	native private boolean getParticleVisible_EVString(long pNativeObject, String name);
	/**
	 * 获取指定名称动态目标对象的粒子可见性
	 * @param name 动态目标名称
	 * @return 粒子可见性
	 */
	public boolean getParticleVisible(String name)
	{
		String nameParamValue = name;
		boolean returnValue = getParticleVisible_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void setRibbonTrailVisible_EVString_ev_bool(long pNativeObject, String name, boolean visible);
	/**
	 * 设置指定名称动态目标对象的飘带可见性
	 * @param name 动态目标名称
	 * @param visible 飘带可见性
	 */
	public void setRibbonTrailVisible(String name, boolean visible)
	{
		String nameParamValue = name;
		boolean visibleParamValue = visible;
		setRibbonTrailVisible_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, visibleParamValue);
	}
	native private boolean getRibbonTrailVisible_EVString(long pNativeObject, String name);
	/**
	 * 获取指定名称动态目标对象的飘带可见性
	 * @param name 动态目标名称
	 * @return 飘带可见性
	 */
	public boolean getRibbonTrailVisible(String name)
	{
		String nameParamValue = name;
		boolean returnValue = getRibbonTrailVisible_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private long getSceneNode_void(long pNativeObject);
	/**
	 * 获取动态目标管理对象绑定的节点
	 * @return 绑定的节点
	 */
	public com.earthview.world.graphic.SceneNode getSceneNode()
	{
		long returnValue = getSceneNode_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneNode __returnValue = new com.earthview.world.graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate, "CSceneNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneNode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneNode");
		}
		return __returnValue;
	}
	native private void lockGlobeNodeTrackModelObject_EVString(long pNativeObject, String name);
	/**
	 * 锁定指定名称动态目标对象的轨迹动画
	 * @param name 动态目标名称
	 */
	public void lockGlobeNodeTrackModelObject(String name)
	{
		String nameParamValue = name;
		lockGlobeNodeTrackModelObject_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void unlockGlobeNodeTrackModelObject_void(long pNativeObject);
	/**
	 * 解锁指定名称动态目标对象的轨迹动画
	 * @param name 动态目标名称
	 */
	public void unlockGlobeNodeTrackModelObject()
	{
		unlockGlobeNodeTrackModelObject_void(this.nativeObject.pointer);
	}
	native private void setLockDistance_EVString_ev_real64(long pNativeObject, String name, double distance);
	/**
	 * 设置指定名称动态目标对象的锁定观察距离
	 * @param name 动态目标名称
	 * @param distance 锁定观察距离
	 */
	public void setLockDistance(String name, double distance)
	{
		String nameParamValue = name;
		double distanceParamValue = distance;
		setLockDistance_EVString_ev_real64(this.nativeObject.pointer, nameParamValue, distanceParamValue);
	}
	native private double getLockDistance_EVString(long pNativeObject, String name);
	/**
	 * 获取指定名称动态目标对象的锁定观察距离
	 * @param name 动态目标名称
	 * @return 锁定观察距离
	 */
	public double getLockDistance(String name)
	{
		String nameParamValue = name;
		double returnValue = getLockDistance_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void setLockTilt_EVString_CDegree(long pNativeObject, String name, long tilt);
	/**
	 * 设置指定名称动态目标对象的锁定观察俯仰角
	 * @param name 动态目标名称
	 * @param tilt 锁定观察俯仰角
	 */
	public void setLockTilt(String name, com.earthview.world.spatial.math.Degree tilt)
	{
		String nameParamValue = name;
		long tiltParamValue = tilt.nativeObject.pointer;
		setLockTilt_EVString_CDegree(this.nativeObject.pointer, nameParamValue, tiltParamValue);
	}
	native private long getLockTilt_EVString(long pNativeObject, String name);
	/**
	 * 获取指定名称动态目标对象的锁定观察俯仰角
	 * @param name 动态目标名称
	 * @return 锁定观察俯仰角
	 */
	public com.earthview.world.spatial.math.Degree getLockTilt(String name)
	{
		String nameParamValue = name;
		long returnValue = getLockTilt_EVString(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	native private void setIsLockDistance_EVString_ev_bool(long pNativeObject, String name, boolean locked);
	/**
	 * 设置是否锁定观察距离
	 * @param name 动态目标名称
	 * @param locked 是否锁定
	 */
	public void setIsLockDistance(String name, boolean locked)
	{
		String nameParamValue = name;
		boolean lockedParamValue = locked;
		setIsLockDistance_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, lockedParamValue);
	}
	native private boolean getIsLockDistance_EVString(long pNativeObject, String name);
	/**
	 * 获取是否锁定观察距离
	 * @param name 动态目标名称
	 * @return 是否锁定
	 */
	public boolean getIsLockDistance(String name)
	{
		String nameParamValue = name;
		boolean returnValue = getIsLockDistance_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void setIsLockTilt_EVString_ev_bool(long pNativeObject, String name, boolean locked);
	/**
	 * 设置是否锁定观察俯仰角
	 * @param name 动态目标名称
	 * @param locked 是否锁定
	 */
	public void setIsLockTilt(String name, boolean locked)
	{
		String nameParamValue = name;
		boolean lockedParamValue = locked;
		setIsLockTilt_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, lockedParamValue);
	}
	native private boolean getIsLockTilt_EVString(long pNativeObject, String name);
	/**
	 * 获取是否锁定观察俯仰角
	 * @param name 动态目标名称
	 * @return 是否锁定
	 */
	public boolean getIsLockTilt(String name)
	{
		String nameParamValue = name;
		boolean returnValue = getIsLockTilt_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void setIsLockHeading_EVString_ev_bool(long pNativeObject, String name, boolean locked);
	/**
	 * 设置是否锁定观察偏航角
	 * @param name 动态目标名称
	 * @param locked 是否锁定
	 */
	public void setIsLockHeading(String name, boolean locked)
	{
		String nameParamValue = name;
		boolean lockedParamValue = locked;
		setIsLockHeading_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, lockedParamValue);
	}
	native private boolean getIsLockHeading_EVString(long pNativeObject, String name);
	/**
	 * 获取是否锁定观察偏航角
	 * @param name 动态目标名称
	 * @return 是否锁定
	 */
	public boolean getIsLockHeading(String name)
	{
		String nameParamValue = name;
		boolean returnValue = getIsLockHeading_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private long getLockedGlobeNodeTrackModelObject_void(long pNativeObject);
	/**
	 * 获取当前锁定的动态目标对象
	 * @return 当前锁定的动态目标对象
	 */
	public com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject getLockedGlobeNodeTrackModelObject()
	{
		long returnValue = getLockedGlobeNodeTrackModelObject_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject __returnValue = new com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate, "CDynamicModelObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDynamicModelObject");
		}
		return __returnValue;
	}
	native private long getCameraNodeTrackModelObject_void(long pNativeObject);
	/**
	 * 获取当前的相机动画对象
	 * @return 相机动画对象
	 */
	public com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject getCameraNodeTrackModelObject()
	{
		long returnValue = getCameraNodeTrackModelObject_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject __returnValue = new com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate, "CDynamicModelObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDynamicModelObject");
		}
		return __returnValue;
	}
	native private void setCameraNodeTrackLocalCenter_EVString_CVector3(long pNativeObject, String name, long localCenter);
	/**
	 * 设置相机动画局部观察中心位置
	 * @param name 动态目标名称
	 * @param localCenter 局部观察中心位置
	 */
	public void setCameraNodeTrackLocalCenter(String name, com.earthview.world.spatial.math.Vector3 localCenter)
	{
		String nameParamValue = name;
		long localCenterParamValue = localCenter.nativeObject.pointer;
		setCameraNodeTrackLocalCenter_EVString_CVector3(this.nativeObject.pointer, nameParamValue, localCenterParamValue);
	}
	native private long getCameraNodeTrackLocalCenter_EVString(long pNativeObject, String name);
	/**
	 * 获取相机动画局部观察中心位置
	 * @param name 动态目标名称
	 * @return 局部观察中心位置
	 */
	public com.earthview.world.spatial.math.Vector3 getCameraNodeTrackLocalCenter(String name)
	{
		String nameParamValue = name;
		long returnValue = getCameraNodeTrackLocalCenter_EVString(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setLodStrategy_CDynamicLodStrategy(long pNativeObject, long ref_lodStrategy);
	/**
	 * 设置LOD策略
	 * @param lodStrategy LOD策略,该参数对象的生命周期要保持大于本对象的生命周期
	 */
	public void setLodStrategy(com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy ref_lodStrategy)
	{
		long ref_lodStrategyParamValue = (ref_lodStrategy == null ? 0L : ref_lodStrategy.nativeObject.pointer);
		setLodStrategy_CDynamicLodStrategy(this.nativeObject.pointer, ref_lodStrategyParamValue);
	}
	native private long getLodStrategy_void(long pNativeObject);
	/**
	 * 获取LOD策略
	 * @return LOD策略
	 */
	public com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy getLodStrategy()
	{
		long returnValue = getLodStrategy_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy __returnValue = new com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy(CreatedWhenConstruct.CWC_NotToCreate, "CDynamicLodStrategy");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDynamicLodStrategy");
		}
		return __returnValue;
	}
	native private void setLodStrategyEnable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置是否启用LOD策略
	 * @param enable 是否启用
	 */
	public void setLodStrategyEnable(boolean enable)
	{
		boolean enableParamValue = enable;
		setLodStrategyEnable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getLodStrategyEnable_void(long pNativeObject);
	/**
	 * 获取是否启用LOD策略
	 * @return 是否启用
	 */
	public boolean getLodStrategyEnable()
	{
		boolean returnValue = getLodStrategyEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDynamicModelObjectVisible_EVString_ev_bool(long pNativeObject, String name, boolean visible);
	/**
	 * 设置动态目标的可见性
	 * @param name 动态目标名称
	 * @param visible 可见性
	 */
	public void setDynamicModelObjectVisible(String name, boolean visible)
	{
		String nameParamValue = name;
		boolean visibleParamValue = visible;
		setDynamicModelObjectVisible_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, visibleParamValue);
	}
	native private boolean getDynamicModelObjectVisible_EVString(long pNativeObject, String name);
	/**
	 * 获取动态目标的可见性
	 * @param name 动态目标名称
	 * @return 可见性
	 */
	public boolean getDynamicModelObjectVisible(String name)
	{
		String nameParamValue = name;
		boolean returnValue = getDynamicModelObjectVisible_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void setSubEntityVisible_EVString_IntVector_ev_bool(long pNativeObject, String name, long subEntityVector, boolean visible);
	/**
	 * 设置子部件的可见性
	 * @param name 动态目标名称
	 * @param subEntityVector 子部件索引集合
	 * @param visible 可见性
	 */
	public void setSubEntityVisible(String name, com.earthview.world.core.IntVector subEntityVector, boolean visible)
	{
		String nameParamValue = name;
		long subEntityVectorParamValue = subEntityVector.nativeObject.pointer;
		boolean visibleParamValue = visible;
		setSubEntityVisible_EVString_IntVector_ev_bool(this.nativeObject.pointer, nameParamValue, subEntityVectorParamValue, visibleParamValue);
	}
	native private boolean getSubEntityVisible_EVString_ev_int32(long pNativeObject, String name, int subEntityIndex);
	/**
	 * 获取子部件的可见性
	 * @param name 动态目标名称
	 * @param subEntityIndex 子部件索引
	 * @return 可见性
	 */
	public boolean getSubEntityVisible(String name, int subEntityIndex)
	{
		String nameParamValue = name;
		int subEntityIndexParamValue = subEntityIndex;
		boolean returnValue = getSubEntityVisible_EVString_ev_int32(this.nativeObject.pointer, nameParamValue, subEntityIndexParamValue);
		return returnValue;
	}
	native private void setSubEntityAllParticleVisible_EVString_IntVector_ev_bool(long pNativeObject, String name, long subEnetityVector, boolean visible);
	/**
	 * 设置子部件绑定特效的可见性
	 * @param name 动态目标名称
	 * @param subEntityVector 子部件索引集合
	 * @param visible 可见性
	 */
	public void setSubEntityAllParticleVisible(String name, com.earthview.world.core.IntVector subEnetityVector, boolean visible)
	{
		String nameParamValue = name;
		long subEnetityVectorParamValue = subEnetityVector.nativeObject.pointer;
		boolean visibleParamValue = visible;
		setSubEntityAllParticleVisible_EVString_IntVector_ev_bool(this.nativeObject.pointer, nameParamValue, subEnetityVectorParamValue, visibleParamValue);
	}
	native private void setSubEntityAllRibbonTrailVisible_EVString_IntVector_ev_bool(long pNativeObject, String name, long subEnetityVector, boolean visible);
	/**
	 * 设置子部件绑定飘带的可见性
	 * @param name 动态目标名称
	 * @param subEntityVector 子部件索引集合
	 * @param visible 可见性
	 */
	public void setSubEntityAllRibbonTrailVisible(String name, com.earthview.world.core.IntVector subEnetityVector, boolean visible)
	{
		String nameParamValue = name;
		long subEnetityVectorParamValue = subEnetityVector.nativeObject.pointer;
		boolean visibleParamValue = visible;
		setSubEntityAllRibbonTrailVisible_EVString_IntVector_ev_bool(this.nativeObject.pointer, nameParamValue, subEnetityVectorParamValue, visibleParamValue);
	}
	native private void setSubEntityParticleVisible_EVString_ev_int32_EVString_ev_bool(long pNativeObject, String name, int subEntityIndex, String particleAliasName, boolean visible);
	/**
	 * 设置子部件绑定特效的可见性
	 * @param name 动态目标名称
	 * @param subEntityIndex 子部件索引集合
	 * @param particleAliasName 特效别名
	 * @param visible 可见性
	 */
	public void setSubEntityParticleVisible(String name, int subEntityIndex, String particleAliasName, boolean visible)
	{
		String nameParamValue = name;
		int subEntityIndexParamValue = subEntityIndex;
		String particleAliasNameParamValue = particleAliasName;
		boolean visibleParamValue = visible;
		setSubEntityParticleVisible_EVString_ev_int32_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, subEntityIndexParamValue, particleAliasNameParamValue, visibleParamValue);
	}
	native private boolean getSubEntityParticleVisible_EVString_ev_int32_EVString(long pNativeObject, String name, int subEntityIndex, String particleAliasName);
	/**
	 * 获取子部件绑定特效的可见性
	 * @param name 动态目标名称
	 * @param subEntityIndex 子部件索引集合
	 * @param particleAliasName 特效别名
	 * @return 可见性
	 */
	public boolean getSubEntityParticleVisible(String name, int subEntityIndex, String particleAliasName)
	{
		String nameParamValue = name;
		int subEntityIndexParamValue = subEntityIndex;
		String particleAliasNameParamValue = particleAliasName;
		boolean returnValue = getSubEntityParticleVisible_EVString_ev_int32_EVString(this.nativeObject.pointer, nameParamValue, subEntityIndexParamValue, particleAliasNameParamValue);
		return returnValue;
	}
	native private void setSubEntityAllRibbonTrailVisible_EVString_ev_int32_EVString_ev_bool(long pNativeObject, String name, int subEntityIndex, String ribbonTrailName, boolean visible);
	/**
	 * 设置子部件绑定飘带的可见性
	 * @param name 动态目标名称
	 * @param subEntityIndex 子部件索引集合
	 * @param ribbonTrailName 飘带名称
	 * @param visible 可见性
	 */
	public void setSubEntityAllRibbonTrailVisible(String name, int subEntityIndex, String ribbonTrailName, boolean visible)
	{
		String nameParamValue = name;
		int subEntityIndexParamValue = subEntityIndex;
		String ribbonTrailNameParamValue = ribbonTrailName;
		boolean visibleParamValue = visible;
		setSubEntityAllRibbonTrailVisible_EVString_ev_int32_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, subEntityIndexParamValue, ribbonTrailNameParamValue, visibleParamValue);
	}
	native private void setSubEntityRibbonTrailVisible_EVString_ev_int32_EVString_ev_bool(long pNativeObject, String name, int subEntityIndex, String ribbonTrailName, boolean visible);
	/**
	 * 设置子部件绑定飘带的可见性
	 * @param name 动态目标名称
	 * @param subEntityIndex 子部件索引集合
	 * @param ribbonTrailName 飘带名称
	 * @param visible 可见性
	 */
	public void setSubEntityRibbonTrailVisible(String name, int subEntityIndex, String ribbonTrailName, boolean visible)
	{
		String nameParamValue = name;
		int subEntityIndexParamValue = subEntityIndex;
		String ribbonTrailNameParamValue = ribbonTrailName;
		boolean visibleParamValue = visible;
		setSubEntityRibbonTrailVisible_EVString_ev_int32_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, subEntityIndexParamValue, ribbonTrailNameParamValue, visibleParamValue);
	}
	native private boolean getSubEntityRibbonTrailVisible_EVString_ev_int32_EVString(long pNativeObject, String name, int subEntityIndex, String ribbonTrailName);
	/**
	 * 获取子部件绑定飘带的可见性
	 * @param name 动态目标名称
	 * @param subEntityIndex 子部件索引集合
	 * @param ribbonTrailName 飘带名称
	 * @return 可见性
	 */
	public boolean getSubEntityRibbonTrailVisible(String name, int subEntityIndex, String ribbonTrailName)
	{
		String nameParamValue = name;
		int subEntityIndexParamValue = subEntityIndex;
		String ribbonTrailNameParamValue = ribbonTrailName;
		boolean returnValue = getSubEntityRibbonTrailVisible_EVString_ev_int32_EVString(this.nativeObject.pointer, nameParamValue, subEntityIndexParamValue, ribbonTrailNameParamValue);
		return returnValue;
	}
	native private long getSubEntityBindedRibbonTrailObjectMap_EVString_ev_int32(long pNativeObject, String name, int subEntityIndex);
	/**
	 * 获取子部件绑定的飘带对象
	 * @param name 动态目标名称
	 * @param subEntityIndex 子部件索引
	 * @return 飘带对象
	 */
	public com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap getSubEntityBindedRibbonTrailObjectMap(String name, int subEntityIndex)
	{
		String nameParamValue = name;
		int subEntityIndexParamValue = subEntityIndex;
		long returnValue = getSubEntityBindedRibbonTrailObjectMap_EVString_ev_int32(this.nativeObject.pointer, nameParamValue, subEntityIndexParamValue);
		com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "RibbonTrailObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "RibbonTrailObjectMap");
		}
		return __returnValue;
	}
	native private long getSubEntityBindedParticleObjectMap_EVString_ev_int32(long pNativeObject, String name, int subEntityIndex);
	/**
	 * 获取子部件绑定的粒子特效对象
	 * @param name 动态目标名称
	 * @param subEntityIndex 子部件索引集合
	 * @return 粒子特效对象
	 */
	public com.earthview.world.spatial3d.modelmanager.EffectObjectMap getSubEntityBindedParticleObjectMap(String name, int subEntityIndex)
	{
		String nameParamValue = name;
		int subEntityIndexParamValue = subEntityIndex;
		long returnValue = getSubEntityBindedParticleObjectMap_EVString_ev_int32(this.nativeObject.pointer, nameParamValue, subEntityIndexParamValue);
		com.earthview.world.spatial3d.modelmanager.EffectObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.EffectObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.EffectObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		}
		return __returnValue;
	}
	native private int getSubEntityCount_EVString(long pNativeObject, String name);
	/**
	 * 获取子部件数目
	 * @param name 动态目标名称
	 * @return 子部件数目
	 */
	public int getSubEntityCount(String name)
	{
		String nameParamValue = name;
		int returnValue = getSubEntityCount_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private long getBindedParticleSubEntityIndexVector_EVString(long pNativeObject, String name);
	/**
	 * 获取绑定特效的子部件索引集合
	 * @param name 动态目标名称
	 * @return 绑定特效的子部件索引集合
	 */
	public com.earthview.world.core.IntVector getBindedParticleSubEntityIndexVector(String name)
	{
		String nameParamValue = name;
		long returnValue = getBindedParticleSubEntityIndexVector_EVString(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.core.IntVector __returnValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.IntVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntVector");
		}
		return __returnValue;
	}
	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置管理器的可见性
	 * @param visible 可见性
	 */
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private boolean getVisible_void(long pNativeObject);
	/**
	 * 获取管理器的可见性
	 * @return 可见性
	 */
	public boolean getVisible()
	{
		boolean returnValue = getVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setGlobeNodeTrackCurrentFrameTime_EVString_ev_real64(long pNativeObject, String name, double curKeyFrameTime);
	/**
	 * 设置轨迹动画当前帧的时间
	 * @param name 动态目标名称
	 * @param curKeyFrameTime 当前关键帧时间
	 */
	public void setGlobeNodeTrackCurrentFrameTime(String name, double curKeyFrameTime)
	{
		String nameParamValue = name;
		double curKeyFrameTimeParamValue = curKeyFrameTime;
		setGlobeNodeTrackCurrentFrameTime_EVString_ev_real64(this.nativeObject.pointer, nameParamValue, curKeyFrameTimeParamValue);
	}
	native private double getGlobeNodeTrackCurrentFrameTime_EVString(long pNativeObject, String name);
	/**
	 * 获取轨迹动画当前帧的时间
	 * @param name 动态目标名称
	 * @return 当前关键帧时间
	 */
	public double getGlobeNodeTrackCurrentFrameTime(String name)
	{
		String nameParamValue = name;
		double returnValue = getGlobeNodeTrackCurrentFrameTime_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void setCameraNodeTrackCurrentFrameTime_EVString_ev_real64(long pNativeObject, String name, double curKeyFrameTime);
	/**
	 * 设置相机动画当前帧的时间
	 * @param name 动态目标名称
	 * @param curKeyFrameTime 当前关键帧时间
	 */
	public void setCameraNodeTrackCurrentFrameTime(String name, double curKeyFrameTime)
	{
		String nameParamValue = name;
		double curKeyFrameTimeParamValue = curKeyFrameTime;
		setCameraNodeTrackCurrentFrameTime_EVString_ev_real64(this.nativeObject.pointer, nameParamValue, curKeyFrameTimeParamValue);
	}
	native private double getCameraNodeTrackCurrentFrameTime_EVString(long pNativeObject, String name);
	/**
	 * 获取相机动画当前帧的时间
	 * @param name 动态目标名称
	 * @return 当前关键帧时间
	 */
	public double getCameraNodeTrackCurrentFrameTime(String name)
	{
		String nameParamValue = name;
		double returnValue = getCameraNodeTrackCurrentFrameTime_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void startAllGlobeNodeTrack_void(long pNativeObject);
	/**
	 * 开始所有动态目标的轨迹动画
	 */
	public void startAllGlobeNodeTrack()
	{
		startAllGlobeNodeTrack_void(this.nativeObject.pointer);
	}
	native private void stopAllGlobeNodeTrack_void(long pNativeObject);
	/**
	 * 停止所有动态目标的轨迹动画
	 */
	public void stopAllGlobeNodeTrack()
	{
		stopAllGlobeNodeTrack_void(this.nativeObject.pointer);
	}
	native private void startGlobeNodeTrack_EVString(long pNativeObject, String name);
	/**
	 * 开始指定名称动态目标的轨迹动画
	 * @param name 动态目标名称
	 */
	public void startGlobeNodeTrack(String name)
	{
		String nameParamValue = name;
		startGlobeNodeTrack_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void stopGlobeNodeTrack_EVString(long pNativeObject, String name);
	/**
	 * 停止指定名称动态目标的轨迹动画
	 * @param name 动态目标名称
	 */
	public void stopGlobeNodeTrack(String name)
	{
		String nameParamValue = name;
		stopGlobeNodeTrack_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void pauseGlobeNodeTrack_EVString(long pNativeObject, String name);
	/**
	 * 暂停指定名称动态目标的轨迹动画
	 * @param name 动态目标名称
	 */
	public void pauseGlobeNodeTrack(String name)
	{
		String nameParamValue = name;
		pauseGlobeNodeTrack_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void continueGlobeNodeTrack_EVString(long pNativeObject, String name);
	/**
	 * 继续指定名称动态目标的轨迹动画
	 * @param name 动态目标名称
	 */
	public void continueGlobeNodeTrack(String name)
	{
		String nameParamValue = name;
		continueGlobeNodeTrack_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void startCameraNodeTrack_EVString(long pNativeObject, String name);
	/**
	 * 开始指定名称动态目标的相机动画
	 * @param name 动态目标名称
	 */
	public void startCameraNodeTrack(String name)
	{
		String nameParamValue = name;
		startCameraNodeTrack_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void stopCameraNodeTrack_void(long pNativeObject);
	/**
	 * 停止相机动画
	 */
	public void stopCameraNodeTrack()
	{
		stopCameraNodeTrack_void(this.nativeObject.pointer);
	}
	native private void pauseCameraNodeTrack_void(long pNativeObject);
	/**
	 * 暂停相机动画
	 */
	public void pauseCameraNodeTrack()
	{
		pauseCameraNodeTrack_void(this.nativeObject.pointer);
	}
	native private void continueCameraNodeTrack_void(long pNativeObject);
	/**
	 * 继续相机动画
	 */
	public void continueCameraNodeTrack()
	{
		continueCameraNodeTrack_void(this.nativeObject.pointer);
	}
	native private void setGlobeNodeTrackIsLoop_EVString_ev_bool(long pNativeObject, String name, boolean loop);
	/**
	 * 设置轨迹动画是否循环播放
	 * @param name 动态目标名称
	 * @param loop 是否循环
	 */
	public void setGlobeNodeTrackIsLoop(String name, boolean loop)
	{
		String nameParamValue = name;
		boolean loopParamValue = loop;
		setGlobeNodeTrackIsLoop_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, loopParamValue);
	}
	native private boolean getGlobeNodeTrackIsLoop_EVString(long pNativeObject, String name);
	/**
	 * 获取轨迹动画是否循环播放
	 * @param name 动态目标名称
	 * @return 是否循环
	 */
	public boolean getGlobeNodeTrackIsLoop(String name)
	{
		String nameParamValue = name;
		boolean returnValue = getGlobeNodeTrackIsLoop_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	protected  void setGlobeNodeTrackAltitudeMode_EVString_AltitudeMode_callback(String name, int altitudeMode)
	{
		String nameParamValue = name;
		com.earthview.world.spatial3d.Flyparam.AltitudeMode altitudeModeParamValue = com.earthview.world.spatial3d.Flyparam.AltitudeMode.toEnum(altitudeMode);
		setGlobeNodeTrackAltitudeMode(nameParamValue, altitudeModeParamValue);
	}

	native private void setGlobeNodeTrackAltitudeMode_EVString_AltitudeMode(long pNativeObject, String name, int altitudeMode);
	/**
	 * 设置轨迹动画高度模式
	 * @param name 动态目标名称
	 * @param altitudeMode 高度模式
	 */
	public void setGlobeNodeTrackAltitudeMode(String name, com.earthview.world.spatial3d.Flyparam.AltitudeMode altitudeMode)
	{
		String nameParamValue = name;
		int altitudeModeParamValue = altitudeMode.getValue();
		setGlobeNodeTrackAltitudeMode_EVString_AltitudeMode(this.nativeObject.pointer, nameParamValue, altitudeModeParamValue);
	}
	native private void setGlobeNodeTrackAltitudeMode_EVString_AltitudeMode_NoVirtual(long pNativeObject, String name, int altitudeMode);
	protected void setGlobeNodeTrackAltitudeMode_NoVirtual(String name, com.earthview.world.spatial3d.Flyparam.AltitudeMode altitudeMode)
	{
		String nameParamValue = name;
		int altitudeModeParamValue = altitudeMode.getValue();
		setGlobeNodeTrackAltitudeMode_EVString_AltitudeMode_NoVirtual(this.nativeObject.pointer, nameParamValue, altitudeModeParamValue);
	}

	protected  int getGlobeNodeTrackAltitudeMode_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.spatial3d.Flyparam.AltitudeMode returnValue = getGlobeNodeTrackAltitudeMode(nameParamValue);
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getGlobeNodeTrackAltitudeMode_EVString(long pNativeObject, String name);
	/**
	 * 获取轨迹动画高度模式
	 * @param name 动态目标名称
	 * @return 高度模式
	 */
	public com.earthview.world.spatial3d.Flyparam.AltitudeMode getGlobeNodeTrackAltitudeMode(String name)
	{
		String nameParamValue = name;
		int returnValue = getGlobeNodeTrackAltitudeMode_EVString(this.nativeObject.pointer, nameParamValue);
		return com.earthview.world.spatial3d.Flyparam.AltitudeMode.toEnum(returnValue);
	}
	native private int getGlobeNodeTrackAltitudeMode_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.spatial3d.Flyparam.AltitudeMode getGlobeNodeTrackAltitudeMode_NoVirtual(String name)
	{
		String nameParamValue = name;
		int returnValue = getGlobeNodeTrackAltitudeMode_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		return com.earthview.world.spatial3d.Flyparam.AltitudeMode.toEnum(returnValue);
	}

	native private void setCameraNodeTrackIsLoop_EVString_ev_bool(long pNativeObject, String name, boolean loop);
	/**
	 * 设置相机动画是否循环播放
	 * @param name 动态目标名称
	 * @param loop 是否循环
	 */
	public void setCameraNodeTrackIsLoop(String name, boolean loop)
	{
		String nameParamValue = name;
		boolean loopParamValue = loop;
		setCameraNodeTrackIsLoop_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, loopParamValue);
	}
	native private boolean getCameraNodeTrackIsLoop_EVString(long pNativeObject, String name);
	/**
	 * 获取相机动画是否循环播放
	 * @param name 动态目标名称
	 * @return 是否循环
	 */
	public boolean getCameraNodeTrackIsLoop(String name)
	{
		String nameParamValue = name;
		boolean returnValue = getCameraNodeTrackIsLoop_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void setModelScale_EVString_CVector3(long pNativeObject, String name, long scale);
	/**
	 * 设置模型显示比例
	 * @param name 动态目标名称
	 * @param scale 模型显示比例
	 */
	public void setModelScale(String name, com.earthview.world.spatial.math.Vector3 scale)
	{
		String nameParamValue = name;
		long scaleParamValue = scale.nativeObject.pointer;
		setModelScale_EVString_CVector3(this.nativeObject.pointer, nameParamValue, scaleParamValue);
	}
	native private long getModelScale_EVString(long pNativeObject, String name);
	/**
	 * 获取模型显示比例
	 * @param name 动态目标名称
	 * @return 模型显示比例
	 */
	public com.earthview.world.spatial.math.Vector3 getModelScale(String name)
	{
		String nameParamValue = name;
		long returnValue = getModelScale_EVString(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setModelRotateDegree_EVString_CVector3(long pNativeObject, String name, long rotateDegree);
	/**
	 * 设置模型旋转角度
	 * @param name 动态目标名称
	 * @param rotateDegree 旋转角度
	 */
	public void setModelRotateDegree(String name, com.earthview.world.spatial.math.Vector3 rotateDegree)
	{
		String nameParamValue = name;
		long rotateDegreeParamValue = rotateDegree.nativeObject.pointer;
		setModelRotateDegree_EVString_CVector3(this.nativeObject.pointer, nameParamValue, rotateDegreeParamValue);
	}
	native private long getModelRotateDegree_EVString(long pNativeObject, String name);
	/**
	 * 获取模型旋转角度
	 * @param name 动态目标名称
	 * @return 旋转角度
	 */
	public com.earthview.world.spatial.math.Vector3 getModelRotateDegree(String name)
	{
		String nameParamValue = name;
		long returnValue = getModelRotateDegree_EVString(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setModelLocalOffsetVector_EVString_CVector3(long pNativeObject, String name, long offsetVector);
	/**
	 * 设置模型局部坐标系偏移量
	 * @param name 动态目标名称
	 * @param offsetVector 局部坐标系偏移量
	 */
	public void setModelLocalOffsetVector(String name, com.earthview.world.spatial.math.Vector3 offsetVector)
	{
		String nameParamValue = name;
		long offsetVectorParamValue = offsetVector.nativeObject.pointer;
		setModelLocalOffsetVector_EVString_CVector3(this.nativeObject.pointer, nameParamValue, offsetVectorParamValue);
	}
	native private long getModelLocalOffsetVector_EVString(long pNativeObject, String name);
	/**
	 * 获取模型局部坐标系偏移量
	 * @param name 动态目标名称
	 * @return 局部坐标系偏移量
	 */
	public com.earthview.world.spatial.math.Vector3 getModelLocalOffsetVector(String name)
	{
		String nameParamValue = name;
		long returnValue = getModelLocalOffsetVector_EVString(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setFlySpeed_EVString_ev_real64(long pNativeObject, String name, double speed);
	/**
	 * 设置轨迹动画速度
	 * @param name 动态目标名称
	 * @param speed 轨迹动画速度
	 */
	public void setFlySpeed(String name, double speed)
	{
		String nameParamValue = name;
		double speedParamValue = speed;
		setFlySpeed_EVString_ev_real64(this.nativeObject.pointer, nameParamValue, speedParamValue);
	}
	native private double getFlySpeed_EVString(long pNativeObject, String name);
	/**
	 * 获取轨迹动画速度
	 * @param name 动态目标名称
	 * @return 轨迹动画速度
	 */
	public double getFlySpeed(String name)
	{
		String nameParamValue = name;
		double returnValue = getFlySpeed_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void setInterpolate_EVString_ev_bool(long pNativeObject, String name, boolean interpolate);
	/**
	 * 设置轨迹动画是否进行插值
	 * @param name 动态目标名称
	 * @param interpolate 是否插值
	 */
	public void setInterpolate(String name, boolean interpolate)
	{
		String nameParamValue = name;
		boolean interpolateParamValue = interpolate;
		setInterpolate_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, interpolateParamValue);
	}
	native private boolean getInterpolate_EVString(long pNativeObject, String name);
	/**
	 * 获取轨迹动画是否进行插值
	 * @param name 动态目标名称
	 * @return 是否插值
	 */
	public boolean getInterpolate(String name)
	{
		String nameParamValue = name;
		boolean returnValue = getInterpolate_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void setReflectable_EVString_ev_bool(long pNativeObject, String name, boolean enable);
	/**
	 * 设置是否启用海洋反射效果
	 * @param name 动态目标名称
	 * @param enable 是否启用海洋反射
	 */
	public void setReflectable(String name, boolean enable)
	{
		String nameParamValue = name;
		boolean enableParamValue = enable;
		setReflectable_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, enableParamValue);
	}
	native private boolean getReflectable_EVString(long pNativeObject, String name);
	/**
	 * 获取是否启用海洋反射效果
	 * @param name 动态目标名称
	 * @return 是否启用海洋反射
	 */
	public boolean getReflectable(String name)
	{
		String nameParamValue = name;
		boolean returnValue = getReflectable_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void setRefractable_EVString_ev_bool(long pNativeObject, String name, boolean enable);
	/**
	 * 设置是否启用海洋折射效果
	 * @param name 动态目标名称
	 * @param enable 是否启用海洋折射
	 */
	public void setRefractable(String name, boolean enable)
	{
		String nameParamValue = name;
		boolean enableParamValue = enable;
		setRefractable_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, enableParamValue);
	}
	native private boolean getRefractable_EVString(long pNativeObject, String name);
	/**
	 * 获取是否启用海洋折射效果
	 * @param name 动态目标名称
	 * @return 是否启用海洋折射
	 */
	public boolean getRefractable(String name)
	{
		String nameParamValue = name;
		boolean returnValue = getRefractable_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private long getDynamicModelObjectIterator_void(long pNativeObject);
	/**
	 * 获取动态目标对象遍历对象
	 * @return 获取动态目标对象遍历对象
	 */
	public com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager.DynamicModelObjectIterator getDynamicModelObjectIterator()
	{
		long returnValue = getDynamicModelObjectIterator_void(this.nativeObject.pointer);
		com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager.DynamicModelObjectIterator __returnValue = new com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager.DynamicModelObjectIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CDynamicModelObjectIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager.DynamicModelObjectIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDynamicModelObjectIterator");
		}
		return __returnValue;
	}
	native private void setDynamicGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener(long pNativeObject, long ref_globeNodeTrackAnimationListener);
	/**
	 * 设置轨迹动画监听对象
	 * @param ref_globeNodeTrackAnimationListener 轨迹动画监听,该参数对象的生命周期要保持大于本对象的生命周期
	 */
	public void setDynamicGlobeNodeTrackAnimationListener(com.earthview.industryengine.dynamicmodellibrary.DynamicGlobeNodeTrackAnimationListener ref_globeNodeTrackAnimationListener)
	{
		long ref_globeNodeTrackAnimationListenerParamValue = (ref_globeNodeTrackAnimationListener == null ? 0L : ref_globeNodeTrackAnimationListener.nativeObject.pointer);
		setDynamicGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener(this.nativeObject.pointer, ref_globeNodeTrackAnimationListenerParamValue);
	}
	native private long getDynamicGlobeNodeTrackAnimationListener_void(long pNativeObject);
	/**
	 * 获取轨迹动画监听对象
	 * @return 轨迹动画监听
	 */
	public com.earthview.industryengine.dynamicmodellibrary.DynamicGlobeNodeTrackAnimationListener getDynamicGlobeNodeTrackAnimationListener()
	{
		long returnValue = getDynamicGlobeNodeTrackAnimationListener_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.dynamicmodellibrary.DynamicGlobeNodeTrackAnimationListener __returnValue = new com.earthview.industryengine.dynamicmodellibrary.DynamicGlobeNodeTrackAnimationListener(CreatedWhenConstruct.CWC_NotToCreate, "CDynamicGlobeNodeTrackAnimationListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicGlobeNodeTrackAnimationListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDynamicGlobeNodeTrackAnimationListener");
		}
		return __returnValue;
	}
	native private double getAnimationsetLength_void(long pNativeObject);
	/**
	 * 获取动画集长度
	 * @return 动画集长度
	 */
	public double getAnimationsetLength()
	{
		double returnValue = getAnimationsetLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAnimationsetLength_Real(long pNativeObject, double length);
	/**
	 * 设置动画集长度
	 * @param length 动画集长度
	 */
	public void setAnimationsetLength(double length)
	{
		double lengthParamValue = length;
		setAnimationsetLength_Real(this.nativeObject.pointer, lengthParamValue);
	}
	native private void startAnimationset_void(long pNativeObject);
	/**
	 * 开始播放动画集
	 */
	public void startAnimationset()
	{
		startAnimationset_void(this.nativeObject.pointer);
	}
	native private void stopAnimationset_void(long pNativeObject);
	/**
	 * 停止播放动画集
	 */
	public void stopAnimationset()
	{
		stopAnimationset_void(this.nativeObject.pointer);
	}
	native private void pauseAnimationset_void(long pNativeObject);
	/**
	 * 暂停播放动画集
	 */
	public void pauseAnimationset()
	{
		pauseAnimationset_void(this.nativeObject.pointer);
	}
	native private void continueAnimationset_void(long pNativeObject);
	/**
	 * 继续播放动画集
	 */
	public void continueAnimationset()
	{
		continueAnimationset_void(this.nativeObject.pointer);
	}
	native private void setAnimationsetTime_ev_real64(long pNativeObject, double curKeyFrameTime);
	/**
	 * 设置动画集当前帧的时间
	 * @param curKeyFrameTime 当前关键帧时间
	 */
	public void setAnimationsetTime(double curKeyFrameTime)
	{
		double curKeyFrameTimeParamValue = curKeyFrameTime;
		setAnimationsetTime_ev_real64(this.nativeObject.pointer, curKeyFrameTimeParamValue);
	}
	native private double getAnimationsetTime_void(long pNativeObject);
	/**
	 * 获取动画集当前帧的时间
	 * @return 当前关键帧时间
	 */
	public double getAnimationsetTime()
	{
		double returnValue = getAnimationsetTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAnimationsetTimeRatio_Real(long pNativeObject, double timeRatio);
	/**
	 * 设置动画集播放速率
	 * @param timeRatio 动画集播放速率
	 */
	public void setAnimationsetTimeRatio(double timeRatio)
	{
		double timeRatioParamValue = timeRatio;
		setAnimationsetTimeRatio_Real(this.nativeObject.pointer, timeRatioParamValue);
	}
	native private double getAnimationsetTimeRatio_void(long pNativeObject);
	/**
	 * 获取动画集播放速率
	 * @return 动画集播放速率
	 */
	public double getAnimationsetTimeRatio()
	{
		double returnValue = getAnimationsetTimeRatio_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void addEvent_CDynamicObjectEvent(long pNativeObject, long ref_dynamicObjectEvent);
	/**
	 * 添加事件
	 * @param ref_dynamicObjectEvent 事件,该参数对象的生命周期要保持大于本对象的生命周期
	 */
	public void addEvent(com.earthview.industryengine.dynamicmodellibrary.DynamicObjectEvent ref_dynamicObjectEvent)
	{
		long ref_dynamicObjectEventParamValue = (ref_dynamicObjectEvent == null ? 0L : ref_dynamicObjectEvent.nativeObject.pointer);
		addEvent_CDynamicObjectEvent(this.nativeObject.pointer, ref_dynamicObjectEventParamValue);
	}
	native private void removeEvent_CDynamicObjectEvent(long pNativeObject, long dynamicObjectEvent);
	/**
	 * 删除事件
	 * @param dynamicObjectEvent 事件
	 */
	public void removeEvent(com.earthview.industryengine.dynamicmodellibrary.DynamicObjectEvent dynamicObjectEvent)
	{
		long dynamicObjectEventParamValue = (dynamicObjectEvent == null ? 0L : dynamicObjectEvent.nativeObject.pointer);
		removeEvent_CDynamicObjectEvent(this.nativeObject.pointer, dynamicObjectEventParamValue);
	}
	native private void addShadeScutcheon_EVString(long pNativeObject, String name);
	/**
	 * 考虑相应动目标对象中标牌的遮蔽关系
	 * @param name 动目标名称
	 */
	public void addShadeScutcheon(String name)
	{
		String nameParamValue = name;
		addShadeScutcheon_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void removeShadeScutcheon_EVString(long pNativeObject, String name);
	/**
	 * 不在考虑相应动目标对象中标牌的遮蔽关系
	 * @param name 动目标名称
	 */
	public void removeShadeScutcheon(String name)
	{
		String nameParamValue = name;
		removeShadeScutcheon_EVString(this.nativeObject.pointer, nameParamValue);
	}
	protected  void removeAllTrackTrailPoint_EVString_callback(String name)
	{
		String nameParamValue = name;
		removeAllTrackTrailPoint(nameParamValue);
	}

	native private void removeAllTrackTrailPoint_EVString(long pNativeObject, String name);
	/**
	 * 删除指定动目标的所有航迹点
	 * @param name 动目标名称
	 */
	public void removeAllTrackTrailPoint(String name)
	{
		String nameParamValue = name;
		removeAllTrackTrailPoint_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void removeAllTrackTrailPoint_EVString_NoVirtual(long pNativeObject, String name);
	protected void removeAllTrackTrailPoint_NoVirtual(String name)
	{
		String nameParamValue = name;
		removeAllTrackTrailPoint_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	protected  void addTrackTrailPoint_EVString_CCoordinate_callback(String name, long point)
	{
		String nameParamValue = name;
		com.earthview.world.spatial.geometry.Coordinate pointParamValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate);
		pointParamValue.setDelegate(true);
		pointParamValue.setInstancePointer(new InstancePointer(point));
		IClassFactory pointParamValueClassFactory = GlobalClassFactoryMap.get(pointParamValue.getCppInstanceTypeName());
		if (pointParamValueClassFactory != null)
		{
			pointParamValue.setDelegate(true);
			pointParamValue = (com.earthview.world.spatial.geometry.Coordinate)pointParamValueClassFactory.create();
			pointParamValue.setDelegate(true);
			pointParamValue.setInstancePointer(new InstancePointer(point));
		}
		addTrackTrailPoint(nameParamValue, pointParamValue);
	}

	native private void addTrackTrailPoint_EVString_CCoordinate(long pNativeObject, String name, long point);
	/**
	 * 为指定动目标的增加航迹点
	 * @param name 动目标名称
	 * @param point 要添加的航迹点
	 */
	public void addTrackTrailPoint(String name, com.earthview.world.spatial.geometry.Coordinate point)
	{
		String nameParamValue = name;
		long pointParamValue = point.nativeObject.pointer;
		addTrackTrailPoint_EVString_CCoordinate(this.nativeObject.pointer, nameParamValue, pointParamValue);
	}
	native private void addTrackTrailPoint_EVString_CCoordinate_NoVirtual(long pNativeObject, String name, long point);
	protected void addTrackTrailPoint_NoVirtual(String name, com.earthview.world.spatial.geometry.Coordinate point)
	{
		String nameParamValue = name;
		long pointParamValue = point.nativeObject.pointer;
		addTrackTrailPoint_EVString_CCoordinate_NoVirtual(this.nativeObject.pointer, nameParamValue, pointParamValue);
	}

	protected  void refreshTrackTrail_void_callback()
	{
		refreshTrackTrail();
	}

	native private void refreshTrackTrail_void(long pNativeObject);
	/**
	 * 刷新航迹
	 */
	public void refreshTrackTrail()
	{
		refreshTrackTrail_void(this.nativeObject.pointer);
	}
	native private void refreshTrackTrail_void_NoVirtual(long pNativeObject);
	protected void refreshTrackTrail_NoVirtual()
	{
		refreshTrackTrail_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setNeedUpdate_ev_bool_callback(boolean needUpdate)
	{
		boolean needUpdateParamValue = needUpdate;
		setNeedUpdate(needUpdateParamValue);
	}

	native private void setNeedUpdate_ev_bool(long pNativeObject, boolean needUpdate);
	/**
	 * 设置是否需要刷新
	 * @param needUpdate 是否需要刷新
	 */
	public void setNeedUpdate(boolean needUpdate)
	{
		boolean needUpdateParamValue = needUpdate;
		setNeedUpdate_ev_bool(this.nativeObject.pointer, needUpdateParamValue);
	}
	native private void setNeedUpdate_ev_bool_NoVirtual(long pNativeObject, boolean needUpdate);
	protected void setNeedUpdate_NoVirtual(boolean needUpdate)
	{
		boolean needUpdateParamValue = needUpdate;
		setNeedUpdate_ev_bool_NoVirtual(this.nativeObject.pointer, needUpdateParamValue);
	}

	protected  boolean getNeedUpdate_void_callback()
	{
		boolean returnValue = getNeedUpdate();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getNeedUpdate_void(long pNativeObject);
	/**
	 * 获取是否需要刷新
	 * @return 是否需要刷新
	 */
	public boolean getNeedUpdate()
	{
		boolean returnValue = getNeedUpdate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getNeedUpdate_void_NoVirtual(long pNativeObject);
	protected boolean getNeedUpdate_NoVirtual()
	{
		boolean returnValue = getNeedUpdate_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getDynamicModelObjectsLocker_void(long pNativeObject);
	public com.earthview.world.core.ReadWriteLock getDynamicModelObjectsLocker()
	{
		long returnValue = getDynamicModelObjectsLocker_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.ReadWriteLock __returnValue = new com.earthview.world.core.ReadWriteLock(CreatedWhenConstruct.CWC_NotToCreate, "CReadWriteLock");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.ReadWriteLock)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CReadWriteLock");
		}
		return __returnValue;
	}
	public DynamicModelObjectManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DynamicModelObjectManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setGlobeNodeTrackAltitudeMode_EVString_AltitudeMode(long pNativeObject, String method);
	native protected void register_getGlobeNodeTrackAltitudeMode_EVString(long pNativeObject, String method);
	native protected void register_removeAllTrackTrailPoint_EVString(long pNativeObject, String method);
	native protected void register_addTrackTrailPoint_EVString_CCoordinate(long pNativeObject, String method);
	native protected void register_refreshTrackTrail_void(long pNativeObject, String method);
	native protected void register_setNeedUpdate_ev_bool(long pNativeObject, String method);
	native protected void register_getNeedUpdate_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setGlobeNodeTrackAltitudeMode_EVString_AltitudeMode(this.nativeObject.pointer, "setGlobeNodeTrackAltitudeMode_EVString_AltitudeMode_callback");
			this.register_getGlobeNodeTrackAltitudeMode_EVString(this.nativeObject.pointer, "getGlobeNodeTrackAltitudeMode_EVString_callback");
			this.register_removeAllTrackTrailPoint_EVString(this.nativeObject.pointer, "removeAllTrackTrailPoint_EVString_callback");
			this.register_addTrackTrailPoint_EVString_CCoordinate(this.nativeObject.pointer, "addTrackTrailPoint_EVString_CCoordinate_callback");
			this.register_refreshTrackTrail_void(this.nativeObject.pointer, "refreshTrackTrail_void_callback");
			this.register_setNeedUpdate_ev_bool(this.nativeObject.pointer, "setNeedUpdate_ev_bool_callback");
			this.register_getNeedUpdate_void(this.nativeObject.pointer, "getNeedUpdate_void_callback");
		}
	}
	
	public static DynamicModelObjectManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DynamicModelObjectManager obj = null;
 		if(baseObj instanceof DynamicModelObjectManager)
		{
			obj = (DynamicModelObjectManager)baseObj;
		} else {
			obj = new DynamicModelObjectManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDynamicModelObjectManager");
			obj.increaseCast();
		}

		return obj;
	}
}
