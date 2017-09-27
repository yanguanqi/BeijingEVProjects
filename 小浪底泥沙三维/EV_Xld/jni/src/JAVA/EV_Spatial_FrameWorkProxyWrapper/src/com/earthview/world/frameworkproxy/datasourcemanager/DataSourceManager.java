package com.earthview.world.frameworkproxy.datasourcemanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager", new DataSourceManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::JCDataSourceManagerProxy", new DataSourceManagerClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public DataSourceManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDataSourceManagerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private static long getSingleton_void();
	/**
	 * 获取单件对象
	 * @param  
	 * @return 单件对象
	 */
	public static com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager(CreatedWhenConstruct.CWC_NotToCreate, "CDataSourceManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDataSourceManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	/**
	 * 获取单件对象指针
	 * @param  
	 * @return 单件对象指针
	 */
	public static com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager(CreatedWhenConstruct.CWC_NotToCreate, "CDataSourceManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDataSourceManager");
		}
		return __returnValue;
	}
	protected  boolean createDataSource_CDataSourceURL_callback(long datasourceURL)
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURLParamValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL(CreatedWhenConstruct.CWC_NotToCreate);
		datasourceURLParamValue.setDelegate(true);
		datasourceURLParamValue.setInstancePointer(new InstancePointer(datasourceURL));
		IClassFactory datasourceURLParamValueClassFactory = GlobalClassFactoryMap.get(datasourceURLParamValue.getCppInstanceTypeName());
		if (datasourceURLParamValueClassFactory != null)
		{
			datasourceURLParamValue.setDelegate(true);
			datasourceURLParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL)datasourceURLParamValueClassFactory.create();
			datasourceURLParamValue.setDelegate(true);
			datasourceURLParamValue.setInstancePointer(new InstancePointer(datasourceURL));
		}
		boolean returnValue = createDataSource(datasourceURLParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean createDataSource_CDataSourceURL(long pNativeObject, long datasourceURL);
	/**
	 * /创建数据源/
	 * @param datasourceURL 数据源描述
	 * @return 成功返回true否则返回false
	 */
	public boolean createDataSource(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURL)
	{
		long datasourceURLParamValue = datasourceURL.nativeObject.pointer;
		boolean returnValue = createDataSource_CDataSourceURL(this.nativeObject.pointer, datasourceURLParamValue);
		return returnValue;
	}
	native private boolean createDataSource_CDataSourceURL_NoVirtual(long pNativeObject, long datasourceURL);
	protected boolean createDataSource_NoVirtual(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURL)
	{
		long datasourceURLParamValue = datasourceURL.nativeObject.pointer;
		boolean returnValue = createDataSource_CDataSourceURL_NoVirtual(this.nativeObject.pointer, datasourceURLParamValue);
		return returnValue;
	}

	protected  boolean deleteDataSource_CDataSourceURL_callback(long datasourceURL)
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURLParamValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL(CreatedWhenConstruct.CWC_NotToCreate);
		datasourceURLParamValue.setDelegate(true);
		datasourceURLParamValue.setInstancePointer(new InstancePointer(datasourceURL));
		IClassFactory datasourceURLParamValueClassFactory = GlobalClassFactoryMap.get(datasourceURLParamValue.getCppInstanceTypeName());
		if (datasourceURLParamValueClassFactory != null)
		{
			datasourceURLParamValue.setDelegate(true);
			datasourceURLParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL)datasourceURLParamValueClassFactory.create();
			datasourceURLParamValue.setDelegate(true);
			datasourceURLParamValue.setInstancePointer(new InstancePointer(datasourceURL));
		}
		boolean returnValue = deleteDataSource(datasourceURLParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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
	native private boolean deleteDataSource_CDataSourceURL_NoVirtual(long pNativeObject, long datasourceURL);
	protected boolean deleteDataSource_NoVirtual(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURL)
	{
		long datasourceURLParamValue = datasourceURL.nativeObject.pointer;
		boolean returnValue = deleteDataSource_CDataSourceURL_NoVirtual(this.nativeObject.pointer, datasourceURLParamValue);
		return returnValue;
	}

	protected  boolean openDataSource_CDataSourceURL_callback(long datasourceURL)
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURLParamValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL(CreatedWhenConstruct.CWC_NotToCreate);
		datasourceURLParamValue.setDelegate(true);
		datasourceURLParamValue.setInstancePointer(new InstancePointer(datasourceURL));
		IClassFactory datasourceURLParamValueClassFactory = GlobalClassFactoryMap.get(datasourceURLParamValue.getCppInstanceTypeName());
		if (datasourceURLParamValueClassFactory != null)
		{
			datasourceURLParamValue.setDelegate(true);
			datasourceURLParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL)datasourceURLParamValueClassFactory.create();
			datasourceURLParamValue.setDelegate(true);
			datasourceURLParamValue.setInstancePointer(new InstancePointer(datasourceURL));
		}
		boolean returnValue = openDataSource(datasourceURLParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean openDataSource_CDataSourceURL(long pNativeObject, long datasourceURL);
	/**
	 * 打开数据源
	 * @param datasourceURL 数据源描述
	 * @return 成功返回true否则返回false
	 */
	public boolean openDataSource(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURL)
	{
		long datasourceURLParamValue = datasourceURL.nativeObject.pointer;
		boolean returnValue = openDataSource_CDataSourceURL(this.nativeObject.pointer, datasourceURLParamValue);
		return returnValue;
	}
	native private boolean openDataSource_CDataSourceURL_NoVirtual(long pNativeObject, long datasourceURL);
	protected boolean openDataSource_NoVirtual(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURL)
	{
		long datasourceURLParamValue = datasourceURL.nativeObject.pointer;
		boolean returnValue = openDataSource_CDataSourceURL_NoVirtual(this.nativeObject.pointer, datasourceURLParamValue);
		return returnValue;
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
	native private boolean createVectorDataset_CDataSourceURL_EVString_EVGeometryType_ev_int32_CFields(long pNativeObject, long datasourceURL, String datasetName, int type, int coordSys, long attrFields);
	/**
	 * 创建矢量数据集
	 * @param datasourceURL 数据集描述
	 * @param datasetName 数据集名称
	 * @param type 坐标系统类型
	 * @param coordSys 坐标系统值
	 * @return 成功返回true否则返回false
	 */
	public boolean createVectorDataset(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURL, String datasetName, com.earthview.world.spatial.geometry.EVGeometryType type, int coordSys, com.earthview.world.spatial.geodataset.Fields attrFields)
	{
		long datasourceURLParamValue = datasourceURL.nativeObject.pointer;
		String datasetNameParamValue = datasetName;
		int typeParamValue = type.getValue();
		int coordSysParamValue = coordSys;
		long attrFieldsParamValue = attrFields.nativeObject.pointer;
		boolean returnValue = createVectorDataset_CDataSourceURL_EVString_EVGeometryType_ev_int32_CFields(this.nativeObject.pointer, datasourceURLParamValue, datasetNameParamValue, typeParamValue, coordSysParamValue, attrFieldsParamValue);
		return returnValue;
	}
	native private boolean createVectorDataset_CDataSourceURL_EVString_EVGeometryType_EVString_CFields(long pNativeObject, long datasourceURL, String datasetName, int type, String wktCoordSys, long attrFields);
	/**
	 * 创建矢量数据集
	 * @param datasourceURL 数据集描述
	 * @param datasetName 数据集名称
	 * @param type 坐标系统类型
	 * @param wktCoordSys wkt坐标系
	 * @return 成功返回true否则返回false
	 */
	public boolean createVectorDataset(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURL, String datasetName, com.earthview.world.spatial.geometry.EVGeometryType type, String wktCoordSys, com.earthview.world.spatial.geodataset.Fields attrFields)
	{
		long datasourceURLParamValue = datasourceURL.nativeObject.pointer;
		String datasetNameParamValue = datasetName;
		int typeParamValue = type.getValue();
		String wktCoordSysParamValue = wktCoordSys;
		long attrFieldsParamValue = attrFields.nativeObject.pointer;
		boolean returnValue = createVectorDataset_CDataSourceURL_EVString_EVGeometryType_EVString_CFields(this.nativeObject.pointer, datasourceURLParamValue, datasetNameParamValue, typeParamValue, wktCoordSysParamValue, attrFieldsParamValue);
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
	native private boolean addKmlDataset_CDataSourceURL_EVString(long pNativeObject, long datasourceURL, String datasetPath);
	/**
	 * 添加kml数据集
	 * @param datasourceURL 数据源描述
	 * @param datasetName 数据集名称
	 * @return 成功返回true否则返回false
	 */
	public boolean addKmlDataset(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURL, String datasetPath)
	{
		long datasourceURLParamValue = datasourceURL.nativeObject.pointer;
		String datasetPathParamValue = datasetPath;
		boolean returnValue = addKmlDataset_CDataSourceURL_EVString(this.nativeObject.pointer, datasourceURLParamValue, datasetPathParamValue);
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
	native private long getDBDataSourceArr_void(long pNativeObject);
	/**
	 * 获取打开的数据库数据源描述列表
	 * @param  
	 * @return 打开的数据库数据源描述列表
	 */
	public com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLStructArr getDBDataSourceArr()
	{
		long returnValue = getDBDataSourceArr_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLStructArr __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLStructArr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataSourceURLStructArr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLStructArr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataSourceURLStructArr");
		}
		return __returnValue;
	}
	native private long getFileDataSourceArr_void(long pNativeObject);
	/**
	 * 获取打开的文件数据源描述列表
	 * @param  
	 * @return 打开的文件数据源描述列表
	 */
	public com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLStructArr getFileDataSourceArr()
	{
		long returnValue = getFileDataSourceArr_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLStructArr __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLStructArr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataSourceURLStructArr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLStructArr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataSourceURLStructArr");
		}
		return __returnValue;
	}
	native private long getWebDataSourceArr_void(long pNativeObject);
	/**
	 * 获取打开的网络数据源描述列表
	 * @param  
	 * @return 打开的网络数据源描述列表
	 */
	public com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLStructArr getWebDataSourceArr()
	{
		long returnValue = getWebDataSourceArr_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLStructArr __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLStructArr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataSourceURLStructArr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLStructArr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataSourceURLStructArr");
		}
		return __returnValue;
	}
	protected  boolean closeDataSource_CDataSourceActiveEvent_callback(long dataSourceEvent)
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEventParamValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
		dataSourceEventParamValue.setDelegate(true);
		dataSourceEventParamValue.setInstancePointer(new InstancePointer(dataSourceEvent));
		IClassFactory dataSourceEventParamValueClassFactory = GlobalClassFactoryMap.get(dataSourceEventParamValue.getCppInstanceTypeName());
		if (dataSourceEventParamValueClassFactory != null)
		{
			dataSourceEventParamValue.setDelegate(true);
			dataSourceEventParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent)dataSourceEventParamValueClassFactory.create();
			dataSourceEventParamValue.setDelegate(true);
			dataSourceEventParamValue.setInstancePointer(new InstancePointer(dataSourceEvent));
		}
		boolean returnValue = closeDataSource(dataSourceEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean closeDataSource_CDataSourceActiveEvent(long pNativeObject, long dataSourceEvent);
	/**
	 * 关闭一个数据源
	 * @param dataSourceEvent 请求事件对象（用户需要设置对象的URL和事件对象的类型）
	 * @return 成功返回true,失败返回false
	 */
	public boolean closeDataSource(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEvent)
	{
		long dataSourceEventParamValue = dataSourceEvent.nativeObject.pointer;
		boolean returnValue = closeDataSource_CDataSourceActiveEvent(this.nativeObject.pointer, dataSourceEventParamValue);
		return returnValue;
	}
	native private boolean closeDataSource_CDataSourceActiveEvent_NoVirtual(long pNativeObject, long dataSourceEvent);
	protected boolean closeDataSource_NoVirtual(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEvent)
	{
		long dataSourceEventParamValue = dataSourceEvent.nativeObject.pointer;
		boolean returnValue = closeDataSource_CDataSourceActiveEvent_NoVirtual(this.nativeObject.pointer, dataSourceEventParamValue);
		return returnValue;
	}

	protected  boolean openDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback(long dataSourceEvent, long dataSetEvent)
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEventParamValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
		dataSourceEventParamValue.setDelegate(true);
		dataSourceEventParamValue.setInstancePointer(new InstancePointer(dataSourceEvent));
		IClassFactory dataSourceEventParamValueClassFactory = GlobalClassFactoryMap.get(dataSourceEventParamValue.getCppInstanceTypeName());
		if (dataSourceEventParamValueClassFactory != null)
		{
			dataSourceEventParamValue.setDelegate(true);
			dataSourceEventParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent)dataSourceEventParamValueClassFactory.create();
			dataSourceEventParamValue.setDelegate(true);
			dataSourceEventParamValue.setInstancePointer(new InstancePointer(dataSourceEvent));
		}
		com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent dataSetEventParamValue = new com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
		dataSetEventParamValue.setDelegate(true);
		dataSetEventParamValue.setInstancePointer(new InstancePointer(dataSetEvent));
		IClassFactory dataSetEventParamValueClassFactory = GlobalClassFactoryMap.get(dataSetEventParamValue.getCppInstanceTypeName());
		if (dataSetEventParamValueClassFactory != null)
		{
			dataSetEventParamValue.setDelegate(true);
			dataSetEventParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent)dataSetEventParamValueClassFactory.create();
			dataSetEventParamValue.setDelegate(true);
			dataSetEventParamValue.setInstancePointer(new InstancePointer(dataSetEvent));
		}
		boolean returnValue = openDataset(dataSourceEventParamValue, dataSetEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean openDataset_CDataSourceActiveEvent_CDatasetActiveEvent(long pNativeObject, long dataSourceEvent, long dataSetEvent);
	/**
	 * 打开一个数据集
	 * @param dataSourceEvent 请求事件对象（用户需要设置对象的URL和事件对象的类型）
	 * @param dataSetEvent 请求事件对象（用户需要填写数据源类型，数据集类型和数据集名称）
	 * @return 成功返回true,失败返回false
	 */
	public boolean openDataset(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEvent, com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent dataSetEvent)
	{
		long dataSourceEventParamValue = dataSourceEvent.nativeObject.pointer;
		long dataSetEventParamValue = dataSetEvent.nativeObject.pointer;
		boolean returnValue = openDataset_CDataSourceActiveEvent_CDatasetActiveEvent(this.nativeObject.pointer, dataSourceEventParamValue, dataSetEventParamValue);
		return returnValue;
	}
	native private boolean openDataset_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(long pNativeObject, long dataSourceEvent, long dataSetEvent);
	protected boolean openDataset_NoVirtual(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEvent, com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent dataSetEvent)
	{
		long dataSourceEventParamValue = dataSourceEvent.nativeObject.pointer;
		long dataSetEventParamValue = dataSetEvent.nativeObject.pointer;
		boolean returnValue = openDataset_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(this.nativeObject.pointer, dataSourceEventParamValue, dataSetEventParamValue);
		return returnValue;
	}

	protected  boolean createDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback(long dataSourceEvent, long dataSetEvent)
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEventParamValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
		dataSourceEventParamValue.setDelegate(true);
		dataSourceEventParamValue.setInstancePointer(new InstancePointer(dataSourceEvent));
		IClassFactory dataSourceEventParamValueClassFactory = GlobalClassFactoryMap.get(dataSourceEventParamValue.getCppInstanceTypeName());
		if (dataSourceEventParamValueClassFactory != null)
		{
			dataSourceEventParamValue.setDelegate(true);
			dataSourceEventParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent)dataSourceEventParamValueClassFactory.create();
			dataSourceEventParamValue.setDelegate(true);
			dataSourceEventParamValue.setInstancePointer(new InstancePointer(dataSourceEvent));
		}
		com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent dataSetEventParamValue = new com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
		dataSetEventParamValue.setDelegate(true);
		dataSetEventParamValue.setInstancePointer(new InstancePointer(dataSetEvent));
		IClassFactory dataSetEventParamValueClassFactory = GlobalClassFactoryMap.get(dataSetEventParamValue.getCppInstanceTypeName());
		if (dataSetEventParamValueClassFactory != null)
		{
			dataSetEventParamValue.setDelegate(true);
			dataSetEventParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent)dataSetEventParamValueClassFactory.create();
			dataSetEventParamValue.setDelegate(true);
			dataSetEventParamValue.setInstancePointer(new InstancePointer(dataSetEvent));
		}
		boolean returnValue = createDataset(dataSourceEventParamValue, dataSetEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean createDataset_CDataSourceActiveEvent_CDatasetActiveEvent(long pNativeObject, long dataSourceEvent, long dataSetEvent);
	/**
	 * 创建一个数据集
	 * @param dataSourceEvent 请求事件对象（用户需要设置对象的URL和事件对象的类型）
	 * @param dataSetEvent 请求事件对象（用户需要填写数据源类型，数据集类型和数据集名称）
	 * @return 成功返回true,失败返回false
	 */
	public boolean createDataset(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEvent, com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent dataSetEvent)
	{
		long dataSourceEventParamValue = dataSourceEvent.nativeObject.pointer;
		long dataSetEventParamValue = dataSetEvent.nativeObject.pointer;
		boolean returnValue = createDataset_CDataSourceActiveEvent_CDatasetActiveEvent(this.nativeObject.pointer, dataSourceEventParamValue, dataSetEventParamValue);
		return returnValue;
	}
	native private boolean createDataset_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(long pNativeObject, long dataSourceEvent, long dataSetEvent);
	protected boolean createDataset_NoVirtual(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEvent, com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent dataSetEvent)
	{
		long dataSourceEventParamValue = dataSourceEvent.nativeObject.pointer;
		long dataSetEventParamValue = dataSetEvent.nativeObject.pointer;
		boolean returnValue = createDataset_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(this.nativeObject.pointer, dataSourceEventParamValue, dataSetEventParamValue);
		return returnValue;
	}

	protected  boolean closeDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback(long dataSourceEvent, long dataSetEvent)
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEventParamValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
		dataSourceEventParamValue.setDelegate(true);
		dataSourceEventParamValue.setInstancePointer(new InstancePointer(dataSourceEvent));
		IClassFactory dataSourceEventParamValueClassFactory = GlobalClassFactoryMap.get(dataSourceEventParamValue.getCppInstanceTypeName());
		if (dataSourceEventParamValueClassFactory != null)
		{
			dataSourceEventParamValue.setDelegate(true);
			dataSourceEventParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent)dataSourceEventParamValueClassFactory.create();
			dataSourceEventParamValue.setDelegate(true);
			dataSourceEventParamValue.setInstancePointer(new InstancePointer(dataSourceEvent));
		}
		com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent dataSetEventParamValue = new com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
		dataSetEventParamValue.setDelegate(true);
		dataSetEventParamValue.setInstancePointer(new InstancePointer(dataSetEvent));
		IClassFactory dataSetEventParamValueClassFactory = GlobalClassFactoryMap.get(dataSetEventParamValue.getCppInstanceTypeName());
		if (dataSetEventParamValueClassFactory != null)
		{
			dataSetEventParamValue.setDelegate(true);
			dataSetEventParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent)dataSetEventParamValueClassFactory.create();
			dataSetEventParamValue.setDelegate(true);
			dataSetEventParamValue.setInstancePointer(new InstancePointer(dataSetEvent));
		}
		boolean returnValue = closeDataset(dataSourceEventParamValue, dataSetEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean closeDataset_CDataSourceActiveEvent_CDatasetActiveEvent(long pNativeObject, long dataSourceEvent, long dataSetEvent);
	/**
	 * 关闭一个数据集
	 * @param dataSourceEvent 请求事件对象（用户需要设置对象的URL和事件对象的类型）
	 * @param dataSetEvent 请求事件对象（用户需要填写数据源类型，数据集类型和数据集名称）
	 * @return 成功返回true,失败返回false
	 */
	public boolean closeDataset(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEvent, com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent dataSetEvent)
	{
		long dataSourceEventParamValue = dataSourceEvent.nativeObject.pointer;
		long dataSetEventParamValue = dataSetEvent.nativeObject.pointer;
		boolean returnValue = closeDataset_CDataSourceActiveEvent_CDatasetActiveEvent(this.nativeObject.pointer, dataSourceEventParamValue, dataSetEventParamValue);
		return returnValue;
	}
	native private boolean closeDataset_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(long pNativeObject, long dataSourceEvent, long dataSetEvent);
	protected boolean closeDataset_NoVirtual(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEvent, com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent dataSetEvent)
	{
		long dataSourceEventParamValue = dataSourceEvent.nativeObject.pointer;
		long dataSetEventParamValue = dataSetEvent.nativeObject.pointer;
		boolean returnValue = closeDataset_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(this.nativeObject.pointer, dataSourceEventParamValue, dataSetEventParamValue);
		return returnValue;
	}

	protected  boolean closeAllDatasets_CDataSourceActiveEvent_EVDataSourceType_callback(long dataSourceEvent, int dataSourceType)
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEventParamValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
		dataSourceEventParamValue.setDelegate(true);
		dataSourceEventParamValue.setInstancePointer(new InstancePointer(dataSourceEvent));
		IClassFactory dataSourceEventParamValueClassFactory = GlobalClassFactoryMap.get(dataSourceEventParamValue.getCppInstanceTypeName());
		if (dataSourceEventParamValueClassFactory != null)
		{
			dataSourceEventParamValue.setDelegate(true);
			dataSourceEventParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent)dataSourceEventParamValueClassFactory.create();
			dataSourceEventParamValue.setDelegate(true);
			dataSourceEventParamValue.setInstancePointer(new InstancePointer(dataSourceEvent));
		}
		com.earthview.world.spatial.geodataset.EVDataSourceType dataSourceTypeParamValue = com.earthview.world.spatial.geodataset.EVDataSourceType.toEnum(dataSourceType);
		boolean returnValue = closeAllDatasets(dataSourceEventParamValue, dataSourceTypeParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean closeAllDatasets_CDataSourceActiveEvent_EVDataSourceType(long pNativeObject, long dataSourceEvent, int dataSourceType);
	/**
	 * 关闭指定类型的所有数据源
	 * @param dataSourceEvent 请求事件对象（用户需要设置对象的URL和事件对象的类型）
	 * @param dataSourceType 需要关闭的数据源类型
	 * @return 成功返回true,失败返回false
	 */
	public boolean closeAllDatasets(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEvent, com.earthview.world.spatial.geodataset.EVDataSourceType dataSourceType)
	{
		long dataSourceEventParamValue = dataSourceEvent.nativeObject.pointer;
		int dataSourceTypeParamValue = dataSourceType.getValue();
		boolean returnValue = closeAllDatasets_CDataSourceActiveEvent_EVDataSourceType(this.nativeObject.pointer, dataSourceEventParamValue, dataSourceTypeParamValue);
		return returnValue;
	}
	native private boolean closeAllDatasets_CDataSourceActiveEvent_EVDataSourceType_NoVirtual(long pNativeObject, long dataSourceEvent, int dataSourceType);
	protected boolean closeAllDatasets_NoVirtual(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEvent, com.earthview.world.spatial.geodataset.EVDataSourceType dataSourceType)
	{
		long dataSourceEventParamValue = dataSourceEvent.nativeObject.pointer;
		int dataSourceTypeParamValue = dataSourceType.getValue();
		boolean returnValue = closeAllDatasets_CDataSourceActiveEvent_EVDataSourceType_NoVirtual(this.nativeObject.pointer, dataSourceEventParamValue, dataSourceTypeParamValue);
		return returnValue;
	}

	protected  String getDataSourceName_EVString_callback(String aliasName)
	{
		String aliasNameParamValue = aliasName;
		String returnValue = getDataSourceName(aliasNameParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getDataSourceName_EVString(long pNativeObject, String aliasName);
	/**
	 * 通过数据源别名获取数据源名称
	 * @param  
	 */
	public String getDataSourceName(String aliasName)
	{
		String aliasNameParamValue = aliasName;
		String returnValue = getDataSourceName_EVString(this.nativeObject.pointer, aliasNameParamValue);
		return returnValue;
	}
	native private String getDataSourceName_EVString_NoVirtual(long pNativeObject, String aliasName);
	protected String getDataSourceName_NoVirtual(String aliasName)
	{
		String aliasNameParamValue = aliasName;
		String returnValue = getDataSourceName_EVString_NoVirtual(this.nativeObject.pointer, aliasNameParamValue);
		return returnValue;
	}

	protected  boolean closeAllDatasets_CDataSourceActiveEvent_callback(long dataSourceEvent)
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEventParamValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
		dataSourceEventParamValue.setDelegate(true);
		dataSourceEventParamValue.setInstancePointer(new InstancePointer(dataSourceEvent));
		IClassFactory dataSourceEventParamValueClassFactory = GlobalClassFactoryMap.get(dataSourceEventParamValue.getCppInstanceTypeName());
		if (dataSourceEventParamValueClassFactory != null)
		{
			dataSourceEventParamValue.setDelegate(true);
			dataSourceEventParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent)dataSourceEventParamValueClassFactory.create();
			dataSourceEventParamValue.setDelegate(true);
			dataSourceEventParamValue.setInstancePointer(new InstancePointer(dataSourceEvent));
		}
		boolean returnValue = closeAllDatasets(dataSourceEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean closeAllDatasets_CDataSourceActiveEvent(long pNativeObject, long dataSourceEvent);
	/**
	 * 关闭所有数据源
	 * @param dataSourceEvent 请求事件对象（用户需要设置对象的URL和事件对象的类型）
	 * @return 成功返回true,失败返回false
	 */
	public boolean closeAllDatasets(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEvent)
	{
		long dataSourceEventParamValue = dataSourceEvent.nativeObject.pointer;
		boolean returnValue = closeAllDatasets_CDataSourceActiveEvent(this.nativeObject.pointer, dataSourceEventParamValue);
		return returnValue;
	}
	native private boolean closeAllDatasets_CDataSourceActiveEvent_NoVirtual(long pNativeObject, long dataSourceEvent);
	protected boolean closeAllDatasets_NoVirtual(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEvent)
	{
		long dataSourceEventParamValue = dataSourceEvent.nativeObject.pointer;
		boolean returnValue = closeAllDatasets_CDataSourceActiveEvent_NoVirtual(this.nativeObject.pointer, dataSourceEventParamValue);
		return returnValue;
	}

	protected  boolean importData_CDataSourceActiveEvent_CDatasetActiveEvent_callback(long dataSourceEvent, long dataSetEvent)
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEventParamValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
		dataSourceEventParamValue.setDelegate(true);
		dataSourceEventParamValue.setInstancePointer(new InstancePointer(dataSourceEvent));
		IClassFactory dataSourceEventParamValueClassFactory = GlobalClassFactoryMap.get(dataSourceEventParamValue.getCppInstanceTypeName());
		if (dataSourceEventParamValueClassFactory != null)
		{
			dataSourceEventParamValue.setDelegate(true);
			dataSourceEventParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent)dataSourceEventParamValueClassFactory.create();
			dataSourceEventParamValue.setDelegate(true);
			dataSourceEventParamValue.setInstancePointer(new InstancePointer(dataSourceEvent));
		}
		com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent dataSetEventParamValue = new com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
		dataSetEventParamValue.setDelegate(true);
		dataSetEventParamValue.setInstancePointer(new InstancePointer(dataSetEvent));
		IClassFactory dataSetEventParamValueClassFactory = GlobalClassFactoryMap.get(dataSetEventParamValue.getCppInstanceTypeName());
		if (dataSetEventParamValueClassFactory != null)
		{
			dataSetEventParamValue.setDelegate(true);
			dataSetEventParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent)dataSetEventParamValueClassFactory.create();
			dataSetEventParamValue.setDelegate(true);
			dataSetEventParamValue.setInstancePointer(new InstancePointer(dataSetEvent));
		}
		boolean returnValue = importData(dataSourceEventParamValue, dataSetEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean importData_CDataSourceActiveEvent_CDatasetActiveEvent(long pNativeObject, long dataSourceEvent, long dataSetEvent);
	/**
	 * 导入数据
	 * @param  
	 */
	public boolean importData(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEvent, com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent dataSetEvent)
	{
		long dataSourceEventParamValue = dataSourceEvent.nativeObject.pointer;
		long dataSetEventParamValue = dataSetEvent.nativeObject.pointer;
		boolean returnValue = importData_CDataSourceActiveEvent_CDatasetActiveEvent(this.nativeObject.pointer, dataSourceEventParamValue, dataSetEventParamValue);
		return returnValue;
	}
	native private boolean importData_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(long pNativeObject, long dataSourceEvent, long dataSetEvent);
	protected boolean importData_NoVirtual(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEvent, com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent dataSetEvent)
	{
		long dataSourceEventParamValue = dataSourceEvent.nativeObject.pointer;
		long dataSetEventParamValue = dataSetEvent.nativeObject.pointer;
		boolean returnValue = importData_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(this.nativeObject.pointer, dataSourceEventParamValue, dataSetEventParamValue);
		return returnValue;
	}

	protected  boolean exportData_CDataSourceActiveEvent_CDatasetActiveEvent_callback(long dataSourceEvent, long dataSetEvent)
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEventParamValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
		dataSourceEventParamValue.setDelegate(true);
		dataSourceEventParamValue.setInstancePointer(new InstancePointer(dataSourceEvent));
		IClassFactory dataSourceEventParamValueClassFactory = GlobalClassFactoryMap.get(dataSourceEventParamValue.getCppInstanceTypeName());
		if (dataSourceEventParamValueClassFactory != null)
		{
			dataSourceEventParamValue.setDelegate(true);
			dataSourceEventParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent)dataSourceEventParamValueClassFactory.create();
			dataSourceEventParamValue.setDelegate(true);
			dataSourceEventParamValue.setInstancePointer(new InstancePointer(dataSourceEvent));
		}
		com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent dataSetEventParamValue = new com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
		dataSetEventParamValue.setDelegate(true);
		dataSetEventParamValue.setInstancePointer(new InstancePointer(dataSetEvent));
		IClassFactory dataSetEventParamValueClassFactory = GlobalClassFactoryMap.get(dataSetEventParamValue.getCppInstanceTypeName());
		if (dataSetEventParamValueClassFactory != null)
		{
			dataSetEventParamValue.setDelegate(true);
			dataSetEventParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent)dataSetEventParamValueClassFactory.create();
			dataSetEventParamValue.setDelegate(true);
			dataSetEventParamValue.setInstancePointer(new InstancePointer(dataSetEvent));
		}
		boolean returnValue = exportData(dataSourceEventParamValue, dataSetEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean exportData_CDataSourceActiveEvent_CDatasetActiveEvent(long pNativeObject, long dataSourceEvent, long dataSetEvent);
	/**
	 * 导出数据
	 * @param  
	 */
	public boolean exportData(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEvent, com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent dataSetEvent)
	{
		long dataSourceEventParamValue = dataSourceEvent.nativeObject.pointer;
		long dataSetEventParamValue = dataSetEvent.nativeObject.pointer;
		boolean returnValue = exportData_CDataSourceActiveEvent_CDatasetActiveEvent(this.nativeObject.pointer, dataSourceEventParamValue, dataSetEventParamValue);
		return returnValue;
	}
	native private boolean exportData_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(long pNativeObject, long dataSourceEvent, long dataSetEvent);
	protected boolean exportData_NoVirtual(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent dataSourceEvent, com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent dataSetEvent)
	{
		long dataSourceEventParamValue = dataSourceEvent.nativeObject.pointer;
		long dataSetEventParamValue = dataSetEvent.nativeObject.pointer;
		boolean returnValue = exportData_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(this.nativeObject.pointer, dataSourceEventParamValue, dataSetEventParamValue);
		return returnValue;
	}

	protected  long getDataSourceActiveEventArr_void_callback()
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr returnValue = getDataSourceActiveEventArr();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDataSourceActiveEventArr_void(long pNativeObject);
	/**
	 * 获取所有数据集列表
	 * @param  
	 * @return 数据集列表
	 */
	public com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr getDataSourceActiveEventArr()
	{
		long returnValue = getDataSourceActiveEventArr_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr(CreatedWhenConstruct.CWC_NotToCreate, "DataSourceActiveEventArr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DataSourceActiveEventArr");
		}
		return __returnValue;
	}
	native private long getDataSourceActiveEventArr_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr getDataSourceActiveEventArr_NoVirtual()
	{
		long returnValue = getDataSourceActiveEventArr_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr(CreatedWhenConstruct.CWC_NotToCreate, "DataSourceActiveEventArr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DataSourceActiveEventArr");
		}
		return __returnValue;
	}

	protected  long getInternalDataSourceActiveEventArr_void_callback()
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr returnValue = getInternalDataSourceActiveEventArr();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getInternalDataSourceActiveEventArr_void(long pNativeObject);
	/**
	 * 获取所有内部数据集列表引用
	 * @param  
	 * @return 数据集列表
	 */
	public com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr getInternalDataSourceActiveEventArr()
	{
		long returnValue = getInternalDataSourceActiveEventArr_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr(CreatedWhenConstruct.CWC_NotToCreate, "DataSourceActiveEventArr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DataSourceActiveEventArr");
		}
		return __returnValue;
	}
	native private long getInternalDataSourceActiveEventArr_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr getInternalDataSourceActiveEventArr_NoVirtual()
	{
		long returnValue = getInternalDataSourceActiveEventArr_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr(CreatedWhenConstruct.CWC_NotToCreate, "DataSourceActiveEventArr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DataSourceActiveEventArr");
		}
		return __returnValue;
	}

	protected  long getDataSourceActiveEventArr_CDataSourceURL_callback(long datasourceURL)
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURLParamValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL(CreatedWhenConstruct.CWC_NotToCreate);
		datasourceURLParamValue.setDelegate(true);
		datasourceURLParamValue.setInstancePointer(new InstancePointer(datasourceURL));
		IClassFactory datasourceURLParamValueClassFactory = GlobalClassFactoryMap.get(datasourceURLParamValue.getCppInstanceTypeName());
		if (datasourceURLParamValueClassFactory != null)
		{
			datasourceURLParamValue.setDelegate(true);
			datasourceURLParamValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL)datasourceURLParamValueClassFactory.create();
			datasourceURLParamValue.setDelegate(true);
			datasourceURLParamValue.setInstancePointer(new InstancePointer(datasourceURL));
		}
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr returnValue = getDataSourceActiveEventArr(datasourceURLParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDataSourceActiveEventArr_CDataSourceURL(long pNativeObject, long datasourceURL);
	/**
	 * 获取指定数据源的数据集列表
	 * @param datasourceURL 数据源URL
	 * @return 数据集列表
	 */
	public com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr getDataSourceActiveEventArr(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURL)
	{
		long datasourceURLParamValue = datasourceURL.nativeObject.pointer;
		long returnValue = getDataSourceActiveEventArr_CDataSourceURL(this.nativeObject.pointer, datasourceURLParamValue);
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr(CreatedWhenConstruct.CWC_NotToCreate, "DataSourceActiveEventArr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DataSourceActiveEventArr");
		}
		return __returnValue;
	}
	native private long getDataSourceActiveEventArr_CDataSourceURL_NoVirtual(long pNativeObject, long datasourceURL);
	protected com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr getDataSourceActiveEventArr_NoVirtual(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL datasourceURL)
	{
		long datasourceURLParamValue = datasourceURL.nativeObject.pointer;
		long returnValue = getDataSourceActiveEventArr_CDataSourceURL_NoVirtual(this.nativeObject.pointer, datasourceURLParamValue);
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr(CreatedWhenConstruct.CWC_NotToCreate, "DataSourceActiveEventArr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DataSourceActiveEventArr");
		}
		return __returnValue;
	}

	native private static void sendActiveEvent_CEvent(long pEvent);
	/**
	 * 发送事件
	 * @param pEvent 事件对象
	 */
	public static void sendActiveEvent(com.earthview.world.core.Event pEvent)
	{
		long pEventParamValue = (pEvent == null ? 0L : pEvent.nativeObject.pointer);
		sendActiveEvent_CEvent(pEventParamValue);
	}
	native private void showModelManager_EVString(long pNativeObject, String dataSourceName);
	/**
	 * （用户）触发显示模型库管理事件。
	 * @param dataSourceName 数据源名称。
	 */
	public void showModelManager(String dataSourceName)
	{
		String dataSourceNameParamValue = dataSourceName;
		showModelManager_EVString(this.nativeObject.pointer, dataSourceNameParamValue);
	}
	native private void showEffectManager_EVString(long pNativeObject, String dataSourceName);
	/**
	 * （用户）触发显示特效库管理事件。
	 * @param dataSourceName 数据源名称。
	 */
	public void showEffectManager(String dataSourceName)
	{
		String dataSourceNameParamValue = dataSourceName;
		showEffectManager_EVString(this.nativeObject.pointer, dataSourceNameParamValue);
	}
	public enum CopyRetCode implements INativeEnum<CopyRetCode> {
		CopySuccess(CopyRetCodeHelper.ENUM_VALUES[0]),
		CopyFailed(CopyRetCodeHelper.ENUM_VALUES[1]);
		private int value;
		CopyRetCode(int i) {
			this.value = i;
		}
		public CopyRetCode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final CopyRetCode toEnum(int retval) {
			if(retval == CopySuccess.value){
				return CopySuccess;
			}
			else if(retval == CopyFailed.value){
				return CopyFailed;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class CopyRetCodeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private int copyDataSetTo_EVString_EVString_EVString(long pNativeObject, String sourceSourceName, String dsName, String targetSourceName);
	/**
	 * （用户）将一个数据集从一个数据源复制到另一个数据源。
	 * @param sourceSourceName 源数据源名称。
	 * @param dsName 源数据源名称。
	 * @param targetSourceName 目标数据源名称。
	 * @return CopyRetCode。
	 */
	public int copyDataSetTo(String sourceSourceName, String dsName, String targetSourceName)
	{
		String sourceSourceNameParamValue = sourceSourceName;
		String dsNameParamValue = dsName;
		String targetSourceNameParamValue = targetSourceName;
		int returnValue = copyDataSetTo_EVString_EVString_EVString(this.nativeObject.pointer, sourceSourceNameParamValue, dsNameParamValue, targetSourceNameParamValue);
		return returnValue;
	}
	native private void setLastErrorString_EVString(long pNativeObject, String error);
	/**
	 * 
	 * @param  
	 */
	public void setLastErrorString(String error)
	{
		String errorParamValue = error;
		setLastErrorString_EVString(this.nativeObject.pointer, errorParamValue);
	}
	native private String getLastErrorString_void(long pNativeObject);
	/**
	 * 获取错误描述
	 * @return 错误描述
	 */
	public String getLastErrorString()
	{
		String returnValue = getLastErrorString_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getModelDataSourcePath_EVString(long pNativeObject, String modelDataSourceName);
	/**
	 * /获取模型数据源路径/
	 * @param modelDataSourceName 模型数据源名称
	 */
	public String getModelDataSourcePath(String modelDataSourceName)
	{
		String modelDataSourceNameParamValue = modelDataSourceName;
		String returnValue = getModelDataSourcePath_EVString(this.nativeObject.pointer, modelDataSourceNameParamValue);
		return returnValue;
	}
	native private long getDBDataSourceURL_EVString(long pNativeObject, String datasourcename);
	/**
	 * 获取数据库数据源URL
	 * @param  
	 */
	public com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL getDBDataSourceURL(String datasourcename)
	{
		String datasourcenameParamValue = datasourcename;
		long returnValue = getDBDataSourceURL_EVString(this.nativeObject.pointer, datasourcenameParamValue);
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CDataSourceURL");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDataSourceURL");
		}
		return __returnValue;
	}
	native private boolean deleteDataset_EVString_EVString(long pNativeObject, String dataSourceAliasName, String datasetName);
	/**
	 * 删除数据集，只对数据库和文件型数据集有效
	 * @param  
	 */
	public boolean deleteDataset(String dataSourceAliasName, String datasetName)
	{
		String dataSourceAliasNameParamValue = dataSourceAliasName;
		String datasetNameParamValue = datasetName;
		boolean returnValue = deleteDataset_EVString_EVString(this.nativeObject.pointer, dataSourceAliasNameParamValue, datasetNameParamValue);
		return returnValue;
	}
	/**
	 * stringinterface
	 */
	public static class DataSourcePropertyStringInterface extends com.earthview.world.core.StringInterface {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface", new DataSourcePropertyStringInterfaceClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::JCDataSourcePropertyStringInterfaceProxy", new DataSourcePropertyStringInterfaceClassFactory());
		}

		/**
		 * 构造函数
		 * @param parent 指向外部类的指针
		 */
		public DataSourcePropertyStringInterface(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager ref_parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			Create("JCDataSourcePropertyStringInterfaceProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager$DataSourcePropertyStringInterface".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		public DataSourcePropertyStringInterface(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public DataSourcePropertyStringInterface(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		public boolean setParameter(String name, String value)
		{
			return super.setParameter_NoVirtual(name, value);
		}
		public boolean setParameter(String name, boolean readOnly, boolean enable)
		{
			return super.setParameter_NoVirtual(name, readOnly, enable);
		}
		public void setParameterList(com.earthview.world.core.CommonStringPairList paramList)
		{
			super.setParameterList_NoVirtual(paramList);
		}
		public String getParameter(String name)
		{
			return super.getParameter_NoVirtual(name);
		}
		public void copyParametersTo(com.earthview.world.core.StringInterface dest)
		{
			super.copyParametersTo_NoVirtual(dest);
		}
		
		native protected void register_setParameter_EVString_EVString(long pNativeObject, String method);
		native protected void register_setParameter_EVString_ev_bool_ev_bool(long pNativeObject, String method);
		native protected void register_setParameterList_CommonStringPairList(long pNativeObject, String method);
		native protected void register_getParameter_EVString(long pNativeObject, String method);
		native protected void register_copyParametersTo_CStringInterface(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_setParameter_EVString_EVString(this.nativeObject.pointer, "setParameter_EVString_EVString_callback");
				this.register_setParameter_EVString_ev_bool_ev_bool(this.nativeObject.pointer, "setParameter_EVString_ev_bool_ev_bool_callback");
				this.register_setParameterList_CommonStringPairList(this.nativeObject.pointer, "setParameterList_CommonStringPairList_callback");
				this.register_getParameter_EVString(this.nativeObject.pointer, "getParameter_EVString_callback");
				this.register_copyParametersTo_CStringInterface(this.nativeObject.pointer, "copyParametersTo_CStringInterface_callback");
			}
		}
		
		public static DataSourcePropertyStringInterface fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			DataSourcePropertyStringInterface obj = null;
 			if(baseObj instanceof DataSourcePropertyStringInterface)
			{
				obj = (DataSourcePropertyStringInterface)baseObj;
			} else {
				obj = new DataSourcePropertyStringInterface(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CDataSourcePropertyStringInterface");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class DataSourcePropertyStringInterfaceClassFactory implements IClassFactory {
		public BaseObject create()
		{
			DataSourcePropertyStringInterface emptyInstance = new DataSourcePropertyStringInterface(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * stringinterface
	 */
	public static class DataSetPropertyStringInterface extends com.earthview.world.core.StringInterface {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface", new DataSetPropertyStringInterfaceClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::JCDataSetPropertyStringInterfaceProxy", new DataSetPropertyStringInterfaceClassFactory());
		}

		/**
		 * 构造函数
		 * @param parent 指向外部类的指针
		 */
		public DataSetPropertyStringInterface(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager ref_parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			Create("JCDataSetPropertyStringInterfaceProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager$DataSetPropertyStringInterface".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		public DataSetPropertyStringInterface(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public DataSetPropertyStringInterface(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		public boolean setParameter(String name, String value)
		{
			return super.setParameter_NoVirtual(name, value);
		}
		public boolean setParameter(String name, boolean readOnly, boolean enable)
		{
			return super.setParameter_NoVirtual(name, readOnly, enable);
		}
		public void setParameterList(com.earthview.world.core.CommonStringPairList paramList)
		{
			super.setParameterList_NoVirtual(paramList);
		}
		public String getParameter(String name)
		{
			return super.getParameter_NoVirtual(name);
		}
		public void copyParametersTo(com.earthview.world.core.StringInterface dest)
		{
			super.copyParametersTo_NoVirtual(dest);
		}
		
		native protected void register_setParameter_EVString_EVString(long pNativeObject, String method);
		native protected void register_setParameter_EVString_ev_bool_ev_bool(long pNativeObject, String method);
		native protected void register_setParameterList_CommonStringPairList(long pNativeObject, String method);
		native protected void register_getParameter_EVString(long pNativeObject, String method);
		native protected void register_copyParametersTo_CStringInterface(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_setParameter_EVString_EVString(this.nativeObject.pointer, "setParameter_EVString_EVString_callback");
				this.register_setParameter_EVString_ev_bool_ev_bool(this.nativeObject.pointer, "setParameter_EVString_ev_bool_ev_bool_callback");
				this.register_setParameterList_CommonStringPairList(this.nativeObject.pointer, "setParameterList_CommonStringPairList_callback");
				this.register_getParameter_EVString(this.nativeObject.pointer, "getParameter_EVString_callback");
				this.register_copyParametersTo_CStringInterface(this.nativeObject.pointer, "copyParametersTo_CStringInterface_callback");
			}
		}
		
		public static DataSetPropertyStringInterface fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			DataSetPropertyStringInterface obj = null;
 			if(baseObj instanceof DataSetPropertyStringInterface)
			{
				obj = (DataSetPropertyStringInterface)baseObj;
			} else {
				obj = new DataSetPropertyStringInterface(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CDataSetPropertyStringInterface");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class DataSetPropertyStringInterfaceClassFactory implements IClassFactory {
		public BaseObject create()
		{
			DataSetPropertyStringInterface emptyInstance = new DataSetPropertyStringInterface(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  long getDataSourcePropertyStringInterfacePtr_void_callback()
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.DataSourcePropertyStringInterface returnValue = getDataSourcePropertyStringInterfacePtr();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDataSourcePropertyStringInterfacePtr_void(long pNativeObject);
	/**
	 * 获得数据源属性内部类的指针
	 * @param  
	 * @return 返回内部类的指针
	 */
	public com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.DataSourcePropertyStringInterface getDataSourcePropertyStringInterfacePtr()
	{
		long returnValue = getDataSourcePropertyStringInterfacePtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.DataSourcePropertyStringInterface __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.DataSourcePropertyStringInterface(CreatedWhenConstruct.CWC_NotToCreate, "CDataSourcePropertyStringInterface");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.DataSourcePropertyStringInterface)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDataSourcePropertyStringInterface");
		}
		return __returnValue;
	}
	native private long getDataSourcePropertyStringInterfacePtr_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.DataSourcePropertyStringInterface getDataSourcePropertyStringInterfacePtr_NoVirtual()
	{
		long returnValue = getDataSourcePropertyStringInterfacePtr_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.DataSourcePropertyStringInterface __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.DataSourcePropertyStringInterface(CreatedWhenConstruct.CWC_NotToCreate, "CDataSourcePropertyStringInterface");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.DataSourcePropertyStringInterface)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDataSourcePropertyStringInterface");
		}
		return __returnValue;
	}

	protected  long getDataSetPropertyStringInterfacePtr_void_callback()
	{
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.DataSetPropertyStringInterface returnValue = getDataSetPropertyStringInterfacePtr();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDataSetPropertyStringInterfacePtr_void(long pNativeObject);
	/**
	 * 获取数据集属性内部类指针
	 * @param  
	 */
	public com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.DataSetPropertyStringInterface getDataSetPropertyStringInterfacePtr()
	{
		long returnValue = getDataSetPropertyStringInterfacePtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.DataSetPropertyStringInterface __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.DataSetPropertyStringInterface(CreatedWhenConstruct.CWC_NotToCreate, "CDataSetPropertyStringInterface");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.DataSetPropertyStringInterface)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDataSetPropertyStringInterface");
		}
		return __returnValue;
	}
	native private long getDataSetPropertyStringInterfacePtr_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.DataSetPropertyStringInterface getDataSetPropertyStringInterfacePtr_NoVirtual()
	{
		long returnValue = getDataSetPropertyStringInterfacePtr_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.DataSetPropertyStringInterface __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.DataSetPropertyStringInterface(CreatedWhenConstruct.CWC_NotToCreate, "CDataSetPropertyStringInterface");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.DataSetPropertyStringInterface)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDataSetPropertyStringInterface");
		}
		return __returnValue;
	}

	/**
	 * 数据源树节点的类型
	 */
	public enum SelectedDataSourceType implements INativeEnum<SelectedDataSourceType> {
		SDST_NoSelected(SelectedDataSourceTypeHelper.ENUM_VALUES[0]),
		SDST_FileDataSourceRootItem(SelectedDataSourceTypeHelper.ENUM_VALUES[1]),
		SDST_DBDataSourceRootItem(SelectedDataSourceTypeHelper.ENUM_VALUES[2]),
		SDST_WebDataSourceRootItem(SelectedDataSourceTypeHelper.ENUM_VALUES[3]);
		private int value;
		SelectedDataSourceType(int i) {
			this.value = i;
		}
		public SelectedDataSourceType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final SelectedDataSourceType toEnum(int retval) {
			if(retval == SDST_NoSelected.value){
				return SDST_NoSelected;
			}
			else if(retval == SDST_FileDataSourceRootItem.value){
				return SDST_FileDataSourceRootItem;
			}
			else if(retval == SDST_DBDataSourceRootItem.value){
				return SDST_DBDataSourceRootItem;
			}
			else if(retval == SDST_WebDataSourceRootItem.value){
				return SDST_WebDataSourceRootItem;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class SelectedDataSourceTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private void showDataSourceProperty_EVString_SelectedDataSourceType(long pNativeObject, String datasourcename, int datasourcetype);
	/**
	 * 数据源树节点点击响应
	 * @param datasourcename 数据源名称
	 * @param datasourcetype 数据源类别
	 */
	public void showDataSourceProperty(String datasourcename, com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.SelectedDataSourceType datasourcetype)
	{
		String datasourcenameParamValue = datasourcename;
		int datasourcetypeParamValue = datasourcetype.getValue();
		showDataSourceProperty_EVString_SelectedDataSourceType(this.nativeObject.pointer, datasourcenameParamValue, datasourcetypeParamValue);
	}
	native private void showDataSetProperty_EVString_SelectedDataSourceType_EVString(long pNativeObject, String datasourcename, int datasourcetype, String datasetname);
	/**
	 * 数据集树节点点击响应
	 * @param datasourcename 数据源名称
	 * @param datasourcetype 数据源类别
	 * @param datasetname 数据集名
	 */
	public void showDataSetProperty(String datasourcename, com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.SelectedDataSourceType datasourcetype, String datasetname)
	{
		String datasourcenameParamValue = datasourcename;
		int datasourcetypeParamValue = datasourcetype.getValue();
		String datasetnameParamValue = datasetname;
		showDataSetProperty_EVString_SelectedDataSourceType_EVString(this.nativeObject.pointer, datasourcenameParamValue, datasourcetypeParamValue, datasetnameParamValue);
	}
	native private static String strDatasetType_EVDatasetType(int type);
	/**
	 * 根据类别返回类别描述
	 * @param type 数据集类别
	 */
	public static String strDatasetType(com.earthview.world.spatial.geodataset.EVDatasetType type)
	{
		int typeParamValue = type.getValue();
		String returnValue = strDatasetType_EVDatasetType(typeParamValue);
		return returnValue;
	}
	native private static String strCoordSys_ev_int32_ev_int32(int coordSys, int type);
	/**
	 * 根据空间参考返回描述
	 * @param coordSys 投影坐标系统
	 * @param type 0：EVWellKnownGeoCSType系统，1：EVWellKnownProjCSType系统
	 */
	public static String strCoordSys(int coordSys, int type)
	{
		int coordSysParamValue = coordSys;
		int typeParamValue = type;
		String returnValue = strCoordSys_ev_int32_ev_int32(coordSysParamValue, typeParamValue);
		return returnValue;
	}
	public DataSourceManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataSourceManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_createDataSource_CDataSourceURL(long pNativeObject, String method);
	native protected void register_deleteDataSource_CDataSourceURL(long pNativeObject, String method);
	native protected void register_openDataSource_CDataSourceURL(long pNativeObject, String method);
	native protected void register_closeDataSource_CDataSourceActiveEvent(long pNativeObject, String method);
	native protected void register_openDataset_CDataSourceActiveEvent_CDatasetActiveEvent(long pNativeObject, String method);
	native protected void register_createDataset_CDataSourceActiveEvent_CDatasetActiveEvent(long pNativeObject, String method);
	native protected void register_closeDataset_CDataSourceActiveEvent_CDatasetActiveEvent(long pNativeObject, String method);
	native protected void register_closeAllDatasets_CDataSourceActiveEvent_EVDataSourceType(long pNativeObject, String method);
	native protected void register_getDataSourceName_EVString(long pNativeObject, String method);
	native protected void register_closeAllDatasets_CDataSourceActiveEvent(long pNativeObject, String method);
	native protected void register_importData_CDataSourceActiveEvent_CDatasetActiveEvent(long pNativeObject, String method);
	native protected void register_exportData_CDataSourceActiveEvent_CDatasetActiveEvent(long pNativeObject, String method);
	native protected void register_getDataSourceActiveEventArr_void(long pNativeObject, String method);
	native protected void register_getInternalDataSourceActiveEventArr_void(long pNativeObject, String method);
	native protected void register_getDataSourceActiveEventArr_CDataSourceURL(long pNativeObject, String method);
	native protected void register_getDataSourcePropertyStringInterfacePtr_void(long pNativeObject, String method);
	native protected void register_getDataSetPropertyStringInterfacePtr_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createDataSource_CDataSourceURL(this.nativeObject.pointer, "createDataSource_CDataSourceURL_callback");
			this.register_deleteDataSource_CDataSourceURL(this.nativeObject.pointer, "deleteDataSource_CDataSourceURL_callback");
			this.register_openDataSource_CDataSourceURL(this.nativeObject.pointer, "openDataSource_CDataSourceURL_callback");
			this.register_closeDataSource_CDataSourceActiveEvent(this.nativeObject.pointer, "closeDataSource_CDataSourceActiveEvent_callback");
			this.register_openDataset_CDataSourceActiveEvent_CDatasetActiveEvent(this.nativeObject.pointer, "openDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback");
			this.register_createDataset_CDataSourceActiveEvent_CDatasetActiveEvent(this.nativeObject.pointer, "createDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback");
			this.register_closeDataset_CDataSourceActiveEvent_CDatasetActiveEvent(this.nativeObject.pointer, "closeDataset_CDataSourceActiveEvent_CDatasetActiveEvent_callback");
			this.register_closeAllDatasets_CDataSourceActiveEvent_EVDataSourceType(this.nativeObject.pointer, "closeAllDatasets_CDataSourceActiveEvent_EVDataSourceType_callback");
			this.register_getDataSourceName_EVString(this.nativeObject.pointer, "getDataSourceName_EVString_callback");
			this.register_closeAllDatasets_CDataSourceActiveEvent(this.nativeObject.pointer, "closeAllDatasets_CDataSourceActiveEvent_callback");
			this.register_importData_CDataSourceActiveEvent_CDatasetActiveEvent(this.nativeObject.pointer, "importData_CDataSourceActiveEvent_CDatasetActiveEvent_callback");
			this.register_exportData_CDataSourceActiveEvent_CDatasetActiveEvent(this.nativeObject.pointer, "exportData_CDataSourceActiveEvent_CDatasetActiveEvent_callback");
			this.register_getDataSourceActiveEventArr_void(this.nativeObject.pointer, "getDataSourceActiveEventArr_void_callback");
			this.register_getInternalDataSourceActiveEventArr_void(this.nativeObject.pointer, "getInternalDataSourceActiveEventArr_void_callback");
			this.register_getDataSourceActiveEventArr_CDataSourceURL(this.nativeObject.pointer, "getDataSourceActiveEventArr_CDataSourceURL_callback");
			this.register_getDataSourcePropertyStringInterfacePtr_void(this.nativeObject.pointer, "getDataSourcePropertyStringInterfacePtr_void_callback");
			this.register_getDataSetPropertyStringInterfacePtr_void(this.nativeObject.pointer, "getDataSetPropertyStringInterfacePtr_void_callback");
		}
	}
	
	public static DataSourceManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataSourceManager obj = null;
 		if(baseObj instanceof DataSourceManager)
		{
			obj = (DataSourceManager)baseObj;
		} else {
			obj = new DataSourceManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDataSourceManager");
			obj.increaseCast();
		}

		return obj;
	}
}
