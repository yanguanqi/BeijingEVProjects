package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 拥有EarthView::World::Graphic::CRenderQueueInvocation对象的线性序列类
 */
public class RenderQueueInvocationSequence extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderQueueInvocationSequence", new RenderQueueInvocationSequenceClassFactory());
	}

	/**
	 * 构造函数
	 * @param name 
	 */
	public RenderQueueInvocationSequence(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("CRenderQueueInvocationSequence", list);
	}

	native private long getName_void(long pNativeObject);
	/**
	 * 获得序列的名字
	 * @param  
	 */
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long add_ev_uint8_EVString(long pNativeObject, short renderQueueGroupID, String invocationName);
	/**
	 * 在序列中添加一个标准的调用
	 * @param renderQueueGroupID 渲染器队列组的ID号
	 * @param invocationName 识别调用的名字
	 */
	public com.earthview.world.graphic.RenderQueueInvocation add(short renderQueueGroupID, String invocationName)
	{
		short renderQueueGroupIDParamValue = renderQueueGroupID;
		String invocationNameParamValue = invocationName;
		long returnValue = add_ev_uint8_EVString(this.nativeObject.pointer, renderQueueGroupIDParamValue, invocationNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderQueueInvocation __returnValue = new com.earthview.world.graphic.RenderQueueInvocation(CreatedWhenConstruct.CWC_NotToCreate, "CRenderQueueInvocation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderQueueInvocation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderQueueInvocation");
		}
		return __returnValue;
	}
	native private void add_CRenderQueueInvocation(long pNativeObject, long ref_i);
	/**
	 * 在序列中添加一个自定义调用
	 * @param i 
	 */
	public void add(com.earthview.world.graphic.RenderQueueInvocation ref_i)
	{
		long ref_iParamValue = (ref_i == null ? 0L : ref_i.nativeObject.pointer);
		add_CRenderQueueInvocation(this.nativeObject.pointer, ref_iParamValue);
	}
	native private long size_void(long pNativeObject);
	/**
	 * 获得在序列中调用的数量
	 * @param  
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空序列中所有的调用
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private long get_ev_size_t(long pNativeObject, long index);
	/**
	 * 在给定索引的条件下获得调用的细节
	 * @param index 
	 */
	public com.earthview.world.graphic.RenderQueueInvocation get(long index)
	{
		long indexParamValue = index;
		long returnValue = get_ev_size_t(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderQueueInvocation __returnValue = new com.earthview.world.graphic.RenderQueueInvocation(CreatedWhenConstruct.CWC_NotToCreate, "CRenderQueueInvocation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderQueueInvocation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderQueueInvocation");
		}
		return __returnValue;
	}
	native private void remove_ev_size_t(long pNativeObject, long index);
	/**
	 * 通过索引删除调用
	 * @param index 
	 */
	public void remove(long index)
	{
		long indexParamValue = index;
		remove_ev_size_t(this.nativeObject.pointer, indexParamValue);
	}
	native private long iterator_void(long pNativeObject);
	/**
	 * 获得一个迭代器
	 * @param index 
	 */
	public com.earthview.world.graphic.RenderQueueInvocationIterator iterator()
	{
		long returnValue = iterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.RenderQueueInvocationIterator __returnValue = new com.earthview.world.graphic.RenderQueueInvocationIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "RenderQueueInvocationIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderQueueInvocationIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "RenderQueueInvocationIterator");
		}
		return __returnValue;
	}
	public RenderQueueInvocationSequence(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderQueueInvocationSequence(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RenderQueueInvocationSequence fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderQueueInvocationSequence obj = null;
 		if(baseObj instanceof RenderQueueInvocationSequence)
		{
			obj = (RenderQueueInvocationSequence)baseObj;
		} else {
			obj = new RenderQueueInvocationSequence(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderQueueInvocationSequence");
			obj.increaseCast();
		}

		return obj;
	}
}
