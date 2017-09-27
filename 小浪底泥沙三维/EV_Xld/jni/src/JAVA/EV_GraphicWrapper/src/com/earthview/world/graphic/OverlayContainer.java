package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OverlayContainer extends com.earthview.world.graphic.OverlayElement {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::COverlayContainer", new OverlayContainerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCOverlayContainerProxy", new OverlayContainerClassFactory());
	}

	public static class ChildElementMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::COverlayContainer::ChildElementMap", new ChildElementMapClassFactory());
		}

		public ChildElementMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ChildElementMap", null);
		}

		native private boolean push_EVString_COverlayElement(long pNativeObject, String key, long ref_val);
		public boolean push(String key, NativeObjectPointer<com.earthview.world.graphic.OverlayElement> ref_val)
		{
			String keyParamValue = key;
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_EVString_COverlayElement(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
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
		public NativeObjectPointer<com.earthview.world.graphic.OverlayElement> OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.OverlayElement> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.OverlayElement>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		public NativeObjectPointer<com.earthview.world.graphic.OverlayElement> get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.OverlayElement> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.OverlayElement>(new InstancePointer(returnValue));
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
		public ChildElementMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ChildElementMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ChildElementMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ChildElementMap obj = null;
 			if(baseObj instanceof ChildElementMap)
			{
				obj = (ChildElementMap)baseObj;
			} else {
				obj = new ChildElementMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ChildElementMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ChildElementMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ChildElementMap emptyInstance = new ChildElementMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class OverlaycontainerElementPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::COverlayContainer::OverlaycontainerElementPair", new OverlaycontainerElementPairClassFactory());
		}

		public OverlaycontainerElementPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("OverlaycontainerElementPair", null);
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
		public com.earthview.world.graphic.OverlayElement get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.OverlayElement __returnValue = new com.earthview.world.graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate, "COverlayElement");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.OverlayElement)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "COverlayElement");
			}
			return __returnValue;
		}
		
		native private void set_second_COverlayElement (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.OverlayElement second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_COverlayElement(this.nativeObject.pointer, secondParamValue);
		}
		
		public OverlaycontainerElementPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public OverlaycontainerElementPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static OverlaycontainerElementPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			OverlaycontainerElementPair obj = null;
 			if(baseObj instanceof OverlaycontainerElementPair)
			{
				obj = (OverlaycontainerElementPair)baseObj;
			} else {
				obj = new OverlaycontainerElementPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "OverlaycontainerElementPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class OverlaycontainerElementPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			OverlaycontainerElementPair emptyInstance = new OverlaycontainerElementPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ChildElementIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::COverlayContainer::ChildElementIterator", new ChildElementIteratorClassFactory());
		}

		public ChildElementIterator(com.earthview.world.graphic.OverlayContainer.ChildElementMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("ChildElementIterator", list);
		}

		public ChildElementIterator(com.earthview.world.graphic.OverlayContainer.ChildElementIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("ChildElementIterator", list);
		}

		public ChildElementIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ChildElementIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ChildElementIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ChildElementIterator obj = null;
 			if(baseObj instanceof ChildElementIterator)
			{
				obj = (ChildElementIterator)baseObj;
			} else {
				obj = new ChildElementIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ChildElementIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ChildElementIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ChildElementIterator emptyInstance = new ChildElementIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ChildContainerMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::COverlayContainer::ChildContainerMap", new ChildContainerMapClassFactory());
		}

		native private boolean push_ev_uint16_COverlayContainer(long pNativeObject, int key, long ref_val);
		public boolean push(int key, NativeObjectPointer<com.earthview.world.graphic.OverlayContainer> ref_val)
		{
			int keyParamValue = key;
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_ev_uint16_COverlayContainer(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
			return returnValue;
		}
		native private boolean exist_ev_uint16(long pNativeObject, int key);
		public boolean exist(int key)
		{
			int keyParamValue = key;
			boolean returnValue = exist_ev_uint16(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_ev_uint16(long pNativeObject, int key);
		public NativeObjectPointer<com.earthview.world.graphic.OverlayContainer> OperatorIndex(int key)
		{
			int keyParamValue = key;
			long returnValue = OperatorIndex_ev_uint16(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.OverlayContainer> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.OverlayContainer>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_ev_uint16(long pNativeObject, int key);
		public NativeObjectPointer<com.earthview.world.graphic.OverlayContainer> get(int key)
		{
			int keyParamValue = key;
			long returnValue = get_ev_uint16(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.OverlayContainer> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.OverlayContainer>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_ev_uint16(long pNativeObject, int key);
		public void erase(int key)
		{
			int keyParamValue = key;
			erase_ev_uint16(this.nativeObject.pointer, keyParamValue);
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
		public ChildContainerMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ChildContainerMap", null);
		}

		public ChildContainerMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ChildContainerMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ChildContainerMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ChildContainerMap obj = null;
 			if(baseObj instanceof ChildContainerMap)
			{
				obj = (ChildContainerMap)baseObj;
			} else {
				obj = new ChildContainerMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ChildContainerMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ChildContainerMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ChildContainerMap emptyInstance = new ChildContainerMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class OverlayContainerPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::COverlayContainer::OverlayContainerPair", new OverlayContainerPairClassFactory());
		}

		public OverlayContainerPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("OverlayContainerPair", null);
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
		public com.earthview.world.graphic.OverlayContainer get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.OverlayContainer __returnValue = new com.earthview.world.graphic.OverlayContainer(CreatedWhenConstruct.CWC_NotToCreate, "COverlayContainer");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.OverlayContainer)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "COverlayContainer");
			}
			return __returnValue;
		}
		
		native private void set_second_COverlayContainer (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.OverlayContainer second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_COverlayContainer(this.nativeObject.pointer, secondParamValue);
		}
		
		public OverlayContainerPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public OverlayContainerPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static OverlayContainerPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			OverlayContainerPair obj = null;
 			if(baseObj instanceof OverlayContainerPair)
			{
				obj = (OverlayContainerPair)baseObj;
			} else {
				obj = new OverlayContainerPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "OverlayContainerPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class OverlayContainerPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			OverlayContainerPair emptyInstance = new OverlayContainerPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ChildContainerIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::COverlayContainer::ChildContainerIterator", new ChildContainerIteratorClassFactory());
		}

		public ChildContainerIterator(com.earthview.world.graphic.OverlayContainer.ChildContainerMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("ChildContainerIterator", list);
		}

		public ChildContainerIterator(com.earthview.world.graphic.OverlayContainer.ChildContainerIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("ChildContainerIterator", list);
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
		public com.earthview.world.graphic.OverlayContainer nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.OverlayContainer __returnValue = new com.earthview.world.graphic.OverlayContainer(CreatedWhenConstruct.CWC_NotToCreate, "COverlayContainer");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.OverlayContainer)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "COverlayContainer");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.OverlayContainer> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.OverlayContainer> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.OverlayContainer>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.OverlayContainer next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.OverlayContainer __returnValue = new com.earthview.world.graphic.OverlayContainer(CreatedWhenConstruct.CWC_NotToCreate, "COverlayContainer");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.OverlayContainer)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "COverlayContainer");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.OverlayContainer.OverlayContainerPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.OverlayContainer.OverlayContainerPair __returnValue = new com.earthview.world.graphic.OverlayContainer.OverlayContainerPair(CreatedWhenConstruct.CWC_NotToCreate, "OverlayContainerPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.OverlayContainer.OverlayContainerPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "OverlayContainerPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.OverlayContainer.OverlayContainerPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.OverlayContainer.OverlayContainerPair __returnValue = new com.earthview.world.graphic.OverlayContainer.OverlayContainerPair(CreatedWhenConstruct.CWC_NotToCreate, "OverlayContainerPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.OverlayContainer.OverlayContainerPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "OverlayContainerPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.OverlayContainer.OverlayContainerPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.OverlayContainer.OverlayContainerPair __returnValue = new com.earthview.world.graphic.OverlayContainer.OverlayContainerPair(CreatedWhenConstruct.CWC_NotToCreate, "OverlayContainerPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.OverlayContainer.OverlayContainerPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "OverlayContainerPair");
			}
			return __returnValue;
		}
		public ChildContainerIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ChildContainerIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ChildContainerIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ChildContainerIterator obj = null;
 			if(baseObj instanceof ChildContainerIterator)
			{
				obj = (ChildContainerIterator)baseObj;
			} else {
				obj = new ChildContainerIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ChildContainerIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ChildContainerIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ChildContainerIterator emptyInstance = new ChildContainerIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Constructor: do not call direct, use COverlayManager::createOverlayElement
	public OverlayContainer(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCOverlayContainerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.OverlayContainer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void addChild_COverlayElement_callback(long ref_elem)
	{
		com.earthview.world.graphic.OverlayElement ref_elemParamValue = (ref_elem == 0L ? null : new com.earthview.world.graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_elemParamValue != null)
		{
		ref_elemParamValue.setDelegate(true);
		ref_elemParamValue.setInstancePointer(new InstancePointer(ref_elem));
		IClassFactory ref_elemParamValueClassFactory = GlobalClassFactoryMap.get(ref_elemParamValue.getCppInstanceTypeName());
		if (ref_elemParamValueClassFactory != null)
		{
			ref_elemParamValue.setDelegate(true);
			ref_elemParamValue = (com.earthview.world.graphic.OverlayElement)ref_elemParamValueClassFactory.create();
			ref_elemParamValue.setDelegate(true);
			ref_elemParamValue.setInstancePointer(new InstancePointer(ref_elem));
		}
		}
		addChild(ref_elemParamValue);
	}

	native private void addChild_COverlayElement(long pNativeObject, long ref_elem);
	public void addChild(com.earthview.world.graphic.OverlayElement ref_elem)
	{
		long ref_elemParamValue = (ref_elem == null ? 0L : ref_elem.nativeObject.pointer);
		addChild_COverlayElement(this.nativeObject.pointer, ref_elemParamValue);
	}
	native private void addChild_COverlayElement_NoVirtual(long pNativeObject, long ref_elem);
	protected void addChild_NoVirtual(com.earthview.world.graphic.OverlayElement ref_elem)
	{
		long ref_elemParamValue = (ref_elem == null ? 0L : ref_elem.nativeObject.pointer);
		addChild_COverlayElement_NoVirtual(this.nativeObject.pointer, ref_elemParamValue);
	}

	protected  void addChildImpl_COverlayElement_callback(long ref_elem)
	{
		com.earthview.world.graphic.OverlayElement ref_elemParamValue = (ref_elem == 0L ? null : new com.earthview.world.graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_elemParamValue != null)
		{
		ref_elemParamValue.setDelegate(true);
		ref_elemParamValue.setInstancePointer(new InstancePointer(ref_elem));
		IClassFactory ref_elemParamValueClassFactory = GlobalClassFactoryMap.get(ref_elemParamValue.getCppInstanceTypeName());
		if (ref_elemParamValueClassFactory != null)
		{
			ref_elemParamValue.setDelegate(true);
			ref_elemParamValue = (com.earthview.world.graphic.OverlayElement)ref_elemParamValueClassFactory.create();
			ref_elemParamValue.setDelegate(true);
			ref_elemParamValue.setInstancePointer(new InstancePointer(ref_elem));
		}
		}
		addChildImpl(ref_elemParamValue);
	}

	native private void addChildImpl_COverlayElement(long pNativeObject, long ref_elem);
	public void addChildImpl(com.earthview.world.graphic.OverlayElement ref_elem)
	{
		long ref_elemParamValue = (ref_elem == null ? 0L : ref_elem.nativeObject.pointer);
		addChildImpl_COverlayElement(this.nativeObject.pointer, ref_elemParamValue);
	}
	native private void addChildImpl_COverlayElement_NoVirtual(long pNativeObject, long ref_elem);
	protected void addChildImpl_NoVirtual(com.earthview.world.graphic.OverlayElement ref_elem)
	{
		long ref_elemParamValue = (ref_elem == null ? 0L : ref_elem.nativeObject.pointer);
		addChildImpl_COverlayElement_NoVirtual(this.nativeObject.pointer, ref_elemParamValue);
	}

	protected  void addChildImpl_COverlayContainer_callback(long ref_cont)
	{
		com.earthview.world.graphic.OverlayContainer ref_contParamValue = (ref_cont == 0L ? null : new com.earthview.world.graphic.OverlayContainer(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_contParamValue != null)
		{
		ref_contParamValue.setDelegate(true);
		ref_contParamValue.setInstancePointer(new InstancePointer(ref_cont));
		IClassFactory ref_contParamValueClassFactory = GlobalClassFactoryMap.get(ref_contParamValue.getCppInstanceTypeName());
		if (ref_contParamValueClassFactory != null)
		{
			ref_contParamValue.setDelegate(true);
			ref_contParamValue = (com.earthview.world.graphic.OverlayContainer)ref_contParamValueClassFactory.create();
			ref_contParamValue.setDelegate(true);
			ref_contParamValue.setInstancePointer(new InstancePointer(ref_cont));
		}
		}
		addChildImpl(ref_contParamValue);
	}

	native private void addChildImpl_COverlayContainer(long pNativeObject, long ref_cont);
	public void addChildImpl(com.earthview.world.graphic.OverlayContainer ref_cont)
	{
		long ref_contParamValue = (ref_cont == null ? 0L : ref_cont.nativeObject.pointer);
		addChildImpl_COverlayContainer(this.nativeObject.pointer, ref_contParamValue);
	}
	native private void addChildImpl_COverlayContainer_NoVirtual(long pNativeObject, long ref_cont);
	protected void addChildImpl_NoVirtual(com.earthview.world.graphic.OverlayContainer ref_cont)
	{
		long ref_contParamValue = (ref_cont == null ? 0L : ref_cont.nativeObject.pointer);
		addChildImpl_COverlayContainer_NoVirtual(this.nativeObject.pointer, ref_contParamValue);
	}

	protected  void removeChild_EVString_callback(String name)
	{
		String nameParamValue = name;
		removeChild(nameParamValue);
	}

	native private void removeChild_EVString(long pNativeObject, String name);
	public void removeChild(String name)
	{
		String nameParamValue = name;
		removeChild_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void removeChild_EVString_NoVirtual(long pNativeObject, String name);
	protected void removeChild_NoVirtual(String name)
	{
		String nameParamValue = name;
		removeChild_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	protected  long getChild_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.OverlayElement returnValue = getChild(nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getChild_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.OverlayElement getChild(String name)
	{
		String nameParamValue = name;
		long returnValue = getChild_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.OverlayElement __returnValue = new com.earthview.world.graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate, "COverlayElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COverlayElement");
		}
		return __returnValue;
	}
	native private long getChild_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.OverlayElement getChild_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = getChild_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.OverlayElement __returnValue = new com.earthview.world.graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate, "COverlayElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COverlayElement");
		}
		return __returnValue;
	}

	native private void initialise_void(long pNativeObject);
	public void initialise()
	{
		initialise_void(this.nativeObject.pointer);
	}
	native private void initialise_void_NoVirtual(long pNativeObject);
	protected void initialise_NoVirtual()
	{
		initialise_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void _addChild_COverlayElement(long pNativeObject, long elem);
	public void _addChild(com.earthview.world.graphic.OverlayElement elem)
	{
		long elemParamValue = (elem == null ? 0L : elem.nativeObject.pointer);
		_addChild_COverlayElement(this.nativeObject.pointer, elemParamValue);
	}
	native private void _removeChild_COverlayElement(long pNativeObject, long elem);
	public void _removeChild(com.earthview.world.graphic.OverlayElement elem)
	{
		long elemParamValue = (elem == null ? 0L : elem.nativeObject.pointer);
		_removeChild_COverlayElement(this.nativeObject.pointer, elemParamValue);
	}
	native private void _removeChild_EVString(long pNativeObject, String name);
	public void _removeChild(String name)
	{
		String nameParamValue = name;
		_removeChild_EVString(this.nativeObject.pointer, nameParamValue);
	}
	protected  long getChildIterator_void_callback()
	{
		com.earthview.world.graphic.OverlayContainer.ChildElementIterator returnValue = getChildIterator();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getChildIterator_void(long pNativeObject);
	public com.earthview.world.graphic.OverlayContainer.ChildElementIterator getChildIterator()
	{
		long returnValue = getChildIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.OverlayContainer.ChildElementIterator __returnValue = new com.earthview.world.graphic.OverlayContainer.ChildElementIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ChildElementIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayContainer.ChildElementIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ChildElementIterator");
		}
		return __returnValue;
	}
	native private long getChildIterator_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.OverlayContainer.ChildElementIterator getChildIterator_NoVirtual()
	{
		long returnValue = getChildIterator_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.OverlayContainer.ChildElementIterator __returnValue = new com.earthview.world.graphic.OverlayContainer.ChildElementIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ChildElementIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayContainer.ChildElementIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ChildElementIterator");
		}
		return __returnValue;
	}

	protected  long getChildContainerIterator_void_callback()
	{
		com.earthview.world.graphic.OverlayContainer.ChildContainerIterator returnValue = getChildContainerIterator();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getChildContainerIterator_void(long pNativeObject);
	public com.earthview.world.graphic.OverlayContainer.ChildContainerIterator getChildContainerIterator()
	{
		long returnValue = getChildContainerIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.OverlayContainer.ChildContainerIterator __returnValue = new com.earthview.world.graphic.OverlayContainer.ChildContainerIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ChildContainerIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayContainer.ChildContainerIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ChildContainerIterator");
		}
		return __returnValue;
	}
	native private long getChildContainerIterator_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.OverlayContainer.ChildContainerIterator getChildContainerIterator_NoVirtual()
	{
		long returnValue = getChildContainerIterator_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.OverlayContainer.ChildContainerIterator __returnValue = new com.earthview.world.graphic.OverlayContainer.ChildContainerIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ChildContainerIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayContainer.ChildContainerIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ChildContainerIterator");
		}
		return __returnValue;
	}

	native private void _positionsOutOfDate_void(long pNativeObject);
	public void _positionsOutOfDate()
	{
		_positionsOutOfDate_void(this.nativeObject.pointer);
	}
	native private void _positionsOutOfDate_void_NoVirtual(long pNativeObject);
	protected void _positionsOutOfDate_NoVirtual()
	{
		_positionsOutOfDate_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void _update_void(long pNativeObject);
	public void _update()
	{
		_update_void(this.nativeObject.pointer);
	}
	native private void _update_void_NoVirtual(long pNativeObject);
	protected void _update_NoVirtual()
	{
		_update_void_NoVirtual(this.nativeObject.pointer);
	}

	native private int _notifyZOrder_ev_uint16(long pNativeObject, int newZOrder);
	public int _notifyZOrder(int newZOrder)
	{
		int newZOrderParamValue = newZOrder;
		int returnValue = _notifyZOrder_ev_uint16(this.nativeObject.pointer, newZOrderParamValue);
		return returnValue;
	}
	native private int _notifyZOrder_ev_uint16_NoVirtual(long pNativeObject, int newZOrder);
	protected int _notifyZOrder_NoVirtual(int newZOrder)
	{
		int newZOrderParamValue = newZOrder;
		int returnValue = _notifyZOrder_ev_uint16_NoVirtual(this.nativeObject.pointer, newZOrderParamValue);
		return returnValue;
	}

	native private void _notifyViewport_void(long pNativeObject);
	public void _notifyViewport()
	{
		_notifyViewport_void(this.nativeObject.pointer);
	}
	native private void _notifyViewport_void_NoVirtual(long pNativeObject);
	protected void _notifyViewport_NoVirtual()
	{
		_notifyViewport_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void _notifyWorldTransforms_CMatrix4(long pNativeObject, long xform);
	public void _notifyWorldTransforms(com.earthview.world.spatial.math.Matrix4 xform)
	{
		long xformParamValue = xform.nativeObject.pointer;
		_notifyWorldTransforms_CMatrix4(this.nativeObject.pointer, xformParamValue);
	}
	native private void _notifyWorldTransforms_CMatrix4_NoVirtual(long pNativeObject, long xform);
	protected void _notifyWorldTransforms_NoVirtual(com.earthview.world.spatial.math.Matrix4 xform)
	{
		long xformParamValue = xform.nativeObject.pointer;
		_notifyWorldTransforms_CMatrix4_NoVirtual(this.nativeObject.pointer, xformParamValue);
	}

	native private void _notifyParent_COverlayContainer_COverlay(long pNativeObject, long ref_parent, long ref_overlay);
	public void _notifyParent(com.earthview.world.graphic.OverlayContainer ref_parent, com.earthview.world.graphic.Overlay ref_overlay)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		long ref_overlayParamValue = (ref_overlay == null ? 0L : ref_overlay.nativeObject.pointer);
		_notifyParent_COverlayContainer_COverlay(this.nativeObject.pointer, ref_parentParamValue, ref_overlayParamValue);
	}
	native private void _notifyParent_COverlayContainer_COverlay_NoVirtual(long pNativeObject, long ref_parent, long ref_overlay);
	protected void _notifyParent_NoVirtual(com.earthview.world.graphic.OverlayContainer ref_parent, com.earthview.world.graphic.Overlay ref_overlay)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		long ref_overlayParamValue = (ref_overlay == null ? 0L : ref_overlay.nativeObject.pointer);
		_notifyParent_COverlayContainer_COverlay_NoVirtual(this.nativeObject.pointer, ref_parentParamValue, ref_overlayParamValue);
	}

	native private void _updateRenderQueue_CRenderQueue(long pNativeObject, long queue);
	public void _updateRenderQueue(com.earthview.world.graphic.RenderQueue queue)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		_updateRenderQueue_CRenderQueue(this.nativeObject.pointer, queueParamValue);
	}
	native private void _updateRenderQueue_CRenderQueue_NoVirtual(long pNativeObject, long queue);
	protected void _updateRenderQueue_NoVirtual(com.earthview.world.graphic.RenderQueue queue)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		_updateRenderQueue_CRenderQueue_NoVirtual(this.nativeObject.pointer, queueParamValue);
	}

	native private boolean isContainer_void(long pNativeObject);
	public boolean isContainer()
	{
		boolean returnValue = isContainer_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isContainer_void_NoVirtual(long pNativeObject);
	protected boolean isContainer_NoVirtual()
	{
		boolean returnValue = isContainer_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean isChildrenProcessEvents_void_callback()
	{
		boolean returnValue = isChildrenProcessEvents();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isChildrenProcessEvents_void(long pNativeObject);
	public boolean isChildrenProcessEvents()
	{
		boolean returnValue = isChildrenProcessEvents_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isChildrenProcessEvents_void_NoVirtual(long pNativeObject);
	protected boolean isChildrenProcessEvents_NoVirtual()
	{
		boolean returnValue = isChildrenProcessEvents_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setChildrenProcessEvents_ev_bool_callback(boolean val)
	{
		boolean valParamValue = val;
		setChildrenProcessEvents(valParamValue);
	}

	native private void setChildrenProcessEvents_ev_bool(long pNativeObject, boolean val);
	public void setChildrenProcessEvents(boolean val)
	{
		boolean valParamValue = val;
		setChildrenProcessEvents_ev_bool(this.nativeObject.pointer, valParamValue);
	}
	native private void setChildrenProcessEvents_ev_bool_NoVirtual(long pNativeObject, boolean val);
	protected void setChildrenProcessEvents_NoVirtual(boolean val)
	{
		boolean valParamValue = val;
		setChildrenProcessEvents_ev_bool_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	native private long findElementAt_Real_Real(long pNativeObject, double x, double y);
	public com.earthview.world.graphic.OverlayElement findElementAt(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		long returnValue = findElementAt_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.OverlayElement __returnValue = new com.earthview.world.graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate, "COverlayElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COverlayElement");
		}
		return __returnValue;
	}
	native private long findElementAt_Real_Real_NoVirtual(long pNativeObject, double x, double y);
	protected com.earthview.world.graphic.OverlayElement findElementAt_NoVirtual(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		long returnValue = findElementAt_Real_Real_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.OverlayElement __returnValue = new com.earthview.world.graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate, "COverlayElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COverlayElement");
		}
		return __returnValue;
	}

	native private void copyFromTemplate_COverlayElement(long pNativeObject, long templateOverlay);
	//// relative to parent
	public void copyFromTemplate(com.earthview.world.graphic.OverlayElement templateOverlay)
	{
		long templateOverlayParamValue = (templateOverlay == null ? 0L : templateOverlay.nativeObject.pointer);
		copyFromTemplate_COverlayElement(this.nativeObject.pointer, templateOverlayParamValue);
	}
	native private void copyFromTemplate_COverlayElement_NoVirtual(long pNativeObject, long templateOverlay);
	protected void copyFromTemplate_NoVirtual(com.earthview.world.graphic.OverlayElement templateOverlay)
	{
		long templateOverlayParamValue = (templateOverlay == null ? 0L : templateOverlay.nativeObject.pointer);
		copyFromTemplate_COverlayElement_NoVirtual(this.nativeObject.pointer, templateOverlayParamValue);
	}

	native private long ev_clone_EVString(long pNativeObject, String instanceName);
	public com.earthview.world.graphic.OverlayElement ev_clone(String instanceName)
	{
		String instanceNameParamValue = instanceName;
		long returnValue = ev_clone_EVString(this.nativeObject.pointer, instanceNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.OverlayElement __returnValue = new com.earthview.world.graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate, "COverlayElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COverlayElement");
		}
		return __returnValue;
	}
	native private long ev_clone_EVString_NoVirtual(long pNativeObject, String instanceName);
	protected com.earthview.world.graphic.OverlayElement ev_clone_NoVirtual(String instanceName)
	{
		String instanceNameParamValue = instanceName;
		long returnValue = ev_clone_EVString_NoVirtual(this.nativeObject.pointer, instanceNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.OverlayElement __returnValue = new com.earthview.world.graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate, "COverlayElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COverlayElement");
		}
		return __returnValue;
	}

	public OverlayContainer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public OverlayContainer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	///EarthView::World::Graphic::COverlayElement::COverlayElementInternalStringInterface& getStringInterface() {return *m_pStringInterface;} //
	public void updatePositionGeometry()
	{
		super.updatePositionGeometry_NoVirtual();
	}
	public void updateTextureGeometry()
	{
		super.updateTextureGeometry_NoVirtual();
	}
	public void addBaseParameters()
	{
		super.addBaseParameters_NoVirtual();
	}
	public void show()
	{
		super.show_NoVirtual();
	}
	public void hide()
	{
		super.hide_NoVirtual();
	}
	public void setEnabled(boolean b)
	{
		super.setEnabled_NoVirtual(b);
	}
	public String getMaterialName()
	{
		return super.getMaterialName_NoVirtual();
	}
	public void setMaterialName(String matName)
	{
		super.setMaterialName_NoVirtual(matName);
	}
	public void _updateFromParent()
	{
		super._updateFromParent_NoVirtual();
	}
	public double _getDerivedLeft()
	{
		return super._getDerivedLeft_NoVirtual();
	}
	public double _getDerivedTop()
	{
		return super._getDerivedTop_NoVirtual();
	}
	public double _getRelativeWidth()
	{
		return super._getRelativeWidth_NoVirtual();
	}
	public double _getRelativeHeight()
	{
		return super._getRelativeHeight_NoVirtual();
	}
	public void _getClippingRegion(com.earthview.world.graphic.Rectangle clippingRegion)
	{
		super._getClippingRegion_NoVirtual(clippingRegion);
	}
	//// @copydoc CMovableObject::visitRenderables
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		super.visitRenderables_NoVirtual(visitor, debugRenderables);
	}
	public String getTypeName()
	{
		return super.getTypeName_NoVirtual();
	}
	public void setCaption(String text)
	{
		super.setCaption_NoVirtual(text);
	}
	public String getCaption()
	{
		return super.getCaption_NoVirtual();
	}
	public void setColour(com.earthview.world.graphic.ColourValue col)
	{
		super.setColour_NoVirtual(col);
	}
	public com.earthview.world.graphic.ColourValue getColour()
	{
		return super.getColour_NoVirtual();
	}
	public void setMetricsMode(com.earthview.world.graphic.GuiMetricsMode gmm)
	{
		super.setMetricsMode_NoVirtual(gmm);
	}
	public com.earthview.world.graphic.GuiMetricsMode getMetricsMode()
	{
		return super.getMetricsMode_NoVirtual();
	}
	public void setHorizontalAlignment(com.earthview.world.graphic.GuiHorizontalAlignment gha)
	{
		super.setHorizontalAlignment_NoVirtual(gha);
	}
	public com.earthview.world.graphic.GuiHorizontalAlignment getHorizontalAlignment()
	{
		return super.getHorizontalAlignment_NoVirtual();
	}
	public void setVerticalAlignment(com.earthview.world.graphic.GuiVerticalAlignment gva)
	{
		super.setVerticalAlignment_NoVirtual(gva);
	}
	public com.earthview.world.graphic.GuiVerticalAlignment getVerticalAlignment()
	{
		return super.getVerticalAlignment_NoVirtual();
	}
	public boolean contains(double x, double y)
	{
		return super.contains_NoVirtual(x, y);
	}
	public boolean isKeyEnabled()
	{
		return super.isKeyEnabled_NoVirtual();
	}
	public boolean isCloneable()
	{
		return super.isCloneable_NoVirtual();
	}
	public void setCloneable(boolean c)
	{
		super.setCloneable_NoVirtual(c);
	}
	/**
	 * 获得材质
	 * @param  
	 */
	public com.earthview.world.graphic.MaterialPtr getMaterial()
	{
		return super.getMaterial_NoVirtual();
	}
	/**
	 * 获得技术
	 * @param  
	 */
	public com.earthview.world.graphic.Technique getTechnique()
	{
		return super.getTechnique_NoVirtual();
	}
	/**
	 * 获得渲染操作
	 * @param op 
	 */
	public void getRenderOperation(com.earthview.world.graphic.RenderOperation op)
	{
		super.getRenderOperation_NoVirtual(op);
	}
	/**
	 * 渲染开始时向外通知的事件
	 * @param sm 渲染场景
	 * @param rsys 渲染系统
	 * @return 如果自动执行渲染过程返回true,手动执行返回false
	 */
	public boolean preRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
	{
		return super.preRender_NoVirtual(sm, rsys);
	}
	/**
	 * 渲染完成时向外通知的事件
	 * @param sm 渲染场景
	 * @param rsys 渲染系统
	 */
	public void postRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
	{
		super.postRender_NoVirtual(sm, rsys);
	}
	/**
	 * 获得渲染对象的世界变换矩阵
	 * @param xform 
	 */
	public void getWorldTransforms(com.earthview.world.spatial.math.Matrix4 xform)
	{
		super.getWorldTransforms_NoVirtual(xform);
	}
	/**
	 * 获得渲染对象的世界变换矩阵的数量
	 * @param  
	 */
	public int getNumWorldTransforms()
	{
		return super.getNumWorldTransforms_NoVirtual();
	}
	/// <summary>
	/// 返回渲染实体相对虚拟相机的观察深度的平方
	/// </summary>
	/// <param name="cam"></param>
	/// <returns</returns>
	public double getSquaredViewDepth(com.earthview.world.graphic.Camera cam)
	{
		return super.getSquaredViewDepth_NoVirtual(cam);
	}
	/**
	 * 获得光照的列表，按照相对于渲染实体的远近排列
	 * @param  
	 */
	public com.earthview.world.graphic.LightList getLights()
	{
		return super.getLights_NoVirtual();
	}
	/**
	 * 是否投射投影
	 * @param  
	 */
	public boolean getCastsShadows()
	{
		return super.getCastsShadows_NoVirtual();
	}
	/**
	 * 更新自定义的EarthView::World::Graphic::CGpuProgramParameters常量，该值只有从渲染系统中获得
	 * @param constantEntry CAutoConstantEntry的别名
	 * @param params EarthView::World::Graphic::CGpuProgramParameters的指针
	 */
	public void _updateCustomGpuParameter(com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry constantEntry, com.earthview.world.graphic.GpuProgramParameters params)
	{
		super._updateCustomGpuParameter_NoVirtual(constantEntry, params);
	}
	/**
	 * 设置多边形渲染方式是否可重写
	 * @param override 设置参数
	 * @return true可以超越，false不可以
	 */
	public void setPolygonModeOverrideable(boolean override)
	{
		super.setPolygonModeOverrideable_NoVirtual(override);
	}
	/**
	 * 获得多边形渲染方式是否可重写
	 * @param  
	 */
	public boolean getPolygonModeOverrideable()
	{
		return super.getPolygonModeOverrideable_NoVirtual();
	}
	/**
	 * 设置自定义环境光系数
	 * @param  
	 */
	public void setCustomAmbient(com.earthview.world.graphic.ColourValue ambient)
	{
		super.setCustomAmbient_NoVirtual(ambient);
	}
	/**
	 * 获取自定义环境光系数
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getCustomAmbient()
	{
		return super.getCustomAmbient_NoVirtual();
	}
	/**
	 * 获取自定义环境光系数是否启用
	 * @param  
	 */
	public boolean getCustomAmbientEnabled()
	{
		return super.getCustomAmbientEnabled_NoVirtual();
	}
	/**
	 * 设置自定义环境光系数是否启用
	 * @param  
	 */
	public void setCustomAmbientEnabled(boolean enabled)
	{
		super.setCustomAmbientEnabled_NoVirtual(enabled);
	}
	public com.earthview.world.graphic.MovableObject getMovableObject()
	{
		return super.getMovableObject_NoVirtual();
	}
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public void addListener(com.earthview.world.graphic.Renderable.RenderableListener ref_listener)
	{
		super.addListener_NoVirtual(ref_listener);
	}
	/**
	 * 移除监听器
	 * @param listener 
	 */
	public void removeListener(com.earthview.world.graphic.Renderable.RenderableListener listener)
	{
		super.removeListener_NoVirtual(listener);
	}
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public boolean existListener(com.earthview.world.graphic.Renderable.RenderableListener listener)
	{
		return super.existListener_NoVirtual(listener);
	}
	/**
	 * 获取监听器
	 * @param  
	 */
	public long getListenerCount()
	{
		return super.getListenerCount_NoVirtual();
	}
	/**
	 * 获取监听器
	 * @param  
	 */
	public com.earthview.world.graphic.Renderable.RenderableListener getListener(long index)
	{
		return super.getListener_NoVirtual(index);
	}
	/**
	 * 设置渲染系统的私有数据
	 * @param  
	 */
	public com.earthview.world.graphic.Renderable.RenderSystemData getRenderSystemData()
	{
		return super.getRenderSystemData_NoVirtual();
	}
	/**
	 * 获得渲染系统的私有数据
	 * @param  
	 */
	public void setRenderSystemData(com.earthview.world.graphic.Renderable.RenderSystemData ref_val)
	{
		super.setRenderSystemData_NoVirtual(ref_val);
	}
	
	native protected void register_addChild_COverlayElement(long pNativeObject, String method);
	native protected void register_addChildImpl_COverlayElement(long pNativeObject, String method);
	native protected void register_addChildImpl_COverlayContainer(long pNativeObject, String method);
	native protected void register_removeChild_EVString(long pNativeObject, String method);
	native protected void register_getChild_EVString(long pNativeObject, String method);
	native protected void register_getChildIterator_void(long pNativeObject, String method);
	native protected void register_getChildContainerIterator_void(long pNativeObject, String method);
	native protected void register_isChildrenProcessEvents_void(long pNativeObject, String method);
	native protected void register_setChildrenProcessEvents_ev_bool(long pNativeObject, String method);
	native protected void register_updatePositionGeometry_void(long pNativeObject, String method);
	native protected void register_updateTextureGeometry_void(long pNativeObject, String method);
	native protected void register_addBaseParameters_void(long pNativeObject, String method);
	native protected void register_initialise_void(long pNativeObject, String method);
	native protected void register_show_void(long pNativeObject, String method);
	native protected void register_hide_void(long pNativeObject, String method);
	native protected void register_setEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_getMaterialName_void(long pNativeObject, String method);
	native protected void register_setMaterialName_EVString(long pNativeObject, String method);
	native protected void register__positionsOutOfDate_void(long pNativeObject, String method);
	native protected void register__update_void(long pNativeObject, String method);
	native protected void register__updateFromParent_void(long pNativeObject, String method);
	native protected void register__notifyParent_COverlayContainer_COverlay(long pNativeObject, String method);
	native protected void register__getDerivedLeft_void(long pNativeObject, String method);
	native protected void register__getDerivedTop_void(long pNativeObject, String method);
	native protected void register__getRelativeWidth_void(long pNativeObject, String method);
	native protected void register__getRelativeHeight_void(long pNativeObject, String method);
	native protected void register__getClippingRegion_Rectangle(long pNativeObject, String method);
	native protected void register__notifyZOrder_ev_uint16(long pNativeObject, String method);
	native protected void register__notifyWorldTransforms_CMatrix4(long pNativeObject, String method);
	native protected void register__notifyViewport_void(long pNativeObject, String method);
	native protected void register__updateRenderQueue_CRenderQueue(long pNativeObject, String method);
	native protected void register_visitRenderables_CVisitor_ev_bool(long pNativeObject, String method);
	native protected void register_getTypeName_void(long pNativeObject, String method);
	native protected void register_setCaption_EarthView_World_Core_DisplayString(long pNativeObject, String method);
	native protected void register_getCaption_void(long pNativeObject, String method);
	native protected void register_setColour_CColourValue(long pNativeObject, String method);
	native protected void register_getColour_void(long pNativeObject, String method);
	native protected void register_setMetricsMode_GuiMetricsMode(long pNativeObject, String method);
	native protected void register_getMetricsMode_void(long pNativeObject, String method);
	native protected void register_setHorizontalAlignment_GuiHorizontalAlignment(long pNativeObject, String method);
	native protected void register_getHorizontalAlignment_void(long pNativeObject, String method);
	native protected void register_setVerticalAlignment_GuiVerticalAlignment(long pNativeObject, String method);
	native protected void register_getVerticalAlignment_void(long pNativeObject, String method);
	native protected void register_contains_Real_Real(long pNativeObject, String method);
	native protected void register_findElementAt_Real_Real(long pNativeObject, String method);
	native protected void register_isContainer_void(long pNativeObject, String method);
	native protected void register_isKeyEnabled_void(long pNativeObject, String method);
	native protected void register_isCloneable_void(long pNativeObject, String method);
	native protected void register_setCloneable_ev_bool(long pNativeObject, String method);
	native protected void register_copyFromTemplate_COverlayElement(long pNativeObject, String method);
	native protected void register_ev_clone_EVString(long pNativeObject, String method);
	native protected void register_getMaterial_void(long pNativeObject, String method);
	native protected void register_getTechnique_void(long pNativeObject, String method);
	native protected void register_getRenderOperation_CRenderOperation(long pNativeObject, String method);
	native protected void register_preRender_CSceneManager_CRenderSystem(long pNativeObject, String method);
	native protected void register_postRender_CSceneManager_CRenderSystem(long pNativeObject, String method);
	native protected void register_getWorldTransforms_CMatrix4(long pNativeObject, String method);
	native protected void register_getNumWorldTransforms_void(long pNativeObject, String method);
	native protected void register_getSquaredViewDepth_CCamera(long pNativeObject, String method);
	native protected void register_getLights_void(long pNativeObject, String method);
	native protected void register_getCastsShadows_void(long pNativeObject, String method);
	native protected void register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(long pNativeObject, String method);
	native protected void register_setPolygonModeOverrideable_ev_bool(long pNativeObject, String method);
	native protected void register_getPolygonModeOverrideable_void(long pNativeObject, String method);
	native protected void register_setCustomAmbient_CColourValue(long pNativeObject, String method);
	native protected void register_getCustomAmbient_void(long pNativeObject, String method);
	native protected void register_getCustomAmbientEnabled_void(long pNativeObject, String method);
	native protected void register_setCustomAmbientEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_getMovableObject_void(long pNativeObject, String method);
	native protected void register_addListener_CRenderableListener(long pNativeObject, String method);
	native protected void register_removeListener_CRenderableListener(long pNativeObject, String method);
	native protected void register_existListener_CRenderableListener(long pNativeObject, String method);
	native protected void register_getListenerCount_void(long pNativeObject, String method);
	native protected void register_getListener_ev_uint32(long pNativeObject, String method);
	native protected void register_getRenderSystemData_void(long pNativeObject, String method);
	native protected void register_setRenderSystemData_CRenderSystemData(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_addChild_COverlayElement(this.nativeObject.pointer, "addChild_COverlayElement_callback");
			this.register_addChildImpl_COverlayElement(this.nativeObject.pointer, "addChildImpl_COverlayElement_callback");
			this.register_addChildImpl_COverlayContainer(this.nativeObject.pointer, "addChildImpl_COverlayContainer_callback");
			this.register_removeChild_EVString(this.nativeObject.pointer, "removeChild_EVString_callback");
			this.register_getChild_EVString(this.nativeObject.pointer, "getChild_EVString_callback");
			this.register_getChildIterator_void(this.nativeObject.pointer, "getChildIterator_void_callback");
			this.register_getChildContainerIterator_void(this.nativeObject.pointer, "getChildContainerIterator_void_callback");
			this.register_isChildrenProcessEvents_void(this.nativeObject.pointer, "isChildrenProcessEvents_void_callback");
			this.register_setChildrenProcessEvents_ev_bool(this.nativeObject.pointer, "setChildrenProcessEvents_ev_bool_callback");
			this.register_updatePositionGeometry_void(this.nativeObject.pointer, "updatePositionGeometry_void_callback");
			this.register_updateTextureGeometry_void(this.nativeObject.pointer, "updateTextureGeometry_void_callback");
			this.register_addBaseParameters_void(this.nativeObject.pointer, "addBaseParameters_void_callback");
			this.register_initialise_void(this.nativeObject.pointer, "initialise_void_callback");
			this.register_show_void(this.nativeObject.pointer, "show_void_callback");
			this.register_hide_void(this.nativeObject.pointer, "hide_void_callback");
			this.register_setEnabled_ev_bool(this.nativeObject.pointer, "setEnabled_ev_bool_callback");
			this.register_getMaterialName_void(this.nativeObject.pointer, "getMaterialName_void_callback");
			this.register_setMaterialName_EVString(this.nativeObject.pointer, "setMaterialName_EVString_callback");
			this.register__positionsOutOfDate_void(this.nativeObject.pointer, "_positionsOutOfDate_void_callback");
			this.register__update_void(this.nativeObject.pointer, "_update_void_callback");
			this.register__updateFromParent_void(this.nativeObject.pointer, "_updateFromParent_void_callback");
			this.register__notifyParent_COverlayContainer_COverlay(this.nativeObject.pointer, "_notifyParent_COverlayContainer_COverlay_callback");
			this.register__getDerivedLeft_void(this.nativeObject.pointer, "_getDerivedLeft_void_callback");
			this.register__getDerivedTop_void(this.nativeObject.pointer, "_getDerivedTop_void_callback");
			this.register__getRelativeWidth_void(this.nativeObject.pointer, "_getRelativeWidth_void_callback");
			this.register__getRelativeHeight_void(this.nativeObject.pointer, "_getRelativeHeight_void_callback");
			this.register__getClippingRegion_Rectangle(this.nativeObject.pointer, "_getClippingRegion_Rectangle_callback");
			this.register__notifyZOrder_ev_uint16(this.nativeObject.pointer, "_notifyZOrder_ev_uint16_callback");
			this.register__notifyWorldTransforms_CMatrix4(this.nativeObject.pointer, "_notifyWorldTransforms_CMatrix4_callback");
			this.register__notifyViewport_void(this.nativeObject.pointer, "_notifyViewport_void_callback");
			this.register__updateRenderQueue_CRenderQueue(this.nativeObject.pointer, "_updateRenderQueue_CRenderQueue_callback");
			this.register_visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, "visitRenderables_CVisitor_ev_bool_callback");
			this.register_getTypeName_void(this.nativeObject.pointer, "getTypeName_void_callback");
			this.register_setCaption_EarthView_World_Core_DisplayString(this.nativeObject.pointer, "setCaption_EarthView_World_Core_DisplayString_callback");
			this.register_getCaption_void(this.nativeObject.pointer, "getCaption_void_callback");
			this.register_setColour_CColourValue(this.nativeObject.pointer, "setColour_CColourValue_callback");
			this.register_getColour_void(this.nativeObject.pointer, "getColour_void_callback");
			this.register_setMetricsMode_GuiMetricsMode(this.nativeObject.pointer, "setMetricsMode_GuiMetricsMode_callback");
			this.register_getMetricsMode_void(this.nativeObject.pointer, "getMetricsMode_void_callback");
			this.register_setHorizontalAlignment_GuiHorizontalAlignment(this.nativeObject.pointer, "setHorizontalAlignment_GuiHorizontalAlignment_callback");
			this.register_getHorizontalAlignment_void(this.nativeObject.pointer, "getHorizontalAlignment_void_callback");
			this.register_setVerticalAlignment_GuiVerticalAlignment(this.nativeObject.pointer, "setVerticalAlignment_GuiVerticalAlignment_callback");
			this.register_getVerticalAlignment_void(this.nativeObject.pointer, "getVerticalAlignment_void_callback");
			this.register_contains_Real_Real(this.nativeObject.pointer, "contains_Real_Real_callback");
			this.register_findElementAt_Real_Real(this.nativeObject.pointer, "findElementAt_Real_Real_callback");
			this.register_isContainer_void(this.nativeObject.pointer, "isContainer_void_callback");
			this.register_isKeyEnabled_void(this.nativeObject.pointer, "isKeyEnabled_void_callback");
			this.register_isCloneable_void(this.nativeObject.pointer, "isCloneable_void_callback");
			this.register_setCloneable_ev_bool(this.nativeObject.pointer, "setCloneable_ev_bool_callback");
			this.register_copyFromTemplate_COverlayElement(this.nativeObject.pointer, "copyFromTemplate_COverlayElement_callback");
			this.register_ev_clone_EVString(this.nativeObject.pointer, "ev_clone_EVString_callback");
			this.register_getMaterial_void(this.nativeObject.pointer, "getMaterial_void_callback");
			this.register_getTechnique_void(this.nativeObject.pointer, "getTechnique_void_callback");
			this.register_getRenderOperation_CRenderOperation(this.nativeObject.pointer, "getRenderOperation_CRenderOperation_callback");
			this.register_preRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, "preRender_CSceneManager_CRenderSystem_callback");
			this.register_postRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, "postRender_CSceneManager_CRenderSystem_callback");
			this.register_getWorldTransforms_CMatrix4(this.nativeObject.pointer, "getWorldTransforms_CMatrix4_callback");
			this.register_getNumWorldTransforms_void(this.nativeObject.pointer, "getNumWorldTransforms_void_callback");
			this.register_getSquaredViewDepth_CCamera(this.nativeObject.pointer, "getSquaredViewDepth_CCamera_callback");
			this.register_getLights_void(this.nativeObject.pointer, "getLights_void_callback");
			this.register_getCastsShadows_void(this.nativeObject.pointer, "getCastsShadows_void_callback");
			this.register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(this.nativeObject.pointer, "_updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback");
			this.register_setPolygonModeOverrideable_ev_bool(this.nativeObject.pointer, "setPolygonModeOverrideable_ev_bool_callback");
			this.register_getPolygonModeOverrideable_void(this.nativeObject.pointer, "getPolygonModeOverrideable_void_callback");
			this.register_setCustomAmbient_CColourValue(this.nativeObject.pointer, "setCustomAmbient_CColourValue_callback");
			this.register_getCustomAmbient_void(this.nativeObject.pointer, "getCustomAmbient_void_callback");
			this.register_getCustomAmbientEnabled_void(this.nativeObject.pointer, "getCustomAmbientEnabled_void_callback");
			this.register_setCustomAmbientEnabled_ev_bool(this.nativeObject.pointer, "setCustomAmbientEnabled_ev_bool_callback");
			this.register_getMovableObject_void(this.nativeObject.pointer, "getMovableObject_void_callback");
			this.register_addListener_CRenderableListener(this.nativeObject.pointer, "addListener_CRenderableListener_callback");
			this.register_removeListener_CRenderableListener(this.nativeObject.pointer, "removeListener_CRenderableListener_callback");
			this.register_existListener_CRenderableListener(this.nativeObject.pointer, "existListener_CRenderableListener_callback");
			this.register_getListenerCount_void(this.nativeObject.pointer, "getListenerCount_void_callback");
			this.register_getListener_ev_uint32(this.nativeObject.pointer, "getListener_ev_uint32_callback");
			this.register_getRenderSystemData_void(this.nativeObject.pointer, "getRenderSystemData_void_callback");
			this.register_setRenderSystemData_CRenderSystemData(this.nativeObject.pointer, "setRenderSystemData_CRenderSystemData_callback");
		}
	}
	
	public static OverlayContainer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		OverlayContainer obj = null;
 		if(baseObj instanceof OverlayContainer)
		{
			obj = (OverlayContainer)baseObj;
		} else {
			obj = new OverlayContainer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COverlayContainer");
			obj.increaseCast();
		}

		return obj;
	}
}
