#ifndef _PATH_EDIT_H
#define _PATH_EDIT_H
#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/editingobject.h"
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
class EV_MAPCONTROL_DLL CEditingPath : public CEditingCurve
{
public:
	CEditingPath(){}
	~CEditingPath();

	virtual EVString getName() const;
	virtual EditingObjectType getType() const;
	virtual const IGeometry * getGeometry() const;
	virtual ev_int32 getPointCount() const;
	virtual const CPoint & getPoint( _in ev_int32 index, _in ev_bool &ok ) const;
	virtual ev_int32 indexForPoint( _in const CPoint &pnt ) const;
	virtual _extfree IGeometry * makeSample( _in const CPoint &from, _in const CPoint &to ) const;
	virtual ev_bool isFine() const;
	virtual ev_bool isExcellent() const;

	virtual const CPoint & getFirstPoint( _in ev_bool &ok ) const;
	virtual const CPoint & getLastPoint( _in ev_bool &ok ) const;

	ev_uint32 getCurveCount() const;
	CEditingCurve * getCurve( _in ev_int32 index ) const;
	CEditingCurve * getFirstCurve() const;
	CEditingCurve * getLastCurve() const;
	ev_int32 indexForCurve( CEditingCurve *curve ) const;
	ev_bool insertCurve( _in CEditingCurve *curve, ev_int32 index );
	ev_bool removeCurve( _in ev_int32 index );
	ev_bool removeCurve( _in CEditingCurve *curve );
protected:
	virtual ev_bool execInsert( _in const CPoint &pnt, _in ev_int32 index );
	virtual ev_bool execRemove( _in const CPoint &pnt );
	virtual ev_bool execMove( _in const CPoint &src, _in const CPoint &dest );
	virtual ev_bool execTranslate( _in ev_real64 dx, _in ev_real64 dy );
	virtual ev_bool execRotate( _in ev_real64 x, _in ev_real64 y, _in ev_real64 angle );
	virtual ev_bool execInsertCurve( _in CEditingCurve *curve,ev_int32 index );
	virtual ev_bool execRemoveCurve( _in CEditingCurve *curve );
	virtual ev_void onPointChanged();
	virtual ev_bool loadGeometry( _in const IGeometry *geometry );
	virtual ev_void reset();

	virtual ev_void onAdded( _in CGeometryEditor *ref_editor );
	virtual ev_void onRemoved();

	ev_vector<CEditingCurve*> mCurveList;
	ev_vector<CEditingCurve*> mFreeList;
ev_private:
	CEditingPath( EarthView::World::Core::CNameValuePairList *pList ) : CEditingCurve( pList ){}
	friend class CSketchOperationProxy;
};

class EV_MAPCONTROL_DLL CEditingRing : public CEditingPath
{
public:
	CEditingRing(){}

	virtual EVString getName() const;
	virtual EditingObjectType getType() const;
	virtual const IGeometry * getGeometry() const;
	virtual _extfree IGeometry * makeSample( _in const CPoint &from, _in const CPoint &to ) const;
	virtual ev_bool isFine() const;
	virtual ev_bool isExcellent() const;
ev_private:
	CEditingRing( EarthView::World::Core::CNameValuePairList *pList ) : CEditingPath( pList ){}
};
			}
		}
	}
}
#endif
