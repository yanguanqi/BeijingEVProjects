#ifndef _DATABASE_VECTOR_SOURCE_FACTORY_H_H_
#define _DATABASE_VECTOR_SOURCE_FACTORY_H_H_

#include "spatial2dgeodatabase/config.h"
#include "spatialinterface/idatasourcefactory.h"



namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace GeoDataset{
/// <summary>
/// 矢量数据源工厂类
/// </summary>
class EV_2DGEODATABSE_DLL CDatabaseVectorSourceFactory :
					public EarthView::World::Spatial::GeoDataset::IDataSourceFactory
{
public:		
	/// <summary>
	/// 默认析构函数
	/// </summary>
	virtual ~CDatabaseVectorSourceFactory();
	/// <summary>
	/// 获取类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回类型</returns>
	virtual ev_int32 getType() const;
	/// <summary>
	/// 释放数据源
	/// </summary>
	/// <param name="pDataSource">数据源</param>
	/// <returns></returns>
	virtual ev_void destroyDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
	/// <summary>
	/// 从xml创建数据源
	/// </summary>
	/// <param name="xml">序列化德xml</param>
	/// <returns>返回数据源</returns>
	virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(const EVString &xml);
	/// <summary>
	/// 通过路径打开数据源
	/// </summary>
	/// <param name="path">路径</param>
	/// <param name="fileName">文件名</param>
	/// <returns>返回数据源</returns>
	virtual EarthView::World::Spatial::GeoDataset::IDataSource * openDataSource(const EVString &path,const EVString &fileName);
	/// <summary>
	/// 通过连接参数打开数据源
	/// </summary>
	/// <param name="connection">连接参数</param>
	/// <returns>返回数据源</returns>
	virtual EarthView::World::Spatial::GeoDataset::IDataSource * openDataSource(EarthView::World::Spatial::GeoDataset::IPropertySet * connection);
	/// <summary>
	/// 通过路径创建数据源
	/// </summary>
	/// <param name="path">路径</param>
	/// <param name="fileName">文件名</param>
	/// <returns>返回数据源</returns>
	virtual EarthView::World::Spatial::GeoDataset::IDataSource * createDataSource(const EVString &path,const EVString &fileName);
	/// <summary>
	/// 通过连接参数创建数据源
	/// </summary>
	/// <param name="connection">连接参数</param>
	/// <returns>返回数据源</returns>
	virtual EarthView::World::Spatial::GeoDataset::IDataSource * createDataSource(EarthView::World::Spatial::GeoDataset::IPropertySet * connection);

ev_private:
	CDatabaseVectorSourceFactory(EarthView::World::Core::CNameValuePairList *pList);
public:
	CDatabaseVectorSourceFactory();
private:
	CDatabaseVectorSourceFactory(CDatabaseVectorSourceFactory & obj);
};







}}}} // End of namespaces


#endif //_DATABASE_VECTOR_SOURCE_FACTORY_H_H_

