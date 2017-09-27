#ifndef _EDITING_POINT_H
#define _EDITING_POINT_H
#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/editingobject.h"
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
class EV_MAPCONTROL_DLL CEditingPoint : public CEditingObject
{
public:
	CEditingPoint(){}
	virtual CEditingObject * newObject() const;
	virtual EVString getName() const;
	virtual EditingObjectType getType() const;
	virtual _extfree IGeometry * makeSample( _in const CPoint &from, _in const CPoint &to ) const;
	virtual ev_bool isFine() const;
	virtual ev_bool isExcellent() const;
protected:
	virtual ev_void onPointChanged();
	virtual ev_bool loadGeometry( _in const IGeometry *geometry );
ev_private:
	CEditingPoint( EarthView::World::Core::CNameValuePairList *pList ) : CEditingObject( pList ){}
};
			}
		}
	}
}
#endif