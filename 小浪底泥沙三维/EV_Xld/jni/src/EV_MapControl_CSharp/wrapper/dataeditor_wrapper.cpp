/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/dataeditor.h"
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
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
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
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				class CDataEditorProxy : public EarthView::World::Spatial2D::Controls::CDataEditor
				{
				private:
					EarthView_World_Spatial2D_Controls_CDataEditor_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CDataEditor_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CDataEditor_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CDataEditor_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
				public:
					CDataEditorProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataEditor(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CDataEditor_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CDataEditor_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CDataEditor_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CDataEditor_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CDataEditor_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CDataEditor_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CDataEditor_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CDataEditor_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial2D_Controls_CDataEditor_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CDataEditor_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CDataEditor::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial2D_Controls_CDataEditor_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CDataEditor_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CDataEditor::onKeyUp(keyCode, shift);
					}
				};
				REGISTER_FACTORY_CLASS(CDataEditorProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CMapControl*  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_parent_CMapControl(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CMapControl* objXXXX = ptrNativeObject->parent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_startEditing_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->startEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_stopEditing_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					ptrNativeObject->stopEditing();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_hasEdits_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->hasEdits();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_saveEdits_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					ptrNativeObject->saveEdits();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CMapSnapper*  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_getMapSnapper_CMapSnapper(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CMapSnapper* objXXXX = ptrNativeObject->getMapSnapper();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_getEditingLayer_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getEditingLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IVectorLayer*  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_getVectorLayer_IVectorLayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IVectorLayer* objXXXX = ptrNativeObject->getVectorLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureClass*  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_getFeatureClass_IFeatureClass(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->getFeatureClass();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_setEditingLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					ptrNativeObject->setEditingLayer(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_getDataType_EVGeometryType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->getDataType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CEditTask*  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_getCurrentTask_CEditTask(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CEditTask* objXXXX = ptrNativeObject->getCurrentTask();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_setCurrentTask_void_CEditTask(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::CEditTask* ref_task )
				{
					EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					ptrNativeObject->setCurrentTask(ref_task);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_getTaskCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getTaskCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CEditTask*  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_getTask_CEditTask_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CEditTask* objXXXX = ptrNativeObject->getTask(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CGeometryEditor*  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_getGeometryEditor_CGeometryEditor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CGeometryEditor* objXXXX = ptrNativeObject->getGeometryEditor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_getSelectedCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getSelectedCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_deleteSelected_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					ptrNativeObject->deleteSelected();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::COperationManager*  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_getOperationManager_COperationManager(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::COperationManager* objXXXX = ptrNativeObject->getOperationManager();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_onKeyDown_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					if (dynamic_cast<CDataEditorProxy*>((EarthView::World::Spatial2D::Controls::CDataEditor*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CDataEditor::onKeyDown(keyCode, shift);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onKeyDown(keyCode, shift);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CDataEditor_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CDataEditor_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CDataEditorProxy* ptr = dynamic_cast<CDataEditorProxy*>((EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CDataEditor_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_onKeyDown_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CDataEditor::onKeyDown(keyCode, shift);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_onKeyUp_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					if (dynamic_cast<CDataEditorProxy*>((EarthView::World::Spatial2D::Controls::CDataEditor*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CDataEditor::onKeyUp(keyCode, shift);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onKeyUp(keyCode, shift);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CDataEditor_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CDataEditor_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CDataEditorProxy* ptr = dynamic_cast<CDataEditorProxy*>((EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CDataEditor_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CDataEditor_onKeyUp_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial2D::Controls::CDataEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CDataEditor::onKeyUp(keyCode, shift);
					return objXXXX;
				}
			}
		}
	}
}
