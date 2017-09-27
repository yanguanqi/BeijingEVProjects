package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 节点类此类展示了节点的关系图
 */
public class Node extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CNode", new NodeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCNodeProxy", new NodeClassFactory());
	}

	/**
	 * 定义空间转换关系
	 */
	public enum TransformSpace implements INativeEnum<TransformSpace> {
		TS_LOCAL(TransformSpaceHelper.ENUM_VALUES[0]),
		TS_PARENT(TransformSpaceHelper.ENUM_VALUES[1]),
		TS_WORLD(TransformSpaceHelper.ENUM_VALUES[2]);
		private int value;
		TransformSpace(int i) {
			this.value = i;
		}
		public TransformSpace getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final TransformSpace toEnum(int retval) {
			if(retval == TS_LOCAL.value){
				return TS_LOCAL;
			}
			else if(retval == TS_PARENT.value){
				return TS_PARENT;
			}
			else if(retval == TS_WORLD.value){
				return TS_WORLD;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class TransformSpaceHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 子节点地图
	 */
	public static class ChildNodeMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CNode::ChildNodeMap", new ChildNodeMapClassFactory());
		}

		public ChildNodeMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ChildNodeMap", null);
		}

		native private boolean push_EVString_CNode(long pNativeObject, String key, long ref_val);
		public boolean push(String key, NativeObjectPointer<com.earthview.world.graphic.Node> ref_val)
		{
			String keyParamValue = key;
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_EVString_CNode(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
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
		public NativeObjectPointer<com.earthview.world.graphic.Node> OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.Node> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Node>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		public NativeObjectPointer<com.earthview.world.graphic.Node> get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.Node> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Node>(new InstancePointer(returnValue));
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
		public ChildNodeMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ChildNodeMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ChildNodeMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ChildNodeMap obj = null;
 			if(baseObj instanceof ChildNodeMap)
			{
				obj = (ChildNodeMap)baseObj;
			} else {
				obj = new ChildNodeMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ChildNodeMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ChildNodeMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ChildNodeMap emptyInstance = new ChildNodeMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 子节点对
	 */
	public static class StringChildNodePair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CNode::StringChildNodePair", new StringChildNodePairClassFactory());
		}

		public StringChildNodePair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("StringChildNodePair", null);
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
		public com.earthview.world.graphic.Node get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
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
		
		native private void set_second_CNode (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.Node second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_CNode(this.nativeObject.pointer, secondParamValue);
		}
		
		public StringChildNodePair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public StringChildNodePair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static StringChildNodePair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			StringChildNodePair obj = null;
 			if(baseObj instanceof StringChildNodePair)
			{
				obj = (StringChildNodePair)baseObj;
			} else {
				obj = new StringChildNodePair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "StringChildNodePair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class StringChildNodePairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			StringChildNodePair emptyInstance = new StringChildNodePair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/// <summary>
	/// 子节点迭代器
	/// typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CNode::ChildNodeMap> EarthView::World::Graphic::CNode::ChildNodeIterator;
	/// </summary>
	public static class ChildNodeIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CNode::ChildNodeIterator", new ChildNodeIteratorClassFactory());
		}

		public ChildNodeIterator(com.earthview.world.graphic.Node.ChildNodeMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("ChildNodeIterator", list);
		}

		public ChildNodeIterator(com.earthview.world.graphic.Node.ChildNodeIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("ChildNodeIterator", list);
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
		public com.earthview.world.graphic.Node nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
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
		native private long nextValuePtr_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.Node> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.Node> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Node>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.Node next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
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
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.Node.StringChildNodePair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Node.StringChildNodePair __returnValue = new com.earthview.world.graphic.Node.StringChildNodePair(CreatedWhenConstruct.CWC_NotToCreate, "StringChildNodePair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Node.StringChildNodePair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringChildNodePair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.Node.StringChildNodePair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Node.StringChildNodePair __returnValue = new com.earthview.world.graphic.Node.StringChildNodePair(CreatedWhenConstruct.CWC_NotToCreate, "StringChildNodePair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Node.StringChildNodePair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringChildNodePair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.Node.StringChildNodePair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Node.StringChildNodePair __returnValue = new com.earthview.world.graphic.Node.StringChildNodePair(CreatedWhenConstruct.CWC_NotToCreate, "StringChildNodePair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Node.StringChildNodePair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringChildNodePair");
			}
			return __returnValue;
		}
		public ChildNodeIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ChildNodeIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ChildNodeIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ChildNodeIterator obj = null;
 			if(baseObj instanceof ChildNodeIterator)
			{
				obj = (ChildNodeIterator)baseObj;
			} else {
				obj = new ChildNodeIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ChildNodeIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ChildNodeIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ChildNodeIterator emptyInstance = new ChildNodeIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/// <summary>
	/// 子节点迭代器
	/// typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CNode::ChildNodeMap> EarthView::World::Graphic::CNode::ConstChildNodeIterator;
	/// </summary>
	public static class ConstChildNodeIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CNode::ConstChildNodeIterator", new ConstChildNodeIteratorClassFactory());
		}

		public ConstChildNodeIterator(com.earthview.world.graphic.Node.ChildNodeMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("ConstChildNodeIterator", list);
		}

		public ConstChildNodeIterator(com.earthview.world.graphic.Node.ConstChildNodeIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("ConstChildNodeIterator", list);
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
		public com.earthview.world.graphic.Node nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
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
		native private long nextValuePtr_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.Node> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.Node> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Node>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.Node next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
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
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.Node.StringChildNodePair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Node.StringChildNodePair __returnValue = new com.earthview.world.graphic.Node.StringChildNodePair(CreatedWhenConstruct.CWC_NotToCreate, "StringChildNodePair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Node.StringChildNodePair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringChildNodePair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.Node.StringChildNodePair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Node.StringChildNodePair __returnValue = new com.earthview.world.graphic.Node.StringChildNodePair(CreatedWhenConstruct.CWC_NotToCreate, "StringChildNodePair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Node.StringChildNodePair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringChildNodePair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.Node.StringChildNodePair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Node.StringChildNodePair __returnValue = new com.earthview.world.graphic.Node.StringChildNodePair(CreatedWhenConstruct.CWC_NotToCreate, "StringChildNodePair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Node.StringChildNodePair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringChildNodePair");
			}
			return __returnValue;
		}
		public ConstChildNodeIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ConstChildNodeIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ConstChildNodeIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ConstChildNodeIterator obj = null;
 			if(baseObj instanceof ConstChildNodeIterator)
			{
				obj = (ConstChildNodeIterator)baseObj;
			} else {
				obj = new ConstChildNodeIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ConstChildNodeIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ConstChildNodeIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ConstChildNodeIterator emptyInstance = new ConstChildNodeIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 节点监听器
	 */
	public static class NodeListener extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CNode::CNodeListener", new NodeListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CNode::JCNodeListenerProxy", new NodeListenerClassFactory());
		}

		/**
		 * 构造函数
		 * @param  
		 */
		public NodeListener() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCNodeListenerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.Node$NodeListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  void nodeUpdated_CNode_callback(long pNode)
		{
			com.earthview.world.graphic.Node pNodeParamValue = (pNode == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
			if(pNodeParamValue != null)
			{
			pNodeParamValue.setDelegate(true);
			pNodeParamValue.setInstancePointer(new InstancePointer(pNode));
			IClassFactory pNodeParamValueClassFactory = GlobalClassFactoryMap.get(pNodeParamValue.getCppInstanceTypeName());
			if (pNodeParamValueClassFactory != null)
			{
				pNodeParamValue.setDelegate(true);
				pNodeParamValue = (com.earthview.world.graphic.Node)pNodeParamValueClassFactory.create();
				pNodeParamValue.setDelegate(true);
				pNodeParamValue.setInstancePointer(new InstancePointer(pNode));
			}
			}
			nodeUpdated(pNodeParamValue);
		}

		native private void nodeUpdated_CNode(long pNativeObject, long pNode);
		/**
		 * 更新节点
		 * @param pNode 
		 */
		public void nodeUpdated(com.earthview.world.graphic.Node pNode)
		{
			long pNodeParamValue = (pNode == null ? 0L : pNode.nativeObject.pointer);
			nodeUpdated_CNode(this.nativeObject.pointer, pNodeParamValue);
		}
		native private void nodeUpdated_CNode_NoVirtual(long pNativeObject, long pNode);
		protected void nodeUpdated_NoVirtual(com.earthview.world.graphic.Node pNode)
		{
			long pNodeParamValue = (pNode == null ? 0L : pNode.nativeObject.pointer);
			nodeUpdated_CNode_NoVirtual(this.nativeObject.pointer, pNodeParamValue);
		}

		protected  void nodeDestroyed_CNode_callback(long pNode)
		{
			com.earthview.world.graphic.Node pNodeParamValue = (pNode == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
			if(pNodeParamValue != null)
			{
			pNodeParamValue.setDelegate(true);
			pNodeParamValue.setInstancePointer(new InstancePointer(pNode));
			IClassFactory pNodeParamValueClassFactory = GlobalClassFactoryMap.get(pNodeParamValue.getCppInstanceTypeName());
			if (pNodeParamValueClassFactory != null)
			{
				pNodeParamValue.setDelegate(true);
				pNodeParamValue = (com.earthview.world.graphic.Node)pNodeParamValueClassFactory.create();
				pNodeParamValue.setDelegate(true);
				pNodeParamValue.setInstancePointer(new InstancePointer(pNode));
			}
			}
			nodeDestroyed(pNodeParamValue);
		}

		native private void nodeDestroyed_CNode(long pNativeObject, long pNode);
		/**
		 * 销毁节点
		 * @param pNode 
		 */
		public void nodeDestroyed(com.earthview.world.graphic.Node pNode)
		{
			long pNodeParamValue = (pNode == null ? 0L : pNode.nativeObject.pointer);
			nodeDestroyed_CNode(this.nativeObject.pointer, pNodeParamValue);
		}
		native private void nodeDestroyed_CNode_NoVirtual(long pNativeObject, long pNode);
		protected void nodeDestroyed_NoVirtual(com.earthview.world.graphic.Node pNode)
		{
			long pNodeParamValue = (pNode == null ? 0L : pNode.nativeObject.pointer);
			nodeDestroyed_CNode_NoVirtual(this.nativeObject.pointer, pNodeParamValue);
		}

		protected  void nodeAttached_CNode_callback(long pNode)
		{
			com.earthview.world.graphic.Node pNodeParamValue = (pNode == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
			if(pNodeParamValue != null)
			{
			pNodeParamValue.setDelegate(true);
			pNodeParamValue.setInstancePointer(new InstancePointer(pNode));
			IClassFactory pNodeParamValueClassFactory = GlobalClassFactoryMap.get(pNodeParamValue.getCppInstanceTypeName());
			if (pNodeParamValueClassFactory != null)
			{
				pNodeParamValue.setDelegate(true);
				pNodeParamValue = (com.earthview.world.graphic.Node)pNodeParamValueClassFactory.create();
				pNodeParamValue.setDelegate(true);
				pNodeParamValue.setInstancePointer(new InstancePointer(pNode));
			}
			}
			nodeAttached(pNodeParamValue);
		}

		native private void nodeAttached_CNode(long pNativeObject, long pNode);
		/**
		 * 挂接节点
		 * @param pNode 
		 */
		public void nodeAttached(com.earthview.world.graphic.Node pNode)
		{
			long pNodeParamValue = (pNode == null ? 0L : pNode.nativeObject.pointer);
			nodeAttached_CNode(this.nativeObject.pointer, pNodeParamValue);
		}
		native private void nodeAttached_CNode_NoVirtual(long pNativeObject, long pNode);
		protected void nodeAttached_NoVirtual(com.earthview.world.graphic.Node pNode)
		{
			long pNodeParamValue = (pNode == null ? 0L : pNode.nativeObject.pointer);
			nodeAttached_CNode_NoVirtual(this.nativeObject.pointer, pNodeParamValue);
		}

		protected  void nodeDetached_CNode_callback(long pNode)
		{
			com.earthview.world.graphic.Node pNodeParamValue = (pNode == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
			if(pNodeParamValue != null)
			{
			pNodeParamValue.setDelegate(true);
			pNodeParamValue.setInstancePointer(new InstancePointer(pNode));
			IClassFactory pNodeParamValueClassFactory = GlobalClassFactoryMap.get(pNodeParamValue.getCppInstanceTypeName());
			if (pNodeParamValueClassFactory != null)
			{
				pNodeParamValue.setDelegate(true);
				pNodeParamValue = (com.earthview.world.graphic.Node)pNodeParamValueClassFactory.create();
				pNodeParamValue.setDelegate(true);
				pNodeParamValue.setInstancePointer(new InstancePointer(pNode));
			}
			}
			nodeDetached(pNodeParamValue);
		}

		native private void nodeDetached_CNode(long pNativeObject, long pNode);
		/**
		 * 脱钩节点
		 * @param pNode 
		 */
		public void nodeDetached(com.earthview.world.graphic.Node pNode)
		{
			long pNodeParamValue = (pNode == null ? 0L : pNode.nativeObject.pointer);
			nodeDetached_CNode(this.nativeObject.pointer, pNodeParamValue);
		}
		native private void nodeDetached_CNode_NoVirtual(long pNativeObject, long pNode);
		protected void nodeDetached_NoVirtual(com.earthview.world.graphic.Node pNode)
		{
			long pNodeParamValue = (pNode == null ? 0L : pNode.nativeObject.pointer);
			nodeDetached_CNode_NoVirtual(this.nativeObject.pointer, pNodeParamValue);
		}

		protected  void nodeMoved_CNode_callback(long pNode)
		{
			com.earthview.world.graphic.Node pNodeParamValue = (pNode == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
			if(pNodeParamValue != null)
			{
			pNodeParamValue.setDelegate(true);
			pNodeParamValue.setInstancePointer(new InstancePointer(pNode));
			IClassFactory pNodeParamValueClassFactory = GlobalClassFactoryMap.get(pNodeParamValue.getCppInstanceTypeName());
			if (pNodeParamValueClassFactory != null)
			{
				pNodeParamValue.setDelegate(true);
				pNodeParamValue = (com.earthview.world.graphic.Node)pNodeParamValueClassFactory.create();
				pNodeParamValue.setDelegate(true);
				pNodeParamValue.setInstancePointer(new InstancePointer(pNode));
			}
			}
			nodeMoved(pNodeParamValue);
		}

		native private void nodeMoved_CNode(long pNativeObject, long pNode);
		/**
		 * 移动节点
		 * @param pNode 
		 */
		public void nodeMoved(com.earthview.world.graphic.Node pNode)
		{
			long pNodeParamValue = (pNode == null ? 0L : pNode.nativeObject.pointer);
			nodeMoved_CNode(this.nativeObject.pointer, pNodeParamValue);
		}
		native private void nodeMoved_CNode_NoVirtual(long pNativeObject, long pNode);
		protected void nodeMoved_NoVirtual(com.earthview.world.graphic.Node pNode)
		{
			long pNodeParamValue = (pNode == null ? 0L : pNode.nativeObject.pointer);
			nodeMoved_CNode_NoVirtual(this.nativeObject.pointer, pNodeParamValue);
		}

		public NodeListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public NodeListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_nodeUpdated_CNode(long pNativeObject, String method);
		native protected void register_nodeDestroyed_CNode(long pNativeObject, String method);
		native protected void register_nodeAttached_CNode(long pNativeObject, String method);
		native protected void register_nodeDetached_CNode(long pNativeObject, String method);
		native protected void register_nodeMoved_CNode(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_nodeUpdated_CNode(this.nativeObject.pointer, "nodeUpdated_CNode_callback");
				this.register_nodeDestroyed_CNode(this.nativeObject.pointer, "nodeDestroyed_CNode_callback");
				this.register_nodeAttached_CNode(this.nativeObject.pointer, "nodeAttached_CNode_callback");
				this.register_nodeDetached_CNode(this.nativeObject.pointer, "nodeDetached_CNode_callback");
				this.register_nodeMoved_CNode(this.nativeObject.pointer, "nodeMoved_CNode_callback");
			}
		}
		
		public static NodeListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			NodeListener obj = null;
 			if(baseObj instanceof NodeListener)
			{
				obj = (NodeListener)baseObj;
			} else {
				obj = new NodeListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CNodeListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class NodeListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			NodeListener emptyInstance = new NodeListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 节点监听器容器
	 */
	public static class NodeListenerVector extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CNode::NodeListenerVector", new NodeListenerVectorClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public NodeListenerVector() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("NodeListenerVector", null);
		}

		native private void push_back_CNodeListener(long pNativeObject, long ref_t);
		/**
		 * 在容器末尾添加元素
		 * @param t 元素值
		 */
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.Node.NodeListener> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_CNodeListener(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		/**
		 * 删除最后元素
		 * @param  
		 */
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		/**
		 * 返回第一个元素
		 * @param  
		 * @return 第一个元素值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.Node.NodeListener> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.Node.NodeListener> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Node.NodeListener>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		/**
		 * 返回最后元素
		 * @param  
		 * @return 最后元素值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.Node.NodeListener> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.Node.NodeListener> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Node.NodeListener>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_uint32(long pNativeObject, long pos);
		/**
		 * 返回中间某元素
		 * @param  
		 * @return 元素值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.Node.NodeListener> at(long pos)
		{
			long posParamValue = pos;
			long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
			NativeObjectPointer<com.earthview.world.graphic.Node.NodeListener> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Node.NodeListener>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_CNodeListener(long pNativeObject, long pos, long ref_t);
		/**
		 * 插入元素
		 * @param pos 插入位置
		 * @param t 元素值
		 */
		public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.Node.NodeListener> ref_t)
		{
			long posParamValue = pos;
			long ref_tParamValue = ref_t.nativeObject.pointer;
			insert_ev_uint32_CNodeListener(this.nativeObject.pointer, posParamValue, ref_tParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 判断容器是否为空
		 * @param  
		 * @return 为空返回true，否则false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回容器中元素数量大小
		 * @param  
		 * @return 返回容器中元素数量大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		/**
		 * 改变容器大小
		 * @param newSize 容器大小
		 */
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清空容器
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		public NodeListenerVector(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public NodeListenerVector(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static NodeListenerVector fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			NodeListenerVector obj = null;
 			if(baseObj instanceof NodeListenerVector)
			{
				obj = (NodeListenerVector)baseObj;
			} else {
				obj = new NodeListenerVector(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "NodeListenerVector");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class NodeListenerVectorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			NodeListenerVector emptyInstance = new NodeListenerVector(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 内部类显示调试渲染节点信息
	 */
	public static class DebugRenderable extends com.earthview.world.graphic.Renderable {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CNode::CDebugRenderable", new DebugRenderableClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CNode::JCDebugRenderableProxy", new DebugRenderableClassFactory());
		}

		/**
		 * 构造函数
		 * @param parent 
		 */
		public DebugRenderable(com.earthview.world.graphic.Node ref_parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			Create("JCDebugRenderableProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.Node$DebugRenderable".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private long getMaterial_void(long pNativeObject);
		/**
		 * 获得材质信息
		 * @param  
		 * @return 材质
		 */
		public com.earthview.world.graphic.MaterialPtr getMaterial()
		{
			long returnValue = getMaterial_void(this.nativeObject.pointer);
			com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
			}
			return __returnValue;
		}
		native private long getMaterial_void_NoVirtual(long pNativeObject);
		protected com.earthview.world.graphic.MaterialPtr getMaterial_NoVirtual()
		{
			long returnValue = getMaterial_void_NoVirtual(this.nativeObject.pointer);
			com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
			}
			return __returnValue;
		}

		native private void getRenderOperation_CRenderOperation(long pNativeObject, long op);
		/**
		 * 获得渲染操作信息
		 * @param op 渲染操作
		 */
		public void getRenderOperation(com.earthview.world.graphic.RenderOperation op)
		{
			long opParamValue = op.nativeObject.pointer;
			getRenderOperation_CRenderOperation(this.nativeObject.pointer, opParamValue);
		}
		native private void getRenderOperation_CRenderOperation_NoVirtual(long pNativeObject, long op);
		protected void getRenderOperation_NoVirtual(com.earthview.world.graphic.RenderOperation op)
		{
			long opParamValue = op.nativeObject.pointer;
			getRenderOperation_CRenderOperation_NoVirtual(this.nativeObject.pointer, opParamValue);
		}

		native private void getWorldTransforms_CMatrix4(long pNativeObject, long xform);
		/**
		 * 获得世界坐标转换矩阵信息
		 * @param xform 四维矩阵
		 */
		public void getWorldTransforms(com.earthview.world.spatial.math.Matrix4 xform)
		{
			long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
			getWorldTransforms_CMatrix4(this.nativeObject.pointer, xformParamValue);
		}
		native private void getWorldTransforms_CMatrix4_NoVirtual(long pNativeObject, long xform);
		protected void getWorldTransforms_NoVirtual(com.earthview.world.spatial.math.Matrix4 xform)
		{
			long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
			getWorldTransforms_CMatrix4_NoVirtual(this.nativeObject.pointer, xformParamValue);
		}

		native private double getSquaredViewDepth_CCamera(long pNativeObject, long cam);
		/**
		 * 获得摄像机视场的大小
		 * @param cam 摄像机视场
		 * @return 视场大小的值
		 */
		public double getSquaredViewDepth(com.earthview.world.graphic.Camera cam)
		{
			long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
			double returnValue = getSquaredViewDepth_CCamera(this.nativeObject.pointer, camParamValue);
			return returnValue;
		}
		native private double getSquaredViewDepth_CCamera_NoVirtual(long pNativeObject, long cam);
		protected double getSquaredViewDepth_NoVirtual(com.earthview.world.graphic.Camera cam)
		{
			long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
			double returnValue = getSquaredViewDepth_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
			return returnValue;
		}

		native private long getLights_void(long pNativeObject);
		/**
		 * 获得光照信息
		 * @param  
		 * @return 光照列表
		 */
		public com.earthview.world.graphic.LightList getLights()
		{
			long returnValue = getLights_void(this.nativeObject.pointer);
			com.earthview.world.graphic.LightList __returnValue = new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate, "LightList");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.LightList)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "LightList");
			}
			return __returnValue;
		}
		native private long getLights_void_NoVirtual(long pNativeObject);
		protected com.earthview.world.graphic.LightList getLights_NoVirtual()
		{
			long returnValue = getLights_void_NoVirtual(this.nativeObject.pointer);
			com.earthview.world.graphic.LightList __returnValue = new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate, "LightList");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.LightList)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "LightList");
			}
			return __returnValue;
		}

		native private void setScaling_Real(long pNativeObject, double s);
		/**
		 * 设置比例
		 * @param  
		 */
		public void setScaling(double s)
		{
			double sParamValue = s;
			setScaling_Real(this.nativeObject.pointer, sParamValue);
		}
		public DebugRenderable(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public DebugRenderable(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
		 * 获得渲染对象的世界变换矩阵的数量
		 * @param  
		 */
		public int getNumWorldTransforms()
		{
			return super.getNumWorldTransforms_NoVirtual();
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
		
		public static DebugRenderable fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			DebugRenderable obj = null;
 			if(baseObj instanceof DebugRenderable)
			{
				obj = (DebugRenderable)baseObj;
			} else {
				obj = new DebugRenderable(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CDebugRenderable");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class DebugRenderableClassFactory implements IClassFactory {
		public BaseObject create()
		{
			DebugRenderable emptyInstance = new DebugRenderable(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  void _updateFromParent_void_callback()
	{
		_updateFromParent();
	}

	native private void _updateFromParent_void(long pNativeObject);
	///public:
	///	mutable EarthView::World::Spatial::Math::CMatrix4 mMatrix;
	///mutable EarthView::World::Spatial::Math::CMatrix4 mDerivedMatrix;
	public void _updateFromParent()
	{
		_updateFromParent_void(this.nativeObject.pointer);
	}
	native private void _updateFromParent_void_NoVirtual(long pNativeObject);
	protected void _updateFromParent_NoVirtual()
	{
		_updateFromParent_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setParent_CNode_callback(long ref_parent)
	{
		com.earthview.world.graphic.Node ref_parentParamValue = (ref_parent == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_parentParamValue != null)
		{
		ref_parentParamValue.setDelegate(true);
		ref_parentParamValue.setInstancePointer(new InstancePointer(ref_parent));
		IClassFactory ref_parentParamValueClassFactory = GlobalClassFactoryMap.get(ref_parentParamValue.getCppInstanceTypeName());
		if (ref_parentParamValueClassFactory != null)
		{
			ref_parentParamValue.setDelegate(true);
			ref_parentParamValue = (com.earthview.world.graphic.Node)ref_parentParamValueClassFactory.create();
			ref_parentParamValue.setDelegate(true);
			ref_parentParamValue.setInstancePointer(new InstancePointer(ref_parent));
		}
		}
		setParent(ref_parentParamValue);
	}

	native private void setParent_CNode(long pNativeObject, long ref_parent);
	//// Only available internally - notification of parent.
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

	protected  void updateFromParentImpl_void_callback()
	{
		updateFromParentImpl();
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

	protected  long createChildImpl_void_callback()
	{
		com.earthview.world.graphic.Node returnValue = createChildImpl();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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

	protected  long createChildImpl_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.Node returnValue = createChildImpl(nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
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

	protected  void notifyMoved_void_callback()
	{
		notifyMoved();
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
	 * 构造函数定义一个节点名称
	 * @param  
	 */
	public Node() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCNodeProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Node".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param name 分配的节点名称
	 */
	public Node(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCNodeProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Node".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getName_void(long pNativeObject);
	/**
	 * 获取节点名称
	 * @param  
	 * @return 返回节点名称
	 */
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	protected  long getParent_void_callback()
	{
		com.earthview.world.graphic.Node returnValue = getParent();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getParent_void(long pNativeObject);
	/**
	 * 获取父节点如果父节点为空，表示此节点为根节点
	 * @param  
	 * @return 父节点名称
	 */
	public com.earthview.world.graphic.Node getParent()
	{
		long returnValue = getParent_void(this.nativeObject.pointer);
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
	native private long getParent_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Node getParent_NoVirtual()
	{
		long returnValue = getParent_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getOrientation_void_callback()
	{
		com.earthview.world.spatial.math.Quaternion returnValue = getOrientation();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getOrientation_void(long pNativeObject);
	/**
	 * 获取四元数表示此节点的方向
	 * @param  
	 * @return 四元数值
	 */
	public com.earthview.world.spatial.math.Quaternion getOrientation()
	{
		long returnValue = getOrientation_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate, "CQuaternion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private long getOrientation_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Quaternion getOrientation_NoVirtual()
	{
		long returnValue = getOrientation_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate, "CQuaternion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}

	protected  void setOrientation_CQuaternion_callback(long q)
	{
		com.earthview.world.spatial.math.Quaternion qParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		qParamValue.setDelegate(true);
		qParamValue.setInstancePointer(new InstancePointer(q));
		IClassFactory qParamValueClassFactory = GlobalClassFactoryMap.get(qParamValue.getCppInstanceTypeName());
		if (qParamValueClassFactory != null)
		{
			qParamValue.setDelegate(true);
			qParamValue = (com.earthview.world.spatial.math.Quaternion)qParamValueClassFactory.create();
			qParamValue.setDelegate(true);
			qParamValue.setInstancePointer(new InstancePointer(q));
		}
		setOrientation(qParamValue);
	}

	native private void setOrientation_CQuaternion(long pNativeObject, long q);
	/**
	 * 设置方向通过四元数设置
	 * @param q 四元数值，节点旋转围绕着节点原点
	 */
	public void setOrientation(com.earthview.world.spatial.math.Quaternion q)
	{
		long qParamValue = q.nativeObject.pointer;
		setOrientation_CQuaternion(this.nativeObject.pointer, qParamValue);
	}
	native private void setOrientation_CQuaternion_NoVirtual(long pNativeObject, long q);
	protected void setOrientation_NoVirtual(com.earthview.world.spatial.math.Quaternion q)
	{
		long qParamValue = q.nativeObject.pointer;
		setOrientation_CQuaternion_NoVirtual(this.nativeObject.pointer, qParamValue);
	}

	protected  void setOrientation_CQuaternion_ev_bool_callback(long q, boolean notify)
	{
		com.earthview.world.spatial.math.Quaternion qParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		qParamValue.setDelegate(true);
		qParamValue.setInstancePointer(new InstancePointer(q));
		IClassFactory qParamValueClassFactory = GlobalClassFactoryMap.get(qParamValue.getCppInstanceTypeName());
		if (qParamValueClassFactory != null)
		{
			qParamValue.setDelegate(true);
			qParamValue = (com.earthview.world.spatial.math.Quaternion)qParamValueClassFactory.create();
			qParamValue.setDelegate(true);
			qParamValue.setInstancePointer(new InstancePointer(q));
		}
		boolean notifyParamValue = notify;
		setOrientation(qParamValue, notifyParamValue);
	}

	native private void setOrientation_CQuaternion_ev_bool(long pNativeObject, long q, boolean notify);
	public void setOrientation(com.earthview.world.spatial.math.Quaternion q, boolean notify)
	{
		long qParamValue = q.nativeObject.pointer;
		boolean notifyParamValue = notify;
		setOrientation_CQuaternion_ev_bool(this.nativeObject.pointer, qParamValue, notifyParamValue);
	}
	native private void setOrientation_CQuaternion_ev_bool_NoVirtual(long pNativeObject, long q, boolean notify);
	protected void setOrientation_NoVirtual(com.earthview.world.spatial.math.Quaternion q, boolean notify)
	{
		long qParamValue = q.nativeObject.pointer;
		boolean notifyParamValue = notify;
		setOrientation_CQuaternion_ev_bool_NoVirtual(this.nativeObject.pointer, qParamValue, notifyParamValue);
	}

	protected  void setOrientation_Real_Real_Real_Real_callback(double w, double x, double y, double z)
	{
		double wParamValue = w;
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setOrientation(wParamValue, xParamValue, yParamValue, zParamValue);
	}

	native private void setOrientation_Real_Real_Real_Real(long pNativeObject, double w, double x, double y, double z);
	/**
	 * 设置方向通过四元数设置
	 * @param w 从四个实数构造
	 * @param x 从四个实数构造
	 * @param y 从四个实数构造
	 * @param z 从四个实数构造
	 */
	public void setOrientation(double w, double x, double y, double z)
	{
		double wParamValue = w;
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setOrientation_Real_Real_Real_Real(this.nativeObject.pointer, wParamValue, xParamValue, yParamValue, zParamValue);
	}
	native private void setOrientation_Real_Real_Real_Real_NoVirtual(long pNativeObject, double w, double x, double y, double z);
	protected void setOrientation_NoVirtual(double w, double x, double y, double z)
	{
		double wParamValue = w;
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setOrientation_Real_Real_Real_Real_NoVirtual(this.nativeObject.pointer, wParamValue, xParamValue, yParamValue, zParamValue);
	}

	protected  void setOrientation_Real_Real_Real_Real_ev_bool_callback(double w, double x, double y, double z, boolean notify)
	{
		double wParamValue = w;
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		boolean notifyParamValue = notify;
		setOrientation(wParamValue, xParamValue, yParamValue, zParamValue, notifyParamValue);
	}

	native private void setOrientation_Real_Real_Real_Real_ev_bool(long pNativeObject, double w, double x, double y, double z, boolean notify);
	public void setOrientation(double w, double x, double y, double z, boolean notify)
	{
		double wParamValue = w;
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		boolean notifyParamValue = notify;
		setOrientation_Real_Real_Real_Real_ev_bool(this.nativeObject.pointer, wParamValue, xParamValue, yParamValue, zParamValue, notifyParamValue);
	}
	native private void setOrientation_Real_Real_Real_Real_ev_bool_NoVirtual(long pNativeObject, double w, double x, double y, double z, boolean notify);
	protected void setOrientation_NoVirtual(double w, double x, double y, double z, boolean notify)
	{
		double wParamValue = w;
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		boolean notifyParamValue = notify;
		setOrientation_Real_Real_Real_Real_ev_bool_NoVirtual(this.nativeObject.pointer, wParamValue, xParamValue, yParamValue, zParamValue, notifyParamValue);
	}

	protected  void resetOrientation_void_callback()
	{
		resetOrientation();
	}

	native private void resetOrientation_void(long pNativeObject);
	/**
	 * 重置四元数本地坐标轴为世界坐标轴，不旋转
	 * @param  
	 */
	public void resetOrientation()
	{
		resetOrientation_void(this.nativeObject.pointer);
	}
	native private void resetOrientation_void_NoVirtual(long pNativeObject);
	protected void resetOrientation_NoVirtual()
	{
		resetOrientation_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setPosition_CVector3_callback(long pos)
	{
		com.earthview.world.spatial.math.Vector3 posParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		posParamValue.setDelegate(true);
		posParamValue.setInstancePointer(new InstancePointer(pos));
		IClassFactory posParamValueClassFactory = GlobalClassFactoryMap.get(posParamValue.getCppInstanceTypeName());
		if (posParamValueClassFactory != null)
		{
			posParamValue.setDelegate(true);
			posParamValue = (com.earthview.world.spatial.math.Vector3)posParamValueClassFactory.create();
			posParamValue.setDelegate(true);
			posParamValue.setInstancePointer(new InstancePointer(pos));
		}
		setPosition(posParamValue);
	}

	native private void setPosition_CVector3(long pNativeObject, long pos);
	/**
	 * 设置节点位置
	 * @param pos 三维向量
	 */
	public void setPosition(com.earthview.world.spatial.math.Vector3 pos)
	{
		long posParamValue = pos.nativeObject.pointer;
		setPosition_CVector3(this.nativeObject.pointer, posParamValue);
	}
	native private void setPosition_CVector3_NoVirtual(long pNativeObject, long pos);
	protected void setPosition_NoVirtual(com.earthview.world.spatial.math.Vector3 pos)
	{
		long posParamValue = pos.nativeObject.pointer;
		setPosition_CVector3_NoVirtual(this.nativeObject.pointer, posParamValue);
	}

	protected  void setPosition_CVector3_ev_bool_callback(long pos, boolean notify)
	{
		com.earthview.world.spatial.math.Vector3 posParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		posParamValue.setDelegate(true);
		posParamValue.setInstancePointer(new InstancePointer(pos));
		IClassFactory posParamValueClassFactory = GlobalClassFactoryMap.get(posParamValue.getCppInstanceTypeName());
		if (posParamValueClassFactory != null)
		{
			posParamValue.setDelegate(true);
			posParamValue = (com.earthview.world.spatial.math.Vector3)posParamValueClassFactory.create();
			posParamValue.setDelegate(true);
			posParamValue.setInstancePointer(new InstancePointer(pos));
		}
		boolean notifyParamValue = notify;
		setPosition(posParamValue, notifyParamValue);
	}

	native private void setPosition_CVector3_ev_bool(long pNativeObject, long pos, boolean notify);
	public void setPosition(com.earthview.world.spatial.math.Vector3 pos, boolean notify)
	{
		long posParamValue = pos.nativeObject.pointer;
		boolean notifyParamValue = notify;
		setPosition_CVector3_ev_bool(this.nativeObject.pointer, posParamValue, notifyParamValue);
	}
	native private void setPosition_CVector3_ev_bool_NoVirtual(long pNativeObject, long pos, boolean notify);
	protected void setPosition_NoVirtual(com.earthview.world.spatial.math.Vector3 pos, boolean notify)
	{
		long posParamValue = pos.nativeObject.pointer;
		boolean notifyParamValue = notify;
		setPosition_CVector3_ev_bool_NoVirtual(this.nativeObject.pointer, posParamValue, notifyParamValue);
	}

	protected  void setPosition_Real_Real_Real_callback(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setPosition(xParamValue, yParamValue, zParamValue);
	}

	native private void setPosition_Real_Real_Real(long pNativeObject, double x, double y, double z);
	/**
	 * 设置节点位置
	 * @param x 从三个实数构造三维向量
	 * @param y 从三个实数构造三维向量
	 * @param z 从三个实数构造三维向量
	 */
	public void setPosition(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setPosition_Real_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void setPosition_Real_Real_Real_NoVirtual(long pNativeObject, double x, double y, double z);
	protected void setPosition_NoVirtual(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setPosition_Real_Real_Real_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}

	protected  void setPosition_Real_Real_Real_ev_bool_callback(double x, double y, double z, boolean notify)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		boolean notifyParamValue = notify;
		setPosition(xParamValue, yParamValue, zParamValue, notifyParamValue);
	}

	native private void setPosition_Real_Real_Real_ev_bool(long pNativeObject, double x, double y, double z, boolean notify);
	public void setPosition(double x, double y, double z, boolean notify)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		boolean notifyParamValue = notify;
		setPosition_Real_Real_Real_ev_bool(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue, notifyParamValue);
	}
	native private void setPosition_Real_Real_Real_ev_bool_NoVirtual(long pNativeObject, double x, double y, double z, boolean notify);
	protected void setPosition_NoVirtual(double x, double y, double z, boolean notify)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		boolean notifyParamValue = notify;
		setPosition_Real_Real_Real_ev_bool_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue, notifyParamValue);
	}

	protected  long getPosition_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getPosition();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getPosition_void(long pNativeObject);
	/**
	 * 获得节点位置
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getPosition()
	{
		long returnValue = getPosition_void(this.nativeObject.pointer);
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
	native private long getPosition_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getPosition_NoVirtual()
	{
		long returnValue = getPosition_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setScale_CVector3_callback(long scale)
	{
		com.earthview.world.spatial.math.Vector3 scaleParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		scaleParamValue.setDelegate(true);
		scaleParamValue.setInstancePointer(new InstancePointer(scale));
		IClassFactory scaleParamValueClassFactory = GlobalClassFactoryMap.get(scaleParamValue.getCppInstanceTypeName());
		if (scaleParamValueClassFactory != null)
		{
			scaleParamValue.setDelegate(true);
			scaleParamValue = (com.earthview.world.spatial.math.Vector3)scaleParamValueClassFactory.create();
			scaleParamValue.setDelegate(true);
			scaleParamValue.setInstancePointer(new InstancePointer(scale));
		}
		setScale(scaleParamValue);
	}

	native private void setScale_CVector3(long pNativeObject, long scale);
	/**
	 * 设置缩放因子
	 * @param scale 
	 */
	public void setScale(com.earthview.world.spatial.math.Vector3 scale)
	{
		long scaleParamValue = scale.nativeObject.pointer;
		setScale_CVector3(this.nativeObject.pointer, scaleParamValue);
	}
	native private void setScale_CVector3_NoVirtual(long pNativeObject, long scale);
	protected void setScale_NoVirtual(com.earthview.world.spatial.math.Vector3 scale)
	{
		long scaleParamValue = scale.nativeObject.pointer;
		setScale_CVector3_NoVirtual(this.nativeObject.pointer, scaleParamValue);
	}

	protected  void setScale_CVector3_ev_bool_callback(long scale, boolean notify)
	{
		com.earthview.world.spatial.math.Vector3 scaleParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		scaleParamValue.setDelegate(true);
		scaleParamValue.setInstancePointer(new InstancePointer(scale));
		IClassFactory scaleParamValueClassFactory = GlobalClassFactoryMap.get(scaleParamValue.getCppInstanceTypeName());
		if (scaleParamValueClassFactory != null)
		{
			scaleParamValue.setDelegate(true);
			scaleParamValue = (com.earthview.world.spatial.math.Vector3)scaleParamValueClassFactory.create();
			scaleParamValue.setDelegate(true);
			scaleParamValue.setInstancePointer(new InstancePointer(scale));
		}
		boolean notifyParamValue = notify;
		setScale(scaleParamValue, notifyParamValue);
	}

	native private void setScale_CVector3_ev_bool(long pNativeObject, long scale, boolean notify);
	public void setScale(com.earthview.world.spatial.math.Vector3 scale, boolean notify)
	{
		long scaleParamValue = scale.nativeObject.pointer;
		boolean notifyParamValue = notify;
		setScale_CVector3_ev_bool(this.nativeObject.pointer, scaleParamValue, notifyParamValue);
	}
	native private void setScale_CVector3_ev_bool_NoVirtual(long pNativeObject, long scale, boolean notify);
	protected void setScale_NoVirtual(com.earthview.world.spatial.math.Vector3 scale, boolean notify)
	{
		long scaleParamValue = scale.nativeObject.pointer;
		boolean notifyParamValue = notify;
		setScale_CVector3_ev_bool_NoVirtual(this.nativeObject.pointer, scaleParamValue, notifyParamValue);
	}

	protected  void setScale_Real_Real_Real_callback(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setScale(xParamValue, yParamValue, zParamValue);
	}

	native private void setScale_Real_Real_Real(long pNativeObject, double x, double y, double z);
	/**
	 * 设置缩放因子
	 * @param x 实数
	 * @param y 实数
	 * @param z 实数
	 */
	public void setScale(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setScale_Real_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void setScale_Real_Real_Real_NoVirtual(long pNativeObject, double x, double y, double z);
	protected void setScale_NoVirtual(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setScale_Real_Real_Real_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}

	protected  void setScale_Real_Real_Real_ev_bool_callback(double x, double y, double z, boolean notify)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		boolean notifyParamValue = notify;
		setScale(xParamValue, yParamValue, zParamValue, notifyParamValue);
	}

	native private void setScale_Real_Real_Real_ev_bool(long pNativeObject, double x, double y, double z, boolean notify);
	public void setScale(double x, double y, double z, boolean notify)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		boolean notifyParamValue = notify;
		setScale_Real_Real_Real_ev_bool(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue, notifyParamValue);
	}
	native private void setScale_Real_Real_Real_ev_bool_NoVirtual(long pNativeObject, double x, double y, double z, boolean notify);
	protected void setScale_NoVirtual(double x, double y, double z, boolean notify)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		boolean notifyParamValue = notify;
		setScale_Real_Real_Real_ev_bool_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue, notifyParamValue);
	}

	protected  long getScale_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getScale();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getScale_void(long pNativeObject);
	/// <summary>
	///获取缩放因子
	/// </summary>
	/// <param name></param>
	/// <returns>缩放因子</returns>
	public com.earthview.world.spatial.math.Vector3 getScale()
	{
		long returnValue = getScale_void(this.nativeObject.pointer);
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
	native private long getScale_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getScale_NoVirtual()
	{
		long returnValue = getScale_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setInheritOrientation_ev_bool_callback(boolean inherit)
	{
		boolean inheritParamValue = inherit;
		setInheritOrientation(inheritParamValue);
	}

	native private void setInheritOrientation_ev_bool(long pNativeObject, boolean inherit);
	/**
	 * 设置是否继承父节点的方向属性
	 * @param inherit 继承
	 */
	public void setInheritOrientation(boolean inherit)
	{
		boolean inheritParamValue = inherit;
		setInheritOrientation_ev_bool(this.nativeObject.pointer, inheritParamValue);
	}
	native private void setInheritOrientation_ev_bool_NoVirtual(long pNativeObject, boolean inherit);
	protected void setInheritOrientation_NoVirtual(boolean inherit)
	{
		boolean inheritParamValue = inherit;
		setInheritOrientation_ev_bool_NoVirtual(this.nativeObject.pointer, inheritParamValue);
	}

	protected  boolean getInheritOrientation_void_callback()
	{
		boolean returnValue = getInheritOrientation();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getInheritOrientation_void(long pNativeObject);
	/**
	 * 判断是否继承父节点的方向属性
	 * @param  
	 * @return 继承返回true，不继承则否则返回false
	 */
	public boolean getInheritOrientation()
	{
		boolean returnValue = getInheritOrientation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getInheritOrientation_void_NoVirtual(long pNativeObject);
	protected boolean getInheritOrientation_NoVirtual()
	{
		boolean returnValue = getInheritOrientation_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setInheritScale_ev_bool_callback(boolean inherit)
	{
		boolean inheritParamValue = inherit;
		setInheritScale(inheritParamValue);
	}

	native private void setInheritScale_ev_bool(long pNativeObject, boolean inherit);
	/**
	 * 设置是否继承父节点的缩放因子
	 * @param inherit 继承
	 */
	public void setInheritScale(boolean inherit)
	{
		boolean inheritParamValue = inherit;
		setInheritScale_ev_bool(this.nativeObject.pointer, inheritParamValue);
	}
	native private void setInheritScale_ev_bool_NoVirtual(long pNativeObject, boolean inherit);
	protected void setInheritScale_NoVirtual(boolean inherit)
	{
		boolean inheritParamValue = inherit;
		setInheritScale_ev_bool_NoVirtual(this.nativeObject.pointer, inheritParamValue);
	}

	protected  boolean getInheritScale_void_callback()
	{
		boolean returnValue = getInheritScale();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getInheritScale_void(long pNativeObject);
	/**
	 * 判断是否继承父节点的缩放因子
	 * @param  
	 * @return 继承返回true，不继承则否则返回false
	 */
	public boolean getInheritScale()
	{
		boolean returnValue = getInheritScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getInheritScale_void_NoVirtual(long pNativeObject);
	protected boolean getInheritScale_NoVirtual()
	{
		boolean returnValue = getInheritScale_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void scale_CVector3_callback(long scale)
	{
		com.earthview.world.spatial.math.Vector3 scaleParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		scaleParamValue.setDelegate(true);
		scaleParamValue.setInstancePointer(new InstancePointer(scale));
		IClassFactory scaleParamValueClassFactory = GlobalClassFactoryMap.get(scaleParamValue.getCppInstanceTypeName());
		if (scaleParamValueClassFactory != null)
		{
			scaleParamValue.setDelegate(true);
			scaleParamValue = (com.earthview.world.spatial.math.Vector3)scaleParamValueClassFactory.create();
			scaleParamValue.setDelegate(true);
			scaleParamValue.setInstancePointer(new InstancePointer(scale));
		}
		scale(scaleParamValue);
	}

	native private void scale_CVector3(long pNativeObject, long scale);
	/**
	 * 缩放因子
	 * @param scale 缩放向量
	 */
	public void scale(com.earthview.world.spatial.math.Vector3 scale)
	{
		long scaleParamValue = scale.nativeObject.pointer;
		scale_CVector3(this.nativeObject.pointer, scaleParamValue);
	}
	native private void scale_CVector3_NoVirtual(long pNativeObject, long scale);
	protected void scale_NoVirtual(com.earthview.world.spatial.math.Vector3 scale)
	{
		long scaleParamValue = scale.nativeObject.pointer;
		scale_CVector3_NoVirtual(this.nativeObject.pointer, scaleParamValue);
	}

	protected  void scale_Real_Real_Real_callback(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		scale(xParamValue, yParamValue, zParamValue);
	}

	native private void scale_Real_Real_Real(long pNativeObject, double x, double y, double z);
	/**
	 * 缩放因子
	 * @param x 常数
	 * @param y 常数
	 * @param z 常数
	 */
	public void scale(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		scale_Real_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void scale_Real_Real_Real_NoVirtual(long pNativeObject, double x, double y, double z);
	protected void scale_NoVirtual(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		scale_Real_Real_Real_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}

	protected  void translate_CVector3_TransformSpace_callback(long d, int relativeTo)
	{
		com.earthview.world.spatial.math.Vector3 dParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		dParamValue.setDelegate(true);
		dParamValue.setInstancePointer(new InstancePointer(d));
		IClassFactory dParamValueClassFactory = GlobalClassFactoryMap.get(dParamValue.getCppInstanceTypeName());
		if (dParamValueClassFactory != null)
		{
			dParamValue.setDelegate(true);
			dParamValue = (com.earthview.world.spatial.math.Vector3)dParamValueClassFactory.create();
			dParamValue.setDelegate(true);
			dParamValue.setInstancePointer(new InstancePointer(d));
		}
		com.earthview.world.graphic.Node.TransformSpace relativeToParamValue = com.earthview.world.graphic.Node.TransformSpace.toEnum(relativeTo);
		translate(dParamValue, relativeToParamValue);
	}

	native private void translate_CVector3_TransformSpace(long pNativeObject, long d, int relativeTo);
	/**
	 * 平移节点
	 * @param d 三维矢量
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void translate(com.earthview.world.spatial.math.Vector3 d, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		long dParamValue = d.nativeObject.pointer;
		int relativeToParamValue = relativeTo.getValue();
		translate_CVector3_TransformSpace(this.nativeObject.pointer, dParamValue, relativeToParamValue);
	}
	native private void translate_CVector3_TransformSpace_NoVirtual(long pNativeObject, long d, int relativeTo);
	protected void translate_NoVirtual(com.earthview.world.spatial.math.Vector3 d, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		long dParamValue = d.nativeObject.pointer;
		int relativeToParamValue = relativeTo.getValue();
		translate_CVector3_TransformSpace_NoVirtual(this.nativeObject.pointer, dParamValue, relativeToParamValue);
	}

	protected  void translate_CVector3_callback(long d)
	{
		com.earthview.world.spatial.math.Vector3 dParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		dParamValue.setDelegate(true);
		dParamValue.setInstancePointer(new InstancePointer(d));
		IClassFactory dParamValueClassFactory = GlobalClassFactoryMap.get(dParamValue.getCppInstanceTypeName());
		if (dParamValueClassFactory != null)
		{
			dParamValue.setDelegate(true);
			dParamValue = (com.earthview.world.spatial.math.Vector3)dParamValueClassFactory.create();
			dParamValue.setDelegate(true);
			dParamValue.setInstancePointer(new InstancePointer(d));
		}
		translate(dParamValue);
	}

	native private void translate_CVector3(long pNativeObject, long d);
	/**
	 * 平移节点
	 * @param d 三维矢量
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void translate(com.earthview.world.spatial.math.Vector3 d)
	{
		long dParamValue = d.nativeObject.pointer;
		translate_CVector3(this.nativeObject.pointer, dParamValue);
	}
	native private void translate_CVector3_NoVirtual(long pNativeObject, long d);
	protected void translate_NoVirtual(com.earthview.world.spatial.math.Vector3 d)
	{
		long dParamValue = d.nativeObject.pointer;
		translate_CVector3_NoVirtual(this.nativeObject.pointer, dParamValue);
	}

	protected  void translate_Real_Real_Real_TransformSpace_callback(double x, double y, double z, int relativeTo)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		com.earthview.world.graphic.Node.TransformSpace relativeToParamValue = com.earthview.world.graphic.Node.TransformSpace.toEnum(relativeTo);
		translate(xParamValue, yParamValue, zParamValue, relativeToParamValue);
	}

	native private void translate_Real_Real_Real_TransformSpace(long pNativeObject, double x, double y, double z, int relativeTo);
	/**
	 * 平移节点
	 * @param x 实数
	 * @param y 实数
	 * @param z 实数
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void translate(double x, double y, double z, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		int relativeToParamValue = relativeTo.getValue();
		translate_Real_Real_Real_TransformSpace(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue, relativeToParamValue);
	}
	native private void translate_Real_Real_Real_TransformSpace_NoVirtual(long pNativeObject, double x, double y, double z, int relativeTo);
	protected void translate_NoVirtual(double x, double y, double z, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		int relativeToParamValue = relativeTo.getValue();
		translate_Real_Real_Real_TransformSpace_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue, relativeToParamValue);
	}

	protected  void translate_Real_Real_Real_callback(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		translate(xParamValue, yParamValue, zParamValue);
	}

	native private void translate_Real_Real_Real(long pNativeObject, double x, double y, double z);
	/**
	 * 平移节点
	 * @param x 实数
	 * @param y 实数
	 * @param z 实数
	 */
	public void translate(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		translate_Real_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void translate_Real_Real_Real_NoVirtual(long pNativeObject, double x, double y, double z);
	protected void translate_NoVirtual(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		translate_Real_Real_Real_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}

	protected  void translate_CMatrix3_CVector3_TransformSpace_callback(long axes, long move, int relativeTo)
	{
		com.earthview.world.spatial.math.Matrix3 axesParamValue = new com.earthview.world.spatial.math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
		axesParamValue.setDelegate(true);
		axesParamValue.setInstancePointer(new InstancePointer(axes));
		IClassFactory axesParamValueClassFactory = GlobalClassFactoryMap.get(axesParamValue.getCppInstanceTypeName());
		if (axesParamValueClassFactory != null)
		{
			axesParamValue.setDelegate(true);
			axesParamValue = (com.earthview.world.spatial.math.Matrix3)axesParamValueClassFactory.create();
			axesParamValue.setDelegate(true);
			axesParamValue.setInstancePointer(new InstancePointer(axes));
		}
		com.earthview.world.spatial.math.Vector3 moveParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		moveParamValue.setDelegate(true);
		moveParamValue.setInstancePointer(new InstancePointer(move));
		IClassFactory moveParamValueClassFactory = GlobalClassFactoryMap.get(moveParamValue.getCppInstanceTypeName());
		if (moveParamValueClassFactory != null)
		{
			moveParamValue.setDelegate(true);
			moveParamValue = (com.earthview.world.spatial.math.Vector3)moveParamValueClassFactory.create();
			moveParamValue.setDelegate(true);
			moveParamValue.setInstancePointer(new InstancePointer(move));
		}
		com.earthview.world.graphic.Node.TransformSpace relativeToParamValue = com.earthview.world.graphic.Node.TransformSpace.toEnum(relativeTo);
		translate(axesParamValue, moveParamValue, relativeToParamValue);
	}

	native private void translate_CMatrix3_CVector3_TransformSpace(long pNativeObject, long axes, long move, int relativeTo);
	/**
	 * 平移节点
	 * @param axes 三维矩阵
	 * @param move 三维矢量
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void translate(com.earthview.world.spatial.math.Matrix3 axes, com.earthview.world.spatial.math.Vector3 move, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		long axesParamValue = axes.nativeObject.pointer;
		long moveParamValue = move.nativeObject.pointer;
		int relativeToParamValue = relativeTo.getValue();
		translate_CMatrix3_CVector3_TransformSpace(this.nativeObject.pointer, axesParamValue, moveParamValue, relativeToParamValue);
	}
	native private void translate_CMatrix3_CVector3_TransformSpace_NoVirtual(long pNativeObject, long axes, long move, int relativeTo);
	protected void translate_NoVirtual(com.earthview.world.spatial.math.Matrix3 axes, com.earthview.world.spatial.math.Vector3 move, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		long axesParamValue = axes.nativeObject.pointer;
		long moveParamValue = move.nativeObject.pointer;
		int relativeToParamValue = relativeTo.getValue();
		translate_CMatrix3_CVector3_TransformSpace_NoVirtual(this.nativeObject.pointer, axesParamValue, moveParamValue, relativeToParamValue);
	}

	protected  void translate_CMatrix3_CVector3_callback(long axes, long move)
	{
		com.earthview.world.spatial.math.Matrix3 axesParamValue = new com.earthview.world.spatial.math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
		axesParamValue.setDelegate(true);
		axesParamValue.setInstancePointer(new InstancePointer(axes));
		IClassFactory axesParamValueClassFactory = GlobalClassFactoryMap.get(axesParamValue.getCppInstanceTypeName());
		if (axesParamValueClassFactory != null)
		{
			axesParamValue.setDelegate(true);
			axesParamValue = (com.earthview.world.spatial.math.Matrix3)axesParamValueClassFactory.create();
			axesParamValue.setDelegate(true);
			axesParamValue.setInstancePointer(new InstancePointer(axes));
		}
		com.earthview.world.spatial.math.Vector3 moveParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		moveParamValue.setDelegate(true);
		moveParamValue.setInstancePointer(new InstancePointer(move));
		IClassFactory moveParamValueClassFactory = GlobalClassFactoryMap.get(moveParamValue.getCppInstanceTypeName());
		if (moveParamValueClassFactory != null)
		{
			moveParamValue.setDelegate(true);
			moveParamValue = (com.earthview.world.spatial.math.Vector3)moveParamValueClassFactory.create();
			moveParamValue.setDelegate(true);
			moveParamValue.setInstancePointer(new InstancePointer(move));
		}
		translate(axesParamValue, moveParamValue);
	}

	native private void translate_CMatrix3_CVector3(long pNativeObject, long axes, long move);
	/**
	 * 平移节点
	 * @param axes 三维矩阵
	 * @param move 三维矢量
	 */
	public void translate(com.earthview.world.spatial.math.Matrix3 axes, com.earthview.world.spatial.math.Vector3 move)
	{
		long axesParamValue = axes.nativeObject.pointer;
		long moveParamValue = move.nativeObject.pointer;
		translate_CMatrix3_CVector3(this.nativeObject.pointer, axesParamValue, moveParamValue);
	}
	native private void translate_CMatrix3_CVector3_NoVirtual(long pNativeObject, long axes, long move);
	protected void translate_NoVirtual(com.earthview.world.spatial.math.Matrix3 axes, com.earthview.world.spatial.math.Vector3 move)
	{
		long axesParamValue = axes.nativeObject.pointer;
		long moveParamValue = move.nativeObject.pointer;
		translate_CMatrix3_CVector3_NoVirtual(this.nativeObject.pointer, axesParamValue, moveParamValue);
	}

	protected  void translate_CMatrix3_Real_Real_Real_TransformSpace_callback(long axes, double x, double y, double z, int relativeTo)
	{
		com.earthview.world.spatial.math.Matrix3 axesParamValue = new com.earthview.world.spatial.math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
		axesParamValue.setDelegate(true);
		axesParamValue.setInstancePointer(new InstancePointer(axes));
		IClassFactory axesParamValueClassFactory = GlobalClassFactoryMap.get(axesParamValue.getCppInstanceTypeName());
		if (axesParamValueClassFactory != null)
		{
			axesParamValue.setDelegate(true);
			axesParamValue = (com.earthview.world.spatial.math.Matrix3)axesParamValueClassFactory.create();
			axesParamValue.setDelegate(true);
			axesParamValue.setInstancePointer(new InstancePointer(axes));
		}
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		com.earthview.world.graphic.Node.TransformSpace relativeToParamValue = com.earthview.world.graphic.Node.TransformSpace.toEnum(relativeTo);
		translate(axesParamValue, xParamValue, yParamValue, zParamValue, relativeToParamValue);
	}

	native private void translate_CMatrix3_Real_Real_Real_TransformSpace(long pNativeObject, long axes, double x, double y, double z, int relativeTo);
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
		long axesParamValue = axes.nativeObject.pointer;
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		int relativeToParamValue = relativeTo.getValue();
		translate_CMatrix3_Real_Real_Real_TransformSpace(this.nativeObject.pointer, axesParamValue, xParamValue, yParamValue, zParamValue, relativeToParamValue);
	}
	native private void translate_CMatrix3_Real_Real_Real_TransformSpace_NoVirtual(long pNativeObject, long axes, double x, double y, double z, int relativeTo);
	protected void translate_NoVirtual(com.earthview.world.spatial.math.Matrix3 axes, double x, double y, double z, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		long axesParamValue = axes.nativeObject.pointer;
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		int relativeToParamValue = relativeTo.getValue();
		translate_CMatrix3_Real_Real_Real_TransformSpace_NoVirtual(this.nativeObject.pointer, axesParamValue, xParamValue, yParamValue, zParamValue, relativeToParamValue);
	}

	protected  void translate_CMatrix3_Real_Real_Real_callback(long axes, double x, double y, double z)
	{
		com.earthview.world.spatial.math.Matrix3 axesParamValue = new com.earthview.world.spatial.math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
		axesParamValue.setDelegate(true);
		axesParamValue.setInstancePointer(new InstancePointer(axes));
		IClassFactory axesParamValueClassFactory = GlobalClassFactoryMap.get(axesParamValue.getCppInstanceTypeName());
		if (axesParamValueClassFactory != null)
		{
			axesParamValue.setDelegate(true);
			axesParamValue = (com.earthview.world.spatial.math.Matrix3)axesParamValueClassFactory.create();
			axesParamValue.setDelegate(true);
			axesParamValue.setInstancePointer(new InstancePointer(axes));
		}
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		translate(axesParamValue, xParamValue, yParamValue, zParamValue);
	}

	native private void translate_CMatrix3_Real_Real_Real(long pNativeObject, long axes, double x, double y, double z);
	/**
	 * 平移节点
	 * @param axes 三维矩阵
	 * @param x 实数
	 * @param y 实数
	 * @param z 实数
	 */
	public void translate(com.earthview.world.spatial.math.Matrix3 axes, double x, double y, double z)
	{
		long axesParamValue = axes.nativeObject.pointer;
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		translate_CMatrix3_Real_Real_Real(this.nativeObject.pointer, axesParamValue, xParamValue, yParamValue, zParamValue);
	}
	native private void translate_CMatrix3_Real_Real_Real_NoVirtual(long pNativeObject, long axes, double x, double y, double z);
	protected void translate_NoVirtual(com.earthview.world.spatial.math.Matrix3 axes, double x, double y, double z)
	{
		long axesParamValue = axes.nativeObject.pointer;
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		translate_CMatrix3_Real_Real_Real_NoVirtual(this.nativeObject.pointer, axesParamValue, xParamValue, yParamValue, zParamValue);
	}

	protected  void roll_CRadian_TransformSpace_callback(long angle, int relativeTo)
	{
		com.earthview.world.spatial.math.Radian angleParamValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		angleParamValue.setDelegate(true);
		angleParamValue.setInstancePointer(new InstancePointer(angle));
		IClassFactory angleParamValueClassFactory = GlobalClassFactoryMap.get(angleParamValue.getCppInstanceTypeName());
		if (angleParamValueClassFactory != null)
		{
			angleParamValue.setDelegate(true);
			angleParamValue = (com.earthview.world.spatial.math.Radian)angleParamValueClassFactory.create();
			angleParamValue.setDelegate(true);
			angleParamValue.setInstancePointer(new InstancePointer(angle));
		}
		com.earthview.world.graphic.Node.TransformSpace relativeToParamValue = com.earthview.world.graphic.Node.TransformSpace.toEnum(relativeTo);
		roll(angleParamValue, relativeToParamValue);
	}

	native private void roll_CRadian_TransformSpace(long pNativeObject, long angle, int relativeTo);
	/**
	 * 沿Z轴旋转节点
	 * @param angle 弧度，角度
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void roll(com.earthview.world.spatial.math.Radian angle, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		long angleParamValue = angle.nativeObject.pointer;
		int relativeToParamValue = relativeTo.getValue();
		roll_CRadian_TransformSpace(this.nativeObject.pointer, angleParamValue, relativeToParamValue);
	}
	native private void roll_CRadian_TransformSpace_NoVirtual(long pNativeObject, long angle, int relativeTo);
	protected void roll_NoVirtual(com.earthview.world.spatial.math.Radian angle, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		long angleParamValue = angle.nativeObject.pointer;
		int relativeToParamValue = relativeTo.getValue();
		roll_CRadian_TransformSpace_NoVirtual(this.nativeObject.pointer, angleParamValue, relativeToParamValue);
	}

	protected  void roll_CRadian_callback(long angle)
	{
		com.earthview.world.spatial.math.Radian angleParamValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		angleParamValue.setDelegate(true);
		angleParamValue.setInstancePointer(new InstancePointer(angle));
		IClassFactory angleParamValueClassFactory = GlobalClassFactoryMap.get(angleParamValue.getCppInstanceTypeName());
		if (angleParamValueClassFactory != null)
		{
			angleParamValue.setDelegate(true);
			angleParamValue = (com.earthview.world.spatial.math.Radian)angleParamValueClassFactory.create();
			angleParamValue.setDelegate(true);
			angleParamValue.setInstancePointer(new InstancePointer(angle));
		}
		roll(angleParamValue);
	}

	native private void roll_CRadian(long pNativeObject, long angle);
	public void roll(com.earthview.world.spatial.math.Radian angle)
	{
		long angleParamValue = angle.nativeObject.pointer;
		roll_CRadian(this.nativeObject.pointer, angleParamValue);
	}
	native private void roll_CRadian_NoVirtual(long pNativeObject, long angle);
	protected void roll_NoVirtual(com.earthview.world.spatial.math.Radian angle)
	{
		long angleParamValue = angle.nativeObject.pointer;
		roll_CRadian_NoVirtual(this.nativeObject.pointer, angleParamValue);
	}

	protected  void pitch_CRadian_TransformSpace_callback(long angle, int relativeTo)
	{
		com.earthview.world.spatial.math.Radian angleParamValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		angleParamValue.setDelegate(true);
		angleParamValue.setInstancePointer(new InstancePointer(angle));
		IClassFactory angleParamValueClassFactory = GlobalClassFactoryMap.get(angleParamValue.getCppInstanceTypeName());
		if (angleParamValueClassFactory != null)
		{
			angleParamValue.setDelegate(true);
			angleParamValue = (com.earthview.world.spatial.math.Radian)angleParamValueClassFactory.create();
			angleParamValue.setDelegate(true);
			angleParamValue.setInstancePointer(new InstancePointer(angle));
		}
		com.earthview.world.graphic.Node.TransformSpace relativeToParamValue = com.earthview.world.graphic.Node.TransformSpace.toEnum(relativeTo);
		pitch(angleParamValue, relativeToParamValue);
	}

	native private void pitch_CRadian_TransformSpace(long pNativeObject, long angle, int relativeTo);
	/**
	 * 沿X轴旋转节点
	 * @param angle 弧度，角度
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void pitch(com.earthview.world.spatial.math.Radian angle, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		long angleParamValue = angle.nativeObject.pointer;
		int relativeToParamValue = relativeTo.getValue();
		pitch_CRadian_TransformSpace(this.nativeObject.pointer, angleParamValue, relativeToParamValue);
	}
	native private void pitch_CRadian_TransformSpace_NoVirtual(long pNativeObject, long angle, int relativeTo);
	protected void pitch_NoVirtual(com.earthview.world.spatial.math.Radian angle, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		long angleParamValue = angle.nativeObject.pointer;
		int relativeToParamValue = relativeTo.getValue();
		pitch_CRadian_TransformSpace_NoVirtual(this.nativeObject.pointer, angleParamValue, relativeToParamValue);
	}

	protected  void pitch_CRadian_callback(long angle)
	{
		com.earthview.world.spatial.math.Radian angleParamValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		angleParamValue.setDelegate(true);
		angleParamValue.setInstancePointer(new InstancePointer(angle));
		IClassFactory angleParamValueClassFactory = GlobalClassFactoryMap.get(angleParamValue.getCppInstanceTypeName());
		if (angleParamValueClassFactory != null)
		{
			angleParamValue.setDelegate(true);
			angleParamValue = (com.earthview.world.spatial.math.Radian)angleParamValueClassFactory.create();
			angleParamValue.setDelegate(true);
			angleParamValue.setInstancePointer(new InstancePointer(angle));
		}
		pitch(angleParamValue);
	}

	native private void pitch_CRadian(long pNativeObject, long angle);
	public void pitch(com.earthview.world.spatial.math.Radian angle)
	{
		long angleParamValue = angle.nativeObject.pointer;
		pitch_CRadian(this.nativeObject.pointer, angleParamValue);
	}
	native private void pitch_CRadian_NoVirtual(long pNativeObject, long angle);
	protected void pitch_NoVirtual(com.earthview.world.spatial.math.Radian angle)
	{
		long angleParamValue = angle.nativeObject.pointer;
		pitch_CRadian_NoVirtual(this.nativeObject.pointer, angleParamValue);
	}

	protected  void yaw_CRadian_TransformSpace_callback(long angle, int relativeTo)
	{
		com.earthview.world.spatial.math.Radian angleParamValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		angleParamValue.setDelegate(true);
		angleParamValue.setInstancePointer(new InstancePointer(angle));
		IClassFactory angleParamValueClassFactory = GlobalClassFactoryMap.get(angleParamValue.getCppInstanceTypeName());
		if (angleParamValueClassFactory != null)
		{
			angleParamValue.setDelegate(true);
			angleParamValue = (com.earthview.world.spatial.math.Radian)angleParamValueClassFactory.create();
			angleParamValue.setDelegate(true);
			angleParamValue.setInstancePointer(new InstancePointer(angle));
		}
		com.earthview.world.graphic.Node.TransformSpace relativeToParamValue = com.earthview.world.graphic.Node.TransformSpace.toEnum(relativeTo);
		yaw(angleParamValue, relativeToParamValue);
	}

	native private void yaw_CRadian_TransformSpace(long pNativeObject, long angle, int relativeTo);
	/**
	 * 沿Y轴旋转节点
	 * @param angle 弧度，角度
	 * @param relativeTo 选择哪种空间关系转换，共三种
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

	protected  void yaw_CRadian_callback(long angle)
	{
		com.earthview.world.spatial.math.Radian angleParamValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		angleParamValue.setDelegate(true);
		angleParamValue.setInstancePointer(new InstancePointer(angle));
		IClassFactory angleParamValueClassFactory = GlobalClassFactoryMap.get(angleParamValue.getCppInstanceTypeName());
		if (angleParamValueClassFactory != null)
		{
			angleParamValue.setDelegate(true);
			angleParamValue = (com.earthview.world.spatial.math.Radian)angleParamValueClassFactory.create();
			angleParamValue.setDelegate(true);
			angleParamValue.setInstancePointer(new InstancePointer(angle));
		}
		yaw(angleParamValue);
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

	protected  void rotate_CVector3_CRadian_TransformSpace_callback(long axis, long angle, int relativeTo)
	{
		com.earthview.world.spatial.math.Vector3 axisParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		axisParamValue.setDelegate(true);
		axisParamValue.setInstancePointer(new InstancePointer(axis));
		IClassFactory axisParamValueClassFactory = GlobalClassFactoryMap.get(axisParamValue.getCppInstanceTypeName());
		if (axisParamValueClassFactory != null)
		{
			axisParamValue.setDelegate(true);
			axisParamValue = (com.earthview.world.spatial.math.Vector3)axisParamValueClassFactory.create();
			axisParamValue.setDelegate(true);
			axisParamValue.setInstancePointer(new InstancePointer(axis));
		}
		com.earthview.world.spatial.math.Radian angleParamValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		angleParamValue.setDelegate(true);
		angleParamValue.setInstancePointer(new InstancePointer(angle));
		IClassFactory angleParamValueClassFactory = GlobalClassFactoryMap.get(angleParamValue.getCppInstanceTypeName());
		if (angleParamValueClassFactory != null)
		{
			angleParamValue.setDelegate(true);
			angleParamValue = (com.earthview.world.spatial.math.Radian)angleParamValueClassFactory.create();
			angleParamValue.setDelegate(true);
			angleParamValue.setInstancePointer(new InstancePointer(angle));
		}
		com.earthview.world.graphic.Node.TransformSpace relativeToParamValue = com.earthview.world.graphic.Node.TransformSpace.toEnum(relativeTo);
		rotate(axisParamValue, angleParamValue, relativeToParamValue);
	}

	native private void rotate_CVector3_CRadian_TransformSpace(long pNativeObject, long axis, long angle, int relativeTo);
	/**
	 * 根据指定的坐标轴旋转节点
	 * @param axis 三维矩阵
	 * @param angle 角度，弧度
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void rotate(com.earthview.world.spatial.math.Vector3 axis, com.earthview.world.spatial.math.Radian angle, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		long axisParamValue = axis.nativeObject.pointer;
		long angleParamValue = angle.nativeObject.pointer;
		int relativeToParamValue = relativeTo.getValue();
		rotate_CVector3_CRadian_TransformSpace(this.nativeObject.pointer, axisParamValue, angleParamValue, relativeToParamValue);
	}
	native private void rotate_CVector3_CRadian_TransformSpace_NoVirtual(long pNativeObject, long axis, long angle, int relativeTo);
	protected void rotate_NoVirtual(com.earthview.world.spatial.math.Vector3 axis, com.earthview.world.spatial.math.Radian angle, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		long axisParamValue = axis.nativeObject.pointer;
		long angleParamValue = angle.nativeObject.pointer;
		int relativeToParamValue = relativeTo.getValue();
		rotate_CVector3_CRadian_TransformSpace_NoVirtual(this.nativeObject.pointer, axisParamValue, angleParamValue, relativeToParamValue);
	}

	protected  void rotate_CVector3_CRadian_callback(long axis, long angle)
	{
		com.earthview.world.spatial.math.Vector3 axisParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		axisParamValue.setDelegate(true);
		axisParamValue.setInstancePointer(new InstancePointer(axis));
		IClassFactory axisParamValueClassFactory = GlobalClassFactoryMap.get(axisParamValue.getCppInstanceTypeName());
		if (axisParamValueClassFactory != null)
		{
			axisParamValue.setDelegate(true);
			axisParamValue = (com.earthview.world.spatial.math.Vector3)axisParamValueClassFactory.create();
			axisParamValue.setDelegate(true);
			axisParamValue.setInstancePointer(new InstancePointer(axis));
		}
		com.earthview.world.spatial.math.Radian angleParamValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		angleParamValue.setDelegate(true);
		angleParamValue.setInstancePointer(new InstancePointer(angle));
		IClassFactory angleParamValueClassFactory = GlobalClassFactoryMap.get(angleParamValue.getCppInstanceTypeName());
		if (angleParamValueClassFactory != null)
		{
			angleParamValue.setDelegate(true);
			angleParamValue = (com.earthview.world.spatial.math.Radian)angleParamValueClassFactory.create();
			angleParamValue.setDelegate(true);
			angleParamValue.setInstancePointer(new InstancePointer(angle));
		}
		rotate(axisParamValue, angleParamValue);
	}

	native private void rotate_CVector3_CRadian(long pNativeObject, long axis, long angle);
	public void rotate(com.earthview.world.spatial.math.Vector3 axis, com.earthview.world.spatial.math.Radian angle)
	{
		long axisParamValue = axis.nativeObject.pointer;
		long angleParamValue = angle.nativeObject.pointer;
		rotate_CVector3_CRadian(this.nativeObject.pointer, axisParamValue, angleParamValue);
	}
	native private void rotate_CVector3_CRadian_NoVirtual(long pNativeObject, long axis, long angle);
	protected void rotate_NoVirtual(com.earthview.world.spatial.math.Vector3 axis, com.earthview.world.spatial.math.Radian angle)
	{
		long axisParamValue = axis.nativeObject.pointer;
		long angleParamValue = angle.nativeObject.pointer;
		rotate_CVector3_CRadian_NoVirtual(this.nativeObject.pointer, axisParamValue, angleParamValue);
	}

	protected  void rotate_CQuaternion_TransformSpace_callback(long q, int relativeTo)
	{
		com.earthview.world.spatial.math.Quaternion qParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		qParamValue.setDelegate(true);
		qParamValue.setInstancePointer(new InstancePointer(q));
		IClassFactory qParamValueClassFactory = GlobalClassFactoryMap.get(qParamValue.getCppInstanceTypeName());
		if (qParamValueClassFactory != null)
		{
			qParamValue.setDelegate(true);
			qParamValue = (com.earthview.world.spatial.math.Quaternion)qParamValueClassFactory.create();
			qParamValue.setDelegate(true);
			qParamValue.setInstancePointer(new InstancePointer(q));
		}
		com.earthview.world.graphic.Node.TransformSpace relativeToParamValue = com.earthview.world.graphic.Node.TransformSpace.toEnum(relativeTo);
		rotate(qParamValue, relativeToParamValue);
	}

	native private void rotate_CQuaternion_TransformSpace(long pNativeObject, long q, int relativeTo);
	/**
	 * 使用指定的四元数旋转节点
	 * @param q 四元数
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void rotate(com.earthview.world.spatial.math.Quaternion q, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		long qParamValue = q.nativeObject.pointer;
		int relativeToParamValue = relativeTo.getValue();
		rotate_CQuaternion_TransformSpace(this.nativeObject.pointer, qParamValue, relativeToParamValue);
	}
	native private void rotate_CQuaternion_TransformSpace_NoVirtual(long pNativeObject, long q, int relativeTo);
	protected void rotate_NoVirtual(com.earthview.world.spatial.math.Quaternion q, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		long qParamValue = q.nativeObject.pointer;
		int relativeToParamValue = relativeTo.getValue();
		rotate_CQuaternion_TransformSpace_NoVirtual(this.nativeObject.pointer, qParamValue, relativeToParamValue);
	}

	protected  void rotate_CQuaternion_callback(long q)
	{
		com.earthview.world.spatial.math.Quaternion qParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		qParamValue.setDelegate(true);
		qParamValue.setInstancePointer(new InstancePointer(q));
		IClassFactory qParamValueClassFactory = GlobalClassFactoryMap.get(qParamValue.getCppInstanceTypeName());
		if (qParamValueClassFactory != null)
		{
			qParamValue.setDelegate(true);
			qParamValue = (com.earthview.world.spatial.math.Quaternion)qParamValueClassFactory.create();
			qParamValue.setDelegate(true);
			qParamValue.setInstancePointer(new InstancePointer(q));
		}
		rotate(qParamValue);
	}

	native private void rotate_CQuaternion(long pNativeObject, long q);
	public void rotate(com.earthview.world.spatial.math.Quaternion q)
	{
		long qParamValue = q.nativeObject.pointer;
		rotate_CQuaternion(this.nativeObject.pointer, qParamValue);
	}
	native private void rotate_CQuaternion_NoVirtual(long pNativeObject, long q);
	protected void rotate_NoVirtual(com.earthview.world.spatial.math.Quaternion q)
	{
		long qParamValue = q.nativeObject.pointer;
		rotate_CQuaternion_NoVirtual(this.nativeObject.pointer, qParamValue);
	}

	protected  void setMatrix_CMatrix4_callback(long mat)
	{
		com.earthview.world.spatial.math.Matrix4 matParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		matParamValue.setDelegate(true);
		matParamValue.setInstancePointer(new InstancePointer(mat));
		IClassFactory matParamValueClassFactory = GlobalClassFactoryMap.get(matParamValue.getCppInstanceTypeName());
		if (matParamValueClassFactory != null)
		{
			matParamValue.setDelegate(true);
			matParamValue = (com.earthview.world.spatial.math.Matrix4)matParamValueClassFactory.create();
			matParamValue.setDelegate(true);
			matParamValue.setInstancePointer(new InstancePointer(mat));
		}
		setMatrix(matParamValue);
	}

	native private void setMatrix_CMatrix4(long pNativeObject, long mat);
	/**
	 * 设置世界变换矩阵
	 * @param mat 世界变换矩阵
	 */
	public void setMatrix(com.earthview.world.spatial.math.Matrix4 mat)
	{
		long matParamValue = mat.nativeObject.pointer;
		setMatrix_CMatrix4(this.nativeObject.pointer, matParamValue);
	}
	native private void setMatrix_CMatrix4_NoVirtual(long pNativeObject, long mat);
	protected void setMatrix_NoVirtual(com.earthview.world.spatial.math.Matrix4 mat)
	{
		long matParamValue = mat.nativeObject.pointer;
		setMatrix_CMatrix4_NoVirtual(this.nativeObject.pointer, matParamValue);
	}

	protected  long getMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getMatrix_void(long pNativeObject);
	/**
	 * 获得世界变换矩阵
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getMatrix()
	{
		long returnValue = getMatrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private long getMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getMatrix_NoVirtual()
	{
		long returnValue = getMatrix_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}

	protected  void setLocalMatrix_CMatrix4_callback(long mat)
	{
		com.earthview.world.spatial.math.Matrix4 matParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		matParamValue.setDelegate(true);
		matParamValue.setInstancePointer(new InstancePointer(mat));
		IClassFactory matParamValueClassFactory = GlobalClassFactoryMap.get(matParamValue.getCppInstanceTypeName());
		if (matParamValueClassFactory != null)
		{
			matParamValue.setDelegate(true);
			matParamValue = (com.earthview.world.spatial.math.Matrix4)matParamValueClassFactory.create();
			matParamValue.setDelegate(true);
			matParamValue.setInstancePointer(new InstancePointer(mat));
		}
		setLocalMatrix(matParamValue);
	}

	native private void setLocalMatrix_CMatrix4(long pNativeObject, long mat);
	/**
	 * 设置相对于父节点的局部变换矩阵
	 * @param mat 局部变换矩阵
	 */
	public void setLocalMatrix(com.earthview.world.spatial.math.Matrix4 mat)
	{
		long matParamValue = mat.nativeObject.pointer;
		setLocalMatrix_CMatrix4(this.nativeObject.pointer, matParamValue);
	}
	native private void setLocalMatrix_CMatrix4_NoVirtual(long pNativeObject, long mat);
	protected void setLocalMatrix_NoVirtual(com.earthview.world.spatial.math.Matrix4 mat)
	{
		long matParamValue = mat.nativeObject.pointer;
		setLocalMatrix_CMatrix4_NoVirtual(this.nativeObject.pointer, matParamValue);
	}

	protected  long getLocalMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getLocalMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLocalMatrix_void(long pNativeObject);
	/**
	 * 获得相对于父节点的局部变换矩阵
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getLocalMatrix()
	{
		long returnValue = getLocalMatrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private long getLocalMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getLocalMatrix_NoVirtual()
	{
		long returnValue = getLocalMatrix_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}

	protected  long getLocalAxes_void_callback()
	{
		com.earthview.world.spatial.math.Matrix3 returnValue = getLocalAxes();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLocalAxes_void(long pNativeObject);
	/**
	 * 获取本地坐标轴获取一个矩阵，其列是基于当前坐标系，它的节点继承他的父类。
	 */
	public com.earthview.world.spatial.math.Matrix3 getLocalAxes()
	{
		long returnValue = getLocalAxes_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix3 __returnValue = new com.earthview.world.spatial.math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		}
		return __returnValue;
	}
	native private long getLocalAxes_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix3 getLocalAxes_NoVirtual()
	{
		long returnValue = getLocalAxes_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix3 __returnValue = new com.earthview.world.spatial.math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		}
		return __returnValue;
	}

	protected  long createChild_CVector3_CQuaternion_callback(long translate, long rotate)
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
		com.earthview.world.graphic.Node returnValue = createChild(translateParamValue, rotateParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createChild_CVector3_CQuaternion(long pNativeObject, long translate, long rotate);
	/**
	 * 创建子节点创建一个新的节点作为当前节点的子节点
	 * @param translate 平移量
	 * @param rotate 旋转四元数
	 * @return 节点
	 */
	public com.earthview.world.graphic.Node createChild(com.earthview.world.spatial.math.Vector3 translate, com.earthview.world.spatial.math.Quaternion rotate)
	{
		long translateParamValue = translate.nativeObject.pointer;
		long rotateParamValue = rotate.nativeObject.pointer;
		long returnValue = createChild_CVector3_CQuaternion(this.nativeObject.pointer, translateParamValue, rotateParamValue);
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
	native private long createChild_CVector3_CQuaternion_NoVirtual(long pNativeObject, long translate, long rotate);
	protected com.earthview.world.graphic.Node createChild_NoVirtual(com.earthview.world.spatial.math.Vector3 translate, com.earthview.world.spatial.math.Quaternion rotate)
	{
		long translateParamValue = translate.nativeObject.pointer;
		long rotateParamValue = rotate.nativeObject.pointer;
		long returnValue = createChild_CVector3_CQuaternion_NoVirtual(this.nativeObject.pointer, translateParamValue, rotateParamValue);
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

	protected  long createChild_CVector3_callback(long translate)
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
		com.earthview.world.graphic.Node returnValue = createChild(translateParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createChild_CVector3(long pNativeObject, long translate);
	public com.earthview.world.graphic.Node createChild(com.earthview.world.spatial.math.Vector3 translate)
	{
		long translateParamValue = translate.nativeObject.pointer;
		long returnValue = createChild_CVector3(this.nativeObject.pointer, translateParamValue);
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
	native private long createChild_CVector3_NoVirtual(long pNativeObject, long translate);
	protected com.earthview.world.graphic.Node createChild_NoVirtual(com.earthview.world.spatial.math.Vector3 translate)
	{
		long translateParamValue = translate.nativeObject.pointer;
		long returnValue = createChild_CVector3_NoVirtual(this.nativeObject.pointer, translateParamValue);
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

	protected  long createChild_void_callback()
	{
		com.earthview.world.graphic.Node returnValue = createChild();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createChild_void(long pNativeObject);
	public com.earthview.world.graphic.Node createChild()
	{
		long returnValue = createChild_void(this.nativeObject.pointer);
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
	native private long createChild_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Node createChild_NoVirtual()
	{
		long returnValue = createChild_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long createChild_EVString_CVector3_CQuaternion_callback(String name, long translate, long rotate)
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
		com.earthview.world.graphic.Node returnValue = createChild(nameParamValue, translateParamValue, rotateParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createChild_EVString_CVector3_CQuaternion(long pNativeObject, String name, long translate, long rotate);
	/**
	 * 创建子节点创建一个新的节点作为当前节点的子节点
	 * @param name 名称
	 * @param translate 平移量
	 * @param rotate 旋转四元数
	 * @return 节点
	 */
	public com.earthview.world.graphic.Node createChild(String name, com.earthview.world.spatial.math.Vector3 translate, com.earthview.world.spatial.math.Quaternion rotate)
	{
		String nameParamValue = name;
		long translateParamValue = translate.nativeObject.pointer;
		long rotateParamValue = rotate.nativeObject.pointer;
		long returnValue = createChild_EVString_CVector3_CQuaternion(this.nativeObject.pointer, nameParamValue, translateParamValue, rotateParamValue);
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
	native private long createChild_EVString_CVector3_CQuaternion_NoVirtual(long pNativeObject, String name, long translate, long rotate);
	protected com.earthview.world.graphic.Node createChild_NoVirtual(String name, com.earthview.world.spatial.math.Vector3 translate, com.earthview.world.spatial.math.Quaternion rotate)
	{
		String nameParamValue = name;
		long translateParamValue = translate.nativeObject.pointer;
		long rotateParamValue = rotate.nativeObject.pointer;
		long returnValue = createChild_EVString_CVector3_CQuaternion_NoVirtual(this.nativeObject.pointer, nameParamValue, translateParamValue, rotateParamValue);
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

	protected  long createChild_EVString_CVector3_callback(String name, long translate)
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
		com.earthview.world.graphic.Node returnValue = createChild(nameParamValue, translateParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createChild_EVString_CVector3(long pNativeObject, String name, long translate);
	public com.earthview.world.graphic.Node createChild(String name, com.earthview.world.spatial.math.Vector3 translate)
	{
		String nameParamValue = name;
		long translateParamValue = translate.nativeObject.pointer;
		long returnValue = createChild_EVString_CVector3(this.nativeObject.pointer, nameParamValue, translateParamValue);
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
	native private long createChild_EVString_CVector3_NoVirtual(long pNativeObject, String name, long translate);
	protected com.earthview.world.graphic.Node createChild_NoVirtual(String name, com.earthview.world.spatial.math.Vector3 translate)
	{
		String nameParamValue = name;
		long translateParamValue = translate.nativeObject.pointer;
		long returnValue = createChild_EVString_CVector3_NoVirtual(this.nativeObject.pointer, nameParamValue, translateParamValue);
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

	protected  long createChild_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.Node returnValue = createChild(nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createChild_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.Node createChild(String name)
	{
		String nameParamValue = name;
		long returnValue = createChild_EVString(this.nativeObject.pointer, nameParamValue);
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
	native private long createChild_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.Node createChild_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = createChild_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
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

	protected  void addChild_CNode_callback(long ref_child)
	{
		com.earthview.world.graphic.Node ref_childParamValue = (ref_child == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_childParamValue != null)
		{
		ref_childParamValue.setDelegate(true);
		ref_childParamValue.setInstancePointer(new InstancePointer(ref_child));
		IClassFactory ref_childParamValueClassFactory = GlobalClassFactoryMap.get(ref_childParamValue.getCppInstanceTypeName());
		if (ref_childParamValueClassFactory != null)
		{
			ref_childParamValue.setDelegate(true);
			ref_childParamValue = (com.earthview.world.graphic.Node)ref_childParamValueClassFactory.create();
			ref_childParamValue.setDelegate(true);
			ref_childParamValue.setInstancePointer(new InstancePointer(ref_child));
		}
		}
		addChild(ref_childParamValue);
	}

	native private void addChild_CNode(long pNativeObject, long ref_child);
	/**
	 * 添加子节点
	 * @param name 名称
	 */
	public void addChild(com.earthview.world.graphic.Node ref_child)
	{
		long ref_childParamValue = (ref_child == null ? 0L : ref_child.nativeObject.pointer);
		addChild_CNode(this.nativeObject.pointer, ref_childParamValue);
	}
	native private void addChild_CNode_NoVirtual(long pNativeObject, long ref_child);
	protected void addChild_NoVirtual(com.earthview.world.graphic.Node ref_child)
	{
		long ref_childParamValue = (ref_child == null ? 0L : ref_child.nativeObject.pointer);
		addChild_CNode_NoVirtual(this.nativeObject.pointer, ref_childParamValue);
	}

	protected  int numChildren_void_callback()
	{
		int returnValue = numChildren();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int numChildren_void(long pNativeObject);
	/**
	 * 子节点数量
	 * @param name 名称
	 * @return 无符号的双字节整型
	 */
	public int numChildren()
	{
		int returnValue = numChildren_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int numChildren_void_NoVirtual(long pNativeObject);
	protected int numChildren_NoVirtual()
	{
		int returnValue = numChildren_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getChild_ev_uint16_callback(int index)
	{
		int indexParamValue = index;
		com.earthview.world.graphic.Node returnValue = getChild(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getChild_ev_uint16(long pNativeObject, int index);
	/**
	 * 获取子节点获取子节点指针
	 * @param index 指针
	 * @return 节点指针
	 */
	public com.earthview.world.graphic.Node getChild(int index)
	{
		int indexParamValue = index;
		long returnValue = getChild_ev_uint16(this.nativeObject.pointer, indexParamValue);
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
	native private long getChild_ev_uint16_NoVirtual(long pNativeObject, int index);
	protected com.earthview.world.graphic.Node getChild_NoVirtual(int index)
	{
		int indexParamValue = index;
		long returnValue = getChild_ev_uint16_NoVirtual(this.nativeObject.pointer, indexParamValue);
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

	protected  long getChild_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.Node returnValue = getChild(nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getChild_EVString(long pNativeObject, String name);
	/**
	 * 获取子节点为指定名称的节点获取指针
	 * @param name 名称
	 * @return 节点指针
	 */
	public com.earthview.world.graphic.Node getChild(String name)
	{
		String nameParamValue = name;
		long returnValue = getChild_EVString(this.nativeObject.pointer, nameParamValue);
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
	native private long getChild_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.Node getChild_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = getChild_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
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

	protected  boolean existChild_EVString_callback(String name)
	{
		String nameParamValue = name;
		boolean returnValue = existChild(nameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean existChild_EVString(long pNativeObject, String name);
	/**
	 * 判断子节点是否存在				
	 * @param name 名称
	 */
	public boolean existChild(String name)
	{
		String nameParamValue = name;
		boolean returnValue = existChild_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private boolean existChild_EVString_NoVirtual(long pNativeObject, String name);
	protected boolean existChild_NoVirtual(String name)
	{
		String nameParamValue = name;
		boolean returnValue = existChild_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}

	protected  long getChildIterator_void_callback()
	{
		com.earthview.world.graphic.Node.ChildNodeIterator returnValue = getChildIterator();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getChildIterator_void(long pNativeObject);
	/**
	 * 获取一个迭代器遍历此节点的所有子节点
	 * @param  
	 */
	public com.earthview.world.graphic.Node.ChildNodeIterator getChildIterator()
	{
		long returnValue = getChildIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Node.ChildNodeIterator __returnValue = new com.earthview.world.graphic.Node.ChildNodeIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ChildNodeIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node.ChildNodeIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ChildNodeIterator");
		}
		return __returnValue;
	}
	native private long getChildIterator_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Node.ChildNodeIterator getChildIterator_NoVirtual()
	{
		long returnValue = getChildIterator_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.Node.ChildNodeIterator __returnValue = new com.earthview.world.graphic.Node.ChildNodeIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ChildNodeIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node.ChildNodeIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ChildNodeIterator");
		}
		return __returnValue;
	}

	protected  long removeChild_ev_uint16_callback(int index)
	{
		int indexParamValue = index;
		com.earthview.world.graphic.Node returnValue = removeChild(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long removeChild_ev_uint16(long pNativeObject, int index);
	/**
	 * 检索将指定子节点从父节点分离没有删除此子节点，在其他地方也许继续挂接
	 * @param index 
	 */
	public com.earthview.world.graphic.Node removeChild(int index)
	{
		int indexParamValue = index;
		long returnValue = removeChild_ev_uint16(this.nativeObject.pointer, indexParamValue);
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
	native private long removeChild_ev_uint16_NoVirtual(long pNativeObject, int index);
	protected com.earthview.world.graphic.Node removeChild_NoVirtual(int index)
	{
		int indexParamValue = index;
		long returnValue = removeChild_ev_uint16_NoVirtual(this.nativeObject.pointer, indexParamValue);
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

	protected  long removeChild_CNode_callback(long child)
	{
		com.earthview.world.graphic.Node childParamValue = (child == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(childParamValue != null)
		{
		childParamValue.setDelegate(true);
		childParamValue.setInstancePointer(new InstancePointer(child));
		IClassFactory childParamValueClassFactory = GlobalClassFactoryMap.get(childParamValue.getCppInstanceTypeName());
		if (childParamValueClassFactory != null)
		{
			childParamValue.setDelegate(true);
			childParamValue = (com.earthview.world.graphic.Node)childParamValueClassFactory.create();
			childParamValue.setDelegate(true);
			childParamValue.setInstancePointer(new InstancePointer(child));
		}
		}
		com.earthview.world.graphic.Node returnValue = removeChild(childParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long removeChild_CNode(long pNativeObject, long child);
	/**
	 * 将指定子节点从父节点分离没有删除此子节点，在其他地方也许继续挂接
	 * @param child 
	 */
	public com.earthview.world.graphic.Node removeChild(com.earthview.world.graphic.Node child)
	{
		long childParamValue = (child == null ? 0L : child.nativeObject.pointer);
		long returnValue = removeChild_CNode(this.nativeObject.pointer, childParamValue);
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
	native private long removeChild_CNode_NoVirtual(long pNativeObject, long child);
	protected com.earthview.world.graphic.Node removeChild_NoVirtual(com.earthview.world.graphic.Node child)
	{
		long childParamValue = (child == null ? 0L : child.nativeObject.pointer);
		long returnValue = removeChild_CNode_NoVirtual(this.nativeObject.pointer, childParamValue);
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

	protected  long removeChild_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.Node returnValue = removeChild(nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long removeChild_EVString(long pNativeObject, String name);
	/**
	 * 通过名称将指定子节点从父节点分离没有删除此子节点，在其他地方也许继续挂接
	 * @param name 
	 */
	public com.earthview.world.graphic.Node removeChild(String name)
	{
		String nameParamValue = name;
		long returnValue = removeChild_EVString(this.nativeObject.pointer, nameParamValue);
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
	native private long removeChild_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.Node removeChild_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = removeChild_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
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

	protected  void removeAllChildren_void_callback()
	{
		removeAllChildren();
	}

	native private void removeAllChildren_void(long pNativeObject);
	/**
	 * 移除所有子节点没有删除此子节点，在其他地方也许继续挂接
	 * @param  
	 */
	public void removeAllChildren()
	{
		removeAllChildren_void(this.nativeObject.pointer);
	}
	native private void removeAllChildren_void_NoVirtual(long pNativeObject);
	protected void removeAllChildren_NoVirtual()
	{
		removeAllChildren_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _setDerivedPosition_CVector3_callback(long pos)
	{
		com.earthview.world.spatial.math.Vector3 posParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		posParamValue.setDelegate(true);
		posParamValue.setInstancePointer(new InstancePointer(pos));
		IClassFactory posParamValueClassFactory = GlobalClassFactoryMap.get(posParamValue.getCppInstanceTypeName());
		if (posParamValueClassFactory != null)
		{
			posParamValue.setDelegate(true);
			posParamValue = (com.earthview.world.spatial.math.Vector3)posParamValueClassFactory.create();
			posParamValue.setDelegate(true);
			posParamValue.setInstancePointer(new InstancePointer(pos));
		}
		_setDerivedPosition(posParamValue);
	}

	native private void _setDerivedPosition_CVector3(long pNativeObject, long pos);
	/**
	 * 直接设置节点累积的世界坐标
	 * @param pos 
	 */
	public void _setDerivedPosition(com.earthview.world.spatial.math.Vector3 pos)
	{
		long posParamValue = pos.nativeObject.pointer;
		_setDerivedPosition_CVector3(this.nativeObject.pointer, posParamValue);
	}
	native private void _setDerivedPosition_CVector3_NoVirtual(long pNativeObject, long pos);
	protected void _setDerivedPosition_NoVirtual(com.earthview.world.spatial.math.Vector3 pos)
	{
		long posParamValue = pos.nativeObject.pointer;
		_setDerivedPosition_CVector3_NoVirtual(this.nativeObject.pointer, posParamValue);
	}

	protected  void _setDerivedPosition_CVector3_ev_bool_callback(long pos, boolean notify)
	{
		com.earthview.world.spatial.math.Vector3 posParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		posParamValue.setDelegate(true);
		posParamValue.setInstancePointer(new InstancePointer(pos));
		IClassFactory posParamValueClassFactory = GlobalClassFactoryMap.get(posParamValue.getCppInstanceTypeName());
		if (posParamValueClassFactory != null)
		{
			posParamValue.setDelegate(true);
			posParamValue = (com.earthview.world.spatial.math.Vector3)posParamValueClassFactory.create();
			posParamValue.setDelegate(true);
			posParamValue.setInstancePointer(new InstancePointer(pos));
		}
		boolean notifyParamValue = notify;
		_setDerivedPosition(posParamValue, notifyParamValue);
	}

	native private void _setDerivedPosition_CVector3_ev_bool(long pNativeObject, long pos, boolean notify);
	public void _setDerivedPosition(com.earthview.world.spatial.math.Vector3 pos, boolean notify)
	{
		long posParamValue = pos.nativeObject.pointer;
		boolean notifyParamValue = notify;
		_setDerivedPosition_CVector3_ev_bool(this.nativeObject.pointer, posParamValue, notifyParamValue);
	}
	native private void _setDerivedPosition_CVector3_ev_bool_NoVirtual(long pNativeObject, long pos, boolean notify);
	protected void _setDerivedPosition_NoVirtual(com.earthview.world.spatial.math.Vector3 pos, boolean notify)
	{
		long posParamValue = pos.nativeObject.pointer;
		boolean notifyParamValue = notify;
		_setDerivedPosition_CVector3_ev_bool_NoVirtual(this.nativeObject.pointer, posParamValue, notifyParamValue);
	}

	protected  void _setDerivedOrientation_CQuaternion_callback(long q)
	{
		com.earthview.world.spatial.math.Quaternion qParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		qParamValue.setDelegate(true);
		qParamValue.setInstancePointer(new InstancePointer(q));
		IClassFactory qParamValueClassFactory = GlobalClassFactoryMap.get(qParamValue.getCppInstanceTypeName());
		if (qParamValueClassFactory != null)
		{
			qParamValue.setDelegate(true);
			qParamValue = (com.earthview.world.spatial.math.Quaternion)qParamValueClassFactory.create();
			qParamValue.setDelegate(true);
			qParamValue.setInstancePointer(new InstancePointer(q));
		}
		_setDerivedOrientation(qParamValue);
	}

	native private void _setDerivedOrientation_CQuaternion(long pNativeObject, long q);
	/**
	 * 直接设置节点累积的世界方向
	 * @param q 
	 */
	public void _setDerivedOrientation(com.earthview.world.spatial.math.Quaternion q)
	{
		long qParamValue = q.nativeObject.pointer;
		_setDerivedOrientation_CQuaternion(this.nativeObject.pointer, qParamValue);
	}
	native private void _setDerivedOrientation_CQuaternion_NoVirtual(long pNativeObject, long q);
	protected void _setDerivedOrientation_NoVirtual(com.earthview.world.spatial.math.Quaternion q)
	{
		long qParamValue = q.nativeObject.pointer;
		_setDerivedOrientation_CQuaternion_NoVirtual(this.nativeObject.pointer, qParamValue);
	}

	protected  void _setDerivedOrientation_CQuaternion_ev_bool_callback(long q, boolean notify)
	{
		com.earthview.world.spatial.math.Quaternion qParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		qParamValue.setDelegate(true);
		qParamValue.setInstancePointer(new InstancePointer(q));
		IClassFactory qParamValueClassFactory = GlobalClassFactoryMap.get(qParamValue.getCppInstanceTypeName());
		if (qParamValueClassFactory != null)
		{
			qParamValue.setDelegate(true);
			qParamValue = (com.earthview.world.spatial.math.Quaternion)qParamValueClassFactory.create();
			qParamValue.setDelegate(true);
			qParamValue.setInstancePointer(new InstancePointer(q));
		}
		boolean notifyParamValue = notify;
		_setDerivedOrientation(qParamValue, notifyParamValue);
	}

	native private void _setDerivedOrientation_CQuaternion_ev_bool(long pNativeObject, long q, boolean notify);
	public void _setDerivedOrientation(com.earthview.world.spatial.math.Quaternion q, boolean notify)
	{
		long qParamValue = q.nativeObject.pointer;
		boolean notifyParamValue = notify;
		_setDerivedOrientation_CQuaternion_ev_bool(this.nativeObject.pointer, qParamValue, notifyParamValue);
	}
	native private void _setDerivedOrientation_CQuaternion_ev_bool_NoVirtual(long pNativeObject, long q, boolean notify);
	protected void _setDerivedOrientation_NoVirtual(com.earthview.world.spatial.math.Quaternion q, boolean notify)
	{
		long qParamValue = q.nativeObject.pointer;
		boolean notifyParamValue = notify;
		_setDerivedOrientation_CQuaternion_ev_bool_NoVirtual(this.nativeObject.pointer, qParamValue, notifyParamValue);
	}

	protected  long _getDerivedOrientation_void_callback()
	{
		com.earthview.world.spatial.math.Quaternion returnValue = _getDerivedOrientation();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _getDerivedOrientation_void(long pNativeObject);
	/**
	 * 获取节点累积的方向
	 * @param  
	 */
	public com.earthview.world.spatial.math.Quaternion _getDerivedOrientation()
	{
		long returnValue = _getDerivedOrientation_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate, "CQuaternion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private long _getDerivedOrientation_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Quaternion _getDerivedOrientation_NoVirtual()
	{
		long returnValue = _getDerivedOrientation_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate, "CQuaternion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}

	protected  long _getDerivedPosition_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = _getDerivedPosition();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _getDerivedPosition_void(long pNativeObject);
	/**
	 * 获取节点累积的坐标
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 _getDerivedPosition()
	{
		long returnValue = _getDerivedPosition_void(this.nativeObject.pointer);
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
	native private long _getDerivedPosition_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 _getDerivedPosition_NoVirtual()
	{
		long returnValue = _getDerivedPosition_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long _getDerivedScale_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = _getDerivedScale();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _getDerivedScale_void(long pNativeObject);
	/**
	 * 获取节点累积的缩放比例
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 _getDerivedScale()
	{
		long returnValue = _getDerivedScale_void(this.nativeObject.pointer);
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
	native private long _getDerivedScale_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 _getDerivedScale_NoVirtual()
	{
		long returnValue = _getDerivedScale_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long _getFullTransform_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = _getFullTransform();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _getFullTransform_void(long pNativeObject);
	/**
	 * 获取该节点累积的世界变换矩阵
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 _getFullTransform()
	{
		long returnValue = _getFullTransform_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate, "CMatrix4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private long _getFullTransform_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 _getFullTransform_NoVirtual()
	{
		long returnValue = _getFullTransform_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate, "CMatrix4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}

	protected  void _update_ev_bool_ev_bool_callback(boolean updateChildren, boolean parentHasChanged)
	{
		boolean updateChildrenParamValue = updateChildren;
		boolean parentHasChangedParamValue = parentHasChanged;
		_update(updateChildrenParamValue, parentHasChangedParamValue);
	}

	native private void _update_ev_bool_ev_bool(long pNativeObject, boolean updateChildren, boolean parentHasChanged);
	/**
	 * 更新节点内部方法
	 * @param updateChildren 为真，逐级更新所有子节点
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

	protected  void addListener_CNodeListener_callback(long listener)
	{
		com.earthview.world.graphic.Node.NodeListener listenerParamValue = (listener == 0L ? null : new com.earthview.world.graphic.Node.NodeListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(listenerParamValue != null)
		{
		listenerParamValue.setDelegate(true);
		listenerParamValue.setInstancePointer(new InstancePointer(listener));
		IClassFactory listenerParamValueClassFactory = GlobalClassFactoryMap.get(listenerParamValue.getCppInstanceTypeName());
		if (listenerParamValueClassFactory != null)
		{
			listenerParamValue.setDelegate(true);
			listenerParamValue = (com.earthview.world.graphic.Node.NodeListener)listenerParamValueClassFactory.create();
			listenerParamValue.setDelegate(true);
			listenerParamValue.setInstancePointer(new InstancePointer(listener));
		}
		}
		addListener(listenerParamValue);
	}

	native private void addListener_CNodeListener(long pNativeObject, long listener);
	/**
	 * 为节点设置监听器
	 * @param listener 
	 */
	public void addListener(com.earthview.world.graphic.Node.NodeListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		addListener_CNodeListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private void addListener_CNodeListener_NoVirtual(long pNativeObject, long listener);
	protected void addListener_NoVirtual(com.earthview.world.graphic.Node.NodeListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		addListener_CNodeListener_NoVirtual(this.nativeObject.pointer, listenerParamValue);
	}

	protected  void removeListener_CNodeListener_callback(long listener)
	{
		com.earthview.world.graphic.Node.NodeListener listenerParamValue = (listener == 0L ? null : new com.earthview.world.graphic.Node.NodeListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(listenerParamValue != null)
		{
		listenerParamValue.setDelegate(true);
		listenerParamValue.setInstancePointer(new InstancePointer(listener));
		IClassFactory listenerParamValueClassFactory = GlobalClassFactoryMap.get(listenerParamValue.getCppInstanceTypeName());
		if (listenerParamValueClassFactory != null)
		{
			listenerParamValue.setDelegate(true);
			listenerParamValue = (com.earthview.world.graphic.Node.NodeListener)listenerParamValueClassFactory.create();
			listenerParamValue.setDelegate(true);
			listenerParamValue.setInstancePointer(new InstancePointer(listener));
		}
		}
		removeListener(listenerParamValue);
	}

	native private void removeListener_CNodeListener(long pNativeObject, long listener);
	/**
	 * 移除监听器
	 * @param listener 
	 */
	public void removeListener(com.earthview.world.graphic.Node.NodeListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		removeListener_CNodeListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private void removeListener_CNodeListener_NoVirtual(long pNativeObject, long listener);
	protected void removeListener_NoVirtual(com.earthview.world.graphic.Node.NodeListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		removeListener_CNodeListener_NoVirtual(this.nativeObject.pointer, listenerParamValue);
	}

	protected  long getListener_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.graphic.Node.NodeListener returnValue = getListener(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getListener_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取节点当前的监听器
	 * @param  
	 */
	public com.earthview.world.graphic.Node.NodeListener getListener(long index)
	{
		long indexParamValue = index;
		long returnValue = getListener_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node.NodeListener __returnValue = new com.earthview.world.graphic.Node.NodeListener(CreatedWhenConstruct.CWC_NotToCreate, "CNodeListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node.NodeListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNodeListener");
		}
		return __returnValue;
	}
	native private long getListener_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.graphic.Node.NodeListener getListener_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getListener_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node.NodeListener __returnValue = new com.earthview.world.graphic.Node.NodeListener(CreatedWhenConstruct.CWC_NotToCreate, "CNodeListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node.NodeListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNodeListener");
		}
		return __returnValue;
	}

	protected  long getNumListener_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		long returnValue = getNumListener(indexParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getNumListener_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取监听器数目
	 * @param  
	 */
	public long getNumListener(long index)
	{
		long indexParamValue = index;
		long returnValue = getNumListener_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getNumListener_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected long getNumListener_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getNumListener_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  void setInitialState_void_callback()
	{
		setInitialState();
	}

	native private void setInitialState_void(long pNativeObject);
	/**
	 * 设置初始状态当前节点变换为基点设置一键还原，变换包括位置，方向，缩放比例除非你想初始化节点，不然你可以不调用此方法
	 * @param  
	 */
	public void setInitialState()
	{
		setInitialState_void(this.nativeObject.pointer);
	}
	native private void setInitialState_void_NoVirtual(long pNativeObject);
	protected void setInitialState_NoVirtual()
	{
		setInitialState_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void resetToInitialState_void_callback()
	{
		resetToInitialState();
	}

	native private void resetToInitialState_void(long pNativeObject);
	/**
	 * 重置初始状态当前节点变换为基点设置一键还原，变换包括位置，方向，缩放比例除非你想初始化节点，不然你可以不调用此方法
	 * @param  
	 */
	public void resetToInitialState()
	{
		resetToInitialState_void(this.nativeObject.pointer);
	}
	native private void resetToInitialState_void_NoVirtual(long pNativeObject);
	protected void resetToInitialState_NoVirtual()
	{
		resetToInitialState_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long getInitialPosition_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getInitialPosition();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getInitialPosition_void(long pNativeObject);
	/**
	 * 设置节点初始位置
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getInitialPosition()
	{
		long returnValue = getInitialPosition_void(this.nativeObject.pointer);
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
	native private long getInitialPosition_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getInitialPosition_NoVirtual()
	{
		long returnValue = getInitialPosition_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long convertWorldToLocalPosition_CVector3_callback(long worldPos)
	{
		com.earthview.world.spatial.math.Vector3 worldPosParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		worldPosParamValue.setDelegate(true);
		worldPosParamValue.setInstancePointer(new InstancePointer(worldPos));
		IClassFactory worldPosParamValueClassFactory = GlobalClassFactoryMap.get(worldPosParamValue.getCppInstanceTypeName());
		if (worldPosParamValueClassFactory != null)
		{
			worldPosParamValue.setDelegate(true);
			worldPosParamValue = (com.earthview.world.spatial.math.Vector3)worldPosParamValueClassFactory.create();
			worldPosParamValue.setDelegate(true);
			worldPosParamValue.setInstancePointer(new InstancePointer(worldPos));
		}
		com.earthview.world.spatial.math.Vector3 returnValue = convertWorldToLocalPosition(worldPosParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long convertWorldToLocalPosition_CVector3(long pNativeObject, long worldPos);
	/**
	 * 世界坐标转换当地坐标获得当前位置在所给空间中相对于这个节点的位置
	 * @param worldPos 
	 */
	public com.earthview.world.spatial.math.Vector3 convertWorldToLocalPosition(com.earthview.world.spatial.math.Vector3 worldPos)
	{
		long worldPosParamValue = worldPos.nativeObject.pointer;
		long returnValue = convertWorldToLocalPosition_CVector3(this.nativeObject.pointer, worldPosParamValue);
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
	native private long convertWorldToLocalPosition_CVector3_NoVirtual(long pNativeObject, long worldPos);
	protected com.earthview.world.spatial.math.Vector3 convertWorldToLocalPosition_NoVirtual(com.earthview.world.spatial.math.Vector3 worldPos)
	{
		long worldPosParamValue = worldPos.nativeObject.pointer;
		long returnValue = convertWorldToLocalPosition_CVector3_NoVirtual(this.nativeObject.pointer, worldPosParamValue);
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

	protected  long convertLocalToWorldPosition_CVector3_callback(long localPos)
	{
		com.earthview.world.spatial.math.Vector3 localPosParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		localPosParamValue.setDelegate(true);
		localPosParamValue.setInstancePointer(new InstancePointer(localPos));
		IClassFactory localPosParamValueClassFactory = GlobalClassFactoryMap.get(localPosParamValue.getCppInstanceTypeName());
		if (localPosParamValueClassFactory != null)
		{
			localPosParamValue.setDelegate(true);
			localPosParamValue = (com.earthview.world.spatial.math.Vector3)localPosParamValueClassFactory.create();
			localPosParamValue.setDelegate(true);
			localPosParamValue.setInstancePointer(new InstancePointer(localPos));
		}
		com.earthview.world.spatial.math.Vector3 returnValue = convertLocalToWorldPosition(localPosParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long convertLocalToWorldPosition_CVector3(long pNativeObject, long localPos);
	/**
	 * 当地坐标转换世界坐标获得当前空间下的节点的世界坐标进行简单转换，不需要此节点的子节点
	 * @param localPos 
	 */
	public com.earthview.world.spatial.math.Vector3 convertLocalToWorldPosition(com.earthview.world.spatial.math.Vector3 localPos)
	{
		long localPosParamValue = localPos.nativeObject.pointer;
		long returnValue = convertLocalToWorldPosition_CVector3(this.nativeObject.pointer, localPosParamValue);
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
	native private long convertLocalToWorldPosition_CVector3_NoVirtual(long pNativeObject, long localPos);
	protected com.earthview.world.spatial.math.Vector3 convertLocalToWorldPosition_NoVirtual(com.earthview.world.spatial.math.Vector3 localPos)
	{
		long localPosParamValue = localPos.nativeObject.pointer;
		long returnValue = convertLocalToWorldPosition_CVector3_NoVirtual(this.nativeObject.pointer, localPosParamValue);
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

	protected  long convertWorldToLocalOrientation_CQuaternion_callback(long worldOrientation)
	{
		com.earthview.world.spatial.math.Quaternion worldOrientationParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		worldOrientationParamValue.setDelegate(true);
		worldOrientationParamValue.setInstancePointer(new InstancePointer(worldOrientation));
		IClassFactory worldOrientationParamValueClassFactory = GlobalClassFactoryMap.get(worldOrientationParamValue.getCppInstanceTypeName());
		if (worldOrientationParamValueClassFactory != null)
		{
			worldOrientationParamValue.setDelegate(true);
			worldOrientationParamValue = (com.earthview.world.spatial.math.Quaternion)worldOrientationParamValueClassFactory.create();
			worldOrientationParamValue.setDelegate(true);
			worldOrientationParamValue.setInstancePointer(new InstancePointer(worldOrientation));
		}
		com.earthview.world.spatial.math.Quaternion returnValue = convertWorldToLocalOrientation(worldOrientationParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long convertWorldToLocalOrientation_CQuaternion(long pNativeObject, long worldOrientation);
	/**
	 * 世界方向向量转换当地方向向量获得当前位置方向在所给空间中相对于这个节点的位置方向
	 * @param worldOrientation 
	 */
	public com.earthview.world.spatial.math.Quaternion convertWorldToLocalOrientation(com.earthview.world.spatial.math.Quaternion worldOrientation)
	{
		long worldOrientationParamValue = worldOrientation.nativeObject.pointer;
		long returnValue = convertWorldToLocalOrientation_CQuaternion(this.nativeObject.pointer, worldOrientationParamValue);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private long convertWorldToLocalOrientation_CQuaternion_NoVirtual(long pNativeObject, long worldOrientation);
	protected com.earthview.world.spatial.math.Quaternion convertWorldToLocalOrientation_NoVirtual(com.earthview.world.spatial.math.Quaternion worldOrientation)
	{
		long worldOrientationParamValue = worldOrientation.nativeObject.pointer;
		long returnValue = convertWorldToLocalOrientation_CQuaternion_NoVirtual(this.nativeObject.pointer, worldOrientationParamValue);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}

	protected  long convertLocalToWorldOrientation_CQuaternion_callback(long localOrientation)
	{
		com.earthview.world.spatial.math.Quaternion localOrientationParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		localOrientationParamValue.setDelegate(true);
		localOrientationParamValue.setInstancePointer(new InstancePointer(localOrientation));
		IClassFactory localOrientationParamValueClassFactory = GlobalClassFactoryMap.get(localOrientationParamValue.getCppInstanceTypeName());
		if (localOrientationParamValueClassFactory != null)
		{
			localOrientationParamValue.setDelegate(true);
			localOrientationParamValue = (com.earthview.world.spatial.math.Quaternion)localOrientationParamValueClassFactory.create();
			localOrientationParamValue.setDelegate(true);
			localOrientationParamValue.setInstancePointer(new InstancePointer(localOrientation));
		}
		com.earthview.world.spatial.math.Quaternion returnValue = convertLocalToWorldOrientation(localOrientationParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long convertLocalToWorldOrientation_CQuaternion(long pNativeObject, long localOrientation);
	/**
	 * 当前方向向量转换世界方向向量获得当前空间下的节点的世界方向向量进行简单转换，不需要此节点的子节点
	 * @param worldOrientation 
	 */
	public com.earthview.world.spatial.math.Quaternion convertLocalToWorldOrientation(com.earthview.world.spatial.math.Quaternion localOrientation)
	{
		long localOrientationParamValue = localOrientation.nativeObject.pointer;
		long returnValue = convertLocalToWorldOrientation_CQuaternion(this.nativeObject.pointer, localOrientationParamValue);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private long convertLocalToWorldOrientation_CQuaternion_NoVirtual(long pNativeObject, long localOrientation);
	protected com.earthview.world.spatial.math.Quaternion convertLocalToWorldOrientation_NoVirtual(com.earthview.world.spatial.math.Quaternion localOrientation)
	{
		long localOrientationParamValue = localOrientation.nativeObject.pointer;
		long returnValue = convertLocalToWorldOrientation_CQuaternion_NoVirtual(this.nativeObject.pointer, localOrientationParamValue);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}

	protected  long getInitialOrientation_void_callback()
	{
		com.earthview.world.spatial.math.Quaternion returnValue = getInitialOrientation();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getInitialOrientation_void(long pNativeObject);
	/**
	 * 获取节点初始方向向量
	 * @param  
	 */
	public com.earthview.world.spatial.math.Quaternion getInitialOrientation()
	{
		long returnValue = getInitialOrientation_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate, "CQuaternion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private long getInitialOrientation_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Quaternion getInitialOrientation_NoVirtual()
	{
		long returnValue = getInitialOrientation_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate, "CQuaternion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}

	protected  long getInitialScale_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getInitialScale();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getInitialScale_void(long pNativeObject);
	/**
	 * 获取节点初始缩放比例
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getInitialScale()
	{
		long returnValue = getInitialScale_void(this.nativeObject.pointer);
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
	native private long getInitialScale_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getInitialScale_NoVirtual()
	{
		long returnValue = getInitialScale_void_NoVirtual(this.nativeObject.pointer);
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

	protected  double getSquaredViewDepth_CCamera_callback(long cam)
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
		double returnValue = getSquaredViewDepth(camParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getSquaredViewDepth_CCamera(long pNativeObject, long cam);
	/**
	 * 获得摄像机视场深度的平方帮助方法
	 * @param cam 摄像机视场
	 * @return 视场大小的值
	 */
	public double getSquaredViewDepth(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		double returnValue = getSquaredViewDepth_CCamera(this.nativeObject.pointer, camParamValue);
		return returnValue;
	}
	native private double getSquaredViewDepth_CCamera_NoVirtual(long pNativeObject, long cam);
	protected double getSquaredViewDepth_NoVirtual(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		double returnValue = getSquaredViewDepth_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
		return returnValue;
	}

	protected  void needUpdate_ev_bool_callback(boolean forceParentUpdate)
	{
		boolean forceParentUpdateParamValue = forceParentUpdate;
		needUpdate(forceParentUpdateParamValue);
	}

	native private void needUpdate_ev_bool(long pNativeObject, boolean forceParentUpdate);
	/**
	 * 通知节点更新
	 * @param forceParentUpdate 默认为false，是否更新标识
	 */
	public void needUpdate(boolean forceParentUpdate)
	{
		boolean forceParentUpdateParamValue = forceParentUpdate;
		needUpdate_ev_bool(this.nativeObject.pointer, forceParentUpdateParamValue);
	}
	native private void needUpdate_ev_bool_NoVirtual(long pNativeObject, boolean forceParentUpdate);
	protected void needUpdate_NoVirtual(boolean forceParentUpdate)
	{
		boolean forceParentUpdateParamValue = forceParentUpdate;
		needUpdate_ev_bool_NoVirtual(this.nativeObject.pointer, forceParentUpdateParamValue);
	}

	protected  void needUpdate_void_callback()
	{
		needUpdate();
	}

	native private void needUpdate_void(long pNativeObject);
	public void needUpdate()
	{
		needUpdate_void(this.nativeObject.pointer);
	}
	native private void needUpdate_void_NoVirtual(long pNativeObject);
	protected void needUpdate_NoVirtual()
	{
		needUpdate_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void requestUpdate_CNode_ev_bool_callback(long ref_child, boolean forceParentUpdate)
	{
		com.earthview.world.graphic.Node ref_childParamValue = (ref_child == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_childParamValue != null)
		{
		ref_childParamValue.setDelegate(true);
		ref_childParamValue.setInstancePointer(new InstancePointer(ref_child));
		IClassFactory ref_childParamValueClassFactory = GlobalClassFactoryMap.get(ref_childParamValue.getCppInstanceTypeName());
		if (ref_childParamValueClassFactory != null)
		{
			ref_childParamValue.setDelegate(true);
			ref_childParamValue = (com.earthview.world.graphic.Node)ref_childParamValueClassFactory.create();
			ref_childParamValue.setDelegate(true);
			ref_childParamValue.setInstancePointer(new InstancePointer(ref_child));
		}
		}
		boolean forceParentUpdateParamValue = forceParentUpdate;
		requestUpdate(ref_childParamValue, forceParentUpdateParamValue);
	}

	native private void requestUpdate_CNode_ev_bool(long pNativeObject, long ref_child, boolean forceParentUpdate);
	/**
	 * 通知父节点更新子节点
	 * @param  
	 * @param child 
	 * @param forceParentUpdate 默认问false
	 */
	public void requestUpdate(com.earthview.world.graphic.Node ref_child, boolean forceParentUpdate)
	{
		long ref_childParamValue = (ref_child == null ? 0L : ref_child.nativeObject.pointer);
		boolean forceParentUpdateParamValue = forceParentUpdate;
		requestUpdate_CNode_ev_bool(this.nativeObject.pointer, ref_childParamValue, forceParentUpdateParamValue);
	}
	native private void requestUpdate_CNode_ev_bool_NoVirtual(long pNativeObject, long ref_child, boolean forceParentUpdate);
	protected void requestUpdate_NoVirtual(com.earthview.world.graphic.Node ref_child, boolean forceParentUpdate)
	{
		long ref_childParamValue = (ref_child == null ? 0L : ref_child.nativeObject.pointer);
		boolean forceParentUpdateParamValue = forceParentUpdate;
		requestUpdate_CNode_ev_bool_NoVirtual(this.nativeObject.pointer, ref_childParamValue, forceParentUpdateParamValue);
	}

	protected  void requestUpdate_CNode_callback(long ref_child)
	{
		com.earthview.world.graphic.Node ref_childParamValue = (ref_child == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_childParamValue != null)
		{
		ref_childParamValue.setDelegate(true);
		ref_childParamValue.setInstancePointer(new InstancePointer(ref_child));
		IClassFactory ref_childParamValueClassFactory = GlobalClassFactoryMap.get(ref_childParamValue.getCppInstanceTypeName());
		if (ref_childParamValueClassFactory != null)
		{
			ref_childParamValue.setDelegate(true);
			ref_childParamValue = (com.earthview.world.graphic.Node)ref_childParamValueClassFactory.create();
			ref_childParamValue.setDelegate(true);
			ref_childParamValue.setInstancePointer(new InstancePointer(ref_child));
		}
		}
		requestUpdate(ref_childParamValue);
	}

	native private void requestUpdate_CNode(long pNativeObject, long ref_child);
	public void requestUpdate(com.earthview.world.graphic.Node ref_child)
	{
		long ref_childParamValue = (ref_child == null ? 0L : ref_child.nativeObject.pointer);
		requestUpdate_CNode(this.nativeObject.pointer, ref_childParamValue);
	}
	native private void requestUpdate_CNode_NoVirtual(long pNativeObject, long ref_child);
	protected void requestUpdate_NoVirtual(com.earthview.world.graphic.Node ref_child)
	{
		long ref_childParamValue = (ref_child == null ? 0L : ref_child.nativeObject.pointer);
		requestUpdate_CNode_NoVirtual(this.nativeObject.pointer, ref_childParamValue);
	}

	protected  void cancelUpdate_CNode_callback(long child)
	{
		com.earthview.world.graphic.Node childParamValue = (child == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(childParamValue != null)
		{
		childParamValue.setDelegate(true);
		childParamValue.setInstancePointer(new InstancePointer(child));
		IClassFactory childParamValueClassFactory = GlobalClassFactoryMap.get(childParamValue.getCppInstanceTypeName());
		if (childParamValueClassFactory != null)
		{
			childParamValue.setDelegate(true);
			childParamValue = (com.earthview.world.graphic.Node)childParamValueClassFactory.create();
			childParamValue.setDelegate(true);
			childParamValue.setInstancePointer(new InstancePointer(child));
		}
		}
		cancelUpdate(childParamValue);
	}

	native private void cancelUpdate_CNode(long pNativeObject, long child);
	/**
	 * 停止更新
	 * @param  
	 * @param child 
	 */
	public void cancelUpdate(com.earthview.world.graphic.Node child)
	{
		long childParamValue = (child == null ? 0L : child.nativeObject.pointer);
		cancelUpdate_CNode(this.nativeObject.pointer, childParamValue);
	}
	native private void cancelUpdate_CNode_NoVirtual(long pNativeObject, long child);
	protected void cancelUpdate_NoVirtual(com.earthview.world.graphic.Node child)
	{
		long childParamValue = (child == null ? 0L : child.nativeObject.pointer);
		cancelUpdate_CNode_NoVirtual(this.nativeObject.pointer, childParamValue);
	}

	protected  long getDebugRenderable_Real_callback(double scaling)
	{
		double scalingParamValue = scaling;
		com.earthview.world.graphic.Node.DebugRenderable returnValue = getDebugRenderable(scalingParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDebugRenderable_Real(long pNativeObject, double scaling);
	/**
	 * 获取渲染节点的渲染调试
	 * @param scaling 
	 */
	public com.earthview.world.graphic.Node.DebugRenderable getDebugRenderable(double scaling)
	{
		double scalingParamValue = scaling;
		long returnValue = getDebugRenderable_Real(this.nativeObject.pointer, scalingParamValue);
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
	native private long getDebugRenderable_Real_NoVirtual(long pNativeObject, double scaling);
	protected com.earthview.world.graphic.Node.DebugRenderable getDebugRenderable_NoVirtual(double scaling)
	{
		double scalingParamValue = scaling;
		long returnValue = getDebugRenderable_Real_NoVirtual(this.nativeObject.pointer, scalingParamValue);
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

	native private static void queueNeedUpdate_CNode(long ref_n);
	/**
	 * 队列更新场景图更新时候不能调用needUpdate()
	 * @param n 
	 */
	public static void queueNeedUpdate(com.earthview.world.graphic.Node ref_n)
	{
		long ref_nParamValue = (ref_n == null ? 0L : ref_n.nativeObject.pointer);
		queueNeedUpdate_CNode(ref_nParamValue);
	}
	native private static void processQueuedUpdates_void();
	/**
	 * 处理队列更新
	 * @param  
	 */
	public static void processQueuedUpdates()
	{
		processQueuedUpdates_void();
	}
	native private long getUserObjectBindings_void(long pNativeObject);
	/**
	 * 返回用户对象绑定的类的一个实例
	 * @param  
	 */
	public com.earthview.world.graphic.UserObjectBindings getUserObjectBindings()
	{
		long returnValue = getUserObjectBindings_void(this.nativeObject.pointer);
		com.earthview.world.graphic.UserObjectBindings __returnValue = new com.earthview.world.graphic.UserObjectBindings(CreatedWhenConstruct.CWC_NotToCreate, "CUserObjectBindings");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.UserObjectBindings)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CUserObjectBindings");
		}
		return __returnValue;
	}
	protected  void attachObject_CMovableObject_callback(long obj)
	{
		com.earthview.world.graphic.MovableObject objParamValue = (obj == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(objParamValue != null)
		{
		objParamValue.setDelegate(true);
		objParamValue.setInstancePointer(new InstancePointer(obj));
		IClassFactory objParamValueClassFactory = GlobalClassFactoryMap.get(objParamValue.getCppInstanceTypeName());
		if (objParamValueClassFactory != null)
		{
			objParamValue.setDelegate(true);
			objParamValue = (com.earthview.world.graphic.MovableObject)objParamValueClassFactory.create();
			objParamValue.setDelegate(true);
			objParamValue.setInstancePointer(new InstancePointer(obj));
		}
		}
		attachObject(objParamValue);
	}

	native private void attachObject_CMovableObject(long pNativeObject, long obj);
	/**
	 * 在当前节点下挂接一个移动对象
	 * @param obj 移动对象
	 */
	public void attachObject(com.earthview.world.graphic.MovableObject obj)
	{
		long objParamValue = (obj == null ? 0L : obj.nativeObject.pointer);
		attachObject_CMovableObject(this.nativeObject.pointer, objParamValue);
	}
	native private void attachObject_CMovableObject_NoVirtual(long pNativeObject, long obj);
	protected void attachObject_NoVirtual(com.earthview.world.graphic.MovableObject obj)
	{
		long objParamValue = (obj == null ? 0L : obj.nativeObject.pointer);
		attachObject_CMovableObject_NoVirtual(this.nativeObject.pointer, objParamValue);
	}

	protected  int numAttachedObjects_void_callback()
	{
		int returnValue = numAttachedObjects();
		int __returnValue = returnValue;
		return __returnValue;
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

	protected  long getAttachedObject_ev_uint16_callback(int index)
	{
		int indexParamValue = index;
		com.earthview.world.graphic.MovableObject returnValue = getAttachedObject(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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

	protected  long getAttachedObject_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.MovableObject returnValue = getAttachedObject(nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
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

	protected  long detachObject_ev_uint16_callback(int index)
	{
		int indexParamValue = index;
		com.earthview.world.graphic.MovableObject returnValue = detachObject(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
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

	protected  void detachObject_CMovableObject_callback(long obj)
	{
		com.earthview.world.graphic.MovableObject objParamValue = (obj == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(objParamValue != null)
		{
		objParamValue.setDelegate(true);
		objParamValue.setInstancePointer(new InstancePointer(obj));
		IClassFactory objParamValueClassFactory = GlobalClassFactoryMap.get(objParamValue.getCppInstanceTypeName());
		if (objParamValueClassFactory != null)
		{
			objParamValue.setDelegate(true);
			objParamValue = (com.earthview.world.graphic.MovableObject)objParamValueClassFactory.create();
			objParamValue.setDelegate(true);
			objParamValue.setInstancePointer(new InstancePointer(obj));
		}
		}
		detachObject(objParamValue);
	}

	native private void detachObject_CMovableObject(long pNativeObject, long obj);
	/**
	 * 反挂接指定的移动对象
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

	protected  long detachObject_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.MovableObject returnValue = detachObject(nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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

	protected  void detachAllObjects_void_callback()
	{
		detachAllObjects();
	}

	native private void detachAllObjects_void(long pNativeObject);
	/**
	 * 反挂接所有对象
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

	protected  void removeAndDestroyChild_EVString_callback(String name)
	{
		String nameParamValue = name;
		removeAndDestroyChild(nameParamValue);
	}

	native private void removeAndDestroyChild_EVString(long pNativeObject, String name);
	/**
	 * 通过名称删除并销毁指定子节点
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

	protected  void removeAndDestroyChild_ev_uint16_callback(int index)
	{
		int indexParamValue = index;
		removeAndDestroyChild(indexParamValue);
	}

	native private void removeAndDestroyChild_ev_uint16(long pNativeObject, int index);
	/**
	 * 通过检索删除并销毁指定子节点
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

	protected  void removeAndDestroyAllChildren_void_callback()
	{
		removeAndDestroyAllChildren();
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

	native private void focusByCamera_ev_bool(long pNativeObject, boolean focused);
	/**
	 * 设置该节点被相机聚焦，即该节点及其所有子节点上挂接的物体都不会被相机近裁剪面裁剪
	 * @param focused 是否被聚焦
	 */
	public void focusByCamera(boolean focused)
	{
		boolean focusedParamValue = focused;
		focusByCamera_ev_bool(this.nativeObject.pointer, focusedParamValue);
	}
	native private boolean isFocusedByCamera_void(long pNativeObject);
	/**
	 * 该节点是否被相机聚焦
	 * @return 是否被相机聚焦
	 */
	public boolean isFocusedByCamera()
	{
		boolean returnValue = isFocusedByCamera_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIsXSpecialVersionBoneNode_ev_bool(long pNativeObject, boolean isXSpecialVer);
	/**
	 * 该节点是否是XSpcialVersion版本的骨骼动画节点
	 * @param focused 是否是XSpcialVersion版本
	 */
	public void setIsXSpecialVersionBoneNode(boolean isXSpecialVer)
	{
		boolean isXSpecialVerParamValue = isXSpecialVer;
		setIsXSpecialVersionBoneNode_ev_bool(this.nativeObject.pointer, isXSpecialVerParamValue);
	}
	native private boolean isXSpecialVersionBoneNode_void(long pNativeObject);
	/**
	 * 该节点是否是XSpcialVersion版本的骨骼动画节点
	 * @return 是否是XSpcialVersion版本
	 */
	public boolean isXSpecialVersionBoneNode()
	{
		boolean returnValue = isXSpecialVersionBoneNode_void(this.nativeObject.pointer);
		return returnValue;
	}
	public Node(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Node(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
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
	
	public static Node fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Node obj = null;
 		if(baseObj instanceof Node)
		{
			obj = (Node)baseObj;
		} else {
			obj = new Node(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CNode");
			obj.increaseCast();
		}

		return obj;
	}
}
