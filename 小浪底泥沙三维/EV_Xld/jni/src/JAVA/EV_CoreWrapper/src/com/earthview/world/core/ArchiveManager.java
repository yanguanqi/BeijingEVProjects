package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * ThisclassmanagestheavailableCArchiveFactoryplugins.
 */
public class ArchiveManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CArchiveManager", new ArchiveManagerClassFactory());
	}

	public static class ArchiveFactoryMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Core::CArchiveManager::ArchiveFactoryMap", new ArchiveFactoryMapClassFactory());
		}

		public ArchiveFactoryMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ArchiveFactoryMap", null);
		}

		native private boolean push_EVString_CArchiveFactory(long pNativeObject, String key, long val);
		public boolean push(String key, NativeObjectPointer<com.earthview.world.core.ArchiveFactory> val)
		{
			String keyParamValue = key;
			long valParamValue = val.nativeObject.pointer;
			boolean returnValue = push_EVString_CArchiveFactory(this.nativeObject.pointer, keyParamValue, valParamValue);
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
		public NativeObjectPointer<com.earthview.world.core.ArchiveFactory> OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.core.ArchiveFactory> __returnValue = new NativeObjectPointer<com.earthview.world.core.ArchiveFactory>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		public NativeObjectPointer<com.earthview.world.core.ArchiveFactory> get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.core.ArchiveFactory> __returnValue = new NativeObjectPointer<com.earthview.world.core.ArchiveFactory>(new InstancePointer(returnValue));
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
		public ArchiveFactoryMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ArchiveFactoryMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ArchiveFactoryMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ArchiveFactoryMap obj = null;
 			if(baseObj instanceof ArchiveFactoryMap)
			{
				obj = (ArchiveFactoryMap)baseObj;
			} else {
				obj = new ArchiveFactoryMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ArchiveFactoryMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ArchiveFactoryMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ArchiveFactoryMap emptyInstance = new ArchiveFactoryMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ArchiveMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Core::CArchiveManager::ArchiveMap", new ArchiveMapClassFactory());
		}

		public ArchiveMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ArchiveMap", null);
		}

		native private boolean push_EVString_CArchive(long pNativeObject, String key, long val);
		public boolean push(String key, NativeObjectPointer<com.earthview.world.core.Archive> val)
		{
			String keyParamValue = key;
			long valParamValue = val.nativeObject.pointer;
			boolean returnValue = push_EVString_CArchive(this.nativeObject.pointer, keyParamValue, valParamValue);
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
		public NativeObjectPointer<com.earthview.world.core.Archive> OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.core.Archive> __returnValue = new NativeObjectPointer<com.earthview.world.core.Archive>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		public NativeObjectPointer<com.earthview.world.core.Archive> get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.core.Archive> __returnValue = new NativeObjectPointer<com.earthview.world.core.Archive>(new InstancePointer(returnValue));
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
		public ArchiveMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ArchiveMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ArchiveMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ArchiveMap obj = null;
 			if(baseObj instanceof ArchiveMap)
			{
				obj = (ArchiveMap)baseObj;
			} else {
				obj = new ArchiveMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ArchiveMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ArchiveMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ArchiveMap emptyInstance = new ArchiveMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * Defaultconstructor-shouldnevergetcalledbyaclientapp.
	 * @param  
	 */
	public ArchiveManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CArchiveManager", null);
	}

	native private static long getSingleton_void();
	public static com.earthview.world.core.ArchiveManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.core.ArchiveManager __returnValue = new com.earthview.world.core.ArchiveManager(CreatedWhenConstruct.CWC_NotToCreate, "CArchiveManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.ArchiveManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CArchiveManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.core.ArchiveManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.ArchiveManager __returnValue = new com.earthview.world.core.ArchiveManager(CreatedWhenConstruct.CWC_NotToCreate, "CArchiveManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.ArchiveManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CArchiveManager");
		}
		return __returnValue;
	}
	native private long load_EVString_EVString(long pNativeObject, String filename, String archiveType);
	/**
	 * Opensanarchiveforfilereading.@remarksextensionlibraries.
	 * @param  name="filename"Thefilenamethatwillbeopened
	 * @param  name="refLibrary"Thelibrarythatcontainsthedata-handlingcode
	 * @return Ifthefunctionsucceeds,avalidpointertoanEarthView::World::Core::CArchiveobjectisreturned.
	 */
	public com.earthview.world.core.Archive load(String filename, String archiveType)
	{
		String filenameParamValue = filename;
		String archiveTypeParamValue = archiveType;
		long returnValue = load_EVString_EVString(this.nativeObject.pointer, filenameParamValue, archiveTypeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.Archive __returnValue = new com.earthview.world.core.Archive(CreatedWhenConstruct.CWC_NotToCreate, "CArchive");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private void unload_CArchive(long pNativeObject, long arch);
	/**
	 * Unloadsanarchive.remarks	Youmustensurethatthisarchiveisnotbeingusedbeforeremovingit.
	 * @param  name="arch"
	 */
	public void unload(com.earthview.world.core.Archive arch)
	{
		long archParamValue = (arch == null ? 0L : arch.nativeObject.pointer);
		unload_CArchive(this.nativeObject.pointer, archParamValue);
	}
	native private void unload_EVString(long pNativeObject, String filename);
	/**
	 * Unloadsanarchivebyname.remarks	Youmustensurethatthisarchiveisnotbeingusedbeforeremovingit.
	 * @param  name="filename"
	 */
	public void unload(String filename)
	{
		String filenameParamValue = filename;
		unload_EVString(this.nativeObject.pointer, filenameParamValue);
	}
	public static class ArchiveMapPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Core::CArchiveManager::ArchiveMapPair", new ArchiveMapPairClassFactory());
		}

		public ArchiveMapPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ArchiveMapPair", null);
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
		public com.earthview.world.core.Archive get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
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
		
		native private void set_second_CArchive (long pNativeObject, long value);
		public void set_second(com.earthview.world.core.Archive second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_CArchive(this.nativeObject.pointer, secondParamValue);
		}
		
		public ArchiveMapPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ArchiveMapPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ArchiveMapPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ArchiveMapPair obj = null;
 			if(baseObj instanceof ArchiveMapPair)
			{
				obj = (ArchiveMapPair)baseObj;
			} else {
				obj = new ArchiveMapPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ArchiveMapPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ArchiveMapPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ArchiveMapPair emptyInstance = new ArchiveMapPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ArchiveMapIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Core::CArchiveManager::ArchiveMapIterator", new ArchiveMapIteratorClassFactory());
		}

		public ArchiveMapIterator() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ArchiveMapIterator", null);
		}

		public ArchiveMapIterator(com.earthview.world.core.ArchiveManager.ArchiveMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("ArchiveMapIterator", list);
		}

		public ArchiveMapIterator(com.earthview.world.core.ArchiveManager.ArchiveMapIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("ArchiveMapIterator", list);
		}

		native private long OperatorAssign_ArchiveMapIterator(long pNativeObject, long other);
		/// <summary>
		/// 锟斤拷值锟斤拷锟?="锟斤拷锟斤拷锟斤拷
		/// </summary>
		/// <param name="other">EarthView::World::Core::CArchiveManager::ArchiveMapIterator锟斤拷锟斤拷锟斤拷锟?/param>
		/// <returns>锟斤拷锟截革拷值锟斤拷锟斤拷锟斤拷锟?/returns>
		public com.earthview.world.core.ArchiveManager.ArchiveMapIterator OperatorAssign(com.earthview.world.core.ArchiveManager.ArchiveMapIterator other)
		{
			long otherParamValue = other.nativeObject.pointer;
			long returnValue = OperatorAssign_ArchiveMapIterator(this.nativeObject.pointer, otherParamValue);
			com.earthview.world.core.ArchiveManager.ArchiveMapIterator __returnValue = new com.earthview.world.core.ArchiveManager.ArchiveMapIterator(CreatedWhenConstruct.CWC_NotToCreate, "ArchiveMapIterator");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.ArchiveManager.ArchiveMapIterator)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ArchiveMapIterator");
			}
			return __returnValue;
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
		public com.earthview.world.core.Archive nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.core.Archive __returnValue = new com.earthview.world.core.Archive(CreatedWhenConstruct.CWC_NotToCreate, "CArchive");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
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
		native private long nextValuePtr_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.core.Archive> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.core.Archive> __returnValue = new NativeObjectPointer<com.earthview.world.core.Archive>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.core.Archive next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.core.Archive __returnValue = new com.earthview.world.core.Archive(CreatedWhenConstruct.CWC_NotToCreate, "CArchive");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
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
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.core.ArchiveManager.ArchiveMapPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.core.ArchiveManager.ArchiveMapPair __returnValue = new com.earthview.world.core.ArchiveManager.ArchiveMapPair(CreatedWhenConstruct.CWC_NotToCreate, "ArchiveMapPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.ArchiveManager.ArchiveMapPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ArchiveMapPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.core.ArchiveManager.ArchiveMapPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.core.ArchiveManager.ArchiveMapPair __returnValue = new com.earthview.world.core.ArchiveManager.ArchiveMapPair(CreatedWhenConstruct.CWC_NotToCreate, "ArchiveMapPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.ArchiveManager.ArchiveMapPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ArchiveMapPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.core.ArchiveManager.ArchiveMapPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.core.ArchiveManager.ArchiveMapPair __returnValue = new com.earthview.world.core.ArchiveManager.ArchiveMapPair(CreatedWhenConstruct.CWC_NotToCreate, "ArchiveMapPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.ArchiveManager.ArchiveMapPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ArchiveMapPair");
			}
			return __returnValue;
		}
		public ArchiveMapIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ArchiveMapIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ArchiveMapIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ArchiveMapIterator obj = null;
 			if(baseObj instanceof ArchiveMapIterator)
			{
				obj = (ArchiveMapIterator)baseObj;
			} else {
				obj = new ArchiveMapIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ArchiveMapIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ArchiveMapIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ArchiveMapIterator emptyInstance = new ArchiveMapIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getArchiveIterator_void(long pNativeObject);
	/**
	 * GetaniteratorovertheArchivesinthisManager.
	 * @param  
	 * @return EarthView::World::Core::CArchiveManager::ArchiveMapIterator
	 */
	public com.earthview.world.core.ArchiveManager.ArchiveMapIterator getArchiveIterator()
	{
		long returnValue = getArchiveIterator_void(this.nativeObject.pointer);
		com.earthview.world.core.ArchiveManager.ArchiveMapIterator __returnValue = new com.earthview.world.core.ArchiveManager.ArchiveMapIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ArchiveMapIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.ArchiveManager.ArchiveMapIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ArchiveMapIterator");
		}
		return __returnValue;
	}
	native private void addArchiveFactory_CArchiveFactory(long pNativeObject, long factory);
	/**
	 * AddsanewEarthView::World::Core::CArchiveFactorytothelistofavailablefactories.remarksCPlugindeveloperswhoaddnewarchivecodecsneedtocallthisafterdefiningtheirCArchiveFactorysubclassandCArchivesubclassesfortheirarchivetype.
	 * @param  name="factory"
	 */
	public void addArchiveFactory(com.earthview.world.core.ArchiveFactory factory)
	{
		long factoryParamValue = (factory == null ? 0L : factory.nativeObject.pointer);
		addArchiveFactory_CArchiveFactory(this.nativeObject.pointer, factoryParamValue);
	}
	public ArchiveManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ArchiveManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ArchiveManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ArchiveManager obj = null;
 		if(baseObj instanceof ArchiveManager)
		{
			obj = (ArchiveManager)baseObj;
		} else {
			obj = new ArchiveManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CArchiveManager");
			obj.increaseCast();
		}

		return obj;
	}
}
