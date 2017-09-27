/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/materialserializer.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_MaterialScriptProgramDefinition_name( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->name;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptProgramDefinition_name( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjectXXXX)->name = value1;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_MaterialScriptProgramDefinition_progType( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition*) pObjectXXXX;
				EarthView::World::Graphic::GpuProgramType objXXXX = ptrNativeObject->progType;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptProgramDefinition_progType( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjectXXXX)->progType = (EarthView::World::Graphic::GpuProgramType)value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_MaterialScriptProgramDefinition_language( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->language;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptProgramDefinition_language( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjectXXXX)->language = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_MaterialScriptProgramDefinition_source( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->source;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptProgramDefinition_source( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjectXXXX)->source = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_MaterialScriptProgramDefinition_syntax( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->syntax;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptProgramDefinition_syntax( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjectXXXX)->syntax = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_MaterialScriptProgramDefinition_supportsSkeletalAnimation( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->supportsSkeletalAnimation;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptProgramDefinition_supportsSkeletalAnimation( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjectXXXX)->supportsSkeletalAnimation = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_MaterialScriptProgramDefinition_supportsMorphAnimation( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->supportsMorphAnimation;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptProgramDefinition_supportsMorphAnimation( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjectXXXX)->supportsMorphAnimation = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_MaterialScriptProgramDefinition_supportsPoseAnimation( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->supportsPoseAnimation;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptProgramDefinition_supportsPoseAnimation( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjectXXXX)->supportsPoseAnimation = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_MaterialScriptProgramDefinition_usesVertexTextureFetch( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->usesVertexTextureFetch;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptProgramDefinition_usesVertexTextureFetch( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjectXXXX)->usesVertexTextureFetch = value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_MaterialScriptProgramDefinition_StringPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptProgramDefinition_StringPair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_MaterialScriptProgramDefinition_StringPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->second;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptProgramDefinition_StringPair_second( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair*)pObjectXXXX)->second = value1;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_MaterialScriptProgramDefinition_MaterialStringPairList_push_back_void_StringPair(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_MaterialScriptProgramDefinition_MaterialStringPairList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_MaterialScriptProgramDefinition_MaterialStringPairList_front_StringPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjectXXXX;
				EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_MaterialScriptProgramDefinition_MaterialStringPairList_back_StringPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjectXXXX;
				EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_MaterialScriptProgramDefinition_MaterialStringPairList_insert_void_ev_uint32_StringPair(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_MaterialScriptProgramDefinition_MaterialStringPairList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_MaterialScriptProgramDefinition_MaterialStringPairList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_MaterialScriptProgramDefinition_MaterialStringPairList_OperatorIndex_StringPair_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList& objYYYY = *(EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjXXXX;
				EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair& objXXXX = objYYYY[n];
				EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_MaterialScriptProgramDefinition_MaterialStringPairList_at_StringPair_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjectXXXX;
				EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_MaterialScriptProgramDefinition_MaterialStringPairList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_MaterialScriptProgramDefinition_MaterialStringPairList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_MaterialScriptProgramDefinition_MaterialStringPairList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_MaterialScriptProgramDefinition_MaterialStringPairList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_MaterialScriptProgramDefinition_customParameters( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptProgramDefinition*) pObjectXXXX;
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList &objXXXX = ptrNativeObject->customParameters;
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptProgramDefinition_customParameters( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjectXXXX)->customParameters = *(EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*)value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_MaterialScriptContext_section( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptContext* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptContext*) pObjectXXXX;
				EarthView::World::Graphic::MaterialScriptSection objXXXX = ptrNativeObject->section;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptContext_section( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::MaterialScriptContext*)pObjectXXXX)->section = (EarthView::World::Graphic::MaterialScriptSection)value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_MaterialScriptContext_groupName( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptContext* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptContext*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->groupName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptContext_groupName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::MaterialScriptContext*)pObjectXXXX)->groupName = value1;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_MaterialScriptContext_material( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptContext* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptContext*) pObjectXXXX;
				EarthView::World::Graphic::CMaterialPtr &objXXXX = ptrNativeObject->material;
				EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptContext_material( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::MaterialScriptContext*)pObjectXXXX)->material = *(EarthView::World::Graphic::CMaterialPtr*)value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall Get_EarthView_World_Graphic_MaterialScriptContext_technique( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptContext* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptContext*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->technique;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptContext_technique( void *pObjectXXXX, EarthView::World::Graphic::CTechnique*  value )
			{
				((EarthView::World::Graphic::MaterialScriptContext*)pObjectXXXX)->technique = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPass*  _stdcall Get_EarthView_World_Graphic_MaterialScriptContext_pass( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptContext* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptContext*) pObjectXXXX;
				EarthView::World::Graphic::CPass* objXXXX = ptrNativeObject->pass;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptContext_pass( void *pObjectXXXX, EarthView::World::Graphic::CPass*  value )
			{
				((EarthView::World::Graphic::MaterialScriptContext*)pObjectXXXX)->pass = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTextureUnitState*  _stdcall Get_EarthView_World_Graphic_MaterialScriptContext_textureUnit( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptContext* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptContext*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState* objXXXX = ptrNativeObject->textureUnit;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptContext_textureUnit( void *pObjectXXXX, EarthView::World::Graphic::CTextureUnitState*  value )
			{
				((EarthView::World::Graphic::MaterialScriptContext*)pObjectXXXX)->textureUnit = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_MaterialScriptContext_program( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptContext* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptContext*) pObjectXXXX;
				EarthView::World::Graphic::CGpuProgramPtr &objXXXX = ptrNativeObject->program;
				EarthView::World::Graphic::CGpuProgramPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptContext_program( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::MaterialScriptContext*)pObjectXXXX)->program = *(EarthView::World::Graphic::CGpuProgramPtr*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_MaterialScriptContext_isVertexProgramShadowCaster( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptContext* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptContext*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isVertexProgramShadowCaster;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptContext_isVertexProgramShadowCaster( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::MaterialScriptContext*)pObjectXXXX)->isVertexProgramShadowCaster = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_MaterialScriptContext_isFragmentProgramShadowCaster( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptContext* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptContext*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isFragmentProgramShadowCaster;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptContext_isFragmentProgramShadowCaster( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::MaterialScriptContext*)pObjectXXXX)->isFragmentProgramShadowCaster = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_MaterialScriptContext_isVertexProgramShadowReceiver( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptContext* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptContext*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isVertexProgramShadowReceiver;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptContext_isVertexProgramShadowReceiver( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::MaterialScriptContext*)pObjectXXXX)->isVertexProgramShadowReceiver = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_MaterialScriptContext_isFragmentProgramShadowReceiver( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptContext* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptContext*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isFragmentProgramShadowReceiver;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptContext_isFragmentProgramShadowReceiver( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::MaterialScriptContext*)pObjectXXXX)->isFragmentProgramShadowReceiver = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_MaterialScriptContext_programParams( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptContext* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptContext*) pObjectXXXX;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr &objXXXX = ptrNativeObject->programParams;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptContext_programParams( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::MaterialScriptContext*)pObjectXXXX)->programParams = *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_MaterialScriptContext_numAnimationParametrics( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptContext* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptContext*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->numAnimationParametrics;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptContext_numAnimationParametrics( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::MaterialScriptContext*)pObjectXXXX)->numAnimationParametrics = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::MaterialScriptProgramDefinition*  _stdcall Get_EarthView_World_Graphic_MaterialScriptContext_programDef( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptContext* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptContext*) pObjectXXXX;
				EarthView::World::Graphic::MaterialScriptProgramDefinition* objXXXX = ptrNativeObject->programDef;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptContext_programDef( void *pObjectXXXX, EarthView::World::Graphic::MaterialScriptProgramDefinition*  value )
			{
				((EarthView::World::Graphic::MaterialScriptContext*)pObjectXXXX)->programDef = value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_MaterialScriptContext_passLev( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptContext* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptContext*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->passLev;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptContext_passLev( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::MaterialScriptContext*)pObjectXXXX)->passLev = value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_MaterialScriptContext_stateLev( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptContext* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptContext*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->stateLev;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptContext_stateLev( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::MaterialScriptContext*)pObjectXXXX)->stateLev = value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_MaterialScriptContext_techLev( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptContext* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptContext*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->techLev;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptContext_techLev( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::MaterialScriptContext*)pObjectXXXX)->techLev = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_MaterialScriptContext_defaultParamLines( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptContext* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptContext*) pObjectXXXX;
				EarthView::World::Core::StringVector &objXXXX = ptrNativeObject->defaultParamLines;
				EarthView::World::Core::StringVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptContext_defaultParamLines( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::MaterialScriptContext*)pObjectXXXX)->defaultParamLines = *(EarthView::World::Core::StringVector*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_MaterialScriptContext_lineNo( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptContext* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptContext*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->lineNo;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptContext_lineNo( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::MaterialScriptContext*)pObjectXXXX)->lineNo = value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_MaterialScriptContext_filename( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptContext* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptContext*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->filename;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptContext_filename( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::MaterialScriptContext*)pObjectXXXX)->filename = value1;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_MaterialScriptContext_textureAliases( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MaterialScriptContext* ptrNativeObject = (EarthView::World::Graphic::MaterialScriptContext*) pObjectXXXX;
				EarthView::World::Core::CommonStringPairList &objXXXX = ptrNativeObject->textureAliases;
				EarthView::World::Core::CommonStringPairList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MaterialScriptContext_textureAliases( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::MaterialScriptContext*)pObjectXXXX)->textureAliases = *(EarthView::World::Core::CommonStringPairList*)value;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_Callback)(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CMaterial* mat);
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_Callback)(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CTechnique* tech);
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass_Callback)(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CPass* pass);
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_Callback)(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CTextureUnitState* textureUnit);
			class CMaterialSerializerListenerProxy : public EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener
			{
			private:
				EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_Callback* m_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_Callback;
				EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_Callback* m_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_Callback;
				EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass_Callback* m_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass_Callback;
				EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_Callback* m_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_Callback;
			public:
				CMaterialSerializerListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CMaterialSerializerListener(pList)
				{
					m_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_Callback = NULL;
					m_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_Callback = NULL;
					m_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass_Callback = NULL;
					m_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial(EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique(EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass(EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState(EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_Callback = pCallback;
				}
				virtual void materialEventRaised(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CMaterial* mat)
				{
					if(m_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_Callback(ser, (int)event, skip, mat);
					}
					else
						return this->CMaterialSerializerListener::materialEventRaised(ser, event, skip, mat);
				}
				virtual void techniqueEventRaised(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CTechnique* tech)
				{
					if(m_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_Callback(ser, (int)event, skip, tech);
					}
					else
						return this->CMaterialSerializerListener::techniqueEventRaised(ser, event, skip, tech);
				}
				virtual void passEventRaised(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CPass* pass)
				{
					if(m_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass_Callback(ser, (int)event, skip, pass);
					}
					else
						return this->CMaterialSerializerListener::passEventRaised(ser, event, skip, pass);
				}
				virtual void textureUnitStateEventRaised(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CTextureUnitState* textureUnit)
				{
					if(m_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_Callback(ser, (int)event, skip, textureUnit);
					}
					else
						return this->CMaterialSerializerListener::textureUnitStateEventRaised(ser, event, skip, textureUnit);
				}
			};
			REGISTER_FACTORY_CLASS(CMaterialSerializerListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CMaterial* mat )
			{
				EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) pObjectXXXX;
				if (dynamic_cast<CMaterialSerializerListenerProxy*>((EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener::materialEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, mat);
				else
					ptrNativeObject->materialEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, mat);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial( void *pObjectXXXX, EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_Callback* pCallback )
			{
				CMaterialSerializerListenerProxy* ptr = dynamic_cast<CMaterialSerializerListenerProxy*>((EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CMaterial* mat )
			{
				EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener::materialEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, mat);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CTechnique* tech )
			{
				EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) pObjectXXXX;
				if (dynamic_cast<CMaterialSerializerListenerProxy*>((EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener::techniqueEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, tech);
				else
					ptrNativeObject->techniqueEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, tech);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique( void *pObjectXXXX, EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_Callback* pCallback )
			{
				CMaterialSerializerListenerProxy* ptr = dynamic_cast<CMaterialSerializerListenerProxy*>((EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CTechnique* tech )
			{
				EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener::techniqueEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, tech);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CPass* pass )
			{
				EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) pObjectXXXX;
				if (dynamic_cast<CMaterialSerializerListenerProxy*>((EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener::passEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, pass);
				else
					ptrNativeObject->passEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, pass);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass( void *pObjectXXXX, EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass_Callback* pCallback )
			{
				CMaterialSerializerListenerProxy* ptr = dynamic_cast<CMaterialSerializerListenerProxy*>((EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CPass* pass )
			{
				EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener::passEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, pass);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_gpuProgramRefEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_EVString_CGpuProgramPtr_GpuProgramParametersSharedPtr_CGpuProgramParameters(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const char* attrib, _in const void* program, _in const void* params, _in EarthView::World::Graphic::CGpuProgramParameters* defaultParams )
			{
				EarthView::World::Core::ev_string attrib1 = attrib;
				EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) pObjectXXXX;
				ptrNativeObject->gpuProgramRefEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, attrib1, *(EarthView::World::Graphic::CGpuProgramPtr*)program, *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*)params, defaultParams);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CTextureUnitState* textureUnit )
			{
				EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) pObjectXXXX;
				if (dynamic_cast<CMaterialSerializerListenerProxy*>((EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener::textureUnitStateEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, textureUnit);
				else
					ptrNativeObject->textureUnitStateEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, textureUnit);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState( void *pObjectXXXX, EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_Callback* pCallback )
			{
				CMaterialSerializerListenerProxy* ptr = dynamic_cast<CMaterialSerializerListenerProxy*>((EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CTextureUnitState* textureUnit )
			{
				EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener::textureUnitStateEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, textureUnit);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_queueForExport_void_CMaterialPtr_ev_bool_ev_bool_EVString(void *pObjectXXXX, _in const void* pMat, _in ev_bool clearQueued, _in ev_bool exportDefaults, _in const char* materialName )
			{
				EarthView::World::Core::ev_string materialName1 = materialName;
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->queueForExport(*(EarthView::World::Graphic::CMaterialPtr*)pMat, clearQueued, exportDefaults, materialName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_queueForExport_void_CMaterialPtr_ev_bool_ev_bool(void *pObjectXXXX, _in const void* pMat, _in ev_bool clearQueued, _in ev_bool exportDefaults )
			{
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->queueForExport(*(EarthView::World::Graphic::CMaterialPtr*)pMat, clearQueued, exportDefaults);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_queueForExport_void_CMaterialPtr_ev_bool(void *pObjectXXXX, _in const void* pMat, _in ev_bool clearQueued )
			{
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->queueForExport(*(EarthView::World::Graphic::CMaterialPtr*)pMat, clearQueued);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_queueForExport_void_CMaterialPtr(void *pObjectXXXX, _in const void* pMat )
			{
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->queueForExport(*(EarthView::World::Graphic::CMaterialPtr*)pMat);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_exportQueued_void_EVString_ev_bool_EVString(void *pObjectXXXX, _in const char* filename, _in const ev_bool includeProgDef, _in const char* programFilename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string programFilename1 = programFilename;
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->exportQueued(filename1, includeProgDef, programFilename1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_exportQueued_void_EVString_ev_bool(void *pObjectXXXX, _in const char* filename, _in const ev_bool includeProgDef )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->exportQueued(filename1, includeProgDef);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_exportQueued_void_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->exportQueued(filename1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_exportMaterial_void_CMaterialPtr_EVString_ev_bool_ev_bool_EVString_EVString(void *pObjectXXXX, _in const void* pMat, _in const char* filename, _in ev_bool exportDefaults, _in const ev_bool includeProgDef, _in const char* programFilename, _in const char* materialName )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string programFilename1 = programFilename;
				EarthView::World::Core::ev_string materialName1 = materialName;
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->exportMaterial(*(EarthView::World::Graphic::CMaterialPtr*)pMat, filename1, exportDefaults, includeProgDef, programFilename1, materialName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_exportMaterial_void_CMaterialPtr_EVString_ev_bool_ev_bool_EVString(void *pObjectXXXX, _in const void* pMat, _in const char* filename, _in ev_bool exportDefaults, _in const ev_bool includeProgDef, _in const char* programFilename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string programFilename1 = programFilename;
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->exportMaterial(*(EarthView::World::Graphic::CMaterialPtr*)pMat, filename1, exportDefaults, includeProgDef, programFilename1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_exportMaterial_void_CMaterialPtr_EVString_ev_bool_ev_bool(void *pObjectXXXX, _in const void* pMat, _in const char* filename, _in ev_bool exportDefaults, _in const ev_bool includeProgDef )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->exportMaterial(*(EarthView::World::Graphic::CMaterialPtr*)pMat, filename1, exportDefaults, includeProgDef);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_exportMaterial_void_CMaterialPtr_EVString_ev_bool(void *pObjectXXXX, _in const void* pMat, _in const char* filename, _in ev_bool exportDefaults )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->exportMaterial(*(EarthView::World::Graphic::CMaterialPtr*)pMat, filename1, exportDefaults);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_exportMaterial_void_CMaterialPtr_EVString(void *pObjectXXXX, _in const void* pMat, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->exportMaterial(*(EarthView::World::Graphic::CMaterialPtr*)pMat, filename1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CMaterialSerializer_getQueuedAsString_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getQueuedAsString();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_clearQueue_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->clearQueue();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_parseScript_void_DataStreamPtr_EVString(void *pObjectXXXX, _inout void* stream, _in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->parseScript(*(EarthView::World::Core::DataStreamPtr*)stream, groupName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_addListener_void_CMaterialSerializerListener(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener* ref_listener )
			{
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->addListener(ref_listener);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_removeListener_void_CMaterialSerializerListener(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener* listener )
			{
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->removeListener(listener);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_beginSection_void_ev_uint16_ev_bool(void *pObjectXXXX, _in ev_uint16 level, _in const ev_bool useMainBuffer )
			{
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->beginSection(level, useMainBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_beginSection_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 level )
			{
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->beginSection(level);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_endSection_void_ev_uint16_ev_bool(void *pObjectXXXX, _in ev_uint16 level, _in const ev_bool useMainBuffer )
			{
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->endSection(level, useMainBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_endSection_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 level )
			{
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->endSection(level);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_writeAttribute_void_ev_uint16_EVString_ev_bool(void *pObjectXXXX, _in ev_uint16 level, _in const char* att, _in const ev_bool useMainBuffer )
			{
				EarthView::World::Core::ev_string att1 = att;
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->writeAttribute(level, att1, useMainBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_writeAttribute_void_ev_uint16_EVString(void *pObjectXXXX, _in ev_uint16 level, _in const char* att )
			{
				EarthView::World::Core::ev_string att1 = att;
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->writeAttribute(level, att1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_writeValue_void_EVString_ev_bool(void *pObjectXXXX, _in const char* val, _in const ev_bool useMainBuffer )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->writeValue(val1, useMainBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_writeValue_void_EVString(void *pObjectXXXX, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->writeValue(val1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CMaterialSerializer_quoteWord_EVString_EVString(void *pObjectXXXX, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->quoteWord(val1);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_writeComment_void_ev_uint16_EVString_ev_bool(void *pObjectXXXX, _in ev_uint16 level, _in const char* comment, _in const ev_bool useMainBuffer )
			{
				EarthView::World::Core::ev_string comment1 = comment;
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->writeComment(level, comment1, useMainBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialSerializer_writeComment_void_ev_uint16_EVString(void *pObjectXXXX, _in ev_uint16 level, _in const char* comment )
			{
				EarthView::World::Core::ev_string comment1 = comment;
				EarthView::World::Graphic::CMaterialSerializer* ptrNativeObject = (EarthView::World::Graphic::CMaterialSerializer*) pObjectXXXX;
				ptrNativeObject->writeComment(level, comment1);
			}
		}
	}
}
