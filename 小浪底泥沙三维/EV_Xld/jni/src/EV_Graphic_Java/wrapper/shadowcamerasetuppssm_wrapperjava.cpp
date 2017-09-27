/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/shadowcamerasetuppssm.h"
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
			class JCPSSMShadowCameraSetupProxy : public EarthView::World::Graphic::CPSSMShadowCameraSetup
			{
			 private:
				EarthView::World::Core::ev_string m_setOptimalAdjustFactor_ev_size_t_Real_callback;
				EarthView::World::Core::ev_string m_setOptimalAdjustFactor_Real_callback;
				EarthView::World::Core::ev_string m_getOptimalAdjustFactor_void_callback;
				EarthView::World::Core::ev_string m_setUseSimpleOptimalAdjust_ev_bool_callback;
				EarthView::World::Core::ev_string m_getUseSimpleOptimalAdjust_void_callback;
				EarthView::World::Core::ev_string m_setCameraLightDirectionThreshold_CDegree_callback;
				EarthView::World::Core::ev_string m_getCameraLightDirectionThreshold_void_callback;
				EarthView::World::Core::ev_string m_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_callback;
			public:
				JCPSSMShadowCameraSetupProxy(EarthView::World::Core::CNameValuePairList *pList) : CPSSMShadowCameraSetup(pList)
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
				void register_setOptimalAdjustFactor_ev_size_t_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setOptimalAdjustFactor_ev_size_t_Real_callback = __method;
				}
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
				virtual void setOptimalAdjustFactor(ev_size_t splitIndex, Real factor)
				{
					if (this->_gRef != NULL && this->m_setOptimalAdjustFactor_ev_size_t_Real_callback != "" && this->isCustomExtend())
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
						jlong splitIndex_j = (jlong) splitIndex;
						jdouble factor_j = (jdouble) factor;
						jmethodID __method = __gr->getMethod("setOptimalAdjustFactor_ev_size_t_Real_callback");
						__env->CallVoidMethod(__obj, __method , splitIndex_j, factor_j);
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
						return this->CPSSMShadowCameraSetup::setOptimalAdjustFactor(splitIndex, factor);
					}
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
						return this->CPSSMShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
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
						return this->CPSSMShadowCameraSetup::getOptimalAdjustFactor();
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
						return this->CPSSMShadowCameraSetup::setUseSimpleOptimalAdjust(s);
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
						return this->CPSSMShadowCameraSetup::getUseSimpleOptimalAdjust();
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
						return this->CPSSMShadowCameraSetup::setCameraLightDirectionThreshold(angle);
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
						return this->CPSSMShadowCameraSetup::getCameraLightDirectionThreshold();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCPSSMShadowCameraSetupProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024Pssmshadowcamerasetupsplitpointlist_push_1back_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble t_j)
			{
				Real t = (Real) t_j;
				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024Pssmshadowcamerasetupsplitpointlist_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024Pssmshadowcamerasetupsplitpointlist_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjXXXX;
				Real& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024Pssmshadowcamerasetupsplitpointlist_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjXXXX;
				Real& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024Pssmshadowcamerasetupsplitpointlist_insert_1ev_1uint32_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jdouble t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				Real t = (Real) t_j;
				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024Pssmshadowcamerasetupsplitpointlist_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024Pssmshadowcamerasetupsplitpointlist_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024Pssmshadowcamerasetupsplitpointlist_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList& pObjectX = *(EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				Real& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024Pssmshadowcamerasetupsplitpointlist_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjXXXX;
				Real& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024Pssmshadowcamerasetupsplitpointlist_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024Pssmshadowcamerasetupsplitpointlist_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024Pssmshadowcamerasetupsplitpointlist_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024Pssmshadowcamerasetupsplitpointlist_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024OptimalAdjustFactorList_push_1back_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble t_j)
			{
				Real t = (Real) t_j;
				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024OptimalAdjustFactorList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024OptimalAdjustFactorList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjXXXX;
				Real& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024OptimalAdjustFactorList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjXXXX;
				Real& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024OptimalAdjustFactorList_insert_1ev_1uint32_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jdouble t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				Real t = (Real) t_j;
				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024OptimalAdjustFactorList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024OptimalAdjustFactorList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024OptimalAdjustFactorList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList& pObjectX = *(EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				Real& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024OptimalAdjustFactorList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjXXXX;
				Real& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024OptimalAdjustFactorList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024OptimalAdjustFactorList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024OptimalAdjustFactorList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_00024OptimalAdjustFactorList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_calculateSplitPoints_1ev_1size_1t_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong splitCount_j, jdouble nearDist_j, jdouble farDist_j, jdouble lambda_j)
			{
				ev_size_t splitCount = (ev_size_t) splitCount_j;
				Real nearDist = (Real) nearDist_j;
				Real farDist = (Real) farDist_j;
				Real lambda = (Real) lambda_j;
				EarthView::World::Graphic::CPSSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjXXXX;
				pObjectX->calculateSplitPoints(splitCount, nearDist, farDist, lambda);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_calculateSplitPoints_1ev_1size_1t_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong splitCount_j, jdouble nearDist_j, jdouble farDist_j)
			{
				ev_size_t splitCount = (ev_size_t) splitCount_j;
				Real nearDist = (Real) nearDist_j;
				Real farDist = (Real) farDist_j;
				EarthView::World::Graphic::CPSSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjXXXX;
				pObjectX->calculateSplitPoints(splitCount, nearDist, farDist);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_setSplitPoints_1CPSSMShadowCameraSetupSplitPointList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSplitPoints_j)
			{
				const EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList &newSplitPoints = *(EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) newSplitPoints_j;
				EarthView::World::Graphic::CPSSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjXXXX;
				pObjectX->setSplitPoints(newSplitPoints);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_setOptimalAdjustFactor_1ev_1size_1t_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong splitIndex_j, jdouble factor_j)
			{
				ev_size_t splitIndex = (ev_size_t) splitIndex_j;
				Real factor = (Real) factor_j;
				EarthView::World::Graphic::CPSSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPSSMShadowCameraSetupProxy))
				{
					pObjectX->EarthView::World::Graphic::CPSSMShadowCameraSetup::setOptimalAdjustFactor(splitIndex, factor);
				}
				else
				{
					pObjectX->setOptimalAdjustFactor(splitIndex, factor);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_register_1setOptimalAdjustFactor_1ev_1size_1t_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPSSMShadowCameraSetupProxy *pObjectX = (JCPSSMShadowCameraSetupProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setOptimalAdjustFactor_ev_size_t_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setOptimalAdjustFactor_ev_size_t_Real_callback", "(JD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_setOptimalAdjustFactor_1ev_1size_1t_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong splitIndex_j, jdouble factor_j)
			{
				ev_size_t splitIndex = (ev_size_t) splitIndex_j;
				Real factor = (Real) factor_j;
				EarthView::World::Graphic::CPSSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CPSSMShadowCameraSetup::setOptimalAdjustFactor(splitIndex, factor);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_setSplitPadding_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble pad_j)
			{
				Real pad = (Real) pad_j;
				EarthView::World::Graphic::CPSSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjXXXX;
				pObjectX->setSplitPadding(pad);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_getSplitPadding_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPSSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjXXXX;
				Real __values1 = pObjectX->getSplitPadding();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_getSplitCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPSSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getSplitCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_getShadowCamera_1CSceneManager_1CCamera_1CViewport_1CLight_1CCamera_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong cam_j, jlong vp_j, jlong light_j, jlong texCam_j, jlong iteration_j)
			{
				const EarthView::World::Graphic::CSceneManager *sm = (const EarthView::World::Graphic::CSceneManager*) sm_j;
				const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
				const EarthView::World::Graphic::CViewport *vp = (const EarthView::World::Graphic::CViewport*) vp_j;
				const EarthView::World::Graphic::CLight *light = (const EarthView::World::Graphic::CLight*) light_j;
				EarthView::World::Graphic::CCamera *texCam = (EarthView::World::Graphic::CCamera*) texCam_j;
				ev_size_t iteration = (ev_size_t) iteration_j;
				const 				EarthView::World::Graphic::CPSSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPSSMShadowCameraSetupProxy))
				{
					pObjectX->EarthView::World::Graphic::CPSSMShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
				}
				else
				{
					pObjectX->getShadowCamera(sm, cam, vp, light, texCam, iteration);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_register_1getShadowCamera_1CSceneManager_1CCamera_1CViewport_1CLight_1CCamera_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPSSMShadowCameraSetupProxy *pObjectX = (JCPSSMShadowCameraSetupProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_getShadowCamera_1CSceneManager_1CCamera_1CViewport_1CLight_1CCamera_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong cam_j, jlong vp_j, jlong light_j, jlong texCam_j, jlong iteration_j)
			{
				const EarthView::World::Graphic::CSceneManager *sm = (const EarthView::World::Graphic::CSceneManager*) sm_j;
				const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
				const EarthView::World::Graphic::CViewport *vp = (const EarthView::World::Graphic::CViewport*) vp_j;
				const EarthView::World::Graphic::CLight *light = (const EarthView::World::Graphic::CLight*) light_j;
				EarthView::World::Graphic::CCamera *texCam = (EarthView::World::Graphic::CCamera*) texCam_j;
				ev_size_t iteration = (ev_size_t) iteration_j;
				const 				EarthView::World::Graphic::CPSSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CPSSMShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_getSplitPoints_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPSSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjXXXX;
				const EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList& __values1 = pObjectX->getSplitPoints();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_getOptimalAdjustFactor_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong splitIndex_j)
			{
				ev_size_t splitIndex = (ev_size_t) splitIndex_j;
				const 				EarthView::World::Graphic::CPSSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjXXXX;
				Real __values1 = pObjectX->getOptimalAdjustFactor(splitIndex);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_getOptimalAdjustFactor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPSSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPSSMShadowCameraSetupProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CPSSMShadowCameraSetup::getOptimalAdjustFactor();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_register_1getOptimalAdjustFactor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPSSMShadowCameraSetupProxy *pObjectX = (JCPSSMShadowCameraSetupProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_getOptimalAdjustFactor_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPSSMShadowCameraSetup *pObjectX = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CPSSMShadowCameraSetup::getOptimalAdjustFactor();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_register_1setOptimalAdjustFactor_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPSSMShadowCameraSetupProxy *pObjectX = (JCPSSMShadowCameraSetupProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_register_1setUseSimpleOptimalAdjust_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPSSMShadowCameraSetupProxy *pObjectX = (JCPSSMShadowCameraSetupProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_register_1getUseSimpleOptimalAdjust_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPSSMShadowCameraSetupProxy *pObjectX = (JCPSSMShadowCameraSetupProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_register_1setCameraLightDirectionThreshold_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPSSMShadowCameraSetupProxy *pObjectX = (JCPSSMShadowCameraSetupProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pssmshadowcamerasetup_register_1getCameraLightDirectionThreshold_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPSSMShadowCameraSetupProxy *pObjectX = (JCPSSMShadowCameraSetupProxy*) pObjXXXX;
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
		}
	}
}
