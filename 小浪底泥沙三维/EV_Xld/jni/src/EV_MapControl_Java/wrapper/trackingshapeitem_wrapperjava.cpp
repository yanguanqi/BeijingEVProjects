/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/trackingshapeitem.h"
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
			}
			namespace Geometry
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				class JCTrackingShapeItemProxy : public EarthView::World::Spatial2D::Controls::CTrackingShapeItem
				{
				 private:
					EarthView::World::Core::ev_string m_boundingRect_void_callback;
					EarthView::World::Core::ev_string m_paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_callback;
					EarthView::World::Core::ev_string m_isContains_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_type_void_callback;
				public:
					JCTrackingShapeItemProxy(EarthView::World::Core::CNameValuePairList *pList) : CTrackingShapeItem(pList)
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
							return this->CTrackingShapeItem::boundingRect();
						}
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
							return this->CTrackingShapeItem::paint(display, state, rect);
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
							return this->CTrackingShapeItem::isContains(x, y);
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
							return this->CTrackingShapeItem::type();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCTrackingShapeItemProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingShapeItem_setPenColor_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong clr_j)
				{
					const EarthView::World::Spatial::Display::IColor *clr = (const EarthView::World::Spatial::Display::IColor*) clr_j;
					EarthView::World::Spatial2D::Controls::CTrackingShapeItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingShapeItem*) pObjXXXX;
					pObjectX->setPenColor(clr);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_TrackingShapeItem_getPenColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingShapeItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingShapeItem*) pObjXXXX;
					const EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->getPenColor();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingShapeItem_setPenWidth_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble width_j)
				{
					ev_real64 width = (ev_real64) width_j;
					EarthView::World::Spatial2D::Controls::CTrackingShapeItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingShapeItem*) pObjXXXX;
					pObjectX->setPenWidth(width);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_TrackingShapeItem_getPenWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingShapeItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingShapeItem*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getPenWidth();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingShapeItem_register_1boundingRect_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingShapeItemProxy *pObjectX = (JCTrackingShapeItemProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingShapeItem_register_1paint_1ISpatialDisplay_1EVTrackingItemState_1CSpatialRect(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingShapeItemProxy *pObjectX = (JCTrackingShapeItemProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingShapeItem_register_1isContains_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingShapeItemProxy *pObjectX = (JCTrackingShapeItemProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingShapeItem_register_1type_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingShapeItemProxy *pObjectX = (JCTrackingShapeItemProxy*) pObjXXXX;
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
				class JCTrackingPolylineItemProxy : public EarthView::World::Spatial2D::Controls::CTrackingPolylineItem
				{
				 private:
					EarthView::World::Core::ev_string m_boundingRect_void_callback;
					EarthView::World::Core::ev_string m_paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_callback;
					EarthView::World::Core::ev_string m_isContains_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_type_void_callback;
				public:
					JCTrackingPolylineItemProxy(EarthView::World::Core::CNameValuePairList *pList) : CTrackingPolylineItem(pList)
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
							return this->CTrackingPolylineItem::boundingRect();
						}
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
							return this->CTrackingPolylineItem::paint(display, state, rect);
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
							return this->CTrackingPolylineItem::isContains(x, y);
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
							return this->CTrackingPolylineItem::type();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCTrackingPolylineItemProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_TrackingPolylineItem_boundingRect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingPolylineItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTrackingPolylineItemProxy))
					{
						EarthView::World::Spatial::Display::CSpatialRect __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingPolylineItem::boundingRect();
						EarthView::World::Spatial::Display::CSpatialRect *returnvalues = new EarthView::World::Spatial::Display::CSpatialRect(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::CSpatialRect __values1 = pObjectX->boundingRect();
						EarthView::World::Spatial::Display::CSpatialRect *returnvalues = new EarthView::World::Spatial::Display::CSpatialRect(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingPolylineItem_register_1boundingRect_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingPolylineItemProxy *pObjectX = (JCTrackingPolylineItemProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_TrackingPolylineItem_boundingRect_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingPolylineItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjXXXX;
					EarthView::World::Spatial::Display::CSpatialRect __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingPolylineItem::boundingRect();
					EarthView::World::Spatial::Display::CSpatialRect *returnvalues = new EarthView::World::Spatial::Display::CSpatialRect(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingPolylineItem_paint_1ISpatialDisplay_1EVTrackingItemState_1CSpatialRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jint state_j, jlong rect_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					const EarthView::World::Spatial2D::Controls::EVTrackingItemState state = (const EarthView::World::Spatial2D::Controls::EVTrackingItemState) state_j;
					const EarthView::World::Spatial::Display::CSpatialRect &rect = *(EarthView::World::Spatial::Display::CSpatialRect*) rect_j;
					EarthView::World::Spatial2D::Controls::CTrackingPolylineItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTrackingPolylineItemProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::CTrackingPolylineItem::paint(display, state, rect);
					}
					else
					{
						pObjectX->paint(display, state, rect);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingPolylineItem_register_1paint_1ISpatialDisplay_1EVTrackingItemState_1CSpatialRect(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingPolylineItemProxy *pObjectX = (JCTrackingPolylineItemProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingPolylineItem_paint_1ISpatialDisplay_1EVTrackingItemState_1CSpatialRect_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jint state_j, jlong rect_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					const EarthView::World::Spatial2D::Controls::EVTrackingItemState state = (const EarthView::World::Spatial2D::Controls::EVTrackingItemState) state_j;
					const EarthView::World::Spatial::Display::CSpatialRect &rect = *(EarthView::World::Spatial::Display::CSpatialRect*) rect_j;
					EarthView::World::Spatial2D::Controls::CTrackingPolylineItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::CTrackingPolylineItem::paint(display, state, rect);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_TrackingPolylineItem_isContains_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					const 					EarthView::World::Spatial2D::Controls::CTrackingPolylineItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTrackingPolylineItemProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingPolylineItem::isContains(x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isContains(x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingPolylineItem_register_1isContains_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingPolylineItemProxy *pObjectX = (JCTrackingPolylineItemProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_TrackingPolylineItem_isContains_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					const 					EarthView::World::Spatial2D::Controls::CTrackingPolylineItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingPolylineItem::isContains(x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_TrackingPolylineItem_type_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingPolylineItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTrackingPolylineItemProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingPolylineItem::type();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingPolylineItem_register_1type_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingPolylineItemProxy *pObjectX = (JCTrackingPolylineItemProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_TrackingPolylineItem_type_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingPolylineItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingPolylineItem::type();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingPolylineItem_setPolyline_1CLineString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lstr_j)
				{
					const EarthView::World::Spatial::Geometry::CLineString *lstr = (const EarthView::World::Spatial::Geometry::CLineString*) lstr_j;
					EarthView::World::Spatial2D::Controls::CTrackingPolylineItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjXXXX;
					pObjectX->setPolyline(lstr);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_TrackingPolylineItem_getPolyline_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingPolylineItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::CLineString* __values1 = pObjectX->getPolyline();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				class JCTrackingFillShapeItemProxy : public EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem
				{
				 private:
					EarthView::World::Core::ev_string m_boundingRect_void_callback;
					EarthView::World::Core::ev_string m_paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_callback;
					EarthView::World::Core::ev_string m_isContains_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_type_void_callback;
				public:
					JCTrackingFillShapeItemProxy(EarthView::World::Core::CNameValuePairList *pList) : CTrackingFillShapeItem(pList)
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
							return this->CTrackingFillShapeItem::boundingRect();
						}
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
							return this->CTrackingFillShapeItem::paint(display, state, rect);
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
							return this->CTrackingFillShapeItem::isContains(x, y);
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
							return this->CTrackingFillShapeItem::type();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCTrackingFillShapeItemProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingFillShapeItem_setFillColor_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong clr_j)
				{
					const EarthView::World::Spatial::Display::IColor *clr = (const EarthView::World::Spatial::Display::IColor*) clr_j;
					EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem*) pObjXXXX;
					pObjectX->setFillColor(clr);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_TrackingFillShapeItem_getFillColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem*) pObjXXXX;
					const EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->getFillColor();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingFillShapeItem_setFill_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bFill_j)
				{
					ev_bool bFill = (ev_bool) bFill_j;
					EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem*) pObjXXXX;
					pObjectX->setFill(bFill);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_TrackingFillShapeItem_isFill_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem*) pObjXXXX;
					ev_bool __values1 = pObjectX->isFill();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingFillShapeItem_register_1boundingRect_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingFillShapeItemProxy *pObjectX = (JCTrackingFillShapeItemProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingFillShapeItem_register_1paint_1ISpatialDisplay_1EVTrackingItemState_1CSpatialRect(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingFillShapeItemProxy *pObjectX = (JCTrackingFillShapeItemProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingFillShapeItem_register_1isContains_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingFillShapeItemProxy *pObjectX = (JCTrackingFillShapeItemProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingFillShapeItem_register_1type_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingFillShapeItemProxy *pObjectX = (JCTrackingFillShapeItemProxy*) pObjXXXX;
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
				class JCTrackingRectItemProxy : public EarthView::World::Spatial2D::Controls::CTrackingRectItem
				{
				 private:
					EarthView::World::Core::ev_string m_boundingRect_void_callback;
					EarthView::World::Core::ev_string m_paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_callback;
					EarthView::World::Core::ev_string m_isContains_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_type_void_callback;
				public:
					JCTrackingRectItemProxy(EarthView::World::Core::CNameValuePairList *pList) : CTrackingRectItem(pList)
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
							return this->CTrackingRectItem::boundingRect();
						}
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
							return this->CTrackingRectItem::paint(display, state, rect);
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
							return this->CTrackingRectItem::isContains(x, y);
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
							return this->CTrackingRectItem::type();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCTrackingRectItemProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_TrackingRectItem_boundingRect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingRectItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTrackingRectItemProxy))
					{
						EarthView::World::Spatial::Display::CSpatialRect __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingRectItem::boundingRect();
						EarthView::World::Spatial::Display::CSpatialRect *returnvalues = new EarthView::World::Spatial::Display::CSpatialRect(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::CSpatialRect __values1 = pObjectX->boundingRect();
						EarthView::World::Spatial::Display::CSpatialRect *returnvalues = new EarthView::World::Spatial::Display::CSpatialRect(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingRectItem_register_1boundingRect_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingRectItemProxy *pObjectX = (JCTrackingRectItemProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_TrackingRectItem_boundingRect_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingRectItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjXXXX;
					EarthView::World::Spatial::Display::CSpatialRect __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingRectItem::boundingRect();
					EarthView::World::Spatial::Display::CSpatialRect *returnvalues = new EarthView::World::Spatial::Display::CSpatialRect(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingRectItem_paint_1ISpatialDisplay_1EVTrackingItemState_1CSpatialRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jint state_j, jlong rect_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					const EarthView::World::Spatial2D::Controls::EVTrackingItemState state = (const EarthView::World::Spatial2D::Controls::EVTrackingItemState) state_j;
					const EarthView::World::Spatial::Display::CSpatialRect &rect = *(EarthView::World::Spatial::Display::CSpatialRect*) rect_j;
					EarthView::World::Spatial2D::Controls::CTrackingRectItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTrackingRectItemProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::CTrackingRectItem::paint(display, state, rect);
					}
					else
					{
						pObjectX->paint(display, state, rect);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingRectItem_register_1paint_1ISpatialDisplay_1EVTrackingItemState_1CSpatialRect(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingRectItemProxy *pObjectX = (JCTrackingRectItemProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingRectItem_paint_1ISpatialDisplay_1EVTrackingItemState_1CSpatialRect_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jint state_j, jlong rect_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					const EarthView::World::Spatial2D::Controls::EVTrackingItemState state = (const EarthView::World::Spatial2D::Controls::EVTrackingItemState) state_j;
					const EarthView::World::Spatial::Display::CSpatialRect &rect = *(EarthView::World::Spatial::Display::CSpatialRect*) rect_j;
					EarthView::World::Spatial2D::Controls::CTrackingRectItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::CTrackingRectItem::paint(display, state, rect);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_TrackingRectItem_isContains_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					const 					EarthView::World::Spatial2D::Controls::CTrackingRectItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTrackingRectItemProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingRectItem::isContains(x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isContains(x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingRectItem_register_1isContains_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingRectItemProxy *pObjectX = (JCTrackingRectItemProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_TrackingRectItem_isContains_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					const 					EarthView::World::Spatial2D::Controls::CTrackingRectItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingRectItem::isContains(x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_TrackingRectItem_type_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingRectItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTrackingRectItemProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingRectItem::type();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingRectItem_register_1type_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingRectItemProxy *pObjectX = (JCTrackingRectItemProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_TrackingRectItem_type_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingRectItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingRectItem::type();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingRectItem_setRect_1CSpatialRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rect_j)
				{
					const EarthView::World::Spatial::Display::CSpatialRect &rect = *(EarthView::World::Spatial::Display::CSpatialRect*) rect_j;
					EarthView::World::Spatial2D::Controls::CTrackingRectItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjXXXX;
					pObjectX->setRect(rect);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_TrackingRectItem_getRect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingRectItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjXXXX;
					EarthView::World::Spatial::Display::CSpatialRect __values1 = pObjectX->getRect();
					EarthView::World::Spatial::Display::CSpatialRect *returnvalues = new EarthView::World::Spatial::Display::CSpatialRect(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				class JCTrackingEllipseItemProxy : public EarthView::World::Spatial2D::Controls::CTrackingEllipseItem
				{
				 private:
					EarthView::World::Core::ev_string m_boundingRect_void_callback;
					EarthView::World::Core::ev_string m_paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_callback;
					EarthView::World::Core::ev_string m_isContains_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_type_void_callback;
				public:
					JCTrackingEllipseItemProxy(EarthView::World::Core::CNameValuePairList *pList) : CTrackingEllipseItem(pList)
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
							return this->CTrackingEllipseItem::paint(display, state, rect);
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
							return this->CTrackingEllipseItem::isContains(x, y);
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
							return this->CTrackingEllipseItem::type();
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
							return this->CTrackingEllipseItem::boundingRect();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCTrackingEllipseItemProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingEllipseItem_paint_1ISpatialDisplay_1EVTrackingItemState_1CSpatialRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jint state_j, jlong rect_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					const EarthView::World::Spatial2D::Controls::EVTrackingItemState state = (const EarthView::World::Spatial2D::Controls::EVTrackingItemState) state_j;
					const EarthView::World::Spatial::Display::CSpatialRect &rect = *(EarthView::World::Spatial::Display::CSpatialRect*) rect_j;
					EarthView::World::Spatial2D::Controls::CTrackingEllipseItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingEllipseItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTrackingEllipseItemProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::CTrackingEllipseItem::paint(display, state, rect);
					}
					else
					{
						pObjectX->paint(display, state, rect);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingEllipseItem_register_1paint_1ISpatialDisplay_1EVTrackingItemState_1CSpatialRect(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingEllipseItemProxy *pObjectX = (JCTrackingEllipseItemProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingEllipseItem_paint_1ISpatialDisplay_1EVTrackingItemState_1CSpatialRect_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jint state_j, jlong rect_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					const EarthView::World::Spatial2D::Controls::EVTrackingItemState state = (const EarthView::World::Spatial2D::Controls::EVTrackingItemState) state_j;
					const EarthView::World::Spatial::Display::CSpatialRect &rect = *(EarthView::World::Spatial::Display::CSpatialRect*) rect_j;
					EarthView::World::Spatial2D::Controls::CTrackingEllipseItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingEllipseItem*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::CTrackingEllipseItem::paint(display, state, rect);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_TrackingEllipseItem_isContains_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					const 					EarthView::World::Spatial2D::Controls::CTrackingEllipseItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingEllipseItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTrackingEllipseItemProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingEllipseItem::isContains(x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isContains(x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingEllipseItem_register_1isContains_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingEllipseItemProxy *pObjectX = (JCTrackingEllipseItemProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_TrackingEllipseItem_isContains_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					const 					EarthView::World::Spatial2D::Controls::CTrackingEllipseItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingEllipseItem*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingEllipseItem::isContains(x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_TrackingEllipseItem_type_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingEllipseItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingEllipseItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTrackingEllipseItemProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingEllipseItem::type();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingEllipseItem_register_1type_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingEllipseItemProxy *pObjectX = (JCTrackingEllipseItemProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_TrackingEllipseItem_type_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingEllipseItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingEllipseItem*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingEllipseItem::type();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingEllipseItem_register_1boundingRect_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingEllipseItemProxy *pObjectX = (JCTrackingEllipseItemProxy*) pObjXXXX;
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
			}
		}
	}
}
