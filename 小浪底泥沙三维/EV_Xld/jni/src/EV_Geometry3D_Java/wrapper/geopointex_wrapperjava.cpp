/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geopointex.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			class JCGeoPointExProxy : public EarthView::World::Geometry3D::CGeoPointEx
			{
			 private:
				EarthView::World::Core::ev_string m_build_void_callback;
				EarthView::World::Core::ev_string m_appendGeoObject_CGeoObject_callback;
				EarthView::World::Core::ev_string m_removeGeoObject_CGeoObject_callback;
				EarthView::World::Core::ev_string m_removeAllGeoObjects_void_callback;
				EarthView::World::Core::ev_string m_getGeoObject_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getGeoObjectCount_void_callback;
				EarthView::World::Core::ev_string m_render_void_callback;
				EarthView::World::Core::ev_string m_derender_void_callback;
				EarthView::World::Core::ev_string m_isRendering_void_callback;
			public:
				JCGeoPointExProxy(EarthView::World::Core::CNameValuePairList *pList) : CGeoPointEx(pList)
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
				void register_build_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_build_void_callback = __method;
				}
				void register_appendGeoObject_CGeoObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_appendGeoObject_CGeoObject_callback = __method;
				}
				void register_removeGeoObject_CGeoObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeGeoObject_CGeoObject_callback = __method;
				}
				void register_removeAllGeoObjects_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAllGeoObjects_void_callback = __method;
				}
				void register_getGeoObject_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getGeoObject_ev_uint32_callback = __method;
				}
				void register_getGeoObjectCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getGeoObjectCount_void_callback = __method;
				}
				void register_render_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_render_void_callback = __method;
				}
				void register_derender_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_derender_void_callback = __method;
				}
				void register_isRendering_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isRendering_void_callback = __method;
				}
				virtual void build()
				{
					if (this->_gRef != NULL && this->m_build_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("build_void_callback");
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
						return this->CGeoPointEx::build();
					}
				}
				virtual ev_bool appendGeoObject(EarthView::World::Spatial::CGeoObject* ref_geoObject)
				{
					if (this->_gRef != NULL && this->m_appendGeoObject_CGeoObject_callback != "" && this->isCustomExtend())
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
						jlong ref_geoObject_j = (jlong) ref_geoObject;
						jmethodID __method = __gr->getMethod("appendGeoObject_CGeoObject_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , ref_geoObject_j);
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
						return this->CGeoPointEx::appendGeoObject(ref_geoObject);
					}
				}
				virtual ev_bool removeGeoObject(EarthView::World::Spatial::CGeoObject* geoObject)
				{
					if (this->_gRef != NULL && this->m_removeGeoObject_CGeoObject_callback != "" && this->isCustomExtend())
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
						jlong geoObject_j = (jlong) geoObject;
						jmethodID __method = __gr->getMethod("removeGeoObject_CGeoObject_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , geoObject_j);
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
						return this->CGeoPointEx::removeGeoObject(geoObject);
					}
				}
				virtual void removeAllGeoObjects()
				{
					if (this->_gRef != NULL && this->m_removeAllGeoObjects_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeAllGeoObjects_void_callback");
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
						return this->CGeoPointEx::removeAllGeoObjects();
					}
				}
				virtual EarthView::World::Spatial::CGeoObject* getGeoObject(ev_uint32 index) const
				{
					if (this->_gRef != NULL && this->m_getGeoObject_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getGeoObject_ev_uint32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::CGeoObject *__values1 = (EarthView::World::Spatial::CGeoObject*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CGeoPointEx::getGeoObject(index);
					}
				}
				virtual ev_uint64 getGeoObjectCount() const
				{
					if (this->_gRef != NULL && this->m_getGeoObjectCount_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getGeoObjectCount_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1_s = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						ev_uint64 __values1 = __values1_s.getUint64();
						return __values1;
					}
					else
					{
						return this->CGeoPointEx::getGeoObjectCount();
					}
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
						return this->CGeoPointEx::render();
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
						return this->CGeoPointEx::derender();
					}
				}
				virtual ev_bool isRendering()
				{
					if (this->_gRef != NULL && this->m_isRendering_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isRendering_void_callback");
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
						return this->CGeoPointEx::isRendering();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCGeoPointExProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_build_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CGeoPointEx *pObjectX = (EarthView::World::Geometry3D::CGeoPointEx*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGeoPointExProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CGeoPointEx::build();
				}
				else
				{
					pObjectX->build();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_register_1build_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGeoPointExProxy *pObjectX = (JCGeoPointExProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_build_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"build_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_build_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CGeoPointEx *pObjectX = (EarthView::World::Geometry3D::CGeoPointEx*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CGeoPointEx::build();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_appendGeoObject_1CGeoObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_geoObject_j)
			{
				EarthView::World::Spatial::CGeoObject *ref_geoObject = (EarthView::World::Spatial::CGeoObject*) ref_geoObject_j;
				EarthView::World::Geometry3D::CGeoPointEx *pObjectX = (EarthView::World::Geometry3D::CGeoPointEx*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGeoPointExProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CGeoPointEx::appendGeoObject(ref_geoObject);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->appendGeoObject(ref_geoObject);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_register_1appendGeoObject_1CGeoObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGeoPointExProxy *pObjectX = (JCGeoPointExProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_appendGeoObject_CGeoObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"appendGeoObject_CGeoObject_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_appendGeoObject_1CGeoObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_geoObject_j)
			{
				EarthView::World::Spatial::CGeoObject *ref_geoObject = (EarthView::World::Spatial::CGeoObject*) ref_geoObject_j;
				EarthView::World::Geometry3D::CGeoPointEx *pObjectX = (EarthView::World::Geometry3D::CGeoPointEx*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CGeoPointEx::appendGeoObject(ref_geoObject);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_removeGeoObject_1CGeoObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoObject_j)
			{
				EarthView::World::Spatial::CGeoObject *geoObject = (EarthView::World::Spatial::CGeoObject*) geoObject_j;
				EarthView::World::Geometry3D::CGeoPointEx *pObjectX = (EarthView::World::Geometry3D::CGeoPointEx*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGeoPointExProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CGeoPointEx::removeGeoObject(geoObject);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->removeGeoObject(geoObject);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_register_1removeGeoObject_1CGeoObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGeoPointExProxy *pObjectX = (JCGeoPointExProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeGeoObject_CGeoObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeGeoObject_CGeoObject_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_removeGeoObject_1CGeoObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoObject_j)
			{
				EarthView::World::Spatial::CGeoObject *geoObject = (EarthView::World::Spatial::CGeoObject*) geoObject_j;
				EarthView::World::Geometry3D::CGeoPointEx *pObjectX = (EarthView::World::Geometry3D::CGeoPointEx*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CGeoPointEx::removeGeoObject(geoObject);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_removeAllGeoObjects_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CGeoPointEx *pObjectX = (EarthView::World::Geometry3D::CGeoPointEx*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGeoPointExProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CGeoPointEx::removeAllGeoObjects();
				}
				else
				{
					pObjectX->removeAllGeoObjects();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_register_1removeAllGeoObjects_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGeoPointExProxy *pObjectX = (JCGeoPointExProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAllGeoObjects_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAllGeoObjects_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_removeAllGeoObjects_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CGeoPointEx *pObjectX = (EarthView::World::Geometry3D::CGeoPointEx*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CGeoPointEx::removeAllGeoObjects();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_getGeoObject_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Geometry3D::CGeoPointEx *pObjectX = (EarthView::World::Geometry3D::CGeoPointEx*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGeoPointExProxy))
				{
					EarthView::World::Spatial::CGeoObject* __values1 = pObjectX->EarthView::World::Geometry3D::CGeoPointEx::getGeoObject(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::CGeoObject* __values1 = pObjectX->getGeoObject(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_register_1getGeoObject_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGeoPointExProxy *pObjectX = (JCGeoPointExProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getGeoObject_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getGeoObject_ev_uint32_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_getGeoObject_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Geometry3D::CGeoPointEx *pObjectX = (EarthView::World::Geometry3D::CGeoPointEx*) pObjXXXX;
				EarthView::World::Spatial::CGeoObject* __values1 = pObjectX->EarthView::World::Geometry3D::CGeoPointEx::getGeoObject(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_getGeoObjectCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CGeoPointEx *pObjectX = (EarthView::World::Geometry3D::CGeoPointEx*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGeoPointExProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Geometry3D::CGeoPointEx::getGeoObjectCount();
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->getGeoObjectCount();
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_register_1getGeoObjectCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGeoPointExProxy *pObjectX = (JCGeoPointExProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getGeoObjectCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getGeoObjectCount_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_getGeoObjectCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CGeoPointEx *pObjectX = (EarthView::World::Geometry3D::CGeoPointEx*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Geometry3D::CGeoPointEx::getGeoObjectCount();
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_render_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CGeoPointEx *pObjectX = (EarthView::World::Geometry3D::CGeoPointEx*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGeoPointExProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CGeoPointEx::render();
				}
				else
				{
					pObjectX->render();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_register_1render_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGeoPointExProxy *pObjectX = (JCGeoPointExProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_render_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CGeoPointEx *pObjectX = (EarthView::World::Geometry3D::CGeoPointEx*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CGeoPointEx::render();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_derender_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CGeoPointEx *pObjectX = (EarthView::World::Geometry3D::CGeoPointEx*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGeoPointExProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CGeoPointEx::derender();
				}
				else
				{
					pObjectX->derender();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_register_1derender_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGeoPointExProxy *pObjectX = (JCGeoPointExProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_derender_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CGeoPointEx *pObjectX = (EarthView::World::Geometry3D::CGeoPointEx*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CGeoPointEx::derender();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_isRendering_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CGeoPointEx *pObjectX = (EarthView::World::Geometry3D::CGeoPointEx*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGeoPointExProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CGeoPointEx::isRendering();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isRendering();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_register_1isRendering_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGeoPointExProxy *pObjectX = (JCGeoPointExProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isRendering_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isRendering_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_isRendering_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CGeoPointEx *pObjectX = (EarthView::World::Geometry3D::CGeoPointEx*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CGeoPointEx::isRendering();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_getClampMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CGeoPointEx *pObjectX = (EarthView::World::Geometry3D::CGeoPointEx*) pObjXXXX;
				int __values1 = pObjectX->getClampMode();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoPointEx_setClampMode_1ClampMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Spatial3D::Atlas::ClampMode mode = (EarthView::World::Spatial3D::Atlas::ClampMode) mode_j;
				EarthView::World::Geometry3D::CGeoPointEx *pObjectX = (EarthView::World::Geometry3D::CGeoPointEx*) pObjXXXX;
				pObjectX->setClampMode(mode);
			}
		}
	}
}
