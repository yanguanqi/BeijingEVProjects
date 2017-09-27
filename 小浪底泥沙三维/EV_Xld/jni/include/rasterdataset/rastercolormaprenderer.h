#ifndef EARTHVIEW_WORLD_RASTERCOLORMAPRENDERER_H
#define EARTHVIEW_WORLD_RASTERCOLORMAPRENDERER_H

#include "rasterdatasetenume.h"
#include "spatialinterface/irasterrenderer.h"
#include "color/colortable.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				class EV_RASTER_DLL CRasterColorMapRenderer: public IRasterRenderer
				{
				public:
					CRasterColorMapRenderer();
					virtual ~CRasterColorMapRenderer();

					virtual EVRasterRendererType getRendererType() const;
					virtual ev_bool draw(EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay,
						EarthView::World::Spatial2D::Raster::IRasterBlock* pRaster,
						ev_int32 leftUpX, ev_int32 leftUpY, ev_int32 width, ev_int32 height);
					virtual ev_int32 getBandCount() const;
					virtual ev_int32 getBandIndex(ev_int32 channel) const;
					virtual IRasterRenderer* clone() const;
					/// <summary>
					/// 从xml中恢复图层的配置
					/// </summary>
					/// <param name="element">xml要素</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 把图层的信息导出到xml中
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml要素</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;

					EVString getCaption()const;
					ev_void setCaption(EVString& caption);
					ev_int32 getBandIndex() const;
					ev_void setBandIndex(ev_int32 index);
					const EarthView::World::Spatial::Display::CColorTable* getColorTable() const;
					ev_void setColorTable(const EarthView::World::Spatial::Display::CColorTable* pColorTable);

					virtual ev_bool equal(const EarthView::World::Spatial2D::Raster::IRasterRenderer* other);
					virtual ev_void toStream(EarthView::World::Core::CDataStream &stream ) const;
ev_internal:
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
ev_private:
					CRasterColorMapRenderer(EarthView::World::Core::CNameValuePairList* pList);
				private:
					CRasterColorMapRenderer(const CRasterColorMapRenderer&);
					CRasterColorMapRenderer& operator= (const CRasterColorMapRenderer&);
				private:
					EVString m_caption;
					ev_uint32 m_bandIndex;
					EarthView::World::Spatial::Display::CColorTable* m_pColorTable;
				};
			}
		}
	}
}

#endif