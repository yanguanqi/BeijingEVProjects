/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysis/altitudelistener.h"
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
			namespace Analysis
			{
				class JCAltitudeListenerProxy : public EarthView::World::Spatial3D::Analysis::CAltitudeListener
				{
				 private:
					EarthView::World::Core::ev_string m_getAltitude_ev_real64_ev_real64_callback;
				public:
					JCAltitudeListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CAltitudeListener(pList)
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
					void register_getAltitude_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getAltitude_ev_real64_ev_real64_callback = __method;
					}
					virtual ev_real64 getAltitude(ev_real64 latitude, ev_real64 longitude) const
					{
						if (this->_gRef != NULL && this->m_getAltitude_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble latitude_j = (jdouble) latitude;
							jdouble longitude_j = (jdouble) longitude;
							jmethodID __method = __gr->getMethod("getAltitude_ev_real64_ev_real64_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , latitude_j, longitude_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CAltitudeListener::getAltitude(latitude, longitude);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCAltitudeListenerProxy);
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_AltitudeListener_getAltitude_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					const 					EarthView::World::Spatial3D::Analysis::CAltitudeListener *pObjectX = (EarthView::World::Spatial3D::Analysis::CAltitudeListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAltitudeListenerProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Analysis::CAltitudeListener::getAltitude(latitude, longitude);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getAltitude(latitude, longitude);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_AltitudeListener_register_1getAltitude_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAltitudeListenerProxy *pObjectX = (JCAltitudeListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getAltitude_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getAltitude_ev_real64_ev_real64_callback", "(DD)D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_AltitudeListener_getAltitude_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					const 					EarthView::World::Spatial3D::Analysis::CAltitudeListener *pObjectX = (EarthView::World::Spatial3D::Analysis::CAltitudeListener*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Analysis::CAltitudeListener::getAltitude(latitude, longitude);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_AltitudeListener_setGeoSceneManager_1CGeoSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pManager_j)
				{
					EarthView::World::Spatial3D::CGeoSceneManager *ref_pManager = (EarthView::World::Spatial3D::CGeoSceneManager*) ref_pManager_j;
					EarthView::World::Spatial3D::Analysis::CAltitudeListener *pObjectX = (EarthView::World::Spatial3D::Analysis::CAltitudeListener*) pObjXXXX;
					pObjectX->setGeoSceneManager(ref_pManager);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_AltitudeListener_setTerrainLayer_1ITerrainLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pTerrainLayer_j)
				{
					EarthView::World::Spatial3D::Atlas::ITerrainLayer *ref_pTerrainLayer = (EarthView::World::Spatial3D::Atlas::ITerrainLayer*) ref_pTerrainLayer_j;
					EarthView::World::Spatial3D::Analysis::CAltitudeListener *pObjectX = (EarthView::World::Spatial3D::Analysis::CAltitudeListener*) pObjXXXX;
					pObjectX->setTerrainLayer(ref_pTerrainLayer);
				}
			}
		}
	}
}
