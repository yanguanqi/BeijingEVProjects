package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据交换类
 */
public class ModelDataExchange extends com.earthview.world.spatial.convertor.Idataexchange {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CModelDataExchange", new ModelDataExchangeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::JCModelDataExchangeProxy", new ModelDataExchangeClassFactory());
	}

	/**
	 * 默认构造函数ImOrEx判断导入导出ImOrExtrue为导入，false为导出
	 */
	public ModelDataExchange() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCModelDataExchangeProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.dataexchange.ModelDataExchange".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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

	protected  void setSrcDataDriver_CModelDataDriver_callback(long ref_driver)
	{
		com.earthview.world.spatial3d.dataexchange.ModelDataDriver ref_driverParamValue = (ref_driver == 0L ? null : new com.earthview.world.spatial3d.dataexchange.ModelDataDriver(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_driverParamValue != null)
		{
		ref_driverParamValue.setDelegate(true);
		ref_driverParamValue.setInstancePointer(new InstancePointer(ref_driver));
		IClassFactory ref_driverParamValueClassFactory = GlobalClassFactoryMap.get(ref_driverParamValue.getCppInstanceTypeName());
		if (ref_driverParamValueClassFactory != null)
		{
			ref_driverParamValue.setDelegate(true);
			ref_driverParamValue = (com.earthview.world.spatial3d.dataexchange.ModelDataDriver)ref_driverParamValueClassFactory.create();
			ref_driverParamValue.setDelegate(true);
			ref_driverParamValue.setInstancePointer(new InstancePointer(ref_driver));
		}
		}
		setSrcDataDriver(ref_driverParamValue);
	}

	native private void setSrcDataDriver_CModelDataDriver(long pNativeObject, long ref_driver);
	/**
	 * 设置源数据转换驱动
	 * @param driver 驱动对象
	 */
	public void setSrcDataDriver(com.earthview.world.spatial3d.dataexchange.ModelDataDriver ref_driver)
	{
		long ref_driverParamValue = (ref_driver == null ? 0L : ref_driver.nativeObject.pointer);
		setSrcDataDriver_CModelDataDriver(this.nativeObject.pointer, ref_driverParamValue);
	}
	native private void setSrcDataDriver_CModelDataDriver_NoVirtual(long pNativeObject, long ref_driver);
	protected void setSrcDataDriver_NoVirtual(com.earthview.world.spatial3d.dataexchange.ModelDataDriver ref_driver)
	{
		long ref_driverParamValue = (ref_driver == null ? 0L : ref_driver.nativeObject.pointer);
		setSrcDataDriver_CModelDataDriver_NoVirtual(this.nativeObject.pointer, ref_driverParamValue);
	}

	protected  void setDestDataDriver_CModelDataDriver_callback(long ref_driver)
	{
		com.earthview.world.spatial3d.dataexchange.ModelDataDriver ref_driverParamValue = (ref_driver == 0L ? null : new com.earthview.world.spatial3d.dataexchange.ModelDataDriver(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_driverParamValue != null)
		{
		ref_driverParamValue.setDelegate(true);
		ref_driverParamValue.setInstancePointer(new InstancePointer(ref_driver));
		IClassFactory ref_driverParamValueClassFactory = GlobalClassFactoryMap.get(ref_driverParamValue.getCppInstanceTypeName());
		if (ref_driverParamValueClassFactory != null)
		{
			ref_driverParamValue.setDelegate(true);
			ref_driverParamValue = (com.earthview.world.spatial3d.dataexchange.ModelDataDriver)ref_driverParamValueClassFactory.create();
			ref_driverParamValue.setDelegate(true);
			ref_driverParamValue.setInstancePointer(new InstancePointer(ref_driver));
		}
		}
		setDestDataDriver(ref_driverParamValue);
	}

	native private void setDestDataDriver_CModelDataDriver(long pNativeObject, long ref_driver);
	/**
	 * 设置目标数据转换驱动
	 * @param driver 驱动对象
	 */
	public void setDestDataDriver(com.earthview.world.spatial3d.dataexchange.ModelDataDriver ref_driver)
	{
		long ref_driverParamValue = (ref_driver == null ? 0L : ref_driver.nativeObject.pointer);
		setDestDataDriver_CModelDataDriver(this.nativeObject.pointer, ref_driverParamValue);
	}
	native private void setDestDataDriver_CModelDataDriver_NoVirtual(long pNativeObject, long ref_driver);
	protected void setDestDataDriver_NoVirtual(com.earthview.world.spatial3d.dataexchange.ModelDataDriver ref_driver)
	{
		long ref_driverParamValue = (ref_driver == null ? 0L : ref_driver.nativeObject.pointer);
		setDestDataDriver_CModelDataDriver_NoVirtual(this.nativeObject.pointer, ref_driverParamValue);
	}

	native private void setSource_CModelDataSource_EVString(long pNativeObject, long pSource, String dSetName);
	public void setSource(com.earthview.world.spatial3d.dataset.ModelDataSource pSource, String dSetName)
	{
		long pSourceParamValue = (pSource == null ? 0L : pSource.nativeObject.pointer);
		String dSetNameParamValue = dSetName;
		setSource_CModelDataSource_EVString(this.nativeObject.pointer, pSourceParamValue, dSetNameParamValue);
	}
	native private void setPath_EVString(long pNativeObject, String path);
	public void setPath(String path)
	{
		String pathParamValue = path;
		setPath_EVString(this.nativeObject.pointer, pathParamValue);
	}
	native private void setParams_CMeshParams(long pNativeObject, long params);
	public void setParams(com.earthview.world.spatial3d.dataexchange.MeshParams params)
	{
		long paramsParamValue = params.nativeObject.pointer;
		setParams_CMeshParams(this.nativeObject.pointer, paramsParamValue);
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

	native private void addListener_CModelDataExchangeListener(long pNativeObject, long ref_listener);
	/**
	 * 设置监听（内部保存引用）
	 * @param listener 监听对象，程序结束需外部删除
	 */
	public void addListener(com.earthview.world.spatial3d.dataexchange.ModelDataExchangeListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		addListener_CModelDataExchangeListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	protected  void shutdown_void_callback()
	{
		shutdown();
	}

	native private void shutdown_void(long pNativeObject);
	/**
	 * 关闭线程
	 * @param  
	 */
	public void shutdown()
	{
		shutdown_void(this.nativeObject.pointer);
	}
	native private void shutdown_void_NoVirtual(long pNativeObject);
	protected void shutdown_NoVirtual()
	{
		shutdown_void_NoVirtual(this.nativeObject.pointer);
	}

	native private boolean IsStart_void(long pNativeObject);
	/**
	 * 判断导入动作是否在进行
	 * @return true正在进行，false没有工作
	 */
	public boolean IsStart()
	{
		boolean returnValue = IsStart_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  boolean startup_void_callback()
	{
		boolean returnValue = startup();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean startup_void(long pNativeObject);
	/**
	 * 创建线程
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

	native private void stop_void(long pNativeObject);
	/**
	 * 停止模型数据导入，该函数会有调用延迟
	 * @param  
	 */
	public void stop()
	{
		stop_void(this.nativeObject.pointer);
	}
	native private int getExportPercentage_void(long pNativeObject);
	public int getExportPercentage()
	{
		int returnValue = getExportPercentage_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void resetImportIndex_void(long pNativeObject);
	public void resetImportIndex()
	{
		resetImportIndex_void(this.nativeObject.pointer);
	}
	public ModelDataExchange(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelDataExchange(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static ModelDataExchange fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelDataExchange obj = null;
 		if(baseObj instanceof ModelDataExchange)
		{
			obj = (ModelDataExchange)baseObj;
		} else {
			obj = new ModelDataExchange(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelDataExchange");
			obj.increaseCast();
		}

		return obj;
	}
}
