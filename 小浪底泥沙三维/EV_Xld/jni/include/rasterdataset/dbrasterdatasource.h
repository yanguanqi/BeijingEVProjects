#ifndef _DB_RASTER_DATASOURCE_H_H_
#define _DB_RASTER_DATASOURCE_H_H_

#include "spatialinterface/idatasource.h"
#include "rasterdataset/rasterdatasetenume.h"
#include "spatialdatabase/databasedatasource.h"
#include "databaseutility/sqldatabase.h"
#include "rasterdataset/dbrasterdataset.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Raster{
class CDBRasterDataSourceImpl;
/// <summary>
/// 数据库栅格数据源类
/// </summary>
class EV_RASTER_DLL CDBRasterDataSource: public EarthView::World::Spatial::GeoDataset::CDatabaseDataSource
{
	friend class CDBRasterDataSourceFactory;
	friend class CDBRasterDataSourceImpl;
	friend class CDBRasterDataset;
public:
	/// <summary>
	/// 析构函数
	/// </summary>
	~CDBRasterDataSource();
	/// <summary>
	/// 获取数据源名称
	/// </summary>
	/// <param name=""></param>
	/// <returns>数据源名称</returns>
	virtual EVString getName() const;
	/// <summary>
	/// 获取数据源类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>数据源类型</returns>
	virtual ev_int32 getType() const;
	/// <summary>
	/// 判断数据源是否有效
	/// </summary>
	/// <param name=""></param>
	/// <returns>是，返回true;否则，返回false</returns>
	virtual ev_bool isValid() const;
	/// <summary>
	/// 获取指定数据集类型的数据元信息
	/// </summary>
	/// <param name=""></param>
	/// <returns>数据元信息集合对象</returns>
	virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(const EVString &name);
	/// <summary>
	/// 获取指定数据集类型的数据元信息
	/// </summary>
	/// <param name=""></param>
	/// <returns>数据元信息集合对象</returns>
	virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(EarthView::World::Spatial::GeoDataset::EVDatasetType type);
	/// <summary>
	/// 获取数据源参数
	/// </summary>
	/// <param name=""></param>
	/// <returns>数据源KeyValue参数</returns>
	virtual _extfree EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const;
	/// <summary>
	/// 打开指定数据集名称的数据集
	/// </summary>
	/// <param name="name">指定名称</param>
	/// <returns>数据集对象指针，如果名字不存在，这返回null</returns>
	virtual EarthView::World::Spatial::GeoDataset::IDataset * openDataset(const EVString& name);
	/// <summary>
	///关闭打开的数据集
	/// </summary>
	/// <param name="dataset">数据集指针</param>
	/// <returns>返回false</returns>
	ev_bool closeDataset(EarthView::World::Spatial::GeoDataset::IDataset *pDataset);
	/// <summary>
	/// 删除指定数据集名称的数据集
	/// </summary>
	/// <param name="name">指定名称</param>
	/// <returns>成功删除，返回true;否则，返回false</returns>
	virtual ev_bool deleteDataset(const EVString& name);
	/// <summary>
	/// 创建rasterdataset数据集
	/// </summary>
	/// <param name="name">指定要创建数据集名称</param>
	/// <returns>成功创建，返回true;否则，返回false</returns>
	virtual EarthView::World::Spatial2D::Raster::CDBRasterDataset * createDataset(const EVString &name);
	/// <summary>
	/// 创建rasterdataset数据集
	/// </summary>
	/// <param name="name">指定要创建数据集名称</param>
	/// <param name="stream">数据集的信息</param>
	/// <returns>成功创建，返回true;否则，返回false</returns>
	virtual EarthView::World::Spatial2D::Raster::CDBRasterDataset * createDataset(const EVString &name,_in EarthView::World::Core::CDataStream& stream);
	/// <summary>
	/// 序列化字符串
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual EVString toXML() const;
	/// <summary>
	/// 获取数据库句柄
	/// </summary>
	/// <returns>EarthView::World::Core::Database::CSqlDatabase&,数据库句柄</returns>
	virtual EarthView::World::Core::Database::CSqlDatabase& getDatabase();
	/// <summary>
	/// 数据源是否正在被编辑
	/// </summary>
	/// <returns>如果是返回true；否则返回false</returns>
	virtual ev_bool IsEditing() const;

private:
	/// <summary>
	/// 开始编辑，用于标识数据集处在编辑状态，并根据参数，设置相关编辑对象。
	/// </summary>
	/// <param name="withUndo">确定是否开启Undo功能</param>
	/// <returns>开启编辑成功，返回true；否则，返回false</returns>
	ev_bool startEditing(const EVString &name);
	/// <summary>
	/// 结束编辑，用于标识数据集结束编辑，根据参数，确实是否保存数据。
	/// </summary>
	/// <param name="isSave">需要保存编辑数据，设置true;否则，设置false</param>
	/// <returns>结束编辑成功，返回true;否则，返回false</returns>
	ev_bool stopEditing(const EVString &name,ev_bool isSave);

ev_private:
	CDBRasterDataSource(EarthView::World::Core::CNameValuePairList *pList);

protected:
	CDBRasterDataSource(const EVString &srcname,const EarthView::World::Core::Database::CSqlDatabase &db,const EVString& dbType);
	/// <summary>
	/// 初始化数据源的基本表
	/// </summary>
	/// <param name=""></param>
	/// <returns>void</returns>
	void init();

private:
	EVString	m_SrcName;
	EVString	m_fullpath;
	ev_bool  m_IsEditing;
	EVString	 m_EditingName;
	ev_uint32 m_EditingNum;	
	vector<EarthView::World::Spatial::GeoDataset::IDataset*> m_DatasetList;
	CDBRasterDataSourceImpl*m_impl;
};
}}}}
#endif

