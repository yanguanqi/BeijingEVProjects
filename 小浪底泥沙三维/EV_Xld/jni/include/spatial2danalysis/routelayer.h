#ifndef __ROUTE_ANALYSIS__LAYER_H_H_
#define __ROUTE_ANALYSIS__LAYER_H_H_


#include "spatial2danalysis/config.h"
#include "spatialinterface/ivectorlayer.h"
#include "spatialinterface/ispatialreference.h"
#include "spatial2danalysis/networkanalyst.h"

// using namespace EarthView::World::Spatial::Atlas;
// using namespace EarthView::World::Spatial::Utility;

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Analyst{

class EV_2DANALYSIS_DLL CRouteLayer : public IVectorLayer
{
public:					
	virtual ~CRouteLayer();
public:
	ev_void addStop(CPoint* pt);
	ev_void addBarriar(CPoint* pt);
	ev_void select(IGeometry* geom);
	ev_void lock(CPoint* pt);
	ev_void moveTo(CPoint* pt);
	ev_void remove();
	ev_bool solve();
	ev_void clear();

public: // ILayer Interface
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

	virtual ev_bool draw(IDisplay2D* display,EVVectorLayerRendererType type);

	virtual ILayer * clone() const;
	virtual ev_void toStream( _out CDataStream &stream ) const;
	virtual String toXML() const;
	virtual ev_void fromXmlElement( _in CXmlElement& element);
	virtual CXmlElement toXmlElement() const;

public: // IVectorLayer Interface
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

ev_private:
	CRouteLayer( CNameValuePairList *pList );
protected:
	CRouteLayer();
private:
	CRouteLayer(CRouteLayer & obj);

private:
	struct Stop
	{
		ev_int32 id;
		CPoint*  pt;
		ev_bool  bSelected;
	};
	typedef Stop Barriar;

private:
	String m_name;
	String m_description;
	ev_bool m_isVisible;
	ev_bool m_isValid;
	
	ev_bool    m_bIgnoreScale;   ///是否忽略缩放因子
	ev_real64  m_dfMinScale;    ////最小缩放因子
	ev_real64  m_dfMaxSacle;    ////最大缩放因子
	ISpatialReference* m_pSR;

	String m_strDataFullPath;
	CNetworkAnalyst* m_pAnalyst;
	
	ev_vector<Stop>		m_stops;
	ev_vector<Barriar>  m_barriars;
	IGeometry*			m_result;
	ev_int32			m_lockedindex;
};

} //GeoDataset
} //Spatial
} //World
} //EarthView







#endif //__ROUTE_LAYER_H_H_