#ifndef EARTHVIEW_WORLD_SPATIAL_GEODATASET_IDATAMETAINFO_H
#define EARTHVIEW_WORLD_SPATIAL_GEODATASET_IDATAMETAINFO_H

#include "core/memoryallocatedobject.h"

#include "spatialinterface/idataset.h"
#include "spatialinterface/ienvelope.h"
#include "spatialinterface/ispatialreference.h"

#include "spatialinterface/config.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				/// <summary>
				/// 数据集元信息接口，用于记录数据集的相关信息
				/// </summary>
				class EV_INTERFACE_DLL IDataMetaInfo :
					public EarthView::World::Core::CAllocatedObject
				{
				public:					
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~IDataMetaInfo();
				public:
					/// <summary>
					/// 获取数据集类型
					/// </summary>
					/// <returns>数据集类型</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;
					/// <summary>
					/// 获取数据集的名称
					/// </summary>
					/// <returns>数据集的名称</returns>
					virtual EVString getName() const;
					/// <summary>
					/// 获取数据集的范围
					/// </summary>
					/// <returns>内部对象引用，无需释放</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
					/// <summary>
					/// 获取数据集的坐标系统
					/// </summary>
					/// <returns>坐标系统对象</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;
					//--
ev_private:
					/// <summary>
					/// 用于封装的构造函数
					/// </summary>
					/// <param name="pList">参数健值对</param>
					/// <returns></returns>
					IDataMetaInfo( EarthView::World::Core::CNameValuePairList *pList );
					//--
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					IDataMetaInfo();
				private:
					C_DISABLE_COPY(IDataMetaInfo);
				};
			}
		}
	}
}

#endif
