package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuProgramManager extends com.earthview.world.graphic.ResourceManager {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgramManager", new GpuProgramManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCGpuProgramManagerProxy", new GpuProgramManagerClassFactory());
	}

	native private static long getSingleton_void();
	public static com.earthview.world.graphic.GpuProgramManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.GpuProgramManager __returnValue = new com.earthview.world.graphic.GpuProgramManager(CreatedWhenConstruct.CWC_NotToCreate, "CGpuProgramManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.graphic.GpuProgramManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.GpuProgramManager __returnValue = new com.earthview.world.graphic.GpuProgramManager(CreatedWhenConstruct.CWC_NotToCreate, "CGpuProgramManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramManager");
		}
		return __returnValue;
	}
	public static class SharedParametersMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgramManager::SharedParametersMap", new SharedParametersMapClassFactory());
		}

		public SharedParametersMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SharedParametersMap", null);
		}

		native private boolean push_EVString_GpuSharedParametersPtr(long pNativeObject, String key, long val);
		public boolean push(String key, com.earthview.world.graphic.GpuSharedParametersPtr val)
		{
			String keyParamValue = key;
			long valParamValue = val.nativeObject.pointer;
			boolean returnValue = push_EVString_GpuSharedParametersPtr(this.nativeObject.pointer, keyParamValue, valParamValue);
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
		public com.earthview.world.graphic.GpuSharedParametersPtr OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			com.earthview.world.graphic.GpuSharedParametersPtr __returnValue = new com.earthview.world.graphic.GpuSharedParametersPtr(CreatedWhenConstruct.CWC_NotToCreate, "GpuSharedParametersPtr");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.GpuSharedParametersPtr)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "GpuSharedParametersPtr");
			}
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		public com.earthview.world.graphic.GpuSharedParametersPtr get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			com.earthview.world.graphic.GpuSharedParametersPtr __returnValue = new com.earthview.world.graphic.GpuSharedParametersPtr(CreatedWhenConstruct.CWC_NotToCreate, "GpuSharedParametersPtr");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.GpuSharedParametersPtr)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "GpuSharedParametersPtr");
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
		public SharedParametersMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SharedParametersMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SharedParametersMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SharedParametersMap obj = null;
 			if(baseObj instanceof SharedParametersMap)
			{
				obj = (SharedParametersMap)baseObj;
			} else {
				obj = new SharedParametersMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SharedParametersMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SharedParametersMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SharedParametersMap emptyInstance = new SharedParametersMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class GpuSharedParametersPtrPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgramManager::GpuSharedParametersPtrPair", new GpuSharedParametersPtrPairClassFactory());
		}

		public GpuSharedParametersPtrPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("GpuSharedParametersPtrPair", null);
		}

		native private int get_first_void(long pNativeObject);
		public int get_first()
		{
			int jniValue = get_first_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_first_ev_uint16 (long pNativeObject, int value);
		public void set_first(int first)
		{
			int firstParamValue = first;
			
			set_first_ev_uint16(this.nativeObject.pointer, firstParamValue);
		}
		
		native private long get_second_void(long pNativeObject);
		public com.earthview.world.graphic.GpuSharedParametersPtr get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.GpuSharedParametersPtr __returnValue = new com.earthview.world.graphic.GpuSharedParametersPtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "GpuSharedParametersPtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.GpuSharedParametersPtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "GpuSharedParametersPtr");
			}
			return __returnValue;
		}
		
		native private void set_second_GpuSharedParametersPtr (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.GpuSharedParametersPtr second)
		{
			long secondParamValue = second.nativeObject.pointer;
			
			set_second_GpuSharedParametersPtr(this.nativeObject.pointer, secondParamValue);
		}
		
		public GpuSharedParametersPtrPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public GpuSharedParametersPtrPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static GpuSharedParametersPtrPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			GpuSharedParametersPtrPair obj = null;
 			if(baseObj instanceof GpuSharedParametersPtrPair)
			{
				obj = (GpuSharedParametersPtrPair)baseObj;
			} else {
				obj = new GpuSharedParametersPtrPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "GpuSharedParametersPtrPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class GpuSharedParametersPtrPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			GpuSharedParametersPtrPair emptyInstance = new GpuSharedParametersPtrPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class GpuSharedParametersPtrIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgramManager::GpuSharedParametersPtrIterator", new GpuSharedParametersPtrIteratorClassFactory());
		}

		public GpuSharedParametersPtrIterator(com.earthview.world.graphic.GpuProgramManager.SharedParametersMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("GpuSharedParametersPtrIterator", list);
		}

		public GpuSharedParametersPtrIterator(com.earthview.world.graphic.GpuProgramManager.GpuSharedParametersPtrIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("GpuSharedParametersPtrIterator", list);
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
		native private int nextKey_void(long pNativeObject);
		public int nextKey()
		{
			int returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		public com.earthview.world.graphic.GpuSharedParametersPtr nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			com.earthview.world.graphic.GpuSharedParametersPtr __returnValue = new com.earthview.world.graphic.GpuSharedParametersPtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "GpuSharedParametersPtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.GpuSharedParametersPtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "GpuSharedParametersPtr");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		public com.earthview.world.graphic.GpuSharedParametersPtr nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.GpuSharedParametersPtr __returnValue = new com.earthview.world.graphic.GpuSharedParametersPtr(CreatedWhenConstruct.CWC_NotToCreate, "GpuSharedParametersPtr");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.GpuSharedParametersPtr)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "GpuSharedParametersPtr");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.GpuSharedParametersPtr next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			com.earthview.world.graphic.GpuSharedParametersPtr __returnValue = new com.earthview.world.graphic.GpuSharedParametersPtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "GpuSharedParametersPtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.GpuSharedParametersPtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "GpuSharedParametersPtr");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.GpuProgramManager.GpuSharedParametersPtrPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.GpuProgramManager.GpuSharedParametersPtrPair __returnValue = new com.earthview.world.graphic.GpuProgramManager.GpuSharedParametersPtrPair(CreatedWhenConstruct.CWC_NotToCreate, "GpuSharedParametersPtrPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.GpuProgramManager.GpuSharedParametersPtrPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "GpuSharedParametersPtrPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.GpuProgramManager.GpuSharedParametersPtrPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.GpuProgramManager.GpuSharedParametersPtrPair __returnValue = new com.earthview.world.graphic.GpuProgramManager.GpuSharedParametersPtrPair(CreatedWhenConstruct.CWC_NotToCreate, "GpuSharedParametersPtrPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.GpuProgramManager.GpuSharedParametersPtrPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "GpuSharedParametersPtrPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.GpuProgramManager.GpuSharedParametersPtrPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.GpuProgramManager.GpuSharedParametersPtrPair __returnValue = new com.earthview.world.graphic.GpuProgramManager.GpuSharedParametersPtrPair(CreatedWhenConstruct.CWC_NotToCreate, "GpuSharedParametersPtrPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.GpuProgramManager.GpuSharedParametersPtrPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "GpuSharedParametersPtrPair");
			}
			return __returnValue;
		}
		public GpuSharedParametersPtrIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public GpuSharedParametersPtrIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static GpuSharedParametersPtrIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			GpuSharedParametersPtrIterator obj = null;
 			if(baseObj instanceof GpuSharedParametersPtrIterator)
			{
				obj = (GpuSharedParametersPtrIterator)baseObj;
			} else {
				obj = new GpuSharedParametersPtrIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "GpuSharedParametersPtrIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class GpuSharedParametersPtrIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			GpuSharedParametersPtrIterator emptyInstance = new GpuSharedParametersPtrIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///typedef map<EVString, Microcode>::type MicrocodeMap;
	public static class MicrocodeMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgramManager::MicrocodeMap", new MicrocodeMapClassFactory());
		}

		public MicrocodeMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("MicrocodeMap", null);
		}

		native private boolean push_EVString_MemoryDataStreamPtr(long pNativeObject, String key, long val);
		public boolean push(String key, com.earthview.world.core.MemoryDataStreamPtr val)
		{
			String keyParamValue = key;
			long valParamValue = val.nativeObject.pointer;
			boolean returnValue = push_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, keyParamValue, valParamValue);
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
		public com.earthview.world.core.MemoryDataStreamPtr OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate, "MemoryDataStreamPtr");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
			}
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		public com.earthview.world.core.MemoryDataStreamPtr get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate, "MemoryDataStreamPtr");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
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
		public MicrocodeMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public MicrocodeMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static MicrocodeMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			MicrocodeMap obj = null;
 			if(baseObj instanceof MicrocodeMap)
			{
				obj = (MicrocodeMap)baseObj;
			} else {
				obj = new MicrocodeMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "MicrocodeMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class MicrocodeMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			MicrocodeMap emptyInstance = new MicrocodeMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  long createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_GpuProgramType_EVString_callback(String name, long handle, String group, boolean isManual, long ref_loader, int gptype, String syntaxCode)
	{
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
		com.earthview.world.graphic.GpuProgramType gptypeParamValue = com.earthview.world.graphic.GpuProgramType.toEnum(gptype);
		String syntaxCodeParamValue = syntaxCode;
		com.earthview.world.graphic.Resource returnValue = createImpl(nameParamValue, handleParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, gptypeParamValue, syntaxCodeParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_GpuProgramType_EVString(long pNativeObject, String name, long handle, String group, boolean isManual, long ref_loader, int gptype, String syntaxCode);
	//// Specialised create method with specific parameters
	public com.earthview.world.graphic.Resource createImpl(String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.graphic.GpuProgramType gptype, String syntaxCode)
	{
		String nameParamValue = name;
		long handleParamValue = handle.nativeObject.pointer;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		int gptypeParamValue = gptype.getValue();
		String syntaxCodeParamValue = syntaxCode;
		long returnValue = createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_GpuProgramType_EVString(this.nativeObject.pointer, nameParamValue, handleParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, gptypeParamValue, syntaxCodeParamValue);
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
	native private long createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_GpuProgramType_EVString_NoVirtual(long pNativeObject, String name, long handle, String group, boolean isManual, long ref_loader, int gptype, String syntaxCode);
	protected com.earthview.world.graphic.Resource createImpl_NoVirtual(String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.graphic.GpuProgramType gptype, String syntaxCode)
	{
		String nameParamValue = name;
		long handleParamValue = handle.nativeObject.pointer;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		int gptypeParamValue = gptype.getValue();
		String syntaxCodeParamValue = syntaxCode;
		long returnValue = createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_GpuProgramType_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, handleParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, gptypeParamValue, syntaxCodeParamValue);
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

	public GpuProgramManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCGpuProgramManagerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.GpuProgramManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long load_EVString_EVString_EVString_GpuProgramType_EVString_callback(String name, String groupName, String filename, int gptype, String syntaxCode)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		String filenameParamValue = filename;
		com.earthview.world.graphic.GpuProgramType gptypeParamValue = com.earthview.world.graphic.GpuProgramType.toEnum(gptype);
		String syntaxCodeParamValue = syntaxCode;
		com.earthview.world.graphic.GpuProgramPtr returnValue = load(nameParamValue, groupNameParamValue, filenameParamValue, gptypeParamValue, syntaxCodeParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long load_EVString_EVString_EVString_GpuProgramType_EVString(long pNativeObject, String name, String groupName, String filename, int gptype, String syntaxCode);
	public com.earthview.world.graphic.GpuProgramPtr load(String name, String groupName, String filename, com.earthview.world.graphic.GpuProgramType gptype, String syntaxCode)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		String filenameParamValue = filename;
		int gptypeParamValue = gptype.getValue();
		String syntaxCodeParamValue = syntaxCode;
		long returnValue = load_EVString_EVString_EVString_GpuProgramType_EVString(this.nativeObject.pointer, nameParamValue, groupNameParamValue, filenameParamValue, gptypeParamValue, syntaxCodeParamValue);
		com.earthview.world.graphic.GpuProgramPtr __returnValue = new com.earthview.world.graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		}
		return __returnValue;
	}
	native private long load_EVString_EVString_EVString_GpuProgramType_EVString_NoVirtual(long pNativeObject, String name, String groupName, String filename, int gptype, String syntaxCode);
	protected com.earthview.world.graphic.GpuProgramPtr load_NoVirtual(String name, String groupName, String filename, com.earthview.world.graphic.GpuProgramType gptype, String syntaxCode)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		String filenameParamValue = filename;
		int gptypeParamValue = gptype.getValue();
		String syntaxCodeParamValue = syntaxCode;
		long returnValue = load_EVString_EVString_EVString_GpuProgramType_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, groupNameParamValue, filenameParamValue, gptypeParamValue, syntaxCodeParamValue);
		com.earthview.world.graphic.GpuProgramPtr __returnValue = new com.earthview.world.graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		}
		return __returnValue;
	}

	protected  long loadFromString_EVString_EVString_EVString_GpuProgramType_EVString_callback(String name, String groupName, String code, int gptype, String syntaxCode)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		String codeParamValue = code;
		com.earthview.world.graphic.GpuProgramType gptypeParamValue = com.earthview.world.graphic.GpuProgramType.toEnum(gptype);
		String syntaxCodeParamValue = syntaxCode;
		com.earthview.world.graphic.GpuProgramPtr returnValue = loadFromString(nameParamValue, groupNameParamValue, codeParamValue, gptypeParamValue, syntaxCodeParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long loadFromString_EVString_EVString_EVString_GpuProgramType_EVString(long pNativeObject, String name, String groupName, String code, int gptype, String syntaxCode);
	public com.earthview.world.graphic.GpuProgramPtr loadFromString(String name, String groupName, String code, com.earthview.world.graphic.GpuProgramType gptype, String syntaxCode)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		String codeParamValue = code;
		int gptypeParamValue = gptype.getValue();
		String syntaxCodeParamValue = syntaxCode;
		long returnValue = loadFromString_EVString_EVString_EVString_GpuProgramType_EVString(this.nativeObject.pointer, nameParamValue, groupNameParamValue, codeParamValue, gptypeParamValue, syntaxCodeParamValue);
		com.earthview.world.graphic.GpuProgramPtr __returnValue = new com.earthview.world.graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		}
		return __returnValue;
	}
	native private long loadFromString_EVString_EVString_EVString_GpuProgramType_EVString_NoVirtual(long pNativeObject, String name, String groupName, String code, int gptype, String syntaxCode);
	protected com.earthview.world.graphic.GpuProgramPtr loadFromString_NoVirtual(String name, String groupName, String code, com.earthview.world.graphic.GpuProgramType gptype, String syntaxCode)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		String codeParamValue = code;
		int gptypeParamValue = gptype.getValue();
		String syntaxCodeParamValue = syntaxCode;
		long returnValue = loadFromString_EVString_EVString_EVString_GpuProgramType_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, groupNameParamValue, codeParamValue, gptypeParamValue, syntaxCodeParamValue);
		com.earthview.world.graphic.GpuProgramPtr __returnValue = new com.earthview.world.graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		}
		return __returnValue;
	}

	protected  long getSupportedSyntax_void_callback()
	{
		com.earthview.world.graphic.ShaderProfiles returnValue = getSupportedSyntax();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSupportedSyntax_void(long pNativeObject);
	public com.earthview.world.graphic.ShaderProfiles getSupportedSyntax()
	{
		long returnValue = getSupportedSyntax_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ShaderProfiles __returnValue = new com.earthview.world.graphic.ShaderProfiles(CreatedWhenConstruct.CWC_NotToCreate, "ShaderProfiles");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShaderProfiles)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ShaderProfiles");
		}
		return __returnValue;
	}
	native private long getSupportedSyntax_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ShaderProfiles getSupportedSyntax_NoVirtual()
	{
		long returnValue = getSupportedSyntax_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.ShaderProfiles __returnValue = new com.earthview.world.graphic.ShaderProfiles(CreatedWhenConstruct.CWC_NotToCreate, "ShaderProfiles");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShaderProfiles)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ShaderProfiles");
		}
		return __returnValue;
	}

	protected  boolean isSyntaxSupported_EVString_callback(String syntaxCode)
	{
		String syntaxCodeParamValue = syntaxCode;
		boolean returnValue = isSyntaxSupported(syntaxCodeParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isSyntaxSupported_EVString(long pNativeObject, String syntaxCode);
	public boolean isSyntaxSupported(String syntaxCode)
	{
		String syntaxCodeParamValue = syntaxCode;
		boolean returnValue = isSyntaxSupported_EVString(this.nativeObject.pointer, syntaxCodeParamValue);
		return returnValue;
	}
	native private boolean isSyntaxSupported_EVString_NoVirtual(long pNativeObject, String syntaxCode);
	protected boolean isSyntaxSupported_NoVirtual(String syntaxCode)
	{
		String syntaxCodeParamValue = syntaxCode;
		boolean returnValue = isSyntaxSupported_EVString_NoVirtual(this.nativeObject.pointer, syntaxCodeParamValue);
		return returnValue;
	}

	protected  long createParameters_void_callback()
	{
		com.earthview.world.graphic.GpuProgramParametersSharedPtr returnValue = createParameters();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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

	protected  long createProgram_EVString_EVString_EVString_GpuProgramType_EVString_callback(String name, String groupName, String filename, int gptype, String syntaxCode)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		String filenameParamValue = filename;
		com.earthview.world.graphic.GpuProgramType gptypeParamValue = com.earthview.world.graphic.GpuProgramType.toEnum(gptype);
		String syntaxCodeParamValue = syntaxCode;
		com.earthview.world.graphic.GpuProgramPtr returnValue = createProgram(nameParamValue, groupNameParamValue, filenameParamValue, gptypeParamValue, syntaxCodeParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createProgram_EVString_EVString_EVString_GpuProgramType_EVString(long pNativeObject, String name, String groupName, String filename, int gptype, String syntaxCode);
	public com.earthview.world.graphic.GpuProgramPtr createProgram(String name, String groupName, String filename, com.earthview.world.graphic.GpuProgramType gptype, String syntaxCode)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		String filenameParamValue = filename;
		int gptypeParamValue = gptype.getValue();
		String syntaxCodeParamValue = syntaxCode;
		long returnValue = createProgram_EVString_EVString_EVString_GpuProgramType_EVString(this.nativeObject.pointer, nameParamValue, groupNameParamValue, filenameParamValue, gptypeParamValue, syntaxCodeParamValue);
		com.earthview.world.graphic.GpuProgramPtr __returnValue = new com.earthview.world.graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		}
		return __returnValue;
	}
	native private long createProgram_EVString_EVString_EVString_GpuProgramType_EVString_NoVirtual(long pNativeObject, String name, String groupName, String filename, int gptype, String syntaxCode);
	protected com.earthview.world.graphic.GpuProgramPtr createProgram_NoVirtual(String name, String groupName, String filename, com.earthview.world.graphic.GpuProgramType gptype, String syntaxCode)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		String filenameParamValue = filename;
		int gptypeParamValue = gptype.getValue();
		String syntaxCodeParamValue = syntaxCode;
		long returnValue = createProgram_EVString_EVString_EVString_GpuProgramType_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, groupNameParamValue, filenameParamValue, gptypeParamValue, syntaxCodeParamValue);
		com.earthview.world.graphic.GpuProgramPtr __returnValue = new com.earthview.world.graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		}
		return __returnValue;
	}

	protected  long createProgramFromString_EVString_EVString_EVString_GpuProgramType_EVString_callback(String name, String groupName, String code, int gptype, String syntaxCode)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		String codeParamValue = code;
		com.earthview.world.graphic.GpuProgramType gptypeParamValue = com.earthview.world.graphic.GpuProgramType.toEnum(gptype);
		String syntaxCodeParamValue = syntaxCode;
		com.earthview.world.graphic.GpuProgramPtr returnValue = createProgramFromString(nameParamValue, groupNameParamValue, codeParamValue, gptypeParamValue, syntaxCodeParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createProgramFromString_EVString_EVString_EVString_GpuProgramType_EVString(long pNativeObject, String name, String groupName, String code, int gptype, String syntaxCode);
	public com.earthview.world.graphic.GpuProgramPtr createProgramFromString(String name, String groupName, String code, com.earthview.world.graphic.GpuProgramType gptype, String syntaxCode)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		String codeParamValue = code;
		int gptypeParamValue = gptype.getValue();
		String syntaxCodeParamValue = syntaxCode;
		long returnValue = createProgramFromString_EVString_EVString_EVString_GpuProgramType_EVString(this.nativeObject.pointer, nameParamValue, groupNameParamValue, codeParamValue, gptypeParamValue, syntaxCodeParamValue);
		com.earthview.world.graphic.GpuProgramPtr __returnValue = new com.earthview.world.graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		}
		return __returnValue;
	}
	native private long createProgramFromString_EVString_EVString_EVString_GpuProgramType_EVString_NoVirtual(long pNativeObject, String name, String groupName, String code, int gptype, String syntaxCode);
	protected com.earthview.world.graphic.GpuProgramPtr createProgramFromString_NoVirtual(String name, String groupName, String code, com.earthview.world.graphic.GpuProgramType gptype, String syntaxCode)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		String codeParamValue = code;
		int gptypeParamValue = gptype.getValue();
		String syntaxCodeParamValue = syntaxCode;
		long returnValue = createProgramFromString_EVString_EVString_EVString_GpuProgramType_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, groupNameParamValue, codeParamValue, gptypeParamValue, syntaxCodeParamValue);
		com.earthview.world.graphic.GpuProgramPtr __returnValue = new com.earthview.world.graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		}
		return __returnValue;
	}

	protected  long create_EVString_EVString_GpuProgramType_EVString_ev_bool_CManualResourceLoader_callback(String name, String group, int gptype, String syntaxCode, boolean isManual, long ref_loader)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.GpuProgramType gptypeParamValue = com.earthview.world.graphic.GpuProgramType.toEnum(gptype);
		String syntaxCodeParamValue = syntaxCode;
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
		com.earthview.world.graphic.ResourcePtr returnValue = create(nameParamValue, groupParamValue, gptypeParamValue, syntaxCodeParamValue, isManualParamValue, ref_loaderParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long create_EVString_EVString_GpuProgramType_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String name, String group, int gptype, String syntaxCode, boolean isManual, long ref_loader);
	public com.earthview.world.graphic.ResourcePtr create(String name, String group, com.earthview.world.graphic.GpuProgramType gptype, String syntaxCode, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int gptypeParamValue = gptype.getValue();
		String syntaxCodeParamValue = syntaxCode;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long returnValue = create_EVString_EVString_GpuProgramType_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, nameParamValue, groupParamValue, gptypeParamValue, syntaxCodeParamValue, isManualParamValue, ref_loaderParamValue);
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
	native private long create_EVString_EVString_GpuProgramType_EVString_ev_bool_CManualResourceLoader_NoVirtual(long pNativeObject, String name, String group, int gptype, String syntaxCode, boolean isManual, long ref_loader);
	protected com.earthview.world.graphic.ResourcePtr create_NoVirtual(String name, String group, com.earthview.world.graphic.GpuProgramType gptype, String syntaxCode, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int gptypeParamValue = gptype.getValue();
		String syntaxCodeParamValue = syntaxCode;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long returnValue = create_EVString_EVString_GpuProgramType_EVString_ev_bool_CManualResourceLoader_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, gptypeParamValue, syntaxCodeParamValue, isManualParamValue, ref_loaderParamValue);
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

	protected  long create_EVString_EVString_GpuProgramType_EVString_ev_bool_callback(String name, String group, int gptype, String syntaxCode, boolean isManual)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.GpuProgramType gptypeParamValue = com.earthview.world.graphic.GpuProgramType.toEnum(gptype);
		String syntaxCodeParamValue = syntaxCode;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ResourcePtr returnValue = create(nameParamValue, groupParamValue, gptypeParamValue, syntaxCodeParamValue, isManualParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long create_EVString_EVString_GpuProgramType_EVString_ev_bool(long pNativeObject, String name, String group, int gptype, String syntaxCode, boolean isManual);
	public com.earthview.world.graphic.ResourcePtr create(String name, String group, com.earthview.world.graphic.GpuProgramType gptype, String syntaxCode, boolean isManual)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int gptypeParamValue = gptype.getValue();
		String syntaxCodeParamValue = syntaxCode;
		boolean isManualParamValue = isManual;
		long returnValue = create_EVString_EVString_GpuProgramType_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, groupParamValue, gptypeParamValue, syntaxCodeParamValue, isManualParamValue);
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
	native private long create_EVString_EVString_GpuProgramType_EVString_ev_bool_NoVirtual(long pNativeObject, String name, String group, int gptype, String syntaxCode, boolean isManual);
	protected com.earthview.world.graphic.ResourcePtr create_NoVirtual(String name, String group, com.earthview.world.graphic.GpuProgramType gptype, String syntaxCode, boolean isManual)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int gptypeParamValue = gptype.getValue();
		String syntaxCodeParamValue = syntaxCode;
		boolean isManualParamValue = isManual;
		long returnValue = create_EVString_EVString_GpuProgramType_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, gptypeParamValue, syntaxCodeParamValue, isManualParamValue);
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

	protected  long create_EVString_EVString_GpuProgramType_EVString_callback(String name, String group, int gptype, String syntaxCode)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.GpuProgramType gptypeParamValue = com.earthview.world.graphic.GpuProgramType.toEnum(gptype);
		String syntaxCodeParamValue = syntaxCode;
		com.earthview.world.graphic.ResourcePtr returnValue = create(nameParamValue, groupParamValue, gptypeParamValue, syntaxCodeParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long create_EVString_EVString_GpuProgramType_EVString(long pNativeObject, String name, String group, int gptype, String syntaxCode);
	public com.earthview.world.graphic.ResourcePtr create(String name, String group, com.earthview.world.graphic.GpuProgramType gptype, String syntaxCode)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int gptypeParamValue = gptype.getValue();
		String syntaxCodeParamValue = syntaxCode;
		long returnValue = create_EVString_EVString_GpuProgramType_EVString(this.nativeObject.pointer, nameParamValue, groupParamValue, gptypeParamValue, syntaxCodeParamValue);
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
	native private long create_EVString_EVString_GpuProgramType_EVString_NoVirtual(long pNativeObject, String name, String group, int gptype, String syntaxCode);
	protected com.earthview.world.graphic.ResourcePtr create_NoVirtual(String name, String group, com.earthview.world.graphic.GpuProgramType gptype, String syntaxCode)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int gptypeParamValue = gptype.getValue();
		String syntaxCodeParamValue = syntaxCode;
		long returnValue = create_EVString_EVString_GpuProgramType_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, gptypeParamValue, syntaxCodeParamValue);
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

	native private long getByName_EVString_ev_bool(long pNativeObject, String name, boolean preferHighLevelPrograms);
	public com.earthview.world.graphic.ResourcePtr getByName(String name, boolean preferHighLevelPrograms)
	{
		String nameParamValue = name;
		boolean preferHighLevelProgramsParamValue = preferHighLevelPrograms;
		long returnValue = getByName_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, preferHighLevelProgramsParamValue);
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

	native private long getByName_EVString_EVString(long pNativeObject, String name, String groupName);
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

	native private long getByName_EVString_EVString_ev_bool(long pNativeObject, String name, String groupName, boolean preferHighLevelPrograms);
	public com.earthview.world.graphic.ResourcePtr getByName(String name, String groupName, boolean preferHighLevelPrograms)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		boolean preferHighLevelProgramsParamValue = preferHighLevelPrograms;
		long returnValue = getByName_EVString_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, groupNameParamValue, preferHighLevelProgramsParamValue);
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
	protected  long createSharedParameters_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.GpuSharedParametersPtr returnValue = createSharedParameters(nameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createSharedParameters_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.GpuSharedParametersPtr createSharedParameters(String name)
	{
		String nameParamValue = name;
		long returnValue = createSharedParameters_EVString(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.graphic.GpuSharedParametersPtr __returnValue = new com.earthview.world.graphic.GpuSharedParametersPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuSharedParametersPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuSharedParametersPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuSharedParametersPtr");
		}
		return __returnValue;
	}
	native private long createSharedParameters_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.GpuSharedParametersPtr createSharedParameters_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = createSharedParameters_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.graphic.GpuSharedParametersPtr __returnValue = new com.earthview.world.graphic.GpuSharedParametersPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuSharedParametersPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuSharedParametersPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuSharedParametersPtr");
		}
		return __returnValue;
	}

	protected  long getSharedParameters_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.GpuSharedParametersPtr returnValue = getSharedParameters(nameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSharedParameters_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.GpuSharedParametersPtr getSharedParameters(String name)
	{
		String nameParamValue = name;
		long returnValue = getSharedParameters_EVString(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.graphic.GpuSharedParametersPtr __returnValue = new com.earthview.world.graphic.GpuSharedParametersPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuSharedParametersPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuSharedParametersPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuSharedParametersPtr");
		}
		return __returnValue;
	}
	native private long getSharedParameters_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.GpuSharedParametersPtr getSharedParameters_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = getSharedParameters_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.graphic.GpuSharedParametersPtr __returnValue = new com.earthview.world.graphic.GpuSharedParametersPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuSharedParametersPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuSharedParametersPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuSharedParametersPtr");
		}
		return __returnValue;
	}

	protected  long getAvailableSharedParameters_void_callback()
	{
		com.earthview.world.graphic.GpuProgramManager.SharedParametersMap returnValue = getAvailableSharedParameters();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAvailableSharedParameters_void(long pNativeObject);
	public com.earthview.world.graphic.GpuProgramManager.SharedParametersMap getAvailableSharedParameters()
	{
		long returnValue = getAvailableSharedParameters_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramManager.SharedParametersMap __returnValue = new com.earthview.world.graphic.GpuProgramManager.SharedParametersMap(CreatedWhenConstruct.CWC_NotToCreate, "SharedParametersMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramManager.SharedParametersMap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "SharedParametersMap");
		}
		return __returnValue;
	}
	native private long getAvailableSharedParameters_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.GpuProgramManager.SharedParametersMap getAvailableSharedParameters_NoVirtual()
	{
		long returnValue = getAvailableSharedParameters_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramManager.SharedParametersMap __returnValue = new com.earthview.world.graphic.GpuProgramManager.SharedParametersMap(CreatedWhenConstruct.CWC_NotToCreate, "SharedParametersMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramManager.SharedParametersMap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "SharedParametersMap");
		}
		return __returnValue;
	}

	native private boolean getSaveMicrocodesToCache_void(long pNativeObject);
	public boolean getSaveMicrocodesToCache()
	{
		boolean returnValue = getSaveMicrocodesToCache_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean canGetCompiledShaderBuffer_void(long pNativeObject);
	public boolean canGetCompiledShaderBuffer()
	{
		boolean returnValue = canGetCompiledShaderBuffer_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSaveMicrocodesToCache_ev_bool(long pNativeObject, boolean val);
	public void setSaveMicrocodesToCache(boolean val)
	{
		boolean valParamValue = val;
		setSaveMicrocodesToCache_ev_bool(this.nativeObject.pointer, valParamValue);
	}
	native private boolean isMicrocodeAvailableInCache_EVString(long pNativeObject, String name);
	public boolean isMicrocodeAvailableInCache(String name)
	{
		String nameParamValue = name;
		boolean returnValue = isMicrocodeAvailableInCache_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private long getMicrocodeFromCache_EVString(long pNativeObject, String name);
	public com.earthview.world.core.MemoryDataStreamPtr getMicrocodeFromCache(String name)
	{
		String nameParamValue = name;
		long returnValue = getMicrocodeFromCache_EVString(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate, "MemoryDataStreamPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private long createMicrocode_size_t(long pNativeObject, long size);
	public com.earthview.world.core.MemoryDataStreamPtr createMicrocode(long size)
	{
		long sizeParamValue = size;
		long returnValue = createMicrocode_size_t(this.nativeObject.pointer, sizeParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private void addMicrocodeToCache_EVString_MemoryDataStreamPtr(long pNativeObject, String name, long microcode);
	public void addMicrocodeToCache(String name, com.earthview.world.core.MemoryDataStreamPtr microcode)
	{
		String nameParamValue = name;
		long microcodeParamValue = microcode.nativeObject.pointer;
		addMicrocodeToCache_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, nameParamValue, microcodeParamValue);
	}
	native private void saveMicrocodeCache_DataStreamPtr(long pNativeObject, long stream);
	public void saveMicrocodeCache(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		saveMicrocodeCache_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
	}
	native private void loadMicrocodeCache_DataStreamPtr(long pNativeObject, long stream);
	public void loadMicrocodeCache(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		loadMicrocodeCache_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
	}
	public GpuProgramManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GpuProgramManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 创建(但不加载)资源，若存在则直接返回
	 */
	public com.earthview.world.graphic.ResourcePtr create(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		return super.create_NoVirtual(name, group, isManual, ref_loader, createParams);
	}
	public com.earthview.world.graphic.ResourcePtr create(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		return super.create_NoVirtual(name, group, isManual, ref_loader);
	}
	public com.earthview.world.graphic.ResourcePtr create(String name, String group, boolean isManual)
	{
		return super.create_NoVirtual(name, group, isManual);
	}
	public com.earthview.world.graphic.ResourcePtr create(String name, String group)
	{
		return super.create_NoVirtual(name, group);
	}
	/**
	 * 只创建(不加载)资源，不考虑同名的资源是否已经存在，创建后也不再管理该资源
	 */
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		return super.createUnmanaged_NoVirtual(name, isManual, ref_loader, createParams);
	}
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		return super.createUnmanaged_NoVirtual(name, isManual, ref_loader);
	}
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual)
	{
		return super.createUnmanaged_NoVirtual(name, isManual);
	}
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name)
	{
		return super.createUnmanaged_NoVirtual(name);
	}
	/**
	 * 创建或获取资源
	 */
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		return super.createOrRetrieve_NoVirtual(name, group, isManual, ref_loader, createParams);
	}
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		return super.createOrRetrieve_NoVirtual(name, group, isManual, ref_loader);
	}
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual)
	{
		return super.createOrRetrieve_NoVirtual(name, group, isManual);
	}
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group)
	{
		return super.createOrRetrieve_NoVirtual(name, group);
	}
	/**
	 * 设置内存总容量
	 */
	public void setMemoryBudget(long bytes)
	{
		super.setMemoryBudget_NoVirtual(bytes);
	}
	/**
	 * 获取内存总容量
	 */
	public long getMemoryBudget()
	{
		return super.getMemoryBudget_NoVirtual();
	}
	/**
	 * 获取已经占用的内存容量
	 */
	public long getMemoryUsage()
	{
		return super.getMemoryUsage_NoVirtual();
	}
	/**
	 * 卸载资源
	 */
	public void unload(String name)
	{
		super.unload_NoVirtual(name);
	}
	public void unload(ULongPointer handle)
	{
		super.unload_NoVirtual(handle);
	}
	/**
	 * 卸载所有资源
	 * @param reloadableOnly 传递true，则只卸载可以重新加载的资源
	 */
	public void unloadAll(boolean reloadableOnly)
	{
		super.unloadAll_NoVirtual(reloadableOnly);
	}
	public void unloadAll()
	{
		super.unloadAll_NoVirtual();
	}
	/**
	 * 重新加载所有资源
	 */
	public void reloadAll(boolean reloadableOnly)
	{
		super.reloadAll_NoVirtual(reloadableOnly);
	}
	public void reloadAll()
	{
		super.reloadAll_NoVirtual();
	}
	/**
	 * 卸载所有未被引用的资源
	 * @param reloadableOnly 传递true，则只卸载可以重新加载的资源
	 */
	public void unloadUnreferencedResources(boolean reloadableOnly)
	{
		super.unloadUnreferencedResources_NoVirtual(reloadableOnly);
	}
	public void unloadUnreferencedResources()
	{
		super.unloadUnreferencedResources_NoVirtual();
	}
	/**
	 * 重新加载所有未被引用的资源
	 * @param reloadableOnly 
	 */
	public void reloadUnreferencedResources(boolean reloadableOnly)
	{
		super.reloadUnreferencedResources_NoVirtual(reloadableOnly);
	}
	public void reloadUnreferencedResources()
	{
		super.reloadUnreferencedResources_NoVirtual();
	}
	/**
	 * 移除资源如果资源没有其它引用，则会引起资源的析构;如果还有其它引用，则只从管理器中移除，直到所有引用都释放才会导致资源的析构
	 * @param reloadableOnly 
	 */
	public void remove(com.earthview.world.graphic.ResourcePtr r)
	{
		super.remove_NoVirtual(r);
	}
	public void remove(String name)
	{
		super.remove_NoVirtual(name);
	}
	public void remove(ULongPointer handle)
	{
		super.remove_NoVirtual(handle);
	}
	public void remove(String name, String groupname)
	{
		super.remove_NoVirtual(name, groupname);
	}
	/**
	 * 移除所有资源如果资源没有其它引用，则会引起资源的析构;如果还有其它引用，则只从管理器中移除，直到所有引用都释放才会导致资源的析构
	 * @param reloadableOnly 
	 */
	public void removeAll()
	{
		super.removeAll_NoVirtual();
	}
	/**
	 * 移除所有未被引用的资源				
	 * @param reloadableOnly 传递true，则只卸载可以重新加载的资源
	 */
	public void removeUnreferencedResources(boolean reloadableOnly)
	{
		super.removeUnreferencedResources_NoVirtual(reloadableOnly);
	}
	public void removeUnreferencedResources()
	{
		super.removeUnreferencedResources_NoVirtual();
	}
	public void removeUnreferencedResource(String name)
	{
		super.removeUnreferencedResource_NoVirtual(name);
	}
	public void removeUnreferencedResource(String name, String groupName)
	{
		super.removeUnreferencedResource_NoVirtual(name, groupName);
	}
	/**
	 * 卸载所有未被引用的资源				
	 * @param  
	 */
	public void unloadUnreferencedResource(String name, String groupName)
	{
		super.unloadUnreferencedResource_NoVirtual(name, groupName);
	}
	public void unloadUnreferencedResource(String name, String groupName, int useCount)
	{
		super.unloadUnreferencedResource_NoVirtual(name, groupName, useCount);
	}
	public com.earthview.world.graphic.ResourcePtr getByHandle(ULongPointer handle)
	{
		return super.getByHandle_NoVirtual(handle);
	}
	/**
	 * 判断资源是否存在于资源管理器中				
	 * @param  
	 */
	public boolean resourceExists(String name)
	{
		return super.resourceExists_NoVirtual(name);
	}
	public boolean resourceExists(ULongPointer handle)
	{
		return super.resourceExists_NoVirtual(handle);
	}
	/**
	 * 通知资源被开始使用				
	 * @param  
	 */
	public void _notifyResourceTouched(com.earthview.world.graphic.Resource res)
	{
		super._notifyResourceTouched_NoVirtual(res);
	}
	/**
	 * 通知资源被加载完成			
	 * @param  
	 */
	public void _notifyResourceLoaded(com.earthview.world.graphic.Resource res)
	{
		super._notifyResourceLoaded_NoVirtual(res);
	}
	/**
	 * 通知资源被卸载完成			
	 * @param  
	 */
	public void _notifyResourceUnloaded(com.earthview.world.graphic.Resource res)
	{
		super._notifyResourceUnloaded_NoVirtual(res);
	}
	/**
	 * 准备资源			
	 * @param  
	 */
	public com.earthview.world.graphic.ResourcePtr prepare(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams, boolean backgroundThread)
	{
		return super.prepare_NoVirtual(name, group, isManual, ref_loader, loadParams, backgroundThread);
	}
	public com.earthview.world.graphic.ResourcePtr prepare(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams)
	{
		return super.prepare_NoVirtual(name, group, isManual, ref_loader, loadParams);
	}
	public com.earthview.world.graphic.ResourcePtr prepare(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		return super.prepare_NoVirtual(name, group, isManual, ref_loader);
	}
	public com.earthview.world.graphic.ResourcePtr prepare(String name, String group, boolean isManual)
	{
		return super.prepare_NoVirtual(name, group, isManual);
	}
	/**
	 * 加载资源			
	 * @param  
	 */
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams, boolean backgroundThread)
	{
		return super.load_NoVirtual(name, group, isManual, ref_loader, loadParams, backgroundThread);
	}
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams)
	{
		return super.load_NoVirtual(name, group, isManual, ref_loader, loadParams);
	}
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		return super.load_NoVirtual(name, group, isManual, ref_loader);
	}
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, boolean isManual)
	{
		return super.load_NoVirtual(name, group, isManual);
	}
	public com.earthview.world.graphic.ResourcePtr load(String name, String group)
	{
		return super.load_NoVirtual(name, group);
	}
	public void setVerbose(boolean v)
	{
		super.setVerbose_NoVirtual(v);
	}
	public boolean getVerbose()
	{
		return super.getVerbose_NoVirtual();
	}
	public com.earthview.world.graphic.Resource createImpl(String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		return super.createImpl_NoVirtual(name, handle, group, isManual, loader, createParams);
	}
	public void addImpl(com.earthview.world.graphic.ResourcePtr res)
	{
		super.addImpl_NoVirtual(res);
	}
	public void removeImpl(com.earthview.world.graphic.ResourcePtr res)
	{
		super.removeImpl_NoVirtual(res);
	}
	public void checkUsage()
	{
		super.checkUsage_NoVirtual();
	}
	public com.earthview.world.core.StringVector getScriptPatterns()
	{
		return super.getScriptPatterns_NoVirtual();
	}
	public void parseScript(com.earthview.world.core.DataStreamPtr stream, String groupName)
	{
		super.parseScript_NoVirtual(stream, groupName);
	}
	public double getLoadingOrder()
	{
		return super.getLoadingOrder_NoVirtual();
	}
	
	native protected void register_createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_GpuProgramType_EVString(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_EVString_GpuProgramType_EVString(long pNativeObject, String method);
	native protected void register_loadFromString_EVString_EVString_EVString_GpuProgramType_EVString(long pNativeObject, String method);
	native protected void register_getSupportedSyntax_void(long pNativeObject, String method);
	native protected void register_isSyntaxSupported_EVString(long pNativeObject, String method);
	native protected void register_createParameters_void(long pNativeObject, String method);
	native protected void register_createProgram_EVString_EVString_EVString_GpuProgramType_EVString(long pNativeObject, String method);
	native protected void register_createProgramFromString_EVString_EVString_EVString_GpuProgramType_EVString(long pNativeObject, String method);
	native protected void register_create_EVString_EVString_GpuProgramType_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String method);
	native protected void register_create_EVString_EVString_GpuProgramType_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_create_EVString_EVString_GpuProgramType_EVString(long pNativeObject, String method);
	native protected void register_createSharedParameters_EVString(long pNativeObject, String method);
	native protected void register_getSharedParameters_EVString(long pNativeObject, String method);
	native protected void register_getAvailableSharedParameters_void(long pNativeObject, String method);
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
			this.register_createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_GpuProgramType_EVString(this.nativeObject.pointer, "createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_GpuProgramType_EVString_callback");
			this.register_load_EVString_EVString_EVString_GpuProgramType_EVString(this.nativeObject.pointer, "load_EVString_EVString_EVString_GpuProgramType_EVString_callback");
			this.register_loadFromString_EVString_EVString_EVString_GpuProgramType_EVString(this.nativeObject.pointer, "loadFromString_EVString_EVString_EVString_GpuProgramType_EVString_callback");
			this.register_getSupportedSyntax_void(this.nativeObject.pointer, "getSupportedSyntax_void_callback");
			this.register_isSyntaxSupported_EVString(this.nativeObject.pointer, "isSyntaxSupported_EVString_callback");
			this.register_createParameters_void(this.nativeObject.pointer, "createParameters_void_callback");
			this.register_createProgram_EVString_EVString_EVString_GpuProgramType_EVString(this.nativeObject.pointer, "createProgram_EVString_EVString_EVString_GpuProgramType_EVString_callback");
			this.register_createProgramFromString_EVString_EVString_EVString_GpuProgramType_EVString(this.nativeObject.pointer, "createProgramFromString_EVString_EVString_EVString_GpuProgramType_EVString_callback");
			this.register_create_EVString_EVString_GpuProgramType_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, "create_EVString_EVString_GpuProgramType_EVString_ev_bool_CManualResourceLoader_callback");
			this.register_create_EVString_EVString_GpuProgramType_EVString_ev_bool(this.nativeObject.pointer, "create_EVString_EVString_GpuProgramType_EVString_ev_bool_callback");
			this.register_create_EVString_EVString_GpuProgramType_EVString(this.nativeObject.pointer, "create_EVString_EVString_GpuProgramType_EVString_callback");
			this.register_createSharedParameters_EVString(this.nativeObject.pointer, "createSharedParameters_EVString_callback");
			this.register_getSharedParameters_EVString(this.nativeObject.pointer, "getSharedParameters_EVString_callback");
			this.register_getAvailableSharedParameters_void(this.nativeObject.pointer, "getAvailableSharedParameters_void_callback");
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
	
	public static GpuProgramManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GpuProgramManager obj = null;
 		if(baseObj instanceof GpuProgramManager)
		{
			obj = (GpuProgramManager)baseObj;
		} else {
			obj = new GpuProgramManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGpuProgramManager");
			obj.increaseCast();
		}

		return obj;
	}
}
