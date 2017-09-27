/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysisobject/math3dsection.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_get_1mGeoPoints_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mGeoPoints);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_set_1mGeoPoints_1VertexList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					pObjectX->mGeoPoints = *(EarthView::World::Spatial::Math::VertexList*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_get_1mSlopeVec_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mSlopeVec);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_set_1mSlopeVec_1RealVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					pObjectX->mSlopeVec = *(EarthView::World::Core::RealVector*) __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_get_1mMaxSlope_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mMaxSlope);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_set_1mMaxSlope_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					pObjectX->mMaxSlope = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_get_1mMinSlope_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mMinSlope);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_set_1mMinSlope_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					pObjectX->mMinSlope = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_get_1mMaxAltitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mMaxAltitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_set_1mMaxAltitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					pObjectX->mMaxAltitude = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_get_1mMinAltitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mMinAltitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_set_1mMinAltitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					pObjectX->mMinAltitude = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_get_1mMaxSlopeIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mMaxSlopeIndex);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_set_1mMaxSlopeIndex_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					pObjectX->mMaxSlopeIndex = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_get_1mMinSlopeIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mMinSlopeIndex);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_set_1mMinSlopeIndex_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					pObjectX->mMinSlopeIndex = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_get_1mMaxAltitudeIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mMaxAltitudeIndex);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_set_1mMaxAltitudeIndex_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					pObjectX->mMaxAltitudeIndex = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_get_1mMinAltitudeIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mMinAltitudeIndex);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_set_1mMinAltitudeIndex_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					pObjectX->mMinAltitudeIndex = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_get_1mMaxSlopePoint_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mMaxSlopePoint);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_set_1mMaxSlopePoint_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					pObjectX->mMaxSlopePoint = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_get_1mMinSlopePoint_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mMinSlopePoint);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_set_1mMinSlopePoint_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					pObjectX->mMinSlopePoint = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_get_1mMaxAltitudePoint_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mMaxAltitudePoint);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_set_1mMaxAltitudePoint_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					pObjectX->mMaxAltitudePoint = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_get_1mMinAltitudePoint_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mMinAltitudePoint);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_set_1mMinAltitudePoint_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					pObjectX->mMinAltitudePoint = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_get_1mClampedDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mClampedDistance);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_set_1mClampedDistance_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					pObjectX->mClampedDistance = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_get_1mStraightDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mStraightDistance);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_set_1mStraightDistance_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					pObjectX->mStraightDistance = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_get_1mProjectDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mProjectDistance);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_SectionLineInfo_set_1mProjectDistance_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pObjectX = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjXXXX;
					pObjectX->mProjectDistance = (ev_real64)__values1_j;
				}
				class JCMath3DSectionProxy : public EarthView::World::Spatial3D::Analysis::CMath3DSection
				{
				 private:
					EarthView::World::Core::ev_string m_getAltitude3DListener_void_callback;
					EarthView::World::Core::ev_string m_setAltitude3DListener_CAltitude3DListener_callback;
				public:
					JCMath3DSectionProxy(EarthView::World::Core::CNameValuePairList *pList) : CMath3DSection(pList)
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
							return this->CMath3DSection::getAltitude3DListener();
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
							return this->CMath3DSection::setAltitude3DListener(ref_pListener);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCMath3DSectionProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DSection_calcuSectionInfo_1VertexList_1CSectionLineInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong inPts_j, jlong sectionInfo_j)
				{
					const EarthView::World::Spatial::Math::VertexList &inPts = *(EarthView::World::Spatial::Math::VertexList*) inPts_j;
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo &sectionInfo = *(EarthView::World::Spatial3D::Analysis::CSectionLineInfo*) sectionInfo_j;
					EarthView::World::Spatial3D::Analysis::CMath3DSection *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DSection*) pObjXXXX;
					pObjectX->calcuSectionInfo(inPts, sectionInfo);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DSection_calcuSectionLineInfo_1ev_1bool_1ev_1real64_1CVector3_1CVector3_1VertexList_1CSectionLineInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean detail_j, jlong interval_j, jlong p0_j, jlong p1_j, jlong vertices_j, jlong pSectionInfo_j)
				{
					ev_bool detail = (ev_bool) detail_j;
					ev_real64 &interval = *(ev_real64*) interval_j;
					EarthView::World::Spatial::Math::CVector3 p0 = *(EarthView::World::Spatial::Math::CVector3*) p0_j;
					EarthView::World::Spatial::Math::CVector3 p1 = *(EarthView::World::Spatial::Math::CVector3*) p1_j;
					EarthView::World::Spatial::Math::VertexList &vertices = *(EarthView::World::Spatial::Math::VertexList*) vertices_j;
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo *pSectionInfo = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*) pSectionInfo_j;
					EarthView::World::Spatial3D::Analysis::CMath3DSection *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DSection*) pObjXXXX;
					pObjectX->calcuSectionLineInfo(detail, interval, p0, p1, vertices, pSectionInfo);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DSection_calculateOnServer_1VertexList_1CSectionLineInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong inPts_j, jlong sectionInfo_j)
				{
					const EarthView::World::Spatial::Math::VertexList &inPts = *(EarthView::World::Spatial::Math::VertexList*) inPts_j;
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo &sectionInfo = *(EarthView::World::Spatial3D::Analysis::CSectionLineInfo*) sectionInfo_j;
					EarthView::World::Spatial3D::Analysis::CMath3DSection *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DSection*) pObjXXXX;
					pObjectX->calculateOnServer(inPts, sectionInfo);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DSection_register_1getAltitude3DListener_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMath3DSectionProxy *pObjectX = (JCMath3DSectionProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DSection_register_1setAltitude3DListener_1CAltitude3DListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMath3DSectionProxy *pObjectX = (JCMath3DSectionProxy*) pObjXXXX;
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
