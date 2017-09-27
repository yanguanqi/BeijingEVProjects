/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderfunction.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace RTShaderSystem
			{
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunction_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFunction* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunction_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFunction* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunction_resolveInputParameter_ParameterPtr_Semantic_int_Content_GpuConstantType(void *pObjectXXXX, _in int semantic, _in int index, _in const int content, _in int type )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = ptrNativeObject->resolveInputParameter((EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic)semantic, index, (EarthView::World::Graphic::RTShaderSystem::CParameter::Content)content, (EarthView::World::Graphic::GpuConstantType)type);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunction_resolveOutputParameter_ParameterPtr_Semantic_int_Content_GpuConstantType(void *pObjectXXXX, _in int semantic, _in int index, _in const int content, _in int type )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = ptrNativeObject->resolveOutputParameter((EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic)semantic, index, (EarthView::World::Graphic::RTShaderSystem::CParameter::Content)content, (EarthView::World::Graphic::GpuConstantType)type);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunction_resolveLocalParameter_ParameterPtr_Semantic_int_EVString_GpuConstantType(void *pObjectXXXX, _in int semantic, _in int index, _in const char* name, _in int type )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Graphic::RTShaderSystem::CFunction* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = ptrNativeObject->resolveLocalParameter((EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic)semantic, index, name1, (EarthView::World::Graphic::GpuConstantType)type);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunction_resolveLocalParameter_ParameterPtr_Semantic_int_Content_GpuConstantType(void *pObjectXXXX, _in int semantic, _in int index, _in const int content, _in int type )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = ptrNativeObject->resolveLocalParameter((EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic)semantic, index, (EarthView::World::Graphic::RTShaderSystem::CParameter::Content)content, (EarthView::World::Graphic::GpuConstantType)type);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunction_getParameterByName_ParameterPtr_ShaderParameterList_EVString(_in const void* parameterList, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CFunction::getParameterByName(*(EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*)parameterList, name1);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunction_getParameterBySemantic_ParameterPtr_ShaderParameterList_Semantic_int(_in const void* parameterList, _in const int semantic, _in int index )
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = EarthView::World::Graphic::RTShaderSystem::CFunction::getParameterBySemantic(*(EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*)parameterList, (EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic)semantic, index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunction_getParameterByContent_ParameterPtr_ShaderParameterList_Content_GpuConstantType(void *pObjectXXXX, _in const void* parameterList, _in const int content, _in int type )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr objXXXX = ptrNativeObject->getParameterByContent(*(EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*)parameterList, (EarthView::World::Graphic::RTShaderSystem::CParameter::Content)content, (EarthView::World::Graphic::GpuConstantType)type);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunction_getInputParameters_ShaderParameterList(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFunction* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjectXXXX;
					const EarthView::World::Graphic::RTShaderSystem::ShaderParameterList& objXXXX = ptrNativeObject->getInputParameters();
					const EarthView::World::Graphic::RTShaderSystem::ShaderParameterList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunction_getOutputParameters_ShaderParameterList(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFunction* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjectXXXX;
					const EarthView::World::Graphic::RTShaderSystem::ShaderParameterList& objXXXX = ptrNativeObject->getOutputParameters();
					const EarthView::World::Graphic::RTShaderSystem::ShaderParameterList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunction_getLocalParameters_ShaderParameterList(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFunction* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjectXXXX;
					const EarthView::World::Graphic::RTShaderSystem::ShaderParameterList& objXXXX = ptrNativeObject->getLocalParameters();
					const EarthView::World::Graphic::RTShaderSystem::ShaderParameterList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunction_addAtomInstance_void_CFunctionAtom(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CFunctionAtom* atomInstance )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjectXXXX;
					ptrNativeObject->addAtomInstance(atomInstance);
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunction_deleteAtomInstance_bool_CFunctionAtom(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CFunctionAtom* atomInstance )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->deleteAtomInstance(atomInstance);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunction_sortAtomInstances_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjectXXXX;
					ptrNativeObject->sortAtomInstances();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunction_getAtomInstances_FunctionAtomInstanceList(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList& objXXXX = ptrNativeObject->getAtomInstances();
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunction_addInputParameter_void_ParameterPtr(void *pObjectXXXX, _in void* parameter )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjectXXXX;
					ptrNativeObject->addInputParameter(*(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)parameter);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunction_addOutputParameter_void_ParameterPtr(void *pObjectXXXX, _in void* parameter )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjectXXXX;
					ptrNativeObject->addOutputParameter(*(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)parameter);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunction_deleteInputParameter_void_ParameterPtr(void *pObjectXXXX, _in void* parameter )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjectXXXX;
					ptrNativeObject->deleteInputParameter(*(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)parameter);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunction_deleteOutputParameter_void_ParameterPtr(void *pObjectXXXX, _in void* parameter )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjectXXXX;
					ptrNativeObject->deleteOutputParameter(*(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)parameter);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunction_deleteAllInputParameters_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjectXXXX;
					ptrNativeObject->deleteAllInputParameters();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunction_deleteAllOutputParameters_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjectXXXX;
					ptrNativeObject->deleteAllOutputParameters();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CFunction_getFunctionType_FunctionType(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFunction* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunction::FunctionType objXXXX = ptrNativeObject->getFunctionType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderFunctionList_push_back_void_CFunction(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CFunction* t )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjectXXXX;
					ptrNativeObject->push_back(t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderFunctionList_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CFunction*  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderFunctionList_front_CFunction(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunction* objXXXX = ptrNativeObject->front();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CFunction*  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderFunctionList_back_CFunction(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunction* objXXXX = ptrNativeObject->back();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderFunctionList_insert_void_ev_uint32_CFunction(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::RTShaderSystem::CFunction*& t )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjectXXXX;
					ptrNativeObject->insert(pos, t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderFunctionList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderFunctionList_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CFunction*  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderFunctionList_OperatorIndex_CFunction_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList& objYYYY = *(EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunction* objXXXX = objYYYY[n];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CFunction*  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderFunctionList_at_CFunction_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunction* objXXXX = ptrNativeObject->at(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderFunctionList_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderFunctionList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderFunctionList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_ShaderFunctionList_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjectXXXX;
					ptrNativeObject->clear();
				}
			}
		}
	}
}
