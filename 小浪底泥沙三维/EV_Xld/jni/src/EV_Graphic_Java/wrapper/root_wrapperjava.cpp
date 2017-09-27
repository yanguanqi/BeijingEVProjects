/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/root.h"
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
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemThread_registerRenderSystemThread_1CDefaultWorkQueue(JNIEnv *__env , jclass __clazz, jlong workQueue_j)
			{
				EarthView::World::Core::CDefaultWorkQueue *workQueue = (EarthView::World::Core::CDefaultWorkQueue*) workQueue_j;
				EarthView::World::Graphic::CRenderSystemThread::registerRenderSystemThread(workQueue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemThread_preExtraThreadsStarted_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CRenderSystemThread::preExtraThreadsStarted();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemThread_postExtraThreadsStarted_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CRenderSystemThread::postExtraThreadsStarted();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemThread_registerThread_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CRenderSystemThread::registerThread();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemThread_unregisterThread_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CRenderSystemThread::unregisterThread();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemThread_flushRenderSystem_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CRenderSystemThread::flushRenderSystem();
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemList_push_1back_1CRenderSystem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CRenderSystem *&ref_t = *(EarthView::World::Graphic::CRenderSystem**) ref_t_j;
				EarthView::World::Graphic::RenderSystemList *pObjectX = (EarthView::World::Graphic::RenderSystemList*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderSystemList *pObjectX = (EarthView::World::Graphic::RenderSystemList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystemList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderSystemList *pObjectX = (EarthView::World::Graphic::RenderSystemList*) pObjXXXX;
				EarthView::World::Graphic::CRenderSystem*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystemList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderSystemList *pObjectX = (EarthView::World::Graphic::RenderSystemList*) pObjXXXX;
				EarthView::World::Graphic::CRenderSystem*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemList_insert_1ev_1uint32_1CRenderSystem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CRenderSystem *&ref_t = *(EarthView::World::Graphic::CRenderSystem**) ref_t_j;
				EarthView::World::Graphic::RenderSystemList *pObjectX = (EarthView::World::Graphic::RenderSystemList*) pObjXXXX;
				pObjectX->insert(pos, ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::RenderSystemList *pObjectX = (EarthView::World::Graphic::RenderSystemList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderSystemList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::RenderSystemList *pObjectX = (EarthView::World::Graphic::RenderSystemList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystemList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::RenderSystemList& pObjectX = *(EarthView::World::Graphic::RenderSystemList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CRenderSystem*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystemList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::RenderSystemList *pObjectX = (EarthView::World::Graphic::RenderSystemList*) pObjXXXX;
				EarthView::World::Graphic::CRenderSystem*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystemList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::RenderSystemList *pObjectX = (EarthView::World::Graphic::RenderSystemList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::RenderSystemList *pObjectX = (EarthView::World::Graphic::RenderSystemList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::RenderSystemList *pObjectX = (EarthView::World::Graphic::RenderSystemList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderSystemList *pObjectX = (EarthView::World::Graphic::RenderSystemList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_00024PluginLibList_push_1back_1CDynLib(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Core::CDynLib *&ref_t = *(EarthView::World::Core::CDynLib**) ref_t_j;
				EarthView::World::Graphic::CRoot::PluginLibList *pObjectX = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_00024PluginLibList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot::PluginLibList *pObjectX = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_00024PluginLibList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot::PluginLibList *pObjectX = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjXXXX;
				EarthView::World::Core::CDynLib*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_00024PluginLibList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot::PluginLibList *pObjectX = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjXXXX;
				EarthView::World::Core::CDynLib*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_00024PluginLibList_insert_1ev_1uint32_1CDynLib(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Core::CDynLib *&ref_t = *(EarthView::World::Core::CDynLib**) ref_t_j;
				EarthView::World::Graphic::CRoot::PluginLibList *pObjectX = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjXXXX;
				pObjectX->insert(pos, ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_00024PluginLibList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CRoot::PluginLibList *pObjectX = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root_00024PluginLibList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRoot::PluginLibList *pObjectX = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_00024PluginLibList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CRoot::PluginLibList& pObjectX = *(EarthView::World::Graphic::CRoot::PluginLibList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Core::CDynLib*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_00024PluginLibList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CRoot::PluginLibList *pObjectX = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjXXXX;
				EarthView::World::Core::CDynLib*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_00024PluginLibList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRoot::PluginLibList *pObjectX = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_00024PluginLibList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CRoot::PluginLibList *pObjectX = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_00024PluginLibList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CRoot::PluginLibList *pObjectX = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_00024PluginLibList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot::PluginLibList *pObjectX = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_00024PluginInstanceList_push_1back_1CPlugin(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Core::CPlugin *&ref_t = *(EarthView::World::Core::CPlugin**) ref_t_j;
				EarthView::World::Graphic::CRoot::PluginInstanceList *pObjectX = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_00024PluginInstanceList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot::PluginInstanceList *pObjectX = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_00024PluginInstanceList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot::PluginInstanceList *pObjectX = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjXXXX;
				EarthView::World::Core::CPlugin*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_00024PluginInstanceList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot::PluginInstanceList *pObjectX = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjXXXX;
				EarthView::World::Core::CPlugin*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_00024PluginInstanceList_insert_1ev_1uint32_1CPlugin(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Core::CPlugin *&ref_t = *(EarthView::World::Core::CPlugin**) ref_t_j;
				EarthView::World::Graphic::CRoot::PluginInstanceList *pObjectX = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjXXXX;
				pObjectX->insert(pos, ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_00024PluginInstanceList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CRoot::PluginInstanceList *pObjectX = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root_00024PluginInstanceList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRoot::PluginInstanceList *pObjectX = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_00024PluginInstanceList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CRoot::PluginInstanceList& pObjectX = *(EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Core::CPlugin*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_00024PluginInstanceList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CRoot::PluginInstanceList *pObjectX = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjXXXX;
				EarthView::World::Core::CPlugin*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_00024PluginInstanceList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRoot::PluginInstanceList *pObjectX = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_00024PluginInstanceList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CRoot::PluginInstanceList *pObjectX = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_00024PluginInstanceList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CRoot::PluginInstanceList *pObjectX = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_00024PluginInstanceList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot::PluginInstanceList *pObjectX = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root_00024MovableObjectFactoryMap_push_1EVString_1CMovableObjectFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong ref_val_j)
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
				EarthView::World::Graphic::CMovableObjectFactory *&ref_val = *(EarthView::World::Graphic::CMovableObjectFactory**) ref_val_j;
				EarthView::World::Graphic::CRoot::MovableObjectFactoryMap *pObjectX = (EarthView::World::Graphic::CRoot::MovableObjectFactoryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root_00024MovableObjectFactoryMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::CRoot::MovableObjectFactoryMap *pObjectX = (EarthView::World::Graphic::CRoot::MovableObjectFactoryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_00024MovableObjectFactoryMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::CRoot::MovableObjectFactoryMap& pObjectX = *(EarthView::World::Graphic::CRoot::MovableObjectFactoryMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CMovableObjectFactory*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_00024MovableObjectFactoryMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::CRoot::MovableObjectFactoryMap *pObjectX = (EarthView::World::Graphic::CRoot::MovableObjectFactoryMap*) pObjXXXX;
				EarthView::World::Graphic::CMovableObjectFactory*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_00024MovableObjectFactoryMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::CRoot::MovableObjectFactoryMap *pObjectX = (EarthView::World::Graphic::CRoot::MovableObjectFactoryMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_00024MovableObjectFactoryMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRoot::MovableObjectFactoryMap *pObjectX = (EarthView::World::Graphic::CRoot::MovableObjectFactoryMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_00024MovableObjectFactoryMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot::MovableObjectFactoryMap *pObjectX = (EarthView::World::Graphic::CRoot::MovableObjectFactoryMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root_00024MovableObjectFactoryMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRoot::MovableObjectFactoryMap *pObjectX = (EarthView::World::Graphic::CRoot::MovableObjectFactoryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_saveConfig_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->saveConfig();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_saveConfigWithActiveRenderSystem_1CRenderSystem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_system_j)
			{
				EarthView::World::Graphic::CRenderSystem *ref_system = (EarthView::World::Graphic::CRenderSystem*) ref_system_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->saveConfigWithActiveRenderSystem(ref_system);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root_restoreConfig_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_bool __values1 = pObjectX->restoreConfig();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root_showConfigDialog_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_bool __values1 = pObjectX->showConfigDialog();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_addRenderSystem_1CRenderSystem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_newRend_j)
			{
				EarthView::World::Graphic::CRenderSystem *ref_newRend = (EarthView::World::Graphic::CRenderSystem*) ref_newRend_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->addRenderSystem(ref_newRend);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_getAvailableRenderers_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				const EarthView::World::Graphic::RenderSystemList& __values1 = pObjectX->getAvailableRenderers();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_getRenderSystemByName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CRenderSystem* __values1 = pObjectX->getRenderSystemByName(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_setRenderSystem_1CRenderSystem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_system_j)
			{
				EarthView::World::Graphic::CRenderSystem *ref_system = (EarthView::World::Graphic::CRenderSystem*) ref_system_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->setRenderSystem(ref_system);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_getRenderSystem_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CRenderSystem* __values1 = pObjectX->getRenderSystem();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_initialise_1ev_1bool_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean autoCreateWindow_j, jstring windowTitle_j, jstring customCapabilitiesConfig_j)
			{
				ev_bool autoCreateWindow = (ev_bool) autoCreateWindow_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* windowTitle_ch = (const ev_char*)__env->GetStringUTFChars(windowTitle_j,JNI_FALSE);
				const EVString windowTitle = windowTitle_ch;
				__env->ReleaseStringUTFChars(windowTitle_j, (const char *)windowTitle_ch);
				#else
				const ev_wchar* windowTitle_ch = (const ev_wchar*)__env->GetStringChars(windowTitle_j,JNI_FALSE);
				const EVString windowTitle = windowTitle_ch;
				__env->ReleaseStringChars(windowTitle_j, (const jchar *)windowTitle_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* customCapabilitiesConfig_ch = (const ev_char*)__env->GetStringUTFChars(customCapabilitiesConfig_j,JNI_FALSE);
				const EVString customCapabilitiesConfig = customCapabilitiesConfig_ch;
				__env->ReleaseStringUTFChars(customCapabilitiesConfig_j, (const char *)customCapabilitiesConfig_ch);
				#else
				const ev_wchar* customCapabilitiesConfig_ch = (const ev_wchar*)__env->GetStringChars(customCapabilitiesConfig_j,JNI_FALSE);
				const EVString customCapabilitiesConfig = customCapabilitiesConfig_ch;
				__env->ReleaseStringChars(customCapabilitiesConfig_j, (const jchar *)customCapabilitiesConfig_ch);
				#endif
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CRenderWindow* __values1 = pObjectX->initialise(autoCreateWindow, windowTitle, customCapabilitiesConfig);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_initialise_1ev_1bool_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean autoCreateWindow_j, jstring windowTitle_j)
			{
				ev_bool autoCreateWindow = (ev_bool) autoCreateWindow_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* windowTitle_ch = (const ev_char*)__env->GetStringUTFChars(windowTitle_j,JNI_FALSE);
				const EVString windowTitle = windowTitle_ch;
				__env->ReleaseStringUTFChars(windowTitle_j, (const char *)windowTitle_ch);
				#else
				const ev_wchar* windowTitle_ch = (const ev_wchar*)__env->GetStringChars(windowTitle_j,JNI_FALSE);
				const EVString windowTitle = windowTitle_ch;
				__env->ReleaseStringChars(windowTitle_j, (const jchar *)windowTitle_ch);
				#endif
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CRenderWindow* __values1 = pObjectX->initialise(autoCreateWindow, windowTitle);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_initialise_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean autoCreateWindow_j)
			{
				ev_bool autoCreateWindow = (ev_bool) autoCreateWindow_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CRenderWindow* __values1 = pObjectX->initialise(autoCreateWindow);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root_isInitialised_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_bool __values1 = pObjectX->isInitialised();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_useCustomRenderSystemCapabilities_1CRenderSystemCapabilities(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_capabilities_j)
			{
				EarthView::World::Graphic::CRenderSystemCapabilities *ref_capabilities = (EarthView::World::Graphic::CRenderSystemCapabilities*) ref_capabilities_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->useCustomRenderSystemCapabilities(ref_capabilities);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root_getRemoveRenderQueueStructuresOnClear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_bool __values1 = pObjectX->getRemoveRenderQueueStructuresOnClear();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_setRemoveRenderQueueStructuresOnClear_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean r_j)
			{
				ev_bool r = (ev_bool) r_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->setRemoveRenderQueueStructuresOnClear(r);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root_addSceneManagerFactory_1CSceneManagerFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_fact_j)
			{
				EarthView::World::Graphic::CSceneManagerFactory *ref_fact = (EarthView::World::Graphic::CSceneManagerFactory*) ref_fact_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_bool __values1 = pObjectX->addSceneManagerFactory(ref_fact);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root_removeSceneManagerFactory_1CSceneManagerFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fact_j)
			{
				EarthView::World::Graphic::CSceneManagerFactory *fact = (EarthView::World::Graphic::CSceneManagerFactory*) fact_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_bool __values1 = pObjectX->removeSceneManagerFactory(fact);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_getSceneManagerMetaData_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring typeName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
				#else
				const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
				#endif
				const 				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				const EarthView::World::Graphic::SceneManagerMetaData* __values1 = pObjectX->getSceneManagerMetaData(typeName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_getSceneManagerMetaDataIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator __values1 = pObjectX->getSceneManagerMetaDataIterator();
				EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator *returnvalues = new EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_createSceneManager_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring typeName_j, jstring instanceName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
				#else
				const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CSceneManager* __values1 = pObjectX->createSceneManager(typeName, instanceName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_createSceneManager_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring typeName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
				#else
				const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
				#endif
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CSceneManager* __values1 = pObjectX->createSceneManager(typeName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_createSceneManager_1ev_1uint16_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint typeMask_j, jstring instanceName_j)
			{
				ev_uint16 typeMask = (ev_uint16) typeMask_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CSceneManager* __values1 = pObjectX->createSceneManager(typeMask, instanceName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_createSceneManager_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint typeMask_j)
			{
				ev_uint16 typeMask = (ev_uint16) typeMask_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CSceneManager* __values1 = pObjectX->createSceneManager(typeMask);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root_renameSceneManager_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring oldName_j, jstring newName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* oldName_ch = (const ev_char*)__env->GetStringUTFChars(oldName_j,JNI_FALSE);
				const EVString oldName = oldName_ch;
				__env->ReleaseStringUTFChars(oldName_j, (const char *)oldName_ch);
				#else
				const ev_wchar* oldName_ch = (const ev_wchar*)__env->GetStringChars(oldName_j,JNI_FALSE);
				const EVString oldName = oldName_ch;
				__env->ReleaseStringChars(oldName_j, (const jchar *)oldName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_bool __values1 = pObjectX->renameSceneManager(oldName, newName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_destroySceneManager_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j)
			{
				EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->destroySceneManager(sm);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_getSceneManager_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring instanceName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				const 				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CSceneManager* __values1 = pObjectX->getSceneManager(instanceName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root_hasSceneManager_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring instanceName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				const 				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasSceneManager(instanceName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_getSceneManagerIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator __values1 = pObjectX->getSceneManagerIterator();
				EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator *returnvalues = new EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_getTextureManager_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CTextureManager* __values1 = pObjectX->getTextureManager();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_getMeshManager_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CMeshManager* __values1 = pObjectX->getMeshManager();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Root_getErrorDescription_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint errorNumber_j)
			{
				ev_int32 errorNumber = (ev_int32) errorNumber_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EVString __values1 = pObjectX->getErrorDescription(errorNumber);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_addFrameListener_1CFrameListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_newListener_j)
			{
				EarthView::World::Graphic::CFrameListener *ref_newListener = (EarthView::World::Graphic::CFrameListener*) ref_newListener_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->addFrameListener(ref_newListener);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_removeFrameListener_1CFrameListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong oldListener_j)
			{
				EarthView::World::Graphic::CFrameListener *oldListener = (EarthView::World::Graphic::CFrameListener*) oldListener_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->removeFrameListener(oldListener);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_queueEndRendering_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->queueEndRendering();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_startRendering_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->startRendering();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root_renderOneFrame_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_bool __values1 = pObjectX->renderOneFrame();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root_renderOneFrame_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timeSinceLastFrame_j)
			{
				Real timeSinceLastFrame = (Real) timeSinceLastFrame_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_bool __values1 = pObjectX->renderOneFrame(timeSinceLastFrame);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_shutdown_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->shutdown();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_addResourceLocation_1EVString_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring locType_j, jstring groupName_j, jboolean recursive_j)
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
				const ev_char* locType_ch = (const ev_char*)__env->GetStringUTFChars(locType_j,JNI_FALSE);
				const EVString locType = locType_ch;
				__env->ReleaseStringUTFChars(locType_j, (const char *)locType_ch);
				#else
				const ev_wchar* locType_ch = (const ev_wchar*)__env->GetStringChars(locType_j,JNI_FALSE);
				const EVString locType = locType_ch;
				__env->ReleaseStringChars(locType_j, (const jchar *)locType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				ev_bool recursive = (ev_bool) recursive_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->addResourceLocation(name, locType, groupName, recursive);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_addResourceLocation_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring locType_j, jstring groupName_j)
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
				const ev_char* locType_ch = (const ev_char*)__env->GetStringUTFChars(locType_j,JNI_FALSE);
				const EVString locType = locType_ch;
				__env->ReleaseStringUTFChars(locType_j, (const char *)locType_ch);
				#else
				const ev_wchar* locType_ch = (const ev_wchar*)__env->GetStringChars(locType_j,JNI_FALSE);
				const EVString locType = locType_ch;
				__env->ReleaseStringChars(locType_j, (const jchar *)locType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->addResourceLocation(name, locType, groupName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_addResourceLocation_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring locType_j)
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
				const ev_char* locType_ch = (const ev_char*)__env->GetStringUTFChars(locType_j,JNI_FALSE);
				const EVString locType = locType_ch;
				__env->ReleaseStringUTFChars(locType_j, (const char *)locType_ch);
				#else
				const ev_wchar* locType_ch = (const ev_wchar*)__env->GetStringChars(locType_j,JNI_FALSE);
				const EVString locType = locType_ch;
				__env->ReleaseStringChars(locType_j, (const jchar *)locType_ch);
				#endif
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->addResourceLocation(name, locType);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_removeResourceLocation_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j)
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
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->removeResourceLocation(name, groupName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_removeResourceLocation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->removeResourceLocation(name);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_createFileStream_1EVString_1EVString_1ev_1bool_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j, jboolean overwrite_j, jstring locationPattern_j)
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
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				ev_bool overwrite = (ev_bool) overwrite_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* locationPattern_ch = (const ev_char*)__env->GetStringUTFChars(locationPattern_j,JNI_FALSE);
				const EVString locationPattern = locationPattern_ch;
				__env->ReleaseStringUTFChars(locationPattern_j, (const char *)locationPattern_ch);
				#else
				const ev_wchar* locationPattern_ch = (const ev_wchar*)__env->GetStringChars(locationPattern_j,JNI_FALSE);
				const EVString locationPattern = locationPattern_ch;
				__env->ReleaseStringChars(locationPattern_j, (const jchar *)locationPattern_ch);
				#endif
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->createFileStream(filename, groupName, overwrite, locationPattern);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_createFileStream_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j, jboolean overwrite_j)
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
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				ev_bool overwrite = (ev_bool) overwrite_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->createFileStream(filename, groupName, overwrite);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_createFileStream_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j)
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
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->createFileStream(filename, groupName);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_createFileStream_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
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
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->createFileStream(filename);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_openFileStream_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j, jstring locationPattern_j)
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
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* locationPattern_ch = (const ev_char*)__env->GetStringUTFChars(locationPattern_j,JNI_FALSE);
				const EVString locationPattern = locationPattern_ch;
				__env->ReleaseStringUTFChars(locationPattern_j, (const char *)locationPattern_ch);
				#else
				const ev_wchar* locationPattern_ch = (const ev_wchar*)__env->GetStringChars(locationPattern_j,JNI_FALSE);
				const EVString locationPattern = locationPattern_ch;
				__env->ReleaseStringChars(locationPattern_j, (const jchar *)locationPattern_ch);
				#endif
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->openFileStream(filename, groupName, locationPattern);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_openFileStream_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j)
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
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->openFileStream(filename, groupName);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_openFileStream_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
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
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->openFileStream(filename);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_convertColourValue_1CColourValue_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong colour_j, jlong pDest_j)
			{
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				ev_uint32 *pDest = (ev_uint32*) pDest_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->convertColourValue(colour, pDest);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_toColourValue_1ev_1uint32_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong srcColor_j, jlong colour_j)
			{
				ev_uint32 srcColor = (ev_uint32) srcColor_j;
				EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->toColourValue(srcColor, colour);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_getAutoCreatedWindow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CRenderWindow* __values1 = pObjectX->getAutoCreatedWindow();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_createRenderWindow_1EVString_1ev_1uint32_1ev_1uint32_1ev_1bool_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong width_j, jlong height_j, jboolean fullScreen_j, jlong miscParams_j)
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
				ev_uint32 width = (ev_uint32) width_j;
				ev_uint32 height = (ev_uint32) height_j;
				ev_bool fullScreen = (ev_bool) fullScreen_j;
				const EarthView::World::Core::CommonStringPairList *miscParams = (const EarthView::World::Core::CommonStringPairList*) miscParams_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CRenderWindow* __values1 = pObjectX->createRenderWindow(name, width, height, fullScreen, miscParams);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_createRenderWindow_1EVString_1ev_1uint32_1ev_1uint32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong width_j, jlong height_j, jboolean fullScreen_j)
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
				ev_uint32 width = (ev_uint32) width_j;
				ev_uint32 height = (ev_uint32) height_j;
				ev_bool fullScreen = (ev_bool) fullScreen_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CRenderWindow* __values1 = pObjectX->createRenderWindow(name, width, height, fullScreen);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root_createRenderWindows_1RenderWindowDescriptionList_1RenderWindowList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderWindowDescriptions_j, jlong createdWindows_j)
			{
				const EarthView::World::Graphic::RenderWindowDescriptionList &renderWindowDescriptions = *(EarthView::World::Graphic::RenderWindowDescriptionList*) renderWindowDescriptions_j;
				EarthView::World::Graphic::RenderWindowList &createdWindows = *(EarthView::World::Graphic::RenderWindowList*) createdWindows_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_bool __values1 = pObjectX->createRenderWindows(renderWindowDescriptions, createdWindows);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_detachRenderTarget_1CRenderTarget(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pWin_j)
			{
				EarthView::World::Graphic::CRenderTarget *pWin = (EarthView::World::Graphic::CRenderTarget*) pWin_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CRenderTarget* __values1 = pObjectX->detachRenderTarget(pWin);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_detachRenderTarget_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CRenderTarget* __values1 = pObjectX->detachRenderTarget(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_destroyRenderTarget_1CRenderTarget(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				EarthView::World::Graphic::CRenderTarget *target = (EarthView::World::Graphic::CRenderTarget*) target_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->destroyRenderTarget(target);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_destroyRenderTarget_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->destroyRenderTarget(name);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_getRenderTarget_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CRenderTarget* __values1 = pObjectX->getRenderTarget(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_loadPlugin_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pluginName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pluginName_ch = (const ev_char*)__env->GetStringUTFChars(pluginName_j,JNI_FALSE);
				const EVString pluginName = pluginName_ch;
				__env->ReleaseStringUTFChars(pluginName_j, (const char *)pluginName_ch);
				#else
				const ev_wchar* pluginName_ch = (const ev_wchar*)__env->GetStringChars(pluginName_j,JNI_FALSE);
				const EVString pluginName = pluginName_ch;
				__env->ReleaseStringChars(pluginName_j, (const jchar *)pluginName_ch);
				#endif
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->loadPlugin(pluginName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_unloadPlugin_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pluginName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pluginName_ch = (const ev_char*)__env->GetStringUTFChars(pluginName_j,JNI_FALSE);
				const EVString pluginName = pluginName_ch;
				__env->ReleaseStringUTFChars(pluginName_j, (const char *)pluginName_ch);
				#else
				const ev_wchar* pluginName_ch = (const ev_wchar*)__env->GetStringChars(pluginName_j,JNI_FALSE);
				const EVString pluginName = pluginName_ch;
				__env->ReleaseStringChars(pluginName_j, (const jchar *)pluginName_ch);
				#endif
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->unloadPlugin(pluginName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_installPlugin_1CPlugin(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_plugin_j)
			{
				EarthView::World::Core::CPlugin *ref_plugin = (EarthView::World::Core::CPlugin*) ref_plugin_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->installPlugin(ref_plugin);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_uninstallPlugin_1CPlugin(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong plugin_j)
			{
				EarthView::World::Core::CPlugin *plugin = (EarthView::World::Core::CPlugin*) plugin_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->uninstallPlugin(plugin);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_getInstalledPlugins_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				const EarthView::World::Graphic::CRoot::PluginInstanceList& __values1 = pObjectX->getInstalledPlugins();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root__1fireFrameStarted_1FrameEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_bool __values1 = pObjectX->_fireFrameStarted(evt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root__1fireFrameStarted_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_bool __values1 = pObjectX->_fireFrameStarted();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root__1fireFrameRenderingQueued_1FrameEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_bool __values1 = pObjectX->_fireFrameRenderingQueued(evt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root__1fireFrameRenderingQueued_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_bool __values1 = pObjectX->_fireFrameRenderingQueued();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root__1fireFrameEnded_1FrameEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_bool __values1 = pObjectX->_fireFrameEnded(evt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root__1fireFrameEnded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_bool __values1 = pObjectX->_fireFrameEnded();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_getNextFrameNumber_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getNextFrameNumber();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root__1getCurrentSceneManager_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CSceneManager* __values1 = pObjectX->_getCurrentSceneManager();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root__1pushCurrentSceneManager_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_sm_j)
			{
				EarthView::World::Graphic::CSceneManager *ref_sm = (EarthView::World::Graphic::CSceneManager*) ref_sm_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->_pushCurrentSceneManager(ref_sm);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root__1popCurrentSceneManager_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j)
			{
				EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->_popCurrentSceneManager(sm);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root__1updateAllRenderTargets_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_bool __values1 = pObjectX->_updateAllRenderTargets();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root__1updateAllRenderTargets_1FrameEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_bool __values1 = pObjectX->_updateAllRenderTargets(evt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_createRenderQueueInvocationSequence_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueueInvocationSequence* __values1 = pObjectX->createRenderQueueInvocationSequence(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_getRenderQueueInvocationSequence_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueueInvocationSequence* __values1 = pObjectX->getRenderQueueInvocationSequence(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_destroyRenderQueueInvocationSequence_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->destroyRenderQueueInvocationSequence(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_destroyAllRenderQueueInvocationSequences_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->destroyAllRenderQueueInvocationSequences();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CRoot& __values1 = EarthView::World::Graphic::CRoot::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CRoot* __values1 = EarthView::World::Graphic::CRoot::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_getLicServer_1EVString_1ev_1uint16(JNIEnv *__env , jclass __clazz, jlong ip_j, jlong port_j)
			{
				EVString &ip = *(EVString*) ip_j;
				ev_uint16 &port = *(ev_uint16*) port_j;
				EarthView::World::Graphic::CRoot::getLicServer(ip, port);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_setLicServer_1EVString_1ev_1uint16(JNIEnv *__env , jclass __clazz, jstring ip_j, jint port_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* ip_ch = (const ev_char*)__env->GetStringUTFChars(ip_j,JNI_FALSE);
				const EVString ip = ip_ch;
				__env->ReleaseStringUTFChars(ip_j, (const char *)ip_ch);
				#else
				const ev_wchar* ip_ch = (const ev_wchar*)__env->GetStringChars(ip_j,JNI_FALSE);
				const EVString ip = ip_ch;
				__env->ReleaseStringChars(ip_j, (const jchar *)ip_ch);
				#endif
				ev_uint16 port = (ev_uint16) port_j;
				EarthView::World::Graphic::CRoot::setLicServer(ip, port);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Root_checkLic_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::License::EVLicenseStatusType __values1 = EarthView::World::Graphic::CRoot::checkLic();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Root_checkRuntimeLic_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::License::EVLicenseStatusType __values1 = EarthView::World::Graphic::CRoot::checkRuntimeLic();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Root_checkDevelopeLic_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::License::EVLicenseStatusType __values1 = EarthView::World::Graphic::CRoot::checkDevelopeLic();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Root_checkDesktopLic_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::License::EVLicenseStatusType __values1 = EarthView::World::Graphic::CRoot::checkDesktopLic();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_clearEventTimes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->clearEventTimes();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_setFrameSmoothingPeriod_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble period_j)
			{
				Real period = (Real) period_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->setFrameSmoothingPeriod(period);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Root_getFrameSmoothingPeriod_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				Real __values1 = pObjectX->getFrameSmoothingPeriod();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_addMovableObjectFactory_1CMovableObjectFactory_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_fact_j, jboolean overrideExisting_j)
			{
				EarthView::World::Graphic::CMovableObjectFactory *ref_fact = (EarthView::World::Graphic::CMovableObjectFactory*) ref_fact_j;
				ev_bool overrideExisting = (ev_bool) overrideExisting_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->addMovableObjectFactory(ref_fact, overrideExisting);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_addMovableObjectFactory_1CMovableObjectFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_fact_j)
			{
				EarthView::World::Graphic::CMovableObjectFactory *ref_fact = (EarthView::World::Graphic::CMovableObjectFactory*) ref_fact_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->addMovableObjectFactory(ref_fact);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_removeMovableObjectFactory_1CMovableObjectFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fact_j)
			{
				EarthView::World::Graphic::CMovableObjectFactory *fact = (EarthView::World::Graphic::CMovableObjectFactory*) fact_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->removeMovableObjectFactory(fact);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root_hasMovableObjectFactory_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring typeName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
				#else
				const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
				#endif
				const 				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMovableObjectFactory(typeName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_getMovableObjectFactory_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring typeName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
				#else
				const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
				#endif
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CMovableObjectFactory* __values1 = pObjectX->getMovableObjectFactory(typeName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root__1allocateNextMovableObjectTypeFlag_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->_allocateNextMovableObjectTypeFlag();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Root_00024MovableObjectFactoryPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot::MovableObjectFactoryPair *pObjectX = (EarthView::World::Graphic::CRoot::MovableObjectFactoryPair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->first;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_00024MovableObjectFactoryPair_set_1first_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CRoot::MovableObjectFactoryPair *pObjectX = (EarthView::World::Graphic::CRoot::MovableObjectFactoryPair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->first = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_00024MovableObjectFactoryPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot::MovableObjectFactoryPair *pObjectX = (EarthView::World::Graphic::CRoot::MovableObjectFactoryPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_00024MovableObjectFactoryPair_set_1second_1CMovableObjectFactory(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CRoot::MovableObjectFactoryPair *pObjectX = (EarthView::World::Graphic::CRoot::MovableObjectFactoryPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::CMovableObjectFactory*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root_00024MovableObjectFactoryIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator *pObjectX = (EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_00024MovableObjectFactoryIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator *pObjectX = (EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Root_00024MovableObjectFactoryIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator *pObjectX = (EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->nextKey();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_00024MovableObjectFactoryIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator *pObjectX = (EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator*) pObjXXXX;
				EarthView::World::Graphic::CMovableObjectFactory* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_00024MovableObjectFactoryIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator *pObjectX = (EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator*) pObjXXXX;
				EarthView::World::Graphic::CMovableObjectFactory** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_00024MovableObjectFactoryIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator *pObjectX = (EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator*) pObjXXXX;
				EarthView::World::Graphic::CMovableObjectFactory* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_00024MovableObjectFactoryIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator *pObjectX = (EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRoot::MovableObjectFactoryPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_00024MovableObjectFactoryIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator *pObjectX = (EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRoot::MovableObjectFactoryPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_00024MovableObjectFactoryIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator *pObjectX = (EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRoot::MovableObjectFactoryPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_getMovableObjectFactoryIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator __values1 = pObjectX->getMovableObjectFactoryIterator();
				EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator *returnvalues = new EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_getDisplayMonitorCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getDisplayMonitorCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Root_getWorkQueue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				EarthView::World::Core::CWorkQueue* __values1 = pObjectX->getWorkQueue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_setWorkQueue_1CWorkQueue_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_queue_j, jboolean forceStart_j)
			{
				EarthView::World::Core::CWorkQueue *ref_queue = (EarthView::World::Core::CWorkQueue*) ref_queue_j;
				bool forceStart = (bool) forceStart_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->setWorkQueue(ref_queue, forceStart);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_setWorkQueue_1CWorkQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_queue_j)
			{
				EarthView::World::Core::CWorkQueue *ref_queue = (EarthView::World::Core::CWorkQueue*) ref_queue_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->setWorkQueue(ref_queue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_setBlendIndicesGpuRedundant_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean redundant_j)
			{
				ev_bool redundant = (ev_bool) redundant_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->setBlendIndicesGpuRedundant(redundant);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root_isBlendIndicesGpuRedundant_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_bool __values1 = pObjectX->isBlendIndicesGpuRedundant();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_setBlendWeightsGpuRedundantev_1_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean redundant_j)
			{
				bool redundant = (bool) redundant_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->setBlendWeightsGpuRedundantev_(redundant);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Root_isBlendWeightsGpuRedundant_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				ev_bool __values1 = pObjectX->isBlendWeightsGpuRedundant();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Root_setDefaultMinPixelSize_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble pixelSize_j)
			{
				Real pixelSize = (Real) pixelSize_j;
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				pObjectX->setDefaultMinPixelSize(pixelSize);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Root_getDefaultMinPixelSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRoot *pObjectX = (EarthView::World::Graphic::CRoot*) pObjXXXX;
				Real __values1 = pObjectX->getDefaultMinPixelSize();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
		}
	}
}
