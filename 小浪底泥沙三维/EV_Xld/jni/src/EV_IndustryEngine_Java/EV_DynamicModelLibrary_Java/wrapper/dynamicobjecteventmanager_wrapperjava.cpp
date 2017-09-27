/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/dynamicmodellibrary/dynamicobjecteventmanager.h"
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
			class JCDynamicObjectEventManagerProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager
			{
			 private:
				EarthView::World::Core::ev_string m_addDynamicObjectEvent_CDynamicObjectEvent_callback;
				EarthView::World::Core::ev_string m_removeDynamicObjectEvent_CDynamicObjectEvent_callback;
				EarthView::World::Core::ev_string m_beforeTimePosition_Real_ev_bool_callback;
				EarthView::World::Core::ev_string m_afterTimePosition_Real_ev_bool_callback;
				EarthView::World::Core::ev_string m_resetEvent_void_callback;
				EarthView::World::Core::ev_string m_setTimePosition_Real_callback;
				EarthView::World::Core::ev_string m_getName_void_callback;
				EarthView::World::Core::ev_string m_setName_EVString_callback;
			public:
				JCDynamicObjectEventManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicObjectEventManager(pList)
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
				void register_addDynamicObjectEvent_CDynamicObjectEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addDynamicObjectEvent_CDynamicObjectEvent_callback = __method;
				}
				void register_removeDynamicObjectEvent_CDynamicObjectEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeDynamicObjectEvent_CDynamicObjectEvent_callback = __method;
				}
				void register_beforeTimePosition_Real_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_beforeTimePosition_Real_ev_bool_callback = __method;
				}
				void register_afterTimePosition_Real_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_afterTimePosition_Real_ev_bool_callback = __method;
				}
				void register_resetEvent_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resetEvent_void_callback = __method;
				}
				void register_setTimePosition_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setTimePosition_Real_callback = __method;
				}
				void register_getName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getName_void_callback = __method;
				}
				void register_setName_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setName_EVString_callback = __method;
				}
				virtual void addDynamicObjectEvent(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ref_dynamicObjectEvent)
				{
					if (this->_gRef != NULL && this->m_addDynamicObjectEvent_CDynamicObjectEvent_callback != "" && this->isCustomExtend())
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
						jlong ref_dynamicObjectEvent_j = (jlong) ref_dynamicObjectEvent;
						jmethodID __method = __gr->getMethod("addDynamicObjectEvent_CDynamicObjectEvent_callback");
						__env->CallVoidMethod(__obj, __method , ref_dynamicObjectEvent_j);
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
						return this->CDynamicObjectEventManager::addDynamicObjectEvent(ref_dynamicObjectEvent);
					}
				}
				virtual void removeDynamicObjectEvent(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* dynamicObjectEvent)
				{
					if (this->_gRef != NULL && this->m_removeDynamicObjectEvent_CDynamicObjectEvent_callback != "" && this->isCustomExtend())
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
						jlong dynamicObjectEvent_j = (jlong) dynamicObjectEvent;
						jmethodID __method = __gr->getMethod("removeDynamicObjectEvent_CDynamicObjectEvent_callback");
						__env->CallVoidMethod(__obj, __method , dynamicObjectEvent_j);
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
						return this->CDynamicObjectEventManager::removeDynamicObjectEvent(dynamicObjectEvent);
					}
				}
				virtual void beforeTimePosition(Real time, ev_bool isLooping)
				{
					if (this->_gRef != NULL && this->m_beforeTimePosition_Real_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean isLooping_j = (jboolean) isLooping;
						jmethodID __method = __gr->getMethod("beforeTimePosition_Real_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , time_j, isLooping_j);
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
						return this->CDynamicObjectEventManager::beforeTimePosition(time, isLooping);
					}
				}
				virtual void afterTimePosition(Real time, ev_bool isEnd)
				{
					if (this->_gRef != NULL && this->m_afterTimePosition_Real_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean isEnd_j = (jboolean) isEnd;
						jmethodID __method = __gr->getMethod("afterTimePosition_Real_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , time_j, isEnd_j);
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
						return this->CDynamicObjectEventManager::afterTimePosition(time, isEnd);
					}
				}
				virtual void resetEvent()
				{
					if (this->_gRef != NULL && this->m_resetEvent_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("resetEvent_void_callback");
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
						return this->CDynamicObjectEventManager::resetEvent();
					}
				}
				virtual void setTimePosition(Real time)
				{
					if (this->_gRef != NULL && this->m_setTimePosition_Real_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("setTimePosition_Real_callback");
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
						return this->CDynamicObjectEventManager::setTimePosition(time);
					}
				}
				virtual const EVString& getName() const
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
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EVString &__values1 = *(const EVString*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDynamicObjectEventManager::getName();
					}
				}
				virtual void setName(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_setName_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("setName_EVString_callback");
						__env->CallVoidMethod(__obj, __method , name_j);
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
						return this->CDynamicObjectEventManager::setName(name);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDynamicObjectEventManagerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_addDynamicObjectEvent_1CDynamicObjectEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_dynamicObjectEvent_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *ref_dynamicObjectEvent = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) ref_dynamicObjectEvent_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicObjectEventManagerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::addDynamicObjectEvent(ref_dynamicObjectEvent);
				}
				else
				{
					pObjectX->addDynamicObjectEvent(ref_dynamicObjectEvent);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_register_1addDynamicObjectEvent_1CDynamicObjectEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicObjectEventManagerProxy *pObjectX = (JCDynamicObjectEventManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addDynamicObjectEvent_CDynamicObjectEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addDynamicObjectEvent_CDynamicObjectEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_addDynamicObjectEvent_1CDynamicObjectEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_dynamicObjectEvent_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *ref_dynamicObjectEvent = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) ref_dynamicObjectEvent_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::addDynamicObjectEvent(ref_dynamicObjectEvent);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_removeDynamicObjectEvent_1CDynamicObjectEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dynamicObjectEvent_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *dynamicObjectEvent = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) dynamicObjectEvent_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicObjectEventManagerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::removeDynamicObjectEvent(dynamicObjectEvent);
				}
				else
				{
					pObjectX->removeDynamicObjectEvent(dynamicObjectEvent);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_register_1removeDynamicObjectEvent_1CDynamicObjectEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicObjectEventManagerProxy *pObjectX = (JCDynamicObjectEventManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeDynamicObjectEvent_CDynamicObjectEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeDynamicObjectEvent_CDynamicObjectEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_removeDynamicObjectEvent_1CDynamicObjectEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dynamicObjectEvent_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *dynamicObjectEvent = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) dynamicObjectEvent_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::removeDynamicObjectEvent(dynamicObjectEvent);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_beforeTimePosition_1Real_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j, jboolean isLooping_j)
			{
				Real time = (Real) time_j;
				ev_bool isLooping = (ev_bool) isLooping_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicObjectEventManagerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::beforeTimePosition(time, isLooping);
				}
				else
				{
					pObjectX->beforeTimePosition(time, isLooping);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_register_1beforeTimePosition_1Real_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicObjectEventManagerProxy *pObjectX = (JCDynamicObjectEventManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_beforeTimePosition_Real_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"beforeTimePosition_Real_ev_bool_callback", "(DZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_beforeTimePosition_1Real_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j, jboolean isLooping_j)
			{
				Real time = (Real) time_j;
				ev_bool isLooping = (ev_bool) isLooping_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::beforeTimePosition(time, isLooping);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_afterTimePosition_1Real_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j, jboolean isEnd_j)
			{
				Real time = (Real) time_j;
				ev_bool isEnd = (ev_bool) isEnd_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicObjectEventManagerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::afterTimePosition(time, isEnd);
				}
				else
				{
					pObjectX->afterTimePosition(time, isEnd);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_register_1afterTimePosition_1Real_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicObjectEventManagerProxy *pObjectX = (JCDynamicObjectEventManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_afterTimePosition_Real_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"afterTimePosition_Real_ev_bool_callback", "(DZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_afterTimePosition_1Real_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j, jboolean isEnd_j)
			{
				Real time = (Real) time_j;
				ev_bool isEnd = (ev_bool) isEnd_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::afterTimePosition(time, isEnd);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_resetEvent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicObjectEventManagerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::resetEvent();
				}
				else
				{
					pObjectX->resetEvent();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_register_1resetEvent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicObjectEventManagerProxy *pObjectX = (JCDynamicObjectEventManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resetEvent_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resetEvent_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_resetEvent_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::resetEvent();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_setTimePosition_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
			{
				Real time = (Real) time_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicObjectEventManagerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::setTimePosition(time);
				}
				else
				{
					pObjectX->setTimePosition(time);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_register_1setTimePosition_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicObjectEventManagerProxy *pObjectX = (JCDynamicObjectEventManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setTimePosition_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setTimePosition_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_setTimePosition_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
			{
				Real time = (Real) time_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::setTimePosition(time);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicObjectEventManagerProxy))
				{
					const EVString& __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::getName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EVString& __values1 = pObjectX->getName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicObjectEventManagerProxy *pObjectX = (JCDynamicObjectEventManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getName_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjXXXX;
				const EVString& __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicObjectEventManagerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::setName(name);
				}
				else
				{
					pObjectX->setName(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_register_1setName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicObjectEventManagerProxy *pObjectX = (JCDynamicObjectEventManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setName_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setName_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEventManager_setName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::setName(name);
			}
		}
	}
}
