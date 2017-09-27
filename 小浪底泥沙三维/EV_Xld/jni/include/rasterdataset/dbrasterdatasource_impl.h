#ifndef _DBRASTERDATASOURCE_IMPL_H_H_
#define _DBRASTERDATASOURCE_IMPL_H_H_

#include "spatialinterface/idatametainfo.h"
#include "spatialinterface/idatametainfos.h"
#include "databaseutility/sqldatabase.h"
#include "spatialinterface/idatasetoperator.h"
#include "spatialdatabase/sqlstandardization.h"
#include "rasterdataset/dbrasterdatasource.h"
#include "rasterdataset/dbrasterdataset.h"

using namespace EarthView::World::Spatial::GeoDataset;
using namespace EarthView::World::Core::Database;

namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				
class CDBRasterDataSourceImpl
{
public:
	CDBRasterDataSourceImpl(const EarthView::World::Core::Database::CSqlDatabase &db,CDBRasterDataSource *ds);
	~CDBRasterDataSourceImpl();
	/// <summary>
	/// 判断数据源是否有效
	/// </summary>
	/// <param name="name">指定名称</param>
	/// <returns>有效删除，返回true;否则，返回false</returns>
	bool isValid();
	/// <summary>
	/// 获取指定数据集类型的数据元信息
	/// </summary>
	/// <param name=""></param>
	/// <returns>数据元信息集合对象</returns>
	EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(const EVString &name);
	/// <summary>
	/// 获取指定数据集类型的数据元信息
	/// </summary>
	/// <param name=""></param>
	/// <returns>数据元信息集合对象</returns>
	EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(EVDatasetType type);
	/// <summary>
	/// 打开指定数据集名称的数据集
	/// </summary>
	/// <param name="name">指定名称</param>
	/// <returns>数据集对象指针，如果名字不存在，这返回null</returns>
	EarthView::World::Spatial2D::Raster::CDBRasterDataset * openDataset(const EVString& name);
	/// <summary>
	/// 删除指定数据集名称的数据集
	/// </summary>
	/// <param name="name">指定名称</param>
	/// <returns>成功删除，返回true;否则，返回false</returns>
	ev_bool deleteDataset(const EVString& name);
	/// <summary>
	/// 创建rasterdataset数据集
	/// </summary>
	/// <param name="name">指定要创建数据集名称</param>
	/// <returns>成功创建，返回true;否则，返回false</returns>
	ev_bool createDataset(const EVString &name);
	/// <summary>
	/// 创建rasterdataset数据集
	/// </summary>
	/// <param name="name">指定要创建数据集名称</param>
	/// <param name="stream">保存要创建数据集的相关信息</param>
	/// <returns>成功创建，返回true;否则，返回false</returns>
	ev_bool createDataset(const EVString &name,_in EarthView::World::Core::CDataStream& stream);
	/// <summary>
	/// 序列化字符串
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	EVString toXML() const;
	/// <summary>
	/// 获取指定类型数据集的Operator
	/// </summary>
	/// <param name="name">指定类型</param>
	/// <returns>对应的Operator</returns>
	EarthView::World::Spatial::GeoDataset::IDatasetOperator* getOperatorRef();
	/// <summary>
	/// 初始化支持数据集的Operator
	/// </summary>
	/// <param name=""></param>
	/// <returns>链接字符串</returns>
	ev_void initializeOperator();
	ev_bool executeMultiSQL(ev_wstring sql);
private:
	/// <summary>
	/// 是否包含数据集
	/// </summary>
	/// <param name="name">指定名称</param>
	/// <returns>成功删除，返回true;否则，返回false</returns>
	ev_bool  containDataset(const EVString &name);
	ev_int32 getFieldMaxId(EarthView::World::Core::Database::CSqlQuery& query, const EVString& sql);
	//创建数据集失败时用作删除操作，某些数据库，DDL类型语句无法回滚
	ev_bool deleteFeatureClass2(const EVString &name);

private:
	ev_bool					                                      m_bValid;
	EarthView::World::Core::Database::CSqlDatabase			      m_db;	
	CDBRasterDataSource*                                          dataSource;
    EarthView::World::Spatial::GeoDataset::IDatasetOperator*      m_opr;
	EarthView::World::Spatial::GeoDataset::CSqlstandardization*   sqlStd;
};

			}
		}
	}
}



#endif