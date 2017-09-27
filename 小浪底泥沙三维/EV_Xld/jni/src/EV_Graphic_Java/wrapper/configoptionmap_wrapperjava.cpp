/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/configoptionmap.h"
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ConfigOption_get_1name_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConfigOption *pObjectX = (EarthView::World::Graphic::ConfigOption*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->name;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigOption_set_1name_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::ConfigOption *pObjectX = (EarthView::World::Graphic::ConfigOption*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->name = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ConfigOption_get_1currentValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConfigOption *pObjectX = (EarthView::World::Graphic::ConfigOption*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->currentValue;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigOption_set_1currentValue_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::ConfigOption *pObjectX = (EarthView::World::Graphic::ConfigOption*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->currentValue = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigOption_get_1possibleValues_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConfigOption *pObjectX = (EarthView::World::Graphic::ConfigOption*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->possibleValues);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigOption_set_1possibleValues_1StringVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::ConfigOption *pObjectX = (EarthView::World::Graphic::ConfigOption*)pObjXXXX;
				pObjectX->possibleValues = *(EarthView::World::Core::StringVector*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ConfigOption_get_1immutable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConfigOption *pObjectX = (EarthView::World::Graphic::ConfigOption*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->immutable);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigOption_set_1immutable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::ConfigOption *pObjectX = (EarthView::World::Graphic::ConfigOption*)pObjXXXX;
				pObjectX->immutable = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ConfigOptionMap_push_1EVString_1ConfigOption(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				const EarthView::World::Graphic::ConfigOption &val = *(EarthView::World::Graphic::ConfigOption*) val_j;
				EarthView::World::Graphic::ConfigOptionMap *pObjectX = (EarthView::World::Graphic::ConfigOptionMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ConfigOptionMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::ConfigOptionMap *pObjectX = (EarthView::World::Graphic::ConfigOptionMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigOptionMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::ConfigOptionMap& pObjectX = *(EarthView::World::Graphic::ConfigOptionMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::ConfigOption& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigOptionMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::ConfigOptionMap *pObjectX = (EarthView::World::Graphic::ConfigOptionMap*) pObjXXXX;
				EarthView::World::Graphic::ConfigOption& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigOptionMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::ConfigOptionMap *pObjectX = (EarthView::World::Graphic::ConfigOptionMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConfigOptionMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ConfigOptionMap *pObjectX = (EarthView::World::Graphic::ConfigOptionMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConfigOptionMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConfigOptionMap *pObjectX = (EarthView::World::Graphic::ConfigOptionMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ConfigOptionMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ConfigOptionMap *pObjectX = (EarthView::World::Graphic::ConfigOptionMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
