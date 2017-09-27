#ifndef EV_KMLDATASOURCEFACTORY_H
#define EV_KMLDATASOURCEFACTORY_H

#include "spatial3dengine/spatial3dengineconfig.h"
#include "spatialinterface/idatasourcefactory.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace KmlManager
			{
				class EV_Spatial3DEngine_DLL CKmlDataSourceFactory:public EarthView::World::Spatial::GeoDataset::IDataSourceFactory
				{
				private:
					static EarthView::World::Spatial3D::KmlManager::CKmlDataSourceFactory* mSingletonPtr;
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CKmlDataSourceFactory();
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CKmlDataSourceFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CKmlDataSourceFactory();
					/// <summary>
					/// 返回单例的数据源工厂句柄
					/// </summary>
					/// <returns>CModelDataSourceFactory，失败则返回NULL</returns>
					static EarthView::World::Spatial3D::KmlManager::CKmlDataSourceFactory* getSingletonPtr();

					/// <summary>
					/// 释放数据源内存
					/// </summary>
					/// <param name="ds">数据源句柄</param>
					/// <returns></returns>
					void closeDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* ds);

					/// <summary>
					/// 打开文件型的数据源
					/// </summary>
					/// <param name="path">文件型数据源的文件夹路径</param>
					/////// <param name="fileName">别名</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IDataSource，打开失败则返回NULL</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource * openDataSource(const EVString& path,const EVString& fileName);
					/// <summary>
					/// 创建打开文件型的数据源
					/// </summary>
					/// <param name="path">文件型数据源的文件夹路径</param>
					/////// <param name="fileName">别名</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IDataSource，打开失败则返回NULL</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource * createDataSource(const EVString& path,const EVString& fileName);

					/// <summary>
					/// 获取数据源的类型
					/// </summary>
					/// <returns>返回数据源的类型</returns>
					virtual ev_int32 getType() const;
					/// <summary>
					/// 从xml字符串创建数据源
					/// </summary>
					/// <param name="xml">xml字符串</param>
					/// <returns>数据源</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(const EVString& xml);
					/// <summary>
					/// 打开数据源
					/// </summary>
					/// <param name="connection">连接属性列表</param>
					/// <returns>数据源</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource * openDataSource(EarthView::World::Spatial::GeoDataset::IPropertySet * connection);	
					/// <summary>
					/// 创建数据源
					/// </summary>
					/// <param name="connection">连接属性列表</param>
					/// <returns>数据源</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource * createDataSource(EarthView::World::Spatial::GeoDataset::IPropertySet * connection);
					/// <summary>
					/// 销毁数据源
					/// </summary>
					/// <param name="pDataSource">数据源</param>
					/// <returns></returns>
					virtual ev_void destroyDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
					
				};
			}
		}
	}
}
#endif
