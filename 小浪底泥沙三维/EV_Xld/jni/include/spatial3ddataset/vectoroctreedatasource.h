#ifndef EV_VECTORRELATIVEDATASOURCE_H
#define EV_VECTORRELATIVEDATASOURCE_H

#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "spatialinterface/idatasource.h"
#include "spatialinterface/idatasourcefactory.h"
#include "spatialinterface/igeometry.h"
#include "spatialinterface/itheme.h"
#include "spatialinterface/ilayer.h"
#include "spatialdatabase/databasedatasource.h"
#include "spatialinterface/idatametainfo.h"
#include "mathengine/axisalignedbox.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class CSqlstandardization;
			}
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{

				class CVectorOctreeDataset;
				class CVectorOctreeDataMetaInfo;
				class EV_Spatial3DDataset_DLL CVectorOctreeDataSource : public EarthView::World::Spatial::GeoDataset::CDatabaseDataSource
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CVectorOctreeDataSource(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>

					virtual ~CVectorOctreeDataSource();

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
					/// 获取指定数据集类型的数据元信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据元信息集合对象</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(const EVString &datasetName);
					/// <summary>
					/// 获取指定数据集类型的数据元信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据元信息集合对象</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(EarthView::World::Spatial::GeoDataset::EVDatasetType type);

					/// <summary>
					/// 创建指定类别数据集，对于返回的指针需要通过closedataset来释放资源
					/// </summary>
					/// <param name="name">指定名称</param>
					/// <param name="srID">地理或是投影坐标系ID</param>
					/// <returns>ev_bool，创建失败返回FALSE</returns>
					virtual ev_bool createDataset(EVString name, EarthView::World::Spatial::Geometry::EVGeometryType geometryType,EarthView::World::Spatial::Atlas::EVLayerType layerType,
						EarthView::World::Spatial::Geometry::IEnvelope* pEnv,EarthView::World::Spatial::Geometry::ISpatialReference* sr,const EarthView::World::Core::MemoryDataStreamPtr& layerInfoStream);

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
					/// 删除数据集元数据信息
					/// </summary>
					/// <param name="info">元数据信息</param>
					/// <returns>ev_bool</returns>
					virtual ev_bool deleteDatasetInfo(EVString datasetName);
					/// <summary>
					/// 关闭指定数据集名称的数据集，会删掉数据集指针
					/// </summary>
					/// <param name="name">数据集指针</param>
					/// <returns>成功删除，返回true;否则，返回false</returns>
					virtual ev_bool closeDataset(EarthView::World::Spatial::GeoDataset::IDataset * dataset);

					ev_bool isDatasetValid(const EVString& datasetName);

					/// <summary>
					/// 获取数据库句柄
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Core::Database::CSqlDatabase，数据库句柄</returns>
					virtual EarthView::World::Core::Database::CSqlDatabase& getDatabase();
				protected:
					friend class CVectorOctreeDataSourceFactory;
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="db">数据源数据库连接对象</param>
					/// <param name="datasourcename">数据源名称</param>
					/// <returns></returns>
					CVectorOctreeDataSource(const EarthView::World::Core::Database::CSqlDatabase &db, const EVString& datasourcename);
				protected:

					ev_int32 initialize();

					ev_int32 createDatasetInfoTable();
					ev_int32 createOctreeTable(const EVString& name);

					/// <summary>
					/// 插入数据集元数据信息
					/// </summary>
					/// <param name="info">元数据信息</param>
					/// <returns>ev_bool</returns>
					virtual ev_uint32 insertDatasetInfo(CVectorOctreeDataMetaInfo* info,const EarthView::World::Core::MemoryDataStreamPtr& layerInfoStream);
				protected:
					friend class CVectorOctreeDataset;

					vector<EarthView::World::Spatial::GeoDataset::IDataset*> mDatasets;
				};

				class EV_Spatial3DDataset_DLL CVectorOctreeDataSourceFactory : public EarthView::World::Spatial::GeoDataset::IDataSourceFactory
				{
				private:
					static EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory* mSingletonPtr;
ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
					CVectorOctreeDataSourceFactory(_in EarthView::World::Core::CNameValuePairList* pList);
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>

					CVectorOctreeDataSourceFactory();
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>

					virtual ~CVectorOctreeDataSourceFactory();

					/// <summary>
					/// 返回单例的数据源工厂句柄
					/// </summary>
					/// <returns>EarthView::World::Spatial3D::Dataset::CModelDataSourceFactory，失败则返回NULL</returns>
					static EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory* getSingletonPtr();

					/// <summary>
					/// 释放数据源内存
					/// </summary>
					/// <param name="ds">数据源句柄</param>
					/// <returns></returns>
					void closeDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* ds);

					/// <summary>
					/// 打开本地数据库版的数据源
					/// </summary>
					/// <param name="path">数据库文件路径</param>
					/// <param name="fileName">数据库名称</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IDataSource，打开失败则返回NULL</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource * openDataSource(const EVString& path,const EVString& fileName) const;

					/// <summary>
					///获取数据源工厂类型 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>

					virtual ev_int32 getType() const;

					/// <summary>
					/// 创建数据源
					/// </summary>
					/// <param name="path">数据源路径</param>
					/// <param name="fileName">数据源文件名称</param>
					/// <returns>数据源对象</returns>

					virtual EarthView::World::Spatial::GeoDataset::IDataSource * createDataSource(const EVString& path,const EVString& fileName) const;
				};

				class EV_Spatial3DDataset_DLL CVectorOctreeDataMetaInfo : public EarthView::World::Spatial::GeoDataset::IDataMetaInfo
				{
				protected:
					EarthView::World::Spatial::GeoDataset::EVDatasetType mType;
					EVString mName;
					EarthView::World::Spatial::Geometry::IEnvelope* mpEnvelop;
					EarthView::World::Spatial::Geometry::ISpatialReference* mSR;
					ev_uint32 mID;
					EarthView::World::Spatial::Geometry::EVGeometryType mGeometryType;
					EarthView::World::Spatial::Atlas::EVLayerType mLayerType;
					ev_uint32 mVersion;
ev_private:
					/// <summary>
					/// 用于封装的构造函数
					/// </summary>
					/// <param name="pList">参数健值对</param>
					/// <returns></returns>
					CVectorOctreeDataMetaInfo(_in EarthView::World::Core::CNameValuePairList *pList);
				public:	
					///<summary>
					///构造函数
					///</summary>
					///<param name=""></param>
					///<returns></returns>
					CVectorOctreeDataMetaInfo();
					///<summary>
					///析构函数
					///</summary>
					///<param name=""></param>
					///<returns></returns>
					virtual ~CVectorOctreeDataMetaInfo();
				public:
					///<summary>
					///获取数据集类型
					///</summary>
					///<param name=""></param>
					///<returns>数据集类型</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;
					///<summary>
					///设置数据集类型
					///</summary>
					///<param name="type">数据集类型</param>
					///<returns></returns>
					virtual ev_void setDatasetType(EarthView::World::Spatial::GeoDataset::EVDatasetType type) ;
					/// <summary>
					/// 获取数据集的名称
					/// </summary>
					/// <returns>数据集的名称</returns>
					virtual EVString getName() const;
					///<summary>
					///设置数据集名
					///</summary>
					///<param name="name">数据集名</param>
					///<returns></returns>
					virtual ev_void setName(const EVString& name) ;
					/// <summary>
					/// 获取数据集的范围
					/// </summary>
					/// <returns>内部对象引用，无需释放</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
					/// <summary>
					/// 设置数据集的范围
					/// </summary>
					/// <param name="pEnv">范围对象</param>
					/// <returns></returns>
					virtual ev_void setEnvelope(EarthView::World::Spatial::Geometry::IEnvelope* pEnv) ;
					/// <summary>
					/// 获取数据集的坐标系统
					/// </summary>
					/// <returns>坐标系统对象</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;
					/// <summary>
					/// 获取数据集的坐标系统
					/// </summary>
					/// <returns>坐标系统对象</returns>
					virtual ev_void setSpatialReference(EarthView::World::Spatial::Geometry::ISpatialReference* sr);

					/// <summary>
					/// 设置版本号
					/// </summary>
					///<param name="version">版本号</param>
					/// <returns></returns>
					virtual ev_void setVersion(ev_uint32 version);
					/// <summary>
					/// 获取版本号
					/// </summary>
					/// <returns>版本号</returns>
					virtual ev_uint32 getVersion();
					/// <summary>
					/// 获取数据集id
					/// </summary>
					/// <returns>数据集的id</returns>
					virtual ev_uint32 getID();
					/// <summary>
					/// 设置数据集的id
					/// </summary>
					/// <param name="id">id</param>
					/// <returns></returns>
					virtual void setID(ev_uint32 id);
					/// <summary>
					/// 获取几何体类型
					/// </summary>
					/// <returns>几何体类型枚举</returns>
					EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;

					void setGeometryType(EarthView::World::Spatial::Geometry::EVGeometryType type);
					/// <summary>
					/// 获取对应图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					EarthView::World::Spatial::Atlas::EVLayerType getLayerType() const;

					void setLayerType(EarthView::World::Spatial::Atlas::EVLayerType type);

					virtual void toStream(_inout EarthView::World::Core::CDataStream& objStream);
					virtual void fromStream(EarthView::World::Core::CDataStream& objStream);

				protected:					
					friend class CVectorOctreeDataSource;
				};

			}
		}
	}
}

#endif