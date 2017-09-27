package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 渲染窗口容器类描述渲染窗口容器的一些参数
 */
public class RenderWindowDescriptionList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RenderWindowDescriptionList", new RenderWindowDescriptionListClassFactory());
	}

	/**
	 * 默认的构造函数
	 * @param  
	 */
	public RenderWindowDescriptionList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("RenderWindowDescriptionList", null);
	}

	native private void push_back_RenderWindowDescription(long pNativeObject, long t);
	/**
	 * 在容器后面追加对象
	 * @param t 需要追加的对象
	 */
	public void push_back(com.earthview.world.graphic.RenderWindowDescription t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_RenderWindowDescription(this.nativeObject.pointer, tParamValue);
	}
	native private void remove_ev_size_t(long pNativeObject, long pos);
	/**
	 * 移除元素
	 * @param pos 需要移除元素的位置
	 */
	public void remove(long pos)
	{
		long posParamValue = pos;
		remove_ev_size_t(this.nativeObject.pointer, posParamValue);
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
	native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
	/**
	 * 数组下标"[]"重载
	 * @param n 下标
	 * @return 返回对应下标的数组中的值
	 */
	public com.earthview.world.graphic.RenderWindowDescription OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		com.earthview.world.graphic.RenderWindowDescription __returnValue = new com.earthview.world.graphic.RenderWindowDescription(CreatedWhenConstruct.CWC_NotToCreate, "RenderWindowDescription");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderWindowDescription)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "RenderWindowDescription");
		}
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	/**
	 * 检查发生变化的下标
	 * @param n 下标
	 * @return 返回对应下标的位置
	 */
	public com.earthview.world.graphic.RenderWindowDescription at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		com.earthview.world.graphic.RenderWindowDescription __returnValue = new com.earthview.world.graphic.RenderWindowDescription(CreatedWhenConstruct.CWC_NotToCreate, "RenderWindowDescription");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderWindowDescription)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "RenderWindowDescription");
		}
		return __returnValue;
	}
	native private long size_void(long pNativeObject);
	/**
	 * 容器的大小
	 * @param  
	 * @return 返回容器的大小
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
	public RenderWindowDescriptionList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderWindowDescriptionList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RenderWindowDescriptionList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderWindowDescriptionList obj = null;
 		if(baseObj instanceof RenderWindowDescriptionList)
		{
			obj = (RenderWindowDescriptionList)baseObj;
		} else {
			obj = new RenderWindowDescriptionList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "RenderWindowDescriptionList");
			obj.increaseCast();
		}

		return obj;
	}
}
