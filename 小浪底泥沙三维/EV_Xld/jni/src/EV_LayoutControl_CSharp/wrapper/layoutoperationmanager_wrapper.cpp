/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "layoutcontrol/layoutoperationmanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Layout
		{
			namespace Controls
			{
				typedef void  ( _stdcall EarthView_World_Layout_Controls_ILayoutIndexObserver_onIndexChanged_void_Callback)();
				class ILayoutIndexObserverProxy : public EarthView::World::Layout::Controls::ILayoutIndexObserver
				{
				private:
					EarthView_World_Layout_Controls_ILayoutIndexObserver_onIndexChanged_void_Callback* m_EarthView_World_Layout_Controls_ILayoutIndexObserver_onIndexChanged_void_Callback;
				public:
					ILayoutIndexObserverProxy(EarthView::World::Core::CNameValuePairList *pList) : ILayoutIndexObserver(pList)
					{
						m_EarthView_World_Layout_Controls_ILayoutIndexObserver_onIndexChanged_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Layout_Controls_ILayoutIndexObserver_onIndexChanged_void(EarthView_World_Layout_Controls_ILayoutIndexObserver_onIndexChanged_void_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_ILayoutIndexObserver_onIndexChanged_void_Callback = pCallback;
					}
					virtual void onIndexChanged()
					{
						if(m_EarthView_World_Layout_Controls_ILayoutIndexObserver_onIndexChanged_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_ILayoutIndexObserver_onIndexChanged_void_Callback();
						}
						else
							return this->ILayoutIndexObserver::onIndexChanged();
					}
				};
				REGISTER_FACTORY_CLASS(ILayoutIndexObserverProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_ILayoutIndexObserver_onIndexChanged_void(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::ILayoutIndexObserver* ptrNativeObject = (EarthView::World::Layout::Controls::ILayoutIndexObserver*) pObjectXXXX;
					if (dynamic_cast<ILayoutIndexObserverProxy*>((EarthView::World::Layout::Controls::ILayoutIndexObserver*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Layout::Controls::ILayoutIndexObserver::onIndexChanged();
					else
						ptrNativeObject->onIndexChanged();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_ILayoutIndexObserver_onIndexChanged_void( void *pObjectXXXX, EarthView_World_Layout_Controls_ILayoutIndexObserver_onIndexChanged_void_Callback* pCallback )
				{
					ILayoutIndexObserverProxy* ptr = dynamic_cast<ILayoutIndexObserverProxy*>((EarthView::World::Layout::Controls::ILayoutIndexObserver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_ILayoutIndexObserver_onIndexChanged_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_ILayoutIndexObserver_onIndexChanged_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::ILayoutIndexObserver* ptrNativeObject = (EarthView::World::Layout::Controls::ILayoutIndexObserver*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Layout::Controls::ILayoutIndexObserver::onIndexChanged();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CLayoutOperationManager_canRedo_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutOperationManager* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->canRedo();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CLayoutOperationManager_canUndo_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutOperationManager* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->canUndo();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Layout_Controls_CLayoutOperationManager_getCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutOperationManager* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Layout::Controls::CLayoutOperation*  _stdcall EarthView_World_Layout_Controls_CLayoutOperationManager_getOperation_CLayoutOperation_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Layout::Controls::CLayoutOperationManager* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjectXXXX;
					EarthView::World::Layout::Controls::CLayoutOperation* objXXXX = ptrNativeObject->getOperation(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Layout_Controls_CLayoutOperationManager_getUndoLimit_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutOperationManager* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getUndoLimit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutOperationManager_setUndoLimit_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 limit )
				{
					EarthView::World::Layout::Controls::CLayoutOperationManager* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjectXXXX;
					ptrNativeObject->setUndoLimit(limit);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutOperationManager_redo_void(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutOperationManager* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjectXXXX;
					ptrNativeObject->redo();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutOperationManager_undo_void(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutOperationManager* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjectXXXX;
					ptrNativeObject->undo();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutOperationManager_beginMacro_void(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutOperationManager* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjectXXXX;
					ptrNativeObject->beginMacro();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutOperationManager_endMacro_void(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutOperationManager* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjectXXXX;
					ptrNativeObject->endMacro();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CLayoutOperationManager_isInMacro_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutOperationManager* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isInMacro();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutOperationManager_abortMacro_void(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutOperationManager* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjectXXXX;
					ptrNativeObject->abortMacro();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Layout_Controls_CLayoutOperationManager_getCurrentIndex_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutOperationManager* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getCurrentIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CLayoutOperationManager_push_ev_bool_CLayoutOperation(void *pObjectXXXX, _in EarthView::World::Layout::Controls::CLayoutOperation* ref_operation )
				{
					EarthView::World::Layout::Controls::CLayoutOperationManager* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->push(ref_operation);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CLayoutOperationManager_isPushBlocked_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutOperationManager* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isPushBlocked();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutOperationManager_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutOperationManager* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutOperationManager_registerObserver_void_ILayoutIndexObserver(void *pObjectXXXX, _in EarthView::World::Layout::Controls::ILayoutIndexObserver* ref_observer )
				{
					EarthView::World::Layout::Controls::CLayoutOperationManager* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjectXXXX;
					ptrNativeObject->registerObserver(ref_observer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutOperationManager_unregisterObserver_void_ILayoutIndexObserver(void *pObjectXXXX, _in EarthView::World::Layout::Controls::ILayoutIndexObserver* observer )
				{
					EarthView::World::Layout::Controls::CLayoutOperationManager* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjectXXXX;
					ptrNativeObject->unregisterObserver(observer);
				}
			}
		}
	}
}
