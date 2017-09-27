/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/symbolrenderer.h"
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
				class JCSymbolRendererProxy : public EarthView::World::Spatial::Display::CSymbolRenderer
				{
				 private:
					EarthView::World::Core::ev_string m_startDraw_IDisplay2D_ISymbol_callback;
					EarthView::World::Core::ev_string m_draw_ev_real64_ev_real64_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_draw_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_callback;
					EarthView::World::Core::ev_string m_drawPath_CDataPath_callback;
					EarthView::World::Core::ev_string m_drawPath_CDataPath_ev_bool_callback;
					EarthView::World::Core::ev_string m_endDraw_void_callback;
					EarthView::World::Core::ev_string m_drawLegend_ev_real64_ev_real64_ev_real64_ev_real64_callback;
				public:
					JCSymbolRendererProxy(EarthView::World::Core::CNameValuePairList *pList) : CSymbolRenderer(pList)
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
					void register_startDraw_IDisplay2D_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_startDraw_IDisplay2D_ISymbol_callback = __method;
					}
					void register_draw_ev_real64_ev_real64_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_draw_ev_real64_ev_real64_ev_int32_ev_int32_callback = __method;
					}
					void register_draw_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_draw_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_callback = __method;
					}
					void register_drawPath_CDataPath_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_drawPath_CDataPath_callback = __method;
					}
					void register_drawPath_CDataPath_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_drawPath_CDataPath_ev_bool_callback = __method;
					}
					void register_endDraw_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_endDraw_void_callback = __method;
					}
					void register_drawLegend_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_drawLegend_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
					}
					virtual void startDraw(EarthView::World::Display::IDisplay2D* ref_display, const EarthView::World::Spatial::Display::ISymbol* ref_pSymbol)
					{
						if (this->_gRef != NULL && this->m_startDraw_IDisplay2D_ISymbol_callback != "" && this->isCustomExtend())
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
							jlong ref_pSymbol_j = (jlong) ref_pSymbol;
							jmethodID __method = __gr->getMethod("startDraw_IDisplay2D_ISymbol_callback");
							__env->CallVoidMethod(__obj, __method , ref_display_j, ref_pSymbol_j);
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
							return this->CSymbolRenderer::startDraw(ref_display, ref_pSymbol);
						}
					}
					virtual void draw(ev_real64* dx, ev_real64* dy, ev_int32* pSegments, ev_int32 nCount)
					{
						if (this->_gRef != NULL && this->m_draw_ev_real64_ev_real64_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
							jlong dx_j = (jlong) dx;
							jlong dy_j = (jlong) dy;
							jlong pSegments_j = (jlong) pSegments;
							jint nCount_j = (jint) nCount;
							jmethodID __method = __gr->getMethod("draw_ev_real64_ev_real64_ev_int32_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , dx_j, dy_j, pSegments_j, nCount_j);
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
							return this->CSymbolRenderer::draw(dx, dy, pSegments, nCount);
						}
					}
					virtual void draw(ev_real64* dx, ev_real64* dy, ev_int32* pSegments, ev_int32 nCount, ev_bool bUseOutline)
					{
						if (this->_gRef != NULL && this->m_draw_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_callback != "" && this->isCustomExtend())
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
							jlong dx_j = (jlong) dx;
							jlong dy_j = (jlong) dy;
							jlong pSegments_j = (jlong) pSegments;
							jint nCount_j = (jint) nCount;
							jboolean bUseOutline_j = (jboolean) bUseOutline;
							jmethodID __method = __gr->getMethod("draw_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , dx_j, dy_j, pSegments_j, nCount_j, bUseOutline_j);
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
							return this->CSymbolRenderer::draw(dx, dy, pSegments, nCount, bUseOutline);
						}
					}
					virtual void drawPath(EarthView::World::Display::CDataPath* pPath)
					{
						if (this->_gRef != NULL && this->m_drawPath_CDataPath_callback != "" && this->isCustomExtend())
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
							jlong pPath_j = (jlong) pPath;
							jmethodID __method = __gr->getMethod("drawPath_CDataPath_callback");
							__env->CallVoidMethod(__obj, __method , pPath_j);
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
							return this->CSymbolRenderer::drawPath(pPath);
						}
					}
					virtual void drawPath(EarthView::World::Display::CDataPath* pPath, ev_bool bUseOutline)
					{
						if (this->_gRef != NULL && this->m_drawPath_CDataPath_ev_bool_callback != "" && this->isCustomExtend())
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
							jlong pPath_j = (jlong) pPath;
							jboolean bUseOutline_j = (jboolean) bUseOutline;
							jmethodID __method = __gr->getMethod("drawPath_CDataPath_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , pPath_j, bUseOutline_j);
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
							return this->CSymbolRenderer::drawPath(pPath, bUseOutline);
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
							return this->CSymbolRenderer::endDraw();
						}
					}
					virtual void drawLegend(ev_real64 left, ev_real64 top, ev_real64 width, ev_real64 height)
					{
						if (this->_gRef != NULL && this->m_drawLegend_ev_real64_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble top_j = (jdouble) top;
							jdouble width_j = (jdouble) width;
							jdouble height_j = (jdouble) height;
							jmethodID __method = __gr->getMethod("drawLegend_ev_real64_ev_real64_ev_real64_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , left_j, top_j, width_j, height_j);
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
							return this->CSymbolRenderer::drawLegend(left, top, width, height);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCSymbolRendererProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolRenderer_startDraw_1IDisplay2D_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_display_j, jlong ref_pSymbol_j)
				{
					EarthView::World::Display::IDisplay2D *ref_display = (EarthView::World::Display::IDisplay2D*) ref_display_j;
					const EarthView::World::Spatial::Display::ISymbol *ref_pSymbol = (const EarthView::World::Spatial::Display::ISymbol*) ref_pSymbol_j;
					EarthView::World::Spatial::Display::CSymbolRenderer *pObjectX = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbolRendererProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CSymbolRenderer::startDraw(ref_display, ref_pSymbol);
					}
					else
					{
						pObjectX->startDraw(ref_display, ref_pSymbol);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolRenderer_register_1startDraw_1IDisplay2D_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbolRendererProxy *pObjectX = (JCSymbolRendererProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_startDraw_IDisplay2D_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"startDraw_IDisplay2D_ISymbol_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolRenderer_startDraw_1IDisplay2D_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_display_j, jlong ref_pSymbol_j)
				{
					EarthView::World::Display::IDisplay2D *ref_display = (EarthView::World::Display::IDisplay2D*) ref_display_j;
					const EarthView::World::Spatial::Display::ISymbol *ref_pSymbol = (const EarthView::World::Spatial::Display::ISymbol*) ref_pSymbol_j;
					EarthView::World::Spatial::Display::CSymbolRenderer *pObjectX = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CSymbolRenderer::startDraw(ref_display, ref_pSymbol);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolRenderer_draw_1ev_1real64_1ev_1real64_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dx_j, jlong dy_j, jlong pSegments_j, jint nCount_j)
				{
					ev_real64 *dx = (ev_real64*) dx_j;
					ev_real64 *dy = (ev_real64*) dy_j;
					ev_int32 *pSegments = (ev_int32*) pSegments_j;
					ev_int32 nCount = (ev_int32) nCount_j;
					EarthView::World::Spatial::Display::CSymbolRenderer *pObjectX = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbolRendererProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CSymbolRenderer::draw(dx, dy, pSegments, nCount);
					}
					else
					{
						pObjectX->draw(dx, dy, pSegments, nCount);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolRenderer_register_1draw_1ev_1real64_1ev_1real64_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbolRendererProxy *pObjectX = (JCSymbolRendererProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_draw_ev_real64_ev_real64_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"draw_ev_real64_ev_real64_ev_int32_ev_int32_callback", "(JJJI)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolRenderer_draw_1ev_1real64_1ev_1real64_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dx_j, jlong dy_j, jlong pSegments_j, jint nCount_j)
				{
					ev_real64 *dx = (ev_real64*) dx_j;
					ev_real64 *dy = (ev_real64*) dy_j;
					ev_int32 *pSegments = (ev_int32*) pSegments_j;
					ev_int32 nCount = (ev_int32) nCount_j;
					EarthView::World::Spatial::Display::CSymbolRenderer *pObjectX = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CSymbolRenderer::draw(dx, dy, pSegments, nCount);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolRenderer_draw_1ev_1real64_1ev_1real64_1ev_1int32_1ev_1int32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dx_j, jlong dy_j, jlong pSegments_j, jint nCount_j, jboolean bUseOutline_j)
				{
					ev_real64 *dx = (ev_real64*) dx_j;
					ev_real64 *dy = (ev_real64*) dy_j;
					ev_int32 *pSegments = (ev_int32*) pSegments_j;
					ev_int32 nCount = (ev_int32) nCount_j;
					ev_bool bUseOutline = (ev_bool) bUseOutline_j;
					EarthView::World::Spatial::Display::CSymbolRenderer *pObjectX = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbolRendererProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CSymbolRenderer::draw(dx, dy, pSegments, nCount, bUseOutline);
					}
					else
					{
						pObjectX->draw(dx, dy, pSegments, nCount, bUseOutline);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolRenderer_register_1draw_1ev_1real64_1ev_1real64_1ev_1int32_1ev_1int32_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbolRendererProxy *pObjectX = (JCSymbolRendererProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_draw_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"draw_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_callback", "(JJJIZ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolRenderer_draw_1ev_1real64_1ev_1real64_1ev_1int32_1ev_1int32_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dx_j, jlong dy_j, jlong pSegments_j, jint nCount_j, jboolean bUseOutline_j)
				{
					ev_real64 *dx = (ev_real64*) dx_j;
					ev_real64 *dy = (ev_real64*) dy_j;
					ev_int32 *pSegments = (ev_int32*) pSegments_j;
					ev_int32 nCount = (ev_int32) nCount_j;
					ev_bool bUseOutline = (ev_bool) bUseOutline_j;
					EarthView::World::Spatial::Display::CSymbolRenderer *pObjectX = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CSymbolRenderer::draw(dx, dy, pSegments, nCount, bUseOutline);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolRenderer_drawPath_1CDataPath(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pPath_j)
				{
					EarthView::World::Display::CDataPath *pPath = (EarthView::World::Display::CDataPath*) pPath_j;
					EarthView::World::Spatial::Display::CSymbolRenderer *pObjectX = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbolRendererProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CSymbolRenderer::drawPath(pPath);
					}
					else
					{
						pObjectX->drawPath(pPath);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolRenderer_register_1drawPath_1CDataPath(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbolRendererProxy *pObjectX = (JCSymbolRendererProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_drawPath_CDataPath_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"drawPath_CDataPath_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolRenderer_drawPath_1CDataPath_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pPath_j)
				{
					EarthView::World::Display::CDataPath *pPath = (EarthView::World::Display::CDataPath*) pPath_j;
					EarthView::World::Spatial::Display::CSymbolRenderer *pObjectX = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CSymbolRenderer::drawPath(pPath);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolRenderer_drawPath_1CDataPath_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pPath_j, jboolean bUseOutline_j)
				{
					EarthView::World::Display::CDataPath *pPath = (EarthView::World::Display::CDataPath*) pPath_j;
					ev_bool bUseOutline = (ev_bool) bUseOutline_j;
					EarthView::World::Spatial::Display::CSymbolRenderer *pObjectX = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbolRendererProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CSymbolRenderer::drawPath(pPath, bUseOutline);
					}
					else
					{
						pObjectX->drawPath(pPath, bUseOutline);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolRenderer_register_1drawPath_1CDataPath_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbolRendererProxy *pObjectX = (JCSymbolRendererProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_drawPath_CDataPath_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"drawPath_CDataPath_ev_bool_callback", "(JZ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolRenderer_drawPath_1CDataPath_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pPath_j, jboolean bUseOutline_j)
				{
					EarthView::World::Display::CDataPath *pPath = (EarthView::World::Display::CDataPath*) pPath_j;
					ev_bool bUseOutline = (ev_bool) bUseOutline_j;
					EarthView::World::Spatial::Display::CSymbolRenderer *pObjectX = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CSymbolRenderer::drawPath(pPath, bUseOutline);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolRenderer_endDraw_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CSymbolRenderer *pObjectX = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbolRendererProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CSymbolRenderer::endDraw();
					}
					else
					{
						pObjectX->endDraw();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolRenderer_register_1endDraw_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbolRendererProxy *pObjectX = (JCSymbolRendererProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolRenderer_endDraw_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CSymbolRenderer *pObjectX = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CSymbolRenderer::endDraw();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolRenderer_drawLegend_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble left_j, jdouble top_j, jdouble width_j, jdouble height_j)
				{
					ev_real64 left = (ev_real64) left_j;
					ev_real64 top = (ev_real64) top_j;
					ev_real64 width = (ev_real64) width_j;
					ev_real64 height = (ev_real64) height_j;
					EarthView::World::Spatial::Display::CSymbolRenderer *pObjectX = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbolRendererProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CSymbolRenderer::drawLegend(left, top, width, height);
					}
					else
					{
						pObjectX->drawLegend(left, top, width, height);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolRenderer_register_1drawLegend_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbolRendererProxy *pObjectX = (JCSymbolRendererProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_drawLegend_ev_real64_ev_real64_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"drawLegend_ev_real64_ev_real64_ev_real64_ev_real64_callback", "(DDDD)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolRenderer_drawLegend_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble left_j, jdouble top_j, jdouble width_j, jdouble height_j)
				{
					ev_real64 left = (ev_real64) left_j;
					ev_real64 top = (ev_real64) top_j;
					ev_real64 width = (ev_real64) width_j;
					ev_real64 height = (ev_real64) height_j;
					EarthView::World::Spatial::Display::CSymbolRenderer *pObjectX = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CSymbolRenderer::drawLegend(left, top, width, height);
				}
			}
		}
	}
}
