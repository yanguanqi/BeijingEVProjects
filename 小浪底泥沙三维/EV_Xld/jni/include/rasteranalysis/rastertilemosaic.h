#ifndef EARTHVIEW_WORLD_RASTERTILEMOSAIC_H
#define EARTHVIEW_WORLD_RASTERTILEMOSAIC_H

#include "rasteranalysisconfig.h"
#include "tileutility/itiledataset.h"
#include "spatialinterface/irasterdataset.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Analyst
			{
				class EV_RASTERANALYSIS_DLL CRasterTileMosaic: public EarthView::World::Core::CAllocatedObject
				{
				public:
					class EV_RASTERANALYSIS_DLL CTileMosaicListener : public EarthView::World::Core::CAllocatedObject
					{
					public:
						CTileMosaicListener(){}
						virtual ~CTileMosaicListener(){}
					ev_private:
						CTileMosaicListener(EarthView::World::Core::CNameValuePairList* pList){}
					public:
						virtual void progressChanged(ev_uint8 percent){}
						virtual void finished(){}

					};
				public:
					CRasterTileMosaic();
					virtual ~CRasterTileMosaic();

					ev_bool mosaic(EarthView::World::Spatial::ITileDataset* pTileDataset,
						EarthView::World::Spatial::GeoDataset::IRasterDataset* pDstDataset,CTileMosaicListener* pListener);
ev_private:
					CRasterTileMosaic(EarthView::World::Core::CNameValuePairList* pList);
				private:
					CRasterTileMosaic(const CRasterTileMosaic&);
					CRasterTileMosaic& operator= (const CRasterTileMosaic&);
				};
			}
		}
	}
}

#endif