#ifndef EARTHVIEW_WORLD_SPATIAL_DRAWWMSVECTORTHEME_H
#define EARTHVIEW_WORLD_SPATIAL_DRAWWMSVECTORTHEME_H
#include "spatial2dserver/config.h"
#include "spatial2dserver/drawserverlayertheme.h"
#include "tileutility/tilepathenums.h"
#include "spatialinterface/ipaintdevice.h"
#include "spatialdisplay/spatialtransformer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				/// <summary>
				/// ev wms地图渲染器基类
				/// </summary>
				class EV_2DWMS_DLL CDrawWMSVectorTheme : public EarthView::World::Spatial::Display::CDrawServerLayerTheme
				{
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CDrawWMSVectorTheme();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>		
					~CDrawWMSVectorTheme();
					/// <summary>
					/// 渲染
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool draw( EarthView::World::Spatial::GeoDataset::IDataset* pDataset);
					/// <summary>
					/// 渲染（仅使用缓存的情况）
					/// </summary>
					/// <param name="pGeometry">数据集名字</param>
					/// <returns></returns>
					/*virtual ev_bool draw( EVString datasetName, EVString datasourceName,
						EarthView::World::Spatial::Geometry::IEnvelope* pEnv,
						EarthView::World::Spatial::Geometry::ISpatialReference* pSRS);*/

					//virtual ev_void drawTile( EarthView::World::Core::CWorkQueue::RequestPara* req );
ev_private:
					CDrawWMSVectorTheme( EarthView::World::Core::CNameValuePairList *pList );
				private:
					EVString makeCacheName( const EVString& srcName );
					EarthView::World::Core::MemoryDataStreamPtr getSymbolStream();					
					ev_bool equalSymbolStream(EarthView::World::Core::MemoryDataStreamPtr stream);

				private:
					EVString m_DatasetName;
					EVString m_DatasourceName;
					EVString m_CacheName;
					EVString m_Filter;
					EVString m_RequestStyle;
					EVString m_RequestFormat;
					EarthView::World::Spatial::EVTileModeType m_ModeType;
					ev_int32 m_TileWidth;
					ev_int32 m_TileHeight;
					EarthView::World::Core::CReadWriteLock m_RenderLock;
					EarthView::World::Spatial::Display::CSpatialTransformer m_SpatialTransformer;
				};
			}
		}
	}
}

#endif