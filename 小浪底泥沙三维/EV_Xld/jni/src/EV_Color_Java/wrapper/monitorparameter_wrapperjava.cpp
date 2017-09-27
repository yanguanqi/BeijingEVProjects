/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "color/monitorparameter.h"
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
			namespace Display
			{
				class JCMonitorParameterProxy : public EarthView::World::Spatial::Display::CMonitorParameter
				{
				 private:
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
				public:
					JCMonitorParameterProxy(EarthView::World::Core::CNameValuePairList *pList) : CMonitorParameter(pList)
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
					virtual EarthView::World::Spatial::Display::CMonitorParameter* clone() const
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
							EarthView::World::Spatial::Display::CMonitorParameter *__values1 = (EarthView::World::Spatial::Display::CMonitorParameter*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CMonitorParameter::clone();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCMonitorParameterProxy);
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_MonitorParameter_isValid_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CMonitorParameter *pObjectX = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjXXXX;
					ev_bool __values1 = pObjectX->isValid();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_MonitorParameter_load_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filePath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* filePath_ch = (const ev_char*)__env->GetStringUTFChars(filePath_j,JNI_FALSE);
					EVString filePath = filePath_ch;
					__env->ReleaseStringUTFChars(filePath_j, (const char *)filePath_ch);
					#else
					const ev_wchar* filePath_ch = (const ev_wchar*)__env->GetStringChars(filePath_j,JNI_FALSE);
					EVString filePath = filePath_ch;
					__env->ReleaseStringChars(filePath_j, (const jchar *)filePath_ch);
					#endif
					EarthView::World::Spatial::Display::CMonitorParameter *pObjectX = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjXXXX;
					ev_bool __values1 = pObjectX->load(filePath);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_MonitorParameter_getGamma_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CMonitorParameter *pObjectX = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getGamma();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_MonitorParameter_getRedPointX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CMonitorParameter *pObjectX = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getRedPointX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_MonitorParameter_getRedPointY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CMonitorParameter *pObjectX = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getRedPointY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_MonitorParameter_getGreenPointX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CMonitorParameter *pObjectX = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getGreenPointX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_MonitorParameter_getGreenPointY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CMonitorParameter *pObjectX = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getGreenPointY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_MonitorParameter_getBluePointX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CMonitorParameter *pObjectX = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getBluePointX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_MonitorParameter_getBluePointY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CMonitorParameter *pObjectX = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getBluePointY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_MonitorParameter_getWhitePointX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CMonitorParameter *pObjectX = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getWhitePointX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_MonitorParameter_getWhitePointY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CMonitorParameter *pObjectX = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getWhitePointY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_MonitorParameter_setGamma_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CMonitorParameter *pObjectX = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjXXXX;
					pObjectX->setGamma(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_MonitorParameter_setRedPointX_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CMonitorParameter *pObjectX = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjXXXX;
					pObjectX->setRedPointX(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_MonitorParameter_setRedPointY_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CMonitorParameter *pObjectX = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjXXXX;
					pObjectX->setRedPointY(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_MonitorParameter_setGreenPointX_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CMonitorParameter *pObjectX = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjXXXX;
					pObjectX->setGreenPointX(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_MonitorParameter_setGreenPointY_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CMonitorParameter *pObjectX = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjXXXX;
					pObjectX->setGreenPointY(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_MonitorParameter_setBluePointX_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CMonitorParameter *pObjectX = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjXXXX;
					pObjectX->setBluePointX(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_MonitorParameter_setBluePointY_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CMonitorParameter *pObjectX = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjXXXX;
					pObjectX->setBluePointY(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_MonitorParameter_setWhitePointX_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CMonitorParameter *pObjectX = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjXXXX;
					pObjectX->setWhitePointX(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_MonitorParameter_setWhitePointY_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CMonitorParameter *pObjectX = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjXXXX;
					pObjectX->setWhitePointY(value);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_MonitorParameter_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CMonitorParameter *pObjectX = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMonitorParameterProxy))
					{
						EarthView::World::Spatial::Display::CMonitorParameter* __values1 = pObjectX->EarthView::World::Spatial::Display::CMonitorParameter::clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::CMonitorParameter* __values1 = pObjectX->clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_MonitorParameter_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMonitorParameterProxy *pObjectX = (JCMonitorParameterProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_MonitorParameter_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CMonitorParameter *pObjectX = (EarthView::World::Spatial::Display::CMonitorParameter*) pObjXXXX;
					EarthView::World::Spatial::Display::CMonitorParameter* __values1 = pObjectX->EarthView::World::Spatial::Display::CMonitorParameter::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
