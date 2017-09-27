package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 场景管理枚举类类聚场景管理的功能
 */
public class SceneManagerEnumerator extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CSceneManagerEnumerator", new SceneManagerEnumeratorClassFactory());
	}

	/// <summary>
	/// 场景管理实例，用实例名称检索
	/// typedef map<EVString, EarthView::World::Graphic::CSceneManager*> EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagers;
	/// </summary>
	public static class SceneManagers extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagers", new SceneManagersClassFactory());
		}

		public SceneManagers() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SceneManagers", null);
		}

		native private boolean push_EVString_CSceneManager(long pNativeObject, String key, long ref_val);
		public boolean push(String key, NativeObjectPointer<com.earthview.world.graphic.SceneManager> ref_val)
		{
			String keyParamValue = key;
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_EVString_CSceneManager(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
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
		public NativeObjectPointer<com.earthview.world.graphic.SceneManager> OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.SceneManager> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.SceneManager>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		public NativeObjectPointer<com.earthview.world.graphic.SceneManager> get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.SceneManager> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.SceneManager>(new InstancePointer(returnValue));
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
		public SceneManagers(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SceneManagers(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SceneManagers fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SceneManagers obj = null;
 			if(baseObj instanceof SceneManagers)
			{
				obj = (SceneManagers)baseObj;
			} else {
				obj = new SceneManagers(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SceneManagers");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SceneManagersClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SceneManagers emptyInstance = new SceneManagers(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/// <summary>
	/// 列出有效地场景管理者类型作为元数据
	/// typedef vector<const EarthView::World::Graphic::SceneManagerMetaData*> EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList;
	/// </summary>
	public static class MetaDataList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList", new MetaDataListClassFactory());
		}

		public MetaDataList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("MetaDataList", null);
		}

		native private void push_back_SceneManagerMetaData(long pNativeObject, long t);
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.SceneManagerMetaData> t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_SceneManagerMetaData(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.SceneManagerMetaData> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.SceneManagerMetaData> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.SceneManagerMetaData>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.SceneManagerMetaData> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.SceneManagerMetaData> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.SceneManagerMetaData>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_SceneManagerMetaData(long pNativeObject, long pos, long t);
		public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.SceneManagerMetaData> t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_SceneManagerMetaData(this.nativeObject.pointer, posParamValue, tParamValue);
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
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.SceneManagerMetaData> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.SceneManagerMetaData> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.SceneManagerMetaData>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.SceneManagerMetaData> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.SceneManagerMetaData> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.SceneManagerMetaData>(new InstancePointer(returnValue));
			return __returnValue;
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
		native private void reserve_ev_size_t(long pNativeObject, long count);
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public MetaDataList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public MetaDataList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static MetaDataList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			MetaDataList obj = null;
 			if(baseObj instanceof MetaDataList)
			{
				obj = (MetaDataList)baseObj;
			} else {
				obj = new MetaDataList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "MetaDataList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class MetaDataListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			MetaDataList emptyInstance = new MetaDataList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class SceneManagerIteratorPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIteratorPair", new SceneManagerIteratorPairClassFactory());
		}

		public SceneManagerIteratorPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SceneManagerIteratorPair", null);
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
		public com.earthview.world.graphic.SceneManager get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
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
		
		native private void set_second_CSceneManager (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.SceneManager second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_CSceneManager(this.nativeObject.pointer, secondParamValue);
		}
		
		public SceneManagerIteratorPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SceneManagerIteratorPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SceneManagerIteratorPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SceneManagerIteratorPair obj = null;
 			if(baseObj instanceof SceneManagerIteratorPair)
			{
				obj = (SceneManagerIteratorPair)baseObj;
			} else {
				obj = new SceneManagerIteratorPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SceneManagerIteratorPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SceneManagerIteratorPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SceneManagerIteratorPair emptyInstance = new SceneManagerIteratorPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/// <summary>
	/// 元数据迭代器
	/// typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList> EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator;
	/// </summary>
	public static class MetaDataIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator", new MetaDataIteratorClassFactory());
		}

		public MetaDataIterator(com.earthview.world.graphic.SceneManagerEnumerator.MetaDataList vec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer vecPtr = new BasePointer(vec);
			list.add("vec", vecPtr.get());
			Create("MetaDataIterator", list);
		}

		public MetaDataIterator(com.earthview.world.graphic.SceneManagerEnumerator.MetaDataIterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("MetaDataIterator", list);
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
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.SceneManagerMetaData getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.SceneManagerMetaData __returnValue = new com.earthview.world.graphic.SceneManagerMetaData(CreatedWhenConstruct.CWC_NotToCreate, "SceneManagerMetaData");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SceneManagerMetaData)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SceneManagerMetaData");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.SceneManagerMetaData next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.SceneManagerMetaData __returnValue = new com.earthview.world.graphic.SceneManagerMetaData(CreatedWhenConstruct.CWC_NotToCreate, "SceneManagerMetaData");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SceneManagerMetaData)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SceneManagerMetaData");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.SceneManagerMetaData getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.SceneManagerMetaData __returnValue = new com.earthview.world.graphic.SceneManagerMetaData(CreatedWhenConstruct.CWC_NotToCreate, "SceneManagerMetaData");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SceneManagerMetaData)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SceneManagerMetaData");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.SceneManagerMetaData getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.SceneManagerMetaData __returnValue = new com.earthview.world.graphic.SceneManagerMetaData(CreatedWhenConstruct.CWC_NotToCreate, "SceneManagerMetaData");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SceneManagerMetaData)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SceneManagerMetaData");
			}
			return __returnValue;
		}
		public MetaDataIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public MetaDataIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static MetaDataIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			MetaDataIterator obj = null;
 			if(baseObj instanceof MetaDataIterator)
			{
				obj = (MetaDataIterator)baseObj;
			} else {
				obj = new MetaDataIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "MetaDataIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class MetaDataIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			MetaDataIterator emptyInstance = new MetaDataIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class SceneManagerIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator", new SceneManagerIteratorClassFactory());
		}

		public SceneManagerIterator(com.earthview.world.graphic.SceneManagerEnumerator.SceneManagers lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("SceneManagerIterator", list);
		}

		public SceneManagerIterator(com.earthview.world.graphic.SceneManagerEnumerator.SceneManagerIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("SceneManagerIterator", list);
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
		public String nextKey()
		{
			String returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		public com.earthview.world.graphic.SceneManager nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
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
		native private long nextValuePtr_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.SceneManager> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.SceneManager> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.SceneManager>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.SceneManager next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
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
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.SceneManagerEnumerator.SceneManagerIteratorPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.SceneManagerEnumerator.SceneManagerIteratorPair __returnValue = new com.earthview.world.graphic.SceneManagerEnumerator.SceneManagerIteratorPair(CreatedWhenConstruct.CWC_NotToCreate, "SceneManagerIteratorPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SceneManagerEnumerator.SceneManagerIteratorPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SceneManagerIteratorPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.SceneManagerEnumerator.SceneManagerIteratorPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.SceneManagerEnumerator.SceneManagerIteratorPair __returnValue = new com.earthview.world.graphic.SceneManagerEnumerator.SceneManagerIteratorPair(CreatedWhenConstruct.CWC_NotToCreate, "SceneManagerIteratorPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SceneManagerEnumerator.SceneManagerIteratorPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SceneManagerIteratorPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.SceneManagerEnumerator.SceneManagerIteratorPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.SceneManagerEnumerator.SceneManagerIteratorPair __returnValue = new com.earthview.world.graphic.SceneManagerEnumerator.SceneManagerIteratorPair(CreatedWhenConstruct.CWC_NotToCreate, "SceneManagerIteratorPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SceneManagerEnumerator.SceneManagerIteratorPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SceneManagerIteratorPair");
			}
			return __returnValue;
		}
		public SceneManagerIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SceneManagerIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SceneManagerIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SceneManagerIterator obj = null;
 			if(baseObj instanceof SceneManagerIterator)
			{
				obj = (SceneManagerIterator)baseObj;
			} else {
				obj = new SceneManagerIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SceneManagerIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SceneManagerIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SceneManagerIterator emptyInstance = new SceneManagerIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public SceneManagerEnumerator() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSceneManagerEnumerator", null);
	}

	native private void addFactory_CSceneManagerFactory(long pNativeObject, long ref_fact);
	/**
	 * 添加场景管理类工厂
	 * @param fact 工厂实例
	 */
	public void addFactory(com.earthview.world.graphic.SceneManagerFactory ref_fact)
	{
		long ref_factParamValue = (ref_fact == null ? 0L : ref_fact.nativeObject.pointer);
		addFactory_CSceneManagerFactory(this.nativeObject.pointer, ref_factParamValue);
	}
	native private void removeFactory_CSceneManagerFactory(long pNativeObject, long fact);
	/**
	 * 移除场景管理类工厂
	 * @param fact 工厂实例
	 */
	public void removeFactory(com.earthview.world.graphic.SceneManagerFactory fact)
	{
		long factParamValue = (fact == null ? 0L : fact.nativeObject.pointer);
		removeFactory_CSceneManagerFactory(this.nativeObject.pointer, factParamValue);
	}
	native private long getMetaData_EVString(long pNativeObject, String typeName);
	/**
	 * 获取更多场景管理指定类型的详细信息
	 * @param typeName 调查的类型名称
	 */
	public com.earthview.world.graphic.SceneManagerMetaData getMetaData(String typeName)
	{
		String typeNameParamValue = typeName;
		long returnValue = getMetaData_EVString(this.nativeObject.pointer, typeNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManagerMetaData __returnValue = new com.earthview.world.graphic.SceneManagerMetaData(CreatedWhenConstruct.CWC_NotToCreate, "SceneManagerMetaData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManagerMetaData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "SceneManagerMetaData");
		}
		return __returnValue;
	}
	native private long getMetaDataIterator_void(long pNativeObject);
	/**
	 * 遍历场景管理中所有有效结构的类型，并提高它们的一些信息
	 * @param  
	 */
	public com.earthview.world.graphic.SceneManagerEnumerator.MetaDataIterator getMetaDataIterator()
	{
		long returnValue = getMetaDataIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.SceneManagerEnumerator.MetaDataIterator __returnValue = new com.earthview.world.graphic.SceneManagerEnumerator.MetaDataIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MetaDataIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManagerEnumerator.MetaDataIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MetaDataIterator");
		}
		return __returnValue;
	}
	native private long createSceneManager_EVString_EVString(long pNativeObject, String typeName, String instanceName);
	/// 创建一个指定类型的场景管理实例
	/// </summary>
	/// <param name="typeName">定义一个唯一的场景管理类型</param>
	/// <param name="instanceName">新实例的名称</param>
	/// <returns>场景管理</returns>
	public com.earthview.world.graphic.SceneManager createSceneManager(String typeName, String instanceName)
	{
		String typeNameParamValue = typeName;
		String instanceNameParamValue = instanceName;
		long returnValue = createSceneManager_EVString_EVString(this.nativeObject.pointer, typeNameParamValue, instanceNameParamValue);
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
	native private long createSceneManager_EVString(long pNativeObject, String typeName);
	public com.earthview.world.graphic.SceneManager createSceneManager(String typeName)
	{
		String typeNameParamValue = typeName;
		long returnValue = createSceneManager_EVString(this.nativeObject.pointer, typeNameParamValue);
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
	native private long createSceneManager_ev_uint16_EVString(long pNativeObject, int typeMask, String instanceName);
	/// 基于场景类型支持创建一个场景管理实例
	/// 如果特殊的场景管理没有被发现，返回默认实现
	/// </summary>
	/// <param name="typeMask">场景类型标识</param>
	/// <param name="instanceName">新实例的名称</param>
	/// <returns>场景管理</returns>
	public com.earthview.world.graphic.SceneManager createSceneManager(int typeMask, String instanceName)
	{
		int typeMaskParamValue = typeMask;
		String instanceNameParamValue = instanceName;
		long returnValue = createSceneManager_ev_uint16_EVString(this.nativeObject.pointer, typeMaskParamValue, instanceNameParamValue);
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
	native private long createSceneManager_ev_uint16(long pNativeObject, int typeMask);
	public com.earthview.world.graphic.SceneManager createSceneManager(int typeMask)
	{
		int typeMaskParamValue = typeMask;
		long returnValue = createSceneManager_ev_uint16(this.nativeObject.pointer, typeMaskParamValue);
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
	native private void destroySceneManager_CSceneManager(long pNativeObject, long sm);
	/**
	 * 销毁场景管理实例
	 * @param sm 场景管理
	 */
	public void destroySceneManager(com.earthview.world.graphic.SceneManager sm)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		destroySceneManager_CSceneManager(this.nativeObject.pointer, smParamValue);
	}
	native private long getSceneManager_EVString(long pNativeObject, String instanceName);
	/**
	 * 获取一个场景管理实例
	 * @param instanceName 检索实例的名称
	 */
	public com.earthview.world.graphic.SceneManager getSceneManager(String instanceName)
	{
		String instanceNameParamValue = instanceName;
		long returnValue = getSceneManager_EVString(this.nativeObject.pointer, instanceNameParamValue);
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
	native private boolean hasSceneManager_EVString(long pNativeObject, String instanceName);
	/**
	 * 识别一个场景管理实例
	 * @param instanceName 检索实例的名称
	 */
	public boolean hasSceneManager(String instanceName)
	{
		String instanceNameParamValue = instanceName;
		boolean returnValue = hasSceneManager_EVString(this.nativeObject.pointer, instanceNameParamValue);
		return returnValue;
	}
	native private boolean renameSceneManager_EVString_EVString(long pNativeObject, String oldName, String newName);
	public boolean renameSceneManager(String oldName, String newName)
	{
		String oldNameParamValue = oldName;
		String newNameParamValue = newName;
		boolean returnValue = renameSceneManager_EVString_EVString(this.nativeObject.pointer, oldNameParamValue, newNameParamValue);
		return returnValue;
	}
	native private long getSceneManagerIterator_void(long pNativeObject);
	/**
	 * 获取一个迭代器遍历所有存在的场景管理实例
	 * @param  
	 */
	public com.earthview.world.graphic.SceneManagerEnumerator.SceneManagerIterator getSceneManagerIterator()
	{
		long returnValue = getSceneManagerIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.SceneManagerEnumerator.SceneManagerIterator __returnValue = new com.earthview.world.graphic.SceneManagerEnumerator.SceneManagerIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "SceneManagerIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManagerEnumerator.SceneManagerIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "SceneManagerIterator");
		}
		return __returnValue;
	}
	native private void setRenderSystem_CRenderSystem(long pNativeObject, long ref_rs);
	/**
	 * 设置渲染系统通知所有场景管理者渲染系统的目的
	 * @param rs 渲染系统
	 */
	public void setRenderSystem(com.earthview.world.graphic.RenderSystem ref_rs)
	{
		long ref_rsParamValue = (ref_rs == null ? 0L : ref_rs.nativeObject.pointer);
		setRenderSystem_CRenderSystem(this.nativeObject.pointer, ref_rsParamValue);
	}
	native private void shutdownAll_void(long pNativeObject);
	/**
	 * 关闭管理者
	 * @param  
	 */
	public void shutdownAll()
	{
		shutdownAll_void(this.nativeObject.pointer);
	}
	native private static long getSingleton_void();
	/**
	 * 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
	 * @param  
	 * @return 返回单体类的引用
	 */
	public static com.earthview.world.graphic.SceneManagerEnumerator getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.SceneManagerEnumerator __returnValue = new com.earthview.world.graphic.SceneManagerEnumerator(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManagerEnumerator");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManagerEnumerator)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneManagerEnumerator");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	/**
	 * 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
	 * @param  
	 * @return 返回单体类的引用
	 */
	public static com.earthview.world.graphic.SceneManagerEnumerator getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManagerEnumerator __returnValue = new com.earthview.world.graphic.SceneManagerEnumerator(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManagerEnumerator");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManagerEnumerator)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneManagerEnumerator");
		}
		return __returnValue;
	}
	public SceneManagerEnumerator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SceneManagerEnumerator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SceneManagerEnumerator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SceneManagerEnumerator obj = null;
 		if(baseObj instanceof SceneManagerEnumerator)
		{
			obj = (SceneManagerEnumerator)baseObj;
		} else {
			obj = new SceneManagerEnumerator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSceneManagerEnumerator");
			obj.increaseCast();
		}

		return obj;
	}
}
