/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderprogram.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace RTShaderSystem
			{
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					EarthView::World::Graphic::GpuProgramType __values1 = pObjectX->getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_resolveAutoParameterReal_1AutoConstantType_1Real_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint autoType_j, jdouble data_j, jlong size_j)
				{
					EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType autoType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType) autoType_j;
					Real data = (Real) data_j;
					size_t size = (size_t) size_j;
					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr __values1 = pObjectX->resolveAutoParameterReal(autoType, data, size);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_resolveAutoParameterReal_1AutoConstantType_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint autoType_j, jdouble data_j)
				{
					EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType autoType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType) autoType_j;
					Real data = (Real) data_j;
					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr __values1 = pObjectX->resolveAutoParameterReal(autoType, data);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_resolveAutoParameterReal_1AutoConstantType_1GpuConstantType_1Real_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint autoType_j, jint type_j, jdouble data_j, jlong size_j)
				{
					EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType autoType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType) autoType_j;
					EarthView::World::Graphic::GpuConstantType type = (EarthView::World::Graphic::GpuConstantType) type_j;
					Real data = (Real) data_j;
					size_t size = (size_t) size_j;
					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr __values1 = pObjectX->resolveAutoParameterReal(autoType, type, data, size);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_resolveAutoParameterReal_1AutoConstantType_1GpuConstantType_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint autoType_j, jint type_j, jdouble data_j)
				{
					EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType autoType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType) autoType_j;
					EarthView::World::Graphic::GpuConstantType type = (EarthView::World::Graphic::GpuConstantType) type_j;
					Real data = (Real) data_j;
					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr __values1 = pObjectX->resolveAutoParameterReal(autoType, type, data);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_resolveAutoParameterInt_1AutoConstantType_1size_1t_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint autoType_j, jlong data_j, jlong size_j)
				{
					EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType autoType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType) autoType_j;
					size_t data = (size_t) data_j;
					size_t size = (size_t) size_j;
					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr __values1 = pObjectX->resolveAutoParameterInt(autoType, data, size);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_resolveAutoParameterInt_1AutoConstantType_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint autoType_j, jlong data_j)
				{
					EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType autoType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType) autoType_j;
					size_t data = (size_t) data_j;
					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr __values1 = pObjectX->resolveAutoParameterInt(autoType, data);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_resolveAutoParameterInt_1AutoConstantType_1GpuConstantType_1size_1t_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint autoType_j, jint type_j, jlong data_j, jlong size_j)
				{
					EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType autoType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType) autoType_j;
					EarthView::World::Graphic::GpuConstantType type = (EarthView::World::Graphic::GpuConstantType) type_j;
					size_t data = (size_t) data_j;
					size_t size = (size_t) size_j;
					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr __values1 = pObjectX->resolveAutoParameterInt(autoType, type, data, size);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_resolveParameter_1GpuConstantType_1int_1ev_1uint16_1EVString_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j, jint index_j, jint variability_j, jstring suggestedName_j, jlong size_j)
				{
					EarthView::World::Graphic::GpuConstantType type = (EarthView::World::Graphic::GpuConstantType) type_j;
					int index = (int) index_j;
					ev_uint16 variability = (ev_uint16) variability_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* suggestedName_ch = (const ev_char*)__env->GetStringUTFChars(suggestedName_j,JNI_FALSE);
					const EVString suggestedName = suggestedName_ch;
					__env->ReleaseStringUTFChars(suggestedName_j, (const char *)suggestedName_ch);
					#else
					const ev_wchar* suggestedName_ch = (const ev_wchar*)__env->GetStringChars(suggestedName_j,JNI_FALSE);
					const EVString suggestedName = suggestedName_ch;
					__env->ReleaseStringChars(suggestedName_j, (const jchar *)suggestedName_ch);
					#endif
					size_t size = (size_t) size_j;
					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr __values1 = pObjectX->resolveParameter(type, index, variability, suggestedName, size);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_resolveParameter_1GpuConstantType_1int_1ev_1uint16_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j, jint index_j, jint variability_j, jstring suggestedName_j)
				{
					EarthView::World::Graphic::GpuConstantType type = (EarthView::World::Graphic::GpuConstantType) type_j;
					int index = (int) index_j;
					ev_uint16 variability = (ev_uint16) variability_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* suggestedName_ch = (const ev_char*)__env->GetStringUTFChars(suggestedName_j,JNI_FALSE);
					const EVString suggestedName = suggestedName_ch;
					__env->ReleaseStringUTFChars(suggestedName_j, (const char *)suggestedName_ch);
					#else
					const ev_wchar* suggestedName_ch = (const ev_wchar*)__env->GetStringChars(suggestedName_j,JNI_FALSE);
					const EVString suggestedName = suggestedName_ch;
					__env->ReleaseStringChars(suggestedName_j, (const jchar *)suggestedName_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr __values1 = pObjectX->resolveParameter(type, index, variability, suggestedName);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_getParameterByName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr __values1 = pObjectX->getParameterByName(name);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_getParameterByAutoType_1AutoConstantType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint autoType_j)
				{
					EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType autoType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType) autoType_j;
					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr __values1 = pObjectX->getParameterByAutoType(autoType);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_getParameterByType_1GpuConstantType_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j, jint index_j)
				{
					EarthView::World::Graphic::GpuConstantType type = (EarthView::World::Graphic::GpuConstantType) type_j;
					int index = (int) index_j;
					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr __values1 = pObjectX->getParameterByType(type, index);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_getParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					const EarthView::World::Graphic::RTShaderSystem::UniformParameterList& __values1 = pObjectX->getParameters();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_createFunction_1EVString_1EVString_1FunctionType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring desc_j, jint functionType_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* desc_ch = (const ev_char*)__env->GetStringUTFChars(desc_j,JNI_FALSE);
					const EVString desc = desc_ch;
					__env->ReleaseStringUTFChars(desc_j, (const char *)desc_ch);
					#else
					const ev_wchar* desc_ch = (const ev_wchar*)__env->GetStringChars(desc_j,JNI_FALSE);
					const EVString desc = desc_ch;
					__env->ReleaseStringChars(desc_j, (const jchar *)desc_ch);
					#endif
					const EarthView::World::Graphic::RTShaderSystem::CFunction::FunctionType functionType = (EarthView::World::Graphic::RTShaderSystem::CFunction::FunctionType) functionType_j;
					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunction* __values1 = pObjectX->createFunction(name, desc, functionType);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_getFunctionByName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunction* __values1 = pObjectX->getFunctionByName(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_getFunctions_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					const EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList& __values1 = pObjectX->getFunctions();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_setEntryPointFunction_1CFunction(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong function_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction *function = (EarthView::World::Graphic::RTShaderSystem::CFunction*) function_j;
					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					pObjectX->setEntryPointFunction(function);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_getEntryPointFunction_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunction* __values1 = pObjectX->getEntryPointFunction();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_addDependency_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring libFileName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* libFileName_ch = (const ev_char*)__env->GetStringUTFChars(libFileName_j,JNI_FALSE);
					const EVString libFileName = libFileName_ch;
					__env->ReleaseStringUTFChars(libFileName_j, (const char *)libFileName_ch);
					#else
					const ev_wchar* libFileName_ch = (const ev_wchar*)__env->GetStringChars(libFileName_j,JNI_FALSE);
					const EVString libFileName = libFileName_ch;
					__env->ReleaseStringChars(libFileName_j, (const jchar *)libFileName_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					pObjectX->addDependency(libFileName);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_getDependencyCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					size_t __values1 = pObjectX->getDependencyCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_getDependency_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					const EVString& __values1 = pObjectX->getDependency(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_setSkeletalAnimationIncluded_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					bool value = (bool) value_j;
					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					pObjectX->setSkeletalAnimationIncluded(value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_Program_getSkeletalAnimationIncluded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CProgram *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgram*) pObjXXXX;
					bool __values1 = pObjectX->getSkeletalAnimationIncluded();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
