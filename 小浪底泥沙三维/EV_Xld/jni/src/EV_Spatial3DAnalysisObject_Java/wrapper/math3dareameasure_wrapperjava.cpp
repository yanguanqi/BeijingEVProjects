/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysisobject/math3dareameasure.h"
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
				class JCMath3DMeasureAreaProxy : public EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea
				{
				 private:
					EarthView::World::Core::ev_string m_getAltitude3DListener_void_callback;
					EarthView::World::Core::ev_string m_setAltitude3DListener_CAltitude3DListener_callback;
				public:
					JCMath3DMeasureAreaProxy(EarthView::World::Core::CNameValuePairList *pList) : CMath3DMeasureArea(pList)
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
							return this->CMath3DMeasureArea::getAltitude3DListener();
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
							return this->CMath3DMeasureArea::setAltitude3DListener(ref_pListener);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCMath3DMeasureAreaProxy);
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DMeasureArea_getInterval_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getInterval();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DMeasureArea_setInterval_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					const ev_real64 value = (const ev_real64) value_j;
					EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea*) pObjXXXX;
					pObjectX->setInterval(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DMeasureArea_calcuPolygonArea_1VertexList_1ev_1bool_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong inpoints_j, jboolean calcuClampedArea_j, jlong clampedArea_j)
				{
					EarthView::World::Spatial::Math::VertexList &inpoints = *(EarthView::World::Spatial::Math::VertexList*) inpoints_j;
					ev_bool calcuClampedArea = (ev_bool) calcuClampedArea_j;
					ev_real64 &clampedArea = *(ev_real64*) clampedArea_j;
					EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea*) pObjXXXX;
					ev_real64 __values1 = pObjectX->calcuPolygonArea(inpoints, calcuClampedArea, clampedArea);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DMeasureArea_calcuClampedArea_1VertexList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong inpoints_j)
				{
					EarthView::World::Spatial::Math::VertexList &inpoints = *(EarthView::World::Spatial::Math::VertexList*) inpoints_j;
					EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea*) pObjXXXX;
					ev_real64 __values1 = pObjectX->calcuClampedArea(inpoints);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DMeasureArea_calcuProjectArea_1VertexList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong inpoints_j)
				{
					EarthView::World::Spatial::Math::VertexList &inpoints = *(EarthView::World::Spatial::Math::VertexList*) inpoints_j;
					EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea*) pObjXXXX;
					ev_real64 __values1 = pObjectX->calcuProjectArea(inpoints);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DMeasureArea_calculateOnServer_1VertexList_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong inpoints_j, jlong clampArea_j, jlong projArea_j)
				{
					EarthView::World::Spatial::Math::VertexList &inpoints = *(EarthView::World::Spatial::Math::VertexList*) inpoints_j;
					ev_real64 &clampArea = *(ev_real64*) clampArea_j;
					ev_real64 &projArea = *(ev_real64*) projArea_j;
					EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea *pObjectX = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea*) pObjXXXX;
					pObjectX->calculateOnServer(inpoints, clampArea, projArea);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DMeasureArea_register_1getAltitude3DListener_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMath3DMeasureAreaProxy *pObjectX = (JCMath3DMeasureAreaProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_analysis_Math3DMeasureArea_register_1setAltitude3DListener_1CAltitude3DListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMath3DMeasureAreaProxy *pObjectX = (JCMath3DMeasureAreaProxy*) pObjXXXX;
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
