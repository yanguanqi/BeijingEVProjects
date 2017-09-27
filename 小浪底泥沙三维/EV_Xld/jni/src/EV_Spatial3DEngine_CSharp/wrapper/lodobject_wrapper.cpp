/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/lodobject.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace ModelManager
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CLodObject_isAttached_ev_bool_Callback)();
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CLodObject_getNode_CNode_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CLodObject_attachToNode_ev_bool_CNode_Callback)(_in EarthView::World::Graphic::CNode* n);
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CLodObject_detachFromNode_CNode_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CLodObject_applyScenePosition_ev_bool_Callback)();
				class CLodObjectProxy : public EarthView::World::Spatial3D::ModelManager::CLodObject
				{
				private:
					EarthView_World_Spatial3D_ModelManager_CLodObject_isAttached_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CLodObject_isAttached_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CLodObject_getNode_CNode_Callback* m_EarthView_World_Spatial3D_ModelManager_CLodObject_getNode_CNode_Callback;
					EarthView_World_Spatial3D_ModelManager_CLodObject_attachToNode_ev_bool_CNode_Callback* m_EarthView_World_Spatial3D_ModelManager_CLodObject_attachToNode_ev_bool_CNode_Callback;
					EarthView_World_Spatial3D_ModelManager_CLodObject_detachFromNode_CNode_Callback* m_EarthView_World_Spatial3D_ModelManager_CLodObject_detachFromNode_CNode_Callback;
					EarthView_World_Spatial3D_ModelManager_CLodObject_applyScenePosition_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CLodObject_applyScenePosition_ev_bool_Callback;
				public:
					CLodObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CLodObject(pList)
					{
						m_EarthView_World_Spatial3D_ModelManager_CLodObject_isAttached_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CLodObject_getNode_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CLodObject_attachToNode_ev_bool_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CLodObject_detachFromNode_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CLodObject_applyScenePosition_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CLodObject_isAttached_ev_bool(EarthView_World_Spatial3D_ModelManager_CLodObject_isAttached_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CLodObject_isAttached_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CLodObject_getNode_CNode(EarthView_World_Spatial3D_ModelManager_CLodObject_getNode_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CLodObject_getNode_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CLodObject_attachToNode_ev_bool_CNode(EarthView_World_Spatial3D_ModelManager_CLodObject_attachToNode_ev_bool_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CLodObject_attachToNode_ev_bool_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CLodObject_detachFromNode_CNode(EarthView_World_Spatial3D_ModelManager_CLodObject_detachFromNode_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CLodObject_detachFromNode_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CLodObject_applyScenePosition_ev_bool(EarthView_World_Spatial3D_ModelManager_CLodObject_applyScenePosition_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CLodObject_applyScenePosition_ev_bool_Callback = pCallback;
					}
					virtual ev_bool isAttached()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CLodObject_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CLodObject_isAttached_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLodObject::isAttached();
					}
					virtual EarthView::World::Graphic::CNode* getNode()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CLodObject_getNode_CNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_ModelManager_CLodObject_getNode_CNode_Callback();
							return returnValue;
						}
						else
							return this->CLodObject::getNode();
					}
					virtual ev_bool attachToNode(_in EarthView::World::Graphic::CNode* n)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CLodObject_attachToNode_ev_bool_CNode_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CLodObject_attachToNode_ev_bool_CNode_Callback(n);
							return returnValue;
						}
						else
							return this->CLodObject::attachToNode(n);
					}
					virtual EarthView::World::Graphic::CNode* detachFromNode()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CLodObject_detachFromNode_CNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_ModelManager_CLodObject_detachFromNode_CNode_Callback();
							return returnValue;
						}
						else
							return this->CLodObject::detachFromNode();
					}
					virtual ev_bool applyScenePosition()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CLodObject_applyScenePosition_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CLodObject_applyScenePosition_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLodObject::applyScenePosition();
					}
				};
				REGISTER_FACTORY_CLASS(CLodObjectProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CLodObject_getFile_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CLodObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodObject*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getFile();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CLodObject_getGroup_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CLodObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodObject*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getGroup();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Spatial3D_ModelManager_CLodObject_getSceneManager_CSceneManager(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CLodObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodObject*) pObjectXXXX;
					EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->getSceneManager();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CLodObject_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CLodObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodObject*) pObjectXXXX;
					ptrNativeObject->setVisible(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CLodObject_getVisible_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CLodObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CLodObject_isAttached_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CLodObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodObject*) pObjectXXXX;
					if (dynamic_cast<CLodObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CLodObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CLodObject::isAttached();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isAttached();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CLodObject_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CLodObject_isAttached_ev_bool_Callback* pCallback )
				{
					CLodObjectProxy* ptr = dynamic_cast<CLodObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CLodObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CLodObject_isAttached_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CLodObject_isAttached_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CLodObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CLodObject::isAttached();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CLodObject_getNode_CNode(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CLodObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodObject*) pObjectXXXX;
					if (dynamic_cast<CLodObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CLodObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CLodObject::getNode();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->getNode();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CLodObject_getNode_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CLodObject_getNode_CNode_Callback* pCallback )
				{
					CLodObjectProxy* ptr = dynamic_cast<CLodObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CLodObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CLodObject_getNode_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CLodObject_getNode_CNode_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CLodObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodObject*) pObjectXXXX;
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CLodObject::getNode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CLodObject_attachToNode_ev_bool_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
				{
					EarthView::World::Spatial3D::ModelManager::CLodObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodObject*) pObjectXXXX;
					if (dynamic_cast<CLodObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CLodObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CLodObject::attachToNode(n);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->attachToNode(n);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CLodObject_attachToNode_ev_bool_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CLodObject_attachToNode_ev_bool_CNode_Callback* pCallback )
				{
					CLodObjectProxy* ptr = dynamic_cast<CLodObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CLodObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CLodObject_attachToNode_ev_bool_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CLodObject_attachToNode_ev_bool_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
				{
					EarthView::World::Spatial3D::ModelManager::CLodObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CLodObject::attachToNode(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CLodObject_detachFromNode_CNode(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CLodObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodObject*) pObjectXXXX;
					if (dynamic_cast<CLodObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CLodObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CLodObject::detachFromNode();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->detachFromNode();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CLodObject_detachFromNode_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CLodObject_detachFromNode_CNode_Callback* pCallback )
				{
					CLodObjectProxy* ptr = dynamic_cast<CLodObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CLodObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CLodObject_detachFromNode_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CLodObject_detachFromNode_CNode_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CLodObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodObject*) pObjectXXXX;
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CLodObject::detachFromNode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CLodObject_applyScenePosition_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CLodObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodObject*) pObjectXXXX;
					if (dynamic_cast<CLodObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CLodObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CLodObject::applyScenePosition();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->applyScenePosition();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CLodObject_applyScenePosition_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CLodObject_applyScenePosition_ev_bool_Callback* pCallback )
				{
					CLodObjectProxy* ptr = dynamic_cast<CLodObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CLodObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CLodObject_applyScenePosition_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CLodObject_applyScenePosition_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CLodObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CLodObject::applyScenePosition();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CLodObject_setHighLight_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CLodObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodObject*) pObjectXXXX;
					ptrNativeObject->setHighLight(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CLodObject_getHighLight_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CLodObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getHighLight();
					return objXXXX;
				}
			}
		}
	}
}
