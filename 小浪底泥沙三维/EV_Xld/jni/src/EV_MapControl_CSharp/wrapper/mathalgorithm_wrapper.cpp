/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/mathalgorithm.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CMathFormula_cosinTheorem_ev_real64_CPoint_CPoint_CPoint(_in const EarthView::World::Spatial::Geometry::CPoint* p0, _in const EarthView::World::Spatial::Geometry::CPoint* p1, _in const EarthView::World::Spatial::Geometry::CPoint* p2 )
				{
					ev_real64 objXXXX = EarthView::World::Spatial2D::Controls::CMathFormula::cosinTheorem(p0, p1, p2);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CMathFormula_cosinTheorem_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(_in ev_real64 x0, _in ev_real64 y0, _in ev_real64 x1, _in ev_real64 y1, _in ev_real64 x2, _in ev_real64 y2 )
				{
					ev_real64 objXXXX = EarthView::World::Spatial2D::Controls::CMathFormula::cosinTheorem(x0, y0, x1, y1, x2, y2);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CMathFormula_pointToLine_ev_real64_CPoint_CPoint_CPoint(_in const EarthView::World::Spatial::Geometry::CPoint* pnt, _in const EarthView::World::Spatial::Geometry::CPoint* pnt0, _in const EarthView::World::Spatial::Geometry::CPoint* pnt1 )
				{
					ev_real64 objXXXX = EarthView::World::Spatial2D::Controls::CMathFormula::pointToLine(pnt, pnt0, pnt1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CMathFormula_pointToLine_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(_in ev_real64 dx, _in ev_real64 dy, _in ev_real64 x0, _in ev_real64 y0, _in ev_real64 x1, _in ev_real64 y1 )
				{
					ev_real64 objXXXX = EarthView::World::Spatial2D::Controls::CMathFormula::pointToLine(dx, dy, x0, y0, x1, y1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CMathFormula_pointToPoint_ev_real64_CPoint_CPoint(_in const EarthView::World::Spatial::Geometry::CPoint* pnt1, _in const EarthView::World::Spatial::Geometry::CPoint* pnt2 )
				{
					ev_real64 objXXXX = EarthView::World::Spatial2D::Controls::CMathFormula::pointToPoint(pnt1, pnt2);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CMathFormula_testTurn_ev_real64_CPoint_CPoint_CPoint(_in const EarthView::World::Spatial::Geometry::CPoint* p0, _in const EarthView::World::Spatial::Geometry::CPoint* p1, _in const EarthView::World::Spatial::Geometry::CPoint* p2 )
				{
					ev_real64 objXXXX = EarthView::World::Spatial2D::Controls::CMathFormula::testTurn(p0, p1, p2);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CMathFormula_angle_aob_ev_real64_CPoint_CPoint_CPoint(_in const EarthView::World::Spatial::Geometry::CPoint* po, _in const EarthView::World::Spatial::Geometry::CPoint* pa, _in const EarthView::World::Spatial::Geometry::CPoint* pb )
				{
					ev_real64 objXXXX = EarthView::World::Spatial2D::Controls::CMathFormula::angle_aob(po, pa, pb);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMathFormula_shareLine_ev_bool_CPoint_CPoint_CPoint(_in const EarthView::World::Spatial::Geometry::CPoint* p1, _in const EarthView::World::Spatial::Geometry::CPoint* p2, _in const EarthView::World::Spatial::Geometry::CPoint* q )
				{
					ev_bool objXXXX = EarthView::World::Spatial2D::Controls::CMathFormula::shareLine(p1, p2, q);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMathFormula_shareLine_ev_bool_CPoint_CPoint_CPoint_ev_real64(_in const EarthView::World::Spatial::Geometry::CPoint* p1, _in const EarthView::World::Spatial::Geometry::CPoint* p2, _in const EarthView::World::Spatial::Geometry::CPoint* q, _in ev_real64 precision )
				{
					ev_bool objXXXX = EarthView::World::Spatial2D::Controls::CMathFormula::shareLine(p1, p2, q, precision);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMathFormula_isPointOnLine_ev_bool_CPoint_CPoint_CPoint(_in const EarthView::World::Spatial::Geometry::CPoint* q, _in const EarthView::World::Spatial::Geometry::CPoint* p1, _in const EarthView::World::Spatial::Geometry::CPoint* p2 )
				{
					ev_bool objXXXX = EarthView::World::Spatial2D::Controls::CMathFormula::isPointOnLine(q, p1, p2);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMathFormula_isPointOnLine_ev_bool_CPoint_CPoint_CPoint_ev_real64(_in const EarthView::World::Spatial::Geometry::CPoint* q, _in const EarthView::World::Spatial::Geometry::CPoint* p1, _in const EarthView::World::Spatial::Geometry::CPoint* p2, _in ev_real64 precision )
				{
					ev_bool objXXXX = EarthView::World::Spatial2D::Controls::CMathFormula::isPointOnLine(q, p1, p2, precision);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMathFormula_isFootPoint_ev_bool_CPoint_CPoint_CPoint(_in const EarthView::World::Spatial::Geometry::CPoint* fp, _in const EarthView::World::Spatial::Geometry::CPoint* p1, _in const EarthView::World::Spatial::Geometry::CPoint* p2 )
				{
					ev_bool objXXXX = EarthView::World::Spatial2D::Controls::CMathFormula::isFootPoint(fp, p1, p2);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CMathFormula_getFootPoint_ev_int32_CPoint_CPoint_ev_real64_ev_real64(_in const EarthView::World::Spatial::Geometry::CPoint* pPoint1, _in const EarthView::World::Spatial::Geometry::CPoint* pPoint2, _inout ev_real64& x, _inout ev_real64& y )
				{
					ev_int32 objXXXX = EarthView::World::Spatial2D::Controls::CMathFormula::getFootPoint(pPoint1, pPoint2, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMathFormula_isParallel_ev_bool_CPoint_CPoint_CPoint_CPoint(_in const EarthView::World::Spatial::Geometry::CPoint* pStartPL1, _in const EarthView::World::Spatial::Geometry::CPoint* pEndPL1, _in const EarthView::World::Spatial::Geometry::CPoint* pStartPL2, _in const EarthView::World::Spatial::Geometry::CPoint* pEndPL2 )
				{
					ev_bool objXXXX = EarthView::World::Spatial2D::Controls::CMathFormula::isParallel(pStartPL1, pEndPL1, pStartPL2, pEndPL2);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMathFormula_isApproximate_ev_bool_ev_real64_ev_real64_ev_real64(_in ev_real64 dValue1, _in ev_real64 dValue2, _in ev_real64 dTolerance )
				{
					ev_bool objXXXX = EarthView::World::Spatial2D::Controls::CMathFormula::isApproximate(dValue1, dValue2, dTolerance);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CRoundRectAlgori_setRectangleRing_void_CPoint_CPoint_CPoint_CPoint(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CPoint* p0, _in const EarthView::World::Spatial::Geometry::CPoint* p1, _in const EarthView::World::Spatial::Geometry::CPoint* p2, _in const EarthView::World::Spatial::Geometry::CPoint* p3 )
				{
					EarthView::World::Spatial2D::Controls::CRoundRectAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CRoundRectAlgori*) pObjectXXXX;
					ptrNativeObject->setRectangleRing(p0, p1, p2, p3);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CRoundRectAlgori_setRectangleRing_void_CRectangleRing(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CRectangleRing* rect )
				{
					EarthView::World::Spatial2D::Controls::CRoundRectAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CRoundRectAlgori*) pObjectXXXX;
					ptrNativeObject->setRectangleRing(rect);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial2D_Controls_CRoundRectAlgori_getFirst_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CRoundRectAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CRoundRectAlgori*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getFirst();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial2D_Controls_CRoundRectAlgori_getSecond_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CRoundRectAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CRoundRectAlgori*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getSecond();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial2D_Controls_CRoundRectAlgori_getThird_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CRoundRectAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CRoundRectAlgori*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getThird();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial2D_Controls_CRoundRectAlgori_getForth_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CRoundRectAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CRoundRectAlgori*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getForth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial2D_Controls_CRoundRectAlgori_getFifth_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CRoundRectAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CRoundRectAlgori*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getFifth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CRoundRectAlgori_getRoundRadius_void_ev_real64_ev_real64(void *pObjectXXXX, _inout ev_real64& v12, _inout ev_real64& v23 )
				{
					const EarthView::World::Spatial2D::Controls::CRoundRectAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CRoundRectAlgori*) pObjectXXXX;
					ptrNativeObject->getRoundRadius(v12, v23);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CRectangleRing*  _stdcall EarthView_World_Spatial2D_Controls_CRoundRectAlgori_getRectangle_CRectangleRing(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CRoundRectAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CRoundRectAlgori*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CRectangleRing* objXXXX = ptrNativeObject->getRectangle();
					return objXXXX;
				}
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CEllipticRing_Callback)(_in EarthView::World::Spatial::Geometry::CEllipticRing* ring);
				class CEllipticRingAlgoriProxy : public EarthView::World::Spatial2D::Controls::CEllipticRingAlgori
				{
				private:
					EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CEllipticRing_Callback* m_EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CEllipticRing_Callback;
				public:
					CEllipticRingAlgoriProxy(EarthView::World::Core::CNameValuePairList *pList) : CEllipticRingAlgori(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CEllipticRing_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CEllipticRing(EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CEllipticRing_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CEllipticRing_Callback = pCallback;
					}
					virtual void setEllipticRing(_in EarthView::World::Spatial::Geometry::CEllipticRing* ring)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CEllipticRing_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CEllipticRing_Callback(ring);
						}
						else
							return this->CEllipticRingAlgori::setEllipticRing(ring);
					}
				};
				REGISTER_FACTORY_CLASS(CEllipticRingAlgoriProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CPoint_CPoint_CPoint(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CPoint* center, _in const EarthView::World::Spatial::Geometry::CPoint* p1, _in const EarthView::World::Spatial::Geometry::CPoint* p2 )
				{
					EarthView::World::Spatial2D::Controls::CEllipticRingAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*) pObjectXXXX;
					ptrNativeObject->setEllipticRing(center, p1, p2);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CEllipticRing(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::CEllipticRing* ring )
				{
					EarthView::World::Spatial2D::Controls::CEllipticRingAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*) pObjectXXXX;
					if (dynamic_cast<CEllipticRingAlgoriProxy*>((EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CEllipticRingAlgori::setEllipticRing(ring);
					else
						ptrNativeObject->setEllipticRing(ring);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CEllipticRing( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CEllipticRing_Callback* pCallback )
				{
					CEllipticRingAlgoriProxy* ptr = dynamic_cast<CEllipticRingAlgoriProxy*>((EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CEllipticRing(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CEllipticRing_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::CEllipticRing* ring )
				{
					EarthView::World::Spatial2D::Controls::CEllipticRingAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CEllipticRingAlgori::setEllipticRing(ring);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_getSemiMajorAxe_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEllipticRingAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getSemiMajorAxe();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_getSemiMinorAxe_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEllipticRingAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getSemiMinorAxe();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_getAngle_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEllipticRingAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_getCenter_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEllipticRingAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getCenter();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_getCtrlPoint1_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEllipticRingAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getCtrlPoint1();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_getCtrlPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEllipticRingAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getCtrlPoint2();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CEllipticRing*  _stdcall EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_makeEllipticRing_CEllipticRing(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEllipticRingAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CEllipticRing* objXXXX = ptrNativeObject->makeEllipticRing();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_getPointOnEllipse_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 angle, _in ev_real64& x, _in ev_real64& y )
				{
					EarthView::World::Spatial2D::Controls::CEllipticRingAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*) pObjectXXXX;
					ptrNativeObject->getPointOnEllipse(angle, x, y);
				}
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticRing_void_CEllipticRing_Callback)(_in EarthView::World::Spatial::Geometry::CEllipticRing* ring);
				class CEllipticArcAlgoriProxy : public EarthView::World::Spatial2D::Controls::CEllipticArcAlgori
				{
				private:
					EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticRing_void_CEllipticRing_Callback* m_EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticRing_void_CEllipticRing_Callback;
				public:
					CEllipticArcAlgoriProxy(EarthView::World::Core::CNameValuePairList *pList) : CEllipticArcAlgori(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticRing_void_CEllipticRing_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticRing_void_CEllipticRing(EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticRing_void_CEllipticRing_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticRing_void_CEllipticRing_Callback = pCallback;
					}
					virtual void setEllipticRing(_in EarthView::World::Spatial::Geometry::CEllipticRing* ring)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticRing_void_CEllipticRing_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticRing_void_CEllipticRing_Callback(ring);
						}
						else
							return this->CEllipticArcAlgori::setEllipticRing(ring);
					}
				};
				REGISTER_FACTORY_CLASS(CEllipticArcAlgoriProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticRing_void_CEllipticRing(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::CEllipticRing* ring )
				{
					EarthView::World::Spatial2D::Controls::CEllipticArcAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEllipticArcAlgori*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcAlgoriProxy*>((EarthView::World::Spatial2D::Controls::CEllipticArcAlgori*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CEllipticArcAlgori::setEllipticRing(ring);
					else
						ptrNativeObject->setEllipticRing(ring);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticRing_void_CEllipticRing( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticRing_void_CEllipticRing_Callback* pCallback )
				{
					CEllipticArcAlgoriProxy* ptr = dynamic_cast<CEllipticArcAlgoriProxy*>((EarthView::World::Spatial2D::Controls::CEllipticArcAlgori*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticRing_void_CEllipticRing(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticRing_void_CEllipticRing_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::CEllipticRing* ring )
				{
					EarthView::World::Spatial2D::Controls::CEllipticArcAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEllipticArcAlgori*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CEllipticArcAlgori::setEllipticRing(ring);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticArc_void_CPoint_CPoint_CPoint_CPoint_CPoint(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CPoint* center, _in const EarthView::World::Spatial::Geometry::CPoint* p1, _in const EarthView::World::Spatial::Geometry::CPoint* p2, _in const EarthView::World::Spatial::Geometry::CPoint* p3, _in const EarthView::World::Spatial::Geometry::CPoint* p4 )
				{
					EarthView::World::Spatial2D::Controls::CEllipticArcAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEllipticArcAlgori*) pObjectXXXX;
					ptrNativeObject->setEllipticArc(center, p1, p2, p3, p4);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticArc_void_CEllipticArc(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CEllipticArc* arc )
				{
					EarthView::World::Spatial2D::Controls::CEllipticArcAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEllipticArcAlgori*) pObjectXXXX;
					ptrNativeObject->setEllipticArc(arc);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_getFromAngle_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEllipticArcAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEllipticArcAlgori*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getFromAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_getSweepAngle_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEllipticArcAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEllipticArcAlgori*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getSweepAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_getCtrlPoint3_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEllipticArcAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEllipticArcAlgori*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getCtrlPoint3();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_getCtrlPoint4_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEllipticArcAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEllipticArcAlgori*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getCtrlPoint4();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CEllipticArc*  _stdcall EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_makeEllipticArc_CEllipticArc(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEllipticArcAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEllipticArcAlgori*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CEllipticArc* objXXXX = ptrNativeObject->makeEllipticArc();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CLongCircleAlgori_setLongCircle_void_CPoint_ev_real64_CPoint_ev_real64(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CPoint* center1, _in ev_real64 radius1, _in const EarthView::World::Spatial::Geometry::CPoint* center2, _in ev_real64 radius2 )
				{
					EarthView::World::Spatial2D::Controls::CLongCircleAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CLongCircleAlgori*) pObjectXXXX;
					ptrNativeObject->setLongCircle(center1, radius1, center2, radius2);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CLongCircleAlgori_setLongCircle_void_CCurveRing(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CCurveRing* ring )
				{
					EarthView::World::Spatial2D::Controls::CLongCircleAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CLongCircleAlgori*) pObjectXXXX;
					ptrNativeObject->setLongCircle(ring);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_Controls_CLongCircleAlgori_getGeometry_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CLongCircleAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CLongCircleAlgori*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->getGeometry();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CLongCircleAlgori_getFirstRadius_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CLongCircleAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CLongCircleAlgori*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getFirstRadius();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CLongCircleAlgori_getSecondRadius_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CLongCircleAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CLongCircleAlgori*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getSecondRadius();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial2D_Controls_CLongCircleAlgori_getFirstPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CLongCircleAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CLongCircleAlgori*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getFirstPoint();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial2D_Controls_CLongCircleAlgori_getSecondPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CLongCircleAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CLongCircleAlgori*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getSecondPoint();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial2D_Controls_CLongCircleAlgori_getThirdPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CLongCircleAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CLongCircleAlgori*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getThirdPoint();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial2D_Controls_CLongCircleAlgori_getForthPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CLongCircleAlgori* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CLongCircleAlgori*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getForthPoint();
					return objXXXX;
				}
			}
		}
	}
}
