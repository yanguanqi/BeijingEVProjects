#ifndef EARTHVIEW_WORLD_SPATIAL_GEODATASET_IDATASOURCE_H
#define EARTHVIEW_WORLD_SPATIAL_GEODATASET_IDATASOURCE_H

#include "core/memoryallocatedobject.h"
#include "spatialinterface/idataset.h"
#include "spatialinterface/config.h"
#include "spatialinterface/ipropertyset.h"
#include "spatialinterface/ifields.h"
#include "spatialinterface/igeometryfield.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				
				/// <summary>
				/// KeyValue集合类，其中Key类型为EVString，Value类型为EVString
				/// </summary>
				class IPropertySet;
				/// <summary>
				/// 数据集迭代器类
				/// </summary>
				class IDatasetIterator;
				/// <summary>
				/// 数据集元信息集合类
				/// </summary>
				class IDataMetaInfos;
				class IDataMetaInfo;
				class IFeatureClass;
				/// <summary>
				/// 数据源类型枚举
				/// </summary>
				enum EVDataSourceType
				{
					/// <summary>
					/// 未知枚举
					/// </summary>
					DST_UNKNOWN                        = 0,
					/// <summary>
					/// 数据库数据源_矢量类型
					/// </summary>
					DST_DATABASE_VECTOR                = 1,
					/// <summary>
					/// 文件系统数据源_shapefile
					/// </summary>
					DST_FILESYSTEM_SHAPEFILE           = 2,
					/// <summary>
					/// 文件系统数据源_海图000格式
					/// </summary>
					DST_FILESYSTEM_CHART               = 3,
					/// <summary>
					/// 数据库数据源_栅格类型
					/// </summary>
					DST_DATABASE_RASTER              = 4,
					/// <summary>
					/// 文件系统数据源_栅格数据格式
					/// </summary>
					DST_FILESYSTEM_RASTER              = 11,
					/// <summary>
					/// 文件系统数据源_KML文件类型
					/// </summary>
					DST_FILESYSTEM_KML                 = 12,
					/// <summary>
					/// 文件系统数据源_倾斜摄影文件类型
					/// </summary>
					DST_FILESYSTEM_FILE_SMART3D		   = 13,//旧的碎文件

					DST_FILESYSTEM_VECTOR		=		14,

					//新数据类别
					DST_FILESYSTEM_SMART3D		=		15,
					DST_FILESYSTEM_MESHX		=       16,
					DST_FILESYSTEM_MESHXG		=       17,

					DST_DATABASE_3DVECTOROCTREE		=		18,
					DST_FILESYSTEM_LAS = 19,
					DST_FILESYSTEM_LASXG = 20,


					/// <summary>
					/// 数据库数据源_模型类型
					/// </summary>
					DST_DATABASE_MODEL                 = 21,
					/// <summary>
					/// 数据库数据源_特效类型
					/// </summary>
					DST_DATABASE_EFFECT                = 31,
					/// <summary>
					/// 空间服务器_OGC_WMS
					/// </summary>
					DST_WEBSERVER_OGC_WMS              = 41,
					/// <summary>
					/// 空间服务器_OGC_WMTS
					/// </summary>
					DST_WEBSERVER_OGC_WMTS             = 42,
					/// <summary>
					/// 空间服务器_OGC_WFS
					/// </summary>
					DST_WEBSERVER_OGC_WFS              = 43,
					/// <summary>
					/// 空间服务器_EarthView_Server
					/// </summary>
					DST_WEBSERVER_EARTHVIEW_SERVER     = 51,
					/// <summary>
					///文件型数据源etm影像数据
					/// </summary>
					DST_FILESYSTEM_LOCALIMAGE    =     52,
					/// <summary>
					///文件型数据源ede dem数据
					/// </summary>					
					DST_FILESYSTEM_LOCALDEM = 53,
					/// <summary>
					///文件型街景数据
					/// </summary>					
					DST_FILESYSTEM_LOCALSTREETVIEW     = 54,

					DST_FILESYSTEM_LOCALOSGB     = 55,
                    /// <summary>
                    /// 自定义类型
                    /// </summary>
                    DST_CUSTOM                         = 100,
				};

				/// <summary>
				/// 数据源类，是所有数据源类的基类。
				/// </summary>
				class EV_INTERFACE_DLL IDataSource :
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~IDataSource();
					
				ev_private:
					///
					/// <summary>
					/// 用于封装的构造函数
					/// </summary>
					/// <param name="pList">参数健值对</param>
					/// <returns></returns>
					IDataSource( EarthView::World::Core::CNameValuePairList *pList );
					///
				public:
					/// <summary>
					/// 获取数据源别名
					/// </summary>
					/// <returns>数据源别名</returns>
                    const EVString& getAliasName() const;
					/// <summary>
					/// 设置数据源别名
					/// </summary>
					/// <param name="aliasname">别名</param>
					/// <returns></returns>
                    ev_void setAliasName(const EVString& aliasname);
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
					virtual EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const;
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
					/// 创建FeatureClass数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeatureClass的指针</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeatureClass* createFeatureClass(const EVString &name,EarthView::World::Spatial::GeoDataset::IGeometryField &geofield,const EarthView::World::Spatial::GeoDataset::IFields &fields);
					/// <summary>
					/// 获取指定数据集类型的数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集的迭代器</returns>
					//virtual EarthView::World::Spatial::GeoDataset::IDatasetIterator * getDatasets(EarthView::World::Spatial::GeoDataset::EVDatasetType type);
					
					/// <summary>
					/// 打开指定数据集名称的数据集
					/// </summary>
					/// <param name="name">指定名称</param>
					/// <returns>数据集对象指针，如果名字不存在，这返回null</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset * openDataset(const EVString& name);
					/// <summary>
					/// 删除指定数据集名称的物理文件
					/// </summary>
					/// <param name="name">指定名称</param>
					/// <returns>成功删除，返回true;否则，返回false</returns>
					virtual ev_bool deleteDataset(const EVString& name);

					/// <summary>
					/// 关闭指定数据集名称的数据集，会删掉数据集指针
					/// </summary>
					/// <param name="name">数据集指针</param>
					/// <returns>成功删除，返回true;否则，返回false</returns>
					virtual ev_bool closeDataset(EarthView::World::Spatial::GeoDataset::IDataset * dataset);
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					// virtual ILayer * openLayer(EVString name);
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
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* clone() const;
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					IDataSource();
				private:
					/// <summary>
					/// 拷贝构造
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					IDataSource(IDataSource & datasource);
                protected:
                    EVString mAliasName;
				};

				class EV_INTERFACE_DLL IFileDataSource : public EarthView::World::Spatial::GeoDataset::IDataSource
				{
				public:
					virtual ~IFileDataSource();

				protected:
					IFileDataSource();

				ev_private:
					IFileDataSource(EarthView::World::Core::CNameValuePairList* pList);
					

				public:
					/// <summary>
					/// 获取目录
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源目录</returns>
					const EVString& getDirectory()const;

				protected:
					EVString mDirectory;
				};

			}
		}
	}
}

#endif
