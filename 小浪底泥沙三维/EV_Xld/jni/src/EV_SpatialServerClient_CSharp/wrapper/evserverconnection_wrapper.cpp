/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/evserverconnection.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVServerConnection_setAllServiceOpen_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ptrNativeObject->setAllServiceOpen();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVServerConnection_setAllServiceClose_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ptrNativeObject->setAllServiceClose();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVServerConnection_setMetaServiceOpen_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
			{
				EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ptrNativeObject->setMetaServiceOpen(value);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVServerConnection_setGeocodeServiceOpen_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
			{
				EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ptrNativeObject->setGeocodeServiceOpen(value);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVServerConnection_setGlobeServiceOpen_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
			{
				EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ptrNativeObject->setGlobeServiceOpen(value);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVServerConnection_setObqServiceOpen_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
			{
				EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ptrNativeObject->setObqServiceOpen(value);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVServerConnection_setMeshXServiceOpen_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
			{
				EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ptrNativeObject->setMeshXServiceOpen(value);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVServerConnection_setMeshXGServiceOpen_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
			{
				EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ptrNativeObject->setMeshXGServiceOpen(value);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVServerConnection_setModelServiceOpen_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
			{
				EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ptrNativeObject->setModelServiceOpen(value);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVServerConnection_setVector3DServiceOpen_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
			{
				EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ptrNativeObject->setVector3DServiceOpen(value);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVServerConnection_setGeometryServiceOpen_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
			{
				EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ptrNativeObject->setGeometryServiceOpen(value);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVServerConnection_setWMTSServiceOpen_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
			{
				EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ptrNativeObject->setWMTSServiceOpen(value);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVServerConnection_setWMSServiceOpen_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
			{
				EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ptrNativeObject->setWMSServiceOpen(value);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVServerConnection_setWFSServiceOpen_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
			{
				EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ptrNativeObject->setWFSServiceOpen(value);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVServerConnection_getMetaServiceOpenValue_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getMetaServiceOpenValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVServerConnection_getGeocodeServiceOpenValue_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getGeocodeServiceOpenValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVServerConnection_getObqServiceOpenValue_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getObqServiceOpenValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVServerConnection_getMeshXServiceOpenValue_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getMeshXServiceOpenValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVServerConnection_getMeshXGServiceOpenValue_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getMeshXGServiceOpenValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVServerConnection_getModelServiceOpenValue_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getModelServiceOpenValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVServerConnection_getVector3DServiceOpenValue_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getVector3DServiceOpenValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVServerConnection_setLasServiceOpen_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
			{
				EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ptrNativeObject->setLasServiceOpen(value);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVServerConnection_getLasServiceOpenValue_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getLasServiceOpenValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVServerConnection_getGlobeServiceOpenValue_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getGlobeServiceOpenValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVServerConnection_getGeometryServiceOpenValue_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getGeometryServiceOpenValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVServerConnection_getWMTSServiceOpenValue_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getWMTSServiceOpenValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVServerConnection_getWMSServiceOpenValue_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getWMSServiceOpenValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVServerConnection_getWFSServiceOpenValue_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVServerConnection* ptrNativeObject = (EarthView::World::Spatial::CEVServerConnection*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getWFSServiceOpenValue();
				return objXXXX;
			}
		}
	}
}
