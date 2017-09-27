/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/layer3deditor.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
		}
		namespace Geometry3D
		{
		}
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
			typedef void  ( _stdcall EarthView_World_Spatial3D_CLayer3DEditor_setEditingLayer_void_IGlobeLayer_Callback)(_in EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer);
			typedef EarthView::World::Spatial3D::Atlas::IGlobeLayer*  ( _stdcall EarthView_World_Spatial3D_CLayer3DEditor_getEditingLayer_IGlobeLayer_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLayer3DEditor_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CLayer3DEditor_stopEditing_void_ev_bool_Callback)(_in ev_bool isSave);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CLayer3DEditor_saveEditing_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLayer3DEditor_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLayer3DEditor_redo_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLayer3DEditor_undo_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLayer3DEditor_canRedo_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLayer3DEditor_canUndo_ev_bool_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_CLayer3DEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback)(_in ev_uint32 id, _in const void* matrix);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLayer3DEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback)(_inout void* objPtr, _in const void* nwMatrix);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLayer3DEditor_deleteLayerObject_ev_bool_ev_uint32_Callback)(_in ev_uint32 id);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CLayer3DEditor_addListener_void_CLayer3DEditorListener_Callback)(_in EarthView::World::Spatial3D::CLayer3DEditorListener* lis);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CLayer3DEditor_removeListener_void_CLayer3DEditorListener_Callback)(_in EarthView::World::Spatial3D::CLayer3DEditorListener* lis);
			typedef EarthView::World::Spatial3D::CLayer3DEditorListener*  ( _stdcall EarthView_World_Spatial3D_CLayer3DEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_CLayer3DEditor_getNumListener_ev_uint32_Callback)();
			class CLayer3DEditorProxy : public EarthView::World::Spatial3D::CLayer3DEditor
			{
			private:
				EarthView_World_Spatial3D_CLayer3DEditor_setEditingLayer_void_IGlobeLayer_Callback* m_EarthView_World_Spatial3D_CLayer3DEditor_setEditingLayer_void_IGlobeLayer_Callback;
				EarthView_World_Spatial3D_CLayer3DEditor_getEditingLayer_IGlobeLayer_Callback* m_EarthView_World_Spatial3D_CLayer3DEditor_getEditingLayer_IGlobeLayer_Callback;
				EarthView_World_Spatial3D_CLayer3DEditor_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_CLayer3DEditor_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial3D_CLayer3DEditor_stopEditing_void_ev_bool_Callback* m_EarthView_World_Spatial3D_CLayer3DEditor_stopEditing_void_ev_bool_Callback;
				EarthView_World_Spatial3D_CLayer3DEditor_saveEditing_void_Callback* m_EarthView_World_Spatial3D_CLayer3DEditor_saveEditing_void_Callback;
				EarthView_World_Spatial3D_CLayer3DEditor_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_CLayer3DEditor_isEditing_ev_bool_Callback;
				EarthView_World_Spatial3D_CLayer3DEditor_redo_ev_bool_Callback* m_EarthView_World_Spatial3D_CLayer3DEditor_redo_ev_bool_Callback;
				EarthView_World_Spatial3D_CLayer3DEditor_undo_ev_bool_Callback* m_EarthView_World_Spatial3D_CLayer3DEditor_undo_ev_bool_Callback;
				EarthView_World_Spatial3D_CLayer3DEditor_canRedo_ev_bool_Callback* m_EarthView_World_Spatial3D_CLayer3DEditor_canRedo_ev_bool_Callback;
				EarthView_World_Spatial3D_CLayer3DEditor_canUndo_ev_bool_Callback* m_EarthView_World_Spatial3D_CLayer3DEditor_canUndo_ev_bool_Callback;
				EarthView_World_Spatial3D_CLayer3DEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback* m_EarthView_World_Spatial3D_CLayer3DEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback;
				EarthView_World_Spatial3D_CLayer3DEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback* m_EarthView_World_Spatial3D_CLayer3DEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback;
				EarthView_World_Spatial3D_CLayer3DEditor_deleteLayerObject_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_CLayer3DEditor_deleteLayerObject_ev_bool_ev_uint32_Callback;
				EarthView_World_Spatial3D_CLayer3DEditor_addListener_void_CLayer3DEditorListener_Callback* m_EarthView_World_Spatial3D_CLayer3DEditor_addListener_void_CLayer3DEditorListener_Callback;
				EarthView_World_Spatial3D_CLayer3DEditor_removeListener_void_CLayer3DEditorListener_Callback* m_EarthView_World_Spatial3D_CLayer3DEditor_removeListener_void_CLayer3DEditorListener_Callback;
				EarthView_World_Spatial3D_CLayer3DEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback* m_EarthView_World_Spatial3D_CLayer3DEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback;
				EarthView_World_Spatial3D_CLayer3DEditor_getNumListener_ev_uint32_Callback* m_EarthView_World_Spatial3D_CLayer3DEditor_getNumListener_ev_uint32_Callback;
			public:
				CLayer3DEditorProxy(EarthView::World::Core::CNameValuePairList *pList) : CLayer3DEditor(pList)
				{
					m_EarthView_World_Spatial3D_CLayer3DEditor_setEditingLayer_void_IGlobeLayer_Callback = NULL;
					m_EarthView_World_Spatial3D_CLayer3DEditor_getEditingLayer_IGlobeLayer_Callback = NULL;
					m_EarthView_World_Spatial3D_CLayer3DEditor_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CLayer3DEditor_stopEditing_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CLayer3DEditor_saveEditing_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CLayer3DEditor_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CLayer3DEditor_redo_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CLayer3DEditor_undo_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CLayer3DEditor_canRedo_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CLayer3DEditor_canUndo_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CLayer3DEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CLayer3DEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CLayer3DEditor_deleteLayerObject_ev_bool_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CLayer3DEditor_addListener_void_CLayer3DEditorListener_Callback = NULL;
					m_EarthView_World_Spatial3D_CLayer3DEditor_removeListener_void_CLayer3DEditorListener_Callback = NULL;
					m_EarthView_World_Spatial3D_CLayer3DEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CLayer3DEditor_getNumListener_ev_uint32_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_setEditingLayer_void_IGlobeLayer(EarthView_World_Spatial3D_CLayer3DEditor_setEditingLayer_void_IGlobeLayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLayer3DEditor_setEditingLayer_void_IGlobeLayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_getEditingLayer_IGlobeLayer(EarthView_World_Spatial3D_CLayer3DEditor_getEditingLayer_IGlobeLayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLayer3DEditor_getEditingLayer_IGlobeLayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_startEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_CLayer3DEditor_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLayer3DEditor_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_stopEditing_void_ev_bool(EarthView_World_Spatial3D_CLayer3DEditor_stopEditing_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLayer3DEditor_stopEditing_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_saveEditing_void(EarthView_World_Spatial3D_CLayer3DEditor_saveEditing_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLayer3DEditor_saveEditing_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_isEditing_ev_bool(EarthView_World_Spatial3D_CLayer3DEditor_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLayer3DEditor_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_redo_ev_bool(EarthView_World_Spatial3D_CLayer3DEditor_redo_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLayer3DEditor_redo_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_undo_ev_bool(EarthView_World_Spatial3D_CLayer3DEditor_undo_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLayer3DEditor_undo_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_canRedo_ev_bool(EarthView_World_Spatial3D_CLayer3DEditor_canRedo_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLayer3DEditor_canRedo_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_canUndo_ev_bool(EarthView_World_Spatial3D_CLayer3DEditor_canUndo_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLayer3DEditor_canUndo_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4(EarthView_World_Spatial3D_CLayer3DEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLayer3DEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4(EarthView_World_Spatial3D_CLayer3DEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLayer3DEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_deleteLayerObject_ev_bool_ev_uint32(EarthView_World_Spatial3D_CLayer3DEditor_deleteLayerObject_ev_bool_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLayer3DEditor_deleteLayerObject_ev_bool_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_addListener_void_CLayer3DEditorListener(EarthView_World_Spatial3D_CLayer3DEditor_addListener_void_CLayer3DEditorListener_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLayer3DEditor_addListener_void_CLayer3DEditorListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_removeListener_void_CLayer3DEditorListener(EarthView_World_Spatial3D_CLayer3DEditor_removeListener_void_CLayer3DEditorListener_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLayer3DEditor_removeListener_void_CLayer3DEditorListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_getListener_CLayer3DEditorListener_ev_uint32(EarthView_World_Spatial3D_CLayer3DEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLayer3DEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_getNumListener_ev_uint32(EarthView_World_Spatial3D_CLayer3DEditor_getNumListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLayer3DEditor_getNumListener_ev_uint32_Callback = pCallback;
				}
				virtual void setEditingLayer(_in EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer)
				{
					if(m_EarthView_World_Spatial3D_CLayer3DEditor_setEditingLayer_void_IGlobeLayer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CLayer3DEditor_setEditingLayer_void_IGlobeLayer_Callback(ref_layer);
					}
					else
						return this->CLayer3DEditor::setEditingLayer(ref_layer);
				}
				virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getEditingLayer()
				{
					if(m_EarthView_World_Spatial3D_CLayer3DEditor_getEditingLayer_IGlobeLayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::Atlas::IGlobeLayer* returnValue = m_EarthView_World_Spatial3D_CLayer3DEditor_getEditingLayer_IGlobeLayer_Callback();
						return returnValue;
					}
					else
						return this->CLayer3DEditor::getEditingLayer();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial3D_CLayer3DEditor_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLayer3DEditor_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CLayer3DEditor::startEditing(withUndo);
				}
				virtual void stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial3D_CLayer3DEditor_stopEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CLayer3DEditor_stopEditing_void_ev_bool_Callback(isSave);
					}
					else
						return this->CLayer3DEditor::stopEditing(isSave);
				}
				virtual void saveEditing()
				{
					if(m_EarthView_World_Spatial3D_CLayer3DEditor_saveEditing_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CLayer3DEditor_saveEditing_void_Callback();
					}
					else
						return this->CLayer3DEditor::saveEditing();
				}
				virtual ev_bool isEditing()
				{
					if(m_EarthView_World_Spatial3D_CLayer3DEditor_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLayer3DEditor_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CLayer3DEditor::isEditing();
				}
				virtual ev_bool redo()
				{
					if(m_EarthView_World_Spatial3D_CLayer3DEditor_redo_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLayer3DEditor_redo_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CLayer3DEditor::redo();
				}
				virtual ev_bool undo()
				{
					if(m_EarthView_World_Spatial3D_CLayer3DEditor_undo_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLayer3DEditor_undo_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CLayer3DEditor::undo();
				}
				virtual ev_bool canRedo()
				{
					if(m_EarthView_World_Spatial3D_CLayer3DEditor_canRedo_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLayer3DEditor_canRedo_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CLayer3DEditor::canRedo();
				}
				virtual ev_bool canUndo()
				{
					if(m_EarthView_World_Spatial3D_CLayer3DEditor_canUndo_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLayer3DEditor_canUndo_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CLayer3DEditor::canUndo();
				}
				virtual ev_uint32 addLayerObject(_in ev_uint32 id, _in const EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Spatial3D_CLayer3DEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial3D_CLayer3DEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback(id, &matrix);
						return returnValue;
					}
					else
						return this->CLayer3DEditor::addLayerObject(id, matrix);
				}
				virtual ev_bool changeObjectPosition(_inout EarthView::World::Geometry3D::CVisibleObjectPtr& objPtr, _in const EarthView::World::Spatial::Math::CMatrix4& nwMatrix)
				{
					if(m_EarthView_World_Spatial3D_CLayer3DEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLayer3DEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback(&objPtr, &nwMatrix);
						return returnValue;
					}
					else
						return this->CLayer3DEditor::changeObjectPosition(objPtr, nwMatrix);
				}
				virtual ev_bool deleteLayerObject(_in ev_uint32 id)
				{
					if(m_EarthView_World_Spatial3D_CLayer3DEditor_deleteLayerObject_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLayer3DEditor_deleteLayerObject_ev_bool_ev_uint32_Callback(id);
						return returnValue;
					}
					else
						return this->CLayer3DEditor::deleteLayerObject(id);
				}
				virtual void addListener(_in EarthView::World::Spatial3D::CLayer3DEditorListener* lis)
				{
					if(m_EarthView_World_Spatial3D_CLayer3DEditor_addListener_void_CLayer3DEditorListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CLayer3DEditor_addListener_void_CLayer3DEditorListener_Callback(lis);
					}
					else
						return this->CLayer3DEditor::addListener(lis);
				}
				virtual void removeListener(_in EarthView::World::Spatial3D::CLayer3DEditorListener* lis)
				{
					if(m_EarthView_World_Spatial3D_CLayer3DEditor_removeListener_void_CLayer3DEditorListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CLayer3DEditor_removeListener_void_CLayer3DEditorListener_Callback(lis);
					}
					else
						return this->CLayer3DEditor::removeListener(lis);
				}
				virtual EarthView::World::Spatial3D::CLayer3DEditorListener* getListener(_in ev_uint32 index)
				{
					if(m_EarthView_World_Spatial3D_CLayer3DEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::CLayer3DEditorListener* returnValue = m_EarthView_World_Spatial3D_CLayer3DEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CLayer3DEditor::getListener(index);
				}
				virtual ev_uint32 getNumListener()
				{
					if(m_EarthView_World_Spatial3D_CLayer3DEditor_getNumListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial3D_CLayer3DEditor_getNumListener_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CLayer3DEditor::getNumListener();
				}
			};
			REGISTER_FACTORY_CLASS(CLayer3DEditorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_setEditingLayer_void_IGlobeLayer(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				if (dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::setEditingLayer(ref_layer);
				else
					ptrNativeObject->setEditingLayer(ref_layer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditor_setEditingLayer_void_IGlobeLayer( void *pObjectXXXX, EarthView_World_Spatial3D_CLayer3DEditor_setEditingLayer_void_IGlobeLayer_Callback* pCallback )
			{
				CLayer3DEditorProxy* ptr = dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_setEditingLayer_void_IGlobeLayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_setEditingLayer_void_IGlobeLayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::setEditingLayer(ref_layer);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::IGlobeLayer*  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_getEditingLayer_IGlobeLayer(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				if (dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial3D::Atlas::IGlobeLayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::getEditingLayer();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial3D::Atlas::IGlobeLayer* objXXXX = ptrNativeObject->getEditingLayer();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditor_getEditingLayer_IGlobeLayer( void *pObjectXXXX, EarthView_World_Spatial3D_CLayer3DEditor_getEditingLayer_IGlobeLayer_Callback* pCallback )
			{
				CLayer3DEditorProxy* ptr = dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_getEditingLayer_IGlobeLayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::IGlobeLayer*  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_getEditingLayer_IGlobeLayer_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				EarthView::World::Spatial3D::Atlas::IGlobeLayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::getEditingLayer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_startEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool withUndo )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				if (dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::startEditing(withUndo);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->startEditing(withUndo);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditor_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLayer3DEditor_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CLayer3DEditorProxy* ptr = dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_startEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool withUndo )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::startEditing(withUndo);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_stopEditing_void_ev_bool(void *pObjectXXXX, _in ev_bool isSave )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				if (dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::stopEditing(isSave);
				else
					ptrNativeObject->stopEditing(isSave);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditor_stopEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLayer3DEditor_stopEditing_void_ev_bool_Callback* pCallback )
			{
				CLayer3DEditorProxy* ptr = dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_stopEditing_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_stopEditing_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isSave )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::stopEditing(isSave);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_saveEditing_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				if (dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::saveEditing();
				else
					ptrNativeObject->saveEditing();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditor_saveEditing_void( void *pObjectXXXX, EarthView_World_Spatial3D_CLayer3DEditor_saveEditing_void_Callback* pCallback )
			{
				CLayer3DEditorProxy* ptr = dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_saveEditing_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_saveEditing_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::saveEditing();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_isEditing_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				if (dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::isEditing();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isEditing();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditor_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLayer3DEditor_isEditing_ev_bool_Callback* pCallback )
			{
				CLayer3DEditorProxy* ptr = dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::isEditing();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_redo_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				if (dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::redo();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->redo();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditor_redo_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLayer3DEditor_redo_ev_bool_Callback* pCallback )
			{
				CLayer3DEditorProxy* ptr = dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_redo_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_redo_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::redo();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_undo_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				if (dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::undo();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->undo();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditor_undo_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLayer3DEditor_undo_ev_bool_Callback* pCallback )
			{
				CLayer3DEditorProxy* ptr = dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_undo_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_undo_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::undo();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_canRedo_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				if (dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::canRedo();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->canRedo();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditor_canRedo_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLayer3DEditor_canRedo_ev_bool_Callback* pCallback )
			{
				CLayer3DEditorProxy* ptr = dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_canRedo_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_canRedo_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::canRedo();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_canUndo_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				if (dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::canUndo();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->canUndo();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditor_canUndo_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLayer3DEditor_canUndo_ev_bool_Callback* pCallback )
			{
				CLayer3DEditorProxy* ptr = dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_canUndo_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_canUndo_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::canUndo();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4(void *pObjectXXXX, _in ev_uint32 id, _in const void* matrix )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				if (dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::addLayerObject(id, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->addLayerObject(id, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CLayer3DEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CLayer3DEditorProxy* ptr = dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_NoVirtual(void *pObjectXXXX, _in ev_uint32 id, _in const void* matrix )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::addLayerObject(id, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4(void *pObjectXXXX, _inout void* objPtr, _in const void* nwMatrix )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				if (dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::changeObjectPosition(*(EarthView::World::Geometry3D::CVisibleObjectPtr*)objPtr, *(EarthView::World::Spatial::Math::CMatrix4*)nwMatrix);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->changeObjectPosition(*(EarthView::World::Geometry3D::CVisibleObjectPtr*)objPtr, *(EarthView::World::Spatial::Math::CMatrix4*)nwMatrix);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CLayer3DEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Callback* pCallback )
			{
				CLayer3DEditorProxy* ptr = dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_NoVirtual(void *pObjectXXXX, _inout void* objPtr, _in const void* nwMatrix )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::changeObjectPosition(*(EarthView::World::Geometry3D::CVisibleObjectPtr*)objPtr, *(EarthView::World::Spatial::Math::CMatrix4*)nwMatrix);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_deleteLayerObject_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				if (dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::deleteLayerObject(id);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->deleteLayerObject(id);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditor_deleteLayerObject_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CLayer3DEditor_deleteLayerObject_ev_bool_ev_uint32_Callback* pCallback )
			{
				CLayer3DEditorProxy* ptr = dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_deleteLayerObject_ev_bool_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_deleteLayerObject_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::deleteLayerObject(id);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_addListener_void_CLayer3DEditorListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::CLayer3DEditorListener* lis )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				if (dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::addListener(lis);
				else
					ptrNativeObject->addListener(lis);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditor_addListener_void_CLayer3DEditorListener( void *pObjectXXXX, EarthView_World_Spatial3D_CLayer3DEditor_addListener_void_CLayer3DEditorListener_Callback* pCallback )
			{
				CLayer3DEditorProxy* ptr = dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_addListener_void_CLayer3DEditorListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_addListener_void_CLayer3DEditorListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::CLayer3DEditorListener* lis )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::addListener(lis);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_removeListener_void_CLayer3DEditorListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::CLayer3DEditorListener* lis )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				if (dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::removeListener(lis);
				else
					ptrNativeObject->removeListener(lis);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditor_removeListener_void_CLayer3DEditorListener( void *pObjectXXXX, EarthView_World_Spatial3D_CLayer3DEditor_removeListener_void_CLayer3DEditorListener_Callback* pCallback )
			{
				CLayer3DEditorProxy* ptr = dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_removeListener_void_CLayer3DEditorListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_removeListener_void_CLayer3DEditorListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::CLayer3DEditorListener* lis )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::removeListener(lis);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CLayer3DEditorListener*  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_getListener_CLayer3DEditorListener_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				if (dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial3D::CLayer3DEditorListener* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::getListener(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial3D::CLayer3DEditorListener* objXXXX = ptrNativeObject->getListener(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditor_getListener_CLayer3DEditorListener_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CLayer3DEditor_getListener_CLayer3DEditorListener_ev_uint32_Callback* pCallback )
			{
				CLayer3DEditorProxy* ptr = dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_getListener_CLayer3DEditorListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CLayer3DEditorListener*  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_getListener_CLayer3DEditorListener_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				EarthView::World::Spatial3D::CLayer3DEditorListener* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::getListener(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_getNumListener_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				if (dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::getNumListener();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getNumListener();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditor_getNumListener_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CLayer3DEditor_getNumListener_ev_uint32_Callback* pCallback )
			{
				CLayer3DEditorProxy* ptr = dynamic_cast<CLayer3DEditorProxy*>((EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLayer3DEditor_getNumListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CLayer3DEditor_getNumListener_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLayer3DEditor* ptrNativeObject = (EarthView::World::Spatial3D::CLayer3DEditor*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLayer3DEditor::getNumListener();
				return objXXXX;
			}
		}
	}
}
