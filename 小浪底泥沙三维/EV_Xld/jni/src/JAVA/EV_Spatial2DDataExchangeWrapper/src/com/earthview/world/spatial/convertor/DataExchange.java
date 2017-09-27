package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据交换类
 */
public class DataExchange extends com.earthview.world.spatial.convertor.Idataexchange {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CDataExchange", new DataExchangeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::JCDataExchangeProxy", new DataExchangeClassFactory());
	}

	native private int exchange_void(long pNativeObject);
	/**
	 * 数据转换
	 * @return 转换结果，0OK
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

	protected  void setSrcDataDriver_CDataDriver_callback(long ref_driver)
	{
		com.earthview.world.spatial.convertor.DataDriver ref_driverParamValue = (ref_driver == 0L ? null : new com.earthview.world.spatial.convertor.DataDriver(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_driverParamValue != null)
		{
		ref_driverParamValue.setDelegate(true);
		ref_driverParamValue.setInstancePointer(new InstancePointer(ref_driver));
		IClassFactory ref_driverParamValueClassFactory = GlobalClassFactoryMap.get(ref_driverParamValue.getCppInstanceTypeName());
		if (ref_driverParamValueClassFactory != null)
		{
			ref_driverParamValue.setDelegate(true);
			ref_driverParamValue = (com.earthview.world.spatial.convertor.DataDriver)ref_driverParamValueClassFactory.create();
			ref_driverParamValue.setDelegate(true);
			ref_driverParamValue.setInstancePointer(new InstancePointer(ref_driver));
		}
		}
		setSrcDataDriver(ref_driverParamValue);
	}

	native private void setSrcDataDriver_CDataDriver(long pNativeObject, long ref_driver);
	/**
	 * 设置源数据转换驱动
	 * @param driver 驱动对象
	 */
	public void setSrcDataDriver(com.earthview.world.spatial.convertor.DataDriver ref_driver)
	{
		long ref_driverParamValue = (ref_driver == null ? 0L : ref_driver.nativeObject.pointer);
		setSrcDataDriver_CDataDriver(this.nativeObject.pointer, ref_driverParamValue);
	}
	native private void setSrcDataDriver_CDataDriver_NoVirtual(long pNativeObject, long ref_driver);
	protected void setSrcDataDriver_NoVirtual(com.earthview.world.spatial.convertor.DataDriver ref_driver)
	{
		long ref_driverParamValue = (ref_driver == null ? 0L : ref_driver.nativeObject.pointer);
		setSrcDataDriver_CDataDriver_NoVirtual(this.nativeObject.pointer, ref_driverParamValue);
	}

	protected  void setDestDataDriver_CDataDriver_callback(long ref_driver)
	{
		com.earthview.world.spatial.convertor.DataDriver ref_driverParamValue = (ref_driver == 0L ? null : new com.earthview.world.spatial.convertor.DataDriver(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_driverParamValue != null)
		{
		ref_driverParamValue.setDelegate(true);
		ref_driverParamValue.setInstancePointer(new InstancePointer(ref_driver));
		IClassFactory ref_driverParamValueClassFactory = GlobalClassFactoryMap.get(ref_driverParamValue.getCppInstanceTypeName());
		if (ref_driverParamValueClassFactory != null)
		{
			ref_driverParamValue.setDelegate(true);
			ref_driverParamValue = (com.earthview.world.spatial.convertor.DataDriver)ref_driverParamValueClassFactory.create();
			ref_driverParamValue.setDelegate(true);
			ref_driverParamValue.setInstancePointer(new InstancePointer(ref_driver));
		}
		}
		setDestDataDriver(ref_driverParamValue);
	}

	native private void setDestDataDriver_CDataDriver(long pNativeObject, long ref_driver);
	/**
	 * 设置目标数据转换驱动
	 * @param driver 驱动对象
	 */
	public void setDestDataDriver(com.earthview.world.spatial.convertor.DataDriver ref_driver)
	{
		long ref_driverParamValue = (ref_driver == null ? 0L : ref_driver.nativeObject.pointer);
		setDestDataDriver_CDataDriver(this.nativeObject.pointer, ref_driverParamValue);
	}
	native private void setDestDataDriver_CDataDriver_NoVirtual(long pNativeObject, long ref_driver);
	protected void setDestDataDriver_NoVirtual(com.earthview.world.spatial.convertor.DataDriver ref_driver)
	{
		long ref_driverParamValue = (ref_driver == null ? 0L : ref_driver.nativeObject.pointer);
		setDestDataDriver_CDataDriver_NoVirtual(this.nativeObject.pointer, ref_driverParamValue);
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取数据转换类型
	 * @return 数据转换类型，2维还是3维
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

	native private long getListener_void(long pNativeObject);
	/**
	 * 获取监听对象
	 * @return 获取监听对象指针
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

	public DataExchange(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataExchange(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setSrcDataDriver_CDataDriver(long pNativeObject, String method);
	native protected void register_setDestDataDriver_CDataDriver(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_exchange_void(long pNativeObject, String method);
	native protected void register_setListener_IDataExchangeListener(long pNativeObject, String method);
	native protected void register_getListener_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setSrcDataDriver_CDataDriver(this.nativeObject.pointer, "setSrcDataDriver_CDataDriver_callback");
			this.register_setDestDataDriver_CDataDriver(this.nativeObject.pointer, "setDestDataDriver_CDataDriver_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_exchange_void(this.nativeObject.pointer, "exchange_void_callback");
			this.register_setListener_IDataExchangeListener(this.nativeObject.pointer, "setListener_IDataExchangeListener_callback");
			this.register_getListener_void(this.nativeObject.pointer, "getListener_void_callback");
		}
	}
	
	public static DataExchange fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataExchange obj = null;
 		if(baseObj instanceof DataExchange)
		{
			obj = (DataExchange)baseObj;
		} else {
			obj = new DataExchange(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDataExchange");
			obj.increaseCast();
		}

		return obj;
	}
}
