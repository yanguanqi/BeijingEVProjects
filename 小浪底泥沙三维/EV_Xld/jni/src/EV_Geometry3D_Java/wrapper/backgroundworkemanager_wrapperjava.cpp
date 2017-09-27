/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/backgroundworkemanager.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_geometry3d_BackgroundRequestTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					BGRT_LOAD,
					BGRT_UNLOAD,
					BGRT_ATTACHTONODE,
					BGRT_DETACHFROMNODE,
					BGRT_ATTACHTOSCENE,
					BGRT_DETACHFROMSCENE,
					BGRT_RELEASEOBJECT
				};
				jintArray array = __env->NewIntArray(7);
				__env->SetIntArrayRegion(array, 0, 7, enum_values);
				return array;
			}
			class JCBackgroundWorkQueueProxy : public EarthView::World::Geometry3D::CBackgroundWorkQueue
			{
			 private:
				EarthView::World::Core::ev_string m_addRequest_BackgroundRequest_callback;
				EarthView::World::Core::ev_string m_abortRequest_ev_uint64_callback;
				EarthView::World::Core::ev_string m_initialise_void_callback;
				EarthView::World::Core::ev_string m_shutdown_void_callback;
				EarthView::World::Core::ev_string m_getGroupName_void_callback;
				EarthView::World::Core::ev_string m_getName_void_callback;
			public:
				JCBackgroundWorkQueueProxy(EarthView::World::Core::CNameValuePairList *pList) : CBackgroundWorkQueue(pList)
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
				void register_addRequest_BackgroundRequest_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addRequest_BackgroundRequest_callback = __method;
				}
				void register_abortRequest_ev_uint64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_abortRequest_ev_uint64_callback = __method;
				}
				void register_initialise_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_initialise_void_callback = __method;
				}
				void register_shutdown_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_shutdown_void_callback = __method;
				}
				void register_getGroupName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getGroupName_void_callback = __method;
				}
				void register_getName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getName_void_callback = __method;
				}
				virtual ev_uint64 addRequest(EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest& request)
				{
					if (this->_gRef != NULL && this->m_addRequest_BackgroundRequest_callback != "" && this->isCustomExtend())
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
						jlong request_j = (jlong) &request;
						jmethodID __method = __gr->getMethod("addRequest_BackgroundRequest_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , request_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1_s = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						ev_uint64 __values1 = __values1_s.getUint64();
						return __values1;
					}
					else
					{
						return this->CBackgroundWorkQueue::addRequest(request);
					}
				}
				virtual EVString getGroupName() const
				{
					if (this->_gRef != NULL && this->m_getGroupName_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getGroupName_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CBackgroundWorkQueue::getGroupName();
					}
				}
				virtual EVString getName() const
				{
					if (this->_gRef != NULL && this->m_getName_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getName_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CBackgroundWorkQueue::getName();
					}
				}
				virtual void initialise()
				{
					if (this->_gRef != NULL && this->m_initialise_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("initialise_void_callback");
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
						return this->CBackgroundWorkQueue::initialise();
					}
				}
				virtual void shutdown()
				{
					if (this->_gRef != NULL && this->m_shutdown_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("shutdown_void_callback");
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
						return this->CBackgroundWorkQueue::shutdown();
					}
				}
				virtual void abortRequest(ev_uint64 ticket)
				{
					if (this->_gRef != NULL && this->m_abortRequest_ev_uint64_callback != "" && this->isCustomExtend())
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
						jlong ticket_j = (jlong) &ticket;
						jmethodID __method = __gr->getMethod("abortRequest_ev_uint64_callback");
						__env->CallVoidMethod(__obj, __method , ticket_j);
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
						return this->CBackgroundWorkQueue::abortRequest(ticket);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCBackgroundWorkQueueProxy);
			class JBackgroundResponseProxy : public EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundResponse
			{
			 private:
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JBackgroundResponseProxy(EarthView::World::Core::CNameValuePairList *pList) : BackgroundResponse(pList)
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
				virtual EarthView::World::Core::CWorkQueue::ResponsePara* clone() const
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
						EarthView::World::Core::CWorkQueue::ResponsePara *__values1 = (EarthView::World::Core::CWorkQueue::ResponsePara*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->BackgroundResponse::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JBackgroundResponseProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundResponse_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundResponse *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundResponse*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JBackgroundResponseProxy))
				{
					EarthView::World::Core::CWorkQueue::ResponsePara* __values1 = pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundResponse::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::CWorkQueue::ResponsePara* __values1 = pObjectX->clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundResponse_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JBackgroundResponseProxy *pObjectX = (JBackgroundResponseProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundResponse_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundResponse *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundResponse*) pObjXXXX;
				EarthView::World::Core::CWorkQueue::ResponsePara* __values1 = pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundResponse::clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JBackgroundRequestProxy : public EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest
			{
			 private:
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JBackgroundRequestProxy(EarthView::World::Core::CNameValuePairList *pList) : BackgroundRequest(pList)
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
				virtual EarthView::World::Core::CWorkQueue::RequestPara* clone() const
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
						EarthView::World::Core::CWorkQueue::RequestPara *__values1 = (EarthView::World::Core::CWorkQueue::RequestPara*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->BackgroundRequest::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JBackgroundRequestProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundRequest_get_1mpObj_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->mpObj);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundRequest_set_1mpObj_1CVisibleObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*)pObjXXXX;
				pObjectX->mpObj = (EarthView::World::Geometry3D::CVisibleObject*) __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundRequest_get_1mReqType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->mReqType);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundRequest_set_1mReqType_1BackgroundRequestType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*)pObjXXXX;
				pObjectX->mReqType = (EarthView::World::Geometry3D::BackgroundRequestType)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundRequest_get_1mpNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->mpNode);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundRequest_set_1mpNode_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*)pObjXXXX;
				pObjectX->mpNode = (EarthView::World::Graphic::CNode*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundRequest_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JBackgroundRequestProxy))
				{
					EarthView::World::Core::CWorkQueue::RequestPara* __values1 = pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::CWorkQueue::RequestPara* __values1 = pObjectX->clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundRequest_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JBackgroundRequestProxy *pObjectX = (JBackgroundRequestProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundRequest_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*) pObjXXXX;
				EarthView::World::Core::CWorkQueue::RequestPara* __values1 = pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest::clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCBackgroundRequestHandlerProxy : public EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler
			{
			 private:
				EarthView::World::Core::ev_string m_canHandleRequest_CRequest_CWorkQueue_callback;
				EarthView::World::Core::ev_string m_handleRequest_CRequest_CWorkQueue_callback;
			public:
				JCBackgroundRequestHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CBackgroundRequestHandler(pList)
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
				void register_canHandleRequest_CRequest_CWorkQueue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_canHandleRequest_CRequest_CWorkQueue_callback = __method;
				}
				void register_handleRequest_CRequest_CWorkQueue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_handleRequest_CRequest_CWorkQueue_callback = __method;
				}
				virtual ev_bool canHandleRequest(const EarthView::World::Core::CWorkQueue::CRequest* req, const EarthView::World::Core::CWorkQueue* srcQ)
				{
					if (this->_gRef != NULL && this->m_canHandleRequest_CRequest_CWorkQueue_callback != "" && this->isCustomExtend())
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
						jlong req_j = (jlong) req;
						jlong srcQ_j = (jlong) srcQ;
						jmethodID __method = __gr->getMethod("canHandleRequest_CRequest_CWorkQueue_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , req_j, srcQ_j);
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
						return this->CBackgroundRequestHandler::canHandleRequest(req, srcQ);
					}
				}
				virtual EarthView::World::Core::CWorkQueue::CResponse* handleRequest(const EarthView::World::Core::CWorkQueue::CRequest* req, const EarthView::World::Core::CWorkQueue* srcQ)
				{
					if (this->_gRef != NULL && this->m_handleRequest_CRequest_CWorkQueue_callback != "" && this->isCustomExtend())
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
						jlong req_j = (jlong) req;
						jlong srcQ_j = (jlong) srcQ;
						jmethodID __method = __gr->getMethod("handleRequest_CRequest_CWorkQueue_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , req_j, srcQ_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::CWorkQueue::CResponse *__values1 = (EarthView::World::Core::CWorkQueue::CResponse*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CBackgroundRequestHandler::handleRequest(req, srcQ);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCBackgroundRequestHandlerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundRequestHandler_canHandleRequest_1CRequest_1CWorkQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong req_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CRequest *req = (const EarthView::World::Core::CWorkQueue::CRequest*) req_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBackgroundRequestHandlerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler::canHandleRequest(req, srcQ);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->canHandleRequest(req, srcQ);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundRequestHandler_register_1canHandleRequest_1CRequest_1CWorkQueue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBackgroundRequestHandlerProxy *pObjectX = (JCBackgroundRequestHandlerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_canHandleRequest_CRequest_CWorkQueue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"canHandleRequest_CRequest_CWorkQueue_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundRequestHandler_canHandleRequest_1CRequest_1CWorkQueue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong req_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CRequest *req = (const EarthView::World::Core::CWorkQueue::CRequest*) req_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler::canHandleRequest(req, srcQ);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundRequestHandler_handleRequest_1CRequest_1CWorkQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong req_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CRequest *req = (const EarthView::World::Core::CWorkQueue::CRequest*) req_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBackgroundRequestHandlerProxy))
				{
					EarthView::World::Core::CWorkQueue::CResponse* __values1 = pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler::handleRequest(req, srcQ);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::CWorkQueue::CResponse* __values1 = pObjectX->handleRequest(req, srcQ);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundRequestHandler_register_1handleRequest_1CRequest_1CWorkQueue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBackgroundRequestHandlerProxy *pObjectX = (JCBackgroundRequestHandlerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_handleRequest_CRequest_CWorkQueue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"handleRequest_CRequest_CWorkQueue_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundRequestHandler_handleRequest_1CRequest_1CWorkQueue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong req_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CRequest *req = (const EarthView::World::Core::CWorkQueue::CRequest*) req_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler*) pObjXXXX;
				EarthView::World::Core::CWorkQueue::CResponse* __values1 = pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler::handleRequest(req, srcQ);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCBackgroundResponseHandlerProxy : public EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler
			{
			 private:
				EarthView::World::Core::ev_string m_canHandleResponse_CResponse_CWorkQueue_callback;
				EarthView::World::Core::ev_string m_handleResponse_CResponse_CWorkQueue_callback;
			public:
				JCBackgroundResponseHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CBackgroundResponseHandler(pList)
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
				void register_canHandleResponse_CResponse_CWorkQueue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_canHandleResponse_CResponse_CWorkQueue_callback = __method;
				}
				void register_handleResponse_CResponse_CWorkQueue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_handleResponse_CResponse_CWorkQueue_callback = __method;
				}
				virtual ev_bool canHandleResponse(const EarthView::World::Core::CWorkQueue::CResponse* res, const EarthView::World::Core::CWorkQueue* srcQ)
				{
					if (this->_gRef != NULL && this->m_canHandleResponse_CResponse_CWorkQueue_callback != "" && this->isCustomExtend())
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
						jlong res_j = (jlong) res;
						jlong srcQ_j = (jlong) srcQ;
						jmethodID __method = __gr->getMethod("canHandleResponse_CResponse_CWorkQueue_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , res_j, srcQ_j);
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
						return this->CBackgroundResponseHandler::canHandleResponse(res, srcQ);
					}
				}
				virtual void handleResponse(const EarthView::World::Core::CWorkQueue::CResponse* res, const EarthView::World::Core::CWorkQueue* srcQ)
				{
					if (this->_gRef != NULL && this->m_handleResponse_CResponse_CWorkQueue_callback != "" && this->isCustomExtend())
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
						jlong res_j = (jlong) res;
						jlong srcQ_j = (jlong) srcQ;
						jmethodID __method = __gr->getMethod("handleResponse_CResponse_CWorkQueue_callback");
						__env->CallVoidMethod(__obj, __method , res_j, srcQ_j);
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
						return this->CBackgroundResponseHandler::handleResponse(res, srcQ);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCBackgroundResponseHandlerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundResponseHandler_canHandleResponse_1CResponse_1CWorkQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CResponse *res = (const EarthView::World::Core::CWorkQueue::CResponse*) res_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBackgroundResponseHandlerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler::canHandleResponse(res, srcQ);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->canHandleResponse(res, srcQ);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundResponseHandler_register_1canHandleResponse_1CResponse_1CWorkQueue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBackgroundResponseHandlerProxy *pObjectX = (JCBackgroundResponseHandlerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_canHandleResponse_CResponse_CWorkQueue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"canHandleResponse_CResponse_CWorkQueue_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundResponseHandler_canHandleResponse_1CResponse_1CWorkQueue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CResponse *res = (const EarthView::World::Core::CWorkQueue::CResponse*) res_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler::canHandleResponse(res, srcQ);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundResponseHandler_handleResponse_1CResponse_1CWorkQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CResponse *res = (const EarthView::World::Core::CWorkQueue::CResponse*) res_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBackgroundResponseHandlerProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler::handleResponse(res, srcQ);
				}
				else
				{
					pObjectX->handleResponse(res, srcQ);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundResponseHandler_register_1handleResponse_1CResponse_1CWorkQueue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBackgroundResponseHandlerProxy *pObjectX = (JCBackgroundResponseHandlerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_handleResponse_CResponse_CWorkQueue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"handleResponse_CResponse_CWorkQueue_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_00024BackgroundResponseHandler_handleResponse_1CResponse_1CWorkQueue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j, jlong srcQ_j)
			{
				const EarthView::World::Core::CWorkQueue::CResponse *res = (const EarthView::World::Core::CWorkQueue::CResponse*) res_j;
				const EarthView::World::Core::CWorkQueue *srcQ = (const EarthView::World::Core::CWorkQueue*) srcQ_j;
				EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler::handleResponse(res, srcQ);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue* __values1 = EarthView::World::Geometry3D::CBackgroundWorkQueue::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_releaseSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue::releaseSingleton();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_addRequest_1BackgroundRequest(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong request_j)
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest &request = *(EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*) request_j;
				EarthView::World::Geometry3D::CBackgroundWorkQueue *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBackgroundWorkQueueProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::addRequest(request);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->addRequest(request);
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_register_1addRequest_1BackgroundRequest(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBackgroundWorkQueueProxy *pObjectX = (JCBackgroundWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addRequest_BackgroundRequest_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addRequest_BackgroundRequest_callback", "(J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_addRequest_1BackgroundRequest_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong request_j)
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest &request = *(EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*) request_j;
				EarthView::World::Geometry3D::CBackgroundWorkQueue *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::addRequest(request);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_getGroupName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CBackgroundWorkQueue *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBackgroundWorkQueueProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::getGroupName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getGroupName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_register_1getGroupName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBackgroundWorkQueueProxy *pObjectX = (JCBackgroundWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getGroupName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getGroupName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_getGroupName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CBackgroundWorkQueue *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::getGroupName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CBackgroundWorkQueue *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBackgroundWorkQueueProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBackgroundWorkQueueProxy *pObjectX = (JCBackgroundWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CBackgroundWorkQueue *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::getName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_initialise_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBackgroundWorkQueueProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::initialise();
				}
				else
				{
					pObjectX->initialise();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_register_1initialise_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBackgroundWorkQueueProxy *pObjectX = (JCBackgroundWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_initialise_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"initialise_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_initialise_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::initialise();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_shutdown_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBackgroundWorkQueueProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::shutdown();
				}
				else
				{
					pObjectX->shutdown();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_register_1shutdown_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBackgroundWorkQueueProxy *pObjectX = (JCBackgroundWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_shutdown_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"shutdown_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_shutdown_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::shutdown();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_abortRequest_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ticket_j)
			{
				ev_uint64 ticket = *(ev_uint64*) ticket_j;
				EarthView::World::Geometry3D::CBackgroundWorkQueue *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBackgroundWorkQueueProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::abortRequest(ticket);
				}
				else
				{
					pObjectX->abortRequest(ticket);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_register_1abortRequest_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBackgroundWorkQueueProxy *pObjectX = (JCBackgroundWorkQueueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_abortRequest_ev_uint64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"abortRequest_ev_uint64_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkQueue_abortRequest_1ev_1uint64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ticket_j)
			{
				ev_uint64 ticket = *(ev_uint64*) ticket_j;
				EarthView::World::Geometry3D::CBackgroundWorkQueue *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CBackgroundWorkQueue::abortRequest(ticket);
			}
			class JCBackgroundQueueListenerProxy : public EarthView::World::Geometry3D::CBackgroundQueueListener
			{
			 private:
				EarthView::World::Core::ev_string m_frameStarted_FrameEvent_callback;
				EarthView::World::Core::ev_string m_frameRenderingQueued_FrameEvent_callback;
				EarthView::World::Core::ev_string m_frameEnded_FrameEvent_callback;
			public:
				JCBackgroundQueueListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CBackgroundQueueListener(pList)
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
						return this->CBackgroundQueueListener::frameEnded(evt);
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
						return this->CBackgroundQueueListener::frameStarted(evt);
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
						return this->CBackgroundQueueListener::frameRenderingQueued(evt);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCBackgroundQueueListenerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_BackgroundQueueListener_frameEnded_1FrameEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Geometry3D::CBackgroundQueueListener *pObjectX = (EarthView::World::Geometry3D::CBackgroundQueueListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBackgroundQueueListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CBackgroundQueueListener::frameEnded(evt);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundQueueListener_register_1frameEnded_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBackgroundQueueListenerProxy *pObjectX = (JCBackgroundQueueListenerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_BackgroundQueueListener_frameEnded_1FrameEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Geometry3D::CBackgroundQueueListener *pObjectX = (EarthView::World::Geometry3D::CBackgroundQueueListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CBackgroundQueueListener::frameEnded(evt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundQueueListener_register_1frameStarted_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBackgroundQueueListenerProxy *pObjectX = (JCBackgroundQueueListenerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundQueueListener_register_1frameRenderingQueued_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBackgroundQueueListenerProxy *pObjectX = (JCBackgroundQueueListenerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Geometry3D::CBackgroundWorkManager* __values1 = EarthView::World::Geometry3D::CBackgroundWorkManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkManager_releaseSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Geometry3D::CBackgroundWorkManager::releaseSingleton();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkManager_init_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CBackgroundWorkManager *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkManager*) pObjXXXX;
				pObjectX->init();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkManager_addReqeust_1BackgroundRequest(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong req_j)
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest *req = (EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*) req_j;
				EarthView::World::Geometry3D::CBackgroundWorkManager *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkManager*) pObjXXXX;
				pObjectX->addReqeust(req);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkManager_abortRequest_1CVisibleObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pObj_j)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObj = (EarthView::World::Geometry3D::CVisibleObject*) pObj_j;
				EarthView::World::Geometry3D::CBackgroundWorkManager *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkManager*) pObjXXXX;
				pObjectX->abortRequest(pObj);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkManager_syncAbortRequest_1CVisibleObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pObj_j)
			{
				EarthView::World::Geometry3D::CVisibleObject *pObj = (EarthView::World::Geometry3D::CVisibleObject*) pObj_j;
				EarthView::World::Geometry3D::CBackgroundWorkManager *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkManager*) pObjXXXX;
				pObjectX->syncAbortRequest(pObj);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_BackgroundWorkManager_getWorkQuque_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CBackgroundWorkManager *pObjectX = (EarthView::World::Geometry3D::CBackgroundWorkManager*) pObjXXXX;
				EarthView::World::Core::CWorkQueue* __values1 = pObjectX->getWorkQuque();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
