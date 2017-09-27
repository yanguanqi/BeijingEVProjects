/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/viewargs.h"
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
			namespace Atlas
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			class JIViewArgsProxy : public EarthView::World::Spatial::IViewArgs
			{
			 private:
				EarthView::World::Core::ev_string m_getType_void_callback;
			public:
				JIViewArgsProxy(EarthView::World::Core::CNameValuePairList *pList) : IViewArgs(pList)
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
				virtual EarthView::World::Spatial::IViewArgs::ViewArgsType getType() const
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
						EarthView::World::Spatial::IViewArgs::ViewArgsType __values1 = (EarthView::World::Spatial::IViewArgs::ViewArgsType) __values1_j;
						return __values1;
					}
					else
					{
						return this->IViewArgs::getType();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JIViewArgsProxy);
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_Iviewargs_00024ViewArgsTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					IViewArgs::VAT_Unknown,
					IViewArgs::VAT_Map,
					IViewArgs::VAT_Scene
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Iviewargs_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::IViewArgs *pObjectX = (EarthView::World::Spatial::IViewArgs*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIViewArgsProxy))
				{
					EarthView::World::Spatial::IViewArgs::ViewArgsType __values1 = pObjectX->EarthView::World::Spatial::IViewArgs::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::IViewArgs::ViewArgsType __values1 = pObjectX->getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Iviewargs_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIViewArgsProxy *pObjectX = (JIViewArgsProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Iviewargs_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::IViewArgs *pObjectX = (EarthView::World::Spatial::IViewArgs*) pObjXXXX;
				EarthView::World::Spatial::IViewArgs::ViewArgsType __values1 = pObjectX->EarthView::World::Spatial::IViewArgs::getType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Iviewargs_get_1control_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::IViewArgs *pObjectX = (EarthView::World::Spatial::IViewArgs*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->control);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Iviewargs_set_1control_1ISpatialControl(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial::IViewArgs *pObjectX = (EarthView::World::Spatial::IViewArgs*)pObjXXXX;
				pObjectX->control = (EarthView::World::Spatial::Atlas::ISpatialControl*) __values1_j;
			}
			class JCMapViewArgsProxy : public EarthView::World::Spatial::CMapViewArgs
			{
			 private:
				EarthView::World::Core::ev_string m_getType_void_callback;
			public:
				JCMapViewArgsProxy(EarthView::World::Core::CNameValuePairList *pList) : CMapViewArgs(pList)
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
				virtual EarthView::World::Spatial::IViewArgs::ViewArgsType getType() const
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
						EarthView::World::Spatial::IViewArgs::ViewArgsType __values1 = (EarthView::World::Spatial::IViewArgs::ViewArgsType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMapViewArgs::getType();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCMapViewArgsProxy);
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_MapViewArgs_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CMapViewArgs *pObjectX = (EarthView::World::Spatial::CMapViewArgs*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMapViewArgsProxy))
				{
					EarthView::World::Spatial::IViewArgs::ViewArgsType __values1 = pObjectX->EarthView::World::Spatial::CMapViewArgs::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::IViewArgs::ViewArgsType __values1 = pObjectX->getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_MapViewArgs_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMapViewArgsProxy *pObjectX = (JCMapViewArgsProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_MapViewArgs_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CMapViewArgs *pObjectX = (EarthView::World::Spatial::CMapViewArgs*) pObjXXXX;
				EarthView::World::Spatial::IViewArgs::ViewArgsType __values1 = pObjectX->EarthView::World::Spatial::CMapViewArgs::getType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_MapViewArgs_get_1centerX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CMapViewArgs *pObjectX = (EarthView::World::Spatial::CMapViewArgs*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->centerX);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_MapViewArgs_set_1centerX_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial::CMapViewArgs *pObjectX = (EarthView::World::Spatial::CMapViewArgs*)pObjXXXX;
				pObjectX->centerX = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_MapViewArgs_get_1centerY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CMapViewArgs *pObjectX = (EarthView::World::Spatial::CMapViewArgs*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->centerY);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_MapViewArgs_set_1centerY_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial::CMapViewArgs *pObjectX = (EarthView::World::Spatial::CMapViewArgs*)pObjXXXX;
				pObjectX->centerY = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_MapViewArgs_get_1heading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CMapViewArgs *pObjectX = (EarthView::World::Spatial::CMapViewArgs*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->heading);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_MapViewArgs_set_1heading_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial::CMapViewArgs *pObjectX = (EarthView::World::Spatial::CMapViewArgs*)pObjXXXX;
				pObjectX->heading = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_MapViewArgs_get_1scale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CMapViewArgs *pObjectX = (EarthView::World::Spatial::CMapViewArgs*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->scale);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_MapViewArgs_set_1scale_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial::CMapViewArgs *pObjectX = (EarthView::World::Spatial::CMapViewArgs*)pObjXXXX;
				pObjectX->scale = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_MapViewArgs_get_1minLat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CMapViewArgs *pObjectX = (EarthView::World::Spatial::CMapViewArgs*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->minLat);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_MapViewArgs_set_1minLat_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial::CMapViewArgs *pObjectX = (EarthView::World::Spatial::CMapViewArgs*)pObjXXXX;
				pObjectX->minLat = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_MapViewArgs_get_1minLon_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CMapViewArgs *pObjectX = (EarthView::World::Spatial::CMapViewArgs*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->minLon);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_MapViewArgs_set_1minLon_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial::CMapViewArgs *pObjectX = (EarthView::World::Spatial::CMapViewArgs*)pObjXXXX;
				pObjectX->minLon = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_MapViewArgs_get_1maxLat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CMapViewArgs *pObjectX = (EarthView::World::Spatial::CMapViewArgs*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->maxLat);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_MapViewArgs_set_1maxLat_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial::CMapViewArgs *pObjectX = (EarthView::World::Spatial::CMapViewArgs*)pObjXXXX;
				pObjectX->maxLat = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_MapViewArgs_get_1maxLon_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CMapViewArgs *pObjectX = (EarthView::World::Spatial::CMapViewArgs*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->maxLon);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_MapViewArgs_set_1maxLon_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial::CMapViewArgs *pObjectX = (EarthView::World::Spatial::CMapViewArgs*)pObjXXXX;
				pObjectX->maxLon = (ev_real64)__values1_j;
			}
			class JCSceneViewArgsProxy : public EarthView::World::Spatial::CSceneViewArgs
			{
			 private:
				EarthView::World::Core::ev_string m_getType_void_callback;
			public:
				JCSceneViewArgsProxy(EarthView::World::Core::CNameValuePairList *pList) : CSceneViewArgs(pList)
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
				virtual EarthView::World::Spatial::IViewArgs::ViewArgsType getType() const
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
						EarthView::World::Spatial::IViewArgs::ViewArgsType __values1 = (EarthView::World::Spatial::IViewArgs::ViewArgsType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneViewArgs::getType();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCSceneViewArgsProxy);
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_SceneViewArgs_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CSceneViewArgs *pObjectX = (EarthView::World::Spatial::CSceneViewArgs*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneViewArgsProxy))
				{
					EarthView::World::Spatial::IViewArgs::ViewArgsType __values1 = pObjectX->EarthView::World::Spatial::CSceneViewArgs::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::IViewArgs::ViewArgsType __values1 = pObjectX->getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_SceneViewArgs_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneViewArgsProxy *pObjectX = (JCSceneViewArgsProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_SceneViewArgs_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CSceneViewArgs *pObjectX = (EarthView::World::Spatial::CSceneViewArgs*) pObjXXXX;
				EarthView::World::Spatial::IViewArgs::ViewArgsType __values1 = pObjectX->EarthView::World::Spatial::CSceneViewArgs::getType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_SceneViewArgs_get_1camera_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CSceneViewArgs *pObjectX = (EarthView::World::Spatial::CSceneViewArgs*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->camera);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_SceneViewArgs_set_1camera_1CBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial::CSceneViewArgs *pObjectX = (EarthView::World::Spatial::CSceneViewArgs*)pObjXXXX;
				pObjectX->camera = (EarthView::World::Core::CBaseObject*) __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_SceneViewArgs_get_1altitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CSceneViewArgs *pObjectX = (EarthView::World::Spatial::CSceneViewArgs*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->altitude);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_SceneViewArgs_set_1altitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial::CSceneViewArgs *pObjectX = (EarthView::World::Spatial::CSceneViewArgs*)pObjXXXX;
				pObjectX->altitude = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_SceneViewArgs_get_1longtitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CSceneViewArgs *pObjectX = (EarthView::World::Spatial::CSceneViewArgs*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->longtitude);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_SceneViewArgs_set_1longtitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial::CSceneViewArgs *pObjectX = (EarthView::World::Spatial::CSceneViewArgs*)pObjXXXX;
				pObjectX->longtitude = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_SceneViewArgs_get_1latitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CSceneViewArgs *pObjectX = (EarthView::World::Spatial::CSceneViewArgs*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->latitude);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_SceneViewArgs_set_1latitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial::CSceneViewArgs *pObjectX = (EarthView::World::Spatial::CSceneViewArgs*)pObjXXXX;
				pObjectX->latitude = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_SceneViewArgs_get_1heading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CSceneViewArgs *pObjectX = (EarthView::World::Spatial::CSceneViewArgs*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->heading);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_SceneViewArgs_set_1heading_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial::CSceneViewArgs *pObjectX = (EarthView::World::Spatial::CSceneViewArgs*)pObjXXXX;
				pObjectX->heading = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_SceneViewArgs_get_1tilt_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CSceneViewArgs *pObjectX = (EarthView::World::Spatial::CSceneViewArgs*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->tilt);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_SceneViewArgs_set_1tilt_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial::CSceneViewArgs *pObjectX = (EarthView::World::Spatial::CSceneViewArgs*)pObjXXXX;
				pObjectX->tilt = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_SceneViewArgs_get_1moditifAltitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CSceneViewArgs *pObjectX = (EarthView::World::Spatial::CSceneViewArgs*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->moditifAltitude);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_SceneViewArgs_set_1moditifAltitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial::CSceneViewArgs *pObjectX = (EarthView::World::Spatial::CSceneViewArgs*)pObjXXXX;
				pObjectX->moditifAltitude = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_SceneViewArgs_get_1operationOver_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CSceneViewArgs *pObjectX = (EarthView::World::Spatial::CSceneViewArgs*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->operationOver);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_SceneViewArgs_set_1operationOver_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Spatial::CSceneViewArgs *pObjectX = (EarthView::World::Spatial::CSceneViewArgs*)pObjXXXX;
				pObjectX->operationOver = (ev_bool)__values1_j;
			}
		}
	}
}
