/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modellayereditor.h"
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
		namespace Spatial3D
		{
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64_Callback)(_inout void* objPtr, _in const void* oldMatrix, _in ev_real64 oldDem);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CModelLayerEditor_setEditingLayer_void_IGlobeLayer_Callback)(_in EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer);
			typedef EarthView::World::Spatial3D::Atlas::IGlobeLayer*  ( _stdcall EarthView_World_Spatial3D_CModelLayerEditor_getEditingLayer_IGlobeLayer_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CModelLayerEditor_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CModelLayerEditor_stopEditing_void_ev_bool_Callback)(_in ev_bool isSave);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CModelLayerEditor_saveEditing_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CModelLayerEditor_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CModelLayerEditor_redo_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CModelLayerEditor_undo_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CModelLayerEditor_canRedo_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CModelLayerEditor_canUndo_ev_bool_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_CModelLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback)(_in ev_uint32 id, _in const void* matrix);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback)(_inout void* objPtr, _in const void* nwMatrix);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CModelLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback)(_in ev_uint32 id);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CModelLayerEditor_addListener_void_CLayer3DEditorListener_Callback)(_in EarthView::World::Spatial3D::CLayer3DEditorListener* lis);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CModelLayerEditor_removeListener_void_CLayer3DEditorListener_Callback)(_in EarthView::World::Spatial3D::CLayer3DEditorListener* lis);
			typedef EarthView::World::Spatial3D::CLayer3DEditorListener*  ( _stdcall EarthView_World_Spatial3D_CModelLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_CModelLayerEditor_getNumListener_ev_uint32_Callback)();
			class CModelLayerEditorProxy : public EarthView::World::Spatial3D::CModelLayerEditor
			{
			private:
				EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64_Callback* m_EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64_Callback;
				EarthView_World_Spatial3D_CModelLayerEditor_setEditingLayer_void_IGlobeLayer_Callback* m_EarthView_World_Spatial3D_CModelLayerEditor_setEditingLayer_void_IGlobeLayer_Callback;
				EarthView_World_Spatial3D_CModelLayerEditor_getEditingLayer_IGlobeLayer_Callback* m_EarthView_World_Spatial3D_CModelLayerEditor_getEditingLayer_IGlobeLayer_Callback;
				EarthView_World_Spatial3D_CModelLayerEditor_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_CModelLayerEditor_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial3D_CModelLayerEditor_stopEditing_void_ev_bool_Callback* m_EarthView_World_Spatial3D_CModelLayerEditor_stopEditing_void_ev_bool_Callback;
				EarthView_World_Spatial3D_CModelLayerEditor_saveEditing_void_Callback* m_EarthView_World_Spatial3D_CModelLayerEditor_saveEditing_void_Callback;
				EarthView_World_Spatial3D_CModelLayerEditor_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_CModelLayerEditor_isEditing_ev_bool_Callback;
				EarthView_World_Spatial3D_CModelLayerEditor_redo_ev_bool_Callback* m_EarthView_World_Spatial3D_CModelLayerEditor_redo_ev_bool_Callback;
				EarthView_World_Spatial3D_CModelLayerEditor_undo_ev_bool_Callback* m_EarthView_World_Spatial3D_CModelLayerEditor_undo_ev_bool_Callback;
				EarthView_World_Spatial3D_CModelLayerEditor_canRedo_ev_bool_Callback* m_EarthView_World_Spatial3D_CModelLayerEditor_canRedo_ev_bool_Callback;
				EarthView_World_Spatial3D_CModelLayerEditor_canUndo_ev_bool_Callback* m_EarthView_World_Spatial3D_CModelLayerEditor_canUndo_ev_bool_Callback;
				EarthView_World_Spatial3D_CModelLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback* m_EarthView_World_Spatial3D_CModelLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback;
				EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback* m_EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback;
				EarthView_World_Spatial3D_CModelLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_CModelLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback;
				EarthView_World_Spatial3D_CModelLayerEditor_addListener_void_CLayer3DEditorListener_Callback* m_EarthView_World_Spatial3D_CModelLayerEditor_addListener_void_CLayer3DEditorListener_Callback;
				EarthView_World_Spatial3D_CModelLayerEditor_removeListener_void_CLayer3DEditorListener_Callback* m_EarthView_World_Spatial3D_CModelLayerEditor_removeListener_void_CLayer3DEditorListener_Callback;
				EarthView_World_Spatial3D_CModelLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback* m_EarthView_World_Spatial3D_CModelLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback;
				EarthView_World_Spatial3D_CModelLayerEditor_getNumListener_ev_uint32_Callback* m_EarthView_World_Spatial3D_CModelLayerEditor_getNumListener_ev_uint32_Callback;
			public:
				CModelLayerEditorProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelLayerEditor(pList)
				{
					m_EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial3D_CModelLayerEditor_setEditingLayer_void_IGlobeLayer_Callback = NULL;
					m_EarthView_World_Spatial3D_CModelLayerEditor_getEditingLayer_IGlobeLayer_Callback = NULL;
					m_EarthView_World_Spatial3D_CModelLayerEditor_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CModelLayerEditor_stopEditing_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CModelLayerEditor_saveEditing_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CModelLayerEditor_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CModelLayerEditor_redo_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CModelLayerEditor_undo_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CModelLayerEditor_canRedo_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CModelLayerEditor_canUndo_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CModelLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CModelLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CModelLayerEditor_addListener_void_CLayer3DEditorListener_Callback = NULL;
					m_EarthView_World_Spatial3D_CModelLayerEditor_removeListener_void_CLayer3DEditorListener_Callback = NULL;
					m_EarthView_World_Spatial3D_CModelLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CModelLayerEditor_getNumListener_ev_uint32_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64(EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_setEditingLayer_void_IGlobeLayer(EarthView_World_Spatial3D_CModelLayerEditor_setEditingLayer_void_IGlobeLayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CModelLayerEditor_setEditingLayer_void_IGlobeLayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_getEditingLayer_IGlobeLayer(EarthView_World_Spatial3D_CModelLayerEditor_getEditingLayer_IGlobeLayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CModelLayerEditor_getEditingLayer_IGlobeLayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_startEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_CModelLayerEditor_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CModelLayerEditor_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_stopEditing_void_ev_bool(EarthView_World_Spatial3D_CModelLayerEditor_stopEditing_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CModelLayerEditor_stopEditing_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_saveEditing_void(EarthView_World_Spatial3D_CModelLayerEditor_saveEditing_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CModelLayerEditor_saveEditing_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_isEditing_ev_bool(EarthView_World_Spatial3D_CModelLayerEditor_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CModelLayerEditor_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_redo_ev_bool(EarthView_World_Spatial3D_CModelLayerEditor_redo_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CModelLayerEditor_redo_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_undo_ev_bool(EarthView_World_Spatial3D_CModelLayerEditor_undo_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CModelLayerEditor_undo_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_canRedo_ev_bool(EarthView_World_Spatial3D_CModelLayerEditor_canRedo_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CModelLayerEditor_canRedo_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_canUndo_ev_bool(EarthView_World_Spatial3D_CModelLayerEditor_canUndo_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CModelLayerEditor_canUndo_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4(EarthView_World_Spatial3D_CModelLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CModelLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4(EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_deleteLayerObject_ev_bool_ev_uint32(EarthView_World_Spatial3D_CModelLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CModelLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_addListener_void_CLayer3DEditorListener(EarthView_World_Spatial3D_CModelLayerEditor_addListener_void_CLayer3DEditorListener_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CModelLayerEditor_addListener_void_CLayer3DEditorListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_removeListener_void_CLayer3DEditorListener(EarthView_World_Spatial3D_CModelLayerEditor_removeListener_void_CLayer3DEditorListener_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CModelLayerEditor_removeListener_void_CLayer3DEditorListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_getListener_CLayer3DEditorListener_ev_uint32(EarthView_World_Spatial3D_CModelLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CModelLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_getNumListener_ev_uint32(EarthView_World_Spatial3D_CModelLayerEditor_getNumListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CModelLayerEditor_getNumListener_ev_uint32_Callback = pCallback;
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial3D_CModelLayerEditor_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CModelLayerEditor_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CModelLayerEditor::startEditing(withUndo);
				}
				virtual void stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial3D_CModelLayerEditor_stopEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CModelLayerEditor_stopEditing_void_ev_bool_Callback(isSave);
					}
					else
						return this->CModelLayerEditor::stopEditing(isSave);
				}
				virtual void saveEditing()
				{
					if(m_EarthView_World_Spatial3D_CModelLayerEditor_saveEditing_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CModelLayerEditor_saveEditing_void_Callback();
					}
					else
						return this->CModelLayerEditor::saveEditing();
				}
				virtual ev_uint32 addLayerObject(_in ev_uint32 id, _in const EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Spatial3D_CModelLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial3D_CModelLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback(id, &matrix);
						return returnValue;
					}
					else
						return this->CModelLayerEditor::addLayerObject(id, matrix);
				}
				virtual ev_bool changeObjectPosition(_inout EarthView::World::Geometry3D::CVisibleObjectPtr& objPtr, _in const EarthView::World::Spatial::Math::CMatrix4& oldMatrix, _in ev_real64 oldDem)
				{
					if(m_EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64_Callback(&objPtr, &oldMatrix, oldDem);
						return returnValue;
					}
					else
						return this->CModelLayerEditor::changeObjectPosition(objPtr, oldMatrix, oldDem);
				}
				virtual ev_bool deleteLayerObject(_in ev_uint32 id)
				{
					if(m_EarthView_World_Spatial3D_CModelLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CModelLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback(id);
						return returnValue;
					}
					else
						return this->CModelLayerEditor::deleteLayerObject(id);
				}
				virtual void setEditingLayer(_in EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer)
				{
					if(m_EarthView_World_Spatial3D_CModelLayerEditor_setEditingLayer_void_IGlobeLayer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CModelLayerEditor_setEditingLayer_void_IGlobeLayer_Callback(ref_layer);
					}
					else
						return this->CModelLayerEditor::setEditingLayer(ref_layer);
				}
				virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getEditingLayer()
				{
					if(m_EarthView_World_Spatial3D_CModelLayerEditor_getEditingLayer_IGlobeLayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::Atlas::IGlobeLayer* returnValue = m_EarthView_World_Spatial3D_CModelLayerEditor_getEditingLayer_IGlobeLayer_Callback();
						return returnValue;
					}
					else
						return this->CModelLayerEditor::getEditingLayer();
				}
				virtual ev_bool isEditing()
				{
					if(m_EarthView_World_Spatial3D_CModelLayerEditor_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CModelLayerEditor_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CModelLayerEditor::isEditing();
				}
				virtual ev_bool redo()
				{
					if(m_EarthView_World_Spatial3D_CModelLayerEditor_redo_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CModelLayerEditor_redo_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CModelLayerEditor::redo();
				}
				virtual ev_bool undo()
				{
					if(m_EarthView_World_Spatial3D_CModelLayerEditor_undo_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CModelLayerEditor_undo_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CModelLayerEditor::undo();
				}
				virtual ev_bool canRedo()
				{
					if(m_EarthView_World_Spatial3D_CModelLayerEditor_canRedo_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CModelLayerEditor_canRedo_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CModelLayerEditor::canRedo();
				}
				virtual ev_bool canUndo()
				{
					if(m_EarthView_World_Spatial3D_CModelLayerEditor_canUndo_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CModelLayerEditor_canUndo_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CModelLayerEditor::canUndo();
				}
				virtual void addListener(_in EarthView::World::Spatial3D::CLayer3DEditorListener* lis)
				{
					if(m_EarthView_World_Spatial3D_CModelLayerEditor_addListener_void_CLayer3DEditorListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CModelLayerEditor_addListener_void_CLayer3DEditorListener_Callback(lis);
					}
					else
						return this->CModelLayerEditor::addListener(lis);
				}
				virtual void removeListener(_in EarthView::World::Spatial3D::CLayer3DEditorListener* lis)
				{
					if(m_EarthView_World_Spatial3D_CModelLayerEditor_removeListener_void_CLayer3DEditorListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CModelLayerEditor_removeListener_void_CLayer3DEditorListener_Callback(lis);
					}
					else
						return this->CModelLayerEditor::removeListener(lis);
				}
				virtual EarthView::World::Spatial3D::CLayer3DEditorListener* getListener(_in ev_uint32 index)
				{
					if(m_EarthView_World_Spatial3D_CModelLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::CLayer3DEditorListener* returnValue = m_EarthView_World_Spatial3D_CModelLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CModelLayerEditor::getListener(index);
				}
				virtual ev_uint32 getNumListener()
				{
					if(m_EarthView_World_Spatial3D_CModelLayerEditor_getNumListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial3D_CModelLayerEditor_getNumListener_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CModelLayerEditor::getNumListener();
				}
			};
			REGISTER_FACTORY_CLASS(CModelLayerEditorProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CModelLayerEditor_startEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool withUndo )
			{
				EarthView::World::Spatial3D::CModelLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX;
				if (dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CModelLayerEditor::startEditing(withUndo);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->startEditing(withUndo);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CModelLayerEditor_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CModelLayerEditorProxy* ptr = dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CModelLayerEditor_startEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool withUndo )
			{
				EarthView::World::Spatial3D::CModelLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CModelLayerEditor::startEditing(withUndo);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CModelLayerEditor_stopEditing_void_ev_bool(void *pObjectXXXX, _in ev_bool isSave )
			{
				EarthView::World::Spatial3D::CModelLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX;
				if (dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CModelLayerEditor::stopEditing(isSave);
				else
					ptrNativeObject->stopEditing(isSave);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_stopEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CModelLayerEditor_stopEditing_void_ev_bool_Callback* pCallback )
			{
				CModelLayerEditorProxy* ptr = dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_stopEditing_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CModelLayerEditor_stopEditing_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isSave )
			{
				EarthView::World::Spatial3D::CModelLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CModelLayerEditor::stopEditing(isSave);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CModelLayerEditor_saveEditing_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CModelLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX;
				if (dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CModelLayerEditor::saveEditing();
				else
					ptrNativeObject->saveEditing();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_saveEditing_void( void *pObjectXXXX, EarthView_World_Spatial3D_CModelLayerEditor_saveEditing_void_Callback* pCallback )
			{
				CModelLayerEditorProxy* ptr = dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_saveEditing_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CModelLayerEditor_saveEditing_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CModelLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CModelLayerEditor::saveEditing();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CModelLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4(void *pObjectXXXX, _in ev_uint32 id, _in const void* matrix )
			{
				EarthView::World::Spatial3D::CModelLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX;
				if (dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CModelLayerEditor::addLayerObject(id, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->addLayerObject(id, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CModelLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CModelLayerEditorProxy* ptr = dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CModelLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_NoVirtual(void *pObjectXXXX, _in ev_uint32 id, _in const void* matrix )
			{
				EarthView::World::Spatial3D::CModelLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CModelLayerEditor::addLayerObject(id, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64(void *pObjectXXXX, _inout void* objPtr, _in const void* oldMatrix, _in ev_real64 oldDem )
			{
				EarthView::World::Spatial3D::CModelLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX;
				if (dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CModelLayerEditor::changeObjectPosition(*(EarthView::World::Geometry3D::CVisibleObjectPtr*)objPtr, *(EarthView::World::Spatial::Math::CMatrix4*)oldMatrix, oldDem);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->changeObjectPosition(*(EarthView::World::Geometry3D::CVisibleObjectPtr*)objPtr, *(EarthView::World::Spatial::Math::CMatrix4*)oldMatrix, oldDem);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64_Callback* pCallback )
			{
				CModelLayerEditorProxy* ptr = dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64_NoVirtual(void *pObjectXXXX, _inout void* objPtr, _in const void* oldMatrix, _in ev_real64 oldDem )
			{
				EarthView::World::Spatial3D::CModelLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CModelLayerEditor::changeObjectPosition(*(EarthView::World::Geometry3D::CVisibleObjectPtr*)objPtr, *(EarthView::World::Spatial::Math::CMatrix4*)oldMatrix, oldDem);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CModelLayerEditor_changeObjectAttribute_ev_bool_IFeature_IFeature(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _in EarthView::World::Spatial::GeoDataset::IFeature* pOldMeshFeature )
			{
				EarthView::World::Spatial3D::CModelLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->changeObjectAttribute(pMeshFeature, pOldMeshFeature);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CModelLayerEditor_deleteLayerObject_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
			{
				EarthView::World::Spatial3D::CModelLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX;
				if (dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CModelLayerEditor::deleteLayerObject(id);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->deleteLayerObject(id);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_deleteLayerObject_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CModelLayerEditor_deleteLayerObject_ev_bool_ev_uint32_Callback* pCallback )
			{
				CModelLayerEditorProxy* ptr = dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_deleteLayerObject_ev_bool_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CModelLayerEditor_deleteLayerObject_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
			{
				EarthView::World::Spatial3D::CModelLayerEditor* ptrNativeObject = (EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CModelLayerEditor::deleteLayerObject(id);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_setEditingLayer_void_IGlobeLayer( void *pObjectXXXX, EarthView_World_Spatial3D_CModelLayerEditor_setEditingLayer_void_IGlobeLayer_Callback* pCallback )
			{
				CModelLayerEditorProxy* ptr = dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_setEditingLayer_void_IGlobeLayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_getEditingLayer_IGlobeLayer( void *pObjectXXXX, EarthView_World_Spatial3D_CModelLayerEditor_getEditingLayer_IGlobeLayer_Callback* pCallback )
			{
				CModelLayerEditorProxy* ptr = dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_getEditingLayer_IGlobeLayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CModelLayerEditor_isEditing_ev_bool_Callback* pCallback )
			{
				CModelLayerEditorProxy* ptr = dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_redo_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CModelLayerEditor_redo_ev_bool_Callback* pCallback )
			{
				CModelLayerEditorProxy* ptr = dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_redo_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_undo_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CModelLayerEditor_undo_ev_bool_Callback* pCallback )
			{
				CModelLayerEditorProxy* ptr = dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_undo_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_canRedo_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CModelLayerEditor_canRedo_ev_bool_Callback* pCallback )
			{
				CModelLayerEditorProxy* ptr = dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_canRedo_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_canUndo_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CModelLayerEditor_canUndo_ev_bool_Callback* pCallback )
			{
				CModelLayerEditorProxy* ptr = dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_canUndo_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback* pCallback )
			{
				CModelLayerEditorProxy* ptr = dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_addListener_void_CLayer3DEditorListener( void *pObjectXXXX, EarthView_World_Spatial3D_CModelLayerEditor_addListener_void_CLayer3DEditorListener_Callback* pCallback )
			{
				CModelLayerEditorProxy* ptr = dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_addListener_void_CLayer3DEditorListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_removeListener_void_CLayer3DEditorListener( void *pObjectXXXX, EarthView_World_Spatial3D_CModelLayerEditor_removeListener_void_CLayer3DEditorListener_Callback* pCallback )
			{
				CModelLayerEditorProxy* ptr = dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_removeListener_void_CLayer3DEditorListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_getListener_CLayer3DEditorListener_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CModelLayerEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback* pCallback )
			{
				CModelLayerEditorProxy* ptr = dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_getListener_CLayer3DEditorListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_getNumListener_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CModelLayerEditor_getNumListener_ev_uint32_Callback* pCallback )
			{
				CModelLayerEditorProxy* ptr = dynamic_cast<CModelLayerEditorProxy*>((EarthView::World::Spatial3D::CModelLayerEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CModelLayerEditor_getNumListener_ev_uint32(pCallback);
				}
			}
		}
	}
}
