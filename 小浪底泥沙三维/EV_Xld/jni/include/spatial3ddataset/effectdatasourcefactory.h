#ifndef EARTHVIEW_WORLD_SPATIAL3D_EFFECTDATASOURCEFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL3D_EFFECTDATASOURCEFACTORY_H

#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "spatialinterface/idatasourcefactory.h"




namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{

				/// <summary>
				/// 特效数据源工厂类
				/// </summary>
				class EV_Spatial3DDataset_DLL CEffectDataSourceFactory : public EarthView::World::Spatial::GeoDataset::IDataSourceFactory
				{

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffectDataSourceFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEffectDataSourceFactory();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEffectDataSourceFactory();

					/// <summary>
					/// 返回单例的数据源工厂句柄
					/// </summary>
					/// <param name=""></param>
					/// <returns>CModelDataSourceFactory，失败则返回NULL</returns>
					static EarthView::World::Spatial3D::Dataset::CEffectDataSourceFactory* getSingletonPtr();



					//实现基类的虚方法
					/// <summary>
					/// 获取数据源类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>ev_int32,数据源类型</returns>
					virtual ev_int32 getType() const;

					/// <summary>
					/// 通过XML创建数据源
					/// </summary>
					/// <param name="xml">XML</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IDataSource*,数据源</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(const EVString& xml);

					/// </summary>
					///创建数据库服务器数据源(ORACLE,ODBC)
					/// </summary>
					/// <param name="connection">数据库连接属性集</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IDataSource*，创建失败则返回NULL</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* createDataSource(EarthView::World::Spatial::GeoDataset::IPropertySet * connection) ;

					/// <summary>
					/// 创建本地数据库版的数据源(SQLLite)
					/// </summary>
					/// <param name="path">数据库文件路径(例如 D:/或D:\)</param>
					/// <param name="fileName">数据库名称(例如 test.EVD)</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IDataSource*，创建失败则返回NULL</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* createDataSource(const EVString& path,const EVString& fileName);

					/// <summary>
					/// 销毁由此工厂创建的数据源
					/// </summary>
					/// <param name="pDataSource">数据源指针</param>				
					/// <returns></returns>
					virtual ev_void destroyDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);

					/// </summary>
					///打开数据库服务器数据源(ORACLE,ODBC)
					/// </summary>
					/// <param name="connection">数据库连接属性集</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IDataSource*，数据源打开失败则返回NULL</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(EarthView::World::Spatial::GeoDataset::IPropertySet * connection) ;	

					/// <summary>
					/// 打开本地数据库版的数据源(SQLLite)
					/// </summary>
					/// <param name="path">数据库文件路径(例如 D:/或D:\)</param>
					/// <param name="fileName">数据库名称(例如 test.EVD)</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IDataSource*，打开失败则返回NULL</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(const EVString& path,const EVString& fileName) ;

					/// <summary>
					/// 释放数据源内存
					/// </summary>
					/// <param name="ds">数据源句柄</param>
					/// <returns></returns>
					void closeDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);


				private:
					static EarthView::World::Spatial3D::Dataset::CEffectDataSourceFactory* mSingletonPtr;
					mutable std::map<EarthView::World::Spatial::GeoDataset::IDataSource*,EarthView::World::Core::ev_wstring> mDataSourcesMap; //存储所有由此工厂创建的数据源

				};
			}
		}
	}
}
#endif
