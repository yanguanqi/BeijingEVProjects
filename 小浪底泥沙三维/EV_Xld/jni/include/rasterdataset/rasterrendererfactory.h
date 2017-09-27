#ifndef EARTHVIEW_WORLD_RASTERRENDERERFACTORY_H
#define EARTHVIEW_WORLD_RASTERRENDERERFACTORY_H

#include "rasterdatasetenume.h"
#include "spatialinterface/irasterrenderer.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				class EV_RASTER_DLL CRasterRendererFactory: public EarthView::World::Core::CAllocatedObject
				{
				public:
					~CRasterRendererFactory();

					static IRasterRenderer* createRendererFromStream(EarthView::World::Core::CDataStream& stream);

					static IRasterRenderer* createRendererFromXmlElement(EarthView::World::Core::CXmlElement& element);

					static ev_void destroyRenderer(IRasterRenderer* pRenderer);

				private:
					CRasterRendererFactory();
ev_private:
					CRasterRendererFactory(EarthView::World::Core::CNameValuePairList* pList);
				private:
					CRasterRendererFactory(const CRasterRendererFactory&);
					CRasterRendererFactory& operator= (const CRasterRendererFactory&);
				};
			}
		}
	}
}

#endif