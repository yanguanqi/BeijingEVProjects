#ifndef EARTHVIEW_WORLD_IRASTERRENDER_H
#define EARTHVIEW_WORLD_IRASTERRENDER_H

#include "spatialinterface/ispatialdisplay.h"
#include "spatialinterface/irasterblock.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				enum EVRasterRendererType
				{
					EV_UnknownRenderer,
					EV_UniqueValueRenderer,
					EV_ClassificationRenderer,
					EV_StretchRenderer,
					EV_RGBRenderer,
					EV_ColorMapRenderer
				};

				class EV_INTERFACE_DLL IRasterRenderer: public EarthView::World::Core::CAllocatedObject
				{
				public:
					virtual ~IRasterRenderer();

					virtual EVRasterRendererType getRendererType() const;

					virtual ev_bool draw(EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay,
						EarthView::World::Spatial2D::Raster::IRasterBlock* pRaster,
						ev_int32 leftUpX, ev_int32 leftUpY, ev_int32 width, ev_int32 height);

					virtual ev_int32 getBandCount() const;
					virtual ev_int32 getBandIndex(ev_int32 channel) const;

					virtual IRasterRenderer* clone() const;
					virtual ev_void toStream(EarthView::World::Core::CDataStream &stream ) const;
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

					virtual ev_bool equal(const EarthView::World::Spatial2D::Raster::IRasterRenderer* other);
				ev_internal:
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
				ev_private:
					IRasterRenderer( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					IRasterRenderer();
				private:
					IRasterRenderer(const IRasterRenderer&);
					IRasterRenderer& operator= (const IRasterRenderer&);
				};
			}
		}
	}
}

#endif