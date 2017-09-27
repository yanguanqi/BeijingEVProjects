#ifndef EARTHVIEW_WORLD_IRASTERBLOCK_H
#define EARTHVIEW_WORLD_IRASTERBLOCK_H

#include "spatialinterface/config.h"
#include "core/memoryallocatedobject.h"
#include "core/xml.h"
#include "spatialinterface/irasterdataset.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				class EV_INTERFACE_DLL IRasterBlock: public EarthView::World::Core::CAllocatedObject
				{
				public:
					virtual ~IRasterBlock();

					virtual ev_int32 getWidth() const;
					virtual ev_int32 getHeight() const;
					virtual ev_int32 getBandCount() const;
					virtual EarthView::World::Spatial::GeoDataset::EVRasterDataType getDataType() const;
					virtual ev_real64 getPixelValue(ev_int32 bandIndex, ev_int32 offset) const;
					virtual ev_void setPixelValue(ev_int32 bandIndex, ev_int32 offset, ev_real64 value);
					virtual ev_real64 getNodataValue() const;
					virtual ev_void setNodataValue(ev_real64 nodataValue);
					virtual ev_byte* getDataRef(ev_int32 bandIndex) const;
					virtual IRasterBlock* clone() const;
					virtual ev_void setDefaultValue(ev_real64 value);
					virtual ev_void createValidMask();
					virtual ev_byte* getValidMaskDataRef() const;
					virtual ev_void toStream(EarthView::World::Core::CDataStream &stream ) const;
					virtual ev_void fromXmlElement(EarthView::World::Core::CXmlElement& element);
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
ev_internal:
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );	
				protected:
					IRasterBlock();
ev_private:
					IRasterBlock(EarthView::World::Core::CNameValuePairList* pList);
				private:
					IRasterBlock(const IRasterBlock&);
					IRasterBlock& operator= (const IRasterBlock&);
				};
			}
		}
	}
}

#endif