/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/effectlayereditor.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace EffectManager
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
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCmdDataEffect_setRedoPos_void_CVector3(void *pObjectXXXX, _in void* pos )
			{
				EarthView::World::Spatial3D::CCmdDataEffect* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjectXXXX;
				ptrNativeObject->setRedoPos(*(EarthView::World::Spatial::Math::CVector3*)pos);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CCmdDataEffect_getRedoPos_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataEffect* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getRedoPos();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCmdDataEffect_setRedoScale_void_CVector3(void *pObjectXXXX, _in void* scale )
			{
				EarthView::World::Spatial3D::CCmdDataEffect* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjectXXXX;
				ptrNativeObject->setRedoScale(*(EarthView::World::Spatial::Math::CVector3*)scale);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CCmdDataEffect_getRedoScale_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataEffect* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getRedoScale();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCmdDataEffect_setRedoQua_void_CQuaternion(void *pObjectXXXX, _in void* qua )
			{
				EarthView::World::Spatial3D::CCmdDataEffect* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjectXXXX;
				ptrNativeObject->setRedoQua(*(EarthView::World::Spatial::Math::CQuaternion*)qua);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CCmdDataEffect_getRedoQua_CQuaternion(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataEffect* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjectXXXX;
				EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->getRedoQua();
				EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCmdDataEffect_setUndoPos_void_CVector3(void *pObjectXXXX, _in void* pos )
			{
				EarthView::World::Spatial3D::CCmdDataEffect* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjectXXXX;
				ptrNativeObject->setUndoPos(*(EarthView::World::Spatial::Math::CVector3*)pos);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CCmdDataEffect_getUndoPos_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataEffect* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getUndoPos();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCmdDataEffect_setUndoScale_void_CVector3(void *pObjectXXXX, _in void* scale )
			{
				EarthView::World::Spatial3D::CCmdDataEffect* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjectXXXX;
				ptrNativeObject->setUndoScale(*(EarthView::World::Spatial::Math::CVector3*)scale);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CCmdDataEffect_getUndoScale_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataEffect* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getUndoScale();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCmdDataEffect_setUndoQua_void_CQuaternion(void *pObjectXXXX, _in void* qua )
			{
				EarthView::World::Spatial3D::CCmdDataEffect* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjectXXXX;
				ptrNativeObject->setUndoQua(*(EarthView::World::Spatial::Math::CQuaternion*)qua);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CCmdDataEffect_getUndoQua_CQuaternion(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataEffect* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjectXXXX;
				EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->getUndoQua();
				EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCmdDataEffect_setEffectId_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 effectId )
			{
				EarthView::World::Spatial3D::CCmdDataEffect* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjectXXXX;
				ptrNativeObject->setEffectId(effectId);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CCmdDataEffect_getEffectId_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataEffect* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getEffectId();
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_setEditingLayer_void_IGlobeLayer_Callback)(_in EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer);
			typedef EarthView::World::Spatial3D::Atlas::IGlobeLayer*  ( _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_getEditingLayer_IGlobeLayer_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_stopEditing_void_ev_bool_Callback)(_in ev_bool isSave);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_saveEditing_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_redo_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_undo_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_canRedo_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_canUndo_ev_bool_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback)(_in ev_uint32 id, _in const void* matrix);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback)(_inout void* objPtr, _in const void* nwMatrix);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback)(_in ev_uint32 id);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_addListener_void_CLayer3DEditorListener_Callback)(_in EarthView::World::Spatial3D::CLayer3DEditorListener* lis);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_removeListener_void_CLayer3DEditorListener_Callback)(_in EarthView::World::Spatial3D::CLayer3DEditorListener* lis);
			typedef EarthView::World::Spatial3D::CLayer3DEditorListener*  ( _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_getNumListener_ev_uint32_Callback)();
			class CEffectLayerEditorProxy : public EarthView::World::Spatial3D::CEffectLayerEditor
			{
			private:
				EarthView_World_Spatial3D_CEffectLayerEditor_setEditingLayer_void_IGlobeLayer_Callback* m_EarthView_World_Spatial3D_CEffectLayerEditor_setEditingLayer_void_IGlobeLayer_Callback;
				EarthView_World_Spatial3D_CEffectLayerEditor_getEditingLayer_IGlobeLayer_Callback* m_EarthView_World_Spatial3D_CEffectLayerEditor_getEditingLayer_IGlobeLayer_Callback;
				EarthView_World_Spatial3D_CEffectLayerEditor_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_CEffectLayerEditor_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial3D_CEffectLayerEditor_stopEditing_void_ev_bool_Callback* m_EarthView_World_Spatial3D_CEffectLayerEditor_stopEditing_void_ev_bool_Callback;
				EarthView_World_Spatial3D_CEffectLayerEditor_saveEditing_void_Callback* m_EarthView_World_Spatial3D_CEffectLayerEditor_saveEditing_void_Callback;
				EarthView_World_Spatial3D_CEffectLayerEditor_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_CEffectLayerEditor_isEditing_ev_bool_Callback;
				EarthView_World_Spatial3D_CEffectLayerEditor_redo_ev_bool_Callback* m_EarthView_World_Spatial3D_CEffectLayerEditor_redo_ev_bool_Callback;
				EarthView_World_Spatial3D_CEffectLayerEditor_undo_ev_bool_Callback* m_EarthView_World_Spatial3D_CEffectLayerEditor_undo_ev_bool_Callback;
				EarthView_World_Spatial3D_CEffectLayerEditor_canRedo_ev_bool_Callback* m_EarthView_World_Spatial3D_CEffectLayerEditor_canRedo_ev_bool_Callback;
				EarthView_World_Spatial3D_CEffectLayerEditor_canUndo_ev_bool_Callback* m_EarthView_World_Spatial3D_CEffectLayerEditor_canUndo_ev_bool_Callback;
				EarthView_World_Spatial3D_CEffectLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback* m_EarthView_World_Spatial3D_CEffectLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback;
				EarthView_World_Spatial3D_CEffectLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback* m_EarthView_World_Spatial3D_CEffectLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback;
				EarthView_World_Spatial3D_CEffectLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_CEffectLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback;
				EarthView_World_Spatial3D_CEffectLayerEditor_addListener_void_CLayer3DEditorListener_Callback* m_EarthView_World_Spatial3D_CEffectLayerEditor_addListener_void_CLayer3DEditorListener_Callback;
				EarthView_World_Spatial3D_CEffectLayerEditor_removeListener_void_CLayer3DEditorListener_Callback* m_EarthView_World_Spatial3D_CEffectLayerEditor_removeListener_void_CLayer3DEditorListener_Callback;
				EarthView_World_Spatial3D_CEffectLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback* m_EarthView_World_Spatial3D_CEffectLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback;
				EarthView_World_Spatial3D_CEffectLayerEditor_getNumListener_ev_uint32_Callback* m_EarthView_World_Spatial3D_CEffectLayerEditor_getNumListener_ev_uint32_Callback;
			public:
				CEffectLayerEditorProxy(EarthView::World::Core::CNameValuePairList *pList) : CEffectLayerEditor(pList)
				{
					m_EarthView_World_Spatial3D_CEffectLayerEditor_setEditingLayer_void_IGlobeLayer_Callback = NULL;
					m_EarthView_World_Spatial3D_CEffectLayerEditor_getEditingLayer_IGlobeLayer_Callback = NULL;
					m_EarthView_World_Spatial3D_CEffectLayerEditor_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CEffectLayerEditor_stopEditing_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CEffectLayerEditor_saveEditing_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CEffectLayerEditor_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CEffectLayerEditor_redo_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CEffectLayerEditor_undo_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CEffectLayerEditor_canRedo_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CEffectLayerEditor_canUndo_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CEffectLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CEffectLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CEffectLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CEffectLayerEditor_addListener_void_CLayer3DEditorListener_Callback = NULL;
					m_EarthView_World_Spatial3D_CEffectLayerEditor_removeListener_void_CLayer3DEditorListener_Callback = NULL;
					m_EarthView_World_Spatial3D_CEffectLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CEffectLayerEditor_getNumListener_ev_uint32_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_setEditingLayer_void_IGlobeLayer(EarthView_World_Spatial3D_CEffectLayerEditor_setEditingLayer_void_IGlobeLayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEffectLayerEditor_setEditingLayer_void_IGlobeLayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_getEditingLayer_IGlobeLayer(EarthView_World_Spatial3D_CEffectLayerEditor_getEditingLayer_IGlobeLayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEffectLayerEditor_getEditingLayer_IGlobeLayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_startEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_CEffectLayerEditor_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEffectLayerEditor_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_stopEditing_void_ev_bool(EarthView_World_Spatial3D_CEffectLayerEditor_stopEditing_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEffectLayerEditor_stopEditing_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_saveEditing_void(EarthView_World_Spatial3D_CEffectLayerEditor_saveEditing_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEffectLayerEditor_saveEditing_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_isEditing_ev_bool(EarthView_World_Spatial3D_CEffectLayerEditor_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEffectLayerEditor_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_redo_ev_bool(EarthView_World_Spatial3D_CEffectLayerEditor_redo_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEffectLayerEditor_redo_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_undo_ev_bool(EarthView_World_Spatial3D_CEffectLayerEditor_undo_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEffectLayerEditor_undo_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_canRedo_ev_bool(EarthView_World_Spatial3D_CEffectLayerEditor_canRedo_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEffectLayerEditor_canRedo_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_canUndo_ev_bool(EarthView_World_Spatial3D_CEffectLayerEditor_canUndo_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEffectLayerEditor_canUndo_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4(EarthView_World_Spatial3D_CEffectLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEffectLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4(EarthView_World_Spatial3D_CEffectLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEffectLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_deleteLayerObject_ev_bool_ev_uint32(EarthView_World_Spatial3D_CEffectLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEffectLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_addListener_void_CLayer3DEditorListener(EarthView_World_Spatial3D_CEffectLayerEditor_addListener_void_CLayer3DEditorListener_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEffectLayerEditor_addListener_void_CLayer3DEditorListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_removeListener_void_CLayer3DEditorListener(EarthView_World_Spatial3D_CEffectLayerEditor_removeListener_void_CLayer3DEditorListener_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEffectLayerEditor_removeListener_void_CLayer3DEditorListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_getListener_CLayer3DEditorListener_ev_uint32(EarthView_World_Spatial3D_CEffectLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEffectLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_getNumListener_ev_uint32(EarthView_World_Spatial3D_CEffectLayerEditor_getNumListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEffectLayerEditor_getNumListener_ev_uint32_Callback = pCallback;
				}
				virtual void saveEditing()
				{
					if(m_EarthView_World_Spatial3D_CEffectLayerEditor_saveEditing_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CEffectLayerEditor_saveEditing_void_Callback();
					}
					else
						return this->CEffectLayerEditor::saveEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial3D_CEffectLayerEditor_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CEffectLayerEditor_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CEffectLayerEditor::startEditing(withUndo);
				}
				virtual void stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial3D_CEffectLayerEditor_stopEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CEffectLayerEditor_stopEditing_void_ev_bool_Callback(isSave);
					}
					else
						return this->CEffectLayerEditor::stopEditing(isSave);
				}
				virtual ev_uint32 addLayerObject(_in ev_uint32 id, _in const EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Spatial3D_CEffectLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial3D_CEffectLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback(id, &matrix);
						return returnValue;
					}
					else
						return this->CEffectLayerEditor::addLayerObject(id, matrix);
				}
				virtual ev_bool changeObjectPosition(_inout EarthView::World::Geometry3D::CVisibleObjectPtr& objPtr, _in const EarthView::World::Spatial::Math::CMatrix4& nwMatrix)
				{
					if(m_EarthView_World_Spatial3D_CEffectLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CEffectLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback(&objPtr, &nwMatrix);
						return returnValue;
					}
					else
						return this->CEffectLayerEditor::changeObjectPosition(objPtr, nwMatrix);
				}
				virtual ev_bool deleteLayerObject(_in ev_uint32 objId)
				{
					if(m_EarthView_World_Spatial3D_CEffectLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CEffectLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback(objId);
						return returnValue;
					}
					else
						return this->CEffectLayerEditor::deleteLayerObject(objId);
				}
				virtual void setEditingLayer(_in EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer)
				{
					if(m_EarthView_World_Spatial3D_CEffectLayerEditor_setEditingLayer_void_IGlobeLayer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CEffectLayerEditor_setEditingLayer_void_IGlobeLayer_Callback(ref_layer);
					}
					else
						return this->CEffectLayerEditor::setEditingLayer(ref_layer);
				}
				virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getEditingLayer()
				{
					if(m_EarthView_World_Spatial3D_CEffectLayerEditor_getEditingLayer_IGlobeLayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::Atlas::IGlobeLayer* returnValue = m_EarthView_World_Spatial3D_CEffectLayerEditor_getEditingLayer_IGlobeLayer_Callback();
						return returnValue;
					}
					else
						return this->CEffectLayerEditor::getEditingLayer();
				}
				virtual ev_bool isEditing()
				{
					if(m_EarthView_World_Spatial3D_CEffectLayerEditor_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CEffectLayerEditor_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEffectLayerEditor::isEditing();
				}
				virtual ev_bool redo()
				{
					if(m_EarthView_World_Spatial3D_CEffectLayerEditor_redo_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CEffectLayerEditor_redo_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEffectLayerEditor::redo();
				}
				virtual ev_bool undo()
				{
					if(m_EarthView_World_Spatial3D_CEffectLayerEditor_undo_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CEffectLayerEditor_undo_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEffectLayerEditor::undo();
				}
				virtual ev_bool canRedo()
				{
					if(m_EarthView_World_Spatial3D_CEffectLayerEditor_canRedo_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CEffectLayerEditor_canRedo_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEffectLayerEditor::canRedo();
				}
				virtual ev_bool canUndo()
				{
					if(m_EarthView_World_Spatial3D_CEffectLayerEditor_canUndo_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CEffectLayerEditor_canUndo_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEffectLayerEditor::canUndo();
				}
				virtual void addListener(_in EarthView::World::Spatial3D::CLayer3DEditorListener* lis)
				{
					if(m_EarthView_World_Spatial3D_CEffectLayerEditor_addListener_void_CLayer3DEditorListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CEffectLayerEditor_addListener_void_CLayer3DEditorListener_Callback(lis);
					}
					else
						return this->CEffectLayerEditor::addListener(lis);
				}
				virtual void removeListener(_in EarthView::World::Spatial3D::CLayer3DEditorListener* lis)
				{
					if(m_EarthView_World_Spatial3D_CEffectLayerEditor_removeListener_void_CLayer3DEditorListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CEffectLayerEditor_removeListener_void_CLayer3DEditorListener_Callback(lis);
					}
					else
						return this->CEffectLayerEditor::removeListener(lis);
				}
				virtual EarthView::World::Spatial3D::CLayer3DEditorListener* getListener(_in ev_uint32 index)
				{
					if(m_EarthView_World_Spatial3D_CEffectLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::CLayer3DEditorListener* returnValue = m_EarthView_World_Spatial3D_CEffectLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CEffectLayerEditor::getListener(index);
				}
				virtual ev_uint32 getNumListener()
				{
					if(m_EarthView_World_Spatial3D_CEffectLayerEditor_getNumListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial3D_CEffectLayerEditor_getNumListener_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CEffectLayerEditor::getNumListener();
				}
			};
			REGISTER_FACTORY_CLASS(CEffectLayerEditorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_saveEditing_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEffectLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX;
				if (dynamic_cast<CEffectLayerEditorProxy*>((EarthView::World::Spatial3D::CEffectLayerEditor*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CEffectLayerEditor::saveEditing();
				else
					ptrNativeObject->saveEditing();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEffectLayerEditor_saveEditing_void( void *pObjectXXXX, EarthView_World_Spatial3D_CEffectLayerEditor_saveEditing_void_Callback* pCallback )
			{
				CEffectLayerEditorProxy* ptr = dynamic_cast<CEffectLayerEditorProxy*>((EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_saveEditing_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_saveEditing_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEffectLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CEffectLayerEditor::saveEditing();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_startEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool withUndo )
			{
				EarthView::World::Spatial3D::CEffectLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX;
				if (dynamic_cast<CEffectLayerEditorProxy*>((EarthView::World::Spatial3D::CEffectLayerEditor*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CEffectLayerEditor::startEditing(withUndo);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->startEditing(withUndo);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEffectLayerEditor_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CEffectLayerEditor_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEffectLayerEditorProxy* ptr = dynamic_cast<CEffectLayerEditorProxy*>((EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_startEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool withUndo )
			{
				EarthView::World::Spatial3D::CEffectLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CEffectLayerEditor::startEditing(withUndo);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_stopEditing_void_ev_bool(void *pObjectXXXX, _in ev_bool isSave )
			{
				EarthView::World::Spatial3D::CEffectLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX;
				if (dynamic_cast<CEffectLayerEditorProxy*>((EarthView::World::Spatial3D::CEffectLayerEditor*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CEffectLayerEditor::stopEditing(isSave);
				else
					ptrNativeObject->stopEditing(isSave);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEffectLayerEditor_stopEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CEffectLayerEditor_stopEditing_void_ev_bool_Callback* pCallback )
			{
				CEffectLayerEditorProxy* ptr = dynamic_cast<CEffectLayerEditorProxy*>((EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_stopEditing_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_stopEditing_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isSave )
			{
				EarthView::World::Spatial3D::CEffectLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CEffectLayerEditor::stopEditing(isSave);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4(void *pObjectXXXX, _in ev_uint32 id, _in const void* matrix )
			{
				EarthView::World::Spatial3D::CEffectLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX;
				if (dynamic_cast<CEffectLayerEditorProxy*>((EarthView::World::Spatial3D::CEffectLayerEditor*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CEffectLayerEditor::addLayerObject(id, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->addLayerObject(id, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEffectLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CEffectLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CEffectLayerEditorProxy* ptr = dynamic_cast<CEffectLayerEditorProxy*>((EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_NoVirtual(void *pObjectXXXX, _in ev_uint32 id, _in const void* matrix )
			{
				EarthView::World::Spatial3D::CEffectLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CEffectLayerEditor::addLayerObject(id, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4(void *pObjectXXXX, _inout void* objPtr, _in const void* nwMatrix )
			{
				EarthView::World::Spatial3D::CEffectLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX;
				if (dynamic_cast<CEffectLayerEditorProxy*>((EarthView::World::Spatial3D::CEffectLayerEditor*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CEffectLayerEditor::changeObjectPosition(*(EarthView::World::Geometry3D::CVisibleObjectPtr*)objPtr, *(EarthView::World::Spatial::Math::CMatrix4*)nwMatrix);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->changeObjectPosition(*(EarthView::World::Geometry3D::CVisibleObjectPtr*)objPtr, *(EarthView::World::Spatial::Math::CMatrix4*)nwMatrix);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEffectLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CEffectLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback* pCallback )
			{
				CEffectLayerEditorProxy* ptr = dynamic_cast<CEffectLayerEditorProxy*>((EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_NoVirtual(void *pObjectXXXX, _inout void* objPtr, _in const void* nwMatrix )
			{
				EarthView::World::Spatial3D::CEffectLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CEffectLayerEditor::changeObjectPosition(*(EarthView::World::Geometry3D::CVisibleObjectPtr*)objPtr, *(EarthView::World::Spatial::Math::CMatrix4*)nwMatrix);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_deleteLayerObject_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 objId )
			{
				EarthView::World::Spatial3D::CEffectLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX;
				if (dynamic_cast<CEffectLayerEditorProxy*>((EarthView::World::Spatial3D::CEffectLayerEditor*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CEffectLayerEditor::deleteLayerObject(objId);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->deleteLayerObject(objId);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEffectLayerEditor_deleteLayerObject_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CEffectLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback* pCallback )
			{
				CEffectLayerEditorProxy* ptr = dynamic_cast<CEffectLayerEditorProxy*>((EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_deleteLayerObject_ev_bool_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_deleteLayerObject_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 objId )
			{
				EarthView::World::Spatial3D::CEffectLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CEffectLayerEditor::deleteLayerObject(objId);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_setSelectedObject_void_CEffectObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::EffectManager::CEffectObject* ref_obj )
			{
				EarthView::World::Spatial3D::CEffectLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX;
				ptrNativeObject->setSelectedObject(ref_obj);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::EffectManager::CEffectObject*  _stdcall EarthView_World_Spatial3D_CEffectLayerEditor_getSelectedObject_CEffectObject(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEffectLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX;
				EarthView::World::Spatial3D::EffectManager::CEffectObject* objXXXX = ptrNativeObject->getSelectedObject();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEffectLayerEditor_setEditingLayer_void_IGlobeLayer( void *pObjectXXXX, EarthView_World_Spatial3D_CEffectLayerEditor_setEditingLayer_void_IGlobeLayer_Callback* pCallback )
			{
				CEffectLayerEditorProxy* ptr = dynamic_cast<CEffectLayerEditorProxy*>((EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_setEditingLayer_void_IGlobeLayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEffectLayerEditor_getEditingLayer_IGlobeLayer( void *pObjectXXXX, EarthView_World_Spatial3D_CEffectLayerEditor_getEditingLayer_IGlobeLayer_Callback* pCallback )
			{
				CEffectLayerEditorProxy* ptr = dynamic_cast<CEffectLayerEditorProxy*>((EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_getEditingLayer_IGlobeLayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEffectLayerEditor_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CEffectLayerEditor_isEditing_ev_bool_Callback* pCallback )
			{
				CEffectLayerEditorProxy* ptr = dynamic_cast<CEffectLayerEditorProxy*>((EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEffectLayerEditor_redo_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CEffectLayerEditor_redo_ev_bool_Callback* pCallback )
			{
				CEffectLayerEditorProxy* ptr = dynamic_cast<CEffectLayerEditorProxy*>((EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_redo_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEffectLayerEditor_undo_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CEffectLayerEditor_undo_ev_bool_Callback* pCallback )
			{
				CEffectLayerEditorProxy* ptr = dynamic_cast<CEffectLayerEditorProxy*>((EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_undo_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEffectLayerEditor_canRedo_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CEffectLayerEditor_canRedo_ev_bool_Callback* pCallback )
			{
				CEffectLayerEditorProxy* ptr = dynamic_cast<CEffectLayerEditorProxy*>((EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_canRedo_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEffectLayerEditor_canUndo_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CEffectLayerEditor_canUndo_ev_bool_Callback* pCallback )
			{
				CEffectLayerEditorProxy* ptr = dynamic_cast<CEffectLayerEditorProxy*>((EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_canUndo_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEffectLayerEditor_addListener_void_CLayer3DEditorListener( void *pObjectXXXX, EarthView_World_Spatial3D_CEffectLayerEditor_addListener_void_CLayer3DEditorListener_Callback* pCallback )
			{
				CEffectLayerEditorProxy* ptr = dynamic_cast<CEffectLayerEditorProxy*>((EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_addListener_void_CLayer3DEditorListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEffectLayerEditor_removeListener_void_CLayer3DEditorListener( void *pObjectXXXX, EarthView_World_Spatial3D_CEffectLayerEditor_removeListener_void_CLayer3DEditorListener_Callback* pCallback )
			{
				CEffectLayerEditorProxy* ptr = dynamic_cast<CEffectLayerEditorProxy*>((EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_removeListener_void_CLayer3DEditorListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEffectLayerEditor_getListener_CLayer3DEditorListener_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CEffectLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback* pCallback )
			{
				CEffectLayerEditorProxy* ptr = dynamic_cast<CEffectLayerEditorProxy*>((EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_getListener_CLayer3DEditorListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEffectLayerEditor_getNumListener_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CEffectLayerEditor_getNumListener_ev_uint32_Callback* pCallback )
			{
				CEffectLayerEditorProxy* ptr = dynamic_cast<CEffectLayerEditorProxy*>((EarthView::World::Spatial3D::CEffectLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEffectLayerEditor_getNumListener_ev_uint32(pCallback);
				}
			}
		}
	}
}
