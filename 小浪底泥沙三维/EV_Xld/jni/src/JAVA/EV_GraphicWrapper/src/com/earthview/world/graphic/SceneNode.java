package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 场景节点类此类处理移动、缩放、旋转等于空间相关的行为，每个场景节点可以挂接各自场景元素。
 */
public class SceneNode extends com.earthview.world.graphic.Node {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CSceneNode", new SceneNodeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCSceneNodeProxy", new SceneNodeClassFactory());
	}

	/// <summary>
	/// 对象地图类
	/// typedef EarthView::World::Core::hashmap<EVString, EarthView::World::Graphic::CMovableObject*> EarthView::World::Graphic::CSceneNode::ObjectMap;
	/// </summary>
	public static class ObjectMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSceneNode::ObjectMap", new ObjectMapClassFactory());
		}

		public ObjectMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ObjectMap", null);
		}

		native private boolean push_EVString_CMovableObject(long pNativeObject, String key, long ref_val);
		public boolean push(String key, NativeObjectPointer<com.earthview.world.graphic.MovableObject> ref_val)
		{
			String keyParamValue = key;
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_EVString_CMovableObject(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
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
		public NativeObjectPointer<com.earthview.world.graphic.MovableObject> OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.MovableObject> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.MovableObject>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		public NativeObjectPointer<com.earthview.world.graphic.MovableObject> get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.MovableObject> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.MovableObject>(new InstancePointer(returnValue));
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
		public ObjectMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ObjectMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ObjectMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ObjectMap obj = null;
 			if(baseObj instanceof ObjectMap)
			{
				obj = (ObjectMap)baseObj;
			} else {
				obj = new ObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ObjectMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ObjectMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ObjectMap emptyInstance = new ObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ObjectIteratorPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSceneNode::ObjectIteratorPair", new ObjectIteratorPairClassFactory());
		}

		public ObjectIteratorPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ObjectIteratorPair", null);
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
		public com.earthview.world.graphic.MovableObject get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
			}
			return __returnValue;
		}
		
		native private void set_second_CMovableObject (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.MovableObject second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_CMovableObject(this.nativeObject.pointer, secondParamValue);
		}
		
		public ObjectIteratorPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ObjectIteratorPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ObjectIteratorPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ObjectIteratorPair obj = null;
 			if(baseObj instanceof ObjectIteratorPair)
			{
				obj = (ObjectIteratorPair)baseObj;
			} else {
				obj = new ObjectIteratorPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ObjectIteratorPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ObjectIteratorPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ObjectIteratorPair emptyInstance = new ObjectIteratorPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/// <summary>
	/// 对象地图迭代器类
	/// typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CSceneNode::ObjectMap> EarthView::World::Graphic::CSceneNode::ObjectIterator;
	/// </summary>
	public static class ObjectIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSceneNode::ObjectIterator", new ObjectIteratorClassFactory());
		}

		public ObjectIterator(com.earthview.world.graphic.SceneNode.ObjectMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("ObjectIterator", list);
		}

		public ObjectIterator(com.earthview.world.graphic.SceneNode.ObjectIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("ObjectIterator", list);
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
		public com.earthview.world.graphic.MovableObject nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.MovableObject> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.MovableObject> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.MovableObject>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.MovableObject next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.SceneNode.ObjectIteratorPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.SceneNode.ObjectIteratorPair __returnValue = new com.earthview.world.graphic.SceneNode.ObjectIteratorPair(CreatedWhenConstruct.CWC_NotToCreate, "ObjectIteratorPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SceneNode.ObjectIteratorPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ObjectIteratorPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.SceneNode.ObjectIteratorPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.SceneNode.ObjectIteratorPair __returnValue = new com.earthview.world.graphic.SceneNode.ObjectIteratorPair(CreatedWhenConstruct.CWC_NotToCreate, "ObjectIteratorPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SceneNode.ObjectIteratorPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ObjectIteratorPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.SceneNode.ObjectIteratorPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.SceneNode.ObjectIteratorPair __returnValue = new com.earthview.world.graphic.SceneNode.ObjectIteratorPair(CreatedWhenConstruct.CWC_NotToCreate, "ObjectIteratorPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SceneNode.ObjectIteratorPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ObjectIteratorPair");
			}
			return __returnValue;
		}
		public ObjectIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ObjectIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ObjectIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ObjectIterator obj = null;
 			if(baseObj instanceof ObjectIterator)
			{
				obj = (ObjectIterator)baseObj;
			} else {
				obj = new ObjectIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ObjectIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ObjectIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ObjectIterator emptyInstance = new ObjectIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ConstObjectIteratorPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair", new ConstObjectIteratorPairClassFactory());
		}

		public ConstObjectIteratorPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ConstObjectIteratorPair", null);
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
		public com.earthview.world.graphic.MovableObject get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
			}
			return __returnValue;
		}
		
		native private void set_second_CMovableObject (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.MovableObject second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_CMovableObject(this.nativeObject.pointer, secondParamValue);
		}
		
		public ConstObjectIteratorPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ConstObjectIteratorPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ConstObjectIteratorPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ConstObjectIteratorPair obj = null;
 			if(baseObj instanceof ConstObjectIteratorPair)
			{
				obj = (ConstObjectIteratorPair)baseObj;
			} else {
				obj = new ConstObjectIteratorPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ConstObjectIteratorPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ConstObjectIteratorPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ConstObjectIteratorPair emptyInstance = new ConstObjectIteratorPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/// <summary>
	/// 对象迭代器类
	/// typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CSceneNode::ObjectMap> EarthView::World::Graphic::CSceneNode::ConstObjectIterator;
	/// </summary>
	public static class ConstObjectIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSceneNode::ConstObjectIterator", new ConstObjectIteratorClassFactory());
		}

		public ConstObjectIterator(com.earthview.world.graphic.SceneNode.ObjectMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("ConstObjectIterator", list);
		}

		public ConstObjectIterator(com.earthview.world.graphic.SceneNode.ConstObjectIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("ConstObjectIterator", list);
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
		public com.earthview.world.graphic.MovableObject nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.MovableObject> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.MovableObject> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.MovableObject>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.MovableObject next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.SceneNode.ConstObjectIteratorPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.SceneNode.ConstObjectIteratorPair __returnValue = new com.earthview.world.graphic.SceneNode.ConstObjectIteratorPair(CreatedWhenConstruct.CWC_NotToCreate, "ConstObjectIteratorPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SceneNode.ConstObjectIteratorPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ConstObjectIteratorPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.SceneNode.ConstObjectIteratorPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.SceneNode.ConstObjectIteratorPair __returnValue = new com.earthview.world.graphic.SceneNode.ConstObjectIteratorPair(CreatedWhenConstruct.CWC_NotToCreate, "ConstObjectIteratorPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SceneNode.ConstObjectIteratorPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ConstObjectIteratorPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.SceneNode.ConstObjectIteratorPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.SceneNode.ConstObjectIteratorPair __returnValue = new com.earthview.world.graphic.SceneNode.ConstObjectIteratorPair(CreatedWhenConstruct.CWC_NotToCreate, "ConstObjectIteratorPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SceneNode.ConstObjectIteratorPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ConstObjectIteratorPair");
			}
			return __returnValue;
		}
		public ConstObjectIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ConstObjectIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ConstObjectIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ConstObjectIterator obj = null;
 			if(baseObj instanceof ConstObjectIterator)
			{
				obj = (ConstObjectIterator)baseObj;
			} else {
				obj = new ConstObjectIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ConstObjectIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ConstObjectIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ConstObjectIterator emptyInstance = new ConstObjectIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private void updateFromParentImpl_void(long pNativeObject);
	public void updateFromParentImpl()
	{
		updateFromParentImpl_void(this.nativeObject.pointer);
	}
	native private void updateFromParentImpl_void_NoVirtual(long pNativeObject);
	protected void updateFromParentImpl_NoVirtual()
	{
		updateFromParentImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long createChildImpl_void(long pNativeObject);
	public com.earthview.world.graphic.Node createChildImpl()
	{
		long returnValue = createChildImpl_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}
	native private long createChildImpl_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Node createChildImpl_NoVirtual()
	{
		long returnValue = createChildImpl_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}

	native private long createChildImpl_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.Node createChildImpl(String name)
	{
		String nameParamValue = name;
		long returnValue = createChildImpl_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}
	native private long createChildImpl_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.Node createChildImpl_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = createChildImpl_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}

	native private void setParent_CNode(long pNativeObject, long ref_parent);
	public void setParent(com.earthview.world.graphic.Node ref_parent)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		setParent_CNode(this.nativeObject.pointer, ref_parentParamValue);
	}
	native private void setParent_CNode_NoVirtual(long pNativeObject, long ref_parent);
	protected void setParent_NoVirtual(com.earthview.world.graphic.Node ref_parent)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		setParent_CNode_NoVirtual(this.nativeObject.pointer, ref_parentParamValue);
	}

	protected  void setInSceneGraph_ev_bool_callback(boolean inGraph)
	{
		boolean inGraphParamValue = inGraph;
		setInSceneGraph(inGraphParamValue);
	}

	native private void setInSceneGraph_ev_bool(long pNativeObject, boolean inGraph);
	/**
	 * 设置节点是否在场景图中内部方法
	 * @param inGraph 是否在场景图中
	 */
	public void setInSceneGraph(boolean inGraph)
	{
		boolean inGraphParamValue = inGraph;
		setInSceneGraph_ev_bool(this.nativeObject.pointer, inGraphParamValue);
	}
	native private void setInSceneGraph_ev_bool_NoVirtual(long pNativeObject, boolean inGraph);
	protected void setInSceneGraph_NoVirtual(boolean inGraph)
	{
		boolean inGraphParamValue = inGraph;
		setInSceneGraph_ev_bool_NoVirtual(this.nativeObject.pointer, inGraphParamValue);
	}

	native private void notifyMoved_void(long pNativeObject);
	public void notifyMoved()
	{
		notifyMoved_void(this.nativeObject.pointer);
	}
	native private void notifyMoved_void_NoVirtual(long pNativeObject);
	protected void notifyMoved_NoVirtual()
	{
		notifyMoved_void_NoVirtual(this.nativeObject.pointer);
	}

	/**
	 * 构造函数创建一个节点，使用生成的名字
	 * @param creator 
	 */
	public SceneNode(com.earthview.world.graphic.SceneManager ref_creator) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		Create("JCSceneNodeProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.SceneNode".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数创建一个节点，使用指定的名字
	 * @param creator 
	 * @param name 
	 */
	public SceneNode(com.earthview.world.graphic.SceneManager ref_creator, String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCSceneNodeProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.SceneNode".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void attachObject_CMovableObject(long pNativeObject, long ref_obj);
	/**
	 * 在当前节点下挂接一个移动对象
	 * @param obj 移动对象
	 */
	public void attachObject(com.earthview.world.graphic.MovableObject ref_obj)
	{
		long ref_objParamValue = (ref_obj == null ? 0L : ref_obj.nativeObject.pointer);
		attachObject_CMovableObject(this.nativeObject.pointer, ref_objParamValue);
	}
	native private void attachObject_CMovableObject_NoVirtual(long pNativeObject, long ref_obj);
	protected void attachObject_NoVirtual(com.earthview.world.graphic.MovableObject ref_obj)
	{
		long ref_objParamValue = (ref_obj == null ? 0L : ref_obj.nativeObject.pointer);
		attachObject_CMovableObject_NoVirtual(this.nativeObject.pointer, ref_objParamValue);
	}

	native private int numAttachedObjects_void(long pNativeObject);
	/**
	 * 挂接在当前节点下的对象个数
	 * @param  
	 */
	public int numAttachedObjects()
	{
		int returnValue = numAttachedObjects_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int numAttachedObjects_void_NoVirtual(long pNativeObject);
	protected int numAttachedObjects_NoVirtual()
	{
		int returnValue = numAttachedObjects_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getAttachedObject_ev_uint16(long pNativeObject, int index);
	/**
	 * 按索引号获取挂接对象
	 * @param index 索引
	 */
	public com.earthview.world.graphic.MovableObject getAttachedObject(int index)
	{
		int indexParamValue = index;
		long returnValue = getAttachedObject_ev_uint16(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
		}
		return __returnValue;
	}
	native private long getAttachedObject_ev_uint16_NoVirtual(long pNativeObject, int index);
	protected com.earthview.world.graphic.MovableObject getAttachedObject_NoVirtual(int index)
	{
		int indexParamValue = index;
		long returnValue = getAttachedObject_ev_uint16_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
		}
		return __returnValue;
	}

	native private long getAttachedObject_EVString(long pNativeObject, String name);
	/**
	 * 按名称获取挂接对象
	 * @param name 名称
	 */
	public com.earthview.world.graphic.MovableObject getAttachedObject(String name)
	{
		String nameParamValue = name;
		long returnValue = getAttachedObject_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
		}
		return __returnValue;
	}
	native private long getAttachedObject_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.MovableObject getAttachedObject_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = getAttachedObject_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
		}
		return __returnValue;
	}

	native private long detachObject_ev_uint16(long pNativeObject, int index);
	/**
	 * 反挂接指定索引号的移动对象
	 * @param index 索引
	 */
	public com.earthview.world.graphic.MovableObject detachObject(int index)
	{
		int indexParamValue = index;
		long returnValue = detachObject_ev_uint16(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
		}
		return __returnValue;
	}
	native private long detachObject_ev_uint16_NoVirtual(long pNativeObject, int index);
	protected com.earthview.world.graphic.MovableObject detachObject_NoVirtual(int index)
	{
		int indexParamValue = index;
		long returnValue = detachObject_ev_uint16_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
		}
		return __returnValue;
	}

	native private void detachObject_CMovableObject(long pNativeObject, long obj);
	/**
	 * 反挂接指定节点的移动对象
	 * @param obj 移动对象
	 */
	public void detachObject(com.earthview.world.graphic.MovableObject obj)
	{
		long objParamValue = (obj == null ? 0L : obj.nativeObject.pointer);
		detachObject_CMovableObject(this.nativeObject.pointer, objParamValue);
	}
	native private void detachObject_CMovableObject_NoVirtual(long pNativeObject, long obj);
	protected void detachObject_NoVirtual(com.earthview.world.graphic.MovableObject obj)
	{
		long objParamValue = (obj == null ? 0L : obj.nativeObject.pointer);
		detachObject_CMovableObject_NoVirtual(this.nativeObject.pointer, objParamValue);
	}

	native private long detachObject_EVString(long pNativeObject, String name);
	/**
	 * 反挂接指定名称的移动对象
	 * @param name 名称
	 */
	public com.earthview.world.graphic.MovableObject detachObject(String name)
	{
		String nameParamValue = name;
		long returnValue = detachObject_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
		}
		return __returnValue;
	}
	native private long detachObject_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.MovableObject detachObject_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = detachObject_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
		}
		return __returnValue;
	}

	native private void detachAllObjects_void(long pNativeObject);
	/**
	 * 反挂接指定节点的所有对象
	 * @param name 名称
	 */
	public void detachAllObjects()
	{
		detachAllObjects_void(this.nativeObject.pointer);
	}
	native private void detachAllObjects_void_NoVirtual(long pNativeObject);
	protected void detachAllObjects_NoVirtual()
	{
		detachAllObjects_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean isInSceneGraph_void_callback()
	{
		boolean returnValue = isInSceneGraph();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isInSceneGraph_void(long pNativeObject);
	/**
	 * 确定此节点是否在场景图中此节点是否继承自根场景节点
	 * @param  
	 */
	public boolean isInSceneGraph()
	{
		boolean returnValue = isInSceneGraph_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isInSceneGraph_void_NoVirtual(long pNativeObject);
	protected boolean isInSceneGraph_NoVirtual()
	{
		boolean returnValue = isInSceneGraph_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void _notifyRootNode_void_callback()
	{
		_notifyRootNode();
	}

	native private void _notifyRootNode_void(long pNativeObject);
	/**
	 * 通知此节点作为场景根节点内部方法
	 * @param  
	 */
	public void _notifyRootNode()
	{
		_notifyRootNode_void(this.nativeObject.pointer);
	}
	native private void _notifyRootNode_void_NoVirtual(long pNativeObject);
	protected void _notifyRootNode_NoVirtual()
	{
		_notifyRootNode_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void _update_ev_bool_ev_bool(long pNativeObject, boolean updateChildren, boolean parentHasChanged);
	/**
	 * 更新场景节点内部方法
	 * @param updateChildren 为true，逐级更新子节点
	 * @param parentHasChanged 为true，表明父节点位置改变，子节点继承父节点变化
	 */
	public void _update(boolean updateChildren, boolean parentHasChanged)
	{
		boolean updateChildrenParamValue = updateChildren;
		boolean parentHasChangedParamValue = parentHasChanged;
		_update_ev_bool_ev_bool(this.nativeObject.pointer, updateChildrenParamValue, parentHasChangedParamValue);
	}
	native private void _update_ev_bool_ev_bool_NoVirtual(long pNativeObject, boolean updateChildren, boolean parentHasChanged);
	protected void _update_NoVirtual(boolean updateChildren, boolean parentHasChanged)
	{
		boolean updateChildrenParamValue = updateChildren;
		boolean parentHasChangedParamValue = parentHasChanged;
		_update_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, updateChildrenParamValue, parentHasChangedParamValue);
	}

	protected  void _updateBounds_void_callback()
	{
		_updateBounds();
	}

	native private void _updateBounds_void(long pNativeObject);
	/**
	 * 通知场景节点更新包围盒
	 * @param  
	 */
	public void _updateBounds()
	{
		_updateBounds_void(this.nativeObject.pointer);
	}
	native private void _updateBounds_void_NoVirtual(long pNativeObject);
	protected void _updateBounds_NoVirtual()
	{
		_updateBounds_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_callback(long cam, long queue, long visibleBounds, boolean includeChildren, boolean displayNodes, boolean onlyShadowCasters)
	{
		com.earthview.world.graphic.Camera camParamValue = (cam == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
		if(camParamValue != null)
		{
		camParamValue.setDelegate(true);
		camParamValue.setInstancePointer(new InstancePointer(cam));
		IClassFactory camParamValueClassFactory = GlobalClassFactoryMap.get(camParamValue.getCppInstanceTypeName());
		if (camParamValueClassFactory != null)
		{
			camParamValue.setDelegate(true);
			camParamValue = (com.earthview.world.graphic.Camera)camParamValueClassFactory.create();
			camParamValue.setDelegate(true);
			camParamValue.setInstancePointer(new InstancePointer(cam));
		}
		}
		com.earthview.world.graphic.RenderQueue queueParamValue = (queue == 0L ? null : new com.earthview.world.graphic.RenderQueue(CreatedWhenConstruct.CWC_NotToCreate));
		if(queueParamValue != null)
		{
		queueParamValue.setDelegate(true);
		queueParamValue.setInstancePointer(new InstancePointer(queue));
		IClassFactory queueParamValueClassFactory = GlobalClassFactoryMap.get(queueParamValue.getCppInstanceTypeName());
		if (queueParamValueClassFactory != null)
		{
			queueParamValue.setDelegate(true);
			queueParamValue = (com.earthview.world.graphic.RenderQueue)queueParamValueClassFactory.create();
			queueParamValue.setDelegate(true);
			queueParamValue.setInstancePointer(new InstancePointer(queue));
		}
		}
		com.earthview.world.graphic.VisibleObjectsBoundsInfo visibleBoundsParamValue = (visibleBounds == 0L ? null : new com.earthview.world.graphic.VisibleObjectsBoundsInfo(CreatedWhenConstruct.CWC_NotToCreate));
		if(visibleBoundsParamValue != null)
		{
		visibleBoundsParamValue.setDelegate(true);
		visibleBoundsParamValue.setInstancePointer(new InstancePointer(visibleBounds));
		IClassFactory visibleBoundsParamValueClassFactory = GlobalClassFactoryMap.get(visibleBoundsParamValue.getCppInstanceTypeName());
		if (visibleBoundsParamValueClassFactory != null)
		{
			visibleBoundsParamValue.setDelegate(true);
			visibleBoundsParamValue = (com.earthview.world.graphic.VisibleObjectsBoundsInfo)visibleBoundsParamValueClassFactory.create();
			visibleBoundsParamValue.setDelegate(true);
			visibleBoundsParamValue.setInstancePointer(new InstancePointer(visibleBounds));
		}
		}
		boolean includeChildrenParamValue = includeChildren;
		boolean displayNodesParamValue = displayNodes;
		boolean onlyShadowCastersParamValue = onlyShadowCasters;
		_findVisibleObjects(camParamValue, queueParamValue, visibleBoundsParamValue, includeChildrenParamValue, displayNodesParamValue, onlyShadowCastersParamValue);
	}

	native private void _findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool(long pNativeObject, long cam, long queue, long visibleBounds, boolean includeChildren, boolean displayNodes, boolean onlyShadowCasters);
	/**
	 * 查找可见对象添加到当前节点和渲染队列内部方法，只能被场景管理实现调用
	 * @param cam 动态摄像机
	 * @param queue 场景管理的渲染队列
	 * @param visibleBounds 摄像机创建所有可见对象飞行盒的边界信息
	 * @param includeChildren 为true，逐级自动检查所有子节点
	 * @param displayNodes 为true，设置一个三维坐标渲染节点
	 * @param onlyShadowCasters 阴影摄像机
	 */
	public void _findVisibleObjects(com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.RenderQueue queue, com.earthview.world.graphic.VisibleObjectsBoundsInfo visibleBounds, boolean includeChildren, boolean displayNodes, boolean onlyShadowCasters)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		long visibleBoundsParamValue = (visibleBounds == null ? 0L : visibleBounds.nativeObject.pointer);
		boolean includeChildrenParamValue = includeChildren;
		boolean displayNodesParamValue = displayNodes;
		boolean onlyShadowCastersParamValue = onlyShadowCasters;
		_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, camParamValue, queueParamValue, visibleBoundsParamValue, includeChildrenParamValue, displayNodesParamValue, onlyShadowCastersParamValue);
	}
	native private void _findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_NoVirtual(long pNativeObject, long cam, long queue, long visibleBounds, boolean includeChildren, boolean displayNodes, boolean onlyShadowCasters);
	protected void _findVisibleObjects_NoVirtual(com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.RenderQueue queue, com.earthview.world.graphic.VisibleObjectsBoundsInfo visibleBounds, boolean includeChildren, boolean displayNodes, boolean onlyShadowCasters)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		long visibleBoundsParamValue = (visibleBounds == null ? 0L : visibleBounds.nativeObject.pointer);
		boolean includeChildrenParamValue = includeChildren;
		boolean displayNodesParamValue = displayNodes;
		boolean onlyShadowCastersParamValue = onlyShadowCasters;
		_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, camParamValue, queueParamValue, visibleBoundsParamValue, includeChildrenParamValue, displayNodesParamValue, onlyShadowCastersParamValue);
	}

	protected  void _findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_callback(long cam, long queue, long visibleBounds, boolean includeChildren, boolean displayNodes)
	{
		com.earthview.world.graphic.Camera camParamValue = (cam == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
		if(camParamValue != null)
		{
		camParamValue.setDelegate(true);
		camParamValue.setInstancePointer(new InstancePointer(cam));
		IClassFactory camParamValueClassFactory = GlobalClassFactoryMap.get(camParamValue.getCppInstanceTypeName());
		if (camParamValueClassFactory != null)
		{
			camParamValue.setDelegate(true);
			camParamValue = (com.earthview.world.graphic.Camera)camParamValueClassFactory.create();
			camParamValue.setDelegate(true);
			camParamValue.setInstancePointer(new InstancePointer(cam));
		}
		}
		com.earthview.world.graphic.RenderQueue queueParamValue = (queue == 0L ? null : new com.earthview.world.graphic.RenderQueue(CreatedWhenConstruct.CWC_NotToCreate));
		if(queueParamValue != null)
		{
		queueParamValue.setDelegate(true);
		queueParamValue.setInstancePointer(new InstancePointer(queue));
		IClassFactory queueParamValueClassFactory = GlobalClassFactoryMap.get(queueParamValue.getCppInstanceTypeName());
		if (queueParamValueClassFactory != null)
		{
			queueParamValue.setDelegate(true);
			queueParamValue = (com.earthview.world.graphic.RenderQueue)queueParamValueClassFactory.create();
			queueParamValue.setDelegate(true);
			queueParamValue.setInstancePointer(new InstancePointer(queue));
		}
		}
		com.earthview.world.graphic.VisibleObjectsBoundsInfo visibleBoundsParamValue = (visibleBounds == 0L ? null : new com.earthview.world.graphic.VisibleObjectsBoundsInfo(CreatedWhenConstruct.CWC_NotToCreate));
		if(visibleBoundsParamValue != null)
		{
		visibleBoundsParamValue.setDelegate(true);
		visibleBoundsParamValue.setInstancePointer(new InstancePointer(visibleBounds));
		IClassFactory visibleBoundsParamValueClassFactory = GlobalClassFactoryMap.get(visibleBoundsParamValue.getCppInstanceTypeName());
		if (visibleBoundsParamValueClassFactory != null)
		{
			visibleBoundsParamValue.setDelegate(true);
			visibleBoundsParamValue = (com.earthview.world.graphic.VisibleObjectsBoundsInfo)visibleBoundsParamValueClassFactory.create();
			visibleBoundsParamValue.setDelegate(true);
			visibleBoundsParamValue.setInstancePointer(new InstancePointer(visibleBounds));
		}
		}
		boolean includeChildrenParamValue = includeChildren;
		boolean displayNodesParamValue = displayNodes;
		_findVisibleObjects(camParamValue, queueParamValue, visibleBoundsParamValue, includeChildrenParamValue, displayNodesParamValue);
	}

	native private void _findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool(long pNativeObject, long cam, long queue, long visibleBounds, boolean includeChildren, boolean displayNodes);
	public void _findVisibleObjects(com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.RenderQueue queue, com.earthview.world.graphic.VisibleObjectsBoundsInfo visibleBounds, boolean includeChildren, boolean displayNodes)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		long visibleBoundsParamValue = (visibleBounds == null ? 0L : visibleBounds.nativeObject.pointer);
		boolean includeChildrenParamValue = includeChildren;
		boolean displayNodesParamValue = displayNodes;
		_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool(this.nativeObject.pointer, camParamValue, queueParamValue, visibleBoundsParamValue, includeChildrenParamValue, displayNodesParamValue);
	}
	native private void _findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_NoVirtual(long pNativeObject, long cam, long queue, long visibleBounds, boolean includeChildren, boolean displayNodes);
	protected void _findVisibleObjects_NoVirtual(com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.RenderQueue queue, com.earthview.world.graphic.VisibleObjectsBoundsInfo visibleBounds, boolean includeChildren, boolean displayNodes)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		long visibleBoundsParamValue = (visibleBounds == null ? 0L : visibleBounds.nativeObject.pointer);
		boolean includeChildrenParamValue = includeChildren;
		boolean displayNodesParamValue = displayNodes;
		_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, camParamValue, queueParamValue, visibleBoundsParamValue, includeChildrenParamValue, displayNodesParamValue);
	}

	protected  void _findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_callback(long cam, long queue, long visibleBounds, boolean includeChildren)
	{
		com.earthview.world.graphic.Camera camParamValue = (cam == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
		if(camParamValue != null)
		{
		camParamValue.setDelegate(true);
		camParamValue.setInstancePointer(new InstancePointer(cam));
		IClassFactory camParamValueClassFactory = GlobalClassFactoryMap.get(camParamValue.getCppInstanceTypeName());
		if (camParamValueClassFactory != null)
		{
			camParamValue.setDelegate(true);
			camParamValue = (com.earthview.world.graphic.Camera)camParamValueClassFactory.create();
			camParamValue.setDelegate(true);
			camParamValue.setInstancePointer(new InstancePointer(cam));
		}
		}
		com.earthview.world.graphic.RenderQueue queueParamValue = (queue == 0L ? null : new com.earthview.world.graphic.RenderQueue(CreatedWhenConstruct.CWC_NotToCreate));
		if(queueParamValue != null)
		{
		queueParamValue.setDelegate(true);
		queueParamValue.setInstancePointer(new InstancePointer(queue));
		IClassFactory queueParamValueClassFactory = GlobalClassFactoryMap.get(queueParamValue.getCppInstanceTypeName());
		if (queueParamValueClassFactory != null)
		{
			queueParamValue.setDelegate(true);
			queueParamValue = (com.earthview.world.graphic.RenderQueue)queueParamValueClassFactory.create();
			queueParamValue.setDelegate(true);
			queueParamValue.setInstancePointer(new InstancePointer(queue));
		}
		}
		com.earthview.world.graphic.VisibleObjectsBoundsInfo visibleBoundsParamValue = (visibleBounds == 0L ? null : new com.earthview.world.graphic.VisibleObjectsBoundsInfo(CreatedWhenConstruct.CWC_NotToCreate));
		if(visibleBoundsParamValue != null)
		{
		visibleBoundsParamValue.setDelegate(true);
		visibleBoundsParamValue.setInstancePointer(new InstancePointer(visibleBounds));
		IClassFactory visibleBoundsParamValueClassFactory = GlobalClassFactoryMap.get(visibleBoundsParamValue.getCppInstanceTypeName());
		if (visibleBoundsParamValueClassFactory != null)
		{
			visibleBoundsParamValue.setDelegate(true);
			visibleBoundsParamValue = (com.earthview.world.graphic.VisibleObjectsBoundsInfo)visibleBoundsParamValueClassFactory.create();
			visibleBoundsParamValue.setDelegate(true);
			visibleBoundsParamValue.setInstancePointer(new InstancePointer(visibleBounds));
		}
		}
		boolean includeChildrenParamValue = includeChildren;
		_findVisibleObjects(camParamValue, queueParamValue, visibleBoundsParamValue, includeChildrenParamValue);
	}

	native private void _findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool(long pNativeObject, long cam, long queue, long visibleBounds, boolean includeChildren);
	public void _findVisibleObjects(com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.RenderQueue queue, com.earthview.world.graphic.VisibleObjectsBoundsInfo visibleBounds, boolean includeChildren)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		long visibleBoundsParamValue = (visibleBounds == null ? 0L : visibleBounds.nativeObject.pointer);
		boolean includeChildrenParamValue = includeChildren;
		_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool(this.nativeObject.pointer, camParamValue, queueParamValue, visibleBoundsParamValue, includeChildrenParamValue);
	}
	native private void _findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_NoVirtual(long pNativeObject, long cam, long queue, long visibleBounds, boolean includeChildren);
	protected void _findVisibleObjects_NoVirtual(com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.RenderQueue queue, com.earthview.world.graphic.VisibleObjectsBoundsInfo visibleBounds, boolean includeChildren)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		long visibleBoundsParamValue = (visibleBounds == null ? 0L : visibleBounds.nativeObject.pointer);
		boolean includeChildrenParamValue = includeChildren;
		_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_NoVirtual(this.nativeObject.pointer, camParamValue, queueParamValue, visibleBoundsParamValue, includeChildrenParamValue);
	}

	protected  void _findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_callback(long cam, long queue, long visibleBounds)
	{
		com.earthview.world.graphic.Camera camParamValue = (cam == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
		if(camParamValue != null)
		{
		camParamValue.setDelegate(true);
		camParamValue.setInstancePointer(new InstancePointer(cam));
		IClassFactory camParamValueClassFactory = GlobalClassFactoryMap.get(camParamValue.getCppInstanceTypeName());
		if (camParamValueClassFactory != null)
		{
			camParamValue.setDelegate(true);
			camParamValue = (com.earthview.world.graphic.Camera)camParamValueClassFactory.create();
			camParamValue.setDelegate(true);
			camParamValue.setInstancePointer(new InstancePointer(cam));
		}
		}
		com.earthview.world.graphic.RenderQueue queueParamValue = (queue == 0L ? null : new com.earthview.world.graphic.RenderQueue(CreatedWhenConstruct.CWC_NotToCreate));
		if(queueParamValue != null)
		{
		queueParamValue.setDelegate(true);
		queueParamValue.setInstancePointer(new InstancePointer(queue));
		IClassFactory queueParamValueClassFactory = GlobalClassFactoryMap.get(queueParamValue.getCppInstanceTypeName());
		if (queueParamValueClassFactory != null)
		{
			queueParamValue.setDelegate(true);
			queueParamValue = (com.earthview.world.graphic.RenderQueue)queueParamValueClassFactory.create();
			queueParamValue.setDelegate(true);
			queueParamValue.setInstancePointer(new InstancePointer(queue));
		}
		}
		com.earthview.world.graphic.VisibleObjectsBoundsInfo visibleBoundsParamValue = (visibleBounds == 0L ? null : new com.earthview.world.graphic.VisibleObjectsBoundsInfo(CreatedWhenConstruct.CWC_NotToCreate));
		if(visibleBoundsParamValue != null)
		{
		visibleBoundsParamValue.setDelegate(true);
		visibleBoundsParamValue.setInstancePointer(new InstancePointer(visibleBounds));
		IClassFactory visibleBoundsParamValueClassFactory = GlobalClassFactoryMap.get(visibleBoundsParamValue.getCppInstanceTypeName());
		if (visibleBoundsParamValueClassFactory != null)
		{
			visibleBoundsParamValue.setDelegate(true);
			visibleBoundsParamValue = (com.earthview.world.graphic.VisibleObjectsBoundsInfo)visibleBoundsParamValueClassFactory.create();
			visibleBoundsParamValue.setDelegate(true);
			visibleBoundsParamValue.setInstancePointer(new InstancePointer(visibleBounds));
		}
		}
		_findVisibleObjects(camParamValue, queueParamValue, visibleBoundsParamValue);
	}

	native private void _findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo(long pNativeObject, long cam, long queue, long visibleBounds);
	public void _findVisibleObjects(com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.RenderQueue queue, com.earthview.world.graphic.VisibleObjectsBoundsInfo visibleBounds)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		long visibleBoundsParamValue = (visibleBounds == null ? 0L : visibleBounds.nativeObject.pointer);
		_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo(this.nativeObject.pointer, camParamValue, queueParamValue, visibleBoundsParamValue);
	}
	native private void _findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_NoVirtual(long pNativeObject, long cam, long queue, long visibleBounds);
	protected void _findVisibleObjects_NoVirtual(com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.RenderQueue queue, com.earthview.world.graphic.VisibleObjectsBoundsInfo visibleBounds)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		long visibleBoundsParamValue = (visibleBounds == null ? 0L : visibleBounds.nativeObject.pointer);
		_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_NoVirtual(this.nativeObject.pointer, camParamValue, queueParamValue, visibleBoundsParamValue);
	}

	protected  long _getWorldAABB_void_callback()
	{
		com.earthview.world.spatial.math.AxisAlignedBox returnValue = _getWorldAABB();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _getWorldAABB_void(long pNativeObject);
	/**
	 * 获取指定节点的世界坐标系下的边框盒
	 * @param  
	 * @return 边框盒
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox _getWorldAABB()
	{
		long returnValue = _getWorldAABB_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private long _getWorldAABB_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.AxisAlignedBox _getWorldAABB_NoVirtual()
	{
		long returnValue = _getWorldAABB_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}

	protected  long getAttachedObjectIterator_void_callback()
	{
		com.earthview.world.graphic.SceneNode.ObjectIterator returnValue = getAttachedObjectIterator();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAttachedObjectIterator_void(long pNativeObject);
	/**
	 * 获取一个迭代器遍历节点上的附属物
	 * @param  
	 * @return 对象迭代器
	 */
	public com.earthview.world.graphic.SceneNode.ObjectIterator getAttachedObjectIterator()
	{
		long returnValue = getAttachedObjectIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.SceneNode.ObjectIterator __returnValue = new com.earthview.world.graphic.SceneNode.ObjectIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ObjectIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneNode.ObjectIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ObjectIterator");
		}
		return __returnValue;
	}
	native private long getAttachedObjectIterator_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.SceneNode.ObjectIterator getAttachedObjectIterator_NoVirtual()
	{
		long returnValue = getAttachedObjectIterator_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.SceneNode.ObjectIterator __returnValue = new com.earthview.world.graphic.SceneNode.ObjectIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ObjectIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneNode.ObjectIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ObjectIterator");
		}
		return __returnValue;
	}

	native private long getCreator_void(long pNativeObject);
	/**
	 * 获取场景节点的创建者可以用于销毁这个节点
	 * @param  
	 */
	public com.earthview.world.graphic.SceneManager getCreator()
	{
		long returnValue = getCreator_void(this.nativeObject.pointer);
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
	native private void removeAndDestroyChild_EVString(long pNativeObject, String name);
	/**
	 * 通过名称删除指定子节点及其它的字节点
	 * @param name 名称
	 */
	public void removeAndDestroyChild(String name)
	{
		String nameParamValue = name;
		removeAndDestroyChild_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void removeAndDestroyChild_EVString_NoVirtual(long pNativeObject, String name);
	protected void removeAndDestroyChild_NoVirtual(String name)
	{
		String nameParamValue = name;
		removeAndDestroyChild_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	native private void removeAndDestroyChild_ev_uint16(long pNativeObject, int index);
	/**
	 * 通过检索删除指定子节点及其它的字节点
	 * @param index 检索
	 */
	public void removeAndDestroyChild(int index)
	{
		int indexParamValue = index;
		removeAndDestroyChild_ev_uint16(this.nativeObject.pointer, indexParamValue);
	}
	native private void removeAndDestroyChild_ev_uint16_NoVirtual(long pNativeObject, int index);
	protected void removeAndDestroyChild_NoVirtual(int index)
	{
		int indexParamValue = index;
		removeAndDestroyChild_ev_uint16_NoVirtual(this.nativeObject.pointer, indexParamValue);
	}

	native private void removeAndDestroyAllChildren_void(long pNativeObject);
	/**
	 * 删除此节点的所有子节点
	 * @param  
	 */
	public void removeAndDestroyAllChildren()
	{
		removeAndDestroyAllChildren_void(this.nativeObject.pointer);
	}
	native private void removeAndDestroyAllChildren_void_NoVirtual(long pNativeObject);
	protected void removeAndDestroyAllChildren_NoVirtual()
	{
		removeAndDestroyAllChildren_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void showBoundingBox_ev_bool_callback(boolean bShow)
	{
		boolean bShowParamValue = bShow;
		showBoundingBox(bShowParamValue);
	}

	native private void showBoundingBox_ev_bool(long pNativeObject, boolean bShow);
	/**
	 * 显示此节点的边界盒
	 * @param bShow 是否显示
	 */
	public void showBoundingBox(boolean bShow)
	{
		boolean bShowParamValue = bShow;
		showBoundingBox_ev_bool(this.nativeObject.pointer, bShowParamValue);
	}
	native private void showBoundingBox_ev_bool_NoVirtual(long pNativeObject, boolean bShow);
	protected void showBoundingBox_NoVirtual(boolean bShow)
	{
		boolean bShowParamValue = bShow;
		showBoundingBox_ev_bool_NoVirtual(this.nativeObject.pointer, bShowParamValue);
	}

	protected  void showBoundingBox_ev_bool_CMaterialPtr_callback(boolean bShow, long redPtr)
	{
		boolean bShowParamValue = bShow;
		com.earthview.world.graphic.MaterialPtr redPtrParamValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		redPtrParamValue.setDelegate(true);
		redPtrParamValue.setInstancePointer(new InstancePointer(redPtr));
		IClassFactory redPtrParamValueClassFactory = GlobalClassFactoryMap.get(redPtrParamValue.getCppInstanceTypeName());
		if (redPtrParamValueClassFactory != null)
		{
			redPtrParamValue.setDelegate(true);
			redPtrParamValue = (com.earthview.world.graphic.MaterialPtr)redPtrParamValueClassFactory.create();
			redPtrParamValue.setDelegate(true);
			redPtrParamValue.setInstancePointer(new InstancePointer(redPtr));
		}
		showBoundingBox(bShowParamValue, redPtrParamValue);
	}

	native private void showBoundingBox_ev_bool_CMaterialPtr(long pNativeObject, boolean bShow, long redPtr);
	public void showBoundingBox(boolean bShow, com.earthview.world.graphic.MaterialPtr redPtr)
	{
		boolean bShowParamValue = bShow;
		long redPtrParamValue = redPtr.nativeObject.pointer;
		showBoundingBox_ev_bool_CMaterialPtr(this.nativeObject.pointer, bShowParamValue, redPtrParamValue);
	}
	native private void showBoundingBox_ev_bool_CMaterialPtr_NoVirtual(long pNativeObject, boolean bShow, long redPtr);
	protected void showBoundingBox_NoVirtual(boolean bShow, com.earthview.world.graphic.MaterialPtr redPtr)
	{
		boolean bShowParamValue = bShow;
		long redPtrParamValue = redPtr.nativeObject.pointer;
		showBoundingBox_ev_bool_CMaterialPtr_NoVirtual(this.nativeObject.pointer, bShowParamValue, redPtrParamValue);
	}

	protected  void hideBoundingBox_ev_bool_callback(boolean bHide)
	{
		boolean bHideParamValue = bHide;
		hideBoundingBox(bHideParamValue);
	}

	native private void hideBoundingBox_ev_bool(long pNativeObject, boolean bHide);
	/**
	 * 隐藏此节点的包围盒
	 * @param bHide 是否隐藏
	 */
	public void hideBoundingBox(boolean bHide)
	{
		boolean bHideParamValue = bHide;
		hideBoundingBox_ev_bool(this.nativeObject.pointer, bHideParamValue);
	}
	native private void hideBoundingBox_ev_bool_NoVirtual(long pNativeObject, boolean bHide);
	protected void hideBoundingBox_NoVirtual(boolean bHide)
	{
		boolean bHideParamValue = bHide;
		hideBoundingBox_ev_bool_NoVirtual(this.nativeObject.pointer, bHideParamValue);
	}

	protected  void _addBoundingBoxToQueue_CRenderQueue_callback(long queue)
	{
		com.earthview.world.graphic.RenderQueue queueParamValue = (queue == 0L ? null : new com.earthview.world.graphic.RenderQueue(CreatedWhenConstruct.CWC_NotToCreate));
		if(queueParamValue != null)
		{
		queueParamValue.setDelegate(true);
		queueParamValue.setInstancePointer(new InstancePointer(queue));
		IClassFactory queueParamValueClassFactory = GlobalClassFactoryMap.get(queueParamValue.getCppInstanceTypeName());
		if (queueParamValueClassFactory != null)
		{
			queueParamValue.setDelegate(true);
			queueParamValue = (com.earthview.world.graphic.RenderQueue)queueParamValueClassFactory.create();
			queueParamValue.setDelegate(true);
			queueParamValue.setInstancePointer(new InstancePointer(queue));
		}
		}
		_addBoundingBoxToQueue(queueParamValue);
	}

	native private void _addBoundingBoxToQueue_CRenderQueue(long pNativeObject, long queue);
	/**
	 * 将边界盒添加到渲染队列内部方法
	 * @param queue 渲染队列
	 */
	public void _addBoundingBoxToQueue(com.earthview.world.graphic.RenderQueue queue)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		_addBoundingBoxToQueue_CRenderQueue(this.nativeObject.pointer, queueParamValue);
	}
	native private void _addBoundingBoxToQueue_CRenderQueue_NoVirtual(long pNativeObject, long queue);
	protected void _addBoundingBoxToQueue_NoVirtual(com.earthview.world.graphic.RenderQueue queue)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		_addBoundingBoxToQueue_CRenderQueue_NoVirtual(this.nativeObject.pointer, queueParamValue);
	}

	protected  boolean getShowBoundingBox_void_callback()
	{
		boolean returnValue = getShowBoundingBox();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getShowBoundingBox_void(long pNativeObject);
	/**
	 * 获取此节点的包围盒是否显示
	 * @param  
	 */
	public boolean getShowBoundingBox()
	{
		boolean returnValue = getShowBoundingBox_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getShowBoundingBox_void_NoVirtual(long pNativeObject);
	protected boolean getShowBoundingBox_NoVirtual()
	{
		boolean returnValue = getShowBoundingBox_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long createChildSceneNode_CVector3_CQuaternion_callback(long translate, long rotate)
	{
		com.earthview.world.spatial.math.Vector3 translateParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		translateParamValue.setDelegate(true);
		translateParamValue.setInstancePointer(new InstancePointer(translate));
		IClassFactory translateParamValueClassFactory = GlobalClassFactoryMap.get(translateParamValue.getCppInstanceTypeName());
		if (translateParamValueClassFactory != null)
		{
			translateParamValue.setDelegate(true);
			translateParamValue = (com.earthview.world.spatial.math.Vector3)translateParamValueClassFactory.create();
			translateParamValue.setDelegate(true);
			translateParamValue.setInstancePointer(new InstancePointer(translate));
		}
		com.earthview.world.spatial.math.Quaternion rotateParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		rotateParamValue.setDelegate(true);
		rotateParamValue.setInstancePointer(new InstancePointer(rotate));
		IClassFactory rotateParamValueClassFactory = GlobalClassFactoryMap.get(rotateParamValue.getCppInstanceTypeName());
		if (rotateParamValueClassFactory != null)
		{
			rotateParamValue.setDelegate(true);
			rotateParamValue = (com.earthview.world.spatial.math.Quaternion)rotateParamValueClassFactory.create();
			rotateParamValue.setDelegate(true);
			rotateParamValue.setInstancePointer(new InstancePointer(rotate));
		}
		com.earthview.world.graphic.SceneNode returnValue = createChildSceneNode(translateParamValue, rotateParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createChildSceneNode_CVector3_CQuaternion(long pNativeObject, long translate, long rotate);
	/**
	 * 从当前节点创建子节点系统自动为子节点命名
	 * @param translate 子节点相对当前节点的位移，默认为EarthView::World::Spatial::Math::CVector3::ZERO
	 * @param rotate 子节点相对当前节点的旋转，默认为EarthView::World::Spatial::Math::CQuaternion::IDENTITY
	 * @return 返回子节点
	 */
	public com.earthview.world.graphic.SceneNode createChildSceneNode(com.earthview.world.spatial.math.Vector3 translate, com.earthview.world.spatial.math.Quaternion rotate)
	{
		long translateParamValue = translate.nativeObject.pointer;
		long rotateParamValue = rotate.nativeObject.pointer;
		long returnValue = createChildSceneNode_CVector3_CQuaternion(this.nativeObject.pointer, translateParamValue, rotateParamValue);
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
	native private long createChildSceneNode_CVector3_CQuaternion_NoVirtual(long pNativeObject, long translate, long rotate);
	protected com.earthview.world.graphic.SceneNode createChildSceneNode_NoVirtual(com.earthview.world.spatial.math.Vector3 translate, com.earthview.world.spatial.math.Quaternion rotate)
	{
		long translateParamValue = translate.nativeObject.pointer;
		long rotateParamValue = rotate.nativeObject.pointer;
		long returnValue = createChildSceneNode_CVector3_CQuaternion_NoVirtual(this.nativeObject.pointer, translateParamValue, rotateParamValue);
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

	protected  long createChildSceneNode_CVector3_callback(long translate)
	{
		com.earthview.world.spatial.math.Vector3 translateParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		translateParamValue.setDelegate(true);
		translateParamValue.setInstancePointer(new InstancePointer(translate));
		IClassFactory translateParamValueClassFactory = GlobalClassFactoryMap.get(translateParamValue.getCppInstanceTypeName());
		if (translateParamValueClassFactory != null)
		{
			translateParamValue.setDelegate(true);
			translateParamValue = (com.earthview.world.spatial.math.Vector3)translateParamValueClassFactory.create();
			translateParamValue.setDelegate(true);
			translateParamValue.setInstancePointer(new InstancePointer(translate));
		}
		com.earthview.world.graphic.SceneNode returnValue = createChildSceneNode(translateParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createChildSceneNode_CVector3(long pNativeObject, long translate);
	public com.earthview.world.graphic.SceneNode createChildSceneNode(com.earthview.world.spatial.math.Vector3 translate)
	{
		long translateParamValue = translate.nativeObject.pointer;
		long returnValue = createChildSceneNode_CVector3(this.nativeObject.pointer, translateParamValue);
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
	native private long createChildSceneNode_CVector3_NoVirtual(long pNativeObject, long translate);
	protected com.earthview.world.graphic.SceneNode createChildSceneNode_NoVirtual(com.earthview.world.spatial.math.Vector3 translate)
	{
		long translateParamValue = translate.nativeObject.pointer;
		long returnValue = createChildSceneNode_CVector3_NoVirtual(this.nativeObject.pointer, translateParamValue);
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

	protected  long createChildSceneNode_void_callback()
	{
		com.earthview.world.graphic.SceneNode returnValue = createChildSceneNode();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createChildSceneNode_void(long pNativeObject);
	public com.earthview.world.graphic.SceneNode createChildSceneNode()
	{
		long returnValue = createChildSceneNode_void(this.nativeObject.pointer);
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
	native private long createChildSceneNode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.SceneNode createChildSceneNode_NoVirtual()
	{
		long returnValue = createChildSceneNode_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long createChildSceneNode_EVString_CVector3_CQuaternion_callback(String name, long translate, long rotate)
	{
		String nameParamValue = name;
		com.earthview.world.spatial.math.Vector3 translateParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		translateParamValue.setDelegate(true);
		translateParamValue.setInstancePointer(new InstancePointer(translate));
		IClassFactory translateParamValueClassFactory = GlobalClassFactoryMap.get(translateParamValue.getCppInstanceTypeName());
		if (translateParamValueClassFactory != null)
		{
			translateParamValue.setDelegate(true);
			translateParamValue = (com.earthview.world.spatial.math.Vector3)translateParamValueClassFactory.create();
			translateParamValue.setDelegate(true);
			translateParamValue.setInstancePointer(new InstancePointer(translate));
		}
		com.earthview.world.spatial.math.Quaternion rotateParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		rotateParamValue.setDelegate(true);
		rotateParamValue.setInstancePointer(new InstancePointer(rotate));
		IClassFactory rotateParamValueClassFactory = GlobalClassFactoryMap.get(rotateParamValue.getCppInstanceTypeName());
		if (rotateParamValueClassFactory != null)
		{
			rotateParamValue.setDelegate(true);
			rotateParamValue = (com.earthview.world.spatial.math.Quaternion)rotateParamValueClassFactory.create();
			rotateParamValue.setDelegate(true);
			rotateParamValue.setInstancePointer(new InstancePointer(rotate));
		}
		com.earthview.world.graphic.SceneNode returnValue = createChildSceneNode(nameParamValue, translateParamValue, rotateParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createChildSceneNode_EVString_CVector3_CQuaternion(long pNativeObject, String name, long translate, long rotate);
	/**
	 * 从当前节点创建子节点系统自动为子节点命名
	 * @param name 子节点的名称
	 * @param translate 子节点相对当前节点的位移
	 * @param rotate 子节点相对当前节点的旋转
	 * @return 返回子节点
	 */
	public com.earthview.world.graphic.SceneNode createChildSceneNode(String name, com.earthview.world.spatial.math.Vector3 translate, com.earthview.world.spatial.math.Quaternion rotate)
	{
		String nameParamValue = name;
		long translateParamValue = translate.nativeObject.pointer;
		long rotateParamValue = rotate.nativeObject.pointer;
		long returnValue = createChildSceneNode_EVString_CVector3_CQuaternion(this.nativeObject.pointer, nameParamValue, translateParamValue, rotateParamValue);
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
	native private long createChildSceneNode_EVString_CVector3_CQuaternion_NoVirtual(long pNativeObject, String name, long translate, long rotate);
	protected com.earthview.world.graphic.SceneNode createChildSceneNode_NoVirtual(String name, com.earthview.world.spatial.math.Vector3 translate, com.earthview.world.spatial.math.Quaternion rotate)
	{
		String nameParamValue = name;
		long translateParamValue = translate.nativeObject.pointer;
		long rotateParamValue = rotate.nativeObject.pointer;
		long returnValue = createChildSceneNode_EVString_CVector3_CQuaternion_NoVirtual(this.nativeObject.pointer, nameParamValue, translateParamValue, rotateParamValue);
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

	protected  long createChildSceneNode_EVString_CVector3_callback(String name, long translate)
	{
		String nameParamValue = name;
		com.earthview.world.spatial.math.Vector3 translateParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		translateParamValue.setDelegate(true);
		translateParamValue.setInstancePointer(new InstancePointer(translate));
		IClassFactory translateParamValueClassFactory = GlobalClassFactoryMap.get(translateParamValue.getCppInstanceTypeName());
		if (translateParamValueClassFactory != null)
		{
			translateParamValue.setDelegate(true);
			translateParamValue = (com.earthview.world.spatial.math.Vector3)translateParamValueClassFactory.create();
			translateParamValue.setDelegate(true);
			translateParamValue.setInstancePointer(new InstancePointer(translate));
		}
		com.earthview.world.graphic.SceneNode returnValue = createChildSceneNode(nameParamValue, translateParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createChildSceneNode_EVString_CVector3(long pNativeObject, String name, long translate);
	public com.earthview.world.graphic.SceneNode createChildSceneNode(String name, com.earthview.world.spatial.math.Vector3 translate)
	{
		String nameParamValue = name;
		long translateParamValue = translate.nativeObject.pointer;
		long returnValue = createChildSceneNode_EVString_CVector3(this.nativeObject.pointer, nameParamValue, translateParamValue);
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
	native private long createChildSceneNode_EVString_CVector3_NoVirtual(long pNativeObject, String name, long translate);
	protected com.earthview.world.graphic.SceneNode createChildSceneNode_NoVirtual(String name, com.earthview.world.spatial.math.Vector3 translate)
	{
		String nameParamValue = name;
		long translateParamValue = translate.nativeObject.pointer;
		long returnValue = createChildSceneNode_EVString_CVector3_NoVirtual(this.nativeObject.pointer, nameParamValue, translateParamValue);
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

	protected  long createChildSceneNode_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.SceneNode returnValue = createChildSceneNode(nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createChildSceneNode_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.SceneNode createChildSceneNode(String name)
	{
		String nameParamValue = name;
		long returnValue = createChildSceneNode_EVString(this.nativeObject.pointer, nameParamValue);
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
	native private long createChildSceneNode_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.SceneNode createChildSceneNode_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = createChildSceneNode_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
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

	protected  void findLights_LightList_Real_ev_uint32_callback(long destList, double radius, long lightMask)
	{
		com.earthview.world.graphic.LightList destListParamValue = new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate);
		destListParamValue.setDelegate(true);
		destListParamValue.setInstancePointer(new InstancePointer(destList));
		IClassFactory destListParamValueClassFactory = GlobalClassFactoryMap.get(destListParamValue.getCppInstanceTypeName());
		if (destListParamValueClassFactory != null)
		{
			destListParamValue.setDelegate(true);
			destListParamValue = (com.earthview.world.graphic.LightList)destListParamValueClassFactory.create();
			destListParamValue.setDelegate(true);
			destListParamValue.setInstancePointer(new InstancePointer(destList));
		}
		double radiusParamValue = radius;
		long lightMaskParamValue = lightMask;
		findLights(destListParamValue, radiusParamValue, lightMaskParamValue);
	}

	native private void findLights_LightList_Real_ev_uint32(long pNativeObject, long destList, double radius, long lightMask);
	/**
	 * 查找里场景节点中心最近的光源CMovableObject::queryLightsandCRenderable::getLights可以使用检索的光源
	 * @param destList 有序的填充光源
	 * @param radius 半径
	 * @param lightMask 光源是否设置模糊
	 */
	public void findLights(com.earthview.world.graphic.LightList destList, double radius, long lightMask)
	{
		long destListParamValue = destList.nativeObject.pointer;
		double radiusParamValue = radius;
		long lightMaskParamValue = lightMask;
		findLights_LightList_Real_ev_uint32(this.nativeObject.pointer, destListParamValue, radiusParamValue, lightMaskParamValue);
	}
	native private void findLights_LightList_Real_ev_uint32_NoVirtual(long pNativeObject, long destList, double radius, long lightMask);
	protected void findLights_NoVirtual(com.earthview.world.graphic.LightList destList, double radius, long lightMask)
	{
		long destListParamValue = destList.nativeObject.pointer;
		double radiusParamValue = radius;
		long lightMaskParamValue = lightMask;
		findLights_LightList_Real_ev_uint32_NoVirtual(this.nativeObject.pointer, destListParamValue, radiusParamValue, lightMaskParamValue);
	}

	protected  void findLights_LightList_Real_callback(long destList, double radius)
	{
		com.earthview.world.graphic.LightList destListParamValue = new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate);
		destListParamValue.setDelegate(true);
		destListParamValue.setInstancePointer(new InstancePointer(destList));
		IClassFactory destListParamValueClassFactory = GlobalClassFactoryMap.get(destListParamValue.getCppInstanceTypeName());
		if (destListParamValueClassFactory != null)
		{
			destListParamValue.setDelegate(true);
			destListParamValue = (com.earthview.world.graphic.LightList)destListParamValueClassFactory.create();
			destListParamValue.setDelegate(true);
			destListParamValue.setInstancePointer(new InstancePointer(destList));
		}
		double radiusParamValue = radius;
		findLights(destListParamValue, radiusParamValue);
	}

	native private void findLights_LightList_Real(long pNativeObject, long destList, double radius);
	public void findLights(com.earthview.world.graphic.LightList destList, double radius)
	{
		long destListParamValue = destList.nativeObject.pointer;
		double radiusParamValue = radius;
		findLights_LightList_Real(this.nativeObject.pointer, destListParamValue, radiusParamValue);
	}
	native private void findLights_LightList_Real_NoVirtual(long pNativeObject, long destList, double radius);
	protected void findLights_NoVirtual(com.earthview.world.graphic.LightList destList, double radius)
	{
		long destListParamValue = destList.nativeObject.pointer;
		double radiusParamValue = radius;
		findLights_LightList_Real_NoVirtual(this.nativeObject.pointer, destListParamValue, radiusParamValue);
	}

	protected  void setFixedYawAxis_ev_bool_CVector3_callback(boolean useFixed, long fixedAxis)
	{
		boolean useFixedParamValue = useFixed;
		com.earthview.world.spatial.math.Vector3 fixedAxisParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		fixedAxisParamValue.setDelegate(true);
		fixedAxisParamValue.setInstancePointer(new InstancePointer(fixedAxis));
		IClassFactory fixedAxisParamValueClassFactory = GlobalClassFactoryMap.get(fixedAxisParamValue.getCppInstanceTypeName());
		if (fixedAxisParamValueClassFactory != null)
		{
			fixedAxisParamValue.setDelegate(true);
			fixedAxisParamValue = (com.earthview.world.spatial.math.Vector3)fixedAxisParamValueClassFactory.create();
			fixedAxisParamValue.setDelegate(true);
			fixedAxisParamValue.setInstancePointer(new InstancePointer(fixedAxis));
		}
		setFixedYawAxis(useFixedParamValue, fixedAxisParamValue);
	}

	native private void setFixedYawAxis_ev_bool_CVector3(long pNativeObject, boolean useFixed, long fixedAxis);
	/**
	 * 选择节点绕Y轴旋转地坐标系
	 * @param useFixed 为false，使用默认轴
	 * @param fixedAxis 是否使用坐标系
	 */
	public void setFixedYawAxis(boolean useFixed, com.earthview.world.spatial.math.Vector3 fixedAxis)
	{
		boolean useFixedParamValue = useFixed;
		long fixedAxisParamValue = fixedAxis.nativeObject.pointer;
		setFixedYawAxis_ev_bool_CVector3(this.nativeObject.pointer, useFixedParamValue, fixedAxisParamValue);
	}
	native private void setFixedYawAxis_ev_bool_CVector3_NoVirtual(long pNativeObject, boolean useFixed, long fixedAxis);
	protected void setFixedYawAxis_NoVirtual(boolean useFixed, com.earthview.world.spatial.math.Vector3 fixedAxis)
	{
		boolean useFixedParamValue = useFixed;
		long fixedAxisParamValue = fixedAxis.nativeObject.pointer;
		setFixedYawAxis_ev_bool_CVector3_NoVirtual(this.nativeObject.pointer, useFixedParamValue, fixedAxisParamValue);
	}

	protected  void setFixedYawAxis_ev_bool_callback(boolean useFixed)
	{
		boolean useFixedParamValue = useFixed;
		setFixedYawAxis(useFixedParamValue);
	}

	native private void setFixedYawAxis_ev_bool(long pNativeObject, boolean useFixed);
	public void setFixedYawAxis(boolean useFixed)
	{
		boolean useFixedParamValue = useFixed;
		setFixedYawAxis_ev_bool(this.nativeObject.pointer, useFixedParamValue);
	}
	native private void setFixedYawAxis_ev_bool_NoVirtual(long pNativeObject, boolean useFixed);
	protected void setFixedYawAxis_NoVirtual(boolean useFixed)
	{
		boolean useFixedParamValue = useFixed;
		setFixedYawAxis_ev_bool_NoVirtual(this.nativeObject.pointer, useFixedParamValue);
	}

	native private void yaw_CRadian_TransformSpace(long pNativeObject, long angle, int relativeTo);
	/**
	 * 绕Y轴旋转节点
	 * @param angle 角度
	 * @param relativeTo 空间缩放关系
	 */
	public void yaw(com.earthview.world.spatial.math.Radian angle, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		long angleParamValue = angle.nativeObject.pointer;
		int relativeToParamValue = relativeTo.getValue();
		yaw_CRadian_TransformSpace(this.nativeObject.pointer, angleParamValue, relativeToParamValue);
	}
	native private void yaw_CRadian_TransformSpace_NoVirtual(long pNativeObject, long angle, int relativeTo);
	protected void yaw_NoVirtual(com.earthview.world.spatial.math.Radian angle, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		long angleParamValue = angle.nativeObject.pointer;
		int relativeToParamValue = relativeTo.getValue();
		yaw_CRadian_TransformSpace_NoVirtual(this.nativeObject.pointer, angleParamValue, relativeToParamValue);
	}

	native private void yaw_CRadian(long pNativeObject, long angle);
	public void yaw(com.earthview.world.spatial.math.Radian angle)
	{
		long angleParamValue = angle.nativeObject.pointer;
		yaw_CRadian(this.nativeObject.pointer, angleParamValue);
	}
	native private void yaw_CRadian_NoVirtual(long pNativeObject, long angle);
	protected void yaw_NoVirtual(com.earthview.world.spatial.math.Radian angle)
	{
		long angleParamValue = angle.nativeObject.pointer;
		yaw_CRadian_NoVirtual(this.nativeObject.pointer, angleParamValue);
	}

	protected  void setDirection_Real_Real_Real_TransformSpace_CVector3_callback(double x, double y, double z, int relativeTo, long localDirectionVector)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		com.earthview.world.graphic.Node.TransformSpace relativeToParamValue = com.earthview.world.graphic.Node.TransformSpace.toEnum(relativeTo);
		com.earthview.world.spatial.math.Vector3 localDirectionVectorParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		localDirectionVectorParamValue.setDelegate(true);
		localDirectionVectorParamValue.setInstancePointer(new InstancePointer(localDirectionVector));
		IClassFactory localDirectionVectorParamValueClassFactory = GlobalClassFactoryMap.get(localDirectionVectorParamValue.getCppInstanceTypeName());
		if (localDirectionVectorParamValueClassFactory != null)
		{
			localDirectionVectorParamValue.setDelegate(true);
			localDirectionVectorParamValue = (com.earthview.world.spatial.math.Vector3)localDirectionVectorParamValueClassFactory.create();
			localDirectionVectorParamValue.setDelegate(true);
			localDirectionVectorParamValue.setInstancePointer(new InstancePointer(localDirectionVector));
		}
		setDirection(xParamValue, yParamValue, zParamValue, relativeToParamValue, localDirectionVectorParamValue);
	}

	native private void setDirection_Real_Real_Real_TransformSpace_CVector3(long pNativeObject, double x, double y, double z, int relativeTo, long localDirectionVector);
	/**
	 * 设置节点方向矢量
	 * @param x 
	 * @param y 
	 * @param z 
	 * @param relativeTo 空间缩放关系
	 * @param localDirectionVector 当前方向矢量，默认为-Z
	 */
	public void setDirection(double x, double y, double z, com.earthview.world.graphic.Node.TransformSpace relativeTo, com.earthview.world.spatial.math.Vector3 localDirectionVector)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		int relativeToParamValue = relativeTo.getValue();
		long localDirectionVectorParamValue = localDirectionVector.nativeObject.pointer;
		setDirection_Real_Real_Real_TransformSpace_CVector3(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue, relativeToParamValue, localDirectionVectorParamValue);
	}
	native private void setDirection_Real_Real_Real_TransformSpace_CVector3_NoVirtual(long pNativeObject, double x, double y, double z, int relativeTo, long localDirectionVector);
	protected void setDirection_NoVirtual(double x, double y, double z, com.earthview.world.graphic.Node.TransformSpace relativeTo, com.earthview.world.spatial.math.Vector3 localDirectionVector)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		int relativeToParamValue = relativeTo.getValue();
		long localDirectionVectorParamValue = localDirectionVector.nativeObject.pointer;
		setDirection_Real_Real_Real_TransformSpace_CVector3_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue, relativeToParamValue, localDirectionVectorParamValue);
	}

	protected  void setDirection_Real_Real_Real_TransformSpace_callback(double x, double y, double z, int relativeTo)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		com.earthview.world.graphic.Node.TransformSpace relativeToParamValue = com.earthview.world.graphic.Node.TransformSpace.toEnum(relativeTo);
		setDirection(xParamValue, yParamValue, zParamValue, relativeToParamValue);
	}

	native private void setDirection_Real_Real_Real_TransformSpace(long pNativeObject, double x, double y, double z, int relativeTo);
	public void setDirection(double x, double y, double z, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		int relativeToParamValue = relativeTo.getValue();
		setDirection_Real_Real_Real_TransformSpace(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue, relativeToParamValue);
	}
	native private void setDirection_Real_Real_Real_TransformSpace_NoVirtual(long pNativeObject, double x, double y, double z, int relativeTo);
	protected void setDirection_NoVirtual(double x, double y, double z, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		int relativeToParamValue = relativeTo.getValue();
		setDirection_Real_Real_Real_TransformSpace_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue, relativeToParamValue);
	}

	protected  void setDirection_Real_Real_Real_callback(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setDirection(xParamValue, yParamValue, zParamValue);
	}

	native private void setDirection_Real_Real_Real(long pNativeObject, double x, double y, double z);
	public void setDirection(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setDirection_Real_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void setDirection_Real_Real_Real_NoVirtual(long pNativeObject, double x, double y, double z);
	protected void setDirection_NoVirtual(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setDirection_Real_Real_Real_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}

	protected  void setDirection_CVector3_TransformSpace_CVector3_callback(long vec, int relativeTo, long localDirectionVector)
	{
		com.earthview.world.spatial.math.Vector3 vecParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		vecParamValue.setDelegate(true);
		vecParamValue.setInstancePointer(new InstancePointer(vec));
		IClassFactory vecParamValueClassFactory = GlobalClassFactoryMap.get(vecParamValue.getCppInstanceTypeName());
		if (vecParamValueClassFactory != null)
		{
			vecParamValue.setDelegate(true);
			vecParamValue = (com.earthview.world.spatial.math.Vector3)vecParamValueClassFactory.create();
			vecParamValue.setDelegate(true);
			vecParamValue.setInstancePointer(new InstancePointer(vec));
		}
		com.earthview.world.graphic.Node.TransformSpace relativeToParamValue = com.earthview.world.graphic.Node.TransformSpace.toEnum(relativeTo);
		com.earthview.world.spatial.math.Vector3 localDirectionVectorParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		localDirectionVectorParamValue.setDelegate(true);
		localDirectionVectorParamValue.setInstancePointer(new InstancePointer(localDirectionVector));
		IClassFactory localDirectionVectorParamValueClassFactory = GlobalClassFactoryMap.get(localDirectionVectorParamValue.getCppInstanceTypeName());
		if (localDirectionVectorParamValueClassFactory != null)
		{
			localDirectionVectorParamValue.setDelegate(true);
			localDirectionVectorParamValue = (com.earthview.world.spatial.math.Vector3)localDirectionVectorParamValueClassFactory.create();
			localDirectionVectorParamValue.setDelegate(true);
			localDirectionVectorParamValue.setInstancePointer(new InstancePointer(localDirectionVector));
		}
		setDirection(vecParamValue, relativeToParamValue, localDirectionVectorParamValue);
	}

	native private void setDirection_CVector3_TransformSpace_CVector3(long pNativeObject, long vec, int relativeTo, long localDirectionVector);
	/**
	 * 设置节点方向矢量
	 * @param vec 方向矢量
	 * @param relativeTo 空间缩放关系
	 * @param localDirectionVector 当前方向矢量，默认为-Z
	 */
	public void setDirection(com.earthview.world.spatial.math.Vector3 vec, com.earthview.world.graphic.Node.TransformSpace relativeTo, com.earthview.world.spatial.math.Vector3 localDirectionVector)
	{
		long vecParamValue = vec.nativeObject.pointer;
		int relativeToParamValue = relativeTo.getValue();
		long localDirectionVectorParamValue = localDirectionVector.nativeObject.pointer;
		setDirection_CVector3_TransformSpace_CVector3(this.nativeObject.pointer, vecParamValue, relativeToParamValue, localDirectionVectorParamValue);
	}
	native private void setDirection_CVector3_TransformSpace_CVector3_NoVirtual(long pNativeObject, long vec, int relativeTo, long localDirectionVector);
	protected void setDirection_NoVirtual(com.earthview.world.spatial.math.Vector3 vec, com.earthview.world.graphic.Node.TransformSpace relativeTo, com.earthview.world.spatial.math.Vector3 localDirectionVector)
	{
		long vecParamValue = vec.nativeObject.pointer;
		int relativeToParamValue = relativeTo.getValue();
		long localDirectionVectorParamValue = localDirectionVector.nativeObject.pointer;
		setDirection_CVector3_TransformSpace_CVector3_NoVirtual(this.nativeObject.pointer, vecParamValue, relativeToParamValue, localDirectionVectorParamValue);
	}

	protected  void setDirection_CVector3_TransformSpace_callback(long vec, int relativeTo)
	{
		com.earthview.world.spatial.math.Vector3 vecParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		vecParamValue.setDelegate(true);
		vecParamValue.setInstancePointer(new InstancePointer(vec));
		IClassFactory vecParamValueClassFactory = GlobalClassFactoryMap.get(vecParamValue.getCppInstanceTypeName());
		if (vecParamValueClassFactory != null)
		{
			vecParamValue.setDelegate(true);
			vecParamValue = (com.earthview.world.spatial.math.Vector3)vecParamValueClassFactory.create();
			vecParamValue.setDelegate(true);
			vecParamValue.setInstancePointer(new InstancePointer(vec));
		}
		com.earthview.world.graphic.Node.TransformSpace relativeToParamValue = com.earthview.world.graphic.Node.TransformSpace.toEnum(relativeTo);
		setDirection(vecParamValue, relativeToParamValue);
	}

	native private void setDirection_CVector3_TransformSpace(long pNativeObject, long vec, int relativeTo);
	public void setDirection(com.earthview.world.spatial.math.Vector3 vec, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		long vecParamValue = vec.nativeObject.pointer;
		int relativeToParamValue = relativeTo.getValue();
		setDirection_CVector3_TransformSpace(this.nativeObject.pointer, vecParamValue, relativeToParamValue);
	}
	native private void setDirection_CVector3_TransformSpace_NoVirtual(long pNativeObject, long vec, int relativeTo);
	protected void setDirection_NoVirtual(com.earthview.world.spatial.math.Vector3 vec, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		long vecParamValue = vec.nativeObject.pointer;
		int relativeToParamValue = relativeTo.getValue();
		setDirection_CVector3_TransformSpace_NoVirtual(this.nativeObject.pointer, vecParamValue, relativeToParamValue);
	}

	protected  void setDirection_CVector3_callback(long vec)
	{
		com.earthview.world.spatial.math.Vector3 vecParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		vecParamValue.setDelegate(true);
		vecParamValue.setInstancePointer(new InstancePointer(vec));
		IClassFactory vecParamValueClassFactory = GlobalClassFactoryMap.get(vecParamValue.getCppInstanceTypeName());
		if (vecParamValueClassFactory != null)
		{
			vecParamValue.setDelegate(true);
			vecParamValue = (com.earthview.world.spatial.math.Vector3)vecParamValueClassFactory.create();
			vecParamValue.setDelegate(true);
			vecParamValue.setInstancePointer(new InstancePointer(vec));
		}
		setDirection(vecParamValue);
	}

	native private void setDirection_CVector3(long pNativeObject, long vec);
	public void setDirection(com.earthview.world.spatial.math.Vector3 vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		setDirection_CVector3(this.nativeObject.pointer, vecParamValue);
	}
	native private void setDirection_CVector3_NoVirtual(long pNativeObject, long vec);
	protected void setDirection_NoVirtual(com.earthview.world.spatial.math.Vector3 vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		setDirection_CVector3_NoVirtual(this.nativeObject.pointer, vecParamValue);
	}

	protected  void lookAt_CVector3_TransformSpace_CVector3_callback(long targetPoint, int relativeTo, long localDirectionVector)
	{
		com.earthview.world.spatial.math.Vector3 targetPointParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		targetPointParamValue.setDelegate(true);
		targetPointParamValue.setInstancePointer(new InstancePointer(targetPoint));
		IClassFactory targetPointParamValueClassFactory = GlobalClassFactoryMap.get(targetPointParamValue.getCppInstanceTypeName());
		if (targetPointParamValueClassFactory != null)
		{
			targetPointParamValue.setDelegate(true);
			targetPointParamValue = (com.earthview.world.spatial.math.Vector3)targetPointParamValueClassFactory.create();
			targetPointParamValue.setDelegate(true);
			targetPointParamValue.setInstancePointer(new InstancePointer(targetPoint));
		}
		com.earthview.world.graphic.Node.TransformSpace relativeToParamValue = com.earthview.world.graphic.Node.TransformSpace.toEnum(relativeTo);
		com.earthview.world.spatial.math.Vector3 localDirectionVectorParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		localDirectionVectorParamValue.setDelegate(true);
		localDirectionVectorParamValue.setInstancePointer(new InstancePointer(localDirectionVector));
		IClassFactory localDirectionVectorParamValueClassFactory = GlobalClassFactoryMap.get(localDirectionVectorParamValue.getCppInstanceTypeName());
		if (localDirectionVectorParamValueClassFactory != null)
		{
			localDirectionVectorParamValue.setDelegate(true);
			localDirectionVectorParamValue = (com.earthview.world.spatial.math.Vector3)localDirectionVectorParamValueClassFactory.create();
			localDirectionVectorParamValue.setDelegate(true);
			localDirectionVectorParamValue.setInstancePointer(new InstancePointer(localDirectionVector));
		}
		lookAt(targetPointParamValue, relativeToParamValue, localDirectionVectorParamValue);
	}

	native private void lookAt_CVector3_TransformSpace_CVector3(long pNativeObject, long targetPoint, int relativeTo, long localDirectionVector);
	/**
	 * 调整节点方向使其朝向某点
	 * @param targetPoint 目标点
	 * @param relativeTo 变换空间类型
	 * @param localDirectionVector 当前方向矢量
	 */
	public void lookAt(com.earthview.world.spatial.math.Vector3 targetPoint, com.earthview.world.graphic.Node.TransformSpace relativeTo, com.earthview.world.spatial.math.Vector3 localDirectionVector)
	{
		long targetPointParamValue = targetPoint.nativeObject.pointer;
		int relativeToParamValue = relativeTo.getValue();
		long localDirectionVectorParamValue = localDirectionVector.nativeObject.pointer;
		lookAt_CVector3_TransformSpace_CVector3(this.nativeObject.pointer, targetPointParamValue, relativeToParamValue, localDirectionVectorParamValue);
	}
	native private void lookAt_CVector3_TransformSpace_CVector3_NoVirtual(long pNativeObject, long targetPoint, int relativeTo, long localDirectionVector);
	protected void lookAt_NoVirtual(com.earthview.world.spatial.math.Vector3 targetPoint, com.earthview.world.graphic.Node.TransformSpace relativeTo, com.earthview.world.spatial.math.Vector3 localDirectionVector)
	{
		long targetPointParamValue = targetPoint.nativeObject.pointer;
		int relativeToParamValue = relativeTo.getValue();
		long localDirectionVectorParamValue = localDirectionVector.nativeObject.pointer;
		lookAt_CVector3_TransformSpace_CVector3_NoVirtual(this.nativeObject.pointer, targetPointParamValue, relativeToParamValue, localDirectionVectorParamValue);
	}

	protected  void lookAt_CVector3_TransformSpace_callback(long targetPoint, int relativeTo)
	{
		com.earthview.world.spatial.math.Vector3 targetPointParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		targetPointParamValue.setDelegate(true);
		targetPointParamValue.setInstancePointer(new InstancePointer(targetPoint));
		IClassFactory targetPointParamValueClassFactory = GlobalClassFactoryMap.get(targetPointParamValue.getCppInstanceTypeName());
		if (targetPointParamValueClassFactory != null)
		{
			targetPointParamValue.setDelegate(true);
			targetPointParamValue = (com.earthview.world.spatial.math.Vector3)targetPointParamValueClassFactory.create();
			targetPointParamValue.setDelegate(true);
			targetPointParamValue.setInstancePointer(new InstancePointer(targetPoint));
		}
		com.earthview.world.graphic.Node.TransformSpace relativeToParamValue = com.earthview.world.graphic.Node.TransformSpace.toEnum(relativeTo);
		lookAt(targetPointParamValue, relativeToParamValue);
	}

	native private void lookAt_CVector3_TransformSpace(long pNativeObject, long targetPoint, int relativeTo);
	public void lookAt(com.earthview.world.spatial.math.Vector3 targetPoint, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		long targetPointParamValue = targetPoint.nativeObject.pointer;
		int relativeToParamValue = relativeTo.getValue();
		lookAt_CVector3_TransformSpace(this.nativeObject.pointer, targetPointParamValue, relativeToParamValue);
	}
	native private void lookAt_CVector3_TransformSpace_NoVirtual(long pNativeObject, long targetPoint, int relativeTo);
	protected void lookAt_NoVirtual(com.earthview.world.spatial.math.Vector3 targetPoint, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		long targetPointParamValue = targetPoint.nativeObject.pointer;
		int relativeToParamValue = relativeTo.getValue();
		lookAt_CVector3_TransformSpace_NoVirtual(this.nativeObject.pointer, targetPointParamValue, relativeToParamValue);
	}

	protected  void setAutoTracking_ev_bool_callback(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setAutoTracking(enabledParamValue);
	}

	native private void setAutoTracking_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 是否设置自动追踪
	 * @param enabled 是否自动追踪
	 * @param ref_target 追踪的场景节点目标
	 * @param localDirectionVector 当前方向矢量
	 * @param offset 偏移量
	 */
	public void setAutoTracking(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setAutoTracking_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setAutoTracking_ev_bool_NoVirtual(long pNativeObject, boolean enabled);
	protected void setAutoTracking_NoVirtual(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setAutoTracking_ev_bool_NoVirtual(this.nativeObject.pointer, enabledParamValue);
	}

	protected  void setAutoTracking_ev_bool_CSceneNode_callback(boolean enabled, long ref_target)
	{
		boolean enabledParamValue = enabled;
		com.earthview.world.graphic.SceneNode ref_targetParamValue = (ref_target == 0L ? null : new com.earthview.world.graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_targetParamValue != null)
		{
		ref_targetParamValue.setDelegate(true);
		ref_targetParamValue.setInstancePointer(new InstancePointer(ref_target));
		IClassFactory ref_targetParamValueClassFactory = GlobalClassFactoryMap.get(ref_targetParamValue.getCppInstanceTypeName());
		if (ref_targetParamValueClassFactory != null)
		{
			ref_targetParamValue.setDelegate(true);
			ref_targetParamValue = (com.earthview.world.graphic.SceneNode)ref_targetParamValueClassFactory.create();
			ref_targetParamValue.setDelegate(true);
			ref_targetParamValue.setInstancePointer(new InstancePointer(ref_target));
		}
		}
		setAutoTracking(enabledParamValue, ref_targetParamValue);
	}

	native private void setAutoTracking_ev_bool_CSceneNode(long pNativeObject, boolean enabled, long ref_target);
	public void setAutoTracking(boolean enabled, com.earthview.world.graphic.SceneNode ref_target)
	{
		boolean enabledParamValue = enabled;
		long ref_targetParamValue = (ref_target == null ? 0L : ref_target.nativeObject.pointer);
		setAutoTracking_ev_bool_CSceneNode(this.nativeObject.pointer, enabledParamValue, ref_targetParamValue);
	}
	native private void setAutoTracking_ev_bool_CSceneNode_NoVirtual(long pNativeObject, boolean enabled, long ref_target);
	protected void setAutoTracking_NoVirtual(boolean enabled, com.earthview.world.graphic.SceneNode ref_target)
	{
		boolean enabledParamValue = enabled;
		long ref_targetParamValue = (ref_target == null ? 0L : ref_target.nativeObject.pointer);
		setAutoTracking_ev_bool_CSceneNode_NoVirtual(this.nativeObject.pointer, enabledParamValue, ref_targetParamValue);
	}

	protected  void setAutoTracking_ev_bool_CSceneNode_CVector3_callback(boolean enabled, long ref_target, long localDirectionVecto)
	{
		boolean enabledParamValue = enabled;
		com.earthview.world.graphic.SceneNode ref_targetParamValue = (ref_target == 0L ? null : new com.earthview.world.graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_targetParamValue != null)
		{
		ref_targetParamValue.setDelegate(true);
		ref_targetParamValue.setInstancePointer(new InstancePointer(ref_target));
		IClassFactory ref_targetParamValueClassFactory = GlobalClassFactoryMap.get(ref_targetParamValue.getCppInstanceTypeName());
		if (ref_targetParamValueClassFactory != null)
		{
			ref_targetParamValue.setDelegate(true);
			ref_targetParamValue = (com.earthview.world.graphic.SceneNode)ref_targetParamValueClassFactory.create();
			ref_targetParamValue.setDelegate(true);
			ref_targetParamValue.setInstancePointer(new InstancePointer(ref_target));
		}
		}
		com.earthview.world.spatial.math.Vector3 localDirectionVectoParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		localDirectionVectoParamValue.setDelegate(true);
		localDirectionVectoParamValue.setInstancePointer(new InstancePointer(localDirectionVecto));
		IClassFactory localDirectionVectoParamValueClassFactory = GlobalClassFactoryMap.get(localDirectionVectoParamValue.getCppInstanceTypeName());
		if (localDirectionVectoParamValueClassFactory != null)
		{
			localDirectionVectoParamValue.setDelegate(true);
			localDirectionVectoParamValue = (com.earthview.world.spatial.math.Vector3)localDirectionVectoParamValueClassFactory.create();
			localDirectionVectoParamValue.setDelegate(true);
			localDirectionVectoParamValue.setInstancePointer(new InstancePointer(localDirectionVecto));
		}
		setAutoTracking(enabledParamValue, ref_targetParamValue, localDirectionVectoParamValue);
	}

	native private void setAutoTracking_ev_bool_CSceneNode_CVector3(long pNativeObject, boolean enabled, long ref_target, long localDirectionVecto);
	public void setAutoTracking(boolean enabled, com.earthview.world.graphic.SceneNode ref_target, com.earthview.world.spatial.math.Vector3 localDirectionVecto)
	{
		boolean enabledParamValue = enabled;
		long ref_targetParamValue = (ref_target == null ? 0L : ref_target.nativeObject.pointer);
		long localDirectionVectoParamValue = localDirectionVecto.nativeObject.pointer;
		setAutoTracking_ev_bool_CSceneNode_CVector3(this.nativeObject.pointer, enabledParamValue, ref_targetParamValue, localDirectionVectoParamValue);
	}
	native private void setAutoTracking_ev_bool_CSceneNode_CVector3_NoVirtual(long pNativeObject, boolean enabled, long ref_target, long localDirectionVecto);
	protected void setAutoTracking_NoVirtual(boolean enabled, com.earthview.world.graphic.SceneNode ref_target, com.earthview.world.spatial.math.Vector3 localDirectionVecto)
	{
		boolean enabledParamValue = enabled;
		long ref_targetParamValue = (ref_target == null ? 0L : ref_target.nativeObject.pointer);
		long localDirectionVectoParamValue = localDirectionVecto.nativeObject.pointer;
		setAutoTracking_ev_bool_CSceneNode_CVector3_NoVirtual(this.nativeObject.pointer, enabledParamValue, ref_targetParamValue, localDirectionVectoParamValue);
	}

	protected  void setAutoTracking_ev_bool_CSceneNode_CVector3_CVector3_callback(boolean enabled, long ref_target, long localDirectionVector, long offset)
	{
		boolean enabledParamValue = enabled;
		com.earthview.world.graphic.SceneNode ref_targetParamValue = (ref_target == 0L ? null : new com.earthview.world.graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_targetParamValue != null)
		{
		ref_targetParamValue.setDelegate(true);
		ref_targetParamValue.setInstancePointer(new InstancePointer(ref_target));
		IClassFactory ref_targetParamValueClassFactory = GlobalClassFactoryMap.get(ref_targetParamValue.getCppInstanceTypeName());
		if (ref_targetParamValueClassFactory != null)
		{
			ref_targetParamValue.setDelegate(true);
			ref_targetParamValue = (com.earthview.world.graphic.SceneNode)ref_targetParamValueClassFactory.create();
			ref_targetParamValue.setDelegate(true);
			ref_targetParamValue.setInstancePointer(new InstancePointer(ref_target));
		}
		}
		com.earthview.world.spatial.math.Vector3 localDirectionVectorParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		localDirectionVectorParamValue.setDelegate(true);
		localDirectionVectorParamValue.setInstancePointer(new InstancePointer(localDirectionVector));
		IClassFactory localDirectionVectorParamValueClassFactory = GlobalClassFactoryMap.get(localDirectionVectorParamValue.getCppInstanceTypeName());
		if (localDirectionVectorParamValueClassFactory != null)
		{
			localDirectionVectorParamValue.setDelegate(true);
			localDirectionVectorParamValue = (com.earthview.world.spatial.math.Vector3)localDirectionVectorParamValueClassFactory.create();
			localDirectionVectorParamValue.setDelegate(true);
			localDirectionVectorParamValue.setInstancePointer(new InstancePointer(localDirectionVector));
		}
		com.earthview.world.spatial.math.Vector3 offsetParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		offsetParamValue.setDelegate(true);
		offsetParamValue.setInstancePointer(new InstancePointer(offset));
		IClassFactory offsetParamValueClassFactory = GlobalClassFactoryMap.get(offsetParamValue.getCppInstanceTypeName());
		if (offsetParamValueClassFactory != null)
		{
			offsetParamValue.setDelegate(true);
			offsetParamValue = (com.earthview.world.spatial.math.Vector3)offsetParamValueClassFactory.create();
			offsetParamValue.setDelegate(true);
			offsetParamValue.setInstancePointer(new InstancePointer(offset));
		}
		setAutoTracking(enabledParamValue, ref_targetParamValue, localDirectionVectorParamValue, offsetParamValue);
	}

	native private void setAutoTracking_ev_bool_CSceneNode_CVector3_CVector3(long pNativeObject, boolean enabled, long ref_target, long localDirectionVector, long offset);
	public void setAutoTracking(boolean enabled, com.earthview.world.graphic.SceneNode ref_target, com.earthview.world.spatial.math.Vector3 localDirectionVector, com.earthview.world.spatial.math.Vector3 offset)
	{
		boolean enabledParamValue = enabled;
		long ref_targetParamValue = (ref_target == null ? 0L : ref_target.nativeObject.pointer);
		long localDirectionVectorParamValue = localDirectionVector.nativeObject.pointer;
		long offsetParamValue = offset.nativeObject.pointer;
		setAutoTracking_ev_bool_CSceneNode_CVector3_CVector3(this.nativeObject.pointer, enabledParamValue, ref_targetParamValue, localDirectionVectorParamValue, offsetParamValue);
	}
	native private void setAutoTracking_ev_bool_CSceneNode_CVector3_CVector3_NoVirtual(long pNativeObject, boolean enabled, long ref_target, long localDirectionVector, long offset);
	protected void setAutoTracking_NoVirtual(boolean enabled, com.earthview.world.graphic.SceneNode ref_target, com.earthview.world.spatial.math.Vector3 localDirectionVector, com.earthview.world.spatial.math.Vector3 offset)
	{
		boolean enabledParamValue = enabled;
		long ref_targetParamValue = (ref_target == null ? 0L : ref_target.nativeObject.pointer);
		long localDirectionVectorParamValue = localDirectionVector.nativeObject.pointer;
		long offsetParamValue = offset.nativeObject.pointer;
		setAutoTracking_ev_bool_CSceneNode_CVector3_CVector3_NoVirtual(this.nativeObject.pointer, enabledParamValue, ref_targetParamValue, localDirectionVectorParamValue, offsetParamValue);
	}

	protected  long getAutoTrackTarget_void_callback()
	{
		com.earthview.world.graphic.SceneNode returnValue = getAutoTrackTarget();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAutoTrackTarget_void(long pNativeObject);
	/**
	 * 获取此节点自动追踪的节点
	 * @param  
	 * @return 节点
	 */
	public com.earthview.world.graphic.SceneNode getAutoTrackTarget()
	{
		long returnValue = getAutoTrackTarget_void(this.nativeObject.pointer);
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
	native private long getAutoTrackTarget_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.SceneNode getAutoTrackTarget_NoVirtual()
	{
		long returnValue = getAutoTrackTarget_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getAutoTrackOffset_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getAutoTrackOffset();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAutoTrackOffset_void(long pNativeObject);
	/**
	 * 如果自动追踪，获取相对于被跟踪节点的偏移量
	 * @param  
	 * @return 矢量值
	 */
	public com.earthview.world.spatial.math.Vector3 getAutoTrackOffset()
	{
		long returnValue = getAutoTrackOffset_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private long getAutoTrackOffset_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getAutoTrackOffset_NoVirtual()
	{
		long returnValue = getAutoTrackOffset_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}

	protected  long getAutoTrackLocalDirection_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getAutoTrackLocalDirection();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAutoTrackLocalDirection_void(long pNativeObject);
	/**
	 * 如果自动追踪，获取节点当前方向矢量
	 * @param  
	 * @return 矢量值
	 */
	public com.earthview.world.spatial.math.Vector3 getAutoTrackLocalDirection()
	{
		long returnValue = getAutoTrackLocalDirection_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private long getAutoTrackLocalDirection_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getAutoTrackLocalDirection_NoVirtual()
	{
		long returnValue = getAutoTrackLocalDirection_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}

	native private void _autoTrack_void(long pNativeObject);
	/**
	 * 如果自动跟踪，则更新此节点的姿态内部方法
	 * @param  
	 */
	public void _autoTrack()
	{
		_autoTrack_void(this.nativeObject.pointer);
	}
	native private long getParentSceneNode_void(long pNativeObject);
	/**
	 * 获取场景节点的父节点
	 * @param  
	 */
	public com.earthview.world.graphic.SceneNode getParentSceneNode()
	{
		long returnValue = getParentSceneNode_void(this.nativeObject.pointer);
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
	protected  void setVisible_ev_bool_ev_bool_callback(boolean visible, boolean cascade)
	{
		boolean visibleParamValue = visible;
		boolean cascadeParamValue = cascade;
		setVisible(visibleParamValue, cascadeParamValue);
	}

	native private void setVisible_ev_bool_ev_bool(long pNativeObject, boolean visible, boolean cascade);
	/**
	 * 设置挂接在节点上的对象是否可见
	 * @param visible 对象是否可见
	 * @param cascade 是否递归设置子节点，默认为true
	 */
	public void setVisible(boolean visible, boolean cascade)
	{
		boolean visibleParamValue = visible;
		boolean cascadeParamValue = cascade;
		setVisible_ev_bool_ev_bool(this.nativeObject.pointer, visibleParamValue, cascadeParamValue);
	}
	native private void setVisible_ev_bool_ev_bool_NoVirtual(long pNativeObject, boolean visible, boolean cascade);
	protected void setVisible_NoVirtual(boolean visible, boolean cascade)
	{
		boolean visibleParamValue = visible;
		boolean cascadeParamValue = cascade;
		setVisible_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, visibleParamValue, cascadeParamValue);
	}

	protected  void setVisible_ev_bool_callback(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible(visibleParamValue);
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean visible);
	protected void setVisible_NoVirtual(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, visibleParamValue);
	}

	protected  boolean getVisible_void_callback()
	{
		boolean returnValue = getVisible();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getVisible_void(long pNativeObject);
	/**
	 * 获取挂接在节点上的对象是否可见
	 */
	public boolean getVisible()
	{
		boolean returnValue = getVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getVisible_void_NoVirtual(long pNativeObject);
	protected boolean getVisible_NoVirtual()
	{
		boolean returnValue = getVisible_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean hasAnyVisibleObject_void_callback()
	{
		boolean returnValue = hasAnyVisibleObject();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean hasAnyVisibleObject_void(long pNativeObject);
	/**
	 * 判断是否挂接了可见的MovableObject(判断Visible属性)
	 * @param  
	 */
	public boolean hasAnyVisibleObject()
	{
		boolean returnValue = hasAnyVisibleObject_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasAnyVisibleObject_void_NoVirtual(long pNativeObject);
	protected boolean hasAnyVisibleObject_NoVirtual()
	{
		boolean returnValue = hasAnyVisibleObject_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean hasAnyVisibleObject2_void_callback()
	{
		boolean returnValue = hasAnyVisibleObject2();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean hasAnyVisibleObject2_void(long pNativeObject);
	/**
	 * 判断是否挂接了可见的MovableObject(判断VisibilityFlags属性)
	 * @param  
	 */
	public boolean hasAnyVisibleObject2()
	{
		boolean returnValue = hasAnyVisibleObject2_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasAnyVisibleObject2_void_NoVirtual(long pNativeObject);
	protected boolean hasAnyVisibleObject2_NoVirtual()
	{
		boolean returnValue = hasAnyVisibleObject2_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean hasAnyVisibleShadowCaster_void_callback()
	{
		boolean returnValue = hasAnyVisibleShadowCaster();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean hasAnyVisibleShadowCaster_void(long pNativeObject);
	/**
	 * 判断是否挂接了可见的投射阴影的MovableObject(判断Visible属性)
	 * @param  
	 */
	public boolean hasAnyVisibleShadowCaster()
	{
		boolean returnValue = hasAnyVisibleShadowCaster_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasAnyVisibleShadowCaster_void_NoVirtual(long pNativeObject);
	protected boolean hasAnyVisibleShadowCaster_NoVirtual()
	{
		boolean returnValue = hasAnyVisibleShadowCaster_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean hasAnyVisibleShadowCaster2_void_callback()
	{
		boolean returnValue = hasAnyVisibleShadowCaster2();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean hasAnyVisibleShadowCaster2_void(long pNativeObject);
	/**
	 * 判断是否挂接了可见的投射阴影的MovableObject(判断VisibilityFlags属性)
	 * @param  
	 */
	public boolean hasAnyVisibleShadowCaster2()
	{
		boolean returnValue = hasAnyVisibleShadowCaster2_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasAnyVisibleShadowCaster2_void_NoVirtual(long pNativeObject);
	protected boolean hasAnyVisibleShadowCaster2_NoVirtual()
	{
		boolean returnValue = hasAnyVisibleShadowCaster2_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void flipVisibility_ev_bool_callback(boolean cascade)
	{
		boolean cascadeParamValue = cascade;
		flipVisibility(cascadeParamValue);
	}

	native private void flipVisibility_ev_bool(long pNativeObject, boolean cascade);
	/**
	 * 反向设置挂接在节点上的对象可见性(可见的变为不可见，不可见的变为可见)
	 * @param cascade 是否递归设置子节点，默认为true
	 */
	public void flipVisibility(boolean cascade)
	{
		boolean cascadeParamValue = cascade;
		flipVisibility_ev_bool(this.nativeObject.pointer, cascadeParamValue);
	}
	native private void flipVisibility_ev_bool_NoVirtual(long pNativeObject, boolean cascade);
	protected void flipVisibility_NoVirtual(boolean cascade)
	{
		boolean cascadeParamValue = cascade;
		flipVisibility_ev_bool_NoVirtual(this.nativeObject.pointer, cascadeParamValue);
	}

	protected  void flipVisibility_void_callback()
	{
		flipVisibility();
	}

	native private void flipVisibility_void(long pNativeObject);
	public void flipVisibility()
	{
		flipVisibility_void(this.nativeObject.pointer);
	}
	native private void flipVisibility_void_NoVirtual(long pNativeObject);
	protected void flipVisibility_NoVirtual()
	{
		flipVisibility_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setDebugDisplayEnabled_ev_bool_ev_bool_callback(boolean enabled, boolean cascade)
	{
		boolean enabledParamValue = enabled;
		boolean cascadeParamValue = cascade;
		setDebugDisplayEnabled(enabledParamValue, cascadeParamValue);
	}

	native private void setDebugDisplayEnabled_ev_bool_ev_bool(long pNativeObject, boolean enabled, boolean cascade);
	/**
	 * 设置所有对象的节点是否显示他们的调试信息
	 * @param enabled 是否所有的对象显示调试信息
	 * @param cascade 是否逐级检查子节点
	 */
	public void setDebugDisplayEnabled(boolean enabled, boolean cascade)
	{
		boolean enabledParamValue = enabled;
		boolean cascadeParamValue = cascade;
		setDebugDisplayEnabled_ev_bool_ev_bool(this.nativeObject.pointer, enabledParamValue, cascadeParamValue);
	}
	native private void setDebugDisplayEnabled_ev_bool_ev_bool_NoVirtual(long pNativeObject, boolean enabled, boolean cascade);
	protected void setDebugDisplayEnabled_NoVirtual(boolean enabled, boolean cascade)
	{
		boolean enabledParamValue = enabled;
		boolean cascadeParamValue = cascade;
		setDebugDisplayEnabled_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, enabledParamValue, cascadeParamValue);
	}

	protected  void setDebugDisplayEnabled_ev_bool_callback(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setDebugDisplayEnabled(enabledParamValue);
	}

	native private void setDebugDisplayEnabled_ev_bool(long pNativeObject, boolean enabled);
	public void setDebugDisplayEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setDebugDisplayEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setDebugDisplayEnabled_ev_bool_NoVirtual(long pNativeObject, boolean enabled);
	protected void setDebugDisplayEnabled_NoVirtual(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setDebugDisplayEnabled_ev_bool_NoVirtual(this.nativeObject.pointer, enabledParamValue);
	}

	protected  long getDebugRenderable_void_callback()
	{
		com.earthview.world.graphic.Node.DebugRenderable returnValue = getDebugRenderable();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDebugRenderable_void(long pNativeObject);
	/**
	 * 获得调试用的可渲染对象
	 * @param  
	 */
	public com.earthview.world.graphic.Node.DebugRenderable getDebugRenderable()
	{
		long returnValue = getDebugRenderable_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node.DebugRenderable __returnValue = new com.earthview.world.graphic.Node.DebugRenderable(CreatedWhenConstruct.CWC_NotToCreate, "CDebugRenderable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node.DebugRenderable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDebugRenderable");
		}
		return __returnValue;
	}
	native private long getDebugRenderable_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Node.DebugRenderable getDebugRenderable_NoVirtual()
	{
		long returnValue = getDebugRenderable_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node.DebugRenderable __returnValue = new com.earthview.world.graphic.Node.DebugRenderable(CreatedWhenConstruct.CWC_NotToCreate, "CDebugRenderable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node.DebugRenderable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDebugRenderable");
		}
		return __returnValue;
	}

	native private boolean getIsOceanNode_void(long pNativeObject);
	public boolean getIsOceanNode()
	{
		boolean returnValue = getIsOceanNode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIsOceanNode_ev_bool(long pNativeObject, boolean flag);
	public void setIsOceanNode(boolean flag)
	{
		boolean flagParamValue = flag;
		setIsOceanNode_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	public SceneNode(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SceneNode(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	///public:
	///	mutable EarthView::World::Spatial::Math::CMatrix4 mMatrix;
	///mutable EarthView::World::Spatial::Math::CMatrix4 mDerivedMatrix;
	public void _updateFromParent()
	{
		super._updateFromParent_NoVirtual();
	}
	/**
	 * 获取父节点如果父节点为空，表示此节点为根节点
	 * @param  
	 * @return 父节点名称
	 */
	public com.earthview.world.graphic.Node getParent()
	{
		return super.getParent_NoVirtual();
	}
	/**
	 * 获取四元数表示此节点的方向
	 * @param  
	 * @return 四元数值
	 */
	public com.earthview.world.spatial.math.Quaternion getOrientation()
	{
		return super.getOrientation_NoVirtual();
	}
	/**
	 * 设置方向通过四元数设置
	 * @param q 四元数值，节点旋转围绕着节点原点
	 */
	public void setOrientation(com.earthview.world.spatial.math.Quaternion q)
	{
		super.setOrientation_NoVirtual(q);
	}
	public void setOrientation(com.earthview.world.spatial.math.Quaternion q, boolean notify)
	{
		super.setOrientation_NoVirtual(q, notify);
	}
	/**
	 * 设置方向通过四元数设置
	 * @param w 从四个实数构造
	 * @param x 从四个实数构造
	 * @param y 从四个实数构造
	 * @param z 从四个实数构造
	 */
	public void setOrientation(double w, double x, double y, double z)
	{
		super.setOrientation_NoVirtual(w, x, y, z);
	}
	public void setOrientation(double w, double x, double y, double z, boolean notify)
	{
		super.setOrientation_NoVirtual(w, x, y, z, notify);
	}
	/**
	 * 重置四元数本地坐标轴为世界坐标轴，不旋转
	 * @param  
	 */
	public void resetOrientation()
	{
		super.resetOrientation_NoVirtual();
	}
	/**
	 * 设置节点位置
	 * @param pos 三维向量
	 */
	public void setPosition(com.earthview.world.spatial.math.Vector3 pos)
	{
		super.setPosition_NoVirtual(pos);
	}
	public void setPosition(com.earthview.world.spatial.math.Vector3 pos, boolean notify)
	{
		super.setPosition_NoVirtual(pos, notify);
	}
	/**
	 * 设置节点位置
	 * @param x 从三个实数构造三维向量
	 * @param y 从三个实数构造三维向量
	 * @param z 从三个实数构造三维向量
	 */
	public void setPosition(double x, double y, double z)
	{
		super.setPosition_NoVirtual(x, y, z);
	}
	public void setPosition(double x, double y, double z, boolean notify)
	{
		super.setPosition_NoVirtual(x, y, z, notify);
	}
	/**
	 * 获得节点位置
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getPosition()
	{
		return super.getPosition_NoVirtual();
	}
	/**
	 * 设置缩放因子
	 * @param scale 
	 */
	public void setScale(com.earthview.world.spatial.math.Vector3 scale)
	{
		super.setScale_NoVirtual(scale);
	}
	public void setScale(com.earthview.world.spatial.math.Vector3 scale, boolean notify)
	{
		super.setScale_NoVirtual(scale, notify);
	}
	/**
	 * 设置缩放因子
	 * @param x 实数
	 * @param y 实数
	 * @param z 实数
	 */
	public void setScale(double x, double y, double z)
	{
		super.setScale_NoVirtual(x, y, z);
	}
	public void setScale(double x, double y, double z, boolean notify)
	{
		super.setScale_NoVirtual(x, y, z, notify);
	}
	/// <summary>
	///获取缩放因子
	/// </summary>
	/// <param name></param>
	/// <returns>缩放因子</returns>
	public com.earthview.world.spatial.math.Vector3 getScale()
	{
		return super.getScale_NoVirtual();
	}
	/**
	 * 设置是否继承父节点的方向属性
	 * @param inherit 继承
	 */
	public void setInheritOrientation(boolean inherit)
	{
		super.setInheritOrientation_NoVirtual(inherit);
	}
	/**
	 * 判断是否继承父节点的方向属性
	 * @param  
	 * @return 继承返回true，不继承则否则返回false
	 */
	public boolean getInheritOrientation()
	{
		return super.getInheritOrientation_NoVirtual();
	}
	/**
	 * 设置是否继承父节点的缩放因子
	 * @param inherit 继承
	 */
	public void setInheritScale(boolean inherit)
	{
		super.setInheritScale_NoVirtual(inherit);
	}
	/**
	 * 判断是否继承父节点的缩放因子
	 * @param  
	 * @return 继承返回true，不继承则否则返回false
	 */
	public boolean getInheritScale()
	{
		return super.getInheritScale_NoVirtual();
	}
	/**
	 * 缩放因子
	 * @param scale 缩放向量
	 */
	public void scale(com.earthview.world.spatial.math.Vector3 scale)
	{
		super.scale_NoVirtual(scale);
	}
	/**
	 * 缩放因子
	 * @param x 常数
	 * @param y 常数
	 * @param z 常数
	 */
	public void scale(double x, double y, double z)
	{
		super.scale_NoVirtual(x, y, z);
	}
	/**
	 * 平移节点
	 * @param d 三维矢量
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void translate(com.earthview.world.spatial.math.Vector3 d, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.translate_NoVirtual(d, relativeTo);
	}
	/**
	 * 平移节点
	 * @param d 三维矢量
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void translate(com.earthview.world.spatial.math.Vector3 d)
	{
		super.translate_NoVirtual(d);
	}
	/**
	 * 平移节点
	 * @param x 实数
	 * @param y 实数
	 * @param z 实数
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void translate(double x, double y, double z, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.translate_NoVirtual(x, y, z, relativeTo);
	}
	/**
	 * 平移节点
	 * @param x 实数
	 * @param y 实数
	 * @param z 实数
	 */
	public void translate(double x, double y, double z)
	{
		super.translate_NoVirtual(x, y, z);
	}
	/**
	 * 平移节点
	 * @param axes 三维矩阵
	 * @param move 三维矢量
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void translate(com.earthview.world.spatial.math.Matrix3 axes, com.earthview.world.spatial.math.Vector3 move, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.translate_NoVirtual(axes, move, relativeTo);
	}
	/**
	 * 平移节点
	 * @param axes 三维矩阵
	 * @param move 三维矢量
	 */
	public void translate(com.earthview.world.spatial.math.Matrix3 axes, com.earthview.world.spatial.math.Vector3 move)
	{
		super.translate_NoVirtual(axes, move);
	}
	/**
	 * 平移节点
	 * @param axes 三维矩阵
	 * @param x 实数
	 * @param y 实数
	 * @param z 实数
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void translate(com.earthview.world.spatial.math.Matrix3 axes, double x, double y, double z, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.translate_NoVirtual(axes, x, y, z, relativeTo);
	}
	/**
	 * 平移节点
	 * @param axes 三维矩阵
	 * @param x 实数
	 * @param y 实数
	 * @param z 实数
	 */
	public void translate(com.earthview.world.spatial.math.Matrix3 axes, double x, double y, double z)
	{
		super.translate_NoVirtual(axes, x, y, z);
	}
	/**
	 * 沿Z轴旋转节点
	 * @param angle 弧度，角度
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void roll(com.earthview.world.spatial.math.Radian angle, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.roll_NoVirtual(angle, relativeTo);
	}
	public void roll(com.earthview.world.spatial.math.Radian angle)
	{
		super.roll_NoVirtual(angle);
	}
	/**
	 * 沿X轴旋转节点
	 * @param angle 弧度，角度
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void pitch(com.earthview.world.spatial.math.Radian angle, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.pitch_NoVirtual(angle, relativeTo);
	}
	public void pitch(com.earthview.world.spatial.math.Radian angle)
	{
		super.pitch_NoVirtual(angle);
	}
	/**
	 * 根据指定的坐标轴旋转节点
	 * @param axis 三维矩阵
	 * @param angle 角度，弧度
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void rotate(com.earthview.world.spatial.math.Vector3 axis, com.earthview.world.spatial.math.Radian angle, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.rotate_NoVirtual(axis, angle, relativeTo);
	}
	public void rotate(com.earthview.world.spatial.math.Vector3 axis, com.earthview.world.spatial.math.Radian angle)
	{
		super.rotate_NoVirtual(axis, angle);
	}
	/**
	 * 使用指定的四元数旋转节点
	 * @param q 四元数
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void rotate(com.earthview.world.spatial.math.Quaternion q, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.rotate_NoVirtual(q, relativeTo);
	}
	public void rotate(com.earthview.world.spatial.math.Quaternion q)
	{
		super.rotate_NoVirtual(q);
	}
	/**
	 * 设置世界变换矩阵
	 * @param mat 世界变换矩阵
	 */
	public void setMatrix(com.earthview.world.spatial.math.Matrix4 mat)
	{
		super.setMatrix_NoVirtual(mat);
	}
	/**
	 * 获得世界变换矩阵
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getMatrix()
	{
		return super.getMatrix_NoVirtual();
	}
	/**
	 * 设置相对于父节点的局部变换矩阵
	 * @param mat 局部变换矩阵
	 */
	public void setLocalMatrix(com.earthview.world.spatial.math.Matrix4 mat)
	{
		super.setLocalMatrix_NoVirtual(mat);
	}
	/**
	 * 获得相对于父节点的局部变换矩阵
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getLocalMatrix()
	{
		return super.getLocalMatrix_NoVirtual();
	}
	/**
	 * 获取本地坐标轴获取一个矩阵，其列是基于当前坐标系，它的节点继承他的父类。
	 */
	public com.earthview.world.spatial.math.Matrix3 getLocalAxes()
	{
		return super.getLocalAxes_NoVirtual();
	}
	/**
	 * 创建子节点创建一个新的节点作为当前节点的子节点
	 * @param translate 平移量
	 * @param rotate 旋转四元数
	 * @return 节点
	 */
	public com.earthview.world.graphic.Node createChild(com.earthview.world.spatial.math.Vector3 translate, com.earthview.world.spatial.math.Quaternion rotate)
	{
		return super.createChild_NoVirtual(translate, rotate);
	}
	public com.earthview.world.graphic.Node createChild(com.earthview.world.spatial.math.Vector3 translate)
	{
		return super.createChild_NoVirtual(translate);
	}
	public com.earthview.world.graphic.Node createChild()
	{
		return super.createChild_NoVirtual();
	}
	/**
	 * 创建子节点创建一个新的节点作为当前节点的子节点
	 * @param name 名称
	 * @param translate 平移量
	 * @param rotate 旋转四元数
	 * @return 节点
	 */
	public com.earthview.world.graphic.Node createChild(String name, com.earthview.world.spatial.math.Vector3 translate, com.earthview.world.spatial.math.Quaternion rotate)
	{
		return super.createChild_NoVirtual(name, translate, rotate);
	}
	public com.earthview.world.graphic.Node createChild(String name, com.earthview.world.spatial.math.Vector3 translate)
	{
		return super.createChild_NoVirtual(name, translate);
	}
	public com.earthview.world.graphic.Node createChild(String name)
	{
		return super.createChild_NoVirtual(name);
	}
	/**
	 * 添加子节点
	 * @param name 名称
	 */
	public void addChild(com.earthview.world.graphic.Node ref_child)
	{
		super.addChild_NoVirtual(ref_child);
	}
	/**
	 * 子节点数量
	 * @param name 名称
	 * @return 无符号的双字节整型
	 */
	public int numChildren()
	{
		return super.numChildren_NoVirtual();
	}
	/**
	 * 获取子节点获取子节点指针
	 * @param index 指针
	 * @return 节点指针
	 */
	public com.earthview.world.graphic.Node getChild(int index)
	{
		return super.getChild_NoVirtual(index);
	}
	/**
	 * 获取子节点为指定名称的节点获取指针
	 * @param name 名称
	 * @return 节点指针
	 */
	public com.earthview.world.graphic.Node getChild(String name)
	{
		return super.getChild_NoVirtual(name);
	}
	/**
	 * 判断子节点是否存在				
	 * @param name 名称
	 */
	public boolean existChild(String name)
	{
		return super.existChild_NoVirtual(name);
	}
	/**
	 * 获取一个迭代器遍历此节点的所有子节点
	 * @param  
	 */
	public com.earthview.world.graphic.Node.ChildNodeIterator getChildIterator()
	{
		return super.getChildIterator_NoVirtual();
	}
	/**
	 * 检索将指定子节点从父节点分离没有删除此子节点，在其他地方也许继续挂接
	 * @param index 
	 */
	public com.earthview.world.graphic.Node removeChild(int index)
	{
		return super.removeChild_NoVirtual(index);
	}
	/**
	 * 将指定子节点从父节点分离没有删除此子节点，在其他地方也许继续挂接
	 * @param child 
	 */
	public com.earthview.world.graphic.Node removeChild(com.earthview.world.graphic.Node child)
	{
		return super.removeChild_NoVirtual(child);
	}
	/**
	 * 通过名称将指定子节点从父节点分离没有删除此子节点，在其他地方也许继续挂接
	 * @param name 
	 */
	public com.earthview.world.graphic.Node removeChild(String name)
	{
		return super.removeChild_NoVirtual(name);
	}
	/**
	 * 移除所有子节点没有删除此子节点，在其他地方也许继续挂接
	 * @param  
	 */
	public void removeAllChildren()
	{
		super.removeAllChildren_NoVirtual();
	}
	/**
	 * 直接设置节点累积的世界坐标
	 * @param pos 
	 */
	public void _setDerivedPosition(com.earthview.world.spatial.math.Vector3 pos)
	{
		super._setDerivedPosition_NoVirtual(pos);
	}
	public void _setDerivedPosition(com.earthview.world.spatial.math.Vector3 pos, boolean notify)
	{
		super._setDerivedPosition_NoVirtual(pos, notify);
	}
	/**
	 * 直接设置节点累积的世界方向
	 * @param q 
	 */
	public void _setDerivedOrientation(com.earthview.world.spatial.math.Quaternion q)
	{
		super._setDerivedOrientation_NoVirtual(q);
	}
	public void _setDerivedOrientation(com.earthview.world.spatial.math.Quaternion q, boolean notify)
	{
		super._setDerivedOrientation_NoVirtual(q, notify);
	}
	/**
	 * 获取节点累积的方向
	 * @param  
	 */
	public com.earthview.world.spatial.math.Quaternion _getDerivedOrientation()
	{
		return super._getDerivedOrientation_NoVirtual();
	}
	/**
	 * 获取节点累积的坐标
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 _getDerivedPosition()
	{
		return super._getDerivedPosition_NoVirtual();
	}
	/**
	 * 获取节点累积的缩放比例
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 _getDerivedScale()
	{
		return super._getDerivedScale_NoVirtual();
	}
	/**
	 * 获取该节点累积的世界变换矩阵
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 _getFullTransform()
	{
		return super._getFullTransform_NoVirtual();
	}
	/**
	 * 为节点设置监听器
	 * @param listener 
	 */
	public void addListener(com.earthview.world.graphic.Node.NodeListener listener)
	{
		super.addListener_NoVirtual(listener);
	}
	/**
	 * 移除监听器
	 * @param listener 
	 */
	public void removeListener(com.earthview.world.graphic.Node.NodeListener listener)
	{
		super.removeListener_NoVirtual(listener);
	}
	/**
	 * 获取节点当前的监听器
	 * @param  
	 */
	public com.earthview.world.graphic.Node.NodeListener getListener(long index)
	{
		return super.getListener_NoVirtual(index);
	}
	/**
	 * 获取监听器数目
	 * @param  
	 */
	public long getNumListener(long index)
	{
		return super.getNumListener_NoVirtual(index);
	}
	/**
	 * 设置初始状态当前节点变换为基点设置一键还原，变换包括位置，方向，缩放比例除非你想初始化节点，不然你可以不调用此方法
	 * @param  
	 */
	public void setInitialState()
	{
		super.setInitialState_NoVirtual();
	}
	/**
	 * 重置初始状态当前节点变换为基点设置一键还原，变换包括位置，方向，缩放比例除非你想初始化节点，不然你可以不调用此方法
	 * @param  
	 */
	public void resetToInitialState()
	{
		super.resetToInitialState_NoVirtual();
	}
	/**
	 * 设置节点初始位置
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getInitialPosition()
	{
		return super.getInitialPosition_NoVirtual();
	}
	/**
	 * 世界坐标转换当地坐标获得当前位置在所给空间中相对于这个节点的位置
	 * @param worldPos 
	 */
	public com.earthview.world.spatial.math.Vector3 convertWorldToLocalPosition(com.earthview.world.spatial.math.Vector3 worldPos)
	{
		return super.convertWorldToLocalPosition_NoVirtual(worldPos);
	}
	/**
	 * 当地坐标转换世界坐标获得当前空间下的节点的世界坐标进行简单转换，不需要此节点的子节点
	 * @param localPos 
	 */
	public com.earthview.world.spatial.math.Vector3 convertLocalToWorldPosition(com.earthview.world.spatial.math.Vector3 localPos)
	{
		return super.convertLocalToWorldPosition_NoVirtual(localPos);
	}
	/**
	 * 世界方向向量转换当地方向向量获得当前位置方向在所给空间中相对于这个节点的位置方向
	 * @param worldOrientation 
	 */
	public com.earthview.world.spatial.math.Quaternion convertWorldToLocalOrientation(com.earthview.world.spatial.math.Quaternion worldOrientation)
	{
		return super.convertWorldToLocalOrientation_NoVirtual(worldOrientation);
	}
	/**
	 * 当前方向向量转换世界方向向量获得当前空间下的节点的世界方向向量进行简单转换，不需要此节点的子节点
	 * @param worldOrientation 
	 */
	public com.earthview.world.spatial.math.Quaternion convertLocalToWorldOrientation(com.earthview.world.spatial.math.Quaternion localOrientation)
	{
		return super.convertLocalToWorldOrientation_NoVirtual(localOrientation);
	}
	/**
	 * 获取节点初始方向向量
	 * @param  
	 */
	public com.earthview.world.spatial.math.Quaternion getInitialOrientation()
	{
		return super.getInitialOrientation_NoVirtual();
	}
	/**
	 * 获取节点初始缩放比例
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getInitialScale()
	{
		return super.getInitialScale_NoVirtual();
	}
	/**
	 * 获得摄像机视场深度的平方帮助方法
	 * @param cam 摄像机视场
	 * @return 视场大小的值
	 */
	public double getSquaredViewDepth(com.earthview.world.graphic.Camera cam)
	{
		return super.getSquaredViewDepth_NoVirtual(cam);
	}
	/**
	 * 通知节点更新
	 * @param forceParentUpdate 默认为false，是否更新标识
	 */
	public void needUpdate(boolean forceParentUpdate)
	{
		super.needUpdate_NoVirtual(forceParentUpdate);
	}
	public void needUpdate()
	{
		super.needUpdate_NoVirtual();
	}
	/**
	 * 通知父节点更新子节点
	 * @param  
	 * @param child 
	 * @param forceParentUpdate 默认问false
	 */
	public void requestUpdate(com.earthview.world.graphic.Node ref_child, boolean forceParentUpdate)
	{
		super.requestUpdate_NoVirtual(ref_child, forceParentUpdate);
	}
	public void requestUpdate(com.earthview.world.graphic.Node ref_child)
	{
		super.requestUpdate_NoVirtual(ref_child);
	}
	/**
	 * 停止更新
	 * @param  
	 * @param child 
	 */
	public void cancelUpdate(com.earthview.world.graphic.Node child)
	{
		super.cancelUpdate_NoVirtual(child);
	}
	/**
	 * 获取渲染节点的渲染调试
	 * @param scaling 
	 */
	public com.earthview.world.graphic.Node.DebugRenderable getDebugRenderable(double scaling)
	{
		return super.getDebugRenderable_NoVirtual(scaling);
	}
	
	native protected void register_setInSceneGraph_ev_bool(long pNativeObject, String method);
	native protected void register_isInSceneGraph_void(long pNativeObject, String method);
	native protected void register__notifyRootNode_void(long pNativeObject, String method);
	native protected void register__updateBounds_void(long pNativeObject, String method);
	native protected void register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool(long pNativeObject, String method);
	native protected void register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo(long pNativeObject, String method);
	native protected void register__getWorldAABB_void(long pNativeObject, String method);
	native protected void register_getAttachedObjectIterator_void(long pNativeObject, String method);
	native protected void register_showBoundingBox_ev_bool(long pNativeObject, String method);
	native protected void register_showBoundingBox_ev_bool_CMaterialPtr(long pNativeObject, String method);
	native protected void register_hideBoundingBox_ev_bool(long pNativeObject, String method);
	native protected void register__addBoundingBoxToQueue_CRenderQueue(long pNativeObject, String method);
	native protected void register_getShowBoundingBox_void(long pNativeObject, String method);
	native protected void register_createChildSceneNode_CVector3_CQuaternion(long pNativeObject, String method);
	native protected void register_createChildSceneNode_CVector3(long pNativeObject, String method);
	native protected void register_createChildSceneNode_void(long pNativeObject, String method);
	native protected void register_createChildSceneNode_EVString_CVector3_CQuaternion(long pNativeObject, String method);
	native protected void register_createChildSceneNode_EVString_CVector3(long pNativeObject, String method);
	native protected void register_createChildSceneNode_EVString(long pNativeObject, String method);
	native protected void register_findLights_LightList_Real_ev_uint32(long pNativeObject, String method);
	native protected void register_findLights_LightList_Real(long pNativeObject, String method);
	native protected void register_setFixedYawAxis_ev_bool_CVector3(long pNativeObject, String method);
	native protected void register_setFixedYawAxis_ev_bool(long pNativeObject, String method);
	native protected void register_setDirection_Real_Real_Real_TransformSpace_CVector3(long pNativeObject, String method);
	native protected void register_setDirection_Real_Real_Real_TransformSpace(long pNativeObject, String method);
	native protected void register_setDirection_Real_Real_Real(long pNativeObject, String method);
	native protected void register_setDirection_CVector3_TransformSpace_CVector3(long pNativeObject, String method);
	native protected void register_setDirection_CVector3_TransformSpace(long pNativeObject, String method);
	native protected void register_setDirection_CVector3(long pNativeObject, String method);
	native protected void register_lookAt_CVector3_TransformSpace_CVector3(long pNativeObject, String method);
	native protected void register_lookAt_CVector3_TransformSpace(long pNativeObject, String method);
	native protected void register_setAutoTracking_ev_bool(long pNativeObject, String method);
	native protected void register_setAutoTracking_ev_bool_CSceneNode(long pNativeObject, String method);
	native protected void register_setAutoTracking_ev_bool_CSceneNode_CVector3(long pNativeObject, String method);
	native protected void register_setAutoTracking_ev_bool_CSceneNode_CVector3_CVector3(long pNativeObject, String method);
	native protected void register_getAutoTrackTarget_void(long pNativeObject, String method);
	native protected void register_getAutoTrackOffset_void(long pNativeObject, String method);
	native protected void register_getAutoTrackLocalDirection_void(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_getVisible_void(long pNativeObject, String method);
	native protected void register_hasAnyVisibleObject_void(long pNativeObject, String method);
	native protected void register_hasAnyVisibleObject2_void(long pNativeObject, String method);
	native protected void register_hasAnyVisibleShadowCaster_void(long pNativeObject, String method);
	native protected void register_hasAnyVisibleShadowCaster2_void(long pNativeObject, String method);
	native protected void register_flipVisibility_ev_bool(long pNativeObject, String method);
	native protected void register_flipVisibility_void(long pNativeObject, String method);
	native protected void register_setDebugDisplayEnabled_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_setDebugDisplayEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_getDebugRenderable_void(long pNativeObject, String method);
	native protected void register__updateFromParent_void(long pNativeObject, String method);
	native protected void register_setParent_CNode(long pNativeObject, String method);
	native protected void register_updateFromParentImpl_void(long pNativeObject, String method);
	native protected void register_createChildImpl_void(long pNativeObject, String method);
	native protected void register_createChildImpl_EVString(long pNativeObject, String method);
	native protected void register_notifyMoved_void(long pNativeObject, String method);
	native protected void register_getParent_void(long pNativeObject, String method);
	native protected void register_getOrientation_void(long pNativeObject, String method);
	native protected void register_setOrientation_CQuaternion(long pNativeObject, String method);
	native protected void register_setOrientation_CQuaternion_ev_bool(long pNativeObject, String method);
	native protected void register_setOrientation_Real_Real_Real_Real(long pNativeObject, String method);
	native protected void register_setOrientation_Real_Real_Real_Real_ev_bool(long pNativeObject, String method);
	native protected void register_resetOrientation_void(long pNativeObject, String method);
	native protected void register_setPosition_CVector3(long pNativeObject, String method);
	native protected void register_setPosition_CVector3_ev_bool(long pNativeObject, String method);
	native protected void register_setPosition_Real_Real_Real(long pNativeObject, String method);
	native protected void register_setPosition_Real_Real_Real_ev_bool(long pNativeObject, String method);
	native protected void register_getPosition_void(long pNativeObject, String method);
	native protected void register_setScale_CVector3(long pNativeObject, String method);
	native protected void register_setScale_CVector3_ev_bool(long pNativeObject, String method);
	native protected void register_setScale_Real_Real_Real(long pNativeObject, String method);
	native protected void register_setScale_Real_Real_Real_ev_bool(long pNativeObject, String method);
	native protected void register_getScale_void(long pNativeObject, String method);
	native protected void register_setInheritOrientation_ev_bool(long pNativeObject, String method);
	native protected void register_getInheritOrientation_void(long pNativeObject, String method);
	native protected void register_setInheritScale_ev_bool(long pNativeObject, String method);
	native protected void register_getInheritScale_void(long pNativeObject, String method);
	native protected void register_scale_CVector3(long pNativeObject, String method);
	native protected void register_scale_Real_Real_Real(long pNativeObject, String method);
	native protected void register_translate_CVector3_TransformSpace(long pNativeObject, String method);
	native protected void register_translate_CVector3(long pNativeObject, String method);
	native protected void register_translate_Real_Real_Real_TransformSpace(long pNativeObject, String method);
	native protected void register_translate_Real_Real_Real(long pNativeObject, String method);
	native protected void register_translate_CMatrix3_CVector3_TransformSpace(long pNativeObject, String method);
	native protected void register_translate_CMatrix3_CVector3(long pNativeObject, String method);
	native protected void register_translate_CMatrix3_Real_Real_Real_TransformSpace(long pNativeObject, String method);
	native protected void register_translate_CMatrix3_Real_Real_Real(long pNativeObject, String method);
	native protected void register_roll_CRadian_TransformSpace(long pNativeObject, String method);
	native protected void register_roll_CRadian(long pNativeObject, String method);
	native protected void register_pitch_CRadian_TransformSpace(long pNativeObject, String method);
	native protected void register_pitch_CRadian(long pNativeObject, String method);
	native protected void register_yaw_CRadian_TransformSpace(long pNativeObject, String method);
	native protected void register_yaw_CRadian(long pNativeObject, String method);
	native protected void register_rotate_CVector3_CRadian_TransformSpace(long pNativeObject, String method);
	native protected void register_rotate_CVector3_CRadian(long pNativeObject, String method);
	native protected void register_rotate_CQuaternion_TransformSpace(long pNativeObject, String method);
	native protected void register_rotate_CQuaternion(long pNativeObject, String method);
	native protected void register_setMatrix_CMatrix4(long pNativeObject, String method);
	native protected void register_getMatrix_void(long pNativeObject, String method);
	native protected void register_setLocalMatrix_CMatrix4(long pNativeObject, String method);
	native protected void register_getLocalMatrix_void(long pNativeObject, String method);
	native protected void register_getLocalAxes_void(long pNativeObject, String method);
	native protected void register_createChild_CVector3_CQuaternion(long pNativeObject, String method);
	native protected void register_createChild_CVector3(long pNativeObject, String method);
	native protected void register_createChild_void(long pNativeObject, String method);
	native protected void register_createChild_EVString_CVector3_CQuaternion(long pNativeObject, String method);
	native protected void register_createChild_EVString_CVector3(long pNativeObject, String method);
	native protected void register_createChild_EVString(long pNativeObject, String method);
	native protected void register_addChild_CNode(long pNativeObject, String method);
	native protected void register_numChildren_void(long pNativeObject, String method);
	native protected void register_getChild_ev_uint16(long pNativeObject, String method);
	native protected void register_getChild_EVString(long pNativeObject, String method);
	native protected void register_existChild_EVString(long pNativeObject, String method);
	native protected void register_getChildIterator_void(long pNativeObject, String method);
	native protected void register_removeChild_ev_uint16(long pNativeObject, String method);
	native protected void register_removeChild_CNode(long pNativeObject, String method);
	native protected void register_removeChild_EVString(long pNativeObject, String method);
	native protected void register_removeAllChildren_void(long pNativeObject, String method);
	native protected void register__setDerivedPosition_CVector3(long pNativeObject, String method);
	native protected void register__setDerivedPosition_CVector3_ev_bool(long pNativeObject, String method);
	native protected void register__setDerivedOrientation_CQuaternion(long pNativeObject, String method);
	native protected void register__setDerivedOrientation_CQuaternion_ev_bool(long pNativeObject, String method);
	native protected void register__getDerivedOrientation_void(long pNativeObject, String method);
	native protected void register__getDerivedPosition_void(long pNativeObject, String method);
	native protected void register__getDerivedScale_void(long pNativeObject, String method);
	native protected void register__getFullTransform_void(long pNativeObject, String method);
	native protected void register__update_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_addListener_CNodeListener(long pNativeObject, String method);
	native protected void register_removeListener_CNodeListener(long pNativeObject, String method);
	native protected void register_getListener_ev_uint32(long pNativeObject, String method);
	native protected void register_getNumListener_ev_uint32(long pNativeObject, String method);
	native protected void register_setInitialState_void(long pNativeObject, String method);
	native protected void register_resetToInitialState_void(long pNativeObject, String method);
	native protected void register_getInitialPosition_void(long pNativeObject, String method);
	native protected void register_convertWorldToLocalPosition_CVector3(long pNativeObject, String method);
	native protected void register_convertLocalToWorldPosition_CVector3(long pNativeObject, String method);
	native protected void register_convertWorldToLocalOrientation_CQuaternion(long pNativeObject, String method);
	native protected void register_convertLocalToWorldOrientation_CQuaternion(long pNativeObject, String method);
	native protected void register_getInitialOrientation_void(long pNativeObject, String method);
	native protected void register_getInitialScale_void(long pNativeObject, String method);
	native protected void register_getSquaredViewDepth_CCamera(long pNativeObject, String method);
	native protected void register_needUpdate_ev_bool(long pNativeObject, String method);
	native protected void register_needUpdate_void(long pNativeObject, String method);
	native protected void register_requestUpdate_CNode_ev_bool(long pNativeObject, String method);
	native protected void register_requestUpdate_CNode(long pNativeObject, String method);
	native protected void register_cancelUpdate_CNode(long pNativeObject, String method);
	native protected void register_getDebugRenderable_Real(long pNativeObject, String method);
	native protected void register_attachObject_CMovableObject(long pNativeObject, String method);
	native protected void register_numAttachedObjects_void(long pNativeObject, String method);
	native protected void register_getAttachedObject_ev_uint16(long pNativeObject, String method);
	native protected void register_getAttachedObject_EVString(long pNativeObject, String method);
	native protected void register_detachObject_ev_uint16(long pNativeObject, String method);
	native protected void register_detachObject_CMovableObject(long pNativeObject, String method);
	native protected void register_detachObject_EVString(long pNativeObject, String method);
	native protected void register_detachAllObjects_void(long pNativeObject, String method);
	native protected void register_removeAndDestroyChild_EVString(long pNativeObject, String method);
	native protected void register_removeAndDestroyChild_ev_uint16(long pNativeObject, String method);
	native protected void register_removeAndDestroyAllChildren_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setInSceneGraph_ev_bool(this.nativeObject.pointer, "setInSceneGraph_ev_bool_callback");
			this.register_isInSceneGraph_void(this.nativeObject.pointer, "isInSceneGraph_void_callback");
			this.register__notifyRootNode_void(this.nativeObject.pointer, "_notifyRootNode_void_callback");
			this.register__updateBounds_void(this.nativeObject.pointer, "_updateBounds_void_callback");
			this.register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, "_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_callback");
			this.register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool(this.nativeObject.pointer, "_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_callback");
			this.register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool(this.nativeObject.pointer, "_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_callback");
			this.register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo(this.nativeObject.pointer, "_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_callback");
			this.register__getWorldAABB_void(this.nativeObject.pointer, "_getWorldAABB_void_callback");
			this.register_getAttachedObjectIterator_void(this.nativeObject.pointer, "getAttachedObjectIterator_void_callback");
			this.register_showBoundingBox_ev_bool(this.nativeObject.pointer, "showBoundingBox_ev_bool_callback");
			this.register_showBoundingBox_ev_bool_CMaterialPtr(this.nativeObject.pointer, "showBoundingBox_ev_bool_CMaterialPtr_callback");
			this.register_hideBoundingBox_ev_bool(this.nativeObject.pointer, "hideBoundingBox_ev_bool_callback");
			this.register__addBoundingBoxToQueue_CRenderQueue(this.nativeObject.pointer, "_addBoundingBoxToQueue_CRenderQueue_callback");
			this.register_getShowBoundingBox_void(this.nativeObject.pointer, "getShowBoundingBox_void_callback");
			this.register_createChildSceneNode_CVector3_CQuaternion(this.nativeObject.pointer, "createChildSceneNode_CVector3_CQuaternion_callback");
			this.register_createChildSceneNode_CVector3(this.nativeObject.pointer, "createChildSceneNode_CVector3_callback");
			this.register_createChildSceneNode_void(this.nativeObject.pointer, "createChildSceneNode_void_callback");
			this.register_createChildSceneNode_EVString_CVector3_CQuaternion(this.nativeObject.pointer, "createChildSceneNode_EVString_CVector3_CQuaternion_callback");
			this.register_createChildSceneNode_EVString_CVector3(this.nativeObject.pointer, "createChildSceneNode_EVString_CVector3_callback");
			this.register_createChildSceneNode_EVString(this.nativeObject.pointer, "createChildSceneNode_EVString_callback");
			this.register_findLights_LightList_Real_ev_uint32(this.nativeObject.pointer, "findLights_LightList_Real_ev_uint32_callback");
			this.register_findLights_LightList_Real(this.nativeObject.pointer, "findLights_LightList_Real_callback");
			this.register_setFixedYawAxis_ev_bool_CVector3(this.nativeObject.pointer, "setFixedYawAxis_ev_bool_CVector3_callback");
			this.register_setFixedYawAxis_ev_bool(this.nativeObject.pointer, "setFixedYawAxis_ev_bool_callback");
			this.register_setDirection_Real_Real_Real_TransformSpace_CVector3(this.nativeObject.pointer, "setDirection_Real_Real_Real_TransformSpace_CVector3_callback");
			this.register_setDirection_Real_Real_Real_TransformSpace(this.nativeObject.pointer, "setDirection_Real_Real_Real_TransformSpace_callback");
			this.register_setDirection_Real_Real_Real(this.nativeObject.pointer, "setDirection_Real_Real_Real_callback");
			this.register_setDirection_CVector3_TransformSpace_CVector3(this.nativeObject.pointer, "setDirection_CVector3_TransformSpace_CVector3_callback");
			this.register_setDirection_CVector3_TransformSpace(this.nativeObject.pointer, "setDirection_CVector3_TransformSpace_callback");
			this.register_setDirection_CVector3(this.nativeObject.pointer, "setDirection_CVector3_callback");
			this.register_lookAt_CVector3_TransformSpace_CVector3(this.nativeObject.pointer, "lookAt_CVector3_TransformSpace_CVector3_callback");
			this.register_lookAt_CVector3_TransformSpace(this.nativeObject.pointer, "lookAt_CVector3_TransformSpace_callback");
			this.register_setAutoTracking_ev_bool(this.nativeObject.pointer, "setAutoTracking_ev_bool_callback");
			this.register_setAutoTracking_ev_bool_CSceneNode(this.nativeObject.pointer, "setAutoTracking_ev_bool_CSceneNode_callback");
			this.register_setAutoTracking_ev_bool_CSceneNode_CVector3(this.nativeObject.pointer, "setAutoTracking_ev_bool_CSceneNode_CVector3_callback");
			this.register_setAutoTracking_ev_bool_CSceneNode_CVector3_CVector3(this.nativeObject.pointer, "setAutoTracking_ev_bool_CSceneNode_CVector3_CVector3_callback");
			this.register_getAutoTrackTarget_void(this.nativeObject.pointer, "getAutoTrackTarget_void_callback");
			this.register_getAutoTrackOffset_void(this.nativeObject.pointer, "getAutoTrackOffset_void_callback");
			this.register_getAutoTrackLocalDirection_void(this.nativeObject.pointer, "getAutoTrackLocalDirection_void_callback");
			this.register_setVisible_ev_bool_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_ev_bool_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_getVisible_void(this.nativeObject.pointer, "getVisible_void_callback");
			this.register_hasAnyVisibleObject_void(this.nativeObject.pointer, "hasAnyVisibleObject_void_callback");
			this.register_hasAnyVisibleObject2_void(this.nativeObject.pointer, "hasAnyVisibleObject2_void_callback");
			this.register_hasAnyVisibleShadowCaster_void(this.nativeObject.pointer, "hasAnyVisibleShadowCaster_void_callback");
			this.register_hasAnyVisibleShadowCaster2_void(this.nativeObject.pointer, "hasAnyVisibleShadowCaster2_void_callback");
			this.register_flipVisibility_ev_bool(this.nativeObject.pointer, "flipVisibility_ev_bool_callback");
			this.register_flipVisibility_void(this.nativeObject.pointer, "flipVisibility_void_callback");
			this.register_setDebugDisplayEnabled_ev_bool_ev_bool(this.nativeObject.pointer, "setDebugDisplayEnabled_ev_bool_ev_bool_callback");
			this.register_setDebugDisplayEnabled_ev_bool(this.nativeObject.pointer, "setDebugDisplayEnabled_ev_bool_callback");
			this.register_getDebugRenderable_void(this.nativeObject.pointer, "getDebugRenderable_void_callback");
			this.register__updateFromParent_void(this.nativeObject.pointer, "_updateFromParent_void_callback");
			this.register_setParent_CNode(this.nativeObject.pointer, "setParent_CNode_callback");
			this.register_updateFromParentImpl_void(this.nativeObject.pointer, "updateFromParentImpl_void_callback");
			this.register_createChildImpl_void(this.nativeObject.pointer, "createChildImpl_void_callback");
			this.register_createChildImpl_EVString(this.nativeObject.pointer, "createChildImpl_EVString_callback");
			this.register_notifyMoved_void(this.nativeObject.pointer, "notifyMoved_void_callback");
			this.register_getParent_void(this.nativeObject.pointer, "getParent_void_callback");
			this.register_getOrientation_void(this.nativeObject.pointer, "getOrientation_void_callback");
			this.register_setOrientation_CQuaternion(this.nativeObject.pointer, "setOrientation_CQuaternion_callback");
			this.register_setOrientation_CQuaternion_ev_bool(this.nativeObject.pointer, "setOrientation_CQuaternion_ev_bool_callback");
			this.register_setOrientation_Real_Real_Real_Real(this.nativeObject.pointer, "setOrientation_Real_Real_Real_Real_callback");
			this.register_setOrientation_Real_Real_Real_Real_ev_bool(this.nativeObject.pointer, "setOrientation_Real_Real_Real_Real_ev_bool_callback");
			this.register_resetOrientation_void(this.nativeObject.pointer, "resetOrientation_void_callback");
			this.register_setPosition_CVector3(this.nativeObject.pointer, "setPosition_CVector3_callback");
			this.register_setPosition_CVector3_ev_bool(this.nativeObject.pointer, "setPosition_CVector3_ev_bool_callback");
			this.register_setPosition_Real_Real_Real(this.nativeObject.pointer, "setPosition_Real_Real_Real_callback");
			this.register_setPosition_Real_Real_Real_ev_bool(this.nativeObject.pointer, "setPosition_Real_Real_Real_ev_bool_callback");
			this.register_getPosition_void(this.nativeObject.pointer, "getPosition_void_callback");
			this.register_setScale_CVector3(this.nativeObject.pointer, "setScale_CVector3_callback");
			this.register_setScale_CVector3_ev_bool(this.nativeObject.pointer, "setScale_CVector3_ev_bool_callback");
			this.register_setScale_Real_Real_Real(this.nativeObject.pointer, "setScale_Real_Real_Real_callback");
			this.register_setScale_Real_Real_Real_ev_bool(this.nativeObject.pointer, "setScale_Real_Real_Real_ev_bool_callback");
			this.register_getScale_void(this.nativeObject.pointer, "getScale_void_callback");
			this.register_setInheritOrientation_ev_bool(this.nativeObject.pointer, "setInheritOrientation_ev_bool_callback");
			this.register_getInheritOrientation_void(this.nativeObject.pointer, "getInheritOrientation_void_callback");
			this.register_setInheritScale_ev_bool(this.nativeObject.pointer, "setInheritScale_ev_bool_callback");
			this.register_getInheritScale_void(this.nativeObject.pointer, "getInheritScale_void_callback");
			this.register_scale_CVector3(this.nativeObject.pointer, "scale_CVector3_callback");
			this.register_scale_Real_Real_Real(this.nativeObject.pointer, "scale_Real_Real_Real_callback");
			this.register_translate_CVector3_TransformSpace(this.nativeObject.pointer, "translate_CVector3_TransformSpace_callback");
			this.register_translate_CVector3(this.nativeObject.pointer, "translate_CVector3_callback");
			this.register_translate_Real_Real_Real_TransformSpace(this.nativeObject.pointer, "translate_Real_Real_Real_TransformSpace_callback");
			this.register_translate_Real_Real_Real(this.nativeObject.pointer, "translate_Real_Real_Real_callback");
			this.register_translate_CMatrix3_CVector3_TransformSpace(this.nativeObject.pointer, "translate_CMatrix3_CVector3_TransformSpace_callback");
			this.register_translate_CMatrix3_CVector3(this.nativeObject.pointer, "translate_CMatrix3_CVector3_callback");
			this.register_translate_CMatrix3_Real_Real_Real_TransformSpace(this.nativeObject.pointer, "translate_CMatrix3_Real_Real_Real_TransformSpace_callback");
			this.register_translate_CMatrix3_Real_Real_Real(this.nativeObject.pointer, "translate_CMatrix3_Real_Real_Real_callback");
			this.register_roll_CRadian_TransformSpace(this.nativeObject.pointer, "roll_CRadian_TransformSpace_callback");
			this.register_roll_CRadian(this.nativeObject.pointer, "roll_CRadian_callback");
			this.register_pitch_CRadian_TransformSpace(this.nativeObject.pointer, "pitch_CRadian_TransformSpace_callback");
			this.register_pitch_CRadian(this.nativeObject.pointer, "pitch_CRadian_callback");
			this.register_yaw_CRadian_TransformSpace(this.nativeObject.pointer, "yaw_CRadian_TransformSpace_callback");
			this.register_yaw_CRadian(this.nativeObject.pointer, "yaw_CRadian_callback");
			this.register_rotate_CVector3_CRadian_TransformSpace(this.nativeObject.pointer, "rotate_CVector3_CRadian_TransformSpace_callback");
			this.register_rotate_CVector3_CRadian(this.nativeObject.pointer, "rotate_CVector3_CRadian_callback");
			this.register_rotate_CQuaternion_TransformSpace(this.nativeObject.pointer, "rotate_CQuaternion_TransformSpace_callback");
			this.register_rotate_CQuaternion(this.nativeObject.pointer, "rotate_CQuaternion_callback");
			this.register_setMatrix_CMatrix4(this.nativeObject.pointer, "setMatrix_CMatrix4_callback");
			this.register_getMatrix_void(this.nativeObject.pointer, "getMatrix_void_callback");
			this.register_setLocalMatrix_CMatrix4(this.nativeObject.pointer, "setLocalMatrix_CMatrix4_callback");
			this.register_getLocalMatrix_void(this.nativeObject.pointer, "getLocalMatrix_void_callback");
			this.register_getLocalAxes_void(this.nativeObject.pointer, "getLocalAxes_void_callback");
			this.register_createChild_CVector3_CQuaternion(this.nativeObject.pointer, "createChild_CVector3_CQuaternion_callback");
			this.register_createChild_CVector3(this.nativeObject.pointer, "createChild_CVector3_callback");
			this.register_createChild_void(this.nativeObject.pointer, "createChild_void_callback");
			this.register_createChild_EVString_CVector3_CQuaternion(this.nativeObject.pointer, "createChild_EVString_CVector3_CQuaternion_callback");
			this.register_createChild_EVString_CVector3(this.nativeObject.pointer, "createChild_EVString_CVector3_callback");
			this.register_createChild_EVString(this.nativeObject.pointer, "createChild_EVString_callback");
			this.register_addChild_CNode(this.nativeObject.pointer, "addChild_CNode_callback");
			this.register_numChildren_void(this.nativeObject.pointer, "numChildren_void_callback");
			this.register_getChild_ev_uint16(this.nativeObject.pointer, "getChild_ev_uint16_callback");
			this.register_getChild_EVString(this.nativeObject.pointer, "getChild_EVString_callback");
			this.register_existChild_EVString(this.nativeObject.pointer, "existChild_EVString_callback");
			this.register_getChildIterator_void(this.nativeObject.pointer, "getChildIterator_void_callback");
			this.register_removeChild_ev_uint16(this.nativeObject.pointer, "removeChild_ev_uint16_callback");
			this.register_removeChild_CNode(this.nativeObject.pointer, "removeChild_CNode_callback");
			this.register_removeChild_EVString(this.nativeObject.pointer, "removeChild_EVString_callback");
			this.register_removeAllChildren_void(this.nativeObject.pointer, "removeAllChildren_void_callback");
			this.register__setDerivedPosition_CVector3(this.nativeObject.pointer, "_setDerivedPosition_CVector3_callback");
			this.register__setDerivedPosition_CVector3_ev_bool(this.nativeObject.pointer, "_setDerivedPosition_CVector3_ev_bool_callback");
			this.register__setDerivedOrientation_CQuaternion(this.nativeObject.pointer, "_setDerivedOrientation_CQuaternion_callback");
			this.register__setDerivedOrientation_CQuaternion_ev_bool(this.nativeObject.pointer, "_setDerivedOrientation_CQuaternion_ev_bool_callback");
			this.register__getDerivedOrientation_void(this.nativeObject.pointer, "_getDerivedOrientation_void_callback");
			this.register__getDerivedPosition_void(this.nativeObject.pointer, "_getDerivedPosition_void_callback");
			this.register__getDerivedScale_void(this.nativeObject.pointer, "_getDerivedScale_void_callback");
			this.register__getFullTransform_void(this.nativeObject.pointer, "_getFullTransform_void_callback");
			this.register__update_ev_bool_ev_bool(this.nativeObject.pointer, "_update_ev_bool_ev_bool_callback");
			this.register_addListener_CNodeListener(this.nativeObject.pointer, "addListener_CNodeListener_callback");
			this.register_removeListener_CNodeListener(this.nativeObject.pointer, "removeListener_CNodeListener_callback");
			this.register_getListener_ev_uint32(this.nativeObject.pointer, "getListener_ev_uint32_callback");
			this.register_getNumListener_ev_uint32(this.nativeObject.pointer, "getNumListener_ev_uint32_callback");
			this.register_setInitialState_void(this.nativeObject.pointer, "setInitialState_void_callback");
			this.register_resetToInitialState_void(this.nativeObject.pointer, "resetToInitialState_void_callback");
			this.register_getInitialPosition_void(this.nativeObject.pointer, "getInitialPosition_void_callback");
			this.register_convertWorldToLocalPosition_CVector3(this.nativeObject.pointer, "convertWorldToLocalPosition_CVector3_callback");
			this.register_convertLocalToWorldPosition_CVector3(this.nativeObject.pointer, "convertLocalToWorldPosition_CVector3_callback");
			this.register_convertWorldToLocalOrientation_CQuaternion(this.nativeObject.pointer, "convertWorldToLocalOrientation_CQuaternion_callback");
			this.register_convertLocalToWorldOrientation_CQuaternion(this.nativeObject.pointer, "convertLocalToWorldOrientation_CQuaternion_callback");
			this.register_getInitialOrientation_void(this.nativeObject.pointer, "getInitialOrientation_void_callback");
			this.register_getInitialScale_void(this.nativeObject.pointer, "getInitialScale_void_callback");
			this.register_getSquaredViewDepth_CCamera(this.nativeObject.pointer, "getSquaredViewDepth_CCamera_callback");
			this.register_needUpdate_ev_bool(this.nativeObject.pointer, "needUpdate_ev_bool_callback");
			this.register_needUpdate_void(this.nativeObject.pointer, "needUpdate_void_callback");
			this.register_requestUpdate_CNode_ev_bool(this.nativeObject.pointer, "requestUpdate_CNode_ev_bool_callback");
			this.register_requestUpdate_CNode(this.nativeObject.pointer, "requestUpdate_CNode_callback");
			this.register_cancelUpdate_CNode(this.nativeObject.pointer, "cancelUpdate_CNode_callback");
			this.register_getDebugRenderable_Real(this.nativeObject.pointer, "getDebugRenderable_Real_callback");
			this.register_attachObject_CMovableObject(this.nativeObject.pointer, "attachObject_CMovableObject_callback");
			this.register_numAttachedObjects_void(this.nativeObject.pointer, "numAttachedObjects_void_callback");
			this.register_getAttachedObject_ev_uint16(this.nativeObject.pointer, "getAttachedObject_ev_uint16_callback");
			this.register_getAttachedObject_EVString(this.nativeObject.pointer, "getAttachedObject_EVString_callback");
			this.register_detachObject_ev_uint16(this.nativeObject.pointer, "detachObject_ev_uint16_callback");
			this.register_detachObject_CMovableObject(this.nativeObject.pointer, "detachObject_CMovableObject_callback");
			this.register_detachObject_EVString(this.nativeObject.pointer, "detachObject_EVString_callback");
			this.register_detachAllObjects_void(this.nativeObject.pointer, "detachAllObjects_void_callback");
			this.register_removeAndDestroyChild_EVString(this.nativeObject.pointer, "removeAndDestroyChild_EVString_callback");
			this.register_removeAndDestroyChild_ev_uint16(this.nativeObject.pointer, "removeAndDestroyChild_ev_uint16_callback");
			this.register_removeAndDestroyAllChildren_void(this.nativeObject.pointer, "removeAndDestroyAllChildren_void_callback");
		}
	}
	
	public static SceneNode fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SceneNode obj = null;
 		if(baseObj instanceof SceneNode)
		{
			obj = (SceneNode)baseObj;
		} else {
			obj = new SceneNode(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSceneNode");
			obj.increaseCast();
		}

		return obj;
	}
}
