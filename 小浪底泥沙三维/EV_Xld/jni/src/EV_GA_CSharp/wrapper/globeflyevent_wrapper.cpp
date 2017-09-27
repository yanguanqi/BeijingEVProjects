/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/globeflyevent.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CGlobeFlyEvent*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyEventPtr_get_CGlobeFlyEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyEventPtr_OperatorAssign_CGlobeFlyEventPtr_CGlobeFlyEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyEventPtr_OperatorAssign_CGlobeFlyEventPtr_CGlobeFlyEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeFlyEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyEventPtr_bind_void_CGlobeFlyEvent(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeFlyEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr*) pObjectXXXX;
					ptrNativeObject->bind(rep);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyDataEvent_setFlyPath_void_CGlobeFlyPathPtr(void *pObjectXXXX, _in const void* flyPath )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyDataEvent*) pObjectXXXX;
					ptrNativeObject->setFlyPath(*(EarthView::World::Spatial3D::CGlobeFlyPathPtr*)flyPath);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CGlobeFlyDataEvent*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyDataEventPtr_get_CGlobeFlyDataEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyDataEventPtr_OperatorAssign_CGlobeFlyDataEventPtr_CGlobeFlyDataEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyDataEventPtr_bind_void_CGlobeFlyDataEvent(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeFlyDataEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr*) pObjectXXXX;
					ptrNativeObject->bind(rep);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyDataEventPtr_OperatorAssign_CGlobeFlyDataEventPtr_CGlobeFlyDataEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeFlyDataEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyDataEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyDataEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEvent*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyPlayEventPtr_get_CGlobeFlyPlayEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyPlayEventPtr_bind_void_CGlobeFlyPlayEvent(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr*) pObjectXXXX;
					ptrNativeObject->bind(rep);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyPlayEventPtr_OperatorAssign_CGlobeFlyPlayEventPtr_CGlobeFlyPlayEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyPlayEventPtr_OperatorAssign_CGlobeFlyPlayEventPtr_CGlobeFlyPlayEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyPlayEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyPlayEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEvent*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyPauseEventPtr_get_CGlobeFlyPauseEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyPauseEventPtr_OperatorAssign_CGlobeFlyPauseEventPtr_CGlobeFlyPauseEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyPauseEventPtr_OperatorAssign_CGlobeFlyPauseEventPtr_CGlobeFlyPauseEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyPauseEventPtr_bind_void_CGlobeFlyPauseEvent(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr*) pObjectXXXX;
					ptrNativeObject->bind(rep);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyPauseEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyPauseEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CGlobeFlyStopEvent*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyStopEventPtr_get_CGlobeFlyStopEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyStopEventPtr_OperatorAssign_CGlobeFlyStopEventPtr_CGlobeFlyStopEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyStopEventPtr_OperatorAssign_CGlobeFlyStopEventPtr_CGlobeFlyStopEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeFlyStopEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyStopEventPtr_bind_void_CGlobeFlyStopEvent(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeFlyStopEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr*) pObjectXXXX;
					ptrNativeObject->bind(rep);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyStopEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyStopEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEvent*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyStartSamplePointEventPtr_get_CGlobeFlyStartSamplePointEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyStartSamplePointEventPtr_OperatorAssign_CGlobeFlyStartSamplePointEventPtr_CGlobeFlyStartSamplePointEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyStartSamplePointEventPtr_OperatorAssign_CGlobeFlyStartSamplePointEventPtr_CGlobeFlyStartSamplePointEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyStartSamplePointEventPtr_bind_void_CGlobeFlyStartSamplePointEvent(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr*) pObjectXXXX;
					ptrNativeObject->bind(rep);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyStartSamplePointEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyStartSamplePointEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEvent*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyStopSamplePointEventPtr_get_CGlobeFlyStopSamplePointEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyStopSamplePointEventPtr_OperatorAssign_CGlobeFlyStopSamplePointEventPtr_CGlobeFlyStopSamplePointEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyStopSamplePointEventPtr_OperatorAssign_CGlobeFlyStopSamplePointEventPtr_CGlobeFlyStopSamplePointEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyStopSamplePointEventPtr_bind_void_CGlobeFlyStopSamplePointEvent(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr*) pObjectXXXX;
					ptrNativeObject->bind(rep);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyStopSamplePointEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyStopSamplePointEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEvent_mcloseWindow( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mcloseWindow;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEvent_mcloseWindow( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent*)pObjectXXXX)->mcloseWindow = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEventPtr_get_CGlobeFlyShowAxisEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEventPtr_OperatorAssign_CGlobeFlyShowAxisEventPtr_CGlobeFlyShowAxisEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEventPtr_OperatorAssign_CGlobeFlyShowAxisEventPtr_CGlobeFlyShowAxisEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEventPtr_bind_void_CGlobeFlyShowAxisEvent(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr*) pObjectXXXX;
					ptrNativeObject->bind(rep);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEvent_mcloseWindow( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mcloseWindow;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEvent_mcloseWindow( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent*)pObjectXXXX)->mcloseWindow = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEventPtr_get_CGlobeFlyAdjustModeEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEventPtr_OperatorAssign_CGlobeFlyAdjustModeEventPtr_CGlobeFlyAdjustModeEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEventPtr_OperatorAssign_CGlobeFlyAdjustModeEventPtr_CGlobeFlyAdjustModeEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEventPtr_bind_void_CGlobeFlyAdjustModeEvent(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr*) pObjectXXXX;
					ptrNativeObject->bind(rep);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
