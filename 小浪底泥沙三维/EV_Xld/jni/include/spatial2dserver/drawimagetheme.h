#ifndef EARTHVIEW_WORLD_SPATIAL_DRAEIMAGETHEME_H
#define EARTHVIEW_WORLD_SPATIAL_DRAEIMAGETHEME_H
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
			class ImageTileCacheAccessor;
			namespace Display
			{
				/// <summary>
				/// wmts影像渲染器基类
				/// </summary>
				class EV_2DWMS_DLL CDrawImageTheme : public EarthView::World::Spatial::Display::CDrawServerLayerTheme
				{
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CDrawImageTheme();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>		
					~CDrawImageTheme();
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
					virtual ev_bool draw( EVString datasetName, EVString datasourceName,
						EarthView::World::Spatial::Geometry::IEnvelope* pEnv,
						EarthView::World::Spatial::Geometry::ISpatialReference* pSRS);

					virtual ev_void drawTile( EarthView::World::Core::CWorkQueue::RequestPara* req );

					virtual ev_bool makeMapping(EarthView::World::Spatial::GeoDataset::IDataset* pDataset,
						EarthView::World::Spatial::Display::ISpatialDisplay* display,
						EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type,
						EarthView::World::Spatial::Theme::ITheme* ref_pTheme);
					virtual ev_bool makeMapping(EVString datasetName, EVString datasourceName,
						EarthView::World::Spatial::Geometry::IEnvelope* pEnv,
						EarthView::World::Spatial::Geometry::ISpatialReference* pSRS,
						EarthView::World::Spatial::Display::ISpatialDisplay* display,
						EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type,
						EarthView::World::Spatial::Theme::ITheme* ref_pTheme);
				private:
					virtual ev_void drawTile( ImageTileCacheAccessor* itaccessor, ev_int32 level,ev_int32 row, ev_int32 col,
						ev_real64 x,ev_real64 y, ev_real64 space,
						EarthView::World::Spatial::Display::ISpatialDisplay* display,
						EarthView::World::Spatial::EVTileModeType tileModeType,
						EVString & cacheName);
				private:
					EVString makeCacheName( const EVString& srcName );
					EVString m_CacheName;
					EVString m_Filter;
					EarthView::World::Spatial::EVTileModeType m_ModeType;
					EarthView::World::Spatial::EVSSCFileFormat m_FileFormat;
					EarthView::World::Display::IPaintDevice * m_pDevice;
					//	EarthView::World::Spatial::Theme::CEVWMTSVectorThemeTheme m_VectorTheme;
					ev_bool m_bIsChart;
					EarthView::World::Core::CReadWriteLock m_RenderLock;
				ev_private:
					CDrawImageTheme( EarthView::World::Core::CNameValuePairList *pList );
				};
			}
		}
	}
}

#endif