#ifndef EARTHVIEW_WORLD_ITILEMETAINFO_H
#define EARTHVIEW_WORLD_ITILEMETAINFO_H

#include "tileutilityexports.h"
#include "core/memoryallocatedobject.h"
#include "itiledataset.h"
#include "spatialinterface/ienvelope.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			class EV_TILEUTILITY_DLL ITileMetaInfo: public EarthView::World::Core::CAllocatedObject
			{
			public:
				virtual ~ITileMetaInfo();

				/// <summary>
				/// 获取数据集类型
				/// </summary>
				/// <returns>数据集类型</returns>
				virtual EarthView::World::Spatial::EVTileDatasetType getDatasetType() const;
				/// <summary>
				/// 获取数据集的名称
				/// </summary>
				/// <returns>数据集的名称</returns>
				virtual EVString getName() const;
				/// <summary>
				/// 获取数据集的地理范围
				/// </summary>
				/// <returns>内部对象引用，无需释放</returns>
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
				/// <summary>
				/// 获取数据集的坐标系EPSG编号
				/// </summary>
				/// <returns></returns>
				virtual ev_int32 getSRID() const;
				/// <summary>
				/// 获取数据集中所含瓦片的最小级别
				/// </summary>
				/// <returns></returns>
				virtual ev_int32 getMinLevel() const;
				/// <summary>
				/// 获取数据集所含瓦片的最高级别
				/// </summary>
				/// <returns></returns>
				virtual ev_int32 getMaxLevel() const;
				/// <summary>
				/// 获取瓦片数据类型
				/// </summary>
				/// <returns></returns>
				virtual EVTileRasterDataType getDataType() const;
ev_private:
				ITileMetaInfo(EarthView::World::Core::CNameValuePairList* pList);
			protected:
				ITileMetaInfo();
			private:
				ITileMetaInfo(const ITileMetaInfo&);
				ITileMetaInfo& operator= (const ITileMetaInfo&);
			};
		}
	}
}

#endif