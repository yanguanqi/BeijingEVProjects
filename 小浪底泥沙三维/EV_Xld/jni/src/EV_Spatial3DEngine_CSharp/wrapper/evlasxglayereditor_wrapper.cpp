/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/evlasxglayereditor.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_Callback)(_in char*& meshxfile, _in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt, _in const void* localScale, _in const void* localOrientation, _inout void* propertyVal);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_addInstanceObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_Callback)(_in char*& meshxfile, _in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt, _in const void* localScale, _in const void* localOrientation, _inout void* propertyVal);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_in ev_uint32 id, _in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt, _in const void* localScale, _in const void* localOrientation);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_setEditingLayer_void_IGlobeLayer_Callback)(_in EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer);
			typedef EarthView::World::Spatial3D::Atlas::IGlobeLayer*  ( _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_getEditingLayer_IGlobeLayer_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_stopEditing_void_ev_bool_Callback)(_in ev_bool isSave);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_saveEditing_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_redo_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_undo_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_canRedo_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_canUndo_ev_bool_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback)(_in ev_uint32 id, _in const void* matrix);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback)(_inout void* objPtr, _in const void* nwMatrix);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback)(_in ev_uint32 id);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_addListener_void_CLayer3DEditorListener_Callback)(_in EarthView::World::Spatial3D::CLayer3DEditorListener* lis);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_removeListener_void_CLayer3DEditorListener_Callback)(_in EarthView::World::Spatial3D::CLayer3DEditorListener* lis);
			typedef EarthView::World::Spatial3D::CLayer3DEditorListener*  ( _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_getNumListener_ev_uint32_Callback)();
			class CEVLasxgLayerEditorProxy : public EarthView::World::Spatial3D::CEVLasxgLayerEditor
			{
			private:
				EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_Callback* m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_Callback;
				EarthView_World_Spatial3D_CEVLasxgLayerEditor_addInstanceObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_Callback* m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addInstanceObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_Callback;
				EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
				EarthView_World_Spatial3D_CEVLasxgLayerEditor_setEditingLayer_void_IGlobeLayer_Callback* m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_setEditingLayer_void_IGlobeLayer_Callback;
				EarthView_World_Spatial3D_CEVLasxgLayerEditor_getEditingLayer_IGlobeLayer_Callback* m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getEditingLayer_IGlobeLayer_Callback;
				EarthView_World_Spatial3D_CEVLasxgLayerEditor_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial3D_CEVLasxgLayerEditor_stopEditing_void_ev_bool_Callback* m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_stopEditing_void_ev_bool_Callback;
				EarthView_World_Spatial3D_CEVLasxgLayerEditor_saveEditing_void_Callback* m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_saveEditing_void_Callback;
				EarthView_World_Spatial3D_CEVLasxgLayerEditor_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_isEditing_ev_bool_Callback;
				EarthView_World_Spatial3D_CEVLasxgLayerEditor_redo_ev_bool_Callback* m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_redo_ev_bool_Callback;
				EarthView_World_Spatial3D_CEVLasxgLayerEditor_undo_ev_bool_Callback* m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_undo_ev_bool_Callback;
				EarthView_World_Spatial3D_CEVLasxgLayerEditor_canRedo_ev_bool_Callback* m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_canRedo_ev_bool_Callback;
				EarthView_World_Spatial3D_CEVLasxgLayerEditor_canUndo_ev_bool_Callback* m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_canUndo_ev_bool_Callback;
				EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback* m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback;
				EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback* m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback;
				EarthView_World_Spatial3D_CEVLasxgLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback;
				EarthView_World_Spatial3D_CEVLasxgLayerEditor_addListener_void_CLayer3DEditorListener_Callback* m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addListener_void_CLayer3DEditorListener_Callback;
				EarthView_World_Spatial3D_CEVLasxgLayerEditor_removeListener_void_CLayer3DEditorListener_Callback* m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_removeListener_void_CLayer3DEditorListener_Callback;
				EarthView_World_Spatial3D_CEVLasxgLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback* m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback;
				EarthView_World_Spatial3D_CEVLasxgLayerEditor_getNumListener_ev_uint32_Callback* m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getNumListener_ev_uint32_Callback;
			public:
				CEVLasxgLayerEditorProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVLasxgLayerEditor(pList)
				{
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_Callback = NULL;
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addInstanceObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_Callback = NULL;
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_setEditingLayer_void_IGlobeLayer_Callback = NULL;
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getEditingLayer_IGlobeLayer_Callback = NULL;
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_stopEditing_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_saveEditing_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_redo_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_undo_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_canRedo_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_canUndo_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addListener_void_CLayer3DEditorListener_Callback = NULL;
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_removeListener_void_CLayer3DEditorListener_Callback = NULL;
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getNumListener_ev_uint32_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addInstanceObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(EarthView_World_Spatial3D_CEVLasxgLayerEditor_addInstanceObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addInstanceObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_setEditingLayer_void_IGlobeLayer(EarthView_World_Spatial3D_CEVLasxgLayerEditor_setEditingLayer_void_IGlobeLayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_setEditingLayer_void_IGlobeLayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getEditingLayer_IGlobeLayer(EarthView_World_Spatial3D_CEVLasxgLayerEditor_getEditingLayer_IGlobeLayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getEditingLayer_IGlobeLayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_startEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_CEVLasxgLayerEditor_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_stopEditing_void_ev_bool(EarthView_World_Spatial3D_CEVLasxgLayerEditor_stopEditing_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_stopEditing_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_saveEditing_void(EarthView_World_Spatial3D_CEVLasxgLayerEditor_saveEditing_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_saveEditing_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_isEditing_ev_bool(EarthView_World_Spatial3D_CEVLasxgLayerEditor_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_redo_ev_bool(EarthView_World_Spatial3D_CEVLasxgLayerEditor_redo_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_redo_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_undo_ev_bool(EarthView_World_Spatial3D_CEVLasxgLayerEditor_undo_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_undo_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_canRedo_ev_bool(EarthView_World_Spatial3D_CEVLasxgLayerEditor_canRedo_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_canRedo_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_canUndo_ev_bool(EarthView_World_Spatial3D_CEVLasxgLayerEditor_canUndo_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_canUndo_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4(EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4(EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_deleteLayerObject_ev_bool_ev_uint32(EarthView_World_Spatial3D_CEVLasxgLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addListener_void_CLayer3DEditorListener(EarthView_World_Spatial3D_CEVLasxgLayerEditor_addListener_void_CLayer3DEditorListener_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addListener_void_CLayer3DEditorListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_removeListener_void_CLayer3DEditorListener(EarthView_World_Spatial3D_CEVLasxgLayerEditor_removeListener_void_CLayer3DEditorListener_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_removeListener_void_CLayer3DEditorListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getListener_CLayer3DEditorListener_ev_uint32(EarthView_World_Spatial3D_CEVLasxgLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getNumListener_ev_uint32(EarthView_World_Spatial3D_CEVLasxgLayerEditor_getNumListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getNumListener_ev_uint32_Callback = pCallback;
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CEVLasxgLayerEditor::startEditing(withUndo);
				}
				virtual void stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_stopEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_stopEditing_void_ev_bool_Callback(isSave);
					}
					else
						return this->CEVLasxgLayerEditor::stopEditing(isSave);
				}
				virtual void saveEditing()
				{
					if(m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_saveEditing_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_saveEditing_void_Callback();
					}
					else
						return this->CEVLasxgLayerEditor::saveEditing();
				}
				virtual ev_uint32 addLayerObject(_in const EVString& meshxfile, _in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt, _in const EarthView::World::Spatial::Math::CVector3& localScale, _in const EarthView::World::Spatial::Math::CQuaternion& localOrientation, _inout EarthView::World::Spatial::GeoDataset::CPropertySet& propertyVal)
				{
					if(m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_Callback != NULL && this->isCustomExtend())
					{
						char* meshxfile_Char = meshxfile.makeBuffer();
						ev_uint32 returnValue = m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_Callback(meshxfile_Char, lat, lon, alt, &localScale, &localOrientation, &propertyVal);
						return returnValue;
					}
					else
						return this->CEVLasxgLayerEditor::addLayerObject(meshxfile, lat, lon, alt, localScale, localOrientation, propertyVal);
				}
				virtual ev_uint32 addInstanceObject(_in const EVString& meshxfile, _in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt, _in const EarthView::World::Spatial::Math::CVector3& localScale, _in const EarthView::World::Spatial::Math::CQuaternion& localOrientation, _inout EarthView::World::Spatial::GeoDataset::CPropertySet& propertyVal)
				{
					if(m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addInstanceObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_Callback != NULL && this->isCustomExtend())
					{
						char* meshxfile_Char = meshxfile.makeBuffer();
						ev_uint32 returnValue = m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addInstanceObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_Callback(meshxfile_Char, lat, lon, alt, &localScale, &localOrientation, &propertyVal);
						return returnValue;
					}
					else
						return this->CEVLasxgLayerEditor::addInstanceObject(meshxfile, lat, lon, alt, localScale, localOrientation, propertyVal);
				}
				virtual ev_bool changeObjectPosition(_in ev_uint32 id, _in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt, _in const EarthView::World::Spatial::Math::CVector3& localScale, _in const EarthView::World::Spatial::Math::CQuaternion& localOrientation)
				{
					if(m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(id, lat, lon, alt, &localScale, &localOrientation);
						return returnValue;
					}
					else
						return this->CEVLasxgLayerEditor::changeObjectPosition(id, lat, lon, alt, localScale, localOrientation);
				}
				virtual ev_bool deleteLayerObject(_in ev_uint32 id)
				{
					if(m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback(id);
						return returnValue;
					}
					else
						return this->CEVLasxgLayerEditor::deleteLayerObject(id);
				}
				virtual void setEditingLayer(_in EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer)
				{
					if(m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_setEditingLayer_void_IGlobeLayer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_setEditingLayer_void_IGlobeLayer_Callback(ref_layer);
					}
					else
						return this->CEVLasxgLayerEditor::setEditingLayer(ref_layer);
				}
				virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getEditingLayer()
				{
					if(m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getEditingLayer_IGlobeLayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::Atlas::IGlobeLayer* returnValue = m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getEditingLayer_IGlobeLayer_Callback();
						return returnValue;
					}
					else
						return this->CEVLasxgLayerEditor::getEditingLayer();
				}
				virtual ev_bool isEditing()
				{
					if(m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVLasxgLayerEditor::isEditing();
				}
				virtual ev_bool redo()
				{
					if(m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_redo_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_redo_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVLasxgLayerEditor::redo();
				}
				virtual ev_bool undo()
				{
					if(m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_undo_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_undo_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVLasxgLayerEditor::undo();
				}
				virtual ev_bool canRedo()
				{
					if(m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_canRedo_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_canRedo_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVLasxgLayerEditor::canRedo();
				}
				virtual ev_bool canUndo()
				{
					if(m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_canUndo_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_canUndo_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVLasxgLayerEditor::canUndo();
				}
				virtual void addListener(_in EarthView::World::Spatial3D::CLayer3DEditorListener* lis)
				{
					if(m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addListener_void_CLayer3DEditorListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addListener_void_CLayer3DEditorListener_Callback(lis);
					}
					else
						return this->CEVLasxgLayerEditor::addListener(lis);
				}
				virtual void removeListener(_in EarthView::World::Spatial3D::CLayer3DEditorListener* lis)
				{
					if(m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_removeListener_void_CLayer3DEditorListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_removeListener_void_CLayer3DEditorListener_Callback(lis);
					}
					else
						return this->CEVLasxgLayerEditor::removeListener(lis);
				}
				virtual EarthView::World::Spatial3D::CLayer3DEditorListener* getListener(_in ev_uint32 index)
				{
					if(m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::CLayer3DEditorListener* returnValue = m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CEVLasxgLayerEditor::getListener(index);
				}
				virtual ev_uint32 getNumListener()
				{
					if(m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getNumListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getNumListener_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CEVLasxgLayerEditor::getNumListener();
				}
			};
			REGISTER_FACTORY_CLASS(CEVLasxgLayerEditorProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_startEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool withUndo )
			{
				EarthView::World::Spatial3D::CEVLasxgLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX;
				if (dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CEVLasxgLayerEditor::startEditing(withUndo);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->startEditing(withUndo);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CEVLasxgLayerEditor_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVLasxgLayerEditorProxy* ptr = dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_startEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool withUndo )
			{
				EarthView::World::Spatial3D::CEVLasxgLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CEVLasxgLayerEditor::startEditing(withUndo);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_stopEditing_void_ev_bool(void *pObjectXXXX, _in ev_bool isSave )
			{
				EarthView::World::Spatial3D::CEVLasxgLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX;
				if (dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CEVLasxgLayerEditor::stopEditing(isSave);
				else
					ptrNativeObject->stopEditing(isSave);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_stopEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CEVLasxgLayerEditor_stopEditing_void_ev_bool_Callback* pCallback )
			{
				CEVLasxgLayerEditorProxy* ptr = dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_stopEditing_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_stopEditing_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isSave )
			{
				EarthView::World::Spatial3D::CEVLasxgLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CEVLasxgLayerEditor::stopEditing(isSave);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_saveEditing_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEVLasxgLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX;
				if (dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CEVLasxgLayerEditor::saveEditing();
				else
					ptrNativeObject->saveEditing();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_saveEditing_void( void *pObjectXXXX, EarthView_World_Spatial3D_CEVLasxgLayerEditor_saveEditing_void_Callback* pCallback )
			{
				CEVLasxgLayerEditorProxy* ptr = dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_saveEditing_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_saveEditing_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEVLasxgLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CEVLasxgLayerEditor::saveEditing();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(void *pObjectXXXX, _in const char* meshxfile, _in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt, _in const void* localScale, _in const void* localOrientation, _inout void* propertyVal )
			{
				EarthView::World::Core::ev_string meshxfile1 = meshxfile;
				EarthView::World::Spatial3D::CEVLasxgLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX;
				if (dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CEVLasxgLayerEditor::addLayerObject(meshxfile1, lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)localScale, *(EarthView::World::Spatial::Math::CQuaternion*)localOrientation, *(EarthView::World::Spatial::GeoDataset::CPropertySet*)propertyVal);
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->addLayerObject(meshxfile1, lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)localScale, *(EarthView::World::Spatial::Math::CQuaternion*)localOrientation, *(EarthView::World::Spatial::GeoDataset::CPropertySet*)propertyVal);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet( void *pObjectXXXX, EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_Callback* pCallback )
			{
				CEVLasxgLayerEditorProxy* ptr = dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_NoVirtual(void *pObjectXXXX, _in const char* meshxfile, _in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt, _in const void* localScale, _in const void* localOrientation, _inout void* propertyVal )
			{
				EarthView::World::Core::ev_string meshxfile1 = meshxfile;
				EarthView::World::Spatial3D::CEVLasxgLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CEVLasxgLayerEditor::addLayerObject(meshxfile1, lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)localScale, *(EarthView::World::Spatial::Math::CQuaternion*)localOrientation, *(EarthView::World::Spatial::GeoDataset::CPropertySet*)propertyVal);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_addInstanceObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(void *pObjectXXXX, _in const char* meshxfile, _in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt, _in const void* localScale, _in const void* localOrientation, _inout void* propertyVal )
			{
				EarthView::World::Core::ev_string meshxfile1 = meshxfile;
				EarthView::World::Spatial3D::CEVLasxgLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX;
				if (dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CEVLasxgLayerEditor::addInstanceObject(meshxfile1, lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)localScale, *(EarthView::World::Spatial::Math::CQuaternion*)localOrientation, *(EarthView::World::Spatial::GeoDataset::CPropertySet*)propertyVal);
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->addInstanceObject(meshxfile1, lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)localScale, *(EarthView::World::Spatial::Math::CQuaternion*)localOrientation, *(EarthView::World::Spatial::GeoDataset::CPropertySet*)propertyVal);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addInstanceObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet( void *pObjectXXXX, EarthView_World_Spatial3D_CEVLasxgLayerEditor_addInstanceObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_Callback* pCallback )
			{
				CEVLasxgLayerEditorProxy* ptr = dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addInstanceObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_addInstanceObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_NoVirtual(void *pObjectXXXX, _in const char* meshxfile, _in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt, _in const void* localScale, _in const void* localOrientation, _inout void* propertyVal )
			{
				EarthView::World::Core::ev_string meshxfile1 = meshxfile;
				EarthView::World::Spatial3D::CEVLasxgLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CEVLasxgLayerEditor::addInstanceObject(meshxfile1, lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)localScale, *(EarthView::World::Spatial::Math::CQuaternion*)localOrientation, *(EarthView::World::Spatial::GeoDataset::CPropertySet*)propertyVal);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(void *pObjectXXXX, _in ev_uint32 id, _in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt, _in const void* localScale, _in const void* localOrientation )
			{
				EarthView::World::Spatial3D::CEVLasxgLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX;
				if (dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CEVLasxgLayerEditor::changeObjectPosition(id, lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)localScale, *(EarthView::World::Spatial::Math::CQuaternion*)localOrientation);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->changeObjectPosition(id, lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)localScale, *(EarthView::World::Spatial::Math::CQuaternion*)localOrientation);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
			{
				CEVLasxgLayerEditorProxy* ptr = dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(void *pObjectXXXX, _in ev_uint32 id, _in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt, _in const void* localScale, _in const void* localOrientation )
			{
				EarthView::World::Spatial3D::CEVLasxgLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CEVLasxgLayerEditor::changeObjectPosition(id, lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)localScale, *(EarthView::World::Spatial::Math::CQuaternion*)localOrientation);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_deleteLayerObject_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
			{
				EarthView::World::Spatial3D::CEVLasxgLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX;
				if (dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CEVLasxgLayerEditor::deleteLayerObject(id);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->deleteLayerObject(id);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_deleteLayerObject_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CEVLasxgLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback* pCallback )
			{
				CEVLasxgLayerEditorProxy* ptr = dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_deleteLayerObject_ev_bool_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CEVLasxgLayerEditor_deleteLayerObject_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
			{
				EarthView::World::Spatial3D::CEVLasxgLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CEVLasxgLayerEditor::deleteLayerObject(id);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_setEditingLayer_void_IGlobeLayer( void *pObjectXXXX, EarthView_World_Spatial3D_CEVLasxgLayerEditor_setEditingLayer_void_IGlobeLayer_Callback* pCallback )
			{
				CEVLasxgLayerEditorProxy* ptr = dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_setEditingLayer_void_IGlobeLayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getEditingLayer_IGlobeLayer( void *pObjectXXXX, EarthView_World_Spatial3D_CEVLasxgLayerEditor_getEditingLayer_IGlobeLayer_Callback* pCallback )
			{
				CEVLasxgLayerEditorProxy* ptr = dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getEditingLayer_IGlobeLayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CEVLasxgLayerEditor_isEditing_ev_bool_Callback* pCallback )
			{
				CEVLasxgLayerEditorProxy* ptr = dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_redo_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CEVLasxgLayerEditor_redo_ev_bool_Callback* pCallback )
			{
				CEVLasxgLayerEditorProxy* ptr = dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_redo_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_undo_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CEVLasxgLayerEditor_undo_ev_bool_Callback* pCallback )
			{
				CEVLasxgLayerEditorProxy* ptr = dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_undo_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_canRedo_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CEVLasxgLayerEditor_canRedo_ev_bool_Callback* pCallback )
			{
				CEVLasxgLayerEditorProxy* ptr = dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_canRedo_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_canUndo_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CEVLasxgLayerEditor_canUndo_ev_bool_Callback* pCallback )
			{
				CEVLasxgLayerEditorProxy* ptr = dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_canUndo_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CEVLasxgLayerEditorProxy* ptr = dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback* pCallback )
			{
				CEVLasxgLayerEditorProxy* ptr = dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addListener_void_CLayer3DEditorListener( void *pObjectXXXX, EarthView_World_Spatial3D_CEVLasxgLayerEditor_addListener_void_CLayer3DEditorListener_Callback* pCallback )
			{
				CEVLasxgLayerEditorProxy* ptr = dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_addListener_void_CLayer3DEditorListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_removeListener_void_CLayer3DEditorListener( void *pObjectXXXX, EarthView_World_Spatial3D_CEVLasxgLayerEditor_removeListener_void_CLayer3DEditorListener_Callback* pCallback )
			{
				CEVLasxgLayerEditorProxy* ptr = dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_removeListener_void_CLayer3DEditorListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getListener_CLayer3DEditorListener_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CEVLasxgLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback* pCallback )
			{
				CEVLasxgLayerEditorProxy* ptr = dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getListener_CLayer3DEditorListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getNumListener_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CEVLasxgLayerEditor_getNumListener_ev_uint32_Callback* pCallback )
			{
				CEVLasxgLayerEditorProxy* ptr = dynamic_cast<CEVLasxgLayerEditorProxy*>((EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CEVLasxgLayerEditor_getNumListener_ev_uint32(pCallback);
				}
			}
		}
	}
}
