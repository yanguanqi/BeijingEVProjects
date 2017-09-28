#ifndef IVECTORFILEANNOLAYER_H
#define IVECTORFILEANNOLAYER_H
#include "vectorfileparser/vectorfileparser_config.h"
#include "spatialinterface/ivectorlayer.h"
namespace EarthView{namespace World{namespace Spatial{namespace Display{
	class ILabelProperty;
}}}}
namespace EarthView{namespace World{namespace Spatial{namespace VectorFileParser{
class EV_VECTORFILEPARSER_LIB IVectorFileAnnoLayer
						: public EarthView::World::Spatial::Atlas::IVectorLayer
{
public:
	IVectorFileAnnoLayer();
	~IVectorFileAnnoLayer();

	EarthView::World::Spatial::Atlas::EVLayerType getType() const;
	EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
	virtual ev_void setDataset( EarthView::World::Spatial::GeoDataset::IDataset * ref_dataset );

	ev_void select( EarthView::World::Spatial::GeoDataset::IQueryFilter *filter,
		EarthView::World::Spatial::Atlas::EVSelectionResultType type );
	ev_void clearSelection();
	ev_void setLayerSelection(EarthView::World::Spatial::Atlas::ILayerSelection* selection);
	EarthView::World::Spatial::Atlas::ILayerSelection * getLayerSelection();
	EVString getName() const;
	ev_void setName( const EVString &name );
	EVString getDescription() const;
	ev_void setDescription(const EVString& value);
	ev_bool canEdit() const;
	ev_void setCanEdit(ev_bool can);
	ev_bool isEditing() const;
	ev_void setEditing(ev_bool editing);
	ev_bool isVisible() const;
	ev_void setVisible(ev_bool visible);
	ev_bool isValid() const;
	ev_bool isSelectable() const;
	ev_void setSelectable(ev_bool selectable);
	ev_bool ignoreScale() const;
	ev_void setIgnoreScale( _in ev_bool bIgnore );
	ev_real64 getDisplayMaxScale() const;
	ev_void setDisplayMaxScale(ev_real64 scale);
	ev_real64 getDisplayMinScale() const;
	ev_void setDisplayMinScale(ev_real64 scale);
	EarthView::World::Spatial::Geometry::ISpatialReference *getSpatialReference() const;
	ev_void setSpatialReference( _in EarthView::World::Spatial::Geometry::ISpatialReference *ref_sr );
	ev_void setTransparentValue(ev_uint8 transparent);
	ev_uint8 getTransparentValue() const;
	const EarthView::World::Spatial::Geometry::IEnvelope * getExtent() const;
	ev_bool draw(EarthView::World::Spatial::Display::ISpatialDisplay* display,
		EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type);
	EarthView::World::Spatial::Atlas::ILayer * clone() const;
	ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;
	EVString toXML() const;
	ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
	EarthView::World::Core::CXmlElement toXmlElement() const;
	EVString getDisplayField() const;
	ev_void setDisplayField(const EVString& fieldName);
	ev_bool isShowTip() const;
	ev_void setShowTip(ev_bool show) ;
	EarthView::World::Spatial::Display::ILabelProperty * getLayerLabelProperty() const;
	ev_void setDisplayFilter(const EVString & filter);
	EVString getDisplayFilter() const;
ev_private:
	IVectorFileAnnoLayer(EarthView::World::Core::CNameValuePairList* pList);
protected:
	C_DISABLE_COPY(IVectorFileAnnoLayer);
	ev_void initQueryFilter( EarthView::World::Spatial::GeoDataset::IQueryFilter* filter,
		EarthView::World::Spatial::Display::ISpatialDisplay* display );
private:
	EVString m_szLayerName;
	EVString m_szDescription;
	ev_bool m_bIsEditing;
	ev_bool m_bIsVisible;
	ev_bool m_bIsValid;
	ev_bool m_bIsSelectable;
	ev_bool m_bIgnoreScale;
	ev_real64 m_dDisplayMinScale;
	ev_real64 m_dDisplayMaxScale;
	EarthView::World::Spatial::Geometry::ISpatialReference* m_pSpatialReference;
	EarthView::World::Spatial::GeoDataset::IDataset* m_pData;
	EVString m_szDisplayFieldName;
	bool m_bShowTip;
	EarthView::World::Spatial::Atlas::ILayerSelection* m_pSelectionSet;
	mutable EarthView::World::Core::CReadWriteLock mSelectionLock;
	EarthView::World::Spatial::Display::ILabelProperty* m_pLabelLayerProperty;
	EVString m_szFilter;
	ev_uint8 m_nTransparent;
	EarthView::World::Spatial::Geometry::IEnvelope* mpSpatialReferenceEnve;
};
}}}}
#endif