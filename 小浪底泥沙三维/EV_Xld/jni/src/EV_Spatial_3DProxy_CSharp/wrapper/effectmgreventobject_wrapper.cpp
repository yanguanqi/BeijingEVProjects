/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dproxy/effectmgreventobject.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
		}
		namespace Spatial3D
		{
			namespace EffectManager
			{
			}
			namespace Dataset
			{
			}
		}
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameStarted_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameRenderingQueued_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameEnded_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			class CAnimationTrailListenerProxy : public EarthView::World::Spatial3DProxy::CAnimationTrailListener
			{
			private:
				EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameStarted_ev_bool_FrameEvent_Callback* m_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameStarted_ev_bool_FrameEvent_Callback;
				EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameRenderingQueued_ev_bool_FrameEvent_Callback* m_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameRenderingQueued_ev_bool_FrameEvent_Callback;
				EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameEnded_ev_bool_FrameEvent_Callback* m_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameEnded_ev_bool_FrameEvent_Callback;
			public:
				CAnimationTrailListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnimationTrailListener(pList)
				{
					m_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameStarted_ev_bool_FrameEvent_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameRenderingQueued_ev_bool_FrameEvent_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameEnded_ev_bool_FrameEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameStarted_ev_bool_FrameEvent(EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameStarted_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameStarted_ev_bool_FrameEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameRenderingQueued_ev_bool_FrameEvent(EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameRenderingQueued_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameRenderingQueued_ev_bool_FrameEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameEnded_ev_bool_FrameEvent(EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameEnded_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameEnded_ev_bool_FrameEvent_Callback = pCallback;
				}
				virtual ev_bool frameRenderingQueued(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameRenderingQueued_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameRenderingQueued_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CAnimationTrailListener::frameRenderingQueued(evt);
				}
				virtual ev_bool frameStarted(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameStarted_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameStarted_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CAnimationTrailListener::frameStarted(evt);
				}
				virtual ev_bool frameEnded(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameEnded_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameEnded_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CAnimationTrailListener::frameEnded(evt);
				}
			};
			REGISTER_FACTORY_CLASS(CAnimationTrailListenerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameRenderingQueued_ev_bool_FrameEvent(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Spatial3DProxy::CAnimationTrailListener* ptrNativeObject = (EarthView::World::Spatial3DProxy::CAnimationTrailListener*) pObjectXXXX;
				if (dynamic_cast<CAnimationTrailListenerProxy*>((EarthView::World::Spatial3DProxy::CAnimationTrailListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::CAnimationTrailListener::frameRenderingQueued(evt);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->frameRenderingQueued(evt);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameRenderingQueued_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameRenderingQueued_ev_bool_FrameEvent_Callback* pCallback )
			{
				CAnimationTrailListenerProxy* ptr = dynamic_cast<CAnimationTrailListenerProxy*>((EarthView::World::Spatial3DProxy::CAnimationTrailListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameRenderingQueued_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameRenderingQueued_ev_bool_FrameEvent_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Spatial3DProxy::CAnimationTrailListener* ptrNativeObject = (EarthView::World::Spatial3DProxy::CAnimationTrailListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::CAnimationTrailListener::frameRenderingQueued(evt);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameStarted_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameStarted_ev_bool_FrameEvent_Callback* pCallback )
			{
				CAnimationTrailListenerProxy* ptr = dynamic_cast<CAnimationTrailListenerProxy*>((EarthView::World::Spatial3DProxy::CAnimationTrailListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameStarted_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameEnded_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameEnded_ev_bool_FrameEvent_Callback* pCallback )
			{
				CAnimationTrailListenerProxy* ptr = dynamic_cast<CAnimationTrailListenerProxy*>((EarthView::World::Spatial3DProxy::CAnimationTrailListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameEnded_ev_bool_FrameEvent(pCallback);
				}
			}
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_EVString_EVString_EVString_Callback)(_in char*& datasourceName, _in char*& parentCode, _in char*& newUserTypeName);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_IDataSource_EVString_EVString_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in char*& parentCode, _in char*& newUserTypeName);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateUserType_void_CEffectTreeviewEvent_Callback)(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromTemplateDB_void_CEffectTreeviewEvent_Callback)(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_EVString_CStringArray_CStringArray_Callback)(_in char*& dir, _in char*& userTypeCode, _in char*& destDatasourceName, _out void* successScriptNames, _out void* errorArray);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_IDataSource_CStringArray_CStringArray_Callback)(_in char*& dir, _in char*& userTypeCode, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _out void* successScriptNames, _out void* errorArray);
			typedef bool  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_exportEffectToLocal_bool_ev_uint32_CEffectDataSource_EVString_bool_Callback)(_in ev_uint32 effectId, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* effectDataSource, _in char*& exportPath, _in bool overrideFile);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromScript_void_CEffectTreeviewEvent_Callback)(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onExportToTemplateDB_void_CEffectTreeviewEvent_Callback)(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_EVString_EVString_EVString_EffectType_ev_uint32_Callback)(_in char*& datasourceName, _in char*& name, _in char*& userTypeCode, _in int type, _in ev_uint32 parentEffectId);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_IDataSource_EVString_EVString_EffectType_ev_uint32_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in char*& name, _in char*& userTypeCode, _in int type, _in ev_uint32 parentEffectId);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateNewEffect_void_CEffectTreeviewEvent_Callback)(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_EVString_EVString_EVString_Callback)(_in char*& datasourceName, _in char*& code, _in char*& newName);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_IDataSource_EVString_EVString_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in char*& code, _in char*& newName);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameUserType_void_CEffectTreeviewEvent_Callback)(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_EVString_EVString_EVString_Callback)(_in char*& datasourceName, _in char*& code, _in char*& newName);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_IDataSource_EVString_EVString_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in char*& code, _in char*& newName);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBlendEffect_void_CEffectTreeviewEvent_Callback)(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_EVString_EVString_EVString_Callback)(_in char*& datasourceName, _in char*& code, _in char*& newName);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_EVString_ev_uint32_EVString_Callback)(_in char*& datasourceName, _in ev_uint32 effectId, _in char*& newName);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_IDataSource_ev_uint32_EVString_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 effectId, _in char*& newName);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_IDataSource_EVString_EVString_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in char*& code, _in char*& newName);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameSingleEffect_void_CEffectTreeviewEvent_Callback)(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_EVString_EVString_EVString_Callback)(_in char*& datasourceName, _in char*& code, _in char*& newName);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_IDataSource_EVString_EVString_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in char*& code, _in char*& newName);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBEChildEffect_void_CEffectTreeviewEvent_Callback)(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_EVString_EVString_Callback)(_in char*& datasourceName, _in char*& code);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_IDataSource_EVString_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in char*& code);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteUserType_void_CEffectTreeviewEvent_Callback)(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_EVString_ev_uint32_ev_uint32_EffectType_Callback)(_in char*& datasourceName, _in ev_uint32 parentEffectId, _in ev_uint32 effectId, _in int type);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_IDataSource_ev_uint32_ev_uint32_EffectType_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 parentEffectId, _in ev_uint32 effectId, _in int type);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteEffect_void_CEffectTreeviewEvent_Callback)(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_EVString_ev_uint32_ev_uint32_Callback)(_in char*& datasourceName, _in ev_uint32 editEffectId, _in ev_uint32 dragEffectId);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_IDataSource_ev_uint32_ev_uint32_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 editEffectId, _in ev_uint32 dragEffectId);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToBlendEffect_void_CEffectTreeviewEvent_Callback)(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);
			typedef bool  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_EVString_EVString_EVString_EffectType_EVString_Callback)(_in char*& dataSourceName, _in char*& effectName, _in char*& typeCode, _in int effectType, _in char*& blendeffectName);
			typedef bool  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_IDataSource_EVString_EVString_EffectType_EVString_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in char*& effectName, _in char*& typeCode, _in int effectType, _in char*& blendeffectName);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_EVString_ev_uint32_EVString_Callback)(_in char*& datasourceName, _in ev_uint32 srcItemId, _in char*& dstUserTypeCode);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_IDataSource_ev_uint32_EVString_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 srcItemId, _in char*& dstUserTypeCode);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToUserType_void_CEffectTreeviewEvent_Callback)(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_EVString_EVString_EVString_Callback)(_in char*& datasourceName, _in char*& srcUserTypeCode, _in char*& dstUserTypeCode);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_IDataSource_EVString_EVString_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in char*& srcUserTypeCode, _in char*& dstUserTypeCode);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddUserTypeToUserType_void_CEffectTreeviewEvent_Callback)(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_EVString_CEffect_Callback)(_in char*& datasourceName, _in EarthView::World::Spatial3D::EffectManager::CEffect* effect);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_IDataSource_CEffect_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in EarthView::World::Spatial3D::EffectManager::CEffect* effect);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffect_void_CEffectTreeviewEvent_Callback)(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_IDataSource_ev_uint32_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 effectID);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_EVString_ev_uint32_Callback)(_in char*& datasourceName, _in ev_uint32 effectID);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffectMaterial_void_CEffectTreeviewEvent_Callback)(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_EVString_CEffectUserTypeTree_Callback)(_in char*& datasourceName, _out void* tree);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_IDataSource_CEffectUserTypeTree_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _inout void* tree);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_EVString_ev_uint32_CEffectInfoVector_Callback)(_in char*& datasourceName, _in ev_uint32 effectId, _out void* vec);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_IDataSource_ev_uint32_CEffectInfoVector_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 effectId, _out void* vec);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onEvent_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onTimerEvent_void_CTimerEvent_Callback)(_in EarthView::World::Core::CTimerEvent* e);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCustomEvent_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			class CEffectMgrEventObjectProxy : public EarthView::World::Spatial3DProxy::CEffectMgrEventObject
			{
			private:
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_EVString_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_EVString_EVString_EVString_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_IDataSource_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_IDataSource_EVString_EVString_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateUserType_void_CEffectTreeviewEvent_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateUserType_void_CEffectTreeviewEvent_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromTemplateDB_void_CEffectTreeviewEvent_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromTemplateDB_void_CEffectTreeviewEvent_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_EVString_CStringArray_CStringArray_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_EVString_CStringArray_CStringArray_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_IDataSource_CStringArray_CStringArray_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_IDataSource_CStringArray_CStringArray_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_exportEffectToLocal_bool_ev_uint32_CEffectDataSource_EVString_bool_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_exportEffectToLocal_bool_ev_uint32_CEffectDataSource_EVString_bool_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromScript_void_CEffectTreeviewEvent_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromScript_void_CEffectTreeviewEvent_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onExportToTemplateDB_void_CEffectTreeviewEvent_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onExportToTemplateDB_void_CEffectTreeviewEvent_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_EVString_EVString_EVString_EffectType_ev_uint32_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_EVString_EVString_EVString_EffectType_ev_uint32_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_IDataSource_EVString_EVString_EffectType_ev_uint32_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_IDataSource_EVString_EVString_EffectType_ev_uint32_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateNewEffect_void_CEffectTreeviewEvent_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateNewEffect_void_CEffectTreeviewEvent_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_EVString_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_EVString_EVString_EVString_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_IDataSource_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_IDataSource_EVString_EVString_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameUserType_void_CEffectTreeviewEvent_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameUserType_void_CEffectTreeviewEvent_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_EVString_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_EVString_EVString_EVString_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_IDataSource_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_IDataSource_EVString_EVString_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBlendEffect_void_CEffectTreeviewEvent_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBlendEffect_void_CEffectTreeviewEvent_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_EVString_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_EVString_EVString_EVString_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_EVString_ev_uint32_EVString_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_EVString_ev_uint32_EVString_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_IDataSource_ev_uint32_EVString_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_IDataSource_ev_uint32_EVString_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_IDataSource_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_IDataSource_EVString_EVString_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameSingleEffect_void_CEffectTreeviewEvent_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameSingleEffect_void_CEffectTreeviewEvent_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_EVString_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_EVString_EVString_EVString_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_IDataSource_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_IDataSource_EVString_EVString_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBEChildEffect_void_CEffectTreeviewEvent_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBEChildEffect_void_CEffectTreeviewEvent_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_EVString_EVString_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_IDataSource_EVString_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_IDataSource_EVString_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteUserType_void_CEffectTreeviewEvent_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteUserType_void_CEffectTreeviewEvent_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_EVString_ev_uint32_ev_uint32_EffectType_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_EVString_ev_uint32_ev_uint32_EffectType_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_IDataSource_ev_uint32_ev_uint32_EffectType_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_IDataSource_ev_uint32_ev_uint32_EffectType_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteEffect_void_CEffectTreeviewEvent_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteEffect_void_CEffectTreeviewEvent_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_EVString_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_EVString_ev_uint32_ev_uint32_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_IDataSource_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_IDataSource_ev_uint32_ev_uint32_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToBlendEffect_void_CEffectTreeviewEvent_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToBlendEffect_void_CEffectTreeviewEvent_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_EVString_EVString_EVString_EffectType_EVString_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_EVString_EVString_EVString_EffectType_EVString_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_IDataSource_EVString_EVString_EffectType_EVString_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_IDataSource_EVString_EVString_EffectType_EVString_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_EVString_ev_uint32_EVString_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_EVString_ev_uint32_EVString_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_IDataSource_ev_uint32_EVString_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_IDataSource_ev_uint32_EVString_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToUserType_void_CEffectTreeviewEvent_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToUserType_void_CEffectTreeviewEvent_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_EVString_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_EVString_EVString_EVString_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_IDataSource_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_IDataSource_EVString_EVString_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddUserTypeToUserType_void_CEffectTreeviewEvent_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddUserTypeToUserType_void_CEffectTreeviewEvent_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_EVString_CEffect_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_EVString_CEffect_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_IDataSource_CEffect_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_IDataSource_CEffect_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffect_void_CEffectTreeviewEvent_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffect_void_CEffectTreeviewEvent_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_IDataSource_ev_uint32_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_IDataSource_ev_uint32_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_EVString_ev_uint32_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_EVString_ev_uint32_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffectMaterial_void_CEffectTreeviewEvent_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffectMaterial_void_CEffectTreeviewEvent_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_EVString_CEffectUserTypeTree_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_EVString_CEffectUserTypeTree_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_IDataSource_CEffectUserTypeTree_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_IDataSource_CEffectUserTypeTree_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_EVString_ev_uint32_CEffectInfoVector_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_EVString_ev_uint32_CEffectInfoVector_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_IDataSource_ev_uint32_CEffectInfoVector_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_IDataSource_ev_uint32_CEffectInfoVector_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onEvent_ev_bool_CEvent_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onEvent_ev_bool_CEvent_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onTimerEvent_void_CTimerEvent_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onTimerEvent_void_CTimerEvent_Callback;
				EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCustomEvent_void_CEvent_Callback* m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCustomEvent_void_CEvent_Callback;
			public:
				CEffectMgrEventObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CEffectMgrEventObject(pList)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_EVString_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_IDataSource_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateUserType_void_CEffectTreeviewEvent_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromTemplateDB_void_CEffectTreeviewEvent_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_EVString_CStringArray_CStringArray_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_IDataSource_CStringArray_CStringArray_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_exportEffectToLocal_bool_ev_uint32_CEffectDataSource_EVString_bool_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromScript_void_CEffectTreeviewEvent_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onExportToTemplateDB_void_CEffectTreeviewEvent_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_EVString_EVString_EVString_EffectType_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_IDataSource_EVString_EVString_EffectType_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateNewEffect_void_CEffectTreeviewEvent_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_EVString_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_IDataSource_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameUserType_void_CEffectTreeviewEvent_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_EVString_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_IDataSource_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBlendEffect_void_CEffectTreeviewEvent_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_EVString_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_EVString_ev_uint32_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_IDataSource_ev_uint32_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_IDataSource_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameSingleEffect_void_CEffectTreeviewEvent_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_EVString_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_IDataSource_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBEChildEffect_void_CEffectTreeviewEvent_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_IDataSource_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteUserType_void_CEffectTreeviewEvent_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_EVString_ev_uint32_ev_uint32_EffectType_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_IDataSource_ev_uint32_ev_uint32_EffectType_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteEffect_void_CEffectTreeviewEvent_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_EVString_ev_uint32_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_IDataSource_ev_uint32_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToBlendEffect_void_CEffectTreeviewEvent_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_EVString_EVString_EVString_EffectType_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_IDataSource_EVString_EVString_EffectType_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_EVString_ev_uint32_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_IDataSource_ev_uint32_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToUserType_void_CEffectTreeviewEvent_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_EVString_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_IDataSource_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddUserTypeToUserType_void_CEffectTreeviewEvent_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_EVString_CEffect_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_IDataSource_CEffect_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffect_void_CEffectTreeviewEvent_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_IDataSource_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_EVString_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffectMaterial_void_CEffectTreeviewEvent_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_EVString_CEffectUserTypeTree_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_IDataSource_CEffectUserTypeTree_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_EVString_ev_uint32_CEffectInfoVector_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_IDataSource_ev_uint32_CEffectInfoVector_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onEvent_ev_bool_CEvent_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onTimerEvent_void_CTimerEvent_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCustomEvent_void_CEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_EVString_EVString_EVString(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_EVString_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_EVString_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_IDataSource_EVString_EVString(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_IDataSource_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_IDataSource_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateUserType_void_CEffectTreeviewEvent(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateUserType_void_CEffectTreeviewEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateUserType_void_CEffectTreeviewEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromTemplateDB_void_CEffectTreeviewEvent(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromTemplateDB_void_CEffectTreeviewEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromTemplateDB_void_CEffectTreeviewEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_EVString_CStringArray_CStringArray(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_EVString_CStringArray_CStringArray_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_EVString_CStringArray_CStringArray_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_IDataSource_CStringArray_CStringArray(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_IDataSource_CStringArray_CStringArray_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_IDataSource_CStringArray_CStringArray_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_exportEffectToLocal_bool_ev_uint32_CEffectDataSource_EVString_bool(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_exportEffectToLocal_bool_ev_uint32_CEffectDataSource_EVString_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_exportEffectToLocal_bool_ev_uint32_CEffectDataSource_EVString_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromScript_void_CEffectTreeviewEvent(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromScript_void_CEffectTreeviewEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromScript_void_CEffectTreeviewEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onExportToTemplateDB_void_CEffectTreeviewEvent(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onExportToTemplateDB_void_CEffectTreeviewEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onExportToTemplateDB_void_CEffectTreeviewEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_EVString_EVString_EVString_EffectType_ev_uint32(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_EVString_EVString_EVString_EffectType_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_EVString_EVString_EVString_EffectType_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_IDataSource_EVString_EVString_EffectType_ev_uint32(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_IDataSource_EVString_EVString_EffectType_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_IDataSource_EVString_EVString_EffectType_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateNewEffect_void_CEffectTreeviewEvent(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateNewEffect_void_CEffectTreeviewEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateNewEffect_void_CEffectTreeviewEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_EVString_EVString_EVString(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_EVString_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_EVString_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_IDataSource_EVString_EVString(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_IDataSource_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_IDataSource_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameUserType_void_CEffectTreeviewEvent(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameUserType_void_CEffectTreeviewEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameUserType_void_CEffectTreeviewEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_EVString_EVString_EVString(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_EVString_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_EVString_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_IDataSource_EVString_EVString(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_IDataSource_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_IDataSource_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBlendEffect_void_CEffectTreeviewEvent(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBlendEffect_void_CEffectTreeviewEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBlendEffect_void_CEffectTreeviewEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_EVString_EVString_EVString(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_EVString_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_EVString_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_EVString_ev_uint32_EVString(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_EVString_ev_uint32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_EVString_ev_uint32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_IDataSource_ev_uint32_EVString(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_IDataSource_ev_uint32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_IDataSource_ev_uint32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_IDataSource_EVString_EVString(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_IDataSource_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_IDataSource_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameSingleEffect_void_CEffectTreeviewEvent(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameSingleEffect_void_CEffectTreeviewEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameSingleEffect_void_CEffectTreeviewEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_EVString_EVString_EVString(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_EVString_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_EVString_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_IDataSource_EVString_EVString(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_IDataSource_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_IDataSource_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBEChildEffect_void_CEffectTreeviewEvent(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBEChildEffect_void_CEffectTreeviewEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBEChildEffect_void_CEffectTreeviewEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_EVString_EVString(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_IDataSource_EVString(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_IDataSource_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_IDataSource_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteUserType_void_CEffectTreeviewEvent(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteUserType_void_CEffectTreeviewEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteUserType_void_CEffectTreeviewEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_EVString_ev_uint32_ev_uint32_EffectType(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_EVString_ev_uint32_ev_uint32_EffectType_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_EVString_ev_uint32_ev_uint32_EffectType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_IDataSource_ev_uint32_ev_uint32_EffectType(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_IDataSource_ev_uint32_ev_uint32_EffectType_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_IDataSource_ev_uint32_ev_uint32_EffectType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteEffect_void_CEffectTreeviewEvent(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteEffect_void_CEffectTreeviewEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteEffect_void_CEffectTreeviewEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_EVString_ev_uint32_ev_uint32(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_EVString_ev_uint32_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_EVString_ev_uint32_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_IDataSource_ev_uint32_ev_uint32(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_IDataSource_ev_uint32_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_IDataSource_ev_uint32_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToBlendEffect_void_CEffectTreeviewEvent(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToBlendEffect_void_CEffectTreeviewEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToBlendEffect_void_CEffectTreeviewEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_EVString_EVString_EVString_EffectType_EVString(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_EVString_EVString_EVString_EffectType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_EVString_EVString_EVString_EffectType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_IDataSource_EVString_EVString_EffectType_EVString(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_IDataSource_EVString_EVString_EffectType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_IDataSource_EVString_EVString_EffectType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_EVString_ev_uint32_EVString(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_EVString_ev_uint32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_EVString_ev_uint32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_IDataSource_ev_uint32_EVString(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_IDataSource_ev_uint32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_IDataSource_ev_uint32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToUserType_void_CEffectTreeviewEvent(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToUserType_void_CEffectTreeviewEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToUserType_void_CEffectTreeviewEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_EVString_EVString_EVString(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_EVString_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_EVString_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_IDataSource_EVString_EVString(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_IDataSource_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_IDataSource_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddUserTypeToUserType_void_CEffectTreeviewEvent(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddUserTypeToUserType_void_CEffectTreeviewEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddUserTypeToUserType_void_CEffectTreeviewEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_EVString_CEffect(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_EVString_CEffect_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_EVString_CEffect_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_IDataSource_CEffect(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_IDataSource_CEffect_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_IDataSource_CEffect_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffect_void_CEffectTreeviewEvent(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffect_void_CEffectTreeviewEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffect_void_CEffectTreeviewEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_IDataSource_ev_uint32(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_IDataSource_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_IDataSource_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_EVString_ev_uint32(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_EVString_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_EVString_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffectMaterial_void_CEffectTreeviewEvent(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffectMaterial_void_CEffectTreeviewEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffectMaterial_void_CEffectTreeviewEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_EVString_CEffectUserTypeTree(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_EVString_CEffectUserTypeTree_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_EVString_CEffectUserTypeTree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_IDataSource_CEffectUserTypeTree(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_IDataSource_CEffectUserTypeTree_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_IDataSource_CEffectUserTypeTree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_EVString_ev_uint32_CEffectInfoVector(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_EVString_ev_uint32_CEffectInfoVector_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_EVString_ev_uint32_CEffectInfoVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_IDataSource_ev_uint32_CEffectInfoVector(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_IDataSource_ev_uint32_CEffectInfoVector_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_IDataSource_ev_uint32_CEffectInfoVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onEvent_ev_bool_CEvent(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onEvent_ev_bool_CEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onEvent_ev_bool_CEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onTimerEvent_void_CTimerEvent(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onTimerEvent_void_CTimerEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onTimerEvent_void_CTimerEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCustomEvent_void_CEvent(EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCustomEvent_void_CEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCustomEvent_void_CEvent_Callback = pCallback;
				}
				virtual void createUserType(_in const EVString& datasourceName, _in EVString parentCode, _in EVString newUserTypeName)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_EVString_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* datasourceName_Char = datasourceName.makeBuffer();
						char* parentCode_Char = parentCode.makeBuffer();
						char* newUserTypeName_Char = newUserTypeName.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_EVString_EVString_EVString_Callback(datasourceName_Char, parentCode_Char, newUserTypeName_Char);
					}
					else
						return this->CEffectMgrEventObject::createUserType(datasourceName, parentCode, newUserTypeName);
				}
				virtual void createUserType(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in EVString parentCode, _in EVString newUserTypeName)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_IDataSource_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* parentCode_Char = parentCode.makeBuffer();
						char* newUserTypeName_Char = newUserTypeName.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_IDataSource_EVString_EVString_Callback(ds, parentCode_Char, newUserTypeName_Char);
					}
					else
						return this->CEffectMgrEventObject::createUserType(ds, parentCode, newUserTypeName);
				}
				virtual void onCreateUserType(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateUserType_void_CEffectTreeviewEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateUserType_void_CEffectTreeviewEvent_Callback(e);
					}
					else
						return this->CEffectMgrEventObject::onCreateUserType(e);
				}
				virtual void onImportFromTemplateDB(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromTemplateDB_void_CEffectTreeviewEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromTemplateDB_void_CEffectTreeviewEvent_Callback(e);
					}
					else
						return this->CEffectMgrEventObject::onImportFromTemplateDB(e);
				}
				virtual void importFromScript(_in const EVString& dir, _in const EVString& userTypeCode, _in const EVString& destDatasourceName, _out EarthView::World::Core::CStringArray& successScriptNames, _out EarthView::World::Core::CStringArray& errorArray)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_EVString_CStringArray_CStringArray_Callback != NULL && this->isCustomExtend())
					{
						char* dir_Char = dir.makeBuffer();
						char* userTypeCode_Char = userTypeCode.makeBuffer();
						char* destDatasourceName_Char = destDatasourceName.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_EVString_CStringArray_CStringArray_Callback(dir_Char, userTypeCode_Char, destDatasourceName_Char, &successScriptNames, &errorArray);
					}
					else
						return this->CEffectMgrEventObject::importFromScript(dir, userTypeCode, destDatasourceName, successScriptNames, errorArray);
				}
				virtual void importFromScript(_in const EVString& dir, _in const EVString& userTypeCode, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _out EarthView::World::Core::CStringArray& successScriptNames, _out EarthView::World::Core::CStringArray& errorArray)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_IDataSource_CStringArray_CStringArray_Callback != NULL && this->isCustomExtend())
					{
						char* dir_Char = dir.makeBuffer();
						char* userTypeCode_Char = userTypeCode.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_IDataSource_CStringArray_CStringArray_Callback(dir_Char, userTypeCode_Char, ds, &successScriptNames, &errorArray);
					}
					else
						return this->CEffectMgrEventObject::importFromScript(dir, userTypeCode, ds, successScriptNames, errorArray);
				}
				virtual bool exportEffectToLocal(_in ev_uint32 effectId, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* effectDataSource, _in const EVString& exportPath, _in bool overrideFile)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_exportEffectToLocal_bool_ev_uint32_CEffectDataSource_EVString_bool_Callback != NULL && this->isCustomExtend())
					{
						char* exportPath_Char = exportPath.makeBuffer();
						bool returnValue = m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_exportEffectToLocal_bool_ev_uint32_CEffectDataSource_EVString_bool_Callback(effectId, effectDataSource, exportPath_Char, overrideFile);
						return returnValue;
					}
					else
						return this->CEffectMgrEventObject::exportEffectToLocal(effectId, effectDataSource, exportPath, overrideFile);
				}
				virtual void onImportFromScript(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromScript_void_CEffectTreeviewEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromScript_void_CEffectTreeviewEvent_Callback(e);
					}
					else
						return this->CEffectMgrEventObject::onImportFromScript(e);
				}
				virtual void onExportToTemplateDB(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onExportToTemplateDB_void_CEffectTreeviewEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onExportToTemplateDB_void_CEffectTreeviewEvent_Callback(e);
					}
					else
						return this->CEffectMgrEventObject::onExportToTemplateDB(e);
				}
				virtual void createNewEffect(_in const EVString& datasourceName, _in const EVString& name, _in const EVString& userTypeCode, _in EarthView::World::Spatial3D::Dataset::EffectType type, _in ev_uint32 parentEffectId)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_EVString_EVString_EVString_EffectType_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						char* datasourceName_Char = datasourceName.makeBuffer();
						char* name_Char = name.makeBuffer();
						char* userTypeCode_Char = userTypeCode.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_EVString_EVString_EVString_EffectType_ev_uint32_Callback(datasourceName_Char, name_Char, userTypeCode_Char, (int)type, parentEffectId);
					}
					else
						return this->CEffectMgrEventObject::createNewEffect(datasourceName, name, userTypeCode, type, parentEffectId);
				}
				virtual void createNewEffect(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const EVString& name, _in const EVString& userTypeCode, _in EarthView::World::Spatial3D::Dataset::EffectType type, _in ev_uint32 parentEffectId)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_IDataSource_EVString_EVString_EffectType_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* userTypeCode_Char = userTypeCode.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_IDataSource_EVString_EVString_EffectType_ev_uint32_Callback(ds, name_Char, userTypeCode_Char, (int)type, parentEffectId);
					}
					else
						return this->CEffectMgrEventObject::createNewEffect(ds, name, userTypeCode, type, parentEffectId);
				}
				virtual void onCreateNewEffect(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateNewEffect_void_CEffectTreeviewEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateNewEffect_void_CEffectTreeviewEvent_Callback(e);
					}
					else
						return this->CEffectMgrEventObject::onCreateNewEffect(e);
				}
				virtual void renameUserType(_in const EVString& datasourceName, _in const EVString& code, _in const EVString& newName)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_EVString_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* datasourceName_Char = datasourceName.makeBuffer();
						char* code_Char = code.makeBuffer();
						char* newName_Char = newName.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_EVString_EVString_EVString_Callback(datasourceName_Char, code_Char, newName_Char);
					}
					else
						return this->CEffectMgrEventObject::renameUserType(datasourceName, code, newName);
				}
				virtual void renameUserType(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const EVString& code, _in const EVString& newName)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_IDataSource_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* code_Char = code.makeBuffer();
						char* newName_Char = newName.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_IDataSource_EVString_EVString_Callback(ds, code_Char, newName_Char);
					}
					else
						return this->CEffectMgrEventObject::renameUserType(ds, code, newName);
				}
				virtual void onRenameUserType(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameUserType_void_CEffectTreeviewEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameUserType_void_CEffectTreeviewEvent_Callback(e);
					}
					else
						return this->CEffectMgrEventObject::onRenameUserType(e);
				}
				virtual void renameBlendEffect(_in const EVString& datasourceName, _in const EVString& code, _in const EVString& newName)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_EVString_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* datasourceName_Char = datasourceName.makeBuffer();
						char* code_Char = code.makeBuffer();
						char* newName_Char = newName.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_EVString_EVString_EVString_Callback(datasourceName_Char, code_Char, newName_Char);
					}
					else
						return this->CEffectMgrEventObject::renameBlendEffect(datasourceName, code, newName);
				}
				virtual void renameBlendEffect(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const EVString& code, _in const EVString& newName)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_IDataSource_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* code_Char = code.makeBuffer();
						char* newName_Char = newName.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_IDataSource_EVString_EVString_Callback(ds, code_Char, newName_Char);
					}
					else
						return this->CEffectMgrEventObject::renameBlendEffect(ds, code, newName);
				}
				virtual void onRenameBlendEffect(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBlendEffect_void_CEffectTreeviewEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBlendEffect_void_CEffectTreeviewEvent_Callback(e);
					}
					else
						return this->CEffectMgrEventObject::onRenameBlendEffect(e);
				}
				virtual void renameSingleEffect(_in const EVString& datasourceName, _in const EVString& code, _in const EVString& newName)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_EVString_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* datasourceName_Char = datasourceName.makeBuffer();
						char* code_Char = code.makeBuffer();
						char* newName_Char = newName.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_EVString_EVString_EVString_Callback(datasourceName_Char, code_Char, newName_Char);
					}
					else
						return this->CEffectMgrEventObject::renameSingleEffect(datasourceName, code, newName);
				}
				virtual void copyNewEffect(_in const EVString& datasourceName, _in ev_uint32 effectId, _in const EVString& newName)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_EVString_ev_uint32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* datasourceName_Char = datasourceName.makeBuffer();
						char* newName_Char = newName.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_EVString_ev_uint32_EVString_Callback(datasourceName_Char, effectId, newName_Char);
					}
					else
						return this->CEffectMgrEventObject::copyNewEffect(datasourceName, effectId, newName);
				}
				virtual void copyNewEffect(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 effectId, _in const EVString& newName)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_IDataSource_ev_uint32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* newName_Char = newName.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_IDataSource_ev_uint32_EVString_Callback(ds, effectId, newName_Char);
					}
					else
						return this->CEffectMgrEventObject::copyNewEffect(ds, effectId, newName);
				}
				virtual void renameSingleEffect(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const EVString& code, _in const EVString& newName)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_IDataSource_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* code_Char = code.makeBuffer();
						char* newName_Char = newName.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_IDataSource_EVString_EVString_Callback(ds, code_Char, newName_Char);
					}
					else
						return this->CEffectMgrEventObject::renameSingleEffect(ds, code, newName);
				}
				virtual void onRenameSingleEffect(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameSingleEffect_void_CEffectTreeviewEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameSingleEffect_void_CEffectTreeviewEvent_Callback(e);
					}
					else
						return this->CEffectMgrEventObject::onRenameSingleEffect(e);
				}
				virtual void renameBEChild(_in const EVString& datasourceName, _in const EVString& code, _in const EVString& newName)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_EVString_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* datasourceName_Char = datasourceName.makeBuffer();
						char* code_Char = code.makeBuffer();
						char* newName_Char = newName.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_EVString_EVString_EVString_Callback(datasourceName_Char, code_Char, newName_Char);
					}
					else
						return this->CEffectMgrEventObject::renameBEChild(datasourceName, code, newName);
				}
				virtual void renameBEChild(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const EVString& code, _in const EVString& newName)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_IDataSource_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* code_Char = code.makeBuffer();
						char* newName_Char = newName.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_IDataSource_EVString_EVString_Callback(ds, code_Char, newName_Char);
					}
					else
						return this->CEffectMgrEventObject::renameBEChild(ds, code, newName);
				}
				virtual void onRenameBEChildEffect(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBEChildEffect_void_CEffectTreeviewEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBEChildEffect_void_CEffectTreeviewEvent_Callback(e);
					}
					else
						return this->CEffectMgrEventObject::onRenameBEChildEffect(e);
				}
				virtual void deleteUserType(_in const EVString& datasourceName, _in const EVString& code)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* datasourceName_Char = datasourceName.makeBuffer();
						char* code_Char = code.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_EVString_EVString_Callback(datasourceName_Char, code_Char);
					}
					else
						return this->CEffectMgrEventObject::deleteUserType(datasourceName, code);
				}
				virtual void deleteUserType(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const EVString& code)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_IDataSource_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* code_Char = code.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_IDataSource_EVString_Callback(ds, code_Char);
					}
					else
						return this->CEffectMgrEventObject::deleteUserType(ds, code);
				}
				virtual void onDeleteUserType(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteUserType_void_CEffectTreeviewEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteUserType_void_CEffectTreeviewEvent_Callback(e);
					}
					else
						return this->CEffectMgrEventObject::onDeleteUserType(e);
				}
				virtual void deleteEffect(_in const EVString& datasourceName, _in ev_uint32 parentEffectId, _in ev_uint32 effectId, _in EarthView::World::Spatial3D::Dataset::EffectType type)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_EVString_ev_uint32_ev_uint32_EffectType_Callback != NULL && this->isCustomExtend())
					{
						char* datasourceName_Char = datasourceName.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_EVString_ev_uint32_ev_uint32_EffectType_Callback(datasourceName_Char, parentEffectId, effectId, (int)type);
					}
					else
						return this->CEffectMgrEventObject::deleteEffect(datasourceName, parentEffectId, effectId, type);
				}
				virtual void deleteEffect(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 parentEffectId, _in ev_uint32 effectId, _in EarthView::World::Spatial3D::Dataset::EffectType type)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_IDataSource_ev_uint32_ev_uint32_EffectType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_IDataSource_ev_uint32_ev_uint32_EffectType_Callback(ds, parentEffectId, effectId, (int)type);
					}
					else
						return this->CEffectMgrEventObject::deleteEffect(ds, parentEffectId, effectId, type);
				}
				virtual void onDeleteEffect(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteEffect_void_CEffectTreeviewEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteEffect_void_CEffectTreeviewEvent_Callback(e);
					}
					else
						return this->CEffectMgrEventObject::onDeleteEffect(e);
				}
				virtual void addEffectToBlendEffect(_in const EVString& datasourceName, _in ev_uint32 editEffectId, _in ev_uint32 dragEffectId)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_EVString_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						char* datasourceName_Char = datasourceName.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_EVString_ev_uint32_ev_uint32_Callback(datasourceName_Char, editEffectId, dragEffectId);
					}
					else
						return this->CEffectMgrEventObject::addEffectToBlendEffect(datasourceName, editEffectId, dragEffectId);
				}
				virtual void addEffectToBlendEffect(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 editEffectId, _in ev_uint32 dragEffectId)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_IDataSource_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_IDataSource_ev_uint32_ev_uint32_Callback(ds, editEffectId, dragEffectId);
					}
					else
						return this->CEffectMgrEventObject::addEffectToBlendEffect(ds, editEffectId, dragEffectId);
				}
				virtual void onAddEffectToBlendEffect(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToBlendEffect_void_CEffectTreeviewEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToBlendEffect_void_CEffectTreeviewEvent_Callback(e);
					}
					else
						return this->CEffectMgrEventObject::onAddEffectToBlendEffect(e);
				}
				virtual bool isExistName(_in const EVString& dataSourceName, _in const EVString& effectName, _in const EVString& typeCode, _in EarthView::World::Spatial3D::Dataset::EffectType effectType, _in const EVString& blendeffectName)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_EVString_EVString_EVString_EffectType_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* dataSourceName_Char = dataSourceName.makeBuffer();
						char* effectName_Char = effectName.makeBuffer();
						char* typeCode_Char = typeCode.makeBuffer();
						char* blendeffectName_Char = blendeffectName.makeBuffer();
						bool returnValue = m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_EVString_EVString_EVString_EffectType_EVString_Callback(dataSourceName_Char, effectName_Char, typeCode_Char, (int)effectType, blendeffectName_Char);
						return returnValue;
					}
					else
						return this->CEffectMgrEventObject::isExistName(dataSourceName, effectName, typeCode, effectType, blendeffectName);
				}
				virtual bool isExistName(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const EVString& effectName, _in const EVString& typeCode, _in EarthView::World::Spatial3D::Dataset::EffectType effectType, _in const EVString& blendeffectName)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_IDataSource_EVString_EVString_EffectType_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* effectName_Char = effectName.makeBuffer();
						char* typeCode_Char = typeCode.makeBuffer();
						char* blendeffectName_Char = blendeffectName.makeBuffer();
						bool returnValue = m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_IDataSource_EVString_EVString_EffectType_EVString_Callback(ds, effectName_Char, typeCode_Char, (int)effectType, blendeffectName_Char);
						return returnValue;
					}
					else
						return this->CEffectMgrEventObject::isExistName(ds, effectName, typeCode, effectType, blendeffectName);
				}
				virtual void addEffectToUserType(_in const EVString& datasourceName, _in ev_uint32 srcItemId, _in const EVString& dstUserTypeCode)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_EVString_ev_uint32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* datasourceName_Char = datasourceName.makeBuffer();
						char* dstUserTypeCode_Char = dstUserTypeCode.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_EVString_ev_uint32_EVString_Callback(datasourceName_Char, srcItemId, dstUserTypeCode_Char);
					}
					else
						return this->CEffectMgrEventObject::addEffectToUserType(datasourceName, srcItemId, dstUserTypeCode);
				}
				virtual void addEffectToUserType(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 srcItemId, _in const EVString& dstUserTypeCode)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_IDataSource_ev_uint32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* dstUserTypeCode_Char = dstUserTypeCode.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_IDataSource_ev_uint32_EVString_Callback(ds, srcItemId, dstUserTypeCode_Char);
					}
					else
						return this->CEffectMgrEventObject::addEffectToUserType(ds, srcItemId, dstUserTypeCode);
				}
				virtual void onAddEffectToUserType(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToUserType_void_CEffectTreeviewEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToUserType_void_CEffectTreeviewEvent_Callback(e);
					}
					else
						return this->CEffectMgrEventObject::onAddEffectToUserType(e);
				}
				virtual void addUserTypeToUserType(_in const EVString& datasourceName, _in const EVString& srcUserTypeCode, _in const EVString& dstUserTypeCode)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_EVString_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* datasourceName_Char = datasourceName.makeBuffer();
						char* srcUserTypeCode_Char = srcUserTypeCode.makeBuffer();
						char* dstUserTypeCode_Char = dstUserTypeCode.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_EVString_EVString_EVString_Callback(datasourceName_Char, srcUserTypeCode_Char, dstUserTypeCode_Char);
					}
					else
						return this->CEffectMgrEventObject::addUserTypeToUserType(datasourceName, srcUserTypeCode, dstUserTypeCode);
				}
				virtual void addUserTypeToUserType(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const EVString& srcUserTypeCode, _in const EVString& dstUserTypeCode)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_IDataSource_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* srcUserTypeCode_Char = srcUserTypeCode.makeBuffer();
						char* dstUserTypeCode_Char = dstUserTypeCode.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_IDataSource_EVString_EVString_Callback(ds, srcUserTypeCode_Char, dstUserTypeCode_Char);
					}
					else
						return this->CEffectMgrEventObject::addUserTypeToUserType(ds, srcUserTypeCode, dstUserTypeCode);
				}
				virtual void onAddUserTypeToUserType(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddUserTypeToUserType_void_CEffectTreeviewEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddUserTypeToUserType_void_CEffectTreeviewEvent_Callback(e);
					}
					else
						return this->CEffectMgrEventObject::onAddUserTypeToUserType(e);
				}
				virtual void saveEffect(_in const EVString& datasourceName, _in EarthView::World::Spatial3D::EffectManager::CEffect* effect)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_EVString_CEffect_Callback != NULL && this->isCustomExtend())
					{
						char* datasourceName_Char = datasourceName.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_EVString_CEffect_Callback(datasourceName_Char, effect);
					}
					else
						return this->CEffectMgrEventObject::saveEffect(datasourceName, effect);
				}
				virtual void saveEffect(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in EarthView::World::Spatial3D::EffectManager::CEffect* effect)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_IDataSource_CEffect_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_IDataSource_CEffect_Callback(ds, effect);
					}
					else
						return this->CEffectMgrEventObject::saveEffect(ds, effect);
				}
				virtual void onSaveEffect(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffect_void_CEffectTreeviewEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffect_void_CEffectTreeviewEvent_Callback(e);
					}
					else
						return this->CEffectMgrEventObject::onSaveEffect(e);
				}
				virtual void saveEffectMaterial(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 effectID)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_IDataSource_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_IDataSource_ev_uint32_Callback(ds, effectID);
					}
					else
						return this->CEffectMgrEventObject::saveEffectMaterial(ds, effectID);
				}
				virtual void saveEffectMaterial(_in const EVString& datasourceName, _in ev_uint32 effectID)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						char* datasourceName_Char = datasourceName.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_EVString_ev_uint32_Callback(datasourceName_Char, effectID);
					}
					else
						return this->CEffectMgrEventObject::saveEffectMaterial(datasourceName, effectID);
				}
				virtual void onSaveEffectMaterial(_in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffectMaterial_void_CEffectTreeviewEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffectMaterial_void_CEffectTreeviewEvent_Callback(e);
					}
					else
						return this->CEffectMgrEventObject::onSaveEffectMaterial(e);
				}
				virtual void loadTree(_in const EVString& datasourceName, _out EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree& tree)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_EVString_CEffectUserTypeTree_Callback != NULL && this->isCustomExtend())
					{
						char* datasourceName_Char = datasourceName.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_EVString_CEffectUserTypeTree_Callback(datasourceName_Char, &tree);
					}
					else
						return this->CEffectMgrEventObject::loadTree(datasourceName, tree);
				}
				virtual void loadTree(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _inout EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree& tree)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_IDataSource_CEffectUserTypeTree_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_IDataSource_CEffectUserTypeTree_Callback(ds, &tree);
					}
					else
						return this->CEffectMgrEventObject::loadTree(ds, tree);
				}
				virtual void getBlendEffectInfos(_in const EVString& datasourceName, _in ev_uint32 effectId, _out EarthView::World::Spatial3D::Dataset::CEffectInfoVector& vec)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_EVString_ev_uint32_CEffectInfoVector_Callback != NULL && this->isCustomExtend())
					{
						char* datasourceName_Char = datasourceName.makeBuffer();
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_EVString_ev_uint32_CEffectInfoVector_Callback(datasourceName_Char, effectId, &vec);
					}
					else
						return this->CEffectMgrEventObject::getBlendEffectInfos(datasourceName, effectId, vec);
				}
				virtual void getBlendEffectInfos(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 effectId, _out EarthView::World::Spatial3D::Dataset::CEffectInfoVector& vec)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_IDataSource_ev_uint32_CEffectInfoVector_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_IDataSource_ev_uint32_CEffectInfoVector_Callback(ds, effectId, &vec);
					}
					else
						return this->CEffectMgrEventObject::getBlendEffectInfos(ds, effectId, vec);
				}
				virtual ev_bool onEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onEvent_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onEvent_ev_bool_CEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CEffectMgrEventObject::onEvent(e);
				}
				virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent* e)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onTimerEvent_void_CTimerEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onTimerEvent_void_CTimerEvent_Callback(e);
					}
					else
						return this->CEffectMgrEventObject::onTimerEvent(e);
				}
				virtual void onCustomEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCustomEvent_void_CEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCustomEvent_void_CEvent_Callback(e);
					}
					else
						return this->CEffectMgrEventObject::onCustomEvent(e);
				}
			};
			REGISTER_FACTORY_CLASS(CEffectMgrEventObjectProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_EVString_EVString_EVString(void *pObjectXXXX, _in const char* datasourceName, _in char* parentCode, _in char* newUserTypeName )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Core::ev_string parentCode1 = parentCode;
				EarthView::World::Core::ev_string newUserTypeName1 = newUserTypeName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::createUserType(datasourceName1, parentCode1, newUserTypeName1);
				else
					ptrNativeObject->createUserType(datasourceName1, parentCode1, newUserTypeName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_EVString_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_EVString_EVString_EVString_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_EVString_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_EVString_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* datasourceName, _in char* parentCode, _in char* newUserTypeName )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Core::ev_string parentCode1 = parentCode;
				EarthView::World::Core::ev_string newUserTypeName1 = newUserTypeName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::createUserType(datasourceName1, parentCode1, newUserTypeName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_IDataSource_EVString_EVString(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in char* parentCode, _in char* newUserTypeName )
			{
				EarthView::World::Core::ev_string parentCode1 = parentCode;
				EarthView::World::Core::ev_string newUserTypeName1 = newUserTypeName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::createUserType(ds, parentCode1, newUserTypeName1);
				else
					ptrNativeObject->createUserType(ds, parentCode1, newUserTypeName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_IDataSource_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_IDataSource_EVString_EVString_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_IDataSource_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_IDataSource_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in char* parentCode, _in char* newUserTypeName )
			{
				EarthView::World::Core::ev_string parentCode1 = parentCode;
				EarthView::World::Core::ev_string newUserTypeName1 = newUserTypeName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::createUserType(ds, parentCode1, newUserTypeName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateUserType_void_CEffectTreeviewEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onCreateUserType(e);
				else
					ptrNativeObject->onCreateUserType(e);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateUserType_void_CEffectTreeviewEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateUserType_void_CEffectTreeviewEvent_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateUserType_void_CEffectTreeviewEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateUserType_void_CEffectTreeviewEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onCreateUserType(e);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromTemplateDB_void_CEffectTreeviewEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onImportFromTemplateDB(e);
				else
					ptrNativeObject->onImportFromTemplateDB(e);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromTemplateDB_void_CEffectTreeviewEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromTemplateDB_void_CEffectTreeviewEvent_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromTemplateDB_void_CEffectTreeviewEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromTemplateDB_void_CEffectTreeviewEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onImportFromTemplateDB(e);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_EVString_CStringArray_CStringArray(void *pObjectXXXX, _in const char* dir, _in const char* userTypeCode, _in const char* destDatasourceName, _out void* successScriptNames, _out void* errorArray )
			{
				EarthView::World::Core::ev_string dir1 = dir;
				EarthView::World::Core::ev_string userTypeCode1 = userTypeCode;
				EarthView::World::Core::ev_string destDatasourceName1 = destDatasourceName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::importFromScript(dir1, userTypeCode1, destDatasourceName1, *(EarthView::World::Core::CStringArray*)successScriptNames, *(EarthView::World::Core::CStringArray*)errorArray);
				else
					ptrNativeObject->importFromScript(dir1, userTypeCode1, destDatasourceName1, *(EarthView::World::Core::CStringArray*)successScriptNames, *(EarthView::World::Core::CStringArray*)errorArray);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_EVString_CStringArray_CStringArray( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_EVString_CStringArray_CStringArray_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_EVString_CStringArray_CStringArray(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_EVString_CStringArray_CStringArray_NoVirtual(void *pObjectXXXX, _in const char* dir, _in const char* userTypeCode, _in const char* destDatasourceName, _out void* successScriptNames, _out void* errorArray )
			{
				EarthView::World::Core::ev_string dir1 = dir;
				EarthView::World::Core::ev_string userTypeCode1 = userTypeCode;
				EarthView::World::Core::ev_string destDatasourceName1 = destDatasourceName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::importFromScript(dir1, userTypeCode1, destDatasourceName1, *(EarthView::World::Core::CStringArray*)successScriptNames, *(EarthView::World::Core::CStringArray*)errorArray);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_IDataSource_CStringArray_CStringArray(void *pObjectXXXX, _in const char* dir, _in const char* userTypeCode, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _out void* successScriptNames, _out void* errorArray )
			{
				EarthView::World::Core::ev_string dir1 = dir;
				EarthView::World::Core::ev_string userTypeCode1 = userTypeCode;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::importFromScript(dir1, userTypeCode1, ds, *(EarthView::World::Core::CStringArray*)successScriptNames, *(EarthView::World::Core::CStringArray*)errorArray);
				else
					ptrNativeObject->importFromScript(dir1, userTypeCode1, ds, *(EarthView::World::Core::CStringArray*)successScriptNames, *(EarthView::World::Core::CStringArray*)errorArray);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_IDataSource_CStringArray_CStringArray( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_IDataSource_CStringArray_CStringArray_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_IDataSource_CStringArray_CStringArray(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_IDataSource_CStringArray_CStringArray_NoVirtual(void *pObjectXXXX, _in const char* dir, _in const char* userTypeCode, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _out void* successScriptNames, _out void* errorArray )
			{
				EarthView::World::Core::ev_string dir1 = dir;
				EarthView::World::Core::ev_string userTypeCode1 = userTypeCode;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::importFromScript(dir1, userTypeCode1, ds, *(EarthView::World::Core::CStringArray*)successScriptNames, *(EarthView::World::Core::CStringArray*)errorArray);
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_exportEffectToLocal_bool_ev_uint32_CEffectDataSource_EVString_bool(void *pObjectXXXX, _in ev_uint32 effectId, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* effectDataSource, _in const char* exportPath, _in bool overrideFile )
			{
				EarthView::World::Core::ev_string exportPath1 = exportPath;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::exportEffectToLocal(effectId, effectDataSource, exportPath1, overrideFile);
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->exportEffectToLocal(effectId, effectDataSource, exportPath1, overrideFile);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_exportEffectToLocal_bool_ev_uint32_CEffectDataSource_EVString_bool( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_exportEffectToLocal_bool_ev_uint32_CEffectDataSource_EVString_bool_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_exportEffectToLocal_bool_ev_uint32_CEffectDataSource_EVString_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_exportEffectToLocal_bool_ev_uint32_CEffectDataSource_EVString_bool_NoVirtual(void *pObjectXXXX, _in ev_uint32 effectId, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* effectDataSource, _in const char* exportPath, _in bool overrideFile )
			{
				EarthView::World::Core::ev_string exportPath1 = exportPath;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::exportEffectToLocal(effectId, effectDataSource, exportPath1, overrideFile);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_stopImportFromScript_void_ev_bool(void *pObjectXXXX, _in ev_bool val )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->stopImportFromScript(val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromScript_void_CEffectTreeviewEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onImportFromScript(e);
				else
					ptrNativeObject->onImportFromScript(e);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromScript_void_CEffectTreeviewEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromScript_void_CEffectTreeviewEvent_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromScript_void_CEffectTreeviewEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromScript_void_CEffectTreeviewEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onImportFromScript(e);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onExportToTemplateDB_void_CEffectTreeviewEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onExportToTemplateDB(e);
				else
					ptrNativeObject->onExportToTemplateDB(e);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onExportToTemplateDB_void_CEffectTreeviewEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onExportToTemplateDB_void_CEffectTreeviewEvent_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onExportToTemplateDB_void_CEffectTreeviewEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onExportToTemplateDB_void_CEffectTreeviewEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onExportToTemplateDB(e);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_EVString_EVString_EVString_EffectType_ev_uint32(void *pObjectXXXX, _in const char* datasourceName, _in const char* name, _in const char* userTypeCode, _in int type, _in ev_uint32 parentEffectId )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string userTypeCode1 = userTypeCode;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::createNewEffect(datasourceName1, name1, userTypeCode1, (EarthView::World::Spatial3D::Dataset::EffectType)type, parentEffectId);
				else
					ptrNativeObject->createNewEffect(datasourceName1, name1, userTypeCode1, (EarthView::World::Spatial3D::Dataset::EffectType)type, parentEffectId);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_EVString_EVString_EVString_EffectType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_EVString_EVString_EVString_EffectType_ev_uint32_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_EVString_EVString_EVString_EffectType_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_EVString_EVString_EVString_EffectType_ev_uint32_NoVirtual(void *pObjectXXXX, _in const char* datasourceName, _in const char* name, _in const char* userTypeCode, _in int type, _in ev_uint32 parentEffectId )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string userTypeCode1 = userTypeCode;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::createNewEffect(datasourceName1, name1, userTypeCode1, (EarthView::World::Spatial3D::Dataset::EffectType)type, parentEffectId);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_IDataSource_EVString_EVString_EffectType_ev_uint32(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const char* name, _in const char* userTypeCode, _in int type, _in ev_uint32 parentEffectId )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string userTypeCode1 = userTypeCode;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::createNewEffect(ds, name1, userTypeCode1, (EarthView::World::Spatial3D::Dataset::EffectType)type, parentEffectId);
				else
					ptrNativeObject->createNewEffect(ds, name1, userTypeCode1, (EarthView::World::Spatial3D::Dataset::EffectType)type, parentEffectId);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_IDataSource_EVString_EVString_EffectType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_IDataSource_EVString_EVString_EffectType_ev_uint32_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_IDataSource_EVString_EVString_EffectType_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_IDataSource_EVString_EVString_EffectType_ev_uint32_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const char* name, _in const char* userTypeCode, _in int type, _in ev_uint32 parentEffectId )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string userTypeCode1 = userTypeCode;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::createNewEffect(ds, name1, userTypeCode1, (EarthView::World::Spatial3D::Dataset::EffectType)type, parentEffectId);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateNewEffect_void_CEffectTreeviewEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onCreateNewEffect(e);
				else
					ptrNativeObject->onCreateNewEffect(e);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateNewEffect_void_CEffectTreeviewEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateNewEffect_void_CEffectTreeviewEvent_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateNewEffect_void_CEffectTreeviewEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateNewEffect_void_CEffectTreeviewEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onCreateNewEffect(e);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_EVString_EVString_EVString(void *pObjectXXXX, _in const char* datasourceName, _in const char* code, _in const char* newName )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Core::ev_string code1 = code;
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameUserType(datasourceName1, code1, newName1);
				else
					ptrNativeObject->renameUserType(datasourceName1, code1, newName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_EVString_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_EVString_EVString_EVString_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_EVString_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_EVString_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* datasourceName, _in const char* code, _in const char* newName )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Core::ev_string code1 = code;
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameUserType(datasourceName1, code1, newName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_IDataSource_EVString_EVString(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const char* code, _in const char* newName )
			{
				EarthView::World::Core::ev_string code1 = code;
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameUserType(ds, code1, newName1);
				else
					ptrNativeObject->renameUserType(ds, code1, newName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_IDataSource_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_IDataSource_EVString_EVString_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_IDataSource_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_IDataSource_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const char* code, _in const char* newName )
			{
				EarthView::World::Core::ev_string code1 = code;
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameUserType(ds, code1, newName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameUserType_void_CEffectTreeviewEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onRenameUserType(e);
				else
					ptrNativeObject->onRenameUserType(e);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameUserType_void_CEffectTreeviewEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameUserType_void_CEffectTreeviewEvent_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameUserType_void_CEffectTreeviewEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameUserType_void_CEffectTreeviewEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onRenameUserType(e);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_EVString_EVString_EVString(void *pObjectXXXX, _in const char* datasourceName, _in const char* code, _in const char* newName )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Core::ev_string code1 = code;
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameBlendEffect(datasourceName1, code1, newName1);
				else
					ptrNativeObject->renameBlendEffect(datasourceName1, code1, newName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_EVString_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_EVString_EVString_EVString_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_EVString_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_EVString_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* datasourceName, _in const char* code, _in const char* newName )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Core::ev_string code1 = code;
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameBlendEffect(datasourceName1, code1, newName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_IDataSource_EVString_EVString(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const char* code, _in const char* newName )
			{
				EarthView::World::Core::ev_string code1 = code;
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameBlendEffect(ds, code1, newName1);
				else
					ptrNativeObject->renameBlendEffect(ds, code1, newName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_IDataSource_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_IDataSource_EVString_EVString_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_IDataSource_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_IDataSource_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const char* code, _in const char* newName )
			{
				EarthView::World::Core::ev_string code1 = code;
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameBlendEffect(ds, code1, newName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBlendEffect_void_CEffectTreeviewEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onRenameBlendEffect(e);
				else
					ptrNativeObject->onRenameBlendEffect(e);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBlendEffect_void_CEffectTreeviewEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBlendEffect_void_CEffectTreeviewEvent_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBlendEffect_void_CEffectTreeviewEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBlendEffect_void_CEffectTreeviewEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onRenameBlendEffect(e);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_EVString_EVString_EVString(void *pObjectXXXX, _in const char* datasourceName, _in const char* code, _in const char* newName )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Core::ev_string code1 = code;
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameSingleEffect(datasourceName1, code1, newName1);
				else
					ptrNativeObject->renameSingleEffect(datasourceName1, code1, newName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_EVString_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_EVString_EVString_EVString_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_EVString_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_EVString_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* datasourceName, _in const char* code, _in const char* newName )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Core::ev_string code1 = code;
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameSingleEffect(datasourceName1, code1, newName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_EVString_ev_uint32_EVString(void *pObjectXXXX, _in const char* datasourceName, _in ev_uint32 effectId, _in const char* newName )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::copyNewEffect(datasourceName1, effectId, newName1);
				else
					ptrNativeObject->copyNewEffect(datasourceName1, effectId, newName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_EVString_ev_uint32_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_EVString_ev_uint32_EVString_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_EVString_ev_uint32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_EVString_ev_uint32_EVString_NoVirtual(void *pObjectXXXX, _in const char* datasourceName, _in ev_uint32 effectId, _in const char* newName )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::copyNewEffect(datasourceName1, effectId, newName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_IDataSource_ev_uint32_EVString(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 effectId, _in const char* newName )
			{
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::copyNewEffect(ds, effectId, newName1);
				else
					ptrNativeObject->copyNewEffect(ds, effectId, newName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_IDataSource_ev_uint32_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_IDataSource_ev_uint32_EVString_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_IDataSource_ev_uint32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_IDataSource_ev_uint32_EVString_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 effectId, _in const char* newName )
			{
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::copyNewEffect(ds, effectId, newName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_IDataSource_EVString_EVString(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const char* code, _in const char* newName )
			{
				EarthView::World::Core::ev_string code1 = code;
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameSingleEffect(ds, code1, newName1);
				else
					ptrNativeObject->renameSingleEffect(ds, code1, newName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_IDataSource_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_IDataSource_EVString_EVString_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_IDataSource_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_IDataSource_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const char* code, _in const char* newName )
			{
				EarthView::World::Core::ev_string code1 = code;
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameSingleEffect(ds, code1, newName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameSingleEffect_void_CEffectTreeviewEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onRenameSingleEffect(e);
				else
					ptrNativeObject->onRenameSingleEffect(e);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameSingleEffect_void_CEffectTreeviewEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameSingleEffect_void_CEffectTreeviewEvent_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameSingleEffect_void_CEffectTreeviewEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameSingleEffect_void_CEffectTreeviewEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onRenameSingleEffect(e);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_EVString_EVString_EVString(void *pObjectXXXX, _in const char* datasourceName, _in const char* code, _in const char* newName )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Core::ev_string code1 = code;
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameBEChild(datasourceName1, code1, newName1);
				else
					ptrNativeObject->renameBEChild(datasourceName1, code1, newName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_EVString_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_EVString_EVString_EVString_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_EVString_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_EVString_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* datasourceName, _in const char* code, _in const char* newName )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Core::ev_string code1 = code;
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameBEChild(datasourceName1, code1, newName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_IDataSource_EVString_EVString(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const char* code, _in const char* newName )
			{
				EarthView::World::Core::ev_string code1 = code;
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameBEChild(ds, code1, newName1);
				else
					ptrNativeObject->renameBEChild(ds, code1, newName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_IDataSource_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_IDataSource_EVString_EVString_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_IDataSource_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_IDataSource_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const char* code, _in const char* newName )
			{
				EarthView::World::Core::ev_string code1 = code;
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameBEChild(ds, code1, newName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBEChildEffect_void_CEffectTreeviewEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onRenameBEChildEffect(e);
				else
					ptrNativeObject->onRenameBEChildEffect(e);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBEChildEffect_void_CEffectTreeviewEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBEChildEffect_void_CEffectTreeviewEvent_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBEChildEffect_void_CEffectTreeviewEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBEChildEffect_void_CEffectTreeviewEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onRenameBEChildEffect(e);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_EVString_EVString(void *pObjectXXXX, _in const char* datasourceName, _in const char* code )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Core::ev_string code1 = code;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::deleteUserType(datasourceName1, code1);
				else
					ptrNativeObject->deleteUserType(datasourceName1, code1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_EVString_EVString_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* datasourceName, _in const char* code )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Core::ev_string code1 = code;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::deleteUserType(datasourceName1, code1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_IDataSource_EVString(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const char* code )
			{
				EarthView::World::Core::ev_string code1 = code;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::deleteUserType(ds, code1);
				else
					ptrNativeObject->deleteUserType(ds, code1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_IDataSource_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_IDataSource_EVString_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_IDataSource_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_IDataSource_EVString_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const char* code )
			{
				EarthView::World::Core::ev_string code1 = code;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::deleteUserType(ds, code1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteUserType_void_CEffectTreeviewEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onDeleteUserType(e);
				else
					ptrNativeObject->onDeleteUserType(e);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteUserType_void_CEffectTreeviewEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteUserType_void_CEffectTreeviewEvent_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteUserType_void_CEffectTreeviewEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteUserType_void_CEffectTreeviewEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onDeleteUserType(e);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_EVString_ev_uint32_ev_uint32_EffectType(void *pObjectXXXX, _in const char* datasourceName, _in ev_uint32 parentEffectId, _in ev_uint32 effectId, _in int type )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::deleteEffect(datasourceName1, parentEffectId, effectId, (EarthView::World::Spatial3D::Dataset::EffectType)type);
				else
					ptrNativeObject->deleteEffect(datasourceName1, parentEffectId, effectId, (EarthView::World::Spatial3D::Dataset::EffectType)type);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_EVString_ev_uint32_ev_uint32_EffectType( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_EVString_ev_uint32_ev_uint32_EffectType_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_EVString_ev_uint32_ev_uint32_EffectType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_EVString_ev_uint32_ev_uint32_EffectType_NoVirtual(void *pObjectXXXX, _in const char* datasourceName, _in ev_uint32 parentEffectId, _in ev_uint32 effectId, _in int type )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::deleteEffect(datasourceName1, parentEffectId, effectId, (EarthView::World::Spatial3D::Dataset::EffectType)type);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_IDataSource_ev_uint32_ev_uint32_EffectType(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 parentEffectId, _in ev_uint32 effectId, _in int type )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::deleteEffect(ds, parentEffectId, effectId, (EarthView::World::Spatial3D::Dataset::EffectType)type);
				else
					ptrNativeObject->deleteEffect(ds, parentEffectId, effectId, (EarthView::World::Spatial3D::Dataset::EffectType)type);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_IDataSource_ev_uint32_ev_uint32_EffectType( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_IDataSource_ev_uint32_ev_uint32_EffectType_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_IDataSource_ev_uint32_ev_uint32_EffectType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_IDataSource_ev_uint32_ev_uint32_EffectType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 parentEffectId, _in ev_uint32 effectId, _in int type )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::deleteEffect(ds, parentEffectId, effectId, (EarthView::World::Spatial3D::Dataset::EffectType)type);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteEffect_void_CEffectTreeviewEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onDeleteEffect(e);
				else
					ptrNativeObject->onDeleteEffect(e);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteEffect_void_CEffectTreeviewEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteEffect_void_CEffectTreeviewEvent_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteEffect_void_CEffectTreeviewEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteEffect_void_CEffectTreeviewEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onDeleteEffect(e);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_EVString_ev_uint32_ev_uint32(void *pObjectXXXX, _in const char* datasourceName, _in ev_uint32 editEffectId, _in ev_uint32 dragEffectId )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addEffectToBlendEffect(datasourceName1, editEffectId, dragEffectId);
				else
					ptrNativeObject->addEffectToBlendEffect(datasourceName1, editEffectId, dragEffectId);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_EVString_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_EVString_ev_uint32_ev_uint32_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_EVString_ev_uint32_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_EVString_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in const char* datasourceName, _in ev_uint32 editEffectId, _in ev_uint32 dragEffectId )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addEffectToBlendEffect(datasourceName1, editEffectId, dragEffectId);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_IDataSource_ev_uint32_ev_uint32(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 editEffectId, _in ev_uint32 dragEffectId )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addEffectToBlendEffect(ds, editEffectId, dragEffectId);
				else
					ptrNativeObject->addEffectToBlendEffect(ds, editEffectId, dragEffectId);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_IDataSource_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_IDataSource_ev_uint32_ev_uint32_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_IDataSource_ev_uint32_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_IDataSource_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 editEffectId, _in ev_uint32 dragEffectId )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addEffectToBlendEffect(ds, editEffectId, dragEffectId);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToBlendEffect_void_CEffectTreeviewEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onAddEffectToBlendEffect(e);
				else
					ptrNativeObject->onAddEffectToBlendEffect(e);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToBlendEffect_void_CEffectTreeviewEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToBlendEffect_void_CEffectTreeviewEvent_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToBlendEffect_void_CEffectTreeviewEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToBlendEffect_void_CEffectTreeviewEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onAddEffectToBlendEffect(e);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_CEffectInfo_IDataSource_ev_uint32_CEffectInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 editEffectId, _inout void* info )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				EarthView::World::Spatial3D::Dataset::CEffectInfo objXXXX = ptrNativeObject->addEffectToBlendEffect(ds, editEffectId, *(EarthView::World::Spatial3D::Dataset::CEffectInfo*)info);
				EarthView::World::Spatial3D::Dataset::CEffectInfo *pXXXX = new EarthView::World::Spatial3D::Dataset::CEffectInfo(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_EVString_EVString_EVString_EffectType_EVString(void *pObjectXXXX, _in const char* dataSourceName, _in const char* effectName, _in const char* typeCode, _in int effectType, _in const char* blendeffectName )
			{
				EarthView::World::Core::ev_string dataSourceName1 = dataSourceName;
				EarthView::World::Core::ev_string effectName1 = effectName;
				EarthView::World::Core::ev_string typeCode1 = typeCode;
				EarthView::World::Core::ev_string blendeffectName1 = blendeffectName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::isExistName(dataSourceName1, effectName1, typeCode1, (EarthView::World::Spatial3D::Dataset::EffectType)effectType, blendeffectName1);
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->isExistName(dataSourceName1, effectName1, typeCode1, (EarthView::World::Spatial3D::Dataset::EffectType)effectType, blendeffectName1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_EVString_EVString_EVString_EffectType_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_EVString_EVString_EVString_EffectType_EVString_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_EVString_EVString_EVString_EffectType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_EVString_EVString_EVString_EffectType_EVString_NoVirtual(void *pObjectXXXX, _in const char* dataSourceName, _in const char* effectName, _in const char* typeCode, _in int effectType, _in const char* blendeffectName )
			{
				EarthView::World::Core::ev_string dataSourceName1 = dataSourceName;
				EarthView::World::Core::ev_string effectName1 = effectName;
				EarthView::World::Core::ev_string typeCode1 = typeCode;
				EarthView::World::Core::ev_string blendeffectName1 = blendeffectName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::isExistName(dataSourceName1, effectName1, typeCode1, (EarthView::World::Spatial3D::Dataset::EffectType)effectType, blendeffectName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_IDataSource_EVString_EVString_EffectType_EVString(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const char* effectName, _in const char* typeCode, _in int effectType, _in const char* blendeffectName )
			{
				EarthView::World::Core::ev_string effectName1 = effectName;
				EarthView::World::Core::ev_string typeCode1 = typeCode;
				EarthView::World::Core::ev_string blendeffectName1 = blendeffectName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::isExistName(ds, effectName1, typeCode1, (EarthView::World::Spatial3D::Dataset::EffectType)effectType, blendeffectName1);
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->isExistName(ds, effectName1, typeCode1, (EarthView::World::Spatial3D::Dataset::EffectType)effectType, blendeffectName1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_IDataSource_EVString_EVString_EffectType_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_IDataSource_EVString_EVString_EffectType_EVString_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_IDataSource_EVString_EVString_EffectType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_IDataSource_EVString_EVString_EffectType_EVString_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const char* effectName, _in const char* typeCode, _in int effectType, _in const char* blendeffectName )
			{
				EarthView::World::Core::ev_string effectName1 = effectName;
				EarthView::World::Core::ev_string typeCode1 = typeCode;
				EarthView::World::Core::ev_string blendeffectName1 = blendeffectName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::isExistName(ds, effectName1, typeCode1, (EarthView::World::Spatial3D::Dataset::EffectType)effectType, blendeffectName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_EVString_ev_uint32_EVString(void *pObjectXXXX, _in const char* datasourceName, _in ev_uint32 srcItemId, _in const char* dstUserTypeCode )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Core::ev_string dstUserTypeCode1 = dstUserTypeCode;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addEffectToUserType(datasourceName1, srcItemId, dstUserTypeCode1);
				else
					ptrNativeObject->addEffectToUserType(datasourceName1, srcItemId, dstUserTypeCode1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_EVString_ev_uint32_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_EVString_ev_uint32_EVString_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_EVString_ev_uint32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_EVString_ev_uint32_EVString_NoVirtual(void *pObjectXXXX, _in const char* datasourceName, _in ev_uint32 srcItemId, _in const char* dstUserTypeCode )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Core::ev_string dstUserTypeCode1 = dstUserTypeCode;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addEffectToUserType(datasourceName1, srcItemId, dstUserTypeCode1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_IDataSource_ev_uint32_EVString(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 srcItemId, _in const char* dstUserTypeCode )
			{
				EarthView::World::Core::ev_string dstUserTypeCode1 = dstUserTypeCode;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addEffectToUserType(ds, srcItemId, dstUserTypeCode1);
				else
					ptrNativeObject->addEffectToUserType(ds, srcItemId, dstUserTypeCode1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_IDataSource_ev_uint32_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_IDataSource_ev_uint32_EVString_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_IDataSource_ev_uint32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_IDataSource_ev_uint32_EVString_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 srcItemId, _in const char* dstUserTypeCode )
			{
				EarthView::World::Core::ev_string dstUserTypeCode1 = dstUserTypeCode;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addEffectToUserType(ds, srcItemId, dstUserTypeCode1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToUserType_void_CEffectTreeviewEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onAddEffectToUserType(e);
				else
					ptrNativeObject->onAddEffectToUserType(e);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToUserType_void_CEffectTreeviewEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToUserType_void_CEffectTreeviewEvent_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToUserType_void_CEffectTreeviewEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToUserType_void_CEffectTreeviewEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onAddEffectToUserType(e);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_EVString_EVString_EVString(void *pObjectXXXX, _in const char* datasourceName, _in const char* srcUserTypeCode, _in const char* dstUserTypeCode )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Core::ev_string srcUserTypeCode1 = srcUserTypeCode;
				EarthView::World::Core::ev_string dstUserTypeCode1 = dstUserTypeCode;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addUserTypeToUserType(datasourceName1, srcUserTypeCode1, dstUserTypeCode1);
				else
					ptrNativeObject->addUserTypeToUserType(datasourceName1, srcUserTypeCode1, dstUserTypeCode1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_EVString_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_EVString_EVString_EVString_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_EVString_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_EVString_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* datasourceName, _in const char* srcUserTypeCode, _in const char* dstUserTypeCode )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Core::ev_string srcUserTypeCode1 = srcUserTypeCode;
				EarthView::World::Core::ev_string dstUserTypeCode1 = dstUserTypeCode;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addUserTypeToUserType(datasourceName1, srcUserTypeCode1, dstUserTypeCode1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_IDataSource_EVString_EVString(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const char* srcUserTypeCode, _in const char* dstUserTypeCode )
			{
				EarthView::World::Core::ev_string srcUserTypeCode1 = srcUserTypeCode;
				EarthView::World::Core::ev_string dstUserTypeCode1 = dstUserTypeCode;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addUserTypeToUserType(ds, srcUserTypeCode1, dstUserTypeCode1);
				else
					ptrNativeObject->addUserTypeToUserType(ds, srcUserTypeCode1, dstUserTypeCode1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_IDataSource_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_IDataSource_EVString_EVString_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_IDataSource_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_IDataSource_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const char* srcUserTypeCode, _in const char* dstUserTypeCode )
			{
				EarthView::World::Core::ev_string srcUserTypeCode1 = srcUserTypeCode;
				EarthView::World::Core::ev_string dstUserTypeCode1 = dstUserTypeCode;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addUserTypeToUserType(ds, srcUserTypeCode1, dstUserTypeCode1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddUserTypeToUserType_void_CEffectTreeviewEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onAddUserTypeToUserType(e);
				else
					ptrNativeObject->onAddUserTypeToUserType(e);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddUserTypeToUserType_void_CEffectTreeviewEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddUserTypeToUserType_void_CEffectTreeviewEvent_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddUserTypeToUserType_void_CEffectTreeviewEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddUserTypeToUserType_void_CEffectTreeviewEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onAddUserTypeToUserType(e);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_EVString_CEffect(void *pObjectXXXX, _in const char* datasourceName, _in EarthView::World::Spatial3D::EffectManager::CEffect* effect )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::saveEffect(datasourceName1, effect);
				else
					ptrNativeObject->saveEffect(datasourceName1, effect);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_EVString_CEffect( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_EVString_CEffect_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_EVString_CEffect(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_EVString_CEffect_NoVirtual(void *pObjectXXXX, _in const char* datasourceName, _in EarthView::World::Spatial3D::EffectManager::CEffect* effect )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::saveEffect(datasourceName1, effect);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_IDataSource_CEffect(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in EarthView::World::Spatial3D::EffectManager::CEffect* effect )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::saveEffect(ds, effect);
				else
					ptrNativeObject->saveEffect(ds, effect);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_IDataSource_CEffect( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_IDataSource_CEffect_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_IDataSource_CEffect(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_IDataSource_CEffect_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in EarthView::World::Spatial3D::EffectManager::CEffect* effect )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::saveEffect(ds, effect);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffect_void_CEffectTreeviewEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onSaveEffect(e);
				else
					ptrNativeObject->onSaveEffect(e);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffect_void_CEffectTreeviewEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffect_void_CEffectTreeviewEvent_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffect_void_CEffectTreeviewEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffect_void_CEffectTreeviewEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onSaveEffect(e);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_IDataSource_ev_uint32(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 effectID )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::saveEffectMaterial(ds, effectID);
				else
					ptrNativeObject->saveEffectMaterial(ds, effectID);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_IDataSource_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_IDataSource_ev_uint32_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_IDataSource_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_IDataSource_ev_uint32_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 effectID )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::saveEffectMaterial(ds, effectID);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_EVString_ev_uint32(void *pObjectXXXX, _in const char* datasourceName, _in ev_uint32 effectID )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::saveEffectMaterial(datasourceName1, effectID);
				else
					ptrNativeObject->saveEffectMaterial(datasourceName1, effectID);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_EVString_ev_uint32_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_EVString_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in const char* datasourceName, _in ev_uint32 effectID )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::saveEffectMaterial(datasourceName1, effectID);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffectMaterial_void_CEffectTreeviewEvent(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onSaveEffectMaterial(e);
				else
					ptrNativeObject->onSaveEffectMaterial(e);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffectMaterial_void_CEffectTreeviewEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffectMaterial_void_CEffectTreeviewEvent_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffectMaterial_void_CEffectTreeviewEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffectMaterial_void_CEffectTreeviewEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onSaveEffectMaterial(e);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_EVString_CEffectUserTypeTree(void *pObjectXXXX, _in const char* datasourceName, _out void* tree )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::loadTree(datasourceName1, *(EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*)tree);
				else
					ptrNativeObject->loadTree(datasourceName1, *(EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*)tree);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_EVString_CEffectUserTypeTree( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_EVString_CEffectUserTypeTree_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_EVString_CEffectUserTypeTree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_EVString_CEffectUserTypeTree_NoVirtual(void *pObjectXXXX, _in const char* datasourceName, _out void* tree )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::loadTree(datasourceName1, *(EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*)tree);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_IDataSource_CEffectUserTypeTree(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _inout void* tree )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::loadTree(ds, *(EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*)tree);
				else
					ptrNativeObject->loadTree(ds, *(EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*)tree);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_IDataSource_CEffectUserTypeTree( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_IDataSource_CEffectUserTypeTree_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_IDataSource_CEffectUserTypeTree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_IDataSource_CEffectUserTypeTree_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _inout void* tree )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::loadTree(ds, *(EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*)tree);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_EVString_ev_uint32_CEffectInfoVector(void *pObjectXXXX, _in const char* datasourceName, _in ev_uint32 effectId, _out void* vec )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::getBlendEffectInfos(datasourceName1, effectId, *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*)vec);
				else
					ptrNativeObject->getBlendEffectInfos(datasourceName1, effectId, *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*)vec);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_EVString_ev_uint32_CEffectInfoVector( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_EVString_ev_uint32_CEffectInfoVector_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_EVString_ev_uint32_CEffectInfoVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_EVString_ev_uint32_CEffectInfoVector_NoVirtual(void *pObjectXXXX, _in const char* datasourceName, _in ev_uint32 effectId, _out void* vec )
			{
				EarthView::World::Core::ev_string datasourceName1 = datasourceName;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::getBlendEffectInfos(datasourceName1, effectId, *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*)vec);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_IDataSource_ev_uint32_CEffectInfoVector(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 effectId, _out void* vec )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::getBlendEffectInfos(ds, effectId, *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*)vec);
				else
					ptrNativeObject->getBlendEffectInfos(ds, effectId, *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*)vec);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_IDataSource_ev_uint32_CEffectInfoVector( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_IDataSource_ev_uint32_CEffectInfoVector_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_IDataSource_ev_uint32_CEffectInfoVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_IDataSource_ev_uint32_CEffectInfoVector_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in ev_uint32 effectId, _out void* vec )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::getBlendEffectInfos(ds, effectId, *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*)vec);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_destoryScene_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->destoryScene();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_windowResized_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->windowResized();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_mouseButtonPress_void_int_int_ev_uint32(void *pObjectXXXX, _in int x, _in int y, _in ev_uint32 button )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->mouseButtonPress(x, y, button);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_mouseDoubleButtonPress_void_int_int_ev_uint32(void *pObjectXXXX, _in int x, _in int y, _in ev_uint32 button )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->mouseDoubleButtonPress(x, y, button);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_mouseButtonRelease_void_int_int_ev_uint32(void *pObjectXXXX, _in int x, _in int y, _in ev_uint32 button )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->mouseButtonRelease(x, y, button);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_mouseMove_void_int_int(void *pObjectXXXX, _in int x, _in int y )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->mouseMove(x, y);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_mouseWheel_void_float(void *pObjectXXXX, _in float delta )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ptrNativeObject->mouseWheel(delta);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_findDiscontinuousID_EVString_CEffectDataSource_EVString(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* effectDatasource, _in const char* userTypeCode )
			{
				EarthView::World::Core::ev_string userTypeCode1 = userTypeCode;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->findDiscontinuousID(effectDatasource, userTypeCode1);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onEvent_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				if (dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onEvent(e);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->onEvent(e);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onEvent_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onEvent_ev_bool_CEvent_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onEvent_ev_bool_CEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onEvent_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onEvent(e);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onTimerEvent_void_CTimerEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onTimerEvent_void_CTimerEvent_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onTimerEvent_void_CTimerEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCustomEvent_void_CEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCustomEvent_void_CEvent_Callback* pCallback )
			{
				CEffectMgrEventObjectProxy* ptr = dynamic_cast<CEffectMgrEventObjectProxy*>((EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCustomEvent_void_CEvent(pCallback);
				}
			}
		}
	}
}
