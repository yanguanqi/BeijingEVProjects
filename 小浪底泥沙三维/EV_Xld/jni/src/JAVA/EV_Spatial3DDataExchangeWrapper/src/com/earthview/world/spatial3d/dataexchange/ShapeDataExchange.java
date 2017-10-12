package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * ���ݽ���������
 */
public class ShapeDataExchange extends com.earthview.world.spatial3d.dataexchange.ModelDataExchange {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CShapeDataExchange", new ShapeDataExchangeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::JCShapeDataExchangeProxy", new ShapeDataExchangeClassFactory());
	}

	public ShapeDataExchange() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCShapeDataExchangeProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.dataexchange.ShapeDataExchange".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean startup_void(long pNativeObject);
	/**
	 * �����߳�
	 * @param  boolforceRestart=true
	 */
	public boolean startup()
	{
		boolean returnValue = startup_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean startup_void_NoVirtual(long pNativeObject);
	protected boolean startup_NoVirtual()
	{
		boolean returnValue = startup_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setModelFolderPath_EVString(long pNativeObject, String path);
	public void setModelFolderPath(String path)
	{
		String pathParamValue = path;
		setModelFolderPath_EVString(this.nativeObject.pointer, pathParamValue);
	}
	native private void setShapeFieldsValue_CShapeAssignedFields(long pNativeObject, long value);
	public void setShapeFieldsValue(com.earthview.world.spatial3d.dataexchange.ShapeAssignedFields value)
	{
		long valueParamValue = value.nativeObject.pointer;
		setShapeFieldsValue_CShapeAssignedFields(this.nativeObject.pointer, valueParamValue);
	}
	public ShapeDataExchange(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ShapeDataExchange(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 设置源数据转换驱动
	 * @param driver 驱动对象
	 */
	public void setSrcDataDriver(com.earthview.world.spatial3d.dataexchange.ModelDataDriver ref_driver)
	{
		super.setSrcDataDriver_NoVirtual(ref_driver);
	}
	/**
	 * 设置目标数据转换驱动
	 * @param driver 驱动对象
	 */
	public void setDestDataDriver(com.earthview.world.spatial3d.dataexchange.ModelDataDriver ref_driver)
	{
		super.setDestDataDriver_NoVirtual(ref_driver);
	}
	/**
	 * 关闭线程
	 * @param  
	 */
	public void shutdown()
	{
		super.shutdown_NoVirtual();
	}
	/**
	 * 获取数据转换类型
	 * @return 数据转换类型
	 */
	public com.earthview.world.spatial.convertor.EVDataExchangeType getType()
	{
		return super.getType_NoVirtual();
	}
	/**
	 * 进行数据转换
	 * @return 数据转换结果，0表示OK
	 */
	public int exchange()
	{
		return super.exchange_NoVirtual();
	}
	/**
	 * 设置监听（内部保存引用）
	 * @param listener 监听对象，程序结束需外部删除
	 */
	public void setListener(com.earthview.world.spatial.convertor.Idataexchangelistener ref_listener)
	{
		super.setListener_NoVirtual(ref_listener);
	}
	/**
	 * 获取监听对象
	 * @return 获取监听对象指针，不需删除
	 */
	public com.earthview.world.spatial.convertor.Idataexchangelistener getListener()
	{
		return super.getListener_NoVirtual();
	}
	
	native protected void register_setSrcDataDriver_CModelDataDriver(long pNativeObject, String method);
	native protected void register_setDestDataDriver_CModelDataDriver(long pNativeObject, String method);
	native protected void register_shutdown_void(long pNativeObject, String method);
	native protected void register_startup_void(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_exchange_void(long pNativeObject, String method);
	native protected void register_setListener_IDataExchangeListener(long pNativeObject, String method);
	native protected void register_getListener_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setSrcDataDriver_CModelDataDriver(this.nativeObject.pointer, "setSrcDataDriver_CModelDataDriver_callback");
			this.register_setDestDataDriver_CModelDataDriver(this.nativeObject.pointer, "setDestDataDriver_CModelDataDriver_callback");
			this.register_shutdown_void(this.nativeObject.pointer, "shutdown_void_callback");
			this.register_startup_void(this.nativeObject.pointer, "startup_void_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_exchange_void(this.nativeObject.pointer, "exchange_void_callback");
			this.register_setListener_IDataExchangeListener(this.nativeObject.pointer, "setListener_IDataExchangeListener_callback");
			this.register_getListener_void(this.nativeObject.pointer, "getListener_void_callback");
		}
	}
	
	public static ShapeDataExchange fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ShapeDataExchange obj = null;
 		if(baseObj instanceof ShapeDataExchange)
		{
			obj = (ShapeDataExchange)baseObj;
		} else {
			obj = new ShapeDataExchange(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CShapeDataExchange");
			obj.increaseCast();
		}

		return obj;
	}
}
