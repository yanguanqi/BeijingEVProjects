#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELDATASOURCEFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELDATASOURCEFACTORY_H

#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "spatialinterface/idatasourcefactory.h"




namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{

				class EV_Spatial3DDataset_DLL CModelDataSourceFactory : public EarthView::World::Spatial::GeoDataset::IDataSourceFactory
				{
				private:
					static EarthView::World::Spatial3D::Dataset::CModelDataSourceFactory* mSingletonPtr;
ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
					CModelDataSourceFactory(_in EarthView::World::Core::CNameValuePairList* pList);
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					CModelDataSourceFactory();
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					virtual ~CModelDataSourceFactory();

					/// <summary>
					/// 返回单例的数据源工厂句柄
					/// </summary>
					/// <returns>EarthView::World::Spatial3D::Dataset::CModelDataSourceFactory，失败则返回NULL</returns>
					static EarthView::World::Spatial3D::Dataset::CModelDataSourceFactory* getSingletonPtr();

					/// <summary>
					/// 释放数据源内存
					/// </summary>
					/// <param name="ds">数据源句柄</param>
					/// <returns></returns>
					void closeDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* ds);

					/// <summary>
					/// 销毁一个数据源对象
					/// </summary>
					/// <param name="pDataSource">数据源对象</param>
					/// <returns></returns>
					virtual ev_void destroyDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);

					/// <summary>
					/// 打开本地数据库版的数据源
					/// </summary>
					/// <param name="path">数据库文件路径</param>
					/// <param name="fileName">数据库名称</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IDataSource，打开失败则返回NULL</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource * openDataSource(const EVString& path,const EVString& fileName) ;

					/// <summary>
					///获取数据源工厂类型 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					virtual ev_int32 getType() const;

					/// <summary>
					/// 从xml构建一个数据源对象
					/// </summary>
					/// <param name="xml">数据源xml描述</param>
					/// <returns>数据源对象</returns>
					
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(const EVString& xml);

					/// <summary>
					/// 打开数据源
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源对象</returns>
					
					virtual EarthView::World::Spatial::GeoDataset::IDataSource * openDataSource(EarthView::World::Spatial::GeoDataset::IPropertySet * connection) ;

					/// <summary>
					/// 创建数据源
					/// </summary>
					/// <param name="path">数据源路径</param>
					/// <param name="fileName">数据源文件名称</param>
					/// <returns>数据源对象</returns>
					
					virtual EarthView::World::Spatial::GeoDataset::IDataSource * createDataSource(const EVString& path,const EVString& fileName) ;

					/// <summary>
					/// 创建数据源
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源对象</returns>
					
					virtual EarthView::World::Spatial::GeoDataset::IDataSource * createDataSource(EarthView::World::Spatial::GeoDataset::IPropertySet * connection) ;
				};


			}//namespace
		}
	}
}
#endif
