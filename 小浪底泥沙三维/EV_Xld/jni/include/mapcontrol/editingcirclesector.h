#ifndef _EDITING_CIRCLE_SECTOR_H
#define _EDITING_CIRCLE_SECTOR_H

#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/editinglinestring.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{

class EV_MAPCONTROL_DLL CEditingCircleSector : public CEditingCurve
{
public:
	CEditingCircleSector(){}
	virtual CEditingObject * newObject() const;
	virtual EVString getName() const;
	virtual EditingObjectType getType() const;
	virtual _extfree IGeometry * makeSample( _in const CPoint &from, _in const CPoint &to ) const;
	virtual ev_bool isFine() const;
	virtual ev_bool isExcellent() const;
	virtual CPoint getCenterPoint( _out ev_bool &ok ) const;
	virtual ev_void setCenterPoint( _in CPoint &point );
	virtual ev_real64 getCentralAngle(_out ev_bool &ok ) const;
	virtual ev_void setCentralAngle(ev_real64 angle);
	virtual ev_real64 getStartAngle( _out ev_bool &ok ) const;
	virtual ev_void setStartAngle( _in ev_real64 angle);
	virtual ev_real64 getRadius(_out ev_bool &ok) const;
	virtual ev_void setRadius(_in ev_real64 radius);
protected:
	virtual ev_bool execInsert( _in const CPoint &pnt, _in ev_int32 index );
	virtual ev_bool execMove( _in const CPoint &src, _in const CPoint &dest );
	virtual ev_void onPointChanged();
	virtual ev_bool loadGeometry( _in const IGeometry *geometry );
ev_private:
	CEditingCircleSector( EarthView::World::Core::CNameValuePairList *pList ) : CEditingCurve( pList ){}
};
			}
		}
	}
}
#endif
