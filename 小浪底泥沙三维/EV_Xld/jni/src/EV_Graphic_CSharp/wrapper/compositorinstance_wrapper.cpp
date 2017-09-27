/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/compositorinstance.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorInstance__compileTargetOperations_void_CompiledState_Callback)(_inout void* compiledState);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorInstance__compileOutputOperation_void_CTargetOperation_Callback)(_inout void* finalState);
			class CCompositorInstanceProxy : public EarthView::World::Graphic::CCompositorInstance
			{
			private:
				EarthView_World_Graphic_CCompositorInstance__compileTargetOperations_void_CompiledState_Callback* m_EarthView_World_Graphic_CCompositorInstance__compileTargetOperations_void_CompiledState_Callback;
				EarthView_World_Graphic_CCompositorInstance__compileOutputOperation_void_CTargetOperation_Callback* m_EarthView_World_Graphic_CCompositorInstance__compileOutputOperation_void_CTargetOperation_Callback;
			public:
				CCompositorInstanceProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompositorInstance(pList)
				{
					m_EarthView_World_Graphic_CCompositorInstance__compileTargetOperations_void_CompiledState_Callback = NULL;
					m_EarthView_World_Graphic_CCompositorInstance__compileOutputOperation_void_CTargetOperation_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CCompositorInstance__compileTargetOperations_void_CompiledState(EarthView_World_Graphic_CCompositorInstance__compileTargetOperations_void_CompiledState_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorInstance__compileTargetOperations_void_CompiledState_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositorInstance__compileOutputOperation_void_CTargetOperation(EarthView_World_Graphic_CCompositorInstance__compileOutputOperation_void_CTargetOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorInstance__compileOutputOperation_void_CTargetOperation_Callback = pCallback;
				}
				virtual void _compileTargetOperations(_inout EarthView::World::Graphic::CCompositorInstance::CompiledState& compiledState)
				{
					if(m_EarthView_World_Graphic_CCompositorInstance__compileTargetOperations_void_CompiledState_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositorInstance__compileTargetOperations_void_CompiledState_Callback(&compiledState);
					}
					else
						return this->CCompositorInstance::_compileTargetOperations(compiledState);
				}
				virtual void _compileOutputOperation(_inout EarthView::World::Graphic::CCompositorInstance::CTargetOperation& finalState)
				{
					if(m_EarthView_World_Graphic_CCompositorInstance__compileOutputOperation_void_CTargetOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositorInstance__compileOutputOperation_void_CTargetOperation_Callback(&finalState);
					}
					else
						return this->CCompositorInstance::_compileOutputOperation(finalState);
				}
			};
			REGISTER_FACTORY_CLASS(CCompositorInstanceProxy);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialSetup_void_ev_uint32_CMaterialPtr_Callback)(_in ev_uint32 pass_id, _inout void* mat);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialRender_void_ev_uint32_CMaterialPtr_Callback)(_in ev_uint32 pass_id, _inout void* mat);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyResourcesCreated_void_ev_bool_Callback)(_in ev_bool forResizeOnly);
			class CCompositorInstanceListenerProxy : public EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener
			{
			private:
				EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialSetup_void_ev_uint32_CMaterialPtr_Callback* m_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialSetup_void_ev_uint32_CMaterialPtr_Callback;
				EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialRender_void_ev_uint32_CMaterialPtr_Callback* m_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialRender_void_ev_uint32_CMaterialPtr_Callback;
				EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyResourcesCreated_void_ev_bool_Callback* m_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyResourcesCreated_void_ev_bool_Callback;
			public:
				CCompositorInstanceListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompositorInstanceListener(pList)
				{
					m_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialSetup_void_ev_uint32_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialRender_void_ev_uint32_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyResourcesCreated_void_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialSetup_void_ev_uint32_CMaterialPtr(EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialSetup_void_ev_uint32_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialSetup_void_ev_uint32_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialRender_void_ev_uint32_CMaterialPtr(EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialRender_void_ev_uint32_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialRender_void_ev_uint32_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyResourcesCreated_void_ev_bool(EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyResourcesCreated_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyResourcesCreated_void_ev_bool_Callback = pCallback;
				}
				virtual void notifyMaterialSetup(_in ev_uint32 pass_id, _inout EarthView::World::Graphic::CMaterialPtr& mat)
				{
					if(m_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialSetup_void_ev_uint32_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialSetup_void_ev_uint32_CMaterialPtr_Callback(pass_id, &mat);
					}
					else
						return this->CCompositorInstanceListener::notifyMaterialSetup(pass_id, mat);
				}
				virtual void notifyMaterialRender(_in ev_uint32 pass_id, _inout EarthView::World::Graphic::CMaterialPtr& mat)
				{
					if(m_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialRender_void_ev_uint32_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialRender_void_ev_uint32_CMaterialPtr_Callback(pass_id, &mat);
					}
					else
						return this->CCompositorInstanceListener::notifyMaterialRender(pass_id, mat);
				}
				virtual void notifyResourcesCreated(_in ev_bool forResizeOnly)
				{
					if(m_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyResourcesCreated_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyResourcesCreated_void_ev_bool_Callback(forResizeOnly);
					}
					else
						return this->CCompositorInstanceListener::notifyResourcesCreated(forResizeOnly);
				}
			};
			REGISTER_FACTORY_CLASS(CCompositorInstanceListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialSetup_void_ev_uint32_CMaterialPtr(void *pObjectXXXX, _in ev_uint32 pass_id, _inout void* mat )
			{
				EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener*) pObjectXXXX;
				if (dynamic_cast<CCompositorInstanceListenerProxy*>((EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener::notifyMaterialSetup(pass_id, *(EarthView::World::Graphic::CMaterialPtr*)mat);
				else
					ptrNativeObject->notifyMaterialSetup(pass_id, *(EarthView::World::Graphic::CMaterialPtr*)mat);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialSetup_void_ev_uint32_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialSetup_void_ev_uint32_CMaterialPtr_Callback* pCallback )
			{
				CCompositorInstanceListenerProxy* ptr = dynamic_cast<CCompositorInstanceListenerProxy*>((EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialSetup_void_ev_uint32_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialSetup_void_ev_uint32_CMaterialPtr_NoVirtual(void *pObjectXXXX, _in ev_uint32 pass_id, _inout void* mat )
			{
				EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener::notifyMaterialSetup(pass_id, *(EarthView::World::Graphic::CMaterialPtr*)mat);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialRender_void_ev_uint32_CMaterialPtr(void *pObjectXXXX, _in ev_uint32 pass_id, _inout void* mat )
			{
				EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener*) pObjectXXXX;
				if (dynamic_cast<CCompositorInstanceListenerProxy*>((EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener::notifyMaterialRender(pass_id, *(EarthView::World::Graphic::CMaterialPtr*)mat);
				else
					ptrNativeObject->notifyMaterialRender(pass_id, *(EarthView::World::Graphic::CMaterialPtr*)mat);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialRender_void_ev_uint32_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialRender_void_ev_uint32_CMaterialPtr_Callback* pCallback )
			{
				CCompositorInstanceListenerProxy* ptr = dynamic_cast<CCompositorInstanceListenerProxy*>((EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialRender_void_ev_uint32_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyMaterialRender_void_ev_uint32_CMaterialPtr_NoVirtual(void *pObjectXXXX, _in ev_uint32 pass_id, _inout void* mat )
			{
				EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener::notifyMaterialRender(pass_id, *(EarthView::World::Graphic::CMaterialPtr*)mat);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyResourcesCreated_void_ev_bool(void *pObjectXXXX, _in ev_bool forResizeOnly )
			{
				EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener*) pObjectXXXX;
				if (dynamic_cast<CCompositorInstanceListenerProxy*>((EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener::notifyResourcesCreated(forResizeOnly);
				else
					ptrNativeObject->notifyResourcesCreated(forResizeOnly);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyResourcesCreated_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyResourcesCreated_void_ev_bool_Callback* pCallback )
			{
				CCompositorInstanceListenerProxy* ptr = dynamic_cast<CCompositorInstanceListenerProxy*>((EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyResourcesCreated_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_CCompositorInstanceListener_notifyResourcesCreated_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool forResizeOnly )
			{
				EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener::notifyResourcesCreated(forResizeOnly);
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorInstance_CRenderSystemOperation_execute_void_CSceneManager_CRenderSystem_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rs);
			class CRenderSystemOperationProxy : public EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation
			{
			private:
				EarthView_World_Graphic_CCompositorInstance_CRenderSystemOperation_execute_void_CSceneManager_CRenderSystem_Callback* m_EarthView_World_Graphic_CCompositorInstance_CRenderSystemOperation_execute_void_CSceneManager_CRenderSystem_Callback;
			public:
				CRenderSystemOperationProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderSystemOperation(pList)
				{
					m_EarthView_World_Graphic_CCompositorInstance_CRenderSystemOperation_execute_void_CSceneManager_CRenderSystem_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CCompositorInstance_CRenderSystemOperation_execute_void_CSceneManager_CRenderSystem(EarthView_World_Graphic_CCompositorInstance_CRenderSystemOperation_execute_void_CSceneManager_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorInstance_CRenderSystemOperation_execute_void_CSceneManager_CRenderSystem_Callback = pCallback;
				}
				virtual void execute(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rs)
				{
					if(m_EarthView_World_Graphic_CCompositorInstance_CRenderSystemOperation_execute_void_CSceneManager_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositorInstance_CRenderSystemOperation_execute_void_CSceneManager_CRenderSystem_Callback(sm, rs);
					}
					else
						return this->CRenderSystemOperation::execute(sm, rs);
				}
			};
			REGISTER_FACTORY_CLASS(CRenderSystemOperationProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_CRenderSystemOperation_execute_void_CSceneManager_CRenderSystem(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rs )
			{
				EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemOperationProxy*>((EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation::execute(sm, rs);
				else
					ptrNativeObject->execute(sm, rs);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorInstance_CRenderSystemOperation_execute_void_CSceneManager_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CCompositorInstance_CRenderSystemOperation_execute_void_CSceneManager_CRenderSystem_Callback* pCallback )
			{
				CRenderSystemOperationProxy* ptr = dynamic_cast<CRenderSystemOperationProxy*>((EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorInstance_CRenderSystemOperation_execute_void_CSceneManager_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_CRenderSystemOperation_execute_void_CSceneManager_CRenderSystem_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rs )
			{
				EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation::execute(sm, rs);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositorInstance_QuadMaterialMap_push_ev_bool_ev_int32_CMaterialPtr(void *pObjectXXXX, _in const ev_int32& key, _in const void* val )
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key, *(EarthView::World::Graphic::CMaterialPtr*)val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositorInstance_QuadMaterialMap_exist_ev_bool_ev_int32(void *pObjectXXXX, _in const ev_int32& key )
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCompositorInstance_QuadMaterialMap_OperatorIndex_CMaterialPtr_ev_int32(void *pObjXXXX, _in const ev_int32& key )
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap& objYYYY = *(EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap*) pObjXXXX;
				EarthView::World::Graphic::CMaterialPtr& objXXXX = objYYYY[key];
				EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCompositorInstance_QuadMaterialMap_get_CMaterialPtr_ev_int32(void *pObjectXXXX, _in const ev_int32& key )
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap*) pObjectXXXX;
				EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->get(key);
				EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_QuadMaterialMap_erase_void_ev_int32(void *pObjectXXXX, _in const ev_int32& key )
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap*) pObjectXXXX;
				ptrNativeObject->erase(key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CCompositorInstance_QuadMaterialMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_QuadMaterialMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositorInstance_QuadMaterialMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_CCompositorInstance_QuadMaterialPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->first;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositorInstance_QuadMaterialPair_first( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair*)pObjectXXXX)->first = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CCompositorInstance_QuadMaterialPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair*) pObjectXXXX;
				EarthView::World::Graphic::CMaterialPtr &objXXXX = ptrNativeObject->second;
				EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositorInstance_QuadMaterialPair_second( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair*)pObjectXXXX)->second = *(EarthView::World::Graphic::CMaterialPtr*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositorInstance_QuadMaterialIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_QuadMaterialIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Graphic_CCompositorInstance_QuadMaterialIterator_nextKey_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->nextKey();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCompositorInstance_QuadMaterialIterator_nextValue_CMaterialPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator*) pObjectXXXX;
				EarthView::World::Graphic::CMaterialPtr objXXXX = ptrNativeObject->nextValue();
				EarthView::World::Graphic::CMaterialPtr *pXXXX = new EarthView::World::Graphic::CMaterialPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMaterialPtr*  _stdcall EarthView_World_Graphic_CCompositorInstance_QuadMaterialIterator_nextValuePtr_CMaterialPtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator*) pObjectXXXX;
				EarthView::World::Graphic::CMaterialPtr* objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCompositorInstance_QuadMaterialIterator_next_CMaterialPtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator*) pObjectXXXX;
				EarthView::World::Graphic::CMaterialPtr objXXXX = ptrNativeObject->next();
				EarthView::World::Graphic::CMaterialPtr *pXXXX = new EarthView::World::Graphic::CMaterialPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCompositorInstance_QuadMaterialIterator_getBegin_QuadMaterialPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCompositorInstance_QuadMaterialIterator_getEnd_QuadMaterialPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCompositorInstance_QuadMaterialIterator_getCurrent_QuadMaterialPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_CCompositorInstance_RenderSystemOpPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->first;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositorInstance_RenderSystemOpPair_first( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair*)pObjectXXXX)->first = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation*  _stdcall Get_EarthView_World_Graphic_CCompositorInstance_RenderSystemOpPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair*) pObjectXXXX;
				EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositorInstance_RenderSystemOpPair_second( void *pObjectXXXX, EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation*  value )
			{
				((EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_RenderSystemOpPairs_push_back_void_RenderSystemOpPair(void *pObjectXXXX, _in const void* t )
			{
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_RenderSystemOpPairs_insert_void_ev_uint32_RenderSystemOpPair(void *pObjectXXXX, _in ev_uint32 pos, _in const void* t )
			{
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_RenderSystemOpPairs_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositorInstance_RenderSystemOpPairs_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCompositorInstance_RenderSystemOpPairs_OperatorIndex_RenderSystemOpPair_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs& objYYYY = *(EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs*) pObjXXXX;
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCompositorInstance_RenderSystemOpPairs_at_RenderSystemOpPair_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs*) pObjectXXXX;
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CCompositorInstance_RenderSystemOpPairs_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_RenderSystemOpPairs_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_RenderSystemOpPairs_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_RenderSystemOpPairs_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderTarget*  _stdcall Get_EarthView_World_Graphic_CCompositorInstance_CTargetOperation_target( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*) pObjectXXXX;
				EarthView::World::Graphic::CRenderTarget* objXXXX = ptrNativeObject->target;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositorInstance_CTargetOperation_target( void *pObjectXXXX, EarthView::World::Graphic::CRenderTarget*  value )
			{
				((EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjectXXXX)->target = value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_CCompositorInstance_CTargetOperation_currentQueueGroupID( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->currentQueueGroupID;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositorInstance_CTargetOperation_currentQueueGroupID( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjectXXXX)->currentQueueGroupID = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CCompositorInstance_CTargetOperation_renderSystemOperations( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*) pObjectXXXX;
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs &objXXXX = ptrNativeObject->renderSystemOperations;
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositorInstance_CTargetOperation_renderSystemOperations( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjectXXXX)->renderSystemOperations = *(EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CCompositorInstance_CTargetOperation_visibilityMask( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->visibilityMask;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositorInstance_CTargetOperation_visibilityMask( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjectXXXX)->visibilityMask = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Graphic_CCompositorInstance_CTargetOperation_lodBias( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->lodBias;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositorInstance_CTargetOperation_lodBias( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjectXXXX)->lodBias = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositorInstance_CTargetOperation_RenderQueueBitSet_any_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->any();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositorInstance_CTargetOperation_RenderQueueBitSet_none_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->none();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Graphic_CCompositorInstance_CTargetOperation_RenderQueueBitSet_count_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->count();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Graphic_CCompositorInstance_CTargetOperation_RenderQueueBitSet_size_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositorInstance_CTargetOperation_RenderQueueBitSet_test_ev_bool_ev_int32(void *pObjectXXXX, _in ev_int32 pos )
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->test(pos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_CTargetOperation_RenderQueueBitSet_put_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*) pObjectXXXX;
				ptrNativeObject->put();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_CTargetOperation_RenderQueueBitSet_put_void_ev_int32(void *pObjectXXXX, _in ev_int32 pos )
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*) pObjectXXXX;
				ptrNativeObject->put(pos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_CTargetOperation_RenderQueueBitSet_reset_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*) pObjectXXXX;
				ptrNativeObject->reset();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_CTargetOperation_RenderQueueBitSet_reset_void_ev_int32(void *pObjectXXXX, _in ev_int32 pos )
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*) pObjectXXXX;
				ptrNativeObject->reset(pos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_CTargetOperation_RenderQueueBitSet_flip_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*) pObjectXXXX;
				ptrNativeObject->flip();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_CTargetOperation_RenderQueueBitSet_flip_void_ev_int32(void *pObjectXXXX, _in ev_int32 pos )
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*) pObjectXXXX;
				ptrNativeObject->flip(pos);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CCompositorInstance_CTargetOperation_renderQueues( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*) pObjectXXXX;
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet &objXXXX = ptrNativeObject->renderQueues;
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositorInstance_CTargetOperation_renderQueues( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjectXXXX)->renderQueues = *(EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CCompositorInstance_CTargetOperation_onlyInitial( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->onlyInitial;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositorInstance_CTargetOperation_onlyInitial( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjectXXXX)->onlyInitial = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CCompositorInstance_CTargetOperation_hasBeenRendered( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasBeenRendered;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositorInstance_CTargetOperation_hasBeenRendered( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjectXXXX)->hasBeenRendered = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CCompositorInstance_CTargetOperation_findVisibleObjects( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->findVisibleObjects;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositorInstance_CTargetOperation_findVisibleObjects( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjectXXXX)->findVisibleObjects = value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCompositorInstance_CTargetOperation_materialScheme( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->materialScheme;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositorInstance_CTargetOperation_materialScheme( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjectXXXX)->materialScheme = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CCompositorInstance_CTargetOperation_shadowsEnabled( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->shadowsEnabled;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositorInstance_CTargetOperation_shadowsEnabled( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjectXXXX)->shadowsEnabled = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_CompiledState_push_back_void_CTargetOperation(void *pObjectXXXX, _in const void* t )
			{
				EarthView::World::Graphic::CCompositorInstance::CompiledState* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CompiledState*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_CompiledState_insert_void_ev_uint32_CTargetOperation(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CCompositorInstance::CompiledState* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CompiledState*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_CompiledState_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CCompositorInstance::CompiledState* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CompiledState*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositorInstance_CompiledState_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositorInstance::CompiledState* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CompiledState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCompositorInstance_CompiledState_OperatorIndex_CTargetOperation_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CCompositorInstance::CompiledState& objYYYY = *(EarthView::World::Graphic::CCompositorInstance::CompiledState*) pObjXXXX;
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCompositorInstance_CompiledState_at_CTargetOperation_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CCompositorInstance::CompiledState* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CompiledState*) pObjectXXXX;
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CCompositorInstance_CompiledState_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositorInstance::CompiledState* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CompiledState*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_CompiledState_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CCompositorInstance::CompiledState* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CompiledState*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_CompiledState_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CCompositorInstance::CompiledState* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CompiledState*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_CompiledState_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance::CompiledState* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance::CompiledState*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
			{
				EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				ptrNativeObject->setEnabled(value);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositorInstance_getEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_setAlive_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
			{
				EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				ptrNativeObject->setAlive(value);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositorInstance_getAlive_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getAlive();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CCompositorInstance_getTextureInstanceName_EVString_EVString_ev_size_t(void *pObjectXXXX, _in const char* name, _in ev_uint64  mrtIndex )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getTextureInstanceName(name1, mrtIndex);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCompositorInstance_getTextureInstance_CTexturePtr_EVString_ev_size_t(void *pObjectXXXX, _in const char* name, _in ev_uint64  mrtIndex )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->getTextureInstance(name1, mrtIndex);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderTarget*  _stdcall EarthView_World_Graphic_CCompositorInstance_getRenderTarget_CRenderTarget_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				EarthView::World::Graphic::CRenderTarget* objXXXX = ptrNativeObject->getRenderTarget(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance__compileTargetOperations_void_CompiledState(void *pObjectXXXX, _inout void* compiledState )
			{
				EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				if (dynamic_cast<CCompositorInstanceProxy*>((EarthView::World::Graphic::CCompositorInstance*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositorInstance::_compileTargetOperations(*(EarthView::World::Graphic::CCompositorInstance::CompiledState*)compiledState);
				else
					ptrNativeObject->_compileTargetOperations(*(EarthView::World::Graphic::CCompositorInstance::CompiledState*)compiledState);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorInstance__compileTargetOperations_void_CompiledState( void *pObjectXXXX, EarthView_World_Graphic_CCompositorInstance__compileTargetOperations_void_CompiledState_Callback* pCallback )
			{
				CCompositorInstanceProxy* ptr = dynamic_cast<CCompositorInstanceProxy*>((EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorInstance__compileTargetOperations_void_CompiledState(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance__compileTargetOperations_void_CompiledState_NoVirtual(void *pObjectXXXX, _inout void* compiledState )
			{
				EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositorInstance::_compileTargetOperations(*(EarthView::World::Graphic::CCompositorInstance::CompiledState*)compiledState);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance__compileOutputOperation_void_CTargetOperation(void *pObjectXXXX, _inout void* finalState )
			{
				EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				if (dynamic_cast<CCompositorInstanceProxy*>((EarthView::World::Graphic::CCompositorInstance*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositorInstance::_compileOutputOperation(*(EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)finalState);
				else
					ptrNativeObject->_compileOutputOperation(*(EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)finalState);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorInstance__compileOutputOperation_void_CTargetOperation( void *pObjectXXXX, EarthView_World_Graphic_CCompositorInstance__compileOutputOperation_void_CTargetOperation_Callback* pCallback )
			{
				CCompositorInstanceProxy* ptr = dynamic_cast<CCompositorInstanceProxy*>((EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorInstance__compileOutputOperation_void_CTargetOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance__compileOutputOperation_void_CTargetOperation_NoVirtual(void *pObjectXXXX, _inout void* finalState )
			{
				EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositorInstance::_compileOutputOperation(*(EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)finalState);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositor*  _stdcall EarthView_World_Graphic_CCompositorInstance_getCompositor_CCompositor(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				EarthView::World::Graphic::CCompositor* objXXXX = ptrNativeObject->getCompositor();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTechnique*  _stdcall EarthView_World_Graphic_CCompositorInstance_getTechnique_CCompositionTechnique(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTechnique* objXXXX = ptrNativeObject->getTechnique();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_setTechnique_void_CCompositionTechnique_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CCompositionTechnique* ref_tech, _in ev_bool reuseTextures )
			{
				EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				ptrNativeObject->setTechnique(ref_tech, reuseTextures);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_setTechnique_void_CCompositionTechnique(void *pObjectXXXX, _in EarthView::World::Graphic::CCompositionTechnique* ref_tech )
			{
				EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				ptrNativeObject->setTechnique(ref_tech);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_setScheme_void_EVString_ev_bool(void *pObjectXXXX, _in const char* schemeName, _in ev_bool reuseTextures )
			{
				EarthView::World::Core::ev_string schemeName1 = schemeName;
				EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				ptrNativeObject->setScheme(schemeName1, reuseTextures);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_setScheme_void_EVString(void *pObjectXXXX, _in const char* schemeName )
			{
				EarthView::World::Core::ev_string schemeName1 = schemeName;
				EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				ptrNativeObject->setScheme(schemeName1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CCompositorInstance_getScheme_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getScheme();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_notifyResized_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				ptrNativeObject->notifyResized();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositorChain*  _stdcall EarthView_World_Graphic_CCompositorInstance_getChain_CCompositorChain(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				EarthView::World::Graphic::CCompositorChain* objXXXX = ptrNativeObject->getChain();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_addListener_void_CCompositorInstanceListener(void *pObjectXXXX, _in EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener* ref_l )
			{
				EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				ptrNativeObject->addListener(ref_l);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance_removeListener_void_CCompositorInstanceListener(void *pObjectXXXX, _in EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener* l )
			{
				EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				ptrNativeObject->removeListener(l);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance__fireNotifyMaterialSetup_void_ev_uint32_CMaterialPtr(void *pObjectXXXX, _in ev_uint32 pass_id, _inout void* mat )
			{
				EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				ptrNativeObject->_fireNotifyMaterialSetup(pass_id, *(EarthView::World::Graphic::CMaterialPtr*)mat);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance__fireNotifyMaterialRender_void_ev_uint32_CMaterialPtr(void *pObjectXXXX, _in ev_uint32 pass_id, _inout void* mat )
			{
				EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				ptrNativeObject->_fireNotifyMaterialRender(pass_id, *(EarthView::World::Graphic::CMaterialPtr*)mat);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorInstance__fireNotifyResourcesCreated_void_ev_bool(void *pObjectXXXX, _in ev_bool forResizeOnly )
			{
				EarthView::World::Graphic::CCompositorInstance* ptrNativeObject = (EarthView::World::Graphic::CCompositorInstance*) pObjectXXXX;
				ptrNativeObject->_fireNotifyResourcesCreated(forResizeOnly);
			}
		}
	}
}
