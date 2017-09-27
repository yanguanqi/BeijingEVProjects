/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysisobject/math3dvisibility.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_VisibilityPoint_Create(JNIEnv *__env, jclass __clazz)
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPoint *pObjectX = new EarthView::World::Spatial3D::Analysis::VisibilityPoint();
					return (jlong) pObjectX;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_VisibilityPoint_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPoint *pObjectX = (EarthView::World::Spatial3D::Analysis::VisibilityPoint*)pObjXXXX;
					delete pObjectX;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_VisibilityPoint_get_1IsVisibility_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPoint *pObjectX = (EarthView::World::Spatial3D::Analysis::VisibilityPoint*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->IsVisibility);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_VisibilityPoint_set_1IsVisibility_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPoint *pObjectX = (EarthView::World::Spatial3D::Analysis::VisibilityPoint*)pObjXXXX;
					pObjectX->IsVisibility = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_VisibilityPoint_get_1Position_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPoint *pObjectX = (EarthView::World::Spatial3D::Analysis::VisibilityPoint*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->Position);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_VisibilityPoint_set_1Position_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPoint *pObjectX = (EarthView::World::Spatial3D::Analysis::VisibilityPoint*)pObjXXXX;
					pObjectX->Position = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_VisibilityPointList_push_1back_1VisibilityPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPoint &t = *(EarthView::World::Spatial3D::Analysis::VisibilityPoint*) t_j;
					EarthView::World::Spatial3D::Analysis::VisibilityPointList *pObjectX = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_VisibilityPointList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPointList *pObjectX = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_VisibilityPointList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPointList *pObjectX = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjXXXX;
					EarthView::World::Spatial3D::Analysis::VisibilityPoint& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_VisibilityPointList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPointList *pObjectX = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjXXXX;
					EarthView::World::Spatial3D::Analysis::VisibilityPoint& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_VisibilityPointList_insert_1ev_1uint32_1VisibilityPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					const EarthView::World::Spatial3D::Analysis::VisibilityPoint &t = *(EarthView::World::Spatial3D::Analysis::VisibilityPoint*) t_j;
					EarthView::World::Spatial3D::Analysis::VisibilityPointList *pObjectX = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_VisibilityPointList_insert_1ev_1uint32_1VisibilityPointList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong other_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					const EarthView::World::Spatial3D::Analysis::VisibilityPointList &other = *(EarthView::World::Spatial3D::Analysis::VisibilityPointList*) other_j;
					EarthView::World::Spatial3D::Analysis::VisibilityPointList *pObjectX = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjXXXX;
					pObjectX->insert(pos, other);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_VisibilityPointList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3D::Analysis::VisibilityPointList *pObjectX = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_VisibilityPointList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::VisibilityPointList *pObjectX = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_VisibilityPointList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPointList& pObjectX = *(EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Analysis::VisibilityPoint& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_VisibilityPointList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Analysis::VisibilityPointList *pObjectX = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjXXXX;
					EarthView::World::Spatial3D::Analysis::VisibilityPoint& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_analysis_VisibilityPointList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::VisibilityPointList *pObjectX = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_VisibilityPointList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::Analysis::VisibilityPointList *pObjectX = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_VisibilityPointList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3D::Analysis::VisibilityPointList *pObjectX = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_VisibilityPointList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPointList *pObjectX = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjXXXX;
					pObjectX->clear();
				}
				class JCMath3DVisibilityProxy : public EarthView::World::Spatial3D::Analysis::CMath3DVisibility
				{
				 private:
					EarthView::World::Core::ev_string m_getAltitude3DListener_void_callback;
					EarthView::World::Core::ev_string m_setAltitude3DListener_CAltitude3DListener_callback;
				public:
					JCMath3DVisibilityProxy(EarthView::World::Core::CNameValuePairList *pList) : CMath3DVisibility(pList)
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
							return this->CMath3DVisibility::getAltitude3DListener();
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
							return this->CMath3DVisibility::setAltitude3DListener(ref_pListener);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCMath3DVisibilityProxy);
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVisibility_getNeedStop_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::CMath3DVisibility *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DVisibility*) pObjXXXX;
					ev_bool __values1 = pObjectX->getNeedStop();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVisibility_setNeedStop_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					const ev_bool value = (const ev_bool) value_j;
					EarthView::World::Spatial3D::Analysis::CMath3DVisibility *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DVisibility*) pObjXXXX;
					pObjectX->setNeedStop(value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVisibility_calcuPointVisibility_1CVector3_1ev_1real64_1CVector3_1ev_1real64_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong view_j, jdouble viewH_j, jlong target_j, jdouble targetH_j, jint number_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &view = *(EarthView::World::Spatial::Math::CVector3*) view_j;
					const ev_real64 viewH = (const ev_real64) viewH_j;
					const EarthView::World::Spatial::Math::CVector3 &target = *(EarthView::World::Spatial::Math::CVector3*) target_j;
					const ev_real64 targetH = (const ev_real64) targetH_j;
					const ev_int32 number = (const ev_int32) number_j;
					EarthView::World::Spatial3D::Analysis::CMath3DVisibility *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DVisibility*) pObjXXXX;
					ev_bool __values1 = pObjectX->calcuPointVisibility(view, viewH, target, targetH, number);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVisibility_calcuLineVisibility_1CVector3_1ev_1real64_1CVector3_1ev_1int32_1ev_1bool_1VertexList_1VertexList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong center_j, jdouble centerH_j, jlong target_j, jint number_j, jboolean isViewShed_j, jlong visibilityline_j, jlong invisibilityline_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &center = *(EarthView::World::Spatial::Math::CVector3*) center_j;
					const ev_real64 centerH = (const ev_real64) centerH_j;
					const EarthView::World::Spatial::Math::CVector3 &target = *(EarthView::World::Spatial::Math::CVector3*) target_j;
					const ev_int32 number = (const ev_int32) number_j;
					const ev_bool isViewShed = (const ev_bool) isViewShed_j;
					EarthView::World::Spatial::Math::VertexList &visibilityline = *(EarthView::World::Spatial::Math::VertexList*) visibilityline_j;
					EarthView::World::Spatial::Math::VertexList &invisibilityline = *(EarthView::World::Spatial::Math::VertexList*) invisibilityline_j;
					EarthView::World::Spatial3D::Analysis::CMath3DVisibility *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DVisibility*) pObjXXXX;
					ev_real64 __values1 = pObjectX->calcuLineVisibility(center, centerH, target, number, isViewShed, visibilityline, invisibilityline);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVisibility_calcuLineVisibility_1CVector3_1ev_1real64_1CVector3_1ev_1int32_1ev_1bool_1VisibilityPointList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong center_j, jdouble centerH_j, jlong target_j, jint number_j, jboolean isViewShed_j, jlong outputPts_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &center = *(EarthView::World::Spatial::Math::CVector3*) center_j;
					const ev_real64 centerH = (const ev_real64) centerH_j;
					const EarthView::World::Spatial::Math::CVector3 &target = *(EarthView::World::Spatial::Math::CVector3*) target_j;
					const ev_int32 number = (const ev_int32) number_j;
					const ev_bool isViewShed = (const ev_bool) isViewShed_j;
					EarthView::World::Spatial3D::Analysis::VisibilityPointList &outputPts = *(EarthView::World::Spatial3D::Analysis::VisibilityPointList*) outputPts_j;
					EarthView::World::Spatial3D::Analysis::CMath3DVisibility *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DVisibility*) pObjXXXX;
					ev_real64 __values1 = pObjectX->calcuLineVisibility(center, centerH, target, number, isViewShed, outputPts);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVisibility_calculateOnServer_1CVector3_1ev_1real64_1CVector3_1ev_1int32_1ev_1bool_1VisibilityPointList_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong center_j, jdouble centerH_j, jlong target_j, jint number_j, jboolean isViewShed_j, jlong outputPts_j, jlong shadePercent_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &center = *(EarthView::World::Spatial::Math::CVector3*) center_j;
					const ev_real64 centerH = (const ev_real64) centerH_j;
					const EarthView::World::Spatial::Math::CVector3 &target = *(EarthView::World::Spatial::Math::CVector3*) target_j;
					const ev_int32 number = (const ev_int32) number_j;
					const ev_bool isViewShed = (const ev_bool) isViewShed_j;
					EarthView::World::Spatial3D::Analysis::VisibilityPointList &outputPts = *(EarthView::World::Spatial3D::Analysis::VisibilityPointList*) outputPts_j;
					ev_real64 &shadePercent = *(ev_real64*) shadePercent_j;
					EarthView::World::Spatial3D::Analysis::CMath3DVisibility *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DVisibility*) pObjXXXX;
					pObjectX->calculateOnServer(center, centerH, target, number, isViewShed, outputPts, shadePercent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVisibility_register_1getAltitude3DListener_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMath3DVisibilityProxy *pObjectX = (JCMath3DVisibilityProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DVisibility_register_1setAltitude3DListener_1CAltitude3DListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMath3DVisibilityProxy *pObjectX = (JCMath3DVisibilityProxy*) pObjXXXX;
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
