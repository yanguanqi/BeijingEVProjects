/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysisobject/math3dvolume.h"
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
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_analysis_VolumeCalcuStyleHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						VCS_Excavation,
						VCS_Fill,
						VCS_FillExcavation
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				class JCMath3DVolumeProxy : public EarthView::World::Spatial3D::Analysis::CMath3DVolume
				{
				 private:
					EarthView::World::Core::ev_string m_getAltitude3DListener_void_callback;
					EarthView::World::Core::ev_string m_setAltitude3DListener_CAltitude3DListener_callback;
				public:
					JCMath3DVolumeProxy(EarthView::World::Core::CNameValuePairList *pList) : CMath3DVolume(pList)
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
							return this->CMath3DVolume::getAltitude3DListener();
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
							return this->CMath3DVolume::setAltitude3DListener(ref_pListener);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCMath3DVolumeProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVolume_getCalcuStyle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVolume *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjXXXX;
					const EarthView::World::Spatial3D::Analysis::VolumeCalcuStyle __values1 = pObjectX->getCalcuStyle();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVolume_setCalcuStyle_1VolumeCalcuStyle(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
				{
					const EarthView::World::Spatial3D::Analysis::VolumeCalcuStyle value = (const EarthView::World::Spatial3D::Analysis::VolumeCalcuStyle) value_j;
					EarthView::World::Spatial3D::Analysis::CMath3DVolume *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjXXXX;
					pObjectX->setCalcuStyle(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVolume_getInterval_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::CMath3DVolume *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getInterval();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVolume_setInterval_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					const ev_real64 value = (const ev_real64) value_j;
					EarthView::World::Spatial3D::Analysis::CMath3DVolume *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjXXXX;
					pObjectX->setInterval(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVolume_getDepth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVolume *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->getDepth();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVolume_setDepth_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					const ev_real64 value = (const ev_real64) value_j;
					EarthView::World::Spatial3D::Analysis::CMath3DVolume *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjXXXX;
					pObjectX->setDepth(value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVolume_getDefaultDepth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVolume *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjXXXX;
					ev_bool __values1 = pObjectX->getDefaultDepth();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVolume_setDefaultDepth_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial3D::Analysis::CMath3DVolume *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjXXXX;
					pObjectX->setDefaultDepth(value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVolume_getNeedStop_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVolume *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjXXXX;
					ev_bool __values1 = pObjectX->getNeedStop();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVolume_setNeedStop_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial3D::Analysis::CMath3DVolume *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjXXXX;
					pObjectX->setNeedStop(value);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVolume_getProgressV_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVolume *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getProgressV();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVolume_getMinAltiPointZ_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVolume *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getMinAltiPointZ();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVolume_calcuVolume_1VertexList_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pts_j, jlong fillVolume_j, jlong digVolume_j)
				{
					EarthView::World::Spatial::Math::VertexList &pts = *(EarthView::World::Spatial::Math::VertexList*) pts_j;
					ev_real64 &fillVolume = *(ev_real64*) fillVolume_j;
					ev_real64 &digVolume = *(ev_real64*) digVolume_j;
					EarthView::World::Spatial3D::Analysis::CMath3DVolume *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjXXXX;
					ev_real64 __values1 = pObjectX->calcuVolume(pts, fillVolume, digVolume);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVolume_calculateOnServer_1VertexList_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pts_j, jlong fillVolume_j, jlong digVolume_j, jlong groundArea_j)
				{
					EarthView::World::Spatial::Math::VertexList &pts = *(EarthView::World::Spatial::Math::VertexList*) pts_j;
					ev_real64 &fillVolume = *(ev_real64*) fillVolume_j;
					ev_real64 &digVolume = *(ev_real64*) digVolume_j;
					ev_real64 &groundArea = *(ev_real64*) groundArea_j;
					EarthView::World::Spatial3D::Analysis::CMath3DVolume *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjXXXX;
					pObjectX->calculateOnServer(pts, fillVolume, digVolume, groundArea);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVolume_register_1getAltitude3DListener_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMath3DVolumeProxy *pObjectX = (JCMath3DVolumeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVolume_register_1setAltitude3DListener_1CAltitude3DListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMath3DVolumeProxy *pObjectX = (JCMath3DVolumeProxy*) pObjXXXX;
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
			}
		}
	}
}
