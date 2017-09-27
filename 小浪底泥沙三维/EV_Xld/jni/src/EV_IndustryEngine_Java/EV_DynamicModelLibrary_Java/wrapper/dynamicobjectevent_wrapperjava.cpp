/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/dynamicmodellibrary/dynamicobjectevent.h"
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
			class JCDynamicObjectEventProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent
			{
			 private:
				EarthView::World::Core::ev_string m_beforeEvent_CDynamicModelObjectManager_Real_ev_bool_callback;
				EarthView::World::Core::ev_string m_afterEvent_CDynamicModelObjectManager_Real_ev_bool_callback;
				EarthView::World::Core::ev_string m_resetEvent_CDynamicModelObjectManager_callback;
				EarthView::World::Core::ev_string m_setTimePosition_Real_callback;
				EarthView::World::Core::ev_string m_getTimePosition_void_callback;
				EarthView::World::Core::ev_string m_setIsFired_ev_bool_callback;
				EarthView::World::Core::ev_string m_getIsFired_void_callback;
				EarthView::World::Core::ev_string m_canFired_Real_callback;
				EarthView::World::Core::ev_string m_getName_void_callback;
				EarthView::World::Core::ev_string m_setName_EVString_callback;
			public:
				JCDynamicObjectEventProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicObjectEvent(pList)
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
				void register_beforeEvent_CDynamicModelObjectManager_Real_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_beforeEvent_CDynamicModelObjectManager_Real_ev_bool_callback = __method;
				}
				void register_afterEvent_CDynamicModelObjectManager_Real_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_afterEvent_CDynamicModelObjectManager_Real_ev_bool_callback = __method;
				}
				void register_resetEvent_CDynamicModelObjectManager_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resetEvent_CDynamicModelObjectManager_callback = __method;
				}
				void register_setTimePosition_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setTimePosition_Real_callback = __method;
				}
				void register_getTimePosition_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTimePosition_void_callback = __method;
				}
				void register_setIsFired_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setIsFired_ev_bool_callback = __method;
				}
				void register_getIsFired_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getIsFired_void_callback = __method;
				}
				void register_canFired_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_canFired_Real_callback = __method;
				}
				void register_getName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getName_void_callback = __method;
				}
				void register_setName_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setName_EVString_callback = __method;
				}
				virtual void beforeEvent(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager, Real curAnimationTime, ev_bool islooping)
				{
					if (this->_gRef != NULL && this->m_beforeEvent_CDynamicModelObjectManager_Real_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong manager_j = (jlong) manager;
						jdouble curAnimationTime_j = (jdouble) curAnimationTime;
						jboolean islooping_j = (jboolean) islooping;
						jmethodID __method = __gr->getMethod("beforeEvent_CDynamicModelObjectManager_Real_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , manager_j, curAnimationTime_j, islooping_j);
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
						return this->CDynamicObjectEvent::beforeEvent(manager, curAnimationTime, islooping);
					}
				}
				virtual void afterEvent(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager, Real curAnimationTime, ev_bool isEnd)
				{
					if (this->_gRef != NULL && this->m_afterEvent_CDynamicModelObjectManager_Real_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong manager_j = (jlong) manager;
						jdouble curAnimationTime_j = (jdouble) curAnimationTime;
						jboolean isEnd_j = (jboolean) isEnd;
						jmethodID __method = __gr->getMethod("afterEvent_CDynamicModelObjectManager_Real_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , manager_j, curAnimationTime_j, isEnd_j);
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
						return this->CDynamicObjectEvent::afterEvent(manager, curAnimationTime, isEnd);
					}
				}
				virtual void resetEvent(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager)
				{
					if (this->_gRef != NULL && this->m_resetEvent_CDynamicModelObjectManager_callback != "" && this->isCustomExtend())
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
						jlong manager_j = (jlong) manager;
						jmethodID __method = __gr->getMethod("resetEvent_CDynamicModelObjectManager_callback");
						__env->CallVoidMethod(__obj, __method , manager_j);
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
						return this->CDynamicObjectEvent::resetEvent(manager);
					}
				}
				virtual void setTimePosition(Real timePosition)
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
						jdouble timePosition_j = (jdouble) timePosition;
						jmethodID __method = __gr->getMethod("setTimePosition_Real_callback");
						__env->CallVoidMethod(__obj, __method , timePosition_j);
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
						return this->CDynamicObjectEvent::setTimePosition(timePosition);
					}
				}
				virtual Real getTimePosition() const
				{
					if (this->_gRef != NULL && this->m_getTimePosition_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getTimePosition_void_callback");
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
						return this->CDynamicObjectEvent::getTimePosition();
					}
				}
				virtual void setIsFired(ev_bool fired)
				{
					if (this->_gRef != NULL && this->m_setIsFired_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean fired_j = (jboolean) fired;
						jmethodID __method = __gr->getMethod("setIsFired_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , fired_j);
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
						return this->CDynamicObjectEvent::setIsFired(fired);
					}
				}
				virtual ev_bool getIsFired() const
				{
					if (this->_gRef != NULL && this->m_getIsFired_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getIsFired_void_callback");
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
						return this->CDynamicObjectEvent::getIsFired();
					}
				}
				virtual ev_bool canFired(Real timePosition)
				{
					if (this->_gRef != NULL && this->m_canFired_Real_callback != "" && this->isCustomExtend())
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
						jdouble timePosition_j = (jdouble) timePosition;
						jmethodID __method = __gr->getMethod("canFired_Real_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , timePosition_j);
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
						return this->CDynamicObjectEvent::canFired(timePosition);
					}
				}
				virtual EarthView::World::Core::ev_string getName() const
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
						EarthView::World::Core::ev_string __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EarthView::World::Core::ev_string __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CDynamicObjectEvent::getName();
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
						return this->CDynamicObjectEvent::setName(name);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDynamicObjectEventProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_beforeEvent_1CDynamicModelObjectManager_1Real_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong manager_j, jdouble curAnimationTime_j, jboolean islooping_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *manager = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) manager_j;
				Real curAnimationTime = (Real) curAnimationTime_j;
				ev_bool islooping = (ev_bool) islooping_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicObjectEventProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::beforeEvent(manager, curAnimationTime, islooping);
				}
				else
				{
					pObjectX->beforeEvent(manager, curAnimationTime, islooping);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_register_1beforeEvent_1CDynamicModelObjectManager_1Real_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicObjectEventProxy *pObjectX = (JCDynamicObjectEventProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_beforeEvent_CDynamicModelObjectManager_Real_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"beforeEvent_CDynamicModelObjectManager_Real_ev_bool_callback", "(JDZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_beforeEvent_1CDynamicModelObjectManager_1Real_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong manager_j, jdouble curAnimationTime_j, jboolean islooping_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *manager = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) manager_j;
				Real curAnimationTime = (Real) curAnimationTime_j;
				ev_bool islooping = (ev_bool) islooping_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::beforeEvent(manager, curAnimationTime, islooping);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_afterEvent_1CDynamicModelObjectManager_1Real_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong manager_j, jdouble curAnimationTime_j, jboolean isEnd_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *manager = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) manager_j;
				Real curAnimationTime = (Real) curAnimationTime_j;
				ev_bool isEnd = (ev_bool) isEnd_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicObjectEventProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::afterEvent(manager, curAnimationTime, isEnd);
				}
				else
				{
					pObjectX->afterEvent(manager, curAnimationTime, isEnd);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_register_1afterEvent_1CDynamicModelObjectManager_1Real_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicObjectEventProxy *pObjectX = (JCDynamicObjectEventProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_afterEvent_CDynamicModelObjectManager_Real_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"afterEvent_CDynamicModelObjectManager_Real_ev_bool_callback", "(JDZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_afterEvent_1CDynamicModelObjectManager_1Real_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong manager_j, jdouble curAnimationTime_j, jboolean isEnd_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *manager = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) manager_j;
				Real curAnimationTime = (Real) curAnimationTime_j;
				ev_bool isEnd = (ev_bool) isEnd_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::afterEvent(manager, curAnimationTime, isEnd);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_resetEvent_1CDynamicModelObjectManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong manager_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *manager = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) manager_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicObjectEventProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::resetEvent(manager);
				}
				else
				{
					pObjectX->resetEvent(manager);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_register_1resetEvent_1CDynamicModelObjectManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicObjectEventProxy *pObjectX = (JCDynamicObjectEventProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resetEvent_CDynamicModelObjectManager_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resetEvent_CDynamicModelObjectManager_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_resetEvent_1CDynamicModelObjectManager_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong manager_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *manager = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) manager_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::resetEvent(manager);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_setTimePosition_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePosition_j)
			{
				Real timePosition = (Real) timePosition_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicObjectEventProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::setTimePosition(timePosition);
				}
				else
				{
					pObjectX->setTimePosition(timePosition);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_register_1setTimePosition_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicObjectEventProxy *pObjectX = (JCDynamicObjectEventProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_setTimePosition_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePosition_j)
			{
				Real timePosition = (Real) timePosition_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::setTimePosition(timePosition);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_getTimePosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicObjectEventProxy))
				{
					Real __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::getTimePosition();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getTimePosition();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_register_1getTimePosition_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicObjectEventProxy *pObjectX = (JCDynamicObjectEventProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTimePosition_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTimePosition_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_getTimePosition_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::getTimePosition();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_setIsFired_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean fired_j)
			{
				ev_bool fired = (ev_bool) fired_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicObjectEventProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::setIsFired(fired);
				}
				else
				{
					pObjectX->setIsFired(fired);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_register_1setIsFired_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicObjectEventProxy *pObjectX = (JCDynamicObjectEventProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setIsFired_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setIsFired_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_setIsFired_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean fired_j)
			{
				ev_bool fired = (ev_bool) fired_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::setIsFired(fired);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_getIsFired_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicObjectEventProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::getIsFired();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getIsFired();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_register_1getIsFired_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicObjectEventProxy *pObjectX = (JCDynamicObjectEventProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getIsFired_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getIsFired_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_getIsFired_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::getIsFired();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_canFired_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePosition_j)
			{
				Real timePosition = (Real) timePosition_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicObjectEventProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::canFired(timePosition);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->canFired(timePosition);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_register_1canFired_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicObjectEventProxy *pObjectX = (JCDynamicObjectEventProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_canFired_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"canFired_Real_callback", "(D)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_canFired_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePosition_j)
			{
				Real timePosition = (Real) timePosition_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::canFired(timePosition);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicObjectEventProxy))
				{
					EarthView::World::Core::ev_string __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::ev_string __values1 = pObjectX->getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicObjectEventProxy *pObjectX = (JCDynamicObjectEventProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjXXXX;
				EarthView::World::Core::ev_string __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::getName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicObjectEventProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::setName(name);
				}
				else
				{
					pObjectX->setName(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_register_1setName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicObjectEventProxy *pObjectX = (JCDynamicObjectEventProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicObjectEvent_setName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::setName(name);
			}
		}
	}
}
