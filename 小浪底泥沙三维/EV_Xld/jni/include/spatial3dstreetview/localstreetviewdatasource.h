#ifndef EARTHVIEW_WORLD_SPATIAL3D_STREETVIEWDATASOURCE_H
#define EARTHVIEW_WORLD_SPATIAL3D_STREETVIEWDATASOURCE_H

#include "spatial3dstreetview/spatial3dstreetviewconfig.h"
#include "spatialinterface/idatasource.h"
#include "spatialinterface/idatasourcefactory.h"
#include "spatialdatabase/datametainfos.h"
#include "spatialdatabase/datametainfo.h"
#include "spatialinterface/idatasetiterator.h"
#include "databaseutility/sqldatabase.h"


namespace EarthView{
	namespace World{
		namespace Spatial3D{


			class CLocalStreetViewDataSourceFactory;
			class EV_Spatial3DStreetView_DLL CLocalStreetViewDataSource : public EarthView::World::Spatial::GeoDataset::IFileDataSource
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CLocalStreetViewDataSource(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				CLocalStreetViewDataSource(const EVString& datasourcePath,const EVString& aliasname);


				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CLocalStreetViewDataSource();					
				/// <summary>
				/// 获取数据源名称
				/// </summary>
				/// <returns>数据源名称</returns>
				virtual EVString getName() const;
				/// <summary>
				/// 获取数据源类型
				/// </summary>
				/// <returns>数据源类型</returns>
				virtual ev_int32 getType() const;
				/// <summary>
				/// 获取数据源参数
				/// </summary>
				/// <returns>数据源KeyValue参数</returns>
				virtual EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const;
				/// <summary>
				/// 判断数据源是否有效
				/// </summary>
				/// <returns>是，返回true;否则，返回false</returns>
				virtual ev_bool isValid() const;
				/// <summary>
				/// 获取指定数据集类型的数据元信息
				/// </summary>
				/// <param name="name">数据集名字</param>
				/// <returns>数据元信息集合对象</returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(const EVString &name);
				/// <summary>
				/// 获取指定数据集类型的数据元信息
				/// </summary>
				/// <param name="type">数据集类型</param>
				/// <returns>数据元信息集合对象</returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(EarthView::World::Spatial::GeoDataset::EVDatasetType type);

				/// <summary>
				/// 创建数据集
				/// </summary>
				/// <param name="name">数据集名称</param>
				/// <param name="dstFolder">目标目录</param>
				/// <param name="attrFields">属性，NULL则无自定义属性</param>
				/// <returns>是，返回true;否则，返回false</returns>
				static ev_bool createDataset(const EVString& name, const EVString& dstFolder, const EarthView::World::Spatial::GeoDataset::IFields* attrFields);

				/// <summary>
				/// 打开指定数据集名称的数据集
				/// </summary>
				/// <param name="name">指定带后缀名的数据集名称</param>
				/// <returns>数据集对象指针，如果名字不存在，这返回null</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataset * openDataset(const EVString& name);

				/// <summary>
				/// 关闭指定数据集名称的数据集，会删掉数据集指针
				/// </summary>
				/// <param name="name">数据集指针</param>
				/// <returns>成功删除，返回true;否则，返回false</returns>
				virtual ev_bool closeDataset(EarthView::World::Spatial::GeoDataset::IDataset * dataset);

				/// <summary>
				/// 删除指定数据集名称的物理文件
				/// </summary>
				/// <param name="name">指定名称</param>
				/// <returns>成功删除，返回true;否则，返回false</returns>
				virtual ev_bool deleteDataset(const EVString& name);

				/// <summary>
				/// 序列化字符串
				/// </summary>
				/// <returns>返回字符串</returns>
				virtual EVString toXML() const;
				/// <summary>
				/// 深度拷贝
				/// </summary>
				/// <returns>数据源</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* clone() const;


				/// <summary>
				/// 获取指定数据集名称的数据集
				/// </summary>
				/// <param name="name">指定带后缀名的数据集名称</param>
				/// <returns>数据集对象指针，如果名字不存在，这返回null</returns>
				EarthView::World::Spatial::GeoDataset::IDataset* getDataset( EVString name );
				ev_bool usingObqDatabase( EarthView::World::Core::Database::CSqlDatabase& db );

			protected:
				friend class CLocalStreetViewDataSourceFactory;
			private:					
				EarthView::World::Core::ev_stringArray mFilesArray;
				EVString mName;	

				vector<EarthView::World::Spatial::GeoDataset::IDataset*> mDatasets;
			};

			class EV_Spatial3DStreetView_DLL CLocalStreetViewDataSourceFactory:public EarthView::World::Spatial::GeoDataset::IDataSourceFactory
			{
			private:
				static EarthView::World::Spatial3D::CLocalStreetViewDataSourceFactory* mSingletonPtr;
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CLocalStreetViewDataSourceFactory();
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CLocalStreetViewDataSourceFactory(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CLocalStreetViewDataSourceFactory();
				/// <summary>
				/// 返回单例的数据源工厂句柄
				/// </summary>
				/// <returns>CModelDataSourceFactory，失败则返回NULL</returns>
				static EarthView::World::Spatial3D::CLocalStreetViewDataSourceFactory* getSingletonPtr();

				/// <summary>
				/// 释放数据源内存
				/// </summary>
				/// <param name="ds">数据源句柄</param>
				/// <returns></returns>
				void closeDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* ds);

				/// <summary>
				/// 打开本地文件型的数据源
				/// </summary>
				/// <param name="path">文件型数据源文件夹</param>
				/////// <param name="fileName">数据源别名</param>
				/// <returns>EarthView::World::Spatial::GeoDataset::IDataSource，打开失败则返回NULL</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource * openDataSource(const EVString& path,const EVString& fileName);
				/// <summary>
				/// 创建本地数据库版的数据源
				/// </summary>
				/// <param name="path">文件型数据源文件夹</param>
				/////// <param name="fileName">数据源别名</param>
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
#endif