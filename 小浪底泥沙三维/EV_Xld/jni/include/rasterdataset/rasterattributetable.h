#ifndef EARTHVIEW_WORLD_RASTERATTRIBUTETABLE_H
#define EARTHVIEW_WORLD_RASTERATTRIBUTETABLE_H

#include "rasterdatasetenume.h"
#include "core/variant.h"
#include "spatialinterface/ifield.h"
#include "spatialinterface/ifields.h"
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
				class EV_RASTER_DLL CRasterAttributeTable: public EarthView::World::Core::CAllocatedObject
				{
				public:
					CRasterAttributeTable();
					virtual ~CRasterAttributeTable();

					virtual ev_uint32 getRowCount()const;
					virtual ev_uint32 getFieldCount()const;
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFields()const;
					virtual const EarthView::World::Spatial::GeoDataset::IField* getField(ev_uint32 index)const;
					virtual const EarthView::World::Spatial::GeoDataset::IField* getValueField()const;
					virtual ev_uint32 findField(EVString& fieldName)const;
					virtual ev_void addField(const EarthView::World::Spatial::GeoDataset::IField* pField);
					virtual ev_void removeField(ev_uint32 index);
					virtual ev_void removeAllFields();
					virtual ev_void addRow(EarthView::World::Core::CVariantArray& varArray);
					virtual ev_void removeRow(ev_uint32 row);
					virtual ev_void removeAllRows();
					virtual ev_bool getElement(ev_uint32 row, ev_uint32 fieldIndex, EarthView::World::Core::CVariant& var)const;
					virtual ev_bool setElement(ev_uint32 row, ev_uint32 fieldIndex, const EarthView::World::Core::CVariant& var);
					virtual EarthView::World::Core::CXmlElement toXmlElement() const; 
					virtual ev_void fromXmlElement(_in EarthView::World::Core::CXmlElement& element);
ev_private:
					CRasterAttributeTable(EarthView::World::Core::CNameValuePairList* pList);
				private:
					CRasterAttributeTable(const CRasterAttributeTable&);
					CRasterAttributeTable& operator= (const CRasterAttributeTable&);
				protected:
					vector<EarthView::World::Core::CVariantArray*> m_vVariantArray;
					ev_uint32 m_rowCount;
					EarthView::World::Spatial::GeoDataset::IFields* m_pFields;
				};
			}
		}
	}
}

#endif