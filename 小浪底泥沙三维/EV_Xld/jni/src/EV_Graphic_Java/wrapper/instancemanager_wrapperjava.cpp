/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/instancemanager.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstancingTechniqueHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CInstanceManager::ShaderBased,
					CInstanceManager::TextureVTF,
					CInstanceManager::HWInstancingBasic,
					CInstanceManager::HWInstancingVTF,
					CInstanceManager::InstancingTechniquesCount
				};
				jintArray array = __env->NewIntArray(5);
				__env->SetIntArrayRegion(array, 0, 5, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_InstanceManager_00024BatchSettingIdHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CInstanceManager::CAST_SHADOWS,
					CInstanceManager::SHOW_BOUNDINGBOX,
					CInstanceManager::NUM_SETTINGS
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchVec_push_1back_1CInstanceBatch(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CInstanceBatch *&ref_t = *(EarthView::World::Graphic::CInstanceBatch**) ref_t_j;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchVec_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchVec_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjXXXX;
				EarthView::World::Graphic::CInstanceBatch*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchVec_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjXXXX;
				EarthView::World::Graphic::CInstanceBatch*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchVec_insert_1ev_1uint32_1CInstanceBatch(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CInstanceBatch *&ref_t = *(EarthView::World::Graphic::CInstanceBatch**) ref_t_j;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjXXXX;
				pObjectX->insert(pos, ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchVec_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchVec_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchVec_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec& pObjectX = *(EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CInstanceBatch*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchVec_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjXXXX;
				EarthView::World::Graphic::CInstanceBatch*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchVec_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchVec_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchVec_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchVec_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchMap_push_1EVString_1InstanceBatchVec(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
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
				const EarthView::World::Graphic::CInstanceManager::InstanceBatchVec &val = *(EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) val_j;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMap *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMap *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMap& pObjectX = *(EarthView::World::Graphic::CInstanceManager::InstanceBatchMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMap *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMap*) pObjXXXX;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMap *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CInstanceManager::InstanceBatchMap *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMap *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CInstanceManager::InstanceBatchMap *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchPair *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchPair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->first;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchPair_set_1first_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchPair *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchPair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->first = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchPair *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchPair*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchPair_set_1second_1InstanceBatchVec(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchPair *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchPair*)pObjXXXX;
				pObjectX->second = *(EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchMapIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchMapIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchMapIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator*) pObjXXXX;
				EVString __values1 = pObjectX->nextKey();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchMapIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator*) pObjXXXX;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec __values1 = pObjectX->nextValue();
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec *returnvalues = new EarthView::World::Graphic::CInstanceManager::InstanceBatchVec(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchMapIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator*) pObjXXXX;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec* __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchMapIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator*) pObjXXXX;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec __values1 = pObjectX->next();
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec *returnvalues = new EarthView::World::Graphic::CInstanceManager::InstanceBatchVec(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchMapIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator*) pObjXXXX;
				const EarthView::World::Graphic::CInstanceManager::InstanceBatchPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchMapIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator*) pObjXXXX;
				const EarthView::World::Graphic::CInstanceManager::InstanceBatchPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchMapIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator*) pObjXXXX;
				const EarthView::World::Graphic::CInstanceManager::InstanceBatchPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator*) pObjXXXX;
				EarthView::World::Graphic::CInstanceBatch* __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator*) pObjXXXX;
				EarthView::World::Graphic::CInstanceBatch* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator*) pObjXXXX;
				EarthView::World::Graphic::CInstanceBatch* __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_00024InstanceBatchIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator *pObjectX = (EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator*) pObjXXXX;
				EarthView::World::Graphic::CInstanceBatch* __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_InstanceManager_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				EVString __values1 = pObjectX->getName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_getMeshPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->getMeshPtr();
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager_detachAllInstanceBatch_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				pObjectX->detachAllInstanceBatch();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager_setInstancesPerBatch_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong instancesPerBatch_j)
			{
				ev_size_t instancesPerBatch = (ev_size_t) instancesPerBatch_j;
				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				pObjectX->setInstancesPerBatch(instancesPerBatch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_getInstancesPerBatch_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getInstancesPerBatch();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_InstanceManager_isInternalInstance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->isInternalInstance();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager_setInternalInstance_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bInternalInstance_j)
			{
				ev_bool bInternalInstance = (ev_bool) bInternalInstance_j;
				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				pObjectX->setInternalInstance(bInternalInstance);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager_setMaxLookupTableInstances_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong maxLookupTableInstances_j)
			{
				ev_size_t maxLookupTableInstances = (ev_size_t) maxLookupTableInstances_j;
				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				pObjectX->setMaxLookupTableInstances(maxLookupTableInstances);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_getMaxOrBestNumInstancesPerBatch_1EVString_1ev_1size_1t_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring materialName_j, jlong suggestedSize_j, jint flags_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
				EVString materialName = materialName_ch;
				__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
				#else
				const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
				EVString materialName = materialName_ch;
				__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
				#endif
				ev_size_t suggestedSize = (ev_size_t) suggestedSize_j;
				ev_uint16 flags = (ev_uint16) flags_j;
				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getMaxOrBestNumInstancesPerBatch(materialName, suggestedSize, flags);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_createInstancedEntity_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring materialName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
				const EVString materialName = materialName_ch;
				__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
				#else
				const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
				const EVString materialName = materialName_ch;
				__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
				#endif
				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				EarthView::World::Graphic::CInstancedEntity* __values1 = pObjectX->createInstancedEntity(materialName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_createInstancedEntity_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring materialName_j, jboolean bInUse_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
				const EVString materialName = materialName_ch;
				__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
				#else
				const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
				const EVString materialName = materialName_ch;
				__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
				#endif
				ev_bool bInUse = (ev_bool) bInUse_j;
				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				EarthView::World::Graphic::CInstancedEntity* __values1 = pObjectX->createInstancedEntity(materialName, bInUse);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager_cleanupEmptyBatches_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				pObjectX->cleanupEmptyBatches();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager_setSetting_1BatchSettingId_1ev_1bool_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint id_j, jboolean value_j, jstring materialName_j)
			{
				EarthView::World::Graphic::CInstanceManager::BatchSettingId id = (EarthView::World::Graphic::CInstanceManager::BatchSettingId) id_j;
				ev_bool value = (ev_bool) value_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
				const EVString materialName = materialName_ch;
				__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
				#else
				const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
				const EVString materialName = materialName_ch;
				__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
				#endif
				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				pObjectX->setSetting(id, value, materialName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager_setSetting_1BatchSettingId_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint id_j, jboolean value_j)
			{
				EarthView::World::Graphic::CInstanceManager::BatchSettingId id = (EarthView::World::Graphic::CInstanceManager::BatchSettingId) id_j;
				ev_bool value = (ev_bool) value_j;
				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				pObjectX->setSetting(id, value);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_InstanceManager_getSetting_1BatchSettingId_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint id_j, jstring materialName_j)
			{
				EarthView::World::Graphic::CInstanceManager::BatchSettingId id = (EarthView::World::Graphic::CInstanceManager::BatchSettingId) id_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
				const EVString materialName = materialName_ch;
				__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
				#else
				const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
				const EVString materialName = materialName_ch;
				__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
				#endif
				const 				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getSetting(id, materialName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_InstanceManager_hasSettings_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring materialName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
				const EVString materialName = materialName_ch;
				__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
				#else
				const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
				const EVString materialName = materialName_ch;
				__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
				#endif
				const 				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasSettings(materialName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager_setBatchesAsStaticAndUpdate_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bStatic_j)
			{
				ev_bool bStatic = (ev_bool) bStatic_j;
				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				pObjectX->setBatchesAsStaticAndUpdate(bStatic);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager__1addDirtyBatch_1CInstanceBatch(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_dirtyBatch_j)
			{
				EarthView::World::Graphic::CInstanceBatch *ref_dirtyBatch = (EarthView::World::Graphic::CInstanceBatch*) ref_dirtyBatch_j;
				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				pObjectX->_addDirtyBatch(ref_dirtyBatch);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager__1updateDirtyBatches_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				pObjectX->_updateDirtyBatches();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_InstanceManager_getSubMeshIdx_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getSubMeshIdx();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_getSceneManager_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				EarthView::World::Graphic::CSceneManager* __values1 = pObjectX->getSceneManager();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_getInstanceBatchMapIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator __values1 = pObjectX->getInstanceBatchMapIterator();
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator *returnvalues = new EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceManager_getInstanceBatchIterator_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring materialName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
				const EVString materialName = materialName_ch;
				__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
				#else
				const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
				const EVString materialName = materialName_ch;
				__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
				#endif
				const 				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator __values1 = pObjectX->getInstanceBatchIterator(materialName);
				EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator *returnvalues = new EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_InstanceManager_isAsyncUpdatingBuffer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->isAsyncUpdatingBuffer();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceManager_setAsyncUpdateBuffer_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean async_j)
			{
				ev_bool async = (ev_bool) async_j;
				EarthView::World::Graphic::CInstanceManager *pObjectX = (EarthView::World::Graphic::CInstanceManager*) pObjXXXX;
				pObjectX->setAsyncUpdateBuffer(async);
			}
		}
	}
}
