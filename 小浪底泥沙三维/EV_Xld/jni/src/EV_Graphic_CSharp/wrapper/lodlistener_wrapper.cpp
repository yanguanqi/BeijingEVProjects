/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/lodlistener.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall Get_EarthView_World_Graphic_MovableObjectLodChangedEvent_movableObject( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MovableObjectLodChangedEvent* ptrNativeObject = (EarthView::World::Graphic::MovableObjectLodChangedEvent*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->movableObject;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MovableObjectLodChangedEvent_movableObject( void *pObjectXXXX, EarthView::World::Graphic::CMovableObject*  value )
			{
				((EarthView::World::Graphic::MovableObjectLodChangedEvent*)pObjectXXXX)->movableObject = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCamera*  _stdcall Get_EarthView_World_Graphic_MovableObjectLodChangedEvent_camera( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MovableObjectLodChangedEvent* ptrNativeObject = (EarthView::World::Graphic::MovableObjectLodChangedEvent*) pObjectXXXX;
				EarthView::World::Graphic::CCamera* objXXXX = ptrNativeObject->camera;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MovableObjectLodChangedEvent_camera( void *pObjectXXXX, EarthView::World::Graphic::CCamera*  value )
			{
				((EarthView::World::Graphic::MovableObjectLodChangedEvent*)pObjectXXXX)->camera = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CEntity*  _stdcall Get_EarthView_World_Graphic_EntityMeshLodChangedEvent_entity( void *pObjectXXXX )
			{
				EarthView::World::Graphic::EntityMeshLodChangedEvent* ptrNativeObject = (EarthView::World::Graphic::EntityMeshLodChangedEvent*) pObjectXXXX;
				EarthView::World::Graphic::CEntity* objXXXX = ptrNativeObject->entity;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_EntityMeshLodChangedEvent_entity( void *pObjectXXXX, EarthView::World::Graphic::CEntity*  value )
			{
				((EarthView::World::Graphic::EntityMeshLodChangedEvent*)pObjectXXXX)->entity = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCamera*  _stdcall Get_EarthView_World_Graphic_EntityMeshLodChangedEvent_camera( void *pObjectXXXX )
			{
				EarthView::World::Graphic::EntityMeshLodChangedEvent* ptrNativeObject = (EarthView::World::Graphic::EntityMeshLodChangedEvent*) pObjectXXXX;
				EarthView::World::Graphic::CCamera* objXXXX = ptrNativeObject->camera;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_EntityMeshLodChangedEvent_camera( void *pObjectXXXX, EarthView::World::Graphic::CCamera*  value )
			{
				((EarthView::World::Graphic::EntityMeshLodChangedEvent*)pObjectXXXX)->camera = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_EntityMeshLodChangedEvent_lodValue( void *pObjectXXXX )
			{
				EarthView::World::Graphic::EntityMeshLodChangedEvent* ptrNativeObject = (EarthView::World::Graphic::EntityMeshLodChangedEvent*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->lodValue;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_EntityMeshLodChangedEvent_lodValue( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::EntityMeshLodChangedEvent*)pObjectXXXX)->lodValue = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_EntityMeshLodChangedEvent_previousLodIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::EntityMeshLodChangedEvent* ptrNativeObject = (EarthView::World::Graphic::EntityMeshLodChangedEvent*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->previousLodIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_EntityMeshLodChangedEvent_previousLodIndex( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::EntityMeshLodChangedEvent*)pObjectXXXX)->previousLodIndex = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_EntityMeshLodChangedEvent_newLodIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::EntityMeshLodChangedEvent* ptrNativeObject = (EarthView::World::Graphic::EntityMeshLodChangedEvent*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->newLodIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_EntityMeshLodChangedEvent_newLodIndex( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::EntityMeshLodChangedEvent*)pObjectXXXX)->newLodIndex = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSubEntity*  _stdcall Get_EarthView_World_Graphic_EntityMaterialLodChangedEvent_subEntity( void *pObjectXXXX )
			{
				EarthView::World::Graphic::EntityMaterialLodChangedEvent* ptrNativeObject = (EarthView::World::Graphic::EntityMaterialLodChangedEvent*) pObjectXXXX;
				EarthView::World::Graphic::CSubEntity* objXXXX = ptrNativeObject->subEntity;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_EntityMaterialLodChangedEvent_subEntity( void *pObjectXXXX, EarthView::World::Graphic::CSubEntity*  value )
			{
				((EarthView::World::Graphic::EntityMaterialLodChangedEvent*)pObjectXXXX)->subEntity = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCamera*  _stdcall Get_EarthView_World_Graphic_EntityMaterialLodChangedEvent_camera( void *pObjectXXXX )
			{
				EarthView::World::Graphic::EntityMaterialLodChangedEvent* ptrNativeObject = (EarthView::World::Graphic::EntityMaterialLodChangedEvent*) pObjectXXXX;
				EarthView::World::Graphic::CCamera* objXXXX = ptrNativeObject->camera;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_EntityMaterialLodChangedEvent_camera( void *pObjectXXXX, EarthView::World::Graphic::CCamera*  value )
			{
				((EarthView::World::Graphic::EntityMaterialLodChangedEvent*)pObjectXXXX)->camera = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_EntityMaterialLodChangedEvent_lodValue( void *pObjectXXXX )
			{
				EarthView::World::Graphic::EntityMaterialLodChangedEvent* ptrNativeObject = (EarthView::World::Graphic::EntityMaterialLodChangedEvent*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->lodValue;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_EntityMaterialLodChangedEvent_lodValue( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::EntityMaterialLodChangedEvent*)pObjectXXXX)->lodValue = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_EntityMaterialLodChangedEvent_previousLodIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::EntityMaterialLodChangedEvent* ptrNativeObject = (EarthView::World::Graphic::EntityMaterialLodChangedEvent*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->previousLodIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_EntityMaterialLodChangedEvent_previousLodIndex( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::EntityMaterialLodChangedEvent*)pObjectXXXX)->previousLodIndex = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_EntityMaterialLodChangedEvent_newLodIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::EntityMaterialLodChangedEvent* ptrNativeObject = (EarthView::World::Graphic::EntityMaterialLodChangedEvent*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->newLodIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_EntityMaterialLodChangedEvent_newLodIndex( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::EntityMaterialLodChangedEvent*)pObjectXXXX)->newLodIndex = value;
			}
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CLodListener_prequeueMovableObjectLodChanged_ev_bool_MovableObjectLodChangedEvent_Callback)(_in const void* evt);
			typedef void  ( _stdcall EarthView_World_Graphic_CLodListener_postqueueMovableObjectLodChanged_void_MovableObjectLodChangedEvent_Callback)(_in const void* evt);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CLodListener_prequeueEntityMeshLodChanged_ev_bool_EntityMeshLodChangedEvent_Callback)(_inout void* evt);
			typedef void  ( _stdcall EarthView_World_Graphic_CLodListener_postqueueEntityMeshLodChanged_void_EntityMeshLodChangedEvent_Callback)(_in const void* evt);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CLodListener_prequeueEntityMaterialLodChanged_ev_bool_EntityMaterialLodChangedEvent_Callback)(_inout void* evt);
			typedef void  ( _stdcall EarthView_World_Graphic_CLodListener_postqueueEntityMaterialLodChanged_void_EntityMaterialLodChangedEvent_Callback)(_in const void* evt);
			class CLodListenerProxy : public EarthView::World::Graphic::CLodListener
			{
			private:
				EarthView_World_Graphic_CLodListener_prequeueMovableObjectLodChanged_ev_bool_MovableObjectLodChangedEvent_Callback* m_EarthView_World_Graphic_CLodListener_prequeueMovableObjectLodChanged_ev_bool_MovableObjectLodChangedEvent_Callback;
				EarthView_World_Graphic_CLodListener_postqueueMovableObjectLodChanged_void_MovableObjectLodChangedEvent_Callback* m_EarthView_World_Graphic_CLodListener_postqueueMovableObjectLodChanged_void_MovableObjectLodChangedEvent_Callback;
				EarthView_World_Graphic_CLodListener_prequeueEntityMeshLodChanged_ev_bool_EntityMeshLodChangedEvent_Callback* m_EarthView_World_Graphic_CLodListener_prequeueEntityMeshLodChanged_ev_bool_EntityMeshLodChangedEvent_Callback;
				EarthView_World_Graphic_CLodListener_postqueueEntityMeshLodChanged_void_EntityMeshLodChangedEvent_Callback* m_EarthView_World_Graphic_CLodListener_postqueueEntityMeshLodChanged_void_EntityMeshLodChangedEvent_Callback;
				EarthView_World_Graphic_CLodListener_prequeueEntityMaterialLodChanged_ev_bool_EntityMaterialLodChangedEvent_Callback* m_EarthView_World_Graphic_CLodListener_prequeueEntityMaterialLodChanged_ev_bool_EntityMaterialLodChangedEvent_Callback;
				EarthView_World_Graphic_CLodListener_postqueueEntityMaterialLodChanged_void_EntityMaterialLodChangedEvent_Callback* m_EarthView_World_Graphic_CLodListener_postqueueEntityMaterialLodChanged_void_EntityMaterialLodChangedEvent_Callback;
			public:
				CLodListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CLodListener(pList)
				{
					m_EarthView_World_Graphic_CLodListener_prequeueMovableObjectLodChanged_ev_bool_MovableObjectLodChangedEvent_Callback = NULL;
					m_EarthView_World_Graphic_CLodListener_postqueueMovableObjectLodChanged_void_MovableObjectLodChangedEvent_Callback = NULL;
					m_EarthView_World_Graphic_CLodListener_prequeueEntityMeshLodChanged_ev_bool_EntityMeshLodChangedEvent_Callback = NULL;
					m_EarthView_World_Graphic_CLodListener_postqueueEntityMeshLodChanged_void_EntityMeshLodChangedEvent_Callback = NULL;
					m_EarthView_World_Graphic_CLodListener_prequeueEntityMaterialLodChanged_ev_bool_EntityMaterialLodChangedEvent_Callback = NULL;
					m_EarthView_World_Graphic_CLodListener_postqueueEntityMaterialLodChanged_void_EntityMaterialLodChangedEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CLodListener_prequeueMovableObjectLodChanged_ev_bool_MovableObjectLodChangedEvent(EarthView_World_Graphic_CLodListener_prequeueMovableObjectLodChanged_ev_bool_MovableObjectLodChangedEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CLodListener_prequeueMovableObjectLodChanged_ev_bool_MovableObjectLodChangedEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CLodListener_postqueueMovableObjectLodChanged_void_MovableObjectLodChangedEvent(EarthView_World_Graphic_CLodListener_postqueueMovableObjectLodChanged_void_MovableObjectLodChangedEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CLodListener_postqueueMovableObjectLodChanged_void_MovableObjectLodChangedEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CLodListener_prequeueEntityMeshLodChanged_ev_bool_EntityMeshLodChangedEvent(EarthView_World_Graphic_CLodListener_prequeueEntityMeshLodChanged_ev_bool_EntityMeshLodChangedEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CLodListener_prequeueEntityMeshLodChanged_ev_bool_EntityMeshLodChangedEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CLodListener_postqueueEntityMeshLodChanged_void_EntityMeshLodChangedEvent(EarthView_World_Graphic_CLodListener_postqueueEntityMeshLodChanged_void_EntityMeshLodChangedEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CLodListener_postqueueEntityMeshLodChanged_void_EntityMeshLodChangedEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CLodListener_prequeueEntityMaterialLodChanged_ev_bool_EntityMaterialLodChangedEvent(EarthView_World_Graphic_CLodListener_prequeueEntityMaterialLodChanged_ev_bool_EntityMaterialLodChangedEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CLodListener_prequeueEntityMaterialLodChanged_ev_bool_EntityMaterialLodChangedEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CLodListener_postqueueEntityMaterialLodChanged_void_EntityMaterialLodChangedEvent(EarthView_World_Graphic_CLodListener_postqueueEntityMaterialLodChanged_void_EntityMaterialLodChangedEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CLodListener_postqueueEntityMaterialLodChanged_void_EntityMaterialLodChangedEvent_Callback = pCallback;
				}
				virtual ev_bool prequeueMovableObjectLodChanged(_in const EarthView::World::Graphic::MovableObjectLodChangedEvent& evt)
				{
					if(m_EarthView_World_Graphic_CLodListener_prequeueMovableObjectLodChanged_ev_bool_MovableObjectLodChangedEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CLodListener_prequeueMovableObjectLodChanged_ev_bool_MovableObjectLodChangedEvent_Callback(&evt);
						return returnValue;
					}
					else
						return this->CLodListener::prequeueMovableObjectLodChanged(evt);
				}
				virtual void postqueueMovableObjectLodChanged(_in const EarthView::World::Graphic::MovableObjectLodChangedEvent& evt)
				{
					if(m_EarthView_World_Graphic_CLodListener_postqueueMovableObjectLodChanged_void_MovableObjectLodChangedEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CLodListener_postqueueMovableObjectLodChanged_void_MovableObjectLodChangedEvent_Callback(&evt);
					}
					else
						return this->CLodListener::postqueueMovableObjectLodChanged(evt);
				}
				virtual ev_bool prequeueEntityMeshLodChanged(_inout EarthView::World::Graphic::EntityMeshLodChangedEvent& evt)
				{
					if(m_EarthView_World_Graphic_CLodListener_prequeueEntityMeshLodChanged_ev_bool_EntityMeshLodChangedEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CLodListener_prequeueEntityMeshLodChanged_ev_bool_EntityMeshLodChangedEvent_Callback(&evt);
						return returnValue;
					}
					else
						return this->CLodListener::prequeueEntityMeshLodChanged(evt);
				}
				virtual void postqueueEntityMeshLodChanged(_in const EarthView::World::Graphic::EntityMeshLodChangedEvent& evt)
				{
					if(m_EarthView_World_Graphic_CLodListener_postqueueEntityMeshLodChanged_void_EntityMeshLodChangedEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CLodListener_postqueueEntityMeshLodChanged_void_EntityMeshLodChangedEvent_Callback(&evt);
					}
					else
						return this->CLodListener::postqueueEntityMeshLodChanged(evt);
				}
				virtual ev_bool prequeueEntityMaterialLodChanged(_inout EarthView::World::Graphic::EntityMaterialLodChangedEvent& evt)
				{
					if(m_EarthView_World_Graphic_CLodListener_prequeueEntityMaterialLodChanged_ev_bool_EntityMaterialLodChangedEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CLodListener_prequeueEntityMaterialLodChanged_ev_bool_EntityMaterialLodChangedEvent_Callback(&evt);
						return returnValue;
					}
					else
						return this->CLodListener::prequeueEntityMaterialLodChanged(evt);
				}
				virtual void postqueueEntityMaterialLodChanged(_in const EarthView::World::Graphic::EntityMaterialLodChangedEvent& evt)
				{
					if(m_EarthView_World_Graphic_CLodListener_postqueueEntityMaterialLodChanged_void_EntityMaterialLodChangedEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CLodListener_postqueueEntityMaterialLodChanged_void_EntityMaterialLodChangedEvent_Callback(&evt);
					}
					else
						return this->CLodListener::postqueueEntityMaterialLodChanged(evt);
				}
			};
			REGISTER_FACTORY_CLASS(CLodListenerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CLodListener_prequeueMovableObjectLodChanged_ev_bool_MovableObjectLodChangedEvent(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CLodListener* ptrNativeObject = (EarthView::World::Graphic::CLodListener*) pObjectXXXX;
				if (dynamic_cast<CLodListenerProxy*>((EarthView::World::Graphic::CLodListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CLodListener::prequeueMovableObjectLodChanged(*(EarthView::World::Graphic::MovableObjectLodChangedEvent*)evt);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->prequeueMovableObjectLodChanged(*(EarthView::World::Graphic::MovableObjectLodChangedEvent*)evt);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CLodListener_prequeueMovableObjectLodChanged_ev_bool_MovableObjectLodChangedEvent( void *pObjectXXXX, EarthView_World_Graphic_CLodListener_prequeueMovableObjectLodChanged_ev_bool_MovableObjectLodChangedEvent_Callback* pCallback )
			{
				CLodListenerProxy* ptr = dynamic_cast<CLodListenerProxy*>((EarthView::World::Graphic::CLodListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CLodListener_prequeueMovableObjectLodChanged_ev_bool_MovableObjectLodChangedEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CLodListener_prequeueMovableObjectLodChanged_ev_bool_MovableObjectLodChangedEvent_NoVirtual(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CLodListener* ptrNativeObject = (EarthView::World::Graphic::CLodListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CLodListener::prequeueMovableObjectLodChanged(*(EarthView::World::Graphic::MovableObjectLodChangedEvent*)evt);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLodListener_postqueueMovableObjectLodChanged_void_MovableObjectLodChangedEvent(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CLodListener* ptrNativeObject = (EarthView::World::Graphic::CLodListener*) pObjectXXXX;
				if (dynamic_cast<CLodListenerProxy*>((EarthView::World::Graphic::CLodListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CLodListener::postqueueMovableObjectLodChanged(*(EarthView::World::Graphic::MovableObjectLodChangedEvent*)evt);
				else
					ptrNativeObject->postqueueMovableObjectLodChanged(*(EarthView::World::Graphic::MovableObjectLodChangedEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CLodListener_postqueueMovableObjectLodChanged_void_MovableObjectLodChangedEvent( void *pObjectXXXX, EarthView_World_Graphic_CLodListener_postqueueMovableObjectLodChanged_void_MovableObjectLodChangedEvent_Callback* pCallback )
			{
				CLodListenerProxy* ptr = dynamic_cast<CLodListenerProxy*>((EarthView::World::Graphic::CLodListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CLodListener_postqueueMovableObjectLodChanged_void_MovableObjectLodChangedEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLodListener_postqueueMovableObjectLodChanged_void_MovableObjectLodChangedEvent_NoVirtual(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CLodListener* ptrNativeObject = (EarthView::World::Graphic::CLodListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CLodListener::postqueueMovableObjectLodChanged(*(EarthView::World::Graphic::MovableObjectLodChangedEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CLodListener_prequeueEntityMeshLodChanged_ev_bool_EntityMeshLodChangedEvent(void *pObjectXXXX, _inout void* evt )
			{
				EarthView::World::Graphic::CLodListener* ptrNativeObject = (EarthView::World::Graphic::CLodListener*) pObjectXXXX;
				if (dynamic_cast<CLodListenerProxy*>((EarthView::World::Graphic::CLodListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CLodListener::prequeueEntityMeshLodChanged(*(EarthView::World::Graphic::EntityMeshLodChangedEvent*)evt);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->prequeueEntityMeshLodChanged(*(EarthView::World::Graphic::EntityMeshLodChangedEvent*)evt);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CLodListener_prequeueEntityMeshLodChanged_ev_bool_EntityMeshLodChangedEvent( void *pObjectXXXX, EarthView_World_Graphic_CLodListener_prequeueEntityMeshLodChanged_ev_bool_EntityMeshLodChangedEvent_Callback* pCallback )
			{
				CLodListenerProxy* ptr = dynamic_cast<CLodListenerProxy*>((EarthView::World::Graphic::CLodListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CLodListener_prequeueEntityMeshLodChanged_ev_bool_EntityMeshLodChangedEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CLodListener_prequeueEntityMeshLodChanged_ev_bool_EntityMeshLodChangedEvent_NoVirtual(void *pObjectXXXX, _inout void* evt )
			{
				EarthView::World::Graphic::CLodListener* ptrNativeObject = (EarthView::World::Graphic::CLodListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CLodListener::prequeueEntityMeshLodChanged(*(EarthView::World::Graphic::EntityMeshLodChangedEvent*)evt);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLodListener_postqueueEntityMeshLodChanged_void_EntityMeshLodChangedEvent(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CLodListener* ptrNativeObject = (EarthView::World::Graphic::CLodListener*) pObjectXXXX;
				if (dynamic_cast<CLodListenerProxy*>((EarthView::World::Graphic::CLodListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CLodListener::postqueueEntityMeshLodChanged(*(EarthView::World::Graphic::EntityMeshLodChangedEvent*)evt);
				else
					ptrNativeObject->postqueueEntityMeshLodChanged(*(EarthView::World::Graphic::EntityMeshLodChangedEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CLodListener_postqueueEntityMeshLodChanged_void_EntityMeshLodChangedEvent( void *pObjectXXXX, EarthView_World_Graphic_CLodListener_postqueueEntityMeshLodChanged_void_EntityMeshLodChangedEvent_Callback* pCallback )
			{
				CLodListenerProxy* ptr = dynamic_cast<CLodListenerProxy*>((EarthView::World::Graphic::CLodListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CLodListener_postqueueEntityMeshLodChanged_void_EntityMeshLodChangedEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLodListener_postqueueEntityMeshLodChanged_void_EntityMeshLodChangedEvent_NoVirtual(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CLodListener* ptrNativeObject = (EarthView::World::Graphic::CLodListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CLodListener::postqueueEntityMeshLodChanged(*(EarthView::World::Graphic::EntityMeshLodChangedEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CLodListener_prequeueEntityMaterialLodChanged_ev_bool_EntityMaterialLodChangedEvent(void *pObjectXXXX, _inout void* evt )
			{
				EarthView::World::Graphic::CLodListener* ptrNativeObject = (EarthView::World::Graphic::CLodListener*) pObjectXXXX;
				if (dynamic_cast<CLodListenerProxy*>((EarthView::World::Graphic::CLodListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CLodListener::prequeueEntityMaterialLodChanged(*(EarthView::World::Graphic::EntityMaterialLodChangedEvent*)evt);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->prequeueEntityMaterialLodChanged(*(EarthView::World::Graphic::EntityMaterialLodChangedEvent*)evt);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CLodListener_prequeueEntityMaterialLodChanged_ev_bool_EntityMaterialLodChangedEvent( void *pObjectXXXX, EarthView_World_Graphic_CLodListener_prequeueEntityMaterialLodChanged_ev_bool_EntityMaterialLodChangedEvent_Callback* pCallback )
			{
				CLodListenerProxy* ptr = dynamic_cast<CLodListenerProxy*>((EarthView::World::Graphic::CLodListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CLodListener_prequeueEntityMaterialLodChanged_ev_bool_EntityMaterialLodChangedEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CLodListener_prequeueEntityMaterialLodChanged_ev_bool_EntityMaterialLodChangedEvent_NoVirtual(void *pObjectXXXX, _inout void* evt )
			{
				EarthView::World::Graphic::CLodListener* ptrNativeObject = (EarthView::World::Graphic::CLodListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CLodListener::prequeueEntityMaterialLodChanged(*(EarthView::World::Graphic::EntityMaterialLodChangedEvent*)evt);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLodListener_postqueueEntityMaterialLodChanged_void_EntityMaterialLodChangedEvent(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CLodListener* ptrNativeObject = (EarthView::World::Graphic::CLodListener*) pObjectXXXX;
				if (dynamic_cast<CLodListenerProxy*>((EarthView::World::Graphic::CLodListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CLodListener::postqueueEntityMaterialLodChanged(*(EarthView::World::Graphic::EntityMaterialLodChangedEvent*)evt);
				else
					ptrNativeObject->postqueueEntityMaterialLodChanged(*(EarthView::World::Graphic::EntityMaterialLodChangedEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CLodListener_postqueueEntityMaterialLodChanged_void_EntityMaterialLodChangedEvent( void *pObjectXXXX, EarthView_World_Graphic_CLodListener_postqueueEntityMaterialLodChanged_void_EntityMaterialLodChangedEvent_Callback* pCallback )
			{
				CLodListenerProxy* ptr = dynamic_cast<CLodListenerProxy*>((EarthView::World::Graphic::CLodListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CLodListener_postqueueEntityMaterialLodChanged_void_EntityMaterialLodChangedEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLodListener_postqueueEntityMaterialLodChanged_void_EntityMaterialLodChangedEvent_NoVirtual(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CLodListener* ptrNativeObject = (EarthView::World::Graphic::CLodListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CLodListener::postqueueEntityMaterialLodChanged(*(EarthView::World::Graphic::EntityMaterialLodChangedEvent*)evt);
			}
		}
	}
}
