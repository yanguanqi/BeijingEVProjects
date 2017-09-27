/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysisobject/math3dbaseobject.h"
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
				class JCMath3DBaseObjectProxy : public EarthView::World::Spatial3D::Analysis::CMath3DBaseObject
				{
				 private:
					EarthView::World::Core::ev_string m_getAltitude3DListener_void_callback;
					EarthView::World::Core::ev_string m_setAltitude3DListener_CAltitude3DListener_callback;
				public:
					JCMath3DBaseObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CMath3DBaseObject(pList)
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
					void register_getAltitude3DListener_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getAltitude3DListener_void_callback = __method;
					}
					void register_setAltitude3DListener_CAltitude3DListener_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setAltitude3DListener_CAltitude3DListener_callback = __method;
					}
					virtual const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* getAltitude3DListener() const
					{
						if (this->_gRef != NULL && this->m_getAltitude3DListener_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getAltitude3DListener_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial3D::Analysis::CAltitude3DListener *__values1 = (const EarthView::World::Spatial3D::Analysis::CAltitude3DListener*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CMath3DBaseObject::getAltitude3DListener();
						}
					}
					virtual void setAltitude3DListener(EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener)
					{
						if (this->_gRef != NULL && this->m_setAltitude3DListener_CAltitude3DListener_callback != "" && this->isCustomExtend())
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
							jlong ref_pListener_j = (jlong) ref_pListener;
							jmethodID __method = __gr->getMethod("setAltitude3DListener_CAltitude3DListener_callback");
							__env->CallVoidMethod(__obj, __method , ref_pListener_j);
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
							return this->CMath3DBaseObject::setAltitude3DListener(ref_pListener);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCMath3DBaseObjectProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DBaseObject_getAltitude3DListener_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::CMath3DBaseObject *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMath3DBaseObjectProxy))
					{
						const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* __values1 = pObjectX->EarthView::World::Spatial3D::Analysis::CMath3DBaseObject::getAltitude3DListener();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* __values1 = pObjectX->getAltitude3DListener();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DBaseObject_register_1getAltitude3DListener_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMath3DBaseObjectProxy *pObjectX = (JCMath3DBaseObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getAltitude3DListener_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getAltitude3DListener_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DBaseObject_getAltitude3DListener_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::CMath3DBaseObject *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*) pObjXXXX;
					const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* __values1 = pObjectX->EarthView::World::Spatial3D::Analysis::CMath3DBaseObject::getAltitude3DListener();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DBaseObject_setAltitude3DListener_1CAltitude3DListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pListener_j)
				{
					EarthView::World::Spatial3D::Analysis::CAltitude3DListener *ref_pListener = (EarthView::World::Spatial3D::Analysis::CAltitude3DListener*) ref_pListener_j;
					EarthView::World::Spatial3D::Analysis::CMath3DBaseObject *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMath3DBaseObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Analysis::CMath3DBaseObject::setAltitude3DListener(ref_pListener);
					}
					else
					{
						pObjectX->setAltitude3DListener(ref_pListener);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DBaseObject_register_1setAltitude3DListener_1CAltitude3DListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMath3DBaseObjectProxy *pObjectX = (JCMath3DBaseObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setAltitude3DListener_CAltitude3DListener_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setAltitude3DListener_CAltitude3DListener_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DBaseObject_setAltitude3DListener_1CAltitude3DListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pListener_j)
				{
					EarthView::World::Spatial3D::Analysis::CAltitude3DListener *ref_pListener = (EarthView::World::Spatial3D::Analysis::CAltitude3DListener*) ref_pListener_j;
					EarthView::World::Spatial3D::Analysis::CMath3DBaseObject *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Analysis::CMath3DBaseObject::setAltitude3DListener(ref_pListener);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DBaseObject_getMathUtility3D_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::CMath3DBaseObject *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*) pObjXXXX;
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* __values1 = pObjectX->getMathUtility3D();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DBaseObject_getDefaultCalcuMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CMath3DBaseObject *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->getDefaultCalcuMode();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DBaseObject_setDefaultCalcuMode_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial3D::Analysis::CMath3DBaseObject *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*) pObjXXXX;
					pObjectX->setDefaultCalcuMode(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_GeoBoundingBox_computeBox_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox *pObjectX = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*) pObjXXXX;
					pObjectX->computeBox();
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_GeoBoundingBox_get_1mNorth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox *pObjectX = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mNorth);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_GeoBoundingBox_set_1mNorth_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox *pObjectX = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjXXXX;
					pObjectX->mNorth = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_GeoBoundingBox_get_1mSouth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox *pObjectX = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mSouth);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_GeoBoundingBox_set_1mSouth_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox *pObjectX = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjXXXX;
					pObjectX->mSouth = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_GeoBoundingBox_get_1mWest_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox *pObjectX = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mWest);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_GeoBoundingBox_set_1mWest_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox *pObjectX = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjXXXX;
					pObjectX->mWest = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_GeoBoundingBox_get_1mEast_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox *pObjectX = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mEast);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_GeoBoundingBox_set_1mEast_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox *pObjectX = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjXXXX;
					pObjectX->mEast = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_GeoBoundingBox_get_1mBottomRadius_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox *pObjectX = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mBottomRadius);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_GeoBoundingBox_set_1mBottomRadius_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox *pObjectX = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjXXXX;
					pObjectX->mBottomRadius = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_GeoBoundingBox_get_1mTopRadius_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox *pObjectX = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mTopRadius);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_GeoBoundingBox_set_1mTopRadius_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox *pObjectX = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjXXXX;
					pObjectX->mTopRadius = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_GeoBoundingBox_get_1mCenter_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox *pObjectX = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mCenter);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_GeoBoundingBox_set_1mCenter_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox *pObjectX = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjXXXX;
					pObjectX->mCenter = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_GeoBoundingBox_get_1mIsComputed_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox *pObjectX = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mIsComputed);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_GeoBoundingBox_set_1mIsComputed_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox *pObjectX = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjXXXX;
					pObjectX->mIsComputed = (ev_bool)__values1_j;
				}
			}
		}
	}
}
