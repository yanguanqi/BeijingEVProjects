/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/globeanimationpath.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mlatitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*) pObjectXXXX;
					EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mlatitude;
					EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mlatitude( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*)pObjectXXXX)->mlatitude = *(EarthView::World::Spatial::Math::CDegree*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mlongitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*) pObjectXXXX;
					EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mlongitude;
					EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mlongitude( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*)pObjectXXXX)->mlongitude = *(EarthView::World::Spatial::Math::CDegree*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mHeading( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*) pObjectXXXX;
					EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mHeading;
					EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mHeading( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*)pObjectXXXX)->mHeading = *(EarthView::World::Spatial::Math::CDegree*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_maltitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->maltitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_maltitude( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*)pObjectXXXX)->maltitude = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mtilt( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*) pObjectXXXX;
					EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mtilt;
					EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mtilt( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*)pObjectXXXX)->mtilt = *(EarthView::World::Spatial::Math::CDegree*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CAnimationControlPointMap_push_ev_bool_ev_real64_CGlobeAnimationControlPoint(void *pObjectXXXX, _in const ev_real64& key, _in void* val )
				{
					EarthView::World::Spatial3D::Controls::CAnimationControlPointMap* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CAnimationControlPointMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->push(key, *(EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*)val);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CAnimationControlPointMap_exist_ev_bool_ev_real64(void *pObjectXXXX, _in const ev_real64& key )
				{
					EarthView::World::Spatial3D::Controls::CAnimationControlPointMap* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CAnimationControlPointMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exist(key);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CAnimationControlPointMap_OperatorIndex_CGlobeAnimationControlPoint_ev_real64(void *pObjXXXX, _in const ev_real64& key )
				{
					EarthView::World::Spatial3D::Controls::CAnimationControlPointMap& objYYYY = *(EarthView::World::Spatial3D::Controls::CAnimationControlPointMap*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint& objXXXX = objYYYY[key];
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CAnimationControlPointMap_get_CGlobeAnimationControlPoint_ev_real64(void *pObjectXXXX, _in const ev_real64& key )
				{
					EarthView::World::Spatial3D::Controls::CAnimationControlPointMap* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CAnimationControlPointMap*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint& objXXXX = ptrNativeObject->get(key);
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CAnimationControlPointMap_erase_void_ev_real64(void *pObjectXXXX, _in const ev_real64& key )
				{
					EarthView::World::Spatial3D::Controls::CAnimationControlPointMap* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CAnimationControlPointMap*) pObjectXXXX;
					ptrNativeObject->erase(key);
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Controls_CAnimationControlPointMap_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CAnimationControlPointMap* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CAnimationControlPointMap*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CAnimationControlPointMap_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CAnimationControlPointMap* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CAnimationControlPointMap*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CAnimationControlPointMap_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CAnimationControlPointMap* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CAnimationControlPointMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationPath* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationPath*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_insert_void_ev_real64_CGlobeAnimationControlPoint(void *pObjectXXXX, _in ev_real64 time, _in void* controlPoint )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationPath* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationPath*) pObjectXXXX;
					ptrNativeObject->insert(time, *(EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*)controlPoint);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_getFirstTime_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationPath* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationPath*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getFirstTime();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_getEndTime_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationPath* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationPath*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getEndTime();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_getPeriod_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationPath* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationPath*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getPeriod();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_getControlPointCount_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationPath* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationPath*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getControlPointCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_setVelocity_void_ev_real64(void *pObjectXXXX, _in ev_real64 velocity )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationPath* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationPath*) pObjectXXXX;
					ptrNativeObject->setVelocity(velocity);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_getVelocity_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationPath* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationPath*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getVelocity();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_getInterpolaterdControlPoint_CGlobeAnimationControlPoint_ev_real64_ev_bool(void *pObjectXXXX, _in ev_real64 time, _in ev_bool isEven )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationPath* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationPath*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint objXXXX = ptrNativeObject->getInterpolaterdControlPoint(time, isEven);
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint *pXXXX = new EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_getControlPoints_CAnimationControlPointMap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeAnimationPath* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationPath*) pObjectXXXX;
					const EarthView::World::Spatial3D::Controls::CAnimationControlPointMap& objXXXX = ptrNativeObject->getControlPoints();
					const EarthView::World::Spatial3D::Controls::CAnimationControlPointMap *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
		}
	}
}
