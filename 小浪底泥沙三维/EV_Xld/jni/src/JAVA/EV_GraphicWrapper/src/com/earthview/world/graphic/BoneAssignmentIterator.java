package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BoneAssignmentIterator extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::BoneAssignmentIterator", new BoneAssignmentIteratorClassFactory());
	}

	/**
	 * 构造函数
	 * @param lst 迭代器对应集合
	 */
	public BoneAssignmentIterator(com.earthview.world.graphic.Mesh.VertexBoneAssignmentList lst) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer lstPtr = new BasePointer(lst);
		list.add("lst", lstPtr.get());
		Create("BoneAssignmentIterator", list);
	}

	/**
	 * 复制构造函数
	 * @param other 其它迭代器
	 */
	public BoneAssignmentIterator(com.earthview.world.graphic.BoneAssignmentIterator other) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer otherPtr = new BasePointer(other);
		list.add("other", otherPtr.get());
		Create("BoneAssignmentIterator", list);
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
	public com.earthview.world.graphic.VertexBoneAssignment nextValue()
	{
		long returnValue = nextValue_void(this.nativeObject.pointer);
		com.earthview.world.graphic.VertexBoneAssignment __returnValue = new com.earthview.world.graphic.VertexBoneAssignment(new InstancePointer(returnValue), false);
		return __returnValue;
	}
	native private long nextValuePtr_void(long pNativeObject);
	/**
	 * 返回容器当前的值指针
	 * @param  
	 * @return 值地址
	 */
	public com.earthview.world.graphic.VertexBoneAssignment nextValuePtr()
	{
		long returnValue = nextValuePtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexBoneAssignment __returnValue = new com.earthview.world.graphic.VertexBoneAssignment(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long next_void(long pNativeObject);
	/**
	 * 返回容器当前的值
	 * @param  
	 * @return 值
	 */
	public com.earthview.world.graphic.VertexBoneAssignment next()
	{
		long returnValue = next_void(this.nativeObject.pointer);
		com.earthview.world.graphic.VertexBoneAssignment __returnValue = new com.earthview.world.graphic.VertexBoneAssignment(new InstancePointer(returnValue), false);
		return __returnValue;
	}
	native private long getBegin_void(long pNativeObject);
	/**
	 * 返回容器首键值对
	 * @param  
	 * @return 首键值对
	 */
	public com.earthview.world.graphic.VertexBoneAssignmentPair getBegin()
	{
		long returnValue = getBegin_void(this.nativeObject.pointer);
		com.earthview.world.graphic.VertexBoneAssignmentPair __returnValue = new com.earthview.world.graphic.VertexBoneAssignmentPair(CreatedWhenConstruct.CWC_NotToCreate, "VertexBoneAssignmentPair");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexBoneAssignmentPair)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "VertexBoneAssignmentPair");
		}
		return __returnValue;
	}
	native private long getEnd_void(long pNativeObject);
	/**
	 * 返回容器尾键值对
	 * @param  
	 * @return 尾键值对
	 */
	public com.earthview.world.graphic.VertexBoneAssignmentPair getEnd()
	{
		long returnValue = getEnd_void(this.nativeObject.pointer);
		com.earthview.world.graphic.VertexBoneAssignmentPair __returnValue = new com.earthview.world.graphic.VertexBoneAssignmentPair(CreatedWhenConstruct.CWC_NotToCreate, "VertexBoneAssignmentPair");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexBoneAssignmentPair)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "VertexBoneAssignmentPair");
		}
		return __returnValue;
	}
	native private long getCurrent_void(long pNativeObject);
	/**
	 * 返回容器当前键值对
	 * @param  
	 * @return 当前键值对
	 */
	public com.earthview.world.graphic.VertexBoneAssignmentPair getCurrent()
	{
		long returnValue = getCurrent_void(this.nativeObject.pointer);
		com.earthview.world.graphic.VertexBoneAssignmentPair __returnValue = new com.earthview.world.graphic.VertexBoneAssignmentPair(CreatedWhenConstruct.CWC_NotToCreate, "VertexBoneAssignmentPair");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexBoneAssignmentPair)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "VertexBoneAssignmentPair");
		}
		return __returnValue;
	}
	public BoneAssignmentIterator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BoneAssignmentIterator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static BoneAssignmentIterator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BoneAssignmentIterator obj = null;
 		if(baseObj instanceof BoneAssignmentIterator)
		{
			obj = (BoneAssignmentIterator)baseObj;
		} else {
			obj = new BoneAssignmentIterator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "BoneAssignmentIterator");
			obj.increaseCast();
		}

		return obj;
	}
}
