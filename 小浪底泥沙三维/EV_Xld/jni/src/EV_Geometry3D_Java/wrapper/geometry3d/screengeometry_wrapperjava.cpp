/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geometry3d/screengeometry.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_geometry3d_ScreenGeometryCoordinateTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					SGCT_Pixel,
					SGCT_Identity
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			class JCScreenGeometryProxy : public EarthView::World::Geometry3D::CScreenGeometry
			{
			 private:
				EarthView::World::Core::ev_string m_render_void_callback;
				EarthView::World::Core::ev_string m_derender_void_callback;
				EarthView::World::Core::ev_string m_setVisible_ev_bool_callback;
				EarthView::World::Core::ev_string m_getVisible_void_callback;
				EarthView::World::Core::ev_string m_setRenderQueueGroup_ev_uint8_callback;
				EarthView::World::Core::ev_string m_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getRenderQueueGroup_void_callback;
				EarthView::World::Core::ev_string m_getMaterial_void_callback;
				EarthView::World::Core::ev_string m_flash_CColourValue_ev_uint32_ev_uint32_ev_uint32_callback;
				EarthView::World::Core::ev_string m_endFlash_void_callback;
			public:
				JCScreenGeometryProxy(EarthView::World::Core::CNameValuePairList *pList) : CScreenGeometry(pList)
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
				void register_render_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_render_void_callback = __method;
				}
				void register_derender_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_derender_void_callback = __method;
				}
				void register_setVisible_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setVisible_ev_bool_callback = __method;
				}
				void register_getVisible_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getVisible_void_callback = __method;
				}
				void register_setRenderQueueGroup_ev_uint8_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setRenderQueueGroup_ev_uint8_callback = __method;
				}
				void register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback = __method;
				}
				void register_getRenderQueueGroup_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRenderQueueGroup_void_callback = __method;
				}
				void register_getMaterial_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMaterial_void_callback = __method;
				}
				void register_flash_CColourValue_ev_uint32_ev_uint32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_flash_CColourValue_ev_uint32_ev_uint32_ev_uint32_callback = __method;
				}
				void register_endFlash_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_endFlash_void_callback = __method;
				}
				virtual void render()
				{
					if (this->_gRef != NULL && this->m_render_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("render_void_callback");
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
						return this->CScreenGeometry::render();
					}
				}
				virtual void derender()
				{
					if (this->_gRef != NULL && this->m_derender_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("derender_void_callback");
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
						return this->CScreenGeometry::derender();
					}
				}
				virtual void setVisible(ev_bool visible)
				{
					if (this->_gRef != NULL && this->m_setVisible_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean visible_j = (jboolean) visible;
						jmethodID __method = __gr->getMethod("setVisible_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , visible_j);
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
						return this->CScreenGeometry::setVisible(visible);
					}
				}
				virtual ev_bool getVisible() const
				{
					if (this->_gRef != NULL && this->m_getVisible_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getVisible_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
						return this->CScreenGeometry::getVisible();
					}
				}
				virtual void setRenderQueueGroup(ev_uint8 queueID)
				{
					if (this->_gRef != NULL && this->m_setRenderQueueGroup_ev_uint8_callback != "" && this->isCustomExtend())
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
						jshort queueID_j = (jshort) queueID;
						jmethodID __method = __gr->getMethod("setRenderQueueGroup_ev_uint8_callback");
						__env->CallVoidMethod(__obj, __method , queueID_j);
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
						return this->CScreenGeometry::setRenderQueueGroup(queueID);
					}
				}
				virtual void setRenderQueueGroupAndPriority(ev_uint8 queueID, ev_uint16 priority)
				{
					if (this->_gRef != NULL && this->m_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback != "" && this->isCustomExtend())
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
						jshort queueID_j = (jshort) queueID;
						jint priority_j = (jint) priority;
						jmethodID __method = __gr->getMethod("setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , queueID_j, priority_j);
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
						return this->CScreenGeometry::setRenderQueueGroupAndPriority(queueID, priority);
					}
				}
				virtual ev_uint8 getRenderQueueGroup() const
				{
					if (this->_gRef != NULL && this->m_getRenderQueueGroup_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getRenderQueueGroup_void_callback");
						jshort __values1_j = (jshort)__env->CallShortMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint8 __values1 = (ev_uint8) __values1_j;
						return __values1;
					}
					else
					{
						return this->CScreenGeometry::getRenderQueueGroup();
					}
				}
				virtual EarthView::World::Graphic::CMaterialPtr& getMaterial()
				{
					if (this->_gRef != NULL && this->m_getMaterial_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getMaterial_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CMaterialPtr &__values1 = *(EarthView::World::Graphic::CMaterialPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CScreenGeometry::getMaterial();
					}
				}
				virtual void flash(const EarthView::World::Graphic::CColourValue& color, ev_uint32 hightLight_ms, ev_uint32 normally_ms, ev_uint32 flashCount)
				{
					if (this->_gRef != NULL && this->m_flash_CColourValue_ev_uint32_ev_uint32_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong color_j = (jlong) &color;
						jlong hightLight_ms_j = (jlong) hightLight_ms;
						jlong normally_ms_j = (jlong) normally_ms;
						jlong flashCount_j = (jlong) flashCount;
						jmethodID __method = __gr->getMethod("flash_CColourValue_ev_uint32_ev_uint32_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , color_j, hightLight_ms_j, normally_ms_j, flashCount_j);
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
						return this->CScreenGeometry::flash(color, hightLight_ms, normally_ms, flashCount);
					}
				}
				virtual void endFlash()
				{
					if (this->_gRef != NULL && this->m_endFlash_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("endFlash_void_callback");
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
						return this->CScreenGeometry::endFlash();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCScreenGeometryProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_setCoordinateType_1ScreenGeometryCoordinateType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
			{
				EarthView::World::Geometry3D::ScreenGeometryCoordinateType type = (EarthView::World::Geometry3D::ScreenGeometryCoordinateType) type_j;
				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				pObjectX->setCoordinateType(type);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_getCoordinateType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				EarthView::World::Geometry3D::ScreenGeometryCoordinateType __values1 = pObjectX->getCoordinateType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_addChildViewport_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_viewport_j)
			{
				EarthView::World::Graphic::CViewport *ref_viewport = (EarthView::World::Graphic::CViewport*) ref_viewport_j;
				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				pObjectX->addChildViewport(ref_viewport);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_hasChildViewport_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_viewport_j)
			{
				EarthView::World::Graphic::CViewport *ref_viewport = (EarthView::World::Graphic::CViewport*) ref_viewport_j;
				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasChildViewport(ref_viewport);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_removeChildViewport_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_viewport_j)
			{
				EarthView::World::Graphic::CViewport *ref_viewport = (EarthView::World::Graphic::CViewport*) ref_viewport_j;
				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				ev_bool __values1 = pObjectX->removeChildViewport(ref_viewport);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_setVisibleInGlobeViewport_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				ev_bool value = (ev_bool) value_j;
				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				ev_bool __values1 = pObjectX->setVisibleInGlobeViewport(value);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_render_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScreenGeometryProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CScreenGeometry::render();
				}
				else
				{
					pObjectX->render();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_register_1render_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScreenGeometryProxy *pObjectX = (JCScreenGeometryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_render_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"render_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_render_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CScreenGeometry::render();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_derender_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScreenGeometryProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CScreenGeometry::derender();
				}
				else
				{
					pObjectX->derender();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_register_1derender_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScreenGeometryProxy *pObjectX = (JCScreenGeometryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_derender_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"derender_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_derender_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CScreenGeometry::derender();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
			{
				ev_bool visible = (ev_bool) visible_j;
				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScreenGeometryProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CScreenGeometry::setVisible(visible);
				}
				else
				{
					pObjectX->setVisible(visible);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_register_1setVisible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScreenGeometryProxy *pObjectX = (JCScreenGeometryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setVisible_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setVisible_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_setVisible_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
			{
				ev_bool visible = (ev_bool) visible_j;
				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CScreenGeometry::setVisible(visible);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_getVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScreenGeometryProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CScreenGeometry::getVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_register_1getVisible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScreenGeometryProxy *pObjectX = (JCScreenGeometryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getVisible_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getVisible_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_getVisible_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CScreenGeometry::getVisible();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_setRenderQueueGroup_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort queueID_j)
			{
				ev_uint8 queueID = (ev_uint8) queueID_j;
				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScreenGeometryProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CScreenGeometry::setRenderQueueGroup(queueID);
				}
				else
				{
					pObjectX->setRenderQueueGroup(queueID);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_register_1setRenderQueueGroup_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScreenGeometryProxy *pObjectX = (JCScreenGeometryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setRenderQueueGroup_ev_uint8_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setRenderQueueGroup_ev_uint8_callback", "(S)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_setRenderQueueGroup_1ev_1uint8_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort queueID_j)
			{
				ev_uint8 queueID = (ev_uint8) queueID_j;
				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CScreenGeometry::setRenderQueueGroup(queueID);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_setRenderQueueGroupAndPriority_1ev_1uint8_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort queueID_j, jint priority_j)
			{
				ev_uint8 queueID = (ev_uint8) queueID_j;
				ev_uint16 priority = (ev_uint16) priority_j;
				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScreenGeometryProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CScreenGeometry::setRenderQueueGroupAndPriority(queueID, priority);
				}
				else
				{
					pObjectX->setRenderQueueGroupAndPriority(queueID, priority);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_register_1setRenderQueueGroupAndPriority_1ev_1uint8_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScreenGeometryProxy *pObjectX = (JCScreenGeometryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback", "(SI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_setRenderQueueGroupAndPriority_1ev_1uint8_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort queueID_j, jint priority_j)
			{
				ev_uint8 queueID = (ev_uint8) queueID_j;
				ev_uint16 priority = (ev_uint16) priority_j;
				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CScreenGeometry::setRenderQueueGroupAndPriority(queueID, priority);
			}
			extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_getRenderQueueGroup_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScreenGeometryProxy))
				{
					ev_uint8 __values1 = pObjectX->EarthView::World::Geometry3D::CScreenGeometry::getRenderQueueGroup();
					jshort __values1_j = (jshort) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint8 __values1 = pObjectX->getRenderQueueGroup();
					jshort __values1_j = (jshort) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_register_1getRenderQueueGroup_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScreenGeometryProxy *pObjectX = (JCScreenGeometryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRenderQueueGroup_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRenderQueueGroup_void_callback", "()S");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_getRenderQueueGroup_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				ev_uint8 __values1 = pObjectX->EarthView::World::Geometry3D::CScreenGeometry::getRenderQueueGroup();
				jshort __values1_j = (jshort) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_getMaterial_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScreenGeometryProxy))
				{
					EarthView::World::Graphic::CMaterialPtr& __values1 = pObjectX->EarthView::World::Geometry3D::CScreenGeometry::getMaterial();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CMaterialPtr& __values1 = pObjectX->getMaterial();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_register_1getMaterial_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScreenGeometryProxy *pObjectX = (JCScreenGeometryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMaterial_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMaterial_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_getMaterial_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				EarthView::World::Graphic::CMaterialPtr& __values1 = pObjectX->EarthView::World::Geometry3D::CScreenGeometry::getMaterial();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_flash_1CColourValue_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j, jlong hightLight_ms_j, jlong normally_ms_j, jlong flashCount_j)
			{
				const EarthView::World::Graphic::CColourValue &color = *(EarthView::World::Graphic::CColourValue*) color_j;
				ev_uint32 hightLight_ms = (ev_uint32) hightLight_ms_j;
				ev_uint32 normally_ms = (ev_uint32) normally_ms_j;
				ev_uint32 flashCount = (ev_uint32) flashCount_j;
				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScreenGeometryProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CScreenGeometry::flash(color, hightLight_ms, normally_ms, flashCount);
				}
				else
				{
					pObjectX->flash(color, hightLight_ms, normally_ms, flashCount);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_register_1flash_1CColourValue_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScreenGeometryProxy *pObjectX = (JCScreenGeometryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_flash_CColourValue_ev_uint32_ev_uint32_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"flash_CColourValue_ev_uint32_ev_uint32_ev_uint32_callback", "(JJJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_flash_1CColourValue_1ev_1uint32_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j, jlong hightLight_ms_j, jlong normally_ms_j, jlong flashCount_j)
			{
				const EarthView::World::Graphic::CColourValue &color = *(EarthView::World::Graphic::CColourValue*) color_j;
				ev_uint32 hightLight_ms = (ev_uint32) hightLight_ms_j;
				ev_uint32 normally_ms = (ev_uint32) normally_ms_j;
				ev_uint32 flashCount = (ev_uint32) flashCount_j;
				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CScreenGeometry::flash(color, hightLight_ms, normally_ms, flashCount);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_endFlash_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScreenGeometryProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CScreenGeometry::endFlash();
				}
				else
				{
					pObjectX->endFlash();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_register_1endFlash_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScreenGeometryProxy *pObjectX = (JCScreenGeometryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_endFlash_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"endFlash_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_ScreenGeometry_endFlash_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CScreenGeometry *pObjectX = (EarthView::World::Geometry3D::CScreenGeometry*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CScreenGeometry::endFlash();
			}
		}
	}
}
