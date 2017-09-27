/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/trackinggeomitemex.h"
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
			namespace Controls
			{
				class JCTrackingGeomItemExProxy : public EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx
				{
				 private:
					EarthView::World::Core::ev_string m_boundingRect_void_callback;
					EarthView::World::Core::ev_string m_paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_callback;
					EarthView::World::Core::ev_string m_isContains_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_type_void_callback;
				public:
					JCTrackingGeomItemExProxy(EarthView::World::Core::CNameValuePairList *pList) : CTrackingGeomItemEx(pList)
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
					void register_boundingRect_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_boundingRect_void_callback = __method;
					}
					void register_paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_callback = __method;
					}
					void register_isContains_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isContains_ev_real64_ev_real64_callback = __method;
					}
					void register_type_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_type_void_callback = __method;
					}
					virtual void paint(EarthView::World::Spatial::Display::ISpatialDisplay* display, const EarthView::World::Spatial2D::Controls::EVTrackingItemState& state, const EarthView::World::Spatial::Display::CSpatialRect& rect)
					{
						if (this->_gRef != NULL && this->m_paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_callback != "" && this->isCustomExtend())
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
							jint state_j = (jint) state;
							jlong rect_j = (jlong) &rect;
							jmethodID __method = __gr->getMethod("paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_callback");
							__env->CallVoidMethod(__obj, __method , display_j, state_j, rect_j);
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
							return this->CTrackingGeomItemEx::paint(display, state, rect);
						}
					}
					virtual ev_int32 type() const
					{
						if (this->_gRef != NULL && this->m_type_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("type_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTrackingGeomItemEx::type();
						}
					}
					virtual EarthView::World::Spatial::Display::CSpatialRect boundingRect() const
					{
						if (this->_gRef != NULL && this->m_boundingRect_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("boundingRect_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::CSpatialRect __values1 = *(EarthView::World::Spatial::Display::CSpatialRect*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTrackingGeomItemEx::boundingRect();
						}
					}
					virtual ev_bool isContains(ev_real64 x, ev_real64 y) const
					{
						if (this->_gRef != NULL && this->m_isContains_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble x_j = (jdouble) x;
							jdouble y_j = (jdouble) y;
							jmethodID __method = __gr->getMethod("isContains_ev_real64_ev_real64_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , x_j, y_j);
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
							return this->CTrackingGeomItemEx::isContains(x, y);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCTrackingGeomItemExProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingGeomItemEx_paint_1ISpatialDisplay_1EVTrackingItemState_1CSpatialRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jint state_j, jlong rect_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					const EarthView::World::Spatial2D::Controls::EVTrackingItemState state = (const EarthView::World::Spatial2D::Controls::EVTrackingItemState) state_j;
					const EarthView::World::Spatial::Display::CSpatialRect &rect = *(EarthView::World::Spatial::Display::CSpatialRect*) rect_j;
					EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTrackingGeomItemExProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx::paint(display, state, rect);
					}
					else
					{
						pObjectX->paint(display, state, rect);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingGeomItemEx_register_1paint_1ISpatialDisplay_1EVTrackingItemState_1CSpatialRect(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingGeomItemExProxy *pObjectX = (JCTrackingGeomItemExProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_callback", "(JIJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingGeomItemEx_paint_1ISpatialDisplay_1EVTrackingItemState_1CSpatialRect_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jint state_j, jlong rect_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					const EarthView::World::Spatial2D::Controls::EVTrackingItemState state = (const EarthView::World::Spatial2D::Controls::EVTrackingItemState) state_j;
					const EarthView::World::Spatial::Display::CSpatialRect &rect = *(EarthView::World::Spatial::Display::CSpatialRect*) rect_j;
					EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx::paint(display, state, rect);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_TrackingGeomItemEx_type_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTrackingGeomItemExProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx::type();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->type();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingGeomItemEx_register_1type_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingGeomItemExProxy *pObjectX = (JCTrackingGeomItemExProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_type_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"type_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_TrackingGeomItemEx_type_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx::type();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingGeomItemEx_setVertexSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx*) pObjXXXX;
					pObjectX->setVertexSymbol(symbol);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_TrackingGeomItemEx_getVertexSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx*) pObjXXXX;
					const EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getVertexSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingGeomItemEx_register_1boundingRect_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingGeomItemExProxy *pObjectX = (JCTrackingGeomItemExProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_boundingRect_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"boundingRect_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingGeomItemEx_register_1isContains_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingGeomItemExProxy *pObjectX = (JCTrackingGeomItemExProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isContains_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isContains_ev_real64_ev_real64_callback", "(DD)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
