#ifndef _DATABASE_VECTOR_SOURCE_IMPL_H_H_
#define _DATABASE_VECTOR_SOURCE_IMPL_H_H_

#include "spatial2dgeodatabase/config.h"
#include "spatial2dgeodatabase/vectorfeatureclass.h"
#include "spatial2dgeodatabase/databasevectorsource.h"
#include "databaseutility/sqldatabase.h"
#include "spatial2dgeodatabase/vectorfeatureclassoperator_dbimp.h"
#include "spatialinterface/ifields.h"
#include "spatialinterface/igeometryfield.h"

namespace EarthView
{
    namespace World
    {
        namespace Spatial
        {
            namespace GeoDataset
            {
				class CSqlstandardization;
            }
        }
    }
}


namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace GeoDataset{

class CDatabaseVectorSourceImpl
{
public:
	CDatabaseVectorSourceImpl(const EarthView::World::Core::Database::CSqlDatabase &db,EarthView::World::Spatial2D::GeoDataset::CDatabaseVectorSource *ds);
	virtual ~CDatabaseVectorSourceImpl();
	/// <summary>
	/// 判断数据源是否有效
	/// </summary>
	/// <param name="name">指定名称</param>
	/// <returns>有效删除，返回true;否则，返回false</returns>
	 virtual ev_bool isValid();
	/// <summary>
	/// 开始编辑，用于标识数据集处在编辑状态，并根据参数，设置相关编辑对象。
	/// </summary>
	/// <param name="withUndo">确定是否开启Undo功能</param>
	/// <returns>开启编辑成功，返回true；否则，返回false</returns>
	 virtual ev_bool startEditing(const EVString &Name); 
	/// <summary>
	/// 结束编辑，用于标识数据集结束编辑，根据参数，确实是否保存数据。
	/// </summary>
	/// <param name="isSave">需要保存编辑数据，设置true;否则，设置false</param>
	/// <returns>结束编辑成功，返回true;否则，返回false</returns>
	 virtual ev_bool stopEditing(const EVString &Name,ev_bool isSave);

	 virtual ev_bool IsEditing() const;
	/// <summary>
	/// 获取数据集类型
	/// </summary>
	/// <param name="name">指定名称</param>
	/// <returns>数据集类型</returns>
	virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType(const EVString &name);
	/// <summary>
	/// 删除指定数据集的Operator
	/// </summary>
	/// <param name="name">指定名称</param>
	/// <returns>对应的Operator</returns>
	virtual EarthView::World::Spatial::GeoDataset::IDatasetOperator* getOperatorRef(EarthView::World::Spatial::GeoDataset::EVDatasetType type);
	/// <summary>
	/// 是否支持指定类型的数据集
	/// </summary>
	/// <param name="name">指定名称</param>
	/// <returns>成功删除，返回true;否则，返回false</returns>
	virtual ev_bool IsSupportedDataset(EarthView::World::Spatial::GeoDataset::EVDatasetType type)
	{
		return m_oprs.find(type)==m_oprs.end() ? false : true;
	}
	/// <summary>
	/// 打开指定数据集名称的数据集
	/// </summary>
	/// <param name="name">指定名称</param>
	/// <returns>数据集对象指针，如果名字不存在，这返回null</returns>
	 virtual EarthView::World::Spatial::GeoDataset::IDataset * openDataset(const EVString& name);
	/// <summary>
	/// 删除指定数据集名称的数据集
	/// </summary>
	/// <param name="name">指定名称</param>
	/// <returns>成功删除，返回true;否则，返回false</returns>
	 virtual ev_bool deleteDataset(const EVString& name);
	/// <summary>
	/// 打开FeatureClass数据集
	/// </summary>
	/// <param name=""></param>
	/// <returns>CVectorFeatureClass的指针</returns>
	virtual  EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass* openFeatureClass(const EVString &name);
	/// <summary>
	/// 创建FeatureClass数据集
	/// </summary>
	/// <param name=""></param>
	/// <returns>CVectorFeatureClass的指针</returns>
	virtual  ev_bool createFeatureClass(const EVString &name,
								EarthView::World::Spatial::GeoDataset::IGeometryField &geofield,
								const EarthView::World::Spatial::GeoDataset::IFields &fields,
								const EVString &parent="NULL");
	/// <summary>
	/// 删除FeatureClass数据集
	/// </summary>
	/// <param name=""></param>
	/// <returns>成功删除，返回true;否则，返回false</returns>
	virtual  ev_bool	deleteFeatureClass(const EVString &name);
	/// <summary>
	/// 获取网络数据集的创建者
	/// </summary>
	/// <param name=""></param>
	/// <returns>成功，返回指针;否则，返回NULL</returns>
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
	/// 获取标注数据集的创建者
	/// </summary>
	/// <param name=""></param>
	/// <returns>成功，返回指针;否则，返回NULL</returns>
	 EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder* getAnnoDatasetBuilder();
	/// <summary>
	/// 打开标注数据集
	/// </summary>
	/// <param name=""></param>
	/// <returns>成功，返回有效指针;否则，返回NULL</returns>
	 EarthView::World::Spatial2D::GeoDataset::CAnnoFeatureClass* openAnnoDataset(const EVString &name);
	/// <summary>
	/// 获取指定数据集类型的数据元信息
	/// </summary>
	/// <param name=""></param>
	/// <returns>数据元信息集合对象</returns>
	 virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(const EVString &name);
	/// <summary>
	/// 获取指定数据集类型的数据元信息
	/// </summary>
	/// <param name=""></param>
	/// <returns>数据元信息集合对象</returns>
	virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(EarthView::World::Spatial::GeoDataset::EVDatasetType type);
	/// <summary>
	/// 获取指定数据集类型的数据集
	/// </summary>
	/// <param name=""></param>
	/// <returns>数据集的迭代器</returns>
	 EarthView::World::Spatial::GeoDataset::IDatasetIterator* getDatasets(EarthView::World::Spatial::GeoDataset::EVDatasetType type);
	/// <summary>
	/// 获取数据源中网络数据集与源数据集的映射
	/// </summary>
	/// <returns>网络数据集与源数据集的映射表</returns>
	 ev_map<EVString, ev_set<EVString> > getNetworkDatasetOD();
	/// <summary>
	/// 插入一条网络数据集与源数据集的映射
	/// <param name="networkOriName">网络数据集名称</param>
	/// <param name="networkDestName">网络数据集的源数据集名称</param>
	/// </summary>
	/// <returns></returns>
	 ev_void insertNetworkDatasetOD(EVString networkOriName, EVString networkDestName);
	/// <summary>
	/// 删除一条网络数据集与源数据集的映射
	/// <param name="networkOriName">网络数据集名称</param>
	/// <param name="beNDFlag">是否网络数据集标记</param>
	/// </summary>
	/// <returns></returns>
	 ev_void deleteNetworkDatasetOD(EVString networkOriName, ev_bool beNDFlag);
	/// <summary>
	/// 根据数据集的名称判断是否是网络数据集源数据集
	/// <param name="datasetName">数据集名称</param>
	/// </summary>
	/// <returns>是，true; 否，false</returns>
	 ev_bool isNetworkDatasetSource(EVString datasetName);
	/// <summary>
	/// 向数据库写入一条矢量要素操作项(添加，删除，更新)的记录
	/// </summary>
	/// <param name="featureOperaItem">要素操作项</param>
	/// <returns></returns>
	 ev_void writeFeatureOperaRecord(_in EarthView::World::Core::CDataStream &stream);
	/// <summary>
	/// 从数据库读取指定数据集的所有矢量要素操作项(添加，删除，更新)的记录
	/// </summary>
	/// <param name="networkName">网络数据集的名称</param>
	/// <returns>网络数据集脏区要素操作项</returns>
     ev_vector<EarthView::World::Spatial2D::GeoDataset::CFeatureOperationItem*> readFeatureOperaRecord(EVString networkName);
	/// <summary>
	/// 序列化字符串
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	 EVString toXML() const;
	/// <summary>
	/// 获取数据源链接字符串
	/// </summary>
	/// <param name=""></param>
	/// <returns>链接字符串</returns>
	 EVString getConnectionString() const;
	/// <summary>
	/// 初始化支持数据集的Operator
	/// </summary>
	/// <param name=""></param>
	/// <returns>链接字符串</returns>
	 ev_void initializeOperators();
	/// <summary>
	/// 是否包含数据集
	/// </summary>
	/// <param name="name">指定名称</param>
	/// <returns>成功删除，返回true;否则，返回false</returns>
	 ev_bool  containDataset(const EVString &name);
private:
	 ev_int32 createTable(const EarthView::World::Core::ev_wstring& sql);
	 ev_int32 createGeometryTableTable(const char* datasetName);
	 ev_int32 getFieldMaxId(EarthView::World::Core::Database::CSqlQuery& query, const EVString& sql);
	//创建数据集失败时用作删除操作，某些数据库，DDL类型语句无法回滚
	 ev_bool deleteFeatureClass2(const EVString &name);
	//执行多条sql语句
	 ev_bool executeMultiSQL(const EarthView::World::Core::ev_wstring& sql);

protected:
	//data segment
	ev_bool					m_bValid;
	 EarthView::World::Core::Database::CSqlDatabase			m_db;
	 EarthView::World::Spatial2D::GeoDataset::CDatabaseVectorSource	*dataSource;
private:
	ev_bool					m_IsEditing;
	EVString					m_EditingName;
	ev_uint32				m_EditingNum;	

	ev_map<EarthView::World::Spatial::GeoDataset::EVDatasetType,EarthView::World::Spatial::GeoDataset::IDatasetOperator*> m_oprs;
	ev_map<EVString, ev_set<EVString> > m_NetworkDatasetMap;
	EarthView::World::Spatial::GeoDataset::CSqlstandardization		*sqlStd;
	
};


}}}} // End of namespaces
#endif //_DATABASE_VECTOR_SOURCE_IMPL_H_H_
