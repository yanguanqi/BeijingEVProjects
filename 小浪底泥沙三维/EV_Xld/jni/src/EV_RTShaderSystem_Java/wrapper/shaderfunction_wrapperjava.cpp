/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderfunction.h"
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
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_00024FunctionTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CFunction::FFT_INTERNAL,
						CFunction::FFT_VS_MAIN,
						CFunction::FFT_PS_MAIN
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CFunction *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjXXXX;
					const EVString& __values1 = pObjectX->getName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_getDescription_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CFunction *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjXXXX;
					const EVString& __values1 = pObjectX->getDescription();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_resolveInputParameter_1Semantic_1int_1Content_1GpuConstantType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint semantic_j, jint index_j, jint content_j, jint type_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic semantic = (EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic) semantic_j;
					int index = (int) index_j;
					const EarthView::World::Graphic::RTShaderSystem::CParameter::Content content = (EarthView::World::Graphic::RTShaderSystem::CParameter::Content) content_j;
					EarthView::World::Graphic::GpuConstantType type = (EarthView::World::Graphic::GpuConstantType) type_j;
					EarthView::World::Graphic::RTShaderSystem::CFunction *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = pObjectX->resolveInputParameter(semantic, index, content, type);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_resolveOutputParameter_1Semantic_1int_1Content_1GpuConstantType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint semantic_j, jint index_j, jint content_j, jint type_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic semantic = (EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic) semantic_j;
					int index = (int) index_j;
					const EarthView::World::Graphic::RTShaderSystem::CParameter::Content content = (EarthView::World::Graphic::RTShaderSystem::CParameter::Content) content_j;
					EarthView::World::Graphic::GpuConstantType type = (EarthView::World::Graphic::GpuConstantType) type_j;
					EarthView::World::Graphic::RTShaderSystem::CFunction *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = pObjectX->resolveOutputParameter(semantic, index, content, type);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_resolveLocalParameter_1Semantic_1int_1EVString_1GpuConstantType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint semantic_j, jint index_j, jstring name_j, jint type_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic semantic = (EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic) semantic_j;
					int index = (int) index_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Graphic::GpuConstantType type = (EarthView::World::Graphic::GpuConstantType) type_j;
					EarthView::World::Graphic::RTShaderSystem::CFunction *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = pObjectX->resolveLocalParameter(semantic, index, name, type);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_resolveLocalParameter_1Semantic_1int_1Content_1GpuConstantType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint semantic_j, jint index_j, jint content_j, jint type_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic semantic = (EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic) semantic_j;
					int index = (int) index_j;
					const EarthView::World::Graphic::RTShaderSystem::CParameter::Content content = (EarthView::World::Graphic::RTShaderSystem::CParameter::Content) content_j;
					EarthView::World::Graphic::GpuConstantType type = (EarthView::World::Graphic::GpuConstantType) type_j;
					EarthView::World::Graphic::RTShaderSystem::CFunction *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = pObjectX->resolveLocalParameter(semantic, index, content, type);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_getParameterByName_1ShaderParameterList_1EVString(JNIEnv *__env , jclass __clazz, jlong parameterList_j, jstring name_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::ShaderParameterList &parameterList = *(EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) parameterList_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CFunction::getParameterByName(parameterList, name);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_getParameterBySemantic_1ShaderParameterList_1Semantic_1int(JNIEnv *__env , jclass __clazz, jlong parameterList_j, jint semantic_j, jint index_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::ShaderParameterList &parameterList = *(EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) parameterList_j;
					const EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic semantic = (EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic) semantic_j;
					int index = (int) index_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CFunction::getParameterBySemantic(parameterList, semantic, index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_getParameterByContent_1ShaderParameterList_1Content_1GpuConstantType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong parameterList_j, jint content_j, jint type_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::ShaderParameterList &parameterList = *(EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) parameterList_j;
					const EarthView::World::Graphic::RTShaderSystem::CParameter::Content content = (EarthView::World::Graphic::RTShaderSystem::CParameter::Content) content_j;
					EarthView::World::Graphic::GpuConstantType type = (EarthView::World::Graphic::GpuConstantType) type_j;
					EarthView::World::Graphic::RTShaderSystem::CFunction *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = pObjectX->getParameterByContent(parameterList, content, type);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_getInputParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CFunction *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjXXXX;
					const EarthView::World::Graphic::RTShaderSystem::ShaderParameterList& __values1 = pObjectX->getInputParameters();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_getOutputParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CFunction *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjXXXX;
					const EarthView::World::Graphic::RTShaderSystem::ShaderParameterList& __values1 = pObjectX->getOutputParameters();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_getLocalParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CFunction *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjXXXX;
					const EarthView::World::Graphic::RTShaderSystem::ShaderParameterList& __values1 = pObjectX->getLocalParameters();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_addAtomInstance_1CFunctionAtom(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong atomInstance_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionAtom *atomInstance = (EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*) atomInstance_j;
					EarthView::World::Graphic::RTShaderSystem::CFunction *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjXXXX;
					pObjectX->addAtomInstance(atomInstance);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_deleteAtomInstance_1CFunctionAtom(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong atomInstance_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionAtom *atomInstance = (EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*) atomInstance_j;
					EarthView::World::Graphic::RTShaderSystem::CFunction *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjXXXX;
					bool __values1 = pObjectX->deleteAtomInstance(atomInstance);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_sortAtomInstances_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjXXXX;
					pObjectX->sortAtomInstances();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_getAtomInstances_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList& __values1 = pObjectX->getAtomInstances();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_addInputParameter_1ParameterPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong parameter_j)
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr parameter = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) parameter_j;
					EarthView::World::Graphic::RTShaderSystem::CFunction *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjXXXX;
					pObjectX->addInputParameter(parameter);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_addOutputParameter_1ParameterPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong parameter_j)
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr parameter = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) parameter_j;
					EarthView::World::Graphic::RTShaderSystem::CFunction *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjXXXX;
					pObjectX->addOutputParameter(parameter);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_deleteInputParameter_1ParameterPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong parameter_j)
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr parameter = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) parameter_j;
					EarthView::World::Graphic::RTShaderSystem::CFunction *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjXXXX;
					pObjectX->deleteInputParameter(parameter);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_deleteOutputParameter_1ParameterPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong parameter_j)
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr parameter = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) parameter_j;
					EarthView::World::Graphic::RTShaderSystem::CFunction *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjXXXX;
					pObjectX->deleteOutputParameter(parameter);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_deleteAllInputParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjXXXX;
					pObjectX->deleteAllInputParameters();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_deleteAllOutputParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjXXXX;
					pObjectX->deleteAllOutputParameters();
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_Function_getFunctionType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CFunction *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunction*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunction::FunctionType __values1 = pObjectX->getFunctionType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderFunctionList_push_1back_1CFunction(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction *t = (EarthView::World::Graphic::RTShaderSystem::CFunction*) t_j;
					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderFunctionList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderFunctionList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunction*& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderFunctionList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunction*& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderFunctionList_insert_1ev_1uint32_1CFunction(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Graphic::RTShaderSystem::CFunction *&t = *(EarthView::World::Graphic::RTShaderSystem::CFunction**) t_j;
					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderFunctionList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderFunctionList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderFunctionList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList& pObjectX = *(EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Graphic::RTShaderSystem::CFunction*& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderFunctionList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunction*& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderFunctionList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderFunctionList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderFunctionList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderFunctionList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList*) pObjXXXX;
					pObjectX->clear();
				}
			}
		}
	}
}
