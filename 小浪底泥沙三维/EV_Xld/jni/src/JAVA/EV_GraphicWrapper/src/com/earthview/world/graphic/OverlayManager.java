package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OverlayManager extends com.earthview.world.graphic.ScriptLoader {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::COverlayManager", new OverlayManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCOverlayManagerProxy", new OverlayManagerClassFactory());
	}

	native private static long getSingleton_void();
	public static com.earthview.world.graphic.OverlayManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.OverlayManager __returnValue = new com.earthview.world.graphic.OverlayManager(CreatedWhenConstruct.CWC_NotToCreate, "COverlayManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COverlayManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.graphic.OverlayManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.OverlayManager __returnValue = new com.earthview.world.graphic.OverlayManager(CreatedWhenConstruct.CWC_NotToCreate, "COverlayManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COverlayManager");
		}
		return __returnValue;
	}
	///typedef map<EVString, EarthView::World::Graphic::COverlay*> EarthView::World::Graphic::COverlayManager::OverlayMap;
	public static class OverlayMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::COverlayManager::OverlayMap", new OverlayMapClassFactory());
		}

		native private boolean push_EVString_COverlay(long pNativeObject, String key, long ref_val);
		public boolean push(String key, NativeObjectPointer<com.earthview.world.graphic.Overlay> ref_val)
		{
			String keyParamValue = key;
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_EVString_COverlay(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
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
		public NativeObjectPointer<com.earthview.world.graphic.Overlay> OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.Overlay> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Overlay>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		public NativeObjectPointer<com.earthview.world.graphic.Overlay> get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.Overlay> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Overlay>(new InstancePointer(returnValue));
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
		public OverlayMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("OverlayMap", null);
		}

		public OverlayMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public OverlayMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static OverlayMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			OverlayMap obj = null;
 			if(baseObj instanceof OverlayMap)
			{
				obj = (OverlayMap)baseObj;
			} else {
				obj = new OverlayMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "OverlayMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class OverlayMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			OverlayMap emptyInstance = new OverlayMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class OverlayPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::COverlayManager::OverlayPair", new OverlayPairClassFactory());
		}

		public OverlayPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("OverlayPair", null);
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
		public com.earthview.world.graphic.Overlay get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Overlay __returnValue = new com.earthview.world.graphic.Overlay(CreatedWhenConstruct.CWC_NotToCreate, "COverlay");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Overlay)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "COverlay");
			}
			return __returnValue;
		}
		
		native private void set_second_COverlay (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.Overlay second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_COverlay(this.nativeObject.pointer, secondParamValue);
		}
		
		public OverlayPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public OverlayPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static OverlayPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			OverlayPair obj = null;
 			if(baseObj instanceof OverlayPair)
			{
				obj = (OverlayPair)baseObj;
			} else {
				obj = new OverlayPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "OverlayPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class OverlayPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			OverlayPair emptyInstance = new OverlayPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::COverlayManager::OverlayMap> EarthView::World::Graphic::COverlayManager::OverlayMapIterator;
	public static class OverlayMapIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::COverlayManager::OverlayMapIterator", new OverlayMapIteratorClassFactory());
		}

		public OverlayMapIterator(com.earthview.world.graphic.OverlayManager.OverlayMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("OverlayMapIterator", list);
		}

		public OverlayMapIterator(com.earthview.world.graphic.OverlayManager.OverlayMapIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("OverlayMapIterator", list);
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
		public com.earthview.world.graphic.Overlay nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Overlay __returnValue = new com.earthview.world.graphic.Overlay(CreatedWhenConstruct.CWC_NotToCreate, "COverlay");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Overlay)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "COverlay");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.Overlay> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.Overlay> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Overlay>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.Overlay next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Overlay __returnValue = new com.earthview.world.graphic.Overlay(CreatedWhenConstruct.CWC_NotToCreate, "COverlay");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Overlay)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "COverlay");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.OverlayManager.OverlayPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.OverlayManager.OverlayPair __returnValue = new com.earthview.world.graphic.OverlayManager.OverlayPair(CreatedWhenConstruct.CWC_NotToCreate, "OverlayPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.OverlayManager.OverlayPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "OverlayPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.OverlayManager.OverlayPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.OverlayManager.OverlayPair __returnValue = new com.earthview.world.graphic.OverlayManager.OverlayPair(CreatedWhenConstruct.CWC_NotToCreate, "OverlayPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.OverlayManager.OverlayPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "OverlayPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.OverlayManager.OverlayPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.OverlayManager.OverlayPair __returnValue = new com.earthview.world.graphic.OverlayManager.OverlayPair(CreatedWhenConstruct.CWC_NotToCreate, "OverlayPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.OverlayManager.OverlayPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "OverlayPair");
			}
			return __returnValue;
		}
		public OverlayMapIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public OverlayMapIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static OverlayMapIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			OverlayMapIterator obj = null;
 			if(baseObj instanceof OverlayMapIterator)
			{
				obj = (OverlayMapIterator)baseObj;
			} else {
				obj = new OverlayMapIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "OverlayMapIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class OverlayMapIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			OverlayMapIterator emptyInstance = new OverlayMapIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	////typedef map<EVString, EarthView::World::Graphic::COverlayElement*> EarthView::World::Graphic::COverlayManager::ElementMap;
	public static class ElementMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::COverlayManager::ElementMap", new ElementMapClassFactory());
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
		public ElementMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ElementMap", null);
		}

		public ElementMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ElementMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ElementMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ElementMap obj = null;
 			if(baseObj instanceof ElementMap)
			{
				obj = (ElementMap)baseObj;
			} else {
				obj = new ElementMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ElementMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ElementMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ElementMap emptyInstance = new ElementMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class OverlaymanagerElementPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair", new OverlaymanagerElementPairClassFactory());
		}

		public OverlaymanagerElementPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("OverlaymanagerElementPair", null);
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
		
		public OverlaymanagerElementPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public OverlaymanagerElementPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static OverlaymanagerElementPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			OverlaymanagerElementPair obj = null;
 			if(baseObj instanceof OverlaymanagerElementPair)
			{
				obj = (OverlaymanagerElementPair)baseObj;
			} else {
				obj = new OverlaymanagerElementPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "OverlaymanagerElementPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class OverlaymanagerElementPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			OverlaymanagerElementPair emptyInstance = new OverlaymanagerElementPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class TemplateIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::COverlayManager::TemplateIterator", new TemplateIteratorClassFactory());
		}

		public TemplateIterator(com.earthview.world.graphic.OverlayManager.ElementMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("TemplateIterator", list);
		}

		public TemplateIterator(com.earthview.world.graphic.OverlayManager.TemplateIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("TemplateIterator", list);
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
		public com.earthview.world.graphic.OverlayElement nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
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
		native private long nextValuePtr_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.OverlayElement> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.OverlayElement> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.OverlayElement>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.OverlayElement next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
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
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.OverlayManager.OverlaymanagerElementPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.OverlayManager.OverlaymanagerElementPair __returnValue = new com.earthview.world.graphic.OverlayManager.OverlaymanagerElementPair(CreatedWhenConstruct.CWC_NotToCreate, "OverlaymanagerElementPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.OverlayManager.OverlaymanagerElementPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "OverlaymanagerElementPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.OverlayManager.OverlaymanagerElementPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.OverlayManager.OverlaymanagerElementPair __returnValue = new com.earthview.world.graphic.OverlayManager.OverlaymanagerElementPair(CreatedWhenConstruct.CWC_NotToCreate, "OverlaymanagerElementPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.OverlayManager.OverlaymanagerElementPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "OverlaymanagerElementPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.OverlayManager.OverlaymanagerElementPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.OverlayManager.OverlaymanagerElementPair __returnValue = new com.earthview.world.graphic.OverlayManager.OverlaymanagerElementPair(CreatedWhenConstruct.CWC_NotToCreate, "OverlaymanagerElementPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.OverlayManager.OverlaymanagerElementPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "OverlaymanagerElementPair");
			}
			return __returnValue;
		}
		public TemplateIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TemplateIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TemplateIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TemplateIterator obj = null;
 			if(baseObj instanceof TemplateIterator)
			{
				obj = (TemplateIterator)baseObj;
			} else {
				obj = new TemplateIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "TemplateIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TemplateIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TemplateIterator emptyInstance = new TemplateIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	////typedef map<EVString, EarthView::World::Graphic::COverlayElementFactory*> FactoryMap;
	public static class OverlayFactoryMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::COverlayManager::OverlayFactoryMap", new OverlayFactoryMapClassFactory());
		}

		native private boolean push_EVString_COverlayElementFactory(long pNativeObject, String key, long ref_val);
		public boolean push(String key, NativeObjectPointer<com.earthview.world.graphic.OverlayElementFactory> ref_val)
		{
			String keyParamValue = key;
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_EVString_COverlayElementFactory(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
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
		public NativeObjectPointer<com.earthview.world.graphic.OverlayElementFactory> OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.OverlayElementFactory> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.OverlayElementFactory>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		public NativeObjectPointer<com.earthview.world.graphic.OverlayElementFactory> get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.OverlayElementFactory> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.OverlayElementFactory>(new InstancePointer(returnValue));
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
		public OverlayFactoryMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("OverlayFactoryMap", null);
		}

		public OverlayFactoryMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public OverlayFactoryMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static OverlayFactoryMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			OverlayFactoryMap obj = null;
 			if(baseObj instanceof OverlayFactoryMap)
			{
				obj = (OverlayFactoryMap)baseObj;
			} else {
				obj = new OverlayFactoryMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "OverlayFactoryMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class OverlayFactoryMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			OverlayFactoryMap emptyInstance = new OverlayFactoryMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private void removeViewport_CViewport(long pNativeObject, long vp);
	public void removeViewport(com.earthview.world.graphic.Viewport vp)
	{
		long vpParamValue = (vp == null ? 0L : vp.nativeObject.pointer);
		removeViewport_CViewport(this.nativeObject.pointer, vpParamValue);
	}
	public OverlayManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCOverlayManagerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.OverlayManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getScriptPatterns_void(long pNativeObject);
	//// @copydoc CScriptLoader::getScriptPatterns
	public com.earthview.world.core.StringVector getScriptPatterns()
	{
		long returnValue = getScriptPatterns_void(this.nativeObject.pointer);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate, "StringVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	native private long getScriptPatterns_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.StringVector getScriptPatterns_NoVirtual()
	{
		long returnValue = getScriptPatterns_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate, "StringVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}

	native private void parseScript_DataStreamPtr_EVString(long pNativeObject, long stream, String groupName);
	//// @copydoc CScriptLoader::parseScript
	public void parseScript(com.earthview.world.core.DataStreamPtr stream, String groupName)
	{
		long streamParamValue = stream.nativeObject.pointer;
		String groupNameParamValue = groupName;
		parseScript_DataStreamPtr_EVString(this.nativeObject.pointer, streamParamValue, groupNameParamValue);
	}
	native private void parseScript_DataStreamPtr_EVString_NoVirtual(long pNativeObject, long stream, String groupName);
	protected void parseScript_NoVirtual(com.earthview.world.core.DataStreamPtr stream, String groupName)
	{
		long streamParamValue = stream.nativeObject.pointer;
		String groupNameParamValue = groupName;
		parseScript_DataStreamPtr_EVString_NoVirtual(this.nativeObject.pointer, streamParamValue, groupNameParamValue);
	}

	native private double getLoadingOrder_void(long pNativeObject);
	//// @copydoc CScriptLoader::getLoadingOrder
	public double getLoadingOrder()
	{
		double returnValue = getLoadingOrder_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getLoadingOrder_void_NoVirtual(long pNativeObject);
	protected double getLoadingOrder_NoVirtual()
	{
		double returnValue = getLoadingOrder_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long create_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.Overlay create(String name)
	{
		String nameParamValue = name;
		long returnValue = create_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Overlay __returnValue = new com.earthview.world.graphic.Overlay(CreatedWhenConstruct.CWC_NotToCreate, "COverlay");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Overlay)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COverlay");
		}
		return __returnValue;
	}
	native private long create_EVString_CSceneManager(long pNativeObject, String name, long ref_owner);
	public com.earthview.world.graphic.Overlay create(String name, com.earthview.world.graphic.SceneManager ref_owner)
	{
		String nameParamValue = name;
		long ref_ownerParamValue = (ref_owner == null ? 0L : ref_owner.nativeObject.pointer);
		long returnValue = create_EVString_CSceneManager(this.nativeObject.pointer, nameParamValue, ref_ownerParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Overlay __returnValue = new com.earthview.world.graphic.Overlay(CreatedWhenConstruct.CWC_NotToCreate, "COverlay");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Overlay)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COverlay");
		}
		return __returnValue;
	}
	native private long getByName_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.Overlay getByName(String name)
	{
		String nameParamValue = name;
		long returnValue = getByName_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Overlay __returnValue = new com.earthview.world.graphic.Overlay(CreatedWhenConstruct.CWC_NotToCreate, "COverlay");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Overlay)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COverlay");
		}
		return __returnValue;
	}
	native private void destroy_EVString(long pNativeObject, String name);
	public void destroy(String name)
	{
		String nameParamValue = name;
		destroy_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void destroy_COverlay(long pNativeObject, long overlay);
	public void destroy(com.earthview.world.graphic.Overlay overlay)
	{
		long overlayParamValue = (overlay == null ? 0L : overlay.nativeObject.pointer);
		destroy_COverlay(this.nativeObject.pointer, overlayParamValue);
	}
	native private void destroyAll_void(long pNativeObject);
	public void destroyAll()
	{
		destroyAll_void(this.nativeObject.pointer);
	}
	native private long getOverlayIterator_void(long pNativeObject);
	public com.earthview.world.graphic.OverlayManager.OverlayMapIterator getOverlayIterator()
	{
		long returnValue = getOverlayIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.OverlayManager.OverlayMapIterator __returnValue = new com.earthview.world.graphic.OverlayManager.OverlayMapIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "OverlayMapIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayManager.OverlayMapIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "OverlayMapIterator");
		}
		return __returnValue;
	}
	native private void _queueOverlaysForRendering_CCamera_CRenderQueue_CViewport(long pNativeObject, long cam, long pQueue, long vp);
	public void _queueOverlaysForRendering(com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.RenderQueue pQueue, com.earthview.world.graphic.Viewport vp)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		long pQueueParamValue = (pQueue == null ? 0L : pQueue.nativeObject.pointer);
		long vpParamValue = (vp == null ? 0L : vp.nativeObject.pointer);
		_queueOverlaysForRendering_CCamera_CRenderQueue_CViewport(this.nativeObject.pointer, camParamValue, pQueueParamValue, vpParamValue);
	}
	native private boolean hasViewportChanged_void(long pNativeObject);
	public boolean hasViewportChanged()
	{
		boolean returnValue = hasViewportChanged_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getViewportHeight_void(long pNativeObject);
	public int getViewportHeight()
	{
		int returnValue = getViewportHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getViewportWidth_void(long pNativeObject);
	public int getViewportWidth()
	{
		int returnValue = getViewportWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getViewportAspectRatio_void(long pNativeObject);
	public double getViewportAspectRatio()
	{
		double returnValue = getViewportAspectRatio_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getViewportOrientationMode_void(long pNativeObject);
	public com.earthview.world.graphic.OrientationMode getViewportOrientationMode()
	{
		int returnValue = getViewportOrientationMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.OrientationMode.toEnum(returnValue);
	}
	native private long createOverlayElement_EVString_EVString_ev_bool(long pNativeObject, String typeName, String instanceName, boolean isTemplate);
	public com.earthview.world.graphic.OverlayElement createOverlayElement(String typeName, String instanceName, boolean isTemplate)
	{
		String typeNameParamValue = typeName;
		String instanceNameParamValue = instanceName;
		boolean isTemplateParamValue = isTemplate;
		long returnValue = createOverlayElement_EVString_EVString_ev_bool(this.nativeObject.pointer, typeNameParamValue, instanceNameParamValue, isTemplateParamValue);
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
	native private long createOverlayElement_EVString_EVString(long pNativeObject, String typeName, String instanceName);
	public com.earthview.world.graphic.OverlayElement createOverlayElement(String typeName, String instanceName)
	{
		String typeNameParamValue = typeName;
		String instanceNameParamValue = instanceName;
		long returnValue = createOverlayElement_EVString_EVString(this.nativeObject.pointer, typeNameParamValue, instanceNameParamValue);
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
	native private long getOverlayElement_EVString_ev_bool(long pNativeObject, String name, boolean isTemplate);
	public com.earthview.world.graphic.OverlayElement getOverlayElement(String name, boolean isTemplate)
	{
		String nameParamValue = name;
		boolean isTemplateParamValue = isTemplate;
		long returnValue = getOverlayElement_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, isTemplateParamValue);
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
	native private long getOverlayElement_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.OverlayElement getOverlayElement(String name)
	{
		String nameParamValue = name;
		long returnValue = getOverlayElement_EVString(this.nativeObject.pointer, nameParamValue);
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
	native private boolean hasOverlayElement_EVString_ev_bool(long pNativeObject, String name, boolean isTemplate);
	public boolean hasOverlayElement(String name, boolean isTemplate)
	{
		String nameParamValue = name;
		boolean isTemplateParamValue = isTemplate;
		boolean returnValue = hasOverlayElement_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, isTemplateParamValue);
		return returnValue;
	}
	native private boolean hasOverlayElement_EVString(long pNativeObject, String name);
	public boolean hasOverlayElement(String name)
	{
		String nameParamValue = name;
		boolean returnValue = hasOverlayElement_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void destroyOverlayElement_EVString_ev_bool(long pNativeObject, String instanceName, boolean isTemplate);
	public void destroyOverlayElement(String instanceName, boolean isTemplate)
	{
		String instanceNameParamValue = instanceName;
		boolean isTemplateParamValue = isTemplate;
		destroyOverlayElement_EVString_ev_bool(this.nativeObject.pointer, instanceNameParamValue, isTemplateParamValue);
	}
	native private void destroyOverlayElement_EVString(long pNativeObject, String instanceName);
	public void destroyOverlayElement(String instanceName)
	{
		String instanceNameParamValue = instanceName;
		destroyOverlayElement_EVString(this.nativeObject.pointer, instanceNameParamValue);
	}
	native private void destroyOverlayElement_COverlayElement_ev_bool(long pNativeObject, long pInstance, boolean isTemplate);
	public void destroyOverlayElement(com.earthview.world.graphic.OverlayElement pInstance, boolean isTemplate)
	{
		long pInstanceParamValue = (pInstance == null ? 0L : pInstance.nativeObject.pointer);
		boolean isTemplateParamValue = isTemplate;
		destroyOverlayElement_COverlayElement_ev_bool(this.nativeObject.pointer, pInstanceParamValue, isTemplateParamValue);
	}
	native private void destroyOverlayElement_COverlayElement(long pNativeObject, long pInstance);
	public void destroyOverlayElement(com.earthview.world.graphic.OverlayElement pInstance)
	{
		long pInstanceParamValue = (pInstance == null ? 0L : pInstance.nativeObject.pointer);
		destroyOverlayElement_COverlayElement(this.nativeObject.pointer, pInstanceParamValue);
	}
	native private void destroyAllOverlayElements_ev_bool(long pNativeObject, boolean isTemplate);
	public void destroyAllOverlayElements(boolean isTemplate)
	{
		boolean isTemplateParamValue = isTemplate;
		destroyAllOverlayElements_ev_bool(this.nativeObject.pointer, isTemplateParamValue);
	}
	native private void destroyAllOverlayElements_void(long pNativeObject);
	public void destroyAllOverlayElements()
	{
		destroyAllOverlayElements_void(this.nativeObject.pointer);
	}
	native private void addOverlayElementFactory_COverlayElementFactory(long pNativeObject, long ref_elemFactory);
	public void addOverlayElementFactory(com.earthview.world.graphic.OverlayElementFactory ref_elemFactory)
	{
		long ref_elemFactoryParamValue = (ref_elemFactory == null ? 0L : ref_elemFactory.nativeObject.pointer);
		addOverlayElementFactory_COverlayElementFactory(this.nativeObject.pointer, ref_elemFactoryParamValue);
	}
	native private long getOverlayElementFactoryMap_void(long pNativeObject);
	public com.earthview.world.graphic.OverlayManager.OverlayFactoryMap getOverlayElementFactoryMap()
	{
		long returnValue = getOverlayElementFactoryMap_void(this.nativeObject.pointer);
		com.earthview.world.graphic.OverlayManager.OverlayFactoryMap __returnValue = new com.earthview.world.graphic.OverlayManager.OverlayFactoryMap(CreatedWhenConstruct.CWC_NotToCreate, "OverlayFactoryMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayManager.OverlayFactoryMap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "OverlayFactoryMap");
		}
		return __returnValue;
	}
	native private long createOverlayElementFromTemplate_EVString_EVString_EVString_ev_bool(long pNativeObject, String templateName, String typeName, String instanceName, boolean isTemplate);
	public com.earthview.world.graphic.OverlayElement createOverlayElementFromTemplate(String templateName, String typeName, String instanceName, boolean isTemplate)
	{
		String templateNameParamValue = templateName;
		String typeNameParamValue = typeName;
		String instanceNameParamValue = instanceName;
		boolean isTemplateParamValue = isTemplate;
		long returnValue = createOverlayElementFromTemplate_EVString_EVString_EVString_ev_bool(this.nativeObject.pointer, templateNameParamValue, typeNameParamValue, instanceNameParamValue, isTemplateParamValue);
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
	native private long createOverlayElementFromTemplate_EVString_EVString_EVString(long pNativeObject, String templateName, String typeName, String instanceName);
	public com.earthview.world.graphic.OverlayElement createOverlayElementFromTemplate(String templateName, String typeName, String instanceName)
	{
		String templateNameParamValue = templateName;
		String typeNameParamValue = typeName;
		String instanceNameParamValue = instanceName;
		long returnValue = createOverlayElementFromTemplate_EVString_EVString_EVString(this.nativeObject.pointer, templateNameParamValue, typeNameParamValue, instanceNameParamValue);
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
	native private long cloneOverlayElementFromTemplate_EVString_EVString(long pNativeObject, String templateName, String instanceName);
	public com.earthview.world.graphic.OverlayElement cloneOverlayElementFromTemplate(String templateName, String instanceName)
	{
		String templateNameParamValue = templateName;
		String instanceNameParamValue = instanceName;
		long returnValue = cloneOverlayElementFromTemplate_EVString_EVString(this.nativeObject.pointer, templateNameParamValue, instanceNameParamValue);
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
	native private long createOverlayElementFromFactory_EVString_EVString(long pNativeObject, String typeName, String instanceName);
	public com.earthview.world.graphic.OverlayElement createOverlayElementFromFactory(String typeName, String instanceName)
	{
		String typeNameParamValue = typeName;
		String instanceNameParamValue = instanceName;
		long returnValue = createOverlayElementFromFactory_EVString_EVString(this.nativeObject.pointer, typeNameParamValue, instanceNameParamValue);
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
	native private long getTemplateIterator_void(long pNativeObject);
	public com.earthview.world.graphic.OverlayManager.TemplateIterator getTemplateIterator()
	{
		long returnValue = getTemplateIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.OverlayManager.TemplateIterator __returnValue = new com.earthview.world.graphic.OverlayManager.TemplateIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "TemplateIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayManager.TemplateIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "TemplateIterator");
		}
		return __returnValue;
	}
	native private boolean isTemplate_EVString(long pNativeObject, String strName);
	public boolean isTemplate(String strName)
	{
		String strNameParamValue = strName;
		boolean returnValue = isTemplate_EVString(this.nativeObject.pointer, strNameParamValue);
		return returnValue;
	}
	public OverlayManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public OverlayManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getScriptPatterns_void(long pNativeObject, String method);
	native protected void register_parseScript_DataStreamPtr_EVString(long pNativeObject, String method);
	native protected void register_getLoadingOrder_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getScriptPatterns_void(this.nativeObject.pointer, "getScriptPatterns_void_callback");
			this.register_parseScript_DataStreamPtr_EVString(this.nativeObject.pointer, "parseScript_DataStreamPtr_EVString_callback");
			this.register_getLoadingOrder_void(this.nativeObject.pointer, "getLoadingOrder_void_callback");
		}
	}
	
	public static OverlayManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		OverlayManager obj = null;
 		if(baseObj instanceof OverlayManager)
		{
			obj = (OverlayManager)baseObj;
		} else {
			obj = new OverlayManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COverlayManager");
			obj.increaseCast();
		}

		return obj;
	}
}
