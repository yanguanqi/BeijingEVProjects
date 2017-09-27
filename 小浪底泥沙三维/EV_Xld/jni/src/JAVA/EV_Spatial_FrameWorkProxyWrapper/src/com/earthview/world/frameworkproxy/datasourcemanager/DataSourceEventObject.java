package com.earthview.world.frameworkproxy.datasourcemanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceEventObject extends com.earthview.world.core.EventObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject", new DataSourceEventObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::JCDataSourceEventObjectProxy", new DataSourceEventObjectClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public DataSourceEventObject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDataSourceEventObjectProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.frameworkproxy.datasourcemanager.DataSourceEventObject".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean deleteDataSource_CDataSourceURL(long pNativeObject, long datasourceURL);
	/**
	 * 删除数据源
	 * @param datasourceURL 数据源描述
	 * @return 成功返回true否则返回false
	 */
	public boolean deleteDataSource(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURL)
	{
		long datasourceURLParamValue = datasourceURL.nativeObject.pointer;
		boolean returnValue = deleteDataSource_CDataSourceURL(this.nativeObject.pointer, datasourceURLParamValue);
		return returnValue;
	}
	protected  void onDeleteDataSource_CDataSourceActiveEvent_callback(long pe)
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent peParamValue = (pe == 0L ? null : new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(peParamValue != null)
		{
		peParamValue.setDelegate(true);
		peParamValue.setInstancePointer(new InstancePointer(pe));
		IClassFactory peParamValueClassFactory = GlobalClassFactoryMap.get(peParamValue.getCppInstanceTypeName());
		if (peParamValueClassFactory != null)
		{
			peParamValue.setDelegate(true);
			peParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent)peParamValueClassFactory.create();
			peParamValue.setDelegate(true);
			peParamValue.setInstancePointer(new InstancePointer(pe));
		}
		}
		onDeleteDataSource(peParamValue);
	}

	native private void onDeleteDataSource_CDataSourceActiveEvent(long pNativeObject, long pe);
	/**
	 * 删除数据源事件响应函数
	 * @param pe 事件对象
	 */
	public void onDeleteDataSource(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent pe)
	{
		long peParamValue = (pe == null ? 0L : pe.nativeObject.pointer);
		onDeleteDataSource_CDataSourceActiveEvent(this.nativeObject.pointer, peParamValue);
	}
	native private void onDeleteDataSource_CDataSourceActiveEvent_NoVirtual(long pNativeObject, long pe);
	protected void onDeleteDataSource_NoVirtual(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent pe)
	{
		long peParamValue = (pe == null ? 0L : pe.nativeObject.pointer);
		onDeleteDataSource_CDataSourceActiveEvent_NoVirtual(this.nativeObject.pointer, peParamValue);
	}

	native private boolean closeDataSource_CDataSourceURL(long pNativeObject, long datasourceURL);
	/**
	 * 关闭数据源
	 * @param datasourceURL 数据源描述
	 * @return 成功返回true否则返回false
	 */
	public boolean closeDataSource(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURL)
	{
		long datasourceURLParamValue = datasourceURL.nativeObject.pointer;
		boolean returnValue = closeDataSource_CDataSourceURL(this.nativeObject.pointer, datasourceURLParamValue);
		return returnValue;
	}
	native private boolean createModelDataset_CDataSourceURL_EVString_CFields_ev_bool_ev_int32_ev_int32(long pNativeObject, long datasourceURL, String datasetName, long fields, boolean isTemplate, int coordSysType, int coordSys);
	/**
	 * 创建模型数据集
	 * @param datasourceURL 数据源描述
	 * @param datasetName 数据集名称
	 * @param fields 数据集属性字段
	 * @param isTemplate 是否为模板数据集
	 * @param coordSysType 坐标系统类型
	 * @param coordSys 坐标系统值
	 * @return 成功返回true否则返回false
	 */
	public boolean createModelDataset(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURL, String datasetName, com.earthview.world.spatial.geodataset.Fields fields, boolean isTemplate, int coordSysType, int coordSys)
	{
		long datasourceURLParamValue = datasourceURL.nativeObject.pointer;
		String datasetNameParamValue = datasetName;
		long fieldsParamValue = fields.nativeObject.pointer;
		boolean isTemplateParamValue = isTemplate;
		int coordSysTypeParamValue = coordSysType;
		int coordSysParamValue = coordSys;
		boolean returnValue = createModelDataset_CDataSourceURL_EVString_CFields_ev_bool_ev_int32_ev_int32(this.nativeObject.pointer, datasourceURLParamValue, datasetNameParamValue, fieldsParamValue, isTemplateParamValue, coordSysTypeParamValue, coordSysParamValue);
		return returnValue;
	}
	native private boolean createEffectDataset_CDataSourceURL_EVString_ev_int32(long pNativeObject, long datasourceURL, String datasetName, int coordsys);
	/**
	 * 创建特效数据集
	 * @param datasourceURL 数据源描述
	 * @param datasetName 数据集名称
	 * @param coordsys 坐标系统
	 * @return 成功返回true否则返回false
	 */
	public boolean createEffectDataset(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURL, String datasetName, int coordsys)
	{
		long datasourceURLParamValue = datasourceURL.nativeObject.pointer;
		String datasetNameParamValue = datasetName;
		int coordsysParamValue = coordsys;
		boolean returnValue = createEffectDataset_CDataSourceURL_EVString_ev_int32(this.nativeObject.pointer, datasourceURLParamValue, datasetNameParamValue, coordsysParamValue);
		return returnValue;
	}
	native private boolean createVectorDataset_CDataSourceURL_EVString_EVGeometryType_ev_int32_CFields(long pNativeObject, long datasourceURL, String datasetName, int type, int coordSys, long fields);
	/**
	 * 创建矢量数据集
	 * @param datasourceURL 数据集描述
	 * @param datasetName 数据集名称
	 * @param type 坐标系统类型
	 * @param coordSys 坐标系统值
	 * @return 成功返回true否则返回false
	 */
	public boolean createVectorDataset(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURL, String datasetName, com.earthview.world.spatial.geometry.EVGeometryType type, int coordSys, com.earthview.world.spatial.geodataset.Fields fields)
	{
		long datasourceURLParamValue = datasourceURL.nativeObject.pointer;
		String datasetNameParamValue = datasetName;
		int typeParamValue = type.getValue();
		int coordSysParamValue = coordSys;
		long fieldsParamValue = fields.nativeObject.pointer;
		boolean returnValue = createVectorDataset_CDataSourceURL_EVString_EVGeometryType_ev_int32_CFields(this.nativeObject.pointer, datasourceURLParamValue, datasetNameParamValue, typeParamValue, coordSysParamValue, fieldsParamValue);
		return returnValue;
	}
	native private boolean createKmlDataset_CDataSourceURL_EVString(long pNativeObject, long datasourceURL, String datasetName);
	/**
	 * 创建kml数据集
	 * @param datasourceURL 数据源描述
	 * @param datasetName 数据集名称
	 * @return 成功返回true否则返回false
	 */
	public boolean createKmlDataset(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURL, String datasetName)
	{
		long datasourceURLParamValue = datasourceURL.nativeObject.pointer;
		String datasetNameParamValue = datasetName;
		boolean returnValue = createKmlDataset_CDataSourceURL_EVString(this.nativeObject.pointer, datasourceURLParamValue, datasetNameParamValue);
		return returnValue;
	}
	native private boolean addKmlDataset_CDataSourceActiveEvent_CDatasetActiveEvent(long pNativeObject, long datasource, long dataset);
	/**
	 * 添加kml数据集
	 * @param datasourceURL 数据源描述
	 * @param datasetName 数据集名称
	 * @return 成功返回true否则返回false
	 */
	public boolean addKmlDataset(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent datasource, com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent dataset)
	{
		long datasourceParamValue = datasource.nativeObject.pointer;
		long datasetParamValue = dataset.nativeObject.pointer;
		boolean returnValue = addKmlDataset_CDataSourceActiveEvent_CDatasetActiveEvent(this.nativeObject.pointer, datasourceParamValue, datasetParamValue);
		return returnValue;
	}
	native private boolean closeDataset_CDataSourceURL_EVString_EVDataSourceType_EVDatasetType(long pNativeObject, long datasourceURL, String datasetName, int sourcetype, int datasettype);
	/**
	 * 关闭数据集
	 * @param datasourceURL 数据源描述
	 * @param datasetName 数据集名称
	 * @param sourcetype 数据源类型
	 * @param datasettype 数据集类型
	 * @return 成功返回true否则返回false
	 */
	public boolean closeDataset(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURL, String datasetName, com.earthview.world.spatial.geodataset.EVDataSourceType sourcetype, com.earthview.world.spatial.geodataset.EVDatasetType datasettype)
	{
		long datasourceURLParamValue = datasourceURL.nativeObject.pointer;
		String datasetNameParamValue = datasetName;
		int sourcetypeParamValue = sourcetype.getValue();
		int datasettypeParamValue = datasettype.getValue();
		boolean returnValue = closeDataset_CDataSourceURL_EVString_EVDataSourceType_EVDatasetType(this.nativeObject.pointer, datasourceURLParamValue, datasetNameParamValue, sourcetypeParamValue, datasettypeParamValue);
		return returnValue;
	}
	native private boolean closeAllDatasets_CDataSourceURL(long pNativeObject, long datasourceURL);
	/**
	 * 关闭所有数据集
	 * @param datasourceURL 数据源描述
	 * @return 成功返回true否则返回false
	 */
	public boolean closeAllDatasets(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURL)
	{
		long datasourceURLParamValue = datasourceURL.nativeObject.pointer;
		boolean returnValue = closeAllDatasets_CDataSourceURL(this.nativeObject.pointer, datasourceURLParamValue);
		return returnValue;
	}
	native private boolean closeAllDatasets_CDataSourceURL_EVDataSourceType(long pNativeObject, long datasourceURL, int datasourcetype);
	/**
	 * 关闭所有数据集
	 * @param datasourceURL 数据源描述
	 * @param datasourcetype 数据源类型
	 * @return 成功返回true否则返回false
	 */
	public boolean closeAllDatasets(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURL, com.earthview.world.spatial.geodataset.EVDataSourceType datasourcetype)
	{
		long datasourceURLParamValue = datasourceURL.nativeObject.pointer;
		int datasourcetypeParamValue = datasourcetype.getValue();
		boolean returnValue = closeAllDatasets_CDataSourceURL_EVDataSourceType(this.nativeObject.pointer, datasourceURLParamValue, datasourcetypeParamValue);
		return returnValue;
	}
	native private void createDataSource_CDataSourceURL(long pNativeObject, long datasourceURL);
	/**
	 * 创建数据源
	 * @param datasourceURL 数据源描述
	 */
	public void createDataSource(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURL)
	{
		long datasourceURLParamValue = datasourceURL.nativeObject.pointer;
		createDataSource_CDataSourceURL(this.nativeObject.pointer, datasourceURLParamValue);
	}
	protected  void onCreateDataSource_CDataSourceActiveEvent_callback(long pe)
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent peParamValue = (pe == 0L ? null : new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(peParamValue != null)
		{
		peParamValue.setDelegate(true);
		peParamValue.setInstancePointer(new InstancePointer(pe));
		IClassFactory peParamValueClassFactory = GlobalClassFactoryMap.get(peParamValue.getCppInstanceTypeName());
		if (peParamValueClassFactory != null)
		{
			peParamValue.setDelegate(true);
			peParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent)peParamValueClassFactory.create();
			peParamValue.setDelegate(true);
			peParamValue.setInstancePointer(new InstancePointer(pe));
		}
		}
		onCreateDataSource(peParamValue);
	}

	native private void onCreateDataSource_CDataSourceActiveEvent(long pNativeObject, long pe);
	/**
	 * 创建数据源事件响应函数
	 * @param pe 事件对象
	 */
	public void onCreateDataSource(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent pe)
	{
		long peParamValue = (pe == null ? 0L : pe.nativeObject.pointer);
		onCreateDataSource_CDataSourceActiveEvent(this.nativeObject.pointer, peParamValue);
	}
	native private void onCreateDataSource_CDataSourceActiveEvent_NoVirtual(long pNativeObject, long pe);
	protected void onCreateDataSource_NoVirtual(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent pe)
	{
		long peParamValue = (pe == null ? 0L : pe.nativeObject.pointer);
		onCreateDataSource_CDataSourceActiveEvent_NoVirtual(this.nativeObject.pointer, peParamValue);
	}

	native private void openDataSource_CDataSourceURL(long pNativeObject, long datasourceURL);
	/**
	 * 打开数据源
	 * @param datasourceURL 数据源描述
	 */
	public void openDataSource(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURL)
	{
		long datasourceURLParamValue = datasourceURL.nativeObject.pointer;
		openDataSource_CDataSourceURL(this.nativeObject.pointer, datasourceURLParamValue);
	}
	protected  void onOpenDataSource_CDataSourceActiveEvent_callback(long pe)
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent peParamValue = (pe == 0L ? null : new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(peParamValue != null)
		{
		peParamValue.setDelegate(true);
		peParamValue.setInstancePointer(new InstancePointer(pe));
		IClassFactory peParamValueClassFactory = GlobalClassFactoryMap.get(peParamValue.getCppInstanceTypeName());
		if (peParamValueClassFactory != null)
		{
			peParamValue.setDelegate(true);
			peParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent)peParamValueClassFactory.create();
			peParamValue.setDelegate(true);
			peParamValue.setInstancePointer(new InstancePointer(pe));
		}
		}
		onOpenDataSource(peParamValue);
	}

	native private void onOpenDataSource_CDataSourceActiveEvent(long pNativeObject, long pe);
	/**
	 * 打开数据源事件响应函数
	 * @param pe 事件对象
	 */
	public void onOpenDataSource(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent pe)
	{
		long peParamValue = (pe == null ? 0L : pe.nativeObject.pointer);
		onOpenDataSource_CDataSourceActiveEvent(this.nativeObject.pointer, peParamValue);
	}
	native private void onOpenDataSource_CDataSourceActiveEvent_NoVirtual(long pNativeObject, long pe);
	protected void onOpenDataSource_NoVirtual(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent pe)
	{
		long peParamValue = (pe == null ? 0L : pe.nativeObject.pointer);
		onOpenDataSource_CDataSourceActiveEvent_NoVirtual(this.nativeObject.pointer, peParamValue);
	}

	native private boolean closeDataSource_CDataSourceActiveEvent(long pNativeObject, long dataSourceEvent);
	/**
	 * 关闭数据源事件响应函数
	 * @param dataSourceEvent 事件对象
	 */
	public boolean closeDataSource(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEvent)
	{
		long dataSourceEventParamValue = dataSourceEvent.nativeObject.pointer;
		boolean returnValue = closeDataSource_CDataSourceActiveEvent(this.nativeObject.pointer, dataSourceEventParamValue);
		return returnValue;
	}
	protected  void onCloseDataSource_CDataSourceActiveEvent_callback(long pe)
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent peParamValue = (pe == 0L ? null : new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(peParamValue != null)
		{
		peParamValue.setDelegate(true);
		peParamValue.setInstancePointer(new InstancePointer(pe));
		IClassFactory peParamValueClassFactory = GlobalClassFactoryMap.get(peParamValue.getCppInstanceTypeName());
		if (peParamValueClassFactory != null)
		{
			peParamValue.setDelegate(true);
			peParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent)peParamValueClassFactory.create();
			peParamValue.setDelegate(true);
			peParamValue.setInstancePointer(new InstancePointer(pe));
		}
		}
		onCloseDataSource(peParamValue);
	}

	native private void onCloseDataSource_CDataSourceActiveEvent(long pNativeObject, long pe);
	/**
	 * 关闭数据源事件响应函数
	 * @param pe 事件对象
	 */
	public void onCloseDataSource(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent pe)
	{
		long peParamValue = (pe == null ? 0L : pe.nativeObject.pointer);
		onCloseDataSource_CDataSourceActiveEvent(this.nativeObject.pointer, peParamValue);
	}
	native private void onCloseDataSource_CDataSourceActiveEvent_NoVirtual(long pNativeObject, long pe);
	protected void onCloseDataSource_NoVirtual(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent pe)
	{
		long peParamValue = (pe == null ? 0L : pe.nativeObject.pointer);
		onCloseDataSource_CDataSourceActiveEvent_NoVirtual(this.nativeObject.pointer, peParamValue);
	}

	native private void createDataset_CDataSourceActiveEvent_CDatasetActiveEvent(long pNativeObject, long dataSourceEvent, long dataSetEvent);
	/**
	 * 创建数据集
	 * @param dataSource 需要新建数据集的数据源
	 * @param dataSet 需要新建数据集信息
	 */
	public void createDataset(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEvent, com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent dataSetEvent)
	{
		long dataSourceEventParamValue = dataSourceEvent.nativeObject.pointer;
		long dataSetEventParamValue = dataSetEvent.nativeObject.pointer;
		createDataset_CDataSourceActiveEvent_CDatasetActiveEvent(this.nativeObject.pointer, dataSourceEventParamValue, dataSetEventParamValue);
	}
	protected  void onCreateDataset_CDatasetActiveEvent_callback(long pe)
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent peParamValue = (pe == 0L ? null : new com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(peParamValue != null)
		{
		peParamValue.setDelegate(true);
		peParamValue.setInstancePointer(new InstancePointer(pe));
		IClassFactory peParamValueClassFactory = GlobalClassFactoryMap.get(peParamValue.getCppInstanceTypeName());
		if (peParamValueClassFactory != null)
		{
			peParamValue.setDelegate(true);
			peParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent)peParamValueClassFactory.create();
			peParamValue.setDelegate(true);
			peParamValue.setInstancePointer(new InstancePointer(pe));
		}
		}
		onCreateDataset(peParamValue);
	}

	native private void onCreateDataset_CDatasetActiveEvent(long pNativeObject, long pe);
	/**
	 * 创建数据集事件响应函数
	 * @param pe 事件对象
	 */
	public void onCreateDataset(com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent pe)
	{
		long peParamValue = (pe == null ? 0L : pe.nativeObject.pointer);
		onCreateDataset_CDatasetActiveEvent(this.nativeObject.pointer, peParamValue);
	}
	native private void onCreateDataset_CDatasetActiveEvent_NoVirtual(long pNativeObject, long pe);
	protected void onCreateDataset_NoVirtual(com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent pe)
	{
		long peParamValue = (pe == null ? 0L : pe.nativeObject.pointer);
		onCreateDataset_CDatasetActiveEvent_NoVirtual(this.nativeObject.pointer, peParamValue);
	}

	protected  void onOpenDataset_CDatasetActiveEvent_callback(long pe)
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent peParamValue = (pe == 0L ? null : new com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(peParamValue != null)
		{
		peParamValue.setDelegate(true);
		peParamValue.setInstancePointer(new InstancePointer(pe));
		IClassFactory peParamValueClassFactory = GlobalClassFactoryMap.get(peParamValue.getCppInstanceTypeName());
		if (peParamValueClassFactory != null)
		{
			peParamValue.setDelegate(true);
			peParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent)peParamValueClassFactory.create();
			peParamValue.setDelegate(true);
			peParamValue.setInstancePointer(new InstancePointer(pe));
		}
		}
		onOpenDataset(peParamValue);
	}

	native private void onOpenDataset_CDatasetActiveEvent(long pNativeObject, long pe);
	/**
	 * 打开数据集事件响应函数
	 * @param pe 事件对象
	 */
	public void onOpenDataset(com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent pe)
	{
		long peParamValue = (pe == null ? 0L : pe.nativeObject.pointer);
		onOpenDataset_CDatasetActiveEvent(this.nativeObject.pointer, peParamValue);
	}
	native private void onOpenDataset_CDatasetActiveEvent_NoVirtual(long pNativeObject, long pe);
	protected void onOpenDataset_NoVirtual(com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent pe)
	{
		long peParamValue = (pe == null ? 0L : pe.nativeObject.pointer);
		onOpenDataset_CDatasetActiveEvent_NoVirtual(this.nativeObject.pointer, peParamValue);
	}

	native private void closeDataset_CDataSourceActiveEvent_CDatasetActiveEvent(long pNativeObject, long dataSourceEvent, long dataSetEvent);
	/**
	 * 关闭数据集
	 * @param dataSourceEvent 数据源事件对象
	 * @param dataSetEvent 数据集事件对象
	 */
	public void closeDataset(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEvent, com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent dataSetEvent)
	{
		long dataSourceEventParamValue = dataSourceEvent.nativeObject.pointer;
		long dataSetEventParamValue = dataSetEvent.nativeObject.pointer;
		closeDataset_CDataSourceActiveEvent_CDatasetActiveEvent(this.nativeObject.pointer, dataSourceEventParamValue, dataSetEventParamValue);
	}
	protected  void onCloseDataset_CDatasetActiveEvent_callback(long pe)
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent peParamValue = (pe == 0L ? null : new com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(peParamValue != null)
		{
		peParamValue.setDelegate(true);
		peParamValue.setInstancePointer(new InstancePointer(pe));
		IClassFactory peParamValueClassFactory = GlobalClassFactoryMap.get(peParamValue.getCppInstanceTypeName());
		if (peParamValueClassFactory != null)
		{
			peParamValue.setDelegate(true);
			peParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent)peParamValueClassFactory.create();
			peParamValue.setDelegate(true);
			peParamValue.setInstancePointer(new InstancePointer(pe));
		}
		}
		onCloseDataset(peParamValue);
	}

	native private void onCloseDataset_CDatasetActiveEvent(long pNativeObject, long pe);
	/**
	 * 关闭数据集事件响应函数
	 * @param pe 事件对象
	 */
	public void onCloseDataset(com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent pe)
	{
		long peParamValue = (pe == null ? 0L : pe.nativeObject.pointer);
		onCloseDataset_CDatasetActiveEvent(this.nativeObject.pointer, peParamValue);
	}
	native private void onCloseDataset_CDatasetActiveEvent_NoVirtual(long pNativeObject, long pe);
	protected void onCloseDataset_NoVirtual(com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent pe)
	{
		long peParamValue = (pe == null ? 0L : pe.nativeObject.pointer);
		onCloseDataset_CDatasetActiveEvent_NoVirtual(this.nativeObject.pointer, peParamValue);
	}

	native private void closeAllDatasets_CDataSourceActiveEvent(long pNativeObject, long dataSourceEvent);
	/**
	 * 关闭所有数据集
	 * @param dataSourceEvent 事件对象
	 */
	public void closeAllDatasets(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEvent)
	{
		long dataSourceEventParamValue = dataSourceEvent.nativeObject.pointer;
		closeAllDatasets_CDataSourceActiveEvent(this.nativeObject.pointer, dataSourceEventParamValue);
	}
	native private void closeAllDatasets_CDataSourceActiveEvent_EVDataSourceType(long pNativeObject, long dataSourceEvent, int dataSourceType);
	/**
	 * 关闭所有数据集
	 * @param dataSourceEvent 数据源事件对象
	 * @param dataSourceType 数据源类别
	 */
	public void closeAllDatasets(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEvent, com.earthview.world.spatial.geodataset.EVDataSourceType dataSourceType)
	{
		long dataSourceEventParamValue = dataSourceEvent.nativeObject.pointer;
		int dataSourceTypeParamValue = dataSourceType.getValue();
		closeAllDatasets_CDataSourceActiveEvent_EVDataSourceType(this.nativeObject.pointer, dataSourceEventParamValue, dataSourceTypeParamValue);
	}
	protected  void onCloseAllDatasets_CDataSourceActiveEvent_callback(long pe)
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent peParamValue = (pe == 0L ? null : new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(peParamValue != null)
		{
		peParamValue.setDelegate(true);
		peParamValue.setInstancePointer(new InstancePointer(pe));
		IClassFactory peParamValueClassFactory = GlobalClassFactoryMap.get(peParamValue.getCppInstanceTypeName());
		if (peParamValueClassFactory != null)
		{
			peParamValue.setDelegate(true);
			peParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent)peParamValueClassFactory.create();
			peParamValue.setDelegate(true);
			peParamValue.setInstancePointer(new InstancePointer(pe));
		}
		}
		onCloseAllDatasets(peParamValue);
	}

	native private void onCloseAllDatasets_CDataSourceActiveEvent(long pNativeObject, long pe);
	/**
	 * 关闭所有数据集事件响应函数
	 * @param pe 事件对象
	 */
	public void onCloseAllDatasets(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent pe)
	{
		long peParamValue = (pe == null ? 0L : pe.nativeObject.pointer);
		onCloseAllDatasets_CDataSourceActiveEvent(this.nativeObject.pointer, peParamValue);
	}
	native private void onCloseAllDatasets_CDataSourceActiveEvent_NoVirtual(long pNativeObject, long pe);
	protected void onCloseAllDatasets_NoVirtual(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent pe)
	{
		long peParamValue = (pe == null ? 0L : pe.nativeObject.pointer);
		onCloseAllDatasets_CDataSourceActiveEvent_NoVirtual(this.nativeObject.pointer, peParamValue);
	}

	native private void importData_CDataSourceActiveEvent_CDatasetActiveEvent(long pNativeObject, long dataSourceEvent, long dataSetEvent);
	/**
	 * 数据导入
	 * @param dataSourceEvent 数据源事件对象
	 * @param dataSetEvent 数据集事件对象
	 */
	public void importData(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEvent, com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent dataSetEvent)
	{
		long dataSourceEventParamValue = dataSourceEvent.nativeObject.pointer;
		long dataSetEventParamValue = dataSetEvent.nativeObject.pointer;
		importData_CDataSourceActiveEvent_CDatasetActiveEvent(this.nativeObject.pointer, dataSourceEventParamValue, dataSetEventParamValue);
	}
	protected  void onImportData_void_callback()
	{
		onImportData();
	}

	native private void onImportData_void(long pNativeObject);
	/**
	 * 数据导入响应函数
	 * @param  
	 */
	public void onImportData()
	{
		onImportData_void(this.nativeObject.pointer);
	}
	native private void onImportData_void_NoVirtual(long pNativeObject);
	protected void onImportData_NoVirtual()
	{
		onImportData_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void exportData_CDataSourceActiveEvent_CDatasetActiveEvent(long pNativeObject, long dataSourceEvent, long dataSetEvent);
	/**
	 * 数据导出
	 * @param dataSourceEvent 数据源事件对象
	 * @param dataSetEvent 数据集事件对象
	 */
	public void exportData(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEvent, com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent dataSetEvent)
	{
		long dataSourceEventParamValue = dataSourceEvent.nativeObject.pointer;
		long dataSetEventParamValue = dataSetEvent.nativeObject.pointer;
		exportData_CDataSourceActiveEvent_CDatasetActiveEvent(this.nativeObject.pointer, dataSourceEventParamValue, dataSetEventParamValue);
	}
	protected  void onExportData_void_callback()
	{
		onExportData();
	}

	native private void onExportData_void(long pNativeObject);
	/**
	 * 数据导出响应函数
	 * @param  
	 */
	public void onExportData()
	{
		onExportData_void(this.nativeObject.pointer);
	}
	native private void onExportData_void_NoVirtual(long pNativeObject);
	protected void onExportData_NoVirtual()
	{
		onExportData_void_NoVirtual(this.nativeObject.pointer);
	}

	native private boolean onEvent_CEvent(long pNativeObject, long e);
	/**
	 * 事件处理函数
	 * @param e 事件对象
	 * @return 成功返回true否则返回false
	 */
	public boolean onEvent(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onEvent_CEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onEvent_CEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onEvent_NoVirtual(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onEvent_CEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	public DataSourceEventObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataSourceEventObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 定时器事件处理函数，可重载
	 * @param e 定时器事件，内有定时器id
	 */
	public void onTimerEvent(com.earthview.world.core.TimerEvent e)
	{
		super.onTimerEvent_NoVirtual(e);
	}
	/**
	 * 用户自定义事件处理函数，是onEvent的子过程，可重载
	 * @param e 事件
	 */
	public void onCustomEvent(com.earthview.world.core.Event e)
	{
		super.onCustomEvent_NoVirtual(e);
	}
	
	native protected void register_onDeleteDataSource_CDataSourceActiveEvent(long pNativeObject, String method);
	native protected void register_onCreateDataSource_CDataSourceActiveEvent(long pNativeObject, String method);
	native protected void register_onOpenDataSource_CDataSourceActiveEvent(long pNativeObject, String method);
	native protected void register_onCloseDataSource_CDataSourceActiveEvent(long pNativeObject, String method);
	native protected void register_onCreateDataset_CDatasetActiveEvent(long pNativeObject, String method);
	native protected void register_onOpenDataset_CDatasetActiveEvent(long pNativeObject, String method);
	native protected void register_onCloseDataset_CDatasetActiveEvent(long pNativeObject, String method);
	native protected void register_onCloseAllDatasets_CDataSourceActiveEvent(long pNativeObject, String method);
	native protected void register_onImportData_void(long pNativeObject, String method);
	native protected void register_onExportData_void(long pNativeObject, String method);
	native protected void register_onEvent_CEvent(long pNativeObject, String method);
	native protected void register_onTimerEvent_CTimerEvent(long pNativeObject, String method);
	native protected void register_onCustomEvent_CEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onDeleteDataSource_CDataSourceActiveEvent(this.nativeObject.pointer, "onDeleteDataSource_CDataSourceActiveEvent_callback");
			this.register_onCreateDataSource_CDataSourceActiveEvent(this.nativeObject.pointer, "onCreateDataSource_CDataSourceActiveEvent_callback");
			this.register_onOpenDataSource_CDataSourceActiveEvent(this.nativeObject.pointer, "onOpenDataSource_CDataSourceActiveEvent_callback");
			this.register_onCloseDataSource_CDataSourceActiveEvent(this.nativeObject.pointer, "onCloseDataSource_CDataSourceActiveEvent_callback");
			this.register_onCreateDataset_CDatasetActiveEvent(this.nativeObject.pointer, "onCreateDataset_CDatasetActiveEvent_callback");
			this.register_onOpenDataset_CDatasetActiveEvent(this.nativeObject.pointer, "onOpenDataset_CDatasetActiveEvent_callback");
			this.register_onCloseDataset_CDatasetActiveEvent(this.nativeObject.pointer, "onCloseDataset_CDatasetActiveEvent_callback");
			this.register_onCloseAllDatasets_CDataSourceActiveEvent(this.nativeObject.pointer, "onCloseAllDatasets_CDataSourceActiveEvent_callback");
			this.register_onImportData_void(this.nativeObject.pointer, "onImportData_void_callback");
			this.register_onExportData_void(this.nativeObject.pointer, "onExportData_void_callback");
			this.register_onEvent_CEvent(this.nativeObject.pointer, "onEvent_CEvent_callback");
			this.register_onTimerEvent_CTimerEvent(this.nativeObject.pointer, "onTimerEvent_CTimerEvent_callback");
			this.register_onCustomEvent_CEvent(this.nativeObject.pointer, "onCustomEvent_CEvent_callback");
		}
	}
	
	public static DataSourceEventObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataSourceEventObject obj = null;
 		if(baseObj instanceof DataSourceEventObject)
		{
			obj = (DataSourceEventObject)baseObj;
		} else {
			obj = new DataSourceEventObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDataSourceEventObject");
			obj.increaseCast();
		}

		return obj;
	}
}
