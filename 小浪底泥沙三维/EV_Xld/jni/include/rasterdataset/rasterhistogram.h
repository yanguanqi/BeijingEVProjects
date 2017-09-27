#ifndef EARTHVIEW_WORLD_RASTERHISTOGRAM_H
#define EARTHVIEW_WORLD_RASTERHISTOGRAM_H

#include "rasterdatasetenume.h"
#include "core/datastream.h"
#include "core/xml.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				class EV_RASTER_DLL CRasterHistogram: public EarthView::World::Core::CAllocatedObject
				{
				public:
					CRasterHistogram();
					virtual ~CRasterHistogram();

					virtual ev_uint32 getFrequence(ev_byte grayIndex) const;
					virtual ev_void setFrequence(ev_byte grayIndex, ev_uint32 frequence);
					virtual ev_byte getGrayIndex(ev_real64 value) const;
 					ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;
				    ev_void fromStream( EarthView::World::Core::CDataStream& stream );
					EarthView::World::Core::CXmlElement toXmlElement() const; 
					ev_void fromXmlElement(_in EarthView::World::Core::CXmlElement& element);
				   
ev_private:
					CRasterHistogram(EarthView::World::Core::CNameValuePairList* pList);
				private:
					CRasterHistogram(const CRasterHistogram&);
					CRasterHistogram& operator= (const CRasterHistogram&);

					ev_void setMaxValue(ev_real64 value);
					ev_void setMinValue(ev_real64 value);
				protected:
					ev_int32 m_pFrequence[256];
					ev_real64 m_maxValue;
					ev_real64 m_minValue;

					friend class CRasterBand;
					friend class CDBRasterBand;
				};
			}
		}
	}
}

#endif