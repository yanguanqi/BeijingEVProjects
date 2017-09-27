/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/archivemanager.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveFactoryMap_push_1EVString_1CArchiveFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
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
				const EarthView::World::Core::CArchiveFactory *&val = *(const EarthView::World::Core::CArchiveFactory**) val_j;
				EarthView::World::Core::CArchiveManager::ArchiveFactoryMap *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveFactoryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveFactoryMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Core::CArchiveManager::ArchiveFactoryMap *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveFactoryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveFactoryMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Core::CArchiveManager::ArchiveFactoryMap& pObjectX = *(EarthView::World::Core::CArchiveManager::ArchiveFactoryMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Core::CArchiveFactory*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveFactoryMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Core::CArchiveManager::ArchiveFactoryMap *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveFactoryMap*) pObjXXXX;
				EarthView::World::Core::CArchiveFactory*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveFactoryMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Core::CArchiveManager::ArchiveFactoryMap *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveFactoryMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveFactoryMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CArchiveManager::ArchiveFactoryMap *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveFactoryMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveFactoryMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CArchiveManager::ArchiveFactoryMap *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveFactoryMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveFactoryMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CArchiveManager::ArchiveFactoryMap *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveFactoryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveMap_push_1EVString_1CArchive(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
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
				const EarthView::World::Core::CArchive *&val = *(const EarthView::World::Core::CArchive**) val_j;
				EarthView::World::Core::CArchiveManager::ArchiveMap *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Core::CArchiveManager::ArchiveMap *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Core::CArchiveManager::ArchiveMap& pObjectX = *(EarthView::World::Core::CArchiveManager::ArchiveMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Core::CArchive*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Core::CArchiveManager::ArchiveMap *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveMap*) pObjXXXX;
				EarthView::World::Core::CArchive*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Core::CArchiveManager::ArchiveMap *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CArchiveManager::ArchiveMap *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CArchiveManager::ArchiveMap *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CArchiveManager::ArchiveMap *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ArchiveManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Core::CArchiveManager& __values1 = EarthView::World::Core::CArchiveManager::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ArchiveManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Core::CArchiveManager* __values1 = EarthView::World::Core::CArchiveManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ArchiveManager_load_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring archiveType_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* archiveType_ch = (const ev_char*)__env->GetStringUTFChars(archiveType_j,JNI_FALSE);
				const EVString archiveType = archiveType_ch;
				__env->ReleaseStringUTFChars(archiveType_j, (const char *)archiveType_ch);
				#else
				const ev_wchar* archiveType_ch = (const ev_wchar*)__env->GetStringChars(archiveType_j,JNI_FALSE);
				const EVString archiveType = archiveType_ch;
				__env->ReleaseStringChars(archiveType_j, (const jchar *)archiveType_ch);
				#endif
				EarthView::World::Core::CArchiveManager *pObjectX = (EarthView::World::Core::CArchiveManager*) pObjXXXX;
				EarthView::World::Core::CArchive* __values1 = pObjectX->load(filename, archiveType);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ArchiveManager_unload_1CArchive(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong arch_j)
			{
				EarthView::World::Core::CArchive *arch = (EarthView::World::Core::CArchive*) arch_j;
				EarthView::World::Core::CArchiveManager *pObjectX = (EarthView::World::Core::CArchiveManager*) pObjXXXX;
				pObjectX->unload(arch);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ArchiveManager_unload_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
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
				EarthView::World::Core::CArchiveManager *pObjectX = (EarthView::World::Core::CArchiveManager*) pObjXXXX;
				pObjectX->unload(filename);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveMapPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CArchiveManager::ArchiveMapPair *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveMapPair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->first;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveMapPair_set_1first_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Core::CArchiveManager::ArchiveMapPair *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveMapPair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->first = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveMapPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CArchiveManager::ArchiveMapPair *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveMapPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveMapPair_set_1second_1CArchive(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Core::CArchiveManager::ArchiveMapPair *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveMapPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Core::CArchive*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveMapIterator_OperatorAssign_1ArchiveMapIterator(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
			{
				EarthView::World::Core::CArchiveManager::ArchiveMapIterator& pObjectX = *(EarthView::World::Core::CArchiveManager::ArchiveMapIterator*) pObjXXXX;
				const EarthView::World::Core::CArchiveManager::ArchiveMapIterator &other = *(EarthView::World::Core::CArchiveManager::ArchiveMapIterator*) other_j;
				pObjectX = other;
				EarthView::World::Core::CArchiveManager::ArchiveMapIterator& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveMapIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CArchiveManager::ArchiveMapIterator *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveMapIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveMapIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CArchiveManager::ArchiveMapIterator *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveMapIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveMapIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CArchiveManager::ArchiveMapIterator *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveMapIterator*) pObjXXXX;
				EVString __values1 = pObjectX->nextKey();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveMapIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CArchiveManager::ArchiveMapIterator *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveMapIterator*) pObjXXXX;
				EarthView::World::Core::CArchive* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveMapIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CArchiveManager::ArchiveMapIterator *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveMapIterator*) pObjXXXX;
				EarthView::World::Core::CArchive** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveMapIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CArchiveManager::ArchiveMapIterator *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveMapIterator*) pObjXXXX;
				EarthView::World::Core::CArchive* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveMapIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CArchiveManager::ArchiveMapIterator *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveMapIterator*) pObjXXXX;
				const EarthView::World::Core::CArchiveManager::ArchiveMapPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveMapIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CArchiveManager::ArchiveMapIterator *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveMapIterator*) pObjXXXX;
				const EarthView::World::Core::CArchiveManager::ArchiveMapPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ArchiveManager_00024ArchiveMapIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CArchiveManager::ArchiveMapIterator *pObjectX = (EarthView::World::Core::CArchiveManager::ArchiveMapIterator*) pObjXXXX;
				const EarthView::World::Core::CArchiveManager::ArchiveMapPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ArchiveManager_getArchiveIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CArchiveManager *pObjectX = (EarthView::World::Core::CArchiveManager*) pObjXXXX;
				EarthView::World::Core::CArchiveManager::ArchiveMapIterator __values1 = pObjectX->getArchiveIterator();
				EarthView::World::Core::CArchiveManager::ArchiveMapIterator *returnvalues = new EarthView::World::Core::CArchiveManager::ArchiveMapIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ArchiveManager_addArchiveFactory_1CArchiveFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong factory_j)
			{
				EarthView::World::Core::CArchiveFactory *factory = (EarthView::World::Core::CArchiveFactory*) factory_j;
				EarthView::World::Core::CArchiveManager *pObjectX = (EarthView::World::Core::CArchiveManager*) pObjXXXX;
				pObjectX->addArchiveFactory(factory);
			}
		}
	}
}
