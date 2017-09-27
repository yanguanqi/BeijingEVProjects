package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class InstanceManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstanceManager", new InstanceManagerClassFactory());
	}

	public enum InstancingTechnique implements INativeEnum<InstancingTechnique> {
		ShaderBased(InstancingTechniqueHelper.ENUM_VALUES[0]),
		TextureVTF(InstancingTechniqueHelper.ENUM_VALUES[1]),
		HWInstancingBasic(InstancingTechniqueHelper.ENUM_VALUES[2]),
		HWInstancingVTF(InstancingTechniqueHelper.ENUM_VALUES[3]),
		InstancingTechniquesCount(InstancingTechniqueHelper.ENUM_VALUES[4]);
		private int value;
		InstancingTechnique(int i) {
			this.value = i;
		}
		public InstancingTechnique getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final InstancingTechnique toEnum(int retval) {
			if(retval == ShaderBased.value){
				return ShaderBased;
			}
			else if(retval == TextureVTF.value){
				return TextureVTF;
			}
			else if(retval == HWInstancingBasic.value){
				return HWInstancingBasic;
			}
			else if(retval == HWInstancingVTF.value){
				return HWInstancingVTF;
			}
			else if(retval == InstancingTechniquesCount.value){
				return InstancingTechniquesCount;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class InstancingTechniqueHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	///Needs SM 3.0+, HW instancing support & VTF @See InstanceBatchHW_VTF
	public enum BatchSettingId implements INativeEnum<BatchSettingId> {
		CAST_SHADOWS(BatchSettingIdHelper.ENUM_VALUES[0]),
		SHOW_BOUNDINGBOX(BatchSettingIdHelper.ENUM_VALUES[1]),
		NUM_SETTINGS(BatchSettingIdHelper.ENUM_VALUES[2]);
		private int value;
		BatchSettingId(int i) {
			this.value = i;
		}
		public BatchSettingId getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final BatchSettingId toEnum(int retval) {
			if(retval == CAST_SHADOWS.value){
				return CAST_SHADOWS;
			}
			else if(retval == SHOW_BOUNDINGBOX.value){
				return SHOW_BOUNDINGBOX;
			}
			else if(retval == NUM_SETTINGS.value){
				return NUM_SETTINGS;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class BatchSettingIdHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	///	typedef vector<CInstanceBatch*>		InstanceBatchVec;	//vec[batchN] = Batch
	public static class InstanceBatchVec extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstanceManager::InstanceBatchVec", new InstanceBatchVecClassFactory());
		}

		native private void push_back_CInstanceBatch(long pNativeObject, long ref_t);
		/**
		 * 在容器最后添加元素
		 * @param t 元素值
		 */
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.InstanceBatch> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_CInstanceBatch(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		/**
		 * 删除容器最后元素
		 * @param  
		 */
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		/**
		 * 返回容器首个元素
		 * @param  
		 * @return 返回容器首个元素
		 */
		public NativeObjectPointer<com.earthview.world.graphic.InstanceBatch> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.InstanceBatch> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstanceBatch>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		/**
		 * 返回容器最后元素
		 * @param  
		 * @return 返回容器最后元素
		 */
		public NativeObjectPointer<com.earthview.world.graphic.InstanceBatch> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.InstanceBatch> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstanceBatch>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_CInstanceBatch(long pNativeObject, long pos, long ref_t);
		/**
		 * 容器中间位置插入元素
		 * @param pos 位置
		 * @param t 元素值
		 */
		public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.InstanceBatch> ref_t)
		{
			long posParamValue = pos;
			long ref_tParamValue = ref_t.nativeObject.pointer;
			insert_ev_uint32_CInstanceBatch(this.nativeObject.pointer, posParamValue, ref_tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		/**
		 * 删除容器中间位置元素
		 * @param pos 位置
		 */
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 返回容器是否为空
		 * @param  
		 * @return 容器为空返回true，否则false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		/**
		 * 重载[]操作符
		 * @param n 下标位置
		 * @return 返回下标对应的值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.InstanceBatch> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.InstanceBatch> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstanceBatch>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		/**
		 * 返回某位置的元素值
		 * @param n 位置
		 * @return 返回位置对应的值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.InstanceBatch> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.InstanceBatch> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstanceBatch>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回元素的数量大小
		 * @param  
		 * @return 返回元素的数量大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		/**
		 * 改变容器中元素数量大小
		 * @param newSize 改变的容器中元素数量大小
		 */
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		/**
		 * 改变容器中最小的元素容纳数量
		 * @param count 最小的元素容纳数量
		 */
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清空所有元素
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public InstanceBatchVec(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public InstanceBatchVec(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static InstanceBatchVec fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			InstanceBatchVec obj = null;
 			if(baseObj instanceof InstanceBatchVec)
			{
				obj = (InstanceBatchVec)baseObj;
			} else {
				obj = new InstanceBatchVec(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "InstanceBatchVec");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class InstanceBatchVecClassFactory implements IClassFactory {
		public BaseObject create()
		{
			InstanceBatchVec emptyInstance = new InstanceBatchVec(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///	typedef map<EVString, InstanceBatchVec>	InstanceBatchMap;	//map[materialName] = Vec
	public static class InstanceBatchMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstanceManager::InstanceBatchMap", new InstanceBatchMapClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public InstanceBatchMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("InstanceBatchMap", null);
		}

		native private boolean push_EVString_InstanceBatchVec(long pNativeObject, String key, long val);
		/**
		 * 增加动画集合元素
		 * @param key 键
		 * @param val 值
		 * @return 成功增加true，否则false
		 */
		public boolean push(String key, com.earthview.world.graphic.InstanceManager.InstanceBatchVec val)
		{
			String keyParamValue = key;
			long valParamValue = val.nativeObject.pointer;
			boolean returnValue = push_EVString_InstanceBatchVec(this.nativeObject.pointer, keyParamValue, valParamValue);
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
		public com.earthview.world.graphic.InstanceManager.InstanceBatchVec OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			com.earthview.world.graphic.InstanceManager.InstanceBatchVec __returnValue = new com.earthview.world.graphic.InstanceManager.InstanceBatchVec(CreatedWhenConstruct.CWC_NotToCreate, "InstanceBatchVec");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstanceManager.InstanceBatchVec)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "InstanceBatchVec");
			}
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		/**
		 * 获得键对应的值
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public com.earthview.world.graphic.InstanceManager.InstanceBatchVec get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			com.earthview.world.graphic.InstanceManager.InstanceBatchVec __returnValue = new com.earthview.world.graphic.InstanceManager.InstanceBatchVec(CreatedWhenConstruct.CWC_NotToCreate, "InstanceBatchVec");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstanceManager.InstanceBatchVec)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "InstanceBatchVec");
			}
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
		public InstanceBatchMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public InstanceBatchMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static InstanceBatchMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			InstanceBatchMap obj = null;
 			if(baseObj instanceof InstanceBatchMap)
			{
				obj = (InstanceBatchMap)baseObj;
			} else {
				obj = new InstanceBatchMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "InstanceBatchMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class InstanceBatchMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			InstanceBatchMap emptyInstance = new InstanceBatchMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///typedef EarthView::World::Core::CConstMapIterator<InstanceBatchMap> InstanceBatchMapIterator;
	public static class InstanceBatchPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstanceManager::InstanceBatchPair", new InstanceBatchPairClassFactory());
		}

		/**
		 * 构造函数
		 * @param  
		 */
		public InstanceBatchPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("InstanceBatchPair", null);
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
		public com.earthview.world.graphic.InstanceManager.InstanceBatchVec get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.InstanceManager.InstanceBatchVec __returnValue = new com.earthview.world.graphic.InstanceManager.InstanceBatchVec(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "InstanceBatchVec");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstanceManager.InstanceBatchVec)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "InstanceBatchVec");
			}
			return __returnValue;
		}
		
		native private void set_second_InstanceBatchVec (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.InstanceManager.InstanceBatchVec second)
		{
			long secondParamValue = second.nativeObject.pointer;
			
			set_second_InstanceBatchVec(this.nativeObject.pointer, secondParamValue);
		}
		
		public InstanceBatchPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public InstanceBatchPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static InstanceBatchPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			InstanceBatchPair obj = null;
 			if(baseObj instanceof InstanceBatchPair)
			{
				obj = (InstanceBatchPair)baseObj;
			} else {
				obj = new InstanceBatchPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "InstanceBatchPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class InstanceBatchPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			InstanceBatchPair emptyInstance = new InstanceBatchPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 节点动画轨迹集合迭代器管理节点动画轨迹集合迭代器操作
	 */
	public static class InstanceBatchMapIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator", new InstanceBatchMapIteratorClassFactory());
		}

		/**
		 * 复制构造函数
		 * @param other 其它迭代器
		 */
		public InstanceBatchMapIterator(com.earthview.world.graphic.InstanceManager.InstanceBatchMapIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("InstanceBatchMapIterator", list);
		}

		/**
		 * 构造函数
		 * @param lst 迭代器对应集合
		 */
		public InstanceBatchMapIterator(com.earthview.world.graphic.InstanceManager.InstanceBatchMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("InstanceBatchMapIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		/**
		 * 判断迭代器是否到达容器末尾
		 * @param  
		 * @return 是返回true，否则false
		 */
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		/**
		 * 迭代器位置后移
		 * @param  
		 */
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private String nextKey_void(long pNativeObject);
		/**
		 * 返回容器当前的键
		 * @param  
		 * @return 键
		 */
		public String nextKey()
		{
			String returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.InstanceManager.InstanceBatchVec nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			com.earthview.world.graphic.InstanceManager.InstanceBatchVec __returnValue = new com.earthview.world.graphic.InstanceManager.InstanceBatchVec(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "InstanceBatchVec");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstanceManager.InstanceBatchVec)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "InstanceBatchVec");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		/**
		 * 返回容器当前的值指针
		 * @param  
		 * @return 值地址
		 */
		public com.earthview.world.graphic.InstanceManager.InstanceBatchVec nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.InstanceManager.InstanceBatchVec __returnValue = new com.earthview.world.graphic.InstanceManager.InstanceBatchVec(CreatedWhenConstruct.CWC_NotToCreate, "InstanceBatchVec");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstanceManager.InstanceBatchVec)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "InstanceBatchVec");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.InstanceManager.InstanceBatchVec next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			com.earthview.world.graphic.InstanceManager.InstanceBatchVec __returnValue = new com.earthview.world.graphic.InstanceManager.InstanceBatchVec(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "InstanceBatchVec");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstanceManager.InstanceBatchVec)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "InstanceBatchVec");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器首键值对
		 * @param  
		 * @return 首键值对
		 */
		public com.earthview.world.graphic.InstanceManager.InstanceBatchPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.InstanceManager.InstanceBatchPair __returnValue = new com.earthview.world.graphic.InstanceManager.InstanceBatchPair(CreatedWhenConstruct.CWC_NotToCreate, "InstanceBatchPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstanceManager.InstanceBatchPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "InstanceBatchPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾键值对
		 * @param  
		 * @return 尾键值对
		 */
		public com.earthview.world.graphic.InstanceManager.InstanceBatchPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.InstanceManager.InstanceBatchPair __returnValue = new com.earthview.world.graphic.InstanceManager.InstanceBatchPair(CreatedWhenConstruct.CWC_NotToCreate, "InstanceBatchPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstanceManager.InstanceBatchPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "InstanceBatchPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前键值对
		 * @param  
		 * @return 当前键值对
		 */
		public com.earthview.world.graphic.InstanceManager.InstanceBatchPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.InstanceManager.InstanceBatchPair __returnValue = new com.earthview.world.graphic.InstanceManager.InstanceBatchPair(CreatedWhenConstruct.CWC_NotToCreate, "InstanceBatchPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstanceManager.InstanceBatchPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "InstanceBatchPair");
			}
			return __returnValue;
		}
		public InstanceBatchMapIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public InstanceBatchMapIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static InstanceBatchMapIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			InstanceBatchMapIterator obj = null;
 			if(baseObj instanceof InstanceBatchMapIterator)
			{
				obj = (InstanceBatchMapIterator)baseObj;
			} else {
				obj = new InstanceBatchMapIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "InstanceBatchMapIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class InstanceBatchMapIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			InstanceBatchMapIterator emptyInstance = new InstanceBatchMapIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///	typedef EarthView::World::Core::CConstVectorIterator<InstanceBatchVec> InstanceBatchIterator;
	public static class InstanceBatchIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator", new InstanceBatchIteratorClassFactory());
		}

		/**
		 * 构造函数
		 * @param vec 迭代器对应集合
		 */
		public InstanceBatchIterator(com.earthview.world.graphic.InstanceManager.InstanceBatchVec vec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer vecPtr = new BasePointer(vec);
			list.add("vec", vecPtr.get());
			Create("InstanceBatchIterator", list);
		}

		/**
		 * 复制构造函数
		 * @param rhs 其它迭代器
		 */
		public InstanceBatchIterator(com.earthview.world.graphic.InstanceManager.InstanceBatchIterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("InstanceBatchIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		/**
		 * 判断迭代器是否到达容器末尾
		 * @param  
		 * @return 是返回true，否则false
		 */
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		/**
		 * 迭代器位置后移
		 * @param  
		 */
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前元素值
		 * @param  
		 * @return 当前元素值
		 */
		public com.earthview.world.graphic.InstanceBatch getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.InstanceBatch __returnValue = new com.earthview.world.graphic.InstanceBatch(CreatedWhenConstruct.CWC_NotToCreate, "CInstanceBatch");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstanceBatch)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CInstanceBatch");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器下一元素值
		 * @param  
		 * @return 下一元素值
		 */
		public com.earthview.world.graphic.InstanceBatch next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.InstanceBatch __returnValue = new com.earthview.world.graphic.InstanceBatch(CreatedWhenConstruct.CWC_NotToCreate, "CInstanceBatch");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstanceBatch)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CInstanceBatch");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器头部元素值
		 * @param  
		 * @return 头部元素值
		 */
		public com.earthview.world.graphic.InstanceBatch getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.InstanceBatch __returnValue = new com.earthview.world.graphic.InstanceBatch(CreatedWhenConstruct.CWC_NotToCreate, "CInstanceBatch");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstanceBatch)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CInstanceBatch");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾部元素值
		 * @param  
		 * @return 尾部元素值
		 */
		public com.earthview.world.graphic.InstanceBatch getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.InstanceBatch __returnValue = new com.earthview.world.graphic.InstanceBatch(CreatedWhenConstruct.CWC_NotToCreate, "CInstanceBatch");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstanceBatch)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CInstanceBatch");
			}
			return __returnValue;
		}
		public InstanceBatchIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public InstanceBatchIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static InstanceBatchIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			InstanceBatchIterator obj = null;
 			if(baseObj instanceof InstanceBatchIterator)
			{
				obj = (InstanceBatchIterator)baseObj;
			} else {
				obj = new InstanceBatchIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "InstanceBatchIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class InstanceBatchIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			InstanceBatchIterator emptyInstance = new InstanceBatchIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public InstanceManager(String customName, com.earthview.world.graphic.SceneManager ref_sceneManager, String meshName, String groupName, com.earthview.world.graphic.InstanceManager.InstancingTechnique instancingTechnique, int instancingFlags, long instancesPerBatch, int subMeshIdx, boolean useBoneMatrixLookup) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer customNamePtr = new BasePointer(customName);
		list.add("customName", customNamePtr.get());
		BasePointer ref_sceneManagerPtr = new BasePointer(ref_sceneManager);
		list.add("ref_sceneManager", ref_sceneManagerPtr.get());
		BasePointer meshNamePtr = new BasePointer(meshName);
		list.add("meshName", meshNamePtr.get());
		BasePointer groupNamePtr = new BasePointer(groupName);
		list.add("groupName", groupNamePtr.get());
		BasePointer instancingTechniquePtr = new BasePointer(instancingTechnique);
		list.add("instancingTechnique", instancingTechniquePtr.get());
		BasePointer instancingFlagsPtr = new BasePointer(instancingFlags);
		list.add("instancingFlags", instancingFlagsPtr.get());
		BasePointer instancesPerBatchPtr = new BasePointer(instancesPerBatch);
		list.add("instancesPerBatch", instancesPerBatchPtr.get());
		BasePointer subMeshIdxPtr = new BasePointer(subMeshIdx);
		list.add("subMeshIdx", subMeshIdxPtr.get());
		BasePointer useBoneMatrixLookupPtr = new BasePointer(useBoneMatrixLookup);
		list.add("useBoneMatrixLookup", useBoneMatrixLookupPtr.get());
		Create("CInstanceManager", list);
	}

	public InstanceManager(String customName, com.earthview.world.graphic.SceneManager ref_sceneManager, String meshName, String groupName, com.earthview.world.graphic.InstanceManager.InstancingTechnique instancingTechnique, int instancingFlags, long instancesPerBatch, int subMeshIdx) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer customNamePtr = new BasePointer(customName);
		list.add("customName", customNamePtr.get());
		BasePointer ref_sceneManagerPtr = new BasePointer(ref_sceneManager);
		list.add("ref_sceneManager", ref_sceneManagerPtr.get());
		BasePointer meshNamePtr = new BasePointer(meshName);
		list.add("meshName", meshNamePtr.get());
		BasePointer groupNamePtr = new BasePointer(groupName);
		list.add("groupName", groupNamePtr.get());
		BasePointer instancingTechniquePtr = new BasePointer(instancingTechnique);
		list.add("instancingTechnique", instancingTechniquePtr.get());
		BasePointer instancingFlagsPtr = new BasePointer(instancingFlags);
		list.add("instancingFlags", instancingFlagsPtr.get());
		BasePointer instancesPerBatchPtr = new BasePointer(instancesPerBatch);
		list.add("instancesPerBatch", instancesPerBatchPtr.get());
		BasePointer subMeshIdxPtr = new BasePointer(subMeshIdx);
		list.add("subMeshIdx", subMeshIdxPtr.get());
		Create("CInstanceManager", list);
	}

	native private String getName_void(long pNativeObject);
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMeshPtr_void(long pNativeObject);
	public com.earthview.world.graphic.MeshPtr getMeshPtr()
	{
		long returnValue = getMeshPtr_void(this.nativeObject.pointer);
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
	native private void detachAllInstanceBatch_void(long pNativeObject);
	public void detachAllInstanceBatch()
	{
		detachAllInstanceBatch_void(this.nativeObject.pointer);
	}
	native private void setInstancesPerBatch_ev_size_t(long pNativeObject, long instancesPerBatch);
	public void setInstancesPerBatch(long instancesPerBatch)
	{
		long instancesPerBatchParamValue = instancesPerBatch;
		setInstancesPerBatch_ev_size_t(this.nativeObject.pointer, instancesPerBatchParamValue);
	}
	native private long getInstancesPerBatch_void(long pNativeObject);
	public long getInstancesPerBatch()
	{
		long returnValue = getInstancesPerBatch_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isInternalInstance_void(long pNativeObject);
	public boolean isInternalInstance()
	{
		boolean returnValue = isInternalInstance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setInternalInstance_ev_bool(long pNativeObject, boolean bInternalInstance);
	public void setInternalInstance(boolean bInternalInstance)
	{
		boolean bInternalInstanceParamValue = bInternalInstance;
		setInternalInstance_ev_bool(this.nativeObject.pointer, bInternalInstanceParamValue);
	}
	native private void setMaxLookupTableInstances_ev_size_t(long pNativeObject, long maxLookupTableInstances);
	public void setMaxLookupTableInstances(long maxLookupTableInstances)
	{
		long maxLookupTableInstancesParamValue = maxLookupTableInstances;
		setMaxLookupTableInstances_ev_size_t(this.nativeObject.pointer, maxLookupTableInstancesParamValue);
	}
	native private long getMaxOrBestNumInstancesPerBatch_EVString_ev_size_t_ev_uint16(long pNativeObject, String materialName, long suggestedSize, int flags);
	public long getMaxOrBestNumInstancesPerBatch(String materialName, long suggestedSize, int flags)
	{
		String materialNameParamValue = materialName;
		long suggestedSizeParamValue = suggestedSize;
		int flagsParamValue = flags;
		long returnValue = getMaxOrBestNumInstancesPerBatch_EVString_ev_size_t_ev_uint16(this.nativeObject.pointer, materialNameParamValue, suggestedSizeParamValue, flagsParamValue);
		return returnValue;
	}
	native private long createInstancedEntity_EVString(long pNativeObject, String materialName);
	public com.earthview.world.graphic.InstancedEntity createInstancedEntity(String materialName)
	{
		String materialNameParamValue = materialName;
		long returnValue = createInstancedEntity_EVString(this.nativeObject.pointer, materialNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstancedEntity __returnValue = new com.earthview.world.graphic.InstancedEntity(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedEntity");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstancedEntity)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CInstancedEntity");
		}
		return __returnValue;
	}
	native private long createInstancedEntity_EVString_ev_bool(long pNativeObject, String materialName, boolean bInUse);
	public com.earthview.world.graphic.InstancedEntity createInstancedEntity(String materialName, boolean bInUse)
	{
		String materialNameParamValue = materialName;
		boolean bInUseParamValue = bInUse;
		long returnValue = createInstancedEntity_EVString_ev_bool(this.nativeObject.pointer, materialNameParamValue, bInUseParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstancedEntity __returnValue = new com.earthview.world.graphic.InstancedEntity(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedEntity");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstancedEntity)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CInstancedEntity");
		}
		return __returnValue;
	}
	native private void cleanupEmptyBatches_void(long pNativeObject);
	public void cleanupEmptyBatches()
	{
		cleanupEmptyBatches_void(this.nativeObject.pointer);
	}
	native private void setSetting_BatchSettingId_ev_bool_EVString(long pNativeObject, int id, boolean value, String materialName);
	public void setSetting(com.earthview.world.graphic.InstanceManager.BatchSettingId id, boolean value, String materialName)
	{
		int idParamValue = id.getValue();
		boolean valueParamValue = value;
		String materialNameParamValue = materialName;
		setSetting_BatchSettingId_ev_bool_EVString(this.nativeObject.pointer, idParamValue, valueParamValue, materialNameParamValue);
	}
	native private void setSetting_BatchSettingId_ev_bool(long pNativeObject, int id, boolean value);
	public void setSetting(com.earthview.world.graphic.InstanceManager.BatchSettingId id, boolean value)
	{
		int idParamValue = id.getValue();
		boolean valueParamValue = value;
		setSetting_BatchSettingId_ev_bool(this.nativeObject.pointer, idParamValue, valueParamValue);
	}
	native private boolean getSetting_BatchSettingId_EVString(long pNativeObject, int id, String materialName);
	//// If settings for the given material didn't exist, default value is returned
	public boolean getSetting(com.earthview.world.graphic.InstanceManager.BatchSettingId id, String materialName)
	{
		int idParamValue = id.getValue();
		String materialNameParamValue = materialName;
		boolean returnValue = getSetting_BatchSettingId_EVString(this.nativeObject.pointer, idParamValue, materialNameParamValue);
		return returnValue;
	}
	native private boolean hasSettings_EVString(long pNativeObject, String materialName);
	public boolean hasSettings(String materialName)
	{
		String materialNameParamValue = materialName;
		boolean returnValue = hasSettings_EVString(this.nativeObject.pointer, materialNameParamValue);
		return returnValue;
	}
	native private void setBatchesAsStaticAndUpdate_ev_bool(long pNativeObject, boolean bStatic);
	public void setBatchesAsStaticAndUpdate(boolean bStatic)
	{
		boolean bStaticParamValue = bStatic;
		setBatchesAsStaticAndUpdate_ev_bool(this.nativeObject.pointer, bStaticParamValue);
	}
	native private void _addDirtyBatch_CInstanceBatch(long pNativeObject, long ref_dirtyBatch);
	public void _addDirtyBatch(com.earthview.world.graphic.InstanceBatch ref_dirtyBatch)
	{
		long ref_dirtyBatchParamValue = (ref_dirtyBatch == null ? 0L : ref_dirtyBatch.nativeObject.pointer);
		_addDirtyBatch_CInstanceBatch(this.nativeObject.pointer, ref_dirtyBatchParamValue);
	}
	native private void _updateDirtyBatches_void(long pNativeObject);
	public void _updateDirtyBatches()
	{
		_updateDirtyBatches_void(this.nativeObject.pointer);
	}
	native private int getSubMeshIdx_void(long pNativeObject);
	public int getSubMeshIdx()
	{
		int returnValue = getSubMeshIdx_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSceneManager_void(long pNativeObject);
	public com.earthview.world.graphic.SceneManager getSceneManager()
	{
		long returnValue = getSceneManager_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getInstanceBatchMapIterator_void(long pNativeObject);
	//// Get non-updateable iterator over instance batches per material
	public com.earthview.world.graphic.InstanceManager.InstanceBatchMapIterator getInstanceBatchMapIterator()
	{
		long returnValue = getInstanceBatchMapIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.InstanceManager.InstanceBatchMapIterator __returnValue = new com.earthview.world.graphic.InstanceManager.InstanceBatchMapIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "InstanceBatchMapIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstanceManager.InstanceBatchMapIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "InstanceBatchMapIterator");
		}
		return __returnValue;
	}
	native private long getInstanceBatchIterator_EVString(long pNativeObject, String materialName);
	public com.earthview.world.graphic.InstanceManager.InstanceBatchIterator getInstanceBatchIterator(String materialName)
	{
		String materialNameParamValue = materialName;
		long returnValue = getInstanceBatchIterator_EVString(this.nativeObject.pointer, materialNameParamValue);
		com.earthview.world.graphic.InstanceManager.InstanceBatchIterator __returnValue = new com.earthview.world.graphic.InstanceManager.InstanceBatchIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "InstanceBatchIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstanceManager.InstanceBatchIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "InstanceBatchIterator");
		}
		return __returnValue;
	}
	native private boolean isAsyncUpdatingBuffer_void(long pNativeObject);
	public boolean isAsyncUpdatingBuffer()
	{
		boolean returnValue = isAsyncUpdatingBuffer_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAsyncUpdateBuffer_ev_bool(long pNativeObject, boolean async);
	public void setAsyncUpdateBuffer(boolean async)
	{
		boolean asyncParamValue = async;
		setAsyncUpdateBuffer_ev_bool(this.nativeObject.pointer, asyncParamValue);
	}
	public InstanceManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public InstanceManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static InstanceManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		InstanceManager obj = null;
 		if(baseObj instanceof InstanceManager)
		{
			obj = (InstanceManager)baseObj;
		} else {
			obj = new InstanceManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CInstanceManager");
			obj.increaseCast();
		}

		return obj;
	}
}
