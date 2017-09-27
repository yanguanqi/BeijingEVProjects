/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/cameraevent.h"
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
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_moriginX( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CRoamCameraEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRoamCameraEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->moriginX;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_moriginX( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::Controls::CRoamCameraEvent*)pObjectXXXX)->moriginX = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_moriginY( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CRoamCameraEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRoamCameraEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->moriginY;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_moriginY( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::Controls::CRoamCameraEvent*)pObjectXXXX)->moriginY = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_mlastX( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CRoamCameraEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRoamCameraEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mlastX;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_mlastX( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::Controls::CRoamCameraEvent*)pObjectXXXX)->mlastX = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_mlastY( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CRoamCameraEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRoamCameraEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mlastY;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_mlastY( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::Controls::CRoamCameraEvent*)pObjectXXXX)->mlastY = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CRoamCameraEvent*  _stdcall EarthView_World_Spatial3D_Controls_CRoamCameraEventPtr_get_CRoamCameraEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CRoamCameraEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRoamCameraEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CRoamCameraEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CRoamCameraEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CRoamCameraEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRoamCameraEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CRoamCameraEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CRoamCameraEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CRoamCameraEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_Controls_CZoomCameraEvent_mx( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CZoomCameraEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CZoomCameraEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mx;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CZoomCameraEvent_mx( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::Controls::CZoomCameraEvent*)pObjectXXXX)->mx = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_Controls_CZoomCameraEvent_my( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CZoomCameraEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CZoomCameraEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->my;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CZoomCameraEvent_my( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::Controls::CZoomCameraEvent*)pObjectXXXX)->my = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Controls_CZoomCameraEvent_mzoomRatio( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CZoomCameraEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CZoomCameraEvent*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mzoomRatio;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CZoomCameraEvent_mzoomRatio( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Controls::CZoomCameraEvent*)pObjectXXXX)->mzoomRatio = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CZoomCameraEvent*  _stdcall EarthView_World_Spatial3D_Controls_CZoomCameraEventPtr_get_CZoomCameraEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CZoomCameraEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CZoomCameraEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CZoomCameraEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CZoomCameraEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CZoomCameraEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CZoomCameraEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CZoomCameraEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CZoomCameraEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CZoomCameraEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_Controls_CRotationCameraEvent_mx( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CRotationCameraEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRotationCameraEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mx;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CRotationCameraEvent_mx( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::Controls::CRotationCameraEvent*)pObjectXXXX)->mx = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_Controls_CRotationCameraEvent_my( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CRotationCameraEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRotationCameraEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->my;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CRotationCameraEvent_my( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::Controls::CRotationCameraEvent*)pObjectXXXX)->my = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Controls_CRotationCameraEvent_mrotationDegree( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CRotationCameraEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRotationCameraEvent*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mrotationDegree;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CRotationCameraEvent_mrotationDegree( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Controls::CRotationCameraEvent*)pObjectXXXX)->mrotationDegree = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CRotationCameraEvent*  _stdcall EarthView_World_Spatial3D_Controls_CRotationCameraEventPtr_get_CRotationCameraEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CRotationCameraEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRotationCameraEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CRotationCameraEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CRotationCameraEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CRotationCameraEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRotationCameraEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CRotationCameraEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CRotationCameraEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CRotationCameraEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_Controls_CTiltCameraEventEX_mx( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEventEX* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTiltCameraEventEX*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mx;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CTiltCameraEventEX_mx( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::Controls::CTiltCameraEventEX*)pObjectXXXX)->mx = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_Controls_CTiltCameraEventEX_my( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEventEX* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTiltCameraEventEX*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->my;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CTiltCameraEventEX_my( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::Controls::CTiltCameraEventEX*)pObjectXXXX)->my = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Controls_CTiltCameraEventEX_mtiltDegree( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEventEX* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTiltCameraEventEX*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mtiltDegree;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CTiltCameraEventEX_mtiltDegree( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Controls::CTiltCameraEventEX*)pObjectXXXX)->mtiltDegree = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CTiltCameraEventEX*  _stdcall EarthView_World_Spatial3D_Controls_CTiltCameraEventEXPtr_get_CTiltCameraEventEX(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CTiltCameraEventEXPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTiltCameraEventEXPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CTiltCameraEventEX* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CTiltCameraEventEXPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEventEXPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTiltCameraEventEXPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CTiltCameraEventEXPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEventEXPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CTiltCameraEventEXPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventEX_mrotationratio( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEX* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEX*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mrotationratio;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventEX_mrotationratio( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEX*)pObjectXXXX)->mrotationratio = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEX*  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventEXPtr_get_CSetCameraRotationratioEventEX(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEXPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEXPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEX* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventEXPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEXPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEXPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventEXPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEXPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEXPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
