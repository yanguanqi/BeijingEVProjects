/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/dynamicmodellibrary/dynamicglobenodetrackanimation.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
		}
	}
}
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			class JCDynamicGlobeNodeTrackAnimationProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation
			{
			 private:
				EarthView::World::Core::ev_string m_createAnimation_void_callback;
				EarthView::World::Core::ev_string m_refreshAnimation_CGlobeControlPointMap_callback;
				EarthView::World::Core::ev_string m_setCurrentFrameTime_ev_real64_callback;
				EarthView::World::Core::ev_string m_getCurrentFrameTime_void_callback;
				EarthView::World::Core::ev_string m_getCurrentFrameControlPoint_void_callback;
				EarthView::World::Core::ev_string m_getKeyFrameControlPoint_ev_real64_callback;
				EarthView::World::Core::ev_string m_getAnimationIsLooping_void_callback;
				EarthView::World::Core::ev_string m_setAltitudeMode_AltitudeMode_callback;
				EarthView::World::Core::ev_string m_getAltitudeMode_void_callback;
				EarthView::World::Core::ev_string m_setGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_callback;
				EarthView::World::Core::ev_string m_getGlobeNodeTrackAnimationListener_void_callback;
				EarthView::World::Core::ev_string m_clearAllGlobeNodeTrackPoints_void_callback;
				EarthView::World::Core::ev_string m_canStart_void_callback;
				EarthView::World::Core::ev_string m_hasRequestCreateAnimation_void_callback;
				EarthView::World::Core::ev_string m_hasCreatedAnimation_void_callback;
				EarthView::World::Core::ev_string m_setOnLineModeEnabled_ev_bool_callback;
				EarthView::World::Core::ev_string m_getOnLineModeEnabled_void_callback;
				EarthView::World::Core::ev_string m_setAnimationsetEnabled_ev_bool_callback;
				EarthView::World::Core::ev_string m_getAnimationsetEnabled_void_callback;
				EarthView::World::Core::ev_string m_setArouseFrequency_ev_real64_callback;
				EarthView::World::Core::ev_string m_getArouseFrequency_void_callback;
				EarthView::World::Core::ev_string m_forceArouseAnimation_void_callback;
				EarthView::World::Core::ev_string m_createAnimation_CSceneNode_callback;
				EarthView::World::Core::ev_string m_destoryAnimation_void_callback;
				EarthView::World::Core::ev_string m_frameStarted_FrameEvent_callback;
				EarthView::World::Core::ev_string m_frameRenderingQueued_FrameEvent_callback;
				EarthView::World::Core::ev_string m_frameEnded_FrameEvent_callback;
			public:
				JCDynamicGlobeNodeTrackAnimationProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicGlobeNodeTrackAnimation(pList)
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
				void register_createAnimation_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createAnimation_void_callback = __method;
				}
				void register_refreshAnimation_CGlobeControlPointMap_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_refreshAnimation_CGlobeControlPointMap_callback = __method;
				}
				void register_setCurrentFrameTime_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setCurrentFrameTime_ev_real64_callback = __method;
				}
				void register_getCurrentFrameTime_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCurrentFrameTime_void_callback = __method;
				}
				void register_getCurrentFrameControlPoint_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCurrentFrameControlPoint_void_callback = __method;
				}
				void register_getKeyFrameControlPoint_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getKeyFrameControlPoint_ev_real64_callback = __method;
				}
				void register_getAnimationIsLooping_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAnimationIsLooping_void_callback = __method;
				}
				void register_setAltitudeMode_AltitudeMode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAltitudeMode_AltitudeMode_callback = __method;
				}
				void register_getAltitudeMode_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAltitudeMode_void_callback = __method;
				}
				void register_setGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_callback = __method;
				}
				void register_getGlobeNodeTrackAnimationListener_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getGlobeNodeTrackAnimationListener_void_callback = __method;
				}
				void register_clearAllGlobeNodeTrackPoints_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_clearAllGlobeNodeTrackPoints_void_callback = __method;
				}
				void register_canStart_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_canStart_void_callback = __method;
				}
				void register_hasRequestCreateAnimation_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasRequestCreateAnimation_void_callback = __method;
				}
				void register_hasCreatedAnimation_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasCreatedAnimation_void_callback = __method;
				}
				void register_setOnLineModeEnabled_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setOnLineModeEnabled_ev_bool_callback = __method;
				}
				void register_getOnLineModeEnabled_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getOnLineModeEnabled_void_callback = __method;
				}
				void register_setAnimationsetEnabled_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAnimationsetEnabled_ev_bool_callback = __method;
				}
				void register_getAnimationsetEnabled_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAnimationsetEnabled_void_callback = __method;
				}
				void register_setArouseFrequency_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setArouseFrequency_ev_real64_callback = __method;
				}
				void register_getArouseFrequency_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getArouseFrequency_void_callback = __method;
				}
				void register_forceArouseAnimation_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_forceArouseAnimation_void_callback = __method;
				}
				void register_createAnimation_CSceneNode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createAnimation_CSceneNode_callback = __method;
				}
				void register_destoryAnimation_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destoryAnimation_void_callback = __method;
				}
				void register_frameStarted_FrameEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_frameStarted_FrameEvent_callback = __method;
				}
				void register_frameRenderingQueued_FrameEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_frameRenderingQueued_FrameEvent_callback = __method;
				}
				void register_frameEnded_FrameEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_frameEnded_FrameEvent_callback = __method;
				}
				virtual void createAnimation()
				{
					if (this->_gRef != NULL && this->m_createAnimation_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("createAnimation_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CDynamicGlobeNodeTrackAnimation::createAnimation();
					}
				}
				virtual void refreshAnimation(const EarthView::World::Spatial3D::CGlobeControlPointMap& refreshPoints)
				{
					if (this->_gRef != NULL && this->m_refreshAnimation_CGlobeControlPointMap_callback != "" && this->isCustomExtend())
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
						jlong refreshPoints_j = (jlong) &refreshPoints;
						jmethodID __method = __gr->getMethod("refreshAnimation_CGlobeControlPointMap_callback");
						__env->CallVoidMethod(__obj, __method , refreshPoints_j);
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
						return this->CDynamicGlobeNodeTrackAnimation::refreshAnimation(refreshPoints);
					}
				}
				virtual void setCurrentFrameTime(const ev_real64& time)
				{
					if (this->_gRef != NULL && this->m_setCurrentFrameTime_ev_real64_callback != "" && this->isCustomExtend())
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
						jdouble time_j = (jdouble) time;
						jmethodID __method = __gr->getMethod("setCurrentFrameTime_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , time_j);
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
						return this->CDynamicGlobeNodeTrackAnimation::setCurrentFrameTime(time);
					}
				}
				virtual ev_real64 getCurrentFrameTime() const
				{
					if (this->_gRef != NULL && this->m_getCurrentFrameTime_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCurrentFrameTime_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_real64 __values1 = (ev_real64) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDynamicGlobeNodeTrackAnimation::getCurrentFrameTime();
					}
				}
				virtual EarthView::World::Spatial3D::CGlobeControlPoint getCurrentFrameControlPoint() const
				{
					if (this->_gRef != NULL && this->m_getCurrentFrameControlPoint_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCurrentFrameControlPoint_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial3D::CGlobeControlPoint __values1 = *(EarthView::World::Spatial3D::CGlobeControlPoint*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDynamicGlobeNodeTrackAnimation::getCurrentFrameControlPoint();
					}
				}
				virtual EarthView::World::Spatial3D::CGlobeControlPoint getKeyFrameControlPoint(const ev_real64& time) const
				{
					if (this->_gRef != NULL && this->m_getKeyFrameControlPoint_ev_real64_callback != "" && this->isCustomExtend())
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
						jdouble time_j = (jdouble) time;
						jmethodID __method = __gr->getMethod("getKeyFrameControlPoint_ev_real64_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , time_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial3D::CGlobeControlPoint __values1 = *(EarthView::World::Spatial3D::CGlobeControlPoint*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDynamicGlobeNodeTrackAnimation::getKeyFrameControlPoint(time);
					}
				}
				virtual ev_bool getAnimationIsLooping()
				{
					if (this->_gRef != NULL && this->m_getAnimationIsLooping_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getAnimationIsLooping_void_callback");
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
						return this->CDynamicGlobeNodeTrackAnimation::getAnimationIsLooping();
					}
				}
				virtual void setAltitudeMode(EarthView::World::Spatial3D::CFLyParam::AltitudeMode altitudeMode)
				{
					if (this->_gRef != NULL && this->m_setAltitudeMode_AltitudeMode_callback != "" && this->isCustomExtend())
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
						jint altitudeMode_j = (jint) altitudeMode;
						jmethodID __method = __gr->getMethod("setAltitudeMode_AltitudeMode_callback");
						__env->CallVoidMethod(__obj, __method , altitudeMode_j);
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
						return this->CDynamicGlobeNodeTrackAnimation::setAltitudeMode(altitudeMode);
					}
				}
				virtual EarthView::World::Spatial3D::CFLyParam::AltitudeMode getAltitudeMode()
				{
					if (this->_gRef != NULL && this->m_getAltitudeMode_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getAltitudeMode_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial3D::CFLyParam::AltitudeMode __values1 = (EarthView::World::Spatial3D::CFLyParam::AltitudeMode) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDynamicGlobeNodeTrackAnimation::getAltitudeMode();
					}
				}
				virtual void setGlobeNodeTrackAnimationListener(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* ref_globeNodeTrackAnimationListener)
				{
					if (this->_gRef != NULL && this->m_setGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_callback != "" && this->isCustomExtend())
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
						jlong ref_globeNodeTrackAnimationListener_j = (jlong) ref_globeNodeTrackAnimationListener;
						jmethodID __method = __gr->getMethod("setGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_callback");
						__env->CallVoidMethod(__obj, __method , ref_globeNodeTrackAnimationListener_j);
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
						return this->CDynamicGlobeNodeTrackAnimation::setGlobeNodeTrackAnimationListener(ref_globeNodeTrackAnimationListener);
					}
				}
				virtual EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* getGlobeNodeTrackAnimationListener()
				{
					if (this->_gRef != NULL && this->m_getGlobeNodeTrackAnimationListener_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getGlobeNodeTrackAnimationListener_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener *__values1 = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDynamicGlobeNodeTrackAnimation::getGlobeNodeTrackAnimationListener();
					}
				}
				virtual ev_bool frameStarted(const EarthView::World::Graphic::FrameEvent& evt)
				{
					if (this->_gRef != NULL && this->m_frameStarted_FrameEvent_callback != "" && this->isCustomExtend())
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
						jlong evt_j = (jlong) &evt;
						jmethodID __method = __gr->getMethod("frameStarted_FrameEvent_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , evt_j);
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
						return this->CDynamicGlobeNodeTrackAnimation::frameStarted(evt);
					}
				}
				virtual ev_bool frameRenderingQueued(const EarthView::World::Graphic::FrameEvent& evt)
				{
					if (this->_gRef != NULL && this->m_frameRenderingQueued_FrameEvent_callback != "" && this->isCustomExtend())
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
						jlong evt_j = (jlong) &evt;
						jmethodID __method = __gr->getMethod("frameRenderingQueued_FrameEvent_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , evt_j);
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
						return this->CDynamicGlobeNodeTrackAnimation::frameRenderingQueued(evt);
					}
				}
				virtual ev_bool frameEnded(const EarthView::World::Graphic::FrameEvent& evt)
				{
					if (this->_gRef != NULL && this->m_frameEnded_FrameEvent_callback != "" && this->isCustomExtend())
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
						jlong evt_j = (jlong) &evt;
						jmethodID __method = __gr->getMethod("frameEnded_FrameEvent_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , evt_j);
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
						return this->CDynamicGlobeNodeTrackAnimation::frameEnded(evt);
					}
				}
				virtual void clearAllGlobeNodeTrackPoints()
				{
					if (this->_gRef != NULL && this->m_clearAllGlobeNodeTrackPoints_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("clearAllGlobeNodeTrackPoints_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CDynamicGlobeNodeTrackAnimation::clearAllGlobeNodeTrackPoints();
					}
				}
				virtual ev_bool canStart() const
				{
					if (this->_gRef != NULL && this->m_canStart_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("canStart_void_callback");
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
						return this->CDynamicGlobeNodeTrackAnimation::canStart();
					}
				}
				virtual ev_bool hasRequestCreateAnimation() const
				{
					if (this->_gRef != NULL && this->m_hasRequestCreateAnimation_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("hasRequestCreateAnimation_void_callback");
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
						return this->CDynamicGlobeNodeTrackAnimation::hasRequestCreateAnimation();
					}
				}
				virtual ev_bool hasCreatedAnimation() const
				{
					if (this->_gRef != NULL && this->m_hasCreatedAnimation_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("hasCreatedAnimation_void_callback");
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
						return this->CDynamicGlobeNodeTrackAnimation::hasCreatedAnimation();
					}
				}
				virtual void setOnLineModeEnabled(const ev_bool& enable)
				{
					if (this->_gRef != NULL && this->m_setOnLineModeEnabled_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean enable_j = (jboolean) enable;
						jmethodID __method = __gr->getMethod("setOnLineModeEnabled_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , enable_j);
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
						return this->CDynamicGlobeNodeTrackAnimation::setOnLineModeEnabled(enable);
					}
				}
				virtual ev_bool getOnLineModeEnabled() const
				{
					if (this->_gRef != NULL && this->m_getOnLineModeEnabled_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getOnLineModeEnabled_void_callback");
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
						return this->CDynamicGlobeNodeTrackAnimation::getOnLineModeEnabled();
					}
				}
				virtual void setAnimationsetEnabled(const ev_bool& enable)
				{
					if (this->_gRef != NULL && this->m_setAnimationsetEnabled_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean enable_j = (jboolean) enable;
						jmethodID __method = __gr->getMethod("setAnimationsetEnabled_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , enable_j);
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
						return this->CDynamicGlobeNodeTrackAnimation::setAnimationsetEnabled(enable);
					}
				}
				virtual ev_bool getAnimationsetEnabled() const
				{
					if (this->_gRef != NULL && this->m_getAnimationsetEnabled_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getAnimationsetEnabled_void_callback");
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
						return this->CDynamicGlobeNodeTrackAnimation::getAnimationsetEnabled();
					}
				}
				virtual void setArouseFrequency(const ev_real64& frequency)
				{
					if (this->_gRef != NULL && this->m_setArouseFrequency_ev_real64_callback != "" && this->isCustomExtend())
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
						jdouble frequency_j = (jdouble) frequency;
						jmethodID __method = __gr->getMethod("setArouseFrequency_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , frequency_j);
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
						return this->CDynamicGlobeNodeTrackAnimation::setArouseFrequency(frequency);
					}
				}
				virtual ev_real64 getArouseFrequency() const
				{
					if (this->_gRef != NULL && this->m_getArouseFrequency_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getArouseFrequency_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_real64 __values1 = (ev_real64) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDynamicGlobeNodeTrackAnimation::getArouseFrequency();
					}
				}
				virtual void forceArouseAnimation()
				{
					if (this->_gRef != NULL && this->m_forceArouseAnimation_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("forceArouseAnimation_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CDynamicGlobeNodeTrackAnimation::forceArouseAnimation();
					}
				}
				virtual void destoryAnimation()
				{
					if (this->_gRef != NULL && this->m_destoryAnimation_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("destoryAnimation_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CDynamicGlobeNodeTrackAnimation::destoryAnimation();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDynamicGlobeNodeTrackAnimationProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_createAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::createAnimation();
				}
				else
				{
					pObjectX->createAnimation();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1createAnimation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createAnimation_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createAnimation_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_createAnimation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::createAnimation();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_refreshAnimation_1CGlobeControlPointMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong refreshPoints_j)
			{
				const EarthView::World::Spatial3D::CGlobeControlPointMap &refreshPoints = *(EarthView::World::Spatial3D::CGlobeControlPointMap*) refreshPoints_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::refreshAnimation(refreshPoints);
				}
				else
				{
					pObjectX->refreshAnimation(refreshPoints);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1refreshAnimation_1CGlobeControlPointMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_refreshAnimation_CGlobeControlPointMap_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"refreshAnimation_CGlobeControlPointMap_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_refreshAnimation_1CGlobeControlPointMap_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong refreshPoints_j)
			{
				const EarthView::World::Spatial3D::CGlobeControlPointMap &refreshPoints = *(EarthView::World::Spatial3D::CGlobeControlPointMap*) refreshPoints_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::refreshAnimation(refreshPoints);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_setCurrentFrameTime_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
			{
				const ev_real64 time = (const ev_real64) time_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setCurrentFrameTime(time);
				}
				else
				{
					pObjectX->setCurrentFrameTime(time);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1setCurrentFrameTime_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setCurrentFrameTime_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setCurrentFrameTime_ev_real64_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_setCurrentFrameTime_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
			{
				const ev_real64 time = (const ev_real64) time_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setCurrentFrameTime(time);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_getCurrentFrameTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					ev_real64 __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getCurrentFrameTime();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					ev_real64 __values1 = pObjectX->getCurrentFrameTime();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1getCurrentFrameTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCurrentFrameTime_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCurrentFrameTime_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_getCurrentFrameTime_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				ev_real64 __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getCurrentFrameTime();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					EarthView::World::Spatial3D::CGlobeControlPoint __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getCurrentFrameControlPoint();
					EarthView::World::Spatial3D::CGlobeControlPoint *returnvalues = new EarthView::World::Spatial3D::CGlobeControlPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial3D::CGlobeControlPoint __values1 = pObjectX->getCurrentFrameControlPoint();
					EarthView::World::Spatial3D::CGlobeControlPoint *returnvalues = new EarthView::World::Spatial3D::CGlobeControlPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1getCurrentFrameControlPoint_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCurrentFrameControlPoint_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCurrentFrameControlPoint_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				EarthView::World::Spatial3D::CGlobeControlPoint __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getCurrentFrameControlPoint();
				EarthView::World::Spatial3D::CGlobeControlPoint *returnvalues = new EarthView::World::Spatial3D::CGlobeControlPoint(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
			{
				const ev_real64 time = (const ev_real64) time_j;
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					EarthView::World::Spatial3D::CGlobeControlPoint __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getKeyFrameControlPoint(time);
					EarthView::World::Spatial3D::CGlobeControlPoint *returnvalues = new EarthView::World::Spatial3D::CGlobeControlPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial3D::CGlobeControlPoint __values1 = pObjectX->getKeyFrameControlPoint(time);
					EarthView::World::Spatial3D::CGlobeControlPoint *returnvalues = new EarthView::World::Spatial3D::CGlobeControlPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1getKeyFrameControlPoint_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getKeyFrameControlPoint_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getKeyFrameControlPoint_ev_real64_callback", "(D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
			{
				const ev_real64 time = (const ev_real64) time_j;
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				EarthView::World::Spatial3D::CGlobeControlPoint __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getKeyFrameControlPoint(time);
				EarthView::World::Spatial3D::CGlobeControlPoint *returnvalues = new EarthView::World::Spatial3D::CGlobeControlPoint(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_getAnimationIsLooping_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getAnimationIsLooping();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getAnimationIsLooping();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1getAnimationIsLooping_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAnimationIsLooping_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAnimationIsLooping_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_getAnimationIsLooping_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getAnimationIsLooping();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_setAltitudeMode_1AltitudeMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint altitudeMode_j)
			{
				EarthView::World::Spatial3D::CFLyParam::AltitudeMode altitudeMode = (EarthView::World::Spatial3D::CFLyParam::AltitudeMode) altitudeMode_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setAltitudeMode(altitudeMode);
				}
				else
				{
					pObjectX->setAltitudeMode(altitudeMode);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1setAltitudeMode_1AltitudeMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAltitudeMode_AltitudeMode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAltitudeMode_AltitudeMode_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_setAltitudeMode_1AltitudeMode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint altitudeMode_j)
			{
				EarthView::World::Spatial3D::CFLyParam::AltitudeMode altitudeMode = (EarthView::World::Spatial3D::CFLyParam::AltitudeMode) altitudeMode_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setAltitudeMode(altitudeMode);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_getAltitudeMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					EarthView::World::Spatial3D::CFLyParam::AltitudeMode __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getAltitudeMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial3D::CFLyParam::AltitudeMode __values1 = pObjectX->getAltitudeMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1getAltitudeMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAltitudeMode_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAltitudeMode_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_getAltitudeMode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				EarthView::World::Spatial3D::CFLyParam::AltitudeMode __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getAltitudeMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_1CDynamicGlobeNodeTrackAnimationListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_globeNodeTrackAnimationListener_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener *ref_globeNodeTrackAnimationListener = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) ref_globeNodeTrackAnimationListener_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setGlobeNodeTrackAnimationListener(ref_globeNodeTrackAnimationListener);
				}
				else
				{
					pObjectX->setGlobeNodeTrackAnimationListener(ref_globeNodeTrackAnimationListener);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1setGlobeNodeTrackAnimationListener_1CDynamicGlobeNodeTrackAnimationListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_1CDynamicGlobeNodeTrackAnimationListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_globeNodeTrackAnimationListener_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener *ref_globeNodeTrackAnimationListener = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) ref_globeNodeTrackAnimationListener_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setGlobeNodeTrackAnimationListener(ref_globeNodeTrackAnimationListener);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getGlobeNodeTrackAnimationListener();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* __values1 = pObjectX->getGlobeNodeTrackAnimationListener();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1getGlobeNodeTrackAnimationListener_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getGlobeNodeTrackAnimationListener_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getGlobeNodeTrackAnimationListener_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getGlobeNodeTrackAnimationListener();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_frameStarted_1FrameEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::frameStarted(evt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->frameStarted(evt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1frameStarted_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_frameStarted_FrameEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"frameStarted_FrameEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_frameStarted_1FrameEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::frameStarted(evt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_frameRenderingQueued_1FrameEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::frameRenderingQueued(evt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->frameRenderingQueued(evt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1frameRenderingQueued_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_frameRenderingQueued_FrameEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"frameRenderingQueued_FrameEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_frameRenderingQueued_1FrameEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::frameRenderingQueued(evt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_frameEnded_1FrameEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::frameEnded(evt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->frameEnded(evt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1frameEnded_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_frameEnded_FrameEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"frameEnded_FrameEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_frameEnded_1FrameEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::frameEnded(evt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::clearAllGlobeNodeTrackPoints();
				}
				else
				{
					pObjectX->clearAllGlobeNodeTrackPoints();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1clearAllGlobeNodeTrackPoints_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_clearAllGlobeNodeTrackPoints_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"clearAllGlobeNodeTrackPoints_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::clearAllGlobeNodeTrackPoints();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_canStart_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::canStart();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->canStart();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1canStart_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_canStart_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"canStart_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_canStart_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::canStart();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::hasRequestCreateAnimation();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->hasRequestCreateAnimation();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1hasRequestCreateAnimation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasRequestCreateAnimation_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasRequestCreateAnimation_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::hasRequestCreateAnimation();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_hasCreatedAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::hasCreatedAnimation();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->hasCreatedAnimation();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1hasCreatedAnimation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasCreatedAnimation_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasCreatedAnimation_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_hasCreatedAnimation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::hasCreatedAnimation();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setOnLineModeEnabled(enable);
				}
				else
				{
					pObjectX->setOnLineModeEnabled(enable);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1setOnLineModeEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setOnLineModeEnabled_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setOnLineModeEnabled_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setOnLineModeEnabled(enable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getOnLineModeEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getOnLineModeEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1getOnLineModeEnabled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getOnLineModeEnabled_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getOnLineModeEnabled_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getOnLineModeEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setAnimationsetEnabled(enable);
				}
				else
				{
					pObjectX->setAnimationsetEnabled(enable);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1setAnimationsetEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAnimationsetEnabled_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAnimationsetEnabled_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setAnimationsetEnabled(enable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getAnimationsetEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getAnimationsetEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1getAnimationsetEnabled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAnimationsetEnabled_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAnimationsetEnabled_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getAnimationsetEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_setArouseFrequency_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble frequency_j)
			{
				const ev_real64 frequency = (const ev_real64) frequency_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setArouseFrequency(frequency);
				}
				else
				{
					pObjectX->setArouseFrequency(frequency);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1setArouseFrequency_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setArouseFrequency_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setArouseFrequency_ev_real64_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_setArouseFrequency_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble frequency_j)
			{
				const ev_real64 frequency = (const ev_real64) frequency_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setArouseFrequency(frequency);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_getArouseFrequency_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					ev_real64 __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getArouseFrequency();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					ev_real64 __values1 = pObjectX->getArouseFrequency();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1getArouseFrequency_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getArouseFrequency_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getArouseFrequency_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_getArouseFrequency_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				ev_real64 __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getArouseFrequency();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_forceArouseAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::forceArouseAnimation();
				}
				else
				{
					pObjectX->forceArouseAnimation();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1forceArouseAnimation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_forceArouseAnimation_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"forceArouseAnimation_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_forceArouseAnimation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::forceArouseAnimation();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_getControlPointMap_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjXXXX;
				EarthView::World::Spatial3D::CGlobeControlPointMap __values1 = pObjectX->getControlPointMap();
				EarthView::World::Spatial3D::CGlobeControlPointMap *returnvalues = new EarthView::World::Spatial3D::CGlobeControlPointMap(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1createAnimation_1CSceneNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createAnimation_CSceneNode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createAnimation_CSceneNode_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimation_register_1destoryAnimation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destoryAnimation_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destoryAnimation_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
