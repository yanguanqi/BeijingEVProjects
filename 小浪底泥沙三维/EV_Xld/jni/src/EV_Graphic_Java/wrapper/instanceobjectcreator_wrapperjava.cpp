/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/instanceobjectcreator.h"
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
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_InstanceObject_getNumInstanceEntities_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CInstanceObject *pObjectX = (EarthView::World::Graphic::CInstanceObject*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getNumInstanceEntities();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceObject_getInstancedEntity_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CInstanceObject *pObjectX = (EarthView::World::Graphic::CInstanceObject*) pObjXXXX;
				EarthView::World::Graphic::CInstancedEntity* __values1 = pObjectX->getInstancedEntity(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_InstanceObject_attachToNode_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_node_j)
			{
				EarthView::World::Graphic::CNode *ref_node = (EarthView::World::Graphic::CNode*) ref_node_j;
				EarthView::World::Graphic::CInstanceObject *pObjectX = (EarthView::World::Graphic::CInstanceObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->attachToNode(ref_node);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceObject_detachFromNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceObject *pObjectX = (EarthView::World::Graphic::CInstanceObject*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->detachFromNode();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceObject_getParentNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CInstanceObject *pObjectX = (EarthView::World::Graphic::CInstanceObject*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->getParentNode();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceObject_getCreator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CInstanceObject *pObjectX = (EarthView::World::Graphic::CInstanceObject*) pObjXXXX;
				EarthView::World::Graphic::CInstanceObjectCreator* __values1 = pObjectX->getCreator();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceObject_setSelected_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean selected_j)
			{
				ev_bool selected = (ev_bool) selected_j;
				EarthView::World::Graphic::CInstanceObject *pObjectX = (EarthView::World::Graphic::CInstanceObject*) pObjXXXX;
				pObjectX->setSelected(selected);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_InstanceObject_getSelected_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CInstanceObject *pObjectX = (EarthView::World::Graphic::CInstanceObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->getSelected();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_InstanceObjectMap_push_1EVString_1CInstanceObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong ref_val_j)
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
				EarthView::World::Graphic::CInstanceObject *&ref_val = *(EarthView::World::Graphic::CInstanceObject**) ref_val_j;
				EarthView::World::Graphic::CInstanceObjectMap *pObjectX = (EarthView::World::Graphic::CInstanceObjectMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_InstanceObjectMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				const 				EarthView::World::Graphic::CInstanceObjectMap *pObjectX = (EarthView::World::Graphic::CInstanceObjectMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceObjectMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::CInstanceObjectMap& pObjectX = *(EarthView::World::Graphic::CInstanceObjectMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CInstanceObject*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceObjectMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::CInstanceObjectMap *pObjectX = (EarthView::World::Graphic::CInstanceObjectMap*) pObjXXXX;
				EarthView::World::Graphic::CInstanceObject*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceObjectMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::CInstanceObjectMap *pObjectX = (EarthView::World::Graphic::CInstanceObjectMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceObjectMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CInstanceObjectMap *pObjectX = (EarthView::World::Graphic::CInstanceObjectMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceObjectMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceObjectMap *pObjectX = (EarthView::World::Graphic::CInstanceObjectMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_InstanceObjectMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CInstanceObjectMap *pObjectX = (EarthView::World::Graphic::CInstanceObjectMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceObjectCreator_createInstance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceObjectCreator *pObjectX = (EarthView::World::Graphic::CInstanceObjectCreator*) pObjXXXX;
				EarthView::World::Graphic::CInstanceObject* __values1 = pObjectX->createInstance();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_InstanceObjectCreator_destroyInstance_1CInstanceObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j)
			{
				EarthView::World::Graphic::CInstanceObject *obj = (EarthView::World::Graphic::CInstanceObject*) obj_j;
				EarthView::World::Graphic::CInstanceObjectCreator *pObjectX = (EarthView::World::Graphic::CInstanceObjectCreator*) pObjXXXX;
				ev_bool __values1 = pObjectX->destroyInstance(obj);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_InstanceObjectCreator_destroyAllInstances_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CInstanceObjectCreator *pObjectX = (EarthView::World::Graphic::CInstanceObjectCreator*) pObjXXXX;
				pObjectX->destroyAllInstances();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceObjectCreator_getNumInstanceObjects_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CInstanceObjectCreator *pObjectX = (EarthView::World::Graphic::CInstanceObjectCreator*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getNumInstanceObjects();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceObjectCreator_getNumInstanceBatches_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint submeshIndex_j)
			{
				ev_uint16 submeshIndex = (ev_uint16) submeshIndex_j;
				const 				EarthView::World::Graphic::CInstanceObjectCreator *pObjectX = (EarthView::World::Graphic::CInstanceObjectCreator*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getNumInstanceBatches(submeshIndex);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_InstanceObjectCreator_getInstanceBatch_1ev_1uint16_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint submeshIndex_j, jlong instanceBatchIndex_j)
			{
				ev_uint16 submeshIndex = (ev_uint16) submeshIndex_j;
				ev_uint32 instanceBatchIndex = (ev_uint32) instanceBatchIndex_j;
				const 				EarthView::World::Graphic::CInstanceObjectCreator *pObjectX = (EarthView::World::Graphic::CInstanceObjectCreator*) pObjXXXX;
				EarthView::World::Graphic::CInstanceBatch* __values1 = pObjectX->getInstanceBatch(submeshIndex, instanceBatchIndex);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
