/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/materialserializer.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_MaterialScriptSectionHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					MSS_NONE,
					MSS_MATERIAL,
					MSS_TECHNIQUE,
					MSS_PASS,
					MSS_TEXTUREUNIT,
					MSS_PROGRAM_REF,
					MSS_PROGRAM,
					MSS_DEFAULT_PARAMETERS,
					MSS_TEXTURESOURCE
				};
				jintArray array = __env->NewIntArray(9);
				__env->SetIntArrayRegion(array, 0, 9, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_get_1name_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->name;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_set_1name_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->name = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_get_1progType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->progType);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_set_1progType_1GpuProgramType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjXXXX;
				pObjectX->progType = (EarthView::World::Graphic::GpuProgramType)__values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_get_1language_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->language;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_set_1language_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->language = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_get_1source_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->source;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_set_1source_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->source = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_get_1syntax_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->syntax;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_set_1syntax_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->syntax = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_get_1supportsSkeletalAnimation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->supportsSkeletalAnimation);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_set_1supportsSkeletalAnimation_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjXXXX;
				pObjectX->supportsSkeletalAnimation = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_get_1supportsMorphAnimation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->supportsMorphAnimation);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_set_1supportsMorphAnimation_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjXXXX;
				pObjectX->supportsMorphAnimation = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_get_1supportsPoseAnimation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->supportsPoseAnimation);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_set_1supportsPoseAnimation_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjXXXX;
				pObjectX->supportsPoseAnimation = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_get_1usesVertexTextureFetch_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->usesVertexTextureFetch);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_set_1usesVertexTextureFetch_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjXXXX;
				pObjectX->usesVertexTextureFetch = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_00024StringPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->first;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_00024StringPair_set_1first_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->first = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_00024StringPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->second;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_00024StringPair_set_1second_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->second = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_00024MaterialStringPairList_push_1back_1StringPair(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair t = *(EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair*) t_j;
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_00024MaterialStringPairList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_00024MaterialStringPairList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjXXXX;
				EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_00024MaterialStringPairList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjXXXX;
				EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_00024MaterialStringPairList_insert_1ev_1uint32_1StringPair(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair &t = *(EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair*) t_j;
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_00024MaterialStringPairList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_00024MaterialStringPairList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_00024MaterialStringPairList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList& pObjectX = *(EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_00024MaterialStringPairList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjXXXX;
				EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_00024MaterialStringPairList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_00024MaterialStringPairList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_00024MaterialStringPairList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_00024MaterialStringPairList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_get_1customParameters_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->customParameters);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptProgramDefinition_set_1customParameters_1MaterialStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptProgramDefinition *pObjectX = (EarthView::World::Graphic::MaterialScriptProgramDefinition*)pObjXXXX;
				pObjectX->customParameters = *(EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList*) __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_get_1section_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->section);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_set_1section_1MaterialScriptSection(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				pObjectX->section = (EarthView::World::Graphic::MaterialScriptSection)__values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_get_1groupName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->groupName;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_set_1groupName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->groupName = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_get_1material_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->material);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_set_1material_1CMaterialPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				pObjectX->material = *(EarthView::World::Graphic::CMaterialPtr*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_get_1technique_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->technique);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_set_1technique_1CTechnique(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				pObjectX->technique = (EarthView::World::Graphic::CTechnique*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_get_1pass_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->pass);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_set_1pass_1CPass(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				pObjectX->pass = (EarthView::World::Graphic::CPass*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_get_1textureUnit_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->textureUnit);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_set_1textureUnit_1CTextureUnitState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				pObjectX->textureUnit = (EarthView::World::Graphic::CTextureUnitState*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_get_1program_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->program);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_set_1program_1CGpuProgramPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				pObjectX->program = *(EarthView::World::Graphic::CGpuProgramPtr*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_get_1isVertexProgramShadowCaster_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->isVertexProgramShadowCaster);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_set_1isVertexProgramShadowCaster_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				pObjectX->isVertexProgramShadowCaster = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_get_1isFragmentProgramShadowCaster_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->isFragmentProgramShadowCaster);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_set_1isFragmentProgramShadowCaster_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				pObjectX->isFragmentProgramShadowCaster = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_get_1isVertexProgramShadowReceiver_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->isVertexProgramShadowReceiver);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_set_1isVertexProgramShadowReceiver_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				pObjectX->isVertexProgramShadowReceiver = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_get_1isFragmentProgramShadowReceiver_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->isFragmentProgramShadowReceiver);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_set_1isFragmentProgramShadowReceiver_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				pObjectX->isFragmentProgramShadowReceiver = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_get_1programParams_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->programParams);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_set_1programParams_1GpuProgramParametersSharedPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				pObjectX->programParams = *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*) __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_get_1numAnimationParametrics_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->numAnimationParametrics);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_set_1numAnimationParametrics_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				pObjectX->numAnimationParametrics = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_get_1programDef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->programDef);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_set_1programDef_1MaterialScriptProgramDefinition(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				pObjectX->programDef = (EarthView::World::Graphic::MaterialScriptProgramDefinition*) __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_get_1passLev_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->passLev);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_set_1passLev_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				pObjectX->passLev = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_get_1stateLev_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->stateLev);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_set_1stateLev_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				pObjectX->stateLev = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_get_1techLev_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->techLev);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_set_1techLev_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				pObjectX->techLev = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_get_1defaultParamLines_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->defaultParamLines);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_set_1defaultParamLines_1StringVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				pObjectX->defaultParamLines = *(EarthView::World::Core::StringVector*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_get_1lineNo_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->lineNo);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_set_1lineNo_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				pObjectX->lineNo = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_get_1filename_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->filename;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_set_1filename_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->filename = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_get_1textureAliases_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->textureAliases);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialScriptContext_set_1textureAliases_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::MaterialScriptContext *pObjectX = (EarthView::World::Graphic::MaterialScriptContext*)pObjXXXX;
				pObjectX->textureAliases = *(EarthView::World::Core::CommonStringPairList*) __values1_j;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_MaterialSerializer_00024SerializeEventHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CMaterialSerializer::MSE_PRE_WRITE,
					CMaterialSerializer::MSE_WRITE_BEGIN,
					CMaterialSerializer::MSE_WRITE_END,
					CMaterialSerializer::MSE_POST_WRITE
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			class JCMaterialSerializerListenerProxy : public EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener
			{
			 private:
				EarthView::World::Core::ev_string m_materialEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_callback;
				EarthView::World::Core::ev_string m_techniqueEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_callback;
				EarthView::World::Core::ev_string m_passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass_callback;
				EarthView::World::Core::ev_string m_textureUnitStateEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_callback;
			public:
				JCMaterialSerializerListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CMaterialSerializerListener(pList)
				{
				}
				ev_void unRegisterJavaReference()
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
					if(__gr != NULL)
					{
						delete __gr;
						this->registerJavaReference(NULL);
					}
				}
			public:
				void register_materialEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_materialEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_callback = __method;
				}
				void register_techniqueEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_techniqueEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_callback = __method;
				}
				void register_passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass_callback = __method;
				}
				void register_textureUnitStateEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_textureUnitStateEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_callback = __method;
				}
				virtual void materialEventRaised(EarthView::World::Graphic::CMaterialSerializer* ser, EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, ev_bool& skip, const EarthView::World::Graphic::CMaterial* mat)
				{
					if (this->_gRef != NULL && this->m_materialEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong ser_j = (jlong) ser;
						jint event_j = (jint) event;
						jlong skip_j = (jlong) &skip;
						jlong mat_j = (jlong) mat;
						jmethodID __method = __gr->getMethod("materialEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_callback");
						__env->CallVoidMethod(__obj, __method , ser_j, event_j, skip_j, mat_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CMaterialSerializerListener::materialEventRaised(ser, event, skip, mat);
					}
				}
				virtual void techniqueEventRaised(EarthView::World::Graphic::CMaterialSerializer* ser, EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, ev_bool& skip, const EarthView::World::Graphic::CTechnique* tech)
				{
					if (this->_gRef != NULL && this->m_techniqueEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong ser_j = (jlong) ser;
						jint event_j = (jint) event;
						jlong skip_j = (jlong) &skip;
						jlong tech_j = (jlong) tech;
						jmethodID __method = __gr->getMethod("techniqueEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_callback");
						__env->CallVoidMethod(__obj, __method , ser_j, event_j, skip_j, tech_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CMaterialSerializerListener::techniqueEventRaised(ser, event, skip, tech);
					}
				}
				virtual void passEventRaised(EarthView::World::Graphic::CMaterialSerializer* ser, EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, ev_bool& skip, const EarthView::World::Graphic::CPass* pass)
				{
					if (this->_gRef != NULL && this->m_passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong ser_j = (jlong) ser;
						jint event_j = (jint) event;
						jlong skip_j = (jlong) &skip;
						jlong pass_j = (jlong) pass;
						jmethodID __method = __gr->getMethod("passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass_callback");
						__env->CallVoidMethod(__obj, __method , ser_j, event_j, skip_j, pass_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CMaterialSerializerListener::passEventRaised(ser, event, skip, pass);
					}
				}
				virtual void textureUnitStateEventRaised(EarthView::World::Graphic::CMaterialSerializer* ser, EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, ev_bool& skip, const EarthView::World::Graphic::CTextureUnitState* textureUnit)
				{
					if (this->_gRef != NULL && this->m_textureUnitStateEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong ser_j = (jlong) ser;
						jint event_j = (jint) event;
						jlong skip_j = (jlong) &skip;
						jlong textureUnit_j = (jlong) textureUnit;
						jmethodID __method = __gr->getMethod("textureUnitStateEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_callback");
						__env->CallVoidMethod(__obj, __method , ser_j, event_j, skip_j, textureUnit_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CMaterialSerializerListener::textureUnitStateEventRaised(ser, event, skip, textureUnit);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCMaterialSerializerListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_00024MaterialSerializerListener_materialEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CMaterial(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jint event_j, jlong skip_j, jlong mat_j)
			{
				EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
				EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event = (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent) event_j;
				ev_bool &skip = *(ev_bool*) skip_j;
				const EarthView::World::Graphic::CMaterial *mat = (const EarthView::World::Graphic::CMaterial*) mat_j;
				EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener *pObjectX = (EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMaterialSerializerListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener::materialEventRaised(ser, event, skip, mat);
				}
				else
				{
					pObjectX->materialEventRaised(ser, event, skip, mat);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_00024MaterialSerializerListener_register_1materialEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CMaterial(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMaterialSerializerListenerProxy *pObjectX = (JCMaterialSerializerListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_materialEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"materialEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_callback", "(JIJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_00024MaterialSerializerListener_materialEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CMaterial_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jint event_j, jlong skip_j, jlong mat_j)
			{
				EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
				EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event = (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent) event_j;
				ev_bool &skip = *(ev_bool*) skip_j;
				const EarthView::World::Graphic::CMaterial *mat = (const EarthView::World::Graphic::CMaterial*) mat_j;
				EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener *pObjectX = (EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener::materialEventRaised(ser, event, skip, mat);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_00024MaterialSerializerListener_techniqueEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CTechnique(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jint event_j, jlong skip_j, jlong tech_j)
			{
				EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
				EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event = (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent) event_j;
				ev_bool &skip = *(ev_bool*) skip_j;
				const EarthView::World::Graphic::CTechnique *tech = (const EarthView::World::Graphic::CTechnique*) tech_j;
				EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener *pObjectX = (EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMaterialSerializerListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener::techniqueEventRaised(ser, event, skip, tech);
				}
				else
				{
					pObjectX->techniqueEventRaised(ser, event, skip, tech);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_00024MaterialSerializerListener_register_1techniqueEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CTechnique(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMaterialSerializerListenerProxy *pObjectX = (JCMaterialSerializerListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_techniqueEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"techniqueEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_callback", "(JIJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_00024MaterialSerializerListener_techniqueEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CTechnique_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jint event_j, jlong skip_j, jlong tech_j)
			{
				EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
				EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event = (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent) event_j;
				ev_bool &skip = *(ev_bool*) skip_j;
				const EarthView::World::Graphic::CTechnique *tech = (const EarthView::World::Graphic::CTechnique*) tech_j;
				EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener *pObjectX = (EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener::techniqueEventRaised(ser, event, skip, tech);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_00024MaterialSerializerListener_passEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jint event_j, jlong skip_j, jlong pass_j)
			{
				EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
				EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event = (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent) event_j;
				ev_bool &skip = *(ev_bool*) skip_j;
				const EarthView::World::Graphic::CPass *pass = (const EarthView::World::Graphic::CPass*) pass_j;
				EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener *pObjectX = (EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMaterialSerializerListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener::passEventRaised(ser, event, skip, pass);
				}
				else
				{
					pObjectX->passEventRaised(ser, event, skip, pass);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_00024MaterialSerializerListener_register_1passEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CPass(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMaterialSerializerListenerProxy *pObjectX = (JCMaterialSerializerListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass_callback", "(JIJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_00024MaterialSerializerListener_passEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CPass_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jint event_j, jlong skip_j, jlong pass_j)
			{
				EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
				EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event = (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent) event_j;
				ev_bool &skip = *(ev_bool*) skip_j;
				const EarthView::World::Graphic::CPass *pass = (const EarthView::World::Graphic::CPass*) pass_j;
				EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener *pObjectX = (EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener::passEventRaised(ser, event, skip, pass);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_00024MaterialSerializerListener_gpuProgramRefEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1EVString_1CGpuProgramPtr_1GpuProgramParametersSharedPtr_1CGpuProgramParameters(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jint event_j, jlong skip_j, jstring attrib_j, jlong program_j, jlong params_j, jlong defaultParams_j)
			{
				EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
				EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event = (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent) event_j;
				ev_bool &skip = *(ev_bool*) skip_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* attrib_ch = (const ev_char*)__env->GetStringUTFChars(attrib_j,JNI_FALSE);
				const EVString attrib = attrib_ch;
				__env->ReleaseStringUTFChars(attrib_j, (const char *)attrib_ch);
				#else
				const ev_wchar* attrib_ch = (const ev_wchar*)__env->GetStringChars(attrib_j,JNI_FALSE);
				const EVString attrib = attrib_ch;
				__env->ReleaseStringChars(attrib_j, (const jchar *)attrib_ch);
				#endif
				const EarthView::World::Graphic::CGpuProgramPtr &program = *(EarthView::World::Graphic::CGpuProgramPtr*) program_j;
				const EarthView::World::Graphic::GpuProgramParametersSharedPtr &params = *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*) params_j;
				EarthView::World::Graphic::CGpuProgramParameters *defaultParams = (EarthView::World::Graphic::CGpuProgramParameters*) defaultParams_j;
				EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener *pObjectX = (EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) pObjXXXX;
				pObjectX->gpuProgramRefEventRaised(ser, event, skip, attrib, program, params, defaultParams);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_00024MaterialSerializerListener_textureUnitStateEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CTextureUnitState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jint event_j, jlong skip_j, jlong textureUnit_j)
			{
				EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
				EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event = (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent) event_j;
				ev_bool &skip = *(ev_bool*) skip_j;
				const EarthView::World::Graphic::CTextureUnitState *textureUnit = (const EarthView::World::Graphic::CTextureUnitState*) textureUnit_j;
				EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener *pObjectX = (EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMaterialSerializerListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener::textureUnitStateEventRaised(ser, event, skip, textureUnit);
				}
				else
				{
					pObjectX->textureUnitStateEventRaised(ser, event, skip, textureUnit);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_00024MaterialSerializerListener_register_1textureUnitStateEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CTextureUnitState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMaterialSerializerListenerProxy *pObjectX = (JCMaterialSerializerListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_textureUnitStateEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"textureUnitStateEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_callback", "(JIJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_00024MaterialSerializerListener_textureUnitStateEventRaised_1CMaterialSerializer_1SerializeEvent_1ev_1bool_1CTextureUnitState_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jint event_j, jlong skip_j, jlong textureUnit_j)
			{
				EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
				EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event = (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent) event_j;
				ev_bool &skip = *(ev_bool*) skip_j;
				const EarthView::World::Graphic::CTextureUnitState *textureUnit = (const EarthView::World::Graphic::CTextureUnitState*) textureUnit_j;
				EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener *pObjectX = (EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener::textureUnitStateEventRaised(ser, event, skip, textureUnit);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_queueForExport_1CMaterialPtr_1ev_1bool_1ev_1bool_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMat_j, jboolean clearQueued_j, jboolean exportDefaults_j, jstring materialName_j)
			{
				const EarthView::World::Graphic::CMaterialPtr &pMat = *(EarthView::World::Graphic::CMaterialPtr*) pMat_j;
				ev_bool clearQueued = (ev_bool) clearQueued_j;
				ev_bool exportDefaults = (ev_bool) exportDefaults_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
				const EVString materialName = materialName_ch;
				__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
				#else
				const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
				const EVString materialName = materialName_ch;
				__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
				#endif
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->queueForExport(pMat, clearQueued, exportDefaults, materialName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_queueForExport_1CMaterialPtr_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMat_j, jboolean clearQueued_j, jboolean exportDefaults_j)
			{
				const EarthView::World::Graphic::CMaterialPtr &pMat = *(EarthView::World::Graphic::CMaterialPtr*) pMat_j;
				ev_bool clearQueued = (ev_bool) clearQueued_j;
				ev_bool exportDefaults = (ev_bool) exportDefaults_j;
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->queueForExport(pMat, clearQueued, exportDefaults);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_queueForExport_1CMaterialPtr_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMat_j, jboolean clearQueued_j)
			{
				const EarthView::World::Graphic::CMaterialPtr &pMat = *(EarthView::World::Graphic::CMaterialPtr*) pMat_j;
				ev_bool clearQueued = (ev_bool) clearQueued_j;
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->queueForExport(pMat, clearQueued);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_queueForExport_1CMaterialPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMat_j)
			{
				const EarthView::World::Graphic::CMaterialPtr &pMat = *(EarthView::World::Graphic::CMaterialPtr*) pMat_j;
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->queueForExport(pMat);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_exportQueued_1EVString_1ev_1bool_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jboolean includeProgDef_j, jstring programFilename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				const ev_bool includeProgDef = (ev_bool) includeProgDef_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* programFilename_ch = (const ev_char*)__env->GetStringUTFChars(programFilename_j,JNI_FALSE);
				const EVString programFilename = programFilename_ch;
				__env->ReleaseStringUTFChars(programFilename_j, (const char *)programFilename_ch);
				#else
				const ev_wchar* programFilename_ch = (const ev_wchar*)__env->GetStringChars(programFilename_j,JNI_FALSE);
				const EVString programFilename = programFilename_ch;
				__env->ReleaseStringChars(programFilename_j, (const jchar *)programFilename_ch);
				#endif
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->exportQueued(filename, includeProgDef, programFilename);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_exportQueued_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jboolean includeProgDef_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				const ev_bool includeProgDef = (ev_bool) includeProgDef_j;
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->exportQueued(filename, includeProgDef);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_exportQueued_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->exportQueued(filename);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_exportMaterial_1CMaterialPtr_1EVString_1ev_1bool_1ev_1bool_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMat_j, jstring filename_j, jboolean exportDefaults_j, jboolean includeProgDef_j, jstring programFilename_j, jstring materialName_j)
			{
				const EarthView::World::Graphic::CMaterialPtr &pMat = *(EarthView::World::Graphic::CMaterialPtr*) pMat_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				ev_bool exportDefaults = (ev_bool) exportDefaults_j;
				const ev_bool includeProgDef = (ev_bool) includeProgDef_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* programFilename_ch = (const ev_char*)__env->GetStringUTFChars(programFilename_j,JNI_FALSE);
				const EVString programFilename = programFilename_ch;
				__env->ReleaseStringUTFChars(programFilename_j, (const char *)programFilename_ch);
				#else
				const ev_wchar* programFilename_ch = (const ev_wchar*)__env->GetStringChars(programFilename_j,JNI_FALSE);
				const EVString programFilename = programFilename_ch;
				__env->ReleaseStringChars(programFilename_j, (const jchar *)programFilename_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
				const EVString materialName = materialName_ch;
				__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
				#else
				const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
				const EVString materialName = materialName_ch;
				__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
				#endif
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->exportMaterial(pMat, filename, exportDefaults, includeProgDef, programFilename, materialName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_exportMaterial_1CMaterialPtr_1EVString_1ev_1bool_1ev_1bool_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMat_j, jstring filename_j, jboolean exportDefaults_j, jboolean includeProgDef_j, jstring programFilename_j)
			{
				const EarthView::World::Graphic::CMaterialPtr &pMat = *(EarthView::World::Graphic::CMaterialPtr*) pMat_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				ev_bool exportDefaults = (ev_bool) exportDefaults_j;
				const ev_bool includeProgDef = (ev_bool) includeProgDef_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* programFilename_ch = (const ev_char*)__env->GetStringUTFChars(programFilename_j,JNI_FALSE);
				const EVString programFilename = programFilename_ch;
				__env->ReleaseStringUTFChars(programFilename_j, (const char *)programFilename_ch);
				#else
				const ev_wchar* programFilename_ch = (const ev_wchar*)__env->GetStringChars(programFilename_j,JNI_FALSE);
				const EVString programFilename = programFilename_ch;
				__env->ReleaseStringChars(programFilename_j, (const jchar *)programFilename_ch);
				#endif
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->exportMaterial(pMat, filename, exportDefaults, includeProgDef, programFilename);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_exportMaterial_1CMaterialPtr_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMat_j, jstring filename_j, jboolean exportDefaults_j, jboolean includeProgDef_j)
			{
				const EarthView::World::Graphic::CMaterialPtr &pMat = *(EarthView::World::Graphic::CMaterialPtr*) pMat_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				ev_bool exportDefaults = (ev_bool) exportDefaults_j;
				const ev_bool includeProgDef = (ev_bool) includeProgDef_j;
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->exportMaterial(pMat, filename, exportDefaults, includeProgDef);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_exportMaterial_1CMaterialPtr_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMat_j, jstring filename_j, jboolean exportDefaults_j)
			{
				const EarthView::World::Graphic::CMaterialPtr &pMat = *(EarthView::World::Graphic::CMaterialPtr*) pMat_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				ev_bool exportDefaults = (ev_bool) exportDefaults_j;
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->exportMaterial(pMat, filename, exportDefaults);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_exportMaterial_1CMaterialPtr_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMat_j, jstring filename_j)
			{
				const EarthView::World::Graphic::CMaterialPtr &pMat = *(EarthView::World::Graphic::CMaterialPtr*) pMat_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->exportMaterial(pMat, filename);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MaterialSerializer_getQueuedAsString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				const EVString& __values1 = pObjectX->getQueuedAsString();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_clearQueue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->clearQueue();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_parseScript_1DataStreamPtr_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jstring groupName_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->parseScript(stream, groupName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_addListener_1CMaterialSerializerListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
			{
				EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener *ref_listener = (EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) ref_listener_j;
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->addListener(ref_listener);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_removeListener_1CMaterialSerializerListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener *listener = (EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener*) listener_j;
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->removeListener(listener);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_beginSection_1ev_1uint16_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jboolean useMainBuffer_j)
			{
				ev_uint16 level = (ev_uint16) level_j;
				const ev_bool useMainBuffer = (ev_bool) useMainBuffer_j;
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->beginSection(level, useMainBuffer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_beginSection_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j)
			{
				ev_uint16 level = (ev_uint16) level_j;
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->beginSection(level);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_endSection_1ev_1uint16_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jboolean useMainBuffer_j)
			{
				ev_uint16 level = (ev_uint16) level_j;
				const ev_bool useMainBuffer = (ev_bool) useMainBuffer_j;
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->endSection(level, useMainBuffer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_endSection_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j)
			{
				ev_uint16 level = (ev_uint16) level_j;
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->endSection(level);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_writeAttribute_1ev_1uint16_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jstring att_j, jboolean useMainBuffer_j)
			{
				ev_uint16 level = (ev_uint16) level_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* att_ch = (const ev_char*)__env->GetStringUTFChars(att_j,JNI_FALSE);
				const EVString att = att_ch;
				__env->ReleaseStringUTFChars(att_j, (const char *)att_ch);
				#else
				const ev_wchar* att_ch = (const ev_wchar*)__env->GetStringChars(att_j,JNI_FALSE);
				const EVString att = att_ch;
				__env->ReleaseStringChars(att_j, (const jchar *)att_ch);
				#endif
				const ev_bool useMainBuffer = (ev_bool) useMainBuffer_j;
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->writeAttribute(level, att, useMainBuffer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_writeAttribute_1ev_1uint16_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jstring att_j)
			{
				ev_uint16 level = (ev_uint16) level_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* att_ch = (const ev_char*)__env->GetStringUTFChars(att_j,JNI_FALSE);
				const EVString att = att_ch;
				__env->ReleaseStringUTFChars(att_j, (const char *)att_ch);
				#else
				const ev_wchar* att_ch = (const ev_wchar*)__env->GetStringChars(att_j,JNI_FALSE);
				const EVString att = att_ch;
				__env->ReleaseStringChars(att_j, (const jchar *)att_ch);
				#endif
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->writeAttribute(level, att);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_writeValue_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring val_j, jboolean useMainBuffer_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				const ev_bool useMainBuffer = (ev_bool) useMainBuffer_j;
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->writeValue(val, useMainBuffer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_writeValue_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->writeValue(val);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_MaterialSerializer_quoteWord_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				EVString __values1 = pObjectX->quoteWord(val);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_writeComment_1ev_1uint16_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jstring comment_j, jboolean useMainBuffer_j)
			{
				ev_uint16 level = (ev_uint16) level_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* comment_ch = (const ev_char*)__env->GetStringUTFChars(comment_j,JNI_FALSE);
				const EVString comment = comment_ch;
				__env->ReleaseStringUTFChars(comment_j, (const char *)comment_ch);
				#else
				const ev_wchar* comment_ch = (const ev_wchar*)__env->GetStringChars(comment_j,JNI_FALSE);
				const EVString comment = comment_ch;
				__env->ReleaseStringChars(comment_j, (const jchar *)comment_ch);
				#endif
				const ev_bool useMainBuffer = (ev_bool) useMainBuffer_j;
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->writeComment(level, comment, useMainBuffer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MaterialSerializer_writeComment_1ev_1uint16_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jstring comment_j)
			{
				ev_uint16 level = (ev_uint16) level_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* comment_ch = (const ev_char*)__env->GetStringUTFChars(comment_j,JNI_FALSE);
				const EVString comment = comment_ch;
				__env->ReleaseStringUTFChars(comment_j, (const char *)comment_ch);
				#else
				const ev_wchar* comment_ch = (const ev_wchar*)__env->GetStringChars(comment_j,JNI_FALSE);
				const EVString comment = comment_ch;
				__env->ReleaseStringChars(comment_j, (const jchar *)comment_ch);
				#endif
				EarthView::World::Graphic::CMaterialSerializer *pObjectX = (EarthView::World::Graphic::CMaterialSerializer*) pObjXXXX;
				pObjectX->writeComment(level, comment);
			}
		}
	}
}
