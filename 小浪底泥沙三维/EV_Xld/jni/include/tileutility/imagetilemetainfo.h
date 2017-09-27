#ifndef EARTHVIEW_WORLD_IMAGETILEMETAINFO_H
#define EARTHVIEW_WORLD_IMAGETILEMETAINFO_H

#include "itilemetainfo.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			class EV_TILEUTILITY_DLL CImageTileMetaInfo: public ITileMetaInfo
			{
			public:
				CImageTileMetaInfo();
				CImageTileMetaInfo(ev_int32 epsg, const EarthView::World::Spatial::Geometry::IEnvelope* pGeoEnv, 
						         ev_int32 minLevel, ev_int32 maxLevel);
				virtual ~CImageTileMetaInfo();

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
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef()const;
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
				CImageTileMetaInfo(EarthView::World::Core::CNameValuePairList* pList);
			private:
				CImageTileMetaInfo(const CImageTileMetaInfo&);
				CImageTileMetaInfo& operator= (const CImageTileMetaInfo&);
			private:
				EVString m_dsName;
			    EarthView::World::Spatial::Geometry::IEnvelope* m_pGeoEnv;
				ev_int32 m_SRID;
				ev_int32 m_minLevel;
				ev_int32 m_maxLevel;
				EVTileRasterDataType m_dataType;
			};
		}
	}
}

#endif