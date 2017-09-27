/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dserver/drawwmsvectortheme.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				class JCDrawWMSVectorThemeProxy : public EarthView::World::Spatial::Display::CDrawWMSVectorTheme
				{
				 private:
					EarthView::World::Core::ev_string m_startDraw_ISpatialDisplay_ev_uint8_ITheme_ev_int32_callback;
					EarthView::World::Core::ev_string m_endDraw_void_callback;
					EarthView::World::Core::ev_string m_draw_IDataset_callback;
					EarthView::World::Core::ev_string m_draw_EVString_EVString_IEnvelope_ISpatialReference_callback;
					EarthView::World::Core::ev_string m_drawTile_RequestPara_callback;
				public:
					JCDrawWMSVectorThemeProxy(EarthView::World::Core::CNameValuePairList *pList) : CDrawWMSVectorTheme(pList)
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
					void register_startDraw_ISpatialDisplay_ev_uint8_ITheme_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_startDraw_ISpatialDisplay_ev_uint8_ITheme_ev_int32_callback = __method;
					}
					void register_endDraw_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_endDraw_void_callback = __method;
					}
					void register_draw_IDataset_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_draw_IDataset_callback = __method;
					}
					void register_draw_EVString_EVString_IEnvelope_ISpatialReference_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_draw_EVString_EVString_IEnvelope_ISpatialReference_callback = __method;
					}
					void register_drawTile_RequestPara_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_drawTile_RequestPara_callback = __method;
					}
					virtual ev_bool draw(EarthView::World::Spatial::GeoDataset::IDataset* pDataset)
					{
						if (this->_gRef != NULL && this->m_draw_IDataset_callback != "" && this->isCustomExtend())
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
							jlong pDataset_j = (jlong) pDataset;
							jmethodID __method = __gr->getMethod("draw_IDataset_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pDataset_j);
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
							return this->CDrawWMSVectorTheme::draw(pDataset);
						}
					}
					virtual void startDraw(EarthView::World::Spatial::Display::ISpatialDisplay* ref_display, ev_uint8 transparent, EarthView::World::Spatial::Theme::ITheme* ref_pTheme, ev_int32 mode)
					{
						if (this->_gRef != NULL && this->m_startDraw_ISpatialDisplay_ev_uint8_ITheme_ev_int32_callback != "" && this->isCustomExtend())
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
							jlong ref_display_j = (jlong) ref_display;
							jshort transparent_j = (jshort) transparent;
							jlong ref_pTheme_j = (jlong) ref_pTheme;
							jint mode_j = (jint) mode;
							jmethodID __method = __gr->getMethod("startDraw_ISpatialDisplay_ev_uint8_ITheme_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , ref_display_j, transparent_j, ref_pTheme_j, mode_j);
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
							return this->CDrawWMSVectorTheme::startDraw(ref_display, transparent, ref_pTheme, mode);
						}
					}
					virtual void endDraw()
					{
						if (this->_gRef != NULL && this->m_endDraw_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("endDraw_void_callback");
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
							return this->CDrawWMSVectorTheme::endDraw();
						}
					}
					virtual void drawTile(EarthView::World::Core::CWorkQueue::RequestPara* req)
					{
						if (this->_gRef != NULL && this->m_drawTile_RequestPara_callback != "" && this->isCustomExtend())
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
							jlong req_j = (jlong) req;
							jmethodID __method = __gr->getMethod("drawTile_RequestPara_callback");
							__env->CallVoidMethod(__obj, __method , req_j);
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
							return this->CDrawWMSVectorTheme::drawTile(req);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCDrawWMSVectorThemeProxy);
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_DrawWMSVectorTheme_draw_1IDataset(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataset_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *pDataset = (EarthView::World::Spatial::GeoDataset::IDataset*) pDataset_j;
					EarthView::World::Spatial::Display::CDrawWMSVectorTheme *pObjectX = (EarthView::World::Spatial::Display::CDrawWMSVectorTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDrawWMSVectorThemeProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CDrawWMSVectorTheme::draw(pDataset);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->draw(pDataset);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_DrawWMSVectorTheme_register_1draw_1IDataset(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDrawWMSVectorThemeProxy *pObjectX = (JCDrawWMSVectorThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_draw_IDataset_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"draw_IDataset_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_DrawWMSVectorTheme_draw_1IDataset_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataset_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *pDataset = (EarthView::World::Spatial::GeoDataset::IDataset*) pDataset_j;
					EarthView::World::Spatial::Display::CDrawWMSVectorTheme *pObjectX = (EarthView::World::Spatial::Display::CDrawWMSVectorTheme*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CDrawWMSVectorTheme::draw(pDataset);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_DrawWMSVectorTheme_register_1startDraw_1ISpatialDisplay_1ev_1uint8_1ITheme_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDrawWMSVectorThemeProxy *pObjectX = (JCDrawWMSVectorThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_startDraw_ISpatialDisplay_ev_uint8_ITheme_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"startDraw_ISpatialDisplay_ev_uint8_ITheme_ev_int32_callback", "(JSJI)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_DrawWMSVectorTheme_register_1endDraw_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDrawWMSVectorThemeProxy *pObjectX = (JCDrawWMSVectorThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_endDraw_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"endDraw_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_DrawWMSVectorTheme_register_1draw_1EVString_1EVString_1IEnvelope_1ISpatialReference(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDrawWMSVectorThemeProxy *pObjectX = (JCDrawWMSVectorThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_draw_EVString_EVString_IEnvelope_ISpatialReference_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"draw_EVString_EVString_IEnvelope_ISpatialReference_callback", "(Ljava/lang/String;Ljava/lang/String;JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_DrawWMSVectorTheme_register_1drawTile_1RequestPara(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDrawWMSVectorThemeProxy *pObjectX = (JCDrawWMSVectorThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_drawTile_RequestPara_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"drawTile_RequestPara_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
