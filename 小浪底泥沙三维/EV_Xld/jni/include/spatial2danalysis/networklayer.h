#ifndef _NETWORK_ANALYSIS_LAYER_H_H_
#define _NETWORK_ANALYSIS_LAYER_H_H_

#include "spatialinterface/ivectorlayer.h"
#include "spatialinterface/istatisticstheme.h"
#include "spatialinterface/ilabelproperty.h"
#include "spatialinterface/iqueryfilter.h"
#include "spatialinterface/ilayerselection.h"

#include "spatial2datlas/spatial2datlasconfig.h"

// using namespace EarthView::World::Spatial::Atlas;

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Analyst{

class CDataLayer;

class EV_2DANALYSIS_DLL CNetworkLayer : public IVectorLayer
{
public:	
	CNetworkLayer();
	virtual ~CNetworkLayer();

public:
	virtual EVLayerType getType() const;

	virtual String getName() const;
	virtual ev_void setName( const String &name );

	virtual String getDescription() const;
	virtual ev_void setDescription(String value);

	virtual ev_bool canEdit() const;
	virtual ev_bool isEditing() const;
	virtual ev_void setEditing(ev_bool editing);

	virtual ev_bool isVisible() const;
	virtual ev_void setVisible(ev_bool visible);

	virtual ev_bool isValid() const;
					
	virtual ev_bool isSelected() const;
	virtual ev_void setSelected(ev_bool selected);

	virtual ev_bool ignoreScale() const;
	virtual ev_void setIgnoreScale( _in ev_bool bIgnore );

	virtual ev_real64 getDispalyMaxScale() const;
	virtual ev_void setDisplayMaxScale(ev_real64 scale);
					
	virtual ev_real64 getDisplayMinScale() const;
	virtual ev_void setDisplayMinScale(ev_real64 scale);

	virtual ISpatialReference *getSpatialReference() const;
	virtual ev_void setSpatialReference( _in ISpatialReference *sr );

	virtual const IEnvelope * getExtent() const;                    

	virtual ev_bool draw(ISpatialDisplay* display,EVVectorLayerRendererType type);

	virtual ILayer * clone() const;
	virtual ev_void toStream( _out CDataStream &stream ) const;
	virtual String toXML() const;
	virtual ev_void fromXmlElement( _in CXmlElement& element);
	virtual CXmlElement toXmlElement() const;

	//IVectorLayer
	virtual IDataset* getDataset();
	virtual ev_void setDateset( IDataset * dataset );

	virtual String getDisplayField() const;
	virtual ev_void setDisplayField(String fieldName);

	virtual ITheme * getTheme() const;
	virtual ev_void setTheme( _in const ITheme *theme );

	virtual ev_bool isShowTip() const;
	virtual ev_void setShowTip(ev_bool show) ;

	virtual ev_void select( IQueryFilter *filter, EVSelectionResultType type );
	virtual ev_void clearSelection();
	virtual ILayerSelection * getLayerSelection();

ev_internal:
	virtual ev_void fromStream( CDataStream& stream );
ev_private:
	CNetworkLayer( CNameValuePairList *pList );
protected:
	C_DISABLE_COPY( CNetworkLayer );
protected:
	String				m_Name;
	String				m_description;
	ev_bool				m_isVisible;
	ev_bool				m_isValid;
	ev_bool				m_isSelected;
	ev_bool				m_ignoreScale;
	ev_real64			m_maxScale;
	ev_real64			m_minScale;
	ISpatialReference	*m_sr;

	IDataset			*m_dataset;
	String				m_displayField;
	ev_bool				m_isShowTip;
	ITheme				*m_pTheme;

	CDataLayer			*m_junctionLayer;
	CDataLayer			*m_SourceLayer;
};

}}}} // End of Namespace





#endif //_NETWORKLAYER_H_H_