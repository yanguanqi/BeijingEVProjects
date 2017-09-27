/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/nodetrack.h"
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
		}
		namespace Spatial3D
		{
			class JCTrackAnimationTimeListenerProxy : public EarthView::World::Spatial3D::CTrackAnimationTimeListener
			{
			 private:
				EarthView::World::Core::ev_string m_calculateTimeRatio_ev_real64_ev_real64_callback;
			public:
				JCTrackAnimationTimeListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CTrackAnimationTimeListener(pList)
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
				void register_calculateTimeRatio_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_calculateTimeRatio_ev_real64_ev_real64_callback = __method;
				}
				virtual ev_real64 calculateTimeRatio(ev_real64 timePostion, ev_real64 timeLength)
				{
					if (this->_gRef != NULL && this->m_calculateTimeRatio_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
						jdouble timePostion_j = (jdouble) timePostion;
						jdouble timeLength_j = (jdouble) timeLength;
						jmethodID __method = __gr->getMethod("calculateTimeRatio_ev_real64_ev_real64_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , timePostion_j, timeLength_j);
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
						return this->CTrackAnimationTimeListener::calculateTimeRatio(timePostion, timeLength);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCTrackAnimationTimeListenerProxy);
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_TrackAnimationTimeListener_calculateTimeRatio_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePostion_j, jdouble timeLength_j)
			{
				ev_real64 timePostion = (ev_real64) timePostion_j;
				ev_real64 timeLength = (ev_real64) timeLength_j;
				EarthView::World::Spatial3D::CTrackAnimationTimeListener *pObjectX = (EarthView::World::Spatial3D::CTrackAnimationTimeListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTrackAnimationTimeListenerProxy))
				{
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::CTrackAnimationTimeListener::calculateTimeRatio(timePostion, timeLength);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					ev_real64 __values1 = pObjectX->calculateTimeRatio(timePostion, timeLength);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimationTimeListener_register_1calculateTimeRatio_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTrackAnimationTimeListenerProxy *pObjectX = (JCTrackAnimationTimeListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_calculateTimeRatio_ev_real64_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"calculateTimeRatio_ev_real64_ev_real64_callback", "(DD)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_TrackAnimationTimeListener_calculateTimeRatio_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePostion_j, jdouble timeLength_j)
			{
				ev_real64 timePostion = (ev_real64) timePostion_j;
				ev_real64 timeLength = (ev_real64) timeLength_j;
				EarthView::World::Spatial3D::CTrackAnimationTimeListener *pObjectX = (EarthView::World::Spatial3D::CTrackAnimationTimeListener*) pObjXXXX;
				ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::CTrackAnimationTimeListener::calculateTimeRatio(timePostion, timeLength);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			class JCTrackAnimationProxy : public EarthView::World::Spatial3D::CTrackAnimation
			{
			 private:
				EarthView::World::Core::ev_string m_createAnimation_CSceneNode_callback;
				EarthView::World::Core::ev_string m_destoryAnimation_void_callback;
				EarthView::World::Core::ev_string m_frameStarted_FrameEvent_callback;
				EarthView::World::Core::ev_string m_frameRenderingQueued_FrameEvent_callback;
				EarthView::World::Core::ev_string m_frameEnded_FrameEvent_callback;
			public:
				JCTrackAnimationProxy(EarthView::World::Core::CNameValuePairList *pList) : CTrackAnimation(pList)
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
				virtual void createAnimation(EarthView::World::Graphic::CSceneNode* ref_node)
				{
					if (this->_gRef != NULL && this->m_createAnimation_CSceneNode_callback != "" && this->isCustomExtend())
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
						jlong ref_node_j = (jlong) ref_node;
						jmethodID __method = __gr->getMethod("createAnimation_CSceneNode_callback");
						__env->CallVoidMethod(__obj, __method , ref_node_j);
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
						return this->CTrackAnimation::createAnimation(ref_node);
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
						return this->CTrackAnimation::destoryAnimation();
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
						return this->CTrackAnimation::frameRenderingQueued(evt);
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
						return this->CTrackAnimation::frameStarted(evt);
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
						return this->CTrackAnimation::frameEnded(evt);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCTrackAnimationProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimation_createAnimation_1CSceneNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_node_j)
			{
				EarthView::World::Graphic::CSceneNode *ref_node = (EarthView::World::Graphic::CSceneNode*) ref_node_j;
				EarthView::World::Spatial3D::CTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTrackAnimationProxy))
				{
					pObjectX->EarthView::World::Spatial3D::CTrackAnimation::createAnimation(ref_node);
				}
				else
				{
					pObjectX->createAnimation(ref_node);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimation_register_1createAnimation_1CSceneNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTrackAnimationProxy *pObjectX = (JCTrackAnimationProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimation_createAnimation_1CSceneNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_node_j)
			{
				EarthView::World::Graphic::CSceneNode *ref_node = (EarthView::World::Graphic::CSceneNode*) ref_node_j;
				EarthView::World::Spatial3D::CTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CTrackAnimation*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3D::CTrackAnimation::createAnimation(ref_node);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimation_destoryAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTrackAnimationProxy))
				{
					pObjectX->EarthView::World::Spatial3D::CTrackAnimation::destoryAnimation();
				}
				else
				{
					pObjectX->destoryAnimation();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimation_register_1destoryAnimation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTrackAnimationProxy *pObjectX = (JCTrackAnimationProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimation_destoryAnimation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CTrackAnimation*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3D::CTrackAnimation::destoryAnimation();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimation_startAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CTrackAnimation*) pObjXXXX;
				pObjectX->startAnimation();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimation_stopAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CTrackAnimation*) pObjXXXX;
				pObjectX->stopAnimation();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimation_pauseAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CTrackAnimation*) pObjXXXX;
				pObjectX->pauseAnimation();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimation_continueAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CTrackAnimation*) pObjXXXX;
				pObjectX->continueAnimation();
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_TrackAnimation_getLength_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CTrackAnimation*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getLength();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimation_setTimeListener_1CTrackAnimationTimeListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
			{
				EarthView::World::Spatial3D::CTrackAnimationTimeListener *ref_listener = (EarthView::World::Spatial3D::CTrackAnimationTimeListener*) ref_listener_j;
				EarthView::World::Spatial3D::CTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CTrackAnimation*) pObjXXXX;
				pObjectX->setTimeListener(ref_listener);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TrackAnimation_getSceneNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CTrackAnimation*) pObjXXXX;
				EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->getSceneNode();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimation_setLoop_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean loop_j)
			{
				bool loop = (bool) loop_j;
				EarthView::World::Spatial3D::CTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CTrackAnimation*) pObjXXXX;
				pObjectX->setLoop(loop);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_TrackAnimation_getLoop_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CTrackAnimation*) pObjXXXX;
				bool __values1 = pObjectX->getLoop();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimation_setTimeRatiio_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timeRatio_j)
			{
				ev_real64 timeRatio = (ev_real64) timeRatio_j;
				EarthView::World::Spatial3D::CTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CTrackAnimation*) pObjXXXX;
				pObjectX->setTimeRatiio(timeRatio);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimation_setTrackListener_1CAnimationTrackListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
			{
				EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener *ref_listener = (EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener*) ref_listener_j;
				EarthView::World::Spatial3D::CTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CTrackAnimation*) pObjXXXX;
				pObjectX->setTrackListener(ref_listener);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_TrackAnimation_frameRenderingQueued_1FrameEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Spatial3D::CTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTrackAnimationProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::CTrackAnimation::frameRenderingQueued(evt);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimation_register_1frameRenderingQueued_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTrackAnimationProxy *pObjectX = (JCTrackAnimationProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_TrackAnimation_frameRenderingQueued_1FrameEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Spatial3D::CTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CTrackAnimation*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::CTrackAnimation::frameRenderingQueued(evt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TrackAnimation_getAnimationState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CTrackAnimation*) pObjXXXX;
				EarthView::World::Graphic::CAnimationState* __values1 = pObjectX->getAnimationState();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimation_register_1frameStarted_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTrackAnimationProxy *pObjectX = (JCTrackAnimationProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimation_register_1frameEnded_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTrackAnimationProxy *pObjectX = (JCTrackAnimationProxy*) pObjXXXX;
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
			class JCNodeTrackAnimationProxy : public EarthView::World::Spatial3D::CNodeTrackAnimation
			{
			 private:
				EarthView::World::Core::ev_string m_createAnimation_CSceneNode_callback;
				EarthView::World::Core::ev_string m_destoryAnimation_void_callback;
				EarthView::World::Core::ev_string m_frameStarted_FrameEvent_callback;
				EarthView::World::Core::ev_string m_frameRenderingQueued_FrameEvent_callback;
				EarthView::World::Core::ev_string m_frameEnded_FrameEvent_callback;
			public:
				JCNodeTrackAnimationProxy(EarthView::World::Core::CNameValuePairList *pList) : CNodeTrackAnimation(pList)
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
				virtual void createAnimation(EarthView::World::Graphic::CSceneNode* ref_node)
				{
					if (this->_gRef != NULL && this->m_createAnimation_CSceneNode_callback != "" && this->isCustomExtend())
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
						jlong ref_node_j = (jlong) ref_node;
						jmethodID __method = __gr->getMethod("createAnimation_CSceneNode_callback");
						__env->CallVoidMethod(__obj, __method , ref_node_j);
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
						return this->CNodeTrackAnimation::createAnimation(ref_node);
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
						return this->CNodeTrackAnimation::destoryAnimation();
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
						return this->CNodeTrackAnimation::frameRenderingQueued(evt);
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
						return this->CNodeTrackAnimation::frameStarted(evt);
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
						return this->CNodeTrackAnimation::frameEnded(evt);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCNodeTrackAnimationProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_NodeTrackAnimation_createAnimation_1CSceneNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_node_j)
			{
				EarthView::World::Graphic::CSceneNode *ref_node = (EarthView::World::Graphic::CSceneNode*) ref_node_j;
				EarthView::World::Spatial3D::CNodeTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeTrackAnimationProxy))
				{
					pObjectX->EarthView::World::Spatial3D::CNodeTrackAnimation::createAnimation(ref_node);
				}
				else
				{
					pObjectX->createAnimation(ref_node);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_NodeTrackAnimation_register_1createAnimation_1CSceneNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeTrackAnimationProxy *pObjectX = (JCNodeTrackAnimationProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_NodeTrackAnimation_createAnimation_1CSceneNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_node_j)
			{
				EarthView::World::Graphic::CSceneNode *ref_node = (EarthView::World::Graphic::CSceneNode*) ref_node_j;
				EarthView::World::Spatial3D::CNodeTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CNodeTrackAnimation*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3D::CNodeTrackAnimation::createAnimation(ref_node);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_NodeTrackAnimation_setInterpolationMode_1InterpolationMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint interpolationMode_j)
			{
				EarthView::World::Graphic::CAnimation::InterpolationMode interpolationMode = (EarthView::World::Graphic::CAnimation::InterpolationMode) interpolationMode_j;
				EarthView::World::Spatial3D::CNodeTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CNodeTrackAnimation*) pObjXXXX;
				pObjectX->setInterpolationMode(interpolationMode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_NodeTrackAnimation_setRotationInterpolationMode_1RotationInterpolationMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint rotationInterpolationMode_j)
			{
				EarthView::World::Graphic::CAnimation::RotationInterpolationMode rotationInterpolationMode = (EarthView::World::Graphic::CAnimation::RotationInterpolationMode) rotationInterpolationMode_j;
				EarthView::World::Spatial3D::CNodeTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CNodeTrackAnimation*) pObjXXXX;
				pObjectX->setRotationInterpolationMode(rotationInterpolationMode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_NodeTrackAnimation_insertControlPoint_1ev_1real64_1CControlPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j, jlong controlPoint_j)
			{
				ev_real64 time = (ev_real64) time_j;
				const EarthView::World::Spatial3D::CControlPoint &controlPoint = *(EarthView::World::Spatial3D::CControlPoint*) controlPoint_j;
				EarthView::World::Spatial3D::CNodeTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CNodeTrackAnimation*) pObjXXXX;
				pObjectX->insertControlPoint(time, controlPoint);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_NodeTrackAnimation_setControlPointMap_1CControlPointMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong controlPointMap_j)
			{
				const EarthView::World::Spatial3D::CControlPointMap &controlPointMap = *(EarthView::World::Spatial3D::CControlPointMap*) controlPointMap_j;
				EarthView::World::Spatial3D::CNodeTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CNodeTrackAnimation*) pObjXXXX;
				pObjectX->setControlPointMap(controlPointMap);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_NodeTrackAnimation_register_1destoryAnimation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeTrackAnimationProxy *pObjectX = (JCNodeTrackAnimationProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_NodeTrackAnimation_register_1frameStarted_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeTrackAnimationProxy *pObjectX = (JCNodeTrackAnimationProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_NodeTrackAnimation_register_1frameRenderingQueued_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeTrackAnimationProxy *pObjectX = (JCNodeTrackAnimationProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_NodeTrackAnimation_register_1frameEnded_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeTrackAnimationProxy *pObjectX = (JCNodeTrackAnimationProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_NodeTrackAnimationPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CNodeTrackAnimationPtr *pObjectX = (EarthView::World::Spatial3D::CNodeTrackAnimationPtr*) pObjXXXX;
				EarthView::World::Spatial3D::CNodeTrackAnimation* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_NodeTrackAnimationPtr_OperatorAssign_1CNodeTrackAnimationPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
			{
				EarthView::World::Spatial3D::CNodeTrackAnimationPtr& pObjectX = *(EarthView::World::Spatial3D::CNodeTrackAnimationPtr*) pObjXXXX;
				const EarthView::World::Spatial3D::CNodeTrackAnimationPtr &r = *(EarthView::World::Spatial3D::CNodeTrackAnimationPtr*) r_j;
				pObjectX = r;
				EarthView::World::Spatial3D::CNodeTrackAnimationPtr& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimationVector_push_1back_1CTrackAnimation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Spatial3D::CTrackAnimation *&t = *(EarthView::World::Spatial3D::CTrackAnimation**) t_j;
				EarthView::World::Spatial3D::CTrackAnimationVector *pObjectX = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimationVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTrackAnimationVector *pObjectX = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TrackAnimationVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTrackAnimationVector *pObjectX = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjXXXX;
				EarthView::World::Spatial3D::CTrackAnimation*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TrackAnimationVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTrackAnimationVector *pObjectX = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjXXXX;
				EarthView::World::Spatial3D::CTrackAnimation*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimationVector_insert_1ev_1uint32_1CTrackAnimation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Spatial3D::CTrackAnimation *&t = *(EarthView::World::Spatial3D::CTrackAnimation**) t_j;
				EarthView::World::Spatial3D::CTrackAnimationVector *pObjectX = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimationVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Spatial3D::CTrackAnimationVector *pObjectX = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_TrackAnimationVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CTrackAnimationVector *pObjectX = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TrackAnimationVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Spatial3D::CTrackAnimationVector& pObjectX = *(EarthView::World::Spatial3D::CTrackAnimationVector*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Spatial3D::CTrackAnimation*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TrackAnimationVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Spatial3D::CTrackAnimationVector *pObjectX = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjXXXX;
				EarthView::World::Spatial3D::CTrackAnimation*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TrackAnimationVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CTrackAnimationVector *pObjectX = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimationVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Spatial3D::CTrackAnimationVector *pObjectX = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimationVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Spatial3D::CTrackAnimationVector *pObjectX = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TrackAnimationVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTrackAnimationVector *pObjectX = (EarthView::World::Spatial3D::CTrackAnimationVector*) pObjXXXX;
				pObjectX->clear();
			}
		}
	}
}
