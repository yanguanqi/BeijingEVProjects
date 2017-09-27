#ifndef _DATABASE_VECTOR_SOURCE_H_H_
#define _DATABASE_VECTOR_SOURCE_H_H_

#include "spatial2dgeodatabase/config.h"
#include "spatialdatabase/databasedatasource.h"
#include "spatial2dgeodatabase/vectorfeatureclass.h"
#include "spatial2dgeodatabase/networkbuilder.h"
#include "spatial2dgeodatabase/networkdataset.h"
#include "spatialinterface/ifields.h"
#include "spatialinterface/igeometryfield.h"
#include "databaseutility/sqldatabase.h"
#include "annotation/annofeatureclass.h"
#include "annotation/annotationbuilder.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace GeoDataset{

class CDatabaseVectorSourceImpl;
/// <summary>
/// 矢量数据源类
/// </summary>
class EV_2DGEODATABSE_DLL CDatabaseVectorSource : public EarthView::World::Spatial::GeoDataset::CDatabaseDataSource
{
	friend class CDatabaseVectorSourceFactory;
	friend class CVectorFeatureClass;
	friend class CDatabaseVectorSourceImpl;
public:
	/// <summary>
	/// 默认析构函数
	/// </summary>
	~CDatabaseVectorSource();
public:
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
	/// 获取数据源参数
	/// </summary>
	/// <param name=""></param>
	/// <returns>数据源KeyValue参数</returns>
	virtual _extfree EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const;
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
	/// 打开指定数据集名称的数据集
	/// </summary>
	/// <param name="name">指定名称</param>
	/// <returns>数据集对象指针，如果名字不存在，这返回null</returns>
	virtual EarthView::World::Spatial::GeoDataset::IDataset * openDataset(const EVString& name);

	virtual ev_bool closeDataset(EarthView::World::Spatial::GeoDataset::IDataset* pDataset);
	/// <summary>
	/// 删除指定数据集名称的数据集
	/// </summary>
	/// <param name="name">指定名称</param>
	/// <returns>成功删除，返回true;否则，返回false</returns>
	virtual ev_bool deleteDataset(const EVString& name);
	/// <summary>
	/// 创建FeatureClass数据集
	/// </summary>
	/// <param name=""></param>
	/// <returns>EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass的指针</returns>
	virtual _extfree EarthView::World::Spatial::GeoDataset::IFeatureClass* createFeatureClass(const EVString &name,EarthView::World::Spatial::GeoDataset::IGeometryField &geofield,const EarthView::World::Spatial::GeoDataset::IFields &fields);
	/// <summary>
	/// 打开FeatureClass数据集
	/// </summary>
	/// <param name=""></param>
	/// <returns>EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass的指针</returns>
	EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass* openFeatureClass(const EVString &name);
	/// <summary>
	/// 删除FeatureClass数据集
	/// </summary>
	/// <param name=""></param>
	/// <returns>成功删除，返回true;否则，返回false</returns>
	ev_bool	deleteFeatureClass(const EVString &name);
	/// <summary>
	/// 获取网络数据集的创建者
	/// </summary>
	/// <param name=""></param>
	/// <returns>成功，返回有效指针;否则，返回NULL</returns>
	EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder* getNetworkDatasetBuilder();
	/// <summary>
	/// 打开网络数据集
	/// </summary>
	/// <param name=""></param>
	/// <returns>成功，返回有效指针;否则，返回NULL</returns>
	EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* openNetworkDataset(const EVString &name);
	/// <summary>
	/// 删除网络数据集
	/// </summary>
	/// <param name=""></param>
	/// <returns>成功，返回true;否则，返回False</returns>
	ev_bool deleteNetworkDataset(const EVString &name);
	/// <summary>
	/// 打开标注数据集
	/// </summary>
	/// <param name=""></param>
	/// <returns>成功，返回有效指针;否则，返回NULL</returns>
	EarthView::World::Spatial2D::GeoDataset::CAnnoFeatureClass* openAnnoDataset(const EVString &name);
	/// <summary>
	/// 序列化字符串
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual EVString toXML() const;
	/// <summary>
	/// 深度拷贝
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual _extfree EarthView::World::Spatial::GeoDataset::IDataSource* clone() const;
	/// <summary>
	/// 数据源是否正在被编辑
	/// </summary>
	/// <returns>如果是返回true；否则返回false</returns>
	virtual ev_bool IsEditing() const;

	/// <summary>
	/// 获取数据库句柄
	/// </summary>
	/// <returns>EarthView::World::Core::Database::CSqlDatabase&,数据库句柄</returns>
	virtual EarthView::World::Core::Database::CSqlDatabase& getDatabase();

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
	ev_int32 checkVersion();
ev_private:
	CDatabaseVectorSource(EarthView::World::Core::CNameValuePairList *pList);
protected:
	CDatabaseVectorSource(const EVString &srcname,const EarthView::World::Core::Database::CSqlDatabase &db,const EVString& dbType);
	/// <summary>
	/// 初始化数据源的基本表
	/// </summary>
	/// <param name=""></param>
	/// <returns>void</returns>
	void init();

private:
	EVString	m_SrcName;
	EVString	m_fullpath;
	vector<EarthView::World::Spatial::GeoDataset::IDataset*> m_DatasetList;
	CDatabaseVectorSourceImpl *m_impl;
};






}}}} // End of namespaces

#endif //_DATABASE_VECTOR_SOURCE_H_H_

