/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddisplay/labelrenderer.h"
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
				class JCLabelRendererProxy : public EarthView::World::Spatial2D::Renderer::CLabelRenderer
				{
				 private:
					EarthView::World::Core::ev_string m_getType_void_callback;
				public:
					JCLabelRendererProxy(EarthView::World::Core::CNameValuePairList *pList) : CLabelRenderer(pList)
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
					C_DISABLE_COPY(JCLabelRendererProxy)
				public:
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
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
							return this->CLabelRenderer::getType();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCLabelRendererProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_renderer_LabelRenderer_getRendererType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Renderer::CLabelRenderer *pObjectX = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*) pObjXXXX;
					EarthView::World::Spatial::Display::EVRendererType __values1 = pObjectX->getRendererType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_LabelRenderer_startDraw_1ISpatialDisplay_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_display_j, jlong symbol_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *ref_display = (EarthView::World::Spatial::Display::ISpatialDisplay*) ref_display_j;
					EarthView::World::Spatial::Display::ISymbol *symbol = (EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial2D::Renderer::CLabelRenderer *pObjectX = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*) pObjXXXX;
					pObjectX->startDraw(ref_display, symbol);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_LabelRenderer_draw_1CLabelElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Spatial::Display::CLabelElement *element = (EarthView::World::Spatial::Display::CLabelElement*) element_j;
					EarthView::World::Spatial2D::Renderer::CLabelRenderer *pObjectX = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*) pObjXXXX;
					pObjectX->draw(element);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_LabelRenderer_endDraw_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Renderer::CLabelRenderer *pObjectX = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*) pObjXXXX;
					pObjectX->endDraw();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_LabelRenderer_setRotation_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble rotation_j)
				{
					ev_real64 rotation = (ev_real64) rotation_j;
					EarthView::World::Spatial2D::Renderer::CLabelRenderer *pObjectX = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*) pObjXXXX;
					pObjectX->setRotation(rotation);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_renderer_LabelRenderer_get_1mpDisplay_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Renderer::CLabelRenderer *pObjectX = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mpDisplay);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_LabelRenderer_set_1mpDisplay_1ISpatialDisplay(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial2D::Renderer::CLabelRenderer *pObjectX = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*)pObjXXXX;
					pObjectX->mpDisplay = (EarthView::World::Spatial::Display::ISpatialDisplay*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_renderer_LabelRenderer_get_1mpTransformer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Renderer::CLabelRenderer *pObjectX = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mpTransformer);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_LabelRenderer_set_1mpTransformer_1ISpatialTransformer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial2D::Renderer::CLabelRenderer *pObjectX = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*)pObjXXXX;
					pObjectX->mpTransformer = (EarthView::World::Spatial::Display::ISpatialTransformer*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_renderer_LabelRenderer_get_1mpSymbolRenderer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Renderer::CLabelRenderer *pObjectX = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mpSymbolRenderer);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_LabelRenderer_set_1mpSymbolRenderer_1CSymbolRenderer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial2D::Renderer::CLabelRenderer *pObjectX = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*)pObjXXXX;
					pObjectX->mpSymbolRenderer = (EarthView::World::Spatial::Display::CSymbolRenderer*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_renderer_LabelRenderer_get_1mpSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Renderer::CLabelRenderer *pObjectX = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mpSymbol);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_LabelRenderer_set_1mpSymbol_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial2D::Renderer::CLabelRenderer *pObjectX = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*)pObjXXXX;
					pObjectX->mpSymbol = (EarthView::World::Spatial::Display::ISymbol*) __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_renderer_LabelRenderer_get_1m_1fRotation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Renderer::CLabelRenderer *pObjectX = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->m_fRotation);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_LabelRenderer_set_1m_1fRotation_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial2D::Renderer::CLabelRenderer *pObjectX = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*)pObjXXXX;
					pObjectX->m_fRotation = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_LabelRenderer_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLabelRendererProxy *pObjectX = (JCLabelRendererProxy*) pObjXXXX;
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
