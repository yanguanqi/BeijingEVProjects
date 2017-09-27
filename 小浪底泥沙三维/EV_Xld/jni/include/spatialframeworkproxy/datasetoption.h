/// Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
// All rights reserved.
//
// EarthView::World::Utilities::DatasetOption数据集选项等类的声明。
//
// 作 者：赵玻恩
// 完成日期：-
//
// 修改历史：
// [修改序列]	[修改日期]		[修改者]		[修改内容]
// 0			2013/12/11		赵玻恩		类定义
//
#ifndef _DATASETOPTION_INCLUDE__
#define _DATASETOPTION_INCLUDE__

#include "spatialframeworkproxy/frameworkproxy_config.h"
#include "core/object.h"
#include "spatialframeworkproxy/forwarddeclare.h"


namespace EarthView{namespace World{namespace Utilities{

	class DatasetOption_Create;
	class DatasetOptionHelper;

	// 模型数据集的类型。
	enum ModelDatasetType
	{
		EntityModelDataset,
		InstanceModelDataset
	};

	// KML数据集的类型。
	enum KMLDatasetType
	{
		KMLDataset,
		KMZDataset
	};

	// 数据集选项类。
	class EV_FRAMEWORKPROXY_DLL DatasetOption : public EarthView::World::Core::CBaseObject
	{
	public:
		/// <summary>
		/// 构造函数。
		/// </summary>
		/// <returns></returns>
		DatasetOption();

		/// <summary>
		/// 析构函数。
		/// </summary>
		/// <returns></returns>
		~DatasetOption();

		/// <summary>
		/// 获取数据集选项的"创建数据集"对象，通过此对象你可以生成创建数据集的选项。
		/// </summary>
		/// <returns>EarthView::World::Utilities::DatasetOption_Create对象。</returns>
		EarthView::World::Utilities::DatasetOption_Create& create();

	protected:
		DatasetOption(DatasetOption&){}

ev_private:
		DatasetOption(_in EarthView::World::Core::CNameValuePairList *pList);
		DatasetOptionHelper* helper;
	};

	class DatasetOption_CreateHelper;
	class DatasetOption_Create_DB;
	class DatasetOption_Create_File;
	class EV_FRAMEWORKPROXY_DLL DatasetOption_Create : public EarthView::World::Core::CBaseObject
	{
	public:
		/// <summary>
		/// 获取数据集选项的"创建数据库数据集"对象，
		/// 通过此对象你可以生成创建数据库型数据集的选项。
		/// </summary>
		/// <returns>EarthView::World::Utilities::DatasetOption_Create_DB对象。</returns>
		EarthView::World::Utilities::DatasetOption_Create_DB& db();

		/// <summary>
		/// 获取数据集选项的"创建文件数据集"对象，
		/// 通过此对象你可以生成创建文件型数据集的选项。
		/// </summary>
		/// <returns>EarthView::World::Utilities::DatasetOption_Create_File对象。</returns>
		EarthView::World::Utilities::DatasetOption_Create_File& file();

		~DatasetOption_Create();
	protected:
		DatasetOption_CreateHelper* helper;
ev_private:
		DatasetOption_Create(DatasetOptionHelper* ref_helper);
	};

	class DatasetOption_Create_DBHelper;
	class EV_FRAMEWORKPROXY_DLL DatasetOption_Create_DB : public EarthView::World::Core::CBaseObject
	{
	public:
		/// <summary>
		/// 设置一个创建矢量数据集的选项，具体请见AppDataSource::createDataset()。
		/// </summary>
		/// <param name="geoType">EVGeometryType。</param>
		/// <param name="espg">EVWellKnownGeoCSType或EVWellKnownProjCSType。</param>
		/// <returns>EarthView::World::Utilities::DatasetOption数据集选项对象。</returns>
		EarthView::World::Utilities::DatasetOption& vector (const EarthView::World::Spatial::GeoDataset::CFields& fields, int geoType, int espg);
		/// <summary>
		/// 设置一个创建矢量数据集的选项，具体请见AppDataSource::createDataset()。
		/// </summary>
		/// <param name="geoType">EVGeometryType。</param>
		/// <param name="espg">EVWellKnownGeoCSType或EVWellKnownProjCSType。</param>
		/// <returns>EarthView::World::Utilities::DatasetOption数据集选项对象。</returns>
		EarthView::World::Utilities::DatasetOption& vector (const EarthView::World::Spatial::GeoDataset::CFields& fields,int geoType, EVString wktCoordsys);

		/// <summary>
		/// 设置一个创建模型数据集的选项，具体请见AppDataSource::createDataset()。
		/// </summary>
		/// <param name="fields">数据集字段设置。</param>
		/// <param name="modelDatasetType">模型数据集类型。</param>
		/// <param name="espg">EVWellKnownGeoCSType或EVWellKnownProjCSType。</param>
		/// <returns>EarthView::World::Utilities::DatasetOption数据集选项对象。</returns>
		EarthView::World::Utilities::DatasetOption& model  (const EarthView::World::Spatial::GeoDataset::CFields& fields, EarthView::World::Utilities::ModelDatasetType modelDatasetType, int espg);

		/// <summary>
		/// 设置一个创建特效数据集的选项，具体请见AppDataSource::createDataset()。
		/// </summary>
		/// <param name="espg">EVWellKnownGeoCSType或EVWellKnownProjCSType。</param>
		/// <returns>EarthView::World::Utilities::DatasetOption数据集选项对象。</returns>
		EarthView::World::Utilities::DatasetOption& effect (int espg);

		~DatasetOption_Create_DB();

	ev_private:
		DatasetOption_Create_DB(DatasetOptionHelper* ref_helper);

		DatasetOption_Create_DBHelper* helper;
	};

	class DatasetOption_Create_FileHelper;
	class EV_FRAMEWORKPROXY_DLL DatasetOption_Create_File : public EarthView::World::Core::CBaseObject
	{
	public:
		/// <summary>
		/// 设置一个创建KML数据集的选项，具体请见AppDataSource::createDataset()。
		/// </summary>
		/// <param name="kmlDatasetType">KML数据集类型。</param>
		/// <returns>EarthView::World::Utilities::DatasetOption数据集选项对象。</returns>
		EarthView::World::Utilities::DatasetOption& kml(EarthView::World::Utilities::KMLDatasetType kmlDatasetType = KMLDataset);

		~DatasetOption_Create_File();
ev_private:
		DatasetOption_Create_File(DatasetOptionHelper* ref_helper);
		DatasetOption_Create_FileHelper* helper;
	};
}}}

#endif // _DATASETOPTION_INCLUDE__

