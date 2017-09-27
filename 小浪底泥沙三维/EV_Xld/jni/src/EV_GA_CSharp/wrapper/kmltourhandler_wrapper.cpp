/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/kmltourhandler.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CTourEndEvent_getTourPath_CKmlTourPathPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTourEndEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTourEndEvent*) pObjectXXXX;
					EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr objXXXX = ptrNativeObject->getTourPath();
					EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr *pXXXX = new EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CTourEndEvent_setTourPath_void_CKmlTourPathPtr(void *pObjectXXXX, _in const void* kmlTourPath )
				{
					EarthView::World::Spatial3D::Controls::CTourEndEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTourEndEvent*) pObjectXXXX;
					ptrNativeObject->setTourPath(*(EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr*)kmlTourPath);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Controls_CKmlTourEvent_getKmlEventType_KmlEventType(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CKmlTourEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CKmlTourEvent*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CKmlTourEvent::KmlEventType objXXXX = ptrNativeObject->getKmlEventType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CKmlTourEvent*  _stdcall EarthView_World_Spatial3D_Controls_CKmlTourEventPtr_get_CKmlTourEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CKmlTourEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CKmlTourEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CKmlTourEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlTourEventPtr_OperatorAssign_CKmlTourEventPtr_CKmlTourEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CKmlTourEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CKmlTourEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CKmlTourEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CKmlTourEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlTourEventPtr_OperatorAssign_CKmlTourEventPtr_CKmlTourEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CKmlTourEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CKmlTourEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CKmlTourEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CKmlTourEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlTourEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CKmlTourEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CKmlTourEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlTourEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CKmlTourEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CKmlTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Controls_CKmlTourPathEvent_mkmlTourPath( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CKmlTourPathEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CKmlTourPathEvent*) pObjectXXXX;
					EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr &objXXXX = ptrNativeObject->mkmlTourPath;
					EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CKmlTourPathEvent_mkmlTourPath( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Controls::CKmlTourPathEvent*)pObjectXXXX)->mkmlTourPath = *(EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr*)value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CKmlTourPathEvent*  _stdcall EarthView_World_Spatial3D_Controls_CKmlTourPathEventPtr_get_CKmlTourPathEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CKmlTourPathEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlTourPathEventPtr_OperatorAssign_CKmlTourPathEventPtr_CKmlTourPathEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlTourPathEventPtr_OperatorAssign_CKmlTourPathEventPtr_CKmlTourPathEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CKmlTourPathEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlTourPathEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlTourPathEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CKmlStartTourEvent*  _stdcall EarthView_World_Spatial3D_Controls_CKmlStartTourEventPtr_get_CKmlStartTourEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CKmlStartTourEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlStartTourEventPtr_OperatorAssign_CKmlStartTourEventPtr_CKmlStartTourEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlStartTourEventPtr_OperatorAssign_CKmlStartTourEventPtr_CKmlStartTourEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CKmlStartTourEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlStartTourEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlStartTourEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CKmlStopTourEvent*  _stdcall EarthView_World_Spatial3D_Controls_CKmlStopTourEventPtr_get_CKmlStopTourEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CKmlStopTourEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlStopTourEventPtr_OperatorAssign_CKmlStopTourEventPtr_CKmlStopTourEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlStopTourEventPtr_OperatorAssign_CKmlStopTourEventPtr_CKmlStopTourEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CKmlStopTourEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlStopTourEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlStopTourEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEvent*  _stdcall EarthView_World_Spatial3D_Controls_CKmlStartRecordTourEventPtr_get_CKmlStartRecordTourEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlStartRecordTourEventPtr_OperatorAssign_CKmlStartRecordTourEventPtr_CKmlStartRecordTourEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlStartRecordTourEventPtr_OperatorAssign_CKmlStartRecordTourEventPtr_CKmlStartRecordTourEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlStartRecordTourEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlStartRecordTourEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEvent*  _stdcall EarthView_World_Spatial3D_Controls_CKmlStopRecordTourEventPtr_get_CKmlStopRecordTourEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlStopRecordTourEventPtr_OperatorAssign_CKmlStopRecordTourEventPtr_CKmlStopRecordTourEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlStopRecordTourEventPtr_OperatorAssign_CKmlStopRecordTourEventPtr_CKmlStopRecordTourEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlStopRecordTourEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CKmlStopRecordTourEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleUseEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleFrame_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				class CKmlTourHandlerProxy : public EarthView::World::Spatial3D::Controls::CKmlTourHandler
				{
				private:
					EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleUseEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleUseEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleFrame_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleFrame_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleEvent_ev_bool_CGUIEvent_Callback;
				public:
					CKmlTourHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlTourHandler(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleUseEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleFrame_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleEvent_ev_bool_CGUIEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleUseEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleUseEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleUseEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleFrame_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleFrame_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleFrame_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					virtual ev_bool handleUseEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleUseEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleUseEvent_ev_bool_CGUIEvent_Callback(userEvent);
							return returnValue;
						}
						else
							return this->CKmlTourHandler::handleUseEvent(userEvent);
					}
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CKmlTourHandler::handleEvent(guiEvent);
					}
					virtual ev_bool handleFrame(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleFrame_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleFrame_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CKmlTourHandler::handleFrame(guiEvent);
					}
				};
				REGISTER_FACTORY_CLASS(CKmlTourHandlerProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleUseEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent )
				{
					EarthView::World::Spatial3D::Controls::CKmlTourHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CKmlTourHandler*) pObjectXXXX;
					if (dynamic_cast<CKmlTourHandlerProxy*>((EarthView::World::Spatial3D::Controls::CKmlTourHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CKmlTourHandler::handleUseEvent(userEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleUseEvent(userEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleUseEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleUseEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CKmlTourHandlerProxy* ptr = dynamic_cast<CKmlTourHandlerProxy*>((EarthView::World::Spatial3D::Controls::CKmlTourHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleUseEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleUseEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent )
				{
					EarthView::World::Spatial3D::Controls::CKmlTourHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CKmlTourHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CKmlTourHandler::handleUseEvent(userEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CKmlTourHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CKmlTourHandler*) pObjectXXXX;
					if (dynamic_cast<CKmlTourHandlerProxy*>((EarthView::World::Spatial3D::Controls::CKmlTourHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CKmlTourHandler::handleEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CKmlTourHandlerProxy* ptr = dynamic_cast<CKmlTourHandlerProxy*>((EarthView::World::Spatial3D::Controls::CKmlTourHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CKmlTourHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CKmlTourHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CKmlTourHandler::handleEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleFrame_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CKmlTourHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CKmlTourHandler*) pObjectXXXX;
					if (dynamic_cast<CKmlTourHandlerProxy*>((EarthView::World::Spatial3D::Controls::CKmlTourHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CKmlTourHandler::handleFrame(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleFrame(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleFrame_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleFrame_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CKmlTourHandlerProxy* ptr = dynamic_cast<CKmlTourHandlerProxy*>((EarthView::World::Spatial3D::Controls::CKmlTourHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleFrame_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleFrame_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CKmlTourHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CKmlTourHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CKmlTourHandler::handleFrame(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CKmlTourHandler_sendActiveEvent_void_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* event )
				{
					EarthView::World::Spatial3D::Controls::CKmlTourHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CKmlTourHandler*) pObjectXXXX;
					ptrNativeObject->sendActiveEvent(event);
				}
			}
		}
	}
}
