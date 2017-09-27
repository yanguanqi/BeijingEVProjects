/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/featureuserdata.h"
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
			namespace GeoDataset
			{
			}
			namespace Kml
			{
			}
		}
		namespace Spatial3D
		{
			class JCFeatureUserDataProxy : public EarthView::World::Spatial3D::CFeatureUserData
			{
			 private:
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JCFeatureUserDataProxy(EarthView::World::Core::CNameValuePairList *pList) : CFeatureUserData(pList)
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
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual EarthView::World::Graphic::CMovableObject::CUserData* clone()
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
						EarthView::World::Graphic::CMovableObject::CUserData *__values1 = (EarthView::World::Graphic::CMovableObject::CUserData*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CFeatureUserData::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCFeatureUserDataProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_FeatureUserData_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFeatureUserData *pObjectX = (EarthView::World::Spatial3D::CFeatureUserData*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFeatureUserDataProxy))
				{
					EarthView::World::Graphic::CMovableObject::CUserData* __values1 = pObjectX->EarthView::World::Spatial3D::CFeatureUserData::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject::CUserData* __values1 = pObjectX->clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_FeatureUserData_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFeatureUserDataProxy *pObjectX = (JCFeatureUserDataProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_FeatureUserData_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFeatureUserData *pObjectX = (EarthView::World::Spatial3D::CFeatureUserData*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject::CUserData* __values1 = pObjectX->EarthView::World::Spatial3D::CFeatureUserData::clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_FeatureUserData_get_1OwnerLayer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFeatureUserData *pObjectX = (EarthView::World::Spatial3D::CFeatureUserData*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->OwnerLayer);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_FeatureUserData_set_1OwnerLayer_1IGlobeLayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CFeatureUserData *pObjectX = (EarthView::World::Spatial3D::CFeatureUserData*)pObjXXXX;
				pObjectX->OwnerLayer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_FeatureUserData_get_1IDs_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFeatureUserData *pObjectX = (EarthView::World::Spatial3D::CFeatureUserData*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->IDs);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_FeatureUserData_set_1IDs_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CFeatureUserData *pObjectX = (EarthView::World::Spatial3D::CFeatureUserData*)pObjXXXX;
				pObjectX->IDs = *(EarthView::World::Core::IntVector*) __values1_j;
			}
			class JCKmlFeatureUserDataProxy : public EarthView::World::Spatial3D::CKmlFeatureUserData
			{
			 private:
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JCKmlFeatureUserDataProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlFeatureUserData(pList)
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
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual EarthView::World::Graphic::CMovableObject::CUserData* clone()
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
						EarthView::World::Graphic::CMovableObject::CUserData *__values1 = (EarthView::World::Graphic::CMovableObject::CUserData*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CKmlFeatureUserData::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCKmlFeatureUserDataProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_KmlFeatureUserData_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CKmlFeatureUserData *pObjectX = (EarthView::World::Spatial3D::CKmlFeatureUserData*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCKmlFeatureUserDataProxy))
				{
					EarthView::World::Graphic::CMovableObject::CUserData* __values1 = pObjectX->EarthView::World::Spatial3D::CKmlFeatureUserData::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject::CUserData* __values1 = pObjectX->clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_KmlFeatureUserData_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCKmlFeatureUserDataProxy *pObjectX = (JCKmlFeatureUserDataProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_KmlFeatureUserData_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CKmlFeatureUserData *pObjectX = (EarthView::World::Spatial3D::CKmlFeatureUserData*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject::CUserData* __values1 = pObjectX->EarthView::World::Spatial3D::CKmlFeatureUserData::clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_KmlFeatureUserData_get_1pGeoObjectExtension_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CKmlFeatureUserData *pObjectX = (EarthView::World::Spatial3D::CKmlFeatureUserData*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->pGeoObjectExtension);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_KmlFeatureUserData_set_1pGeoObjectExtension_1CGeoObjectExtension(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CKmlFeatureUserData *pObjectX = (EarthView::World::Spatial3D::CKmlFeatureUserData*)pObjXXXX;
				pObjectX->pGeoObjectExtension = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) __values1_j;
			}
		}
	}
}
