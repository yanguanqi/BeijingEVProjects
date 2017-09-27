/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/rendersystem.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DepthBufferVec_push_1back_1CDepthBuffer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CDepthBuffer *&ref_t = *(EarthView::World::Graphic::CDepthBuffer**) ref_t_j;
				EarthView::World::Graphic::DepthBufferVec *pObjectX = (EarthView::World::Graphic::DepthBufferVec*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DepthBufferVec_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::DepthBufferVec *pObjectX = (EarthView::World::Graphic::DepthBufferVec*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DepthBufferVec_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::DepthBufferVec *pObjectX = (EarthView::World::Graphic::DepthBufferVec*) pObjXXXX;
				EarthView::World::Graphic::CDepthBuffer*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DepthBufferVec_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::DepthBufferVec *pObjectX = (EarthView::World::Graphic::DepthBufferVec*) pObjXXXX;
				EarthView::World::Graphic::CDepthBuffer*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DepthBufferVec_insert_1ev_1uint32_1CDepthBuffer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CDepthBuffer *&ref_t = *(EarthView::World::Graphic::CDepthBuffer**) ref_t_j;
				EarthView::World::Graphic::DepthBufferVec *pObjectX = (EarthView::World::Graphic::DepthBufferVec*) pObjXXXX;
				pObjectX->insert(pos, ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DepthBufferVec_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::DepthBufferVec *pObjectX = (EarthView::World::Graphic::DepthBufferVec*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_DepthBufferVec_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::DepthBufferVec *pObjectX = (EarthView::World::Graphic::DepthBufferVec*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DepthBufferVec_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::DepthBufferVec& pObjectX = *(EarthView::World::Graphic::DepthBufferVec*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CDepthBuffer*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DepthBufferVec_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::DepthBufferVec *pObjectX = (EarthView::World::Graphic::DepthBufferVec*) pObjXXXX;
				EarthView::World::Graphic::CDepthBuffer*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DepthBufferVec_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::DepthBufferVec *pObjectX = (EarthView::World::Graphic::DepthBufferVec*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DepthBufferVec_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::DepthBufferVec *pObjectX = (EarthView::World::Graphic::DepthBufferVec*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DepthBufferVec_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::DepthBufferVec *pObjectX = (EarthView::World::Graphic::DepthBufferVec*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DepthBufferVec_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::DepthBufferVec *pObjectX = (EarthView::World::Graphic::DepthBufferVec*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_DepthBufferMap_push_1ev_1uint16_1DepthBufferVec(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j, jlong val_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::DepthBufferVec &val = *(EarthView::World::Graphic::DepthBufferVec*) val_j;
				EarthView::World::Graphic::DepthBufferMap *pObjectX = (EarthView::World::Graphic::DepthBufferMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_DepthBufferMap_exist_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::DepthBufferMap *pObjectX = (EarthView::World::Graphic::DepthBufferMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DepthBufferMap_OperatorIndex_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint key_j )
			{
				EarthView::World::Graphic::DepthBufferMap& pObjectX = *(EarthView::World::Graphic::DepthBufferMap*) pObjXXXX;
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::DepthBufferVec& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DepthBufferMap_get_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::DepthBufferMap *pObjectX = (EarthView::World::Graphic::DepthBufferMap*) pObjXXXX;
				EarthView::World::Graphic::DepthBufferVec& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DepthBufferMap_erase_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::DepthBufferMap *pObjectX = (EarthView::World::Graphic::DepthBufferMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DepthBufferMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::DepthBufferMap *pObjectX = (EarthView::World::Graphic::DepthBufferMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DepthBufferMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::DepthBufferMap *pObjectX = (EarthView::World::Graphic::DepthBufferMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_DepthBufferMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::DepthBufferMap *pObjectX = (EarthView::World::Graphic::DepthBufferMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderTargetMap_push_1EVString_1CRenderTarget(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong ref_val_j)
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
				EarthView::World::Graphic::CRenderTarget *&ref_val = *(EarthView::World::Graphic::CRenderTarget**) ref_val_j;
				EarthView::World::Graphic::RenderTargetMap *pObjectX = (EarthView::World::Graphic::RenderTargetMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderTargetMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::RenderTargetMap *pObjectX = (EarthView::World::Graphic::RenderTargetMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTargetMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::RenderTargetMap& pObjectX = *(EarthView::World::Graphic::RenderTargetMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CRenderTarget*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTargetMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::RenderTargetMap *pObjectX = (EarthView::World::Graphic::RenderTargetMap*) pObjXXXX;
				EarthView::World::Graphic::CRenderTarget*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::RenderTargetMap *pObjectX = (EarthView::World::Graphic::RenderTargetMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTargetMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::RenderTargetMap *pObjectX = (EarthView::World::Graphic::RenderTargetMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderTargetMap *pObjectX = (EarthView::World::Graphic::RenderTargetMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderTargetMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::RenderTargetMap *pObjectX = (EarthView::World::Graphic::RenderTargetMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetPriorityMap_push_1ev_1uchar_1CRenderTarget(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort key_j, jlong ref_val_j)
			{
				const ev_uchar key = (const ev_uchar) key_j;
				EarthView::World::Graphic::CRenderTarget *&ref_val = *(EarthView::World::Graphic::CRenderTarget**) ref_val_j;
				EarthView::World::Graphic::RenderTargetPriorityMap *pObjectX = (EarthView::World::Graphic::RenderTargetPriorityMap*) pObjXXXX;
				pObjectX->push(key, ref_val);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderTargetPriorityMap_exist_1ev_1uchar(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort key_j)
			{
				const ev_uchar key = (const ev_uchar) key_j;
				EarthView::World::Graphic::RenderTargetPriorityMap *pObjectX = (EarthView::World::Graphic::RenderTargetPriorityMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetPriorityMap_erase_1ev_1uchar(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort key_j)
			{
				const ev_uchar key = (const ev_uchar) key_j;
				EarthView::World::Graphic::RenderTargetPriorityMap *pObjectX = (EarthView::World::Graphic::RenderTargetPriorityMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTargetPriorityMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::RenderTargetPriorityMap *pObjectX = (EarthView::World::Graphic::RenderTargetPriorityMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTargetPriorityMap_count_1ev_1uchar(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort key_j)
			{
				const ev_uchar key = (const ev_uchar) key_j;
				EarthView::World::Graphic::RenderTargetPriorityMap *pObjectX = (EarthView::World::Graphic::RenderTargetPriorityMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->count(key);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTargetPriorityMap_get_1ev_1uchar_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort key_j, jlong index_j)
			{
				const ev_uchar key = (const ev_uchar) key_j;
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::RenderTargetPriorityMap *pObjectX = (EarthView::World::Graphic::RenderTargetPriorityMap*) pObjXXXX;
				EarthView::World::Graphic::CRenderTarget*& __values1 = pObjectX->get(key, index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetPriorityMap_erase_1ev_1uchar_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort key_j, jlong index_j)
			{
				const ev_uchar key = (const ev_uchar) key_j;
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::RenderTargetPriorityMap *pObjectX = (EarthView::World::Graphic::RenderTargetPriorityMap*) pObjXXXX;
				pObjectX->erase(key, index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetPriorityMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderTargetPriorityMap *pObjectX = (EarthView::World::Graphic::RenderTargetPriorityMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderTargetPriorityMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::RenderTargetPriorityMap *pObjectX = (EarthView::World::Graphic::RenderTargetPriorityMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			class JCRenderSystemProxy : public EarthView::World::Graphic::CRenderSystem
			{
			 private:
				EarthView::World::Core::ev_string m_getName_void_callback;
				EarthView::World::Core::ev_string m_getConfigOptions_void_callback;
				EarthView::World::Core::ev_string m_setConfigOption_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_createHardwareOcclusionQuery_void_callback;
				EarthView::World::Core::ev_string m_destroyHardwareOcclusionQuery_CHardwareOcclusionQuery_callback;
				EarthView::World::Core::ev_string m_validateConfigOptions_void_callback;
				EarthView::World::Core::ev_string m__initialise_ev_bool_EVString_callback;
				EarthView::World::Core::ev_string m__initialise_ev_bool_callback;
				EarthView::World::Core::ev_string m_createRenderSystemCapabilities_void_callback;
				EarthView::World::Core::ev_string m_useCustomRenderSystemCapabilities_CRenderSystemCapabilities_callback;
				EarthView::World::Core::ev_string m_reinitialise_void_callback;
				EarthView::World::Core::ev_string m_shutdown_void_callback;
				EarthView::World::Core::ev_string m_setAmbientLight_ev_real32_ev_real32_ev_real32_callback;
				EarthView::World::Core::ev_string m_setShadingType_ShadeOptions_callback;
				EarthView::World::Core::ev_string m_setLightingEnabled_ev_bool_callback;
				EarthView::World::Core::ev_string m__createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m__createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_callback;
				EarthView::World::Core::ev_string m__createRenderWindows_RenderWindowDescriptionList_RenderWindowList_callback;
				EarthView::World::Core::ev_string m_createMultiRenderTarget_EVString_callback;
				EarthView::World::Core::ev_string m_destroyRenderWindow_EVString_callback;
				EarthView::World::Core::ev_string m_destroyRenderTexture_EVString_callback;
				EarthView::World::Core::ev_string m_destroyRenderTarget_EVString_callback;
				EarthView::World::Core::ev_string m_attachRenderTarget_CRenderTarget_callback;
				EarthView::World::Core::ev_string m_getRenderTarget_EVString_callback;
				EarthView::World::Core::ev_string m_detachRenderTarget_EVString_callback;
				EarthView::World::Core::ev_string m_getRenderTargetIterator_void_callback;
				EarthView::World::Core::ev_string m_getErrorDescription_ev_int32_callback;
				EarthView::World::Core::ev_string m_setDepthBufferFor_CRenderTarget_callback;
				EarthView::World::Core::ev_string m__useLights_LightList_ev_uint16_callback;
				EarthView::World::Core::ev_string m_areFixedFunctionLightsInViewSpace_void_callback;
				EarthView::World::Core::ev_string m__setWorldMatrix_CMatrix4_callback;
				EarthView::World::Core::ev_string m__setWorldMatrices_CMatrix4_ev_uint16_callback;
				EarthView::World::Core::ev_string m__setViewMatrix_CMatrix4_callback;
				EarthView::World::Core::ev_string m__getViewMatrix_void_callback;
				EarthView::World::Core::ev_string m__setProjectionMatrix_CMatrix4_callback;
				EarthView::World::Core::ev_string m__getProjectMatrix_void_callback;
				EarthView::World::Core::ev_string m__getProjectMatrixDepth_void_callback;
				EarthView::World::Core::ev_string m__setTextureUnitSettings_ev_size_t_CTextureUnitState_callback;
				EarthView::World::Core::ev_string m__disableTextureUnit_ev_size_t_callback;
				EarthView::World::Core::ev_string m__disableTextureUnitsFrom_ev_size_t_callback;
				EarthView::World::Core::ev_string m__setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32_callback;
				EarthView::World::Core::ev_string m__setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_callback;
				EarthView::World::Core::ev_string m__setPointSpritesEnabled_ev_bool_callback;
				EarthView::World::Core::ev_string m__setPointParameters_Real_ev_bool_Real_Real_Real_Real_Real_callback;
				EarthView::World::Core::ev_string m__setTexture_ev_size_t_ev_bool_CTexturePtr_callback;
				EarthView::World::Core::ev_string m__setTexture_ev_size_t_ev_bool_EVString_callback;
				EarthView::World::Core::ev_string m__setVertexTexture_ev_size_t_CTexturePtr_callback;
				EarthView::World::Core::ev_string m__setTextureCoordSet_ev_size_t_ev_size_t_callback;
				EarthView::World::Core::ev_string m__setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_CFrustum_callback;
				EarthView::World::Core::ev_string m__setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_callback;
				EarthView::World::Core::ev_string m__setTextureBlendMode_ev_size_t_CLayerBlendModeEx_callback;
				EarthView::World::Core::ev_string m__setTextureUnitFiltering_ev_size_t_FilterOptions_FilterOptions_FilterOptions_callback;
				EarthView::World::Core::ev_string m__setTextureUnitFiltering_ev_size_t_FilterType_FilterOptions_callback;
				EarthView::World::Core::ev_string m__setTextureLayerAnisotropy_ev_size_t_ev_uint32_callback;
				EarthView::World::Core::ev_string m__setTextureAddressingMode_ev_size_t_UVWAddressingMode_callback;
				EarthView::World::Core::ev_string m__setTextureBorderColour_ev_size_t_CColourValue_callback;
				EarthView::World::Core::ev_string m__setTextureMipmapBias_ev_size_t_ev_real32_callback;
				EarthView::World::Core::ev_string m__setTextureMatrix_ev_size_t_CMatrix4_callback;
				EarthView::World::Core::ev_string m__setSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_callback;
				EarthView::World::Core::ev_string m__setSceneBlending_SceneBlendFactor_SceneBlendFactor_callback;
				EarthView::World::Core::ev_string m__setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation_callback;
				EarthView::World::Core::ev_string m__setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_callback;
				EarthView::World::Core::ev_string m__setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_callback;
				EarthView::World::Core::ev_string m__setAlphaRejectSettings_CompareFunction_ev_uchar_ev_bool_callback;
				EarthView::World::Core::ev_string m__setTextureProjectionRelativeTo_ev_bool_CVector3_callback;
				EarthView::World::Core::ev_string m__createDepthBufferFor_CRenderTarget_callback;
				EarthView::World::Core::ev_string m__beginFrame_void_callback;
				EarthView::World::Core::ev_string m__pauseFrame_void_callback;
				EarthView::World::Core::ev_string m__resumeFrame_RenderSystemContext_callback;
				EarthView::World::Core::ev_string m__endFrame_void_callback;
				EarthView::World::Core::ev_string m__setViewport_CViewport_callback;
				EarthView::World::Core::ev_string m__getViewport_void_callback;
				EarthView::World::Core::ev_string m__setCullingMode_CullingMode_callback;
				EarthView::World::Core::ev_string m__getCullingMode_void_callback;
				EarthView::World::Core::ev_string m__setDepthBufferParams_ev_bool_ev_bool_CompareFunction_callback;
				EarthView::World::Core::ev_string m__setDepthBufferParams_ev_bool_ev_bool_callback;
				EarthView::World::Core::ev_string m__setDepthBufferParams_ev_bool_callback;
				EarthView::World::Core::ev_string m__setDepthBufferParams_void_callback;
				EarthView::World::Core::ev_string m__setDepthBufferCheckEnabled_ev_bool_callback;
				EarthView::World::Core::ev_string m__setDepthBufferCheckEnabled_void_callback;
				EarthView::World::Core::ev_string m__setDepthBufferWriteEnabled_ev_bool_callback;
				EarthView::World::Core::ev_string m__setDepthBufferWriteEnabled_void_callback;
				EarthView::World::Core::ev_string m__setDepthBufferFunction_CompareFunction_callback;
				EarthView::World::Core::ev_string m__setDepthBufferFunction_void_callback;
				EarthView::World::Core::ev_string m__setColourBufferWriteEnabled_ev_bool_ev_bool_ev_bool_ev_bool_callback;
				EarthView::World::Core::ev_string m__setDepthBias_ev_real32_ev_real32_callback;
				EarthView::World::Core::ev_string m__setDepthBias_ev_real32_callback;
				EarthView::World::Core::ev_string m__setFog_FogMode_CColourValue_Real_Real_Real_callback;
				EarthView::World::Core::ev_string m__setFog_FogMode_CColourValue_Real_Real_callback;
				EarthView::World::Core::ev_string m__setFog_FogMode_CColourValue_Real_callback;
				EarthView::World::Core::ev_string m__setFog_FogMode_CColourValue_callback;
				EarthView::World::Core::ev_string m__setFog_FogMode_callback;
				EarthView::World::Core::ev_string m__setFog_void_callback;
				EarthView::World::Core::ev_string m__beginGeometryCount_void_callback;
				EarthView::World::Core::ev_string m__getFaceCount_void_callback;
				EarthView::World::Core::ev_string m__getBatchCount_void_callback;
				EarthView::World::Core::ev_string m__getVertexCount_void_callback;
				EarthView::World::Core::ev_string m_convertColourValue_CColourValue_ev_uint32_callback;
				EarthView::World::Core::ev_string m_toColourValue_ev_uint32_CColourValue_callback;
				EarthView::World::Core::ev_string m_getColourVertexElementType_void_callback;
				EarthView::World::Core::ev_string m__convertProjectionMatrix_CMatrix4_CMatrix4_ev_bool_callback;
				EarthView::World::Core::ev_string m__convertProjectionMatrix_CMatrix4_CMatrix4_callback;
				EarthView::World::Core::ev_string m__makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool_callback;
				EarthView::World::Core::ev_string m__makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_callback;
				EarthView::World::Core::ev_string m__makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool_callback;
				EarthView::World::Core::ev_string m__makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_callback;
				EarthView::World::Core::ev_string m__makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool_callback;
				EarthView::World::Core::ev_string m__makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_callback;
				EarthView::World::Core::ev_string m__applyObliqueDepthProjection_CMatrix4_CPlane_ev_bool_callback;
				EarthView::World::Core::ev_string m__setPolygonMode_PolygonMode_callback;
				EarthView::World::Core::ev_string m_setStencilCheckEnabled_ev_bool_callback;
				EarthView::World::Core::ev_string m_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool_callback;
				EarthView::World::Core::ev_string m_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_callback;
				EarthView::World::Core::ev_string m_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_callback;
				EarthView::World::Core::ev_string m_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_callback;
				EarthView::World::Core::ev_string m_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_callback;
				EarthView::World::Core::ev_string m_setStencilBufferParams_CompareFunction_ev_uint32_callback;
				EarthView::World::Core::ev_string m_setStencilBufferParams_CompareFunction_callback;
				EarthView::World::Core::ev_string m_setStencilBufferParams_void_callback;
				EarthView::World::Core::ev_string m_setVertexDeclaration_CVertexDeclaration_callback;
				EarthView::World::Core::ev_string m_setVertexBufferBinding_CVertexBufferBinding_callback;
				EarthView::World::Core::ev_string m_setNormaliseNormals_ev_bool_callback;
				EarthView::World::Core::ev_string m__render_CRenderOperation_callback;
				EarthView::World::Core::ev_string m_getDriverVersion_void_callback;
				EarthView::World::Core::ev_string m_getActD3D9Device_void_callback;
				EarthView::World::Core::ev_string m__getDefaultViewportMaterialScheme_void_callback;
				EarthView::World::Core::ev_string m_bindGpuProgram_CGpuProgram_callback;
				EarthView::World::Core::ev_string m_bindGpuProgramParameters_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16_callback;
				EarthView::World::Core::ev_string m_bindGpuProgramPassIterationParameters_GpuProgramType_callback;
				EarthView::World::Core::ev_string m_unbindGpuProgram_GpuProgramType_callback;
				EarthView::World::Core::ev_string m_isGpuProgramBound_GpuProgramType_callback;
				EarthView::World::Core::ev_string m_setClipPlanes_PlaneList_callback;
				EarthView::World::Core::ev_string m_addClipPlane_CPlane_callback;
				EarthView::World::Core::ev_string m_addClipPlane_Real_Real_Real_Real_callback;
				EarthView::World::Core::ev_string m_resetClipPlanes_void_callback;
				EarthView::World::Core::ev_string m__initRenderTargets_void_callback;
				EarthView::World::Core::ev_string m__notifyCameraRemoved_CCamera_callback;
				EarthView::World::Core::ev_string m__updateAllRenderTargets_ev_bool_callback;
				EarthView::World::Core::ev_string m__updateAllRenderTargets_void_callback;
				EarthView::World::Core::ev_string m__swapAllRenderTargetBuffers_ev_bool_callback;
				EarthView::World::Core::ev_string m__swapAllRenderTargetBuffers_void_callback;
				EarthView::World::Core::ev_string m_setInvertVertexWinding_ev_bool_callback;
				EarthView::World::Core::ev_string m_getInvertVertexWinding_void_callback;
				EarthView::World::Core::ev_string m_setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t_callback;
				EarthView::World::Core::ev_string m_setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_callback;
				EarthView::World::Core::ev_string m_setScissorTest_ev_bool_ev_size_t_ev_size_t_callback;
				EarthView::World::Core::ev_string m_setScissorTest_ev_bool_ev_size_t_callback;
				EarthView::World::Core::ev_string m_setScissorTest_ev_bool_callback;
				EarthView::World::Core::ev_string m_clearFrameBuffer_ev_uint32_CColourValue_Real_ev_uint16_callback;
				EarthView::World::Core::ev_string m_clearFrameBuffer_ev_uint32_CColourValue_Real_callback;
				EarthView::World::Core::ev_string m_clearFrameBuffer_ev_uint32_CColourValue_callback;
				EarthView::World::Core::ev_string m_clearFrameBuffer_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getHorizontalTexelOffset_void_callback;
				EarthView::World::Core::ev_string m_getVerticalTexelOffset_void_callback;
				EarthView::World::Core::ev_string m_getMinimumDepthInputValue_void_callback;
				EarthView::World::Core::ev_string m_getMaximumDepthInputValue_void_callback;
				EarthView::World::Core::ev_string m_setCurrentPassIterationCount_ev_size_t_callback;
				EarthView::World::Core::ev_string m_setDeriveDepthBias_ev_bool_ev_real32_ev_real32_ev_real32_callback;
				EarthView::World::Core::ev_string m_setDeriveDepthBias_ev_bool_ev_real32_ev_real32_callback;
				EarthView::World::Core::ev_string m_setDeriveDepthBias_ev_bool_ev_real32_callback;
				EarthView::World::Core::ev_string m_setDeriveDepthBias_ev_bool_callback;
				EarthView::World::Core::ev_string m__setRenderTarget_CRenderTarget_callback;
				EarthView::World::Core::ev_string m_addListener_CRenderSystemListener_callback;
				EarthView::World::Core::ev_string m_removeListener_CRenderSystemListener_callback;
				EarthView::World::Core::ev_string m_getRenderSystemEvents_void_callback;
				EarthView::World::Core::ev_string m_preExtraThreadsStarted_void_callback;
				EarthView::World::Core::ev_string m_postExtraThreadsStarted_void_callback;
				EarthView::World::Core::ev_string m_registerThread_void_callback;
				EarthView::World::Core::ev_string m_flushRenderSystem_void_callback;
				EarthView::World::Core::ev_string m_unregisterThread_void_callback;
				EarthView::World::Core::ev_string m_getDisplayMonitorCount_void_callback;
				EarthView::World::Core::ev_string m_fireEvent_EVString_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_fireEvent_EVString_callback;
				EarthView::World::Core::ev_string m_setClipPlanesImpl_PlaneList_callback;
				EarthView::World::Core::ev_string m_initialiseFromRenderSystemCapabilities_CRenderSystemCapabilities_CRenderTarget_callback;
			public:
				JCRenderSystemProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderSystem(pList)
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
				void register_getName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getName_void_callback = __method;
				}
				void register_getConfigOptions_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getConfigOptions_void_callback = __method;
				}
				void register_setConfigOption_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setConfigOption_EVString_EVString_callback = __method;
				}
				void register_createHardwareOcclusionQuery_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createHardwareOcclusionQuery_void_callback = __method;
				}
				void register_destroyHardwareOcclusionQuery_CHardwareOcclusionQuery_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyHardwareOcclusionQuery_CHardwareOcclusionQuery_callback = __method;
				}
				void register_validateConfigOptions_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_validateConfigOptions_void_callback = __method;
				}
				void register__initialise_ev_bool_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__initialise_ev_bool_EVString_callback = __method;
				}
				void register__initialise_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__initialise_ev_bool_callback = __method;
				}
				void register_createRenderSystemCapabilities_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createRenderSystemCapabilities_void_callback = __method;
				}
				void register_useCustomRenderSystemCapabilities_CRenderSystemCapabilities_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_useCustomRenderSystemCapabilities_CRenderSystemCapabilities_callback = __method;
				}
				void register_reinitialise_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_reinitialise_void_callback = __method;
				}
				void register_shutdown_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_shutdown_void_callback = __method;
				}
				void register_setAmbientLight_ev_real32_ev_real32_ev_real32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAmbientLight_ev_real32_ev_real32_ev_real32_callback = __method;
				}
				void register_setShadingType_ShadeOptions_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setShadingType_ShadeOptions_callback = __method;
				}
				void register_setLightingEnabled_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setLightingEnabled_ev_bool_callback = __method;
				}
				void register__createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList_callback = __method;
				}
				void register__createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_callback = __method;
				}
				void register__createRenderWindows_RenderWindowDescriptionList_RenderWindowList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__createRenderWindows_RenderWindowDescriptionList_RenderWindowList_callback = __method;
				}
				void register_createMultiRenderTarget_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createMultiRenderTarget_EVString_callback = __method;
				}
				void register_destroyRenderWindow_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyRenderWindow_EVString_callback = __method;
				}
				void register_destroyRenderTexture_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyRenderTexture_EVString_callback = __method;
				}
				void register_destroyRenderTarget_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyRenderTarget_EVString_callback = __method;
				}
				void register_attachRenderTarget_CRenderTarget_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_attachRenderTarget_CRenderTarget_callback = __method;
				}
				void register_getRenderTarget_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRenderTarget_EVString_callback = __method;
				}
				void register_detachRenderTarget_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_detachRenderTarget_EVString_callback = __method;
				}
				void register_getRenderTargetIterator_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRenderTargetIterator_void_callback = __method;
				}
				void register_getErrorDescription_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getErrorDescription_ev_int32_callback = __method;
				}
				void register_setDepthBufferFor_CRenderTarget_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDepthBufferFor_CRenderTarget_callback = __method;
				}
				void register__useLights_LightList_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__useLights_LightList_ev_uint16_callback = __method;
				}
				void register_areFixedFunctionLightsInViewSpace_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_areFixedFunctionLightsInViewSpace_void_callback = __method;
				}
				void register__setWorldMatrix_CMatrix4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setWorldMatrix_CMatrix4_callback = __method;
				}
				void register__setWorldMatrices_CMatrix4_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setWorldMatrices_CMatrix4_ev_uint16_callback = __method;
				}
				void register__setViewMatrix_CMatrix4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setViewMatrix_CMatrix4_callback = __method;
				}
				void register__getViewMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getViewMatrix_void_callback = __method;
				}
				void register__setProjectionMatrix_CMatrix4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setProjectionMatrix_CMatrix4_callback = __method;
				}
				void register__getProjectMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getProjectMatrix_void_callback = __method;
				}
				void register__getProjectMatrixDepth_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getProjectMatrixDepth_void_callback = __method;
				}
				void register__setTextureUnitSettings_ev_size_t_CTextureUnitState_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setTextureUnitSettings_ev_size_t_CTextureUnitState_callback = __method;
				}
				void register__disableTextureUnit_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__disableTextureUnit_ev_size_t_callback = __method;
				}
				void register__disableTextureUnitsFrom_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__disableTextureUnitsFrom_ev_size_t_callback = __method;
				}
				void register__setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32_callback = __method;
				}
				void register__setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_callback = __method;
				}
				void register__setPointSpritesEnabled_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setPointSpritesEnabled_ev_bool_callback = __method;
				}
				void register__setPointParameters_Real_ev_bool_Real_Real_Real_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setPointParameters_Real_ev_bool_Real_Real_Real_Real_Real_callback = __method;
				}
				void register__setTexture_ev_size_t_ev_bool_CTexturePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setTexture_ev_size_t_ev_bool_CTexturePtr_callback = __method;
				}
				void register__setTexture_ev_size_t_ev_bool_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setTexture_ev_size_t_ev_bool_EVString_callback = __method;
				}
				void register__setVertexTexture_ev_size_t_CTexturePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setVertexTexture_ev_size_t_CTexturePtr_callback = __method;
				}
				void register__setTextureCoordSet_ev_size_t_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setTextureCoordSet_ev_size_t_ev_size_t_callback = __method;
				}
				void register__setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_CFrustum_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_CFrustum_callback = __method;
				}
				void register__setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_callback = __method;
				}
				void register__setTextureBlendMode_ev_size_t_CLayerBlendModeEx_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setTextureBlendMode_ev_size_t_CLayerBlendModeEx_callback = __method;
				}
				void register__setTextureUnitFiltering_ev_size_t_FilterOptions_FilterOptions_FilterOptions_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setTextureUnitFiltering_ev_size_t_FilterOptions_FilterOptions_FilterOptions_callback = __method;
				}
				void register__setTextureUnitFiltering_ev_size_t_FilterType_FilterOptions_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setTextureUnitFiltering_ev_size_t_FilterType_FilterOptions_callback = __method;
				}
				void register__setTextureLayerAnisotropy_ev_size_t_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setTextureLayerAnisotropy_ev_size_t_ev_uint32_callback = __method;
				}
				void register__setTextureAddressingMode_ev_size_t_UVWAddressingMode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setTextureAddressingMode_ev_size_t_UVWAddressingMode_callback = __method;
				}
				void register__setTextureBorderColour_ev_size_t_CColourValue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setTextureBorderColour_ev_size_t_CColourValue_callback = __method;
				}
				void register__setTextureMipmapBias_ev_size_t_ev_real32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setTextureMipmapBias_ev_size_t_ev_real32_callback = __method;
				}
				void register__setTextureMatrix_ev_size_t_CMatrix4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setTextureMatrix_ev_size_t_CMatrix4_callback = __method;
				}
				void register__setSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_callback = __method;
				}
				void register__setSceneBlending_SceneBlendFactor_SceneBlendFactor_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setSceneBlending_SceneBlendFactor_SceneBlendFactor_callback = __method;
				}
				void register__setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation_callback = __method;
				}
				void register__setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_callback = __method;
				}
				void register__setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_callback = __method;
				}
				void register__setAlphaRejectSettings_CompareFunction_ev_uchar_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setAlphaRejectSettings_CompareFunction_ev_uchar_ev_bool_callback = __method;
				}
				void register__setTextureProjectionRelativeTo_ev_bool_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setTextureProjectionRelativeTo_ev_bool_CVector3_callback = __method;
				}
				void register__createDepthBufferFor_CRenderTarget_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__createDepthBufferFor_CRenderTarget_callback = __method;
				}
				void register__beginFrame_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__beginFrame_void_callback = __method;
				}
				void register__pauseFrame_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__pauseFrame_void_callback = __method;
				}
				void register__resumeFrame_RenderSystemContext_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__resumeFrame_RenderSystemContext_callback = __method;
				}
				void register__endFrame_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__endFrame_void_callback = __method;
				}
				void register__setViewport_CViewport_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setViewport_CViewport_callback = __method;
				}
				void register__getViewport_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getViewport_void_callback = __method;
				}
				void register__setCullingMode_CullingMode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setCullingMode_CullingMode_callback = __method;
				}
				void register__getCullingMode_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getCullingMode_void_callback = __method;
				}
				void register__setDepthBufferParams_ev_bool_ev_bool_CompareFunction_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setDepthBufferParams_ev_bool_ev_bool_CompareFunction_callback = __method;
				}
				void register__setDepthBufferParams_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setDepthBufferParams_ev_bool_ev_bool_callback = __method;
				}
				void register__setDepthBufferParams_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setDepthBufferParams_ev_bool_callback = __method;
				}
				void register__setDepthBufferParams_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setDepthBufferParams_void_callback = __method;
				}
				void register__setDepthBufferCheckEnabled_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setDepthBufferCheckEnabled_ev_bool_callback = __method;
				}
				void register__setDepthBufferCheckEnabled_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setDepthBufferCheckEnabled_void_callback = __method;
				}
				void register__setDepthBufferWriteEnabled_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setDepthBufferWriteEnabled_ev_bool_callback = __method;
				}
				void register__setDepthBufferWriteEnabled_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setDepthBufferWriteEnabled_void_callback = __method;
				}
				void register__setDepthBufferFunction_CompareFunction_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setDepthBufferFunction_CompareFunction_callback = __method;
				}
				void register__setDepthBufferFunction_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setDepthBufferFunction_void_callback = __method;
				}
				void register__setColourBufferWriteEnabled_ev_bool_ev_bool_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setColourBufferWriteEnabled_ev_bool_ev_bool_ev_bool_ev_bool_callback = __method;
				}
				void register__setDepthBias_ev_real32_ev_real32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setDepthBias_ev_real32_ev_real32_callback = __method;
				}
				void register__setDepthBias_ev_real32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setDepthBias_ev_real32_callback = __method;
				}
				void register__setFog_FogMode_CColourValue_Real_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setFog_FogMode_CColourValue_Real_Real_Real_callback = __method;
				}
				void register__setFog_FogMode_CColourValue_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setFog_FogMode_CColourValue_Real_Real_callback = __method;
				}
				void register__setFog_FogMode_CColourValue_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setFog_FogMode_CColourValue_Real_callback = __method;
				}
				void register__setFog_FogMode_CColourValue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setFog_FogMode_CColourValue_callback = __method;
				}
				void register__setFog_FogMode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setFog_FogMode_callback = __method;
				}
				void register__setFog_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setFog_void_callback = __method;
				}
				void register__beginGeometryCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__beginGeometryCount_void_callback = __method;
				}
				void register__getFaceCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getFaceCount_void_callback = __method;
				}
				void register__getBatchCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getBatchCount_void_callback = __method;
				}
				void register__getVertexCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getVertexCount_void_callback = __method;
				}
				void register_convertColourValue_CColourValue_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_convertColourValue_CColourValue_ev_uint32_callback = __method;
				}
				void register_toColourValue_ev_uint32_CColourValue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_toColourValue_ev_uint32_CColourValue_callback = __method;
				}
				void register_getColourVertexElementType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getColourVertexElementType_void_callback = __method;
				}
				void register__convertProjectionMatrix_CMatrix4_CMatrix4_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__convertProjectionMatrix_CMatrix4_CMatrix4_ev_bool_callback = __method;
				}
				void register__convertProjectionMatrix_CMatrix4_CMatrix4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__convertProjectionMatrix_CMatrix4_CMatrix4_callback = __method;
				}
				void register__makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool_callback = __method;
				}
				void register__makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_callback = __method;
				}
				void register__makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool_callback = __method;
				}
				void register__makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_callback = __method;
				}
				void register__makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool_callback = __method;
				}
				void register__makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_callback = __method;
				}
				void register__applyObliqueDepthProjection_CMatrix4_CPlane_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__applyObliqueDepthProjection_CMatrix4_CPlane_ev_bool_callback = __method;
				}
				void register__setPolygonMode_PolygonMode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setPolygonMode_PolygonMode_callback = __method;
				}
				void register_setStencilCheckEnabled_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setStencilCheckEnabled_ev_bool_callback = __method;
				}
				void register_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool_callback = __method;
				}
				void register_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_callback = __method;
				}
				void register_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_callback = __method;
				}
				void register_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_callback = __method;
				}
				void register_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_callback = __method;
				}
				void register_setStencilBufferParams_CompareFunction_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setStencilBufferParams_CompareFunction_ev_uint32_callback = __method;
				}
				void register_setStencilBufferParams_CompareFunction_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setStencilBufferParams_CompareFunction_callback = __method;
				}
				void register_setStencilBufferParams_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setStencilBufferParams_void_callback = __method;
				}
				void register_setVertexDeclaration_CVertexDeclaration_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setVertexDeclaration_CVertexDeclaration_callback = __method;
				}
				void register_setVertexBufferBinding_CVertexBufferBinding_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setVertexBufferBinding_CVertexBufferBinding_callback = __method;
				}
				void register_setNormaliseNormals_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setNormaliseNormals_ev_bool_callback = __method;
				}
				void register__render_CRenderOperation_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__render_CRenderOperation_callback = __method;
				}
				void register_getDriverVersion_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDriverVersion_void_callback = __method;
				}
				void register_getActD3D9Device_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getActD3D9Device_void_callback = __method;
				}
				void register__getDefaultViewportMaterialScheme_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getDefaultViewportMaterialScheme_void_callback = __method;
				}
				void register_bindGpuProgram_CGpuProgram_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_bindGpuProgram_CGpuProgram_callback = __method;
				}
				void register_bindGpuProgramParameters_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_bindGpuProgramParameters_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16_callback = __method;
				}
				void register_bindGpuProgramPassIterationParameters_GpuProgramType_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_bindGpuProgramPassIterationParameters_GpuProgramType_callback = __method;
				}
				void register_unbindGpuProgram_GpuProgramType_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unbindGpuProgram_GpuProgramType_callback = __method;
				}
				void register_isGpuProgramBound_GpuProgramType_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isGpuProgramBound_GpuProgramType_callback = __method;
				}
				void register_setClipPlanes_PlaneList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setClipPlanes_PlaneList_callback = __method;
				}
				void register_addClipPlane_CPlane_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addClipPlane_CPlane_callback = __method;
				}
				void register_addClipPlane_Real_Real_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addClipPlane_Real_Real_Real_Real_callback = __method;
				}
				void register_resetClipPlanes_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resetClipPlanes_void_callback = __method;
				}
				void register__initRenderTargets_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__initRenderTargets_void_callback = __method;
				}
				void register__notifyCameraRemoved_CCamera_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyCameraRemoved_CCamera_callback = __method;
				}
				void register__updateAllRenderTargets_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__updateAllRenderTargets_ev_bool_callback = __method;
				}
				void register__updateAllRenderTargets_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__updateAllRenderTargets_void_callback = __method;
				}
				void register__swapAllRenderTargetBuffers_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__swapAllRenderTargetBuffers_ev_bool_callback = __method;
				}
				void register__swapAllRenderTargetBuffers_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__swapAllRenderTargetBuffers_void_callback = __method;
				}
				void register_setInvertVertexWinding_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setInvertVertexWinding_ev_bool_callback = __method;
				}
				void register_getInvertVertexWinding_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInvertVertexWinding_void_callback = __method;
				}
				void register_setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t_callback = __method;
				}
				void register_setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_callback = __method;
				}
				void register_setScissorTest_ev_bool_ev_size_t_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setScissorTest_ev_bool_ev_size_t_ev_size_t_callback = __method;
				}
				void register_setScissorTest_ev_bool_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setScissorTest_ev_bool_ev_size_t_callback = __method;
				}
				void register_setScissorTest_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setScissorTest_ev_bool_callback = __method;
				}
				void register_clearFrameBuffer_ev_uint32_CColourValue_Real_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_clearFrameBuffer_ev_uint32_CColourValue_Real_ev_uint16_callback = __method;
				}
				void register_clearFrameBuffer_ev_uint32_CColourValue_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_clearFrameBuffer_ev_uint32_CColourValue_Real_callback = __method;
				}
				void register_clearFrameBuffer_ev_uint32_CColourValue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_clearFrameBuffer_ev_uint32_CColourValue_callback = __method;
				}
				void register_clearFrameBuffer_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_clearFrameBuffer_ev_uint32_callback = __method;
				}
				void register_getHorizontalTexelOffset_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getHorizontalTexelOffset_void_callback = __method;
				}
				void register_getVerticalTexelOffset_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getVerticalTexelOffset_void_callback = __method;
				}
				void register_getMinimumDepthInputValue_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMinimumDepthInputValue_void_callback = __method;
				}
				void register_getMaximumDepthInputValue_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMaximumDepthInputValue_void_callback = __method;
				}
				void register_setCurrentPassIterationCount_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setCurrentPassIterationCount_ev_size_t_callback = __method;
				}
				void register_setDeriveDepthBias_ev_bool_ev_real32_ev_real32_ev_real32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDeriveDepthBias_ev_bool_ev_real32_ev_real32_ev_real32_callback = __method;
				}
				void register_setDeriveDepthBias_ev_bool_ev_real32_ev_real32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDeriveDepthBias_ev_bool_ev_real32_ev_real32_callback = __method;
				}
				void register_setDeriveDepthBias_ev_bool_ev_real32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDeriveDepthBias_ev_bool_ev_real32_callback = __method;
				}
				void register_setDeriveDepthBias_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDeriveDepthBias_ev_bool_callback = __method;
				}
				void register__setRenderTarget_CRenderTarget_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setRenderTarget_CRenderTarget_callback = __method;
				}
				void register_addListener_CRenderSystemListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addListener_CRenderSystemListener_callback = __method;
				}
				void register_removeListener_CRenderSystemListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeListener_CRenderSystemListener_callback = __method;
				}
				void register_getRenderSystemEvents_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRenderSystemEvents_void_callback = __method;
				}
				void register_preExtraThreadsStarted_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_preExtraThreadsStarted_void_callback = __method;
				}
				void register_postExtraThreadsStarted_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postExtraThreadsStarted_void_callback = __method;
				}
				void register_registerThread_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_registerThread_void_callback = __method;
				}
				void register_flushRenderSystem_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_flushRenderSystem_void_callback = __method;
				}
				void register_unregisterThread_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unregisterThread_void_callback = __method;
				}
				void register_getDisplayMonitorCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDisplayMonitorCount_void_callback = __method;
				}
				void register_fireEvent_EVString_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_fireEvent_EVString_CommonStringPairList_callback = __method;
				}
				void register_fireEvent_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_fireEvent_EVString_callback = __method;
				}
				void register_setClipPlanesImpl_PlaneList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setClipPlanesImpl_PlaneList_callback = __method;
				}
				void register_initialiseFromRenderSystemCapabilities_CRenderSystemCapabilities_CRenderTarget_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_initialiseFromRenderSystemCapabilities_CRenderSystemCapabilities_CRenderTarget_callback = __method;
				}
				virtual EVString getName() const
				{
					if (this->_gRef != NULL && this->m_getName_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getName_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CRenderSystem::getName();
					}
				}
				virtual EarthView::World::Graphic::ConfigOptionMap& getConfigOptions()
				{
					if (this->_gRef != NULL && this->m_getConfigOptions_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getConfigOptions_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ConfigOptionMap &__values1 = *(EarthView::World::Graphic::ConfigOptionMap*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::getConfigOptions();
					}
				}
				virtual void setConfigOption(const EVString& name, const EVString& value)
				{
					if (this->_gRef != NULL && this->m_setConfigOption_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring value_wch = value;
						jstring value_j = __env->NewString((const jchar*)value_wch.getString(), value_wch.size());
						jmethodID __method = __gr->getMethod("setConfigOption_EVString_EVString_callback");
						__env->CallVoidMethod(__obj, __method , name_j, value_j);
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
						return this->CRenderSystem::setConfigOption(name, value);
					}
				}
				virtual EarthView::World::Graphic::CHardwareOcclusionQuery* createHardwareOcclusionQuery()
				{
					if (this->_gRef != NULL && this->m_createHardwareOcclusionQuery_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("createHardwareOcclusionQuery_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareOcclusionQuery *__values1 = (EarthView::World::Graphic::CHardwareOcclusionQuery*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::createHardwareOcclusionQuery();
					}
				}
				virtual void destroyHardwareOcclusionQuery(EarthView::World::Graphic::CHardwareOcclusionQuery* hq)
				{
					if (this->_gRef != NULL && this->m_destroyHardwareOcclusionQuery_CHardwareOcclusionQuery_callback != "" && this->isCustomExtend())
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
						jlong hq_j = (jlong) hq;
						jmethodID __method = __gr->getMethod("destroyHardwareOcclusionQuery_CHardwareOcclusionQuery_callback");
						__env->CallVoidMethod(__obj, __method , hq_j);
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
						return this->CRenderSystem::destroyHardwareOcclusionQuery(hq);
					}
				}
				virtual EVString validateConfigOptions()
				{
					if (this->_gRef != NULL && this->m_validateConfigOptions_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("validateConfigOptions_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CRenderSystem::validateConfigOptions();
					}
				}
				virtual EarthView::World::Graphic::CRenderWindow* _initialise(ev_bool autoCreateWindow, const EVString& windowTitle)
				{
					if (this->_gRef != NULL && this->m__initialise_ev_bool_EVString_callback != "" && this->isCustomExtend())
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
						jboolean autoCreateWindow_j = (jboolean) autoCreateWindow;
						EarthView::World::Core::ev_wstring windowTitle_wch = windowTitle;
						jstring windowTitle_j = __env->NewString((const jchar*)windowTitle_wch.getString(), windowTitle_wch.size());
						jmethodID __method = __gr->getMethod("_initialise_ev_bool_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , autoCreateWindow_j, windowTitle_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CRenderWindow *__values1 = (EarthView::World::Graphic::CRenderWindow*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::_initialise(autoCreateWindow, windowTitle);
					}
				}
				virtual EarthView::World::Graphic::CRenderWindow* _initialise(ev_bool autoCreateWindow)
				{
					if (this->_gRef != NULL && this->m__initialise_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean autoCreateWindow_j = (jboolean) autoCreateWindow;
						jmethodID __method = __gr->getMethod("_initialise_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , autoCreateWindow_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CRenderWindow *__values1 = (EarthView::World::Graphic::CRenderWindow*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::_initialise(autoCreateWindow);
					}
				}
				virtual EarthView::World::Graphic::CRenderSystemCapabilities* createRenderSystemCapabilities() const
				{
					if (this->_gRef != NULL && this->m_createRenderSystemCapabilities_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("createRenderSystemCapabilities_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CRenderSystemCapabilities *__values1 = (EarthView::World::Graphic::CRenderSystemCapabilities*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::createRenderSystemCapabilities();
					}
				}
				virtual void useCustomRenderSystemCapabilities(EarthView::World::Graphic::CRenderSystemCapabilities* ref_capabilities)
				{
					if (this->_gRef != NULL && this->m_useCustomRenderSystemCapabilities_CRenderSystemCapabilities_callback != "" && this->isCustomExtend())
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
						jlong ref_capabilities_j = (jlong) ref_capabilities;
						jmethodID __method = __gr->getMethod("useCustomRenderSystemCapabilities_CRenderSystemCapabilities_callback");
						__env->CallVoidMethod(__obj, __method , ref_capabilities_j);
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
						return this->CRenderSystem::useCustomRenderSystemCapabilities(ref_capabilities);
					}
				}
				virtual void reinitialise()
				{
					if (this->_gRef != NULL && this->m_reinitialise_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("reinitialise_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CRenderSystem::reinitialise();
					}
				}
				virtual void shutdown()
				{
					if (this->_gRef != NULL && this->m_shutdown_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("shutdown_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CRenderSystem::shutdown();
					}
				}
				virtual void setAmbientLight(ev_real32 r, ev_real32 g, ev_real32 b)
				{
					if (this->_gRef != NULL && this->m_setAmbientLight_ev_real32_ev_real32_ev_real32_callback != "" && this->isCustomExtend())
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
						jfloat r_j = (jfloat) r;
						jfloat g_j = (jfloat) g;
						jfloat b_j = (jfloat) b;
						jmethodID __method = __gr->getMethod("setAmbientLight_ev_real32_ev_real32_ev_real32_callback");
						__env->CallVoidMethod(__obj, __method , r_j, g_j, b_j);
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
						return this->CRenderSystem::setAmbientLight(r, g, b);
					}
				}
				virtual void setShadingType(EarthView::World::Graphic::ShadeOptions so)
				{
					if (this->_gRef != NULL && this->m_setShadingType_ShadeOptions_callback != "" && this->isCustomExtend())
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
						jint so_j = (jint) so;
						jmethodID __method = __gr->getMethod("setShadingType_ShadeOptions_callback");
						__env->CallVoidMethod(__obj, __method , so_j);
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
						return this->CRenderSystem::setShadingType(so);
					}
				}
				virtual void setLightingEnabled(ev_bool enabled)
				{
					if (this->_gRef != NULL && this->m_setLightingEnabled_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean enabled_j = (jboolean) enabled;
						jmethodID __method = __gr->getMethod("setLightingEnabled_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , enabled_j);
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
						return this->CRenderSystem::setLightingEnabled(enabled);
					}
				}
				virtual EarthView::World::Graphic::CRenderWindow* _createRenderWindow(const EVString& name, ev_uint32 width, ev_uint32 height, ev_bool fullScreen, const EarthView::World::Core::CommonStringPairList* miscParams)
				{
					if (this->_gRef != NULL && this->m__createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jlong width_j = (jlong) width;
						jlong height_j = (jlong) height;
						jboolean fullScreen_j = (jboolean) fullScreen;
						jlong miscParams_j = (jlong) miscParams;
						jmethodID __method = __gr->getMethod("_createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, width_j, height_j, fullScreen_j, miscParams_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CRenderWindow *__values1 = (EarthView::World::Graphic::CRenderWindow*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::_createRenderWindow(name, width, height, fullScreen, miscParams);
					}
				}
				virtual EarthView::World::Graphic::CRenderWindow* _createRenderWindow(const EVString& name, ev_uint32 width, ev_uint32 height, ev_bool fullScreen)
				{
					if (this->_gRef != NULL && this->m__createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jlong width_j = (jlong) width;
						jlong height_j = (jlong) height;
						jboolean fullScreen_j = (jboolean) fullScreen;
						jmethodID __method = __gr->getMethod("_createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, width_j, height_j, fullScreen_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CRenderWindow *__values1 = (EarthView::World::Graphic::CRenderWindow*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::_createRenderWindow(name, width, height, fullScreen);
					}
				}
				virtual ev_bool _createRenderWindows(const EarthView::World::Graphic::RenderWindowDescriptionList& renderWindowDescriptions, EarthView::World::Graphic::RenderWindowList& createdWindows)
				{
					if (this->_gRef != NULL && this->m__createRenderWindows_RenderWindowDescriptionList_RenderWindowList_callback != "" && this->isCustomExtend())
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
						jlong renderWindowDescriptions_j = (jlong) &renderWindowDescriptions;
						jlong createdWindows_j = (jlong) &createdWindows;
						jmethodID __method = __gr->getMethod("_createRenderWindows_RenderWindowDescriptionList_RenderWindowList_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , renderWindowDescriptions_j, createdWindows_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::_createRenderWindows(renderWindowDescriptions, createdWindows);
					}
				}
				virtual EarthView::World::Graphic::CMultiRenderTarget* createMultiRenderTarget(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_createMultiRenderTarget_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("createMultiRenderTarget_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CMultiRenderTarget *__values1 = (EarthView::World::Graphic::CMultiRenderTarget*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::createMultiRenderTarget(name);
					}
				}
				virtual void destroyRenderWindow(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_destroyRenderWindow_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("destroyRenderWindow_EVString_callback");
						__env->CallVoidMethod(__obj, __method , name_j);
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
						return this->CRenderSystem::destroyRenderWindow(name);
					}
				}
				virtual void destroyRenderTexture(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_destroyRenderTexture_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("destroyRenderTexture_EVString_callback");
						__env->CallVoidMethod(__obj, __method , name_j);
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
						return this->CRenderSystem::destroyRenderTexture(name);
					}
				}
				virtual void destroyRenderTarget(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_destroyRenderTarget_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("destroyRenderTarget_EVString_callback");
						__env->CallVoidMethod(__obj, __method , name_j);
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
						return this->CRenderSystem::destroyRenderTarget(name);
					}
				}
				virtual void attachRenderTarget(EarthView::World::Graphic::CRenderTarget& target)
				{
					if (this->_gRef != NULL && this->m_attachRenderTarget_CRenderTarget_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) &target;
						jmethodID __method = __gr->getMethod("attachRenderTarget_CRenderTarget_callback");
						__env->CallVoidMethod(__obj, __method , target_j);
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
						return this->CRenderSystem::attachRenderTarget(target);
					}
				}
				virtual EarthView::World::Graphic::CRenderTarget* getRenderTarget(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_getRenderTarget_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("getRenderTarget_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CRenderTarget *__values1 = (EarthView::World::Graphic::CRenderTarget*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::getRenderTarget(name);
					}
				}
				virtual EarthView::World::Graphic::CRenderTarget* detachRenderTarget(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_detachRenderTarget_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("detachRenderTarget_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CRenderTarget *__values1 = (EarthView::World::Graphic::CRenderTarget*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::detachRenderTarget(name);
					}
				}
				virtual EarthView::World::Graphic::CRenderSystem::RenderTargetIterator getRenderTargetIterator()
				{
					if (this->_gRef != NULL && this->m_getRenderTargetIterator_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getRenderTargetIterator_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CRenderSystem::RenderTargetIterator __values1 = *(EarthView::World::Graphic::CRenderSystem::RenderTargetIterator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::getRenderTargetIterator();
					}
				}
				virtual EVString getErrorDescription(ev_int32 errorNumber) const
				{
					if (this->_gRef != NULL && this->m_getErrorDescription_ev_int32_callback != "" && this->isCustomExtend())
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
						jint errorNumber_j = (jint) errorNumber;
						jmethodID __method = __gr->getMethod("getErrorDescription_ev_int32_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , errorNumber_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CRenderSystem::getErrorDescription(errorNumber);
					}
				}
				virtual void setDepthBufferFor(EarthView::World::Graphic::CRenderTarget* renderTarget)
				{
					if (this->_gRef != NULL && this->m_setDepthBufferFor_CRenderTarget_callback != "" && this->isCustomExtend())
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
						jlong renderTarget_j = (jlong) renderTarget;
						jmethodID __method = __gr->getMethod("setDepthBufferFor_CRenderTarget_callback");
						__env->CallVoidMethod(__obj, __method , renderTarget_j);
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
						return this->CRenderSystem::setDepthBufferFor(renderTarget);
					}
				}
				virtual void _useLights(const EarthView::World::Graphic::LightList& lights, ev_uint16 limit)
				{
					if (this->_gRef != NULL && this->m__useLights_LightList_ev_uint16_callback != "" && this->isCustomExtend())
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
						jlong lights_j = (jlong) &lights;
						jint limit_j = (jint) limit;
						jmethodID __method = __gr->getMethod("_useLights_LightList_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , lights_j, limit_j);
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
						return this->CRenderSystem::_useLights(lights, limit);
					}
				}
				virtual ev_bool areFixedFunctionLightsInViewSpace() const
				{
					if (this->_gRef != NULL && this->m_areFixedFunctionLightsInViewSpace_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("areFixedFunctionLightsInViewSpace_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::areFixedFunctionLightsInViewSpace();
					}
				}
				virtual void _setWorldMatrix(const EarthView::World::Spatial::Math::CMatrix4& m)
				{
					if (this->_gRef != NULL && this->m__setWorldMatrix_CMatrix4_callback != "" && this->isCustomExtend())
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
						jlong m_j = (jlong) &m;
						jmethodID __method = __gr->getMethod("_setWorldMatrix_CMatrix4_callback");
						__env->CallVoidMethod(__obj, __method , m_j);
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
						return this->CRenderSystem::_setWorldMatrix(m);
					}
				}
				virtual void _setWorldMatrices(const EarthView::World::Spatial::Math::CMatrix4* m, ev_uint16 count)
				{
					if (this->_gRef != NULL && this->m__setWorldMatrices_CMatrix4_ev_uint16_callback != "" && this->isCustomExtend())
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
						jlong m_j = (jlong) m;
						jint count_j = (jint) count;
						jmethodID __method = __gr->getMethod("_setWorldMatrices_CMatrix4_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , m_j, count_j);
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
						return this->CRenderSystem::_setWorldMatrices(m, count);
					}
				}
				virtual void _setViewMatrix(const EarthView::World::Spatial::Math::CMatrix4& m)
				{
					if (this->_gRef != NULL && this->m__setViewMatrix_CMatrix4_callback != "" && this->isCustomExtend())
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
						jlong m_j = (jlong) &m;
						jmethodID __method = __gr->getMethod("_setViewMatrix_CMatrix4_callback");
						__env->CallVoidMethod(__obj, __method , m_j);
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
						return this->CRenderSystem::_setViewMatrix(m);
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getViewMatrix() const
				{
					if (this->_gRef != NULL && this->m__getViewMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_getViewMatrix_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 &__values1 = *(const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::_getViewMatrix();
					}
				}
				virtual void _setProjectionMatrix(const EarthView::World::Spatial::Math::CMatrix4& m)
				{
					if (this->_gRef != NULL && this->m__setProjectionMatrix_CMatrix4_callback != "" && this->isCustomExtend())
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
						jlong m_j = (jlong) &m;
						jmethodID __method = __gr->getMethod("_setProjectionMatrix_CMatrix4_callback");
						__env->CallVoidMethod(__obj, __method , m_j);
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
						return this->CRenderSystem::_setProjectionMatrix(m);
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getProjectMatrix() const
				{
					if (this->_gRef != NULL && this->m__getProjectMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_getProjectMatrix_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 &__values1 = *(const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::_getProjectMatrix();
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getProjectMatrixDepth() const
				{
					if (this->_gRef != NULL && this->m__getProjectMatrixDepth_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_getProjectMatrixDepth_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 &__values1 = *(const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::_getProjectMatrixDepth();
					}
				}
				virtual void _setTextureUnitSettings(ev_size_t texUnit, EarthView::World::Graphic::CTextureUnitState& tl)
				{
					if (this->_gRef != NULL && this->m__setTextureUnitSettings_ev_size_t_CTextureUnitState_callback != "" && this->isCustomExtend())
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
						jlong texUnit_j = (jlong) texUnit;
						jlong tl_j = (jlong) &tl;
						jmethodID __method = __gr->getMethod("_setTextureUnitSettings_ev_size_t_CTextureUnitState_callback");
						__env->CallVoidMethod(__obj, __method , texUnit_j, tl_j);
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
						return this->CRenderSystem::_setTextureUnitSettings(texUnit, tl);
					}
				}
				virtual void _disableTextureUnit(ev_size_t texUnit)
				{
					if (this->_gRef != NULL && this->m__disableTextureUnit_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong texUnit_j = (jlong) texUnit;
						jmethodID __method = __gr->getMethod("_disableTextureUnit_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , texUnit_j);
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
						return this->CRenderSystem::_disableTextureUnit(texUnit);
					}
				}
				virtual void _disableTextureUnitsFrom(ev_size_t texUnit)
				{
					if (this->_gRef != NULL && this->m__disableTextureUnitsFrom_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong texUnit_j = (jlong) texUnit;
						jmethodID __method = __gr->getMethod("_disableTextureUnitsFrom_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , texUnit_j);
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
						return this->CRenderSystem::_disableTextureUnitsFrom(texUnit);
					}
				}
				virtual void _setSurfaceParams(const EarthView::World::Graphic::CColourValue& ambient, const EarthView::World::Graphic::CColourValue& diffuse, const EarthView::World::Graphic::CColourValue& specular, const EarthView::World::Graphic::CColourValue& emissive, Real shininess, ev_int32 tracking)
				{
					if (this->_gRef != NULL && this->m__setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32_callback != "" && this->isCustomExtend())
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
						jlong ambient_j = (jlong) &ambient;
						jlong diffuse_j = (jlong) &diffuse;
						jlong specular_j = (jlong) &specular;
						jlong emissive_j = (jlong) &emissive;
						jdouble shininess_j = (jdouble) shininess;
						jint tracking_j = (jint) tracking;
						jmethodID __method = __gr->getMethod("_setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , ambient_j, diffuse_j, specular_j, emissive_j, shininess_j, tracking_j);
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
						return this->CRenderSystem::_setSurfaceParams(ambient, diffuse, specular, emissive, shininess, tracking);
					}
				}
				virtual void _setSurfaceParams(const EarthView::World::Graphic::CColourValue& ambient, const EarthView::World::Graphic::CColourValue& diffuse, const EarthView::World::Graphic::CColourValue& specular, const EarthView::World::Graphic::CColourValue& emissive, Real shininess)
				{
					if (this->_gRef != NULL && this->m__setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_callback != "" && this->isCustomExtend())
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
						jlong ambient_j = (jlong) &ambient;
						jlong diffuse_j = (jlong) &diffuse;
						jlong specular_j = (jlong) &specular;
						jlong emissive_j = (jlong) &emissive;
						jdouble shininess_j = (jdouble) shininess;
						jmethodID __method = __gr->getMethod("_setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_callback");
						__env->CallVoidMethod(__obj, __method , ambient_j, diffuse_j, specular_j, emissive_j, shininess_j);
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
						return this->CRenderSystem::_setSurfaceParams(ambient, diffuse, specular, emissive, shininess);
					}
				}
				virtual void _setPointSpritesEnabled(ev_bool enabled)
				{
					if (this->_gRef != NULL && this->m__setPointSpritesEnabled_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean enabled_j = (jboolean) enabled;
						jmethodID __method = __gr->getMethod("_setPointSpritesEnabled_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , enabled_j);
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
						return this->CRenderSystem::_setPointSpritesEnabled(enabled);
					}
				}
				virtual void _setPointParameters(Real size, ev_bool attenuationEnabled, Real constant, Real linear, Real quadratic, Real minSize, Real maxSize)
				{
					if (this->_gRef != NULL && this->m__setPointParameters_Real_ev_bool_Real_Real_Real_Real_Real_callback != "" && this->isCustomExtend())
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
						jdouble size_j = (jdouble) size;
						jboolean attenuationEnabled_j = (jboolean) attenuationEnabled;
						jdouble constant_j = (jdouble) constant;
						jdouble linear_j = (jdouble) linear;
						jdouble quadratic_j = (jdouble) quadratic;
						jdouble minSize_j = (jdouble) minSize;
						jdouble maxSize_j = (jdouble) maxSize;
						jmethodID __method = __gr->getMethod("_setPointParameters_Real_ev_bool_Real_Real_Real_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , size_j, attenuationEnabled_j, constant_j, linear_j, quadratic_j, minSize_j, maxSize_j);
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
						return this->CRenderSystem::_setPointParameters(size, attenuationEnabled, constant, linear, quadratic, minSize, maxSize);
					}
				}
				virtual void _setTexture(ev_size_t unit, ev_bool enabled, const EarthView::World::Graphic::CTexturePtr& texPtr)
				{
					if (this->_gRef != NULL && this->m__setTexture_ev_size_t_ev_bool_CTexturePtr_callback != "" && this->isCustomExtend())
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
						jlong unit_j = (jlong) unit;
						jboolean enabled_j = (jboolean) enabled;
						jlong texPtr_j = (jlong) &texPtr;
						jmethodID __method = __gr->getMethod("_setTexture_ev_size_t_ev_bool_CTexturePtr_callback");
						__env->CallVoidMethod(__obj, __method , unit_j, enabled_j, texPtr_j);
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
						return this->CRenderSystem::_setTexture(unit, enabled, texPtr);
					}
				}
				virtual void _setTexture(ev_size_t unit, ev_bool enabled, const EVString& texname)
				{
					if (this->_gRef != NULL && this->m__setTexture_ev_size_t_ev_bool_EVString_callback != "" && this->isCustomExtend())
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
						jlong unit_j = (jlong) unit;
						jboolean enabled_j = (jboolean) enabled;
						EarthView::World::Core::ev_wstring texname_wch = texname;
						jstring texname_j = __env->NewString((const jchar*)texname_wch.getString(), texname_wch.size());
						jmethodID __method = __gr->getMethod("_setTexture_ev_size_t_ev_bool_EVString_callback");
						__env->CallVoidMethod(__obj, __method , unit_j, enabled_j, texname_j);
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
						return this->CRenderSystem::_setTexture(unit, enabled, texname);
					}
				}
				virtual void _setVertexTexture(ev_size_t unit, const EarthView::World::Graphic::CTexturePtr& tex)
				{
					if (this->_gRef != NULL && this->m__setVertexTexture_ev_size_t_CTexturePtr_callback != "" && this->isCustomExtend())
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
						jlong unit_j = (jlong) unit;
						jlong tex_j = (jlong) &tex;
						jmethodID __method = __gr->getMethod("_setVertexTexture_ev_size_t_CTexturePtr_callback");
						__env->CallVoidMethod(__obj, __method , unit_j, tex_j);
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
						return this->CRenderSystem::_setVertexTexture(unit, tex);
					}
				}
				virtual void _setTextureCoordSet(ev_size_t unit, ev_size_t index)
				{
					if (this->_gRef != NULL && this->m__setTextureCoordSet_ev_size_t_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong unit_j = (jlong) unit;
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("_setTextureCoordSet_ev_size_t_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , unit_j, index_j);
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
						return this->CRenderSystem::_setTextureCoordSet(unit, index);
					}
				}
				virtual void _setTextureCoordCalculation(ev_size_t unit, TexCoordCalcMethod m, const EarthView::World::Graphic::CFrustum* ref_frustum)
				{
					if (this->_gRef != NULL && this->m__setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_CFrustum_callback != "" && this->isCustomExtend())
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
						jlong unit_j = (jlong) unit;
						jint m_j = (jint) m;
						jlong ref_frustum_j = (jlong) ref_frustum;
						jmethodID __method = __gr->getMethod("_setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_CFrustum_callback");
						__env->CallVoidMethod(__obj, __method , unit_j, m_j, ref_frustum_j);
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
						return this->CRenderSystem::_setTextureCoordCalculation(unit, m, ref_frustum);
					}
				}
				virtual void _setTextureCoordCalculation(ev_size_t unit, TexCoordCalcMethod m)
				{
					if (this->_gRef != NULL && this->m__setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_callback != "" && this->isCustomExtend())
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
						jlong unit_j = (jlong) unit;
						jint m_j = (jint) m;
						jmethodID __method = __gr->getMethod("_setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_callback");
						__env->CallVoidMethod(__obj, __method , unit_j, m_j);
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
						return this->CRenderSystem::_setTextureCoordCalculation(unit, m);
					}
				}
				virtual void _setTextureBlendMode(ev_size_t unit, const EarthView::World::Graphic::CLayerBlendModeEx& bm)
				{
					if (this->_gRef != NULL && this->m__setTextureBlendMode_ev_size_t_CLayerBlendModeEx_callback != "" && this->isCustomExtend())
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
						jlong unit_j = (jlong) unit;
						jlong bm_j = (jlong) &bm;
						jmethodID __method = __gr->getMethod("_setTextureBlendMode_ev_size_t_CLayerBlendModeEx_callback");
						__env->CallVoidMethod(__obj, __method , unit_j, bm_j);
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
						return this->CRenderSystem::_setTextureBlendMode(unit, bm);
					}
				}
				virtual void _setTextureUnitFiltering(ev_size_t unit, EarthView::World::Graphic::FilterOptions minFilter, EarthView::World::Graphic::FilterOptions magFilter, EarthView::World::Graphic::FilterOptions mipFilter)
				{
					if (this->_gRef != NULL && this->m__setTextureUnitFiltering_ev_size_t_FilterOptions_FilterOptions_FilterOptions_callback != "" && this->isCustomExtend())
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
						jlong unit_j = (jlong) unit;
						jint minFilter_j = (jint) minFilter;
						jint magFilter_j = (jint) magFilter;
						jint mipFilter_j = (jint) mipFilter;
						jmethodID __method = __gr->getMethod("_setTextureUnitFiltering_ev_size_t_FilterOptions_FilterOptions_FilterOptions_callback");
						__env->CallVoidMethod(__obj, __method , unit_j, minFilter_j, magFilter_j, mipFilter_j);
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
						return this->CRenderSystem::_setTextureUnitFiltering(unit, minFilter, magFilter, mipFilter);
					}
				}
				virtual void _setTextureUnitFiltering(ev_size_t unit, EarthView::World::Graphic::FilterType ftype, EarthView::World::Graphic::FilterOptions filter)
				{
					if (this->_gRef != NULL && this->m__setTextureUnitFiltering_ev_size_t_FilterType_FilterOptions_callback != "" && this->isCustomExtend())
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
						jlong unit_j = (jlong) unit;
						jint ftype_j = (jint) ftype;
						jint filter_j = (jint) filter;
						jmethodID __method = __gr->getMethod("_setTextureUnitFiltering_ev_size_t_FilterType_FilterOptions_callback");
						__env->CallVoidMethod(__obj, __method , unit_j, ftype_j, filter_j);
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
						return this->CRenderSystem::_setTextureUnitFiltering(unit, ftype, filter);
					}
				}
				virtual void _setTextureLayerAnisotropy(ev_size_t unit, ev_uint32 maxAnisotropy)
				{
					if (this->_gRef != NULL && this->m__setTextureLayerAnisotropy_ev_size_t_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong unit_j = (jlong) unit;
						jlong maxAnisotropy_j = (jlong) maxAnisotropy;
						jmethodID __method = __gr->getMethod("_setTextureLayerAnisotropy_ev_size_t_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , unit_j, maxAnisotropy_j);
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
						return this->CRenderSystem::_setTextureLayerAnisotropy(unit, maxAnisotropy);
					}
				}
				virtual void _setTextureAddressingMode(ev_size_t unit, const EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode& uvw)
				{
					if (this->_gRef != NULL && this->m__setTextureAddressingMode_ev_size_t_UVWAddressingMode_callback != "" && this->isCustomExtend())
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
						jlong unit_j = (jlong) unit;
						jlong uvw_j = (jlong) &uvw;
						jmethodID __method = __gr->getMethod("_setTextureAddressingMode_ev_size_t_UVWAddressingMode_callback");
						__env->CallVoidMethod(__obj, __method , unit_j, uvw_j);
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
						return this->CRenderSystem::_setTextureAddressingMode(unit, uvw);
					}
				}
				virtual void _setTextureBorderColour(ev_size_t unit, const EarthView::World::Graphic::CColourValue& colour)
				{
					if (this->_gRef != NULL && this->m__setTextureBorderColour_ev_size_t_CColourValue_callback != "" && this->isCustomExtend())
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
						jlong unit_j = (jlong) unit;
						jlong colour_j = (jlong) &colour;
						jmethodID __method = __gr->getMethod("_setTextureBorderColour_ev_size_t_CColourValue_callback");
						__env->CallVoidMethod(__obj, __method , unit_j, colour_j);
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
						return this->CRenderSystem::_setTextureBorderColour(unit, colour);
					}
				}
				virtual void _setTextureMipmapBias(ev_size_t unit, ev_real32 bias)
				{
					if (this->_gRef != NULL && this->m__setTextureMipmapBias_ev_size_t_ev_real32_callback != "" && this->isCustomExtend())
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
						jlong unit_j = (jlong) unit;
						jfloat bias_j = (jfloat) bias;
						jmethodID __method = __gr->getMethod("_setTextureMipmapBias_ev_size_t_ev_real32_callback");
						__env->CallVoidMethod(__obj, __method , unit_j, bias_j);
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
						return this->CRenderSystem::_setTextureMipmapBias(unit, bias);
					}
				}
				virtual void _setTextureMatrix(ev_size_t unit, const EarthView::World::Spatial::Math::CMatrix4& xform)
				{
					if (this->_gRef != NULL && this->m__setTextureMatrix_ev_size_t_CMatrix4_callback != "" && this->isCustomExtend())
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
						jlong unit_j = (jlong) unit;
						jlong xform_j = (jlong) &xform;
						jmethodID __method = __gr->getMethod("_setTextureMatrix_ev_size_t_CMatrix4_callback");
						__env->CallVoidMethod(__obj, __method , unit_j, xform_j);
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
						return this->CRenderSystem::_setTextureMatrix(unit, xform);
					}
				}
				virtual void _setSceneBlending(EarthView::World::Graphic::SceneBlendFactor sourceFactor, EarthView::World::Graphic::SceneBlendFactor destFactor, EarthView::World::Graphic::SceneBlendOperation op)
				{
					if (this->_gRef != NULL && this->m__setSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_callback != "" && this->isCustomExtend())
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
						jint sourceFactor_j = (jint) sourceFactor;
						jint destFactor_j = (jint) destFactor;
						jint op_j = (jint) op;
						jmethodID __method = __gr->getMethod("_setSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_callback");
						__env->CallVoidMethod(__obj, __method , sourceFactor_j, destFactor_j, op_j);
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
						return this->CRenderSystem::_setSceneBlending(sourceFactor, destFactor, op);
					}
				}
				virtual void _setSceneBlending(EarthView::World::Graphic::SceneBlendFactor sourceFactor, EarthView::World::Graphic::SceneBlendFactor destFactor)
				{
					if (this->_gRef != NULL && this->m__setSceneBlending_SceneBlendFactor_SceneBlendFactor_callback != "" && this->isCustomExtend())
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
						jint sourceFactor_j = (jint) sourceFactor;
						jint destFactor_j = (jint) destFactor;
						jmethodID __method = __gr->getMethod("_setSceneBlending_SceneBlendFactor_SceneBlendFactor_callback");
						__env->CallVoidMethod(__obj, __method , sourceFactor_j, destFactor_j);
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
						return this->CRenderSystem::_setSceneBlending(sourceFactor, destFactor);
					}
				}
				virtual void _setSeparateSceneBlending(EarthView::World::Graphic::SceneBlendFactor sourceFactor, EarthView::World::Graphic::SceneBlendFactor destFactor, EarthView::World::Graphic::SceneBlendFactor sourceFactorAlpha, EarthView::World::Graphic::SceneBlendFactor destFactorAlpha, EarthView::World::Graphic::SceneBlendOperation op, EarthView::World::Graphic::SceneBlendOperation alphaOp)
				{
					if (this->_gRef != NULL && this->m__setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation_callback != "" && this->isCustomExtend())
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
						jint sourceFactor_j = (jint) sourceFactor;
						jint destFactor_j = (jint) destFactor;
						jint sourceFactorAlpha_j = (jint) sourceFactorAlpha;
						jint destFactorAlpha_j = (jint) destFactorAlpha;
						jint op_j = (jint) op;
						jint alphaOp_j = (jint) alphaOp;
						jmethodID __method = __gr->getMethod("_setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation_callback");
						__env->CallVoidMethod(__obj, __method , sourceFactor_j, destFactor_j, sourceFactorAlpha_j, destFactorAlpha_j, op_j, alphaOp_j);
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
						return this->CRenderSystem::_setSeparateSceneBlending(sourceFactor, destFactor, sourceFactorAlpha, destFactorAlpha, op, alphaOp);
					}
				}
				virtual void _setSeparateSceneBlending(EarthView::World::Graphic::SceneBlendFactor sourceFactor, EarthView::World::Graphic::SceneBlendFactor destFactor, EarthView::World::Graphic::SceneBlendFactor sourceFactorAlpha, EarthView::World::Graphic::SceneBlendFactor destFactorAlpha, EarthView::World::Graphic::SceneBlendOperation op)
				{
					if (this->_gRef != NULL && this->m__setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_callback != "" && this->isCustomExtend())
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
						jint sourceFactor_j = (jint) sourceFactor;
						jint destFactor_j = (jint) destFactor;
						jint sourceFactorAlpha_j = (jint) sourceFactorAlpha;
						jint destFactorAlpha_j = (jint) destFactorAlpha;
						jint op_j = (jint) op;
						jmethodID __method = __gr->getMethod("_setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_callback");
						__env->CallVoidMethod(__obj, __method , sourceFactor_j, destFactor_j, sourceFactorAlpha_j, destFactorAlpha_j, op_j);
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
						return this->CRenderSystem::_setSeparateSceneBlending(sourceFactor, destFactor, sourceFactorAlpha, destFactorAlpha, op);
					}
				}
				virtual void _setSeparateSceneBlending(EarthView::World::Graphic::SceneBlendFactor sourceFactor, EarthView::World::Graphic::SceneBlendFactor destFactor, EarthView::World::Graphic::SceneBlendFactor sourceFactorAlpha, EarthView::World::Graphic::SceneBlendFactor destFactorAlpha)
				{
					if (this->_gRef != NULL && this->m__setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_callback != "" && this->isCustomExtend())
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
						jint sourceFactor_j = (jint) sourceFactor;
						jint destFactor_j = (jint) destFactor;
						jint sourceFactorAlpha_j = (jint) sourceFactorAlpha;
						jint destFactorAlpha_j = (jint) destFactorAlpha;
						jmethodID __method = __gr->getMethod("_setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_callback");
						__env->CallVoidMethod(__obj, __method , sourceFactor_j, destFactor_j, sourceFactorAlpha_j, destFactorAlpha_j);
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
						return this->CRenderSystem::_setSeparateSceneBlending(sourceFactor, destFactor, sourceFactorAlpha, destFactorAlpha);
					}
				}
				virtual void _setAlphaRejectSettings(EarthView::World::Graphic::CompareFunction func, ev_uchar value, ev_bool alphaToCoverage)
				{
					if (this->_gRef != NULL && this->m__setAlphaRejectSettings_CompareFunction_ev_uchar_ev_bool_callback != "" && this->isCustomExtend())
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
						jint func_j = (jint) func;
						jshort value_j = (jshort) value;
						jboolean alphaToCoverage_j = (jboolean) alphaToCoverage;
						jmethodID __method = __gr->getMethod("_setAlphaRejectSettings_CompareFunction_ev_uchar_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , func_j, value_j, alphaToCoverage_j);
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
						return this->CRenderSystem::_setAlphaRejectSettings(func, value, alphaToCoverage);
					}
				}
				virtual void _setTextureProjectionRelativeTo(ev_bool enabled, const EarthView::World::Spatial::Math::CVector3& pos)
				{
					if (this->_gRef != NULL && this->m__setTextureProjectionRelativeTo_ev_bool_CVector3_callback != "" && this->isCustomExtend())
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
						jboolean enabled_j = (jboolean) enabled;
						jlong pos_j = (jlong) &pos;
						jmethodID __method = __gr->getMethod("_setTextureProjectionRelativeTo_ev_bool_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , enabled_j, pos_j);
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
						return this->CRenderSystem::_setTextureProjectionRelativeTo(enabled, pos);
					}
				}
				virtual EarthView::World::Graphic::CDepthBuffer* _createDepthBufferFor(EarthView::World::Graphic::CRenderTarget* renderTarget)
				{
					if (this->_gRef != NULL && this->m__createDepthBufferFor_CRenderTarget_callback != "" && this->isCustomExtend())
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
						jlong renderTarget_j = (jlong) renderTarget;
						jmethodID __method = __gr->getMethod("_createDepthBufferFor_CRenderTarget_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , renderTarget_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CDepthBuffer *__values1 = (EarthView::World::Graphic::CDepthBuffer*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::_createDepthBufferFor(renderTarget);
					}
				}
				virtual void _beginFrame()
				{
					if (this->_gRef != NULL && this->m__beginFrame_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_beginFrame_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CRenderSystem::_beginFrame();
					}
				}
				virtual EarthView::World::Graphic::CRenderSystem::RenderSystemContext* _pauseFrame()
				{
					if (this->_gRef != NULL && this->m__pauseFrame_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_pauseFrame_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CRenderSystem::RenderSystemContext *__values1 = (EarthView::World::Graphic::CRenderSystem::RenderSystemContext*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::_pauseFrame();
					}
				}
				virtual void _resumeFrame(EarthView::World::Graphic::CRenderSystem::RenderSystemContext* context)
				{
					if (this->_gRef != NULL && this->m__resumeFrame_RenderSystemContext_callback != "" && this->isCustomExtend())
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
						jlong context_j = (jlong) context;
						jmethodID __method = __gr->getMethod("_resumeFrame_RenderSystemContext_callback");
						__env->CallVoidMethod(__obj, __method , context_j);
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
						return this->CRenderSystem::_resumeFrame(context);
					}
				}
				virtual void _endFrame()
				{
					if (this->_gRef != NULL && this->m__endFrame_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_endFrame_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CRenderSystem::_endFrame();
					}
				}
				virtual void _setViewport(EarthView::World::Graphic::CViewport* ref_vp)
				{
					if (this->_gRef != NULL && this->m__setViewport_CViewport_callback != "" && this->isCustomExtend())
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
						jlong ref_vp_j = (jlong) ref_vp;
						jmethodID __method = __gr->getMethod("_setViewport_CViewport_callback");
						__env->CallVoidMethod(__obj, __method , ref_vp_j);
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
						return this->CRenderSystem::_setViewport(ref_vp);
					}
				}
				virtual EarthView::World::Graphic::CViewport* _getViewport()
				{
					if (this->_gRef != NULL && this->m__getViewport_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_getViewport_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CViewport *__values1 = (EarthView::World::Graphic::CViewport*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::_getViewport();
					}
				}
				virtual void _setCullingMode(EarthView::World::Graphic::CullingMode mode)
				{
					if (this->_gRef != NULL && this->m__setCullingMode_CullingMode_callback != "" && this->isCustomExtend())
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
						jint mode_j = (jint) mode;
						jmethodID __method = __gr->getMethod("_setCullingMode_CullingMode_callback");
						__env->CallVoidMethod(__obj, __method , mode_j);
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
						return this->CRenderSystem::_setCullingMode(mode);
					}
				}
				virtual EarthView::World::Graphic::CullingMode _getCullingMode() const
				{
					if (this->_gRef != NULL && this->m__getCullingMode_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_getCullingMode_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CullingMode __values1 = (EarthView::World::Graphic::CullingMode) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::_getCullingMode();
					}
				}
				virtual void _setDepthBufferParams(ev_bool depthTest, ev_bool depthWrite, EarthView::World::Graphic::CompareFunction depthFunction)
				{
					if (this->_gRef != NULL && this->m__setDepthBufferParams_ev_bool_ev_bool_CompareFunction_callback != "" && this->isCustomExtend())
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
						jboolean depthTest_j = (jboolean) depthTest;
						jboolean depthWrite_j = (jboolean) depthWrite;
						jint depthFunction_j = (jint) depthFunction;
						jmethodID __method = __gr->getMethod("_setDepthBufferParams_ev_bool_ev_bool_CompareFunction_callback");
						__env->CallVoidMethod(__obj, __method , depthTest_j, depthWrite_j, depthFunction_j);
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
						return this->CRenderSystem::_setDepthBufferParams(depthTest, depthWrite, depthFunction);
					}
				}
				virtual void _setDepthBufferParams(ev_bool depthTest, ev_bool depthWrite)
				{
					if (this->_gRef != NULL && this->m__setDepthBufferParams_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean depthTest_j = (jboolean) depthTest;
						jboolean depthWrite_j = (jboolean) depthWrite;
						jmethodID __method = __gr->getMethod("_setDepthBufferParams_ev_bool_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , depthTest_j, depthWrite_j);
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
						return this->CRenderSystem::_setDepthBufferParams(depthTest, depthWrite);
					}
				}
				virtual void _setDepthBufferParams(ev_bool depthTest)
				{
					if (this->_gRef != NULL && this->m__setDepthBufferParams_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean depthTest_j = (jboolean) depthTest;
						jmethodID __method = __gr->getMethod("_setDepthBufferParams_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , depthTest_j);
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
						return this->CRenderSystem::_setDepthBufferParams(depthTest);
					}
				}
				virtual void _setDepthBufferParams()
				{
					if (this->_gRef != NULL && this->m__setDepthBufferParams_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_setDepthBufferParams_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CRenderSystem::_setDepthBufferParams();
					}
				}
				virtual void _setDepthBufferCheckEnabled(ev_bool enabled)
				{
					if (this->_gRef != NULL && this->m__setDepthBufferCheckEnabled_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean enabled_j = (jboolean) enabled;
						jmethodID __method = __gr->getMethod("_setDepthBufferCheckEnabled_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , enabled_j);
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
						return this->CRenderSystem::_setDepthBufferCheckEnabled(enabled);
					}
				}
				virtual void _setDepthBufferCheckEnabled()
				{
					if (this->_gRef != NULL && this->m__setDepthBufferCheckEnabled_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_setDepthBufferCheckEnabled_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CRenderSystem::_setDepthBufferCheckEnabled();
					}
				}
				virtual void _setDepthBufferWriteEnabled(ev_bool enabled)
				{
					if (this->_gRef != NULL && this->m__setDepthBufferWriteEnabled_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean enabled_j = (jboolean) enabled;
						jmethodID __method = __gr->getMethod("_setDepthBufferWriteEnabled_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , enabled_j);
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
						return this->CRenderSystem::_setDepthBufferWriteEnabled(enabled);
					}
				}
				virtual void _setDepthBufferWriteEnabled()
				{
					if (this->_gRef != NULL && this->m__setDepthBufferWriteEnabled_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_setDepthBufferWriteEnabled_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CRenderSystem::_setDepthBufferWriteEnabled();
					}
				}
				virtual void _setDepthBufferFunction(EarthView::World::Graphic::CompareFunction func)
				{
					if (this->_gRef != NULL && this->m__setDepthBufferFunction_CompareFunction_callback != "" && this->isCustomExtend())
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
						jint func_j = (jint) func;
						jmethodID __method = __gr->getMethod("_setDepthBufferFunction_CompareFunction_callback");
						__env->CallVoidMethod(__obj, __method , func_j);
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
						return this->CRenderSystem::_setDepthBufferFunction(func);
					}
				}
				virtual void _setDepthBufferFunction()
				{
					if (this->_gRef != NULL && this->m__setDepthBufferFunction_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_setDepthBufferFunction_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CRenderSystem::_setDepthBufferFunction();
					}
				}
				virtual void _setColourBufferWriteEnabled(ev_bool red, ev_bool green, ev_bool blue, ev_bool alpha)
				{
					if (this->_gRef != NULL && this->m__setColourBufferWriteEnabled_ev_bool_ev_bool_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean red_j = (jboolean) red;
						jboolean green_j = (jboolean) green;
						jboolean blue_j = (jboolean) blue;
						jboolean alpha_j = (jboolean) alpha;
						jmethodID __method = __gr->getMethod("_setColourBufferWriteEnabled_ev_bool_ev_bool_ev_bool_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , red_j, green_j, blue_j, alpha_j);
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
						return this->CRenderSystem::_setColourBufferWriteEnabled(red, green, blue, alpha);
					}
				}
				virtual void _setDepthBias(ev_real32 constantBias, ev_real32 slopeScaleBias)
				{
					if (this->_gRef != NULL && this->m__setDepthBias_ev_real32_ev_real32_callback != "" && this->isCustomExtend())
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
						jfloat constantBias_j = (jfloat) constantBias;
						jfloat slopeScaleBias_j = (jfloat) slopeScaleBias;
						jmethodID __method = __gr->getMethod("_setDepthBias_ev_real32_ev_real32_callback");
						__env->CallVoidMethod(__obj, __method , constantBias_j, slopeScaleBias_j);
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
						return this->CRenderSystem::_setDepthBias(constantBias, slopeScaleBias);
					}
				}
				virtual void _setDepthBias(ev_real32 constantBias)
				{
					if (this->_gRef != NULL && this->m__setDepthBias_ev_real32_callback != "" && this->isCustomExtend())
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
						jfloat constantBias_j = (jfloat) constantBias;
						jmethodID __method = __gr->getMethod("_setDepthBias_ev_real32_callback");
						__env->CallVoidMethod(__obj, __method , constantBias_j);
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
						return this->CRenderSystem::_setDepthBias(constantBias);
					}
				}
				virtual void _setFog(EarthView::World::Graphic::FogMode mode, const EarthView::World::Graphic::CColourValue& colour, Real expDensity, Real linearStart, Real linearEnd)
				{
					if (this->_gRef != NULL && this->m__setFog_FogMode_CColourValue_Real_Real_Real_callback != "" && this->isCustomExtend())
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
						jint mode_j = (jint) mode;
						jlong colour_j = (jlong) &colour;
						jdouble expDensity_j = (jdouble) expDensity;
						jdouble linearStart_j = (jdouble) linearStart;
						jdouble linearEnd_j = (jdouble) linearEnd;
						jmethodID __method = __gr->getMethod("_setFog_FogMode_CColourValue_Real_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , mode_j, colour_j, expDensity_j, linearStart_j, linearEnd_j);
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
						return this->CRenderSystem::_setFog(mode, colour, expDensity, linearStart, linearEnd);
					}
				}
				virtual void _setFog(EarthView::World::Graphic::FogMode mode, const EarthView::World::Graphic::CColourValue& colour, Real expDensity, Real linearStart)
				{
					if (this->_gRef != NULL && this->m__setFog_FogMode_CColourValue_Real_Real_callback != "" && this->isCustomExtend())
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
						jint mode_j = (jint) mode;
						jlong colour_j = (jlong) &colour;
						jdouble expDensity_j = (jdouble) expDensity;
						jdouble linearStart_j = (jdouble) linearStart;
						jmethodID __method = __gr->getMethod("_setFog_FogMode_CColourValue_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , mode_j, colour_j, expDensity_j, linearStart_j);
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
						return this->CRenderSystem::_setFog(mode, colour, expDensity, linearStart);
					}
				}
				virtual void _setFog(EarthView::World::Graphic::FogMode mode, const EarthView::World::Graphic::CColourValue& colour, Real expDensity)
				{
					if (this->_gRef != NULL && this->m__setFog_FogMode_CColourValue_Real_callback != "" && this->isCustomExtend())
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
						jint mode_j = (jint) mode;
						jlong colour_j = (jlong) &colour;
						jdouble expDensity_j = (jdouble) expDensity;
						jmethodID __method = __gr->getMethod("_setFog_FogMode_CColourValue_Real_callback");
						__env->CallVoidMethod(__obj, __method , mode_j, colour_j, expDensity_j);
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
						return this->CRenderSystem::_setFog(mode, colour, expDensity);
					}
				}
				virtual void _setFog(EarthView::World::Graphic::FogMode mode, const EarthView::World::Graphic::CColourValue& colour)
				{
					if (this->_gRef != NULL && this->m__setFog_FogMode_CColourValue_callback != "" && this->isCustomExtend())
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
						jint mode_j = (jint) mode;
						jlong colour_j = (jlong) &colour;
						jmethodID __method = __gr->getMethod("_setFog_FogMode_CColourValue_callback");
						__env->CallVoidMethod(__obj, __method , mode_j, colour_j);
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
						return this->CRenderSystem::_setFog(mode, colour);
					}
				}
				virtual void _setFog(EarthView::World::Graphic::FogMode mode)
				{
					if (this->_gRef != NULL && this->m__setFog_FogMode_callback != "" && this->isCustomExtend())
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
						jint mode_j = (jint) mode;
						jmethodID __method = __gr->getMethod("_setFog_FogMode_callback");
						__env->CallVoidMethod(__obj, __method , mode_j);
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
						return this->CRenderSystem::_setFog(mode);
					}
				}
				virtual void _setFog()
				{
					if (this->_gRef != NULL && this->m__setFog_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_setFog_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CRenderSystem::_setFog();
					}
				}
				virtual void _beginGeometryCount()
				{
					if (this->_gRef != NULL && this->m__beginGeometryCount_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_beginGeometryCount_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CRenderSystem::_beginGeometryCount();
					}
				}
				virtual ev_uint32 _getFaceCount() const
				{
					if (this->_gRef != NULL && this->m__getFaceCount_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_getFaceCount_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::_getFaceCount();
					}
				}
				virtual ev_uint32 _getBatchCount() const
				{
					if (this->_gRef != NULL && this->m__getBatchCount_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_getBatchCount_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::_getBatchCount();
					}
				}
				virtual ev_uint32 _getVertexCount() const
				{
					if (this->_gRef != NULL && this->m__getVertexCount_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_getVertexCount_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::_getVertexCount();
					}
				}
				virtual void convertColourValue(const EarthView::World::Graphic::CColourValue& colour, ev_uint32* pDest)
				{
					if (this->_gRef != NULL && this->m_convertColourValue_CColourValue_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong colour_j = (jlong) &colour;
						jlong pDest_j = (jlong) pDest;
						jmethodID __method = __gr->getMethod("convertColourValue_CColourValue_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , colour_j, pDest_j);
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
						return this->CRenderSystem::convertColourValue(colour, pDest);
					}
				}
				virtual void toColourValue(ev_uint32 srcColor, EarthView::World::Graphic::CColourValue& colour)
				{
					if (this->_gRef != NULL && this->m_toColourValue_ev_uint32_CColourValue_callback != "" && this->isCustomExtend())
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
						jlong srcColor_j = (jlong) srcColor;
						jlong colour_j = (jlong) &colour;
						jmethodID __method = __gr->getMethod("toColourValue_ev_uint32_CColourValue_callback");
						__env->CallVoidMethod(__obj, __method , srcColor_j, colour_j);
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
						return this->CRenderSystem::toColourValue(srcColor, colour);
					}
				}
				virtual EarthView::World::Graphic::VertexElementType getColourVertexElementType() const
				{
					if (this->_gRef != NULL && this->m_getColourVertexElementType_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getColourVertexElementType_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::VertexElementType __values1 = (EarthView::World::Graphic::VertexElementType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::getColourVertexElementType();
					}
				}
				virtual void _convertProjectionMatrix(const EarthView::World::Spatial::Math::CMatrix4& matrix, EarthView::World::Spatial::Math::CMatrix4& dest, ev_bool forGpuProgram)
				{
					if (this->_gRef != NULL && this->m__convertProjectionMatrix_CMatrix4_CMatrix4_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong matrix_j = (jlong) &matrix;
						jlong dest_j = (jlong) &dest;
						jboolean forGpuProgram_j = (jboolean) forGpuProgram;
						jmethodID __method = __gr->getMethod("_convertProjectionMatrix_CMatrix4_CMatrix4_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , matrix_j, dest_j, forGpuProgram_j);
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
						return this->CRenderSystem::_convertProjectionMatrix(matrix, dest, forGpuProgram);
					}
				}
				virtual void _convertProjectionMatrix(const EarthView::World::Spatial::Math::CMatrix4& matrix, EarthView::World::Spatial::Math::CMatrix4& dest)
				{
					if (this->_gRef != NULL && this->m__convertProjectionMatrix_CMatrix4_CMatrix4_callback != "" && this->isCustomExtend())
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
						jlong matrix_j = (jlong) &matrix;
						jlong dest_j = (jlong) &dest;
						jmethodID __method = __gr->getMethod("_convertProjectionMatrix_CMatrix4_CMatrix4_callback");
						__env->CallVoidMethod(__obj, __method , matrix_j, dest_j);
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
						return this->CRenderSystem::_convertProjectionMatrix(matrix, dest);
					}
				}
				virtual void _makeProjectionMatrix(const EarthView::World::Spatial::Math::CRadian& fovy, Real aspect, Real nearPlane, Real farPlane, EarthView::World::Spatial::Math::CMatrix4& dest, ev_bool forGpuProgram)
				{
					if (this->_gRef != NULL && this->m__makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong fovy_j = (jlong) &fovy;
						jdouble aspect_j = (jdouble) aspect;
						jdouble nearPlane_j = (jdouble) nearPlane;
						jdouble farPlane_j = (jdouble) farPlane;
						jlong dest_j = (jlong) &dest;
						jboolean forGpuProgram_j = (jboolean) forGpuProgram;
						jmethodID __method = __gr->getMethod("_makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , fovy_j, aspect_j, nearPlane_j, farPlane_j, dest_j, forGpuProgram_j);
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
						return this->CRenderSystem::_makeProjectionMatrix(fovy, aspect, nearPlane, farPlane, dest, forGpuProgram);
					}
				}
				virtual void _makeProjectionMatrix(const EarthView::World::Spatial::Math::CRadian& fovy, Real aspect, Real nearPlane, Real farPlane, EarthView::World::Spatial::Math::CMatrix4& dest)
				{
					if (this->_gRef != NULL && this->m__makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_callback != "" && this->isCustomExtend())
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
						jlong fovy_j = (jlong) &fovy;
						jdouble aspect_j = (jdouble) aspect;
						jdouble nearPlane_j = (jdouble) nearPlane;
						jdouble farPlane_j = (jdouble) farPlane;
						jlong dest_j = (jlong) &dest;
						jmethodID __method = __gr->getMethod("_makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_callback");
						__env->CallVoidMethod(__obj, __method , fovy_j, aspect_j, nearPlane_j, farPlane_j, dest_j);
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
						return this->CRenderSystem::_makeProjectionMatrix(fovy, aspect, nearPlane, farPlane, dest);
					}
				}
				virtual void _makeProjectionMatrix(Real left, Real right, Real bottom, Real top, Real nearPlane, Real farPlane, EarthView::World::Spatial::Math::CMatrix4& dest, ev_bool forGpuProgram)
				{
					if (this->_gRef != NULL && this->m__makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool_callback != "" && this->isCustomExtend())
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
						jdouble left_j = (jdouble) left;
						jdouble right_j = (jdouble) right;
						jdouble bottom_j = (jdouble) bottom;
						jdouble top_j = (jdouble) top;
						jdouble nearPlane_j = (jdouble) nearPlane;
						jdouble farPlane_j = (jdouble) farPlane;
						jlong dest_j = (jlong) &dest;
						jboolean forGpuProgram_j = (jboolean) forGpuProgram;
						jmethodID __method = __gr->getMethod("_makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , left_j, right_j, bottom_j, top_j, nearPlane_j, farPlane_j, dest_j, forGpuProgram_j);
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
						return this->CRenderSystem::_makeProjectionMatrix(left, right, bottom, top, nearPlane, farPlane, dest, forGpuProgram);
					}
				}
				virtual void _makeProjectionMatrix(Real left, Real right, Real bottom, Real top, Real nearPlane, Real farPlane, EarthView::World::Spatial::Math::CMatrix4& dest)
				{
					if (this->_gRef != NULL && this->m__makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_callback != "" && this->isCustomExtend())
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
						jdouble left_j = (jdouble) left;
						jdouble right_j = (jdouble) right;
						jdouble bottom_j = (jdouble) bottom;
						jdouble top_j = (jdouble) top;
						jdouble nearPlane_j = (jdouble) nearPlane;
						jdouble farPlane_j = (jdouble) farPlane;
						jlong dest_j = (jlong) &dest;
						jmethodID __method = __gr->getMethod("_makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_callback");
						__env->CallVoidMethod(__obj, __method , left_j, right_j, bottom_j, top_j, nearPlane_j, farPlane_j, dest_j);
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
						return this->CRenderSystem::_makeProjectionMatrix(left, right, bottom, top, nearPlane, farPlane, dest);
					}
				}
				virtual void _makeOrthoMatrix(const EarthView::World::Spatial::Math::CRadian& fovy, Real aspect, Real nearPlane, Real farPlane, EarthView::World::Spatial::Math::CMatrix4& dest, ev_bool forGpuProgram)
				{
					if (this->_gRef != NULL && this->m__makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong fovy_j = (jlong) &fovy;
						jdouble aspect_j = (jdouble) aspect;
						jdouble nearPlane_j = (jdouble) nearPlane;
						jdouble farPlane_j = (jdouble) farPlane;
						jlong dest_j = (jlong) &dest;
						jboolean forGpuProgram_j = (jboolean) forGpuProgram;
						jmethodID __method = __gr->getMethod("_makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , fovy_j, aspect_j, nearPlane_j, farPlane_j, dest_j, forGpuProgram_j);
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
						return this->CRenderSystem::_makeOrthoMatrix(fovy, aspect, nearPlane, farPlane, dest, forGpuProgram);
					}
				}
				virtual void _makeOrthoMatrix(const EarthView::World::Spatial::Math::CRadian& fovy, Real aspect, Real nearPlane, Real farPlane, EarthView::World::Spatial::Math::CMatrix4& dest)
				{
					if (this->_gRef != NULL && this->m__makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_callback != "" && this->isCustomExtend())
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
						jlong fovy_j = (jlong) &fovy;
						jdouble aspect_j = (jdouble) aspect;
						jdouble nearPlane_j = (jdouble) nearPlane;
						jdouble farPlane_j = (jdouble) farPlane;
						jlong dest_j = (jlong) &dest;
						jmethodID __method = __gr->getMethod("_makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_callback");
						__env->CallVoidMethod(__obj, __method , fovy_j, aspect_j, nearPlane_j, farPlane_j, dest_j);
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
						return this->CRenderSystem::_makeOrthoMatrix(fovy, aspect, nearPlane, farPlane, dest);
					}
				}
				virtual void _applyObliqueDepthProjection(EarthView::World::Spatial::Math::CMatrix4& matrix, const EarthView::World::Spatial::Math::CPlane& plane, ev_bool forGpuProgram)
				{
					if (this->_gRef != NULL && this->m__applyObliqueDepthProjection_CMatrix4_CPlane_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong matrix_j = (jlong) &matrix;
						jlong plane_j = (jlong) &plane;
						jboolean forGpuProgram_j = (jboolean) forGpuProgram;
						jmethodID __method = __gr->getMethod("_applyObliqueDepthProjection_CMatrix4_CPlane_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , matrix_j, plane_j, forGpuProgram_j);
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
						return this->CRenderSystem::_applyObliqueDepthProjection(matrix, plane, forGpuProgram);
					}
				}
				virtual void _setPolygonMode(EarthView::World::Graphic::PolygonMode level)
				{
					if (this->_gRef != NULL && this->m__setPolygonMode_PolygonMode_callback != "" && this->isCustomExtend())
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
						jint level_j = (jint) level;
						jmethodID __method = __gr->getMethod("_setPolygonMode_PolygonMode_callback");
						__env->CallVoidMethod(__obj, __method , level_j);
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
						return this->CRenderSystem::_setPolygonMode(level);
					}
				}
				virtual void setStencilCheckEnabled(ev_bool enabled)
				{
					if (this->_gRef != NULL && this->m_setStencilCheckEnabled_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean enabled_j = (jboolean) enabled;
						jmethodID __method = __gr->getMethod("setStencilCheckEnabled_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , enabled_j);
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
						return this->CRenderSystem::setStencilCheckEnabled(enabled);
					}
				}
				virtual void setStencilBufferParams(EarthView::World::Graphic::CompareFunction func, ev_uint32 refValue, ev_uint32 mask, StencilOperation stencilFailOp, StencilOperation depthFailOp, StencilOperation passOp, ev_bool twoSidedOperation)
				{
					if (this->_gRef != NULL && this->m_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool_callback != "" && this->isCustomExtend())
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
						jint func_j = (jint) func;
						jlong refValue_j = (jlong) refValue;
						jlong mask_j = (jlong) mask;
						jint stencilFailOp_j = (jint) stencilFailOp;
						jint depthFailOp_j = (jint) depthFailOp;
						jint passOp_j = (jint) passOp;
						jboolean twoSidedOperation_j = (jboolean) twoSidedOperation;
						jmethodID __method = __gr->getMethod("setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , func_j, refValue_j, mask_j, stencilFailOp_j, depthFailOp_j, passOp_j, twoSidedOperation_j);
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
						return this->CRenderSystem::setStencilBufferParams(func, refValue, mask, stencilFailOp, depthFailOp, passOp, twoSidedOperation);
					}
				}
				virtual void setStencilBufferParams(EarthView::World::Graphic::CompareFunction func, ev_uint32 refValue, ev_uint32 mask, StencilOperation stencilFailOp, StencilOperation depthFailOp, StencilOperation passOp)
				{
					if (this->_gRef != NULL && this->m_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_callback != "" && this->isCustomExtend())
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
						jint func_j = (jint) func;
						jlong refValue_j = (jlong) refValue;
						jlong mask_j = (jlong) mask;
						jint stencilFailOp_j = (jint) stencilFailOp;
						jint depthFailOp_j = (jint) depthFailOp;
						jint passOp_j = (jint) passOp;
						jmethodID __method = __gr->getMethod("setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_callback");
						__env->CallVoidMethod(__obj, __method , func_j, refValue_j, mask_j, stencilFailOp_j, depthFailOp_j, passOp_j);
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
						return this->CRenderSystem::setStencilBufferParams(func, refValue, mask, stencilFailOp, depthFailOp, passOp);
					}
				}
				virtual void setStencilBufferParams(EarthView::World::Graphic::CompareFunction func, ev_uint32 refValue, ev_uint32 mask, StencilOperation stencilFailOp, StencilOperation depthFailOp)
				{
					if (this->_gRef != NULL && this->m_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_callback != "" && this->isCustomExtend())
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
						jint func_j = (jint) func;
						jlong refValue_j = (jlong) refValue;
						jlong mask_j = (jlong) mask;
						jint stencilFailOp_j = (jint) stencilFailOp;
						jint depthFailOp_j = (jint) depthFailOp;
						jmethodID __method = __gr->getMethod("setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_callback");
						__env->CallVoidMethod(__obj, __method , func_j, refValue_j, mask_j, stencilFailOp_j, depthFailOp_j);
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
						return this->CRenderSystem::setStencilBufferParams(func, refValue, mask, stencilFailOp, depthFailOp);
					}
				}
				virtual void setStencilBufferParams(EarthView::World::Graphic::CompareFunction func, ev_uint32 refValue, ev_uint32 mask, StencilOperation stencilFailOp)
				{
					if (this->_gRef != NULL && this->m_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_callback != "" && this->isCustomExtend())
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
						jint func_j = (jint) func;
						jlong refValue_j = (jlong) refValue;
						jlong mask_j = (jlong) mask;
						jint stencilFailOp_j = (jint) stencilFailOp;
						jmethodID __method = __gr->getMethod("setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_callback");
						__env->CallVoidMethod(__obj, __method , func_j, refValue_j, mask_j, stencilFailOp_j);
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
						return this->CRenderSystem::setStencilBufferParams(func, refValue, mask, stencilFailOp);
					}
				}
				virtual void setStencilBufferParams(EarthView::World::Graphic::CompareFunction func, ev_uint32 refValue, ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_callback != "" && this->isCustomExtend())
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
						jint func_j = (jint) func;
						jlong refValue_j = (jlong) refValue;
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , func_j, refValue_j, mask_j);
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
						return this->CRenderSystem::setStencilBufferParams(func, refValue, mask);
					}
				}
				virtual void setStencilBufferParams(EarthView::World::Graphic::CompareFunction func, ev_uint32 refValue)
				{
					if (this->_gRef != NULL && this->m_setStencilBufferParams_CompareFunction_ev_uint32_callback != "" && this->isCustomExtend())
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
						jint func_j = (jint) func;
						jlong refValue_j = (jlong) refValue;
						jmethodID __method = __gr->getMethod("setStencilBufferParams_CompareFunction_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , func_j, refValue_j);
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
						return this->CRenderSystem::setStencilBufferParams(func, refValue);
					}
				}
				virtual void setStencilBufferParams(EarthView::World::Graphic::CompareFunction func)
				{
					if (this->_gRef != NULL && this->m_setStencilBufferParams_CompareFunction_callback != "" && this->isCustomExtend())
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
						jint func_j = (jint) func;
						jmethodID __method = __gr->getMethod("setStencilBufferParams_CompareFunction_callback");
						__env->CallVoidMethod(__obj, __method , func_j);
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
						return this->CRenderSystem::setStencilBufferParams(func);
					}
				}
				virtual void setStencilBufferParams()
				{
					if (this->_gRef != NULL && this->m_setStencilBufferParams_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("setStencilBufferParams_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CRenderSystem::setStencilBufferParams();
					}
				}
				virtual void setVertexDeclaration(EarthView::World::Graphic::CVertexDeclaration* decl)
				{
					if (this->_gRef != NULL && this->m_setVertexDeclaration_CVertexDeclaration_callback != "" && this->isCustomExtend())
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
						jlong decl_j = (jlong) decl;
						jmethodID __method = __gr->getMethod("setVertexDeclaration_CVertexDeclaration_callback");
						__env->CallVoidMethod(__obj, __method , decl_j);
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
						return this->CRenderSystem::setVertexDeclaration(decl);
					}
				}
				virtual void setVertexBufferBinding(EarthView::World::Graphic::CVertexBufferBinding* binding)
				{
					if (this->_gRef != NULL && this->m_setVertexBufferBinding_CVertexBufferBinding_callback != "" && this->isCustomExtend())
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
						jlong binding_j = (jlong) binding;
						jmethodID __method = __gr->getMethod("setVertexBufferBinding_CVertexBufferBinding_callback");
						__env->CallVoidMethod(__obj, __method , binding_j);
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
						return this->CRenderSystem::setVertexBufferBinding(binding);
					}
				}
				virtual void setNormaliseNormals(ev_bool normalise)
				{
					if (this->_gRef != NULL && this->m_setNormaliseNormals_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean normalise_j = (jboolean) normalise;
						jmethodID __method = __gr->getMethod("setNormaliseNormals_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , normalise_j);
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
						return this->CRenderSystem::setNormaliseNormals(normalise);
					}
				}
				virtual void _render(const EarthView::World::Graphic::CRenderOperation& op)
				{
					if (this->_gRef != NULL && this->m__render_CRenderOperation_callback != "" && this->isCustomExtend())
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
						jlong op_j = (jlong) &op;
						jmethodID __method = __gr->getMethod("_render_CRenderOperation_callback");
						__env->CallVoidMethod(__obj, __method , op_j);
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
						return this->CRenderSystem::_render(op);
					}
				}
				virtual const EarthView::World::Graphic::DriverVersion& getDriverVersion() const
				{
					if (this->_gRef != NULL && this->m_getDriverVersion_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDriverVersion_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::DriverVersion &__values1 = *(const EarthView::World::Graphic::DriverVersion*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::getDriverVersion();
					}
				}
				virtual void* getActD3D9Device()
				{
					if (this->_gRef != NULL && this->m_getActD3D9Device_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getActD3D9Device_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						void *__values1 = (void*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::getActD3D9Device();
					}
				}
				virtual EVString _getDefaultViewportMaterialScheme() const
				{
					if (this->_gRef != NULL && this->m__getDefaultViewportMaterialScheme_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_getDefaultViewportMaterialScheme_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CRenderSystem::_getDefaultViewportMaterialScheme();
					}
				}
				virtual void bindGpuProgram(EarthView::World::Graphic::CGpuProgram* ref_prg)
				{
					if (this->_gRef != NULL && this->m_bindGpuProgram_CGpuProgram_callback != "" && this->isCustomExtend())
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
						jlong ref_prg_j = (jlong) ref_prg;
						jmethodID __method = __gr->getMethod("bindGpuProgram_CGpuProgram_callback");
						__env->CallVoidMethod(__obj, __method , ref_prg_j);
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
						return this->CRenderSystem::bindGpuProgram(ref_prg);
					}
				}
				virtual void bindGpuProgramParameters(EarthView::World::Graphic::GpuProgramType gptype, EarthView::World::Graphic::GpuProgramParametersSharedPtr params, ev_uint16 variabilityMask)
				{
					if (this->_gRef != NULL && this->m_bindGpuProgramParameters_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint gptype_j = (jint) gptype;
						jlong params_j = (jlong) &params;
						jint variabilityMask_j = (jint) variabilityMask;
						jmethodID __method = __gr->getMethod("bindGpuProgramParameters_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , gptype_j, params_j, variabilityMask_j);
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
						return this->CRenderSystem::bindGpuProgramParameters(gptype, params, variabilityMask);
					}
				}
				virtual void bindGpuProgramPassIterationParameters(EarthView::World::Graphic::GpuProgramType gptype)
				{
					if (this->_gRef != NULL && this->m_bindGpuProgramPassIterationParameters_GpuProgramType_callback != "" && this->isCustomExtend())
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
						jint gptype_j = (jint) gptype;
						jmethodID __method = __gr->getMethod("bindGpuProgramPassIterationParameters_GpuProgramType_callback");
						__env->CallVoidMethod(__obj, __method , gptype_j);
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
						return this->CRenderSystem::bindGpuProgramPassIterationParameters(gptype);
					}
				}
				virtual void unbindGpuProgram(EarthView::World::Graphic::GpuProgramType gptype)
				{
					if (this->_gRef != NULL && this->m_unbindGpuProgram_GpuProgramType_callback != "" && this->isCustomExtend())
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
						jint gptype_j = (jint) gptype;
						jmethodID __method = __gr->getMethod("unbindGpuProgram_GpuProgramType_callback");
						__env->CallVoidMethod(__obj, __method , gptype_j);
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
						return this->CRenderSystem::unbindGpuProgram(gptype);
					}
				}
				virtual ev_bool isGpuProgramBound(EarthView::World::Graphic::GpuProgramType gptype)
				{
					if (this->_gRef != NULL && this->m_isGpuProgramBound_GpuProgramType_callback != "" && this->isCustomExtend())
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
						jint gptype_j = (jint) gptype;
						jmethodID __method = __gr->getMethod("isGpuProgramBound_GpuProgramType_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , gptype_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::isGpuProgramBound(gptype);
					}
				}
				virtual void setClipPlanes(const EarthView::World::Spatial::Math::PlaneList& clipPlanes)
				{
					if (this->_gRef != NULL && this->m_setClipPlanes_PlaneList_callback != "" && this->isCustomExtend())
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
						jlong clipPlanes_j = (jlong) &clipPlanes;
						jmethodID __method = __gr->getMethod("setClipPlanes_PlaneList_callback");
						__env->CallVoidMethod(__obj, __method , clipPlanes_j);
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
						return this->CRenderSystem::setClipPlanes(clipPlanes);
					}
				}
				virtual void addClipPlane(const EarthView::World::Spatial::Math::CPlane& p)
				{
					if (this->_gRef != NULL && this->m_addClipPlane_CPlane_callback != "" && this->isCustomExtend())
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
						jlong p_j = (jlong) &p;
						jmethodID __method = __gr->getMethod("addClipPlane_CPlane_callback");
						__env->CallVoidMethod(__obj, __method , p_j);
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
						return this->CRenderSystem::addClipPlane(p);
					}
				}
				virtual void addClipPlane(Real A, Real B, Real C, Real D)
				{
					if (this->_gRef != NULL && this->m_addClipPlane_Real_Real_Real_Real_callback != "" && this->isCustomExtend())
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
						jdouble A_j = (jdouble) A;
						jdouble B_j = (jdouble) B;
						jdouble C_j = (jdouble) C;
						jdouble D_j = (jdouble) D;
						jmethodID __method = __gr->getMethod("addClipPlane_Real_Real_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , A_j, B_j, C_j, D_j);
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
						return this->CRenderSystem::addClipPlane(A, B, C, D);
					}
				}
				virtual void resetClipPlanes()
				{
					if (this->_gRef != NULL && this->m_resetClipPlanes_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("resetClipPlanes_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CRenderSystem::resetClipPlanes();
					}
				}
				virtual void _initRenderTargets()
				{
					if (this->_gRef != NULL && this->m__initRenderTargets_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_initRenderTargets_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CRenderSystem::_initRenderTargets();
					}
				}
				virtual void _notifyCameraRemoved(const EarthView::World::Graphic::CCamera* cam)
				{
					if (this->_gRef != NULL && this->m__notifyCameraRemoved_CCamera_callback != "" && this->isCustomExtend())
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
						jlong cam_j = (jlong) cam;
						jmethodID __method = __gr->getMethod("_notifyCameraRemoved_CCamera_callback");
						__env->CallVoidMethod(__obj, __method , cam_j);
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
						return this->CRenderSystem::_notifyCameraRemoved(cam);
					}
				}
				virtual void _updateAllRenderTargets(ev_bool swapBuffers)
				{
					if (this->_gRef != NULL && this->m__updateAllRenderTargets_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean swapBuffers_j = (jboolean) swapBuffers;
						jmethodID __method = __gr->getMethod("_updateAllRenderTargets_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , swapBuffers_j);
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
						return this->CRenderSystem::_updateAllRenderTargets(swapBuffers);
					}
				}
				virtual void _updateAllRenderTargets()
				{
					if (this->_gRef != NULL && this->m__updateAllRenderTargets_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_updateAllRenderTargets_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CRenderSystem::_updateAllRenderTargets();
					}
				}
				virtual void _swapAllRenderTargetBuffers(ev_bool waitForVsync)
				{
					if (this->_gRef != NULL && this->m__swapAllRenderTargetBuffers_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean waitForVsync_j = (jboolean) waitForVsync;
						jmethodID __method = __gr->getMethod("_swapAllRenderTargetBuffers_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , waitForVsync_j);
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
						return this->CRenderSystem::_swapAllRenderTargetBuffers(waitForVsync);
					}
				}
				virtual void _swapAllRenderTargetBuffers()
				{
					if (this->_gRef != NULL && this->m__swapAllRenderTargetBuffers_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_swapAllRenderTargetBuffers_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CRenderSystem::_swapAllRenderTargetBuffers();
					}
				}
				virtual void setInvertVertexWinding(ev_bool invert)
				{
					if (this->_gRef != NULL && this->m_setInvertVertexWinding_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean invert_j = (jboolean) invert;
						jmethodID __method = __gr->getMethod("setInvertVertexWinding_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , invert_j);
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
						return this->CRenderSystem::setInvertVertexWinding(invert);
					}
				}
				virtual ev_bool getInvertVertexWinding() const
				{
					if (this->_gRef != NULL && this->m_getInvertVertexWinding_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getInvertVertexWinding_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::getInvertVertexWinding();
					}
				}
				virtual void setScissorTest(ev_bool enabled, ev_size_t left, ev_size_t top, ev_size_t right, ev_size_t bottom)
				{
					if (this->_gRef != NULL && this->m_setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t_callback != "" && this->isCustomExtend())
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
						jboolean enabled_j = (jboolean) enabled;
						jlong left_j = (jlong) left;
						jlong top_j = (jlong) top;
						jlong right_j = (jlong) right;
						jlong bottom_j = (jlong) bottom;
						jmethodID __method = __gr->getMethod("setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , enabled_j, left_j, top_j, right_j, bottom_j);
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
						return this->CRenderSystem::setScissorTest(enabled, left, top, right, bottom);
					}
				}
				virtual void setScissorTest(ev_bool enabled, ev_size_t left, ev_size_t top, ev_size_t right)
				{
					if (this->_gRef != NULL && this->m_setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_callback != "" && this->isCustomExtend())
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
						jboolean enabled_j = (jboolean) enabled;
						jlong left_j = (jlong) left;
						jlong top_j = (jlong) top;
						jlong right_j = (jlong) right;
						jmethodID __method = __gr->getMethod("setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , enabled_j, left_j, top_j, right_j);
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
						return this->CRenderSystem::setScissorTest(enabled, left, top, right);
					}
				}
				virtual void setScissorTest(ev_bool enabled, ev_size_t left, ev_size_t top)
				{
					if (this->_gRef != NULL && this->m_setScissorTest_ev_bool_ev_size_t_ev_size_t_callback != "" && this->isCustomExtend())
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
						jboolean enabled_j = (jboolean) enabled;
						jlong left_j = (jlong) left;
						jlong top_j = (jlong) top;
						jmethodID __method = __gr->getMethod("setScissorTest_ev_bool_ev_size_t_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , enabled_j, left_j, top_j);
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
						return this->CRenderSystem::setScissorTest(enabled, left, top);
					}
				}
				virtual void setScissorTest(ev_bool enabled, ev_size_t left)
				{
					if (this->_gRef != NULL && this->m_setScissorTest_ev_bool_ev_size_t_callback != "" && this->isCustomExtend())
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
						jboolean enabled_j = (jboolean) enabled;
						jlong left_j = (jlong) left;
						jmethodID __method = __gr->getMethod("setScissorTest_ev_bool_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , enabled_j, left_j);
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
						return this->CRenderSystem::setScissorTest(enabled, left);
					}
				}
				virtual void setScissorTest(ev_bool enabled)
				{
					if (this->_gRef != NULL && this->m_setScissorTest_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean enabled_j = (jboolean) enabled;
						jmethodID __method = __gr->getMethod("setScissorTest_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , enabled_j);
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
						return this->CRenderSystem::setScissorTest(enabled);
					}
				}
				virtual void clearFrameBuffer(ev_uint32 buffers, const EarthView::World::Graphic::CColourValue& colour, Real depth, ev_uint16 stencil)
				{
					if (this->_gRef != NULL && this->m_clearFrameBuffer_ev_uint32_CColourValue_Real_ev_uint16_callback != "" && this->isCustomExtend())
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
						jlong buffers_j = (jlong) buffers;
						jlong colour_j = (jlong) &colour;
						jdouble depth_j = (jdouble) depth;
						jint stencil_j = (jint) stencil;
						jmethodID __method = __gr->getMethod("clearFrameBuffer_ev_uint32_CColourValue_Real_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , buffers_j, colour_j, depth_j, stencil_j);
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
						return this->CRenderSystem::clearFrameBuffer(buffers, colour, depth, stencil);
					}
				}
				virtual void clearFrameBuffer(ev_uint32 buffers, const EarthView::World::Graphic::CColourValue& colour, Real depth)
				{
					if (this->_gRef != NULL && this->m_clearFrameBuffer_ev_uint32_CColourValue_Real_callback != "" && this->isCustomExtend())
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
						jlong buffers_j = (jlong) buffers;
						jlong colour_j = (jlong) &colour;
						jdouble depth_j = (jdouble) depth;
						jmethodID __method = __gr->getMethod("clearFrameBuffer_ev_uint32_CColourValue_Real_callback");
						__env->CallVoidMethod(__obj, __method , buffers_j, colour_j, depth_j);
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
						return this->CRenderSystem::clearFrameBuffer(buffers, colour, depth);
					}
				}
				virtual void clearFrameBuffer(ev_uint32 buffers, const EarthView::World::Graphic::CColourValue& colour)
				{
					if (this->_gRef != NULL && this->m_clearFrameBuffer_ev_uint32_CColourValue_callback != "" && this->isCustomExtend())
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
						jlong buffers_j = (jlong) buffers;
						jlong colour_j = (jlong) &colour;
						jmethodID __method = __gr->getMethod("clearFrameBuffer_ev_uint32_CColourValue_callback");
						__env->CallVoidMethod(__obj, __method , buffers_j, colour_j);
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
						return this->CRenderSystem::clearFrameBuffer(buffers, colour);
					}
				}
				virtual void clearFrameBuffer(ev_uint32 buffers)
				{
					if (this->_gRef != NULL && this->m_clearFrameBuffer_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong buffers_j = (jlong) buffers;
						jmethodID __method = __gr->getMethod("clearFrameBuffer_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , buffers_j);
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
						return this->CRenderSystem::clearFrameBuffer(buffers);
					}
				}
				virtual Real getHorizontalTexelOffset()
				{
					if (this->_gRef != NULL && this->m_getHorizontalTexelOffset_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getHorizontalTexelOffset_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::getHorizontalTexelOffset();
					}
				}
				virtual Real getVerticalTexelOffset()
				{
					if (this->_gRef != NULL && this->m_getVerticalTexelOffset_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getVerticalTexelOffset_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::getVerticalTexelOffset();
					}
				}
				virtual Real getMinimumDepthInputValue()
				{
					if (this->_gRef != NULL && this->m_getMinimumDepthInputValue_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getMinimumDepthInputValue_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::getMinimumDepthInputValue();
					}
				}
				virtual Real getMaximumDepthInputValue()
				{
					if (this->_gRef != NULL && this->m_getMaximumDepthInputValue_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getMaximumDepthInputValue_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::getMaximumDepthInputValue();
					}
				}
				virtual void setCurrentPassIterationCount(const ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_setCurrentPassIterationCount_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong count_j = (jlong) count;
						jmethodID __method = __gr->getMethod("setCurrentPassIterationCount_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , count_j);
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
						return this->CRenderSystem::setCurrentPassIterationCount(count);
					}
				}
				virtual void setDeriveDepthBias(ev_bool derive, ev_real32 baseValue, ev_real32 multiplier, ev_real32 slopeScale)
				{
					if (this->_gRef != NULL && this->m_setDeriveDepthBias_ev_bool_ev_real32_ev_real32_ev_real32_callback != "" && this->isCustomExtend())
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
						jboolean derive_j = (jboolean) derive;
						jfloat baseValue_j = (jfloat) baseValue;
						jfloat multiplier_j = (jfloat) multiplier;
						jfloat slopeScale_j = (jfloat) slopeScale;
						jmethodID __method = __gr->getMethod("setDeriveDepthBias_ev_bool_ev_real32_ev_real32_ev_real32_callback");
						__env->CallVoidMethod(__obj, __method , derive_j, baseValue_j, multiplier_j, slopeScale_j);
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
						return this->CRenderSystem::setDeriveDepthBias(derive, baseValue, multiplier, slopeScale);
					}
				}
				virtual void setDeriveDepthBias(ev_bool derive, ev_real32 baseValue, ev_real32 multiplier)
				{
					if (this->_gRef != NULL && this->m_setDeriveDepthBias_ev_bool_ev_real32_ev_real32_callback != "" && this->isCustomExtend())
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
						jboolean derive_j = (jboolean) derive;
						jfloat baseValue_j = (jfloat) baseValue;
						jfloat multiplier_j = (jfloat) multiplier;
						jmethodID __method = __gr->getMethod("setDeriveDepthBias_ev_bool_ev_real32_ev_real32_callback");
						__env->CallVoidMethod(__obj, __method , derive_j, baseValue_j, multiplier_j);
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
						return this->CRenderSystem::setDeriveDepthBias(derive, baseValue, multiplier);
					}
				}
				virtual void setDeriveDepthBias(ev_bool derive, ev_real32 baseValue)
				{
					if (this->_gRef != NULL && this->m_setDeriveDepthBias_ev_bool_ev_real32_callback != "" && this->isCustomExtend())
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
						jboolean derive_j = (jboolean) derive;
						jfloat baseValue_j = (jfloat) baseValue;
						jmethodID __method = __gr->getMethod("setDeriveDepthBias_ev_bool_ev_real32_callback");
						__env->CallVoidMethod(__obj, __method , derive_j, baseValue_j);
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
						return this->CRenderSystem::setDeriveDepthBias(derive, baseValue);
					}
				}
				virtual void setDeriveDepthBias(ev_bool derive)
				{
					if (this->_gRef != NULL && this->m_setDeriveDepthBias_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean derive_j = (jboolean) derive;
						jmethodID __method = __gr->getMethod("setDeriveDepthBias_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , derive_j);
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
						return this->CRenderSystem::setDeriveDepthBias(derive);
					}
				}
				virtual void _setRenderTarget(EarthView::World::Graphic::CRenderTarget* ref_target)
				{
					if (this->_gRef != NULL && this->m__setRenderTarget_CRenderTarget_callback != "" && this->isCustomExtend())
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
						jlong ref_target_j = (jlong) ref_target;
						jmethodID __method = __gr->getMethod("_setRenderTarget_CRenderTarget_callback");
						__env->CallVoidMethod(__obj, __method , ref_target_j);
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
						return this->CRenderSystem::_setRenderTarget(ref_target);
					}
				}
				virtual void addListener(EarthView::World::Graphic::CRenderSystem::CRenderSystemListener* ref_l)
				{
					if (this->_gRef != NULL && this->m_addListener_CRenderSystemListener_callback != "" && this->isCustomExtend())
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
						jlong ref_l_j = (jlong) ref_l;
						jmethodID __method = __gr->getMethod("addListener_CRenderSystemListener_callback");
						__env->CallVoidMethod(__obj, __method , ref_l_j);
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
						return this->CRenderSystem::addListener(ref_l);
					}
				}
				virtual void removeListener(EarthView::World::Graphic::CRenderSystem::CRenderSystemListener* l)
				{
					if (this->_gRef != NULL && this->m_removeListener_CRenderSystemListener_callback != "" && this->isCustomExtend())
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
						jlong l_j = (jlong) l;
						jmethodID __method = __gr->getMethod("removeListener_CRenderSystemListener_callback");
						__env->CallVoidMethod(__obj, __method , l_j);
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
						return this->CRenderSystem::removeListener(l);
					}
				}
				virtual const EarthView::World::Core::StringVector& getRenderSystemEvents() const
				{
					if (this->_gRef != NULL && this->m_getRenderSystemEvents_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getRenderSystemEvents_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Core::StringVector &__values1 = *(const EarthView::World::Core::StringVector*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::getRenderSystemEvents();
					}
				}
				virtual void preExtraThreadsStarted()
				{
					if (this->_gRef != NULL && this->m_preExtraThreadsStarted_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("preExtraThreadsStarted_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CRenderSystem::preExtraThreadsStarted();
					}
				}
				virtual void postExtraThreadsStarted()
				{
					if (this->_gRef != NULL && this->m_postExtraThreadsStarted_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("postExtraThreadsStarted_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CRenderSystem::postExtraThreadsStarted();
					}
				}
				virtual void registerThread()
				{
					if (this->_gRef != NULL && this->m_registerThread_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("registerThread_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CRenderSystem::registerThread();
					}
				}
				virtual void flushRenderSystem()
				{
					if (this->_gRef != NULL && this->m_flushRenderSystem_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("flushRenderSystem_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CRenderSystem::flushRenderSystem();
					}
				}
				virtual void unregisterThread()
				{
					if (this->_gRef != NULL && this->m_unregisterThread_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("unregisterThread_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CRenderSystem::unregisterThread();
					}
				}
				virtual ev_uint32 getDisplayMonitorCount() const
				{
					if (this->_gRef != NULL && this->m_getDisplayMonitorCount_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDisplayMonitorCount_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystem::getDisplayMonitorCount();
					}
				}
				virtual void fireEvent(const EVString& name, const EarthView::World::Core::CommonStringPairList* params)
				{
					if (this->_gRef != NULL && this->m_fireEvent_EVString_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jlong params_j = (jlong) params;
						jmethodID __method = __gr->getMethod("fireEvent_EVString_CommonStringPairList_callback");
						__env->CallVoidMethod(__obj, __method , name_j, params_j);
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
						return this->CRenderSystem::fireEvent(name, params);
					}
				}
				virtual void fireEvent(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_fireEvent_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("fireEvent_EVString_callback");
						__env->CallVoidMethod(__obj, __method , name_j);
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
						return this->CRenderSystem::fireEvent(name);
					}
				}
				virtual void setClipPlanesImpl(const EarthView::World::Spatial::Math::PlaneList& clipPlanes)
				{
					if (this->_gRef != NULL && this->m_setClipPlanesImpl_PlaneList_callback != "" && this->isCustomExtend())
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
						jlong clipPlanes_j = (jlong) &clipPlanes;
						jmethodID __method = __gr->getMethod("setClipPlanesImpl_PlaneList_callback");
						__env->CallVoidMethod(__obj, __method , clipPlanes_j);
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
						return this->CRenderSystem::setClipPlanesImpl(clipPlanes);
					}
				}
				virtual void initialiseFromRenderSystemCapabilities(EarthView::World::Graphic::CRenderSystemCapabilities* caps, EarthView::World::Graphic::CRenderTarget* primary)
				{
					if (this->_gRef != NULL && this->m_initialiseFromRenderSystemCapabilities_CRenderSystemCapabilities_CRenderTarget_callback != "" && this->isCustomExtend())
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
						jlong caps_j = (jlong) caps;
						jlong primary_j = (jlong) primary;
						jmethodID __method = __gr->getMethod("initialiseFromRenderSystemCapabilities_CRenderSystemCapabilities_CRenderTarget_callback");
						__env->CallVoidMethod(__obj, __method , caps_j, primary_j);
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
						return this->CRenderSystem::initialiseFromRenderSystemCapabilities(caps, primary);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCRenderSystemProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_RenderSystem_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_RenderSystem_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_getConfigOptions_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					EarthView::World::Graphic::ConfigOptionMap& __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getConfigOptions();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::ConfigOptionMap& __values1 = pObjectX->getConfigOptions();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1getConfigOptions_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getConfigOptions_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getConfigOptions_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_getConfigOptions_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				EarthView::World::Graphic::ConfigOptionMap& __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getConfigOptions();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setConfigOption_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring value_j)
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
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setConfigOption(name, value);
				}
				else
				{
					pObjectX->setConfigOption(name, value);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setConfigOption_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setConfigOption_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setConfigOption_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setConfigOption_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring value_j)
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
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setConfigOption(name, value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_createHardwareOcclusionQuery_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					EarthView::World::Graphic::CHardwareOcclusionQuery* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::createHardwareOcclusionQuery();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CHardwareOcclusionQuery* __values1 = pObjectX->createHardwareOcclusionQuery();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1createHardwareOcclusionQuery_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createHardwareOcclusionQuery_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createHardwareOcclusionQuery_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_createHardwareOcclusionQuery_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				EarthView::World::Graphic::CHardwareOcclusionQuery* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::createHardwareOcclusionQuery();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_destroyHardwareOcclusionQuery_1CHardwareOcclusionQuery(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong hq_j)
			{
				EarthView::World::Graphic::CHardwareOcclusionQuery *hq = (EarthView::World::Graphic::CHardwareOcclusionQuery*) hq_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::destroyHardwareOcclusionQuery(hq);
				}
				else
				{
					pObjectX->destroyHardwareOcclusionQuery(hq);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1destroyHardwareOcclusionQuery_1CHardwareOcclusionQuery(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyHardwareOcclusionQuery_CHardwareOcclusionQuery_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyHardwareOcclusionQuery_CHardwareOcclusionQuery_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_destroyHardwareOcclusionQuery_1CHardwareOcclusionQuery_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong hq_j)
			{
				EarthView::World::Graphic::CHardwareOcclusionQuery *hq = (EarthView::World::Graphic::CHardwareOcclusionQuery*) hq_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::destroyHardwareOcclusionQuery(hq);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_RenderSystem_validateConfigOptions_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::validateConfigOptions();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->validateConfigOptions();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1validateConfigOptions_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_validateConfigOptions_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"validateConfigOptions_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_RenderSystem_validateConfigOptions_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::validateConfigOptions();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1initialise_1ev_1bool_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean autoCreateWindow_j, jstring windowTitle_j)
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
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					EarthView::World::Graphic::CRenderWindow* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_initialise(autoCreateWindow, windowTitle);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CRenderWindow* __values1 = pObjectX->_initialise(autoCreateWindow, windowTitle);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1initialise_1ev_1bool_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__initialise_ev_bool_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_initialise_ev_bool_EVString_callback", "(ZLjava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1initialise_1ev_1bool_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean autoCreateWindow_j, jstring windowTitle_j)
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
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				EarthView::World::Graphic::CRenderWindow* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_initialise(autoCreateWindow, windowTitle);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1initialise_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean autoCreateWindow_j)
			{
				ev_bool autoCreateWindow = (ev_bool) autoCreateWindow_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					EarthView::World::Graphic::CRenderWindow* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_initialise(autoCreateWindow);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CRenderWindow* __values1 = pObjectX->_initialise(autoCreateWindow);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1initialise_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__initialise_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_initialise_ev_bool_callback", "(Z)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1initialise_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean autoCreateWindow_j)
			{
				ev_bool autoCreateWindow = (ev_bool) autoCreateWindow_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				EarthView::World::Graphic::CRenderWindow* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_initialise(autoCreateWindow);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_createRenderSystemCapabilities_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					EarthView::World::Graphic::CRenderSystemCapabilities* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::createRenderSystemCapabilities();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CRenderSystemCapabilities* __values1 = pObjectX->createRenderSystemCapabilities();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1createRenderSystemCapabilities_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createRenderSystemCapabilities_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createRenderSystemCapabilities_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_createRenderSystemCapabilities_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				EarthView::World::Graphic::CRenderSystemCapabilities* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::createRenderSystemCapabilities();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_getMutableCapabilities_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				EarthView::World::Graphic::CRenderSystemCapabilities* __values1 = pObjectX->getMutableCapabilities();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_useCustomRenderSystemCapabilities_1CRenderSystemCapabilities(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_capabilities_j)
			{
				EarthView::World::Graphic::CRenderSystemCapabilities *ref_capabilities = (EarthView::World::Graphic::CRenderSystemCapabilities*) ref_capabilities_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::useCustomRenderSystemCapabilities(ref_capabilities);
				}
				else
				{
					pObjectX->useCustomRenderSystemCapabilities(ref_capabilities);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1useCustomRenderSystemCapabilities_1CRenderSystemCapabilities(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_useCustomRenderSystemCapabilities_CRenderSystemCapabilities_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"useCustomRenderSystemCapabilities_CRenderSystemCapabilities_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_useCustomRenderSystemCapabilities_1CRenderSystemCapabilities_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_capabilities_j)
			{
				EarthView::World::Graphic::CRenderSystemCapabilities *ref_capabilities = (EarthView::World::Graphic::CRenderSystemCapabilities*) ref_capabilities_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::useCustomRenderSystemCapabilities(ref_capabilities);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_reinitialise_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::reinitialise();
				}
				else
				{
					pObjectX->reinitialise();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1reinitialise_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_reinitialise_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"reinitialise_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_reinitialise_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::reinitialise();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_shutdown_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::shutdown();
				}
				else
				{
					pObjectX->shutdown();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1shutdown_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_shutdown_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"shutdown_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_shutdown_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::shutdown();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setAmbientLight_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat r_j, jfloat g_j, jfloat b_j)
			{
				ev_real32 r = (ev_real32) r_j;
				ev_real32 g = (ev_real32) g_j;
				ev_real32 b = (ev_real32) b_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setAmbientLight(r, g, b);
				}
				else
				{
					pObjectX->setAmbientLight(r, g, b);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setAmbientLight_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAmbientLight_ev_real32_ev_real32_ev_real32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAmbientLight_ev_real32_ev_real32_ev_real32_callback", "(FFF)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setAmbientLight_1ev_1real32_1ev_1real32_1ev_1real32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat r_j, jfloat g_j, jfloat b_j)
			{
				ev_real32 r = (ev_real32) r_j;
				ev_real32 g = (ev_real32) g_j;
				ev_real32 b = (ev_real32) b_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setAmbientLight(r, g, b);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setShadingType_1ShadeOptions(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint so_j)
			{
				EarthView::World::Graphic::ShadeOptions so = (EarthView::World::Graphic::ShadeOptions) so_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setShadingType(so);
				}
				else
				{
					pObjectX->setShadingType(so);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setShadingType_1ShadeOptions(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setShadingType_ShadeOptions_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setShadingType_ShadeOptions_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setShadingType_1ShadeOptions_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint so_j)
			{
				EarthView::World::Graphic::ShadeOptions so = (EarthView::World::Graphic::ShadeOptions) so_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setShadingType(so);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setLightingEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setLightingEnabled(enabled);
				}
				else
				{
					pObjectX->setLightingEnabled(enabled);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setLightingEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setLightingEnabled_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setLightingEnabled_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setLightingEnabled_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setLightingEnabled(enabled);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setWBufferEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->setWBufferEnabled(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderSystem_getWBufferEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				ev_bool __values1 = pObjectX->getWBufferEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1createRenderWindow_1EVString_1ev_1uint32_1ev_1uint32_1ev_1bool_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong width_j, jlong height_j, jboolean fullScreen_j, jlong miscParams_j)
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
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					EarthView::World::Graphic::CRenderWindow* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_createRenderWindow(name, width, height, fullScreen, miscParams);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CRenderWindow* __values1 = pObjectX->_createRenderWindow(name, width, height, fullScreen, miscParams);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1createRenderWindow_1EVString_1ev_1uint32_1ev_1uint32_1ev_1bool_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList_callback", "(Ljava/lang/String;JJZJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1createRenderWindow_1EVString_1ev_1uint32_1ev_1uint32_1ev_1bool_1CommonStringPairList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong width_j, jlong height_j, jboolean fullScreen_j, jlong miscParams_j)
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
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				EarthView::World::Graphic::CRenderWindow* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_createRenderWindow(name, width, height, fullScreen, miscParams);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1createRenderWindow_1EVString_1ev_1uint32_1ev_1uint32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong width_j, jlong height_j, jboolean fullScreen_j)
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
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					EarthView::World::Graphic::CRenderWindow* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_createRenderWindow(name, width, height, fullScreen);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CRenderWindow* __values1 = pObjectX->_createRenderWindow(name, width, height, fullScreen);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1createRenderWindow_1EVString_1ev_1uint32_1ev_1uint32_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_createRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_callback", "(Ljava/lang/String;JJZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1createRenderWindow_1EVString_1ev_1uint32_1ev_1uint32_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong width_j, jlong height_j, jboolean fullScreen_j)
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
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				EarthView::World::Graphic::CRenderWindow* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_createRenderWindow(name, width, height, fullScreen);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderSystem__1createRenderWindows_1RenderWindowDescriptionList_1RenderWindowList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderWindowDescriptions_j, jlong createdWindows_j)
			{
				const EarthView::World::Graphic::RenderWindowDescriptionList &renderWindowDescriptions = *(EarthView::World::Graphic::RenderWindowDescriptionList*) renderWindowDescriptions_j;
				EarthView::World::Graphic::RenderWindowList &createdWindows = *(EarthView::World::Graphic::RenderWindowList*) createdWindows_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_createRenderWindows(renderWindowDescriptions, createdWindows);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->_createRenderWindows(renderWindowDescriptions, createdWindows);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1createRenderWindows_1RenderWindowDescriptionList_1RenderWindowList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__createRenderWindows_RenderWindowDescriptionList_RenderWindowList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_createRenderWindows_RenderWindowDescriptionList_RenderWindowList_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderSystem__1createRenderWindows_1RenderWindowDescriptionList_1RenderWindowList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderWindowDescriptions_j, jlong createdWindows_j)
			{
				const EarthView::World::Graphic::RenderWindowDescriptionList &renderWindowDescriptions = *(EarthView::World::Graphic::RenderWindowDescriptionList*) renderWindowDescriptions_j;
				EarthView::World::Graphic::RenderWindowList &createdWindows = *(EarthView::World::Graphic::RenderWindowList*) createdWindows_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_createRenderWindows(renderWindowDescriptions, createdWindows);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_createMultiRenderTarget_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					EarthView::World::Graphic::CMultiRenderTarget* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::createMultiRenderTarget(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CMultiRenderTarget* __values1 = pObjectX->createMultiRenderTarget(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1createMultiRenderTarget_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createMultiRenderTarget_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createMultiRenderTarget_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_createMultiRenderTarget_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				EarthView::World::Graphic::CMultiRenderTarget* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::createMultiRenderTarget(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_destroyRenderWindow_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::destroyRenderWindow(name);
				}
				else
				{
					pObjectX->destroyRenderWindow(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1destroyRenderWindow_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyRenderWindow_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyRenderWindow_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_destroyRenderWindow_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::destroyRenderWindow(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_destroyRenderTexture_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::destroyRenderTexture(name);
				}
				else
				{
					pObjectX->destroyRenderTexture(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1destroyRenderTexture_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyRenderTexture_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyRenderTexture_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_destroyRenderTexture_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::destroyRenderTexture(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_destroyRenderTarget_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::destroyRenderTarget(name);
				}
				else
				{
					pObjectX->destroyRenderTarget(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1destroyRenderTarget_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyRenderTarget_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyRenderTarget_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_destroyRenderTarget_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::destroyRenderTarget(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_attachRenderTarget_1CRenderTarget(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				EarthView::World::Graphic::CRenderTarget &target = *(EarthView::World::Graphic::CRenderTarget*) target_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::attachRenderTarget(target);
				}
				else
				{
					pObjectX->attachRenderTarget(target);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1attachRenderTarget_1CRenderTarget(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_attachRenderTarget_CRenderTarget_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"attachRenderTarget_CRenderTarget_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_attachRenderTarget_1CRenderTarget_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				EarthView::World::Graphic::CRenderTarget &target = *(EarthView::World::Graphic::CRenderTarget*) target_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::attachRenderTarget(target);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_getRenderTarget_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					EarthView::World::Graphic::CRenderTarget* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getRenderTarget(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CRenderTarget* __values1 = pObjectX->getRenderTarget(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1getRenderTarget_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRenderTarget_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRenderTarget_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_getRenderTarget_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				EarthView::World::Graphic::CRenderTarget* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getRenderTarget(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_detachRenderTarget_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					EarthView::World::Graphic::CRenderTarget* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::detachRenderTarget(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CRenderTarget* __values1 = pObjectX->detachRenderTarget(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1detachRenderTarget_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_detachRenderTarget_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"detachRenderTarget_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_detachRenderTarget_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				EarthView::World::Graphic::CRenderTarget* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::detachRenderTarget(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_RenderSystem_00024StringRenderTargetMapPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair *pObjectX = (EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->first;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_00024StringRenderTargetMapPair_set_1first_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair *pObjectX = (EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->first = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_00024StringRenderTargetMapPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair *pObjectX = (EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_00024StringRenderTargetMapPair_set_1second_1CRenderTarget(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair *pObjectX = (EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::CRenderTarget*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderSystem_00024RenderTargetIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem::RenderTargetIterator *pObjectX = (EarthView::World::Graphic::CRenderSystem::RenderTargetIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_00024RenderTargetIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem::RenderTargetIterator *pObjectX = (EarthView::World::Graphic::CRenderSystem::RenderTargetIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderSystem_00024RenderTargetIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem::RenderTargetIterator *pObjectX = (EarthView::World::Graphic::CRenderSystem::RenderTargetIterator*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->nextKey();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_00024RenderTargetIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem::RenderTargetIterator *pObjectX = (EarthView::World::Graphic::CRenderSystem::RenderTargetIterator*) pObjXXXX;
				EarthView::World::Graphic::CRenderTarget* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_00024RenderTargetIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem::RenderTargetIterator *pObjectX = (EarthView::World::Graphic::CRenderSystem::RenderTargetIterator*) pObjXXXX;
				EarthView::World::Graphic::CRenderTarget** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_00024RenderTargetIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem::RenderTargetIterator *pObjectX = (EarthView::World::Graphic::CRenderSystem::RenderTargetIterator*) pObjXXXX;
				EarthView::World::Graphic::CRenderTarget* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_00024RenderTargetIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem::RenderTargetIterator *pObjectX = (EarthView::World::Graphic::CRenderSystem::RenderTargetIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_00024RenderTargetIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem::RenderTargetIterator *pObjectX = (EarthView::World::Graphic::CRenderSystem::RenderTargetIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_00024RenderTargetIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem::RenderTargetIterator *pObjectX = (EarthView::World::Graphic::CRenderSystem::RenderTargetIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_getRenderTargetIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					EarthView::World::Graphic::CRenderSystem::RenderTargetIterator __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getRenderTargetIterator();
					EarthView::World::Graphic::CRenderSystem::RenderTargetIterator *returnvalues = new EarthView::World::Graphic::CRenderSystem::RenderTargetIterator(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CRenderSystem::RenderTargetIterator __values1 = pObjectX->getRenderTargetIterator();
					EarthView::World::Graphic::CRenderSystem::RenderTargetIterator *returnvalues = new EarthView::World::Graphic::CRenderSystem::RenderTargetIterator(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1getRenderTargetIterator_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRenderTargetIterator_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRenderTargetIterator_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_getRenderTargetIterator_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				EarthView::World::Graphic::CRenderSystem::RenderTargetIterator __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getRenderTargetIterator();
				EarthView::World::Graphic::CRenderSystem::RenderTargetIterator *returnvalues = new EarthView::World::Graphic::CRenderSystem::RenderTargetIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_RenderSystem_getErrorDescription_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint errorNumber_j)
			{
				ev_int32 errorNumber = (ev_int32) errorNumber_j;
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getErrorDescription(errorNumber);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getErrorDescription(errorNumber);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1getErrorDescription_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getErrorDescription_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getErrorDescription_ev_int32_callback", "(I)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_RenderSystem_getErrorDescription_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint errorNumber_j)
			{
				ev_int32 errorNumber = (ev_int32) errorNumber_j;
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getErrorDescription(errorNumber);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setWaitForVerticalBlank_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->setWaitForVerticalBlank(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderSystem_getWaitForVerticalBlank_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				ev_bool __values1 = pObjectX->getWaitForVerticalBlank();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_getGlobalInstanceVertexBuffer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->getGlobalInstanceVertexBuffer();
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setGlobalInstanceVertexBuffer_1CHardwareVertexBufferSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr val = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) val_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->setGlobalInstanceVertexBuffer(val);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_getGlobalInstanceVertexBufferVertexDeclaration_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				EarthView::World::Graphic::CVertexDeclaration* __values1 = pObjectX->getGlobalInstanceVertexBufferVertexDeclaration();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setGlobalInstanceVertexBufferVertexDeclaration_1CVertexDeclaration(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_val_j)
			{
				EarthView::World::Graphic::CVertexDeclaration *ref_val = (EarthView::World::Graphic::CVertexDeclaration*) ref_val_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->setGlobalInstanceVertexBufferVertexDeclaration(ref_val);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_getGlobalNumberOfInstances_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getGlobalNumberOfInstances();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setGlobalNumberOfInstances_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const ev_size_t val = (ev_size_t) val_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->setGlobalNumberOfInstances(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setFixedPipelineEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->setFixedPipelineEnabled(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderSystem_getFixedPipelineEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				ev_bool __values1 = pObjectX->getFixedPipelineEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setDepthBufferFor_1CRenderTarget(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderTarget_j)
			{
				EarthView::World::Graphic::CRenderTarget *renderTarget = (EarthView::World::Graphic::CRenderTarget*) renderTarget_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setDepthBufferFor(renderTarget);
				}
				else
				{
					pObjectX->setDepthBufferFor(renderTarget);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setDepthBufferFor_1CRenderTarget(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDepthBufferFor_CRenderTarget_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDepthBufferFor_CRenderTarget_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setDepthBufferFor_1CRenderTarget_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderTarget_j)
			{
				EarthView::World::Graphic::CRenderTarget *renderTarget = (EarthView::World::Graphic::CRenderTarget*) renderTarget_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setDepthBufferFor(renderTarget);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1useLights_1LightList_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lights_j, jint limit_j)
			{
				const EarthView::World::Graphic::LightList &lights = *(EarthView::World::Graphic::LightList*) lights_j;
				ev_uint16 limit = (ev_uint16) limit_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_useLights(lights, limit);
				}
				else
				{
					pObjectX->_useLights(lights, limit);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1useLights_1LightList_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__useLights_LightList_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_useLights_LightList_ev_uint16_callback", "(JI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1useLights_1LightList_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lights_j, jint limit_j)
			{
				const EarthView::World::Graphic::LightList &lights = *(EarthView::World::Graphic::LightList*) lights_j;
				ev_uint16 limit = (ev_uint16) limit_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_useLights(lights, limit);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderSystem_areFixedFunctionLightsInViewSpace_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::areFixedFunctionLightsInViewSpace();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->areFixedFunctionLightsInViewSpace();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1areFixedFunctionLightsInViewSpace_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_areFixedFunctionLightsInViewSpace_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"areFixedFunctionLightsInViewSpace_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderSystem_areFixedFunctionLightsInViewSpace_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::areFixedFunctionLightsInViewSpace();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setWorldMatrix_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong m_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &m = *(EarthView::World::Spatial::Math::CMatrix4*) m_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setWorldMatrix(m);
				}
				else
				{
					pObjectX->_setWorldMatrix(m);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setWorldMatrix_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setWorldMatrix_CMatrix4_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setWorldMatrix_CMatrix4_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setWorldMatrix_1CMatrix4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong m_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &m = *(EarthView::World::Spatial::Math::CMatrix4*) m_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setWorldMatrix(m);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setWorldMatrices_1CMatrix4_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong m_j, jint count_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 *m = (const EarthView::World::Spatial::Math::CMatrix4*) m_j;
				ev_uint16 count = (ev_uint16) count_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setWorldMatrices(m, count);
				}
				else
				{
					pObjectX->_setWorldMatrices(m, count);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setWorldMatrices_1CMatrix4_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setWorldMatrices_CMatrix4_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setWorldMatrices_CMatrix4_ev_uint16_callback", "(JI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setWorldMatrices_1CMatrix4_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong m_j, jint count_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 *m = (const EarthView::World::Spatial::Math::CMatrix4*) m_j;
				ev_uint16 count = (ev_uint16) count_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setWorldMatrices(m, count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setViewMatrix_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong m_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &m = *(EarthView::World::Spatial::Math::CMatrix4*) m_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setViewMatrix(m);
				}
				else
				{
					pObjectX->_setViewMatrix(m);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setViewMatrix_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setViewMatrix_CMatrix4_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setViewMatrix_CMatrix4_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setViewMatrix_1CMatrix4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong m_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &m = *(EarthView::World::Spatial::Math::CMatrix4*) m_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setViewMatrix(m);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1getViewMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_getViewMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->_getViewMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1getViewMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getViewMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getViewMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1getViewMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_getViewMatrix();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setProjectionMatrix_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong m_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &m = *(EarthView::World::Spatial::Math::CMatrix4*) m_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setProjectionMatrix(m);
				}
				else
				{
					pObjectX->_setProjectionMatrix(m);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setProjectionMatrix_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setProjectionMatrix_CMatrix4_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setProjectionMatrix_CMatrix4_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setProjectionMatrix_1CMatrix4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong m_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &m = *(EarthView::World::Spatial::Math::CMatrix4*) m_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setProjectionMatrix(m);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1getProjectMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_getProjectMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->_getProjectMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1getProjectMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getProjectMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getProjectMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1getProjectMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_getProjectMatrix();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1getProjectMatrixDepth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_getProjectMatrixDepth();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->_getProjectMatrixDepth();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1getProjectMatrixDepth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getProjectMatrixDepth_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getProjectMatrixDepth_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1getProjectMatrixDepth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_getProjectMatrixDepth();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureUnitSettings_1ev_1size_1t_1CTextureUnitState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong texUnit_j, jlong tl_j)
			{
				ev_size_t texUnit = (ev_size_t) texUnit_j;
				EarthView::World::Graphic::CTextureUnitState &tl = *(EarthView::World::Graphic::CTextureUnitState*) tl_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureUnitSettings(texUnit, tl);
				}
				else
				{
					pObjectX->_setTextureUnitSettings(texUnit, tl);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setTextureUnitSettings_1ev_1size_1t_1CTextureUnitState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setTextureUnitSettings_ev_size_t_CTextureUnitState_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setTextureUnitSettings_ev_size_t_CTextureUnitState_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureUnitSettings_1ev_1size_1t_1CTextureUnitState_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong texUnit_j, jlong tl_j)
			{
				ev_size_t texUnit = (ev_size_t) texUnit_j;
				EarthView::World::Graphic::CTextureUnitState &tl = *(EarthView::World::Graphic::CTextureUnitState*) tl_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureUnitSettings(texUnit, tl);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1disableTextureUnit_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong texUnit_j)
			{
				ev_size_t texUnit = (ev_size_t) texUnit_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_disableTextureUnit(texUnit);
				}
				else
				{
					pObjectX->_disableTextureUnit(texUnit);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1disableTextureUnit_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__disableTextureUnit_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_disableTextureUnit_ev_size_t_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1disableTextureUnit_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong texUnit_j)
			{
				ev_size_t texUnit = (ev_size_t) texUnit_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_disableTextureUnit(texUnit);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1disableTextureUnitsFrom_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong texUnit_j)
			{
				ev_size_t texUnit = (ev_size_t) texUnit_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_disableTextureUnitsFrom(texUnit);
				}
				else
				{
					pObjectX->_disableTextureUnitsFrom(texUnit);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1disableTextureUnitsFrom_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__disableTextureUnitsFrom_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_disableTextureUnitsFrom_ev_size_t_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1disableTextureUnitsFrom_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong texUnit_j)
			{
				ev_size_t texUnit = (ev_size_t) texUnit_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_disableTextureUnitsFrom(texUnit);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setSurfaceParams_1CColourValue_1CColourValue_1CColourValue_1CColourValue_1Real_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ambient_j, jlong diffuse_j, jlong specular_j, jlong emissive_j, jdouble shininess_j, jint tracking_j)
			{
				const EarthView::World::Graphic::CColourValue &ambient = *(EarthView::World::Graphic::CColourValue*) ambient_j;
				const EarthView::World::Graphic::CColourValue &diffuse = *(EarthView::World::Graphic::CColourValue*) diffuse_j;
				const EarthView::World::Graphic::CColourValue &specular = *(EarthView::World::Graphic::CColourValue*) specular_j;
				const EarthView::World::Graphic::CColourValue &emissive = *(EarthView::World::Graphic::CColourValue*) emissive_j;
				Real shininess = (Real) shininess_j;
				ev_int32 tracking = (ev_int32) tracking_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setSurfaceParams(ambient, diffuse, specular, emissive, shininess, tracking);
				}
				else
				{
					pObjectX->_setSurfaceParams(ambient, diffuse, specular, emissive, shininess, tracking);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setSurfaceParams_1CColourValue_1CColourValue_1CColourValue_1CColourValue_1Real_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32_callback", "(JJJJDI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setSurfaceParams_1CColourValue_1CColourValue_1CColourValue_1CColourValue_1Real_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ambient_j, jlong diffuse_j, jlong specular_j, jlong emissive_j, jdouble shininess_j, jint tracking_j)
			{
				const EarthView::World::Graphic::CColourValue &ambient = *(EarthView::World::Graphic::CColourValue*) ambient_j;
				const EarthView::World::Graphic::CColourValue &diffuse = *(EarthView::World::Graphic::CColourValue*) diffuse_j;
				const EarthView::World::Graphic::CColourValue &specular = *(EarthView::World::Graphic::CColourValue*) specular_j;
				const EarthView::World::Graphic::CColourValue &emissive = *(EarthView::World::Graphic::CColourValue*) emissive_j;
				Real shininess = (Real) shininess_j;
				ev_int32 tracking = (ev_int32) tracking_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setSurfaceParams(ambient, diffuse, specular, emissive, shininess, tracking);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setSurfaceParams_1CColourValue_1CColourValue_1CColourValue_1CColourValue_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ambient_j, jlong diffuse_j, jlong specular_j, jlong emissive_j, jdouble shininess_j)
			{
				const EarthView::World::Graphic::CColourValue &ambient = *(EarthView::World::Graphic::CColourValue*) ambient_j;
				const EarthView::World::Graphic::CColourValue &diffuse = *(EarthView::World::Graphic::CColourValue*) diffuse_j;
				const EarthView::World::Graphic::CColourValue &specular = *(EarthView::World::Graphic::CColourValue*) specular_j;
				const EarthView::World::Graphic::CColourValue &emissive = *(EarthView::World::Graphic::CColourValue*) emissive_j;
				Real shininess = (Real) shininess_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setSurfaceParams(ambient, diffuse, specular, emissive, shininess);
				}
				else
				{
					pObjectX->_setSurfaceParams(ambient, diffuse, specular, emissive, shininess);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setSurfaceParams_1CColourValue_1CColourValue_1CColourValue_1CColourValue_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setSurfaceParams_CColourValue_CColourValue_CColourValue_CColourValue_Real_callback", "(JJJJD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setSurfaceParams_1CColourValue_1CColourValue_1CColourValue_1CColourValue_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ambient_j, jlong diffuse_j, jlong specular_j, jlong emissive_j, jdouble shininess_j)
			{
				const EarthView::World::Graphic::CColourValue &ambient = *(EarthView::World::Graphic::CColourValue*) ambient_j;
				const EarthView::World::Graphic::CColourValue &diffuse = *(EarthView::World::Graphic::CColourValue*) diffuse_j;
				const EarthView::World::Graphic::CColourValue &specular = *(EarthView::World::Graphic::CColourValue*) specular_j;
				const EarthView::World::Graphic::CColourValue &emissive = *(EarthView::World::Graphic::CColourValue*) emissive_j;
				Real shininess = (Real) shininess_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setSurfaceParams(ambient, diffuse, specular, emissive, shininess);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setPointSpritesEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setPointSpritesEnabled(enabled);
				}
				else
				{
					pObjectX->_setPointSpritesEnabled(enabled);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setPointSpritesEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setPointSpritesEnabled_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setPointSpritesEnabled_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setPointSpritesEnabled_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setPointSpritesEnabled(enabled);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setPointParameters_1Real_1ev_1bool_1Real_1Real_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble size_j, jboolean attenuationEnabled_j, jdouble constant_j, jdouble linear_j, jdouble quadratic_j, jdouble minSize_j, jdouble maxSize_j)
			{
				Real size = (Real) size_j;
				ev_bool attenuationEnabled = (ev_bool) attenuationEnabled_j;
				Real constant = (Real) constant_j;
				Real linear = (Real) linear_j;
				Real quadratic = (Real) quadratic_j;
				Real minSize = (Real) minSize_j;
				Real maxSize = (Real) maxSize_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setPointParameters(size, attenuationEnabled, constant, linear, quadratic, minSize, maxSize);
				}
				else
				{
					pObjectX->_setPointParameters(size, attenuationEnabled, constant, linear, quadratic, minSize, maxSize);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setPointParameters_1Real_1ev_1bool_1Real_1Real_1Real_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setPointParameters_Real_ev_bool_Real_Real_Real_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setPointParameters_Real_ev_bool_Real_Real_Real_Real_Real_callback", "(DZDDDDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setPointParameters_1Real_1ev_1bool_1Real_1Real_1Real_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble size_j, jboolean attenuationEnabled_j, jdouble constant_j, jdouble linear_j, jdouble quadratic_j, jdouble minSize_j, jdouble maxSize_j)
			{
				Real size = (Real) size_j;
				ev_bool attenuationEnabled = (ev_bool) attenuationEnabled_j;
				Real constant = (Real) constant_j;
				Real linear = (Real) linear_j;
				Real quadratic = (Real) quadratic_j;
				Real minSize = (Real) minSize_j;
				Real maxSize = (Real) maxSize_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setPointParameters(size, attenuationEnabled, constant, linear, quadratic, minSize, maxSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTexture_1ev_1size_1t_1ev_1bool_1CTexturePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jboolean enabled_j, jlong texPtr_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				ev_bool enabled = (ev_bool) enabled_j;
				const EarthView::World::Graphic::CTexturePtr &texPtr = *(EarthView::World::Graphic::CTexturePtr*) texPtr_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setTexture(unit, enabled, texPtr);
				}
				else
				{
					pObjectX->_setTexture(unit, enabled, texPtr);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setTexture_1ev_1size_1t_1ev_1bool_1CTexturePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setTexture_ev_size_t_ev_bool_CTexturePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setTexture_ev_size_t_ev_bool_CTexturePtr_callback", "(JZJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTexture_1ev_1size_1t_1ev_1bool_1CTexturePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jboolean enabled_j, jlong texPtr_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				ev_bool enabled = (ev_bool) enabled_j;
				const EarthView::World::Graphic::CTexturePtr &texPtr = *(EarthView::World::Graphic::CTexturePtr*) texPtr_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setTexture(unit, enabled, texPtr);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTexture_1ev_1size_1t_1ev_1bool_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jboolean enabled_j, jstring texname_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				ev_bool enabled = (ev_bool) enabled_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* texname_ch = (const ev_char*)__env->GetStringUTFChars(texname_j,JNI_FALSE);
				const EVString texname = texname_ch;
				__env->ReleaseStringUTFChars(texname_j, (const char *)texname_ch);
				#else
				const ev_wchar* texname_ch = (const ev_wchar*)__env->GetStringChars(texname_j,JNI_FALSE);
				const EVString texname = texname_ch;
				__env->ReleaseStringChars(texname_j, (const jchar *)texname_ch);
				#endif
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setTexture(unit, enabled, texname);
				}
				else
				{
					pObjectX->_setTexture(unit, enabled, texname);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setTexture_1ev_1size_1t_1ev_1bool_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setTexture_ev_size_t_ev_bool_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setTexture_ev_size_t_ev_bool_EVString_callback", "(JZLjava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTexture_1ev_1size_1t_1ev_1bool_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jboolean enabled_j, jstring texname_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				ev_bool enabled = (ev_bool) enabled_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* texname_ch = (const ev_char*)__env->GetStringUTFChars(texname_j,JNI_FALSE);
				const EVString texname = texname_ch;
				__env->ReleaseStringUTFChars(texname_j, (const char *)texname_ch);
				#else
				const ev_wchar* texname_ch = (const ev_wchar*)__env->GetStringChars(texname_j,JNI_FALSE);
				const EVString texname = texname_ch;
				__env->ReleaseStringChars(texname_j, (const jchar *)texname_ch);
				#endif
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setTexture(unit, enabled, texname);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setVertexTexture_1ev_1size_1t_1CTexturePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jlong tex_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				const EarthView::World::Graphic::CTexturePtr &tex = *(EarthView::World::Graphic::CTexturePtr*) tex_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setVertexTexture(unit, tex);
				}
				else
				{
					pObjectX->_setVertexTexture(unit, tex);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setVertexTexture_1ev_1size_1t_1CTexturePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setVertexTexture_ev_size_t_CTexturePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setVertexTexture_ev_size_t_CTexturePtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setVertexTexture_1ev_1size_1t_1CTexturePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jlong tex_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				const EarthView::World::Graphic::CTexturePtr &tex = *(EarthView::World::Graphic::CTexturePtr*) tex_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setVertexTexture(unit, tex);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureCoordSet_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jlong index_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureCoordSet(unit, index);
				}
				else
				{
					pObjectX->_setTextureCoordSet(unit, index);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setTextureCoordSet_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setTextureCoordSet_ev_size_t_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setTextureCoordSet_ev_size_t_ev_size_t_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureCoordSet_1ev_1size_1t_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jlong index_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureCoordSet(unit, index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureCoordCalculation_1ev_1size_1t_1TexCoordCalcMethod_1CFrustum(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jint m_j, jlong ref_frustum_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				TexCoordCalcMethod m = (TexCoordCalcMethod) m_j;
				const EarthView::World::Graphic::CFrustum *ref_frustum = (const EarthView::World::Graphic::CFrustum*) ref_frustum_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureCoordCalculation(unit, m, ref_frustum);
				}
				else
				{
					pObjectX->_setTextureCoordCalculation(unit, m, ref_frustum);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setTextureCoordCalculation_1ev_1size_1t_1TexCoordCalcMethod_1CFrustum(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_CFrustum_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_CFrustum_callback", "(JIJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureCoordCalculation_1ev_1size_1t_1TexCoordCalcMethod_1CFrustum_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jint m_j, jlong ref_frustum_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				TexCoordCalcMethod m = (TexCoordCalcMethod) m_j;
				const EarthView::World::Graphic::CFrustum *ref_frustum = (const EarthView::World::Graphic::CFrustum*) ref_frustum_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureCoordCalculation(unit, m, ref_frustum);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureCoordCalculation_1ev_1size_1t_1TexCoordCalcMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jint m_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				TexCoordCalcMethod m = (TexCoordCalcMethod) m_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureCoordCalculation(unit, m);
				}
				else
				{
					pObjectX->_setTextureCoordCalculation(unit, m);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setTextureCoordCalculation_1ev_1size_1t_1TexCoordCalcMethod(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setTextureCoordCalculation_ev_size_t_TexCoordCalcMethod_callback", "(JI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureCoordCalculation_1ev_1size_1t_1TexCoordCalcMethod_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jint m_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				TexCoordCalcMethod m = (TexCoordCalcMethod) m_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureCoordCalculation(unit, m);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureBlendMode_1ev_1size_1t_1CLayerBlendModeEx(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jlong bm_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				const EarthView::World::Graphic::CLayerBlendModeEx &bm = *(EarthView::World::Graphic::CLayerBlendModeEx*) bm_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureBlendMode(unit, bm);
				}
				else
				{
					pObjectX->_setTextureBlendMode(unit, bm);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setTextureBlendMode_1ev_1size_1t_1CLayerBlendModeEx(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setTextureBlendMode_ev_size_t_CLayerBlendModeEx_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setTextureBlendMode_ev_size_t_CLayerBlendModeEx_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureBlendMode_1ev_1size_1t_1CLayerBlendModeEx_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jlong bm_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				const EarthView::World::Graphic::CLayerBlendModeEx &bm = *(EarthView::World::Graphic::CLayerBlendModeEx*) bm_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureBlendMode(unit, bm);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureUnitFiltering_1ev_1size_1t_1FilterOptions_1FilterOptions_1FilterOptions(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jint minFilter_j, jint magFilter_j, jint mipFilter_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				EarthView::World::Graphic::FilterOptions minFilter = (EarthView::World::Graphic::FilterOptions) minFilter_j;
				EarthView::World::Graphic::FilterOptions magFilter = (EarthView::World::Graphic::FilterOptions) magFilter_j;
				EarthView::World::Graphic::FilterOptions mipFilter = (EarthView::World::Graphic::FilterOptions) mipFilter_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureUnitFiltering(unit, minFilter, magFilter, mipFilter);
				}
				else
				{
					pObjectX->_setTextureUnitFiltering(unit, minFilter, magFilter, mipFilter);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setTextureUnitFiltering_1ev_1size_1t_1FilterOptions_1FilterOptions_1FilterOptions(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setTextureUnitFiltering_ev_size_t_FilterOptions_FilterOptions_FilterOptions_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setTextureUnitFiltering_ev_size_t_FilterOptions_FilterOptions_FilterOptions_callback", "(JIII)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureUnitFiltering_1ev_1size_1t_1FilterOptions_1FilterOptions_1FilterOptions_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jint minFilter_j, jint magFilter_j, jint mipFilter_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				EarthView::World::Graphic::FilterOptions minFilter = (EarthView::World::Graphic::FilterOptions) minFilter_j;
				EarthView::World::Graphic::FilterOptions magFilter = (EarthView::World::Graphic::FilterOptions) magFilter_j;
				EarthView::World::Graphic::FilterOptions mipFilter = (EarthView::World::Graphic::FilterOptions) mipFilter_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureUnitFiltering(unit, minFilter, magFilter, mipFilter);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureUnitFiltering_1ev_1size_1t_1FilterType_1FilterOptions(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jint ftype_j, jint filter_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				EarthView::World::Graphic::FilterType ftype = (EarthView::World::Graphic::FilterType) ftype_j;
				EarthView::World::Graphic::FilterOptions filter = (EarthView::World::Graphic::FilterOptions) filter_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureUnitFiltering(unit, ftype, filter);
				}
				else
				{
					pObjectX->_setTextureUnitFiltering(unit, ftype, filter);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setTextureUnitFiltering_1ev_1size_1t_1FilterType_1FilterOptions(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setTextureUnitFiltering_ev_size_t_FilterType_FilterOptions_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setTextureUnitFiltering_ev_size_t_FilterType_FilterOptions_callback", "(JII)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureUnitFiltering_1ev_1size_1t_1FilterType_1FilterOptions_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jint ftype_j, jint filter_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				EarthView::World::Graphic::FilterType ftype = (EarthView::World::Graphic::FilterType) ftype_j;
				EarthView::World::Graphic::FilterOptions filter = (EarthView::World::Graphic::FilterOptions) filter_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureUnitFiltering(unit, ftype, filter);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureLayerAnisotropy_1ev_1size_1t_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jlong maxAnisotropy_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				ev_uint32 maxAnisotropy = (ev_uint32) maxAnisotropy_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureLayerAnisotropy(unit, maxAnisotropy);
				}
				else
				{
					pObjectX->_setTextureLayerAnisotropy(unit, maxAnisotropy);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setTextureLayerAnisotropy_1ev_1size_1t_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setTextureLayerAnisotropy_ev_size_t_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setTextureLayerAnisotropy_ev_size_t_ev_uint32_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureLayerAnisotropy_1ev_1size_1t_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jlong maxAnisotropy_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				ev_uint32 maxAnisotropy = (ev_uint32) maxAnisotropy_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureLayerAnisotropy(unit, maxAnisotropy);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureAddressingMode_1ev_1size_1t_1UVWAddressingMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jlong uvw_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				const EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode &uvw = *(EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode*) uvw_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureAddressingMode(unit, uvw);
				}
				else
				{
					pObjectX->_setTextureAddressingMode(unit, uvw);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setTextureAddressingMode_1ev_1size_1t_1UVWAddressingMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setTextureAddressingMode_ev_size_t_UVWAddressingMode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setTextureAddressingMode_ev_size_t_UVWAddressingMode_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureAddressingMode_1ev_1size_1t_1UVWAddressingMode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jlong uvw_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				const EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode &uvw = *(EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode*) uvw_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureAddressingMode(unit, uvw);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureBorderColour_1ev_1size_1t_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jlong colour_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureBorderColour(unit, colour);
				}
				else
				{
					pObjectX->_setTextureBorderColour(unit, colour);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setTextureBorderColour_1ev_1size_1t_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setTextureBorderColour_ev_size_t_CColourValue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setTextureBorderColour_ev_size_t_CColourValue_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureBorderColour_1ev_1size_1t_1CColourValue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jlong colour_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureBorderColour(unit, colour);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureMipmapBias_1ev_1size_1t_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jfloat bias_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				ev_real32 bias = (ev_real32) bias_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureMipmapBias(unit, bias);
				}
				else
				{
					pObjectX->_setTextureMipmapBias(unit, bias);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setTextureMipmapBias_1ev_1size_1t_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setTextureMipmapBias_ev_size_t_ev_real32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setTextureMipmapBias_ev_size_t_ev_real32_callback", "(JF)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureMipmapBias_1ev_1size_1t_1ev_1real32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jfloat bias_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				ev_real32 bias = (ev_real32) bias_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureMipmapBias(unit, bias);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureMatrix_1ev_1size_1t_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jlong xform_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				const EarthView::World::Spatial::Math::CMatrix4 &xform = *(EarthView::World::Spatial::Math::CMatrix4*) xform_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureMatrix(unit, xform);
				}
				else
				{
					pObjectX->_setTextureMatrix(unit, xform);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setTextureMatrix_1ev_1size_1t_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setTextureMatrix_ev_size_t_CMatrix4_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setTextureMatrix_ev_size_t_CMatrix4_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureMatrix_1ev_1size_1t_1CMatrix4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jlong xform_j)
			{
				ev_size_t unit = (ev_size_t) unit_j;
				const EarthView::World::Spatial::Math::CMatrix4 &xform = *(EarthView::World::Spatial::Math::CMatrix4*) xform_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureMatrix(unit, xform);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setSceneBlending_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sourceFactor_j, jint destFactor_j, jint op_j)
			{
				EarthView::World::Graphic::SceneBlendFactor sourceFactor = (EarthView::World::Graphic::SceneBlendFactor) sourceFactor_j;
				EarthView::World::Graphic::SceneBlendFactor destFactor = (EarthView::World::Graphic::SceneBlendFactor) destFactor_j;
				EarthView::World::Graphic::SceneBlendOperation op = (EarthView::World::Graphic::SceneBlendOperation) op_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setSceneBlending(sourceFactor, destFactor, op);
				}
				else
				{
					pObjectX->_setSceneBlending(sourceFactor, destFactor, op);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setSceneBlending_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendOperation(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_callback", "(III)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setSceneBlending_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendOperation_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sourceFactor_j, jint destFactor_j, jint op_j)
			{
				EarthView::World::Graphic::SceneBlendFactor sourceFactor = (EarthView::World::Graphic::SceneBlendFactor) sourceFactor_j;
				EarthView::World::Graphic::SceneBlendFactor destFactor = (EarthView::World::Graphic::SceneBlendFactor) destFactor_j;
				EarthView::World::Graphic::SceneBlendOperation op = (EarthView::World::Graphic::SceneBlendOperation) op_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setSceneBlending(sourceFactor, destFactor, op);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setSceneBlending_1SceneBlendFactor_1SceneBlendFactor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sourceFactor_j, jint destFactor_j)
			{
				EarthView::World::Graphic::SceneBlendFactor sourceFactor = (EarthView::World::Graphic::SceneBlendFactor) sourceFactor_j;
				EarthView::World::Graphic::SceneBlendFactor destFactor = (EarthView::World::Graphic::SceneBlendFactor) destFactor_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setSceneBlending(sourceFactor, destFactor);
				}
				else
				{
					pObjectX->_setSceneBlending(sourceFactor, destFactor);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setSceneBlending_1SceneBlendFactor_1SceneBlendFactor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setSceneBlending_SceneBlendFactor_SceneBlendFactor_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setSceneBlending_SceneBlendFactor_SceneBlendFactor_callback", "(II)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setSceneBlending_1SceneBlendFactor_1SceneBlendFactor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sourceFactor_j, jint destFactor_j)
			{
				EarthView::World::Graphic::SceneBlendFactor sourceFactor = (EarthView::World::Graphic::SceneBlendFactor) sourceFactor_j;
				EarthView::World::Graphic::SceneBlendFactor destFactor = (EarthView::World::Graphic::SceneBlendFactor) destFactor_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setSceneBlending(sourceFactor, destFactor);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setSeparateSceneBlending_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendOperation_1SceneBlendOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sourceFactor_j, jint destFactor_j, jint sourceFactorAlpha_j, jint destFactorAlpha_j, jint op_j, jint alphaOp_j)
			{
				EarthView::World::Graphic::SceneBlendFactor sourceFactor = (EarthView::World::Graphic::SceneBlendFactor) sourceFactor_j;
				EarthView::World::Graphic::SceneBlendFactor destFactor = (EarthView::World::Graphic::SceneBlendFactor) destFactor_j;
				EarthView::World::Graphic::SceneBlendFactor sourceFactorAlpha = (EarthView::World::Graphic::SceneBlendFactor) sourceFactorAlpha_j;
				EarthView::World::Graphic::SceneBlendFactor destFactorAlpha = (EarthView::World::Graphic::SceneBlendFactor) destFactorAlpha_j;
				EarthView::World::Graphic::SceneBlendOperation op = (EarthView::World::Graphic::SceneBlendOperation) op_j;
				EarthView::World::Graphic::SceneBlendOperation alphaOp = (EarthView::World::Graphic::SceneBlendOperation) alphaOp_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setSeparateSceneBlending(sourceFactor, destFactor, sourceFactorAlpha, destFactorAlpha, op, alphaOp);
				}
				else
				{
					pObjectX->_setSeparateSceneBlending(sourceFactor, destFactor, sourceFactorAlpha, destFactorAlpha, op, alphaOp);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setSeparateSceneBlending_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendOperation_1SceneBlendOperation(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation_callback", "(IIIIII)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setSeparateSceneBlending_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendOperation_1SceneBlendOperation_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sourceFactor_j, jint destFactor_j, jint sourceFactorAlpha_j, jint destFactorAlpha_j, jint op_j, jint alphaOp_j)
			{
				EarthView::World::Graphic::SceneBlendFactor sourceFactor = (EarthView::World::Graphic::SceneBlendFactor) sourceFactor_j;
				EarthView::World::Graphic::SceneBlendFactor destFactor = (EarthView::World::Graphic::SceneBlendFactor) destFactor_j;
				EarthView::World::Graphic::SceneBlendFactor sourceFactorAlpha = (EarthView::World::Graphic::SceneBlendFactor) sourceFactorAlpha_j;
				EarthView::World::Graphic::SceneBlendFactor destFactorAlpha = (EarthView::World::Graphic::SceneBlendFactor) destFactorAlpha_j;
				EarthView::World::Graphic::SceneBlendOperation op = (EarthView::World::Graphic::SceneBlendOperation) op_j;
				EarthView::World::Graphic::SceneBlendOperation alphaOp = (EarthView::World::Graphic::SceneBlendOperation) alphaOp_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setSeparateSceneBlending(sourceFactor, destFactor, sourceFactorAlpha, destFactorAlpha, op, alphaOp);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setSeparateSceneBlending_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sourceFactor_j, jint destFactor_j, jint sourceFactorAlpha_j, jint destFactorAlpha_j, jint op_j)
			{
				EarthView::World::Graphic::SceneBlendFactor sourceFactor = (EarthView::World::Graphic::SceneBlendFactor) sourceFactor_j;
				EarthView::World::Graphic::SceneBlendFactor destFactor = (EarthView::World::Graphic::SceneBlendFactor) destFactor_j;
				EarthView::World::Graphic::SceneBlendFactor sourceFactorAlpha = (EarthView::World::Graphic::SceneBlendFactor) sourceFactorAlpha_j;
				EarthView::World::Graphic::SceneBlendFactor destFactorAlpha = (EarthView::World::Graphic::SceneBlendFactor) destFactorAlpha_j;
				EarthView::World::Graphic::SceneBlendOperation op = (EarthView::World::Graphic::SceneBlendOperation) op_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setSeparateSceneBlending(sourceFactor, destFactor, sourceFactorAlpha, destFactorAlpha, op);
				}
				else
				{
					pObjectX->_setSeparateSceneBlending(sourceFactor, destFactor, sourceFactorAlpha, destFactorAlpha, op);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setSeparateSceneBlending_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendOperation(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_callback", "(IIIII)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setSeparateSceneBlending_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendOperation_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sourceFactor_j, jint destFactor_j, jint sourceFactorAlpha_j, jint destFactorAlpha_j, jint op_j)
			{
				EarthView::World::Graphic::SceneBlendFactor sourceFactor = (EarthView::World::Graphic::SceneBlendFactor) sourceFactor_j;
				EarthView::World::Graphic::SceneBlendFactor destFactor = (EarthView::World::Graphic::SceneBlendFactor) destFactor_j;
				EarthView::World::Graphic::SceneBlendFactor sourceFactorAlpha = (EarthView::World::Graphic::SceneBlendFactor) sourceFactorAlpha_j;
				EarthView::World::Graphic::SceneBlendFactor destFactorAlpha = (EarthView::World::Graphic::SceneBlendFactor) destFactorAlpha_j;
				EarthView::World::Graphic::SceneBlendOperation op = (EarthView::World::Graphic::SceneBlendOperation) op_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setSeparateSceneBlending(sourceFactor, destFactor, sourceFactorAlpha, destFactorAlpha, op);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setSeparateSceneBlending_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendFactor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sourceFactor_j, jint destFactor_j, jint sourceFactorAlpha_j, jint destFactorAlpha_j)
			{
				EarthView::World::Graphic::SceneBlendFactor sourceFactor = (EarthView::World::Graphic::SceneBlendFactor) sourceFactor_j;
				EarthView::World::Graphic::SceneBlendFactor destFactor = (EarthView::World::Graphic::SceneBlendFactor) destFactor_j;
				EarthView::World::Graphic::SceneBlendFactor sourceFactorAlpha = (EarthView::World::Graphic::SceneBlendFactor) sourceFactorAlpha_j;
				EarthView::World::Graphic::SceneBlendFactor destFactorAlpha = (EarthView::World::Graphic::SceneBlendFactor) destFactorAlpha_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setSeparateSceneBlending(sourceFactor, destFactor, sourceFactorAlpha, destFactorAlpha);
				}
				else
				{
					pObjectX->_setSeparateSceneBlending(sourceFactor, destFactor, sourceFactorAlpha, destFactorAlpha);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setSeparateSceneBlending_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendFactor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_callback", "(IIII)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setSeparateSceneBlending_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendFactor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sourceFactor_j, jint destFactor_j, jint sourceFactorAlpha_j, jint destFactorAlpha_j)
			{
				EarthView::World::Graphic::SceneBlendFactor sourceFactor = (EarthView::World::Graphic::SceneBlendFactor) sourceFactor_j;
				EarthView::World::Graphic::SceneBlendFactor destFactor = (EarthView::World::Graphic::SceneBlendFactor) destFactor_j;
				EarthView::World::Graphic::SceneBlendFactor sourceFactorAlpha = (EarthView::World::Graphic::SceneBlendFactor) sourceFactorAlpha_j;
				EarthView::World::Graphic::SceneBlendFactor destFactorAlpha = (EarthView::World::Graphic::SceneBlendFactor) destFactorAlpha_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setSeparateSceneBlending(sourceFactor, destFactor, sourceFactorAlpha, destFactorAlpha);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setAlphaRejectSettings_1CompareFunction_1ev_1uchar_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint func_j, jshort value_j, jboolean alphaToCoverage_j)
			{
				EarthView::World::Graphic::CompareFunction func = (EarthView::World::Graphic::CompareFunction) func_j;
				ev_uchar value = (ev_uchar) value_j;
				ev_bool alphaToCoverage = (ev_bool) alphaToCoverage_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setAlphaRejectSettings(func, value, alphaToCoverage);
				}
				else
				{
					pObjectX->_setAlphaRejectSettings(func, value, alphaToCoverage);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setAlphaRejectSettings_1CompareFunction_1ev_1uchar_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setAlphaRejectSettings_CompareFunction_ev_uchar_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setAlphaRejectSettings_CompareFunction_ev_uchar_ev_bool_callback", "(ISZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setAlphaRejectSettings_1CompareFunction_1ev_1uchar_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint func_j, jshort value_j, jboolean alphaToCoverage_j)
			{
				EarthView::World::Graphic::CompareFunction func = (EarthView::World::Graphic::CompareFunction) func_j;
				ev_uchar value = (ev_uchar) value_j;
				ev_bool alphaToCoverage = (ev_bool) alphaToCoverage_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setAlphaRejectSettings(func, value, alphaToCoverage);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureProjectionRelativeTo_1ev_1bool_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jlong pos_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureProjectionRelativeTo(enabled, pos);
				}
				else
				{
					pObjectX->_setTextureProjectionRelativeTo(enabled, pos);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setTextureProjectionRelativeTo_1ev_1bool_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setTextureProjectionRelativeTo_ev_bool_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setTextureProjectionRelativeTo_ev_bool_CVector3_callback", "(ZJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setTextureProjectionRelativeTo_1ev_1bool_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jlong pos_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setTextureProjectionRelativeTo(enabled, pos);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1createDepthBufferFor_1CRenderTarget(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderTarget_j)
			{
				EarthView::World::Graphic::CRenderTarget *renderTarget = (EarthView::World::Graphic::CRenderTarget*) renderTarget_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					EarthView::World::Graphic::CDepthBuffer* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_createDepthBufferFor(renderTarget);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CDepthBuffer* __values1 = pObjectX->_createDepthBufferFor(renderTarget);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1createDepthBufferFor_1CRenderTarget(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__createDepthBufferFor_CRenderTarget_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_createDepthBufferFor_CRenderTarget_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1createDepthBufferFor_1CRenderTarget_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderTarget_j)
			{
				EarthView::World::Graphic::CRenderTarget *renderTarget = (EarthView::World::Graphic::CRenderTarget*) renderTarget_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				EarthView::World::Graphic::CDepthBuffer* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_createDepthBufferFor(renderTarget);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1cleanupDepthBuffers_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->_cleanupDepthBuffers();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1cleanupDepthBuffers_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bCleanManualBuffers_j)
			{
				bool bCleanManualBuffers = (bool) bCleanManualBuffers_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->_cleanupDepthBuffers(bCleanManualBuffers);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1beginFrame_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_beginFrame();
				}
				else
				{
					pObjectX->_beginFrame();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1beginFrame_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__beginFrame_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_beginFrame_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1beginFrame_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_beginFrame();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_00024RenderSystemContext_Create(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Graphic::CRenderSystem::RenderSystemContext *pObjectX = new EarthView::World::Graphic::CRenderSystem::RenderSystemContext();
				return (jlong) pObjectX;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_00024RenderSystemContext_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem::RenderSystemContext *pObjectX = (EarthView::World::Graphic::CRenderSystem::RenderSystemContext*)pObjXXXX;
				delete pObjectX;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1pauseFrame_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					EarthView::World::Graphic::CRenderSystem::RenderSystemContext* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_pauseFrame();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CRenderSystem::RenderSystemContext* __values1 = pObjectX->_pauseFrame();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1pauseFrame_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__pauseFrame_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_pauseFrame_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1pauseFrame_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				EarthView::World::Graphic::CRenderSystem::RenderSystemContext* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_pauseFrame();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1resumeFrame_1RenderSystemContext(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong context_j)
			{
				EarthView::World::Graphic::CRenderSystem::RenderSystemContext *context = (EarthView::World::Graphic::CRenderSystem::RenderSystemContext*) context_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_resumeFrame(context);
				}
				else
				{
					pObjectX->_resumeFrame(context);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1resumeFrame_1RenderSystemContext(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__resumeFrame_RenderSystemContext_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_resumeFrame_RenderSystemContext_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1resumeFrame_1RenderSystemContext_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong context_j)
			{
				EarthView::World::Graphic::CRenderSystem::RenderSystemContext *context = (EarthView::World::Graphic::CRenderSystem::RenderSystemContext*) context_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_resumeFrame(context);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1endFrame_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_endFrame();
				}
				else
				{
					pObjectX->_endFrame();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1endFrame_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__endFrame_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_endFrame_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1endFrame_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_endFrame();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setViewport_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_vp_j)
			{
				EarthView::World::Graphic::CViewport *ref_vp = (EarthView::World::Graphic::CViewport*) ref_vp_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setViewport(ref_vp);
				}
				else
				{
					pObjectX->_setViewport(ref_vp);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setViewport_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setViewport_CViewport_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setViewport_CViewport_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setViewport_1CViewport_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_vp_j)
			{
				EarthView::World::Graphic::CViewport *ref_vp = (EarthView::World::Graphic::CViewport*) ref_vp_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setViewport(ref_vp);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1getViewport_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					EarthView::World::Graphic::CViewport* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_getViewport();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CViewport* __values1 = pObjectX->_getViewport();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1getViewport_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getViewport_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getViewport_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1getViewport_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				EarthView::World::Graphic::CViewport* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_getViewport();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setCullingMode_1CullingMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Graphic::CullingMode mode = (EarthView::World::Graphic::CullingMode) mode_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setCullingMode(mode);
				}
				else
				{
					pObjectX->_setCullingMode(mode);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setCullingMode_1CullingMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setCullingMode_CullingMode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setCullingMode_CullingMode_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setCullingMode_1CullingMode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Graphic::CullingMode mode = (EarthView::World::Graphic::CullingMode) mode_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setCullingMode(mode);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderSystem__1getCullingMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					EarthView::World::Graphic::CullingMode __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_getCullingMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CullingMode __values1 = pObjectX->_getCullingMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1getCullingMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getCullingMode_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getCullingMode_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderSystem__1getCullingMode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				EarthView::World::Graphic::CullingMode __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_getCullingMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBufferParams_1ev_1bool_1ev_1bool_1CompareFunction(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean depthTest_j, jboolean depthWrite_j, jint depthFunction_j)
			{
				ev_bool depthTest = (ev_bool) depthTest_j;
				ev_bool depthWrite = (ev_bool) depthWrite_j;
				EarthView::World::Graphic::CompareFunction depthFunction = (EarthView::World::Graphic::CompareFunction) depthFunction_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBufferParams(depthTest, depthWrite, depthFunction);
				}
				else
				{
					pObjectX->_setDepthBufferParams(depthTest, depthWrite, depthFunction);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setDepthBufferParams_1ev_1bool_1ev_1bool_1CompareFunction(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setDepthBufferParams_ev_bool_ev_bool_CompareFunction_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setDepthBufferParams_ev_bool_ev_bool_CompareFunction_callback", "(ZZI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBufferParams_1ev_1bool_1ev_1bool_1CompareFunction_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean depthTest_j, jboolean depthWrite_j, jint depthFunction_j)
			{
				ev_bool depthTest = (ev_bool) depthTest_j;
				ev_bool depthWrite = (ev_bool) depthWrite_j;
				EarthView::World::Graphic::CompareFunction depthFunction = (EarthView::World::Graphic::CompareFunction) depthFunction_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBufferParams(depthTest, depthWrite, depthFunction);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBufferParams_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean depthTest_j, jboolean depthWrite_j)
			{
				ev_bool depthTest = (ev_bool) depthTest_j;
				ev_bool depthWrite = (ev_bool) depthWrite_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBufferParams(depthTest, depthWrite);
				}
				else
				{
					pObjectX->_setDepthBufferParams(depthTest, depthWrite);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setDepthBufferParams_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setDepthBufferParams_ev_bool_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setDepthBufferParams_ev_bool_ev_bool_callback", "(ZZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBufferParams_1ev_1bool_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean depthTest_j, jboolean depthWrite_j)
			{
				ev_bool depthTest = (ev_bool) depthTest_j;
				ev_bool depthWrite = (ev_bool) depthWrite_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBufferParams(depthTest, depthWrite);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBufferParams_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean depthTest_j)
			{
				ev_bool depthTest = (ev_bool) depthTest_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBufferParams(depthTest);
				}
				else
				{
					pObjectX->_setDepthBufferParams(depthTest);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setDepthBufferParams_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setDepthBufferParams_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setDepthBufferParams_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBufferParams_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean depthTest_j)
			{
				ev_bool depthTest = (ev_bool) depthTest_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBufferParams(depthTest);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBufferParams_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBufferParams();
				}
				else
				{
					pObjectX->_setDepthBufferParams();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setDepthBufferParams_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setDepthBufferParams_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setDepthBufferParams_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBufferParams_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBufferParams();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBufferCheckEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBufferCheckEnabled(enabled);
				}
				else
				{
					pObjectX->_setDepthBufferCheckEnabled(enabled);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setDepthBufferCheckEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setDepthBufferCheckEnabled_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setDepthBufferCheckEnabled_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBufferCheckEnabled_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBufferCheckEnabled(enabled);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBufferCheckEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBufferCheckEnabled();
				}
				else
				{
					pObjectX->_setDepthBufferCheckEnabled();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setDepthBufferCheckEnabled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setDepthBufferCheckEnabled_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setDepthBufferCheckEnabled_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBufferCheckEnabled_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBufferCheckEnabled();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBufferWriteEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBufferWriteEnabled(enabled);
				}
				else
				{
					pObjectX->_setDepthBufferWriteEnabled(enabled);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setDepthBufferWriteEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setDepthBufferWriteEnabled_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setDepthBufferWriteEnabled_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBufferWriteEnabled_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBufferWriteEnabled(enabled);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBufferWriteEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBufferWriteEnabled();
				}
				else
				{
					pObjectX->_setDepthBufferWriteEnabled();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setDepthBufferWriteEnabled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setDepthBufferWriteEnabled_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setDepthBufferWriteEnabled_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBufferWriteEnabled_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBufferWriteEnabled();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBufferFunction_1CompareFunction(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint func_j)
			{
				EarthView::World::Graphic::CompareFunction func = (EarthView::World::Graphic::CompareFunction) func_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBufferFunction(func);
				}
				else
				{
					pObjectX->_setDepthBufferFunction(func);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setDepthBufferFunction_1CompareFunction(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setDepthBufferFunction_CompareFunction_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setDepthBufferFunction_CompareFunction_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBufferFunction_1CompareFunction_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint func_j)
			{
				EarthView::World::Graphic::CompareFunction func = (EarthView::World::Graphic::CompareFunction) func_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBufferFunction(func);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBufferFunction_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBufferFunction();
				}
				else
				{
					pObjectX->_setDepthBufferFunction();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setDepthBufferFunction_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setDepthBufferFunction_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setDepthBufferFunction_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBufferFunction_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBufferFunction();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setColourBufferWriteEnabled_1ev_1bool_1ev_1bool_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean red_j, jboolean green_j, jboolean blue_j, jboolean alpha_j)
			{
				ev_bool red = (ev_bool) red_j;
				ev_bool green = (ev_bool) green_j;
				ev_bool blue = (ev_bool) blue_j;
				ev_bool alpha = (ev_bool) alpha_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setColourBufferWriteEnabled(red, green, blue, alpha);
				}
				else
				{
					pObjectX->_setColourBufferWriteEnabled(red, green, blue, alpha);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setColourBufferWriteEnabled_1ev_1bool_1ev_1bool_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setColourBufferWriteEnabled_ev_bool_ev_bool_ev_bool_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setColourBufferWriteEnabled_ev_bool_ev_bool_ev_bool_ev_bool_callback", "(ZZZZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setColourBufferWriteEnabled_1ev_1bool_1ev_1bool_1ev_1bool_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean red_j, jboolean green_j, jboolean blue_j, jboolean alpha_j)
			{
				ev_bool red = (ev_bool) red_j;
				ev_bool green = (ev_bool) green_j;
				ev_bool blue = (ev_bool) blue_j;
				ev_bool alpha = (ev_bool) alpha_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setColourBufferWriteEnabled(red, green, blue, alpha);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBias_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat constantBias_j, jfloat slopeScaleBias_j)
			{
				ev_real32 constantBias = (ev_real32) constantBias_j;
				ev_real32 slopeScaleBias = (ev_real32) slopeScaleBias_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBias(constantBias, slopeScaleBias);
				}
				else
				{
					pObjectX->_setDepthBias(constantBias, slopeScaleBias);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setDepthBias_1ev_1real32_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setDepthBias_ev_real32_ev_real32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setDepthBias_ev_real32_ev_real32_callback", "(FF)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBias_1ev_1real32_1ev_1real32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat constantBias_j, jfloat slopeScaleBias_j)
			{
				ev_real32 constantBias = (ev_real32) constantBias_j;
				ev_real32 slopeScaleBias = (ev_real32) slopeScaleBias_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBias(constantBias, slopeScaleBias);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBias_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat constantBias_j)
			{
				ev_real32 constantBias = (ev_real32) constantBias_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBias(constantBias);
				}
				else
				{
					pObjectX->_setDepthBias(constantBias);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setDepthBias_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setDepthBias_ev_real32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setDepthBias_ev_real32_callback", "(F)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setDepthBias_1ev_1real32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat constantBias_j)
			{
				ev_real32 constantBias = (ev_real32) constantBias_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setDepthBias(constantBias);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setFog_1FogMode_1CColourValue_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j, jlong colour_j, jdouble expDensity_j, jdouble linearStart_j, jdouble linearEnd_j)
			{
				EarthView::World::Graphic::FogMode mode = (EarthView::World::Graphic::FogMode) mode_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				Real expDensity = (Real) expDensity_j;
				Real linearStart = (Real) linearStart_j;
				Real linearEnd = (Real) linearEnd_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setFog(mode, colour, expDensity, linearStart, linearEnd);
				}
				else
				{
					pObjectX->_setFog(mode, colour, expDensity, linearStart, linearEnd);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setFog_1FogMode_1CColourValue_1Real_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setFog_FogMode_CColourValue_Real_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setFog_FogMode_CColourValue_Real_Real_Real_callback", "(IJDDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setFog_1FogMode_1CColourValue_1Real_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j, jlong colour_j, jdouble expDensity_j, jdouble linearStart_j, jdouble linearEnd_j)
			{
				EarthView::World::Graphic::FogMode mode = (EarthView::World::Graphic::FogMode) mode_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				Real expDensity = (Real) expDensity_j;
				Real linearStart = (Real) linearStart_j;
				Real linearEnd = (Real) linearEnd_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setFog(mode, colour, expDensity, linearStart, linearEnd);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setFog_1FogMode_1CColourValue_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j, jlong colour_j, jdouble expDensity_j, jdouble linearStart_j)
			{
				EarthView::World::Graphic::FogMode mode = (EarthView::World::Graphic::FogMode) mode_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				Real expDensity = (Real) expDensity_j;
				Real linearStart = (Real) linearStart_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setFog(mode, colour, expDensity, linearStart);
				}
				else
				{
					pObjectX->_setFog(mode, colour, expDensity, linearStart);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setFog_1FogMode_1CColourValue_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setFog_FogMode_CColourValue_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setFog_FogMode_CColourValue_Real_Real_callback", "(IJDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setFog_1FogMode_1CColourValue_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j, jlong colour_j, jdouble expDensity_j, jdouble linearStart_j)
			{
				EarthView::World::Graphic::FogMode mode = (EarthView::World::Graphic::FogMode) mode_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				Real expDensity = (Real) expDensity_j;
				Real linearStart = (Real) linearStart_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setFog(mode, colour, expDensity, linearStart);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setFog_1FogMode_1CColourValue_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j, jlong colour_j, jdouble expDensity_j)
			{
				EarthView::World::Graphic::FogMode mode = (EarthView::World::Graphic::FogMode) mode_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				Real expDensity = (Real) expDensity_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setFog(mode, colour, expDensity);
				}
				else
				{
					pObjectX->_setFog(mode, colour, expDensity);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setFog_1FogMode_1CColourValue_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setFog_FogMode_CColourValue_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setFog_FogMode_CColourValue_Real_callback", "(IJD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setFog_1FogMode_1CColourValue_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j, jlong colour_j, jdouble expDensity_j)
			{
				EarthView::World::Graphic::FogMode mode = (EarthView::World::Graphic::FogMode) mode_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				Real expDensity = (Real) expDensity_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setFog(mode, colour, expDensity);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setFog_1FogMode_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j, jlong colour_j)
			{
				EarthView::World::Graphic::FogMode mode = (EarthView::World::Graphic::FogMode) mode_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setFog(mode, colour);
				}
				else
				{
					pObjectX->_setFog(mode, colour);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setFog_1FogMode_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setFog_FogMode_CColourValue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setFog_FogMode_CColourValue_callback", "(IJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setFog_1FogMode_1CColourValue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j, jlong colour_j)
			{
				EarthView::World::Graphic::FogMode mode = (EarthView::World::Graphic::FogMode) mode_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setFog(mode, colour);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setFog_1FogMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Graphic::FogMode mode = (EarthView::World::Graphic::FogMode) mode_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setFog(mode);
				}
				else
				{
					pObjectX->_setFog(mode);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setFog_1FogMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setFog_FogMode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setFog_FogMode_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setFog_1FogMode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Graphic::FogMode mode = (EarthView::World::Graphic::FogMode) mode_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setFog(mode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setFog_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setFog();
				}
				else
				{
					pObjectX->_setFog();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setFog_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setFog_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setFog_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setFog_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setFog();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1beginGeometryCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_beginGeometryCount();
				}
				else
				{
					pObjectX->_beginGeometryCount();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1beginGeometryCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__beginGeometryCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_beginGeometryCount_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1beginGeometryCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_beginGeometryCount();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1getFaceCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_getFaceCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->_getFaceCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1getFaceCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getFaceCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getFaceCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1getFaceCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_getFaceCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1getBatchCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_getBatchCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->_getBatchCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1getBatchCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getBatchCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getBatchCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1getBatchCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_getBatchCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1getVertexCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_getVertexCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->_getVertexCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1getVertexCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getVertexCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getVertexCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem__1getVertexCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_getVertexCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_convertColourValue_1CColourValue_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong colour_j, jlong pDest_j)
			{
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				ev_uint32 *pDest = (ev_uint32*) pDest_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::convertColourValue(colour, pDest);
				}
				else
				{
					pObjectX->convertColourValue(colour, pDest);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1convertColourValue_1CColourValue_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_convertColourValue_CColourValue_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"convertColourValue_CColourValue_ev_uint32_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_convertColourValue_1CColourValue_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong colour_j, jlong pDest_j)
			{
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				ev_uint32 *pDest = (ev_uint32*) pDest_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::convertColourValue(colour, pDest);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_toColourValue_1ev_1uint32_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong srcColor_j, jlong colour_j)
			{
				ev_uint32 srcColor = (ev_uint32) srcColor_j;
				EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::toColourValue(srcColor, colour);
				}
				else
				{
					pObjectX->toColourValue(srcColor, colour);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1toColourValue_1ev_1uint32_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_toColourValue_ev_uint32_CColourValue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"toColourValue_ev_uint32_CColourValue_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_toColourValue_1ev_1uint32_1CColourValue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong srcColor_j, jlong colour_j)
			{
				ev_uint32 srcColor = (ev_uint32) srcColor_j;
				EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::toColourValue(srcColor, colour);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderSystem_getColourVertexElementType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					EarthView::World::Graphic::VertexElementType __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getColourVertexElementType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::VertexElementType __values1 = pObjectX->getColourVertexElementType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1getColourVertexElementType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getColourVertexElementType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getColourVertexElementType_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderSystem_getColourVertexElementType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				EarthView::World::Graphic::VertexElementType __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getColourVertexElementType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1convertProjectionMatrix_1CMatrix4_1CMatrix4_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong matrix_j, jlong dest_j, jboolean forGpuProgram_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &matrix = *(EarthView::World::Spatial::Math::CMatrix4*) matrix_j;
				EarthView::World::Spatial::Math::CMatrix4 &dest = *(EarthView::World::Spatial::Math::CMatrix4*) dest_j;
				ev_bool forGpuProgram = (ev_bool) forGpuProgram_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_convertProjectionMatrix(matrix, dest, forGpuProgram);
				}
				else
				{
					pObjectX->_convertProjectionMatrix(matrix, dest, forGpuProgram);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1convertProjectionMatrix_1CMatrix4_1CMatrix4_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__convertProjectionMatrix_CMatrix4_CMatrix4_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_convertProjectionMatrix_CMatrix4_CMatrix4_ev_bool_callback", "(JJZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1convertProjectionMatrix_1CMatrix4_1CMatrix4_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong matrix_j, jlong dest_j, jboolean forGpuProgram_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &matrix = *(EarthView::World::Spatial::Math::CMatrix4*) matrix_j;
				EarthView::World::Spatial::Math::CMatrix4 &dest = *(EarthView::World::Spatial::Math::CMatrix4*) dest_j;
				ev_bool forGpuProgram = (ev_bool) forGpuProgram_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_convertProjectionMatrix(matrix, dest, forGpuProgram);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1convertProjectionMatrix_1CMatrix4_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong matrix_j, jlong dest_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &matrix = *(EarthView::World::Spatial::Math::CMatrix4*) matrix_j;
				EarthView::World::Spatial::Math::CMatrix4 &dest = *(EarthView::World::Spatial::Math::CMatrix4*) dest_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_convertProjectionMatrix(matrix, dest);
				}
				else
				{
					pObjectX->_convertProjectionMatrix(matrix, dest);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1convertProjectionMatrix_1CMatrix4_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__convertProjectionMatrix_CMatrix4_CMatrix4_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_convertProjectionMatrix_CMatrix4_CMatrix4_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1convertProjectionMatrix_1CMatrix4_1CMatrix4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong matrix_j, jlong dest_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &matrix = *(EarthView::World::Spatial::Math::CMatrix4*) matrix_j;
				EarthView::World::Spatial::Math::CMatrix4 &dest = *(EarthView::World::Spatial::Math::CMatrix4*) dest_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_convertProjectionMatrix(matrix, dest);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1makeProjectionMatrix_1CRadian_1Real_1Real_1Real_1CMatrix4_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fovy_j, jdouble aspect_j, jdouble nearPlane_j, jdouble farPlane_j, jlong dest_j, jboolean forGpuProgram_j)
			{
				const EarthView::World::Spatial::Math::CRadian &fovy = *(EarthView::World::Spatial::Math::CRadian*) fovy_j;
				Real aspect = (Real) aspect_j;
				Real nearPlane = (Real) nearPlane_j;
				Real farPlane = (Real) farPlane_j;
				EarthView::World::Spatial::Math::CMatrix4 &dest = *(EarthView::World::Spatial::Math::CMatrix4*) dest_j;
				ev_bool forGpuProgram = (ev_bool) forGpuProgram_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_makeProjectionMatrix(fovy, aspect, nearPlane, farPlane, dest, forGpuProgram);
				}
				else
				{
					pObjectX->_makeProjectionMatrix(fovy, aspect, nearPlane, farPlane, dest, forGpuProgram);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1makeProjectionMatrix_1CRadian_1Real_1Real_1Real_1CMatrix4_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool_callback", "(JDDDJZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1makeProjectionMatrix_1CRadian_1Real_1Real_1Real_1CMatrix4_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fovy_j, jdouble aspect_j, jdouble nearPlane_j, jdouble farPlane_j, jlong dest_j, jboolean forGpuProgram_j)
			{
				const EarthView::World::Spatial::Math::CRadian &fovy = *(EarthView::World::Spatial::Math::CRadian*) fovy_j;
				Real aspect = (Real) aspect_j;
				Real nearPlane = (Real) nearPlane_j;
				Real farPlane = (Real) farPlane_j;
				EarthView::World::Spatial::Math::CMatrix4 &dest = *(EarthView::World::Spatial::Math::CMatrix4*) dest_j;
				ev_bool forGpuProgram = (ev_bool) forGpuProgram_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_makeProjectionMatrix(fovy, aspect, nearPlane, farPlane, dest, forGpuProgram);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1makeProjectionMatrix_1CRadian_1Real_1Real_1Real_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fovy_j, jdouble aspect_j, jdouble nearPlane_j, jdouble farPlane_j, jlong dest_j)
			{
				const EarthView::World::Spatial::Math::CRadian &fovy = *(EarthView::World::Spatial::Math::CRadian*) fovy_j;
				Real aspect = (Real) aspect_j;
				Real nearPlane = (Real) nearPlane_j;
				Real farPlane = (Real) farPlane_j;
				EarthView::World::Spatial::Math::CMatrix4 &dest = *(EarthView::World::Spatial::Math::CMatrix4*) dest_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_makeProjectionMatrix(fovy, aspect, nearPlane, farPlane, dest);
				}
				else
				{
					pObjectX->_makeProjectionMatrix(fovy, aspect, nearPlane, farPlane, dest);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1makeProjectionMatrix_1CRadian_1Real_1Real_1Real_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_makeProjectionMatrix_CRadian_Real_Real_Real_CMatrix4_callback", "(JDDDJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1makeProjectionMatrix_1CRadian_1Real_1Real_1Real_1CMatrix4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fovy_j, jdouble aspect_j, jdouble nearPlane_j, jdouble farPlane_j, jlong dest_j)
			{
				const EarthView::World::Spatial::Math::CRadian &fovy = *(EarthView::World::Spatial::Math::CRadian*) fovy_j;
				Real aspect = (Real) aspect_j;
				Real nearPlane = (Real) nearPlane_j;
				Real farPlane = (Real) farPlane_j;
				EarthView::World::Spatial::Math::CMatrix4 &dest = *(EarthView::World::Spatial::Math::CMatrix4*) dest_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_makeProjectionMatrix(fovy, aspect, nearPlane, farPlane, dest);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1makeProjectionMatrix_1Real_1Real_1Real_1Real_1Real_1Real_1CMatrix4_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble left_j, jdouble right_j, jdouble bottom_j, jdouble top_j, jdouble nearPlane_j, jdouble farPlane_j, jlong dest_j, jboolean forGpuProgram_j)
			{
				Real left = (Real) left_j;
				Real right = (Real) right_j;
				Real bottom = (Real) bottom_j;
				Real top = (Real) top_j;
				Real nearPlane = (Real) nearPlane_j;
				Real farPlane = (Real) farPlane_j;
				EarthView::World::Spatial::Math::CMatrix4 &dest = *(EarthView::World::Spatial::Math::CMatrix4*) dest_j;
				ev_bool forGpuProgram = (ev_bool) forGpuProgram_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_makeProjectionMatrix(left, right, bottom, top, nearPlane, farPlane, dest, forGpuProgram);
				}
				else
				{
					pObjectX->_makeProjectionMatrix(left, right, bottom, top, nearPlane, farPlane, dest, forGpuProgram);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1makeProjectionMatrix_1Real_1Real_1Real_1Real_1Real_1Real_1CMatrix4_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool_callback", "(DDDDDDJZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1makeProjectionMatrix_1Real_1Real_1Real_1Real_1Real_1Real_1CMatrix4_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble left_j, jdouble right_j, jdouble bottom_j, jdouble top_j, jdouble nearPlane_j, jdouble farPlane_j, jlong dest_j, jboolean forGpuProgram_j)
			{
				Real left = (Real) left_j;
				Real right = (Real) right_j;
				Real bottom = (Real) bottom_j;
				Real top = (Real) top_j;
				Real nearPlane = (Real) nearPlane_j;
				Real farPlane = (Real) farPlane_j;
				EarthView::World::Spatial::Math::CMatrix4 &dest = *(EarthView::World::Spatial::Math::CMatrix4*) dest_j;
				ev_bool forGpuProgram = (ev_bool) forGpuProgram_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_makeProjectionMatrix(left, right, bottom, top, nearPlane, farPlane, dest, forGpuProgram);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1makeProjectionMatrix_1Real_1Real_1Real_1Real_1Real_1Real_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble left_j, jdouble right_j, jdouble bottom_j, jdouble top_j, jdouble nearPlane_j, jdouble farPlane_j, jlong dest_j)
			{
				Real left = (Real) left_j;
				Real right = (Real) right_j;
				Real bottom = (Real) bottom_j;
				Real top = (Real) top_j;
				Real nearPlane = (Real) nearPlane_j;
				Real farPlane = (Real) farPlane_j;
				EarthView::World::Spatial::Math::CMatrix4 &dest = *(EarthView::World::Spatial::Math::CMatrix4*) dest_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_makeProjectionMatrix(left, right, bottom, top, nearPlane, farPlane, dest);
				}
				else
				{
					pObjectX->_makeProjectionMatrix(left, right, bottom, top, nearPlane, farPlane, dest);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1makeProjectionMatrix_1Real_1Real_1Real_1Real_1Real_1Real_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_makeProjectionMatrix_Real_Real_Real_Real_Real_Real_CMatrix4_callback", "(DDDDDDJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1makeProjectionMatrix_1Real_1Real_1Real_1Real_1Real_1Real_1CMatrix4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble left_j, jdouble right_j, jdouble bottom_j, jdouble top_j, jdouble nearPlane_j, jdouble farPlane_j, jlong dest_j)
			{
				Real left = (Real) left_j;
				Real right = (Real) right_j;
				Real bottom = (Real) bottom_j;
				Real top = (Real) top_j;
				Real nearPlane = (Real) nearPlane_j;
				Real farPlane = (Real) farPlane_j;
				EarthView::World::Spatial::Math::CMatrix4 &dest = *(EarthView::World::Spatial::Math::CMatrix4*) dest_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_makeProjectionMatrix(left, right, bottom, top, nearPlane, farPlane, dest);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1makeOrthoMatrix_1CRadian_1Real_1Real_1Real_1CMatrix4_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fovy_j, jdouble aspect_j, jdouble nearPlane_j, jdouble farPlane_j, jlong dest_j, jboolean forGpuProgram_j)
			{
				const EarthView::World::Spatial::Math::CRadian &fovy = *(EarthView::World::Spatial::Math::CRadian*) fovy_j;
				Real aspect = (Real) aspect_j;
				Real nearPlane = (Real) nearPlane_j;
				Real farPlane = (Real) farPlane_j;
				EarthView::World::Spatial::Math::CMatrix4 &dest = *(EarthView::World::Spatial::Math::CMatrix4*) dest_j;
				ev_bool forGpuProgram = (ev_bool) forGpuProgram_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_makeOrthoMatrix(fovy, aspect, nearPlane, farPlane, dest, forGpuProgram);
				}
				else
				{
					pObjectX->_makeOrthoMatrix(fovy, aspect, nearPlane, farPlane, dest, forGpuProgram);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1makeOrthoMatrix_1CRadian_1Real_1Real_1Real_1CMatrix4_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_ev_bool_callback", "(JDDDJZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1makeOrthoMatrix_1CRadian_1Real_1Real_1Real_1CMatrix4_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fovy_j, jdouble aspect_j, jdouble nearPlane_j, jdouble farPlane_j, jlong dest_j, jboolean forGpuProgram_j)
			{
				const EarthView::World::Spatial::Math::CRadian &fovy = *(EarthView::World::Spatial::Math::CRadian*) fovy_j;
				Real aspect = (Real) aspect_j;
				Real nearPlane = (Real) nearPlane_j;
				Real farPlane = (Real) farPlane_j;
				EarthView::World::Spatial::Math::CMatrix4 &dest = *(EarthView::World::Spatial::Math::CMatrix4*) dest_j;
				ev_bool forGpuProgram = (ev_bool) forGpuProgram_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_makeOrthoMatrix(fovy, aspect, nearPlane, farPlane, dest, forGpuProgram);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1makeOrthoMatrix_1CRadian_1Real_1Real_1Real_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fovy_j, jdouble aspect_j, jdouble nearPlane_j, jdouble farPlane_j, jlong dest_j)
			{
				const EarthView::World::Spatial::Math::CRadian &fovy = *(EarthView::World::Spatial::Math::CRadian*) fovy_j;
				Real aspect = (Real) aspect_j;
				Real nearPlane = (Real) nearPlane_j;
				Real farPlane = (Real) farPlane_j;
				EarthView::World::Spatial::Math::CMatrix4 &dest = *(EarthView::World::Spatial::Math::CMatrix4*) dest_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_makeOrthoMatrix(fovy, aspect, nearPlane, farPlane, dest);
				}
				else
				{
					pObjectX->_makeOrthoMatrix(fovy, aspect, nearPlane, farPlane, dest);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1makeOrthoMatrix_1CRadian_1Real_1Real_1Real_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_makeOrthoMatrix_CRadian_Real_Real_Real_CMatrix4_callback", "(JDDDJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1makeOrthoMatrix_1CRadian_1Real_1Real_1Real_1CMatrix4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fovy_j, jdouble aspect_j, jdouble nearPlane_j, jdouble farPlane_j, jlong dest_j)
			{
				const EarthView::World::Spatial::Math::CRadian &fovy = *(EarthView::World::Spatial::Math::CRadian*) fovy_j;
				Real aspect = (Real) aspect_j;
				Real nearPlane = (Real) nearPlane_j;
				Real farPlane = (Real) farPlane_j;
				EarthView::World::Spatial::Math::CMatrix4 &dest = *(EarthView::World::Spatial::Math::CMatrix4*) dest_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_makeOrthoMatrix(fovy, aspect, nearPlane, farPlane, dest);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1applyObliqueDepthProjection_1CMatrix4_1CPlane_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong matrix_j, jlong plane_j, jboolean forGpuProgram_j)
			{
				EarthView::World::Spatial::Math::CMatrix4 &matrix = *(EarthView::World::Spatial::Math::CMatrix4*) matrix_j;
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				ev_bool forGpuProgram = (ev_bool) forGpuProgram_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_applyObliqueDepthProjection(matrix, plane, forGpuProgram);
				}
				else
				{
					pObjectX->_applyObliqueDepthProjection(matrix, plane, forGpuProgram);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1applyObliqueDepthProjection_1CMatrix4_1CPlane_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__applyObliqueDepthProjection_CMatrix4_CPlane_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_applyObliqueDepthProjection_CMatrix4_CPlane_ev_bool_callback", "(JJZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1applyObliqueDepthProjection_1CMatrix4_1CPlane_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong matrix_j, jlong plane_j, jboolean forGpuProgram_j)
			{
				EarthView::World::Spatial::Math::CMatrix4 &matrix = *(EarthView::World::Spatial::Math::CMatrix4*) matrix_j;
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				ev_bool forGpuProgram = (ev_bool) forGpuProgram_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_applyObliqueDepthProjection(matrix, plane, forGpuProgram);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setPolygonMode_1PolygonMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j)
			{
				EarthView::World::Graphic::PolygonMode level = (EarthView::World::Graphic::PolygonMode) level_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setPolygonMode(level);
				}
				else
				{
					pObjectX->_setPolygonMode(level);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setPolygonMode_1PolygonMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setPolygonMode_PolygonMode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setPolygonMode_PolygonMode_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setPolygonMode_1PolygonMode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j)
			{
				EarthView::World::Graphic::PolygonMode level = (EarthView::World::Graphic::PolygonMode) level_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setPolygonMode(level);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setStencilCheckEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setStencilCheckEnabled(enabled);
				}
				else
				{
					pObjectX->setStencilCheckEnabled(enabled);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setStencilCheckEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setStencilCheckEnabled_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setStencilCheckEnabled_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setStencilCheckEnabled_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setStencilCheckEnabled(enabled);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setStencilBufferParams_1CompareFunction_1ev_1uint32_1ev_1uint32_1StencilOperation_1StencilOperation_1StencilOperation_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint func_j, jlong refValue_j, jlong mask_j, jint stencilFailOp_j, jint depthFailOp_j, jint passOp_j, jboolean twoSidedOperation_j)
			{
				EarthView::World::Graphic::CompareFunction func = (EarthView::World::Graphic::CompareFunction) func_j;
				ev_uint32 refValue = (ev_uint32) refValue_j;
				ev_uint32 mask = (ev_uint32) mask_j;
				StencilOperation stencilFailOp = (StencilOperation) stencilFailOp_j;
				StencilOperation depthFailOp = (StencilOperation) depthFailOp_j;
				StencilOperation passOp = (StencilOperation) passOp_j;
				ev_bool twoSidedOperation = (ev_bool) twoSidedOperation_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams(func, refValue, mask, stencilFailOp, depthFailOp, passOp, twoSidedOperation);
				}
				else
				{
					pObjectX->setStencilBufferParams(func, refValue, mask, stencilFailOp, depthFailOp, passOp, twoSidedOperation);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setStencilBufferParams_1CompareFunction_1ev_1uint32_1ev_1uint32_1StencilOperation_1StencilOperation_1StencilOperation_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool_callback", "(IJJIIIZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setStencilBufferParams_1CompareFunction_1ev_1uint32_1ev_1uint32_1StencilOperation_1StencilOperation_1StencilOperation_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint func_j, jlong refValue_j, jlong mask_j, jint stencilFailOp_j, jint depthFailOp_j, jint passOp_j, jboolean twoSidedOperation_j)
			{
				EarthView::World::Graphic::CompareFunction func = (EarthView::World::Graphic::CompareFunction) func_j;
				ev_uint32 refValue = (ev_uint32) refValue_j;
				ev_uint32 mask = (ev_uint32) mask_j;
				StencilOperation stencilFailOp = (StencilOperation) stencilFailOp_j;
				StencilOperation depthFailOp = (StencilOperation) depthFailOp_j;
				StencilOperation passOp = (StencilOperation) passOp_j;
				ev_bool twoSidedOperation = (ev_bool) twoSidedOperation_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams(func, refValue, mask, stencilFailOp, depthFailOp, passOp, twoSidedOperation);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setStencilBufferParams_1CompareFunction_1ev_1uint32_1ev_1uint32_1StencilOperation_1StencilOperation_1StencilOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint func_j, jlong refValue_j, jlong mask_j, jint stencilFailOp_j, jint depthFailOp_j, jint passOp_j)
			{
				EarthView::World::Graphic::CompareFunction func = (EarthView::World::Graphic::CompareFunction) func_j;
				ev_uint32 refValue = (ev_uint32) refValue_j;
				ev_uint32 mask = (ev_uint32) mask_j;
				StencilOperation stencilFailOp = (StencilOperation) stencilFailOp_j;
				StencilOperation depthFailOp = (StencilOperation) depthFailOp_j;
				StencilOperation passOp = (StencilOperation) passOp_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams(func, refValue, mask, stencilFailOp, depthFailOp, passOp);
				}
				else
				{
					pObjectX->setStencilBufferParams(func, refValue, mask, stencilFailOp, depthFailOp, passOp);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setStencilBufferParams_1CompareFunction_1ev_1uint32_1ev_1uint32_1StencilOperation_1StencilOperation_1StencilOperation(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_callback", "(IJJIII)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setStencilBufferParams_1CompareFunction_1ev_1uint32_1ev_1uint32_1StencilOperation_1StencilOperation_1StencilOperation_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint func_j, jlong refValue_j, jlong mask_j, jint stencilFailOp_j, jint depthFailOp_j, jint passOp_j)
			{
				EarthView::World::Graphic::CompareFunction func = (EarthView::World::Graphic::CompareFunction) func_j;
				ev_uint32 refValue = (ev_uint32) refValue_j;
				ev_uint32 mask = (ev_uint32) mask_j;
				StencilOperation stencilFailOp = (StencilOperation) stencilFailOp_j;
				StencilOperation depthFailOp = (StencilOperation) depthFailOp_j;
				StencilOperation passOp = (StencilOperation) passOp_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams(func, refValue, mask, stencilFailOp, depthFailOp, passOp);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setStencilBufferParams_1CompareFunction_1ev_1uint32_1ev_1uint32_1StencilOperation_1StencilOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint func_j, jlong refValue_j, jlong mask_j, jint stencilFailOp_j, jint depthFailOp_j)
			{
				EarthView::World::Graphic::CompareFunction func = (EarthView::World::Graphic::CompareFunction) func_j;
				ev_uint32 refValue = (ev_uint32) refValue_j;
				ev_uint32 mask = (ev_uint32) mask_j;
				StencilOperation stencilFailOp = (StencilOperation) stencilFailOp_j;
				StencilOperation depthFailOp = (StencilOperation) depthFailOp_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams(func, refValue, mask, stencilFailOp, depthFailOp);
				}
				else
				{
					pObjectX->setStencilBufferParams(func, refValue, mask, stencilFailOp, depthFailOp);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setStencilBufferParams_1CompareFunction_1ev_1uint32_1ev_1uint32_1StencilOperation_1StencilOperation(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_callback", "(IJJII)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setStencilBufferParams_1CompareFunction_1ev_1uint32_1ev_1uint32_1StencilOperation_1StencilOperation_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint func_j, jlong refValue_j, jlong mask_j, jint stencilFailOp_j, jint depthFailOp_j)
			{
				EarthView::World::Graphic::CompareFunction func = (EarthView::World::Graphic::CompareFunction) func_j;
				ev_uint32 refValue = (ev_uint32) refValue_j;
				ev_uint32 mask = (ev_uint32) mask_j;
				StencilOperation stencilFailOp = (StencilOperation) stencilFailOp_j;
				StencilOperation depthFailOp = (StencilOperation) depthFailOp_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams(func, refValue, mask, stencilFailOp, depthFailOp);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setStencilBufferParams_1CompareFunction_1ev_1uint32_1ev_1uint32_1StencilOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint func_j, jlong refValue_j, jlong mask_j, jint stencilFailOp_j)
			{
				EarthView::World::Graphic::CompareFunction func = (EarthView::World::Graphic::CompareFunction) func_j;
				ev_uint32 refValue = (ev_uint32) refValue_j;
				ev_uint32 mask = (ev_uint32) mask_j;
				StencilOperation stencilFailOp = (StencilOperation) stencilFailOp_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams(func, refValue, mask, stencilFailOp);
				}
				else
				{
					pObjectX->setStencilBufferParams(func, refValue, mask, stencilFailOp);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setStencilBufferParams_1CompareFunction_1ev_1uint32_1ev_1uint32_1StencilOperation(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_StencilOperation_callback", "(IJJI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setStencilBufferParams_1CompareFunction_1ev_1uint32_1ev_1uint32_1StencilOperation_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint func_j, jlong refValue_j, jlong mask_j, jint stencilFailOp_j)
			{
				EarthView::World::Graphic::CompareFunction func = (EarthView::World::Graphic::CompareFunction) func_j;
				ev_uint32 refValue = (ev_uint32) refValue_j;
				ev_uint32 mask = (ev_uint32) mask_j;
				StencilOperation stencilFailOp = (StencilOperation) stencilFailOp_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams(func, refValue, mask, stencilFailOp);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setStencilBufferParams_1CompareFunction_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint func_j, jlong refValue_j, jlong mask_j)
			{
				EarthView::World::Graphic::CompareFunction func = (EarthView::World::Graphic::CompareFunction) func_j;
				ev_uint32 refValue = (ev_uint32) refValue_j;
				ev_uint32 mask = (ev_uint32) mask_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams(func, refValue, mask);
				}
				else
				{
					pObjectX->setStencilBufferParams(func, refValue, mask);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setStencilBufferParams_1CompareFunction_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setStencilBufferParams_CompareFunction_ev_uint32_ev_uint32_callback", "(IJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setStencilBufferParams_1CompareFunction_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint func_j, jlong refValue_j, jlong mask_j)
			{
				EarthView::World::Graphic::CompareFunction func = (EarthView::World::Graphic::CompareFunction) func_j;
				ev_uint32 refValue = (ev_uint32) refValue_j;
				ev_uint32 mask = (ev_uint32) mask_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams(func, refValue, mask);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setStencilBufferParams_1CompareFunction_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint func_j, jlong refValue_j)
			{
				EarthView::World::Graphic::CompareFunction func = (EarthView::World::Graphic::CompareFunction) func_j;
				ev_uint32 refValue = (ev_uint32) refValue_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams(func, refValue);
				}
				else
				{
					pObjectX->setStencilBufferParams(func, refValue);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setStencilBufferParams_1CompareFunction_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setStencilBufferParams_CompareFunction_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setStencilBufferParams_CompareFunction_ev_uint32_callback", "(IJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setStencilBufferParams_1CompareFunction_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint func_j, jlong refValue_j)
			{
				EarthView::World::Graphic::CompareFunction func = (EarthView::World::Graphic::CompareFunction) func_j;
				ev_uint32 refValue = (ev_uint32) refValue_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams(func, refValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setStencilBufferParams_1CompareFunction(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint func_j)
			{
				EarthView::World::Graphic::CompareFunction func = (EarthView::World::Graphic::CompareFunction) func_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams(func);
				}
				else
				{
					pObjectX->setStencilBufferParams(func);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setStencilBufferParams_1CompareFunction(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setStencilBufferParams_CompareFunction_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setStencilBufferParams_CompareFunction_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setStencilBufferParams_1CompareFunction_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint func_j)
			{
				EarthView::World::Graphic::CompareFunction func = (EarthView::World::Graphic::CompareFunction) func_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams(func);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setStencilBufferParams_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams();
				}
				else
				{
					pObjectX->setStencilBufferParams();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setStencilBufferParams_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setStencilBufferParams_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setStencilBufferParams_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setStencilBufferParams_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setVertexDeclaration_1CVertexDeclaration(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong decl_j)
			{
				EarthView::World::Graphic::CVertexDeclaration *decl = (EarthView::World::Graphic::CVertexDeclaration*) decl_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setVertexDeclaration(decl);
				}
				else
				{
					pObjectX->setVertexDeclaration(decl);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setVertexDeclaration_1CVertexDeclaration(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setVertexDeclaration_CVertexDeclaration_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setVertexDeclaration_CVertexDeclaration_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setVertexDeclaration_1CVertexDeclaration_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong decl_j)
			{
				EarthView::World::Graphic::CVertexDeclaration *decl = (EarthView::World::Graphic::CVertexDeclaration*) decl_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setVertexDeclaration(decl);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setVertexBufferBinding_1CVertexBufferBinding(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong binding_j)
			{
				EarthView::World::Graphic::CVertexBufferBinding *binding = (EarthView::World::Graphic::CVertexBufferBinding*) binding_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setVertexBufferBinding(binding);
				}
				else
				{
					pObjectX->setVertexBufferBinding(binding);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setVertexBufferBinding_1CVertexBufferBinding(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setVertexBufferBinding_CVertexBufferBinding_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setVertexBufferBinding_CVertexBufferBinding_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setVertexBufferBinding_1CVertexBufferBinding_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong binding_j)
			{
				EarthView::World::Graphic::CVertexBufferBinding *binding = (EarthView::World::Graphic::CVertexBufferBinding*) binding_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setVertexBufferBinding(binding);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setNormaliseNormals_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean normalise_j)
			{
				ev_bool normalise = (ev_bool) normalise_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setNormaliseNormals(normalise);
				}
				else
				{
					pObjectX->setNormaliseNormals(normalise);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setNormaliseNormals_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setNormaliseNormals_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setNormaliseNormals_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setNormaliseNormals_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean normalise_j)
			{
				ev_bool normalise = (ev_bool) normalise_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setNormaliseNormals(normalise);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1render_1CRenderOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong op_j)
			{
				const EarthView::World::Graphic::CRenderOperation &op = *(EarthView::World::Graphic::CRenderOperation*) op_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_render(op);
				}
				else
				{
					pObjectX->_render(op);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1render_1CRenderOperation(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__render_CRenderOperation_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_render_CRenderOperation_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1render_1CRenderOperation_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong op_j)
			{
				const EarthView::World::Graphic::CRenderOperation &op = *(EarthView::World::Graphic::CRenderOperation*) op_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_render(op);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_getCapabilities_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				const EarthView::World::Graphic::CRenderSystemCapabilities* __values1 = pObjectX->getCapabilities();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_getDriverVersion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					const EarthView::World::Graphic::DriverVersion& __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getDriverVersion();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::DriverVersion& __values1 = pObjectX->getDriverVersion();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1getDriverVersion_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDriverVersion_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDriverVersion_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_getDriverVersion_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				const EarthView::World::Graphic::DriverVersion& __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getDriverVersion();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_getActD3D9Device_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					void* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getActD3D9Device();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					void* __values1 = pObjectX->getActD3D9Device();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1getActD3D9Device_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getActD3D9Device_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getActD3D9Device_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_getActD3D9Device_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				void* __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getActD3D9Device();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_RenderSystem__1getDefaultViewportMaterialScheme_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_getDefaultViewportMaterialScheme();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->_getDefaultViewportMaterialScheme();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1getDefaultViewportMaterialScheme_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getDefaultViewportMaterialScheme_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getDefaultViewportMaterialScheme_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_RenderSystem__1getDefaultViewportMaterialScheme_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::_getDefaultViewportMaterialScheme();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_bindGpuProgram_1CGpuProgram(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_prg_j)
			{
				EarthView::World::Graphic::CGpuProgram *ref_prg = (EarthView::World::Graphic::CGpuProgram*) ref_prg_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::bindGpuProgram(ref_prg);
				}
				else
				{
					pObjectX->bindGpuProgram(ref_prg);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1bindGpuProgram_1CGpuProgram(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_bindGpuProgram_CGpuProgram_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"bindGpuProgram_CGpuProgram_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_bindGpuProgram_1CGpuProgram_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_prg_j)
			{
				EarthView::World::Graphic::CGpuProgram *ref_prg = (EarthView::World::Graphic::CGpuProgram*) ref_prg_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::bindGpuProgram(ref_prg);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_bindGpuProgramParameters_1GpuProgramType_1GpuProgramParametersSharedPtr_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint gptype_j, jlong params_j, jint variabilityMask_j)
			{
				EarthView::World::Graphic::GpuProgramType gptype = (EarthView::World::Graphic::GpuProgramType) gptype_j;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr params = *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*) params_j;
				ev_uint16 variabilityMask = (ev_uint16) variabilityMask_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::bindGpuProgramParameters(gptype, params, variabilityMask);
				}
				else
				{
					pObjectX->bindGpuProgramParameters(gptype, params, variabilityMask);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1bindGpuProgramParameters_1GpuProgramType_1GpuProgramParametersSharedPtr_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_bindGpuProgramParameters_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"bindGpuProgramParameters_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16_callback", "(IJI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_bindGpuProgramParameters_1GpuProgramType_1GpuProgramParametersSharedPtr_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint gptype_j, jlong params_j, jint variabilityMask_j)
			{
				EarthView::World::Graphic::GpuProgramType gptype = (EarthView::World::Graphic::GpuProgramType) gptype_j;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr params = *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*) params_j;
				ev_uint16 variabilityMask = (ev_uint16) variabilityMask_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::bindGpuProgramParameters(gptype, params, variabilityMask);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_bindGpuProgramPassIterationParameters_1GpuProgramType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint gptype_j)
			{
				EarthView::World::Graphic::GpuProgramType gptype = (EarthView::World::Graphic::GpuProgramType) gptype_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::bindGpuProgramPassIterationParameters(gptype);
				}
				else
				{
					pObjectX->bindGpuProgramPassIterationParameters(gptype);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1bindGpuProgramPassIterationParameters_1GpuProgramType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_bindGpuProgramPassIterationParameters_GpuProgramType_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"bindGpuProgramPassIterationParameters_GpuProgramType_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_bindGpuProgramPassIterationParameters_1GpuProgramType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint gptype_j)
			{
				EarthView::World::Graphic::GpuProgramType gptype = (EarthView::World::Graphic::GpuProgramType) gptype_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::bindGpuProgramPassIterationParameters(gptype);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_unbindGpuProgram_1GpuProgramType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint gptype_j)
			{
				EarthView::World::Graphic::GpuProgramType gptype = (EarthView::World::Graphic::GpuProgramType) gptype_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::unbindGpuProgram(gptype);
				}
				else
				{
					pObjectX->unbindGpuProgram(gptype);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1unbindGpuProgram_1GpuProgramType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unbindGpuProgram_GpuProgramType_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unbindGpuProgram_GpuProgramType_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_unbindGpuProgram_1GpuProgramType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint gptype_j)
			{
				EarthView::World::Graphic::GpuProgramType gptype = (EarthView::World::Graphic::GpuProgramType) gptype_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::unbindGpuProgram(gptype);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderSystem_isGpuProgramBound_1GpuProgramType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint gptype_j)
			{
				EarthView::World::Graphic::GpuProgramType gptype = (EarthView::World::Graphic::GpuProgramType) gptype_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::isGpuProgramBound(gptype);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isGpuProgramBound(gptype);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1isGpuProgramBound_1GpuProgramType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isGpuProgramBound_GpuProgramType_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isGpuProgramBound_GpuProgramType_callback", "(I)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderSystem_isGpuProgramBound_1GpuProgramType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint gptype_j)
			{
				EarthView::World::Graphic::GpuProgramType gptype = (EarthView::World::Graphic::GpuProgramType) gptype_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::isGpuProgramBound(gptype);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setClipPlanes_1PlaneList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong clipPlanes_j)
			{
				const EarthView::World::Spatial::Math::PlaneList &clipPlanes = *(EarthView::World::Spatial::Math::PlaneList*) clipPlanes_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setClipPlanes(clipPlanes);
				}
				else
				{
					pObjectX->setClipPlanes(clipPlanes);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setClipPlanes_1PlaneList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setClipPlanes_PlaneList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setClipPlanes_PlaneList_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setClipPlanes_1PlaneList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong clipPlanes_j)
			{
				const EarthView::World::Spatial::Math::PlaneList &clipPlanes = *(EarthView::World::Spatial::Math::PlaneList*) clipPlanes_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setClipPlanes(clipPlanes);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_addClipPlane_1CPlane(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong p_j)
			{
				const EarthView::World::Spatial::Math::CPlane &p = *(EarthView::World::Spatial::Math::CPlane*) p_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::addClipPlane(p);
				}
				else
				{
					pObjectX->addClipPlane(p);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1addClipPlane_1CPlane(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addClipPlane_CPlane_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addClipPlane_CPlane_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_addClipPlane_1CPlane_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong p_j)
			{
				const EarthView::World::Spatial::Math::CPlane &p = *(EarthView::World::Spatial::Math::CPlane*) p_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::addClipPlane(p);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_addClipPlane_1Real_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble A_j, jdouble B_j, jdouble C_j, jdouble D_j)
			{
				Real A = (Real) A_j;
				Real B = (Real) B_j;
				Real C = (Real) C_j;
				Real D = (Real) D_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::addClipPlane(A, B, C, D);
				}
				else
				{
					pObjectX->addClipPlane(A, B, C, D);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1addClipPlane_1Real_1Real_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addClipPlane_Real_Real_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addClipPlane_Real_Real_Real_Real_callback", "(DDDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_addClipPlane_1Real_1Real_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble A_j, jdouble B_j, jdouble C_j, jdouble D_j)
			{
				Real A = (Real) A_j;
				Real B = (Real) B_j;
				Real C = (Real) C_j;
				Real D = (Real) D_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::addClipPlane(A, B, C, D);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_resetClipPlanes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::resetClipPlanes();
				}
				else
				{
					pObjectX->resetClipPlanes();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1resetClipPlanes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resetClipPlanes_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resetClipPlanes_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_resetClipPlanes_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::resetClipPlanes();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1initRenderTargets_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_initRenderTargets();
				}
				else
				{
					pObjectX->_initRenderTargets();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1initRenderTargets_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__initRenderTargets_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_initRenderTargets_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1initRenderTargets_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_initRenderTargets();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1notifyCameraRemoved_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j)
			{
				const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_notifyCameraRemoved(cam);
				}
				else
				{
					pObjectX->_notifyCameraRemoved(cam);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1notifyCameraRemoved_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyCameraRemoved_CCamera_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyCameraRemoved_CCamera_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1notifyCameraRemoved_1CCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j)
			{
				const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_notifyCameraRemoved(cam);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1updateAllRenderTargets_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean swapBuffers_j)
			{
				ev_bool swapBuffers = (ev_bool) swapBuffers_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_updateAllRenderTargets(swapBuffers);
				}
				else
				{
					pObjectX->_updateAllRenderTargets(swapBuffers);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1updateAllRenderTargets_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__updateAllRenderTargets_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_updateAllRenderTargets_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1updateAllRenderTargets_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean swapBuffers_j)
			{
				ev_bool swapBuffers = (ev_bool) swapBuffers_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_updateAllRenderTargets(swapBuffers);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1updateAllRenderTargets_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_updateAllRenderTargets();
				}
				else
				{
					pObjectX->_updateAllRenderTargets();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1updateAllRenderTargets_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__updateAllRenderTargets_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_updateAllRenderTargets_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1updateAllRenderTargets_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_updateAllRenderTargets();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1swapAllRenderTargetBuffers_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean waitForVsync_j)
			{
				ev_bool waitForVsync = (ev_bool) waitForVsync_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_swapAllRenderTargetBuffers(waitForVsync);
				}
				else
				{
					pObjectX->_swapAllRenderTargetBuffers(waitForVsync);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1swapAllRenderTargetBuffers_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__swapAllRenderTargetBuffers_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_swapAllRenderTargetBuffers_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1swapAllRenderTargetBuffers_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean waitForVsync_j)
			{
				ev_bool waitForVsync = (ev_bool) waitForVsync_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_swapAllRenderTargetBuffers(waitForVsync);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1swapAllRenderTargetBuffers_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_swapAllRenderTargetBuffers();
				}
				else
				{
					pObjectX->_swapAllRenderTargetBuffers();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1swapAllRenderTargetBuffers_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__swapAllRenderTargetBuffers_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_swapAllRenderTargetBuffers_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1swapAllRenderTargetBuffers_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_swapAllRenderTargetBuffers();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setInvertVertexWinding_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean invert_j)
			{
				ev_bool invert = (ev_bool) invert_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setInvertVertexWinding(invert);
				}
				else
				{
					pObjectX->setInvertVertexWinding(invert);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setInvertVertexWinding_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setInvertVertexWinding_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setInvertVertexWinding_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setInvertVertexWinding_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean invert_j)
			{
				ev_bool invert = (ev_bool) invert_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setInvertVertexWinding(invert);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderSystem_getInvertVertexWinding_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getInvertVertexWinding();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getInvertVertexWinding();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1getInvertVertexWinding_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInvertVertexWinding_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInvertVertexWinding_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderSystem_getInvertVertexWinding_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getInvertVertexWinding();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setScissorTest_1ev_1bool_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jlong left_j, jlong top_j, jlong right_j, jlong bottom_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				ev_size_t left = (ev_size_t) left_j;
				ev_size_t top = (ev_size_t) top_j;
				ev_size_t right = (ev_size_t) right_j;
				ev_size_t bottom = (ev_size_t) bottom_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setScissorTest(enabled, left, top, right, bottom);
				}
				else
				{
					pObjectX->setScissorTest(enabled, left, top, right, bottom);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setScissorTest_1ev_1bool_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t_callback", "(ZJJJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setScissorTest_1ev_1bool_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jlong left_j, jlong top_j, jlong right_j, jlong bottom_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				ev_size_t left = (ev_size_t) left_j;
				ev_size_t top = (ev_size_t) top_j;
				ev_size_t right = (ev_size_t) right_j;
				ev_size_t bottom = (ev_size_t) bottom_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setScissorTest(enabled, left, top, right, bottom);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setScissorTest_1ev_1bool_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jlong left_j, jlong top_j, jlong right_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				ev_size_t left = (ev_size_t) left_j;
				ev_size_t top = (ev_size_t) top_j;
				ev_size_t right = (ev_size_t) right_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setScissorTest(enabled, left, top, right);
				}
				else
				{
					pObjectX->setScissorTest(enabled, left, top, right);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setScissorTest_1ev_1bool_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setScissorTest_ev_bool_ev_size_t_ev_size_t_ev_size_t_callback", "(ZJJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setScissorTest_1ev_1bool_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jlong left_j, jlong top_j, jlong right_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				ev_size_t left = (ev_size_t) left_j;
				ev_size_t top = (ev_size_t) top_j;
				ev_size_t right = (ev_size_t) right_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setScissorTest(enabled, left, top, right);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setScissorTest_1ev_1bool_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jlong left_j, jlong top_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				ev_size_t left = (ev_size_t) left_j;
				ev_size_t top = (ev_size_t) top_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setScissorTest(enabled, left, top);
				}
				else
				{
					pObjectX->setScissorTest(enabled, left, top);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setScissorTest_1ev_1bool_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setScissorTest_ev_bool_ev_size_t_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setScissorTest_ev_bool_ev_size_t_ev_size_t_callback", "(ZJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setScissorTest_1ev_1bool_1ev_1size_1t_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jlong left_j, jlong top_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				ev_size_t left = (ev_size_t) left_j;
				ev_size_t top = (ev_size_t) top_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setScissorTest(enabled, left, top);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setScissorTest_1ev_1bool_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jlong left_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				ev_size_t left = (ev_size_t) left_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setScissorTest(enabled, left);
				}
				else
				{
					pObjectX->setScissorTest(enabled, left);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setScissorTest_1ev_1bool_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setScissorTest_ev_bool_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setScissorTest_ev_bool_ev_size_t_callback", "(ZJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setScissorTest_1ev_1bool_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jlong left_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				ev_size_t left = (ev_size_t) left_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setScissorTest(enabled, left);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setScissorTest_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setScissorTest(enabled);
				}
				else
				{
					pObjectX->setScissorTest(enabled);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setScissorTest_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setScissorTest_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setScissorTest_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setScissorTest_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setScissorTest(enabled);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_clearFrameBuffer_1ev_1uint32_1CColourValue_1Real_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buffers_j, jlong colour_j, jdouble depth_j, jint stencil_j)
			{
				ev_uint32 buffers = (ev_uint32) buffers_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				Real depth = (Real) depth_j;
				ev_uint16 stencil = (ev_uint16) stencil_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::clearFrameBuffer(buffers, colour, depth, stencil);
				}
				else
				{
					pObjectX->clearFrameBuffer(buffers, colour, depth, stencil);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1clearFrameBuffer_1ev_1uint32_1CColourValue_1Real_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_clearFrameBuffer_ev_uint32_CColourValue_Real_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"clearFrameBuffer_ev_uint32_CColourValue_Real_ev_uint16_callback", "(JJDI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_clearFrameBuffer_1ev_1uint32_1CColourValue_1Real_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buffers_j, jlong colour_j, jdouble depth_j, jint stencil_j)
			{
				ev_uint32 buffers = (ev_uint32) buffers_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				Real depth = (Real) depth_j;
				ev_uint16 stencil = (ev_uint16) stencil_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::clearFrameBuffer(buffers, colour, depth, stencil);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_clearFrameBuffer_1ev_1uint32_1CColourValue_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buffers_j, jlong colour_j, jdouble depth_j)
			{
				ev_uint32 buffers = (ev_uint32) buffers_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				Real depth = (Real) depth_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::clearFrameBuffer(buffers, colour, depth);
				}
				else
				{
					pObjectX->clearFrameBuffer(buffers, colour, depth);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1clearFrameBuffer_1ev_1uint32_1CColourValue_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_clearFrameBuffer_ev_uint32_CColourValue_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"clearFrameBuffer_ev_uint32_CColourValue_Real_callback", "(JJD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_clearFrameBuffer_1ev_1uint32_1CColourValue_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buffers_j, jlong colour_j, jdouble depth_j)
			{
				ev_uint32 buffers = (ev_uint32) buffers_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				Real depth = (Real) depth_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::clearFrameBuffer(buffers, colour, depth);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_clearFrameBuffer_1ev_1uint32_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buffers_j, jlong colour_j)
			{
				ev_uint32 buffers = (ev_uint32) buffers_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::clearFrameBuffer(buffers, colour);
				}
				else
				{
					pObjectX->clearFrameBuffer(buffers, colour);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1clearFrameBuffer_1ev_1uint32_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_clearFrameBuffer_ev_uint32_CColourValue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"clearFrameBuffer_ev_uint32_CColourValue_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_clearFrameBuffer_1ev_1uint32_1CColourValue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buffers_j, jlong colour_j)
			{
				ev_uint32 buffers = (ev_uint32) buffers_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::clearFrameBuffer(buffers, colour);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_clearFrameBuffer_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buffers_j)
			{
				ev_uint32 buffers = (ev_uint32) buffers_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::clearFrameBuffer(buffers);
				}
				else
				{
					pObjectX->clearFrameBuffer(buffers);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1clearFrameBuffer_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_clearFrameBuffer_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"clearFrameBuffer_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_clearFrameBuffer_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buffers_j)
			{
				ev_uint32 buffers = (ev_uint32) buffers_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::clearFrameBuffer(buffers);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_RenderSystem_getHorizontalTexelOffset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getHorizontalTexelOffset();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getHorizontalTexelOffset();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1getHorizontalTexelOffset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getHorizontalTexelOffset_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getHorizontalTexelOffset_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_RenderSystem_getHorizontalTexelOffset_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getHorizontalTexelOffset();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_RenderSystem_getVerticalTexelOffset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getVerticalTexelOffset();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getVerticalTexelOffset();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1getVerticalTexelOffset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getVerticalTexelOffset_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getVerticalTexelOffset_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_RenderSystem_getVerticalTexelOffset_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getVerticalTexelOffset();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_RenderSystem_getMinimumDepthInputValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getMinimumDepthInputValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getMinimumDepthInputValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1getMinimumDepthInputValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMinimumDepthInputValue_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMinimumDepthInputValue_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_RenderSystem_getMinimumDepthInputValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getMinimumDepthInputValue();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_RenderSystem_getMaximumDepthInputValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getMaximumDepthInputValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getMaximumDepthInputValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1getMaximumDepthInputValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMaximumDepthInputValue_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMaximumDepthInputValue_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_RenderSystem_getMaximumDepthInputValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getMaximumDepthInputValue();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setCurrentPassIterationCount_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				const ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setCurrentPassIterationCount(count);
				}
				else
				{
					pObjectX->setCurrentPassIterationCount(count);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setCurrentPassIterationCount_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setCurrentPassIterationCount_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setCurrentPassIterationCount_ev_size_t_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setCurrentPassIterationCount_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				const ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setCurrentPassIterationCount(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setDeriveDepthBias_1ev_1bool_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean derive_j, jfloat baseValue_j, jfloat multiplier_j, jfloat slopeScale_j)
			{
				ev_bool derive = (ev_bool) derive_j;
				ev_real32 baseValue = (ev_real32) baseValue_j;
				ev_real32 multiplier = (ev_real32) multiplier_j;
				ev_real32 slopeScale = (ev_real32) slopeScale_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setDeriveDepthBias(derive, baseValue, multiplier, slopeScale);
				}
				else
				{
					pObjectX->setDeriveDepthBias(derive, baseValue, multiplier, slopeScale);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setDeriveDepthBias_1ev_1bool_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDeriveDepthBias_ev_bool_ev_real32_ev_real32_ev_real32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDeriveDepthBias_ev_bool_ev_real32_ev_real32_ev_real32_callback", "(ZFFF)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setDeriveDepthBias_1ev_1bool_1ev_1real32_1ev_1real32_1ev_1real32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean derive_j, jfloat baseValue_j, jfloat multiplier_j, jfloat slopeScale_j)
			{
				ev_bool derive = (ev_bool) derive_j;
				ev_real32 baseValue = (ev_real32) baseValue_j;
				ev_real32 multiplier = (ev_real32) multiplier_j;
				ev_real32 slopeScale = (ev_real32) slopeScale_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setDeriveDepthBias(derive, baseValue, multiplier, slopeScale);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setDeriveDepthBias_1ev_1bool_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean derive_j, jfloat baseValue_j, jfloat multiplier_j)
			{
				ev_bool derive = (ev_bool) derive_j;
				ev_real32 baseValue = (ev_real32) baseValue_j;
				ev_real32 multiplier = (ev_real32) multiplier_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setDeriveDepthBias(derive, baseValue, multiplier);
				}
				else
				{
					pObjectX->setDeriveDepthBias(derive, baseValue, multiplier);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setDeriveDepthBias_1ev_1bool_1ev_1real32_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDeriveDepthBias_ev_bool_ev_real32_ev_real32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDeriveDepthBias_ev_bool_ev_real32_ev_real32_callback", "(ZFF)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setDeriveDepthBias_1ev_1bool_1ev_1real32_1ev_1real32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean derive_j, jfloat baseValue_j, jfloat multiplier_j)
			{
				ev_bool derive = (ev_bool) derive_j;
				ev_real32 baseValue = (ev_real32) baseValue_j;
				ev_real32 multiplier = (ev_real32) multiplier_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setDeriveDepthBias(derive, baseValue, multiplier);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setDeriveDepthBias_1ev_1bool_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean derive_j, jfloat baseValue_j)
			{
				ev_bool derive = (ev_bool) derive_j;
				ev_real32 baseValue = (ev_real32) baseValue_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setDeriveDepthBias(derive, baseValue);
				}
				else
				{
					pObjectX->setDeriveDepthBias(derive, baseValue);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setDeriveDepthBias_1ev_1bool_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDeriveDepthBias_ev_bool_ev_real32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDeriveDepthBias_ev_bool_ev_real32_callback", "(ZF)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setDeriveDepthBias_1ev_1bool_1ev_1real32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean derive_j, jfloat baseValue_j)
			{
				ev_bool derive = (ev_bool) derive_j;
				ev_real32 baseValue = (ev_real32) baseValue_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setDeriveDepthBias(derive, baseValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setDeriveDepthBias_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean derive_j)
			{
				ev_bool derive = (ev_bool) derive_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setDeriveDepthBias(derive);
				}
				else
				{
					pObjectX->setDeriveDepthBias(derive);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setDeriveDepthBias_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDeriveDepthBias_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDeriveDepthBias_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setDeriveDepthBias_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean derive_j)
			{
				ev_bool derive = (ev_bool) derive_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setDeriveDepthBias(derive);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setRenderTarget_1CRenderTarget(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_target_j)
			{
				EarthView::World::Graphic::CRenderTarget *ref_target = (EarthView::World::Graphic::CRenderTarget*) ref_target_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::_setRenderTarget(ref_target);
				}
				else
				{
					pObjectX->_setRenderTarget(ref_target);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1_1setRenderTarget_1CRenderTarget(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setRenderTarget_CRenderTarget_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setRenderTarget_CRenderTarget_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem__1setRenderTarget_1CRenderTarget_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_target_j)
			{
				EarthView::World::Graphic::CRenderTarget *ref_target = (EarthView::World::Graphic::CRenderTarget*) ref_target_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::_setRenderTarget(ref_target);
			}
			class JCRenderSystemListenerProxy : public EarthView::World::Graphic::CRenderSystem::CRenderSystemListener
			{
			 private:
				EarthView::World::Core::ev_string m_eventOccurred_EVString_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_eventOccurred_EVString_callback;
			public:
				JCRenderSystemListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderSystemListener(pList)
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
				void register_eventOccurred_EVString_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_eventOccurred_EVString_CommonStringPairList_callback = __method;
				}
				void register_eventOccurred_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_eventOccurred_EVString_callback = __method;
				}
				virtual void eventOccurred(const EVString& eventName, const EarthView::World::Core::CommonStringPairList* parameters)
				{
					if (this->_gRef != NULL && this->m_eventOccurred_EVString_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring eventName_wch = eventName;
						jstring eventName_j = __env->NewString((const jchar*)eventName_wch.getString(), eventName_wch.size());
						jlong parameters_j = (jlong) parameters;
						jmethodID __method = __gr->getMethod("eventOccurred_EVString_CommonStringPairList_callback");
						__env->CallVoidMethod(__obj, __method , eventName_j, parameters_j);
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
						return this->CRenderSystemListener::eventOccurred(eventName, parameters);
					}
				}
				virtual void eventOccurred(const EVString& eventName)
				{
					if (this->_gRef != NULL && this->m_eventOccurred_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring eventName_wch = eventName;
						jstring eventName_j = __env->NewString((const jchar*)eventName_wch.getString(), eventName_wch.size());
						jmethodID __method = __gr->getMethod("eventOccurred_EVString_callback");
						__env->CallVoidMethod(__obj, __method , eventName_j);
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
						return this->CRenderSystemListener::eventOccurred(eventName);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCRenderSystemListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_00024RenderSystemListener_eventOccurred_1EVString_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring eventName_j, jlong parameters_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* eventName_ch = (const ev_char*)__env->GetStringUTFChars(eventName_j,JNI_FALSE);
				const EVString eventName = eventName_ch;
				__env->ReleaseStringUTFChars(eventName_j, (const char *)eventName_ch);
				#else
				const ev_wchar* eventName_ch = (const ev_wchar*)__env->GetStringChars(eventName_j,JNI_FALSE);
				const EVString eventName = eventName_ch;
				__env->ReleaseStringChars(eventName_j, (const jchar *)eventName_ch);
				#endif
				const EarthView::World::Core::CommonStringPairList *parameters = (const EarthView::World::Core::CommonStringPairList*) parameters_j;
				EarthView::World::Graphic::CRenderSystem::CRenderSystemListener *pObjectX = (EarthView::World::Graphic::CRenderSystem::CRenderSystemListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::CRenderSystemListener::eventOccurred(eventName, parameters);
				}
				else
				{
					pObjectX->eventOccurred(eventName, parameters);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_00024RenderSystemListener_register_1eventOccurred_1EVString_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemListenerProxy *pObjectX = (JCRenderSystemListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_eventOccurred_EVString_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"eventOccurred_EVString_CommonStringPairList_callback", "(Ljava/lang/String;J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_00024RenderSystemListener_eventOccurred_1EVString_1CommonStringPairList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring eventName_j, jlong parameters_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* eventName_ch = (const ev_char*)__env->GetStringUTFChars(eventName_j,JNI_FALSE);
				const EVString eventName = eventName_ch;
				__env->ReleaseStringUTFChars(eventName_j, (const char *)eventName_ch);
				#else
				const ev_wchar* eventName_ch = (const ev_wchar*)__env->GetStringChars(eventName_j,JNI_FALSE);
				const EVString eventName = eventName_ch;
				__env->ReleaseStringChars(eventName_j, (const jchar *)eventName_ch);
				#endif
				const EarthView::World::Core::CommonStringPairList *parameters = (const EarthView::World::Core::CommonStringPairList*) parameters_j;
				EarthView::World::Graphic::CRenderSystem::CRenderSystemListener *pObjectX = (EarthView::World::Graphic::CRenderSystem::CRenderSystemListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::CRenderSystemListener::eventOccurred(eventName, parameters);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_00024RenderSystemListener_eventOccurred_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring eventName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* eventName_ch = (const ev_char*)__env->GetStringUTFChars(eventName_j,JNI_FALSE);
				const EVString eventName = eventName_ch;
				__env->ReleaseStringUTFChars(eventName_j, (const char *)eventName_ch);
				#else
				const ev_wchar* eventName_ch = (const ev_wchar*)__env->GetStringChars(eventName_j,JNI_FALSE);
				const EVString eventName = eventName_ch;
				__env->ReleaseStringChars(eventName_j, (const jchar *)eventName_ch);
				#endif
				EarthView::World::Graphic::CRenderSystem::CRenderSystemListener *pObjectX = (EarthView::World::Graphic::CRenderSystem::CRenderSystemListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::CRenderSystemListener::eventOccurred(eventName);
				}
				else
				{
					pObjectX->eventOccurred(eventName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_00024RenderSystemListener_register_1eventOccurred_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemListenerProxy *pObjectX = (JCRenderSystemListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_eventOccurred_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"eventOccurred_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_00024RenderSystemListener_eventOccurred_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring eventName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* eventName_ch = (const ev_char*)__env->GetStringUTFChars(eventName_j,JNI_FALSE);
				const EVString eventName = eventName_ch;
				__env->ReleaseStringUTFChars(eventName_j, (const char *)eventName_ch);
				#else
				const ev_wchar* eventName_ch = (const ev_wchar*)__env->GetStringChars(eventName_j,JNI_FALSE);
				const EVString eventName = eventName_ch;
				__env->ReleaseStringChars(eventName_j, (const jchar *)eventName_ch);
				#endif
				EarthView::World::Graphic::CRenderSystem::CRenderSystemListener *pObjectX = (EarthView::World::Graphic::CRenderSystem::CRenderSystemListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::CRenderSystemListener::eventOccurred(eventName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_addListener_1CRenderSystemListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_l_j)
			{
				EarthView::World::Graphic::CRenderSystem::CRenderSystemListener *ref_l = (EarthView::World::Graphic::CRenderSystem::CRenderSystemListener*) ref_l_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::addListener(ref_l);
				}
				else
				{
					pObjectX->addListener(ref_l);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1addListener_1CRenderSystemListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addListener_CRenderSystemListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addListener_CRenderSystemListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_addListener_1CRenderSystemListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_l_j)
			{
				EarthView::World::Graphic::CRenderSystem::CRenderSystemListener *ref_l = (EarthView::World::Graphic::CRenderSystem::CRenderSystemListener*) ref_l_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::addListener(ref_l);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_removeListener_1CRenderSystemListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong l_j)
			{
				EarthView::World::Graphic::CRenderSystem::CRenderSystemListener *l = (EarthView::World::Graphic::CRenderSystem::CRenderSystemListener*) l_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::removeListener(l);
				}
				else
				{
					pObjectX->removeListener(l);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1removeListener_1CRenderSystemListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeListener_CRenderSystemListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeListener_CRenderSystemListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_removeListener_1CRenderSystemListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong l_j)
			{
				EarthView::World::Graphic::CRenderSystem::CRenderSystemListener *l = (EarthView::World::Graphic::CRenderSystem::CRenderSystemListener*) l_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::removeListener(l);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_getRenderSystemEvents_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					const EarthView::World::Core::StringVector& __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getRenderSystemEvents();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Core::StringVector& __values1 = pObjectX->getRenderSystemEvents();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1getRenderSystemEvents_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRenderSystemEvents_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRenderSystemEvents_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_getRenderSystemEvents_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				const EarthView::World::Core::StringVector& __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getRenderSystemEvents();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_preExtraThreadsStarted_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::preExtraThreadsStarted();
				}
				else
				{
					pObjectX->preExtraThreadsStarted();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1preExtraThreadsStarted_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_preExtraThreadsStarted_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"preExtraThreadsStarted_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_preExtraThreadsStarted_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::preExtraThreadsStarted();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_postExtraThreadsStarted_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::postExtraThreadsStarted();
				}
				else
				{
					pObjectX->postExtraThreadsStarted();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1postExtraThreadsStarted_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postExtraThreadsStarted_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postExtraThreadsStarted_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_postExtraThreadsStarted_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::postExtraThreadsStarted();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_registerThread_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::registerThread();
				}
				else
				{
					pObjectX->registerThread();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1registerThread_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_registerThread_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"registerThread_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_registerThread_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::registerThread();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_flushRenderSystem_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::flushRenderSystem();
				}
				else
				{
					pObjectX->flushRenderSystem();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1flushRenderSystem_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_flushRenderSystem_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"flushRenderSystem_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_flushRenderSystem_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::flushRenderSystem();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_unregisterThread_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::unregisterThread();
				}
				else
				{
					pObjectX->unregisterThread();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1unregisterThread_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unregisterThread_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unregisterThread_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_unregisterThread_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::unregisterThread();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_getDisplayMonitorCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getDisplayMonitorCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getDisplayMonitorCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1getDisplayMonitorCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDisplayMonitorCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDisplayMonitorCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystem_getDisplayMonitorCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CRenderSystem::getDisplayMonitorCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_fireEvent_1EVString_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong params_j)
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
				const EarthView::World::Core::CommonStringPairList *params = (const EarthView::World::Core::CommonStringPairList*) params_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::fireEvent(name, params);
				}
				else
				{
					pObjectX->fireEvent(name, params);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1fireEvent_1EVString_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_fireEvent_EVString_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"fireEvent_EVString_CommonStringPairList_callback", "(Ljava/lang/String;J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_fireEvent_1EVString_1CommonStringPairList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong params_j)
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
				const EarthView::World::Core::CommonStringPairList *params = (const EarthView::World::Core::CommonStringPairList*) params_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::fireEvent(name, params);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_fireEvent_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::fireEvent(name);
				}
				else
				{
					pObjectX->fireEvent(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1fireEvent_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_fireEvent_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"fireEvent_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_fireEvent_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::fireEvent(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setClipPlanesImpl_1PlaneList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong clipPlanes_j)
			{
				const EarthView::World::Spatial::Math::PlaneList &clipPlanes = *(EarthView::World::Spatial::Math::PlaneList*) clipPlanes_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::setClipPlanesImpl(clipPlanes);
				}
				else
				{
					pObjectX->setClipPlanesImpl(clipPlanes);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1setClipPlanesImpl_1PlaneList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setClipPlanesImpl_PlaneList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setClipPlanesImpl_PlaneList_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_setClipPlanesImpl_1PlaneList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong clipPlanes_j)
			{
				const EarthView::World::Spatial::Math::PlaneList &clipPlanes = *(EarthView::World::Spatial::Math::PlaneList*) clipPlanes_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::setClipPlanesImpl(clipPlanes);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_initialiseFromRenderSystemCapabilities_1CRenderSystemCapabilities_1CRenderTarget(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong caps_j, jlong primary_j)
			{
				EarthView::World::Graphic::CRenderSystemCapabilities *caps = (EarthView::World::Graphic::CRenderSystemCapabilities*) caps_j;
				EarthView::World::Graphic::CRenderTarget *primary = (EarthView::World::Graphic::CRenderTarget*) primary_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderSystem::initialiseFromRenderSystemCapabilities(caps, primary);
				}
				else
				{
					pObjectX->initialiseFromRenderSystemCapabilities(caps, primary);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_register_1initialiseFromRenderSystemCapabilities_1CRenderSystemCapabilities_1CRenderTarget(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemProxy *pObjectX = (JCRenderSystemProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_initialiseFromRenderSystemCapabilities_CRenderSystemCapabilities_CRenderTarget_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"initialiseFromRenderSystemCapabilities_CRenderSystemCapabilities_CRenderTarget_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystem_initialiseFromRenderSystemCapabilities_1CRenderSystemCapabilities_1CRenderTarget_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong caps_j, jlong primary_j)
			{
				EarthView::World::Graphic::CRenderSystemCapabilities *caps = (EarthView::World::Graphic::CRenderSystemCapabilities*) caps_j;
				EarthView::World::Graphic::CRenderTarget *primary = (EarthView::World::Graphic::CRenderTarget*) primary_j;
				EarthView::World::Graphic::CRenderSystem *pObjectX = (EarthView::World::Graphic::CRenderSystem*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderSystem::initialiseFromRenderSystemCapabilities(caps, primary);
			}
		}
	}
}
