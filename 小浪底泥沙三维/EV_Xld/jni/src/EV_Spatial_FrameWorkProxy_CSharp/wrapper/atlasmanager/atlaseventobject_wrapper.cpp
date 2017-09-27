/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/atlasmanager/atlaseventobject.h"
namespace EarthView
{
	namespace World
	{
		namespace FrameWorkProxy
		{
			namespace AtlasManager
			{
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMap_void_CMapActiveEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CMapActiveEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateScene_void_CSceneActiveEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CSceneActiveEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentMap_void_CMapActiveEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CMapActiveEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentScene_void_CSceneActiveEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CSceneActiveEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMap_void_CMapActiveEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CMapActiveEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveScene_void_CSceneActiveEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CSceneActiveEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapLayer_void_CMapLayerActiveEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapGroupLayer_void_CMapLayerActiveEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveMapLayer_void_CMapLayerActiveEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMapLayer_void_CMapLayerActiveEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeMapName_void_CMapActiveEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CMapActiveEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeSceneName_void_CSceneActiveEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CSceneActiveEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerName_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerVisible_void_CMapLayerActiveEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerTheme_void_CMapLayerActiveEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneLayer_void_CSceneLayerActiveEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneGroupLayer_void_CSceneLayerActiveEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSwitchSceneLayer_void_CSceneLayerActiveEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveSceneLayer_void_CSceneLayerActiveEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveSceneLayer_void_CSceneLayerActiveEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerVisible_void_CSceneLayerActiveEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerTheme_void_CSceneLayerActiveEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e);
				typedef ev_bool  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onEvent_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onTimerEvent_void_CTimerEvent_Callback)(_in EarthView::World::Core::CTimerEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCustomEvent_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CAtlasEventObjectProxy : public EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject
				{
				private:
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMap_void_CMapActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMap_void_CMapActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateScene_void_CSceneActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateScene_void_CSceneActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentMap_void_CMapActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentMap_void_CMapActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentScene_void_CSceneActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentScene_void_CSceneActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMap_void_CMapActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMap_void_CMapActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveScene_void_CSceneActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveScene_void_CSceneActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapLayer_void_CMapLayerActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapLayer_void_CMapLayerActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapGroupLayer_void_CMapLayerActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapGroupLayer_void_CMapLayerActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveMapLayer_void_CMapLayerActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveMapLayer_void_CMapLayerActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMapLayer_void_CMapLayerActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMapLayer_void_CMapLayerActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeMapName_void_CMapActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeMapName_void_CMapActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeSceneName_void_CSceneActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeSceneName_void_CSceneActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerName_void_CEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerName_void_CEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerVisible_void_CMapLayerActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerVisible_void_CMapLayerActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerTheme_void_CMapLayerActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerTheme_void_CMapLayerActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneLayer_void_CSceneLayerActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneLayer_void_CSceneLayerActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneGroupLayer_void_CSceneLayerActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneGroupLayer_void_CSceneLayerActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSwitchSceneLayer_void_CSceneLayerActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSwitchSceneLayer_void_CSceneLayerActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveSceneLayer_void_CSceneLayerActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveSceneLayer_void_CSceneLayerActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveSceneLayer_void_CSceneLayerActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveSceneLayer_void_CSceneLayerActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerVisible_void_CSceneLayerActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerVisible_void_CSceneLayerActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerTheme_void_CSceneLayerActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerTheme_void_CSceneLayerActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onEvent_ev_bool_CEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onEvent_ev_bool_CEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onTimerEvent_void_CTimerEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onTimerEvent_void_CTimerEvent_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCustomEvent_void_CEvent_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCustomEvent_void_CEvent_Callback;
				public:
					CAtlasEventObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CAtlasEventObject(pList)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMap_void_CMapActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateScene_void_CSceneActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentMap_void_CMapActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentScene_void_CSceneActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMap_void_CMapActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveScene_void_CSceneActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapLayer_void_CMapLayerActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapGroupLayer_void_CMapLayerActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveMapLayer_void_CMapLayerActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMapLayer_void_CMapLayerActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeMapName_void_CMapActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeSceneName_void_CSceneActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerName_void_CEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerVisible_void_CMapLayerActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerTheme_void_CMapLayerActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneLayer_void_CSceneLayerActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneGroupLayer_void_CSceneLayerActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSwitchSceneLayer_void_CSceneLayerActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveSceneLayer_void_CSceneLayerActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveSceneLayer_void_CSceneLayerActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerVisible_void_CSceneLayerActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerTheme_void_CSceneLayerActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onEvent_ev_bool_CEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onTimerEvent_void_CTimerEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCustomEvent_void_CEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMap_void_CMapActiveEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMap_void_CMapActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMap_void_CMapActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateScene_void_CSceneActiveEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateScene_void_CSceneActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateScene_void_CSceneActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentMap_void_CMapActiveEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentMap_void_CMapActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentMap_void_CMapActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentScene_void_CSceneActiveEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentScene_void_CSceneActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentScene_void_CSceneActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMap_void_CMapActiveEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMap_void_CMapActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMap_void_CMapActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveScene_void_CSceneActiveEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveScene_void_CSceneActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveScene_void_CSceneActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapLayer_void_CMapLayerActiveEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapLayer_void_CMapLayerActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapLayer_void_CMapLayerActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapGroupLayer_void_CMapLayerActiveEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapGroupLayer_void_CMapLayerActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapGroupLayer_void_CMapLayerActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveMapLayer_void_CMapLayerActiveEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveMapLayer_void_CMapLayerActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveMapLayer_void_CMapLayerActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMapLayer_void_CMapLayerActiveEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMapLayer_void_CMapLayerActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMapLayer_void_CMapLayerActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeMapName_void_CMapActiveEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeMapName_void_CMapActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeMapName_void_CMapActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeSceneName_void_CSceneActiveEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeSceneName_void_CSceneActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeSceneName_void_CSceneActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerName_void_CEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerName_void_CEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerName_void_CEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerVisible_void_CMapLayerActiveEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerVisible_void_CMapLayerActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerVisible_void_CMapLayerActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerTheme_void_CMapLayerActiveEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerTheme_void_CMapLayerActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerTheme_void_CMapLayerActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneLayer_void_CSceneLayerActiveEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneLayer_void_CSceneLayerActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneLayer_void_CSceneLayerActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneGroupLayer_void_CSceneLayerActiveEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneGroupLayer_void_CSceneLayerActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneGroupLayer_void_CSceneLayerActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSwitchSceneLayer_void_CSceneLayerActiveEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSwitchSceneLayer_void_CSceneLayerActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSwitchSceneLayer_void_CSceneLayerActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveSceneLayer_void_CSceneLayerActiveEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveSceneLayer_void_CSceneLayerActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveSceneLayer_void_CSceneLayerActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveSceneLayer_void_CSceneLayerActiveEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveSceneLayer_void_CSceneLayerActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveSceneLayer_void_CSceneLayerActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerVisible_void_CSceneLayerActiveEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerVisible_void_CSceneLayerActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerVisible_void_CSceneLayerActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerTheme_void_CSceneLayerActiveEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerTheme_void_CSceneLayerActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerTheme_void_CSceneLayerActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onEvent_ev_bool_CEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onEvent_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onEvent_ev_bool_CEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onTimerEvent_void_CTimerEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onTimerEvent_void_CTimerEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onTimerEvent_void_CTimerEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCustomEvent_void_CEvent(EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCustomEvent_void_CEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCustomEvent_void_CEvent_Callback = pCallback;
					}
					virtual ev_bool onEvent(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onEvent_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onEvent_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CAtlasEventObject::onEvent(e);
					}
					virtual void onCreateMap(_in EarthView::World::Spatial::SystemUI::CMapActiveEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMap_void_CMapActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMap_void_CMapActiveEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onCreateMap(e);
					}
					virtual void onCreateScene(_in EarthView::World::Spatial::SystemUI::CSceneActiveEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateScene_void_CSceneActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateScene_void_CSceneActiveEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onCreateScene(e);
					}
					virtual void onSetCurrentMap(_in EarthView::World::Spatial::SystemUI::CMapActiveEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentMap_void_CMapActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentMap_void_CMapActiveEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onSetCurrentMap(e);
					}
					virtual void onSetCurrentScene(_in EarthView::World::Spatial::SystemUI::CSceneActiveEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentScene_void_CSceneActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentScene_void_CSceneActiveEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onSetCurrentScene(e);
					}
					virtual void onRemoveMap(_in EarthView::World::Spatial::SystemUI::CMapActiveEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMap_void_CMapActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMap_void_CMapActiveEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onRemoveMap(e);
					}
					virtual void onRemoveScene(_in EarthView::World::Spatial::SystemUI::CSceneActiveEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveScene_void_CSceneActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveScene_void_CSceneActiveEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onRemoveScene(e);
					}
					virtual void onCreateMapLayer(_in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapLayer_void_CMapLayerActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapLayer_void_CMapLayerActiveEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onCreateMapLayer(e);
					}
					virtual void onCreateMapGroupLayer(_in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapGroupLayer_void_CMapLayerActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapGroupLayer_void_CMapLayerActiveEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onCreateMapGroupLayer(e);
					}
					virtual void onMoveMapLayer(_in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveMapLayer_void_CMapLayerActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveMapLayer_void_CMapLayerActiveEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onMoveMapLayer(e);
					}
					virtual void onRemoveMapLayer(_in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMapLayer_void_CMapLayerActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMapLayer_void_CMapLayerActiveEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onRemoveMapLayer(e);
					}
					virtual void onChangeMapName(_in EarthView::World::Spatial::SystemUI::CMapActiveEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeMapName_void_CMapActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeMapName_void_CMapActiveEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onChangeMapName(e);
					}
					virtual void onChangeSceneName(_in EarthView::World::Spatial::SystemUI::CSceneActiveEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeSceneName_void_CSceneActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeSceneName_void_CSceneActiveEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onChangeSceneName(e);
					}
					virtual void onChangeLayerName(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerName_void_CEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerName_void_CEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onChangeLayerName(e);
					}
					virtual void onChangeLayerVisible(_in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerVisible_void_CMapLayerActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerVisible_void_CMapLayerActiveEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onChangeLayerVisible(e);
					}
					virtual void onChangeLayerTheme(_in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerTheme_void_CMapLayerActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerTheme_void_CMapLayerActiveEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onChangeLayerTheme(e);
					}
					virtual void onCreateSceneLayer(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneLayer_void_CSceneLayerActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneLayer_void_CSceneLayerActiveEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onCreateSceneLayer(e);
					}
					virtual void onCreateSceneGroupLayer(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneGroupLayer_void_CSceneLayerActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneGroupLayer_void_CSceneLayerActiveEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onCreateSceneGroupLayer(e);
					}
					virtual void onSwitchSceneLayer(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSwitchSceneLayer_void_CSceneLayerActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSwitchSceneLayer_void_CSceneLayerActiveEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onSwitchSceneLayer(e);
					}
					virtual void onMoveSceneLayer(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveSceneLayer_void_CSceneLayerActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveSceneLayer_void_CSceneLayerActiveEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onMoveSceneLayer(e);
					}
					virtual void onRemoveSceneLayer(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveSceneLayer_void_CSceneLayerActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveSceneLayer_void_CSceneLayerActiveEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onRemoveSceneLayer(e);
					}
					virtual void onSetSceneLayerVisible(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerVisible_void_CSceneLayerActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerVisible_void_CSceneLayerActiveEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onSetSceneLayerVisible(e);
					}
					virtual void onSetSceneLayerTheme(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerTheme_void_CSceneLayerActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerTheme_void_CSceneLayerActiveEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onSetSceneLayerTheme(e);
					}
					virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onTimerEvent_void_CTimerEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onTimerEvent_void_CTimerEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onTimerEvent(e);
					}
					virtual void onCustomEvent(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCustomEvent_void_CEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCustomEvent_void_CEvent_Callback(e);
						}
						else
							return this->CAtlasEventObject::onCustomEvent(e);
					}
				};
				REGISTER_FACTORY_CLASS(CAtlasEventObjectProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onEvent_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					if (dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onEvent(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onEvent(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onEvent_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onEvent_ev_bool_CEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onEvent_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onEvent_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onEvent(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMap_void_CMapActiveEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CMapActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					if (dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateMap(e);
					else
						ptrNativeObject->onCreateMap(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMap_void_CMapActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMap_void_CMapActiveEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMap_void_CMapActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMap_void_CMapActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CMapActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateMap(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateScene_void_CSceneActiveEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					if (dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateScene(e);
					else
						ptrNativeObject->onCreateScene(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateScene_void_CSceneActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateScene_void_CSceneActiveEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateScene_void_CSceneActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateScene_void_CSceneActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateScene(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentMap_void_CMapActiveEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CMapActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					if (dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onSetCurrentMap(e);
					else
						ptrNativeObject->onSetCurrentMap(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentMap_void_CMapActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentMap_void_CMapActiveEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentMap_void_CMapActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentMap_void_CMapActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CMapActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onSetCurrentMap(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentScene_void_CSceneActiveEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					if (dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onSetCurrentScene(e);
					else
						ptrNativeObject->onSetCurrentScene(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentScene_void_CSceneActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentScene_void_CSceneActiveEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentScene_void_CSceneActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentScene_void_CSceneActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onSetCurrentScene(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMap_void_CMapActiveEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CMapActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					if (dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onRemoveMap(e);
					else
						ptrNativeObject->onRemoveMap(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMap_void_CMapActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMap_void_CMapActiveEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMap_void_CMapActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMap_void_CMapActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CMapActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onRemoveMap(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveScene_void_CSceneActiveEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					if (dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onRemoveScene(e);
					else
						ptrNativeObject->onRemoveScene(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveScene_void_CSceneActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveScene_void_CSceneActiveEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveScene_void_CSceneActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveScene_void_CSceneActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onRemoveScene(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapLayer_void_CMapLayerActiveEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					if (dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateMapLayer(e);
					else
						ptrNativeObject->onCreateMapLayer(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapLayer_void_CMapLayerActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapLayer_void_CMapLayerActiveEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapLayer_void_CMapLayerActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapLayer_void_CMapLayerActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateMapLayer(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapGroupLayer_void_CMapLayerActiveEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					if (dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateMapGroupLayer(e);
					else
						ptrNativeObject->onCreateMapGroupLayer(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapGroupLayer_void_CMapLayerActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapGroupLayer_void_CMapLayerActiveEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapGroupLayer_void_CMapLayerActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapGroupLayer_void_CMapLayerActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateMapGroupLayer(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveMapLayer_void_CMapLayerActiveEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					if (dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onMoveMapLayer(e);
					else
						ptrNativeObject->onMoveMapLayer(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveMapLayer_void_CMapLayerActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveMapLayer_void_CMapLayerActiveEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveMapLayer_void_CMapLayerActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveMapLayer_void_CMapLayerActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onMoveMapLayer(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMapLayer_void_CMapLayerActiveEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					if (dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onRemoveMapLayer(e);
					else
						ptrNativeObject->onRemoveMapLayer(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMapLayer_void_CMapLayerActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMapLayer_void_CMapLayerActiveEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMapLayer_void_CMapLayerActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMapLayer_void_CMapLayerActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onRemoveMapLayer(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeMapName_void_CMapActiveEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CMapActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					if (dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onChangeMapName(e);
					else
						ptrNativeObject->onChangeMapName(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeMapName_void_CMapActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeMapName_void_CMapActiveEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeMapName_void_CMapActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeMapName_void_CMapActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CMapActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onChangeMapName(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeSceneName_void_CSceneActiveEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					if (dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onChangeSceneName(e);
					else
						ptrNativeObject->onChangeSceneName(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeSceneName_void_CSceneActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeSceneName_void_CSceneActiveEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeSceneName_void_CSceneActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeSceneName_void_CSceneActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onChangeSceneName(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerName_void_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					if (dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onChangeLayerName(e);
					else
						ptrNativeObject->onChangeLayerName(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerName_void_CEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerName_void_CEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerName_void_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerName_void_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onChangeLayerName(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerVisible_void_CMapLayerActiveEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					if (dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onChangeLayerVisible(e);
					else
						ptrNativeObject->onChangeLayerVisible(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerVisible_void_CMapLayerActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerVisible_void_CMapLayerActiveEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerVisible_void_CMapLayerActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerVisible_void_CMapLayerActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onChangeLayerVisible(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerTheme_void_CMapLayerActiveEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					if (dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onChangeLayerTheme(e);
					else
						ptrNativeObject->onChangeLayerTheme(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerTheme_void_CMapLayerActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerTheme_void_CMapLayerActiveEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerTheme_void_CMapLayerActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerTheme_void_CMapLayerActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onChangeLayerTheme(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneLayer_void_CSceneLayerActiveEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					if (dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateSceneLayer(e);
					else
						ptrNativeObject->onCreateSceneLayer(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneLayer_void_CSceneLayerActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneLayer_void_CSceneLayerActiveEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneLayer_void_CSceneLayerActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneLayer_void_CSceneLayerActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateSceneLayer(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneGroupLayer_void_CSceneLayerActiveEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					if (dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateSceneGroupLayer(e);
					else
						ptrNativeObject->onCreateSceneGroupLayer(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneGroupLayer_void_CSceneLayerActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneGroupLayer_void_CSceneLayerActiveEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneGroupLayer_void_CSceneLayerActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneGroupLayer_void_CSceneLayerActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onCreateSceneGroupLayer(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSwitchSceneLayer_void_CSceneLayerActiveEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					if (dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onSwitchSceneLayer(e);
					else
						ptrNativeObject->onSwitchSceneLayer(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSwitchSceneLayer_void_CSceneLayerActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSwitchSceneLayer_void_CSceneLayerActiveEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSwitchSceneLayer_void_CSceneLayerActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSwitchSceneLayer_void_CSceneLayerActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onSwitchSceneLayer(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveSceneLayer_void_CSceneLayerActiveEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					if (dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onMoveSceneLayer(e);
					else
						ptrNativeObject->onMoveSceneLayer(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveSceneLayer_void_CSceneLayerActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveSceneLayer_void_CSceneLayerActiveEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveSceneLayer_void_CSceneLayerActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveSceneLayer_void_CSceneLayerActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onMoveSceneLayer(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveSceneLayer_void_CSceneLayerActiveEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					if (dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onRemoveSceneLayer(e);
					else
						ptrNativeObject->onRemoveSceneLayer(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveSceneLayer_void_CSceneLayerActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveSceneLayer_void_CSceneLayerActiveEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveSceneLayer_void_CSceneLayerActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveSceneLayer_void_CSceneLayerActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onRemoveSceneLayer(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerVisible_void_CSceneLayerActiveEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					if (dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onSetSceneLayerVisible(e);
					else
						ptrNativeObject->onSetSceneLayerVisible(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerVisible_void_CSceneLayerActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerVisible_void_CSceneLayerActiveEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerVisible_void_CSceneLayerActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerVisible_void_CSceneLayerActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onSetSceneLayerVisible(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerTheme_void_CSceneLayerActiveEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					if (dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onSetSceneLayerTheme(e);
					else
						ptrNativeObject->onSetSceneLayerTheme(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerTheme_void_CSceneLayerActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerTheme_void_CSceneLayerActiveEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerTheme_void_CSceneLayerActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerTheme_void_CSceneLayerActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject::onSetSceneLayerTheme(e);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_createMap_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->createMap(name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_setCurrentMap_void_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->setCurrentMap(map);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_setCurrentScene_void_IScene(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IScene* scene )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->setCurrentScene(scene);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_removeMap_void_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->removeMap(map);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_removeScene_void_IScene(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IScene* scene )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->removeScene(scene);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_destroyMap_void_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->destroyMap(map);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_destroyScene_void_IScene(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IScene* scene )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->destroyScene(scene);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_destroyLayer_ev_bool_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->destroyLayer(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_getSupportedType_EVDatasetTypeSet_EVLayerType(void *pObjectXXXX, _in int grouplayerType )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet objXXXX = ptrNativeObject->getSupportedType((EarthView::World::Spatial::Atlas::EVLayerType)grouplayerType);
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet *pXXXX = new EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_createMapLayer_void_IMap_EVString_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map, _in const char* datasourceName, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->createMapLayer(map, datasourceName1, datasetName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_createMapLayer_void_IGroupLayer_IDataset_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IGroupLayer* grouplayer, _in EarthView::World::Spatial::GeoDataset::IDataset* dataset, _in EarthView::World::Spatial::Atlas::IMap* map )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->createMapLayer(grouplayer, dataset, map);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_createMapGroupLayer_void_IMap_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map, _in const char* groupName )
				{
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->createMapGroupLayer(map, groupName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_createMapGroupLayer_void_IGroupLayer_EVString_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IGroupLayer* grouplayer, _in const char* groupName, _in EarthView::World::Spatial::Atlas::IMap* map )
				{
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->createMapGroupLayer(grouplayer, groupName1, map);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_moveMapLayer_void_IMap_ev_uint32_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map, _in ev_uint32 oldIndex, _in ev_uint32 newIndex )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->moveMapLayer(map, oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_moveMapLayer_void_IMap_IGroupLayer_ev_uint32_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map, _in EarthView::World::Spatial::Atlas::IGroupLayer* grouplayer, _in ev_uint32 oldIndex, _in ev_uint32 newIndex )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->moveMapLayer(map, grouplayer, oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_moveMapLayer_void_IMap_IGroupLayer_ev_uint32_IGroupLayer_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* pMap, _in EarthView::World::Spatial::Atlas::IGroupLayer* dragGroupLayer, _in ev_uint32 dragIndex, _in EarthView::World::Spatial::Atlas::IGroupLayer* hoverGroupLayer, _in ev_uint32 hoverIndex )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->moveMapLayer(pMap, dragGroupLayer, dragIndex, hoverGroupLayer, hoverIndex);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_removeMapLayer_void_IMap_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map, _in ev_uint32 index )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->removeMapLayer(map, index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_removeMapLayer_void_IGroupLayer_ev_uint32_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IGroupLayer* grouplayer, _in ev_uint32 index, _in EarthView::World::Spatial::Atlas::IMap* map )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->removeMapLayer(grouplayer, index, map);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_changeMapName_void_IMap_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->changeMapName(map, name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_changeLayerName_void_ILayer_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->changeLayerName(layer, name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_changeLayerVisible_void_ILayer_ev_bool(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer, _in ev_bool visible )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->changeLayerVisible(layer, visible);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_createSceneLayer_void_IGlobeLayer_EVString_EVString(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pParentGrouplayer, _in const char* datasourceName, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->createSceneLayer(pParentGrouplayer, datasourceName1, datasetName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_createSceneGroupLayer_void_IGlobeLayer_EVString(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pParentGrouplayer, _in const char* groupName )
				{
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->createSceneGroupLayer(pParentGrouplayer, groupName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_moveSceneLayer_void_IGlobeLayer_ev_uint32_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pParentGrouplayer, _in ev_uint32 index, _in ev_uint32 pos )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->moveSceneLayer(pParentGrouplayer, index, pos);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_switchSceneLayer_void_IGlobeLayer_ev_uint32_IGlobeLayer(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pParentGrouplayer, _in ev_uint32 index, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* newLayer )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->switchSceneLayer(pParentGrouplayer, index, newLayer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_removeSceneLayer_void_IGlobeLayer_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pParentGrouplayer, _in ev_uint32 index )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->removeSceneLayer(pParentGrouplayer, index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_setSceneLayerVisible_void_IGlobeLayer_ev_bool(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer, _in ev_bool visible )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->setSceneLayerVisible(layer, visible);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_setSceneLayerTheme_void_IGlobeLayer_ITheme(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer, _in EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX;
					ptrNativeObject->setSceneLayerTheme(layer, theme);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onTimerEvent_void_CTimerEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onTimerEvent_void_CTimerEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onTimerEvent_void_CTimerEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCustomEvent_void_CEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCustomEvent_void_CEvent_Callback* pCallback )
				{
					CAtlasEventObjectProxy* ptr = dynamic_cast<CAtlasEventObjectProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCustomEvent_void_CEvent(pCallback);
					}
				}
			}
		}
	}
}
