package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView::World::Graphic::CRenderQueue下的分组标准，EarthView::World::Graphic::CRenderQueue聚集了渲染接口大概同一时间发布到renderer
 */
public class RenderQueueGroup extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderQueueGroup", new RenderQueueGroupClassFactory());
	}

	public static class PriorityMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderQueueGroup::PriorityMap", new PriorityMapClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public PriorityMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("PriorityMap", null);
		}

		native private boolean push_ev_uint16_CRenderPriorityGroup(long pNativeObject, int key, long ref_val);
		/**
		 * 在map容器中添加元素
		 * @param key 键
		 * @param val 值
		 * @return 成功增加true，否则false
		 */
		public boolean push(int key, NativeObjectPointer<com.earthview.world.graphic.RenderPriorityGroup> ref_val)
		{
			int keyParamValue = key;
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_ev_uint16_CRenderPriorityGroup(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
			return returnValue;
		}
		native private boolean exist_ev_uint16(long pNativeObject, int key);
		/**
		 * 判断元素是否存在
		 * @param key 键
		 * @return 存在true，否则false
		 */
		public boolean exist(int key)
		{
			int keyParamValue = key;
			boolean returnValue = exist_ev_uint16(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_ev_uint16(long pNativeObject, int key);
		/**
		 * 重载[]操作符
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.RenderPriorityGroup> OperatorIndex(int key)
		{
			int keyParamValue = key;
			long returnValue = OperatorIndex_ev_uint16(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.RenderPriorityGroup> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.RenderPriorityGroup>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_ev_uint16(long pNativeObject, int key);
		/**
		 * 获得键对应的值
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.RenderPriorityGroup> get(int key)
		{
			int keyParamValue = key;
			long returnValue = get_ev_uint16(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.RenderPriorityGroup> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.RenderPriorityGroup>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_ev_uint16(long pNativeObject, int key);
		/**
		 * 删除键对应的值
		 * @param key 键
		 */
		public void erase(int key)
		{
			int keyParamValue = key;
			erase_ev_uint16(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回容器的大小
		 * @param  
		 * @return 容器的大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
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
		native private boolean empty_void(long pNativeObject);
		/**
		 * 判断容器是否为空
		 * @param  
		 * @return 容器为空返回true，否则false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public PriorityMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public PriorityMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static PriorityMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			PriorityMap obj = null;
 			if(baseObj instanceof PriorityMap)
			{
				obj = (PriorityMap)baseObj;
			} else {
				obj = new PriorityMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "PriorityMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class PriorityMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			PriorityMap emptyInstance = new PriorityMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class PriorityMapPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair", new PriorityMapPairClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public PriorityMapPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("PriorityMapPair", null);
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
		public com.earthview.world.graphic.RenderPriorityGroup get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.RenderPriorityGroup __returnValue = new com.earthview.world.graphic.RenderPriorityGroup(CreatedWhenConstruct.CWC_NotToCreate, "CRenderPriorityGroup");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderPriorityGroup)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CRenderPriorityGroup");
			}
			return __returnValue;
		}
		
		native private void set_second_CRenderPriorityGroup (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.RenderPriorityGroup second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_CRenderPriorityGroup(this.nativeObject.pointer, secondParamValue);
		}
		
		public PriorityMapPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public PriorityMapPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static PriorityMapPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			PriorityMapPair obj = null;
 			if(baseObj instanceof PriorityMapPair)
			{
				obj = (PriorityMapPair)baseObj;
			} else {
				obj = new PriorityMapPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "PriorityMapPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class PriorityMapPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			PriorityMapPair emptyInstance = new PriorityMapPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class PriorityMapIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator", new PriorityMapIteratorClassFactory());
		}

		/**
		 * 构造函数
		 * @param lst 迭代器对应集合
		 */
		public PriorityMapIterator(com.earthview.world.graphic.RenderQueueGroup.PriorityMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("PriorityMapIterator", list);
		}

		/**
		 * 复制构造函数
		 * @param other 其它迭代器
		 */
		public PriorityMapIterator(com.earthview.world.graphic.RenderQueueGroup.PriorityMapIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("PriorityMapIterator", list);
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
		public com.earthview.world.graphic.RenderPriorityGroup nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.RenderPriorityGroup __returnValue = new com.earthview.world.graphic.RenderPriorityGroup(CreatedWhenConstruct.CWC_NotToCreate, "CRenderPriorityGroup");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderPriorityGroup)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CRenderPriorityGroup");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		/**
		 * 返回容器当前的值指针
		 * @param  
		 * @return 值地址
		 */
		public NativeObjectPointer<com.earthview.world.graphic.RenderPriorityGroup> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.RenderPriorityGroup> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.RenderPriorityGroup>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.RenderPriorityGroup next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.RenderPriorityGroup __returnValue = new com.earthview.world.graphic.RenderPriorityGroup(CreatedWhenConstruct.CWC_NotToCreate, "CRenderPriorityGroup");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderPriorityGroup)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CRenderPriorityGroup");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器首键值对
		 * @param  
		 * @return 首键值对
		 */
		public com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair __returnValue = new com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair(CreatedWhenConstruct.CWC_NotToCreate, "PriorityMapPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "PriorityMapPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾键值对
		 * @param  
		 * @return 尾键值对
		 */
		public com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair __returnValue = new com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair(CreatedWhenConstruct.CWC_NotToCreate, "PriorityMapPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "PriorityMapPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前键值对
		 * @param  
		 * @return 当前键值对
		 */
		public com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair __returnValue = new com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair(CreatedWhenConstruct.CWC_NotToCreate, "PriorityMapPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "PriorityMapPair");
			}
			return __returnValue;
		}
		public PriorityMapIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public PriorityMapIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static PriorityMapIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			PriorityMapIterator obj = null;
 			if(baseObj instanceof PriorityMapIterator)
			{
				obj = (PriorityMapIterator)baseObj;
			} else {
				obj = new PriorityMapIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "PriorityMapIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class PriorityMapIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			PriorityMapIterator emptyInstance = new PriorityMapIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ConstPriorityMapIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator", new ConstPriorityMapIteratorClassFactory());
		}

		/**
		 * 构造函数
		 * @param lst 迭代器对应集合
		 */
		public ConstPriorityMapIterator(com.earthview.world.graphic.RenderQueueGroup.PriorityMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("ConstPriorityMapIterator", list);
		}

		/**
		 * 复制构造函数
		 * @param other 其它迭代器
		 */
		public ConstPriorityMapIterator(com.earthview.world.graphic.RenderQueueGroup.ConstPriorityMapIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("ConstPriorityMapIterator", list);
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
		public com.earthview.world.graphic.RenderPriorityGroup nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.RenderPriorityGroup __returnValue = new com.earthview.world.graphic.RenderPriorityGroup(CreatedWhenConstruct.CWC_NotToCreate, "CRenderPriorityGroup");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderPriorityGroup)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CRenderPriorityGroup");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		/**
		 * 返回容器当前的值指针
		 * @param  
		 * @return 值地址
		 */
		public NativeObjectPointer<com.earthview.world.graphic.RenderPriorityGroup> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.RenderPriorityGroup> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.RenderPriorityGroup>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.RenderPriorityGroup next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.RenderPriorityGroup __returnValue = new com.earthview.world.graphic.RenderPriorityGroup(CreatedWhenConstruct.CWC_NotToCreate, "CRenderPriorityGroup");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderPriorityGroup)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CRenderPriorityGroup");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器首键值对
		 * @param  
		 * @return 首键值对
		 */
		public com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair __returnValue = new com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair(CreatedWhenConstruct.CWC_NotToCreate, "PriorityMapPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "PriorityMapPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾键值对
		 * @param  
		 * @return 尾键值对
		 */
		public com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair __returnValue = new com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair(CreatedWhenConstruct.CWC_NotToCreate, "PriorityMapPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "PriorityMapPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前键值对
		 * @param  
		 * @return 当前键值对
		 */
		public com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair __returnValue = new com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair(CreatedWhenConstruct.CWC_NotToCreate, "PriorityMapPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderQueueGroup.PriorityMapPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "PriorityMapPair");
			}
			return __returnValue;
		}
		public ConstPriorityMapIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ConstPriorityMapIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ConstPriorityMapIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ConstPriorityMapIterator obj = null;
 			if(baseObj instanceof ConstPriorityMapIterator)
			{
				obj = (ConstPriorityMapIterator)baseObj;
			} else {
				obj = new ConstPriorityMapIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ConstPriorityMapIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ConstPriorityMapIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ConstPriorityMapIterator emptyInstance = new ConstPriorityMapIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 构造函数
	 * @param parent 
	 * @param splitPassesByLightingType 
	 * @param splitNoShadowPasses 
	 * @param shadowCastersNotReceivers 
	 */
	public RenderQueueGroup(com.earthview.world.graphic.RenderQueue ref_parent, boolean splitPassesByLightingType, boolean splitNoShadowPasses, boolean shadowCastersNotReceivers) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer splitPassesByLightingTypePtr = new BasePointer(splitPassesByLightingType);
		list.add("splitPassesByLightingType", splitPassesByLightingTypePtr.get());
		BasePointer splitNoShadowPassesPtr = new BasePointer(splitNoShadowPasses);
		list.add("splitNoShadowPasses", splitNoShadowPassesPtr.get());
		BasePointer shadowCastersNotReceiversPtr = new BasePointer(shadowCastersNotReceivers);
		list.add("shadowCastersNotReceivers", shadowCastersNotReceiversPtr.get());
		Create("CRenderQueueGroup", list);
	}

	native private long getIterator_void(long pNativeObject);
	/**
	 * 获得一个通过子内容浏览的迭代器
	 * @param  
	 * @return 迭代器
	 */
	public com.earthview.world.graphic.RenderQueueGroup.PriorityMapIterator getIterator()
	{
		long returnValue = getIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.RenderQueueGroup.PriorityMapIterator __returnValue = new com.earthview.world.graphic.RenderQueueGroup.PriorityMapIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "PriorityMapIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderQueueGroup.PriorityMapIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "PriorityMapIterator");
		}
		return __returnValue;
	}
	native private void addRenderable_CRenderable_CTechnique_ev_uint16(long pNativeObject, long pRend, long pTech, int priority);
	/**
	 * 运用已给的属性在组中添加一个渲染接口
	 * @param pRend 
	 * @param pTech 
	 * @param priority 
	 */
	public void addRenderable(com.earthview.world.graphic.Renderable pRend, com.earthview.world.graphic.Technique pTech, int priority)
	{
		long pRendParamValue = (pRend == null ? 0L : pRend.nativeObject.pointer);
		long pTechParamValue = (pTech == null ? 0L : pTech.nativeObject.pointer);
		int priorityParamValue = priority;
		addRenderable_CRenderable_CTechnique_ev_uint16(this.nativeObject.pointer, pRendParamValue, pTechParamValue, priorityParamValue);
	}
	native private void clear_ev_bool(long pNativeObject, boolean destroy);
	/**
	 * 清空组中的渲染接口
	 * @param destory 
	 */
	public void clear(boolean destroy)
	{
		boolean destroyParamValue = destroy;
		clear_ev_bool(this.nativeObject.pointer, destroyParamValue);
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空组中的渲染接口
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void setShadowsEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 指出是否对已给队列组做阴影设置
	 * @param destory 
	 */
	public void setShadowsEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setShadowsEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getShadowsEnabled_void(long pNativeObject);
	/**
	 * 获得阴影对这个队列是否可用
	 * @param  
	 * @return 可用返回true，否则返回false
	 */
	public boolean getShadowsEnabled()
	{
		boolean returnValue = getShadowsEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSplitPassesByLightingType_ev_bool(long pNativeObject, boolean split);
	/**
	 * 队列中是否对通过光照类型进行划分的通路进行设置
	 * @param split 
	 */
	public void setSplitPassesByLightingType(boolean split)
	{
		boolean splitParamValue = split;
		setSplitPassesByLightingType_ev_bool(this.nativeObject.pointer, splitParamValue);
	}
	native private void setSplitNoShadowPasses_ev_bool(long pNativeObject, boolean split);
	/**
	 * 队列中是否对接收阴影已经关闭的通路进行划分设置
	 * @param split 
	 */
	public void setSplitNoShadowPasses(boolean split)
	{
		boolean splitParamValue = split;
		setSplitNoShadowPasses_ev_bool(this.nativeObject.pointer, splitParamValue);
	}
	native private void setShadowCastersCannotBeReceivers_ev_bool(long pNativeObject, boolean ind);
	/**
	 * 对投射阴影的实体是否不再接收阴影进行设置
	 * @param ind 
	 */
	public void setShadowCastersCannotBeReceivers(boolean ind)
	{
		boolean indParamValue = ind;
		setShadowCastersCannotBeReceivers_ev_bool(this.nativeObject.pointer, indParamValue);
	}
	native private void resetOrganisationModes_void(long pNativeObject);
	/**
	 * 重新设置实体需要的组织模型
	 * @param  
	 */
	public void resetOrganisationModes()
	{
		resetOrganisationModes_void(this.nativeObject.pointer);
	}
	native private void addOrganisationMode_OrganisationMode(long pNativeObject, int om);
	/**
	 * 给实体添加一个分组模型
	 * @param om 
	 */
	public void addOrganisationMode(com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode om)
	{
		int omParamValue = om.getValue();
		addOrganisationMode_OrganisationMode(this.nativeObject.pointer, omParamValue);
	}
	native private void defaultOrganisationMode_void(long pNativeObject);
	/**
	 * 设置实体的分组模型为默认值
	 * @param  
	 */
	public void defaultOrganisationMode()
	{
		defaultOrganisationMode_void(this.nativeObject.pointer);
	}
	native private void merge_CRenderQueueGroup(long pNativeObject, long rhs);
	/**
	 * 融合渲染接口
	 * @param rhs 
	 */
	public void merge(com.earthview.world.graphic.RenderQueueGroup rhs)
	{
		long rhsParamValue = (rhs == null ? 0L : rhs.nativeObject.pointer);
		merge_CRenderQueueGroup(this.nativeObject.pointer, rhsParamValue);
	}
	public RenderQueueGroup(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderQueueGroup(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RenderQueueGroup fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderQueueGroup obj = null;
 		if(baseObj instanceof RenderQueueGroup)
		{
			obj = (RenderQueueGroup)baseObj;
		} else {
			obj = new RenderQueueGroup(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderQueueGroup");
			obj.increaseCast();
		}

		return obj;
	}
}
