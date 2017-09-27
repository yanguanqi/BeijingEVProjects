/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddisplay/featurerenderer.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Renderer
			{
				class JCFeatureRendererProxy : public EarthView::World::Spatial2D::Renderer::CFeatureRenderer
				{
				 private:
					EarthView::World::Core::ev_string m_draw_IFeature_callback;
					EarthView::World::Core::ev_string m_getTheme_void_callback;
					EarthView::World::Core::ev_string m_getStatisticesTheme_void_callback;
					EarthView::World::Core::ev_string m_draw_IDisplay2D_IFeature_callback;
					EarthView::World::Core::ev_string m_getType_void_callback;
				public:
					JCFeatureRendererProxy(EarthView::World::Core::CNameValuePairList *pList) : CFeatureRenderer(pList)
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
				protected:
					C_DISABLE_COPY(JCFeatureRendererProxy)
				public:
					void register_draw_IFeature_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_draw_IFeature_callback = __method;
					}
					void register_getTheme_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTheme_void_callback = __method;
					}
					void register_getStatisticesTheme_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getStatisticesTheme_void_callback = __method;
					}
					void register_draw_IDisplay2D_IFeature_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_draw_IDisplay2D_IFeature_callback = __method;
					}
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					virtual void draw(EarthView::World::Spatial::GeoDataset::IFeature* feature)
					{
						if (this->_gRef != NULL && this->m_draw_IFeature_callback != "" && this->isCustomExtend())
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
							jlong feature_j = (jlong) feature;
							jmethodID __method = __gr->getMethod("draw_IFeature_callback");
							__env->CallVoidMethod(__obj, __method , feature_j);
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
							return this->CFeatureRenderer::draw(feature);
						}
					}
					virtual EarthView::World::Spatial::Theme::ITheme* getTheme() const
					{
						if (this->_gRef != NULL && this->m_getTheme_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getTheme_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Theme::ITheme *__values1 = (EarthView::World::Spatial::Theme::ITheme*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CFeatureRenderer::getTheme();
						}
					}
					virtual EarthView::World::Spatial::Theme::ITheme* getStatisticesTheme() const
					{
						if (this->_gRef != NULL && this->m_getStatisticesTheme_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getStatisticesTheme_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Theme::ITheme *__values1 = (EarthView::World::Spatial::Theme::ITheme*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CFeatureRenderer::getStatisticesTheme();
						}
					}
					virtual EarthView::World::Spatial::Display::EVRendererType getType() const
					{
						if (this->_gRef != NULL && this->m_getType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::EVRendererType __values1 = (EarthView::World::Spatial::Display::EVRendererType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CFeatureRenderer::getType();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCFeatureRendererProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_renderer_FeatureRenderer_getRendererType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Renderer::CFeatureRenderer *pObjectX = (EarthView::World::Spatial2D::Renderer::CFeatureRenderer*) pObjXXXX;
					EarthView::World::Spatial::Display::EVRendererType __values1 = pObjectX->getRendererType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_FeatureRenderer_startDraw_1ISpatialDisplay_1ITheme(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jlong theme_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					EarthView::World::Spatial::Theme::ITheme *theme = (EarthView::World::Spatial::Theme::ITheme*) theme_j;
					EarthView::World::Spatial2D::Renderer::CFeatureRenderer *pObjectX = (EarthView::World::Spatial2D::Renderer::CFeatureRenderer*) pObjXXXX;
					pObjectX->startDraw(display, theme);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_FeatureRenderer_draw_1IFeature(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong feature_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *feature = (EarthView::World::Spatial::GeoDataset::IFeature*) feature_j;
					EarthView::World::Spatial2D::Renderer::CFeatureRenderer *pObjectX = (EarthView::World::Spatial2D::Renderer::CFeatureRenderer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFeatureRendererProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Renderer::CFeatureRenderer::draw(feature);
					}
					else
					{
						pObjectX->draw(feature);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_FeatureRenderer_register_1draw_1IFeature(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFeatureRendererProxy *pObjectX = (JCFeatureRendererProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_draw_IFeature_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"draw_IFeature_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_FeatureRenderer_draw_1IFeature_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong feature_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *feature = (EarthView::World::Spatial::GeoDataset::IFeature*) feature_j;
					EarthView::World::Spatial2D::Renderer::CFeatureRenderer *pObjectX = (EarthView::World::Spatial2D::Renderer::CFeatureRenderer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Renderer::CFeatureRenderer::draw(feature);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_FeatureRenderer_endDraw_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Renderer::CFeatureRenderer *pObjectX = (EarthView::World::Spatial2D::Renderer::CFeatureRenderer*) pObjXXXX;
					pObjectX->endDraw();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_FeatureRenderer_register_1getTheme_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFeatureRendererProxy *pObjectX = (JCFeatureRendererProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTheme_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTheme_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_FeatureRenderer_register_1getStatisticesTheme_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFeatureRendererProxy *pObjectX = (JCFeatureRendererProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getStatisticesTheme_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getStatisticesTheme_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_FeatureRenderer_register_1draw_1IDisplay2D_1IFeature(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFeatureRendererProxy *pObjectX = (JCFeatureRendererProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_draw_IDisplay2D_IFeature_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"draw_IDisplay2D_IFeature_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_FeatureRenderer_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFeatureRendererProxy *pObjectX = (JCFeatureRendererProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
