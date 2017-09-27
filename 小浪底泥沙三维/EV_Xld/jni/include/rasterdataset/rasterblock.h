#ifndef EARTHVIEW_WORLD_RASTERBLOCK_H
#define EARTHVIEW_WORLD_RASTERBLOCK_H

#include "rasterdatasetenume.h"
#include "spatialinterface/irasterdataset.h"
#include "spatialinterface/ispatialreference.h"
#include "spatialinterface/ienvelope.h"
#include "spatialinterface/irasterblock.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				class CAffineTransform;
				class EV_RASTER_DLL CRasterBlock: public IRasterBlock
				{
				public:
					CRasterBlock(ev_int32 width, ev_int32 height, ev_int32 nBands, 
						        EarthView::World::Spatial::GeoDataset::EVRasterDataType dType);
					virtual ~CRasterBlock();

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

					ev_real64 getPixelHeight() const;
					ev_real64 getPixelWidth() const;
					const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;
					ev_void setSpatialReference(const EarthView::World::Spatial::Geometry::ISpatialReference* pSpatialRef);
					const EarthView::World::Spatial::Geometry::IEnvelope* getGeoEnvelope() const;
					const CAffineTransform* getGeoTransform() const;
					ev_void setGeoTransform(const CAffineTransform& tranform);
					EarthView::World::Spatial::GeoDataset::IRasterDataset* getDataset() const;
					ev_void setDataset(EarthView::World::Spatial::GeoDataset::IRasterDataset* pDataset);
					ev_int32 getRasterBandIndex(ev_int32 index) const;
					ev_void setRasterBandIndex(ev_int32 index, ev_int32 bandIndex);
					ev_void setRasterResampleType(ev_int32 resampleIndex);
					ev_int32 getRasterResampleType() const;
				private:
					ev_int32 getDataTypeSize(EarthView::World::Spatial::GeoDataset::EVRasterDataType dataType)const;
				protected:
					CRasterBlock();
ev_private:
					CRasterBlock(EarthView::World::Core::CNameValuePairList* pList);
				private:
					CRasterBlock(const CRasterBlock&);
					CRasterBlock& operator= (const CRasterBlock&);
				private:
					ev_int32 m_width;
					ev_int32 m_height;
					ev_int32 m_bandCount;
					EarthView::World::Spatial::GeoDataset::EVRasterDataType m_dataType;
					ev_real64 m_nodataValue;
					ev_byte* m_pData;
					ev_byte* m_pValidMask;
					EarthView::World::Spatial::Geometry::ISpatialReference* m_pSpatialRef;
					EarthView::World::Spatial::Geometry::IEnvelope* m_pGeoEnv;
					CAffineTransform* m_pGeoTransform;
					EarthView::World::Spatial::GeoDataset::IRasterDataset* m_pDataset;
					ev_int32* m_pBandIndex;
					ev_int32 m_pResampleType; ////重采样类型
				};
			}
		}
	}
}

#endif