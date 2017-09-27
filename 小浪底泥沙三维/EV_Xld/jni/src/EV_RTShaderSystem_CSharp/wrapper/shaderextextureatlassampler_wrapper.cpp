/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderextextureatlassampler.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace RTShaderSystem
			{
				extern "C" EV_DLL_EXPORT  float  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_TextureAtlasRecord_posU( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*) pObjectXXXX;
					float objXXXX = ptrNativeObject->posU;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_TextureAtlasRecord_posU( void *pObjectXXXX, float  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*)pObjectXXXX)->posU = value;
				}
				extern "C" EV_DLL_EXPORT  float  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_TextureAtlasRecord_posV( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*) pObjectXXXX;
					float objXXXX = ptrNativeObject->posV;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_TextureAtlasRecord_posV( void *pObjectXXXX, float  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*)pObjectXXXX)->posV = value;
				}
				extern "C" EV_DLL_EXPORT  float  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_TextureAtlasRecord_width( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*) pObjectXXXX;
					float objXXXX = ptrNativeObject->width;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_TextureAtlasRecord_width( void *pObjectXXXX, float  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*)pObjectXXXX)->width = value;
				}
				extern "C" EV_DLL_EXPORT  float  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_TextureAtlasRecord_height( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*) pObjectXXXX;
					float objXXXX = ptrNativeObject->height;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_TextureAtlasRecord_height( void *pObjectXXXX, float  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*)pObjectXXXX)->height = value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_TextureAtlasRecord_originalTextureName( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->originalTextureName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_TextureAtlasRecord_originalTextureName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*)pObjectXXXX)->originalTextureName = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_TextureAtlasRecord_atlasTextureName( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->atlasTextureName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_TextureAtlasRecord_atlasTextureName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*)pObjectXXXX)->atlasTextureName = value1;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_RTShaderSystem_TextureAtlasRecord_indexInAtlas( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*) pObjectXXXX;
					size_t objXXXX = ptrNativeObject->indexInAtlas;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_TextureAtlasRecord_indexInAtlas( void *pObjectXXXX, ev_uint64   value )
				{
					((EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*)pObjectXXXX)->indexInAtlas = value;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_TextureAtlasTable_push_back_void_TextureAtlasRecord(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_TextureAtlasTable_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_TextureAtlasTable_front_TextureAtlasRecord(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord& objXXXX = ptrNativeObject->front();
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_TextureAtlasTable_back_TextureAtlasRecord(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord& objXXXX = ptrNativeObject->back();
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_TextureAtlasTable_insert_void_ev_uint32_TextureAtlasRecord(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_TextureAtlasTable_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_TextureAtlasTable_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_TextureAtlasTable_OperatorIndex_TextureAtlasRecord_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable& objYYYY = *(EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord& objXXXX = objYYYY[n];
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_TextureAtlasTable_at_TextureAtlasRecord_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord& objXXXX = ptrNativeObject->at(n);
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_TextureAtlasTable_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_TextureAtlasTable_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_TextureAtlasTable_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_TextureAtlasTable_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*  _stdcall EarthView_World_Graphic_RTShaderSystem_TextureAtlasTablePtr_get_TextureAtlasTable(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_TextureAtlasMap_push_ev_bool_EVString_TextureAtlasTablePtr(void *pObjectXXXX, _in const char* key, _in const void* val )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->push(key1, *(EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr*)val);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_TextureAtlasMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exist(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_TextureAtlasMap_OperatorIndex_TextureAtlasTablePtr_EVString(void *pObjXXXX, _in const char* key )
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap& objYYYY = *(EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr& objXXXX = objYYYY[key];
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_TextureAtlasMap_get_TextureAtlasTablePtr_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr& objXXXX = ptrNativeObject->get(key1);
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_TextureAtlasMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap*) pObjectXXXX;
					ptrNativeObject->erase(key1);
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_TextureAtlasMap_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_TextureAtlasMap_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_TextureAtlasMap_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getType_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getExecutionOrder_int_Callback)();
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_copyFrom_void_CSubRenderState_Callback)(_in const void* rhs);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_createCpuSubPrograms_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback)(_in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveParameters_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveDependencies_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_addFunctionInvocations_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				class CTextureAtlasSamplerProxy : public EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getType_EVString_Callback* m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getType_EVString_Callback;
					EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getExecutionOrder_int_Callback* m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getExecutionOrder_int_Callback;
					EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_copyFrom_void_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_copyFrom_void_CSubRenderState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_createCpuSubPrograms_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_createCpuSubPrograms_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback;
					EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback;
					EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveParameters_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveParameters_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveDependencies_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveDependencies_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_addFunctionInvocations_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_addFunctionInvocations_bool_CProgramSet_Callback;
				public:
					CTextureAtlasSamplerProxy(EarthView::World::Core::CNameValuePairList *pList) : CTextureAtlasSampler(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getType_EVString_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getExecutionOrder_int_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_copyFrom_void_CSubRenderState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_createCpuSubPrograms_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveParameters_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveDependencies_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_addFunctionInvocations_bool_CProgramSet_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getType_EVString(EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getType_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getType_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getExecutionOrder_int(EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getExecutionOrder_int_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getExecutionOrder_int_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_copyFrom_void_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_copyFrom_void_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_copyFrom_void_CSubRenderState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_createCpuSubPrograms_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_createCpuSubPrograms_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_createCpuSubPrograms_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_preAddToRenderState_bool_CRenderState_CPass_CPass(EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveParameters_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveParameters_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveParameters_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveDependencies_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveDependencies_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveDependencies_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_addFunctionInvocations_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_addFunctionInvocations_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_addFunctionInvocations_bool_CProgramSet_Callback = pCallback;
					}
					virtual EVString getType() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getType_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getType_EVString_Callback();
							return returnValue;
						}
						else
							return this->CTextureAtlasSampler::getType();
					}
					virtual int getExecutionOrder() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getExecutionOrder_int_Callback != NULL && this->isCustomExtend())
						{
							int returnValue = m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getExecutionOrder_int_Callback();
							return returnValue;
						}
						else
							return this->CTextureAtlasSampler::getExecutionOrder();
					}
					virtual void copyFrom(_in const EarthView::World::Graphic::RTShaderSystem::CSubRenderState& rhs)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_copyFrom_void_CSubRenderState_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_copyFrom_void_CSubRenderState_Callback(&rhs);
						}
						else
							return this->CTextureAtlasSampler::copyFrom(rhs);
					}
					virtual void updateGpuProgramsParams(_in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback(rend, pass, source, pLightList);
						}
						else
							return this->CTextureAtlasSampler::updateGpuProgramsParams(rend, pass, source, pLightList);
					}
					virtual bool preAddToRenderState(_in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback(renderState, srcPass, dstPass);
							return returnValue;
						}
						else
							return this->CTextureAtlasSampler::preAddToRenderState(renderState, srcPass, dstPass);
					}
					virtual bool resolveParameters(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveParameters_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveParameters_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CTextureAtlasSampler::resolveParameters(programSet);
					}
					virtual bool resolveDependencies(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveDependencies_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveDependencies_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CTextureAtlasSampler::resolveDependencies(programSet);
					}
					virtual bool addFunctionInvocations(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_addFunctionInvocations_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_addFunctionInvocations_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CTextureAtlasSampler::addFunctionInvocations(programSet);
					}
					virtual bool createCpuSubPrograms(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_createCpuSubPrograms_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_createCpuSubPrograms_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CTextureAtlasSampler::createCpuSubPrograms(programSet);
					}
				};
				REGISTER_FACTORY_CLASS(CTextureAtlasSamplerProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getType_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX;
					if (dynamic_cast<CTextureAtlasSamplerProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::getType();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getType();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getType_EVString_Callback* pCallback )
				{
					CTextureAtlasSamplerProxy* ptr = dynamic_cast<CTextureAtlasSamplerProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getType_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getType_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::getType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getExecutionOrder_int(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX;
					if (dynamic_cast<CTextureAtlasSamplerProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*)ptrNativeObject) != NULL)
					{
						int objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::getExecutionOrder();
						return objXXXX;
					}
					else
					{
						int objXXXX = ptrNativeObject->getExecutionOrder();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getExecutionOrder_int( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getExecutionOrder_int_Callback* pCallback )
				{
					CTextureAtlasSamplerProxy* ptr = dynamic_cast<CTextureAtlasSamplerProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getExecutionOrder_int(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_getExecutionOrder_int_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX;
					int objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::getExecutionOrder();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_copyFrom_void_CSubRenderState(void *pObjectXXXX, _in const void* rhs )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX;
					if (dynamic_cast<CTextureAtlasSamplerProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
					else
						ptrNativeObject->copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_copyFrom_void_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_copyFrom_void_CSubRenderState_Callback* pCallback )
				{
					CTextureAtlasSamplerProxy* ptr = dynamic_cast<CTextureAtlasSamplerProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_copyFrom_void_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_copyFrom_void_CSubRenderState_NoVirtual(void *pObjectXXXX, _in const void* rhs )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX;
					if (dynamic_cast<CTextureAtlasSamplerProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::updateGpuProgramsParams(rend, pass, source, pLightList);
					else
						ptrNativeObject->updateGpuProgramsParams(rend, pass, source, pLightList);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* pCallback )
				{
					CTextureAtlasSamplerProxy* ptr = dynamic_cast<CTextureAtlasSamplerProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::updateGpuProgramsParams(rend, pass, source, pLightList);
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_preAddToRenderState_bool_CRenderState_CPass_CPass(void *pObjectXXXX, _in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX;
					if (dynamic_cast<CTextureAtlasSamplerProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::preAddToRenderState(renderState, srcPass, dstPass);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->preAddToRenderState(renderState, srcPass, dstPass);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_preAddToRenderState_bool_CRenderState_CPass_CPass( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* pCallback )
				{
					CTextureAtlasSamplerProxy* ptr = dynamic_cast<CTextureAtlasSamplerProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_preAddToRenderState_bool_CRenderState_CPass_CPass(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_preAddToRenderState_bool_CRenderState_CPass_CPass_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::preAddToRenderState(renderState, srcPass, dstPass);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_Type()
				{
					EVString objXXXX = EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::Type;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_Type( char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::Type = value1;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveParameters_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX;
					if (dynamic_cast<CTextureAtlasSamplerProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::resolveParameters(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->resolveParameters(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveParameters_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveParameters_bool_CProgramSet_Callback* pCallback )
				{
					CTextureAtlasSamplerProxy* ptr = dynamic_cast<CTextureAtlasSamplerProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveParameters_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveParameters_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::resolveParameters(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveDependencies_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX;
					if (dynamic_cast<CTextureAtlasSamplerProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::resolveDependencies(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->resolveDependencies(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveDependencies_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveDependencies_bool_CProgramSet_Callback* pCallback )
				{
					CTextureAtlasSamplerProxy* ptr = dynamic_cast<CTextureAtlasSamplerProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveDependencies_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_resolveDependencies_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::resolveDependencies(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_addFunctionInvocations_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX;
					if (dynamic_cast<CTextureAtlasSamplerProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::addFunctionInvocations(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->addFunctionInvocations(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_addFunctionInvocations_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_addFunctionInvocations_bool_CProgramSet_Callback* pCallback )
				{
					CTextureAtlasSamplerProxy* ptr = dynamic_cast<CTextureAtlasSamplerProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_addFunctionInvocations_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_addFunctionInvocations_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::addFunctionInvocations(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_createCpuSubPrograms_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_createCpuSubPrograms_bool_CProgramSet_Callback* pCallback )
				{
					CTextureAtlasSamplerProxy* ptr = dynamic_cast<CTextureAtlasSamplerProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSampler_createCpuSubPrograms_bool_CProgramSet(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_getType_EVString_Callback)();
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_Callback)();
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator);
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CTextureUnitState* texState, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator);
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyInstance_void_CSubRenderState_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyAllInstances_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback)(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback)(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in const EarthView::World::Graphic::CTextureUnitState* srcTextureUnit, _in const EarthView::World::Graphic::CTextureUnitState* dstTextureUnit);
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstanceImpl_CSubRenderState_Callback)();
				class CTextureAtlasSamplerFactoryProxy : public EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_getType_EVString_Callback* m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_getType_EVString_Callback;
					EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback* m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback;
					EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback* m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback;
					EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback* m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback;
					EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyInstance_void_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyInstance_void_CSubRenderState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyAllInstances_void_Callback* m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyAllInstances_void_Callback;
					EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback* m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback;
					EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstanceImpl_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstanceImpl_CSubRenderState_Callback;
				public:
					CTextureAtlasSamplerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CTextureAtlasSamplerFactory(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_getType_EVString_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyInstance_void_CSubRenderState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyAllInstances_void_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstanceImpl_CSubRenderState_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_getType_EVString(EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_getType_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_getType_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyInstance_void_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyInstance_void_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyInstance_void_CSubRenderState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyAllInstances_void(EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyAllInstances_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyAllInstances_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstanceImpl_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstanceImpl_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstanceImpl_CSubRenderState_Callback = pCallback;
					}
					virtual EVString getType() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_getType_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_getType_EVString_Callback();
							return returnValue;
						}
						else
							return this->CTextureAtlasSamplerFactory::getType();
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createInstance(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback(compiler, prop, pass, translator);
							return returnValue;
						}
						else
							return this->CTextureAtlasSamplerFactory::createInstance(compiler, prop, pass, translator);
					}
					virtual void writeInstance(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback(ser, subRenderState, srcPass, dstPass);
						}
						else
							return this->CTextureAtlasSamplerFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createInstanceImpl()
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstanceImpl_CSubRenderState_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstanceImpl_CSubRenderState_Callback();
							return returnValue;
						}
						else
							return this->CTextureAtlasSamplerFactory::createInstanceImpl();
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createOrRetrieveInstance(_in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback(translator);
							return returnValue;
						}
						else
							return this->CTextureAtlasSamplerFactory::createOrRetrieveInstance(translator);
					}
					virtual void destroyInstance(_in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyInstance_void_CSubRenderState_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyInstance_void_CSubRenderState_Callback(subRenderState);
						}
						else
							return this->CTextureAtlasSamplerFactory::destroyInstance(subRenderState);
					}
					virtual void destroyAllInstances()
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyAllInstances_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyAllInstances_void_Callback();
						}
						else
							return this->CTextureAtlasSamplerFactory::destroyAllInstances();
					}
				};
				REGISTER_FACTORY_CLASS(CTextureAtlasSamplerFactoryProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_TextureAtlasAttib_positionMode( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::IndexPositionMode objXXXX = ptrNativeObject->positionMode;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_TextureAtlasAttib_positionMode( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib*)pObjectXXXX)->positionMode = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::IndexPositionMode)value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_TextureAtlasAttib_positionOffset( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib*) pObjectXXXX;
					ev_uint16 objXXXX = ptrNativeObject->positionOffset;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_TextureAtlasAttib_positionOffset( void *pObjectXXXX, ev_uint16  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib*)pObjectXXXX)->positionOffset = value;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_TextureAtlasAttib_autoBorderAdjust( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->autoBorderAdjust;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_TextureAtlasAttib_autoBorderAdjust( void *pObjectXXXX, bool  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib*)pObjectXXXX)->autoBorderAdjust = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_getSingletonPtr_CTextureAtlasSamplerFactory( )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* objXXXX = EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_getSingleton_CTextureAtlasSamplerFactory( )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory& objXXXX = EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::getSingleton();
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_getType_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX;
					if (dynamic_cast<CTextureAtlasSamplerFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::getType();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getType();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_getType_EVString_Callback* pCallback )
				{
					CTextureAtlasSamplerFactoryProxy* ptr = dynamic_cast<CTextureAtlasSamplerFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_getType_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_getType_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::getType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX;
					if (dynamic_cast<CTextureAtlasSamplerFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::createInstance(compiler, prop, pass, translator);
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->createInstance(compiler, prop, pass, translator);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback* pCallback )
				{
					CTextureAtlasSamplerFactoryProxy* ptr = dynamic_cast<CTextureAtlasSamplerFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::createInstance(compiler, prop, pass, translator);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX;
					if (dynamic_cast<CTextureAtlasSamplerFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
					else
						ptrNativeObject->writeInstance(ser, subRenderState, srcPass, dstPass);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback* pCallback )
				{
					CTextureAtlasSamplerFactoryProxy* ptr = dynamic_cast<CTextureAtlasSamplerFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_addTexutreAtlasDefinition_bool_EVString_TextureAtlasTablePtr(void *pObjectXXXX, _in const char* filename, _in void* textureAtlasTable )
				{
					EarthView::World::Core::ev_string filename1 = filename;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->addTexutreAtlasDefinition(filename1, *(EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr*)textureAtlasTable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_addTexutreAtlasDefinition_bool_EVString(void *pObjectXXXX, _in const char* filename )
				{
					EarthView::World::Core::ev_string filename1 = filename;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->addTexutreAtlasDefinition(filename1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_addTexutreAtlasDefinition_bool_DataStreamPtr_TextureAtlasTablePtr(void *pObjectXXXX, _in void* stream, _in void* textureAtlasTable )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->addTexutreAtlasDefinition(*(EarthView::World::Core::DataStreamPtr*)stream, *(EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr*)textureAtlasTable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_addTexutreAtlasDefinition_bool_DataStreamPtr(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->addTexutreAtlasDefinition(*(EarthView::World::Core::DataStreamPtr*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_setTextureAtlasTable_void_EVString_TextureAtlasTablePtr_bool(void *pObjectXXXX, _in const char* textureName, _in const void* atlasData, _in bool autoBorderAdjust )
				{
					EarthView::World::Core::ev_string textureName1 = textureName;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX;
					ptrNativeObject->setTextureAtlasTable(textureName1, *(EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr*)atlasData, autoBorderAdjust);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_setTextureAtlasTable_void_EVString_TextureAtlasTablePtr(void *pObjectXXXX, _in const char* textureName, _in const void* atlasData )
				{
					EarthView::World::Core::ev_string textureName1 = textureName;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX;
					ptrNativeObject->setTextureAtlasTable(textureName1, *(EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr*)atlasData);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_removeTextureAtlasTable_void_EVString(void *pObjectXXXX, _in const char* textureName )
				{
					EarthView::World::Core::ev_string textureName1 = textureName;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX;
					ptrNativeObject->removeTextureAtlasTable(textureName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_removeAllTextureAtlasTables_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX;
					ptrNativeObject->removeAllTextureAtlasTables();
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_getTextureAtlasTable_TextureAtlasTablePtr_EVString(void *pObjectXXXX, _in const char* textureName )
				{
					EarthView::World::Core::ev_string textureName1 = textureName;
					const EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX;
					const EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr& objXXXX = ptrNativeObject->getTextureAtlasTable(textureName1);
					const EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_setDefaultAtlasingAttributes_void_IndexPositionMode_ev_uint16_bool(void *pObjectXXXX, _in int mode, _in ev_uint16 offset, _in bool autoAdjustBorders )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX;
					ptrNativeObject->setDefaultAtlasingAttributes((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::IndexPositionMode)mode, offset, autoAdjustBorders);
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_getDefaultAtlasingAttributes_TextureAtlasAttib(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX;
					const EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib& objXXXX = ptrNativeObject->getDefaultAtlasingAttributes();
					const EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_setMaterialAtlasingAttributes_void_CMaterial_IndexPositionMode_ev_uint16_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterial* material, _in int mode, _in ev_uint16 offset, _in bool autoAdjustBorders )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX;
					ptrNativeObject->setMaterialAtlasingAttributes(material, (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::IndexPositionMode)mode, offset, autoAdjustBorders);
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_hasMaterialAtlasingAttributes_bool_CMaterial_TextureAtlasAttib(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterial* material, _in EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib* attrib )
				{
					const EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->hasMaterialAtlasingAttributes(material, attrib);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_hasMaterialAtlasingAttributes_bool_CMaterial(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterial* material )
				{
					const EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->hasMaterialAtlasingAttributes(material);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstanceImpl_CSubRenderState(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX;
					if (dynamic_cast<CTextureAtlasSamplerFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::createInstanceImpl();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->createInstanceImpl();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstanceImpl_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstanceImpl_CSubRenderState_Callback* pCallback )
				{
					CTextureAtlasSamplerFactoryProxy* ptr = dynamic_cast<CTextureAtlasSamplerFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstanceImpl_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstanceImpl_CSubRenderState_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::createInstanceImpl();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_Callback* pCallback )
				{
					CTextureAtlasSamplerFactoryProxy* ptr = dynamic_cast<CTextureAtlasSamplerFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback* pCallback )
				{
					CTextureAtlasSamplerFactoryProxy* ptr = dynamic_cast<CTextureAtlasSamplerFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback* pCallback )
				{
					CTextureAtlasSamplerFactoryProxy* ptr = dynamic_cast<CTextureAtlasSamplerFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyInstance_void_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyInstance_void_CSubRenderState_Callback* pCallback )
				{
					CTextureAtlasSamplerFactoryProxy* ptr = dynamic_cast<CTextureAtlasSamplerFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyInstance_void_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyAllInstances_void( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyAllInstances_void_Callback* pCallback )
				{
					CTextureAtlasSamplerFactoryProxy* ptr = dynamic_cast<CTextureAtlasSamplerFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_destroyAllInstances_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback* pCallback )
				{
					CTextureAtlasSamplerFactoryProxy* ptr = dynamic_cast<CTextureAtlasSamplerFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CTextureAtlasSamplerFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(pCallback);
					}
				}
			}
		}
	}
}
