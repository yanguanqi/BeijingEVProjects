#ifndef _EDITING_POLYLINE_H
#define _EDITING_POLYLINE_H
#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/editingsketch.h"
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
class EV_MAPCONTROL_DLL CEditingPolyline : public CEditingSketch
{
public:
	CEditingPolyline( _in CGeometryEditor* ref_editor );
	~CEditingPolyline(){}
	virtual EVGeometryType getType() const;
	virtual const IGeometry * getGeometry() const;
	virtual ev_void finishPart();
	virtual ev_void addPoint( _in CPoint &pnt );
protected:
	virtual ev_bool loadGeometry( _in const IGeometry *geometry );
	ev_void init();
ev_private:
	CEditingPolyline( EarthView::World::Core::CNameValuePairList *pList );
};
			}
		}
	}
}
#endif
