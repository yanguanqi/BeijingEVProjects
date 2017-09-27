package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AppDataSource extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Utilities::AppDataSource", new AppDataSourceClassFactory());
	}

	public enum DataSourceType implements INativeEnum<DataSourceType> {
		FileChart(DataSourceTypeHelper.ENUM_VALUES[0]),
		FileKML(DataSourceTypeHelper.ENUM_VALUES[1]),
		FileRaster(DataSourceTypeHelper.ENUM_VALUES[2]),
		FileVector(DataSourceTypeHelper.ENUM_VALUES[3]),
		FileSmart3D(DataSourceTypeHelper.ENUM_VALUES[4]),
		FileMeshX(DataSourceTypeHelper.ENUM_VALUES[5]),
		FileMeshXG(DataSourceTypeHelper.ENUM_VALUES[6]),
		FileLas(DataSourceTypeHelper.ENUM_VALUES[7]),
		DBModel(DataSourceTypeHelper.ENUM_VALUES[8]),
		DBVector(DataSourceTypeHelper.ENUM_VALUES[9]),
		DBEffect(DataSourceTypeHelper.ENUM_VALUES[10]),
		DBRaster(DataSourceTypeHelper.ENUM_VALUES[11]),
		WebEVServer(DataSourceTypeHelper.ENUM_VALUES[12]),
		WebOGCWMSServer(DataSourceTypeHelper.ENUM_VALUES[13]),
		WebOGCWMTSServer(DataSourceTypeHelper.ENUM_VALUES[14]),
		WebOGCWFSServer(DataSourceTypeHelper.ENUM_VALUES[15]);
		private int value;
		DataSourceType(int i) {
			this.value = i;
		}
		public DataSourceType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final DataSourceType toEnum(int retval) {
			if(retval == FileChart.value){
				return FileChart;
			}
			else if(retval == FileKML.value){
				return FileKML;
			}
			else if(retval == FileRaster.value){
				return FileRaster;
			}
			else if(retval == FileVector.value){
				return FileVector;
			}
			else if(retval == FileSmart3D.value){
				return FileSmart3D;
			}
			else if(retval == FileMeshX.value){
				return FileMeshX;
			}
			else if(retval == FileMeshXG.value){
				return FileMeshXG;
			}
			else if(retval == FileLas.value){
				return FileLas;
			}
			else if(retval == DBModel.value){
				return DBModel;
			}
			else if(retval == DBVector.value){
				return DBVector;
			}
			else if(retval == DBEffect.value){
				return DBEffect;
			}
			else if(retval == DBRaster.value){
				return DBRaster;
			}
			else if(retval == WebEVServer.value){
				return WebEVServer;
			}
			else if(retval == WebOGCWMSServer.value){
				return WebOGCWMSServer;
			}
			else if(retval == WebOGCWMTSServer.value){
				return WebOGCWMTSServer;
			}
			else if(retval == WebOGCWFSServer.value){
				return WebOGCWFSServer;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class DataSourceTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 构造函数。
	 */
	public AppDataSource() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("AppDataSource", null);
	}

	native private boolean openDataSource_EVString_DataSourceOption(long pNativeObject, String aliasName, long option);
	/**
	 * 打开数据源。
	 * @param aliasName 给打开的数据源起的别名。打开文件数据源时该参数不起作用，别名等于文件目录名（含路径）。
	 * @param option 数据源打开选项，按如下格式设置一个打开选项：		DataSourceOption().open().数据库类型()【.数据库子类型()】（数据库打开参数）所有EarthView::World::Utilities::DataSourceOption选项的层级关系如下：		DataSourceOption()			.open()				.db()					.sqlite(filepath)					.odbc	(ip,port,user,pasword,version)					.oracle(ip,port,user,pasword)				.file(dirpath)				.web(ip,port,user,pasword)例如打开一个sqlite类型的数据库数据源，使用如下代码：		openDataSource("mysqlite",DataSourceOption().open().db().sqlite("c:\mysqlite.evd"));	而打开一个网络数据源，使用如下代码：		openDataSource("myEVServer",DataSourceOption().open().web("192.168.5.132",8088,"ev","ev123"));
	 * @return 打开是否成功。
	 */
	public boolean openDataSource(String aliasName, com.earthview.world.utilities.DataSourceOption option)
	{
		String aliasNameParamValue = aliasName;
		long optionParamValue = option.nativeObject.pointer;
		boolean returnValue = openDataSource_EVString_DataSourceOption(this.nativeObject.pointer, aliasNameParamValue, optionParamValue);
		return returnValue;
	}
	native private long getDataSource_EVString_DataSourceType(long pNativeObject, String dataSourceAliasName, int type);
	/**
	 * 获取数据源对象。
	 * @param aliasName 数据源的别名。
	 * @param type 要获取的数据源的类型。
	 * @return 获取的数据源对象，失败返回0。
	 */
	public com.earthview.world.spatial.geodataset.Idatasource getDataSource(String dataSourceAliasName, com.earthview.world.utilities.AppDataSource.DataSourceType type)
	{
		String dataSourceAliasNameParamValue = dataSourceAliasName;
		int typeParamValue = type.getValue();
		long returnValue = getDataSource_EVString_DataSourceType(this.nativeObject.pointer, dataSourceAliasNameParamValue, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}
	native private boolean closeDataSource_EVString(long pNativeObject, String aliasName);
	/**
	 * 关闭数据源。
	 * @param aliasName 数据源的别名。
	 * @return 关闭是否成功。
	 */
	public boolean closeDataSource(String aliasName)
	{
		String aliasNameParamValue = aliasName;
		boolean returnValue = closeDataSource_EVString(this.nativeObject.pointer, aliasNameParamValue);
		return returnValue;
	}
	native private boolean deleteDataSource_EVString(long pNativeObject, String aliasName);
	/**
	 * 删除数据源。
	 * @param aliasName 数据源的别名。
	 * @return 删除是否成功。
	 */
	public boolean deleteDataSource(String aliasName)
	{
		String aliasNameParamValue = aliasName;
		boolean returnValue = deleteDataSource_EVString(this.nativeObject.pointer, aliasNameParamValue);
		return returnValue;
	}
	native private boolean createDataSource_EVString_DataSourceOption(long pNativeObject, String aliasName, long option);
	/**
	 * 创建数据源。
	 * @param aliasName 给创建的数据源起的别名。
	 * @param option 数据源创建选项，按如下格式设置一个创建选项：		DataSourceOption().create().数据库类型()【.数据库子类型()】（数据库创建参数）所有EarthView::World::Utilities::DataSourceOption可能的设置如下：		DataSourceOption()		.create()				.db()					.sqlite(dirpath)例如创建一个sqlite类型的数据库数据源，使用如下代码：		createDataSource("mysqlite",DataSourceOption().create().db().sqlite("c:\mysqlite.evd"));
	 * @return 创建是否成功。
	 */
	public boolean createDataSource(String aliasName, com.earthview.world.utilities.DataSourceOption option)
	{
		String aliasNameParamValue = aliasName;
		long optionParamValue = option.nativeObject.pointer;
		boolean returnValue = createDataSource_EVString_DataSourceOption(this.nativeObject.pointer, aliasNameParamValue, optionParamValue);
		return returnValue;
	}
	native private boolean createDataset_EVString_EVString_DatasetOption(long pNativeObject, String dataSourceAliasName, String datasetName, long option);
	/**
	 * 创建数据集。需要注意的是创建数据集只是在数据源中创建，不能立即获取到EarthView::World::Spatial::GeoDataset::IDataset对象，需要调用openDataset()才能获取EarthView::World::Spatial::GeoDataset::IDataset对象。你也可以通过getDataset()获取一个已经打开的数据集对象。
	 * @param dataSourceAliasName 数据源的别名。
	 * @param datasetName 要创建的数据集的名称。对于KML数据集，会根据创建的KML数据集类型在数据集名称后添加后缀。
	 * @param option 数据集创建选项，按如下格式设置一个打开选项：		DatasetOption().create().数据库类型()【.数据库子类型()】（数据集创建参数）创建数据集的层级关系如下：		DatasetOption()			.create()				.db()					.vector(EVGeometryType,EVWellKnownGeoCSType/EVWellKnownProjCSType)					.model(CFields,ModelDatasetType,EVWellKnownGeoCSType/EVWellKnownProjCSType)					.effect(EVWellKnownGeoCSType/EVWellKnownProjCSType)				.file()					.kml(KMLDatasetType)例如，创建一个特效（effect）类型的数据库数据源，使用如下代码：		createDataset("mysqlite","mydataset",			DatasetOption().create().db().effect(GEO_Beijing54));
	 * @return 创建是否成功。
	 */
	public boolean createDataset(String dataSourceAliasName, String datasetName, com.earthview.world.utilities.DatasetOption option)
	{
		String dataSourceAliasNameParamValue = dataSourceAliasName;
		String datasetNameParamValue = datasetName;
		long optionParamValue = option.nativeObject.pointer;
		boolean returnValue = createDataset_EVString_EVString_DatasetOption(this.nativeObject.pointer, dataSourceAliasNameParamValue, datasetNameParamValue, optionParamValue);
		return returnValue;
	}
	native private boolean deleteDataset_EVString_EVString(long pNativeObject, String dataSourceAliasName, String datasetName);
	/**
	 * 删除数据集。
	 * @param dataSourceAliasName 数据源的别名。
	 * @param datasetName 数据集的别名。
	 * @return 删除是否成功。
	 */
	public boolean deleteDataset(String dataSourceAliasName, String datasetName)
	{
		String dataSourceAliasNameParamValue = dataSourceAliasName;
		String datasetNameParamValue = datasetName;
		boolean returnValue = deleteDataset_EVString_EVString(this.nativeObject.pointer, dataSourceAliasNameParamValue, datasetNameParamValue);
		return returnValue;
	}
	native private long openDataset_EVString_EVString(long pNativeObject, String dataSourceAliasName, String datasetName);
	/**
	 * 打开数据集。
	 * @param dataSourceAliasName 数据源的别名。
	 * @param datasetName 数据集的别名。
	 * @return 打开的EarthView::World::Spatial::GeoDataset::IDataset数据集对象。
	 */
	public com.earthview.world.spatial.geodataset.Idataset openDataset(String dataSourceAliasName, String datasetName)
	{
		String dataSourceAliasNameParamValue = dataSourceAliasName;
		String datasetNameParamValue = datasetName;
		long returnValue = openDataset_EVString_EVString(this.nativeObject.pointer, dataSourceAliasNameParamValue, datasetNameParamValue);
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
	native private static String getLastErrorString_void();
	/**
	 * 获取错误信息。在任何一个方法返回false之后通过此函数获取错误信息。***注意该函数为静态方法，意味着本类对象析构后仍然可以正确获取错误信息。
	 * @param dataSourceAliasName 数据源的别名。
	 * @param datasetName 数据集的别名。
	 * @return 错误信息。
	 */
	public static String getLastErrorString()
	{
		String returnValue = getLastErrorString_void();
		return returnValue;
	}
	public AppDataSource(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AppDataSource(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AppDataSource fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AppDataSource obj = null;
 		if(baseObj instanceof AppDataSource)
		{
			obj = (AppDataSource)baseObj;
		} else {
			obj = new AppDataSource(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "AppDataSource");
			obj.increaseCast();
		}

		return obj;
	}
}
