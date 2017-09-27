package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 管理渲染队列中的场景对象
 */
public class RenderQueue extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderQueue", new RenderQueueClassFactory());
	}

	///zxt updatefor v1.8
	public static class RenderQueueGroupMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap", new RenderQueueGroupMapClassFactory());
		}

		public static class RenderQueueGroupPair extends com.earthview.world.core.BaseObject {
			
			static {
				GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair", new RenderQueueGroupPairClassFactory());
			}

			public RenderQueueGroupPair(short f, com.earthview.world.graphic.RenderQueueGroup ref_s) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				NameValuePairList list = new NameValuePairList();
				BasePointer fPtr = new BasePointer(f);
				list.add("f", fPtr.get());
				BasePointer ref_sPtr = new BasePointer(ref_s);
				list.add("ref_s", ref_sPtr.get());
				Create("RenderQueueGroupPair", list);
			}

			public RenderQueueGroupPair() {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				Create("RenderQueueGroupPair", null);
			}

			native private short get_first_void(long pNativeObject);
			public short get_first()
			{
				short jniValue = get_first_void(this.nativeObject.pointer);
				
				return jniValue;
			}
			
			native private void set_first_ev_uint8 (long pNativeObject, short value);
			public void set_first(short first)
			{
				short firstParamValue = first;
				
				set_first_ev_uint8(this.nativeObject.pointer, firstParamValue);
			}
			
			native private long get_second_void(long pNativeObject);
			public com.earthview.world.graphic.RenderQueueGroup get_second()
			{
				long jniValue = get_second_void(this.nativeObject.pointer);
				
				if(jniValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.RenderQueueGroup __returnValue = new com.earthview.world.graphic.RenderQueueGroup(CreatedWhenConstruct.CWC_NotToCreate, "CRenderQueueGroup");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(jniValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.RenderQueueGroup)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CRenderQueueGroup");
				}
				return __returnValue;
			}
			
			native private void set_second_CRenderQueueGroup (long pNativeObject, long value);
			public void set_second(com.earthview.world.graphic.RenderQueueGroup second)
			{
				long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
				
				set_second_CRenderQueueGroup(this.nativeObject.pointer, secondParamValue);
			}
			
			public RenderQueueGroupPair(CreatedWhenConstruct cwc) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
			}
			public RenderQueueGroupPair(CreatedWhenConstruct cwc, String classNameStr) {
				super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
			}
			
			
			
			
			public static RenderQueueGroupPair fromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
				{
					return null;
				}
				RenderQueueGroupPair obj = null;
 				if(baseObj instanceof RenderQueueGroupPair)
				{
					obj = (RenderQueueGroupPair)baseObj;
				} else {
					obj = new RenderQueueGroupPair(CreatedWhenConstruct.CWC_NotToCreate);
					obj.bindNativeObject(baseObj.nativeObject, "RenderQueueGroupPair");
					obj.increaseCast();
				}

				return obj;
			}
		}
		public static class RenderQueueGroupPairClassFactory implements IClassFactory {
			public BaseObject create()
			{
				RenderQueueGroupPair emptyInstance = new RenderQueueGroupPair(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}
		
		public static class RenderQueueGroupIterator extends com.earthview.world.core.BaseObject {
			
			static {
				GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator", new RenderQueueGroupIteratorClassFactory());
			}

			public RenderQueueGroupIterator() {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				Create("RenderQueueGroupIterator", null);
			}

			public RenderQueueGroupIterator(com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap ref_renderQueueGroupMap, short index) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				NameValuePairList list = new NameValuePairList();
				BasePointer ref_renderQueueGroupMapPtr = new BasePointer(ref_renderQueueGroupMap);
				list.add("ref_renderQueueGroupMap", ref_renderQueueGroupMapPtr.get());
				BasePointer indexPtr = new BasePointer(index);
				list.add("index", indexPtr.get());
				Create("RenderQueueGroupIterator", list);
			}

			native private long OperatorPlusLeftIncrease_void(long pNativeObject);
			public com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator OperatorPlusLeftIncrease()
			{
				long returnValue = OperatorPlusLeftIncrease_void(this.nativeObject.pointer);
				com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator __returnValue = new com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate, "RenderQueueGroupIterator");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "RenderQueueGroupIterator");
				}
				return __returnValue;
			}
			native private long OperatorPlusRightIncrease_int(long pNativeObject, int val1);
			public com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator OperatorPlusRightIncrease(int val1)
			{
				int val1ParamValue = val1;
				long returnValue = OperatorPlusRightIncrease_int(this.nativeObject.pointer, val1ParamValue);
				com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator __returnValue = new com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.bindNativeObject(__instancePointer, "RenderQueueGroupIterator");
				__returnValue.createNativeObjectPointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator)__returnValueClassFactory.create();
					__returnValue.bindNativeObject(__instancePointer, "RenderQueueGroupIterator");
				}
				return __returnValue;
			}
			native private boolean OperatorNotEquals_RenderQueueGroupIterator(long pNativeObject, long o);
			public boolean OperatorNotEquals(com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator o)
			{
				long oParamValue = o.nativeObject.pointer;
				boolean returnValue = OperatorNotEquals_RenderQueueGroupIterator(this.nativeObject.pointer, oParamValue);
				return returnValue;
			}
			native private boolean OperatorEquals_RenderQueueGroupIterator(long pNativeObject, long o);
			public boolean OperatorEquals(com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator o)
			{
				long oParamValue = o.nativeObject.pointer;
				boolean returnValue = OperatorEquals_RenderQueueGroupIterator(this.nativeObject.pointer, oParamValue);
				return returnValue;
			}
			native private long getValue_void(long pNativeObject);
			public com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair getValue()
			{
				long returnValue = getValue_void(this.nativeObject.pointer);
				com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair __returnValue = new com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair(CreatedWhenConstruct.CWC_NotToCreate, "RenderQueueGroupPair");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "RenderQueueGroupPair");
				}
				return __returnValue;
			}
			public RenderQueueGroupIterator(CreatedWhenConstruct cwc) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
			}
			public RenderQueueGroupIterator(CreatedWhenConstruct cwc, String classNameStr) {
				super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
			}
			
			
			
			
			public static RenderQueueGroupIterator fromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
				{
					return null;
				}
				RenderQueueGroupIterator obj = null;
 				if(baseObj instanceof RenderQueueGroupIterator)
				{
					obj = (RenderQueueGroupIterator)baseObj;
				} else {
					obj = new RenderQueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate);
					obj.bindNativeObject(baseObj.nativeObject, "RenderQueueGroupIterator");
					obj.increaseCast();
				}

				return obj;
			}
		}
		public static class RenderQueueGroupIteratorClassFactory implements IClassFactory {
			public BaseObject create()
			{
				RenderQueueGroupIterator emptyInstance = new RenderQueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}
		
		public RenderQueueGroupMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("RenderQueueGroupMap", null);
		}

		native private void insert_RenderQueueGroupPair(long pNativeObject, long v);
		public void insert(com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair v)
		{
			long vParamValue = v.nativeObject.pointer;
			insert_RenderQueueGroupPair(this.nativeObject.pointer, vParamValue);
		}
		native private long find_ev_uint8(long pNativeObject, short key);
		public com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator find(short key)
		{
			short keyParamValue = key;
			long returnValue = find_ev_uint8(this.nativeObject.pointer, keyParamValue);
			com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator __returnValue = new com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "RenderQueueGroupIterator");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "RenderQueueGroupIterator");
			}
			return __returnValue;
		}
		native private long begin_void(long pNativeObject);
		public com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator begin()
		{
			long returnValue = begin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator __returnValue = new com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "RenderQueueGroupIterator");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "RenderQueueGroupIterator");
			}
			return __returnValue;
		}
		native private long end_void(long pNativeObject);
		public com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator end()
		{
			long returnValue = end_void(this.nativeObject.pointer);
			com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator __returnValue = new com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "RenderQueueGroupIterator");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "RenderQueueGroupIterator");
			}
			return __returnValue;
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public RenderQueueGroupMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public RenderQueueGroupMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static RenderQueueGroupMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			RenderQueueGroupMap obj = null;
 			if(baseObj instanceof RenderQueueGroupMap)
			{
				obj = (RenderQueueGroupMap)baseObj;
			} else {
				obj = new RenderQueueGroupMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "RenderQueueGroupMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class RenderQueueGroupMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			RenderQueueGroupMap emptyInstance = new RenderQueueGroupMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 	//默认构造函数	//
	 */
	public static class QueueGroupIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderQueue::QueueGroupIterator", new QueueGroupIteratorClassFactory());
		}

		/**
		 * 构造函数
		 * @param lst 迭代器对应集合
		 */
		public QueueGroupIterator(com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("QueueGroupIterator", list);
		}

		/**
		 * 复制构造函数
		 * @param other 其它迭代器
		 */
		public QueueGroupIterator(com.earthview.world.graphic.RenderQueue.QueueGroupIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("QueueGroupIterator", list);
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
		native private int nextKey_void(long pNativeObject);
		/**
		 * 返回容器当前的键
		 * @param  
		 * @return 键
		 */
		public int nextKey()
		{
			int returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.RenderQueueGroup nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.RenderQueueGroup __returnValue = new com.earthview.world.graphic.RenderQueueGroup(CreatedWhenConstruct.CWC_NotToCreate, "CRenderQueueGroup");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderQueueGroup)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CRenderQueueGroup");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		/**
		 * 返回容器当前的值指针
		 * @param  
		 * @return 值地址
		 */
		public NativeObjectPointer<com.earthview.world.graphic.RenderQueueGroup> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.RenderQueueGroup> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.RenderQueueGroup>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.RenderQueueGroup next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.RenderQueueGroup __returnValue = new com.earthview.world.graphic.RenderQueueGroup(CreatedWhenConstruct.CWC_NotToCreate, "CRenderQueueGroup");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderQueueGroup)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CRenderQueueGroup");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器首键值对
		 * @param  
		 * @return 首键值对
		 */
		public com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair __returnValue = new com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair(CreatedWhenConstruct.CWC_NotToCreate, "RenderQueueGroupPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "RenderQueueGroupPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾键值对
		 * @param  
		 * @return 尾键值对
		 */
		public com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair __returnValue = new com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair(CreatedWhenConstruct.CWC_NotToCreate, "RenderQueueGroupPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "RenderQueueGroupPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前键值对
		 * @param  
		 * @return 当前键值对
		 */
		public com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair __returnValue = new com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair(CreatedWhenConstruct.CWC_NotToCreate, "RenderQueueGroupPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "RenderQueueGroupPair");
			}
			return __returnValue;
		}
		public QueueGroupIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public QueueGroupIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static QueueGroupIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			QueueGroupIterator obj = null;
 			if(baseObj instanceof QueueGroupIterator)
			{
				obj = (QueueGroupIterator)baseObj;
			} else {
				obj = new QueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "QueueGroupIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class QueueGroupIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			QueueGroupIterator emptyInstance = new QueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ConstQueueGroupIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator", new ConstQueueGroupIteratorClassFactory());
		}

		/**
		 * 构造函数
		 * @param lst 迭代器对应集合
		 */
		public ConstQueueGroupIterator(com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("ConstQueueGroupIterator", list);
		}

		/**
		 * 复制构造函数
		 * @param other 其它迭代器
		 */
		public ConstQueueGroupIterator(com.earthview.world.graphic.RenderQueue.ConstQueueGroupIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("ConstQueueGroupIterator", list);
		}

		native private long OperatorAssign_ConstQueueGroupIterator(long pNativeObject, long other);
		/**
		 * 赋值符号"="的重载
		 * @param other NodeTrackIterator类的引用
		 * @return 返回赋值后的引用
		 */
		public com.earthview.world.graphic.RenderQueue.ConstQueueGroupIterator OperatorAssign(com.earthview.world.graphic.RenderQueue.ConstQueueGroupIterator other)
		{
			long otherParamValue = other.nativeObject.pointer;
			long returnValue = OperatorAssign_ConstQueueGroupIterator(this.nativeObject.pointer, otherParamValue);
			com.earthview.world.graphic.RenderQueue.ConstQueueGroupIterator __returnValue = new com.earthview.world.graphic.RenderQueue.ConstQueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate, "ConstQueueGroupIterator");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderQueue.ConstQueueGroupIterator)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ConstQueueGroupIterator");
			}
			return __returnValue;
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
		native private int nextKey_void(long pNativeObject);
		/**
		 * 返回容器当前的键
		 * @param  
		 * @return 键
		 */
		public int nextKey()
		{
			int returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.RenderQueueGroup nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.RenderQueueGroup __returnValue = new com.earthview.world.graphic.RenderQueueGroup(CreatedWhenConstruct.CWC_NotToCreate, "CRenderQueueGroup");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderQueueGroup)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CRenderQueueGroup");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		/**
		 * 返回容器当前的值指针
		 * @param  
		 * @return 值地址
		 */
		public NativeObjectPointer<com.earthview.world.graphic.RenderQueueGroup> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.RenderQueueGroup> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.RenderQueueGroup>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.RenderQueueGroup next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.RenderQueueGroup __returnValue = new com.earthview.world.graphic.RenderQueueGroup(CreatedWhenConstruct.CWC_NotToCreate, "CRenderQueueGroup");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderQueueGroup)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CRenderQueueGroup");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器首键值对
		 * @param  
		 * @return 首键值对
		 */
		public com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair __returnValue = new com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair(CreatedWhenConstruct.CWC_NotToCreate, "RenderQueueGroupPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "RenderQueueGroupPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾键值对
		 * @param  
		 * @return 尾键值对
		 */
		public com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair __returnValue = new com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair(CreatedWhenConstruct.CWC_NotToCreate, "RenderQueueGroupPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "RenderQueueGroupPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前键值对
		 * @param  
		 * @return 当前键值对
		 */
		public com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair __returnValue = new com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair(CreatedWhenConstruct.CWC_NotToCreate, "RenderQueueGroupPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "RenderQueueGroupPair");
			}
			return __returnValue;
		}
		public ConstQueueGroupIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ConstQueueGroupIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ConstQueueGroupIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ConstQueueGroupIterator obj = null;
 			if(baseObj instanceof ConstQueueGroupIterator)
			{
				obj = (ConstQueueGroupIterator)baseObj;
			} else {
				obj = new ConstQueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ConstQueueGroupIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ConstQueueGroupIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ConstQueueGroupIterator emptyInstance = new ConstQueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 监听被加入渲染队列中的消息
	 */
	public static class RenderableListener extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderQueue::CRenderableListener", new RenderableListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderQueue::JCRenderableListenerProxy", new RenderableListenerClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public RenderableListener() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCRenderableListenerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.RenderQueue$RenderableListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  boolean renderableQueued_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_callback(long rend, short groupID, int priority, long ppTech, long pQueue)
		{
			com.earthview.world.graphic.Renderable rendParamValue = (rend == 0L ? null : new com.earthview.world.graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate));
			if(rendParamValue != null)
			{
			rendParamValue.setDelegate(true);
			rendParamValue.setInstancePointer(new InstancePointer(rend));
			IClassFactory rendParamValueClassFactory = GlobalClassFactoryMap.get(rendParamValue.getCppInstanceTypeName());
			if (rendParamValueClassFactory != null)
			{
				rendParamValue.setDelegate(true);
				rendParamValue = (com.earthview.world.graphic.Renderable)rendParamValueClassFactory.create();
				rendParamValue.setDelegate(true);
				rendParamValue.setInstancePointer(new InstancePointer(rend));
			}
			}
			short groupIDParamValue = groupID;
			int priorityParamValue = priority;
			NativeObjectPointer<com.earthview.world.graphic.Technique> ppTechParamValue = (ppTech == 0L ? null : new NativeObjectPointer<com.earthview.world.graphic.Technique>(new InstancePointer(ppTech)));
			com.earthview.world.graphic.RenderQueue pQueueParamValue = (pQueue == 0L ? null : new com.earthview.world.graphic.RenderQueue(CreatedWhenConstruct.CWC_NotToCreate));
			if(pQueueParamValue != null)
			{
			pQueueParamValue.setDelegate(true);
			pQueueParamValue.setInstancePointer(new InstancePointer(pQueue));
			IClassFactory pQueueParamValueClassFactory = GlobalClassFactoryMap.get(pQueueParamValue.getCppInstanceTypeName());
			if (pQueueParamValueClassFactory != null)
			{
				pQueueParamValue.setDelegate(true);
				pQueueParamValue = (com.earthview.world.graphic.RenderQueue)pQueueParamValueClassFactory.create();
				pQueueParamValue.setDelegate(true);
				pQueueParamValue.setInstancePointer(new InstancePointer(pQueue));
			}
			}
			boolean returnValue = renderableQueued(rendParamValue, groupIDParamValue, priorityParamValue, ppTechParamValue, pQueueParamValue);
			boolean __returnValue = returnValue;
			return __returnValue;
		}

		native private boolean renderableQueued_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue(long pNativeObject, long rend, short groupID, int priority, long ppTech, long pQueue);
		/**
		 * 当渲染接口被加到队列中时调用该方法
		 * @param rend 渲染接口
		 * @param groupID 渲染队列的ID号
		 * @param priority 渲染接口给的优先权
		 * @param ppTech 技术指针的指针
		 * @param pQueue 加入对象指向渲染队列的指针
		 * @return 允许渲染接口加入队列时返回true，否则返回false
		 */
		public boolean renderableQueued(com.earthview.world.graphic.Renderable rend, short groupID, int priority, NativeObjectPointer<com.earthview.world.graphic.Technique> ppTech, com.earthview.world.graphic.RenderQueue pQueue)
		{
			long rendParamValue = (rend == null ? 0L : rend.nativeObject.pointer);
			short groupIDParamValue = groupID;
			int priorityParamValue = priority;
			long ppTechParamValue = (ppTech == null ? 0L : ppTech.nativeObject.pointer);
			long pQueueParamValue = (pQueue == null ? 0L : pQueue.nativeObject.pointer);
			boolean returnValue = renderableQueued_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue(this.nativeObject.pointer, rendParamValue, groupIDParamValue, priorityParamValue, ppTechParamValue, pQueueParamValue);
			return returnValue;
		}
		native private boolean renderableQueued_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_NoVirtual(long pNativeObject, long rend, short groupID, int priority, long ppTech, long pQueue);
		protected boolean renderableQueued_NoVirtual(com.earthview.world.graphic.Renderable rend, short groupID, int priority, NativeObjectPointer<com.earthview.world.graphic.Technique> ppTech, com.earthview.world.graphic.RenderQueue pQueue)
		{
			long rendParamValue = (rend == null ? 0L : rend.nativeObject.pointer);
			short groupIDParamValue = groupID;
			int priorityParamValue = priority;
			long ppTechParamValue = (ppTech == null ? 0L : ppTech.nativeObject.pointer);
			long pQueueParamValue = (pQueue == null ? 0L : pQueue.nativeObject.pointer);
			boolean returnValue = renderableQueued_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_NoVirtual(this.nativeObject.pointer, rendParamValue, groupIDParamValue, priorityParamValue, ppTechParamValue, pQueueParamValue);
			return returnValue;
		}

		public RenderableListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public RenderableListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_renderableQueued_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_renderableQueued_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue(this.nativeObject.pointer, "renderableQueued_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_callback");
			}
		}
		
		public static RenderableListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			RenderableListener obj = null;
 			if(baseObj instanceof RenderableListener)
			{
				obj = (RenderableListener)baseObj;
			} else {
				obj = new RenderableListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CRenderableListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class RenderableListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			RenderableListener emptyInstance = new RenderableListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public RenderQueue() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRenderQueue", null);
	}

	native private void clear_ev_bool(long pNativeObject, boolean destroyPassMaps);
	/**
	 * 清空队列
	 * @param destroyPassMaps 
	 */
	public void clear(boolean destroyPassMaps)
	{
		boolean destroyPassMapsParamValue = destroyPassMaps;
		clear_ev_bool(this.nativeObject.pointer, destroyPassMapsParamValue);
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空队列
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private long getQueueGroup_ev_uint8(long pNativeObject, short qid);
	/**
	 * 获得渲染队列组
	 * @param  
	 */
	public com.earthview.world.graphic.RenderQueueGroup getQueueGroup(short qid)
	{
		short qidParamValue = qid;
		long returnValue = getQueueGroup_ev_uint8(this.nativeObject.pointer, qidParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderQueueGroup __returnValue = new com.earthview.world.graphic.RenderQueueGroup(CreatedWhenConstruct.CWC_NotToCreate, "CRenderQueueGroup");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderQueueGroup)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderQueueGroup");
		}
		return __returnValue;
	}
	native private void addRenderable_CRenderable_ev_uint8_ev_uint16(long pNativeObject, long ref_pRend, short groupID, int priority);
	/**
	 * 向队列中添加一个渲染对象
	 * @param pRend 指针指向添加到队列中的对象
	 * @param groupID 组的ID号
	 * @param priority 队列组中渲染对象的属性
	 */
	public void addRenderable(com.earthview.world.graphic.Renderable ref_pRend, short groupID, int priority)
	{
		long ref_pRendParamValue = (ref_pRend == null ? 0L : ref_pRend.nativeObject.pointer);
		short groupIDParamValue = groupID;
		int priorityParamValue = priority;
		addRenderable_CRenderable_ev_uint8_ev_uint16(this.nativeObject.pointer, ref_pRendParamValue, groupIDParamValue, priorityParamValue);
	}
	native private void addRenderable_CRenderable_ev_uint8(long pNativeObject, long ref_pRend, short groupId);
	/**
	 * 向队列中添加一个渲染对象
	 * @param pRend 指针指向添加到队列中的对象
	 * @param groupID 组的ID号
	 */
	public void addRenderable(com.earthview.world.graphic.Renderable ref_pRend, short groupId)
	{
		long ref_pRendParamValue = (ref_pRend == null ? 0L : ref_pRend.nativeObject.pointer);
		short groupIdParamValue = groupId;
		addRenderable_CRenderable_ev_uint8(this.nativeObject.pointer, ref_pRendParamValue, groupIdParamValue);
	}
	native private void addRenderable_CRenderable(long pNativeObject, long ref_pRend);
	/**
	 * 向队列中添加一个渲染对象
	 * @param pRend 指针指向添加到队列中的对象
	 */
	public void addRenderable(com.earthview.world.graphic.Renderable ref_pRend)
	{
		long ref_pRendParamValue = (ref_pRend == null ? 0L : ref_pRend.nativeObject.pointer);
		addRenderable_CRenderable(this.nativeObject.pointer, ref_pRendParamValue);
	}
	native private boolean existRenderable_void(long pNativeObject);
	/**
	 * 判断队列中是否存在渲染对象
	 * @param  
	 */
	public boolean existRenderable()
	{
		boolean returnValue = existRenderable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private short getDefaultQueueGroup_void(long pNativeObject);
	/**
	 * 获得当前默认的队列组
	 * @param  
	 */
	public short getDefaultQueueGroup()
	{
		short returnValue = getDefaultQueueGroup_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDefaultRenderablePriority_ev_uint16(long pNativeObject, int priority);
	/**
	 * 设置当前默认的渲染属性
	 * @param priority 渲染对象的属性
	 */
	public void setDefaultRenderablePriority(int priority)
	{
		int priorityParamValue = priority;
		setDefaultRenderablePriority_ev_uint16(this.nativeObject.pointer, priorityParamValue);
	}
	native private int getDefaultRenderablePriority_void(long pNativeObject);
	/**
	 * 获得当前默认的渲染属性
	 * @param  
	 */
	public int getDefaultRenderablePriority()
	{
		int returnValue = getDefaultRenderablePriority_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDefaultQueueGroup_ev_uint8(long pNativeObject, short grp);
	/**
	 * 设置当前默认的队列组
	 * @param  
	 */
	public void setDefaultQueueGroup(short grp)
	{
		short grpParamValue = grp;
		setDefaultQueueGroup_ev_uint8(this.nativeObject.pointer, grpParamValue);
	}
	native private long _getQueueGroupIterator_void(long pNativeObject);
	/**
	 * 内部方法，返回一个队列组的迭代器
	 * @param  
	 */
	public com.earthview.world.graphic.RenderQueue.QueueGroupIterator _getQueueGroupIterator()
	{
		long returnValue = _getQueueGroupIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.RenderQueue.QueueGroupIterator __returnValue = new com.earthview.world.graphic.RenderQueue.QueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "QueueGroupIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderQueue.QueueGroupIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "QueueGroupIterator");
		}
		return __returnValue;
	}
	native private void setSplitPassesByLightingType_ev_bool(long pNativeObject, boolean split);
	/**
	 * 设置是否队列通过它们的光照类型划分通路
	 * @param split 
	 */
	public void setSplitPassesByLightingType(boolean split)
	{
		boolean splitParamValue = split;
		setSplitPassesByLightingType_ev_bool(this.nativeObject.pointer, splitParamValue);
	}
	native private boolean getSplitPassesByLightingType_void(long pNativeObject);
	/**
	 * 获得是否队列通过它们的光照类型划分通路
	 * @param  
	 */
	public boolean getSplitPassesByLightingType()
	{
		boolean returnValue = getSplitPassesByLightingType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSplitNoShadowPasses_ev_bool(long pNativeObject, boolean split);
	/**
	 * 设置队列是否对有当某个阴影技术被使用时需要的阴影而已经关闭的通路进行划分划分
	 * @param split 
	 */
	public void setSplitNoShadowPasses(boolean split)
	{
		boolean splitParamValue = split;
		setSplitNoShadowPasses_ev_bool(this.nativeObject.pointer, splitParamValue);
	}
	native private boolean getSplitNoShadowPasses_void(long pNativeObject);
	/**
	 * 获得队列是否对有当某个阴影技术被使用时需要的阴影而已经关闭的通路进行划分划分
	 * @param  
	 */
	public boolean getSplitNoShadowPasses()
	{
		boolean returnValue = getSplitNoShadowPasses_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setShadowCastersCannotBeReceivers_ev_bool(long pNativeObject, boolean ind);
	/**
	 * 设置是否投射阴影的实体被视为不接收阴影
	 * @param ind 
	 */
	public void setShadowCastersCannotBeReceivers(boolean ind)
	{
		boolean indParamValue = ind;
		setShadowCastersCannotBeReceivers_ev_bool(this.nativeObject.pointer, indParamValue);
	}
	native private boolean getShadowCastersCannotBeReceivers_void(long pNativeObject);
	/**
	 * 获得是否投射阴影的实体被视为不接收阴影
	 * @param ind 
	 */
	public boolean getShadowCastersCannotBeReceivers()
	{
		boolean returnValue = getShadowCastersCannotBeReceivers_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRenderableListener_CRenderableListener(long pNativeObject, long ref_listener);
	/**
	 * 在队列上设置一个渲染接口监听器
	 * @param listener 监听器
	 */
	public void setRenderableListener(com.earthview.world.graphic.RenderQueue.RenderableListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		setRenderableListener_CRenderableListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private long getRenderableListener_void(long pNativeObject);
	public com.earthview.world.graphic.RenderQueue.RenderableListener getRenderableListener()
	{
		long returnValue = getRenderableListener_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderQueue.RenderableListener __returnValue = new com.earthview.world.graphic.RenderQueue.RenderableListener(CreatedWhenConstruct.CWC_NotToCreate, "CRenderableListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderQueue.RenderableListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderableListener");
		}
		return __returnValue;
	}
	native private void merge_CRenderQueue(long pNativeObject, long rhs);
	/**
	 * 合并渲染队列
	 * @param rhs 
	 */
	public void merge(com.earthview.world.graphic.RenderQueue rhs)
	{
		long rhsParamValue = (rhs == null ? 0L : rhs.nativeObject.pointer);
		merge_CRenderQueue(this.nativeObject.pointer, rhsParamValue);
	}
	native private void processVisibleObject_CMovableObject_CCamera_ev_bool_VisibleObjectsBoundsInfo(long pNativeObject, long mo, long cam, boolean onlyShadowCasters, long visibleBounds);
	/**
	 * 获得一个可见的实体添加到队列中
	 * @param mo 
	 * @param cam 
	 * @param onlyShadowCasters 
	 * @param visibleBounds 
	 */
	public void processVisibleObject(com.earthview.world.graphic.MovableObject mo, com.earthview.world.graphic.Camera cam, boolean onlyShadowCasters, com.earthview.world.graphic.VisibleObjectsBoundsInfo visibleBounds)
	{
		long moParamValue = (mo == null ? 0L : mo.nativeObject.pointer);
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		boolean onlyShadowCastersParamValue = onlyShadowCasters;
		long visibleBoundsParamValue = (visibleBounds == null ? 0L : visibleBounds.nativeObject.pointer);
		processVisibleObject_CMovableObject_CCamera_ev_bool_VisibleObjectsBoundsInfo(this.nativeObject.pointer, moParamValue, camParamValue, onlyShadowCastersParamValue, visibleBoundsParamValue);
	}
	public RenderQueue(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderQueue(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RenderQueue fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderQueue obj = null;
 		if(baseObj instanceof RenderQueue)
		{
			obj = (RenderQueue)baseObj;
		} else {
			obj = new RenderQueue(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderQueue");
			obj.increaseCast();
		}

		return obj;
	}
}
