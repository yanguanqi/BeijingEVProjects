/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/shadowtexturemanager.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureList_push_1back_1CTexturePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CTexturePtr &t = *(EarthView::World::Graphic::CTexturePtr*) t_j;
				EarthView::World::Graphic::ShadowTextureList *pObjectX = (EarthView::World::Graphic::ShadowTextureList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ShadowTextureList *pObjectX = (EarthView::World::Graphic::ShadowTextureList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowTextureList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ShadowTextureList *pObjectX = (EarthView::World::Graphic::ShadowTextureList*) pObjXXXX;
				EarthView::World::Graphic::CTexturePtr& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowTextureList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ShadowTextureList *pObjectX = (EarthView::World::Graphic::ShadowTextureList*) pObjXXXX;
				EarthView::World::Graphic::CTexturePtr& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureList_insert_1ev_1uint32_1CTexturePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CTexturePtr &t = *(EarthView::World::Graphic::CTexturePtr*) t_j;
				EarthView::World::Graphic::ShadowTextureList *pObjectX = (EarthView::World::Graphic::ShadowTextureList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::ShadowTextureList *pObjectX = (EarthView::World::Graphic::ShadowTextureList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ShadowTextureList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ShadowTextureList *pObjectX = (EarthView::World::Graphic::ShadowTextureList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowTextureList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::ShadowTextureList& pObjectX = *(EarthView::World::Graphic::ShadowTextureList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CTexturePtr& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowTextureList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::ShadowTextureList *pObjectX = (EarthView::World::Graphic::ShadowTextureList*) pObjXXXX;
				EarthView::World::Graphic::CTexturePtr& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowTextureList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ShadowTextureList *pObjectX = (EarthView::World::Graphic::ShadowTextureList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::ShadowTextureList *pObjectX = (EarthView::World::Graphic::ShadowTextureList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::ShadowTextureList *pObjectX = (EarthView::World::Graphic::ShadowTextureList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ShadowTextureList *pObjectX = (EarthView::World::Graphic::ShadowTextureList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowTextureConfig_get_1width_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ShadowTextureConfig *pObjectX = (EarthView::World::Graphic::ShadowTextureConfig*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->width);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureConfig_set_1width_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::ShadowTextureConfig *pObjectX = (EarthView::World::Graphic::ShadowTextureConfig*)pObjXXXX;
				pObjectX->width = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowTextureConfig_get_1height_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ShadowTextureConfig *pObjectX = (EarthView::World::Graphic::ShadowTextureConfig*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->height);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureConfig_set_1height_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::ShadowTextureConfig *pObjectX = (EarthView::World::Graphic::ShadowTextureConfig*)pObjXXXX;
				pObjectX->height = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_ShadowTextureConfig_get_1format_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ShadowTextureConfig *pObjectX = (EarthView::World::Graphic::ShadowTextureConfig*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->format);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureConfig_set_1format_1PixelFormat(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::ShadowTextureConfig *pObjectX = (EarthView::World::Graphic::ShadowTextureConfig*)pObjXXXX;
				pObjectX->format = (EarthView::World::Graphic::PixelFormat)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowTextureConfig_get_1fsaa_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ShadowTextureConfig *pObjectX = (EarthView::World::Graphic::ShadowTextureConfig*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->fsaa);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureConfig_set_1fsaa_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::ShadowTextureConfig *pObjectX = (EarthView::World::Graphic::ShadowTextureConfig*)pObjXXXX;
				pObjectX->fsaa = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_ShadowTextureConfig_get_1depthBufferPoolId_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ShadowTextureConfig *pObjectX = (EarthView::World::Graphic::ShadowTextureConfig*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->depthBufferPoolId);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureConfig_set_1depthBufferPoolId_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::ShadowTextureConfig *pObjectX = (EarthView::World::Graphic::ShadowTextureConfig*)pObjXXXX;
				pObjectX->depthBufferPoolId = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureConfigList_push_1back_1ShadowTextureConfig(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::ShadowTextureConfig &t = *(EarthView::World::Graphic::ShadowTextureConfig*) t_j;
				EarthView::World::Graphic::ShadowTextureConfigList *pObjectX = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureConfigList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ShadowTextureConfigList *pObjectX = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowTextureConfigList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ShadowTextureConfigList *pObjectX = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjXXXX;
				EarthView::World::Graphic::ShadowTextureConfig& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowTextureConfigList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ShadowTextureConfigList *pObjectX = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjXXXX;
				EarthView::World::Graphic::ShadowTextureConfig& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureConfigList_insert_1ev_1uint32_1ShadowTextureConfig(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::ShadowTextureConfig &t = *(EarthView::World::Graphic::ShadowTextureConfig*) t_j;
				EarthView::World::Graphic::ShadowTextureConfigList *pObjectX = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureConfigList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::ShadowTextureConfigList *pObjectX = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ShadowTextureConfigList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ShadowTextureConfigList *pObjectX = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowTextureConfigList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::ShadowTextureConfigList& pObjectX = *(EarthView::World::Graphic::ShadowTextureConfigList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::ShadowTextureConfig& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowTextureConfigList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::ShadowTextureConfigList *pObjectX = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjXXXX;
				EarthView::World::Graphic::ShadowTextureConfig& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowTextureConfigList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ShadowTextureConfigList *pObjectX = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureConfigList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::ShadowTextureConfigList *pObjectX = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureConfigList_resize_1ev_1size_1t_1ShadowTextureConfig(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j, jlong newValue_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::ShadowTextureConfig newValue = *(EarthView::World::Graphic::ShadowTextureConfig*) newValue_j;
				EarthView::World::Graphic::ShadowTextureConfigList *pObjectX = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjXXXX;
				pObjectX->resize(newSize, newValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureConfigList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::ShadowTextureConfigList *pObjectX = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureConfigList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ShadowTextureConfigList *pObjectX = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ConstShadowTextureConfigIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ConstShadowTextureConfigIterator *pObjectX = (EarthView::World::Graphic::ConstShadowTextureConfigIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConstShadowTextureConfigIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConstShadowTextureConfigIterator *pObjectX = (EarthView::World::Graphic::ConstShadowTextureConfigIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConstShadowTextureConfigIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConstShadowTextureConfigIterator *pObjectX = (EarthView::World::Graphic::ConstShadowTextureConfigIterator*) pObjXXXX;
				EarthView::World::Graphic::ShadowTextureConfig __values1 = pObjectX->getCurrent();
				EarthView::World::Graphic::ShadowTextureConfig *returnvalues = new EarthView::World::Graphic::ShadowTextureConfig(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConstShadowTextureConfigIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConstShadowTextureConfigIterator *pObjectX = (EarthView::World::Graphic::ConstShadowTextureConfigIterator*) pObjXXXX;
				EarthView::World::Graphic::ShadowTextureConfig __values1 = pObjectX->next();
				EarthView::World::Graphic::ShadowTextureConfig *returnvalues = new EarthView::World::Graphic::ShadowTextureConfig(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConstShadowTextureConfigIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConstShadowTextureConfigIterator *pObjectX = (EarthView::World::Graphic::ConstShadowTextureConfigIterator*) pObjXXXX;
				EarthView::World::Graphic::ShadowTextureConfig __values1 = pObjectX->getBegin();
				EarthView::World::Graphic::ShadowTextureConfig *returnvalues = new EarthView::World::Graphic::ShadowTextureConfig(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConstShadowTextureConfigIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConstShadowTextureConfigIterator *pObjectX = (EarthView::World::Graphic::ConstShadowTextureConfigIterator*) pObjXXXX;
				EarthView::World::Graphic::ShadowTextureConfig __values1 = pObjectX->getEnd();
				EarthView::World::Graphic::ShadowTextureConfig *returnvalues = new EarthView::World::Graphic::ShadowTextureConfig(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			class JCShadowTextureManagerProxy : public EarthView::World::Graphic::CShadowTextureManager
			{
			 private:
				EarthView::World::Core::ev_string m_getShadowTextures_ShadowTextureConfigList_ShadowTextureList_callback;
				EarthView::World::Core::ev_string m_getNullShadowTexture_PixelFormat_callback;
				EarthView::World::Core::ev_string m_clearUnused_void_callback;
				EarthView::World::Core::ev_string m_clear_void_callback;
			public:
				JCShadowTextureManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CShadowTextureManager(pList)
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
				void register_getShadowTextures_ShadowTextureConfigList_ShadowTextureList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getShadowTextures_ShadowTextureConfigList_ShadowTextureList_callback = __method;
				}
				void register_getNullShadowTexture_PixelFormat_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNullShadowTexture_PixelFormat_callback = __method;
				}
				void register_clearUnused_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_clearUnused_void_callback = __method;
				}
				void register_clear_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_clear_void_callback = __method;
				}
				virtual void getShadowTextures(const EarthView::World::Graphic::ShadowTextureConfigList& config, EarthView::World::Graphic::ShadowTextureList& listToPopulate)
				{
					if (this->_gRef != NULL && this->m_getShadowTextures_ShadowTextureConfigList_ShadowTextureList_callback != "" && this->isCustomExtend())
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
						jlong config_j = (jlong) &config;
						jlong listToPopulate_j = (jlong) &listToPopulate;
						jmethodID __method = __gr->getMethod("getShadowTextures_ShadowTextureConfigList_ShadowTextureList_callback");
						__env->CallVoidMethod(__obj, __method , config_j, listToPopulate_j);
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
						return this->CShadowTextureManager::getShadowTextures(config, listToPopulate);
					}
				}
				virtual EarthView::World::Graphic::CTexturePtr getNullShadowTexture(EarthView::World::Graphic::PixelFormat format)
				{
					if (this->_gRef != NULL && this->m_getNullShadowTexture_PixelFormat_callback != "" && this->isCustomExtend())
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
						jint format_j = (jint) format;
						jmethodID __method = __gr->getMethod("getNullShadowTexture_PixelFormat_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , format_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CTexturePtr __values1 = *(EarthView::World::Graphic::CTexturePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CShadowTextureManager::getNullShadowTexture(format);
					}
				}
				virtual void clearUnused()
				{
					if (this->_gRef != NULL && this->m_clearUnused_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("clearUnused_void_callback");
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
						return this->CShadowTextureManager::clearUnused();
					}
				}
				virtual void clear()
				{
					if (this->_gRef != NULL && this->m_clear_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("clear_void_callback");
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
						return this->CShadowTextureManager::clear();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCShadowTextureManagerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureManager_getShadowTextures_1ShadowTextureConfigList_1ShadowTextureList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong config_j, jlong listToPopulate_j)
			{
				const EarthView::World::Graphic::ShadowTextureConfigList &config = *(EarthView::World::Graphic::ShadowTextureConfigList*) config_j;
				EarthView::World::Graphic::ShadowTextureList &listToPopulate = *(EarthView::World::Graphic::ShadowTextureList*) listToPopulate_j;
				EarthView::World::Graphic::CShadowTextureManager *pObjectX = (EarthView::World::Graphic::CShadowTextureManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCShadowTextureManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CShadowTextureManager::getShadowTextures(config, listToPopulate);
				}
				else
				{
					pObjectX->getShadowTextures(config, listToPopulate);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureManager_register_1getShadowTextures_1ShadowTextureConfigList_1ShadowTextureList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCShadowTextureManagerProxy *pObjectX = (JCShadowTextureManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getShadowTextures_ShadowTextureConfigList_ShadowTextureList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getShadowTextures_ShadowTextureConfigList_ShadowTextureList_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureManager_getShadowTextures_1ShadowTextureConfigList_1ShadowTextureList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong config_j, jlong listToPopulate_j)
			{
				const EarthView::World::Graphic::ShadowTextureConfigList &config = *(EarthView::World::Graphic::ShadowTextureConfigList*) config_j;
				EarthView::World::Graphic::ShadowTextureList &listToPopulate = *(EarthView::World::Graphic::ShadowTextureList*) listToPopulate_j;
				EarthView::World::Graphic::CShadowTextureManager *pObjectX = (EarthView::World::Graphic::CShadowTextureManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CShadowTextureManager::getShadowTextures(config, listToPopulate);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowTextureManager_getNullShadowTexture_1PixelFormat(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint format_j)
			{
				EarthView::World::Graphic::PixelFormat format = (EarthView::World::Graphic::PixelFormat) format_j;
				EarthView::World::Graphic::CShadowTextureManager *pObjectX = (EarthView::World::Graphic::CShadowTextureManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCShadowTextureManagerProxy))
				{
					EarthView::World::Graphic::CTexturePtr __values1 = pObjectX->EarthView::World::Graphic::CShadowTextureManager::getNullShadowTexture(format);
					EarthView::World::Graphic::CTexturePtr *returnvalues = new EarthView::World::Graphic::CTexturePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr __values1 = pObjectX->getNullShadowTexture(format);
					EarthView::World::Graphic::CTexturePtr *returnvalues = new EarthView::World::Graphic::CTexturePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureManager_register_1getNullShadowTexture_1PixelFormat(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCShadowTextureManagerProxy *pObjectX = (JCShadowTextureManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNullShadowTexture_PixelFormat_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNullShadowTexture_PixelFormat_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowTextureManager_getNullShadowTexture_1PixelFormat_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint format_j)
			{
				EarthView::World::Graphic::PixelFormat format = (EarthView::World::Graphic::PixelFormat) format_j;
				EarthView::World::Graphic::CShadowTextureManager *pObjectX = (EarthView::World::Graphic::CShadowTextureManager*) pObjXXXX;
				EarthView::World::Graphic::CTexturePtr __values1 = pObjectX->EarthView::World::Graphic::CShadowTextureManager::getNullShadowTexture(format);
				EarthView::World::Graphic::CTexturePtr *returnvalues = new EarthView::World::Graphic::CTexturePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureManager_clearUnused_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CShadowTextureManager *pObjectX = (EarthView::World::Graphic::CShadowTextureManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCShadowTextureManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CShadowTextureManager::clearUnused();
				}
				else
				{
					pObjectX->clearUnused();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureManager_register_1clearUnused_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCShadowTextureManagerProxy *pObjectX = (JCShadowTextureManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_clearUnused_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"clearUnused_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureManager_clearUnused_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CShadowTextureManager *pObjectX = (EarthView::World::Graphic::CShadowTextureManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CShadowTextureManager::clearUnused();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureManager_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CShadowTextureManager *pObjectX = (EarthView::World::Graphic::CShadowTextureManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCShadowTextureManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CShadowTextureManager::clear();
				}
				else
				{
					pObjectX->clear();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureManager_register_1clear_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCShadowTextureManagerProxy *pObjectX = (JCShadowTextureManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_clear_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"clear_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShadowTextureManager_clear_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CShadowTextureManager *pObjectX = (EarthView::World::Graphic::CShadowTextureManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CShadowTextureManager::clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowTextureManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CShadowTextureManager& __values1 = EarthView::World::Graphic::CShadowTextureManager::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShadowTextureManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CShadowTextureManager* __values1 = EarthView::World::Graphic::CShadowTextureManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
