/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/gotoevent.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial3D
		{
			namespace Controls
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGotoEvent_OperatorAssign_void_CGotoEvent(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent& objXXXX = *((EarthView::World::Spatial3D::Controls::CGotoEvent*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CGotoEvent*)rhs;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mlatitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGotoEvent*) pObjectXXXX;
					EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mlatitude;
					EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mlatitude( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjectXXXX)->mlatitude = *(EarthView::World::Spatial::Math::CDegree*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mlongitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGotoEvent*) pObjectXXXX;
					EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mlongitude;
					EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mlongitude( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjectXXXX)->mlongitude = *(EarthView::World::Spatial::Math::CDegree*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mheading( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGotoEvent*) pObjectXXXX;
					EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mheading;
					EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mheading( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjectXXXX)->mheading = *(EarthView::World::Spatial::Math::CDegree*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mincludeHeading( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGotoEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mincludeHeading;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mincludeHeading( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjectXXXX)->mincludeHeading = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mtilt( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGotoEvent*) pObjectXXXX;
					EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mtilt;
					EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mtilt( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjectXXXX)->mtilt = *(EarthView::World::Spatial::Math::CDegree*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mincludeTilt( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGotoEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mincludeTilt;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mincludeTilt( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjectXXXX)->mincludeTilt = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Controls_CGotoEvent_maltitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGotoEvent*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->maltitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGotoEvent_maltitude( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjectXXXX)->maltitude = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mincludeAltitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGotoEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mincludeAltitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mincludeAltitude( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjectXXXX)->mincludeAltitude = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mmodifyAltitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGotoEvent*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mmodifyAltitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mmodifyAltitude( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjectXXXX)->mmodifyAltitude = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mtimeSpan( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGotoEvent*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mtimeSpan;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mtimeSpan( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjectXXXX)->mtimeSpan = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mTarget( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGotoEvent*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mTarget;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mTarget( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjectXXXX)->mTarget = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  double  _stdcall Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mDistance( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGotoEvent*) pObjectXXXX;
					double objXXXX = ptrNativeObject->mDistance;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mDistance( void *pObjectXXXX, double  value )
				{
					((EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjectXXXX)->mDistance = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mStopGoto( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGotoEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mStopGoto;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mStopGoto( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjectXXXX)->mStopGoto = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CGotoEvent*  _stdcall EarthView_World_Spatial3D_Controls_CGotoEventPtr_get_CGotoEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGotoEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGotoEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CGotoEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGotoEventPtr_OperatorAssign_CGotoEventPtr_CGotoEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CGotoEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CGotoEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CGotoEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CGotoEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGotoEventPtr_OperatorAssign_CGotoEventPtr_CGotoEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CGotoEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CGotoEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CGotoEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CGotoEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGotoEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGotoEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGotoEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGotoEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGotoEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CGotoEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CLocationEvent_OperatorAssign_void_CLocationEvent(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial3D::Controls::CLocationEvent& objXXXX = *((EarthView::World::Spatial3D::Controls::CLocationEvent*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CLocationEvent*)rhs;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Controls_CLocationEvent_mTarget( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLocationEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLocationEvent*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mTarget;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CLocationEvent_mTarget( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Controls::CLocationEvent*)pObjectXXXX)->mTarget = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Controls_CLocationEvent_mTilt( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLocationEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLocationEvent*) pObjectXXXX;
					EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mTilt;
					EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CLocationEvent_mTilt( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Controls::CLocationEvent*)pObjectXXXX)->mTilt = *(EarthView::World::Spatial::Math::CDegree*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Controls_CLocationEvent_mHeading( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLocationEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLocationEvent*) pObjectXXXX;
					EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mHeading;
					EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CLocationEvent_mHeading( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Controls::CLocationEvent*)pObjectXXXX)->mHeading = *(EarthView::World::Spatial::Math::CDegree*)value;
				}
				extern "C" EV_DLL_EXPORT  double  _stdcall Get_EarthView_World_Spatial3D_Controls_CLocationEvent_mDistance( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLocationEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLocationEvent*) pObjectXXXX;
					double objXXXX = ptrNativeObject->mDistance;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CLocationEvent_mDistance( void *pObjectXXXX, double  value )
				{
					((EarthView::World::Spatial3D::Controls::CLocationEvent*)pObjectXXXX)->mDistance = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Controls_CLocationEvent_mtimeSpan( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLocationEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLocationEvent*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mtimeSpan;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CLocationEvent_mtimeSpan( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Controls::CLocationEvent*)pObjectXXXX)->mtimeSpan = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CLocationEvent*  _stdcall EarthView_World_Spatial3D_Controls_CLocationEventPtr_get_CLocationEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CLocationEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLocationEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CLocationEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CLocationEventPtr_OperatorAssign_CLocationEventPtr_CLocationEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CLocationEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CLocationEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CLocationEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CLocationEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CLocationEventPtr_OperatorAssign_CLocationEventPtr_CLocationEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CLocationEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CLocationEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CLocationEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CLocationEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CLocationEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLocationEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLocationEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CLocationEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLocationEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CLocationEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraControlDepthEvent_OperatorAssign_void_CSetCameraControlDepthEvent(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent& objXXXX = *((EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent*)rhs;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent*  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraControlDepthEventPtr_get_CSetCameraControlDepthEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraControlDepthEventPtr_OperatorAssign_CSetCameraControlDepthEventPtr_CSetCameraControlDepthEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraControlDepthEventPtr_OperatorAssign_CSetCameraControlDepthEventPtr_CSetCameraControlDepthEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraControlDepthEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraControlDepthEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mPointx( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mPointx;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mPointx( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent*)pObjectXXXX)->mPointx = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mPointy( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mPointy;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mPointy( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent*)pObjectXXXX)->mPointy = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mrotationDegree( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mrotationDegree;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mrotationDegree( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent*)pObjectXXXX)->mrotationDegree = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mzoomRatio( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mzoomRatio;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mzoomRatio( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent*)pObjectXXXX)->mzoomRatio = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent*  _stdcall EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEventPtr_get_CRotationAndZoomCameraEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEventPtr_OperatorAssign_CRotationAndZoomCameraEventPtr_CRotationAndZoomCameraEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEventPtr_OperatorAssign_CRotationAndZoomCameraEventPtr_CRotationAndZoomCameraEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Controls_CTiltCameraEvent_mPointx( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTiltCameraEvent*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mPointx;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CTiltCameraEvent_mPointx( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Controls::CTiltCameraEvent*)pObjectXXXX)->mPointx = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Controls_CTiltCameraEvent_mPointy( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTiltCameraEvent*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mPointy;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CTiltCameraEvent_mPointy( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Controls::CTiltCameraEvent*)pObjectXXXX)->mPointy = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Controls_CTiltCameraEvent_mtiltDegree( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTiltCameraEvent*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mtiltDegree;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CTiltCameraEvent_mtiltDegree( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Controls::CTiltCameraEvent*)pObjectXXXX)->mtiltDegree = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CTiltCameraEvent*  _stdcall EarthView_World_Spatial3D_Controls_CTiltCameraEventPtr_get_CTiltCameraEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CTiltCameraEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CTiltCameraEventPtr_OperatorAssign_CTiltCameraEventPtr_CTiltCameraEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CTiltCameraEventPtr_OperatorAssign_CTiltCameraEventPtr_CTiltCameraEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CTiltCameraEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CTiltCameraEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CTiltCameraEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEvent_mrotationratio( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEvent*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mrotationratio;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEvent_mrotationratio( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEvent*)pObjectXXXX)->mrotationratio = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEvent*  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventPtr_get_CSetCameraRotationratioEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventPtr_OperatorAssign_CSetCameraRotationratioEventPtr_CSetCameraRotationratioEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventPtr_OperatorAssign_CSetCameraRotationratioEventPtr_CSetCameraRotationratioEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_setCameraLockTarget_void_CSceneNode(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneNode* lockTarget )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjectXXXX;
					ptrNativeObject->setCameraLockTarget(lockTarget);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_getCameraLockTarget_CSceneNode(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjectXXXX;
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->getCameraLockTarget();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_hasSetLockTarget_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->hasSetLockTarget();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_setCameraLockHeading_void_CDegree(void *pObjectXXXX, _in const void* headingt )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjectXXXX;
					ptrNativeObject->setCameraLockHeading(*(EarthView::World::Spatial::Math::CDegree*)headingt);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_getCameraLockHeading_CDegree(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjectXXXX;
					EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->getCameraLockHeading();
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_hasSetLockHeading_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->hasSetLockHeading();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_setCameraLockTilt_void_CDegree(void *pObjectXXXX, _in const void* tilt )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjectXXXX;
					ptrNativeObject->setCameraLockTilt(*(EarthView::World::Spatial::Math::CDegree*)tilt);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_getCameraLockTilt_CDegree(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjectXXXX;
					EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->getCameraLockTilt();
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_hasSetLockTilt_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->hasSetLockTilt();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_setCameraLockDistance_void_ev_real64(void *pObjectXXXX, _in ev_real64 distance )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjectXXXX;
					ptrNativeObject->setCameraLockDistance(distance);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_getCameraLockDistance_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getCameraLockDistance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_hasSetLockDistance_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->hasSetLockDistance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_setCameraLockMode_void_ev_bool(void *pObjectXXXX, _in ev_bool isThirdPersonMode )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjectXXXX;
					ptrNativeObject->setCameraLockMode(isThirdPersonMode);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_hasSetLockMode_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->hasSetLockMode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mbCanChangeTilt( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mbCanChangeTilt;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mbCanChangeTilt( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*)pObjectXXXX)->mbCanChangeTilt = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mbCanChangeHeading( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mbCanChangeHeading;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mbCanChangeHeading( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*)pObjectXXXX)->mbCanChangeHeading = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mbCanChangeDistance( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mbCanChangeDistance;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mbCanChangeDistance( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*)pObjectXXXX)->mbCanChangeDistance = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mIsThirdPersonMode( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mIsThirdPersonMode;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mIsThirdPersonMode( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*)pObjectXXXX)->mIsThirdPersonMode = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEventPtr_get_CSetCameraLockTargetEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEventPtr_OperatorAssign_CSetCameraLockTargetEventPtr_CSetCameraLockTargetEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEventPtr_OperatorAssign_CSetCameraLockTargetEventPtr_CSetCameraLockTargetEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Controls_CFadeInOutEvent_mCompositorTime( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CFadeInOutEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CFadeInOutEvent*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mCompositorTime;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CFadeInOutEvent_mCompositorTime( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Controls::CFadeInOutEvent*)pObjectXXXX)->mCompositorTime = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CFadeInOutEvent*  _stdcall EarthView_World_Spatial3D_Controls_CFadeInOutEventPtr_get_CFadeInOutEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CFadeInOutEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CFadeInOutEventPtr_OperatorAssign_CFadeInOutEventPtr_CFadeInOutEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CFadeInOutEventPtr_OperatorAssign_CFadeInOutEventPtr_CFadeInOutEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CFadeInOutEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CFadeInOutEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CFadeInOutEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
