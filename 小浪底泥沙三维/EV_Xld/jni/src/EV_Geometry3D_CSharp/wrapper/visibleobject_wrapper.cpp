/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/visibleobject.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial3D
		{
			namespace Atlas
			{
			}
		}
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			typedef void  ( _stdcall EarthView_World_Geometry3D_CVisibleObjectListener_notifyLoaded_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* pObj);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CVisibleObjectListener_notifyUnloaded_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* pObj);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToNode_void_CVisibleObject_CNode_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* pObj, _in EarthView::World::Graphic::CNode* parentNode);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromNode_void_CVisibleObject_CNode_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* pObj, _in EarthView::World::Graphic::CNode* parentNode);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToScene_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* pObj);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromScene_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* pObj);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CVisibleObjectListener_notifyDestroyed_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* pObj);
			class CVisibleObjectListenerProxy : public EarthView::World::Geometry3D::CVisibleObjectListener
			{
			private:
				EarthView_World_Geometry3D_CVisibleObjectListener_notifyLoaded_void_CVisibleObject_Callback* m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyLoaded_void_CVisibleObject_Callback;
				EarthView_World_Geometry3D_CVisibleObjectListener_notifyUnloaded_void_CVisibleObject_Callback* m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyUnloaded_void_CVisibleObject_Callback;
				EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToNode_void_CVisibleObject_CNode_Callback* m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToNode_void_CVisibleObject_CNode_Callback;
				EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromNode_void_CVisibleObject_CNode_Callback* m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromNode_void_CVisibleObject_CNode_Callback;
				EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToScene_void_CVisibleObject_Callback* m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToScene_void_CVisibleObject_Callback;
				EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromScene_void_CVisibleObject_Callback* m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromScene_void_CVisibleObject_Callback;
				EarthView_World_Geometry3D_CVisibleObjectListener_notifyDestroyed_void_CVisibleObject_Callback* m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDestroyed_void_CVisibleObject_Callback;
			public:
				CVisibleObjectListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CVisibleObjectListener(pList)
				{
					m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyLoaded_void_CVisibleObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyUnloaded_void_CVisibleObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToNode_void_CVisibleObject_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromNode_void_CVisibleObject_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToScene_void_CVisibleObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromScene_void_CVisibleObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDestroyed_void_CVisibleObject_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObjectListener_notifyLoaded_void_CVisibleObject(EarthView_World_Geometry3D_CVisibleObjectListener_notifyLoaded_void_CVisibleObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyLoaded_void_CVisibleObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObjectListener_notifyUnloaded_void_CVisibleObject(EarthView_World_Geometry3D_CVisibleObjectListener_notifyUnloaded_void_CVisibleObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyUnloaded_void_CVisibleObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToNode_void_CVisibleObject_CNode(EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToNode_void_CVisibleObject_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToNode_void_CVisibleObject_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromNode_void_CVisibleObject_CNode(EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromNode_void_CVisibleObject_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromNode_void_CVisibleObject_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToScene_void_CVisibleObject(EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToScene_void_CVisibleObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToScene_void_CVisibleObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromScene_void_CVisibleObject(EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromScene_void_CVisibleObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromScene_void_CVisibleObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDestroyed_void_CVisibleObject(EarthView_World_Geometry3D_CVisibleObjectListener_notifyDestroyed_void_CVisibleObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDestroyed_void_CVisibleObject_Callback = pCallback;
				}
				virtual void notifyLoaded(_in EarthView::World::Geometry3D::CVisibleObject* pObj)
				{
					if(m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyLoaded_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyLoaded_void_CVisibleObject_Callback(pObj);
					}
					else
						return this->CVisibleObjectListener::notifyLoaded(pObj);
				}
				virtual void notifyUnloaded(_in EarthView::World::Geometry3D::CVisibleObject* pObj)
				{
					if(m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyUnloaded_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyUnloaded_void_CVisibleObject_Callback(pObj);
					}
					else
						return this->CVisibleObjectListener::notifyUnloaded(pObj);
				}
				virtual void notifyAttachedToNode(_in EarthView::World::Geometry3D::CVisibleObject* pObj, _in EarthView::World::Graphic::CNode* parentNode)
				{
					if(m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToNode_void_CVisibleObject_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToNode_void_CVisibleObject_CNode_Callback(pObj, parentNode);
					}
					else
						return this->CVisibleObjectListener::notifyAttachedToNode(pObj, parentNode);
				}
				virtual void notifyDetachedFromNode(_in EarthView::World::Geometry3D::CVisibleObject* pObj, _in EarthView::World::Graphic::CNode* parentNode)
				{
					if(m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromNode_void_CVisibleObject_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromNode_void_CVisibleObject_CNode_Callback(pObj, parentNode);
					}
					else
						return this->CVisibleObjectListener::notifyDetachedFromNode(pObj, parentNode);
				}
				virtual void notifyAttachedToScene(_in EarthView::World::Geometry3D::CVisibleObject* pObj)
				{
					if(m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToScene_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToScene_void_CVisibleObject_Callback(pObj);
					}
					else
						return this->CVisibleObjectListener::notifyAttachedToScene(pObj);
				}
				virtual void notifyDetachedFromScene(_in EarthView::World::Geometry3D::CVisibleObject* pObj)
				{
					if(m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromScene_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromScene_void_CVisibleObject_Callback(pObj);
					}
					else
						return this->CVisibleObjectListener::notifyDetachedFromScene(pObj);
				}
				virtual void notifyDestroyed(_in EarthView::World::Geometry3D::CVisibleObject* pObj)
				{
					if(m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDestroyed_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDestroyed_void_CVisibleObject_Callback(pObj);
					}
					else
						return this->CVisibleObjectListener::notifyDestroyed(pObj);
				}
			};
			REGISTER_FACTORY_CLASS(CVisibleObjectListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObjectListener_notifyLoaded_void_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* pObj )
			{
				EarthView::World::Geometry3D::CVisibleObjectListener* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectListenerProxy*>((EarthView::World::Geometry3D::CVisibleObjectListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CVisibleObjectListener::notifyLoaded(pObj);
				else
					ptrNativeObject->notifyLoaded(pObj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObjectListener_notifyLoaded_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObjectListener_notifyLoaded_void_CVisibleObject_Callback* pCallback )
			{
				CVisibleObjectListenerProxy* ptr = dynamic_cast<CVisibleObjectListenerProxy*>((EarthView::World::Geometry3D::CVisibleObjectListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObjectListener_notifyLoaded_void_CVisibleObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObjectListener_notifyLoaded_void_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* pObj )
			{
				EarthView::World::Geometry3D::CVisibleObjectListener* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CVisibleObjectListener::notifyLoaded(pObj);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObjectListener_notifyUnloaded_void_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* pObj )
			{
				EarthView::World::Geometry3D::CVisibleObjectListener* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectListenerProxy*>((EarthView::World::Geometry3D::CVisibleObjectListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CVisibleObjectListener::notifyUnloaded(pObj);
				else
					ptrNativeObject->notifyUnloaded(pObj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObjectListener_notifyUnloaded_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObjectListener_notifyUnloaded_void_CVisibleObject_Callback* pCallback )
			{
				CVisibleObjectListenerProxy* ptr = dynamic_cast<CVisibleObjectListenerProxy*>((EarthView::World::Geometry3D::CVisibleObjectListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObjectListener_notifyUnloaded_void_CVisibleObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObjectListener_notifyUnloaded_void_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* pObj )
			{
				EarthView::World::Geometry3D::CVisibleObjectListener* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CVisibleObjectListener::notifyUnloaded(pObj);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToNode_void_CVisibleObject_CNode(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* pObj, _in EarthView::World::Graphic::CNode* parentNode )
			{
				EarthView::World::Geometry3D::CVisibleObjectListener* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectListenerProxy*>((EarthView::World::Geometry3D::CVisibleObjectListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CVisibleObjectListener::notifyAttachedToNode(pObj, parentNode);
				else
					ptrNativeObject->notifyAttachedToNode(pObj, parentNode);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToNode_void_CVisibleObject_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToNode_void_CVisibleObject_CNode_Callback* pCallback )
			{
				CVisibleObjectListenerProxy* ptr = dynamic_cast<CVisibleObjectListenerProxy*>((EarthView::World::Geometry3D::CVisibleObjectListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToNode_void_CVisibleObject_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToNode_void_CVisibleObject_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* pObj, _in EarthView::World::Graphic::CNode* parentNode )
			{
				EarthView::World::Geometry3D::CVisibleObjectListener* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CVisibleObjectListener::notifyAttachedToNode(pObj, parentNode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromNode_void_CVisibleObject_CNode(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* pObj, _in EarthView::World::Graphic::CNode* parentNode )
			{
				EarthView::World::Geometry3D::CVisibleObjectListener* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectListenerProxy*>((EarthView::World::Geometry3D::CVisibleObjectListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CVisibleObjectListener::notifyDetachedFromNode(pObj, parentNode);
				else
					ptrNativeObject->notifyDetachedFromNode(pObj, parentNode);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromNode_void_CVisibleObject_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromNode_void_CVisibleObject_CNode_Callback* pCallback )
			{
				CVisibleObjectListenerProxy* ptr = dynamic_cast<CVisibleObjectListenerProxy*>((EarthView::World::Geometry3D::CVisibleObjectListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromNode_void_CVisibleObject_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromNode_void_CVisibleObject_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* pObj, _in EarthView::World::Graphic::CNode* parentNode )
			{
				EarthView::World::Geometry3D::CVisibleObjectListener* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CVisibleObjectListener::notifyDetachedFromNode(pObj, parentNode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToScene_void_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* pObj )
			{
				EarthView::World::Geometry3D::CVisibleObjectListener* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectListenerProxy*>((EarthView::World::Geometry3D::CVisibleObjectListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CVisibleObjectListener::notifyAttachedToScene(pObj);
				else
					ptrNativeObject->notifyAttachedToScene(pObj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToScene_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToScene_void_CVisibleObject_Callback* pCallback )
			{
				CVisibleObjectListenerProxy* ptr = dynamic_cast<CVisibleObjectListenerProxy*>((EarthView::World::Geometry3D::CVisibleObjectListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToScene_void_CVisibleObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObjectListener_notifyAttachedToScene_void_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* pObj )
			{
				EarthView::World::Geometry3D::CVisibleObjectListener* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CVisibleObjectListener::notifyAttachedToScene(pObj);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromScene_void_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* pObj )
			{
				EarthView::World::Geometry3D::CVisibleObjectListener* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectListenerProxy*>((EarthView::World::Geometry3D::CVisibleObjectListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CVisibleObjectListener::notifyDetachedFromScene(pObj);
				else
					ptrNativeObject->notifyDetachedFromScene(pObj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromScene_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromScene_void_CVisibleObject_Callback* pCallback )
			{
				CVisibleObjectListenerProxy* ptr = dynamic_cast<CVisibleObjectListenerProxy*>((EarthView::World::Geometry3D::CVisibleObjectListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromScene_void_CVisibleObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObjectListener_notifyDetachedFromScene_void_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* pObj )
			{
				EarthView::World::Geometry3D::CVisibleObjectListener* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CVisibleObjectListener::notifyDetachedFromScene(pObj);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObjectListener_notifyDestroyed_void_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* pObj )
			{
				EarthView::World::Geometry3D::CVisibleObjectListener* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectListenerProxy*>((EarthView::World::Geometry3D::CVisibleObjectListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CVisibleObjectListener::notifyDestroyed(pObj);
				else
					ptrNativeObject->notifyDestroyed(pObj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDestroyed_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObjectListener_notifyDestroyed_void_CVisibleObject_Callback* pCallback )
			{
				CVisibleObjectListenerProxy* ptr = dynamic_cast<CVisibleObjectListenerProxy*>((EarthView::World::Geometry3D::CVisibleObjectListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObjectListener_notifyDestroyed_void_CVisibleObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObjectListener_notifyDestroyed_void_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* pObj )
			{
				EarthView::World::Geometry3D::CVisibleObjectListener* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObjectListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CVisibleObjectListener::notifyDestroyed(pObj);
			}
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CVisibleObject_getNode_CNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CVisibleObject_isLoaded_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CVisibleObject_isAttached_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CVisibleObject_load_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CVisibleObject_unload_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CVisibleObject_attachToNode_ev_bool_CNode_Callback)(_in EarthView::World::Graphic::CNode* n);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CVisibleObject_detachFromNode_CNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CVisibleObject_attachToScene_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CVisibleObject_detachFromScene_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CVisibleObject_setUserData_void_CFeatureUserData_Callback)(_inout void* userData);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CVisibleObject_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CVisibleObject_getSelectable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CVisibleObject_update_ev_bool_Callback)();
			typedef EarthView::World::Spatial3D::Atlas::IGlobeLayer*  ( _stdcall EarthView_World_Geometry3D_CVisibleObject_getLayer_IGlobeLayer_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Geometry3D_CVisibleObject_getDataset_IDataset_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Geometry3D_CVisibleObject_getID_ev_uint32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Geometry3D_CVisibleObject_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CVisibleObject_setMatrix_void_CMatrix4_Callback)(_in const void* m);
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CVisibleObject_getMatrix_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CVisibleObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const void* scale, _in const void* qua);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CVisibleObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out void* scale, _out void* qua);
			class CVisibleObjectProxy : public EarthView::World::Geometry3D::CVisibleObject
			{
			private:
				EarthView_World_Geometry3D_CVisibleObject_getNode_CNode_Callback* m_EarthView_World_Geometry3D_CVisibleObject_getNode_CNode_Callback;
				EarthView_World_Geometry3D_CVisibleObject_isLoaded_ev_bool_Callback* m_EarthView_World_Geometry3D_CVisibleObject_isLoaded_ev_bool_Callback;
				EarthView_World_Geometry3D_CVisibleObject_isAttached_ev_bool_Callback* m_EarthView_World_Geometry3D_CVisibleObject_isAttached_ev_bool_Callback;
				EarthView_World_Geometry3D_CVisibleObject_load_ev_bool_Callback* m_EarthView_World_Geometry3D_CVisibleObject_load_ev_bool_Callback;
				EarthView_World_Geometry3D_CVisibleObject_unload_ev_bool_Callback* m_EarthView_World_Geometry3D_CVisibleObject_unload_ev_bool_Callback;
				EarthView_World_Geometry3D_CVisibleObject_attachToNode_ev_bool_CNode_Callback* m_EarthView_World_Geometry3D_CVisibleObject_attachToNode_ev_bool_CNode_Callback;
				EarthView_World_Geometry3D_CVisibleObject_detachFromNode_CNode_Callback* m_EarthView_World_Geometry3D_CVisibleObject_detachFromNode_CNode_Callback;
				EarthView_World_Geometry3D_CVisibleObject_attachToScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CVisibleObject_attachToScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CVisibleObject_detachFromScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CVisibleObject_detachFromScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CVisibleObject_setUserData_void_CFeatureUserData_Callback* m_EarthView_World_Geometry3D_CVisibleObject_setUserData_void_CFeatureUserData_Callback;
				EarthView_World_Geometry3D_CVisibleObject_setSelectable_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CVisibleObject_setSelectable_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CVisibleObject_getSelectable_ev_bool_Callback* m_EarthView_World_Geometry3D_CVisibleObject_getSelectable_ev_bool_Callback;
				EarthView_World_Geometry3D_CVisibleObject_update_ev_bool_Callback* m_EarthView_World_Geometry3D_CVisibleObject_update_ev_bool_Callback;
				EarthView_World_Geometry3D_CVisibleObject_getLayer_IGlobeLayer_Callback* m_EarthView_World_Geometry3D_CVisibleObject_getLayer_IGlobeLayer_Callback;
				EarthView_World_Geometry3D_CVisibleObject_getDataset_IDataset_Callback* m_EarthView_World_Geometry3D_CVisibleObject_getDataset_IDataset_Callback;
				EarthView_World_Geometry3D_CVisibleObject_getID_ev_uint32_Callback* m_EarthView_World_Geometry3D_CVisibleObject_getID_ev_uint32_Callback;
				EarthView_World_Geometry3D_CVisibleObject_getName_EVString_Callback* m_EarthView_World_Geometry3D_CVisibleObject_getName_EVString_Callback;
				EarthView_World_Geometry3D_CVisibleObject_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Geometry3D_CVisibleObject_setMatrix_void_CMatrix4_Callback;
				EarthView_World_Geometry3D_CVisibleObject_getMatrix_CMatrix4_Callback* m_EarthView_World_Geometry3D_CVisibleObject_getMatrix_CMatrix4_Callback;
				EarthView_World_Geometry3D_CVisibleObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Geometry3D_CVisibleObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
				EarthView_World_Geometry3D_CVisibleObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Geometry3D_CVisibleObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
			public:
				CVisibleObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CVisibleObject(pList)
				{
					m_EarthView_World_Geometry3D_CVisibleObject_getNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObject_isLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObject_isAttached_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObject_load_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObject_unload_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObject_attachToNode_ev_bool_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObject_detachFromNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObject_attachToScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObject_detachFromScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObject_setUserData_void_CFeatureUserData_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObject_setSelectable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObject_getSelectable_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObject_update_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObject_getLayer_IGlobeLayer_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObject_getDataset_IDataset_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObject_getID_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObject_getName_EVString_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObject_setMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObject_getMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Geometry3D_CVisibleObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObject_getNode_CNode(EarthView_World_Geometry3D_CVisibleObject_getNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObject_getNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObject_isLoaded_ev_bool(EarthView_World_Geometry3D_CVisibleObject_isLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObject_isLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObject_isAttached_ev_bool(EarthView_World_Geometry3D_CVisibleObject_isAttached_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObject_isAttached_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObject_load_ev_bool(EarthView_World_Geometry3D_CVisibleObject_load_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObject_load_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObject_unload_ev_bool(EarthView_World_Geometry3D_CVisibleObject_unload_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObject_unload_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObject_attachToNode_ev_bool_CNode(EarthView_World_Geometry3D_CVisibleObject_attachToNode_ev_bool_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObject_attachToNode_ev_bool_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObject_detachFromNode_CNode(EarthView_World_Geometry3D_CVisibleObject_detachFromNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObject_detachFromNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObject_attachToScene_ev_bool(EarthView_World_Geometry3D_CVisibleObject_attachToScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObject_attachToScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObject_detachFromScene_ev_bool(EarthView_World_Geometry3D_CVisibleObject_detachFromScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObject_detachFromScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObject_setUserData_void_CFeatureUserData(EarthView_World_Geometry3D_CVisibleObject_setUserData_void_CFeatureUserData_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObject_setUserData_void_CFeatureUserData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObject_setSelectable_void_ev_bool(EarthView_World_Geometry3D_CVisibleObject_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObject_setSelectable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObject_getSelectable_ev_bool(EarthView_World_Geometry3D_CVisibleObject_getSelectable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObject_getSelectable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObject_update_ev_bool(EarthView_World_Geometry3D_CVisibleObject_update_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObject_update_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObject_getLayer_IGlobeLayer(EarthView_World_Geometry3D_CVisibleObject_getLayer_IGlobeLayer_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObject_getLayer_IGlobeLayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObject_getDataset_IDataset(EarthView_World_Geometry3D_CVisibleObject_getDataset_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObject_getDataset_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObject_getID_ev_uint32(EarthView_World_Geometry3D_CVisibleObject_getID_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObject_getID_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObject_getName_EVString(EarthView_World_Geometry3D_CVisibleObject_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObject_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObject_setMatrix_void_CMatrix4(EarthView_World_Geometry3D_CVisibleObject_setMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObject_setMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObject_getMatrix_CMatrix4(EarthView_World_Geometry3D_CVisibleObject_getMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObject_getMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Geometry3D_CVisibleObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CVisibleObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Geometry3D_CVisibleObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CVisibleObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CNode* getNode()
				{
					if(m_EarthView_World_Geometry3D_CVisibleObject_getNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CVisibleObject_getNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CVisibleObject::getNode();
				}
				virtual ev_bool isLoaded()
				{
					if(m_EarthView_World_Geometry3D_CVisibleObject_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CVisibleObject_isLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CVisibleObject::isLoaded();
				}
				virtual ev_bool isAttached()
				{
					if(m_EarthView_World_Geometry3D_CVisibleObject_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CVisibleObject_isAttached_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CVisibleObject::isAttached();
				}
				virtual ev_bool load()
				{
					if(m_EarthView_World_Geometry3D_CVisibleObject_load_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CVisibleObject_load_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CVisibleObject::load();
				}
				virtual ev_bool unload()
				{
					if(m_EarthView_World_Geometry3D_CVisibleObject_unload_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CVisibleObject_unload_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CVisibleObject::unload();
				}
				virtual ev_bool attachToNode(_in EarthView::World::Graphic::CNode* n)
				{
					if(m_EarthView_World_Geometry3D_CVisibleObject_attachToNode_ev_bool_CNode_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CVisibleObject_attachToNode_ev_bool_CNode_Callback(n);
						return returnValue;
					}
					else
						return this->CVisibleObject::attachToNode(n);
				}
				virtual EarthView::World::Graphic::CNode* detachFromNode()
				{
					if(m_EarthView_World_Geometry3D_CVisibleObject_detachFromNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CVisibleObject_detachFromNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CVisibleObject::detachFromNode();
				}
				virtual ev_bool attachToScene()
				{
					if(m_EarthView_World_Geometry3D_CVisibleObject_attachToScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CVisibleObject_attachToScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CVisibleObject::attachToScene();
				}
				virtual ev_bool detachFromScene()
				{
					if(m_EarthView_World_Geometry3D_CVisibleObject_detachFromScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CVisibleObject_detachFromScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CVisibleObject::detachFromScene();
				}
				virtual void setUserData(_inout EarthView::World::Spatial3D::CFeatureUserData& userData)
				{
					if(m_EarthView_World_Geometry3D_CVisibleObject_setUserData_void_CFeatureUserData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CVisibleObject_setUserData_void_CFeatureUserData_Callback(&userData);
					}
					else
						return this->CVisibleObject::setUserData(userData);
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Geometry3D_CVisibleObject_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CVisibleObject_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CVisibleObject::setSelectable(selectable);
				}
				virtual ev_bool getSelectable()
				{
					if(m_EarthView_World_Geometry3D_CVisibleObject_getSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CVisibleObject_getSelectable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CVisibleObject::getSelectable();
				}
				virtual ev_bool update()
				{
					if(m_EarthView_World_Geometry3D_CVisibleObject_update_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CVisibleObject_update_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CVisibleObject::update();
				}
				virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer()
				{
					if(m_EarthView_World_Geometry3D_CVisibleObject_getLayer_IGlobeLayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::Atlas::IGlobeLayer* returnValue = m_EarthView_World_Geometry3D_CVisibleObject_getLayer_IGlobeLayer_Callback();
						return returnValue;
					}
					else
						return this->CVisibleObject::getLayer();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if(m_EarthView_World_Geometry3D_CVisibleObject_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Geometry3D_CVisibleObject_getDataset_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CVisibleObject::getDataset();
				}
				virtual ev_uint32 getID()
				{
					if(m_EarthView_World_Geometry3D_CVisibleObject_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Geometry3D_CVisibleObject_getID_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CVisibleObject::getID();
				}
				virtual EVString getName()
				{
					if(m_EarthView_World_Geometry3D_CVisibleObject_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Geometry3D_CVisibleObject_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CVisibleObject::getName();
				}
				virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& m)
				{
					if(m_EarthView_World_Geometry3D_CVisibleObject_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CVisibleObject_setMatrix_void_CMatrix4_Callback(&m);
					}
					else
						return this->CVisibleObject::setMatrix(m);
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix()
				{
					if(m_EarthView_World_Geometry3D_CVisibleObject_getMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Geometry3D_CVisibleObject_getMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CVisibleObject::getMatrix();
				}
				virtual void setPosition(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const EarthView::World::Spatial::Math::CVector3& scale, _in const EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if(m_EarthView_World_Geometry3D_CVisibleObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CVisibleObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
					}
					else
						return this->CVisibleObject::setPosition(latitude, longitude, altitude, scale, qua);
				}
				virtual void getPosition(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if(m_EarthView_World_Geometry3D_CVisibleObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CVisibleObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
					}
					else
						return this->CVisibleObject::getPosition(latitude, longitude, altitude, scale, qua);
				}
			};
			REGISTER_FACTORY_CLASS(CVisibleObjectProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CVisibleObject_getNode_CNode(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::getNode();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->getNode();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObject_getNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObject_getNode_CNode_Callback* pCallback )
			{
				CVisibleObjectProxy* ptr = dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObject_getNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CVisibleObject_getNode_CNode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::getNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CVisibleObject_isLoaded_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::isLoaded();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isLoaded();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObject_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObject_isLoaded_ev_bool_Callback* pCallback )
			{
				CVisibleObjectProxy* ptr = dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObject_isLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CVisibleObject_isLoaded_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::isLoaded();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CVisibleObject_isAttached_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::isAttached();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isAttached();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObject_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObject_isAttached_ev_bool_Callback* pCallback )
			{
				CVisibleObjectProxy* ptr = dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObject_isAttached_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CVisibleObject_isAttached_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::isAttached();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CVisibleObject_load_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::load();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->load();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObject_load_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObject_load_ev_bool_Callback* pCallback )
			{
				CVisibleObjectProxy* ptr = dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObject_load_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CVisibleObject_load_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::load();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CVisibleObject_unload_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::unload();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->unload();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObject_unload_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObject_unload_ev_bool_Callback* pCallback )
			{
				CVisibleObjectProxy* ptr = dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObject_unload_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CVisibleObject_unload_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::unload();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CVisibleObject_attachToNode_ev_bool_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::attachToNode(n);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->attachToNode(n);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObject_attachToNode_ev_bool_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObject_attachToNode_ev_bool_CNode_Callback* pCallback )
			{
				CVisibleObjectProxy* ptr = dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObject_attachToNode_ev_bool_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CVisibleObject_attachToNode_ev_bool_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::attachToNode(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CVisibleObject_detachFromNode_CNode(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::detachFromNode();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->detachFromNode();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObject_detachFromNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObject_detachFromNode_CNode_Callback* pCallback )
			{
				CVisibleObjectProxy* ptr = dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObject_detachFromNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CVisibleObject_detachFromNode_CNode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::detachFromNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CVisibleObject_attachToScene_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::attachToScene();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->attachToScene();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObject_attachToScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObject_attachToScene_ev_bool_Callback* pCallback )
			{
				CVisibleObjectProxy* ptr = dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObject_attachToScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CVisibleObject_attachToScene_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::attachToScene();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CVisibleObject_detachFromScene_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::detachFromScene();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->detachFromScene();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObject_detachFromScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObject_detachFromScene_ev_bool_Callback* pCallback )
			{
				CVisibleObjectProxy* ptr = dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObject_detachFromScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CVisibleObject_detachFromScene_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::detachFromScene();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObject_asynLoad_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ptrNativeObject->asynLoad();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObject_asynUnload_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ptrNativeObject->asynUnload();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObject_asynAttachToNode_void_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ptrNativeObject->asynAttachToNode(n);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObject_asynDetachFromNode_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ptrNativeObject->asynDetachFromNode();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObject_asynAttachToScene_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ptrNativeObject->asynAttachToScene();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObject_asynDetachFromScene_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ptrNativeObject->asynDetachFromScene();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObject_asynRelease_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ptrNativeObject->asynRelease();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObject_asynAbort_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ptrNativeObject->asynAbort();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObject_syncAbort_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ptrNativeObject->syncAbort();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObject_lockAsynOperation_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ptrNativeObject->lockAsynOperation();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObject_unlockAsynOperation_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ptrNativeObject->unlockAsynOperation();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObject_addListener_void_CVisibleObjectListener(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObjectListener* listener )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ptrNativeObject->addListener(listener);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObject_removeListener_void_CVisibleObjectListener(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObjectListener* listener )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ptrNativeObject->removeListener(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Geometry3D_CVisibleObject_getNumListener_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getNumListener();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CVisibleObjectListener*  _stdcall EarthView_World_Geometry3D_CVisibleObject_getListener_CVisibleObjectListener_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				EarthView::World::Geometry3D::CVisibleObjectListener* objXXXX = ptrNativeObject->getListener(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObject_setUserData_void_CFeatureUserData(void *pObjectXXXX, _inout void* userData )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
				else
					ptrNativeObject->setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObject_setUserData_void_CFeatureUserData( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObject_setUserData_void_CFeatureUserData_Callback* pCallback )
			{
				CVisibleObjectProxy* ptr = dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObject_setUserData_void_CFeatureUserData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObject_setUserData_void_CFeatureUserData_NoVirtual(void *pObjectXXXX, _inout void* userData )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObject_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selectable )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::setSelectable(selectable);
				else
					ptrNativeObject->setSelectable(selectable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObject_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObject_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CVisibleObjectProxy* ptr = dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObject_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObject_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selectable )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::setSelectable(selectable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CVisibleObject_getSelectable_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::getSelectable();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getSelectable();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObject_getSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObject_getSelectable_ev_bool_Callback* pCallback )
			{
				CVisibleObjectProxy* ptr = dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObject_getSelectable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CVisibleObject_getSelectable_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::getSelectable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CVisibleObject_update_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::update();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->update();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObject_update_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObject_update_ev_bool_Callback* pCallback )
			{
				CVisibleObjectProxy* ptr = dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObject_update_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CVisibleObject_update_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::update();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::IGlobeLayer*  _stdcall EarthView_World_Geometry3D_CVisibleObject_getLayer_IGlobeLayer(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial3D::Atlas::IGlobeLayer* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::getLayer();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial3D::Atlas::IGlobeLayer* objXXXX = ptrNativeObject->getLayer();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObject_getLayer_IGlobeLayer( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObject_getLayer_IGlobeLayer_Callback* pCallback )
			{
				CVisibleObjectProxy* ptr = dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObject_getLayer_IGlobeLayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::IGlobeLayer*  _stdcall EarthView_World_Geometry3D_CVisibleObject_getLayer_IGlobeLayer_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				EarthView::World::Spatial3D::Atlas::IGlobeLayer* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::getLayer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Geometry3D_CVisibleObject_getDataset_IDataset(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::getDataset();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObject_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObject_getDataset_IDataset_Callback* pCallback )
			{
				CVisibleObjectProxy* ptr = dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObject_getDataset_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Geometry3D_CVisibleObject_getDataset_IDataset_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::getDataset();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Geometry3D_CVisibleObject_getID_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::getID();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getID();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObject_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObject_getID_ev_uint32_Callback* pCallback )
			{
				CVisibleObjectProxy* ptr = dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObject_getID_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Geometry3D_CVisibleObject_getID_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::getID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Geometry3D_CVisibleObject_getName_EVString(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObject_getName_EVString( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObject_getName_EVString_Callback* pCallback )
			{
				CVisibleObjectProxy* ptr = dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObject_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Geometry3D_CVisibleObject_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObject_setMatrix_void_CMatrix4(void *pObjectXXXX, _in const void* m )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::setMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)m);
				else
					ptrNativeObject->setMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)m);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObject_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObject_setMatrix_void_CMatrix4_Callback* pCallback )
			{
				CVisibleObjectProxy* ptr = dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObject_setMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObject_setMatrix_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in const void* m )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::setMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)m);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CVisibleObject_getMatrix_CMatrix4(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::getMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->getMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObject_getMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObject_getMatrix_CMatrix4_Callback* pCallback )
			{
				CVisibleObjectProxy* ptr = dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObject_getMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CVisibleObject_getMatrix_CMatrix4_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::getMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(void *pObjectXXXX, _in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const void* scale, _in const void* qua )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::setPosition(latitude, longitude, altitude, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
				else
					ptrNativeObject->setPosition(latitude, longitude, altitude, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
			{
				CVisibleObjectProxy* ptr = dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(void *pObjectXXXX, _in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const void* scale, _in const void* qua )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::setPosition(latitude, longitude, altitude, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(void *pObjectXXXX, _out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out void* scale, _out void* qua )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				if (dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::getPosition(latitude, longitude, altitude, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
				else
					ptrNativeObject->getPosition(latitude, longitude, altitude, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CVisibleObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Geometry3D_CVisibleObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
			{
				CVisibleObjectProxy* ptr = dynamic_cast<CVisibleObjectProxy*>((EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CVisibleObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(void *pObjectXXXX, _out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out void* scale, _out void* qua )
			{
				EarthView::World::Geometry3D::CVisibleObject* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CVisibleObject::getPosition(latitude, longitude, altitude, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CVisibleObject*  _stdcall EarthView_World_Geometry3D_CVisibleObjectPtr_get_CVisibleObject(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CVisibleObjectPtr* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleObjectPtr*) pObjectXXXX;
				EarthView::World::Geometry3D::CVisibleObject* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_VisibleObjects_push_back_void_CVisibleObjectPtr(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Geometry3D::VisibleObjects* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjects*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Geometry3D::CVisibleObjectPtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_VisibleObjects_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::VisibleObjects* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjects*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_VisibleObjects_front_CVisibleObjectPtr(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::VisibleObjects* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjects*) pObjectXXXX;
				EarthView::World::Geometry3D::CVisibleObjectPtr& objXXXX = ptrNativeObject->front();
				EarthView::World::Geometry3D::CVisibleObjectPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_VisibleObjects_back_CVisibleObjectPtr(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::VisibleObjects* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjects*) pObjectXXXX;
				EarthView::World::Geometry3D::CVisibleObjectPtr& objXXXX = ptrNativeObject->back();
				EarthView::World::Geometry3D::CVisibleObjectPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_VisibleObjects_at_CVisibleObjectPtr_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Geometry3D::VisibleObjects* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjects*) pObjectXXXX;
				EarthView::World::Geometry3D::CVisibleObjectPtr& objXXXX = ptrNativeObject->at(pos);
				EarthView::World::Geometry3D::CVisibleObjectPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_VisibleObjects_insert_void_ev_uint32_CVisibleObjectPtr(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Geometry3D::VisibleObjects* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjects*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Geometry3D::CVisibleObjectPtr*)t);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_VisibleObjects_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::VisibleObjects* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjects*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Geometry3D_VisibleObjects_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::VisibleObjects* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjects*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_VisibleObjects_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Geometry3D::VisibleObjects* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjects*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_VisibleObjects_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::VisibleObjects* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjects*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_VisibleObjectsVector_push_back_void_VisibleObjects(void *pObjectXXXX, _in EarthView::World::Geometry3D::VisibleObjects*& t )
			{
				EarthView::World::Geometry3D::VisibleObjectsVector* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjectsVector*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_VisibleObjectsVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::VisibleObjectsVector* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjectsVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::VisibleObjects*  _stdcall EarthView_World_Geometry3D_VisibleObjectsVector_front_VisibleObjects(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::VisibleObjectsVector* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjectsVector*) pObjectXXXX;
				EarthView::World::Geometry3D::VisibleObjects* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::VisibleObjects*  _stdcall EarthView_World_Geometry3D_VisibleObjectsVector_back_VisibleObjects(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::VisibleObjectsVector* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjectsVector*) pObjectXXXX;
				EarthView::World::Geometry3D::VisibleObjects* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::VisibleObjects*  _stdcall EarthView_World_Geometry3D_VisibleObjectsVector_at_VisibleObjects_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Geometry3D::VisibleObjectsVector* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjectsVector*) pObjectXXXX;
				EarthView::World::Geometry3D::VisibleObjects* objXXXX = ptrNativeObject->at(pos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_VisibleObjectsVector_insert_void_ev_uint32_VisibleObjects(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Geometry3D::VisibleObjects*& t )
			{
				EarthView::World::Geometry3D::VisibleObjectsVector* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjectsVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_VisibleObjectsVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::VisibleObjectsVector* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjectsVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Geometry3D_VisibleObjectsVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::VisibleObjectsVector* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjectsVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_VisibleObjectsVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Geometry3D::VisibleObjectsVector* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjectsVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_VisibleObjectsVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::VisibleObjectsVector* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjectsVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_VisibleObjectsVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Geometry3D::VisibleObjectsVector* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjectsVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_VisibleObjectPtrVector_push_back_void_CVisibleObjectPtr(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Geometry3D::VisibleObjectPtrVector* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Geometry3D::CVisibleObjectPtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_VisibleObjectPtrVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::VisibleObjectPtrVector* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_VisibleObjectPtrVector_front_CVisibleObjectPtr(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::VisibleObjectPtrVector* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjectXXXX;
				EarthView::World::Geometry3D::CVisibleObjectPtr& objXXXX = ptrNativeObject->front();
				EarthView::World::Geometry3D::CVisibleObjectPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_VisibleObjectPtrVector_back_CVisibleObjectPtr(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::VisibleObjectPtrVector* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjectXXXX;
				EarthView::World::Geometry3D::CVisibleObjectPtr& objXXXX = ptrNativeObject->back();
				EarthView::World::Geometry3D::CVisibleObjectPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_VisibleObjectPtrVector_insert_void_ev_uint32_CVisibleObjectPtr(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Geometry3D::VisibleObjectPtrVector* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Geometry3D::CVisibleObjectPtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_VisibleObjectPtrVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Geometry3D::VisibleObjectPtrVector* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_VisibleObjectPtrVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::VisibleObjectPtrVector* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_VisibleObjectPtrVector_OperatorIndex_CVisibleObjectPtr_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Geometry3D::VisibleObjectPtrVector& objYYYY = *(EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjXXXX;
				EarthView::World::Geometry3D::CVisibleObjectPtr& objXXXX = objYYYY[n];
				EarthView::World::Geometry3D::CVisibleObjectPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_VisibleObjectPtrVector_at_CVisibleObjectPtr_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Geometry3D::VisibleObjectPtrVector* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjectXXXX;
				EarthView::World::Geometry3D::CVisibleObjectPtr& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Geometry3D::CVisibleObjectPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Geometry3D_VisibleObjectPtrVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::VisibleObjectPtrVector* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_VisibleObjectPtrVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Geometry3D::VisibleObjectPtrVector* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_VisibleObjectPtrVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Geometry3D::VisibleObjectPtrVector* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_VisibleObjectPtrVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::VisibleObjectPtrVector* ptrNativeObject = (EarthView::World::Geometry3D::VisibleObjectPtrVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleobjectVector_push_back_void_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject*& ref_t )
			{
				EarthView::World::Geometry3D::CVisibleobjectVector* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleobjectVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleobjectVector* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CVisibleObject*  _stdcall EarthView_World_Geometry3D_CVisibleobjectVector_front_CVisibleObject(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleobjectVector* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjectXXXX;
				EarthView::World::Geometry3D::CVisibleObject* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CVisibleObject*  _stdcall EarthView_World_Geometry3D_CVisibleobjectVector_back_CVisibleObject(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleobjectVector* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjectXXXX;
				EarthView::World::Geometry3D::CVisibleObject* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleobjectVector_insert_void_ev_uint32_CVisibleObject(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Geometry3D::CVisibleObject*& ref_t )
			{
				EarthView::World::Geometry3D::CVisibleobjectVector* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleobjectVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Geometry3D::CVisibleobjectVector* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CVisibleobjectVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CVisibleobjectVector* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CVisibleObject*  _stdcall EarthView_World_Geometry3D_CVisibleobjectVector_OperatorIndex_CVisibleObject_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Geometry3D::CVisibleobjectVector& objYYYY = *(EarthView::World::Geometry3D::CVisibleobjectVector*) pObjXXXX;
				EarthView::World::Geometry3D::CVisibleObject* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CVisibleObject*  _stdcall EarthView_World_Geometry3D_CVisibleobjectVector_at_CVisibleObject_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Geometry3D::CVisibleobjectVector* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjectXXXX;
				EarthView::World::Geometry3D::CVisibleObject* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Geometry3D_CVisibleobjectVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CVisibleobjectVector* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleobjectVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Geometry3D::CVisibleobjectVector* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleobjectVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Geometry3D::CVisibleobjectVector* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVisibleobjectVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVisibleobjectVector* ptrNativeObject = (EarthView::World::Geometry3D::CVisibleobjectVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
		}
	}
}
