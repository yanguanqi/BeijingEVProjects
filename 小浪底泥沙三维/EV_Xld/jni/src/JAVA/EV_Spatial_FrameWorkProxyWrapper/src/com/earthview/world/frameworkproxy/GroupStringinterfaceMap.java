package com.earthview.world.frameworkproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GroupStringinterfaceMap extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap", new GroupStringinterfaceMapClassFactory());
	}

	public static class GroupStringinterface extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface", new GroupStringinterfaceClassFactory());
		}

		public GroupStringinterface() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("GroupStringinterface", null);
		}

		native private String get_mKey_void(long pNativeObject);
		public String get_mKey()
		{
			String jniValue = get_mKey_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_mKey_EVString (long pNativeObject, String value);
		public void set_mKey(String mKey)
		{
			String mKeyParamValue = mKey;
			
			set_mKey_EVString(this.nativeObject.pointer, mKeyParamValue);
		}
		
		native private long get_mValue_void(long pNativeObject);
		public com.earthview.world.core.StringInterface get_mValue()
		{
			long jniValue = get_mValue_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.core.StringInterface __returnValue = new com.earthview.world.core.StringInterface(CreatedWhenConstruct.CWC_NotToCreate, "CStringInterface");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.StringInterface)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CStringInterface");
			}
			return __returnValue;
		}
		
		native private void set_mValue_CStringInterface (long pNativeObject, long value);
		public void set_mValue(com.earthview.world.core.StringInterface mValue)
		{
			long mValueParamValue = (mValue == null ? 0L : mValue.nativeObject.pointer);
			
			set_mValue_CStringInterface(this.nativeObject.pointer, mValueParamValue);
		}
		
		public GroupStringinterface(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public GroupStringinterface(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static GroupStringinterface fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			GroupStringinterface obj = null;
 			if(baseObj instanceof GroupStringinterface)
			{
				obj = (GroupStringinterface)baseObj;
			} else {
				obj = new GroupStringinterface(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "GroupStringinterface");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class GroupStringinterfaceClassFactory implements IClassFactory {
		public BaseObject create()
		{
			GroupStringinterface emptyInstance = new GroupStringinterface(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public GroupStringinterfaceMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGroupStringinterfaceMap", null);
	}

	native private void push_back_GroupStringinterface(long pNativeObject, long t);
	/**
	 * 在容器最后添加元素
	 * @param t 元素值
	 */
	public void push_back(com.earthview.world.frameworkproxy.GroupStringinterfaceMap.GroupStringinterface t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_GroupStringinterface(this.nativeObject.pointer, tParamValue);
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
	public com.earthview.world.frameworkproxy.GroupStringinterfaceMap.GroupStringinterface front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.GroupStringinterfaceMap.GroupStringinterface __returnValue = new com.earthview.world.frameworkproxy.GroupStringinterfaceMap.GroupStringinterface(CreatedWhenConstruct.CWC_NotToCreate, "GroupStringinterface");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.GroupStringinterfaceMap.GroupStringinterface)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GroupStringinterface");
		}
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	/**
	 * 返回容器最后元素
	 * @param  
	 * @return 返回容器最后元素
	 */
	public com.earthview.world.frameworkproxy.GroupStringinterfaceMap.GroupStringinterface back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.GroupStringinterfaceMap.GroupStringinterface __returnValue = new com.earthview.world.frameworkproxy.GroupStringinterfaceMap.GroupStringinterface(CreatedWhenConstruct.CWC_NotToCreate, "GroupStringinterface");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.GroupStringinterfaceMap.GroupStringinterface)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GroupStringinterface");
		}
		return __returnValue;
	}
	native private void insert_ev_uint32_GroupStringinterface(long pNativeObject, long pos, long t);
	/**
	 * 容器中间位置插入元素
	 * @param pos 位置
	 * @param t 元素值
	 */
	public void insert(long pos, com.earthview.world.frameworkproxy.GroupStringinterfaceMap.GroupStringinterface t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_GroupStringinterface(this.nativeObject.pointer, posParamValue, tParamValue);
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
	public com.earthview.world.frameworkproxy.GroupStringinterfaceMap.GroupStringinterface OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		com.earthview.world.frameworkproxy.GroupStringinterfaceMap.GroupStringinterface __returnValue = new com.earthview.world.frameworkproxy.GroupStringinterfaceMap.GroupStringinterface(CreatedWhenConstruct.CWC_NotToCreate, "GroupStringinterface");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.GroupStringinterfaceMap.GroupStringinterface)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GroupStringinterface");
		}
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	/**
	 * 返回某位置的元素值
	 * @param n 位置
	 * @return 返回位置对应的值
	 */
	public com.earthview.world.frameworkproxy.GroupStringinterfaceMap.GroupStringinterface at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		com.earthview.world.frameworkproxy.GroupStringinterfaceMap.GroupStringinterface __returnValue = new com.earthview.world.frameworkproxy.GroupStringinterfaceMap.GroupStringinterface(CreatedWhenConstruct.CWC_NotToCreate, "GroupStringinterface");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.GroupStringinterfaceMap.GroupStringinterface)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GroupStringinterface");
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
	native private boolean push_EVString_CStringInterface(long pNativeObject, String key, long val);
	public boolean push(String key, com.earthview.world.core.StringInterface val)
	{
		String keyParamValue = key;
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		boolean returnValue = push_EVString_CStringInterface(this.nativeObject.pointer, keyParamValue, valParamValue);
		return returnValue;
	}
	native private long getKeys_void(long pNativeObject);
	public com.earthview.world.core.StringVector getKeys()
	{
		long returnValue = getKeys_void(this.nativeObject.pointer);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	native private boolean exist_EVString(long pNativeObject, String key);
	public boolean exist(String key)
	{
		String keyParamValue = key;
		boolean returnValue = exist_EVString(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private long OperatorIndex_EVString(long pNativeObject, String key);
	public com.earthview.world.core.StringInterface OperatorIndex(String key)
	{
		String keyParamValue = key;
		long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.StringInterface __returnValue = new com.earthview.world.core.StringInterface(CreatedWhenConstruct.CWC_NotToCreate, "CStringInterface");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringInterface)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CStringInterface");
		}
		return __returnValue;
	}
	native private long get_EVString(long pNativeObject, String key);
	public com.earthview.world.core.StringInterface get(String key)
	{
		String keyParamValue = key;
		long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.StringInterface __returnValue = new com.earthview.world.core.StringInterface(CreatedWhenConstruct.CWC_NotToCreate, "CStringInterface");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringInterface)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CStringInterface");
		}
		return __returnValue;
	}
	native private void erase_EVString(long pNativeObject, String key);
	public void erase(String key)
	{
		String keyParamValue = key;
		erase_EVString(this.nativeObject.pointer, keyParamValue);
	}
	public GroupStringinterfaceMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GroupStringinterfaceMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GroupStringinterfaceMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GroupStringinterfaceMap obj = null;
 		if(baseObj instanceof GroupStringinterfaceMap)
		{
			obj = (GroupStringinterfaceMap)baseObj;
		} else {
			obj = new GroupStringinterfaceMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGroupStringinterfaceMap");
			obj.increaseCast();
		}

		return obj;
	}
}
