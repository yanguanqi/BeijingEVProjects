package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 顶点姿态关键帧管理关键帧的顶点姿态操作
 */
public class VertexPoseKeyFrame extends com.earthview.world.graphic.KeyFrame {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CVertexPoseKeyFrame", new VertexPoseKeyFrameClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCVertexPoseKeyFrameProxy", new VertexPoseKeyFrameClassFactory());
	}

	/**
	 * 构造函数
	 * @param parent 动画轨迹对象
	 * @param time 变换的关键帧时间点
	 */
	public VertexPoseKeyFrame(com.earthview.world.graphic.AnimationTrack ref_parent, double time) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer timePtr = new BasePointer(time);
		list.add("time", timePtr.get());
		Create("JCVertexPoseKeyFrameProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.VertexPoseKeyFrame".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 一定的影响系数下，顶点姿态关键帧姿态的引用类管理关键帧的顶点姿态的引用
	 */
	public static class PoseRef extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef", new PoseRefClassFactory());
		}

		native private int get_poseIndex_void(long pNativeObject);
		public int get_poseIndex()
		{
			int jniValue = get_poseIndex_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_poseIndex_ev_uint16 (long pNativeObject, int value);
		public void set_poseIndex(int poseIndex)
		{
			int poseIndexParamValue = poseIndex;
			
			set_poseIndex_ev_uint16(this.nativeObject.pointer, poseIndexParamValue);
		}
		
		native private double get_influence_void(long pNativeObject);
		public double get_influence()
		{
			double jniValue = get_influence_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_influence_Real (long pNativeObject, double value);
		public void set_influence(double influence)
		{
			double influenceParamValue = influence;
			
			set_influence_Real(this.nativeObject.pointer, influenceParamValue);
		}
		
		/**
		 * 默认构造函数
		 * @param  
		 */
		public PoseRef() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("PoseRef", null);
		}

		/**
		 * 构造函数
		 * @param p 姿态索引
		 * @param i 影响系数
		 */
		public PoseRef(int p, double i) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer pPtr = new BasePointer(p);
			list.add("p", pPtr.get());
			BasePointer iPtr = new BasePointer(i);
			list.add("i", iPtr.get());
			Create("PoseRef", list);
		}

		public PoseRef(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public PoseRef(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static PoseRef fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			PoseRef obj = null;
 			if(baseObj instanceof PoseRef)
			{
				obj = (PoseRef)baseObj;
			} else {
				obj = new PoseRef(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "PoseRef");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class PoseRefClassFactory implements IClassFactory {
		public BaseObject create()
		{
			PoseRef emptyInstance = new PoseRef(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 姿态集合管理顶点动画姿态
	 */
	public static class PoseRefList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList", new PoseRefListClassFactory());
		}

		/**
		 * 构造函数
		 * @param  
		 */
		public PoseRefList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("PoseRefList", null);
		}

		native private void push_back_PoseRef(long pNativeObject, long t);
		/**
		 * 在容器最后添加元素
		 * @param t 元素值
		 */
		public void push_back(com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_PoseRef(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		/**
		 * 删除容器最后元素
		 * @param  
		 */
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		/**
		 * 返回容器首个元素
		 * @param  
		 * @return 返回容器首个元素
		 */
		public com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef __returnValue = new com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef(CreatedWhenConstruct.CWC_NotToCreate, "PoseRef");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "PoseRef");
			}
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		/**
		 * 返回容器最后元素
		 * @param  
		 * @return 返回容器最后元素
		 */
		public com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef __returnValue = new com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef(CreatedWhenConstruct.CWC_NotToCreate, "PoseRef");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "PoseRef");
			}
			return __returnValue;
		}
		native private void insert_ev_uint32_PoseRef(long pNativeObject, long pos, long t);
		/**
		 * 容器中间位置插入元素
		 * @param pos 位置
		 * @param t 元素值
		 */
		public void insert(long pos, com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_PoseRef(this.nativeObject.pointer, posParamValue, tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		/**
		 * 删除容器中间位置元素
		 * @param pos 位置
		 */
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 返回容器是否为空
		 * @param  
		 * @return 容器为空返回true，否则false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		/**
		 * 重载[]操作符
		 * @param n 下标位置
		 * @return 返回下标对应的值
		 */
		public com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef __returnValue = new com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef(CreatedWhenConstruct.CWC_NotToCreate, "PoseRef");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "PoseRef");
			}
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		/**
		 * 返回某位置的元素值
		 * @param n 位置
		 * @return 返回位置对应的值
		 */
		public com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef __returnValue = new com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef(CreatedWhenConstruct.CWC_NotToCreate, "PoseRef");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "PoseRef");
			}
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回元素的数量大小
		 * @param  
		 * @return 返回元素的数量大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		/**
		 * 改变容器中元素数量大小
		 * @param newSize 改变的容器中元素数量大小
		 */
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		/**
		 * 改变容器中最小的元素容纳数量
		 * @param count 最小的元素容纳数量
		 */
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清空所有元素
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public PoseRefList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public PoseRefList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static PoseRefList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			PoseRefList obj = null;
 			if(baseObj instanceof PoseRefList)
			{
				obj = (PoseRefList)baseObj;
			} else {
				obj = new PoseRefList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "PoseRefList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class PoseRefListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			PoseRefList emptyInstance = new PoseRefList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private void addPoseReference_ev_uint16_Real(long pNativeObject, int poseIndex, double influence);
	/**
	 * 增加关键帧姿态
	 * @param poseIndex 姿态索引
	 * @param influence 影响系数
	 */
	public void addPoseReference(int poseIndex, double influence)
	{
		int poseIndexParamValue = poseIndex;
		double influenceParamValue = influence;
		addPoseReference_ev_uint16_Real(this.nativeObject.pointer, poseIndexParamValue, influenceParamValue);
	}
	native private void updatePoseReference_ev_uint16_Real(long pNativeObject, int poseIndex, double influence);
	/**
	 * 更新关键帧姿态
	 * @param poseIndex 姿态索引
	 * @param influence 影响系数
	 */
	public void updatePoseReference(int poseIndex, double influence)
	{
		int poseIndexParamValue = poseIndex;
		double influenceParamValue = influence;
		updatePoseReference_ev_uint16_Real(this.nativeObject.pointer, poseIndexParamValue, influenceParamValue);
	}
	native private void removePoseReference_ev_uint16(long pNativeObject, int poseIndex);
	/**
	 * 删除关键帧姿态
	 * @param poseIndex 姿态索引
	 */
	public void removePoseReference(int poseIndex)
	{
		int poseIndexParamValue = poseIndex;
		removePoseReference_ev_uint16(this.nativeObject.pointer, poseIndexParamValue);
	}
	native private void removeAllPoseReferences_void(long pNativeObject);
	/**
	 * 删除所有关键帧姿态
	 * @param  
	 */
	public void removeAllPoseReferences()
	{
		removeAllPoseReferences_void(this.nativeObject.pointer);
	}
	native private long getPoseReferences_void(long pNativeObject);
	/**
	 * 获得关键帧姿态集合
	 * @param  
	 * @return 关键帧姿态集合
	 */
	public com.earthview.world.graphic.VertexPoseKeyFrame.PoseRefList getPoseReferences()
	{
		long returnValue = getPoseReferences_void(this.nativeObject.pointer);
		com.earthview.world.graphic.VertexPoseKeyFrame.PoseRefList __returnValue = new com.earthview.world.graphic.VertexPoseKeyFrame.PoseRefList(CreatedWhenConstruct.CWC_NotToCreate, "PoseRefList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexPoseKeyFrame.PoseRefList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "PoseRefList");
		}
		return __returnValue;
	}
	///typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList> EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator;
	/// <summary>
	/// 姿态集合迭代器
	/// 管理姿态集合迭代器操作
	/// </summary>
	public static class PoseRefIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator", new PoseRefIteratorClassFactory());
		}

		/**
		 * 构造函数
		 * @param vec 迭代器对应集合
		 */
		public PoseRefIterator(com.earthview.world.graphic.VertexPoseKeyFrame.PoseRefList vec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer vecPtr = new BasePointer(vec);
			list.add("vec", vecPtr.get());
			Create("PoseRefIterator", list);
		}

		public PoseRefIterator(com.earthview.world.graphic.VertexPoseKeyFrame.PoseRefIterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("PoseRefIterator", list);
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
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前元素值
		 * @param  
		 * @return 当前元素值
		 */
		public com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef __returnValue = new com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "PoseRef");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "PoseRef");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器下一元素值
		 * @param  
		 * @return 下一元素值
		 */
		public com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef __returnValue = new com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "PoseRef");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "PoseRef");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器头部元素值
		 * @param  
		 * @return 头部元素值
		 */
		public com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef __returnValue = new com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "PoseRef");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "PoseRef");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾部元素值
		 * @param  
		 * @return 尾部元素值
		 */
		public com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef __returnValue = new com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "PoseRef");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "PoseRef");
			}
			return __returnValue;
		}
		public PoseRefIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public PoseRefIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static PoseRefIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			PoseRefIterator obj = null;
 			if(baseObj instanceof PoseRefIterator)
			{
				obj = (PoseRefIterator)baseObj;
			} else {
				obj = new PoseRefIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "PoseRefIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class PoseRefIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			PoseRefIterator emptyInstance = new PoseRefIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList> EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator;
	/// <summary>
	/// 姿态集合迭代器
	/// 管理姿态集合迭代器操作
	/// </summary>
	public static class ConstPoseRefIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator", new ConstPoseRefIteratorClassFactory());
		}

		/**
		 * 构造函数
		 * @param vec 迭代器对应集合
		 */
		public ConstPoseRefIterator(com.earthview.world.graphic.VertexPoseKeyFrame.PoseRefList vec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer vecPtr = new BasePointer(vec);
			list.add("vec", vecPtr.get());
			Create("ConstPoseRefIterator", list);
		}

		/**
		 * 复制构造函数
		 * @param rhs 其它迭代器
		 */
		public ConstPoseRefIterator(com.earthview.world.graphic.VertexPoseKeyFrame.ConstPoseRefIterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("ConstPoseRefIterator", list);
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
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前元素值
		 * @param  
		 * @return 当前元素值
		 */
		public com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef __returnValue = new com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "PoseRef");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "PoseRef");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器下一元素值
		 * @param  
		 * @return 下一元素值
		 */
		public com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef __returnValue = new com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "PoseRef");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "PoseRef");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器头部元素值
		 * @param  
		 * @return 头部元素值
		 */
		public com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef __returnValue = new com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "PoseRef");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "PoseRef");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾部元素值
		 * @param  
		 * @return 尾部元素值
		 */
		public com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef __returnValue = new com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "PoseRef");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexPoseKeyFrame.PoseRef)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "PoseRef");
			}
			return __returnValue;
		}
		public ConstPoseRefIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ConstPoseRefIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ConstPoseRefIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ConstPoseRefIterator obj = null;
 			if(baseObj instanceof ConstPoseRefIterator)
			{
				obj = (ConstPoseRefIterator)baseObj;
			} else {
				obj = new ConstPoseRefIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ConstPoseRefIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ConstPoseRefIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ConstPoseRefIterator emptyInstance = new ConstPoseRefIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getPoseReferenceIterator_void(long pNativeObject);
	/**
	 * 返回姿态容器迭代器
	 * @param  
	 * @return 尾部元素值
	 */
	public com.earthview.world.graphic.VertexPoseKeyFrame.PoseRefIterator getPoseReferenceIterator()
	{
		long returnValue = getPoseReferenceIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.VertexPoseKeyFrame.PoseRefIterator __returnValue = new com.earthview.world.graphic.VertexPoseKeyFrame.PoseRefIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "PoseRefIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexPoseKeyFrame.PoseRefIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "PoseRefIterator");
		}
		return __returnValue;
	}
	native private long _clone_CAnimationTrack(long pNativeObject, long ref_newParent);
	/**
	 * clone当前顶点动画关键帧
	 * @param newParent 数字关键帧所属动画轨迹
	 * @return 复制的数字关键帧
	 */
	public com.earthview.world.graphic.KeyFrame _clone(com.earthview.world.graphic.AnimationTrack ref_newParent)
	{
		long ref_newParentParamValue = (ref_newParent == null ? 0L : ref_newParent.nativeObject.pointer);
		long returnValue = _clone_CAnimationTrack(this.nativeObject.pointer, ref_newParentParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.KeyFrame __returnValue = new com.earthview.world.graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CKeyFrame");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.KeyFrame)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CKeyFrame");
		}
		return __returnValue;
	}
	native private long _clone_CAnimationTrack_NoVirtual(long pNativeObject, long ref_newParent);
	protected com.earthview.world.graphic.KeyFrame _clone_NoVirtual(com.earthview.world.graphic.AnimationTrack ref_newParent)
	{
		long ref_newParentParamValue = (ref_newParent == null ? 0L : ref_newParent.nativeObject.pointer);
		long returnValue = _clone_CAnimationTrack_NoVirtual(this.nativeObject.pointer, ref_newParentParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.KeyFrame __returnValue = new com.earthview.world.graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CKeyFrame");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.KeyFrame)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CKeyFrame");
		}
		return __returnValue;
	}

	native private void _applyBaseKeyFrame_CVertexPoseKeyFrame(long pNativeObject, long base);
	public void _applyBaseKeyFrame(com.earthview.world.graphic.VertexPoseKeyFrame base)
	{
		long baseParamValue = (base == null ? 0L : base.nativeObject.pointer);
		_applyBaseKeyFrame_CVertexPoseKeyFrame(this.nativeObject.pointer, baseParamValue);
	}
	public VertexPoseKeyFrame(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VertexPoseKeyFrame(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register__clone_CAnimationTrack(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register__clone_CAnimationTrack(this.nativeObject.pointer, "_clone_CAnimationTrack_callback");
		}
	}
	
	public static VertexPoseKeyFrame fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VertexPoseKeyFrame obj = null;
 		if(baseObj instanceof VertexPoseKeyFrame)
		{
			obj = (VertexPoseKeyFrame)baseObj;
		} else {
			obj = new VertexPoseKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVertexPoseKeyFrame");
			obj.increaseCast();
		}

		return obj;
	}
}
