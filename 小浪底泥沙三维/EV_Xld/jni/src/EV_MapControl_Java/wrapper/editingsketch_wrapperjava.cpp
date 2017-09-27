/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/editingsketch.h"
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
				class JCEditingSketchProxy : public EarthView::World::Spatial2D::Controls::CEditingSketch
				{
				 private:
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_getGeometry_void_callback;
					EarthView::World::Core::ev_string m_finishPart_void_callback;
					EarthView::World::Core::ev_string m_translate_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_rotate_ev_real64_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_addPoint_CPoint_callback;
				public:
					JCEditingSketchProxy(EarthView::World::Core::CNameValuePairList *pList) : CEditingSketch(pList)
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
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					void register_getGeometry_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getGeometry_void_callback = __method;
					}
					void register_finishPart_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_finishPart_void_callback = __method;
					}
					void register_translate_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_translate_ev_real64_ev_real64_callback = __method;
					}
					void register_rotate_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_rotate_ev_real64_ev_real64_ev_real64_callback = __method;
					}
					void register_addPoint_CPoint_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addPoint_CPoint_callback = __method;
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getType() const
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
							EarthView::World::Spatial::Geometry::EVGeometryType __values1 = (EarthView::World::Spatial::Geometry::EVGeometryType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEditingSketch::getType();
						}
					}
					virtual const EarthView::World::Spatial::Geometry::IGeometry* getGeometry() const
					{
						if (this->_gRef != NULL && this->m_getGeometry_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getGeometry_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Geometry::IGeometry *__values1 = (const EarthView::World::Spatial::Geometry::IGeometry*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEditingSketch::getGeometry();
						}
					}
					virtual void finishPart()
					{
						if (this->_gRef != NULL && this->m_finishPart_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("finishPart_void_callback");
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
							return this->CEditingSketch::finishPart();
						}
					}
					virtual ev_bool translate(ev_real64 dx, ev_real64 dy)
					{
						if (this->_gRef != NULL && this->m_translate_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble dx_j = (jdouble) dx;
							jdouble dy_j = (jdouble) dy;
							jmethodID __method = __gr->getMethod("translate_ev_real64_ev_real64_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , dx_j, dy_j);
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
							return this->CEditingSketch::translate(dx, dy);
						}
					}
					virtual ev_bool rotate(ev_real64 x, ev_real64 y, ev_real64 angle)
					{
						if (this->_gRef != NULL && this->m_rotate_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble angle_j = (jdouble) angle;
							jmethodID __method = __gr->getMethod("rotate_ev_real64_ev_real64_ev_real64_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , x_j, y_j, angle_j);
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
							return this->CEditingSketch::rotate(x, y, angle);
						}
					}
					virtual void addPoint(EarthView::World::Spatial::Geometry::CPoint& pnt)
					{
						if (this->_gRef != NULL && this->m_addPoint_CPoint_callback != "" && this->isCustomExtend())
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
							jlong pnt_j = (jlong) &pnt;
							jmethodID __method = __gr->getMethod("addPoint_CPoint_callback");
							__env->CallVoidMethod(__obj, __method , pnt_j);
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
							return this->CEditingSketch::addPoint(pnt);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCEditingSketchProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEditingSketch *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEditingSketchProxy))
					{
						EarthView::World::Spatial::Geometry::EVGeometryType __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingSketch::getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVGeometryType __values1 = pObjectX->getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingSketchProxy *pObjectX = (JCEditingSketchProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEditingSketch *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingSketch::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_getGeometry_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEditingSketch *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEditingSketchProxy))
					{
						const EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingSketch::getGeometry();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->getGeometry();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_register_1getGeometry_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingSketchProxy *pObjectX = (JCEditingSketchProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getGeometry_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getGeometry_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_getGeometry_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEditingSketch *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingSketch::getGeometry();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_finishPart_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CEditingSketch *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEditingSketchProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::CEditingSketch::finishPart();
					}
					else
					{
						pObjectX->finishPart();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_register_1finishPart_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingSketchProxy *pObjectX = (JCEditingSketchProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_finishPart_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"finishPart_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_finishPart_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CEditingSketch *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::CEditingSketch::finishPart();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_translate_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dx_j, jdouble dy_j)
				{
					ev_real64 dx = (ev_real64) dx_j;
					ev_real64 dy = (ev_real64) dy_j;
					EarthView::World::Spatial2D::Controls::CEditingSketch *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEditingSketchProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingSketch::translate(dx, dy);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->translate(dx, dy);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_register_1translate_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingSketchProxy *pObjectX = (JCEditingSketchProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_translate_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"translate_ev_real64_ev_real64_callback", "(DD)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_translate_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dx_j, jdouble dy_j)
				{
					ev_real64 dx = (ev_real64) dx_j;
					ev_real64 dy = (ev_real64) dy_j;
					EarthView::World::Spatial2D::Controls::CEditingSketch *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingSketch::translate(dx, dy);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_rotate_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble angle_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					ev_real64 angle = (ev_real64) angle_j;
					EarthView::World::Spatial2D::Controls::CEditingSketch *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEditingSketchProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingSketch::rotate(x, y, angle);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->rotate(x, y, angle);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_register_1rotate_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingSketchProxy *pObjectX = (JCEditingSketchProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_rotate_ev_real64_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"rotate_ev_real64_ev_real64_ev_real64_callback", "(DDD)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_rotate_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble angle_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					ev_real64 angle = (ev_real64) angle_j;
					EarthView::World::Spatial2D::Controls::CEditingSketch *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingSketch::rotate(x, y, angle);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_getPointCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEditingSketch *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getPointCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_getPartCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEditingSketch *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getPartCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_indexForPart_1CEditingObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong part_j)
				{
					EarthView::World::Spatial2D::Controls::CEditingObject *part = (EarthView::World::Spatial2D::Controls::CEditingObject*) part_j;
					const 					EarthView::World::Spatial2D::Controls::CEditingSketch *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjXXXX;
					ev_int32 __values1 = pObjectX->indexForPart(part);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_getPart_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					const 					EarthView::World::Spatial2D::Controls::CEditingSketch *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CEditingObject* __values1 = pObjectX->getPart(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_getLastPart_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEditingSketch *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CEditingObject* __values1 = pObjectX->getLastPart();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_insertPart_1CEditingObject_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong part_j, jint index_j)
				{
					EarthView::World::Spatial2D::Controls::CEditingObject *part = (EarthView::World::Spatial2D::Controls::CEditingObject*) part_j;
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Spatial2D::Controls::CEditingSketch *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjXXXX;
					ev_bool __values1 = pObjectX->insertPart(part, index);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_removePart_1CEditingObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong part_j)
				{
					EarthView::World::Spatial2D::Controls::CEditingObject *part = (EarthView::World::Spatial2D::Controls::CEditingObject*) part_j;
					EarthView::World::Spatial2D::Controls::CEditingSketch *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjXXXX;
					ev_bool __values1 = pObjectX->removePart(part);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CEditingSketch *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_addPoint_1CPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pnt_j)
				{
					EarthView::World::Spatial::Geometry::CPoint &pnt = *(EarthView::World::Spatial::Geometry::CPoint*) pnt_j;
					EarthView::World::Spatial2D::Controls::CEditingSketch *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEditingSketchProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::CEditingSketch::addPoint(pnt);
					}
					else
					{
						pObjectX->addPoint(pnt);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_register_1addPoint_1CPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingSketchProxy *pObjectX = (JCEditingSketchProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addPoint_CPoint_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addPoint_CPoint_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingSketch_addPoint_1CPoint_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pnt_j)
				{
					EarthView::World::Spatial::Geometry::CPoint &pnt = *(EarthView::World::Spatial::Geometry::CPoint*) pnt_j;
					EarthView::World::Spatial2D::Controls::CEditingSketch *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::CEditingSketch::addPoint(pnt);
				}
			}
		}
	}
}
