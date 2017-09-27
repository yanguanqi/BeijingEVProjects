package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView空间服务类
 */
public class Evspatialserver extends com.earthview.world.spatial.SpatialServer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVSpatialServer", new EvspatialserverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVSpatialServerProxy", new EvspatialserverClassFactory());
	}

	native private boolean currentConnectStatus_void(long pNativeObject);
	/**
	 * 是否可连接到服务器
	 * @return 如果可以连接，返回true
	 */
	public boolean currentConnectStatus()
	{
		boolean returnValue = currentConnectStatus_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isConnected_void(long pNativeObject);
	/**
	 * 是否可连接到服务器
	 * @return 如果可以连接，返回true
	 */
	public boolean isConnected()
	{
		boolean returnValue = isConnected_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isConnected_void_NoVirtual(long pNativeObject);
	protected boolean isConnected_NoVirtual()
	{
		boolean returnValue = isConnected_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean reconnect_void(long pNativeObject);
	/**
	 * 重新连接
	 * @return 重新连接成功，返回true
	 */
	public boolean reconnect()
	{
		boolean returnValue = reconnect_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean reconnect_void_NoVirtual(long pNativeObject);
	protected boolean reconnect_NoVirtual()
	{
		boolean returnValue = reconnect_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void disConnect_void(long pNativeObject);
	/**
	 * 断开连接连接
	 */
	public void disConnect()
	{
		disConnect_void(this.nativeObject.pointer);
	}
	native private void disConnect_void_NoVirtual(long pNativeObject);
	protected void disConnect_NoVirtual()
	{
		disConnect_void_NoVirtual(this.nativeObject.pointer);
	}

	native private String getServerName_void(long pNativeObject);
	/**
	 * 获取服务名称
	 * @return 服务名称
	 */
	public String getServerName()
	{
		String returnValue = getServerName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getServerName_void_NoVirtual(long pNativeObject);
	protected String getServerName_NoVirtual()
	{
		String returnValue = getServerName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getServerAbstract_void(long pNativeObject);
	/**
	 * 获取服务描述
	 * @return 服务描述
	 */
	public String getServerAbstract()
	{
		String returnValue = getServerAbstract_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getServerAbstract_void_NoVirtual(long pNativeObject);
	protected String getServerAbstract_NoVirtual()
	{
		String returnValue = getServerAbstract_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getServerTitle_void(long pNativeObject);
	/**
	 * 获取服务标题
	 * @return 服务标题
	 */
	public String getServerTitle()
	{
		String returnValue = getServerTitle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getServerTitle_void_NoVirtual(long pNativeObject);
	protected String getServerTitle_NoVirtual()
	{
		String returnValue = getServerTitle_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getServerUrl_void(long pNativeObject);
	/**
	 * 获取服务器地址
	 * @return 服务器地址
	 */
	public String getServerUrl()
	{
		String returnValue = getServerUrl_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getServerUrl_void_NoVirtual(long pNativeObject);
	protected String getServerUrl_NoVirtual()
	{
		String returnValue = getServerUrl_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getServicePluginFile_void_callback()
	{
		String returnValue = getServicePluginFile();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getServicePluginFile_void(long pNativeObject);
	/**
	 * 获取服务数据下载插件路径
	 * @return 服务器地址
	 */
	public String getServicePluginFile()
	{
		String returnValue = getServicePluginFile_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getServicePluginFile_void_NoVirtual(long pNativeObject);
	protected String getServicePluginFile_NoVirtual()
	{
		String returnValue = getServicePluginFile_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getPropertySet_void(long pNativeObject);
	/**
	 * 获取数据源参数
	 * @param  
	 * @return 数据源KeyValue参数
	 */
	public com.earthview.world.spatial.geodataset.Ipropertyset getPropertySet()
	{
		long returnValue = getPropertySet_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ipropertyset __returnValue = new com.earthview.world.spatial.geodataset.Ipropertyset(CreatedWhenConstruct.CWC_NotToCreate, "IPropertySet");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ipropertyset)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IPropertySet");
		}
		return __returnValue;
	}
	native private long getPropertySet_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ipropertyset getPropertySet_NoVirtual()
	{
		long returnValue = getPropertySet_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ipropertyset __returnValue = new com.earthview.world.spatial.geodataset.Ipropertyset(CreatedWhenConstruct.CWC_NotToCreate, "IPropertySet");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ipropertyset)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IPropertySet");
		}
		return __returnValue;
	}

	native private boolean isValid_void(long pNativeObject);
	/**
	 * 判断数据源是否有效
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean isValid()
	{
		boolean returnValue = isValid_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isValid_void_NoVirtual(long pNativeObject);
	protected boolean isValid_NoVirtual()
	{
		boolean returnValue = isValid_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getDatasetInfo_EVString(long pNativeObject, String name);
	/**
	 * 获取指定数据集类型的数据元信息
	 * @param name 指定名称，格式为:数据名称+'/'+WMTS/WMS/WFS/DEM/GEOCODE/KML/GEOMETRY/MODEL之一
	 * @return 数据元信息对象；需要外部释放
	 */
	public com.earthview.world.spatial.geodataset.Idatametainfo getDatasetInfo(String name)
	{
		String nameParamValue = name;
		long returnValue = getDatasetInfo_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatametainfo __returnValue = new com.earthview.world.spatial.geodataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate, "IDataMetaInfo");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IDataMetaInfo");
		}
		return __returnValue;
	}
	native private long getDatasetInfo_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.spatial.geodataset.Idatametainfo getDatasetInfo_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = getDatasetInfo_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatametainfo __returnValue = new com.earthview.world.spatial.geodataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate, "IDataMetaInfo");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IDataMetaInfo");
		}
		return __returnValue;
	}

	native private long getDatasetInfo_EVString_EVDatasetType(long pNativeObject, String name, int type);
	/**
	 * 获取指定类型的元数据
	 * @param name 数据集名称
	 * @param type 数据集类型
	 * @return 数据元信息对象；需要外部释放
	 */
	public com.earthview.world.spatial.geodataset.Idatametainfo getDatasetInfo(String name, com.earthview.world.spatial.geodataset.EVDatasetType type)
	{
		String nameParamValue = name;
		int typeParamValue = type.getValue();
		long returnValue = getDatasetInfo_EVString_EVDatasetType(this.nativeObject.pointer, nameParamValue, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatametainfo __returnValue = new com.earthview.world.spatial.geodataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate, "IDataMetaInfo");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IDataMetaInfo");
		}
		return __returnValue;
	}
	native private long getDatasetInfos_EVDatasetType(long pNativeObject, int type);
	/**
	 * 获取指定数据集类型的数据元信息
	 * @param type 数据集类型
	 * @return 数据元信息集合对象；需要外部释放
	 */
	public com.earthview.world.spatial.geodataset.Idatametainfos getDatasetInfos(com.earthview.world.spatial.geodataset.EVDatasetType type)
	{
		int typeParamValue = type.getValue();
		long returnValue = getDatasetInfos_EVDatasetType(this.nativeObject.pointer, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatametainfos __returnValue = new com.earthview.world.spatial.geodataset.Idatametainfos(CreatedWhenConstruct.CWC_NotToCreate, "IDataMetaInfos");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfos)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IDataMetaInfos");
		}
		return __returnValue;
	}
	native private long getDatasetInfos_EVDatasetType_NoVirtual(long pNativeObject, int type);
	protected com.earthview.world.spatial.geodataset.Idatametainfos getDatasetInfos_NoVirtual(com.earthview.world.spatial.geodataset.EVDatasetType type)
	{
		int typeParamValue = type.getValue();
		long returnValue = getDatasetInfos_EVDatasetType_NoVirtual(this.nativeObject.pointer, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatametainfos __returnValue = new com.earthview.world.spatial.geodataset.Idatametainfos(CreatedWhenConstruct.CWC_NotToCreate, "IDataMetaInfos");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfos)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IDataMetaInfos");
		}
		return __returnValue;
	}

	native private long openDataset_EVString(long pNativeObject, String name);
	/**
	 * 打开指定数据集名称的数据集
	 * @param name 指定名称，格式为:数据名称+'/'+WMTS/WMS/WFS/DEM/GEOCODE/KML/GEOMETRY之一
	 * @return 数据集对象指针，需要外部释放；如果名字不存在，这返回null
	 */
	public com.earthview.world.spatial.geodataset.Idataset openDataset(String name)
	{
		String nameParamValue = name;
		long returnValue = openDataset_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}
	native private long openDataset_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.spatial.geodataset.Idataset openDataset_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = openDataset_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}

	native private boolean closeDataset_IDataset(long pNativeObject, long dataset);
	/**
	 * 关闭指定数据集名称的数据集，会删掉数据集指针
	 * @param name 数据集指针
	 * @return 成功删除，返回true;否则，返回false
	 */
	public boolean closeDataset(com.earthview.world.spatial.geodataset.Idataset dataset)
	{
		long datasetParamValue = (dataset == null ? 0L : dataset.nativeObject.pointer);
		boolean returnValue = closeDataset_IDataset(this.nativeObject.pointer, datasetParamValue);
		return returnValue;
	}
	native private boolean closeDataset_IDataset_NoVirtual(long pNativeObject, long dataset);
	protected boolean closeDataset_NoVirtual(com.earthview.world.spatial.geodataset.Idataset dataset)
	{
		long datasetParamValue = (dataset == null ? 0L : dataset.nativeObject.pointer);
		boolean returnValue = closeDataset_IDataset_NoVirtual(this.nativeObject.pointer, datasetParamValue);
		return returnValue;
	}

	native private long openDataset_EVString_EVDatasetType(long pNativeObject, String name, int type);
	/**
	 * 打开指定数据集名称的数据集
	 * @param name 数据集名称
	 * @param type 数据集类型
	 * @return 数据集对象指针，需要外部释放；如果名字不存在，这返回null
	 */
	public com.earthview.world.spatial.geodataset.Idataset openDataset(String name, com.earthview.world.spatial.geodataset.EVDatasetType type)
	{
		String nameParamValue = name;
		int typeParamValue = type.getValue();
		long returnValue = openDataset_EVString_EVDatasetType(this.nativeObject.pointer, nameParamValue, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}
	native private String toXML_void(long pNativeObject);
	/**
	 * 获取数据源的xml描述
	 * @return xml描述
	 */
	public String toXML()
	{
		String returnValue = toXML_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String toXML_void_NoVirtual(long pNativeObject);
	protected String toXML_NoVirtual()
	{
		String returnValue = toXML_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 深度拷贝
	 */
	public com.earthview.world.spatial.geodataset.Idatasource ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Idatasource ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}

	native private int getServiceVersion_EVString(long pNativeObject, long version);
	/**
	 * 获取服务版本
	 * @param version 版本信息
	 * @return 操作结果类型
	 */
	public int getServiceVersion(StringPointer version)
	{
		long versionParamValue = version.nativeObject.pointer;
		int returnValue = getServiceVersion_EVString(this.nativeObject.pointer, versionParamValue);
		return returnValue;
	}
	native private int getServiceFileSet_EVDatasetType_CServerQueryResults(long pNativeObject, int type, long queryresult);
	/**
	 * 获取文件列表
	 * @param type 服务类型
	 * @param queryresult 查询结果对象
	 * @return 操作结果类型，成功为0，参数错误400，服务操作未实现501，服务应用错误500
	 */
	public int getServiceFileSet(com.earthview.world.spatial.geodataset.EVDatasetType type, com.earthview.world.spatial.ServerQueryResults queryresult)
	{
		int typeParamValue = type.getValue();
		long queryresultParamValue = queryresult.nativeObject.pointer;
		int returnValue = getServiceFileSet_EVDatasetType_CServerQueryResults(this.nativeObject.pointer, typeParamValue, queryresultParamValue);
		return returnValue;
	}
	native private int getServiceFileSetFromMetadataCache_EVDatasetType_EVString(long pNativeObject, int type, long fileSetStr);
	public int getServiceFileSetFromMetadataCache(com.earthview.world.spatial.geodataset.EVDatasetType type, StringPointer fileSetStr)
	{
		int typeParamValue = type.getValue();
		long fileSetStrParamValue = fileSetStr.nativeObject.pointer;
		int returnValue = getServiceFileSetFromMetadataCache_EVDatasetType_EVString(this.nativeObject.pointer, typeParamValue, fileSetStrParamValue);
		return returnValue;
	}
	native private long getWMTSDataset_EVString(long pNativeObject, String name);
	/**
	 * 打开指定名称的WMS数据集
	 * @param name 数据名称
	 * @return 打开的数据集对象指针，无此数据集时返回空
	 */
	public com.earthview.world.spatial.Evwmtsdataset getWMTSDataset(String name)
	{
		String nameParamValue = name;
		long returnValue = getWMTSDataset_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Evwmtsdataset __returnValue = new com.earthview.world.spatial.Evwmtsdataset(CreatedWhenConstruct.CWC_NotToCreate, "CEVWMTSDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evwmtsdataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEVWMTSDataset");
		}
		return __returnValue;
	}
	native private long getDEMDataset_EVString(long pNativeObject, String name);
	/**
	 * 打开指定名称的DEM数据集
	 * @param name 数据名称
	 * @return 打开的数据集对象指针，无此数据集时返回空
	 */
	public com.earthview.world.spatial.Evdemdataset getDEMDataset(String name)
	{
		String nameParamValue = name;
		long returnValue = getDEMDataset_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Evdemdataset __returnValue = new com.earthview.world.spatial.Evdemdataset(CreatedWhenConstruct.CWC_NotToCreate, "CEVDEMDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evdemdataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEVDEMDataset");
		}
		return __returnValue;
	}
	native private long getKMLDataset_EVString(long pNativeObject, String filename);
	/**
	 * 打开指定名称的KML数据集
	 * @param filename 数据名称
	 * @return 打开的数据集对象指针，无此数据集时返回空
	 */
	public com.earthview.world.spatial.Evkmldataset getKMLDataset(String filename)
	{
		String filenameParamValue = filename;
		long returnValue = getKMLDataset_EVString(this.nativeObject.pointer, filenameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Evkmldataset __returnValue = new com.earthview.world.spatial.Evkmldataset(CreatedWhenConstruct.CWC_NotToCreate, "CEVKMLDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evkmldataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEVKMLDataset");
		}
		return __returnValue;
	}
	native private long getGeoCodeDataset_EVString(long pNativeObject, String filename);
	/**
	 * 打开指定名称的地理编码数据集
	 * @param filename 数据名称
	 * @return 打开的数据集对象指针，无此数据集时返回空
	 */
	public com.earthview.world.spatial.Evgeocodedataset getGeoCodeDataset(String filename)
	{
		String filenameParamValue = filename;
		long returnValue = getGeoCodeDataset_EVString(this.nativeObject.pointer, filenameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Evgeocodedataset __returnValue = new com.earthview.world.spatial.Evgeocodedataset(CreatedWhenConstruct.CWC_NotToCreate, "CEVGeoCodeDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evgeocodedataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEVGeoCodeDataset");
		}
		return __returnValue;
	}
	native private long getGeometryDataset_EVString(long pNativeObject, String mapname);
	/**
	 * 打开指定名称的几何数据集
	 * @param mapname 数据名称
	 * @return 打开的数据集对象指针，无此数据集时返回空
	 */
	public com.earthview.world.spatial.Evgeometrydataset getGeometryDataset(String mapname)
	{
		String mapnameParamValue = mapname;
		long returnValue = getGeometryDataset_EVString(this.nativeObject.pointer, mapnameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Evgeometrydataset __returnValue = new com.earthview.world.spatial.Evgeometrydataset(CreatedWhenConstruct.CWC_NotToCreate, "CEVGeometryDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evgeometrydataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEVGeometryDataset");
		}
		return __returnValue;
	}
	native private long getWFSDataset_EVString(long pNativeObject, String name);
	/**
	 * 打开指定名称的WFS数据集
	 * @param name 数据名称
	 * @return 打开的数据集对象指针，无此数据集时返回空
	 */
	public com.earthview.world.spatial.Evwfsdataset getWFSDataset(String name)
	{
		String nameParamValue = name;
		long returnValue = getWFSDataset_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Evwfsdataset __returnValue = new com.earthview.world.spatial.Evwfsdataset(CreatedWhenConstruct.CWC_NotToCreate, "CEVWFSDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evwfsdataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEVWFSDataset");
		}
		return __returnValue;
	}
	native private long getWMSDataset_EVString(long pNativeObject, String name);
	/**
	 * 打开指定名称的WMS数据集
	 * @param name 数据名称
	 * @return 打开的数据集对象指针，无此数据集时返回空
	 */
	public com.earthview.world.spatial.Evwmsdataset getWMSDataset(String name)
	{
		String nameParamValue = name;
		long returnValue = getWMSDataset_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Evwmsdataset __returnValue = new com.earthview.world.spatial.Evwmsdataset(CreatedWhenConstruct.CWC_NotToCreate, "CEVWMSDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evwmsdataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEVWMSDataset");
		}
		return __returnValue;
	}
	native private long getWMSChartDataset_EVString(long pNativeObject, String name);
	public com.earthview.world.spatial.Evwmschartdataset getWMSChartDataset(String name)
	{
		String nameParamValue = name;
		long returnValue = getWMSChartDataset_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Evwmschartdataset __returnValue = new com.earthview.world.spatial.Evwmschartdataset(CreatedWhenConstruct.CWC_NotToCreate, "CEVWMSChartDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evwmschartdataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEVWMSChartDataset");
		}
		return __returnValue;
	}
	native private long getWMSImageDataset_EVString(long pNativeObject, String name);
	public com.earthview.world.spatial.Evwmsimagedataset getWMSImageDataset(String name)
	{
		String nameParamValue = name;
		long returnValue = getWMSImageDataset_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Evwmsimagedataset __returnValue = new com.earthview.world.spatial.Evwmsimagedataset(CreatedWhenConstruct.CWC_NotToCreate, "CEVWMSImageDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evwmsimagedataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEVWMSImageDataset");
		}
		return __returnValue;
	}
	native private long getModelDataset_EVString(long pNativeObject, String modelname);
	/**
	 * 打开指定名称的模型数据集
	 * @param modelname 数据名称
	 * @return 打开的数据集对象指针，无此数据集时返回空
	 */
	public com.earthview.world.spatial.Evmodeldataset getModelDataset(String modelname)
	{
		String modelnameParamValue = modelname;
		long returnValue = getModelDataset_EVString(this.nativeObject.pointer, modelnameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Evmodeldataset __returnValue = new com.earthview.world.spatial.Evmodeldataset(CreatedWhenConstruct.CWC_NotToCreate, "CEVModelDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evmodeldataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEVModelDataset");
		}
		return __returnValue;
	}
	native private long getModelTemplateDataset_EVString(long pNativeObject, String datasetname);
	/**
	 * 
	 * @param  
	 */
	public com.earthview.world.spatial.Evmodeltemplatedataset getModelTemplateDataset(String datasetname)
	{
		String datasetnameParamValue = datasetname;
		long returnValue = getModelTemplateDataset_EVString(this.nativeObject.pointer, datasetnameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Evmodeltemplatedataset __returnValue = new com.earthview.world.spatial.Evmodeltemplatedataset(CreatedWhenConstruct.CWC_NotToCreate, "CEVModelTemplateDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evmodeltemplatedataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEVModelTemplateDataset");
		}
		return __returnValue;
	}
	native private long getSmart3DDataset_EVString(long pNativeObject, String datasetname);
	/**
	 * 
	 * @param  
	 * @param  
	 */
	public com.earthview.world.spatial.WebSmart3DDataset getSmart3DDataset(String datasetname)
	{
		String datasetnameParamValue = datasetname;
		long returnValue = getSmart3DDataset_EVString(this.nativeObject.pointer, datasetnameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.WebSmart3DDataset __returnValue = new com.earthview.world.spatial.WebSmart3DDataset(CreatedWhenConstruct.CWC_NotToCreate, "CWebSmart3DDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.WebSmart3DDataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWebSmart3DDataset");
		}
		return __returnValue;
	}
	native private long getMeshXDataset_EVString(long pNativeObject, String datasetname);
	/**
	 * 
	 * @param  
	 */
	public com.earthview.world.spatial.WebMeshXDataset getMeshXDataset(String datasetname)
	{
		String datasetnameParamValue = datasetname;
		long returnValue = getMeshXDataset_EVString(this.nativeObject.pointer, datasetnameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.WebMeshXDataset __returnValue = new com.earthview.world.spatial.WebMeshXDataset(CreatedWhenConstruct.CWC_NotToCreate, "CWebMeshXDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.WebMeshXDataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWebMeshXDataset");
		}
		return __returnValue;
	}
	native private long getMeshXGDataset_EVString(long pNativeObject, String datasetname);
	/**
	 * 
	 * @param  
	 */
	public com.earthview.world.spatial.WebMeshXGDataset getMeshXGDataset(String datasetname)
	{
		String datasetnameParamValue = datasetname;
		long returnValue = getMeshXGDataset_EVString(this.nativeObject.pointer, datasetnameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.WebMeshXGDataset __returnValue = new com.earthview.world.spatial.WebMeshXGDataset(CreatedWhenConstruct.CWC_NotToCreate, "CWebMeshXGDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.WebMeshXGDataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWebMeshXGDataset");
		}
		return __returnValue;
	}
	native private long getLasDataset_EVString(long pNativeObject, String datasetname);
	public com.earthview.world.spatial.WebLasDataset getLasDataset(String datasetname)
	{
		String datasetnameParamValue = datasetname;
		long returnValue = getLasDataset_EVString(this.nativeObject.pointer, datasetnameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.WebLasDataset __returnValue = new com.earthview.world.spatial.WebLasDataset(CreatedWhenConstruct.CWC_NotToCreate, "CWebLasDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.WebLasDataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWebLasDataset");
		}
		return __returnValue;
	}
	native private long getVector3DDataset_EVString(long pNativeObject, String datasetname);
	/**
	 * 
	 * @param  
	 */
	public com.earthview.world.spatial.WebVector3DDataset getVector3DDataset(String datasetname)
	{
		String datasetnameParamValue = datasetname;
		long returnValue = getVector3DDataset_EVString(this.nativeObject.pointer, datasetnameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.WebVector3DDataset __returnValue = new com.earthview.world.spatial.WebVector3DDataset(CreatedWhenConstruct.CWC_NotToCreate, "CWebVector3DDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.WebVector3DDataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWebVector3DDataset");
		}
		return __returnValue;
	}
	native private long getMultimediaDataset_EVString(long pNativeObject, String filename);
	/**
	 * 
	 * @param modelname 
	 * @return 打开的数据集对象指针，无此数据集时返回空
	 */
	public com.earthview.world.spatial.MultiMedaServiceDataset getMultimediaDataset(String filename)
	{
		String filenameParamValue = filename;
		long returnValue = getMultimediaDataset_EVString(this.nativeObject.pointer, filenameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.MultiMedaServiceDataset __returnValue = new com.earthview.world.spatial.MultiMedaServiceDataset(CreatedWhenConstruct.CWC_NotToCreate, "CMultiMedaServiceDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.MultiMedaServiceDataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMultiMedaServiceDataset");
		}
		return __returnValue;
	}
	native private long getOGCWMTSCapabilitiesRef_void(long pNativeObject);
	/**
	 * 获取OGCWMTS描述
	 * @return WMTS属性对象
	 */
	public com.earthview.world.spatial.Wmtsserverinfo getOGCWMTSCapabilitiesRef()
	{
		long returnValue = getOGCWMTSCapabilitiesRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Wmtsserverinfo __returnValue = new com.earthview.world.spatial.Wmtsserverinfo(CreatedWhenConstruct.CWC_NotToCreate, "CWMTSServerInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Wmtsserverinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWMTSServerInfo");
		}
		return __returnValue;
	}
	native private int getEVWMTSCapabilities_EVString(long pNativeObject, long value);
	public int getEVWMTSCapabilities(StringPointer value)
	{
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = getEVWMTSCapabilities_EVString(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int getMap_EVString_EVString_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_EVString_ev_bool_ev_int32_ev_int32_ev_int32_EVString_EVString_CMemoryStreamResult(long pNativeObject, String layers, String styles, int srs, long maprect, long width, long height, String format, boolean transparent, int red, int green, int blue, String time, String elevation, long serverresult);
	/**
	 * 获取map信息
	 * @param layers 图层列表
	 * @param styles 风格列表
	 * @param srs 投影类型
	 * @param maprect 数据范围
	 * @param imgrect 图片范围
	 * @param format 图片格式
	 * @param transparent 是否透明
	 * @param red 红色值
	 * @param green 绿色值
	 * @param blue 蓝色值
	 * @param time 时间
	 * @param elevation 高程值
	 * @param serverresult 查询结果
	 * @return 操作结果类型
	 */
	public int getMap(String layers, String styles, com.earthview.world.spatial.EVSSCSRS srs, com.earthview.world.spatial.geometry.Ienvelope maprect, long width, long height, String format, boolean transparent, int red, int green, int blue, String time, String elevation, com.earthview.world.spatial.MemoryStreamResult serverresult)
	{
		String layersParamValue = layers;
		String stylesParamValue = styles;
		int srsParamValue = srs.getValue();
		long maprectParamValue = (maprect == null ? 0L : maprect.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		String formatParamValue = format;
		boolean transparentParamValue = transparent;
		int redParamValue = red;
		int greenParamValue = green;
		int blueParamValue = blue;
		String timeParamValue = time;
		String elevationParamValue = elevation;
		long serverresultParamValue = serverresult.nativeObject.pointer;
		int returnValue = getMap_EVString_EVString_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_EVString_ev_bool_ev_int32_ev_int32_ev_int32_EVString_EVString_CMemoryStreamResult(this.nativeObject.pointer, layersParamValue, stylesParamValue, srsParamValue, maprectParamValue, widthParamValue, heightParamValue, formatParamValue, transparentParamValue, redParamValue, greenParamValue, blueParamValue, timeParamValue, elevationParamValue, serverresultParamValue);
		return returnValue;
	}
	native private int getWMSFeatureInfo_EVString_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_EVString_ev_uint32_ev_int32_ev_int32_EVString(long pNativeObject, String layers, int srs, long maprect, long width, long height, String infoformat, long featurecount, int x, int y, long value);
	/**
	 * 获取FeatureInfo信息
	 * @param layers 图层列表
	 * @param srs 投影类型
	 * @param maprect 数据范围
	 * @param imgrect 图片范围
	 * @param querylayers 查询图层
	 * @param infoformat 数据格式
	 * @param featurecount 每次最多返回的Feature数
	 * @param x 图片像素x值
	 * @param y 图片像素y值
	 * @param serverresult 查询结果
	 * @return 操作结果类型
	 */
	public int getWMSFeatureInfo(String layers, com.earthview.world.spatial.EVSSCSRS srs, com.earthview.world.spatial.geometry.Ienvelope maprect, long width, long height, String infoformat, long featurecount, int x, int y, StringPointer value)
	{
		String layersParamValue = layers;
		int srsParamValue = srs.getValue();
		long maprectParamValue = (maprect == null ? 0L : maprect.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		String infoformatParamValue = infoformat;
		long featurecountParamValue = featurecount;
		int xParamValue = x;
		int yParamValue = y;
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = getWMSFeatureInfo_EVString_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_EVString_ev_uint32_ev_int32_ev_int32_EVString(this.nativeObject.pointer, layersParamValue, srsParamValue, maprectParamValue, widthParamValue, heightParamValue, infoformatParamValue, featurecountParamValue, xParamValue, yParamValue, valueParamValue);
		return returnValue;
	}
	native private int getLayerLegend_EVString_ev_uint32_ev_uint32_CMemoryStreamResult(long pNativeObject, String layer, long legendwidth, long legendheight, long serverresult);
	/**
	 * 获取图例信息
	 * @param layer 图层
	 * @param legendwidth 图例宽度
	 * @param legendheight 图利高度
	 * @param serverresult 结果
	 * @return 操作结果类型
	 */
	public int getLayerLegend(String layer, long legendwidth, long legendheight, com.earthview.world.spatial.MemoryStreamResult serverresult)
	{
		String layerParamValue = layer;
		long legendwidthParamValue = legendwidth;
		long legendheightParamValue = legendheight;
		long serverresultParamValue = serverresult.nativeObject.pointer;
		int returnValue = getLayerLegend_EVString_ev_uint32_ev_uint32_CMemoryStreamResult(this.nativeObject.pointer, layerParamValue, legendwidthParamValue, legendheightParamValue, serverresultParamValue);
		return returnValue;
	}
	native private int getQueryMap_EVString_ISymbol_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_CServerSearchCondition_EVString_CMemoryStreamResult(long pNativeObject, String layers, long symbol, int srs, long maprect, long width, long height, long conditions, String format, long serverresult);
	/**
	 * 获取查询图层信息
	 * @param layers 图层列表
	 * @param symbol 风格
	 * @param srs 投影类型
	 * @param maprect 数据范围
	 * @param imgrect 图片范围
	 * @param conditions 查询条件
	 * @param format 图片格式
	 * @param serverresult 结果
	 * @return 操作结果类型
	 */
	public int getQueryMap(String layers, com.earthview.world.spatial.display.Isymbol symbol, com.earthview.world.spatial.EVSSCSRS srs, com.earthview.world.spatial.geometry.Ienvelope maprect, long width, long height, com.earthview.world.spatial.ServerSearchCondition conditions, String format, com.earthview.world.spatial.MemoryStreamResult serverresult)
	{
		String layersParamValue = layers;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		int srsParamValue = srs.getValue();
		long maprectParamValue = (maprect == null ? 0L : maprect.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		long conditionsParamValue = (conditions == null ? 0L : conditions.nativeObject.pointer);
		String formatParamValue = format;
		long serverresultParamValue = serverresult.nativeObject.pointer;
		int returnValue = getQueryMap_EVString_ISymbol_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_CServerSearchCondition_EVString_CMemoryStreamResult(this.nativeObject.pointer, layersParamValue, symbolParamValue, srsParamValue, maprectParamValue, widthParamValue, heightParamValue, conditionsParamValue, formatParamValue, serverresultParamValue);
		return returnValue;
	}
	native private int convertToLngLat_EVString_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_CServerPointList_CServerPointList(long pNativeObject, String map, int srs, long maprect, long width, long height, long pointlist, long outpointlist);
	/**
	 * 像素点转换为实际点
	 * @param map 图层名
	 * @param srs 投影类型
	 * @param maprect 数据范围
	 * @param imgrect 图片范围
	 * @param pointlist 像素点串对象
	 * @param outpointlist 实际坐标点串
	 * @return 操作结果类型
	 */
	public int convertToLngLat(String map, com.earthview.world.spatial.EVSSCSRS srs, com.earthview.world.spatial.geometry.Ienvelope maprect, long width, long height, com.earthview.world.spatial.ServerPointList pointlist, com.earthview.world.spatial.ServerPointList outpointlist)
	{
		String mapParamValue = map;
		int srsParamValue = srs.getValue();
		long maprectParamValue = (maprect == null ? 0L : maprect.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		long pointlistParamValue = pointlist.nativeObject.pointer;
		long outpointlistParamValue = outpointlist.nativeObject.pointer;
		int returnValue = convertToLngLat_EVString_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_CServerPointList_CServerPointList(this.nativeObject.pointer, mapParamValue, srsParamValue, maprectParamValue, widthParamValue, heightParamValue, pointlistParamValue, outpointlistParamValue);
		return returnValue;
	}
	native private long getOGCWMSCapabilitiesRef_void(long pNativeObject);
	/**
	 * 获取OGCWMS信息
	 * @param wmsInfo OGCWMS信息
	 * @return WMS属性对象
	 */
	public com.earthview.world.spatial.Wmsserverinfo getOGCWMSCapabilitiesRef()
	{
		long returnValue = getOGCWMSCapabilitiesRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Wmsserverinfo __returnValue = new com.earthview.world.spatial.Wmsserverinfo(CreatedWhenConstruct.CWC_NotToCreate, "CWMSServerInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Wmsserverinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWMSServerInfo");
		}
		return __returnValue;
	}
	native private int getEVWMSCapabilities_EVString(long pNativeObject, long value);
	public int getEVWMSCapabilities(StringPointer value)
	{
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = getEVWMSCapabilities_EVString(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int getWMSChart_EVString_EVString_EVString_EVString_ev_int32_ev_int32_EVString_EVString_EVString_EVString_EVString_CMemoryStreamResult(long pNativeObject, String layer, String srs, String bBox, String format, int width, int height, String displayMode, String colorMode, String symbolMode, String isobath, String annotationMode, long serverresult);
	public int getWMSChart(String layer, String srs, String bBox, String format, int width, int height, String displayMode, String colorMode, String symbolMode, String isobath, String annotationMode, com.earthview.world.spatial.MemoryStreamResult serverresult)
	{
		String layerParamValue = layer;
		String srsParamValue = srs;
		String bBoxParamValue = bBox;
		String formatParamValue = format;
		int widthParamValue = width;
		int heightParamValue = height;
		String displayModeParamValue = displayMode;
		String colorModeParamValue = colorMode;
		String symbolModeParamValue = symbolMode;
		String isobathParamValue = isobath;
		String annotationModeParamValue = annotationMode;
		long serverresultParamValue = serverresult.nativeObject.pointer;
		int returnValue = getWMSChart_EVString_EVString_EVString_EVString_ev_int32_ev_int32_EVString_EVString_EVString_EVString_EVString_CMemoryStreamResult(this.nativeObject.pointer, layerParamValue, srsParamValue, bBoxParamValue, formatParamValue, widthParamValue, heightParamValue, displayModeParamValue, colorModeParamValue, symbolModeParamValue, isobathParamValue, annotationModeParamValue, serverresultParamValue);
		return returnValue;
	}
	native private int getWMSImage_EVString_EVString_ev_int32_ev_int32_EVString_EVString_CMemoryStreamResult(long pNativeObject, String imageName, String bBOX, int width, int height, String SRS, String format, long serverresult);
	public int getWMSImage(String imageName, String bBOX, int width, int height, String SRS, String format, com.earthview.world.spatial.MemoryStreamResult serverresult)
	{
		String imageNameParamValue = imageName;
		String bBOXParamValue = bBOX;
		int widthParamValue = width;
		int heightParamValue = height;
		String SRSParamValue = SRS;
		String formatParamValue = format;
		long serverresultParamValue = serverresult.nativeObject.pointer;
		int returnValue = getWMSImage_EVString_EVString_ev_int32_ev_int32_EVString_EVString_CMemoryStreamResult(this.nativeObject.pointer, imageNameParamValue, bBOXParamValue, widthParamValue, heightParamValue, SRSParamValue, formatParamValue, serverresultParamValue);
		return returnValue;
	}
	native private int getQueryAttribute_EVString_CServerSearchCondition_ev_int32_ev_int32_CServerSet(long pNativeObject, String layer, long condition, int startrecord, int recordcount, long recordset);
	/**
	 * 获取查询属性（针对单一图层）
	 * @param layer 图层名称
	 * @param condition 查询条件
	 * @param startrecord 开始记录索引
	 * @param recordcount 每次返回记录数
	 * @param recordset 查询结果集
	 * @return 操作结果类型
	 */
	public int getQueryAttribute(String layer, com.earthview.world.spatial.ServerSearchCondition condition, int startrecord, int recordcount, com.earthview.world.spatial.ServerSet recordset)
	{
		String layerParamValue = layer;
		long conditionParamValue = (condition == null ? 0L : condition.nativeObject.pointer);
		int startrecordParamValue = startrecord;
		int recordcountParamValue = recordcount;
		long recordsetParamValue = recordset.nativeObject.pointer;
		int returnValue = getQueryAttribute_EVString_CServerSearchCondition_ev_int32_ev_int32_CServerSet(this.nativeObject.pointer, layerParamValue, conditionParamValue, startrecordParamValue, recordcountParamValue, recordsetParamValue);
		return returnValue;
	}
	native private int getLayerAttributeValue_EVString_ev_uint32_ev_real64_ev_real64_EVString_CServerQueryResults(long pNativeObject, String querylayers, long featurecount, double x, double y, String fieldname, long queryresult);
	/**
	 * 获取图层属性
	 * @param querylayer 查询图层
	 * @param featurecount 每次返回要素数
	 * @param x x坐标
	 * @param y y坐标
	 * @param fieldname 查询字段名
	 * @param queryresult 查询结果
	 * @return 操作结果类型
	 */
	public int getLayerAttributeValue(String querylayers, long featurecount, double x, double y, String fieldname, com.earthview.world.spatial.ServerQueryResults queryresult)
	{
		String querylayersParamValue = querylayers;
		long featurecountParamValue = featurecount;
		double xParamValue = x;
		double yParamValue = y;
		String fieldnameParamValue = fieldname;
		long queryresultParamValue = queryresult.nativeObject.pointer;
		int returnValue = getLayerAttributeValue_EVString_ev_uint32_ev_real64_ev_real64_EVString_CServerQueryResults(this.nativeObject.pointer, querylayersParamValue, featurecountParamValue, xParamValue, yParamValue, fieldnameParamValue, queryresultParamValue);
		return returnValue;
	}
	native private int getUniqueFieldValue_EVString_EVString_CServerQueryResults(long pNativeObject, String querylayer, String fieldname, long queryresult);
	/**
	 * 获取图层某唯一属性的属性值
	 * @param querylayer 查询图层
	 * @param fieldname 字段名
	 * @param valuelist 查询结果
	 * @return 操作结果类型
	 */
	public int getUniqueFieldValue(String querylayer, String fieldname, com.earthview.world.spatial.ServerQueryResults queryresult)
	{
		String querylayerParamValue = querylayer;
		String fieldnameParamValue = fieldname;
		long queryresultParamValue = queryresult.nativeObject.pointer;
		int returnValue = getUniqueFieldValue_EVString_EVString_CServerQueryResults(this.nativeObject.pointer, querylayerParamValue, fieldnameParamValue, queryresultParamValue);
		return returnValue;
	}
	native private int getLayerFeature_EVString_ev_bool_ev_bool_EVString_CEVWebFeature(long pNativeObject, String layer, boolean hasgeometry, boolean hasattribute, String attributenames, long feature);
	/**
	 * 获取图层要素
	 * @param layer 图层名
	 * @param featureid 要素ID
	 * @param hasgeometry 要素包含几何对象
	 * @param hasattribute 要素包含属性
	 * @param geomformat 几何对象格式
	 * @param attributenames 属性列表
	 * @param feature 查询结果
	 * @return 操作结果类型
	 */
	public int getLayerFeature(String layer, boolean hasgeometry, boolean hasattribute, String attributenames, com.earthview.world.spatial.Evwebfeature feature)
	{
		String layerParamValue = layer;
		boolean hasgeometryParamValue = hasgeometry;
		boolean hasattributeParamValue = hasattribute;
		String attributenamesParamValue = attributenames;
		long featureParamValue = feature.nativeObject.pointer;
		int returnValue = getLayerFeature_EVString_ev_bool_ev_bool_EVString_CEVWebFeature(this.nativeObject.pointer, layerParamValue, hasgeometryParamValue, hasattributeParamValue, attributenamesParamValue, featureParamValue);
		return returnValue;
	}
	native private int getSearchGeometry_EVString_CServerSearchCondition_CGeometryList(long pNativeObject, String layer, long condition, long geometrylist);
	/**
	 * 获取几何对象
	 * @param layer 图层名
	 * @param condition 查询条件D
	 * @param geometrylist 查询结果
	 * @return 操作结果类型
	 */
	public int getSearchGeometry(String layer, com.earthview.world.spatial.ServerSearchCondition condition, com.earthview.world.spatial.GeometryList geometrylist)
	{
		String layerParamValue = layer;
		long conditionParamValue = (condition == null ? 0L : condition.nativeObject.pointer);
		long geometrylistParamValue = geometrylist.nativeObject.pointer;
		int returnValue = getSearchGeometry_EVString_CServerSearchCondition_CGeometryList(this.nativeObject.pointer, layerParamValue, conditionParamValue, geometrylistParamValue);
		return returnValue;
	}
	native private int buffer_EVString_CGeometryList_ev_real64_ev_bool_CGeometryList(long pNativeObject, String map, long geometrylist, double distance, boolean isunion, long result_geometrylist);
	/**
	 * 获取缓冲区对象
	 * @param map 图层名
	 * @param geometrylist 选择要素列表
	 * @param distance 缓冲距离
	 * @param isunion 结果是否融合
	 * @param result_geometrylist 处理结果
	 * @return 操作结果类型
	 */
	public int buffer(String map, com.earthview.world.spatial.GeometryList geometrylist, double distance, boolean isunion, com.earthview.world.spatial.GeometryList result_geometrylist)
	{
		String mapParamValue = map;
		long geometrylistParamValue = geometrylist.nativeObject.pointer;
		double distanceParamValue = distance;
		boolean isunionParamValue = isunion;
		long result_geometrylistParamValue = result_geometrylist.nativeObject.pointer;
		int returnValue = buffer_EVString_CGeometryList_ev_real64_ev_bool_CGeometryList(this.nativeObject.pointer, mapParamValue, geometrylistParamValue, distanceParamValue, isunionParamValue, result_geometrylistParamValue);
		return returnValue;
	}
	native private int contains_EVString_IGeometry_IGeometry_ev_bool(long pNativeObject, String map, long geometry1, long geometry2, long result);
	/**
	 * 查看geometri1是否包含geometry2
	 * @param map 图层名
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 查询结果
	 * @return 操作结果类型
	 */
	public int contains(String map, com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, BooleanPointer result)
	{
		String mapParamValue = map;
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = contains_EVString_IGeometry_IGeometry_ev_bool(this.nativeObject.pointer, mapParamValue, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	native private int crosses_EVString_IGeometry_IGeometry_ev_bool(long pNativeObject, String map, long geometry1, long geometry2, long result);
	/**
	 * 查看geometri1和geometry2是否相跨
	 * @param map 图层名
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 查询结果
	 * @return 操作结果类型
	 */
	public int crosses(String map, com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, BooleanPointer result)
	{
		String mapParamValue = map;
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = crosses_EVString_IGeometry_IGeometry_ev_bool(this.nativeObject.pointer, mapParamValue, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	native private int disjoint_EVString_IGeometry_IGeometry_ev_bool(long pNativeObject, String map, long geometry1, long geometry2, long result);
	/**
	 * 查看geometri1和geometry2相离
	 * @param map 图层名
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 查询结果
	 * @return 操作结果类型
	 */
	public int disjoint(String map, com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, BooleanPointer result)
	{
		String mapParamValue = map;
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = disjoint_EVString_IGeometry_IGeometry_ev_bool(this.nativeObject.pointer, mapParamValue, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	native private int distance_EVString_IGeometry_IGeometry_ev_real64(long pNativeObject, String map, long geometry1, long geometry2, long result);
	/**
	 * 查看geometri1和geometry2的距离
	 * @param map 图层名
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 查询结果
	 * @return 操作结果类型
	 */
	public int distance(String map, com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, DoublePointer result)
	{
		String mapParamValue = map;
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = distance_EVString_IGeometry_IGeometry_ev_real64(this.nativeObject.pointer, mapParamValue, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	native private int intersects_EVString_IGeometry_IGeometry_ev_bool(long pNativeObject, String map, long geometry1, long geometry2, long result);
	/**
	 * 查看geometri1和geometry2是否相交
	 * @param map 图层名
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 查询结果
	 * @return 操作结果类型
	 */
	public int intersects(String map, com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, BooleanPointer result)
	{
		String mapParamValue = map;
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = intersects_EVString_IGeometry_IGeometry_ev_bool(this.nativeObject.pointer, mapParamValue, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	native private int overlaps_EVString_IGeometry_IGeometry_ev_bool(long pNativeObject, String map, long geometry1, long geometry2, long result);
	/**
	 * 查看geometri1是否压盖geometry2
	 * @param map 图层名
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 查询结果
	 * @return 操作结果类型
	 */
	public int overlaps(String map, com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, BooleanPointer result)
	{
		String mapParamValue = map;
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = overlaps_EVString_IGeometry_IGeometry_ev_bool(this.nativeObject.pointer, mapParamValue, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	native private int touches_EVString_IGeometry_IGeometry_ev_bool(long pNativeObject, String map, long geometry1, long geometry2, long result);
	/**
	 * 查看geometri1和geometry2是否相接
	 * @param map 图层名
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 查询结果
	 * @return 操作结果类型
	 */
	public int touches(String map, com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, BooleanPointer result)
	{
		String mapParamValue = map;
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = touches_EVString_IGeometry_IGeometry_ev_bool(this.nativeObject.pointer, mapParamValue, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	native private int within_EVString_IGeometry_IGeometry_ev_bool(long pNativeObject, String map, long geometry1, long geometry2, long result);
	/**
	 * 查看geometri1是否在geometry2内部
	 * @param map 图层名
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 查询结果
	 * @return 操作结果类型
	 */
	public int within(String map, com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, BooleanPointer result)
	{
		String mapParamValue = map;
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = within_EVString_IGeometry_IGeometry_ev_bool(this.nativeObject.pointer, mapParamValue, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	native private int getGeoCodeFile_EVString_EVString_CMemoryStreamResult(long pNativeObject, String placename, String dataname, long serverresult);
	/**
	 * 获取地理编码文件
	 * @param placename 地名
	 * @param dataname 数据名
	 * @param serverresult 查询结果
	 * @return 操作结果类型
	 */
	public int getGeoCodeFile(String placename, String dataname, com.earthview.world.spatial.MemoryStreamResult serverresult)
	{
		String placenameParamValue = placename;
		String datanameParamValue = dataname;
		long serverresultParamValue = serverresult.nativeObject.pointer;
		int returnValue = getGeoCodeFile_EVString_EVString_CMemoryStreamResult(this.nativeObject.pointer, placenameParamValue, datanameParamValue, serverresultParamValue);
		return returnValue;
	}
	native private int queryPlacename_EVString_EVString_EVString_ev_bool_ev_int32_CPlaceNameList(long pNativeObject, String layername, String namefield, String keyword, boolean blurquery, int limitcount, long resultlist);
	/**
	 * 查询地名
	 * @param layername 图层名
	 * @param namefield 名称字段名
	 * @param keyword 关键字
	 * @param blurquery 是否模糊查询
	 * @param limitcount 最多返回结果
	 * @param resultlist 查询结果列表
	 * @return 操作结果类型
	 */
	public int queryPlacename(String layername, String namefield, String keyword, boolean blurquery, int limitcount, com.earthview.world.spatial.PlaceNameList resultlist)
	{
		String layernameParamValue = layername;
		String namefieldParamValue = namefield;
		String keywordParamValue = keyword;
		boolean blurqueryParamValue = blurquery;
		int limitcountParamValue = limitcount;
		long resultlistParamValue = resultlist.nativeObject.pointer;
		int returnValue = queryPlacename_EVString_EVString_EVString_ev_bool_ev_int32_CPlaceNameList(this.nativeObject.pointer, layernameParamValue, namefieldParamValue, keywordParamValue, blurqueryParamValue, limitcountParamValue, resultlistParamValue);
		return returnValue;
	}
	native private int getKMLFile_EVString_EVString_CMemoryStreamResult(long pNativeObject, String filename, String dataName, long serverresult);
	/**
	 * 获取KML文件
	 * @param filename 文件名
	 * @param dataName 数据名1
	 * @param serverresult 查询结果
	 * @return 操作结果类型
	 */
	public int getKMLFile(String filename, String dataName, com.earthview.world.spatial.MemoryStreamResult serverresult)
	{
		String filenameParamValue = filename;
		String dataNameParamValue = dataName;
		long serverresultParamValue = serverresult.nativeObject.pointer;
		int returnValue = getKMLFile_EVString_EVString_CMemoryStreamResult(this.nativeObject.pointer, filenameParamValue, dataNameParamValue, serverresultParamValue);
		return returnValue;
	}
	native private int getDEMFile_EVString_ev_int32_ev_int32_ev_int32_CMemoryStreamResult(long pNativeObject, String filename, int level, int row, int col, long serverresult);
	/**
	 * 获取DEM文件
	 * @param filename 图层名
	 * @param dataName 数据名
	 * @param stream 查询结果
	 * @param filename 图层名
	 * @param level 级别
	 * @param row 行
	 * @param col 列
	 * @param serverresult 查询结果
	 * @return 操作结果类型
	 */
	public int getDEMFile(String filename, int level, int row, int col, com.earthview.world.spatial.MemoryStreamResult serverresult)
	{
		String filenameParamValue = filename;
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		long serverresultParamValue = serverresult.nativeObject.pointer;
		int returnValue = getDEMFile_EVString_ev_int32_ev_int32_ev_int32_CMemoryStreamResult(this.nativeObject.pointer, filenameParamValue, levelParamValue, rowParamValue, colParamValue, serverresultParamValue);
		return returnValue;
	}
	native private int getEntityObject_CServerEntityObject(long pNativeObject, long entityObject);
	public int getEntityObject(com.earthview.world.spatial.ServerEntityObject entityObject)
	{
		long entityObjectParamValue = entityObject.nativeObject.pointer;
		int returnValue = getEntityObject_CServerEntityObject(this.nativeObject.pointer, entityObjectParamValue);
		return returnValue;
	}
	native private int getMesh_CServerMeshObject(long pNativeObject, long meshObject);
	public int getMesh(com.earthview.world.spatial.ServerMeshObject meshObject)
	{
		long meshObjectParamValue = meshObject.nativeObject.pointer;
		int returnValue = getMesh_CServerMeshObject(this.nativeObject.pointer, meshObjectParamValue);
		return returnValue;
	}
	native private int getResource_CServerResourceObject(long pNativeObject, long resourceObject);
	public int getResource(com.earthview.world.spatial.ServerResourceObject resourceObject)
	{
		long resourceObjectParamValue = resourceObject.nativeObject.pointer;
		int returnValue = getResource_CServerResourceObject(this.nativeObject.pointer, resourceObjectParamValue);
		return returnValue;
	}
	native private int getResourceByID_CServerResourceObject(long pNativeObject, long resourceObject);
	public int getResourceByID(com.earthview.world.spatial.ServerResourceObject resourceObject)
	{
		long resourceObjectParamValue = resourceObject.nativeObject.pointer;
		int returnValue = getResourceByID_CServerResourceObject(this.nativeObject.pointer, resourceObjectParamValue);
		return returnValue;
	}
	native private int getOrigTexture_CServerOrigTexture(long pNativeObject, long origTexture);
	public int getOrigTexture(com.earthview.world.spatial.ServerOrigTexture origTexture)
	{
		long origTextureParamValue = origTexture.nativeObject.pointer;
		int returnValue = getOrigTexture_CServerOrigTexture(this.nativeObject.pointer, origTextureParamValue);
		return returnValue;
	}
	native private int getTemplateEntityObject_CServerTemplateEntityObject(long pNativeObject, long entityObject);
	public int getTemplateEntityObject(com.earthview.world.spatial.ServerTemplateEntityObject entityObject)
	{
		long entityObjectParamValue = entityObject.nativeObject.pointer;
		int returnValue = getTemplateEntityObject_CServerTemplateEntityObject(this.nativeObject.pointer, entityObjectParamValue);
		return returnValue;
	}
	native private int getTemplateResourceByID_CServerResourceObject(long pNativeObject, long resourceObject);
	public int getTemplateResourceByID(com.earthview.world.spatial.ServerResourceObject resourceObject)
	{
		long resourceObjectParamValue = resourceObject.nativeObject.pointer;
		int returnValue = getTemplateResourceByID_CServerResourceObject(this.nativeObject.pointer, resourceObjectParamValue);
		return returnValue;
	}
	native private void setValid_ev_bool(long pNativeObject, boolean b);
	public void setValid(boolean b)
	{
		boolean bParamValue = b;
		setValid_ev_bool(this.nativeObject.pointer, bParamValue);
	}
	native private String getDatasetType_EVString(long pNativeObject, String datasetname);
	/**
	 * 通过数据集名称（不带数据集类型的，如dem90非dem90/DEM）获取数据集类型
	 * @param datasetname 数据集名称
	 * @return 数据集类型，如果没有给的的数据集，返回空
	 */
	public String getDatasetType(String datasetname)
	{
		String datasetnameParamValue = datasetname;
		String returnValue = getDatasetType_EVString(this.nativeObject.pointer, datasetnameParamValue);
		return returnValue;
	}
	native private int getMediaFileLength_EVString_EVString_ev_int64(long pNativeObject, String flename, String filetype, long fileLength);
	/**
	 * 
	 * @param  
	 */
	public int getMediaFileLength(String flename, String filetype, LongPointer fileLength)
	{
		String flenameParamValue = flename;
		String filetypeParamValue = filetype;
		long fileLengthParamValue = fileLength.nativeObject.pointer;
		int returnValue = getMediaFileLength_EVString_EVString_ev_int64(this.nativeObject.pointer, flenameParamValue, filetypeParamValue, fileLengthParamValue);
		return returnValue;
	}
	native private int getMediaFile_EVString_EVString_MemoryDataStreamPtr(long pNativeObject, String flename, String filetype, long fileData);
	/**
	 * 
	 * @param  
	 */
	public int getMediaFile(String flename, String filetype, com.earthview.world.core.MemoryDataStreamPtr fileData)
	{
		String flenameParamValue = flename;
		String filetypeParamValue = filetype;
		long fileDataParamValue = fileData.nativeObject.pointer;
		int returnValue = getMediaFile_EVString_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, flenameParamValue, filetypeParamValue, fileDataParamValue);
		return returnValue;
	}
	native private int getMediaFileByOffset_EVString_EVString_ev_int64_ev_int64_MemoryDataStreamPtr(long pNativeObject, String flename, String filetype, long offset, long length, long fileData);
	/**
	 * 
	 * @param  
	 */
	public int getMediaFileByOffset(String flename, String filetype, long offset, long length, com.earthview.world.core.MemoryDataStreamPtr fileData)
	{
		String flenameParamValue = flename;
		String filetypeParamValue = filetype;
		long offsetParamValue = offset;
		long lengthParamValue = length;
		long fileDataParamValue = fileData.nativeObject.pointer;
		int returnValue = getMediaFileByOffset_EVString_EVString_ev_int64_ev_int64_MemoryDataStreamPtr(this.nativeObject.pointer, flenameParamValue, filetypeParamValue, offsetParamValue, lengthParamValue, fileDataParamValue);
		return returnValue;
	}
	public Evspatialserver(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evspatialserver(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取数据源名称
	 * @param  
	 * @return 数据源名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获取数据源类型
	 * @param  
	 * @return 数据源类型
	 */
	public int getType()
	{
		return super.getType_NoVirtual();
	}
	/**
	 * 创建FeatureClass数据集
	 * @param  
	 * @return EarthView::World::Spatial::GeoDataset::IFeatureClass的指针
	 */
	public com.earthview.world.spatial.geodataset.Ifeatureclass createFeatureClass(String name, com.earthview.world.spatial.geodataset.Igeometryfield geofield, com.earthview.world.spatial.geodataset.Ifields fields)
	{
		return super.createFeatureClass_NoVirtual(name, geofield, fields);
	}
	/**
	 * 删除指定数据集名称的物理文件
	 * @param name 指定名称
	 * @return 成功删除，返回true;否则，返回false
	 */
	public boolean deleteDataset(String name)
	{
		return super.deleteDataset_NoVirtual(name);
	}
	
	native protected void register_getServicePluginFile_void(long pNativeObject, String method);
	native protected void register_getServerName_void(long pNativeObject, String method);
	native protected void register_getServerAbstract_void(long pNativeObject, String method);
	native protected void register_getServerTitle_void(long pNativeObject, String method);
	native protected void register_getServerUrl_void(long pNativeObject, String method);
	native protected void register_isConnected_void(long pNativeObject, String method);
	native protected void register_reconnect_void(long pNativeObject, String method);
	native protected void register_disConnect_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getPropertySet_void(long pNativeObject, String method);
	native protected void register_isValid_void(long pNativeObject, String method);
	native protected void register_getDatasetInfo_EVString(long pNativeObject, String method);
	native protected void register_getDatasetInfos_EVDatasetType(long pNativeObject, String method);
	native protected void register_createFeatureClass_EVString_IGeometryField_IFields(long pNativeObject, String method);
	native protected void register_openDataset_EVString(long pNativeObject, String method);
	native protected void register_deleteDataset_EVString(long pNativeObject, String method);
	native protected void register_closeDataset_IDataset(long pNativeObject, String method);
	native protected void register_toXML_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getServicePluginFile_void(this.nativeObject.pointer, "getServicePluginFile_void_callback");
			this.register_getServerName_void(this.nativeObject.pointer, "getServerName_void_callback");
			this.register_getServerAbstract_void(this.nativeObject.pointer, "getServerAbstract_void_callback");
			this.register_getServerTitle_void(this.nativeObject.pointer, "getServerTitle_void_callback");
			this.register_getServerUrl_void(this.nativeObject.pointer, "getServerUrl_void_callback");
			this.register_isConnected_void(this.nativeObject.pointer, "isConnected_void_callback");
			this.register_reconnect_void(this.nativeObject.pointer, "reconnect_void_callback");
			this.register_disConnect_void(this.nativeObject.pointer, "disConnect_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getPropertySet_void(this.nativeObject.pointer, "getPropertySet_void_callback");
			this.register_isValid_void(this.nativeObject.pointer, "isValid_void_callback");
			this.register_getDatasetInfo_EVString(this.nativeObject.pointer, "getDatasetInfo_EVString_callback");
			this.register_getDatasetInfos_EVDatasetType(this.nativeObject.pointer, "getDatasetInfos_EVDatasetType_callback");
			this.register_createFeatureClass_EVString_IGeometryField_IFields(this.nativeObject.pointer, "createFeatureClass_EVString_IGeometryField_IFields_callback");
			this.register_openDataset_EVString(this.nativeObject.pointer, "openDataset_EVString_callback");
			this.register_deleteDataset_EVString(this.nativeObject.pointer, "deleteDataset_EVString_callback");
			this.register_closeDataset_IDataset(this.nativeObject.pointer, "closeDataset_IDataset_callback");
			this.register_toXML_void(this.nativeObject.pointer, "toXML_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static Evspatialserver fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evspatialserver obj = null;
 		if(baseObj instanceof Evspatialserver)
		{
			obj = (Evspatialserver)baseObj;
		} else {
			obj = new Evspatialserver(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVSpatialServer");
			obj.increaseCast();
		}

		return obj;
	}
}
