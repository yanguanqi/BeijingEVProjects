package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据交换类接口
 */
public class Idataexchange extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::IDataExchange", new IdataexchangeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::JIDataExchangeProxy", new IdataexchangeClassFactory());
	}

	protected  int getType_void_callback()
	{
		com.earthview.world.spatial.convertor.EVDataExchangeType returnValue = getType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取数据转换类型
	 * @return 数据转换类型
	 */
	public com.earthview.world.spatial.convertor.EVDataExchangeType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.convertor.EVDataExchangeType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.convertor.EVDataExchangeType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.convertor.EVDataExchangeType.toEnum(returnValue);
	}

	protected  int exchange_void_callback()
	{
		int returnValue = exchange();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int exchange_void(long pNativeObject);
	/**
	 * 进行数据转换
	 * @return 数据转换结果，0表示OK
	 */
	public int exchange()
	{
		int returnValue = exchange_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int exchange_void_NoVirtual(long pNativeObject);
	protected int exchange_NoVirtual()
	{
		int returnValue = exchange_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setListener_IDataExchangeListener_callback(long ref_listener)
	{
		com.earthview.world.spatial.convertor.Idataexchangelistener ref_listenerParamValue = (ref_listener == 0L ? null : new com.earthview.world.spatial.convertor.Idataexchangelistener(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_listenerParamValue != null)
		{
		ref_listenerParamValue.setDelegate(true);
		ref_listenerParamValue.setInstancePointer(new InstancePointer(ref_listener));
		IClassFactory ref_listenerParamValueClassFactory = GlobalClassFactoryMap.get(ref_listenerParamValue.getCppInstanceTypeName());
		if (ref_listenerParamValueClassFactory != null)
		{
			ref_listenerParamValue.setDelegate(true);
			ref_listenerParamValue = (com.earthview.world.spatial.convertor.Idataexchangelistener)ref_listenerParamValueClassFactory.create();
			ref_listenerParamValue.setDelegate(true);
			ref_listenerParamValue.setInstancePointer(new InstancePointer(ref_listener));
		}
		}
		setListener(ref_listenerParamValue);
	}

	native private void setListener_IDataExchangeListener(long pNativeObject, long ref_listener);
	/**
	 * 设置监听（内部保存引用）
	 * @param listener 监听对象，程序结束需外部删除
	 */
	public void setListener(com.earthview.world.spatial.convertor.Idataexchangelistener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		setListener_IDataExchangeListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private void setListener_IDataExchangeListener_NoVirtual(long pNativeObject, long ref_listener);
	protected void setListener_NoVirtual(com.earthview.world.spatial.convertor.Idataexchangelistener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		setListener_IDataExchangeListener_NoVirtual(this.nativeObject.pointer, ref_listenerParamValue);
	}

	protected  long getListener_void_callback()
	{
		com.earthview.world.spatial.convertor.Idataexchangelistener returnValue = getListener();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getListener_void(long pNativeObject);
	/**
	 * 获取监听对象
	 * @return 获取监听对象指针，不需删除
	 */
	public com.earthview.world.spatial.convertor.Idataexchangelistener getListener()
	{
		long returnValue = getListener_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.convertor.Idataexchangelistener __returnValue = new com.earthview.world.spatial.convertor.Idataexchangelistener(CreatedWhenConstruct.CWC_NotToCreate, "IDataExchangeListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.convertor.Idataexchangelistener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataExchangeListener");
		}
		return __returnValue;
	}
	native private long getListener_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.convertor.Idataexchangelistener getListener_NoVirtual()
	{
		long returnValue = getListener_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.convertor.Idataexchangelistener __returnValue = new com.earthview.world.spatial.convertor.Idataexchangelistener(CreatedWhenConstruct.CWC_NotToCreate, "IDataExchangeListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.convertor.Idataexchangelistener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataExchangeListener");
		}
		return __returnValue;
	}

	public Idataexchange(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Idataexchange(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_exchange_void(long pNativeObject, String method);
	native protected void register_setListener_IDataExchangeListener(long pNativeObject, String method);
	native protected void register_getListener_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_exchange_void(this.nativeObject.pointer, "exchange_void_callback");
			this.register_setListener_IDataExchangeListener(this.nativeObject.pointer, "setListener_IDataExchangeListener_callback");
			this.register_getListener_void(this.nativeObject.pointer, "getListener_void_callback");
		}
	}
	
	public static Idataexchange fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Idataexchange obj = null;
 		if(baseObj instanceof Idataexchange)
		{
			obj = (Idataexchange)baseObj;
		} else {
			obj = new Idataexchange(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IDataExchange");
			obj.increaseCast();
		}

		return obj;
	}
}
