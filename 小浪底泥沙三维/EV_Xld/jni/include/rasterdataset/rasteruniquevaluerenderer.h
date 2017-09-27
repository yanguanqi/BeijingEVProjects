#ifndef EARTHVIEW_WORLD_RASTERUNIQUEVALUERENDERER_H
#define EARTHVIEW_WORLD_RASTERUNIQUEVALUERENDERER_H

#include "rasterdatasetenume.h"
#include "spatialinterface/irasterrenderer.h"
#include "spatialinterface/icolor.h"
#include "core/variant.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				class EV_RASTER_DLL CRasterUniqueValueRenderer: public IRasterRenderer
				{
				public:
					CRasterUniqueValueRenderer();
					virtual ~CRasterUniqueValueRenderer();

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
					EVString getSubCaption(ev_uint32 index)const;
					ev_void setSubCaption(ev_uint32 index, EVString& subCaption);
					ev_int32 getBandIndex() const;
					ev_void setBandIndex(ev_int32 index);
					EVString getFieldName()const;
					ev_void setFieldName(EVString& fieldName);
					EVString getDefaultCaption() const;
					ev_void setDefaultCaption(EVString defaultCaption);
					const EarthView::World::Spatial::Display::IColor* getDefaultColor() const;
					ev_void setDefaultColor(const EarthView::World::Spatial::Display::IColor& color);
					const EarthView::World::Spatial::Display::IColor* getColor(ev_uint32 index)const;
					const EarthView::World::Spatial::Display::IColor* getColor(const EarthView::World::Core::CVariant& value)const;
					ev_void setColor(ev_uint32 index, const EarthView::World::Spatial::Display::IColor& color);
					ev_void addValue(const EarthView::World::Core::CVariant& value, const EarthView::World::Spatial::Display::IColor& color);
					ev_void removeValue(ev_uint32 index);
					ev_void removeAll();
					ev_uint32 getValueCount()const;
					EarthView::World::Core::CVariant getValue(ev_uint32 index)const;

					virtual ev_bool equal(const EarthView::World::Spatial2D::Raster::IRasterRenderer* other);
					virtual ev_void toStream(EarthView::World::Core::CDataStream &stream ) const;
ev_internal:
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
ev_private:
					CRasterUniqueValueRenderer(EarthView::World::Core::CNameValuePairList* pList);
				private:
					CRasterUniqueValueRenderer(const CRasterUniqueValueRenderer&);
					CRasterUniqueValueRenderer& operator= (const CRasterUniqueValueRenderer&);
				private:
					EVString m_caption;
					vector<EVString> m_vSubCaption;
					EVString m_fieldName;
					ev_uint32 m_bandIndex;
					vector<EarthView::World::Spatial::Display::IColor*> m_vColor;
					EarthView::World::Core::CVariantArray m_vValue;
					EVString m_defaultCaption;
					EarthView::World::Spatial::Display::IColor* m_pDefaultColor;
				};
			}
		}
	}
}

#endif