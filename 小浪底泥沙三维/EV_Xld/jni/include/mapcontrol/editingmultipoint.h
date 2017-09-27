#ifndef _EDITING_MULTI_POINT_H
#define _EDITING_MULTI_POINT_H
#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/editingsketch.h"
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
class EV_MAPCONTROL_DLL CEditingMultiPoint : public CEditingSketch
{
public:
	CEditingMultiPoint( _in CGeometryEditor* ref_editor );
	~CEditingMultiPoint(){}
	virtual EVGeometryType getType() const;
	virtual const IGeometry * getGeometry() const;
	virtual ev_void finishPart();
	virtual ev_void addPoint( _in CPoint &pnt );
protected:
	virtual ev_bool loadGeometry( _in const IGeometry *geometry );
ev_private:
	CEditingMultiPoint( EarthView::World::Core::CNameValuePairList *pList );
};
			}
		}
	}
}
#endif

