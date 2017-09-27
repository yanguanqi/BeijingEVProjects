#ifndef EARTHVIEW_WORLD_RASTERRAMPSTRETCHRENDERER_H
#define EARTHVIEW_WORLD_RASTERRAMPSTRETCHRENDERER_H

#include "rasterdatasetenume.h"
#include "spatialinterface/irasterrenderer.h"
#include "color/colorramp.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				class EV_RASTER_DLL CRasterStretchRenderer: public IRasterRenderer
				{
				public:
					CRasterStretchRenderer();
					virtual ~CRasterStretchRenderer();

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

					EVString getCaption() const;
					ev_void setCaption(EVString& caption);
					ev_int32 getBandIndex() const;
					ev_void setBandIndex(ev_int32 index);
					const EarthView::World::Spatial::Display::CColorRamp* getColorRamp() const;
					ev_void setColorRamp(const EarthView::World::Spatial::Display::CColorRamp* pColorRamp);
					ev_real64 getMinValue() const;
					ev_void setMinValue(ev_real64 dfMinValue);
					ev_real64 getMaxValue() const;
					ev_void setMaxValue(ev_real64 dfMaxValue);
					
					ev_bool getDemRender()const;
					ev_void setDemRender(int bDEMRender);
					ev_uint32 getAzimuth() const;
					ev_void setAzimuth(ev_uint32 azimuth);
					ev_uint32 getAltitude() const;
					ev_void setAltitude(ev_uint32 altitude);
					ev_real32 getZfactor()const;
					ev_void setZfactor( ev_real32 z);

					virtual ev_bool equal(const EarthView::World::Spatial2D::Raster::IRasterRenderer* other);
					virtual ev_void toStream(EarthView::World::Core::CDataStream &stream ) const;
ev_internal:
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
ev_private:
					CRasterStretchRenderer(EarthView::World::Core::CNameValuePairList* pList);
				private:
					CRasterStretchRenderer(const CRasterStretchRenderer&);
					CRasterStretchRenderer& operator= (const CRasterStretchRenderer&);
				private:
					EVString m_caption;
					ev_uint32 m_bandIndex;
					EarthView::World::Spatial::Display::CColorRamp* m_pColorRamp;
					ev_real64 m_dfMinValue;
					ev_real64 m_dfMaxValue;
					
					ev_bool   m_bDEMRender;        //DEM晕渲标记
					ev_uint32 m_azimuth;           //光源方位角
					ev_uint32 m_altitude;          //光源高度角
					ev_real32 m_z;                 //z因子
				};
			}
		}
	}
}

#endif