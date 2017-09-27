/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderprogram.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace RTShaderSystem
			{
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_getType_GpuProgramType(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					EarthView::World::Graphic::GpuProgramType objXXXX = ptrNativeObject->getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_resolveAutoParameterReal_UniformParameterPtr_AutoConstantType_Real_size_t(void *pObjectXXXX, _in int autoType, _in Real data, _in ev_uint64  size )
				{
					EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr objXXXX = ptrNativeObject->resolveAutoParameterReal((EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)autoType, data, size);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_resolveAutoParameterReal_UniformParameterPtr_AutoConstantType_Real(void *pObjectXXXX, _in int autoType, _in Real data )
				{
					EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr objXXXX = ptrNativeObject->resolveAutoParameterReal((EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)autoType, data);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_resolveAutoParameterReal_UniformParameterPtr_AutoConstantType_GpuConstantType_Real_size_t(void *pObjectXXXX, _in int autoType, _in int type, _in Real data, _in ev_uint64  size )
				{
					EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr objXXXX = ptrNativeObject->resolveAutoParameterReal((EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)autoType, (EarthView::World::Graphic::GpuConstantType)type, data, size);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_resolveAutoParameterReal_UniformParameterPtr_AutoConstantType_GpuConstantType_Real(void *pObjectXXXX, _in int autoType, _in int type, _in Real data )
				{
					EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr objXXXX = ptrNativeObject->resolveAutoParameterReal((EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)autoType, (EarthView::World::Graphic::GpuConstantType)type, data);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_resolveAutoParameterInt_UniformParameterPtr_AutoConstantType_size_t_size_t(void *pObjectXXXX, _in int autoType, _in ev_uint64  data, _in ev_uint64  size )
				{
					EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr objXXXX = ptrNativeObject->resolveAutoParameterInt((EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)autoType, data, size);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_resolveAutoParameterInt_UniformParameterPtr_AutoConstantType_size_t(void *pObjectXXXX, _in int autoType, _in ev_uint64  data )
				{
					EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr objXXXX = ptrNativeObject->resolveAutoParameterInt((EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)autoType, data);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_resolveAutoParameterInt_UniformParameterPtr_AutoConstantType_GpuConstantType_size_t_size_t(void *pObjectXXXX, _in int autoType, _in int type, _in ev_uint64  data, _in ev_uint64  size )
				{
					EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr objXXXX = ptrNativeObject->resolveAutoParameterInt((EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)autoType, (EarthView::World::Graphic::GpuConstantType)type, data, size);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_resolveParameter_UniformParameterPtr_GpuConstantType_int_ev_uint16_EVString_size_t(void *pObjectXXXX, _in int type, _in int index, _in ev_uint16 variability, _in const char* suggestedName, _in ev_uint64  size )
				{
					EarthView::World::Core::ev_string suggestedName1 = suggestedName;
					EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr objXXXX = ptrNativeObject->resolveParameter((EarthView::World::Graphic::GpuConstantType)type, index, variability, suggestedName1, size);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_resolveParameter_UniformParameterPtr_GpuConstantType_int_ev_uint16_EVString(void *pObjectXXXX, _in int type, _in int index, _in ev_uint16 variability, _in const char* suggestedName )
				{
					EarthView::World::Core::ev_string suggestedName1 = suggestedName;
					EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr objXXXX = ptrNativeObject->resolveParameter((EarthView::World::Graphic::GpuConstantType)type, index, variability, suggestedName1);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_getParameterByName_UniformParameterPtr_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr objXXXX = ptrNativeObject->getParameterByName(name1);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_getParameterByAutoType_UniformParameterPtr_AutoConstantType(void *pObjectXXXX, _in int autoType )
				{
					EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr objXXXX = ptrNativeObject->getParameterByAutoType((EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)autoType);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_getParameterByType_UniformParameterPtr_GpuConstantType_int(void *pObjectXXXX, _in int type, _in int index )
				{
					EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr objXXXX = ptrNativeObject->getParameterByType((EarthView::World::Graphic::GpuConstantType)type, index);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_getParameters_UniformParameterList(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					const EarthView::World::Graphic::RTShaderSystem::UniformParameterList& objXXXX = ptrNativeObject->getParameters();
					const EarthView::World::Graphic::RTShaderSystem::UniformParameterList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CFunction*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_createFunction_CFunction_EVString_EVString_FunctionType(void *pObjectXXXX, _in const char* name, _in const char* desc, _in const int functionType )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Core::ev_string desc1 = desc;
					EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunction* objXXXX = ptrNativeObject->createFunction(name1, desc1, (EarthView::World::Graphic::RTShaderSystem::CFunction::FunctionType)functionType);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CFunction*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_getFunctionByName_CFunction_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunction* objXXXX = ptrNativeObject->getFunctionByName(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_getFunctions_ShaderFunctionList(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					const EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList& objXXXX = ptrNativeObject->getFunctions();
					const EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_setEntryPointFunction_void_CFunction(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CFunction* function )
				{
					EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					ptrNativeObject->setEntryPointFunction(function);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CFunction*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_getEntryPointFunction_CFunction(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunction* objXXXX = ptrNativeObject->getEntryPointFunction();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_addDependency_void_EVString(void *pObjectXXXX, _in const char* libFileName )
				{
					EarthView::World::Core::ev_string libFileName1 = libFileName;
					EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					ptrNativeObject->addDependency(libFileName1);
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_getDependencyCount_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					size_t objXXXX = ptrNativeObject->getDependencyCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_getDependency_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getDependency(index);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_setSkeletalAnimationIncluded_void_bool(void *pObjectXXXX, _in bool value )
				{
					EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					ptrNativeObject->setSkeletalAnimationIncluded(value);
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgram_getSkeletalAnimationIncluded_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CProgram* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->getSkeletalAnimationIncluded();
					return objXXXX;
				}
			}
		}
	}
}
