/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dproxy/effecttreeviewevent.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3DProxy_CEffectTreeviewEvent_getNodeType_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getNodeType();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectTreeviewEvent_setNodeType_void_ev_int32(void *pObjectXXXX, _in ev_int32 nodetype )
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) pObjectXXXX;
				ptrNativeObject->setNodeType(nodetype);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3DProxy_CEffectTreeviewEvent_getName_EVString(void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectTreeviewEvent_setName_void_EVString(void *pObjectXXXX, _in char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) pObjectXXXX;
				ptrNativeObject->setName(name1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3DProxy_CEffectTreeviewEvent_getID_EVString(void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getID();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectTreeviewEvent_setID_void_EVString(void *pObjectXXXX, _in char* id )
			{
				EarthView::World::Core::ev_string id1 = id;
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) pObjectXXXX;
				ptrNativeObject->setID(id1);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CEffectTreeviewEvent_getResponseState_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getResponseState();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectTreeviewEvent_setResponseState_void_ev_bool(void *pObjectXXXX, _in ev_bool state )
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) pObjectXXXX;
				ptrNativeObject->setResponseState(state);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectTreeviewEvent_setPercent_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 percent )
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) pObjectXXXX;
				ptrNativeObject->setPercent(percent);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3DProxy_CEffectTreeviewEvent_getPercent_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getPercent();
				return objXXXX;
			}
		}
	}
}
