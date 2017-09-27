package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 顶点姿态类管理顶点的姿态变换数据，根据不同的权重和对顶点数据的偏移融合不同的姿态，来产生最后的结果
 */
public class Pose extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CPose", new PoseClassFactory());
	}

	/**
	 * 构造函数
	 * @param target 目标几何姿态数据的索引
	 * @param name 姿态名称
	 */
	public Pose(int target, String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer targetPtr = new BasePointer(target);
		list.add("target", targetPtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("CPose", list);
	}

	/**
	 * 构造函数
	 * @param target 目标几何姿态数据的索引
	 */
	public Pose(int target) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer targetPtr = new BasePointer(target);
		list.add("target", targetPtr.get());
		Create("CPose", list);
	}

	native private long getName_void(long pNativeObject);
	/**
	 * 获得姿态名称
	 * @param  
	 * @return 姿态名称
	 */
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private int getTarget_void(long pNativeObject);
	/**
	 * 获得目标几何姿态数据索引
	 * @param  
	 * @return 目标几何姿态数据索引
	 */
	public int getTarget()
	{
		int returnValue = getTarget_void(this.nativeObject.pointer);
		return returnValue;
	}
	///typedef map<ev_size_t, EarthView::World::Spatial::Math::CVector3> EarthView::World::Graphic::CPose::VertexOffsetMap;
	/// <summary>
	/// 顶点偏移数据集合类
	/// 管理顶点偏移数据
	/// </summary>
	public static class VertexOffsetMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CPose::VertexOffsetMap", new VertexOffsetMapClassFactory());
		}

		/**
		 * 构造函数
		 * @param  
		 */
		public VertexOffsetMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("VertexOffsetMap", null);
		}

		native private boolean push_ev_size_t_CVector3(long pNativeObject, long key, long val);
		/**
		 * 增加动画集合元素
		 * @param key 键
		 * @param val 值
		 * @return 成功增加true，否则false
		 */
		public boolean push(long key, com.earthview.world.spatial.math.Vector3 val)
		{
			long keyParamValue = key;
			long valParamValue = val.nativeObject.pointer;
			boolean returnValue = push_ev_size_t_CVector3(this.nativeObject.pointer, keyParamValue, valParamValue);
			return returnValue;
		}
		native private boolean exist_ev_size_t(long pNativeObject, long key);
		/**
		 * 判断元素是否存在
		 * @param key 键
		 * @return 存在true，否则false
		 */
		public boolean exist(long key)
		{
			long keyParamValue = key;
			boolean returnValue = exist_ev_size_t(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long key);
		/**
		 * 重载[]操作符
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public com.earthview.world.spatial.math.Vector3 OperatorIndex(long key)
		{
			long keyParamValue = key;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, keyParamValue);
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
		native private long get_ev_size_t(long pNativeObject, long key);
		/**
		 * 获得键对应的值
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public com.earthview.world.spatial.math.Vector3 get(long key)
		{
			long keyParamValue = key;
			long returnValue = get_ev_size_t(this.nativeObject.pointer, keyParamValue);
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
		native private void erase_ev_size_t(long pNativeObject, long key);
		/**
		 * 删除键对应的值
		 * @param key 键
		 */
		public void erase(long key)
		{
			long keyParamValue = key;
			erase_ev_size_t(this.nativeObject.pointer, keyParamValue);
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
		public VertexOffsetMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public VertexOffsetMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static VertexOffsetMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			VertexOffsetMap obj = null;
 			if(baseObj instanceof VertexOffsetMap)
			{
				obj = (VertexOffsetMap)baseObj;
			} else {
				obj = new VertexOffsetMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "VertexOffsetMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class VertexOffsetMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			VertexOffsetMap emptyInstance = new VertexOffsetMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 顶点偏移数据键值对结构
	 */
	public static class VertexOffsetPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CPose::VertexOffsetPair", new VertexOffsetPairClassFactory());
		}

		public VertexOffsetPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("VertexOffsetPair", null);
		}

		native private long get_first_void(long pNativeObject);
		public long get_first()
		{
			long jniValue = get_first_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_first_ev_size_t (long pNativeObject, long value);
		public void set_first(long first)
		{
			long firstParamValue = first;
			
			set_first_ev_size_t(this.nativeObject.pointer, firstParamValue);
		}
		
		native private long get_second_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector3 get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
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
		
		native private void set_second_CVector3 (long pNativeObject, long value);
		public void set_second(com.earthview.world.spatial.math.Vector3 second)
		{
			long secondParamValue = second.nativeObject.pointer;
			
			set_second_CVector3(this.nativeObject.pointer, secondParamValue);
		}
		
		public VertexOffsetPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public VertexOffsetPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static VertexOffsetPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			VertexOffsetPair obj = null;
 			if(baseObj instanceof VertexOffsetPair)
			{
				obj = (VertexOffsetPair)baseObj;
			} else {
				obj = new VertexOffsetPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "VertexOffsetPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class VertexOffsetPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			VertexOffsetPair emptyInstance = new VertexOffsetPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CPose::VertexOffsetMap> EarthView::World::Graphic::CPose::VertexOffsetIterator;
	/// <summary>
	/// 顶点偏移数据集合迭代器类
	/// 管理顶点偏移数据指针
	/// </summary>
	public static class VertexOffsetIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CPose::VertexOffsetIterator", new VertexOffsetIteratorClassFactory());
		}

		/**
		 * 构造函数
		 * @param lst 迭代器对应集合
		 */
		public VertexOffsetIterator(com.earthview.world.graphic.Pose.VertexOffsetMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("VertexOffsetIterator", list);
		}

		/**
		 * 复制构造函数
		 * @param other 其它迭代器
		 */
		public VertexOffsetIterator(com.earthview.world.graphic.Pose.VertexOffsetIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("VertexOffsetIterator", list);
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
		public com.earthview.world.spatial.math.Vector3 nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
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
		native private long nextValuePtr_void(long pNativeObject);
		/**
		 * 返回容器当前的值指针
		 * @param  
		 * @return 值地址
		 */
		public com.earthview.world.spatial.math.Vector3 nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
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
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.spatial.math.Vector3 next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
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
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器首键值对
		 * @param  
		 * @return 首键值对
		 */
		public com.earthview.world.graphic.Pose.VertexOffsetPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Pose.VertexOffsetPair __returnValue = new com.earthview.world.graphic.Pose.VertexOffsetPair(CreatedWhenConstruct.CWC_NotToCreate, "VertexOffsetPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pose.VertexOffsetPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "VertexOffsetPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾键值对
		 * @param  
		 * @return 尾键值对
		 */
		public com.earthview.world.graphic.Pose.VertexOffsetPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Pose.VertexOffsetPair __returnValue = new com.earthview.world.graphic.Pose.VertexOffsetPair(CreatedWhenConstruct.CWC_NotToCreate, "VertexOffsetPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pose.VertexOffsetPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "VertexOffsetPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前键值对
		 * @param  
		 * @return 当前键值对
		 */
		public com.earthview.world.graphic.Pose.VertexOffsetPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Pose.VertexOffsetPair __returnValue = new com.earthview.world.graphic.Pose.VertexOffsetPair(CreatedWhenConstruct.CWC_NotToCreate, "VertexOffsetPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pose.VertexOffsetPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "VertexOffsetPair");
			}
			return __returnValue;
		}
		public VertexOffsetIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public VertexOffsetIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static VertexOffsetIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			VertexOffsetIterator obj = null;
 			if(baseObj instanceof VertexOffsetIterator)
			{
				obj = (VertexOffsetIterator)baseObj;
			} else {
				obj = new VertexOffsetIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "VertexOffsetIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class VertexOffsetIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			VertexOffsetIterator emptyInstance = new VertexOffsetIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// An iterator over the vertex offsets
	///typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CPose::VertexOffsetMap> EarthView::World::Graphic::CPose::ConstVertexOffsetIterator;
	/// <summary>
	/// 顶点偏移数据集合迭代器类
	/// 管理顶点偏移数据指针
	/// </summary>
	public static class ConstVertexOffsetIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CPose::ConstVertexOffsetIterator", new ConstVertexOffsetIteratorClassFactory());
		}

		/**
		 * 构造函数
		 * @param lst 迭代器对应集合
		 */
		public ConstVertexOffsetIterator(com.earthview.world.graphic.Pose.VertexOffsetMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("ConstVertexOffsetIterator", list);
		}

		/**
		 * 复制构造函数
		 * @param other 其它迭代器
		 */
		public ConstVertexOffsetIterator(com.earthview.world.graphic.Pose.ConstVertexOffsetIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("ConstVertexOffsetIterator", list);
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
		native private long nextKey_void(long pNativeObject);
		/**
		 * 返回容器当前的键
		 * @param  
		 * @return 键
		 */
		public long nextKey()
		{
			long returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.spatial.math.Vector3 nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
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
		native private long nextValuePtr_void(long pNativeObject);
		/**
		 * 返回容器当前的值指针
		 * @param  
		 * @return 值地址
		 */
		public com.earthview.world.spatial.math.Vector3 nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
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
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.spatial.math.Vector3 next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
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
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器首键值对
		 * @param  
		 * @return 首键值对
		 */
		public com.earthview.world.graphic.Pose.VertexOffsetPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Pose.VertexOffsetPair __returnValue = new com.earthview.world.graphic.Pose.VertexOffsetPair(CreatedWhenConstruct.CWC_NotToCreate, "VertexOffsetPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pose.VertexOffsetPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "VertexOffsetPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾键值对
		 * @param  
		 * @return 尾键值对
		 */
		public com.earthview.world.graphic.Pose.VertexOffsetPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Pose.VertexOffsetPair __returnValue = new com.earthview.world.graphic.Pose.VertexOffsetPair(CreatedWhenConstruct.CWC_NotToCreate, "VertexOffsetPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pose.VertexOffsetPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "VertexOffsetPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前键值对
		 * @param  
		 * @return 当前键值对
		 */
		public com.earthview.world.graphic.Pose.VertexOffsetPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Pose.VertexOffsetPair __returnValue = new com.earthview.world.graphic.Pose.VertexOffsetPair(CreatedWhenConstruct.CWC_NotToCreate, "VertexOffsetPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pose.VertexOffsetPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "VertexOffsetPair");
			}
			return __returnValue;
		}
		public ConstVertexOffsetIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ConstVertexOffsetIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ConstVertexOffsetIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ConstVertexOffsetIterator obj = null;
 			if(baseObj instanceof ConstVertexOffsetIterator)
			{
				obj = (ConstVertexOffsetIterator)baseObj;
			} else {
				obj = new ConstVertexOffsetIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ConstVertexOffsetIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ConstVertexOffsetIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ConstVertexOffsetIterator emptyInstance = new ConstVertexOffsetIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// A collection of normals based on the vertex index
	///typedef map<size_t, EarthView::World::Spatial::Math::CVector3> EarthView::World::Graphic::CPose::NormalsMap;
	/// add for 1.8 by wj
	public static class NormalsMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CPose::NormalsMap", new NormalsMapClassFactory());
		}

		public NormalsMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("NormalsMap", null);
		}

		native private boolean push_ev_size_t_CVector3(long pNativeObject, long key, long val);
		public boolean push(long key, com.earthview.world.spatial.math.Vector3 val)
		{
			long keyParamValue = key;
			long valParamValue = val.nativeObject.pointer;
			boolean returnValue = push_ev_size_t_CVector3(this.nativeObject.pointer, keyParamValue, valParamValue);
			return returnValue;
		}
		native private boolean exist_ev_size_t(long pNativeObject, long key);
		public boolean exist(long key)
		{
			long keyParamValue = key;
			boolean returnValue = exist_ev_size_t(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long key);
		public com.earthview.world.spatial.math.Vector3 OperatorIndex(long key)
		{
			long keyParamValue = key;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, keyParamValue);
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
		native private long get_ev_size_t(long pNativeObject, long key);
		public com.earthview.world.spatial.math.Vector3 get(long key)
		{
			long keyParamValue = key;
			long returnValue = get_ev_size_t(this.nativeObject.pointer, keyParamValue);
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
		native private void erase_ev_size_t(long pNativeObject, long key);
		public void erase(long key)
		{
			long keyParamValue = key;
			erase_ev_size_t(this.nativeObject.pointer, keyParamValue);
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
		public NormalsMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public NormalsMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static NormalsMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			NormalsMap obj = null;
 			if(baseObj instanceof NormalsMap)
			{
				obj = (NormalsMap)baseObj;
			} else {
				obj = new NormalsMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "NormalsMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class NormalsMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			NormalsMap emptyInstance = new NormalsMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class NormalsPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CPose::NormalsPair", new NormalsPairClassFactory());
		}

		public NormalsPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("NormalsPair", null);
		}

		native private long get_first_void(long pNativeObject);
		public long get_first()
		{
			long jniValue = get_first_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_first_ev_size_t (long pNativeObject, long value);
		public void set_first(long first)
		{
			long firstParamValue = first;
			
			set_first_ev_size_t(this.nativeObject.pointer, firstParamValue);
		}
		
		native private long get_second_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector3 get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
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
		
		native private void set_second_CVector3 (long pNativeObject, long value);
		public void set_second(com.earthview.world.spatial.math.Vector3 second)
		{
			long secondParamValue = second.nativeObject.pointer;
			
			set_second_CVector3(this.nativeObject.pointer, secondParamValue);
		}
		
		public NormalsPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public NormalsPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static NormalsPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			NormalsPair obj = null;
 			if(baseObj instanceof NormalsPair)
			{
				obj = (NormalsPair)baseObj;
			} else {
				obj = new NormalsPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "NormalsPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class NormalsPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			NormalsPair emptyInstance = new NormalsPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// An iterator over the vertex offsets
	///typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CPose::NormalsMap> EarthView::World::Graphic::CPose::NormalsIterator;
	public static class NormalsIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CPose::NormalsIterator", new NormalsIteratorClassFactory());
		}

		public NormalsIterator(com.earthview.world.graphic.Pose.NormalsMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("NormalsIterator", list);
		}

		public NormalsIterator(com.earthview.world.graphic.Pose.NormalsIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("NormalsIterator", list);
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
		public com.earthview.world.spatial.math.Vector3 nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
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
		native private long nextValuePtr_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector3 nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
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
		native private long next_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector3 next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
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
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.Pose.NormalsPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Pose.NormalsPair __returnValue = new com.earthview.world.graphic.Pose.NormalsPair(CreatedWhenConstruct.CWC_NotToCreate, "NormalsPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pose.NormalsPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "NormalsPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.Pose.NormalsPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Pose.NormalsPair __returnValue = new com.earthview.world.graphic.Pose.NormalsPair(CreatedWhenConstruct.CWC_NotToCreate, "NormalsPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pose.NormalsPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "NormalsPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.Pose.NormalsPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Pose.NormalsPair __returnValue = new com.earthview.world.graphic.Pose.NormalsPair(CreatedWhenConstruct.CWC_NotToCreate, "NormalsPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pose.NormalsPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "NormalsPair");
			}
			return __returnValue;
		}
		public NormalsIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public NormalsIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static NormalsIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			NormalsIterator obj = null;
 			if(baseObj instanceof NormalsIterator)
			{
				obj = (NormalsIterator)baseObj;
			} else {
				obj = new NormalsIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "NormalsIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class NormalsIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			NormalsIterator emptyInstance = new NormalsIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// An iterator over the vertex offsets
	///typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CPose::NormalsMap> EarthView::World::Graphic::CPose::ConstNormalsIterator;
	public static class ConstNormalsIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CPose::ConstNormalsIterator", new ConstNormalsIteratorClassFactory());
		}

		public ConstNormalsIterator(com.earthview.world.graphic.Pose.NormalsMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("ConstNormalsIterator", list);
		}

		public ConstNormalsIterator(com.earthview.world.graphic.Pose.ConstNormalsIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("ConstNormalsIterator", list);
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
		native private long nextKey_void(long pNativeObject);
		public long nextKey()
		{
			long returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector3 nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
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
		native private long nextValuePtr_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector3 nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
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
		native private long next_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector3 next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
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
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.Pose.NormalsPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Pose.NormalsPair __returnValue = new com.earthview.world.graphic.Pose.NormalsPair(CreatedWhenConstruct.CWC_NotToCreate, "NormalsPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pose.NormalsPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "NormalsPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.Pose.NormalsPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Pose.NormalsPair __returnValue = new com.earthview.world.graphic.Pose.NormalsPair(CreatedWhenConstruct.CWC_NotToCreate, "NormalsPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pose.NormalsPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "NormalsPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.Pose.NormalsPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Pose.NormalsPair __returnValue = new com.earthview.world.graphic.Pose.NormalsPair(CreatedWhenConstruct.CWC_NotToCreate, "NormalsPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pose.NormalsPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "NormalsPair");
			}
			return __returnValue;
		}
		public ConstNormalsIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ConstNormalsIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ConstNormalsIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ConstNormalsIterator obj = null;
 			if(baseObj instanceof ConstNormalsIterator)
			{
				obj = (ConstNormalsIterator)baseObj;
			} else {
				obj = new ConstNormalsIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ConstNormalsIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ConstNormalsIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ConstNormalsIterator emptyInstance = new ConstNormalsIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private boolean getIncludesNormals_void(long pNativeObject);
	//// Return whether the pose vertices include normals
	public boolean getIncludesNormals()
	{
		boolean returnValue = getIncludesNormals_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void addVertex_ev_size_t_CVector3(long pNativeObject, long index, long offset);
	/**
	 * 增加顶点偏移姿态数据
	 * @param index 顶点索引
	 * @param offset 偏移数据
	 */
	public void addVertex(long index, com.earthview.world.spatial.math.Vector3 offset)
	{
		long indexParamValue = index;
		long offsetParamValue = offset.nativeObject.pointer;
		addVertex_ev_size_t_CVector3(this.nativeObject.pointer, indexParamValue, offsetParamValue);
	}
	native private void addVertex_size_t_CVector3_CVector3(long pNativeObject, long index, long offset, long normal);
	public void addVertex(long index, com.earthview.world.spatial.math.Vector3 offset, com.earthview.world.spatial.math.Vector3 normal)
	{
		long indexParamValue = index;
		long offsetParamValue = offset.nativeObject.pointer;
		long normalParamValue = normal.nativeObject.pointer;
		addVertex_size_t_CVector3_CVector3(this.nativeObject.pointer, indexParamValue, offsetParamValue, normalParamValue);
	}
	native private void removeVertex_ev_size_t(long pNativeObject, long index);
	/**
	 * 删除顶点偏移姿态数据
	 * @param index 顶点索引
	 */
	public void removeVertex(long index)
	{
		long indexParamValue = index;
		removeVertex_ev_size_t(this.nativeObject.pointer, indexParamValue);
	}
	native private void clearVertices_void(long pNativeObject);
	/**
	 * 删除所有顶点偏移姿态数据
	 * @param index 顶点索引
	 */
	public void clearVertices()
	{
		clearVertices_void(this.nativeObject.pointer);
	}
	native private long getVertexOffsetIterator_void(long pNativeObject);
	/**
	 * 获得顶点偏移姿态数据集合迭代器
	 * @param  
	 * @return 顶点偏移姿态数据集合迭代器
	 */
	public com.earthview.world.graphic.Pose.ConstVertexOffsetIterator getVertexOffsetIterator()
	{
		long returnValue = getVertexOffsetIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Pose.ConstVertexOffsetIterator __returnValue = new com.earthview.world.graphic.Pose.ConstVertexOffsetIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ConstVertexOffsetIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Pose.ConstVertexOffsetIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ConstVertexOffsetIterator");
		}
		return __returnValue;
	}
	native private long getVertexOffsets_void(long pNativeObject);
	/**
	 * 获得顶点偏移姿态数据集合
	 * @param  
	 * @return 顶点偏移姿态数据集合
	 */
	public com.earthview.world.graphic.Pose.VertexOffsetMap getVertexOffsets()
	{
		long returnValue = getVertexOffsets_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Pose.VertexOffsetMap __returnValue = new com.earthview.world.graphic.Pose.VertexOffsetMap(CreatedWhenConstruct.CWC_NotToCreate, "VertexOffsetMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Pose.VertexOffsetMap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "VertexOffsetMap");
		}
		return __returnValue;
	}
	native private long getNormalsIterator_void(long pNativeObject);
	public com.earthview.world.graphic.Pose.ConstNormalsIterator getNormalsIterator()
	{
		long returnValue = getNormalsIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Pose.ConstNormalsIterator __returnValue = new com.earthview.world.graphic.Pose.ConstNormalsIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ConstNormalsIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Pose.ConstNormalsIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ConstNormalsIterator");
		}
		return __returnValue;
	}
	native private long getNormals_void(long pNativeObject);
	public com.earthview.world.graphic.Pose.NormalsMap getNormals()
	{
		long returnValue = getNormals_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Pose.NormalsMap __returnValue = new com.earthview.world.graphic.Pose.NormalsMap(CreatedWhenConstruct.CWC_NotToCreate, "NormalsMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Pose.NormalsMap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "NormalsMap");
		}
		return __returnValue;
	}
	native private long _getHardwareVertexBuffer_CVertexData(long pNativeObject, long origData);
	/**
	 * 获得顶点偏移姿态数据对应的硬件顶点缓存
	 * @param numVertices 顶点数量
	 * @return 顶点偏移姿态数据对应的硬件顶点缓存
	 */
	public com.earthview.world.graphic.HardwareVertexBufferSharedPtr _getHardwareVertexBuffer(com.earthview.world.graphic.VertexData origData)
	{
		long origDataParamValue = (origData == null ? 0L : origData.nativeObject.pointer);
		long returnValue = _getHardwareVertexBuffer_CVertexData(this.nativeObject.pointer, origDataParamValue);
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate, "CHardwareVertexBufferSharedPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
		}
		return __returnValue;
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * clone顶点姿态数据
	 * @param  
	 * @return clone顶点姿态数据
	 */
	public com.earthview.world.graphic.Pose ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Pose __returnValue = new com.earthview.world.graphic.Pose(CreatedWhenConstruct.CWC_NotToCreate, "CPose");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Pose)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPose");
		}
		return __returnValue;
	}
	public Pose(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Pose(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Pose fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Pose obj = null;
 		if(baseObj instanceof Pose)
		{
			obj = (Pose)baseObj;
		} else {
			obj = new Pose(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPose");
			obj.increaseCast();
		}

		return obj;
	}
}
