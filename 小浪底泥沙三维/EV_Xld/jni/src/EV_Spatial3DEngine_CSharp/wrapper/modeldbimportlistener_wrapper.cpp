/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modeldbimportlistener.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace ModelManager
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_beginImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_Callback)(_in char*& name, _in ev_uint32 curNo, _in ev_uint32 num, _in ev_bool success, _in char*& msg);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_endImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_Callback)(_in char*& name, _in ev_uint32 curNo, _in ev_uint32 num, _in ev_bool success, _in char*& msg);
				class CModelDBImportListenerProxy : public EarthView::World::Spatial3D::ModelManager::CModelDBImportListener
				{
				private:
					EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_beginImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_beginImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_endImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_endImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_Callback;
				public:
					CModelDBImportListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelDBImportListener(pList)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_beginImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_endImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_beginImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString(EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_beginImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_beginImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_endImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString(EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_endImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_endImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_Callback = pCallback;
					}
					virtual void beginImport(_in EVString name, _in ev_uint32 curNo, _in ev_uint32 num, _in ev_bool success, _in EVString msg)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_beginImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							char* msg_Char = msg.makeBuffer();
							m_EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_beginImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_Callback(name_Char, curNo, num, success, msg_Char);
						}
						else
							return this->CModelDBImportListener::beginImport(name, curNo, num, success, msg);
					}
					virtual void endImport(_in EVString name, _in ev_uint32 curNo, _in ev_uint32 num, _in ev_bool success, _in EVString msg)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_endImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							char* msg_Char = msg.makeBuffer();
							m_EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_endImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_Callback(name_Char, curNo, num, success, msg_Char);
						}
						else
							return this->CModelDBImportListener::endImport(name, curNo, num, success, msg);
					}
				};
				REGISTER_FACTORY_CLASS(CModelDBImportListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_beginImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString(void *pObjectXXXX, _in char* name, _in ev_uint32 curNo, _in ev_uint32 num, _in ev_bool success, _in char* msg )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Core::ev_string msg1 = msg;
					EarthView::World::Spatial3D::ModelManager::CModelDBImportListener* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelDBImportListener*) pObjectXXXX;
					if (dynamic_cast<CModelDBImportListenerProxy*>((EarthView::World::Spatial3D::ModelManager::CModelDBImportListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelDBImportListener::beginImport(name1, curNo, num, success, msg1);
					else
						ptrNativeObject->beginImport(name1, curNo, num, success, msg1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_beginImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_beginImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_Callback* pCallback )
				{
					CModelDBImportListenerProxy* ptr = dynamic_cast<CModelDBImportListenerProxy*>((EarthView::World::Spatial3D::ModelManager::CModelDBImportListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_beginImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_beginImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in char* name, _in ev_uint32 curNo, _in ev_uint32 num, _in ev_bool success, _in char* msg )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Core::ev_string msg1 = msg;
					EarthView::World::Spatial3D::ModelManager::CModelDBImportListener* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelDBImportListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelDBImportListener::beginImport(name1, curNo, num, success, msg1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_endImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString(void *pObjectXXXX, _in char* name, _in ev_uint32 curNo, _in ev_uint32 num, _in ev_bool success, _in char* msg )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Core::ev_string msg1 = msg;
					EarthView::World::Spatial3D::ModelManager::CModelDBImportListener* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelDBImportListener*) pObjectXXXX;
					if (dynamic_cast<CModelDBImportListenerProxy*>((EarthView::World::Spatial3D::ModelManager::CModelDBImportListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelDBImportListener::endImport(name1, curNo, num, success, msg1);
					else
						ptrNativeObject->endImport(name1, curNo, num, success, msg1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_endImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_endImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_Callback* pCallback )
				{
					CModelDBImportListenerProxy* ptr = dynamic_cast<CModelDBImportListenerProxy*>((EarthView::World::Spatial3D::ModelManager::CModelDBImportListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_endImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_endImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in char* name, _in ev_uint32 curNo, _in ev_uint32 num, _in ev_bool success, _in char* msg )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Core::ev_string msg1 = msg;
					EarthView::World::Spatial3D::ModelManager::CModelDBImportListener* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelDBImportListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelDBImportListener::endImport(name1, curNo, num, success, msg1);
				}
			}
		}
	}
}
