#ifndef _EDITING_POLYGON_H
#define _EDITING_POLYGON_H
#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/editingsketch.h"
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
class EV_MAPCONTROL_DLL CEditingPolygon : public CEditingSketch
{
public:
	CEditingPolygon( _in CGeometryEditor* ref_editor );
	~CEditingPolygon(){}
	virtual EVGeometryType getType() const;
	virtual const IGeometry * getGeometry() const;
	virtual ev_void finishPart();
	virtual ev_void addPoint( _in CPoint &pnt );
protected:
	virtual ev_bool loadGeometry( _in const IGeometry *geometry );
	ev_void init();
ev_private:
	CEditingPolygon( EarthView::World::Core::CNameValuePairList *pList );
};
			}
		}
	}
}
#endif
