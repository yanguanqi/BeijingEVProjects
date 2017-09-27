/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysisobject/mathutility3d.h"
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
				class JCMathUtility3DProxy : public EarthView::World::Spatial3D::Analysis::CMathUtility3D
				{
				 private:
					EarthView::World::Core::ev_string m_getAltitudeListener_void_callback;
					EarthView::World::Core::ev_string m_setAltitudeListener_CAltitude3DListener_callback;
				public:
					JCMathUtility3DProxy(EarthView::World::Core::CNameValuePairList *pList) : CMathUtility3D(pList)
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
					void register_getAltitudeListener_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getAltitudeListener_void_callback = __method;
					}
					void register_setAltitudeListener_CAltitude3DListener_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setAltitudeListener_CAltitude3DListener_callback = __method;
					}
					virtual const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* getAltitudeListener() const
					{
						if (this->_gRef != NULL && this->m_getAltitudeListener_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getAltitudeListener_void_callback");
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
							return this->CMathUtility3D::getAltitudeListener();
						}
					}
					virtual void setAltitudeListener(EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener)
					{
						if (this->_gRef != NULL && this->m_setAltitudeListener_CAltitude3DListener_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("setAltitudeListener_CAltitude3DListener_callback");
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
							return this->CMathUtility3D::setAltitudeListener(ref_pListener);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCMathUtility3DProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_getAltitudeListener_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMathUtility3DProxy))
					{
						const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* __values1 = pObjectX->EarthView::World::Spatial3D::Analysis::CMathUtility3D::getAltitudeListener();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* __values1 = pObjectX->getAltitudeListener();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_register_1getAltitudeListener_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMathUtility3DProxy *pObjectX = (JCMathUtility3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getAltitudeListener_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getAltitudeListener_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_getAltitudeListener_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* __values1 = pObjectX->EarthView::World::Spatial3D::Analysis::CMathUtility3D::getAltitudeListener();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_setAltitudeListener_1CAltitude3DListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pListener_j)
				{
					EarthView::World::Spatial3D::Analysis::CAltitude3DListener *ref_pListener = (EarthView::World::Spatial3D::Analysis::CAltitude3DListener*) ref_pListener_j;
					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMathUtility3DProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Analysis::CMathUtility3D::setAltitudeListener(ref_pListener);
					}
					else
					{
						pObjectX->setAltitudeListener(ref_pListener);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_register_1setAltitudeListener_1CAltitude3DListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMathUtility3DProxy *pObjectX = (JCMathUtility3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setAltitudeListener_CAltitude3DListener_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setAltitudeListener_CAltitude3DListener_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_setAltitudeListener_1CAltitude3DListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pListener_j)
				{
					EarthView::World::Spatial3D::Analysis::CAltitude3DListener *ref_pListener = (EarthView::World::Spatial3D::Analysis::CAltitude3DListener*) ref_pListener_j;
					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Analysis::CMathUtility3D::setAltitudeListener(ref_pListener);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_getNeedStop_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					ev_bool __values1 = pObjectX->getNeedStop();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_setNeedStop_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					const ev_bool value = (const ev_bool) value_j;
					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					pObjectX->setNeedStop(value);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_getProgressV_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getProgressV();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_getProgressM_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getProgressM();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_setProgressV_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint progressV_j, jint progressM_j)
				{
					const ev_int32 progressV = (const ev_int32) progressV_j;
					const ev_int32 progressM = (const ev_int32) progressM_j;
					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					pObjectX->setProgressV(progressV, progressM);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_sphericalToCartesian_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env , jclass __clazz, jfloat latitude_j, jfloat longitude_j, jfloat radius_j)
				{
					ev_real32 latitude = (ev_real32) latitude_j;
					ev_real32 longitude = (ev_real32) longitude_j;
					ev_real32 radius = (ev_real32) radius_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = EarthView::World::Spatial3D::Analysis::CMathUtility3D::sphericalToCartesian(latitude, longitude, radius);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_sphericalToCartesian_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble latitude_j, jdouble longitude_j, jdouble radius_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 radius = (ev_real64) radius_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = EarthView::World::Spatial3D::Analysis::CMathUtility3D::sphericalToCartesian(latitude, longitude, radius);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_mod_1ev_1int32_1ev_1int32(JNIEnv *__env , jclass __clazz, jint i_j, jint n_j)
				{
					ev_int32 i = (ev_int32) i_j;
					ev_int32 n = (ev_int32) n_j;
					ev_int32 __values1 = EarthView::World::Spatial3D::Analysis::CMathUtility3D::mod(i, n);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_calculateInsertNum_1CVector3_1CVector3_1ev_1real64_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pointA_j, jlong pointB_j, jdouble givenInterval_j, jlong givenInsertNum_j, jlong suggestInsertNum_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &pointA = *(EarthView::World::Spatial::Math::CVector3*) pointA_j;
					const EarthView::World::Spatial::Math::CVector3 &pointB = *(EarthView::World::Spatial::Math::CVector3*) pointB_j;
					ev_real64 givenInterval = (ev_real64) givenInterval_j;
					ev_uint32 &givenInsertNum = *(ev_uint32*) givenInsertNum_j;
					ev_uint32 &suggestInsertNum = *(ev_uint32*) suggestInsertNum_j;
					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					pObjectX->calculateInsertNum(pointA, pointB, givenInterval, givenInsertNum, suggestInsertNum);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_isDeasil_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble latA_j, jdouble lonA_j, jdouble latB_j, jdouble lonB_j, jdouble latC_j, jdouble lonC_j)
				{
					ev_real64 latA = (ev_real64) latA_j;
					ev_real64 lonA = (ev_real64) lonA_j;
					ev_real64 latB = (ev_real64) latB_j;
					ev_real64 lonB = (ev_real64) lonB_j;
					ev_real64 latC = (ev_real64) latC_j;
					ev_real64 lonC = (ev_real64) lonC_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Analysis::CMathUtility3D::isDeasil(latA, lonA, latB, lonB, latC, lonC);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_isInPolygon_1VertexList_1CVector3(JNIEnv *__env , jclass __clazz, jlong inList_j, jlong node_j)
				{
					EarthView::World::Spatial::Math::VertexList &inList = *(EarthView::World::Spatial::Math::VertexList*) inList_j;
					EarthView::World::Spatial::Math::CVector3 node = *(EarthView::World::Spatial::Math::CVector3*) node_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Analysis::CMathUtility3D::isInPolygon(inList, node);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_isDiagonal_1VertexList_1ev_1int32_1ev_1int32(JNIEnv *__env , jclass __clazz, jlong list_j, jint i0_j, jint i1_j)
				{
					EarthView::World::Spatial::Math::VertexList &list = *(EarthView::World::Spatial::Math::VertexList*) list_j;
					ev_int32 i0 = (ev_int32) i0_j;
					ev_int32 i1 = (ev_int32) i1_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Analysis::CMathUtility3D::isDiagonal(list, i0, i1);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_isTriangulable_1VertexList(JNIEnv *__env , jclass __clazz, jlong pointList_j)
				{
					EarthView::World::Spatial::Math::VertexList &pointList = *(EarthView::World::Spatial::Math::VertexList*) pointList_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Analysis::CMathUtility3D::isTriangulable(pointList);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_getEffectAddPoint_1VertexList_1CVector3_1ev_1bool(JNIEnv *__env , jclass __clazz, jlong pointList_j, jlong point_j, jboolean isMoved_j)
				{
					EarthView::World::Spatial::Math::VertexList &pointList = *(EarthView::World::Spatial::Math::VertexList*) pointList_j;
					const EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
					ev_bool isMoved = (ev_bool) isMoved_j;
					ev_int32 __values1 = EarthView::World::Spatial3D::Analysis::CMathUtility3D::getEffectAddPoint(pointList, point, isMoved);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_calculateIntersection_1CVector3_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong node0_j, jlong node1_j, jlong node2_j, jlong node3_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &node0 = *(EarthView::World::Spatial::Math::CVector3*) node0_j;
					const EarthView::World::Spatial::Math::CVector3 &node1 = *(EarthView::World::Spatial::Math::CVector3*) node1_j;
					const EarthView::World::Spatial::Math::CVector3 &node2 = *(EarthView::World::Spatial::Math::CVector3*) node2_j;
					const EarthView::World::Spatial::Math::CVector3 &node3 = *(EarthView::World::Spatial::Math::CVector3*) node3_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Analysis::CMathUtility3D::calculateIntersection(node0, node1, node2, node3);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_calcuInterGeoPositionWithoutAltitude_1ev_1real32_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jfloat f_j, jdouble latA_j, jdouble lonA_j, jdouble latB_j, jdouble lonB_j)
				{
					ev_real32 f = (ev_real32) f_j;
					ev_real64 latA = (ev_real64) latA_j;
					ev_real64 lonA = (ev_real64) lonA_j;
					ev_real64 latB = (ev_real64) latB_j;
					ev_real64 lonB = (ev_real64) lonB_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = EarthView::World::Spatial3D::Analysis::CMathUtility3D::calcuInterGeoPositionWithoutAltitude(f, latA, lonA, latB, lonB);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_calcuInterWorldPositionWithoutAltitude_1ev_1real32_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jfloat f_j, jdouble latA_j, jdouble lonA_j, jdouble latB_j, jdouble lonB_j)
				{
					ev_real32 f = (ev_real32) f_j;
					ev_real64 latA = (ev_real64) latA_j;
					ev_real64 lonA = (ev_real64) lonA_j;
					ev_real64 latB = (ev_real64) latB_j;
					ev_real64 lonB = (ev_real64) lonB_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = EarthView::World::Spatial3D::Analysis::CMathUtility3D::calcuInterWorldPositionWithoutAltitude(f, latA, lonA, latB, lonB);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_calcuInterGeoPosition_1ev_1real32_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat f_j, jdouble latA_j, jdouble lonA_j, jdouble latB_j, jdouble lonB_j)
				{
					ev_real32 f = (ev_real32) f_j;
					ev_real64 latA = (ev_real64) latA_j;
					ev_real64 lonA = (ev_real64) lonA_j;
					ev_real64 latB = (ev_real64) latB_j;
					ev_real64 lonB = (ev_real64) lonB_j;
					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->calcuInterGeoPosition(f, latA, lonA, latB, lonB);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_azimuth_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble latA_j, jdouble lonA_j, jdouble latB_j, jdouble lonB_j)
				{
					ev_real64 latA = (ev_real64) latA_j;
					ev_real64 lonA = (ev_real64) lonA_j;
					ev_real64 latB = (ev_real64) latB_j;
					ev_real64 lonB = (ev_real64) lonB_j;
					ev_real64 __values1 = EarthView::World::Spatial3D::Analysis::CMathUtility3D::azimuth(latA, lonA, latB, lonB);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_approxAngularDistance_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble latA_j, jdouble lonA_j, jdouble latB_j, jdouble lonB_j)
				{
					ev_real64 latA = (ev_real64) latA_j;
					ev_real64 lonA = (ev_real64) lonA_j;
					ev_real64 latB = (ev_real64) latB_j;
					ev_real64 lonB = (ev_real64) lonB_j;
					ev_real64 __values1 = EarthView::World::Spatial3D::Analysis::CMathUtility3D::approxAngularDistance(latA, lonA, latB, lonB);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_lineStraightMeasure_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong pointStart_j, jlong pointEnd_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &pointStart = *(EarthView::World::Spatial::Math::CVector3*) pointStart_j;
					const EarthView::World::Spatial::Math::CVector3 &pointEnd = *(EarthView::World::Spatial::Math::CVector3*) pointEnd_j;
					ev_real64 __values1 = EarthView::World::Spatial3D::Analysis::CMathUtility3D::lineStraightMeasure(pointStart, pointEnd);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_lineProjectMeasure_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong point0_j, jlong point1_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &point0 = *(EarthView::World::Spatial::Math::CVector3*) point0_j;
					const EarthView::World::Spatial::Math::CVector3 &point1 = *(EarthView::World::Spatial::Math::CVector3*) point1_j;
					ev_real64 __values1 = EarthView::World::Spatial3D::Analysis::CMathUtility3D::lineProjectMeasure(point0, point1);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_geoLineDistanceMeasure_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pointA_j, jlong pointB_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &pointA = *(EarthView::World::Spatial::Math::CVector3*) pointA_j;
					const EarthView::World::Spatial::Math::CVector3 &pointB = *(EarthView::World::Spatial::Math::CVector3*) pointB_j;
					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					ev_real64 __values1 = pObjectX->geoLineDistanceMeasure(pointA, pointB);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_geoLineDistanceMeasure_1CVector3_1CVector3_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pointA_j, jlong pointB_j, jint number_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &pointA = *(EarthView::World::Spatial::Math::CVector3*) pointA_j;
					const EarthView::World::Spatial::Math::CVector3 &pointB = *(EarthView::World::Spatial::Math::CVector3*) pointB_j;
					ev_int32 number = (ev_int32) number_j;
					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					ev_real64 __values1 = pObjectX->geoLineDistanceMeasure(pointA, pointB, number);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_triangulate_1VertexList_1VertexList(JNIEnv *__env , jclass __clazz, jlong nodeList_j, jlong pointList_j)
				{
					const EarthView::World::Spatial::Math::VertexList &nodeList = *(EarthView::World::Spatial::Math::VertexList*) nodeList_j;
					EarthView::World::Spatial::Math::VertexList &pointList = *(EarthView::World::Spatial::Math::VertexList*) pointList_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Analysis::CMathUtility3D::triangulate(nodeList, pointList);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_splitTriangle2GeoPosition_1ev_1int32_1VertexList_1ev_1bool_1VertexList_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint num_j, jlong nodeList_j, jboolean isGetAlti_j, jlong outPoints_j, jlong maxAltiIndex_j, jlong minAltiIndex_j)
				{
					ev_int32 num = (ev_int32) num_j;
					const EarthView::World::Spatial::Math::VertexList &nodeList = *(EarthView::World::Spatial::Math::VertexList*) nodeList_j;
					ev_bool isGetAlti = (ev_bool) isGetAlti_j;
					EarthView::World::Spatial::Math::VertexList &outPoints = *(EarthView::World::Spatial::Math::VertexList*) outPoints_j;
					ev_int32 &maxAltiIndex = *(ev_int32*) maxAltiIndex_j;
					ev_int32 &minAltiIndex = *(ev_int32*) minAltiIndex_j;
					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					pObjectX->splitTriangle2GeoPosition(num, nodeList, isGetAlti, outPoints, maxAltiIndex, minAltiIndex);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_splitTriang2Indices_1ev_1int32_1IntVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint num_j, jlong indices_j)
				{
					ev_int32 num = (ev_int32) num_j;
					EarthView::World::Core::IntVector &indices = *(EarthView::World::Core::IntVector*) indices_j;
					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					pObjectX->splitTriang2Indices(num, indices);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_triangleAreaMeasure_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong pointA_j, jlong pointB_j, jlong pointC_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &pointA = *(EarthView::World::Spatial::Math::CVector3*) pointA_j;
					const EarthView::World::Spatial::Math::CVector3 &pointB = *(EarthView::World::Spatial::Math::CVector3*) pointB_j;
					const EarthView::World::Spatial::Math::CVector3 &pointC = *(EarthView::World::Spatial::Math::CVector3*) pointC_j;
					ev_real64 __values1 = EarthView::World::Spatial3D::Analysis::CMathUtility3D::triangleAreaMeasure(pointA, pointB, pointC);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_triangleProjectMeasure_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong pointA_j, jlong pointB_j, jlong pointC_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &pointA = *(EarthView::World::Spatial::Math::CVector3*) pointA_j;
					const EarthView::World::Spatial::Math::CVector3 &pointB = *(EarthView::World::Spatial::Math::CVector3*) pointB_j;
					const EarthView::World::Spatial::Math::CVector3 &pointC = *(EarthView::World::Spatial::Math::CVector3*) pointC_j;
					ev_real64 __values1 = EarthView::World::Spatial3D::Analysis::CMathUtility3D::triangleProjectMeasure(pointA, pointB, pointC);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_spiltTriangleSurfaceMeasure_1CVector3_1CVector3_1CVector3_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pointA_j, jlong pointB_j, jlong pointC_j, jint insertNum_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &pointA = *(EarthView::World::Spatial::Math::CVector3*) pointA_j;
					const EarthView::World::Spatial::Math::CVector3 &pointB = *(EarthView::World::Spatial::Math::CVector3*) pointB_j;
					const EarthView::World::Spatial::Math::CVector3 &pointC = *(EarthView::World::Spatial::Math::CVector3*) pointC_j;
					const ev_int32 insertNum = (ev_int32) insertNum_j;
					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					ev_real64 __values1 = pObjectX->spiltTriangleSurfaceMeasure(pointA, pointB, pointC, insertNum);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_spiltTriangleProjectMeasure_1CVector3_1CVector3_1CVector3_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pointA_j, jlong pointB_j, jlong pointC_j, jint insertNum_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &pointA = *(EarthView::World::Spatial::Math::CVector3*) pointA_j;
					const EarthView::World::Spatial::Math::CVector3 &pointB = *(EarthView::World::Spatial::Math::CVector3*) pointB_j;
					const EarthView::World::Spatial::Math::CVector3 &pointC = *(EarthView::World::Spatial::Math::CVector3*) pointC_j;
					const ev_int32 insertNum = (ev_int32) insertNum_j;
					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					ev_real64 __values1 = pObjectX->spiltTriangleProjectMeasure(pointA, pointB, pointC, insertNum);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_polygonSurfaceMeasure_1VertexList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pointList_j)
				{
					EarthView::World::Spatial::Math::VertexList &pointList = *(EarthView::World::Spatial::Math::VertexList*) pointList_j;
					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					ev_real64 __values1 = pObjectX->polygonSurfaceMeasure(pointList);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_splitLine2GeoPosition_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1bool_1VertexList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint number_j, jdouble latA_j, jdouble lonA_j, jdouble latB_j, jdouble lonB_j, jboolean isGetAlti_j, jlong outPoints_j)
				{
					ev_int32 number = (ev_int32) number_j;
					ev_real64 latA = (ev_real64) latA_j;
					ev_real64 lonA = (ev_real64) lonA_j;
					ev_real64 latB = (ev_real64) latB_j;
					ev_real64 lonB = (ev_real64) lonB_j;
					ev_bool isGetAlti = (ev_bool) isGetAlti_j;
					EarthView::World::Spatial::Math::VertexList &outPoints = *(EarthView::World::Spatial::Math::VertexList*) outPoints_j;
					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					pObjectX->splitLine2GeoPosition(number, latA, lonA, latB, lonB, isGetAlti, outPoints);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_splitLine2WorldPosition_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1bool_1VertexList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint number_j, jdouble latA_j, jdouble lonA_j, jdouble latB_j, jdouble lonB_j, jboolean isGetAlti_j, jlong outPoints_j)
				{
					ev_int32 number = (ev_int32) number_j;
					ev_real64 latA = (ev_real64) latA_j;
					ev_real64 lonA = (ev_real64) lonA_j;
					ev_real64 latB = (ev_real64) latB_j;
					ev_real64 lonB = (ev_real64) lonB_j;
					ev_bool isGetAlti = (ev_bool) isGetAlti_j;
					EarthView::World::Spatial::Math::VertexList &outPoints = *(EarthView::World::Spatial::Math::VertexList*) outPoints_j;
					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					pObjectX->splitLine2WorldPosition(number, latA, lonA, latB, lonB, isGetAlti, outPoints);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_splitPolylineGeoPosition_1VertexList_1ev_1int32_1ev_1bool_1VertexList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong inpoints_j, jint insertNum_j, jboolean isGetAlti_j, jlong outPoints_j)
				{
					const EarthView::World::Spatial::Math::VertexList &inpoints = *(EarthView::World::Spatial::Math::VertexList*) inpoints_j;
					ev_int32 insertNum = (ev_int32) insertNum_j;
					ev_bool isGetAlti = (ev_bool) isGetAlti_j;
					EarthView::World::Spatial::Math::VertexList &outPoints = *(EarthView::World::Spatial::Math::VertexList*) outPoints_j;
					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					pObjectX->splitPolylineGeoPosition(inpoints, insertNum, isGetAlti, outPoints);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_splitPolylineWorPosition_1VertexList_1ev_1int32_1ev_1bool_1VertexList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong inpoints_j, jint insertNum_j, jboolean isGetAlti_j, jlong outPoints_j)
				{
					const EarthView::World::Spatial::Math::VertexList &inpoints = *(EarthView::World::Spatial::Math::VertexList*) inpoints_j;
					ev_int32 insertNum = (ev_int32) insertNum_j;
					ev_bool isGetAlti = (ev_bool) isGetAlti_j;
					EarthView::World::Spatial::Math::VertexList &outPoints = *(EarthView::World::Spatial::Math::VertexList*) outPoints_j;
					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					pObjectX->splitPolylineWorPosition(inpoints, insertNum, isGetAlti, outPoints);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_splitCircle2GeoPosition_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1int32_1VertexList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble lati_j, jdouble longi_j, jdouble radius_j, jint insertNum_j, jlong outPoints_j)
				{
					ev_real64 lati = (ev_real64) lati_j;
					ev_real64 longi = (ev_real64) longi_j;
					ev_real64 radius = (ev_real64) radius_j;
					ev_int32 insertNum = (ev_int32) insertNum_j;
					EarthView::World::Spatial::Math::VertexList &outPoints = *(EarthView::World::Spatial::Math::VertexList*) outPoints_j;
					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					pObjectX->splitCircle2GeoPosition(lati, longi, radius, insertNum, outPoints);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_MathUtility3D_splitCircle2WorldPosition_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1int32_1VertexList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble lati_j, jdouble longi_j, jdouble radius_j, jint insertNum_j, jlong outPoints_j)
				{
					ev_real64 lati = (ev_real64) lati_j;
					ev_real64 longi = (ev_real64) longi_j;
					ev_real64 radius = (ev_real64) radius_j;
					ev_int32 insertNum = (ev_int32) insertNum_j;
					EarthView::World::Spatial::Math::VertexList &outPoints = *(EarthView::World::Spatial::Math::VertexList*) outPoints_j;
					EarthView::World::Spatial3D::Analysis::CMathUtility3D *pObjectX = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjXXXX;
					pObjectX->splitCircle2WorldPosition(lati, longi, radius, insertNum, outPoints);
				}
			}
		}
	}
}
