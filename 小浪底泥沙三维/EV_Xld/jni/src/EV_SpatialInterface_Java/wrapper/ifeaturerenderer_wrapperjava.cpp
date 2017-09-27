/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ifeaturerenderer.h"
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
			namespace Display
			{
				class JIFeatureRendererProxy : public EarthView::World::Spatial2D::Display::IFeatureRenderer
				{
				 private:
					EarthView::World::Core::ev_string m_getTheme_void_callback;
					EarthView::World::Core::ev_string m_getStatisticesTheme_void_callback;
					EarthView::World::Core::ev_string m_draw_IDisplay2D_IFeature_callback;
					EarthView::World::Core::ev_string m_getType_void_callback;
				public:
					JIFeatureRendererProxy(EarthView::World::Core::CNameValuePairList *pList) : IFeatureRenderer(pList)
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
							return this->IFeatureRenderer::getTheme();
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
							return this->IFeatureRenderer::getStatisticesTheme();
						}
					}
					virtual void draw(const EarthView::World::Display::IDisplay2D* display, const EarthView::World::Spatial::GeoDataset::IFeature* feature) const
					{
						if (this->_gRef != NULL && this->m_draw_IDisplay2D_IFeature_callback != "" && this->isCustomExtend())
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
							jlong display_j = (jlong) display;
							jlong feature_j = (jlong) feature;
							jmethodID __method = __gr->getMethod("draw_IDisplay2D_IFeature_callback");
							__env->CallVoidMethod(__obj, __method , display_j, feature_j);
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
							return this->IFeatureRenderer::draw(display, feature);
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
							return this->IFeatureRenderer::getType();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIFeatureRendererProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_display_Ifeaturerenderer_getTheme_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Display::IFeatureRenderer *pObjectX = (EarthView::World::Spatial2D::Display::IFeatureRenderer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIFeatureRendererProxy))
					{
						EarthView::World::Spatial::Theme::ITheme* __values1 = pObjectX->EarthView::World::Spatial2D::Display::IFeatureRenderer::getTheme();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Theme::ITheme* __values1 = pObjectX->getTheme();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_display_Ifeaturerenderer_register_1getTheme_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIFeatureRendererProxy *pObjectX = (JIFeatureRendererProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_display_Ifeaturerenderer_getTheme_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Display::IFeatureRenderer *pObjectX = (EarthView::World::Spatial2D::Display::IFeatureRenderer*) pObjXXXX;
					EarthView::World::Spatial::Theme::ITheme* __values1 = pObjectX->EarthView::World::Spatial2D::Display::IFeatureRenderer::getTheme();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_display_Ifeaturerenderer_getStatisticesTheme_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Display::IFeatureRenderer *pObjectX = (EarthView::World::Spatial2D::Display::IFeatureRenderer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIFeatureRendererProxy))
					{
						EarthView::World::Spatial::Theme::ITheme* __values1 = pObjectX->EarthView::World::Spatial2D::Display::IFeatureRenderer::getStatisticesTheme();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Theme::ITheme* __values1 = pObjectX->getStatisticesTheme();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_display_Ifeaturerenderer_register_1getStatisticesTheme_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIFeatureRendererProxy *pObjectX = (JIFeatureRendererProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_display_Ifeaturerenderer_getStatisticesTheme_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Display::IFeatureRenderer *pObjectX = (EarthView::World::Spatial2D::Display::IFeatureRenderer*) pObjXXXX;
					EarthView::World::Spatial::Theme::ITheme* __values1 = pObjectX->EarthView::World::Spatial2D::Display::IFeatureRenderer::getStatisticesTheme();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_display_Ifeaturerenderer_draw_1IDisplay2D_1IFeature(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jlong feature_j)
				{
					const EarthView::World::Display::IDisplay2D *display = (const EarthView::World::Display::IDisplay2D*) display_j;
					const EarthView::World::Spatial::GeoDataset::IFeature *feature = (const EarthView::World::Spatial::GeoDataset::IFeature*) feature_j;
					const 					EarthView::World::Spatial2D::Display::IFeatureRenderer *pObjectX = (EarthView::World::Spatial2D::Display::IFeatureRenderer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIFeatureRendererProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Display::IFeatureRenderer::draw(display, feature);
					}
					else
					{
						pObjectX->draw(display, feature);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_display_Ifeaturerenderer_register_1draw_1IDisplay2D_1IFeature(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIFeatureRendererProxy *pObjectX = (JIFeatureRendererProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_display_Ifeaturerenderer_draw_1IDisplay2D_1IFeature_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jlong feature_j)
				{
					const EarthView::World::Display::IDisplay2D *display = (const EarthView::World::Display::IDisplay2D*) display_j;
					const EarthView::World::Spatial::GeoDataset::IFeature *feature = (const EarthView::World::Spatial::GeoDataset::IFeature*) feature_j;
					const 					EarthView::World::Spatial2D::Display::IFeatureRenderer *pObjectX = (EarthView::World::Spatial2D::Display::IFeatureRenderer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Display::IFeatureRenderer::draw(display, feature);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_display_Ifeaturerenderer_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIFeatureRendererProxy *pObjectX = (JIFeatureRendererProxy*) pObjXXXX;
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
