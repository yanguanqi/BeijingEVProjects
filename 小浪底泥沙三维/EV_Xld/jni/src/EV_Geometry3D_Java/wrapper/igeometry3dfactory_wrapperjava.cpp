/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/igeometry3dfactory.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				class JIGeometry3DFactoryProxy : public EarthView::World::Spatial3D::Atlas::IGeometry3DFactory
				{
				 private:
					EarthView::World::Core::ev_string m_getFactoryType_void_callback;
					EarthView::World::Core::ev_string m_createRenderable_CGeoObjectExtension_CSceneManager_callback;
					EarthView::World::Core::ev_string m_destoryRenderable_CVisibleObject_callback;
					EarthView::World::Core::ev_string m_appendGeoObject_CVisibleObject_CGeoObject_callback;
					EarthView::World::Core::ev_string m_removeGeoObject_CVisibleObject_CGeoObject_callback;
					EarthView::World::Core::ev_string m_removeAllGeoObjects_CVisibleObject_callback;
					EarthView::World::Core::ev_string m_getGeoObject_CVisibleObject_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getGeoObjectCount_CVisibleObject_callback;
				public:
					JIGeometry3DFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : IGeometry3DFactory(pList)
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
					void register_getFactoryType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFactoryType_void_callback = __method;
					}
					void register_createRenderable_CGeoObjectExtension_CSceneManager_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createRenderable_CGeoObjectExtension_CSceneManager_callback = __method;
					}
					void register_destoryRenderable_CVisibleObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destoryRenderable_CVisibleObject_callback = __method;
					}
					void register_appendGeoObject_CVisibleObject_CGeoObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_appendGeoObject_CVisibleObject_CGeoObject_callback = __method;
					}
					void register_removeGeoObject_CVisibleObject_CGeoObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeGeoObject_CVisibleObject_CGeoObject_callback = __method;
					}
					void register_removeAllGeoObjects_CVisibleObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeAllGeoObjects_CVisibleObject_callback = __method;
					}
					void register_getGeoObject_CVisibleObject_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getGeoObject_CVisibleObject_ev_uint32_callback = __method;
					}
					void register_getGeoObjectCount_CVisibleObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getGeoObjectCount_CVisibleObject_callback = __method;
					}
					virtual ev_uint16 getFactoryType()
					{
						if (this->_gRef != NULL && this->m_getFactoryType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getFactoryType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_uint16 __values1 = (ev_uint16) __values1_j;
							return __values1;
						}
						else
						{
							return this->IGeometry3DFactory::getFactoryType();
						}
					}
					virtual EarthView::World::Geometry3D::VisibleObjects createRenderable(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, EarthView::World::Graphic::CSceneManager* scenemanager)
					{
						if (this->_gRef != NULL && this->m_createRenderable_CGeoObjectExtension_CSceneManager_callback != "" && this->isCustomExtend())
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
							jlong geoObj_j = (jlong) geoObj;
							jlong scenemanager_j = (jlong) scenemanager;
							jmethodID __method = __gr->getMethod("createRenderable_CGeoObjectExtension_CSceneManager_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , geoObj_j, scenemanager_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Geometry3D::VisibleObjects __values1 = *(EarthView::World::Geometry3D::VisibleObjects*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IGeometry3DFactory::createRenderable(geoObj, scenemanager);
						}
					}
					virtual void destoryRenderable(EarthView::World::Geometry3D::CVisibleObject* visitObj)
					{
						if (this->_gRef != NULL && this->m_destoryRenderable_CVisibleObject_callback != "" && this->isCustomExtend())
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
							jlong visitObj_j = (jlong) visitObj;
							jmethodID __method = __gr->getMethod("destoryRenderable_CVisibleObject_callback");
							__env->CallVoidMethod(__obj, __method , visitObj_j);
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
							return this->IGeometry3DFactory::destoryRenderable(visitObj);
						}
					}
					virtual ev_bool appendGeoObject(EarthView::World::Geometry3D::CVisibleObject* visibleObj, EarthView::World::Spatial::CGeoObject* ref_geoObject)
					{
						if (this->_gRef != NULL && this->m_appendGeoObject_CVisibleObject_CGeoObject_callback != "" && this->isCustomExtend())
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
							jlong visibleObj_j = (jlong) visibleObj;
							jlong ref_geoObject_j = (jlong) ref_geoObject;
							jmethodID __method = __gr->getMethod("appendGeoObject_CVisibleObject_CGeoObject_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , visibleObj_j, ref_geoObject_j);
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
							return this->IGeometry3DFactory::appendGeoObject(visibleObj, ref_geoObject);
						}
					}
					virtual ev_bool removeGeoObject(EarthView::World::Geometry3D::CVisibleObject* visibleObj, EarthView::World::Spatial::CGeoObject* geoObject)
					{
						if (this->_gRef != NULL && this->m_removeGeoObject_CVisibleObject_CGeoObject_callback != "" && this->isCustomExtend())
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
							jlong visibleObj_j = (jlong) visibleObj;
							jlong geoObject_j = (jlong) geoObject;
							jmethodID __method = __gr->getMethod("removeGeoObject_CVisibleObject_CGeoObject_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , visibleObj_j, geoObject_j);
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
							return this->IGeometry3DFactory::removeGeoObject(visibleObj, geoObject);
						}
					}
					virtual void removeAllGeoObjects(EarthView::World::Geometry3D::CVisibleObject* visibleObj)
					{
						if (this->_gRef != NULL && this->m_removeAllGeoObjects_CVisibleObject_callback != "" && this->isCustomExtend())
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
							jlong visibleObj_j = (jlong) visibleObj;
							jmethodID __method = __gr->getMethod("removeAllGeoObjects_CVisibleObject_callback");
							__env->CallVoidMethod(__obj, __method , visibleObj_j);
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
							return this->IGeometry3DFactory::removeAllGeoObjects(visibleObj);
						}
					}
					virtual EarthView::World::Spatial::CGeoObject* getGeoObject(EarthView::World::Geometry3D::CVisibleObject* visibleObj, ev_uint32 index) const
					{
						if (this->_gRef != NULL && this->m_getGeoObject_CVisibleObject_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong visibleObj_j = (jlong) visibleObj;
							jlong index_j = (jlong) index;
							jmethodID __method = __gr->getMethod("getGeoObject_CVisibleObject_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , visibleObj_j, index_j);
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
							return this->IGeometry3DFactory::getGeoObject(visibleObj, index);
						}
					}
					virtual ev_uint64 getGeoObjectCount(EarthView::World::Geometry3D::CVisibleObject* visibleObj) const
					{
						if (this->_gRef != NULL && this->m_getGeoObjectCount_CVisibleObject_callback != "" && this->isCustomExtend())
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
							jlong visibleObj_j = (jlong) visibleObj;
							jmethodID __method = __gr->getMethod("getGeoObjectCount_CVisibleObject_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , visibleObj_j);
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
							return this->IGeometry3DFactory::getGeoObjectCount(visibleObj);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIGeometry3DFactoryProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_getFactoryType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIGeometry3DFactoryProxy))
					{
						ev_uint16 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::getFactoryType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint16 __values1 = pObjectX->getFactoryType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_register_1getFactoryType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIGeometry3DFactoryProxy *pObjectX = (JIGeometry3DFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFactoryType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFactoryType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_getFactoryType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjXXXX;
					ev_uint16 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::getFactoryType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_createRenderable_1CGeoObjectExtension_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoObj_j, jlong scenemanager_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) geoObj_j;
					EarthView::World::Graphic::CSceneManager *scenemanager = (EarthView::World::Graphic::CSceneManager*) scenemanager_j;
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIGeometry3DFactoryProxy))
					{
						EarthView::World::Geometry3D::VisibleObjects __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::createRenderable(geoObj, scenemanager);
						EarthView::World::Geometry3D::VisibleObjects *returnvalues = new EarthView::World::Geometry3D::VisibleObjects(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Geometry3D::VisibleObjects __values1 = pObjectX->createRenderable(geoObj, scenemanager);
						EarthView::World::Geometry3D::VisibleObjects *returnvalues = new EarthView::World::Geometry3D::VisibleObjects(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_register_1createRenderable_1CGeoObjectExtension_1CSceneManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIGeometry3DFactoryProxy *pObjectX = (JIGeometry3DFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createRenderable_CGeoObjectExtension_CSceneManager_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createRenderable_CGeoObjectExtension_CSceneManager_callback", "(JJ)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_createRenderable_1CGeoObjectExtension_1CSceneManager_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoObj_j, jlong scenemanager_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) geoObj_j;
					EarthView::World::Graphic::CSceneManager *scenemanager = (EarthView::World::Graphic::CSceneManager*) scenemanager_j;
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjXXXX;
					EarthView::World::Geometry3D::VisibleObjects __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::createRenderable(geoObj, scenemanager);
					EarthView::World::Geometry3D::VisibleObjects *returnvalues = new EarthView::World::Geometry3D::VisibleObjects(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_destoryRenderable_1CVisibleObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visitObj_j)
				{
					EarthView::World::Geometry3D::CVisibleObject *visitObj = (EarthView::World::Geometry3D::CVisibleObject*) visitObj_j;
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIGeometry3DFactoryProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::destoryRenderable(visitObj);
					}
					else
					{
						pObjectX->destoryRenderable(visitObj);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_register_1destoryRenderable_1CVisibleObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIGeometry3DFactoryProxy *pObjectX = (JIGeometry3DFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destoryRenderable_CVisibleObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destoryRenderable_CVisibleObject_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_destoryRenderable_1CVisibleObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visitObj_j)
				{
					EarthView::World::Geometry3D::CVisibleObject *visitObj = (EarthView::World::Geometry3D::CVisibleObject*) visitObj_j;
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::destoryRenderable(visitObj);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_appendGeoObject_1CVisibleObject_1CGeoObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visibleObj_j, jlong ref_geoObject_j)
				{
					EarthView::World::Geometry3D::CVisibleObject *visibleObj = (EarthView::World::Geometry3D::CVisibleObject*) visibleObj_j;
					EarthView::World::Spatial::CGeoObject *ref_geoObject = (EarthView::World::Spatial::CGeoObject*) ref_geoObject_j;
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIGeometry3DFactoryProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::appendGeoObject(visibleObj, ref_geoObject);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->appendGeoObject(visibleObj, ref_geoObject);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_register_1appendGeoObject_1CVisibleObject_1CGeoObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIGeometry3DFactoryProxy *pObjectX = (JIGeometry3DFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_appendGeoObject_CVisibleObject_CGeoObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"appendGeoObject_CVisibleObject_CGeoObject_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_appendGeoObject_1CVisibleObject_1CGeoObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visibleObj_j, jlong ref_geoObject_j)
				{
					EarthView::World::Geometry3D::CVisibleObject *visibleObj = (EarthView::World::Geometry3D::CVisibleObject*) visibleObj_j;
					EarthView::World::Spatial::CGeoObject *ref_geoObject = (EarthView::World::Spatial::CGeoObject*) ref_geoObject_j;
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::appendGeoObject(visibleObj, ref_geoObject);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_removeGeoObject_1CVisibleObject_1CGeoObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visibleObj_j, jlong geoObject_j)
				{
					EarthView::World::Geometry3D::CVisibleObject *visibleObj = (EarthView::World::Geometry3D::CVisibleObject*) visibleObj_j;
					EarthView::World::Spatial::CGeoObject *geoObject = (EarthView::World::Spatial::CGeoObject*) geoObject_j;
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIGeometry3DFactoryProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::removeGeoObject(visibleObj, geoObject);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->removeGeoObject(visibleObj, geoObject);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_register_1removeGeoObject_1CVisibleObject_1CGeoObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIGeometry3DFactoryProxy *pObjectX = (JIGeometry3DFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeGeoObject_CVisibleObject_CGeoObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeGeoObject_CVisibleObject_CGeoObject_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_removeGeoObject_1CVisibleObject_1CGeoObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visibleObj_j, jlong geoObject_j)
				{
					EarthView::World::Geometry3D::CVisibleObject *visibleObj = (EarthView::World::Geometry3D::CVisibleObject*) visibleObj_j;
					EarthView::World::Spatial::CGeoObject *geoObject = (EarthView::World::Spatial::CGeoObject*) geoObject_j;
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::removeGeoObject(visibleObj, geoObject);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_removeAllGeoObjects_1CVisibleObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visibleObj_j)
				{
					EarthView::World::Geometry3D::CVisibleObject *visibleObj = (EarthView::World::Geometry3D::CVisibleObject*) visibleObj_j;
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIGeometry3DFactoryProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::removeAllGeoObjects(visibleObj);
					}
					else
					{
						pObjectX->removeAllGeoObjects(visibleObj);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_register_1removeAllGeoObjects_1CVisibleObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIGeometry3DFactoryProxy *pObjectX = (JIGeometry3DFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeAllGeoObjects_CVisibleObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeAllGeoObjects_CVisibleObject_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_removeAllGeoObjects_1CVisibleObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visibleObj_j)
				{
					EarthView::World::Geometry3D::CVisibleObject *visibleObj = (EarthView::World::Geometry3D::CVisibleObject*) visibleObj_j;
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::removeAllGeoObjects(visibleObj);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_getGeoObject_1CVisibleObject_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visibleObj_j, jlong index_j)
				{
					EarthView::World::Geometry3D::CVisibleObject *visibleObj = (EarthView::World::Geometry3D::CVisibleObject*) visibleObj_j;
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIGeometry3DFactoryProxy))
					{
						EarthView::World::Spatial::CGeoObject* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::getGeoObject(visibleObj, index);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::CGeoObject* __values1 = pObjectX->getGeoObject(visibleObj, index);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_register_1getGeoObject_1CVisibleObject_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIGeometry3DFactoryProxy *pObjectX = (JIGeometry3DFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getGeoObject_CVisibleObject_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getGeoObject_CVisibleObject_ev_uint32_callback", "(JJ)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_getGeoObject_1CVisibleObject_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visibleObj_j, jlong index_j)
				{
					EarthView::World::Geometry3D::CVisibleObject *visibleObj = (EarthView::World::Geometry3D::CVisibleObject*) visibleObj_j;
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjXXXX;
					EarthView::World::Spatial::CGeoObject* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::getGeoObject(visibleObj, index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_getGeoObjectCount_1CVisibleObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visibleObj_j)
				{
					EarthView::World::Geometry3D::CVisibleObject *visibleObj = (EarthView::World::Geometry3D::CVisibleObject*) visibleObj_j;
					const 					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIGeometry3DFactoryProxy))
					{
						ev_uint64 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::getGeoObjectCount(visibleObj);
						EarthView::World::Core::ev_string __values1_ch;
						__values1_ch<<__values1;
						jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
						return __values1_j;
					}
					else
					{
						ev_uint64 __values1 = pObjectX->getGeoObjectCount(visibleObj);
						EarthView::World::Core::ev_string __values1_ch;
						__values1_ch<<__values1;
						jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_register_1getGeoObjectCount_1CVisibleObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIGeometry3DFactoryProxy *pObjectX = (JIGeometry3DFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getGeoObjectCount_CVisibleObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getGeoObjectCount_CVisibleObject_callback", "(J)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_atlas_Igeometry3dfactory_getGeoObjectCount_1CVisibleObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visibleObj_j)
				{
					EarthView::World::Geometry3D::CVisibleObject *visibleObj = (EarthView::World::Geometry3D::CVisibleObject*) visibleObj_j;
					const 					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjXXXX;
					ev_uint64 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::getGeoObjectCount(visibleObj);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
		}
	}
}
