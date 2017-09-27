#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MESHXDATASOURCE_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MESHXDATASOURCE_H

#include "spatialinterface/idatasource.h"
#include "spatial3dengine/spatial3dengineconfig.h"
#include "spatialdatabase/datametainfos.h"
#include "spatialdatabase/datametainfo.h"
#include "spatialinterface/idatasetiterator.h"
#include "databaseutility/sqldatabase.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace ModelManager{
				class CMeshXDataSourceFactory;
				
				class EV_Spatial3DEngine_DLL CMeshXDataSource : public EarthView::World::Spatial::GeoDataset::IFileDataSource
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CMeshXDataSource(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CMeshXDataSource(const EVString& datasourcePath,const EVString& aliasname);
					
					
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CMeshXDataSource();					
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
					
					
					
				    ev_bool usingObqDatabase(EarthView::World::Core::Database::CSqlDatabase& db);
				protected:
					friend class CMeshXDataSourceFactory;
				private:					
					EarthView::World::Core::ev_stringArray mFilesArray;
					EVString mName;	

					vector<EarthView::World::Spatial::GeoDataset::IDataset*> mDatasets;
					
				};
			}
		}
	}
}
#endif
