#ifndef EARTHVIEW_WORLD_COLORTABLE_H
#define EARTHVIEW_WORLD_COLORTABLE_H

#include "color/color.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class EV_COLOR_DLL CColorTable: public EarthView::World::Core::CAllocatedObject
				{
				public:
					CColorTable();
					CColorTable(ev_uint32 colorCount);
					virtual ~CColorTable();

					virtual ev_uint32 getColorCount() const;
					virtual ev_void setColorCount(ev_uint32 colorCount);
					virtual const EarthView::World::Spatial::Display::IColor* getColor(ev_uint32 index) const;
					virtual ev_void setColor(ev_uint32 index, const EarthView::World::Spatial::Display::IColor* pColor);
					virtual CColorTable* clone() const;
					virtual ev_void fromXmlElement(EarthView::World::Core::CXmlElement& element);
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
					
					virtual ev_bool equal(const EarthView::World::Spatial::Display::CColorTable* other);
					virtual ev_void toStream(EarthView::World::Core::CDataStream &stream ) const;
ev_internal:
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
ev_private:
					CColorTable(EarthView::World::Core::CNameValuePairList* pList);
				private:
					CColorTable(const CColorTable&);
					CColorTable& operator= (const CColorTable&);
				protected:
					EarthView::World::Spatial::Display::IColor** m_ppColor;
					ev_uint32 m_colorCount;
				};
			}
		}
	}
}

#endif