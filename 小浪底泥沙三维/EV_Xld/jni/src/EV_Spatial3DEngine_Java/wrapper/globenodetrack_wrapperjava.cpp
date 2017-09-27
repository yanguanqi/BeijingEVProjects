/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/globenodetrack.h"
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
			class JCGlobeNodeTrackAnimationProxy : public EarthView::World::Spatial3D::CGlobeNodeTrackAnimation
			{
			 private:
				EarthView::World::Core::ev_string m_createAnimation_CSceneNode_callback;
				EarthView::World::Core::ev_string m_destoryAnimation_void_callback;
				EarthView::World::Core::ev_string m_frameStarted_FrameEvent_callback;
				EarthView::World::Core::ev_string m_frameRenderingQueued_FrameEvent_callback;
				EarthView::World::Core::ev_string m_frameEnded_FrameEvent_callback;
			public:
				JCGlobeNodeTrackAnimationProxy(EarthView::World::Core::CNameValuePairList *pList) : CGlobeNodeTrackAnimation(pList)
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
						return this->CGlobeNodeTrackAnimation::createAnimation(ref_node);
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
						return this->CGlobeNodeTrackAnimation::destoryAnimation();
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
						return this->CGlobeNodeTrackAnimation::frameRenderingQueued(evt);
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
						return this->CGlobeNodeTrackAnimation::frameStarted(evt);
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
						return this->CGlobeNodeTrackAnimation::frameEnded(evt);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCGlobeNodeTrackAnimationProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeNodeTrackAnimation_createAnimation_1CSceneNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_node_j)
			{
				EarthView::World::Graphic::CSceneNode *ref_node = (EarthView::World::Graphic::CSceneNode*) ref_node_j;
				EarthView::World::Spatial3D::CGlobeNodeTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGlobeNodeTrackAnimationProxy))
				{
					pObjectX->EarthView::World::Spatial3D::CGlobeNodeTrackAnimation::createAnimation(ref_node);
				}
				else
				{
					pObjectX->createAnimation(ref_node);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeNodeTrackAnimation_register_1createAnimation_1CSceneNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGlobeNodeTrackAnimationProxy *pObjectX = (JCGlobeNodeTrackAnimationProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeNodeTrackAnimation_createAnimation_1CSceneNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_node_j)
			{
				EarthView::World::Graphic::CSceneNode *ref_node = (EarthView::World::Graphic::CSceneNode*) ref_node_j;
				EarthView::World::Spatial3D::CGlobeNodeTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3D::CGlobeNodeTrackAnimation::createAnimation(ref_node);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeNodeTrackAnimation_destoryAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeNodeTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGlobeNodeTrackAnimationProxy))
				{
					pObjectX->EarthView::World::Spatial3D::CGlobeNodeTrackAnimation::destoryAnimation();
				}
				else
				{
					pObjectX->destoryAnimation();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeNodeTrackAnimation_register_1destoryAnimation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGlobeNodeTrackAnimationProxy *pObjectX = (JCGlobeNodeTrackAnimationProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeNodeTrackAnimation_destoryAnimation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeNodeTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3D::CGlobeNodeTrackAnimation::destoryAnimation();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeNodeTrackAnimation_setNodeUpAxis_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring upAxis_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* upAxis_ch = (const ev_char*)__env->GetStringUTFChars(upAxis_j,JNI_FALSE);
				const EVString upAxis = upAxis_ch;
				__env->ReleaseStringUTFChars(upAxis_j, (const char *)upAxis_ch);
				#else
				const ev_wchar* upAxis_ch = (const ev_wchar*)__env->GetStringChars(upAxis_j,JNI_FALSE);
				const EVString upAxis = upAxis_ch;
				__env->ReleaseStringChars(upAxis_j, (const jchar *)upAxis_ch);
				#endif
				const 				EarthView::World::Spatial3D::CGlobeNodeTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*) pObjXXXX;
				pObjectX->setNodeUpAxis(upAxis);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_GlobeNodeTrackAnimation_getNodeUpAxis_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CGlobeNodeTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*) pObjXXXX;
				EVString __values1 = pObjectX->getNodeUpAxis();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeNodeTrackAnimation_getPosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeNodeTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getPosition();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_GlobeNodeTrackAnimation_getHeading_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeNodeTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getHeading();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeNodeTrackAnimation_insertGlobePoint_1ev_1real64_1CGlobeControlPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j, jlong globeControlPoint_j)
			{
				ev_real64 time = (ev_real64) time_j;
				const EarthView::World::Spatial3D::CGlobeControlPoint &globeControlPoint = *(EarthView::World::Spatial3D::CGlobeControlPoint*) globeControlPoint_j;
				EarthView::World::Spatial3D::CGlobeNodeTrackAnimation *pObjectX = (EarthView::World::Spatial3D::CGlobeNodeTrackAnimation*) pObjXXXX;
				pObjectX->insertGlobePoint(time, globeControlPoint);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeNodeTrackAnimation_register_1frameStarted_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGlobeNodeTrackAnimationProxy *pObjectX = (JCGlobeNodeTrackAnimationProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeNodeTrackAnimation_register_1frameRenderingQueued_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGlobeNodeTrackAnimationProxy *pObjectX = (JCGlobeNodeTrackAnimationProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeNodeTrackAnimation_register_1frameEnded_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGlobeNodeTrackAnimationProxy *pObjectX = (JCGlobeNodeTrackAnimationProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeNodeTrackAnimationPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CGlobeNodeTrackAnimationPtr *pObjectX = (EarthView::World::Spatial3D::CGlobeNodeTrackAnimationPtr*) pObjXXXX;
				EarthView::World::Spatial3D::CGlobeNodeTrackAnimation* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeNodeTrackAnimationPtr_OperatorAssign_1CGlobeNodeTrackAnimationPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
			{
				EarthView::World::Spatial3D::CGlobeNodeTrackAnimationPtr& pObjectX = *(EarthView::World::Spatial3D::CGlobeNodeTrackAnimationPtr*) pObjXXXX;
				const EarthView::World::Spatial3D::CGlobeNodeTrackAnimationPtr &r = *(EarthView::World::Spatial3D::CGlobeNodeTrackAnimationPtr*) r_j;
				pObjectX = r;
				EarthView::World::Spatial3D::CGlobeNodeTrackAnimationPtr& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
		}
	}
}
