/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/shadowcamerasetuplispsm.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class JCLiSPSMShadowCameraSetupProxy : public EarthView::World::Graphic::CLiSPSMShadowCameraSetup
			{
			 private:
				EarthView::World::Core::ev_string m_setOptimalAdjustFactor_Real_callback;
				EarthView::World::Core::ev_string m_getOptimalAdjustFactor_void_callback;
				EarthView::World::Core::ev_string m_setUseSimpleOptimalAdjust_ev_bool_callback;
				EarthView::World::Core::ev_string m_getUseSimpleOptimalAdjust_void_callback;
				EarthView::World::Core::ev_string m_setCameraLightDirectionThreshold_CDegree_callback;
				EarthView::World::Core::ev_string m_getCameraLightDirectionThreshold_void_callback;
				EarthView::World::Core::ev_string m_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_callback;
			public:
				JCLiSPSMShadowCameraSetupProxy(EarthView::World::Core::CNameValuePairList *pList) : CLiSPSMShadowCameraSetup(pList)
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
				void register_setOptimalAdjustFactor_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setOptimalAdjustFactor_Real_callback = __method;
				}
				void register_getOptimalAdjustFactor_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getOptimalAdjustFactor_void_callback = __method;
				}
				void register_setUseSimpleOptimalAdjust_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setUseSimpleOptimalAdjust_ev_bool_callback = __method;
				}
				void register_getUseSimpleOptimalAdjust_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getUseSimpleOptimalAdjust_void_callback = __method;
				}
				void register_setCameraLightDirectionThreshold_CDegree_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setCameraLightDirectionThreshold_CDegree_callback = __method;
				}
				void register_getCameraLightDirectionThreshold_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCameraLightDirectionThreshold_void_callback = __method;
				}
				void register_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_callback = __method;
				}
				virtual void getShadowCamera(const EarthView::World::Graphic::CSceneManager* sm, const EarthView::World::Graphic::CCamera* cam, const EarthView::World::Graphic::CViewport* vp, const EarthView::World::Graphic::CLight* light, EarthView::World::Graphic::CCamera* texCam, ev_size_t iteration) const
				{
					if (this->_gRef != NULL && this->m_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong sm_j = (jlong) sm;
						jlong cam_j = (jlong) cam;
						jlong vp_j = (jlong) vp;
						jlong light_j = (jlong) light;
						jlong texCam_j = (jlong) texCam;
						jlong iteration_j = (jlong) iteration;
						jmethodID __method = __gr->getMethod("getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , sm_j, cam_j, vp_j, light_j, texCam_j, iteration_j);
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
						return this->CLiSPSMShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
					}
				}
				virtual void setOptimalAdjustFactor(Real n)
				{
					if (this->_gRef != NULL && this->m_setOptimalAdjustFactor_Real_callback != "" && this->isCustomExtend())
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
						jdouble n_j = (jdouble) n;
						jmethodID __method = __gr->getMethod("setOptimalAdjustFactor_Real_callback");
						__env->CallVoidMethod(__obj, __method , n_j);
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
						return this->CLiSPSMShadowCameraSetup::setOptimalAdjustFactor(n);
					}
				}
				virtual Real getOptimalAdjustFactor() const
				{
					if (this->_gRef != NULL && this->m_getOptimalAdjustFactor_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getOptimalAdjustFactor_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CLiSPSMShadowCameraSetup::getOptimalAdjustFactor();
					}
				}
				virtual void setUseSimpleOptimalAdjust(ev_bool s)
				{
					if (this->_gRef != NULL && this->m_setUseSimpleOptimalAdjust_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean s_j = (jboolean) s;
						jmethodID __method = __gr->getMethod("setUseSimpleOptimalAdjust_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , s_j);
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
						return this->CLiSPSMShadowCameraSetup::setUseSimpleOptimalAdjust(s);
					}
				}
				virtual ev_bool getUseSimpleOptimalAdjust() const
				{
					if (this->_gRef != NULL && this->m_getUseSimpleOptimalAdjust_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getUseSimpleOptimalAdjust_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CLiSPSMShadowCameraSetup::getUseSimpleOptimalAdjust();
					}
				}
				virtual void setCameraLightDirectionThreshold(EarthView::World::Spatial::Math::CDegree angle)
				{
					if (this->_gRef != NULL && this->m_setCameraLightDirectionThreshold_CDegree_callback != "" && this->isCustomExtend())
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
						jlong angle_j = (jlong) &angle;
						jmethodID __method = __gr->getMethod("setCameraLightDirectionThreshold_CDegree_callback");
						__env->CallVoidMethod(__obj, __method , angle_j);
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
						return this->CLiSPSMShadowCameraSetup::setCameraLightDirectionThreshold(angle);
					}
				}
				virtual EarthView::World::Spatial::Math::CDegree getCameraLightDirectionThreshold() const
				{
					if (this->_gRef != NULL && this->m_getCameraLightDirectionThreshold_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCameraLightDirectionThreshold_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CDegree __values1 = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CLiSPSMShadowCameraSetup::getCameraLightDirectionThreshold();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCLiSPSMShadowCameraSetupProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LiSPSMShadowCameraSetup_getShadowCamera_1CSceneManager_1CCamera_1CViewport_1CLight_1CCamera_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong cam_j, jlong vp_j, jlong light_j, jlong texCam_j, jlong iteration_j)
			{
				const EarthView::World::Graphic::CSceneManager *sm = (const EarthView::World::Graphic::CSceneManager*) sm_j;
				const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
				const EarthView::World::Graphic::CViewport *vp = (const EarthView::World::Graphic::CViewport*) vp_j;
				const EarthView::World::Graphic::CLight *light = (const EarthView::World::Graphic::CLight*) light_j;
				EarthView::World::Graphic::CCamera *texCam = (EarthView::World::Graphic::CCamera*) texCam_j;
				ev_size_t iteration = (ev_size_t) iteration_j;
				const 				EarthView::World::Graphic::CLiSPSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLiSPSMShadowCameraSetupProxy))
				{
					pObjectX->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
				}
				else
				{
					pObjectX->getShadowCamera(sm, cam, vp, light, texCam, iteration);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LiSPSMShadowCameraSetup_register_1getShadowCamera_1CSceneManager_1CCamera_1CViewport_1CLight_1CCamera_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLiSPSMShadowCameraSetupProxy *pObjectX = (JCLiSPSMShadowCameraSetupProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_callback", "(JJJJJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LiSPSMShadowCameraSetup_getShadowCamera_1CSceneManager_1CCamera_1CViewport_1CLight_1CCamera_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong cam_j, jlong vp_j, jlong light_j, jlong texCam_j, jlong iteration_j)
			{
				const EarthView::World::Graphic::CSceneManager *sm = (const EarthView::World::Graphic::CSceneManager*) sm_j;
				const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
				const EarthView::World::Graphic::CViewport *vp = (const EarthView::World::Graphic::CViewport*) vp_j;
				const EarthView::World::Graphic::CLight *light = (const EarthView::World::Graphic::CLight*) light_j;
				EarthView::World::Graphic::CCamera *texCam = (EarthView::World::Graphic::CCamera*) texCam_j;
				ev_size_t iteration = (ev_size_t) iteration_j;
				const 				EarthView::World::Graphic::CLiSPSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LiSPSMShadowCameraSetup_setOptimalAdjustFactor_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble n_j)
			{
				Real n = (Real) n_j;
				EarthView::World::Graphic::CLiSPSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLiSPSMShadowCameraSetupProxy))
				{
					pObjectX->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::setOptimalAdjustFactor(n);
				}
				else
				{
					pObjectX->setOptimalAdjustFactor(n);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LiSPSMShadowCameraSetup_register_1setOptimalAdjustFactor_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLiSPSMShadowCameraSetupProxy *pObjectX = (JCLiSPSMShadowCameraSetupProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setOptimalAdjustFactor_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setOptimalAdjustFactor_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LiSPSMShadowCameraSetup_setOptimalAdjustFactor_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble n_j)
			{
				Real n = (Real) n_j;
				EarthView::World::Graphic::CLiSPSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::setOptimalAdjustFactor(n);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_LiSPSMShadowCameraSetup_getOptimalAdjustFactor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CLiSPSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLiSPSMShadowCameraSetupProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::getOptimalAdjustFactor();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getOptimalAdjustFactor();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LiSPSMShadowCameraSetup_register_1getOptimalAdjustFactor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLiSPSMShadowCameraSetupProxy *pObjectX = (JCLiSPSMShadowCameraSetupProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getOptimalAdjustFactor_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getOptimalAdjustFactor_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_LiSPSMShadowCameraSetup_getOptimalAdjustFactor_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CLiSPSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::getOptimalAdjustFactor();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean s_j)
			{
				ev_bool s = (ev_bool) s_j;
				EarthView::World::Graphic::CLiSPSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLiSPSMShadowCameraSetupProxy))
				{
					pObjectX->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::setUseSimpleOptimalAdjust(s);
				}
				else
				{
					pObjectX->setUseSimpleOptimalAdjust(s);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LiSPSMShadowCameraSetup_register_1setUseSimpleOptimalAdjust_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLiSPSMShadowCameraSetupProxy *pObjectX = (JCLiSPSMShadowCameraSetupProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setUseSimpleOptimalAdjust_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setUseSimpleOptimalAdjust_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean s_j)
			{
				ev_bool s = (ev_bool) s_j;
				EarthView::World::Graphic::CLiSPSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::setUseSimpleOptimalAdjust(s);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CLiSPSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLiSPSMShadowCameraSetupProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::getUseSimpleOptimalAdjust();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getUseSimpleOptimalAdjust();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LiSPSMShadowCameraSetup_register_1getUseSimpleOptimalAdjust_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLiSPSMShadowCameraSetupProxy *pObjectX = (JCLiSPSMShadowCameraSetupProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getUseSimpleOptimalAdjust_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getUseSimpleOptimalAdjust_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CLiSPSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::getUseSimpleOptimalAdjust();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j)
			{
				EarthView::World::Spatial::Math::CDegree angle = *(EarthView::World::Spatial::Math::CDegree*) angle_j;
				EarthView::World::Graphic::CLiSPSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLiSPSMShadowCameraSetupProxy))
				{
					pObjectX->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::setCameraLightDirectionThreshold(angle);
				}
				else
				{
					pObjectX->setCameraLightDirectionThreshold(angle);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LiSPSMShadowCameraSetup_register_1setCameraLightDirectionThreshold_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLiSPSMShadowCameraSetupProxy *pObjectX = (JCLiSPSMShadowCameraSetupProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setCameraLightDirectionThreshold_CDegree_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setCameraLightDirectionThreshold_CDegree_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_1CDegree_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j)
			{
				EarthView::World::Spatial::Math::CDegree angle = *(EarthView::World::Spatial::Math::CDegree*) angle_j;
				EarthView::World::Graphic::CLiSPSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::setCameraLightDirectionThreshold(angle);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CLiSPSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLiSPSMShadowCameraSetupProxy))
				{
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::getCameraLightDirectionThreshold();
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX->getCameraLightDirectionThreshold();
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LiSPSMShadowCameraSetup_register_1getCameraLightDirectionThreshold_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLiSPSMShadowCameraSetupProxy *pObjectX = (JCLiSPSMShadowCameraSetupProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCameraLightDirectionThreshold_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCameraLightDirectionThreshold_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CLiSPSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CLiSPSMShadowCameraSetup*) pObjXXXX;
				EarthView::World::Spatial::Math::CDegree __values1 = pObjectX->EarthView::World::Graphic::CLiSPSMShadowCameraSetup::getCameraLightDirectionThreshold();
				EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
		}
	}
}
