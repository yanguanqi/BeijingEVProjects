/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysisobject/math3dlengthmeasure.h"
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
				class JCMath3DMeasureLengthProxy : public EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength
				{
				 private:
					EarthView::World::Core::ev_string m_getAltitude3DListener_void_callback;
					EarthView::World::Core::ev_string m_setAltitude3DListener_CAltitude3DListener_callback;
				public:
					JCMath3DMeasureLengthProxy(EarthView::World::Core::CNameValuePairList *pList) : CMath3DMeasureLength(pList)
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
							return this->CMath3DMeasureLength::getAltitude3DListener();
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
							return this->CMath3DMeasureLength::setAltitude3DListener(ref_pListener);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCMath3DMeasureLengthProxy);
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DMeasureLength_calcuClampedDistance_1ev_1int32_1CVector3_1CVector3_1VertexList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint num_j, jlong p0_j, jlong p1_j, jlong vertices_j)
				{
					ev_int32 num = (ev_int32) num_j;
					EarthView::World::Spatial::Math::CVector3 p0 = *(EarthView::World::Spatial::Math::CVector3*) p0_j;
					EarthView::World::Spatial::Math::CVector3 p1 = *(EarthView::World::Spatial::Math::CVector3*) p1_j;
					EarthView::World::Spatial::Math::VertexList &vertices = *(EarthView::World::Spatial::Math::VertexList*) vertices_j;
					EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength*) pObjXXXX;
					ev_real64 __values1 = pObjectX->calcuClampedDistance(num, p0, p1, vertices);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DMeasureLength_calcuStraightDistance_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong p0_j, jlong p1_j)
				{
					EarthView::World::Spatial::Math::CVector3 p0 = *(EarthView::World::Spatial::Math::CVector3*) p0_j;
					EarthView::World::Spatial::Math::CVector3 p1 = *(EarthView::World::Spatial::Math::CVector3*) p1_j;
					EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength*) pObjXXXX;
					ev_real64 __values1 = pObjectX->calcuStraightDistance(p0, p1);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DMeasureLength_calcuProjectDistance_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong p0_j, jlong p1_j)
				{
					EarthView::World::Spatial::Math::CVector3 p0 = *(EarthView::World::Spatial::Math::CVector3*) p0_j;
					EarthView::World::Spatial::Math::CVector3 p1 = *(EarthView::World::Spatial::Math::CVector3*) p1_j;
					EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength*) pObjXXXX;
					ev_real64 __values1 = pObjectX->calcuProjectDistance(p0, p1);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DMeasureLength_calcuMiddlePoints_1VertexList_1VertexList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong inpoints_j, jlong middlepoints_j)
				{
					const EarthView::World::Spatial::Math::VertexList &inpoints = *(EarthView::World::Spatial::Math::VertexList*) inpoints_j;
					EarthView::World::Spatial::Math::VertexList &middlepoints = *(EarthView::World::Spatial::Math::VertexList*) middlepoints_j;
					EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength*) pObjXXXX;
					ev_bool __values1 = pObjectX->calcuMiddlePoints(inpoints, middlepoints);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DMeasureLength_calcuInterWorldPoints_1VertexList_1VertexList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong inpoints_j, jlong outpoints_j)
				{
					const EarthView::World::Spatial::Math::VertexList &inpoints = *(EarthView::World::Spatial::Math::VertexList*) inpoints_j;
					EarthView::World::Spatial::Math::VertexList &outpoints = *(EarthView::World::Spatial::Math::VertexList*) outpoints_j;
					EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength*) pObjXXXX;
					ev_bool __values1 = pObjectX->calcuInterWorldPoints(inpoints, outpoints);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DMeasureLength_calculateOnServer_1ev_1int32_1VertexList_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint num_j, jlong inpoints_j, jlong clampedDistance_j, jlong straightDistance_j, jlong projectDistance_j)
				{
					ev_int32 num = (ev_int32) num_j;
					const EarthView::World::Spatial::Math::VertexList &inpoints = *(EarthView::World::Spatial::Math::VertexList*) inpoints_j;
					ev_real64 &clampedDistance = *(ev_real64*) clampedDistance_j;
					ev_real64 &straightDistance = *(ev_real64*) straightDistance_j;
					ev_real64 &projectDistance = *(ev_real64*) projectDistance_j;
					EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength*) pObjXXXX;
					pObjectX->calculateOnServer(num, inpoints, clampedDistance, straightDistance, projectDistance);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DMeasureLength_register_1getAltitude3DListener_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMath3DMeasureLengthProxy *pObjectX = (JCMath3DMeasureLengthProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DMeasureLength_register_1setAltitude3DListener_1CAltitude3DListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMath3DMeasureLengthProxy *pObjectX = (JCMath3DMeasureLengthProxy*) pObjXXXX;
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
