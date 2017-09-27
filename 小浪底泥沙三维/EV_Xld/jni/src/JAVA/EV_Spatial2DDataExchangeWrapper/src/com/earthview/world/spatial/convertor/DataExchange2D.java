package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 矢量数据交换类
 */
public class DataExchange2D extends com.earthview.world.spatial.convertor.DataExchange {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CDataExchange2D", new DataExchange2DClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::JCDataExchange2DProxy", new DataExchange2DClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public DataExchange2D() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDataExchange2DProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.convertor.DataExchange2D".equals(this.getClass().getName()))
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

	native private void setSrcSource_IDataSource_EVString(long pNativeObject, long ref_dataSource, String datasetName);
	/**
	 * /设置源数据源/
	 * @param pDataSource 数据源
	 * @param datasetName 要转换的数据集名称
	 */
	public void setSrcSource(com.earthview.world.spatial.geodataset.Idatasource ref_dataSource, String datasetName)
	{
		long ref_dataSourceParamValue = (ref_dataSource == null ? 0L : ref_dataSource.nativeObject.pointer);
		String datasetNameParamValue = datasetName;
		setSrcSource_IDataSource_EVString(this.nativeObject.pointer, ref_dataSourceParamValue, datasetNameParamValue);
	}
	native private void setSrcSource_IPropertySet(long pNativeObject, long pPropettySet);
	/**
	 * /设置源数据源/
	 * @param pPropettySet 参数，key值全部小写，包括path,name,dataname,username,keyword,format,url;
	 * @return 对应名称
	 */
	public void setSrcSource(com.earthview.world.spatial.geodataset.Ipropertyset pPropettySet)
	{
		long pPropettySetParamValue = (pPropettySet == null ? 0L : pPropettySet.nativeObject.pointer);
		setSrcSource_IPropertySet(this.nativeObject.pointer, pPropettySetParamValue);
	}
	native private String getSrcFormat_void(long pNativeObject);
	/**
	 * /获取原始数据集格式/
	 * @return 数据集格式
	 */
	public String getSrcFormat()
	{
		String returnValue = getSrcFormat_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDestSource_IDataSource_EVString(long pNativeObject, long ref_dataSource, String dataName);
	/**
	 * 设置目标数据源
	 * @param pDataSource 数据源
	 * @param dataName 目标数据集名称
	 */
	public void setDestSource(com.earthview.world.spatial.geodataset.Idatasource ref_dataSource, String dataName)
	{
		long ref_dataSourceParamValue = (ref_dataSource == null ? 0L : ref_dataSource.nativeObject.pointer);
		String dataNameParamValue = dataName;
		setDestSource_IDataSource_EVString(this.nativeObject.pointer, ref_dataSourceParamValue, dataNameParamValue);
	}
	native private void setDestSource_IPropertySet(long pNativeObject, long pPropettySet);
	/**
	 * 设置目标数据源
	 * @param pPropettySet 参数，key值全部小写，包括path,name,dataname,username,keyword,format,url;
	 */
	public void setDestSource(com.earthview.world.spatial.geodataset.Ipropertyset pPropettySet)
	{
		long pPropettySetParamValue = (pPropettySet == null ? 0L : pPropettySet.nativeObject.pointer);
		setDestSource_IPropertySet(this.nativeObject.pointer, pPropettySetParamValue);
	}
	native private String getDestFormat_void(long pNativeObject);
	/**
	 * /获取目标数据格式/
	 * @return 目标数据格式
	 */
	public String getDestFormat()
	{
		String returnValue = getDestFormat_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getSrcName_void(long pNativeObject);
	/**
	 * 获取源数据源名称
	 * @return 源数据源名称
	 */
	public String getSrcName()
	{
		String returnValue = getSrcName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDestname_void(long pNativeObject);
	/**
	 * 获取目标数据源名称
	 * @return 目标数据源名称
	 */
	public String getDestname()
	{
		String returnValue = getDestname_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getSrcPath_void(long pNativeObject);
	/**
	 * 获取源数据源路径
	 * @return 源数据源路径
	 */
	public String getSrcPath()
	{
		String returnValue = getSrcPath_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDestPath_void(long pNativeObject);
	/**
	 * 获取目标数据源路径
	 * @return 目标数据源路径
	 */
	public String getDestPath()
	{
		String returnValue = getDestPath_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getSrcDataName_void(long pNativeObject);
	/**
	 * 获取源数据集名称
	 * @return 源数据集名称
	 */
	public String getSrcDataName()
	{
		String returnValue = getSrcDataName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDestDataName_void(long pNativeObject);
	/**
	 * 获取目标数据集名称
	 * @return 目标数据集名称
	 */
	public String getDestDataName()
	{
		String returnValue = getDestDataName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDataExchangeParam_CDataExchangeParam(long pNativeObject, long param);
	/**
	 * 设置转换参数
	 * @param param 转换参数
	 */
	public void setDataExchangeParam(com.earthview.world.spatial.convertor.DataExchangeParam param)
	{
		long paramParamValue = (param == null ? 0L : param.nativeObject.pointer);
		setDataExchangeParam_CDataExchangeParam(this.nativeObject.pointer, paramParamValue);
	}
	native private long getDataExchangeParam_void(long pNativeObject);
	/**
	 * 获取转换参数
	 * @return 转换参数指针，不释放
	 */
	public com.earthview.world.spatial.convertor.DataExchangeParam getDataExchangeParam()
	{
		long returnValue = getDataExchangeParam_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.convertor.DataExchangeParam __returnValue = new com.earthview.world.spatial.convertor.DataExchangeParam(CreatedWhenConstruct.CWC_NotToCreate, "CDataExchangeParam");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.convertor.DataExchangeParam)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDataExchangeParam");
		}
		return __returnValue;
	}
	public DataExchange2D(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataExchange2D(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 设置源数据转换驱动
	 * @param driver 驱动对象
	 */
	public void setSrcDataDriver(com.earthview.world.spatial.convertor.DataDriver ref_driver)
	{
		super.setSrcDataDriver_NoVirtual(ref_driver);
	}
	/**
	 * 设置目标数据转换驱动
	 * @param driver 驱动对象
	 */
	public void setDestDataDriver(com.earthview.world.spatial.convertor.DataDriver ref_driver)
	{
		super.setDestDataDriver_NoVirtual(ref_driver);
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
	
	public static DataExchange2D fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataExchange2D obj = null;
 		if(baseObj instanceof DataExchange2D)
		{
			obj = (DataExchange2D)baseObj;
		} else {
			obj = new DataExchange2D(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDataExchange2D");
			obj.increaseCast();
		}

		return obj;
	}
}
