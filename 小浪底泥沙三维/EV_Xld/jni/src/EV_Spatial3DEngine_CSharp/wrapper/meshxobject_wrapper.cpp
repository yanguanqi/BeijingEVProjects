/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/meshxobject.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace ModelManager
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CMeshxObject_isAttached_ev_bool_Callback)();
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CMeshxObject_getNode_CNode_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CMeshxObject_attachToNode_ev_bool_CNode_Callback)(_in EarthView::World::Graphic::CNode* n);
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CMeshxObject_detachFromNode_CNode_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CMeshxObject_applyScenePosition_ev_bool_Callback)();
				class CMeshxObjectProxy : public EarthView::World::Spatial3D::ModelManager::CMeshxObject
				{
				private:
					EarthView_World_Spatial3D_ModelManager_CMeshxObject_isAttached_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_isAttached_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CMeshxObject_getNode_CNode_Callback* m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_getNode_CNode_Callback;
					EarthView_World_Spatial3D_ModelManager_CMeshxObject_attachToNode_ev_bool_CNode_Callback* m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_attachToNode_ev_bool_CNode_Callback;
					EarthView_World_Spatial3D_ModelManager_CMeshxObject_detachFromNode_CNode_Callback* m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_detachFromNode_CNode_Callback;
					EarthView_World_Spatial3D_ModelManager_CMeshxObject_applyScenePosition_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_applyScenePosition_ev_bool_Callback;
				public:
					CMeshxObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CMeshxObject(pList)
					{
						m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_isAttached_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_getNode_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_attachToNode_ev_bool_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_detachFromNode_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_applyScenePosition_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_isAttached_ev_bool(EarthView_World_Spatial3D_ModelManager_CMeshxObject_isAttached_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_isAttached_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_getNode_CNode(EarthView_World_Spatial3D_ModelManager_CMeshxObject_getNode_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_getNode_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_attachToNode_ev_bool_CNode(EarthView_World_Spatial3D_ModelManager_CMeshxObject_attachToNode_ev_bool_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_attachToNode_ev_bool_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_detachFromNode_CNode(EarthView_World_Spatial3D_ModelManager_CMeshxObject_detachFromNode_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_detachFromNode_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_applyScenePosition_ev_bool(EarthView_World_Spatial3D_ModelManager_CMeshxObject_applyScenePosition_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_applyScenePosition_ev_bool_Callback = pCallback;
					}
					virtual ev_bool isAttached()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_isAttached_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMeshxObject::isAttached();
					}
					virtual EarthView::World::Graphic::CNode* getNode()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_getNode_CNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_getNode_CNode_Callback();
							return returnValue;
						}
						else
							return this->CMeshxObject::getNode();
					}
					virtual ev_bool attachToNode(_in EarthView::World::Graphic::CNode* n)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_attachToNode_ev_bool_CNode_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_attachToNode_ev_bool_CNode_Callback(n);
							return returnValue;
						}
						else
							return this->CMeshxObject::attachToNode(n);
					}
					virtual EarthView::World::Graphic::CNode* detachFromNode()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_detachFromNode_CNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_detachFromNode_CNode_Callback();
							return returnValue;
						}
						else
							return this->CMeshxObject::detachFromNode();
					}
					virtual ev_bool applyScenePosition()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_applyScenePosition_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CMeshxObject_applyScenePosition_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMeshxObject::applyScenePosition();
					}
				};
				REGISTER_FACTORY_CLASS(CMeshxObjectProxy);
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CMeshxObject_isAttached_ev_bool_Callback* pCallback )
				{
					CMeshxObjectProxy* ptr = dynamic_cast<CMeshxObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CMeshxObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_isAttached_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_getNode_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CMeshxObject_getNode_CNode_Callback* pCallback )
				{
					CMeshxObjectProxy* ptr = dynamic_cast<CMeshxObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CMeshxObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_getNode_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_attachToNode_ev_bool_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CMeshxObject_attachToNode_ev_bool_CNode_Callback* pCallback )
				{
					CMeshxObjectProxy* ptr = dynamic_cast<CMeshxObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CMeshxObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_attachToNode_ev_bool_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_detachFromNode_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CMeshxObject_detachFromNode_CNode_Callback* pCallback )
				{
					CMeshxObjectProxy* ptr = dynamic_cast<CMeshxObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CMeshxObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_detachFromNode_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_applyScenePosition_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CMeshxObject_applyScenePosition_ev_bool_Callback* pCallback )
				{
					CMeshxObjectProxy* ptr = dynamic_cast<CMeshxObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CMeshxObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_applyScenePosition_ev_bool(pCallback);
					}
				}
			}
		}
	}
}
