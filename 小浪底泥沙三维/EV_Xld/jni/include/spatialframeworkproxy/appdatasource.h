/// Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
// All rights reserved.
//
// AppDataSource类的声明。 AppDataSource提供访问数据源和数据集的接口。
//
// 作 者：赵玻恩
// 完成日期：-
//
// 修改历史：
// [修改序列]	[修改日期]		[修改者]		[修改内容]
// 0			2013/12/09		赵玻恩		类定义
//
#ifndef _APPDATASOURCE_INCLUDE__
#define _APPDATASOURCE_INCLUDE__

#include <string>
#include "spatialframeworkproxy/frameworkproxy_config.h"
#include "core/object.h"
#include "spatialframeworkproxy/forwarddeclare.h"
#include "spatialframeworkproxy/datasourceoption.h"
#include "spatialframeworkproxy/datasetoption.h"


namespace EarthView{namespace World{namespace Utilities{

	class AppDataSourceHelper;
	class EV_FRAMEWORKPROXY_DLL AppDataSource : public EarthView::World::Core::CBaseObject
	{
	public:
		enum DataSourceType	//	数据源类型
		{					//
			FileChart,		//	- 海图
			FileKML,		//	- KML
			FileRaster,		//	- Raster
			FileVector,
			//FileObq,        //  -倾斜摄影模型
			FileSmart3D,        //  -倾斜摄影模型
			FileMeshX,        //  -倾斜摄影模型
			FileMeshXG,        //  -倾斜摄影模型
			FileLas,
			FileLasXG,
			FileLocalImage,
			FileLocalDem,
			FileStreetView,  //街景
			FileOSGB,
			DBModel,		//	- 模型
			DBVector,		//	- 矢量
			DBEffect,		//	- 特效
			DBRaster,
			WebEVServer,	//	- EarthView网络服务器
			WebOGCWMSServer	,	//	- OGCWMS网络服务器
			WebOGCWMTSServer,	//	- OGCWMTS网络服务器
			WebOGCWFSServer		//	- OGCWFS网络服务器
		};

		/// <summary>
		/// 构造函数。
		/// </summary>
		/// <returns></returns>
		AppDataSource();

		/// <summary>
		/// 析构函数。
		/// </summary>
		/// <returns></returns>
		~AppDataSource();

		/// <summary>
		/// 打开数据源。
		/// </summary>
		/// <param name="aliasName">
		/// 给打开的数据源起的别名。
		/// 打开文件数据源时该参数不起作用，别名等于文件目录名（含路径）。
		/// </param>
		/// <param name="option">
		/// 数据源打开选项，按如下格式设置一个打开选项：
		///		DataSourceOption().open().数据库类型()【.数据库子类型()】（数据库打开参数）
		///
		/// 所有EarthView::World::Utilities::DataSourceOption选项的层级关系如下：
		///		DataSourceOption()
		///			.open()
		///				.db()
		///					.sqlite (filepath)
		///					.odbc	(ip, port, user, pasword, version)
		///					.oracle (ip, port, user, pasword)
		///				.file (dirpath)
		///				.web  (ip, port, user, pasword)
		///
		/// 例如打开一个sqlite类型的数据库数据源，使用如下代码：
		///		openDataSource("mysqlite", DataSourceOption().open().db().sqlite("c:\mysqlite.evd"));
		///	而打开一个网络数据源，使用如下代码：
		///		openDataSource("myEVServer", DataSourceOption().open().web("192.168.5.132", 8088, "ev", "ev123"));
		/// </param>
		/// <returns>打开是否成功。</returns>
		bool openDataSource(const EVString& aliasName, const EarthView::World::Utilities::DataSourceOption& option);

		/// <summary>
		/// 获取数据源对象。
		/// </summary>
		/// <param name="aliasName">数据源的别名。</param>
		/// <param name="type">要获取的数据源的类型。</param>
		/// <returns>获取的数据源对象，失败返回0。</returns>
		EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource(const EVString& dataSourceAliasName, EarthView::World::Utilities::AppDataSource::DataSourceType type) const;

		/// <summary>
		/// 关闭数据源。
		/// </summary>
		/// <param name="aliasName">数据源的别名。</param>
		/// <returns>关闭是否成功。</returns>
		bool closeDataSource(const EVString& aliasName);

		/// <summary>
		/// 删除数据源。
		/// </summary>
		/// <param name="aliasName">数据源的别名。</param>
		/// <returns>删除是否成功。</returns>
		bool deleteDataSource(const EVString& aliasName);

