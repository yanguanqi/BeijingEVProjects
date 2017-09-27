/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/groupstringinterfacemap.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace FrameWorkProxy
		{
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_GroupStringinterfaceMap_00024GroupStringinterface_get_1mKey_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface *pObjectX = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mKey;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_GroupStringinterfaceMap_00024GroupStringinterface_set_1mKey_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface *pObjectX = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mKey = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_GroupStringinterfaceMap_00024GroupStringinterface_get_1mValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface *pObjectX = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->mValue);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_GroupStringinterfaceMap_00024GroupStringinterface_set_1mValue_1CStringInterface(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface *pObjectX = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface*)pObjXXXX;
				pObjectX->mValue = (EarthView::World::Core::CStringInterface*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_GroupStringinterfaceMap_push_1back_1GroupStringinterface(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface &t = *(EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface*) t_j;
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap *pObjectX = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_GroupStringinterfaceMap_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap *pObjectX = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_GroupStringinterfaceMap_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap *pObjectX = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjXXXX;
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_GroupStringinterfaceMap_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap *pObjectX = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjXXXX;
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_GroupStringinterfaceMap_insert_1ev_1uint32_1GroupStringinterface(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface &t = *(EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface*) t_j;
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap *pObjectX = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_GroupStringinterfaceMap_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap *pObjectX = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_GroupStringinterfaceMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap *pObjectX = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_GroupStringinterfaceMap_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap& pObjectX = *(EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_GroupStringinterfaceMap_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap *pObjectX = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjXXXX;
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_GroupStringinterfaceMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap *pObjectX = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_GroupStringinterfaceMap_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap *pObjectX = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_GroupStringinterfaceMap_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap *pObjectX = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_GroupStringinterfaceMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap *pObjectX = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_GroupStringinterfaceMap_push_1EVString_1CStringInterface(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
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
				const EarthView::World::Core::CStringInterface *val = (const EarthView::World::Core::CStringInterface*) val_j;
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap *pObjectX = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_GroupStringinterfaceMap_getKeys_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap *pObjectX = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjXXXX;
				EarthView::World::Core::StringVector __values1 = pObjectX->getKeys();
				EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_GroupStringinterfaceMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap *pObjectX = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_GroupStringinterfaceMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap& pObjectX = *(EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Core::CStringInterface* __values1 = pObjectX[key];
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_GroupStringinterfaceMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap *pObjectX = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjXXXX;
				EarthView::World::Core::CStringInterface* __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_GroupStringinterfaceMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap *pObjectX = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjXXXX;
				pObjectX->erase(key);
			}
		}
	}
}
