/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/layer3deditorlistener.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			typedef void  ( _stdcall EarthView_World_Spatial3D_CLayer3DEditorListener_onStartEditing_void_IGlobeLayer_Callback)(_in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CLayer3DEditorListener_onEndEditing_void_IGlobeLayer_Callback)(_in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CLayer3DEditorListener_onEndCommitModel_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_Callback)(_in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer, _in int operType, _in ev_uint32 cacheID, _in ev_uint32 dbID);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CLayer3DEditorListener_onInsertMeshxg_void_IGlobeLayer_ev_uint32_ev_uint32_Callback)(_in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer, _in ev_uint32 cacheID, _in ev_uint32 recordID);
			class CLayer3DEditorListenerProxy : public EarthView::World::Spatial3D::CLayer3DEditorListener
			{
			private:
				EarthView_World_Spatial3D_CLayer3DEditorListener_onStartEditing_void_IGlobeLayer_Callback* m_EarthView_World_Spatial3D_CLayer3DEditorListener_onStartEditing_void_IGlobeLayer_Callback;
				EarthView_World_Spatial3D_CLayer3DEditorListener_onEndEditing_void_IGlobeLayer_Callback* m_EarthView_World_Spatial3D_CLayer3DEditorListener_onEndEditing_void_IGlobeLayer_Callback;
				EarthView_World_Spatial3D_CLayer3DEditorListener_onEndCommitModel_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial3D_CLayer3DEditorListener_onEndCommitModel_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_Callback;
				EarthView_World_Spatial3D_CLayer3DEditorListener_onInsertMeshxg_void_IGlobeLayer_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial3D_CLayer3DEditorListener_onInsertMeshxg_void_IGlobeLayer_ev_uint32_ev_uint32_Callback;
			public:
				CLayer3DEditorListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CLayer3DEditorListener(pList)
				{
					m_EarthView_World_Spatial3D_CLayer3DEditorListener_onStartEditing_void_IGlobeLayer_Callback = NULL;
					m_EarthView_World_Spatial3D_CLayer3DEditorListener_onEndEditing_void_IGlobeLayer_Callback = NULL;
					m_EarthView_World_Spatial3D_CLayer3DEditorListener_onEndCommitModel_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CLayer3DEditorListener_onInsertMeshxg_void_IGlobeLayer_ev_uint32_ev_uint32_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3D_CLayer3DEditorListener_onStartEditing_void_IGlobeLayer(EarthView_World_Spatial3D_CLayer3DEditorListener_onStartEditing_void_IGlobeLayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLayer3DEditorListener_onStartEditing_void_IGlobeLayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLayer3DEditorListener_onEndEditing_void_IGlobeLayer(EarthView_World_Spatial3D_CLayer3DEditorListener_onEndEditing_void_IGlobeLayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLayer3DEditorListener_onEndEditing_void_IGlobeLayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLayer3DEditorListener_onEndCommitModel_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32(EarthView_World_Spatial3D_CLayer3DEditorListener_onEndCommitModel_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLayer3DEditorListener_onEndCommitModel_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLayer3DEditorListener_onInsertMeshxg_void_IGlobeLayer_ev_uint32_ev_uint32(EarthView_World_Spatial3D_CLayer3DEditorListener_onInsertMeshxg_void_IGlobeLayer_ev_uint32_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLayer3DEditorListener_onInsertMeshxg_void_IGlobeLayer_ev_uint32_ev_uint32_Callback = pCallback;
				}
				virtual void onStartEditing(_in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer)
				{
					if(m_EarthView_World_Spatial3D_CLayer3DEditorListener_onStartEditing_void_IGlobeLayer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CLayer3DEditorListener_onStartEditing_void_IGlobeLayer_Callback(pLayer);
					}
					else
						return this->CLayer3DEditorListener::onStartEditing(pLayer);
				}
				virtual void onEndEditing(_in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer)
				{
					if(m_EarthView_World_Spatial3D_CLayer3DEditorListener_onEndEditing_void_IGlobeLayer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CLayer3DEditorListener_onEndEditing_void_IGlobeLayer_Callback(pLayer);
					}
					else
						return this->CLayer3DEditorListener::onEndEditing(pLayer);
				}
				virtual void onEndCommitModel(_in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer, _in EarthView::World::Spatial3D::Dataset::EntityDatasetOperType operType, _in ev_uint32 cacheID, _in ev_uint32 dbID)
				{
					if(m_EarthView_World_Spatial3D_CLayer3DEditorListener_onEndCommitModel_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CLayer3DEditorListener_onEndCommitModel_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_Callback(pLayer, (int)operType, cacheID, dbID);
					}
					else
						return this->CLayer3DEditorListener::onEndCommitModel(pLayer, operType, cacheID, dbID);
				}
				virtual void onInsertMeshxg(_in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer, _in ev_uint32 cacheID, _in ev_uint32 recordID)
				{
					if(m_EarthView_World_Spatial3D_CLayer3DEditorListener_onInsertMeshxg_void_IGlobeLayer_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CLayer3DEditorListener_onInsertMeshxg_void_IGlobeLayer_ev_uint32_ev_uint32_Callback(pLayer, cacheID, recordID);
					}
					else
						return this->CLayer3DEditorListener::onInsertMeshxg(pLayer, cacheID, recordID);
				}
			};
			REGISTER_FACTORY_CLASS(CLayer3DEditorListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CLayer3DEditorListener_onStartEditing_void_IGlobeLayer(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer )
			{
				EarthView::World::Spatial3D::CLayer3DEditorListener* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditorListener*) pObjectXXXX;
				if (dynamic_cast<CLayer3DEditorListenerProxy*>((EarthView::World::Spatial3D::CLayer3DEditorListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditorListener::onStartEditing(pLayer);
				else
					ptrNativeObject->onStartEditing(pLayer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditorListener_onStartEditing_void_IGlobeLayer( void *pObjectXXXX, EarthView_World_Spatial3D_CLayer3DEditorListener_onStartEditing_void_IGlobeLayer_Callback* pCallback )
			{
				CLayer3DEditorListenerProxy* ptr = dynamic_cast<CLayer3DEditorListenerProxy*>((EarthView::World::Spatial3D::CLayer3DEditorListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLayer3DEditorListener_onStartEditing_void_IGlobeLayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CLayer3DEditorListener_onStartEditing_void_IGlobeLayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer )
			{
				EarthView::World::Spatial3D::CLayer3DEditorListener* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditorListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditorListener::onStartEditing(pLayer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CLayer3DEditorListener_onEndEditing_void_IGlobeLayer(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer )
			{
				EarthView::World::Spatial3D::CLayer3DEditorListener* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditorListener*) pObjectXXXX;
				if (dynamic_cast<CLayer3DEditorListenerProxy*>((EarthView::World::Spatial3D::CLayer3DEditorListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditorListener::onEndEditing(pLayer);
				else
					ptrNativeObject->onEndEditing(pLayer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditorListener_onEndEditing_void_IGlobeLayer( void *pObjectXXXX, EarthView_World_Spatial3D_CLayer3DEditorListener_onEndEditing_void_IGlobeLayer_Callback* pCallback )
			{
				CLayer3DEditorListenerProxy* ptr = dynamic_cast<CLayer3DEditorListenerProxy*>((EarthView::World::Spatial3D::CLayer3DEditorListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLayer3DEditorListener_onEndEditing_void_IGlobeLayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CLayer3DEditorListener_onEndEditing_void_IGlobeLayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer )
			{
				EarthView::World::Spatial3D::CLayer3DEditorListener* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditorListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditorListener::onEndEditing(pLayer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CLayer3DEditorListener_onEndCommitModel_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer, _in int operType, _in ev_uint32 cacheID, _in ev_uint32 dbID )
			{
				EarthView::World::Spatial3D::CLayer3DEditorListener* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditorListener*) pObjectXXXX;
				if (dynamic_cast<CLayer3DEditorListenerProxy*>((EarthView::World::Spatial3D::CLayer3DEditorListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditorListener::onEndCommitModel(pLayer, (EarthView::World::Spatial3D::Dataset::EntityDatasetOperType)operType, cacheID, dbID);
				else
					ptrNativeObject->onEndCommitModel(pLayer, (EarthView::World::Spatial3D::Dataset::EntityDatasetOperType)operType, cacheID, dbID);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditorListener_onEndCommitModel_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CLayer3DEditorListener_onEndCommitModel_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_Callback* pCallback )
			{
				CLayer3DEditorListenerProxy* ptr = dynamic_cast<CLayer3DEditorListenerProxy*>((EarthView::World::Spatial3D::CLayer3DEditorListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLayer3DEditorListener_onEndCommitModel_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CLayer3DEditorListener_onEndCommitModel_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer, _in int operType, _in ev_uint32 cacheID, _in ev_uint32 dbID )
			{
				EarthView::World::Spatial3D::CLayer3DEditorListener* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditorListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditorListener::onEndCommitModel(pLayer, (EarthView::World::Spatial3D::Dataset::EntityDatasetOperType)operType, cacheID, dbID);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CLayer3DEditorListener_onInsertMeshxg_void_IGlobeLayer_ev_uint32_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer, _in ev_uint32 cacheID, _in ev_uint32 recordID )
			{
				EarthView::World::Spatial3D::CLayer3DEditorListener* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditorListener*) pObjectXXXX;
				if (dynamic_cast<CLayer3DEditorListenerProxy*>((EarthView::World::Spatial3D::CLayer3DEditorListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditorListener::onInsertMeshxg(pLayer, cacheID, recordID);
				else
					ptrNativeObject->onInsertMeshxg(pLayer, cacheID, recordID);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditorListener_onInsertMeshxg_void_IGlobeLayer_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CLayer3DEditorListener_onInsertMeshxg_void_IGlobeLayer_ev_uint32_ev_uint32_Callback* pCallback )
			{
				CLayer3DEditorListenerProxy* ptr = dynamic_cast<CLayer3DEditorListenerProxy*>((EarthView::World::Spatial3D::CLayer3DEditorListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLayer3DEditorListener_onInsertMeshxg_void_IGlobeLayer_ev_uint32_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CLayer3DEditorListener_onInsertMeshxg_void_IGlobeLayer_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer, _in ev_uint32 cacheID, _in ev_uint32 recordID )
			{
				EarthView::World::Spatial3D::CLayer3DEditorListener* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditorListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditorListener::onInsertMeshxg(pLayer, cacheID, recordID);
			}
		}
	}
}
