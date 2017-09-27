#ifndef EARTHVIEW_WORLD_RASTERRGBRENDERER_H
#define EARTHVIEW_WORLD_RASTERRGBRENDERER_H

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
				class EV_RASTER_DLL CRasterRGBRenderer: public IRasterRenderer
				{
				public:
					CRasterRGBRenderer();
					virtual ~CRasterRGBRenderer();

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
					ev_int32 getRedBandIndex() const;
					ev_void setRedBandIndex(ev_int32 index);
					ev_int32 getGreenBandIndex() const;
					ev_void setGreenBandIndex(ev_int32 index);
					ev_int32 getBlueBandIndex() const;
					ev_void setBlueBandIndex(ev_int32 index);
					ev_void setBandIndex(ev_int32 channel, ev_int32 bandIndex);
					ev_real64 getMinValue(ev_int32 channel) const;
					ev_void setMinValue(ev_int32 channel, ev_real64 dfMinValue);
					ev_real64 getMaxValue(ev_int32 channel) const;
					ev_void setMaxValue(ev_int32 channel, ev_real64 dfMaxValue);

					virtual ev_bool equal(const EarthView::World::Spatial2D::Raster::IRasterRenderer* other);
					virtual ev_void toStream(EarthView::World::Core::CDataStream &stream ) const;
ev_internal:
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
ev_private:
					CRasterRGBRenderer(EarthView::World::Core::CNameValuePairList* pList);
				private:
					CRasterRGBRenderer(const CRasterRGBRenderer&);
					CRasterRGBRenderer& operator= (const CRasterRGBRenderer&);
				private:
					EVString m_caption;
					//红绿蓝波段索引
					ev_uint32 m_pBandIndex[3];
					ev_real64 m_pdfMinValue[3];
					ev_real64 m_pdfMaxValue[3];
				};
			}
		}
	}
}

#endif