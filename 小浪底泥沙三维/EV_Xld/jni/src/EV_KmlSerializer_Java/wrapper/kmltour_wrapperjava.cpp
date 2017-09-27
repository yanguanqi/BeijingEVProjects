/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "kmlserializer/kmltour.h"
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
			namespace Kml
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_kml_EVFlyToModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						FTM_BOUNCE,
						FTM_SMOOTH
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_kml_EVAbstractViewHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						AV_CAMERA,
						AV_LOOKAT
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_kml_EVTourUnitTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						TUT_FLYTO,
						TUT_WAIT
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				class JCTourUnitProxy : public EarthView::World::Spatial::Kml::CTourUnit
				{
				 private:
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
				public:
					JCTourUnitProxy(EarthView::World::Core::CNameValuePairList *pList) : CTourUnit(pList)
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
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					virtual EarthView::World::Spatial::Kml::EVTourUnitType getType() const
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
							EarthView::World::Spatial::Kml::EVTourUnitType __values1 = (EarthView::World::Spatial::Kml::EVTourUnitType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTourUnit::getType();
						}
					}
					virtual EarthView::World::Spatial::Kml::CTourUnit* clone()
					{
						if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("ev_clone_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Kml::CTourUnit *__values1 = (EarthView::World::Spatial::Kml::CTourUnit*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTourUnit::clone();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCTourUnitProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_TourUnit_get_1m_1type_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CTourUnit *pObjectX = (EarthView::World::Spatial::Kml::CTourUnit*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->m_type);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_TourUnit_set_1m_1type_1EVTourUnitType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::Kml::CTourUnit *pObjectX = (EarthView::World::Spatial::Kml::CTourUnit*)pObjXXXX;
					pObjectX->m_type = (EarthView::World::Spatial::Kml::EVTourUnitType)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_TourUnit_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CTourUnit *pObjectX = (EarthView::World::Spatial::Kml::CTourUnit*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTourUnitProxy))
					{
						EarthView::World::Spatial::Kml::EVTourUnitType __values1 = pObjectX->EarthView::World::Spatial::Kml::CTourUnit::getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Kml::EVTourUnitType __values1 = pObjectX->getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_TourUnit_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTourUnitProxy *pObjectX = (JCTourUnitProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_TourUnit_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CTourUnit *pObjectX = (EarthView::World::Spatial::Kml::CTourUnit*) pObjXXXX;
					EarthView::World::Spatial::Kml::EVTourUnitType __values1 = pObjectX->EarthView::World::Spatial::Kml::CTourUnit::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_TourUnit_setType_1EVTourUnitType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_tour_j)
				{
					const EarthView::World::Spatial::Kml::EVTourUnitType type_tour = (EarthView::World::Spatial::Kml::EVTourUnitType) type_tour_j;
					EarthView::World::Spatial::Kml::CTourUnit *pObjectX = (EarthView::World::Spatial::Kml::CTourUnit*) pObjXXXX;
					pObjectX->setType(type_tour);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_TourUnit_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CTourUnit *pObjectX = (EarthView::World::Spatial::Kml::CTourUnit*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTourUnitProxy))
					{
						EarthView::World::Spatial::Kml::CTourUnit* __values1 = pObjectX->EarthView::World::Spatial::Kml::CTourUnit::clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Kml::CTourUnit* __values1 = pObjectX->clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_TourUnit_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTourUnitProxy *pObjectX = (JCTourUnitProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_clone_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_TourUnit_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CTourUnit *pObjectX = (EarthView::World::Spatial::Kml::CTourUnit*) pObjXXXX;
					EarthView::World::Spatial::Kml::CTourUnit* __values1 = pObjectX->EarthView::World::Spatial::Kml::CTourUnit::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				class JCFlyToProxy : public EarthView::World::Spatial::Kml::CFlyTo
				{
				 private:
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
				public:
					JCFlyToProxy(EarthView::World::Core::CNameValuePairList *pList) : CFlyTo(pList)
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
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					virtual EarthView::World::Spatial::Kml::CTourUnit* clone()
					{
						if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("ev_clone_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Kml::CTourUnit *__values1 = (EarthView::World::Spatial::Kml::CTourUnit*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CFlyTo::clone();
						}
					}
					virtual EarthView::World::Spatial::Kml::EVTourUnitType getType() const
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
							EarthView::World::Spatial::Kml::EVTourUnitType __values1 = (EarthView::World::Spatial::Kml::EVTourUnitType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CFlyTo::getType();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCFlyToProxy);
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024CameraStr_get_1lon_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::CameraStr*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->lon);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024CameraStr_set_1lon_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::CameraStr*)pObjXXXX;
					pObjectX->lon = (double)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024CameraStr_get_1lat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::CameraStr*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->lat);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024CameraStr_set_1lat_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::CameraStr*)pObjXXXX;
					pObjectX->lat = (double)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024CameraStr_get_1altitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::CameraStr*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->altitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024CameraStr_set_1altitude_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::CameraStr*)pObjXXXX;
					pObjectX->altitude = (double)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024CameraStr_get_1heading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::CameraStr*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->heading);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024CameraStr_set_1heading_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::CameraStr*)pObjXXXX;
					pObjectX->heading = (double)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024CameraStr_get_1tilt_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::CameraStr*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->tilt);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024CameraStr_set_1tilt_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::CameraStr*)pObjXXXX;
					pObjectX->tilt = (double)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024CameraStr_get_1altitidemode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::CameraStr*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->altitidemode);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024CameraStr_set_1altitidemode_1EVAltitudeMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::CameraStr*)pObjXXXX;
					pObjectX->altitidemode = (EarthView::World::Spatial::Utility::EVAltitudeMode)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024CameraStr_get_1roll_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::CameraStr*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->roll);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024CameraStr_set_1roll_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::CameraStr*)pObjXXXX;
					pObjectX->roll = (double)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024LookAtStr_get_1lon_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->lon);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024LookAtStr_set_1lon_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*)pObjXXXX;
					pObjectX->lon = (double)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024LookAtStr_get_1lat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->lat);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024LookAtStr_set_1lat_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*)pObjXXXX;
					pObjectX->lat = (double)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024LookAtStr_get_1altitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->altitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024LookAtStr_set_1altitude_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*)pObjXXXX;
					pObjectX->altitude = (double)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024LookAtStr_get_1heading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->heading);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024LookAtStr_set_1heading_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*)pObjXXXX;
					pObjectX->heading = (double)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024LookAtStr_get_1tilt_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->tilt);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024LookAtStr_set_1tilt_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*)pObjXXXX;
					pObjectX->tilt = (double)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024LookAtStr_get_1altitidemode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->altitidemode);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024LookAtStr_set_1altitidemode_1EVAltitudeMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*)pObjXXXX;
					pObjectX->altitidemode = (EarthView::World::Spatial::Utility::EVAltitudeMode)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024LookAtStr_get_1range_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->range);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_FlyTo_00024LookAtStr_set_1range_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*)pObjXXXX;
					pObjectX->range = (double)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_FlyTo_getDuration_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CFlyTo *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getDuration();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_FlyTo_setDuration_1double(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble durationF_j)
				{
					double durationF = (double) durationF_j;
					EarthView::World::Spatial::Kml::CFlyTo *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo*) pObjXXXX;
					pObjectX->setDuration(durationF);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_FlyTo_getFlyToMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CFlyTo *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo*) pObjXXXX;
					EarthView::World::Spatial::Kml::EVFlyToMode __values1 = pObjectX->getFlyToMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_FlyTo_setFlyToMode_1EVFlyToMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
				{
					EarthView::World::Spatial::Kml::EVFlyToMode mode = (EarthView::World::Spatial::Kml::EVFlyToMode) mode_j;
					EarthView::World::Spatial::Kml::CFlyTo *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo*) pObjXXXX;
					pObjectX->setFlyToMode(mode);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_kml_FlyTo_getAbstractView_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CFlyTo *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo*) pObjXXXX;
					EarthView::World::Spatial::Kml::EVAbstractView __values1 = pObjectX->getAbstractView();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_FlyTo_setAbstractView_1EVAbstractView(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint abstra_j)
				{
					EarthView::World::Spatial::Kml::EVAbstractView abstra = (EarthView::World::Spatial::Kml::EVAbstractView) abstra_j;
					EarthView::World::Spatial::Kml::CFlyTo *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo*) pObjXXXX;
					pObjectX->setAbstractView(abstra);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_FlyTo_getCamera_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CFlyTo *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo*) pObjXXXX;
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr& __values1 = pObjectX->getCamera();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_FlyTo_setCamera_1CameraStr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong camera_tour_j)
				{
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr camera_tour = *(EarthView::World::Spatial::Kml::CFlyTo::CameraStr*) camera_tour_j;
					EarthView::World::Spatial::Kml::CFlyTo *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo*) pObjXXXX;
					pObjectX->setCamera(camera_tour);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_FlyTo_getLookAt_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CFlyTo *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo*) pObjXXXX;
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr& __values1 = pObjectX->getLookAt();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_FlyTo_setLookAt_1LookAtStr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lookat_tour_j)
				{
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr lookat_tour = *(EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*) lookat_tour_j;
					EarthView::World::Spatial::Kml::CFlyTo *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo*) pObjXXXX;
					pObjectX->setLookAt(lookat_tour);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_FlyTo_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CFlyTo *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFlyToProxy))
					{
						EarthView::World::Spatial::Kml::CTourUnit* __values1 = pObjectX->EarthView::World::Spatial::Kml::CFlyTo::clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Kml::CTourUnit* __values1 = pObjectX->clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_FlyTo_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFlyToProxy *pObjectX = (JCFlyToProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_clone_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_FlyTo_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CFlyTo *pObjectX = (EarthView::World::Spatial::Kml::CFlyTo*) pObjXXXX;
					EarthView::World::Spatial::Kml::CTourUnit* __values1 = pObjectX->EarthView::World::Spatial::Kml::CFlyTo::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_FlyTo_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFlyToProxy *pObjectX = (JCFlyToProxy*) pObjXXXX;
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
				class JCWaitProxy : public EarthView::World::Spatial::Kml::CWait
				{
				 private:
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
				public:
					JCWaitProxy(EarthView::World::Core::CNameValuePairList *pList) : CWait(pList)
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
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					virtual EarthView::World::Spatial::Kml::CTourUnit* clone()
					{
						if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("ev_clone_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Kml::CTourUnit *__values1 = (EarthView::World::Spatial::Kml::CTourUnit*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CWait::clone();
						}
					}
					virtual EarthView::World::Spatial::Kml::EVTourUnitType getType() const
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
							EarthView::World::Spatial::Kml::EVTourUnitType __values1 = (EarthView::World::Spatial::Kml::EVTourUnitType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CWait::getType();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCWaitProxy);
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_kml_Wait_getDuration_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CWait *pObjectX = (EarthView::World::Spatial::Kml::CWait*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getDuration();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_Wait_setDuration_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble durationW_j)
				{
					ev_real64 durationW = (ev_real64) durationW_j;
					EarthView::World::Spatial::Kml::CWait *pObjectX = (EarthView::World::Spatial::Kml::CWait*) pObjXXXX;
					pObjectX->setDuration(durationW);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_Wait_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CWait *pObjectX = (EarthView::World::Spatial::Kml::CWait*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCWaitProxy))
					{
						EarthView::World::Spatial::Kml::CTourUnit* __values1 = pObjectX->EarthView::World::Spatial::Kml::CWait::clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Kml::CTourUnit* __values1 = pObjectX->clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_Wait_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCWaitProxy *pObjectX = (JCWaitProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_clone_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_Wait_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CWait *pObjectX = (EarthView::World::Spatial::Kml::CWait*) pObjXXXX;
					EarthView::World::Spatial::Kml::CTourUnit* __values1 = pObjectX->EarthView::World::Spatial::Kml::CWait::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_Wait_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCWaitProxy *pObjectX = (JCWaitProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_TourUnitVector_push_1back_1CTourUnit(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
				{
					EarthView::World::Spatial::Kml::CTourUnit *&ref_t = *(EarthView::World::Spatial::Kml::CTourUnit**) ref_t_j;
					EarthView::World::Spatial::Kml::CTourUnitVector *pObjectX = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjXXXX;
					pObjectX->push_back(ref_t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_TourUnitVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CTourUnitVector *pObjectX = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_TourUnitVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CTourUnitVector *pObjectX = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjXXXX;
					EarthView::World::Spatial::Kml::CTourUnit*& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_TourUnitVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CTourUnitVector *pObjectX = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjXXXX;
					EarthView::World::Spatial::Kml::CTourUnit*& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_TourUnitVector_insert_1ev_1uint32_1CTourUnit(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial::Kml::CTourUnit *&ref_t = *(EarthView::World::Spatial::Kml::CTourUnit**) ref_t_j;
					EarthView::World::Spatial::Kml::CTourUnitVector *pObjectX = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjXXXX;
					pObjectX->insert(pos, ref_t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_TourUnitVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial::Kml::CTourUnitVector *pObjectX = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_TourUnitVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CTourUnitVector *pObjectX = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_TourUnitVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial::Kml::CTourUnitVector& pObjectX = *(EarthView::World::Spatial::Kml::CTourUnitVector*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::Kml::CTourUnit*& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_TourUnitVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::Kml::CTourUnitVector *pObjectX = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjXXXX;
					EarthView::World::Spatial::Kml::CTourUnit*& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_TourUnitVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CTourUnitVector *pObjectX = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_TourUnitVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial::Kml::CTourUnitVector *pObjectX = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_TourUnitVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial::Kml::CTourUnitVector *pObjectX = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_TourUnitVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CTourUnitVector *pObjectX = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_Tour_get_1mName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CTour *pObjectX = (EarthView::World::Spatial::Kml::CTour*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mName;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_Tour_set_1mName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::Kml::CTour *pObjectX = (EarthView::World::Spatial::Kml::CTour*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mName = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_kml_Tour_get_1mId_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CTour *pObjectX = (EarthView::World::Spatial::Kml::CTour*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mId;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_Tour_set_1mId_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::Kml::CTour *pObjectX = (EarthView::World::Spatial::Kml::CTour*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mId = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_Tour_addTourUnit_1CTourUnit(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_unit_j)
				{
					const EarthView::World::Spatial::Kml::CTourUnit *ref_unit = (const EarthView::World::Spatial::Kml::CTourUnit*) ref_unit_j;
					EarthView::World::Spatial::Kml::CTour *pObjectX = (EarthView::World::Spatial::Kml::CTour*) pObjXXXX;
					pObjectX->addTourUnit(ref_unit);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_Tour_removeTourUnit_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_size_t index = (ev_size_t) index_j;
					EarthView::World::Spatial::Kml::CTour *pObjectX = (EarthView::World::Spatial::Kml::CTour*) pObjXXXX;
					pObjectX->removeTourUnit(index);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_Tour_clearTourUnit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CTour *pObjectX = (EarthView::World::Spatial::Kml::CTour*) pObjXXXX;
					pObjectX->clearTourUnit();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_Tour_getTourUnit_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_size_t index = (ev_size_t) index_j;
					EarthView::World::Spatial::Kml::CTour *pObjectX = (EarthView::World::Spatial::Kml::CTour*) pObjXXXX;
					EarthView::World::Spatial::Kml::CTourUnit* __values1 = pObjectX->getTourUnit(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_Tour_getTourUnitNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Kml::CTour *pObjectX = (EarthView::World::Spatial::Kml::CTour*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getTourUnitNum();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_Tour_isVisiable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CTour *pObjectX = (EarthView::World::Spatial::Kml::CTour*) pObjXXXX;
					ev_bool __values1 = pObjectX->isVisiable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_Tour_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visiable_j)
				{
					ev_bool visiable = (ev_bool) visiable_j;
					EarthView::World::Spatial::Kml::CTour *pObjectX = (EarthView::World::Spatial::Kml::CTour*) pObjXXXX;
					pObjectX->setVisible(visiable);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_kml_Tour_isOpen_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CTour *pObjectX = (EarthView::World::Spatial::Kml::CTour*) pObjXXXX;
					ev_bool __values1 = pObjectX->isOpen();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_Tour_setOpened_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean opened_j)
				{
					ev_bool opened = (ev_bool) opened_j;
					EarthView::World::Spatial::Kml::CTour *pObjectX = (EarthView::World::Spatial::Kml::CTour*) pObjXXXX;
					pObjectX->setOpened(opened);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_Tour_getDescription_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CTour *pObjectX = (EarthView::World::Spatial::Kml::CTour*) pObjXXXX;
					const EVString& __values1 = pObjectX->getDescription();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_kml_Tour_setDescription_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring descripton_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* descripton_ch = (const ev_char*)__env->GetStringUTFChars(descripton_j,JNI_FALSE);
					const EVString descripton = descripton_ch;
					__env->ReleaseStringUTFChars(descripton_j, (const char *)descripton_ch);
					#else
					const ev_wchar* descripton_ch = (const ev_wchar*)__env->GetStringChars(descripton_j,JNI_FALSE);
					const EVString descripton = descripton_ch;
					__env->ReleaseStringChars(descripton_j, (const jchar *)descripton_ch);
					#endif
					EarthView::World::Spatial::Kml::CTour *pObjectX = (EarthView::World::Spatial::Kml::CTour*) pObjXXXX;
					pObjectX->setDescription(descripton);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_kml_Tour_getTourUnits_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Kml::CTour *pObjectX = (EarthView::World::Spatial::Kml::CTour*) pObjXXXX;
					EarthView::World::Spatial::Kml::CTourUnitVector __values1 = pObjectX->getTourUnits();
					EarthView::World::Spatial::Kml::CTourUnitVector *returnvalues = new EarthView::World::Spatial::Kml::CTourUnitVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
		}
	}
}
