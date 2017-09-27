/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/operationmanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_IIndexObserver_onIndexChanged_void_Callback)();
				class IIndexObserverProxy : public EarthView::World::Spatial2D::Controls::IIndexObserver
				{
				private:
					EarthView_World_Spatial2D_Controls_IIndexObserver_onIndexChanged_void_Callback* m_EarthView_World_Spatial2D_Controls_IIndexObserver_onIndexChanged_void_Callback;
				public:
					IIndexObserverProxy(EarthView::World::Core::CNameValuePairList *pList) : IIndexObserver(pList)
					{
						m_EarthView_World_Spatial2D_Controls_IIndexObserver_onIndexChanged_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_IIndexObserver_onIndexChanged_void(EarthView_World_Spatial2D_Controls_IIndexObserver_onIndexChanged_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_IIndexObserver_onIndexChanged_void_Callback = pCallback;
					}
					virtual void onIndexChanged()
					{
						if(m_EarthView_World_Spatial2D_Controls_IIndexObserver_onIndexChanged_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_IIndexObserver_onIndexChanged_void_Callback();
						}
						else
							return this->IIndexObserver::onIndexChanged();
					}
				};
				REGISTER_FACTORY_CLASS(IIndexObserverProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IIndexObserver_onIndexChanged_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::IIndexObserver* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IIndexObserver*) pObjectXXXX;
					if (dynamic_cast<IIndexObserverProxy*>((EarthView::World::Spatial2D::Controls::IIndexObserver*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::IIndexObserver::onIndexChanged();
					else
						ptrNativeObject->onIndexChanged();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IIndexObserver_onIndexChanged_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_IIndexObserver_onIndexChanged_void_Callback* pCallback )
				{
					IIndexObserverProxy* ptr = dynamic_cast<IIndexObserverProxy*>((EarthView::World::Spatial2D::Controls::IIndexObserver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_IIndexObserver_onIndexChanged_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_IIndexObserver_onIndexChanged_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::IIndexObserver* ptrNativeObject = (EarthView::World::Spatial2D::Controls::IIndexObserver*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::IIndexObserver::onIndexChanged();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_COperationManager_canRedo_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::COperationManager* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->canRedo();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_COperationManager_canUndo_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::COperationManager* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->canUndo();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_COperationManager_getCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::COperationManager* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::COperation*  _stdcall EarthView_World_Spatial2D_Controls_COperationManager_getOperation_COperation_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial2D::Controls::COperationManager* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::COperation* objXXXX = ptrNativeObject->getOperation(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_COperationManager_getUndoLimit_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::COperationManager* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getUndoLimit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_COperationManager_setUndoLimit_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 limit )
				{
					EarthView::World::Spatial2D::Controls::COperationManager* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjectXXXX;
					ptrNativeObject->setUndoLimit(limit);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_COperationManager_redo_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::COperationManager* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjectXXXX;
					ptrNativeObject->redo();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_COperationManager_undo_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::COperationManager* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjectXXXX;
					ptrNativeObject->undo();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_COperationManager_beginMacro_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::COperationManager* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjectXXXX;
					ptrNativeObject->beginMacro();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_COperationManager_endMacro_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::COperationManager* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjectXXXX;
					ptrNativeObject->endMacro();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_COperationManager_isInMacro_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::COperationManager* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isInMacro();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_COperationManager_abortMacro_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::COperationManager* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjectXXXX;
					ptrNativeObject->abortMacro();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_COperationManager_getCurrentIndex_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::COperationManager* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getCurrentIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_COperationManager_push_ev_bool_COperation(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::COperation* operation )
				{
					EarthView::World::Spatial2D::Controls::COperationManager* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->push(operation);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_COperationManager_isPushBlocked_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::COperationManager* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isPushBlocked();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_COperationManager_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::COperationManager* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_COperationManager_registerObserver_void_IIndexObserver(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::IIndexObserver* observer )
				{
					EarthView::World::Spatial2D::Controls::COperationManager* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjectXXXX;
					ptrNativeObject->registerObserver(observer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_COperationManager_unregisterObserver_void_IIndexObserver(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::IIndexObserver* observer )
				{
					EarthView::World::Spatial2D::Controls::COperationManager* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjectXXXX;
					ptrNativeObject->unregisterObserver(observer);
				}
			}
		}
	}
}
