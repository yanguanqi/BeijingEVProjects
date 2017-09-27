/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/globeanimationhandler.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
			}
		}
		namespace Graphic
		{
		}
		namespace Spatial3D
		{
			namespace Dataset
			{
			}
			namespace ModelManager
			{
			}
			namespace Controls
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_startRouteFly_void_CModelBaseObject_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStarted_void_CModelBaseObject_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_stopRouteFly_void_CModelBaseObject_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStoped_void_CModelBaseObject_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_pauseRouteFly_void_CModelBaseObject_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyPaused_void_CModelBaseObject_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_continueRouteFly_void_CModelBaseObject_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyContinued_void_CModelBaseObject_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyFinished_void_Callback)();
				class CRouteFlyListenerProxy : public EarthView::World::Spatial3D::Controls::CRouteFlyListener
				{
				private:
					EarthView_World_Spatial3D_Controls_CRouteFlyListener_startRouteFly_void_CModelBaseObject_Callback* m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_startRouteFly_void_CModelBaseObject_Callback;
					EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStarted_void_CModelBaseObject_Callback* m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStarted_void_CModelBaseObject_Callback;
					EarthView_World_Spatial3D_Controls_CRouteFlyListener_stopRouteFly_void_CModelBaseObject_Callback* m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_stopRouteFly_void_CModelBaseObject_Callback;
					EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStoped_void_CModelBaseObject_Callback* m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStoped_void_CModelBaseObject_Callback;
					EarthView_World_Spatial3D_Controls_CRouteFlyListener_pauseRouteFly_void_CModelBaseObject_Callback* m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_pauseRouteFly_void_CModelBaseObject_Callback;
					EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyPaused_void_CModelBaseObject_Callback* m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyPaused_void_CModelBaseObject_Callback;
					EarthView_World_Spatial3D_Controls_CRouteFlyListener_continueRouteFly_void_CModelBaseObject_Callback* m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_continueRouteFly_void_CModelBaseObject_Callback;
					EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyContinued_void_CModelBaseObject_Callback* m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyContinued_void_CModelBaseObject_Callback;
					EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyFinished_void_Callback* m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyFinished_void_Callback;
				public:
					CRouteFlyListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRouteFlyListener(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_startRouteFly_void_CModelBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStarted_void_CModelBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_stopRouteFly_void_CModelBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStoped_void_CModelBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_pauseRouteFly_void_CModelBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyPaused_void_CModelBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_continueRouteFly_void_CModelBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyContinued_void_CModelBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyFinished_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_startRouteFly_void_CModelBaseObject(EarthView_World_Spatial3D_Controls_CRouteFlyListener_startRouteFly_void_CModelBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_startRouteFly_void_CModelBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStarted_void_CModelBaseObject(EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStarted_void_CModelBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStarted_void_CModelBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_stopRouteFly_void_CModelBaseObject(EarthView_World_Spatial3D_Controls_CRouteFlyListener_stopRouteFly_void_CModelBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_stopRouteFly_void_CModelBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStoped_void_CModelBaseObject(EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStoped_void_CModelBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStoped_void_CModelBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_pauseRouteFly_void_CModelBaseObject(EarthView_World_Spatial3D_Controls_CRouteFlyListener_pauseRouteFly_void_CModelBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_pauseRouteFly_void_CModelBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyPaused_void_CModelBaseObject(EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyPaused_void_CModelBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyPaused_void_CModelBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_continueRouteFly_void_CModelBaseObject(EarthView_World_Spatial3D_Controls_CRouteFlyListener_continueRouteFly_void_CModelBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_continueRouteFly_void_CModelBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyContinued_void_CModelBaseObject(EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyContinued_void_CModelBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyContinued_void_CModelBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyFinished_void(EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyFinished_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyFinished_void_Callback = pCallback;
					}
					virtual void startRouteFly(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject)
					{
						if(m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_startRouteFly_void_CModelBaseObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_startRouteFly_void_CModelBaseObject_Callback(pManualModelObject);
						}
						else
							return this->CRouteFlyListener::startRouteFly(pManualModelObject);
					}
					virtual void onRouteFlyStarted(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject)
					{
						if(m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStarted_void_CModelBaseObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStarted_void_CModelBaseObject_Callback(pManualModelObject);
						}
						else
							return this->CRouteFlyListener::onRouteFlyStarted(pManualModelObject);
					}
					virtual void stopRouteFly(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject)
					{
						if(m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_stopRouteFly_void_CModelBaseObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_stopRouteFly_void_CModelBaseObject_Callback(pManualModelObject);
						}
						else
							return this->CRouteFlyListener::stopRouteFly(pManualModelObject);
					}
					virtual void onRouteFlyStoped(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject)
					{
						if(m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStoped_void_CModelBaseObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStoped_void_CModelBaseObject_Callback(pManualModelObject);
						}
						else
							return this->CRouteFlyListener::onRouteFlyStoped(pManualModelObject);
					}
					virtual void pauseRouteFly(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject)
					{
						if(m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_pauseRouteFly_void_CModelBaseObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_pauseRouteFly_void_CModelBaseObject_Callback(pManualModelObject);
						}
						else
							return this->CRouteFlyListener::pauseRouteFly(pManualModelObject);
					}
					virtual void onRouteFlyPaused(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject)
					{
						if(m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyPaused_void_CModelBaseObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyPaused_void_CModelBaseObject_Callback(pManualModelObject);
						}
						else
							return this->CRouteFlyListener::onRouteFlyPaused(pManualModelObject);
					}
					virtual void continueRouteFly(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject)
					{
						if(m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_continueRouteFly_void_CModelBaseObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_continueRouteFly_void_CModelBaseObject_Callback(pManualModelObject);
						}
						else
							return this->CRouteFlyListener::continueRouteFly(pManualModelObject);
					}
					virtual void onRouteFlyContinued(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject)
					{
						if(m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyContinued_void_CModelBaseObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyContinued_void_CModelBaseObject_Callback(pManualModelObject);
						}
						else
							return this->CRouteFlyListener::onRouteFlyContinued(pManualModelObject);
					}
					virtual void onRouteFlyFinished()
					{
						if(m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyFinished_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyFinished_void_Callback();
						}
						else
							return this->CRouteFlyListener::onRouteFlyFinished();
					}
				};
				REGISTER_FACTORY_CLASS(CRouteFlyListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_startRouteFly_void_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject )
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX;
					if (dynamic_cast<CRouteFlyListenerProxy*>((EarthView::World::Spatial3D::Controls::CRouteFlyListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CRouteFlyListener::startRouteFly(pManualModelObject);
					else
						ptrNativeObject->startRouteFly(pManualModelObject);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_startRouteFly_void_CModelBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CRouteFlyListener_startRouteFly_void_CModelBaseObject_Callback* pCallback )
				{
					CRouteFlyListenerProxy* ptr = dynamic_cast<CRouteFlyListenerProxy*>((EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_startRouteFly_void_CModelBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_startRouteFly_void_CModelBaseObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject )
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CRouteFlyListener::startRouteFly(pManualModelObject);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStarted_void_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject )
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX;
					if (dynamic_cast<CRouteFlyListenerProxy*>((EarthView::World::Spatial3D::Controls::CRouteFlyListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CRouteFlyListener::onRouteFlyStarted(pManualModelObject);
					else
						ptrNativeObject->onRouteFlyStarted(pManualModelObject);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStarted_void_CModelBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStarted_void_CModelBaseObject_Callback* pCallback )
				{
					CRouteFlyListenerProxy* ptr = dynamic_cast<CRouteFlyListenerProxy*>((EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStarted_void_CModelBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStarted_void_CModelBaseObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject )
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CRouteFlyListener::onRouteFlyStarted(pManualModelObject);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_stopRouteFly_void_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject )
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX;
					if (dynamic_cast<CRouteFlyListenerProxy*>((EarthView::World::Spatial3D::Controls::CRouteFlyListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CRouteFlyListener::stopRouteFly(pManualModelObject);
					else
						ptrNativeObject->stopRouteFly(pManualModelObject);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_stopRouteFly_void_CModelBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CRouteFlyListener_stopRouteFly_void_CModelBaseObject_Callback* pCallback )
				{
					CRouteFlyListenerProxy* ptr = dynamic_cast<CRouteFlyListenerProxy*>((EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_stopRouteFly_void_CModelBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_stopRouteFly_void_CModelBaseObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject )
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CRouteFlyListener::stopRouteFly(pManualModelObject);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStoped_void_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject )
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX;
					if (dynamic_cast<CRouteFlyListenerProxy*>((EarthView::World::Spatial3D::Controls::CRouteFlyListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CRouteFlyListener::onRouteFlyStoped(pManualModelObject);
					else
						ptrNativeObject->onRouteFlyStoped(pManualModelObject);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStoped_void_CModelBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStoped_void_CModelBaseObject_Callback* pCallback )
				{
					CRouteFlyListenerProxy* ptr = dynamic_cast<CRouteFlyListenerProxy*>((EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStoped_void_CModelBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyStoped_void_CModelBaseObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject )
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CRouteFlyListener::onRouteFlyStoped(pManualModelObject);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_pauseRouteFly_void_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject )
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX;
					if (dynamic_cast<CRouteFlyListenerProxy*>((EarthView::World::Spatial3D::Controls::CRouteFlyListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CRouteFlyListener::pauseRouteFly(pManualModelObject);
					else
						ptrNativeObject->pauseRouteFly(pManualModelObject);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_pauseRouteFly_void_CModelBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CRouteFlyListener_pauseRouteFly_void_CModelBaseObject_Callback* pCallback )
				{
					CRouteFlyListenerProxy* ptr = dynamic_cast<CRouteFlyListenerProxy*>((EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_pauseRouteFly_void_CModelBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_pauseRouteFly_void_CModelBaseObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject )
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CRouteFlyListener::pauseRouteFly(pManualModelObject);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyPaused_void_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject )
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX;
					if (dynamic_cast<CRouteFlyListenerProxy*>((EarthView::World::Spatial3D::Controls::CRouteFlyListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CRouteFlyListener::onRouteFlyPaused(pManualModelObject);
					else
						ptrNativeObject->onRouteFlyPaused(pManualModelObject);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyPaused_void_CModelBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyPaused_void_CModelBaseObject_Callback* pCallback )
				{
					CRouteFlyListenerProxy* ptr = dynamic_cast<CRouteFlyListenerProxy*>((EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyPaused_void_CModelBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyPaused_void_CModelBaseObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject )
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CRouteFlyListener::onRouteFlyPaused(pManualModelObject);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_continueRouteFly_void_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject )
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX;
					if (dynamic_cast<CRouteFlyListenerProxy*>((EarthView::World::Spatial3D::Controls::CRouteFlyListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CRouteFlyListener::continueRouteFly(pManualModelObject);
					else
						ptrNativeObject->continueRouteFly(pManualModelObject);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_continueRouteFly_void_CModelBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CRouteFlyListener_continueRouteFly_void_CModelBaseObject_Callback* pCallback )
				{
					CRouteFlyListenerProxy* ptr = dynamic_cast<CRouteFlyListenerProxy*>((EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_continueRouteFly_void_CModelBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_continueRouteFly_void_CModelBaseObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject )
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CRouteFlyListener::continueRouteFly(pManualModelObject);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyContinued_void_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject )
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX;
					if (dynamic_cast<CRouteFlyListenerProxy*>((EarthView::World::Spatial3D::Controls::CRouteFlyListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CRouteFlyListener::onRouteFlyContinued(pManualModelObject);
					else
						ptrNativeObject->onRouteFlyContinued(pManualModelObject);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyContinued_void_CModelBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyContinued_void_CModelBaseObject_Callback* pCallback )
				{
					CRouteFlyListenerProxy* ptr = dynamic_cast<CRouteFlyListenerProxy*>((EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyContinued_void_CModelBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyContinued_void_CModelBaseObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject )
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CRouteFlyListener::onRouteFlyContinued(pManualModelObject);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyFinished_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX;
					if (dynamic_cast<CRouteFlyListenerProxy*>((EarthView::World::Spatial3D::Controls::CRouteFlyListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CRouteFlyListener::onRouteFlyFinished();
					else
						ptrNativeObject->onRouteFlyFinished();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyFinished_void( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyFinished_void_Callback* pCallback )
				{
					CRouteFlyListenerProxy* ptr = dynamic_cast<CRouteFlyListenerProxy*>((EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyFinished_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CRouteFlyListener_onRouteFlyFinished_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CRouteFlyListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CRouteFlyListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CRouteFlyListener::onRouteFlyFinished();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CControlPoints_push_back_void_CManualObject(void *pObjectXXXX, _in EarthView::World::Graphic::CManualObject*& t )
				{
					EarthView::World::Spatial3D::Controls::CControlPoints* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjectXXXX;
					ptrNativeObject->push_back(t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CControlPoints_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CControlPoints* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CManualObject*  _stdcall EarthView_World_Spatial3D_Controls_CControlPoints_front_CManualObject(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CControlPoints* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjectXXXX;
					EarthView::World::Graphic::CManualObject* objXXXX = ptrNativeObject->front();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CManualObject*  _stdcall EarthView_World_Spatial3D_Controls_CControlPoints_back_CManualObject(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CControlPoints* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjectXXXX;
					EarthView::World::Graphic::CManualObject* objXXXX = ptrNativeObject->back();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CControlPoints_insert_void_ev_uint32_CManualObject(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CManualObject*& t )
				{
					EarthView::World::Spatial3D::Controls::CControlPoints* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjectXXXX;
					ptrNativeObject->insert(pos, t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CControlPoints_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::Controls::CControlPoints* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CControlPoints_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CControlPoints* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CManualObject*  _stdcall EarthView_World_Spatial3D_Controls_CControlPoints_OperatorIndex_CManualObject_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Controls::CControlPoints& objYYYY = *(EarthView::World::Spatial3D::Controls::CControlPoints*) pObjXXXX;
					EarthView::World::Graphic::CManualObject* objXXXX = objYYYY[n];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CManualObject*  _stdcall EarthView_World_Spatial3D_Controls_CControlPoints_at_CManualObject_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Controls::CControlPoints* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjectXXXX;
					EarthView::World::Graphic::CManualObject* objXXXX = ptrNativeObject->at(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Controls_CControlPoints_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CControlPoints* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CControlPoints_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::Controls::CControlPoints* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CControlPoints_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::Controls::CControlPoints* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CControlPoints_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CControlPoints* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CControlPoints*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUpEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyDownEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyUpEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUserEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_drawFlyLine_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUseEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUp_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_computeAltitudeDelta_ev_real64_CVector3_Callback)(_in const void* v);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				class CGlobeAnimationHandlerProxy : public EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler
				{
				private:
					EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUpEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUpEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyDownEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyDownEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyUpEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyUpEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUserEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUserEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_drawFlyLine_ev_bool_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_drawFlyLine_ev_bool_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUseEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUseEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUp_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUp_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_computeAltitudeDelta_ev_real64_CVector3_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_computeAltitudeDelta_ev_real64_CVector3_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleEvent_ev_bool_CGUIEvent_Callback;
				public:
					CGlobeAnimationHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CGlobeAnimationHandler(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUpEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyDownEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyUpEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUserEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_drawFlyLine_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUseEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUp_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_computeAltitudeDelta_ev_real64_CVector3_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleEvent_ev_bool_CGUIEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUpEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUpEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUpEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyDownEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyDownEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyDownEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyUpEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyUpEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyUpEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUserEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUserEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_drawFlyLine_ev_bool(EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_drawFlyLine_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_drawFlyLine_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUseEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUseEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUseEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleFrameEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseDownEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseMoveEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUp_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUp_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUp_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseWheelEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_computeAltitudeDelta_ev_real64_CVector3(EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_computeAltitudeDelta_ev_real64_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_computeAltitudeDelta_ev_real64_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CGlobeAnimationHandler::handleEvent(guiEvent);
					}
					virtual ev_bool handleMouseUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUpEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUpEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CGlobeAnimationHandler::handleMouseUpEvent(guiEvent);
					}
					virtual ev_bool handleKeyDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyDownEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyDownEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CGlobeAnimationHandler::handleKeyDownEvent(guiEvent);
					}
					virtual ev_bool handleKeyUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyUpEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyUpEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CGlobeAnimationHandler::handleKeyUpEvent(guiEvent);
					}
					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CGlobeAnimationHandler::handleFrameEvent(guiEvent);
					}
					virtual ev_bool handleUserEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUserEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUserEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CGlobeAnimationHandler::handleUserEvent(guiEvent);
					}
					virtual ev_bool handleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CGlobeAnimationHandler::handleMouseDownEvent(guiEvent);
					}
					virtual ev_bool handleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CGlobeAnimationHandler::handleMouseMoveEvent(guiEvent);
					}
					virtual ev_bool handleMouseWheelEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CGlobeAnimationHandler::handleMouseWheelEvent(guiEvent);
					}
					virtual ev_bool drawFlyLine()
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_drawFlyLine_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_drawFlyLine_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGlobeAnimationHandler::drawFlyLine();
					}
					virtual ev_bool handleUseEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUseEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUseEvent_ev_bool_CGUIEvent_Callback(userEvent);
							return returnValue;
						}
						else
							return this->CGlobeAnimationHandler::handleUseEvent(userEvent);
					}
					virtual ev_bool handleMouseUp(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUp_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUp_ev_bool_CGUIEvent_Callback(mouseEvent);
							return returnValue;
						}
						else
							return this->CGlobeAnimationHandler::handleMouseUp(mouseEvent);
					}
					virtual ev_real64 computeAltitudeDelta(_in const EarthView::World::Spatial::Math::CVector3& v)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_computeAltitudeDelta_ev_real64_CVector3_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_computeAltitudeDelta_ev_real64_CVector3_Callback(&v);
							return returnValue;
						}
						else
							return this->CGlobeAnimationHandler::computeAltitudeDelta(v);
					}
				};
				REGISTER_FACTORY_CLASS(CGlobeAnimationHandlerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_addRouteFlyListener_void_CRouteFlyListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CRouteFlyListener* routeFlyListener )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->addRouteFlyListener(routeFlyListener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_removeRouteFlyListener_void_CRouteFlyListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CRouteFlyListener* listener )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->removeRouteFlyListener(listener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_clearEffectWidthNode_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->clearEffectWidthNode();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeAnimationHandlerProxy* ptr = dynamic_cast<CGlobeAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUpEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleMouseUpEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseUpEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUpEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUpEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeAnimationHandlerProxy* ptr = dynamic_cast<CGlobeAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUpEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUpEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleMouseUpEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyDownEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleKeyDownEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleKeyDownEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyDownEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyDownEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeAnimationHandlerProxy* ptr = dynamic_cast<CGlobeAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyDownEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyDownEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleKeyDownEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyUpEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleKeyUpEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleKeyUpEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyUpEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyUpEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeAnimationHandlerProxy* ptr = dynamic_cast<CGlobeAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyUpEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleKeyUpEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleKeyUpEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleFrameEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleFrameEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleFrameEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleFrameEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeAnimationHandlerProxy* ptr = dynamic_cast<CGlobeAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleFrameEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleFrameEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleFrameEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUserEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleUserEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleUserEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUserEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeAnimationHandlerProxy* ptr = dynamic_cast<CGlobeAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUserEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUserEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleUserEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseDownEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleMouseDownEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseDownEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseDownEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeAnimationHandlerProxy* ptr = dynamic_cast<CGlobeAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseDownEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseDownEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleMouseDownEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseMoveEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleMouseMoveEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseMoveEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseMoveEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeAnimationHandlerProxy* ptr = dynamic_cast<CGlobeAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseMoveEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleMouseMoveEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseWheelEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleMouseWheelEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseWheelEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseWheelEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeAnimationHandlerProxy* ptr = dynamic_cast<CGlobeAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseWheelEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::handleMouseWheelEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_createEditPointOverlay_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->createEditPointOverlay();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_destroyEditPointOverlay_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->destroyEditPointOverlay();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_createPoints_void_int(void *pObjectXXXX, _in int selectIndex )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->createPoints(selectIndex);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_destroyPoints_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->destroyPoints();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_attachPoints_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->attachPoints();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_detachPoints_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->detachPoints();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_loadFromDataSource_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->loadFromDataSource();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_readModel_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->readModel();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_createLine_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->createLine();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_createRealControlLine_void_ev_bool(void *pObjectXXXX, _in ev_bool isEdit )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->createRealControlLine(isEdit);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_createRealControlLine_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->createRealControlLine();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_destroyLine_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->destroyLine();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_destroyRealControlLine_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->destroyRealControlLine();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_createGlobeNodeTrack_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->createGlobeNodeTrack();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_destroyGlobeNodeTrack_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->destroyGlobeNodeTrack();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_createNodeTack_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->createNodeTack();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_destroyNodeTack_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->destroyNodeTack();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_screenToScene_CRay_ev_real32_ev_real32(void *pObjectXXXX, _in ev_real32 x, _in ev_real32 y )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					EarthView::World::Spatial::Math::CRay objXXXX = ptrNativeObject->screenToScene(x, y);
					EarthView::World::Spatial::Math::CRay *pXXXX = new EarthView::World::Spatial::Math::CRay(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_drawFlyLine_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::drawFlyLine();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->drawFlyLine();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_drawFlyLine_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_drawFlyLine_ev_bool_Callback* pCallback )
				{
					CGlobeAnimationHandlerProxy* ptr = dynamic_cast<CGlobeAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_drawFlyLine_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_drawFlyLine_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler::drawFlyLine();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_setRenderWindow_void_CRenderWindow(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderWindow* ref_window )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->setRenderWindow(ref_window);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_createPlaneOverlay_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->createPlaneOverlay();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_destroyPlaneOverlay_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->destroyPlaneOverlay();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_initializeThreeAxis_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->initializeThreeAxis();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_destroyThreeAxis_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ptrNativeObject->destroyThreeAxis();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_isFlyFinished_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isFlyFinished();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUseEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUseEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeAnimationHandlerProxy* ptr = dynamic_cast<CGlobeAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleUseEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUp_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUp_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeAnimationHandlerProxy* ptr = dynamic_cast<CGlobeAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_handleMouseUp_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_computeAltitudeDelta_ev_real64_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_computeAltitudeDelta_ev_real64_CVector3_Callback* pCallback )
				{
					CGlobeAnimationHandlerProxy* ptr = dynamic_cast<CGlobeAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeAnimationHandler_computeAltitudeDelta_ev_real64_CVector3(pCallback);
					}
				}
			}
		}
	}
}
