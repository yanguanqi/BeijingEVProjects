/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddisplay/drawstatisticstheme.h"
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
				class JCDrawStatisticsThemeProxy : public EarthView::World::Spatial2D::Renderer::CDrawStatisticsTheme
				{
				 private:
					EarthView::World::Core::ev_string m_startDraw_ISpatialDisplay_ITheme_callback;
					EarthView::World::Core::ev_string m_draw_IFeatureClass_IQueryFilter_callback;
					EarthView::World::Core::ev_string m_draw_ISpatialDisplay_ISymbol_IFeature_callback;
					EarthView::World::Core::ev_string m_endDraw_void_callback;
				public:
					JCDrawStatisticsThemeProxy(EarthView::World::Core::CNameValuePairList *pList) : CDrawStatisticsTheme(pList)
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
					C_DISABLE_COPY(JCDrawStatisticsThemeProxy)
				public:
					void register_startDraw_ISpatialDisplay_ITheme_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_startDraw_ISpatialDisplay_ITheme_callback = __method;
					}
					void register_draw_IFeatureClass_IQueryFilter_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_draw_IFeatureClass_IQueryFilter_callback = __method;
					}
					void register_draw_ISpatialDisplay_ISymbol_IFeature_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_draw_ISpatialDisplay_ISymbol_IFeature_callback = __method;
					}
					void register_endDraw_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_endDraw_void_callback = __method;
					}
					virtual void startDraw(EarthView::World::Spatial::Display::ISpatialDisplay* ref_display, EarthView::World::Spatial::Theme::ITheme* ref_theme)
					{
						if (this->_gRef != NULL && this->m_startDraw_ISpatialDisplay_ITheme_callback != "" && this->isCustomExtend())
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
							jlong ref_theme_j = (jlong) ref_theme;
							jmethodID __method = __gr->getMethod("startDraw_ISpatialDisplay_ITheme_callback");
							__env->CallVoidMethod(__obj, __method , ref_display_j, ref_theme_j);
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
							return this->CDrawStatisticsTheme::startDraw(ref_display, ref_theme);
						}
					}
					virtual ev_bool draw(EarthView::World::Spatial::GeoDataset::IFeatureClass* featureClass, EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if (this->_gRef != NULL && this->m_draw_IFeatureClass_IQueryFilter_callback != "" && this->isCustomExtend())
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
							jlong featureClass_j = (jlong) featureClass;
							jlong filter_j = (jlong) filter;
							jmethodID __method = __gr->getMethod("draw_IFeatureClass_IQueryFilter_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , featureClass_j, filter_j);
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
							return this->CDrawStatisticsTheme::draw(featureClass, filter);
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
							return this->CDrawStatisticsTheme::endDraw();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCDrawStatisticsThemeProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_DrawStatisticsTheme_startDraw_1ISpatialDisplay_1ITheme(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_display_j, jlong ref_theme_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *ref_display = (EarthView::World::Spatial::Display::ISpatialDisplay*) ref_display_j;
					EarthView::World::Spatial::Theme::ITheme *ref_theme = (EarthView::World::Spatial::Theme::ITheme*) ref_theme_j;
					EarthView::World::Spatial2D::Renderer::CDrawStatisticsTheme *pObjectX = (EarthView::World::Spatial2D::Renderer::CDrawStatisticsTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDrawStatisticsThemeProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Renderer::CDrawStatisticsTheme::startDraw(ref_display, ref_theme);
					}
					else
					{
						pObjectX->startDraw(ref_display, ref_theme);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_DrawStatisticsTheme_register_1startDraw_1ISpatialDisplay_1ITheme(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDrawStatisticsThemeProxy *pObjectX = (JCDrawStatisticsThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_startDraw_ISpatialDisplay_ITheme_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"startDraw_ISpatialDisplay_ITheme_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_DrawStatisticsTheme_startDraw_1ISpatialDisplay_1ITheme_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_display_j, jlong ref_theme_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *ref_display = (EarthView::World::Spatial::Display::ISpatialDisplay*) ref_display_j;
					EarthView::World::Spatial::Theme::ITheme *ref_theme = (EarthView::World::Spatial::Theme::ITheme*) ref_theme_j;
					EarthView::World::Spatial2D::Renderer::CDrawStatisticsTheme *pObjectX = (EarthView::World::Spatial2D::Renderer::CDrawStatisticsTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Renderer::CDrawStatisticsTheme::startDraw(ref_display, ref_theme);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_renderer_DrawStatisticsTheme_draw_1IFeatureClass_1IQueryFilter(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong featureClass_j, jlong filter_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeatureClass *featureClass = (EarthView::World::Spatial::GeoDataset::IFeatureClass*) featureClass_j;
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					EarthView::World::Spatial2D::Renderer::CDrawStatisticsTheme *pObjectX = (EarthView::World::Spatial2D::Renderer::CDrawStatisticsTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDrawStatisticsThemeProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Renderer::CDrawStatisticsTheme::draw(featureClass, filter);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->draw(featureClass, filter);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_DrawStatisticsTheme_register_1draw_1IFeatureClass_1IQueryFilter(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDrawStatisticsThemeProxy *pObjectX = (JCDrawStatisticsThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_draw_IFeatureClass_IQueryFilter_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"draw_IFeatureClass_IQueryFilter_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_renderer_DrawStatisticsTheme_draw_1IFeatureClass_1IQueryFilter_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong featureClass_j, jlong filter_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeatureClass *featureClass = (EarthView::World::Spatial::GeoDataset::IFeatureClass*) featureClass_j;
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					EarthView::World::Spatial2D::Renderer::CDrawStatisticsTheme *pObjectX = (EarthView::World::Spatial2D::Renderer::CDrawStatisticsTheme*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Renderer::CDrawStatisticsTheme::draw(featureClass, filter);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_DrawStatisticsTheme_endDraw_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Renderer::CDrawStatisticsTheme *pObjectX = (EarthView::World::Spatial2D::Renderer::CDrawStatisticsTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDrawStatisticsThemeProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Renderer::CDrawStatisticsTheme::endDraw();
					}
					else
					{
						pObjectX->endDraw();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_DrawStatisticsTheme_register_1endDraw_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDrawStatisticsThemeProxy *pObjectX = (JCDrawStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_DrawStatisticsTheme_endDraw_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Renderer::CDrawStatisticsTheme *pObjectX = (EarthView::World::Spatial2D::Renderer::CDrawStatisticsTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Renderer::CDrawStatisticsTheme::endDraw();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_DrawStatisticsTheme_register_1draw_1ISpatialDisplay_1ISymbol_1IFeature(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDrawStatisticsThemeProxy *pObjectX = (JCDrawStatisticsThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_draw_ISpatialDisplay_ISymbol_IFeature_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"draw_ISpatialDisplay_ISymbol_IFeature_callback", "(JJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
