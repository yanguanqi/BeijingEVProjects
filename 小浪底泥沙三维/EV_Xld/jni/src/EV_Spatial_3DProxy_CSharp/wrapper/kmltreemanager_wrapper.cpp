/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dproxy/kmltreemanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Kml
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			namespace KmlManager
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_push_back_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer*& t )
				{
					EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers*) pObjectXXXX;
					ptrNativeObject->push_back(t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_OperatorIndex_ILayer_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers& objYYYY = *(EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = objYYYY[n];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_at_ILayer_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->at(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveSceneLayer_ev_bool_CSceneLayerActiveEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onChangeSceneLayerName_ev_bool_CSceneLayerActiveEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback)(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onUpdateKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback)(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback)(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback)(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_Callback)(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_Callback)(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFileEvent_ev_bool_CKmlTreeNodeEvent_Callback)(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlFileEvent_ev_bool_CKmlTreeNodeEvent_Callback)(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback)(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback)(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback)(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_Callback)(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_Callback)(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_Callback)(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_Callback)(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_Callback)(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_Callback)(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
				typedef void  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneChange_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				typedef void  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCurrentToolChanged_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				typedef void  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneClose_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				typedef void  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTourEnd_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				typedef void  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setCurrentLayer_void_CKmlLayer_Callback)(_in EarthView::World::Spatial3D::Atlas::CKmlLayer* ref_layer);
				typedef EarthView::World::Spatial3D::Atlas::CKmlLayer*  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_getCurrentLayer_CKmlLayer_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onEvent_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				typedef void  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTimerEvent_void_CTimerEvent_Callback)(_in EarthView::World::Core::CTimerEvent* e);
				typedef void  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCustomEvent_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CKmlTreeManagerProxy : public EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager
				{
				private:
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveSceneLayer_ev_bool_CSceneLayerActiveEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveSceneLayer_ev_bool_CSceneLayerActiveEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onChangeSceneLayerName_ev_bool_CSceneLayerActiveEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onChangeSceneLayerName_ev_bool_CSceneLayerActiveEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onUpdateKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onUpdateKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFileEvent_ev_bool_CKmlTreeNodeEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFileEvent_ev_bool_CKmlTreeNodeEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlFileEvent_ev_bool_CKmlTreeNodeEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlFileEvent_ev_bool_CKmlTreeNodeEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneChange_void_CEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneChange_void_CEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCurrentToolChanged_void_CEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCurrentToolChanged_void_CEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneClose_void_CEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneClose_void_CEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTourEnd_void_CEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTourEnd_void_CEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setCurrentLayer_void_CKmlLayer_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setCurrentLayer_void_CKmlLayer_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_getCurrentLayer_CKmlLayer_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_getCurrentLayer_CKmlLayer_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onEvent_ev_bool_CEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onEvent_ev_bool_CEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTimerEvent_void_CTimerEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTimerEvent_void_CTimerEvent_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCustomEvent_void_CEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCustomEvent_void_CEvent_Callback;
				public:
					CKmlTreeManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlTreeManager(pList)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveSceneLayer_ev_bool_CSceneLayerActiveEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onChangeSceneLayerName_ev_bool_CSceneLayerActiveEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onUpdateKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFileEvent_ev_bool_CKmlTreeNodeEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlFileEvent_ev_bool_CKmlTreeNodeEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneChange_void_CEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCurrentToolChanged_void_CEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneClose_void_CEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTourEnd_void_CEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setCurrentLayer_void_CKmlLayer_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_getCurrentLayer_CKmlLayer_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onEvent_ev_bool_CEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTimerEvent_void_CTimerEvent_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCustomEvent_void_CEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveSceneLayer_ev_bool_CSceneLayerActiveEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveSceneLayer_ev_bool_CSceneLayerActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveSceneLayer_ev_bool_CSceneLayerActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onChangeSceneLayerName_ev_bool_CSceneLayerActiveEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onChangeSceneLayerName_ev_bool_CSceneLayerActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onChangeSceneLayerName_ev_bool_CSceneLayerActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onUpdateKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onUpdateKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onUpdateKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderEvent_ev_bool_CKmlTreeNodeEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderEvent_ev_bool_CKmlTreeNodeEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFileEvent_ev_bool_CKmlTreeNodeEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFileEvent_ev_bool_CKmlTreeNodeEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFileEvent_ev_bool_CKmlTreeNodeEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlFileEvent_ev_bool_CKmlTreeNodeEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlFileEvent_ev_bool_CKmlTreeNodeEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlFileEvent_ev_bool_CKmlTreeNodeEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddNetworkLink_ev_bool_CKmlTreeNodeEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveNetworkLink_ev_bool_CKmlTreeNodeEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveNetworkLink_ev_bool_CKmlTreeNodeEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderAfter_ev_bool_CKmlTreeNodeEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderAfter_ev_bool_CKmlTreeNodeEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectAfter_ev_bool_CKmlTreeNodeEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectAfter_ev_bool_CKmlTreeNodeEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneChange_void_CEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneChange_void_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneChange_void_CEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCurrentToolChanged_void_CEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCurrentToolChanged_void_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCurrentToolChanged_void_CEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneClose_void_CEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneClose_void_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneClose_void_CEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTourEnd_void_CEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTourEnd_void_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTourEnd_void_CEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setCurrentLayer_void_CKmlLayer(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setCurrentLayer_void_CKmlLayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setCurrentLayer_void_CKmlLayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_getCurrentLayer_CKmlLayer(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_getCurrentLayer_CKmlLayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_getCurrentLayer_CKmlLayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onEvent_ev_bool_CEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onEvent_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onEvent_ev_bool_CEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTimerEvent_void_CTimerEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTimerEvent_void_CTimerEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTimerEvent_void_CTimerEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCustomEvent_void_CEvent(EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCustomEvent_void_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCustomEvent_void_CEvent_Callback = pCallback;
					}
					virtual ev_bool onEvent(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onEvent_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onEvent_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CKmlTreeManager::onEvent(e);
					}
					virtual ev_bool onRemoveSceneLayer(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveSceneLayer_ev_bool_CSceneLayerActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveSceneLayer_ev_bool_CSceneLayerActiveEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CKmlTreeManager::onRemoveSceneLayer(e);
					}
					virtual ev_bool onChangeSceneLayerName(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onChangeSceneLayerName_ev_bool_CSceneLayerActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onChangeSceneLayerName_ev_bool_CSceneLayerActiveEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CKmlTreeManager::onChangeSceneLayerName(e);
					}
					virtual ev_bool onAddKmlObjectEvent(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CKmlTreeManager::onAddKmlObjectEvent(e);
					}
					virtual ev_bool onUpdateKmlObjectEvent(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onUpdateKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onUpdateKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CKmlTreeManager::onUpdateKmlObjectEvent(e);
					}
					virtual ev_bool onRemoveKmlObjectEvent(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CKmlTreeManager::onRemoveKmlObjectEvent(e);
					}
					virtual ev_bool onSaveKmlObjectEvent(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CKmlTreeManager::onSaveKmlObjectEvent(e);
					}
					virtual ev_bool onAddKmlFolderEvent(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CKmlTreeManager::onAddKmlFolderEvent(e);
					}
					virtual ev_bool onRemoveKmlFolderEvent(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CKmlTreeManager::onRemoveKmlFolderEvent(e);
					}
					virtual ev_bool onAddKmlFileEvent(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFileEvent_ev_bool_CKmlTreeNodeEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFileEvent_ev_bool_CKmlTreeNodeEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CKmlTreeManager::onAddKmlFileEvent(e);
					}
					virtual ev_bool onSaveKmlFileEvent(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlFileEvent_ev_bool_CKmlTreeNodeEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlFileEvent_ev_bool_CKmlTreeNodeEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CKmlTreeManager::onSaveKmlFileEvent(e);
					}
					virtual ev_bool onAddNetworkLink(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CKmlTreeManager::onAddNetworkLink(e);
					}
					virtual ev_bool onRemoveNetworkLink(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CKmlTreeManager::onRemoveNetworkLink(e);
					}
					virtual ev_bool onSaveNetworkLink(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CKmlTreeManager::onSaveNetworkLink(e);
					}
					virtual ev_bool onAddKmlFolderAfter(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CKmlTreeManager::onAddKmlFolderAfter(e);
					}
					virtual ev_bool onRemoveKmlFolderAfter(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CKmlTreeManager::onRemoveKmlFolderAfter(e);
					}
					virtual ev_bool onAddKmlObjectAfter(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CKmlTreeManager::onAddKmlObjectAfter(e);
					}
					virtual ev_bool onRemoveKmlObjectAfter(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CKmlTreeManager::onRemoveKmlObjectAfter(e);
					}
					virtual ev_bool onAddKmlNetworkLinkAfter(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CKmlTreeManager::onAddKmlNetworkLinkAfter(e);
					}
					virtual ev_bool onRemoveKmlNetworkLinkAfter(_in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CKmlTreeManager::onRemoveKmlNetworkLinkAfter(e);
					}
					virtual void onSceneChange(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneChange_void_CEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneChange_void_CEvent_Callback(e);
						}
						else
							return this->CKmlTreeManager::onSceneChange(e);
					}
					virtual void onCurrentToolChanged(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCurrentToolChanged_void_CEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCurrentToolChanged_void_CEvent_Callback(e);
						}
						else
							return this->CKmlTreeManager::onCurrentToolChanged(e);
					}
					virtual void onSceneClose(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneClose_void_CEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneClose_void_CEvent_Callback(e);
						}
						else
							return this->CKmlTreeManager::onSceneClose(e);
					}
					virtual void onTourEnd(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTourEnd_void_CEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTourEnd_void_CEvent_Callback(e);
						}
						else
							return this->CKmlTreeManager::onTourEnd(e);
					}
					virtual void setCurrentLayer(_in EarthView::World::Spatial3D::Atlas::CKmlLayer* ref_layer)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setCurrentLayer_void_CKmlLayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setCurrentLayer_void_CKmlLayer_Callback(ref_layer);
						}
						else
							return this->CKmlTreeManager::setCurrentLayer(ref_layer);
					}
					virtual EarthView::World::Spatial3D::Atlas::CKmlLayer* getCurrentLayer()
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_getCurrentLayer_CKmlLayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Atlas::CKmlLayer* returnValue = m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_getCurrentLayer_CKmlLayer_Callback();
							return returnValue;
						}
						else
							return this->CKmlTreeManager::getCurrentLayer();
					}
					virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTimerEvent_void_CTimerEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTimerEvent_void_CTimerEvent_Callback(e);
						}
						else
							return this->CKmlTreeManager::onTimerEvent(e);
					}
					virtual void onCustomEvent(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCustomEvent_void_CEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCustomEvent_void_CEvent_Callback(e);
						}
						else
							return this->CKmlTreeManager::onCustomEvent(e);
					}
				};
				REGISTER_FACTORY_CLASS(CKmlTreeManagerProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onEvent_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onEvent(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onEvent(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onEvent_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onEvent_ev_bool_CEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onEvent_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onEvent_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onEvent(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveSceneLayer_ev_bool_CSceneLayerActiveEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveSceneLayer(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onRemoveSceneLayer(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveSceneLayer_ev_bool_CSceneLayerActiveEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveSceneLayer_ev_bool_CSceneLayerActiveEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveSceneLayer_ev_bool_CSceneLayerActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveSceneLayer_ev_bool_CSceneLayerActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveSceneLayer(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onChangeSceneLayerName_ev_bool_CSceneLayerActiveEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onChangeSceneLayerName(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onChangeSceneLayerName(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onChangeSceneLayerName_ev_bool_CSceneLayerActiveEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onChangeSceneLayerName_ev_bool_CSceneLayerActiveEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onChangeSceneLayerName_ev_bool_CSceneLayerActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onChangeSceneLayerName_ev_bool_CSceneLayerActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onChangeSceneLayerName(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlObjectEvent(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onAddKmlObjectEvent(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectEvent_ev_bool_CKmlTreeNodeEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlObjectEvent(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onUpdateKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onUpdateKmlObjectEvent(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onUpdateKmlObjectEvent(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onUpdateKmlObjectEvent_ev_bool_CKmlTreeNodeEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onUpdateKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onUpdateKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onUpdateKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onUpdateKmlObjectEvent(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveKmlObjectEvent(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onRemoveKmlObjectEvent(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveKmlObjectEvent(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onSaveKmlObjectEvent(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onSaveKmlObjectEvent(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onSaveKmlObjectEvent(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderEvent_ev_bool_CKmlTreeNodeEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlFolderEvent(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onAddKmlFolderEvent(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderEvent_ev_bool_CKmlTreeNodeEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderEvent_ev_bool_CKmlTreeNodeEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlFolderEvent(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderEvent_ev_bool_CKmlTreeNodeEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveKmlFolderEvent(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onRemoveKmlFolderEvent(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderEvent_ev_bool_CKmlTreeNodeEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderEvent_ev_bool_CKmlTreeNodeEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveKmlFolderEvent(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFileEvent_ev_bool_CKmlTreeNodeEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlFileEvent(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onAddKmlFileEvent(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFileEvent_ev_bool_CKmlTreeNodeEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFileEvent_ev_bool_CKmlTreeNodeEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFileEvent_ev_bool_CKmlTreeNodeEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFileEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlFileEvent(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlFileEvent_ev_bool_CKmlTreeNodeEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onSaveKmlFileEvent(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onSaveKmlFileEvent(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlFileEvent_ev_bool_CKmlTreeNodeEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlFileEvent_ev_bool_CKmlTreeNodeEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlFileEvent_ev_bool_CKmlTreeNodeEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlFileEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onSaveKmlFileEvent(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddNetworkLink_ev_bool_CKmlTreeNodeEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddNetworkLink(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onAddNetworkLink(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddNetworkLink_ev_bool_CKmlTreeNodeEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddNetworkLink_ev_bool_CKmlTreeNodeEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddNetworkLink_ev_bool_CKmlTreeNodeEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddNetworkLink(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveNetworkLink_ev_bool_CKmlTreeNodeEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveNetworkLink(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onRemoveNetworkLink(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveNetworkLink_ev_bool_CKmlTreeNodeEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveNetworkLink_ev_bool_CKmlTreeNodeEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveNetworkLink_ev_bool_CKmlTreeNodeEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveNetworkLink(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveNetworkLink_ev_bool_CKmlTreeNodeEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onSaveNetworkLink(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onSaveNetworkLink(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveNetworkLink_ev_bool_CKmlTreeNodeEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveNetworkLink_ev_bool_CKmlTreeNodeEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveNetworkLink_ev_bool_CKmlTreeNodeEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveNetworkLink_ev_bool_CKmlTreeNodeEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onSaveNetworkLink(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderAfter_ev_bool_CKmlTreeNodeEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlFolderAfter(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onAddKmlFolderAfter(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderAfter_ev_bool_CKmlTreeNodeEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderAfter_ev_bool_CKmlTreeNodeEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlFolderAfter(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderAfter_ev_bool_CKmlTreeNodeEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveKmlFolderAfter(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onRemoveKmlFolderAfter(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderAfter_ev_bool_CKmlTreeNodeEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderAfter_ev_bool_CKmlTreeNodeEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveKmlFolderAfter(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectAfter_ev_bool_CKmlTreeNodeEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlObjectAfter(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onAddKmlObjectAfter(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectAfter_ev_bool_CKmlTreeNodeEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectAfter_ev_bool_CKmlTreeNodeEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlObjectAfter(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectAfter_ev_bool_CKmlTreeNodeEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveKmlObjectAfter(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onRemoveKmlObjectAfter(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectAfter_ev_bool_CKmlTreeNodeEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectAfter_ev_bool_CKmlTreeNodeEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveKmlObjectAfter(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlNetworkLinkAfter(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onAddKmlNetworkLinkAfter(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onAddKmlNetworkLinkAfter(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveKmlNetworkLinkAfter(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onRemoveKmlNetworkLinkAfter(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onRemoveKmlNetworkLinkAfter(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneChange_void_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onSceneChange(e);
					else
						ptrNativeObject->onSceneChange(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneChange_void_CEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneChange_void_CEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneChange_void_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneChange_void_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onSceneChange(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCurrentToolChanged_void_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onCurrentToolChanged(e);
					else
						ptrNativeObject->onCurrentToolChanged(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCurrentToolChanged_void_CEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCurrentToolChanged_void_CEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCurrentToolChanged_void_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCurrentToolChanged_void_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onCurrentToolChanged(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneClose_void_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onSceneClose(e);
					else
						ptrNativeObject->onSceneClose(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneClose_void_CEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneClose_void_CEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneClose_void_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneClose_void_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onSceneClose(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTourEnd_void_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onTourEnd(e);
					else
						ptrNativeObject->onTourEnd(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTourEnd_void_CEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTourEnd_void_CEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTourEnd_void_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTourEnd_void_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::onTourEnd(e);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_computeCGeoObjectCenterPos_CVector3_CVector3_EVAltitudeMode_ev_real64(void *pObjectXXXX, _in void* centerLatLon, _in int am, _in ev_real64 alt )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->computeCGeoObjectCenterPos(*(EarthView::World::Spatial::Math::CVector3*)centerLatLon, (EarthView::World::Spatial::Utility::EVAltitudeMode)am, alt);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_computeRange_void_CVector3_CVector3_ev_real64(void *pObjectXXXX, _in void* modelPos, _in void* cameraPos, _inout ev_real64& range )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->computeRange(*(EarthView::World::Spatial::Math::CVector3*)modelPos, *(EarthView::World::Spatial::Math::CVector3*)cameraPos, range);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_computeCameraAlt_ev_real64_CGeoObjectExtension(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->computeCameraAlt(geoobj);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setGlobeControlsLayers_void_AllGlobeControlLayers(void *pObjectXXXX, _in void* allLayers )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->setGlobeControlsLayers(*(EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers*)allLayers);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_computePlacemarkView_void_CGlobeCamera_CVector3_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in EarthView::World::Spatial3D::CGlobeCamera* camera, _inout void* pos, _inout ev_real64& heading, _inout ev_real64& tilt, _inout ev_real64& range )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->computePlacemarkView(camera, *(EarthView::World::Spatial::Math::CVector3*)pos, heading, tilt, range);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setCurrentLayer_void_CKmlLayer(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::CKmlLayer* ref_layer )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::setCurrentLayer(ref_layer);
					else
						ptrNativeObject->setCurrentLayer(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setCurrentLayer_void_CKmlLayer( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setCurrentLayer_void_CKmlLayer_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setCurrentLayer_void_CKmlLayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setCurrentLayer_void_CKmlLayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::CKmlLayer* ref_layer )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::setCurrentLayer(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::CKmlLayer*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_getCurrentLayer_CKmlLayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					if (dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::Atlas::CKmlLayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::getCurrentLayer();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::Atlas::CKmlLayer* objXXXX = ptrNativeObject->getCurrentLayer();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_getCurrentLayer_CKmlLayer( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_getCurrentLayer_CKmlLayer_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_getCurrentLayer_CKmlLayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::CKmlLayer*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_getCurrentLayer_CKmlLayer_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::CKmlLayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager::getCurrentLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_loadTree_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->loadTree();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlDocument*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_addKmlFile_CKmlDocument_EVString_CKmlDocument(void *pObjectXXXX, _in char* filePath, _in EarthView::World::Spatial::Kml::CKmlDocument* parent )
				{
					EarthView::World::Core::ev_string filePath1 = filePath;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* objXXXX = ptrNativeObject->addKmlFile(filePath1, parent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_saveKmlFile_void_EVString(void *pObjectXXXX, _in char* savePath )
				{
					EarthView::World::Core::ev_string savePath1 = savePath;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->saveKmlFile(savePath1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_saveFolder_void_EVString_CKmlDocument(void *pObjectXXXX, _in char* savePath, _in EarthView::World::Spatial::Kml::CKmlDocument* node )
				{
					EarthView::World::Core::ev_string savePath1 = savePath;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->saveFolder(savePath1, node);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_addKmlObject_void_CGeoObjectExtension_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Spatial::Kml::CKmlDocument* parent )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->addKmlObject(geoObj, parent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_updateKmlObject_void_CGeoObjectExtension_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Spatial::Kml::CKmlDocument* parent )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->updateKmlObject(geoObj, parent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_removeKmlObject_void_CGeoObjectExtension_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Spatial::Kml::CKmlDocument* parent )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->removeKmlObject(geoObj, parent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_saveKmlObject_void_EVString_CGeoObjectExtension(void *pObjectXXXX, _in char* savePath, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj )
				{
					EarthView::World::Core::ev_string savePath1 = savePath;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->saveKmlObject(savePath1, geoObj);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_addKmlFolder_void_CKmlDocument_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* folder, _in EarthView::World::Spatial::Kml::CKmlDocument* parent )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->addKmlFolder(folder, parent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_updateKmlFolder_void_CKmlDocument_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* pKmlFolder, _in EarthView::World::Spatial::Kml::CKmlDocument* pParentKmlFolder )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->updateKmlFolder(pKmlFolder, pParentKmlFolder);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_removeKmlFolder_void_CKmlDocument_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* node, _in EarthView::World::Spatial::Kml::CKmlDocument* parent )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->removeKmlFolder(node, parent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_addTour_void_CTour_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CTour* tour, _in EarthView::World::Spatial::Kml::CKmlDocument* parent )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->addTour(tour, parent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_removeTour_void_CTour_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CTour* tour, _in EarthView::World::Spatial::Kml::CKmlDocument* parent )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->removeTour(tour, parent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_saveTour_void_EVString_CTour(void *pObjectXXXX, _in const char* savePath, _in EarthView::World::Spatial::Kml::CTour* tour )
				{
					EarthView::World::Core::ev_string savePath1 = savePath;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->saveTour(savePath1, tour);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_addNetworkLink_void_CKmlNetworkLink_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlNetworkLink* kmlNet, _in EarthView::World::Spatial::Kml::CKmlDocument* parent )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->addNetworkLink(kmlNet, parent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_updateKmlNetworkLink_void_CKmlNetworkLink_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlNetworkLink* pKmlNetworkLink, _in EarthView::World::Spatial::Kml::CKmlDocument* parent )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->updateKmlNetworkLink(pKmlNetworkLink, parent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_removeKmlNetworkLink_void_CKmlNetworkLink_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlNetworkLink* netLink, _in EarthView::World::Spatial::Kml::CKmlDocument* parent )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->removeKmlNetworkLink(netLink, parent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_saveKmlNetworkLink_void_EVString_CKmlNetworkLink(void *pObjectXXXX, _in char* savePath, _in EarthView::World::Spatial::Kml::CKmlNetworkLink* netLink )
				{
					EarthView::World::Core::ev_string savePath1 = savePath;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX;
					ptrNativeObject->saveKmlNetworkLink(savePath1, netLink);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTimerEvent_void_CTimerEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTimerEvent_void_CTimerEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTimerEvent_void_CTimerEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCustomEvent_void_CEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCustomEvent_void_CEvent_Callback* pCallback )
				{
					CKmlTreeManagerProxy* ptr = dynamic_cast<CKmlTreeManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCustomEvent_void_CEvent(pCallback);
					}
				}
			}
		}
	}
}
