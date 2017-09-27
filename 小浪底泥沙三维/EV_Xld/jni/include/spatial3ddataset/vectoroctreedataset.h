#ifndef EARTHVIEW_WORLD_SPATIAL3D_VECTORRELATIVEDATASET_H
#define EARTHVIEW_WORLD_SPATIAL3D_VECTORRELATIVEDATASET_H

#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "core/memoryallocatedobject.h"
#include "core/core_common.h"
#include "mathengine/axisalignedbox.h"
#include "spatialinterface/ifield.h"
#include "spatialinterface/ifeatureclass.h"
#include "spatialinterface/altitudemode.h"
#include "spatialinterface/ilayer.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{
				
				class CVectorOctreeDataSource;
				class EV_Spatial3DDataset_DLL CVectorOctreeDataset : public EarthView::World::Spatial::GeoDataset::IFeatureClass
				{
ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
					CVectorOctreeDataset(_in EarthView::World::Core::CNameValuePairList* pList);
				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="datasource">数据源句柄</param>
					/// <param name="name">数据集名称</param>
					/// <param name="datasetID">数据集id</param>
					/// <param name="pEnvelop">数据集包围盒</param>
					/// <param name="version">数据集版本</param>
					/// <returns></returns>					
					CVectorOctreeDataset(EarthView::World::Spatial::GeoDataset::IDataSource* ref_datasource, 
						const EVString& name,
						ev_uint32 datasetID,
						const EarthView::World::Spatial::Geometry::IEnvelope* pEnvelop,
						EarthView::World::Spatial::Geometry::EVGeometryType geometryType,
						EarthView::World::Spatial::Geometry::ISpatialReference* sr,
						EarthView::World::Spatial::Atlas::EVLayerType layerType,
						const EarthView::World::Core::MemoryDataStreamPtr& layerInfoStream,
						const ev_int32 version);
				public:	
					virtual ~CVectorOctreeDataset();
					ev_uint64 getDataVersion() const;

					/*********************************************************************************
					基类虚函数
					**********************************************************************************/
					/// <summary>
					/// 获取包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集包围盒对象</returns>
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;

					/// <summary>
					/// 获取坐标系统信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>坐标参考信息</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const;

					/// <summary>
					/// 获取数据集名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集名称</returns>
					virtual EVString getName() const;

					/// <summary>
					/// 获取别名
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集别名</returns>					
					EVString getAliasName() const;

					/// <summary>
					/// 获取数据源句柄
					/// </summary>
					/// <returns>数据源句柄</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const;

					/// <summary>
					/// 获取ID值
					/// </summary>
					/// <param name=""></param>
					/// <returns>SRID</returns>
					virtual ev_uint32 getID() const;

					/// <summary>
					/// 获取数据集坐标参考SRID值
					/// </summary>
					/// <param name=""></param>
					/// <returns>SRID</returns>
					virtual ev_int32 getSRID() const;

					/// <summary>
					/// 获取GEOMETRY类别
					/// </summary>
					/// <returnsEVGeometryType， 返回GEOMETRY类别</returns>
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;
					/// <summary>
					/// 获取对应图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					EarthView::World::Spatial::Atlas::EVLayerType getLayerType() const;

					virtual ev_bool getOctreeNodes(const EVString& octreeCode,_inout EarthView::World::Core::MemoryDataStreamPtr& octreeNodes);
					virtual ev_bool getOctreeObjects(const EVString& octreeCode,_inout EarthView::World::Core::MemoryDataStreamPtr& objectsStream);

					virtual ev_bool writeOctree(const EVString& octreeCode,const EarthView::World::Core::MemoryDataStreamPtr& octreeNodes,const EarthView::World::Core::MemoryDataStreamPtr& objectsStream);

					EarthView::World::Core::MemoryDataStreamPtr getLayerInfoStream() const;

				public:
					
					/// <summary>
					/// 获取数据集类别
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const;

					/// <summary>
					/// 清空数据集记录
					/// </summary>
					/// <returns></returns>
					ev_bool clearDataset();

				protected:

					void _init(EarthView::World::Spatial::GeoDataset::IDataSource* ref_datasource, 
						const EVString& name,
						ev_uint32 datasetID,
						const EarthView::World::Spatial::Geometry::IEnvelope* pEnvelop,
						EarthView::World::Spatial::Geometry::EVGeometryType geometryType,
						EarthView::World::Spatial::Geometry::ISpatialReference* sr,
						EarthView::World::Spatial::Atlas::EVLayerType layerType,
						const EarthView::World::Core::MemoryDataStreamPtr& layerInfoStream,
						const ev_int32 version);

					EarthView::World::Spatial::GeoDataset::IDataSource* mpDataSource;
					EVString mDatasetName;  ///数据集名称，对应的数据库的表名
					EVString mAliasName;       ///别名，用户定义的数据集的名字
					ev_uint32 mID;
					EarthView::World::Spatial::Geometry::ISpatialReference* mpSpatialRef;//坐标参考系

					ev_int32 mDatasetVersion;

					EarthView::World::Spatial::Geometry::IEnvelope* mpEnvelop;  //数据集的包围盒

					EarthView::World::Spatial::Geometry::EVGeometryType mGeometryType;

					EarthView::World::Spatial::Atlas::EVLayerType mLayerType;
					EarthView::World::Core::MemoryDataStreamPtr mpLayerInfoStream;

					friend class CVectorOctreeDataSource;
				};
				
			}//namespace
		}
	}
}

#endif