		/// <summary>
		/// 创建数据源。
		/// </summary>
		/// <param name="aliasName">给创建的数据源起的别名。</param>
		/// <param name="option">
		/// 数据源创建选项，按如下格式设置一个创建选项：
		///		DataSourceOption().create().数据库类型()【.数据库子类型()】（数据库创建参数）
		///
		/// 所有EarthView::World::Utilities::DataSourceOption可能的设置如下：
		///		DataSourceOption()
		/// 		.create()
		///				.db()
		///					.sqlite (dirpath)
		///
		/// 例如创建一个sqlite类型的数据库数据源，使用如下代码：
		///		createDataSource("mysqlite", DataSourceOption().create().db().sqlite("c:\mysqlite.evd"));
		/// </param>
		/// <returns>创建是否成功。</returns>
		bool createDataSource(const EVString& aliasName, const EarthView::World::Utilities::DataSourceOption& option);

		/// <summary>
		/// 创建数据集。
		/// 需要注意的是创建数据集只是在数据源中创建，不能立即获取到EarthView::World::Spatial::GeoDataset::IDataset对象，
		/// 需要调用openDataset()才能获取EarthView::World::Spatial::GeoDataset::IDataset对象。
		/// 你也可以通过getDataset()获取一个已经打开的数据集对象。
		/// </summary>
		/// <param name="dataSourceAliasName">数据源的别名。</param>
		/// <param name="datasetName">
		/// 要创建的数据集的名称。
		/// 对于KML数据集，会根据创建的KML数据集类型在数据集名称后添加后缀。
		/// </param>
		/// <param name="option">
		/// 数据集创建选项，按如下格式设置一个打开选项：
		///		DatasetOption().create().数据库类型()【.数据库子类型()】（数据集创建参数）
		///
		/// 创建数据集的层级关系如下：
		///		DatasetOption()
		///			.create()
		///				.db()
		///					.vector (EVGeometryType, EVWellKnownGeoCSType/EVWellKnownProjCSType)
		///					.model  (CFields&, ModelDatasetType, EVWellKnownGeoCSType/EVWellKnownProjCSType)
		///					.effect (EVWellKnownGeoCSType/EVWellKnownProjCSType)
		///				.file()
		///					.kml(KMLDatasetType)
		///
		/// 例如，创建一个特效（effect）类型的数据库数据源，使用如下代码：
		///		createDataset("mysqlite", "mydataset", 
		///			DatasetOption().create().db().effect(GEO_Beijing54));
		/// </param>
		/// <returns>创建是否成功。</returns>
		bool createDataset(
			const EVString& dataSourceAliasName,
			const EVString& datasetName,
			const EarthView::World::Utilities::DatasetOption& option);

		/// <summary>
		/// 删除数据集。
		/// </summary>
		/// <param name="dataSourceAliasName">数据源的别名。</param>
		/// <param name="datasetName">数据集的别名。</param>
		/// <returns>删除是否成功。</returns>
		bool deleteDataset(const EVString& dataSourceAliasName, const EVString& datasetName);

		/// <summary>
		/// 打开数据集。
		/// </summary>
		/// <param name="dataSourceAliasName">数据源的别名。</param>
		/// <param name="datasetName">数据集的别名。</param>
		/// <returns>打开的EarthView::World::Spatial::GeoDataset::IDataset数据集对象。</returns>
		EarthView::World::Spatial::GeoDataset::IDataset* openDataset(const EVString& dataSourceAliasName, const EVString& datasetName);

		/// <summary>
		/// 获取数据集对象。
		/// </summary>
		/// <param name="dataSourceAliasName">数据源的别名。</param>
		/// <param name="datasetName">数据集的别名。</param>
		/// <returns>获取的EarthView::World::Spatial::GeoDataset::IDataset数据集对象。</returns>
		//EarthView::World::Spatial::GeoDataset::IDataset* getDataset(const EVString& dataSourceAliasName, const EVString& datasetName);

		/// <summary>
		/// 获取错误信息。在任何一个方法返回false之后通过此函数获取错误信息。
		/// ***注意该函数为静态方法，意味着本类对象析构后仍然可以正确获取错误信息。
		/// </summary>
		/// <returns>错误信息。</returns>
		static EVString getLastErrorString();

	private:
		AppDataSourceHelper* helper;
		// 请不要放置其他成员变量。
ev_private:
		AppDataSource(AppDataSource&);
		AppDataSource(EarthView::World::Core::CNameValuePairList *pList);
	};

}}}

#endif // _APPDATASOURCE_INCLUDE__

