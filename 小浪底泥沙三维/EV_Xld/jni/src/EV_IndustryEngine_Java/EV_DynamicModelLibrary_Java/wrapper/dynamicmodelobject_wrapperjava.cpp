/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/dynamicmodellibrary/dynamicmodelobject.h"
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
			class JCDynamicModelObjectResourceListenerProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener
			{
			 private:
				EarthView::World::Core::ev_string m_afterAttached_CDynamicModelObject_callback;
				EarthView::World::Core::ev_string m_beforeAttached_CDynamicModelObject_callback;
				EarthView::World::Core::ev_string m_attachStateHasChanged_CDynamicModelObject_ev_bool_callback;
				EarthView::World::Core::ev_string m_getName_void_callback;
				EarthView::World::Core::ev_string m_setName_EVString_callback;
			public:
				JCDynamicModelObjectResourceListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicModelObjectResourceListener(pList)
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
				void register_afterAttached_CDynamicModelObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_afterAttached_CDynamicModelObject_callback = __method;
				}
				void register_beforeAttached_CDynamicModelObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_beforeAttached_CDynamicModelObject_callback = __method;
				}
				void register_attachStateHasChanged_CDynamicModelObject_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_attachStateHasChanged_CDynamicModelObject_ev_bool_callback = __method;
				}
				void register_getName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getName_void_callback = __method;
				}
				void register_setName_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setName_EVString_callback = __method;
				}
				virtual void afterAttached(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicObject)
				{
					if (this->_gRef != NULL && this->m_afterAttached_CDynamicModelObject_callback != "" && this->isCustomExtend())
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
						jlong dynamicObject_j = (jlong) dynamicObject;
						jmethodID __method = __gr->getMethod("afterAttached_CDynamicModelObject_callback");
						__env->CallVoidMethod(__obj, __method , dynamicObject_j);
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
						return this->CDynamicModelObjectResourceListener::afterAttached(dynamicObject);
					}
				}
				virtual void beforeAttached(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicObject)
				{
					if (this->_gRef != NULL && this->m_beforeAttached_CDynamicModelObject_callback != "" && this->isCustomExtend())
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
						jlong dynamicObject_j = (jlong) dynamicObject;
						jmethodID __method = __gr->getMethod("beforeAttached_CDynamicModelObject_callback");
						__env->CallVoidMethod(__obj, __method , dynamicObject_j);
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
						return this->CDynamicModelObjectResourceListener::beforeAttached(dynamicObject);
					}
				}
				virtual void attachStateHasChanged(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicObject, ev_bool atttched)
				{
					if (this->_gRef != NULL && this->m_attachStateHasChanged_CDynamicModelObject_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong dynamicObject_j = (jlong) dynamicObject;
						jboolean atttched_j = (jboolean) atttched;
						jmethodID __method = __gr->getMethod("attachStateHasChanged_CDynamicModelObject_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , dynamicObject_j, atttched_j);
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
						return this->CDynamicModelObjectResourceListener::attachStateHasChanged(dynamicObject, atttched);
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
						return this->CDynamicModelObjectResourceListener::getName();
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
						return this->CDynamicModelObjectResourceListener::setName(name);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDynamicModelObjectResourceListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectResourceListener_afterAttached_1CDynamicModelObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dynamicObject_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *dynamicObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) dynamicObject_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectResourceListenerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener::afterAttached(dynamicObject);
				}
				else
				{
					pObjectX->afterAttached(dynamicObject);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectResourceListener_register_1afterAttached_1CDynamicModelObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectResourceListenerProxy *pObjectX = (JCDynamicModelObjectResourceListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_afterAttached_CDynamicModelObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"afterAttached_CDynamicModelObject_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectResourceListener_afterAttached_1CDynamicModelObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dynamicObject_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *dynamicObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) dynamicObject_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener::afterAttached(dynamicObject);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectResourceListener_beforeAttached_1CDynamicModelObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dynamicObject_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *dynamicObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) dynamicObject_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectResourceListenerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener::beforeAttached(dynamicObject);
				}
				else
				{
					pObjectX->beforeAttached(dynamicObject);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectResourceListener_register_1beforeAttached_1CDynamicModelObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectResourceListenerProxy *pObjectX = (JCDynamicModelObjectResourceListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_beforeAttached_CDynamicModelObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"beforeAttached_CDynamicModelObject_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectResourceListener_beforeAttached_1CDynamicModelObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dynamicObject_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *dynamicObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) dynamicObject_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener::beforeAttached(dynamicObject);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectResourceListener_attachStateHasChanged_1CDynamicModelObject_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dynamicObject_j, jboolean atttched_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *dynamicObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) dynamicObject_j;
				ev_bool atttched = (ev_bool) atttched_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectResourceListenerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener::attachStateHasChanged(dynamicObject, atttched);
				}
				else
				{
					pObjectX->attachStateHasChanged(dynamicObject, atttched);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectResourceListener_register_1attachStateHasChanged_1CDynamicModelObject_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectResourceListenerProxy *pObjectX = (JCDynamicModelObjectResourceListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_attachStateHasChanged_CDynamicModelObject_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"attachStateHasChanged_CDynamicModelObject_ev_bool_callback", "(JZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectResourceListener_attachStateHasChanged_1CDynamicModelObject_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dynamicObject_j, jboolean atttched_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *dynamicObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) dynamicObject_j;
				ev_bool atttched = (ev_bool) atttched_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener::attachStateHasChanged(dynamicObject, atttched);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectResourceListener_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectResourceListenerProxy))
				{
					EVString __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener::getName();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectResourceListener_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectResourceListenerProxy *pObjectX = (JCDynamicModelObjectResourceListenerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectResourceListener_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener::getName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectResourceListener_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectResourceListenerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener::setName(name);
				}
				else
				{
					pObjectX->setName(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectResourceListener_register_1setName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectResourceListenerProxy *pObjectX = (JCDynamicModelObjectResourceListenerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectResourceListener_setName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener::setName(name);
			}
			class JCDynamicGlobeNodeTrackAnimationListenerProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener
			{
			 private:
				EarthView::World::Core::ev_string m_animationBeforeTimePositon_EVString_ev_real64_ev_bool_callback;
				EarthView::World::Core::ev_string m_animationAfterTimePositon_EVString_ev_real64_ev_bool_callback;
				EarthView::World::Core::ev_string m_animationBeforeEnd_EVString_ev_real64_callback;
				EarthView::World::Core::ev_string m_animationAfterEnd_EVString_ev_real64_callback;
			public:
				JCDynamicGlobeNodeTrackAnimationListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicGlobeNodeTrackAnimationListener(pList)
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
				void register_animationBeforeTimePositon_EVString_ev_real64_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_animationBeforeTimePositon_EVString_ev_real64_ev_bool_callback = __method;
				}
				void register_animationAfterTimePositon_EVString_ev_real64_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_animationAfterTimePositon_EVString_ev_real64_ev_bool_callback = __method;
				}
				void register_animationBeforeEnd_EVString_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_animationBeforeEnd_EVString_ev_real64_callback = __method;
				}
				void register_animationAfterEnd_EVString_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_animationAfterEnd_EVString_ev_real64_callback = __method;
				}
				virtual void animationBeforeTimePositon(const EVString& dynamicModelObjectName, const ev_real64& timePosition, const ev_bool& isLooping)
				{
					if (this->_gRef != NULL && this->m_animationBeforeTimePositon_EVString_ev_real64_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring dynamicModelObjectName_wch = dynamicModelObjectName;
						jstring dynamicModelObjectName_j = __env->NewString((const jchar*)dynamicModelObjectName_wch.getString(), dynamicModelObjectName_wch.size());
						jdouble timePosition_j = (jdouble) timePosition;
						jboolean isLooping_j = (jboolean) isLooping;
						jmethodID __method = __gr->getMethod("animationBeforeTimePositon_EVString_ev_real64_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , dynamicModelObjectName_j, timePosition_j, isLooping_j);
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
						return this->CDynamicGlobeNodeTrackAnimationListener::animationBeforeTimePositon(dynamicModelObjectName, timePosition, isLooping);
					}
				}
				virtual void animationAfterTimePositon(const EVString& dynamicModelObjectName, const ev_real64& timePosition, const ev_bool& isLooping)
				{
					if (this->_gRef != NULL && this->m_animationAfterTimePositon_EVString_ev_real64_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring dynamicModelObjectName_wch = dynamicModelObjectName;
						jstring dynamicModelObjectName_j = __env->NewString((const jchar*)dynamicModelObjectName_wch.getString(), dynamicModelObjectName_wch.size());
						jdouble timePosition_j = (jdouble) timePosition;
						jboolean isLooping_j = (jboolean) isLooping;
						jmethodID __method = __gr->getMethod("animationAfterTimePositon_EVString_ev_real64_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , dynamicModelObjectName_j, timePosition_j, isLooping_j);
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
						return this->CDynamicGlobeNodeTrackAnimationListener::animationAfterTimePositon(dynamicModelObjectName, timePosition, isLooping);
					}
				}
				virtual void animationBeforeEnd(const EVString& dynamicModelObjectName, const ev_real64& timePosition)
				{
					if (this->_gRef != NULL && this->m_animationBeforeEnd_EVString_ev_real64_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring dynamicModelObjectName_wch = dynamicModelObjectName;
						jstring dynamicModelObjectName_j = __env->NewString((const jchar*)dynamicModelObjectName_wch.getString(), dynamicModelObjectName_wch.size());
						jdouble timePosition_j = (jdouble) timePosition;
						jmethodID __method = __gr->getMethod("animationBeforeEnd_EVString_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , dynamicModelObjectName_j, timePosition_j);
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
						return this->CDynamicGlobeNodeTrackAnimationListener::animationBeforeEnd(dynamicModelObjectName, timePosition);
					}
				}
				virtual void animationAfterEnd(const EVString& dynamicModelObjectName, const ev_real64& timePosition)
				{
					if (this->_gRef != NULL && this->m_animationAfterEnd_EVString_ev_real64_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring dynamicModelObjectName_wch = dynamicModelObjectName;
						jstring dynamicModelObjectName_j = __env->NewString((const jchar*)dynamicModelObjectName_wch.getString(), dynamicModelObjectName_wch.size());
						jdouble timePosition_j = (jdouble) timePosition;
						jmethodID __method = __gr->getMethod("animationAfterEnd_EVString_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , dynamicModelObjectName_j, timePosition_j);
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
						return this->CDynamicGlobeNodeTrackAnimationListener::animationAfterEnd(dynamicModelObjectName, timePosition);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDynamicGlobeNodeTrackAnimationListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_1EVString_1ev_1real64_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dynamicModelObjectName_j, jdouble timePosition_j, jboolean isLooping_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dynamicModelObjectName_ch = (const ev_char*)__env->GetStringUTFChars(dynamicModelObjectName_j,JNI_FALSE);
				const EVString dynamicModelObjectName = dynamicModelObjectName_ch;
				__env->ReleaseStringUTFChars(dynamicModelObjectName_j, (const char *)dynamicModelObjectName_ch);
				#else
				const ev_wchar* dynamicModelObjectName_ch = (const ev_wchar*)__env->GetStringChars(dynamicModelObjectName_j,JNI_FALSE);
				const EVString dynamicModelObjectName = dynamicModelObjectName_ch;
				__env->ReleaseStringChars(dynamicModelObjectName_j, (const jchar *)dynamicModelObjectName_ch);
				#endif
				const ev_real64 timePosition = (const ev_real64) timePosition_j;
				const ev_bool isLooping = (const ev_bool) isLooping_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationListenerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener::animationBeforeTimePositon(dynamicModelObjectName, timePosition, isLooping);
				}
				else
				{
					pObjectX->animationBeforeTimePositon(dynamicModelObjectName, timePosition, isLooping);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimationListener_register_1animationBeforeTimePositon_1EVString_1ev_1real64_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationListenerProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_animationBeforeTimePositon_EVString_ev_real64_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"animationBeforeTimePositon_EVString_ev_real64_ev_bool_callback", "(Ljava/lang/String;DZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_1EVString_1ev_1real64_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dynamicModelObjectName_j, jdouble timePosition_j, jboolean isLooping_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dynamicModelObjectName_ch = (const ev_char*)__env->GetStringUTFChars(dynamicModelObjectName_j,JNI_FALSE);
				const EVString dynamicModelObjectName = dynamicModelObjectName_ch;
				__env->ReleaseStringUTFChars(dynamicModelObjectName_j, (const char *)dynamicModelObjectName_ch);
				#else
				const ev_wchar* dynamicModelObjectName_ch = (const ev_wchar*)__env->GetStringChars(dynamicModelObjectName_j,JNI_FALSE);
				const EVString dynamicModelObjectName = dynamicModelObjectName_ch;
				__env->ReleaseStringChars(dynamicModelObjectName_j, (const jchar *)dynamicModelObjectName_ch);
				#endif
				const ev_real64 timePosition = (const ev_real64) timePosition_j;
				const ev_bool isLooping = (const ev_bool) isLooping_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener::animationBeforeTimePositon(dynamicModelObjectName, timePosition, isLooping);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_1EVString_1ev_1real64_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dynamicModelObjectName_j, jdouble timePosition_j, jboolean isLooping_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dynamicModelObjectName_ch = (const ev_char*)__env->GetStringUTFChars(dynamicModelObjectName_j,JNI_FALSE);
				const EVString dynamicModelObjectName = dynamicModelObjectName_ch;
				__env->ReleaseStringUTFChars(dynamicModelObjectName_j, (const char *)dynamicModelObjectName_ch);
				#else
				const ev_wchar* dynamicModelObjectName_ch = (const ev_wchar*)__env->GetStringChars(dynamicModelObjectName_j,JNI_FALSE);
				const EVString dynamicModelObjectName = dynamicModelObjectName_ch;
				__env->ReleaseStringChars(dynamicModelObjectName_j, (const jchar *)dynamicModelObjectName_ch);
				#endif
				const ev_real64 timePosition = (const ev_real64) timePosition_j;
				const ev_bool isLooping = (const ev_bool) isLooping_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationListenerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener::animationAfterTimePositon(dynamicModelObjectName, timePosition, isLooping);
				}
				else
				{
					pObjectX->animationAfterTimePositon(dynamicModelObjectName, timePosition, isLooping);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimationListener_register_1animationAfterTimePositon_1EVString_1ev_1real64_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationListenerProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_animationAfterTimePositon_EVString_ev_real64_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"animationAfterTimePositon_EVString_ev_real64_ev_bool_callback", "(Ljava/lang/String;DZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_1EVString_1ev_1real64_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dynamicModelObjectName_j, jdouble timePosition_j, jboolean isLooping_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dynamicModelObjectName_ch = (const ev_char*)__env->GetStringUTFChars(dynamicModelObjectName_j,JNI_FALSE);
				const EVString dynamicModelObjectName = dynamicModelObjectName_ch;
				__env->ReleaseStringUTFChars(dynamicModelObjectName_j, (const char *)dynamicModelObjectName_ch);
				#else
				const ev_wchar* dynamicModelObjectName_ch = (const ev_wchar*)__env->GetStringChars(dynamicModelObjectName_j,JNI_FALSE);
				const EVString dynamicModelObjectName = dynamicModelObjectName_ch;
				__env->ReleaseStringChars(dynamicModelObjectName_j, (const jchar *)dynamicModelObjectName_ch);
				#endif
				const ev_real64 timePosition = (const ev_real64) timePosition_j;
				const ev_bool isLooping = (const ev_bool) isLooping_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener::animationAfterTimePositon(dynamicModelObjectName, timePosition, isLooping);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_1EVString_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dynamicModelObjectName_j, jdouble timePosition_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dynamicModelObjectName_ch = (const ev_char*)__env->GetStringUTFChars(dynamicModelObjectName_j,JNI_FALSE);
				const EVString dynamicModelObjectName = dynamicModelObjectName_ch;
				__env->ReleaseStringUTFChars(dynamicModelObjectName_j, (const char *)dynamicModelObjectName_ch);
				#else
				const ev_wchar* dynamicModelObjectName_ch = (const ev_wchar*)__env->GetStringChars(dynamicModelObjectName_j,JNI_FALSE);
				const EVString dynamicModelObjectName = dynamicModelObjectName_ch;
				__env->ReleaseStringChars(dynamicModelObjectName_j, (const jchar *)dynamicModelObjectName_ch);
				#endif
				const ev_real64 timePosition = (const ev_real64) timePosition_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationListenerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener::animationBeforeEnd(dynamicModelObjectName, timePosition);
				}
				else
				{
					pObjectX->animationBeforeEnd(dynamicModelObjectName, timePosition);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimationListener_register_1animationBeforeEnd_1EVString_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationListenerProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_animationBeforeEnd_EVString_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"animationBeforeEnd_EVString_ev_real64_callback", "(Ljava/lang/String;D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_1EVString_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dynamicModelObjectName_j, jdouble timePosition_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dynamicModelObjectName_ch = (const ev_char*)__env->GetStringUTFChars(dynamicModelObjectName_j,JNI_FALSE);
				const EVString dynamicModelObjectName = dynamicModelObjectName_ch;
				__env->ReleaseStringUTFChars(dynamicModelObjectName_j, (const char *)dynamicModelObjectName_ch);
				#else
				const ev_wchar* dynamicModelObjectName_ch = (const ev_wchar*)__env->GetStringChars(dynamicModelObjectName_j,JNI_FALSE);
				const EVString dynamicModelObjectName = dynamicModelObjectName_ch;
				__env->ReleaseStringChars(dynamicModelObjectName_j, (const jchar *)dynamicModelObjectName_ch);
				#endif
				const ev_real64 timePosition = (const ev_real64) timePosition_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener::animationBeforeEnd(dynamicModelObjectName, timePosition);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimationListener_animationAfterEnd_1EVString_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dynamicModelObjectName_j, jdouble timePosition_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dynamicModelObjectName_ch = (const ev_char*)__env->GetStringUTFChars(dynamicModelObjectName_j,JNI_FALSE);
				const EVString dynamicModelObjectName = dynamicModelObjectName_ch;
				__env->ReleaseStringUTFChars(dynamicModelObjectName_j, (const char *)dynamicModelObjectName_ch);
				#else
				const ev_wchar* dynamicModelObjectName_ch = (const ev_wchar*)__env->GetStringChars(dynamicModelObjectName_j,JNI_FALSE);
				const EVString dynamicModelObjectName = dynamicModelObjectName_ch;
				__env->ReleaseStringChars(dynamicModelObjectName_j, (const jchar *)dynamicModelObjectName_ch);
				#endif
				const ev_real64 timePosition = (const ev_real64) timePosition_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicGlobeNodeTrackAnimationListenerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener::animationAfterEnd(dynamicModelObjectName, timePosition);
				}
				else
				{
					pObjectX->animationAfterEnd(dynamicModelObjectName, timePosition);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimationListener_register_1animationAfterEnd_1EVString_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicGlobeNodeTrackAnimationListenerProxy *pObjectX = (JCDynamicGlobeNodeTrackAnimationListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_animationAfterEnd_EVString_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"animationAfterEnd_EVString_ev_real64_callback", "(Ljava/lang/String;D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicGlobeNodeTrackAnimationListener_animationAfterEnd_1EVString_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dynamicModelObjectName_j, jdouble timePosition_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dynamicModelObjectName_ch = (const ev_char*)__env->GetStringUTFChars(dynamicModelObjectName_j,JNI_FALSE);
				const EVString dynamicModelObjectName = dynamicModelObjectName_ch;
				__env->ReleaseStringUTFChars(dynamicModelObjectName_j, (const char *)dynamicModelObjectName_ch);
				#else
				const ev_wchar* dynamicModelObjectName_ch = (const ev_wchar*)__env->GetStringChars(dynamicModelObjectName_j,JNI_FALSE);
				const EVString dynamicModelObjectName = dynamicModelObjectName_ch;
				__env->ReleaseStringChars(dynamicModelObjectName_j, (const jchar *)dynamicModelObjectName_ch);
				#endif
				const ev_real64 timePosition = (const ev_real64) timePosition_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener::animationAfterEnd(dynamicModelObjectName, timePosition);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParam_get_1Time_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->Time);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParam_set_1Time_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*)pObjXXXX;
				pObjectX->Time = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParam_get_1Position_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->Position);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParam_set_1Position_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*)pObjXXXX;
				pObjectX->Position = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParam_get_1Yaw_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->Yaw);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParam_set_1Yaw_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*)pObjXXXX;
				pObjectX->Yaw = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParam_get_1Pitch_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->Pitch);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParam_set_1Pitch_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*)pObjXXXX;
				pObjectX->Pitch = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParam_get_1Roll_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->Roll);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParam_set_1Roll_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*)pObjXXXX;
				pObjectX->Roll = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParam_get_1Scale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->Scale);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParam_set_1Scale_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*)pObjXXXX;
				pObjectX->Scale = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParamSet_push_1back_1CCameraAnimationParam(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam &t = *(EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*) t_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParamSet_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParamSet_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParamSet_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParamSet_insert_1ev_1uint32_1CCameraAnimationParam(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam &t = *(EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*) t_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParamSet_insert_1ev_1uint32_1CCameraAnimationParamSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong other_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet other = *(EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) other_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjXXXX;
				pObjectX->insert(pos, other);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParamSet_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParamSet_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParamSet_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet& pObjectX = *(EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParamSet_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParamSet_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParamSet_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParamSet_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_CameraAnimationParamSet_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_GlobeControlPointSet_push_1back_1CGlobeControlPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Spatial3D::CGlobeControlPoint &t = *(EarthView::World::Spatial3D::CGlobeControlPoint*) t_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_GlobeControlPointSet_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_GlobeControlPointSet_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjXXXX;
				EarthView::World::Spatial3D::CGlobeControlPoint& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_GlobeControlPointSet_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjXXXX;
				EarthView::World::Spatial3D::CGlobeControlPoint& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_GlobeControlPointSet_insert_1ev_1uint32_1CGlobeControlPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Spatial3D::CGlobeControlPoint &t = *(EarthView::World::Spatial3D::CGlobeControlPoint*) t_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_GlobeControlPointSet_insert_1ev_1uint32_1CGlobeControlPointSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong other_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet other = *(EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) other_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjXXXX;
				pObjectX->insert(pos, other);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_GlobeControlPointSet_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_GlobeControlPointSet_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_GlobeControlPointSet_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet& pObjectX = *(EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Spatial3D::CGlobeControlPoint& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_GlobeControlPointSet_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjXXXX;
				EarthView::World::Spatial3D::CGlobeControlPoint& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_GlobeControlPointSet_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_GlobeControlPointSet_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_GlobeControlPointSet_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_GlobeControlPointSet_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjXXXX;
				pObjectX->clear();
			}
			class JCDynamicModelObjectProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject
			{
			 private:
				EarthView::World::Core::ev_string m_addResourceListener_CDynamicModelObjectResourceListener_callback;
				EarthView::World::Core::ev_string m_removeResourceListener_EVString_callback;
				EarthView::World::Core::ev_string m_setGlobeNodeTrackAltitudeMode_AltitudeMode_callback;
				EarthView::World::Core::ev_string m_getGlobeNodeTrackAltitudeMode_void_callback;
				EarthView::World::Core::ev_string m_removeAllTrackTrailPoint_void_callback;
				EarthView::World::Core::ev_string m_addTrackTrailPoint_CCoordinate_callback;
				EarthView::World::Core::ev_string m_getCurrentNodeScale_void_callback;
				EarthView::World::Core::ev_string m_getCurrentNodePosition_void_callback;
				EarthView::World::Core::ev_string m_getCurrentNodeQuaternion_void_callback;
				EarthView::World::Core::ev_string m_setGlobeAnimationsetEnabled_ev_bool_callback;
				EarthView::World::Core::ev_string m_getGlobeAnimationsetEnabled_void_callback;
				EarthView::World::Core::ev_string m_setGlobeAnimationsetArouseFrequency_ev_real64_callback;
				EarthView::World::Core::ev_string m_getGlobeAnimationsetArouseFrequency_void_callback;
				EarthView::World::Core::ev_string m_forceArouseGlobeAnimation_void_callback;
				EarthView::World::Core::ev_string m_setModelEnable_ev_bool_callback;
				EarthView::World::Core::ev_string m_getModelEnable_void_callback;
				EarthView::World::Core::ev_string m_setParticleEnable_ev_bool_callback;
				EarthView::World::Core::ev_string m_getParticleEnable_void_callback;
				EarthView::World::Core::ev_string m_setRibbonTrailEnable_ev_bool_callback;
				EarthView::World::Core::ev_string m_getRibbonTrailEnable_void_callback;
				EarthView::World::Core::ev_string m_setScutcheonEnable_ev_bool_callback;
				EarthView::World::Core::ev_string m_getScutcheonEnable_void_callback;
				EarthView::World::Core::ev_string m_setTrackTrailEnable_ev_bool_callback;
				EarthView::World::Core::ev_string m_getTrackTrailEnable_void_callback;
				EarthView::World::Core::ev_string m_getPixelModeEnable_void_callback;
				EarthView::World::Core::ev_string m_setPixelModeEnable_ev_bool_callback;
				EarthView::World::Core::ev_string m_getPixelModeScaleRatio_void_callback;
				EarthView::World::Core::ev_string m_setPixelModeScaleRatio_Real_callback;
				EarthView::World::Core::ev_string m_setCameraNodeTrackOnLineMode_ev_bool_callback;
				EarthView::World::Core::ev_string m_getCameraNodeTrackOnLineMode_void_callback;
			public:
				JCDynamicModelObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicModelObject(pList)
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
				void register_addResourceListener_CDynamicModelObjectResourceListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addResourceListener_CDynamicModelObjectResourceListener_callback = __method;
				}
				void register_removeResourceListener_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeResourceListener_EVString_callback = __method;
				}
				void register_setGlobeNodeTrackAltitudeMode_AltitudeMode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setGlobeNodeTrackAltitudeMode_AltitudeMode_callback = __method;
				}
				void register_getGlobeNodeTrackAltitudeMode_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getGlobeNodeTrackAltitudeMode_void_callback = __method;
				}
				void register_removeAllTrackTrailPoint_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAllTrackTrailPoint_void_callback = __method;
				}
				void register_addTrackTrailPoint_CCoordinate_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addTrackTrailPoint_CCoordinate_callback = __method;
				}
				void register_getCurrentNodeScale_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCurrentNodeScale_void_callback = __method;
				}
				void register_getCurrentNodePosition_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCurrentNodePosition_void_callback = __method;
				}
				void register_getCurrentNodeQuaternion_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCurrentNodeQuaternion_void_callback = __method;
				}
				void register_setGlobeAnimationsetEnabled_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setGlobeAnimationsetEnabled_ev_bool_callback = __method;
				}
				void register_getGlobeAnimationsetEnabled_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getGlobeAnimationsetEnabled_void_callback = __method;
				}
				void register_setGlobeAnimationsetArouseFrequency_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setGlobeAnimationsetArouseFrequency_ev_real64_callback = __method;
				}
				void register_getGlobeAnimationsetArouseFrequency_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getGlobeAnimationsetArouseFrequency_void_callback = __method;
				}
				void register_forceArouseGlobeAnimation_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_forceArouseGlobeAnimation_void_callback = __method;
				}
				void register_setModelEnable_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setModelEnable_ev_bool_callback = __method;
				}
				void register_getModelEnable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getModelEnable_void_callback = __method;
				}
				void register_setParticleEnable_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParticleEnable_ev_bool_callback = __method;
				}
				void register_getParticleEnable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getParticleEnable_void_callback = __method;
				}
				void register_setRibbonTrailEnable_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setRibbonTrailEnable_ev_bool_callback = __method;
				}
				void register_getRibbonTrailEnable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRibbonTrailEnable_void_callback = __method;
				}
				void register_setScutcheonEnable_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setScutcheonEnable_ev_bool_callback = __method;
				}
				void register_getScutcheonEnable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getScutcheonEnable_void_callback = __method;
				}
				void register_setTrackTrailEnable_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setTrackTrailEnable_ev_bool_callback = __method;
				}
				void register_getTrackTrailEnable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTrackTrailEnable_void_callback = __method;
				}
				void register_getPixelModeEnable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPixelModeEnable_void_callback = __method;
				}
				void register_setPixelModeEnable_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPixelModeEnable_ev_bool_callback = __method;
				}
				void register_getPixelModeScaleRatio_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPixelModeScaleRatio_void_callback = __method;
				}
				void register_setPixelModeScaleRatio_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPixelModeScaleRatio_Real_callback = __method;
				}
				void register_setCameraNodeTrackOnLineMode_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setCameraNodeTrackOnLineMode_ev_bool_callback = __method;
				}
				void register_getCameraNodeTrackOnLineMode_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCameraNodeTrackOnLineMode_void_callback = __method;
				}
				virtual ev_bool addResourceListener(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener* ref_resourceListener)
				{
					if (this->_gRef != NULL && this->m_addResourceListener_CDynamicModelObjectResourceListener_callback != "" && this->isCustomExtend())
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
						jlong ref_resourceListener_j = (jlong) ref_resourceListener;
						jmethodID __method = __gr->getMethod("addResourceListener_CDynamicModelObjectResourceListener_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , ref_resourceListener_j);
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
						return this->CDynamicModelObject::addResourceListener(ref_resourceListener);
					}
				}
				virtual ev_bool removeResourceListener(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_removeResourceListener_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeResourceListener_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j);
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
						return this->CDynamicModelObject::removeResourceListener(name);
					}
				}
				virtual void setGlobeNodeTrackAltitudeMode(EarthView::World::Spatial3D::CFLyParam::AltitudeMode altitudeMode)
				{
					if (this->_gRef != NULL && this->m_setGlobeNodeTrackAltitudeMode_AltitudeMode_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("setGlobeNodeTrackAltitudeMode_AltitudeMode_callback");
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
						return this->CDynamicModelObject::setGlobeNodeTrackAltitudeMode(altitudeMode);
					}
				}
				virtual EarthView::World::Spatial3D::CFLyParam::AltitudeMode getGlobeNodeTrackAltitudeMode()
				{
					if (this->_gRef != NULL && this->m_getGlobeNodeTrackAltitudeMode_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getGlobeNodeTrackAltitudeMode_void_callback");
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
						return this->CDynamicModelObject::getGlobeNodeTrackAltitudeMode();
					}
				}
				virtual void removeAllTrackTrailPoint()
				{
					if (this->_gRef != NULL && this->m_removeAllTrackTrailPoint_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeAllTrackTrailPoint_void_callback");
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
						return this->CDynamicModelObject::removeAllTrackTrailPoint();
					}
				}
				virtual void addTrackTrailPoint(const EarthView::World::Spatial::Geometry::CCoordinate& point)
				{
					if (this->_gRef != NULL && this->m_addTrackTrailPoint_CCoordinate_callback != "" && this->isCustomExtend())
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
						jlong point_j = (jlong) &point;
						jmethodID __method = __gr->getMethod("addTrackTrailPoint_CCoordinate_callback");
						__env->CallVoidMethod(__obj, __method , point_j);
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
						return this->CDynamicModelObject::addTrackTrailPoint(point);
					}
				}
				virtual EarthView::World::Spatial::Math::CVector3 getCurrentNodeScale() const
				{
					if (this->_gRef != NULL && this->m_getCurrentNodeScale_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCurrentNodeScale_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CVector3 __values1 = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDynamicModelObject::getCurrentNodeScale();
					}
				}
				virtual EarthView::World::Spatial::Math::CVector3 getCurrentNodePosition() const
				{
					if (this->_gRef != NULL && this->m_getCurrentNodePosition_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCurrentNodePosition_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CVector3 __values1 = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDynamicModelObject::getCurrentNodePosition();
					}
				}
				virtual EarthView::World::Spatial::Math::CQuaternion getCurrentNodeQuaternion() const
				{
					if (this->_gRef != NULL && this->m_getCurrentNodeQuaternion_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCurrentNodeQuaternion_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CQuaternion __values1 = *(EarthView::World::Spatial::Math::CQuaternion*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDynamicModelObject::getCurrentNodeQuaternion();
					}
				}
				virtual void setGlobeAnimationsetEnabled(const ev_bool& enable)
				{
					if (this->_gRef != NULL && this->m_setGlobeAnimationsetEnabled_ev_bool_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("setGlobeAnimationsetEnabled_ev_bool_callback");
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
						return this->CDynamicModelObject::setGlobeAnimationsetEnabled(enable);
					}
				}
				virtual ev_bool getGlobeAnimationsetEnabled() const
				{
					if (this->_gRef != NULL && this->m_getGlobeAnimationsetEnabled_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getGlobeAnimationsetEnabled_void_callback");
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
						return this->CDynamicModelObject::getGlobeAnimationsetEnabled();
					}
				}
				virtual void setGlobeAnimationsetArouseFrequency(const ev_real64& frequency)
				{
					if (this->_gRef != NULL && this->m_setGlobeAnimationsetArouseFrequency_ev_real64_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("setGlobeAnimationsetArouseFrequency_ev_real64_callback");
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
						return this->CDynamicModelObject::setGlobeAnimationsetArouseFrequency(frequency);
					}
				}
				virtual ev_real64 getGlobeAnimationsetArouseFrequency() const
				{
					if (this->_gRef != NULL && this->m_getGlobeAnimationsetArouseFrequency_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getGlobeAnimationsetArouseFrequency_void_callback");
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
						return this->CDynamicModelObject::getGlobeAnimationsetArouseFrequency();
					}
				}
				virtual void forceArouseGlobeAnimation()
				{
					if (this->_gRef != NULL && this->m_forceArouseGlobeAnimation_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("forceArouseGlobeAnimation_void_callback");
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
						return this->CDynamicModelObject::forceArouseGlobeAnimation();
					}
				}
				virtual void setModelEnable(const ev_bool& enable)
				{
					if (this->_gRef != NULL && this->m_setModelEnable_ev_bool_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("setModelEnable_ev_bool_callback");
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
						return this->CDynamicModelObject::setModelEnable(enable);
					}
				}
				virtual ev_bool getModelEnable() const
				{
					if (this->_gRef != NULL && this->m_getModelEnable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getModelEnable_void_callback");
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
						return this->CDynamicModelObject::getModelEnable();
					}
				}
				virtual void setParticleEnable(const ev_bool& enable)
				{
					if (this->_gRef != NULL && this->m_setParticleEnable_ev_bool_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("setParticleEnable_ev_bool_callback");
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
						return this->CDynamicModelObject::setParticleEnable(enable);
					}
				}
				virtual ev_bool getParticleEnable() const
				{
					if (this->_gRef != NULL && this->m_getParticleEnable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getParticleEnable_void_callback");
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
						return this->CDynamicModelObject::getParticleEnable();
					}
				}
				virtual void setRibbonTrailEnable(const ev_bool& enable)
				{
					if (this->_gRef != NULL && this->m_setRibbonTrailEnable_ev_bool_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("setRibbonTrailEnable_ev_bool_callback");
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
						return this->CDynamicModelObject::setRibbonTrailEnable(enable);
					}
				}
				virtual ev_bool getRibbonTrailEnable() const
				{
					if (this->_gRef != NULL && this->m_getRibbonTrailEnable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getRibbonTrailEnable_void_callback");
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
						return this->CDynamicModelObject::getRibbonTrailEnable();
					}
				}
				virtual void setScutcheonEnable(const ev_bool& enable)
				{
					if (this->_gRef != NULL && this->m_setScutcheonEnable_ev_bool_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("setScutcheonEnable_ev_bool_callback");
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
						return this->CDynamicModelObject::setScutcheonEnable(enable);
					}
				}
				virtual ev_bool getScutcheonEnable() const
				{
					if (this->_gRef != NULL && this->m_getScutcheonEnable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getScutcheonEnable_void_callback");
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
						return this->CDynamicModelObject::getScutcheonEnable();
					}
				}
				virtual void setTrackTrailEnable(const ev_bool& enable)
				{
					if (this->_gRef != NULL && this->m_setTrackTrailEnable_ev_bool_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("setTrackTrailEnable_ev_bool_callback");
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
						return this->CDynamicModelObject::setTrackTrailEnable(enable);
					}
				}
				virtual ev_bool getTrackTrailEnable() const
				{
					if (this->_gRef != NULL && this->m_getTrackTrailEnable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getTrackTrailEnable_void_callback");
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
						return this->CDynamicModelObject::getTrackTrailEnable();
					}
				}
				virtual ev_bool getPixelModeEnable() const
				{
					if (this->_gRef != NULL && this->m_getPixelModeEnable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getPixelModeEnable_void_callback");
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
						return this->CDynamicModelObject::getPixelModeEnable();
					}
				}
				virtual void setPixelModeEnable(const ev_bool& enable)
				{
					if (this->_gRef != NULL && this->m_setPixelModeEnable_ev_bool_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("setPixelModeEnable_ev_bool_callback");
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
						return this->CDynamicModelObject::setPixelModeEnable(enable);
					}
				}
				virtual Real getPixelModeScaleRatio() const
				{
					if (this->_gRef != NULL && this->m_getPixelModeScaleRatio_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getPixelModeScaleRatio_void_callback");
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
						return this->CDynamicModelObject::getPixelModeScaleRatio();
					}
				}
				virtual void setPixelModeScaleRatio(const Real& scaleRatio)
				{
					if (this->_gRef != NULL && this->m_setPixelModeScaleRatio_Real_callback != "" && this->isCustomExtend())
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
						jdouble scaleRatio_j = (jdouble) scaleRatio;
						jmethodID __method = __gr->getMethod("setPixelModeScaleRatio_Real_callback");
						__env->CallVoidMethod(__obj, __method , scaleRatio_j);
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
						return this->CDynamicModelObject::setPixelModeScaleRatio(scaleRatio);
					}
				}
				virtual void setCameraNodeTrackOnLineMode(const ev_bool& enable)
				{
					if (this->_gRef != NULL && this->m_setCameraNodeTrackOnLineMode_ev_bool_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("setCameraNodeTrackOnLineMode_ev_bool_callback");
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
						return this->CDynamicModelObject::setCameraNodeTrackOnLineMode(enable);
					}
				}
				virtual ev_bool getCameraNodeTrackOnLineMode() const
				{
					if (this->_gRef != NULL && this->m_getCameraNodeTrackOnLineMode_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCameraNodeTrackOnLineMode_void_callback");
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
						return this->CDynamicModelObject::getCameraNodeTrackOnLineMode();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDynamicModelObjectProxy);
			class JCDynamicAnimationListenerProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener
			{
			 private:
				EarthView::World::Core::ev_string m_setAltitudeMode_AltitudeMode_callback;
				EarthView::World::Core::ev_string m_getAltitudeMode_void_callback;
				EarthView::World::Core::ev_string m_getRadius_CSphereTransformKeyFrame_callback;
				EarthView::World::Core::ev_string m_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_callback;
				EarthView::World::Core::ev_string m_getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_callback;
				EarthView::World::Core::ev_string m_getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback;
			public:
				JCDynamicAnimationListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicAnimationListener(pList)
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
				void register_setAltitudeMode_AltitudeMode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAltitudeMode_AltitudeMode_callback = __method;
				}
				void register_getAltitudeMode_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAltitudeMode_void_callback = __method;
				}
				void register_getRadius_CSphereTransformKeyFrame_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRadius_CSphereTransformKeyFrame_callback = __method;
				}
				void register_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
				}
				void register_getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_callback = __method;
				}
				void register_getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback = __method;
				}
				virtual ev_real64 getRadius(EarthView::World::Graphic::CSphereTransformKeyFrame* kf)
				{
					if (this->_gRef != NULL && this->m_getRadius_CSphereTransformKeyFrame_callback != "" && this->isCustomExtend())
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
						jlong kf_j = (jlong) kf;
						jmethodID __method = __gr->getMethod("getRadius_CSphereTransformKeyFrame_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , kf_j);
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
						return this->CDynamicAnimationListener::getRadius(kf);
					}
				}
				virtual ev_real64 getHeading(ev_real64 latA, ev_real64 lonA, ev_real64 latB, ev_real64 lonB)
				{
					if (this->_gRef != NULL && this->m_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
						jdouble latA_j = (jdouble) latA;
						jdouble lonA_j = (jdouble) lonA;
						jdouble latB_j = (jdouble) latB;
						jdouble lonB_j = (jdouble) lonB;
						jmethodID __method = __gr->getMethod("getHeading_ev_real64_ev_real64_ev_real64_ev_real64_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , latA_j, lonA_j, latB_j, lonB_j);
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
						return this->CDynamicAnimationListener::getHeading(latA, lonA, latB, lonB);
					}
				}
				virtual void getEuler(const EarthView::World::Spatial::Math::CDegree& yawA, const EarthView::World::Spatial::Math::CDegree& pitchA, const EarthView::World::Spatial::Math::CDegree& bankA, const EarthView::World::Spatial::Math::CDegree& yawB, const EarthView::World::Spatial::Math::CDegree& pitchB, const EarthView::World::Spatial::Math::CDegree& bankB, ev_real64 timeRatio, EarthView::World::Spatial::Math::CDegree& yaw, EarthView::World::Spatial::Math::CDegree& pitch, EarthView::World::Spatial::Math::CDegree& bank)
				{
					if (this->_gRef != NULL && this->m_getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_callback != "" && this->isCustomExtend())
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
						jlong yawA_j = (jlong) &yawA;
						jlong pitchA_j = (jlong) &pitchA;
						jlong bankA_j = (jlong) &bankA;
						jlong yawB_j = (jlong) &yawB;
						jlong pitchB_j = (jlong) &pitchB;
						jlong bankB_j = (jlong) &bankB;
						jdouble timeRatio_j = (jdouble) timeRatio;
						jlong yaw_j = (jlong) &yaw;
						jlong pitch_j = (jlong) &pitch;
						jlong bank_j = (jlong) &bank;
						jmethodID __method = __gr->getMethod("getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_callback");
						__env->CallVoidMethod(__obj, __method , yawA_j, pitchA_j, bankA_j, yawB_j, pitchB_j, bankB_j, timeRatio_j, yaw_j, pitch_j, bank_j);
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
						return this->CDynamicAnimationListener::getEuler(yawA, pitchA, bankA, yawB, pitchB, bankB, timeRatio, yaw, pitch, bank);
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
						return this->CDynamicAnimationListener::setAltitudeMode(altitudeMode);
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
						return this->CDynamicAnimationListener::getAltitudeMode();
					}
				}
				virtual ev_bool getInterpolatedKeyFrame(const EarthView::World::Graphic::CAnimationTrack* t, const EarthView::World::Graphic::CTimeIndex& timeIndex, EarthView::World::Graphic::CKeyFrame* kf)
				{
					if (this->_gRef != NULL && this->m_getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback != "" && this->isCustomExtend())
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
						jlong t_j = (jlong) t;
						jlong timeIndex_j = (jlong) &timeIndex;
						jlong kf_j = (jlong) kf;
						jmethodID __method = __gr->getMethod("getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , t_j, timeIndex_j, kf_j);
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
						return this->CDynamicAnimationListener::getInterpolatedKeyFrame(t, timeIndex, kf);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDynamicAnimationListenerProxy);
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_00024DynamicAnimationListener_getRadius_1CSphereTransformKeyFrame(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kf_j)
			{
				EarthView::World::Graphic::CSphereTransformKeyFrame *kf = (EarthView::World::Graphic::CSphereTransformKeyFrame*) kf_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicAnimationListenerProxy))
				{
					ev_real64 __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener::getRadius(kf);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					ev_real64 __values1 = pObjectX->getRadius(kf);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_00024DynamicAnimationListener_register_1getRadius_1CSphereTransformKeyFrame(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicAnimationListenerProxy *pObjectX = (JCDynamicAnimationListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRadius_CSphereTransformKeyFrame_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRadius_CSphereTransformKeyFrame_callback", "(J)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_00024DynamicAnimationListener_getRadius_1CSphereTransformKeyFrame_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kf_j)
			{
				EarthView::World::Graphic::CSphereTransformKeyFrame *kf = (EarthView::World::Graphic::CSphereTransformKeyFrame*) kf_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjXXXX;
				ev_real64 __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener::getRadius(kf);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_00024DynamicAnimationListener_getHeading_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latA_j, jdouble lonA_j, jdouble latB_j, jdouble lonB_j)
			{
				ev_real64 latA = (ev_real64) latA_j;
				ev_real64 lonA = (ev_real64) lonA_j;
				ev_real64 latB = (ev_real64) latB_j;
				ev_real64 lonB = (ev_real64) lonB_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicAnimationListenerProxy))
				{
					ev_real64 __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener::getHeading(latA, lonA, latB, lonB);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					ev_real64 __values1 = pObjectX->getHeading(latA, lonA, latB, lonB);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_00024DynamicAnimationListener_register_1getHeading_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicAnimationListenerProxy *pObjectX = (JCDynamicAnimationListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getHeading_ev_real64_ev_real64_ev_real64_ev_real64_callback", "(DDDD)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_00024DynamicAnimationListener_getHeading_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latA_j, jdouble lonA_j, jdouble latB_j, jdouble lonB_j)
			{
				ev_real64 latA = (ev_real64) latA_j;
				ev_real64 lonA = (ev_real64) lonA_j;
				ev_real64 latB = (ev_real64) latB_j;
				ev_real64 lonB = (ev_real64) lonB_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjXXXX;
				ev_real64 __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener::getHeading(latA, lonA, latB, lonB);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_00024DynamicAnimationListener_getEuler_1CDegree_1CDegree_1CDegree_1CDegree_1CDegree_1CDegree_1ev_1real64_1CDegree_1CDegree_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong yawA_j, jlong pitchA_j, jlong bankA_j, jlong yawB_j, jlong pitchB_j, jlong bankB_j, jdouble timeRatio_j, jlong yaw_j, jlong pitch_j, jlong bank_j)
			{
				const EarthView::World::Spatial::Math::CDegree &yawA = *(EarthView::World::Spatial::Math::CDegree*) yawA_j;
				const EarthView::World::Spatial::Math::CDegree &pitchA = *(EarthView::World::Spatial::Math::CDegree*) pitchA_j;
				const EarthView::World::Spatial::Math::CDegree &bankA = *(EarthView::World::Spatial::Math::CDegree*) bankA_j;
				const EarthView::World::Spatial::Math::CDegree &yawB = *(EarthView::World::Spatial::Math::CDegree*) yawB_j;
				const EarthView::World::Spatial::Math::CDegree &pitchB = *(EarthView::World::Spatial::Math::CDegree*) pitchB_j;
				const EarthView::World::Spatial::Math::CDegree &bankB = *(EarthView::World::Spatial::Math::CDegree*) bankB_j;
				ev_real64 timeRatio = (ev_real64) timeRatio_j;
				EarthView::World::Spatial::Math::CDegree &yaw = *(EarthView::World::Spatial::Math::CDegree*) yaw_j;
				EarthView::World::Spatial::Math::CDegree &pitch = *(EarthView::World::Spatial::Math::CDegree*) pitch_j;
				EarthView::World::Spatial::Math::CDegree &bank = *(EarthView::World::Spatial::Math::CDegree*) bank_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicAnimationListenerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener::getEuler(yawA, pitchA, bankA, yawB, pitchB, bankB, timeRatio, yaw, pitch, bank);
				}
				else
				{
					pObjectX->getEuler(yawA, pitchA, bankA, yawB, pitchB, bankB, timeRatio, yaw, pitch, bank);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_00024DynamicAnimationListener_register_1getEuler_1CDegree_1CDegree_1CDegree_1CDegree_1CDegree_1CDegree_1ev_1real64_1CDegree_1CDegree_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicAnimationListenerProxy *pObjectX = (JCDynamicAnimationListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_callback", "(JJJJJJDJJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_00024DynamicAnimationListener_getEuler_1CDegree_1CDegree_1CDegree_1CDegree_1CDegree_1CDegree_1ev_1real64_1CDegree_1CDegree_1CDegree_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong yawA_j, jlong pitchA_j, jlong bankA_j, jlong yawB_j, jlong pitchB_j, jlong bankB_j, jdouble timeRatio_j, jlong yaw_j, jlong pitch_j, jlong bank_j)
			{
				const EarthView::World::Spatial::Math::CDegree &yawA = *(EarthView::World::Spatial::Math::CDegree*) yawA_j;
				const EarthView::World::Spatial::Math::CDegree &pitchA = *(EarthView::World::Spatial::Math::CDegree*) pitchA_j;
				const EarthView::World::Spatial::Math::CDegree &bankA = *(EarthView::World::Spatial::Math::CDegree*) bankA_j;
				const EarthView::World::Spatial::Math::CDegree &yawB = *(EarthView::World::Spatial::Math::CDegree*) yawB_j;
				const EarthView::World::Spatial::Math::CDegree &pitchB = *(EarthView::World::Spatial::Math::CDegree*) pitchB_j;
				const EarthView::World::Spatial::Math::CDegree &bankB = *(EarthView::World::Spatial::Math::CDegree*) bankB_j;
				ev_real64 timeRatio = (ev_real64) timeRatio_j;
				EarthView::World::Spatial::Math::CDegree &yaw = *(EarthView::World::Spatial::Math::CDegree*) yaw_j;
				EarthView::World::Spatial::Math::CDegree &pitch = *(EarthView::World::Spatial::Math::CDegree*) pitch_j;
				EarthView::World::Spatial::Math::CDegree &bank = *(EarthView::World::Spatial::Math::CDegree*) bank_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener::getEuler(yawA, pitchA, bankA, yawB, pitchB, bankB, timeRatio, yaw, pitch, bank);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_00024DynamicAnimationListener_setAltitudeMode_1AltitudeMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint altitudeMode_j)
			{
				EarthView::World::Spatial3D::CFLyParam::AltitudeMode altitudeMode = (EarthView::World::Spatial3D::CFLyParam::AltitudeMode) altitudeMode_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicAnimationListenerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener::setAltitudeMode(altitudeMode);
				}
				else
				{
					pObjectX->setAltitudeMode(altitudeMode);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_00024DynamicAnimationListener_register_1setAltitudeMode_1AltitudeMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicAnimationListenerProxy *pObjectX = (JCDynamicAnimationListenerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_00024DynamicAnimationListener_setAltitudeMode_1AltitudeMode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint altitudeMode_j)
			{
				EarthView::World::Spatial3D::CFLyParam::AltitudeMode altitudeMode = (EarthView::World::Spatial3D::CFLyParam::AltitudeMode) altitudeMode_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener::setAltitudeMode(altitudeMode);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_00024DynamicAnimationListener_getAltitudeMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicAnimationListenerProxy))
				{
					EarthView::World::Spatial3D::CFLyParam::AltitudeMode __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener::getAltitudeMode();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_00024DynamicAnimationListener_register_1getAltitudeMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicAnimationListenerProxy *pObjectX = (JCDynamicAnimationListenerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_00024DynamicAnimationListener_getAltitudeMode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjXXXX;
				EarthView::World::Spatial3D::CFLyParam::AltitudeMode __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener::getAltitudeMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_00024DynamicAnimationListener_register_1getInterpolatedKeyFrame_1CAnimationTrack_1CTimeIndex_1CKeyFrame(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicAnimationListenerProxy *pObjectX = (JCDynamicAnimationListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback", "(JJJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setIsLoading_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean loading_j)
			{
				ev_bool loading = (ev_bool) loading_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setIsLoading(loading);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_isLoading_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->isLoading();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_addResourceListener_1CDynamicModelObjectResourceListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_resourceListener_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener *ref_resourceListener = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) ref_resourceListener_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::addResourceListener(ref_resourceListener);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->addResourceListener(ref_resourceListener);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1addResourceListener_1CDynamicModelObjectResourceListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addResourceListener_CDynamicModelObjectResourceListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addResourceListener_CDynamicModelObjectResourceListener_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_addResourceListener_1CDynamicModelObjectResourceListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_resourceListener_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener *ref_resourceListener = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) ref_resourceListener_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::addResourceListener(ref_resourceListener);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_removeResourceListener_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::removeResourceListener(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->removeResourceListener(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1removeResourceListener_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeResourceListener_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeResourceListener_EVString_callback", "(Ljava/lang/String;)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_removeResourceListener_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::removeResourceListener(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				const EVString& __values1 = pObjectX->getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_createGlobeNodeTrackAnimation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->createGlobeNodeTrackAnimation(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setEnabledToGetHeading_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isEnable_j)
			{
				const ev_bool isEnable = (const ev_bool) isEnable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setEnabledToGetHeading(isEnable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getEnabledToGetHeading_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->getEnabledToGetHeading();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setFlySpeed_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble speed_j)
			{
				const ev_real64 speed = (const ev_real64) speed_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setFlySpeed(speed);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getFlySpeed_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getFlySpeed();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setInterpolate_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean interpolate_j)
			{
				const ev_bool interpolate = (const ev_bool) interpolate_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setInterpolate(interpolate);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getInterpolate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->getInterpolate();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setInterpolateStartPos_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble pos_j)
			{
				const ev_real64 pos = (const ev_real64) pos_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setInterpolateStartPos(pos);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getInterpolateStartPos_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getInterpolateStartPos();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setInterpolateSmoothFactor_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble smoothFactor_j)
			{
				const ev_real64 smoothFactor = (const ev_real64) smoothFactor_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setInterpolateSmoothFactor(smoothFactor);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getInterpolateSmoothFactor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getInterpolateSmoothFactor();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getGlobeAnimationLodStrategyItemEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->getGlobeAnimationLodStrategyItemEnable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setGlobeAnimationLodStrategyItemEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setGlobeAnimationLodStrategyItemEnable(enable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getModelLodStrategyItemEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->getModelLodStrategyItemEnable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setModelLodStrategyItemEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setModelLodStrategyItemEnable(enable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getScutcheonLodStrategyItemEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->getScutcheonLodStrategyItemEnable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setScutcheonLodStrategyItemEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setScutcheonLodStrategyItemEnable(enable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getRibbonTrailLodStrategyItemEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->getRibbonTrailLodStrategyItemEnable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setRibbonTrailLodStrategyItemEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setRibbonTrailLodStrategyItemEnable(enable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getParticleLodStrategyItemEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->getParticleLodStrategyItemEnable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setParticleLodStrategyItemEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setParticleLodStrategyItemEnable(enable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getTrackTrailLodStrategyItemEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->getTrackTrailLodStrategyItemEnable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setTrackTrailLodStrategyItemEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setTrackTrailLodStrategyItemEnable(enable);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setGlobeAnimationLodStrategyItemValue_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble minVisibleValue_j, jdouble maxVisibleValue_j)
			{
				const Real minVisibleValue = (const Real) minVisibleValue_j;
				const Real maxVisibleValue = (const Real) maxVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setGlobeAnimationLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getGlobeAnimationLodStrategyItemValue_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong minVisibleValue_j, jlong maxVisibleValue_j)
			{
				Real &minVisibleValue = *(Real*) minVisibleValue_j;
				Real &maxVisibleValue = *(Real*) maxVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->getGlobeAnimationLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getGlobeAnimationLodStrategyItemSquareValue_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong minVisibleValue_j, jlong maxVisibleValue_j)
			{
				Real &minVisibleValue = *(Real*) minVisibleValue_j;
				Real &maxVisibleValue = *(Real*) maxVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->getGlobeAnimationLodStrategyItemSquareValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setModelLodStrategyItemValue_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble minVisibleValue_j, jdouble maxVisibleValue_j)
			{
				const Real minVisibleValue = (const Real) minVisibleValue_j;
				const Real maxVisibleValue = (const Real) maxVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setModelLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getModelLodStrategyItemValue_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong minVisibleValue_j, jlong maxVisibleValue_j)
			{
				Real &minVisibleValue = *(Real*) minVisibleValue_j;
				Real &maxVisibleValue = *(Real*) maxVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->getModelLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getModelLodStrategyItemSquareValue_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong minVisibleValue_j, jlong maxVisibleValue_j)
			{
				Real &minVisibleValue = *(Real*) minVisibleValue_j;
				Real &maxVisibleValue = *(Real*) maxVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->getModelLodStrategyItemSquareValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setParticleLodStrategyItemValue_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble minVisibleValue_j, jdouble maxVisibleValue_j)
			{
				const Real minVisibleValue = (const Real) minVisibleValue_j;
				const Real maxVisibleValue = (const Real) maxVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setParticleLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getParticleLodStrategyItemValue_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong minVisibleValue_j, jlong maxVisibleValue_j)
			{
				Real &minVisibleValue = *(Real*) minVisibleValue_j;
				Real &maxVisibleValue = *(Real*) maxVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->getParticleLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getParticleLodStrategyItemSquareValue_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong minVisibleValue_j, jlong maxVisibleValue_j)
			{
				Real &minVisibleValue = *(Real*) minVisibleValue_j;
				Real &maxVisibleValue = *(Real*) maxVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->getParticleLodStrategyItemSquareValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setScutcheonLodStrategyItemValue_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble minVisibleValue_j, jdouble maxVisibleValue_j)
			{
				const Real minVisibleValue = (const Real) minVisibleValue_j;
				const Real maxVisibleValue = (const Real) maxVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setScutcheonLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getScutcheonLodStrategyItemValue_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong minVisibleValue_j, jlong maxVisibleValue_j)
			{
				Real &minVisibleValue = *(Real*) minVisibleValue_j;
				Real &maxVisibleValue = *(Real*) maxVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->getScutcheonLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getScutcheonLodStrategyItemSquareValue_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong minVisibleValue_j, jlong maxVisibleValue_j)
			{
				Real &minVisibleValue = *(Real*) minVisibleValue_j;
				Real &maxVisibleValue = *(Real*) maxVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->getScutcheonLodStrategyItemSquareValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setTrackTrailLodStrategyItemValue_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble minVisibleValue_j, jdouble maxVisibleValue_j)
			{
				const Real minVisibleValue = (const Real) minVisibleValue_j;
				const Real maxVisibleValue = (const Real) maxVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setTrackTrailLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getTrackTrailLodStrategyItemValue_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong minVisibleValue_j, jlong maxVisibleValue_j)
			{
				Real &minVisibleValue = *(Real*) minVisibleValue_j;
				Real &maxVisibleValue = *(Real*) maxVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->getTrackTrailLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getTrackTrailLodStrategyItemSquareValue_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong minVisibleValue_j, jlong maxVisibleValue_j)
			{
				Real &minVisibleValue = *(Real*) minVisibleValue_j;
				Real &maxVisibleValue = *(Real*) maxVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->getTrackTrailLodStrategyItemSquareValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setRibbonTrailLodStrategyItemValue_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble minVisibleValue_j, jdouble maxVisibleValue_j)
			{
				const Real minVisibleValue = (const Real) minVisibleValue_j;
				const Real maxVisibleValue = (const Real) maxVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setRibbonTrailLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getRibbonTrailLodStrategyItemValue_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong minVisibleValue_j, jlong maxVisibleValue_j)
			{
				Real &minVisibleValue = *(Real*) minVisibleValue_j;
				Real &maxVisibleValue = *(Real*) maxVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->getRibbonTrailLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getRibbonTrailLodStrategyItemSquareValue_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong minVisibleValue_j, jlong maxVisibleValue_j)
			{
				Real &minVisibleValue = *(Real*) minVisibleValue_j;
				Real &maxVisibleValue = *(Real*) maxVisibleValue_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->getRibbonTrailLodStrategyItemSquareValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_createCameraNodeTrackAnimation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->createCameraNodeTrackAnimation(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_startCameraNodeTrack_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->startCameraNodeTrack();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_startGlobeNodeTrack_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->startGlobeNodeTrack();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_canStartGlobeNodeTrack_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->canStartGlobeNodeTrack();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_canStartCameraNodeTrack_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->canStartCameraNodeTrack();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_addGlobeNodeTrackPoint_1CGlobeControlPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeControlPoint_j)
			{
				EarthView::World::Spatial3D::CGlobeControlPoint globeControlPoint = *(EarthView::World::Spatial3D::CGlobeControlPoint*) globeControlPoint_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->addGlobeNodeTrackPoint(globeControlPoint);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_addGlobeNodeTrackPoints_1CGlobeControlPointSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong points_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet &points = *(EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) points_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->addGlobeNodeTrackPoints(points);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_addGlobeNodeTrackPoints_1CGlobeControlPointMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong points_j)
			{
				EarthView::World::Spatial3D::CGlobeControlPointMap &points = *(EarthView::World::Spatial3D::CGlobeControlPointMap*) points_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->addGlobeNodeTrackPoints(points);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_clearAllGlobeNodeTrackPoints_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->clearAllGlobeNodeTrackPoints();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_refreshGlobeNodeTrackAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->refreshGlobeNodeTrackAnimation();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_addCameraNodeTrackPoint_1CCameraAnimationParam(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong point_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam point = *(EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*) point_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->addCameraNodeTrackPoint(point);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_addCameraNodeTrackPoints_1CCameraAnimationParamSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong points_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet &points = *(EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) points_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->addCameraNodeTrackPoints(points);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_clearAllCameraNodeTrackPoints_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->clearAllCameraNodeTrackPoints();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_refreshCameraNodeTrackAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->refreshCameraNodeTrackAnimation();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setModelScale_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scale_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setModelScale(scale);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getModelScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getModelScale();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setModelLocalOffsetVector_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offsetVector_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &offsetVector = *(EarthView::World::Spatial::Math::CVector3*) offsetVector_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setModelLocalOffsetVector(offsetVector);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getModelLocalOffsetVector_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getModelLocalOffsetVector();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setModelRotateDegree_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rotateDegree_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &rotateDegree = *(EarthView::World::Spatial::Math::CVector3*) rotateDegree_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setModelRotateDegree(rotateDegree);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getModelRotateDegree_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getModelRotateDegree();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setModelVisible_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean modelVisible_j)
			{
				bool modelVisible = (bool) modelVisible_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setModelVisible(modelVisible);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getModelVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				bool __values1 = pObjectX->getModelVisible();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setScutcheonVisible_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
			{
				bool visible = (bool) visible_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setScutcheonVisible(visible);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getScutcheonVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				bool __values1 = pObjectX->getScutcheonVisible();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setScutcheonLineColor_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lineColor_j)
			{
				const EarthView::World::Graphic::CColourValue &lineColor = *(EarthView::World::Graphic::CColourValue*) lineColor_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setScutcheonLineColor(lineColor);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getScutcheonLineColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Graphic::CColourValue __values1 = pObjectX->getScutcheonLineColor();
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setScutcheonLineLength_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble lineLength_j)
			{
				const Real lineLength = (const Real) lineLength_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setScutcheonLineLength(lineLength);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getScutcheonLineLength_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				Real __values1 = pObjectX->getScutcheonLineLength();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setScutcheonTextColor_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong textColor_j)
			{
				const EarthView::World::Graphic::CColourValue &textColor = *(EarthView::World::Graphic::CColourValue*) textColor_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setScutcheonTextColor(textColor);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getScutcheonTextColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Graphic::CColourValue __values1 = pObjectX->getScutcheonTextColor();
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setScutcheonCaption_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring caption_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* caption_ch = (const ev_char*)__env->GetStringUTFChars(caption_j,JNI_FALSE);
				const EVString caption = caption_ch;
				__env->ReleaseStringUTFChars(caption_j, (const char *)caption_ch);
				#else
				const ev_wchar* caption_ch = (const ev_wchar*)__env->GetStringChars(caption_j,JNI_FALSE);
				const EVString caption = caption_ch;
				__env->ReleaseStringChars(caption_j, (const jchar *)caption_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setScutcheonCaption(caption);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getScutcheonCaption_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EVString __values1 = pObjectX->getScutcheonCaption();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getScutcheonPosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getScutcheonPosition();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setScutcheonFontSize_1ev_1byte(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort size_j)
			{
				ev_byte size = (ev_byte) size_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setScutcheonFontSize(size);
			}
			extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getScutcheonFontSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_byte __values1 = pObjectX->getScutcheonFontSize();
				jshort __values1_j = (jshort) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setScutcheonFontName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fontName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* fontName_ch = (const ev_char*)__env->GetStringUTFChars(fontName_j,JNI_FALSE);
				EVString fontName = fontName_ch;
				__env->ReleaseStringUTFChars(fontName_j, (const char *)fontName_ch);
				#else
				const ev_wchar* fontName_ch = (const ev_wchar*)__env->GetStringChars(fontName_j,JNI_FALSE);
				EVString fontName = fontName_ch;
				__env->ReleaseStringChars(fontName_j, (const jchar *)fontName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setScutcheonFontName(fontName);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getScutcheonFontName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EVString __values1 = pObjectX->getScutcheonFontName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getScutcheon_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonText* __values1 = pObjectX->getScutcheon();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_lockModelObject_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->lockModelObject();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_unlockModelObject_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->unlockModelObject();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setLockDistance_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble distance_j)
			{
				const ev_real64 distance = (const ev_real64) distance_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setLockDistance(distance);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getLockDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getLockDistance();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setLockTilt_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tilt_j)
			{
				const EarthView::World::Spatial::Math::CDegree &tilt = *(EarthView::World::Spatial::Math::CDegree*) tilt_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setLockTilt(tilt);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getLockTilt_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Spatial::Math::CDegree __values1 = pObjectX->getLockTilt();
				EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setIsLockDistance_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean locked_j)
			{
				const ev_bool locked = (const ev_bool) locked_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setIsLockDistance(locked);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getIsLockDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->getIsLockDistance();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setIsLockTilt_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean locked_j)
			{
				const ev_bool locked = (const ev_bool) locked_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setIsLockTilt(locked);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getIsLockTilt_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->getIsLockTilt();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setIsLockHeading_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean locked_j)
			{
				const ev_bool locked = (const ev_bool) locked_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setIsLockHeading(locked);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getIsLockHeading_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->getIsLockHeading();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setModelHighLightColor_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
			{
				const EarthView::World::Graphic::CColourValue &color = *(EarthView::World::Graphic::CColourValue*) color_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setModelHighLightColor(color);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getModelHighLightColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Graphic::CColourValue __values1 = pObjectX->getModelHighLightColor();
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getModelIsHighLight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->getModelIsHighLight();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setModelIsHighLight_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean highLight_j)
			{
				const ev_bool highLight = (const ev_bool) highLight_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setModelIsHighLight(highLight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setSubEntityVisible_1ev_1int32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint subEntityIndex_j, jboolean visible_j)
			{
				ev_int32 subEntityIndex = (ev_int32) subEntityIndex_j;
				ev_bool visible = (ev_bool) visible_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setSubEntityVisible(subEntityIndex, visible);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getSubEntityVisible_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint subEntityIndex_j)
			{
				ev_int32 subEntityIndex = (ev_int32) subEntityIndex_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->getSubEntityVisible(subEntityIndex);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setSubEntityParticleVisible_1bool_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jstring subEntityName_j, jstring particleAliasName_j)
			{
				bool visible = (bool) visible_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* subEntityName_ch = (const ev_char*)__env->GetStringUTFChars(subEntityName_j,JNI_FALSE);
				const EVString subEntityName = subEntityName_ch;
				__env->ReleaseStringUTFChars(subEntityName_j, (const char *)subEntityName_ch);
				#else
				const ev_wchar* subEntityName_ch = (const ev_wchar*)__env->GetStringChars(subEntityName_j,JNI_FALSE);
				const EVString subEntityName = subEntityName_ch;
				__env->ReleaseStringChars(subEntityName_j, (const jchar *)subEntityName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* particleAliasName_ch = (const ev_char*)__env->GetStringUTFChars(particleAliasName_j,JNI_FALSE);
				const EVString particleAliasName = particleAliasName_ch;
				__env->ReleaseStringUTFChars(particleAliasName_j, (const char *)particleAliasName_ch);
				#else
				const ev_wchar* particleAliasName_ch = (const ev_wchar*)__env->GetStringChars(particleAliasName_j,JNI_FALSE);
				const EVString particleAliasName = particleAliasName_ch;
				__env->ReleaseStringChars(particleAliasName_j, (const jchar *)particleAliasName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setSubEntityParticleVisible(visible, subEntityName, particleAliasName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setSubEntityParticleVisible_1bool_1ev_1int32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jint subEntityIndex_j, jstring particleAliasName_j)
			{
				bool visible = (bool) visible_j;
				ev_int32 subEntityIndex = (ev_int32) subEntityIndex_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* particleAliasName_ch = (const ev_char*)__env->GetStringUTFChars(particleAliasName_j,JNI_FALSE);
				const EVString particleAliasName = particleAliasName_ch;
				__env->ReleaseStringUTFChars(particleAliasName_j, (const char *)particleAliasName_ch);
				#else
				const ev_wchar* particleAliasName_ch = (const ev_wchar*)__env->GetStringChars(particleAliasName_j,JNI_FALSE);
				const EVString particleAliasName = particleAliasName_ch;
				__env->ReleaseStringChars(particleAliasName_j, (const jchar *)particleAliasName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setSubEntityParticleVisible(visible, subEntityIndex, particleAliasName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setSubEntityAllParticleVisible_1bool_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jint subEntityIndex_j)
			{
				bool visible = (bool) visible_j;
				ev_int32 subEntityIndex = (ev_int32) subEntityIndex_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setSubEntityAllParticleVisible(visible, subEntityIndex);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setSubEntityAllParticleVisible_1bool_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jstring subEntityName_j)
			{
				bool visible = (bool) visible_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* subEntityName_ch = (const ev_char*)__env->GetStringUTFChars(subEntityName_j,JNI_FALSE);
				const EVString subEntityName = subEntityName_ch;
				__env->ReleaseStringUTFChars(subEntityName_j, (const char *)subEntityName_ch);
				#else
				const ev_wchar* subEntityName_ch = (const ev_wchar*)__env->GetStringChars(subEntityName_j,JNI_FALSE);
				const EVString subEntityName = subEntityName_ch;
				__env->ReleaseStringChars(subEntityName_j, (const jchar *)subEntityName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setSubEntityAllParticleVisible(visible, subEntityName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setParticleVisible_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
			{
				bool visible = (bool) visible_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setParticleVisible(visible);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getParticleVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				bool __values1 = pObjectX->getParticleVisible();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getSubEntityParticleVisible_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring subEntityName_j, jstring particleAliasName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* subEntityName_ch = (const ev_char*)__env->GetStringUTFChars(subEntityName_j,JNI_FALSE);
				const EVString subEntityName = subEntityName_ch;
				__env->ReleaseStringUTFChars(subEntityName_j, (const char *)subEntityName_ch);
				#else
				const ev_wchar* subEntityName_ch = (const ev_wchar*)__env->GetStringChars(subEntityName_j,JNI_FALSE);
				const EVString subEntityName = subEntityName_ch;
				__env->ReleaseStringChars(subEntityName_j, (const jchar *)subEntityName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* particleAliasName_ch = (const ev_char*)__env->GetStringUTFChars(particleAliasName_j,JNI_FALSE);
				const EVString particleAliasName = particleAliasName_ch;
				__env->ReleaseStringUTFChars(particleAliasName_j, (const char *)particleAliasName_ch);
				#else
				const ev_wchar* particleAliasName_ch = (const ev_wchar*)__env->GetStringChars(particleAliasName_j,JNI_FALSE);
				const EVString particleAliasName = particleAliasName_ch;
				__env->ReleaseStringChars(particleAliasName_j, (const jchar *)particleAliasName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				bool __values1 = pObjectX->getSubEntityParticleVisible(subEntityName, particleAliasName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getSubEntityParticleVisible_1ev_1int32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint subEntityIndex_j, jstring particleAliasName_j)
			{
				ev_int32 subEntityIndex = (ev_int32) subEntityIndex_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* particleAliasName_ch = (const ev_char*)__env->GetStringUTFChars(particleAliasName_j,JNI_FALSE);
				const EVString particleAliasName = particleAliasName_ch;
				__env->ReleaseStringUTFChars(particleAliasName_j, (const char *)particleAliasName_ch);
				#else
				const ev_wchar* particleAliasName_ch = (const ev_wchar*)__env->GetStringChars(particleAliasName_j,JNI_FALSE);
				const EVString particleAliasName = particleAliasName_ch;
				__env->ReleaseStringChars(particleAliasName_j, (const jchar *)particleAliasName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				bool __values1 = pObjectX->getSubEntityParticleVisible(subEntityIndex, particleAliasName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setSubEntityRibbonTrailVisible_1bool_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jstring subEntityName_j, jstring ribbonAliasName_j)
			{
				bool visible = (bool) visible_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* subEntityName_ch = (const ev_char*)__env->GetStringUTFChars(subEntityName_j,JNI_FALSE);
				const EVString subEntityName = subEntityName_ch;
				__env->ReleaseStringUTFChars(subEntityName_j, (const char *)subEntityName_ch);
				#else
				const ev_wchar* subEntityName_ch = (const ev_wchar*)__env->GetStringChars(subEntityName_j,JNI_FALSE);
				const EVString subEntityName = subEntityName_ch;
				__env->ReleaseStringChars(subEntityName_j, (const jchar *)subEntityName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* ribbonAliasName_ch = (const ev_char*)__env->GetStringUTFChars(ribbonAliasName_j,JNI_FALSE);
				const EVString ribbonAliasName = ribbonAliasName_ch;
				__env->ReleaseStringUTFChars(ribbonAliasName_j, (const char *)ribbonAliasName_ch);
				#else
				const ev_wchar* ribbonAliasName_ch = (const ev_wchar*)__env->GetStringChars(ribbonAliasName_j,JNI_FALSE);
				const EVString ribbonAliasName = ribbonAliasName_ch;
				__env->ReleaseStringChars(ribbonAliasName_j, (const jchar *)ribbonAliasName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setSubEntityRibbonTrailVisible(visible, subEntityName, ribbonAliasName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setSubEntityRibbonTrailVisible_1bool_1ev_1int32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jint subEntityIndex_j, jstring ribbonAliasName_j)
			{
				bool visible = (bool) visible_j;
				ev_int32 subEntityIndex = (ev_int32) subEntityIndex_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* ribbonAliasName_ch = (const ev_char*)__env->GetStringUTFChars(ribbonAliasName_j,JNI_FALSE);
				const EVString ribbonAliasName = ribbonAliasName_ch;
				__env->ReleaseStringUTFChars(ribbonAliasName_j, (const char *)ribbonAliasName_ch);
				#else
				const ev_wchar* ribbonAliasName_ch = (const ev_wchar*)__env->GetStringChars(ribbonAliasName_j,JNI_FALSE);
				const EVString ribbonAliasName = ribbonAliasName_ch;
				__env->ReleaseStringChars(ribbonAliasName_j, (const jchar *)ribbonAliasName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setSubEntityRibbonTrailVisible(visible, subEntityIndex, ribbonAliasName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setSubEntityAllRibbonTrailVisible_1bool_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jstring subEntityName_j)
			{
				bool visible = (bool) visible_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* subEntityName_ch = (const ev_char*)__env->GetStringUTFChars(subEntityName_j,JNI_FALSE);
				const EVString subEntityName = subEntityName_ch;
				__env->ReleaseStringUTFChars(subEntityName_j, (const char *)subEntityName_ch);
				#else
				const ev_wchar* subEntityName_ch = (const ev_wchar*)__env->GetStringChars(subEntityName_j,JNI_FALSE);
				const EVString subEntityName = subEntityName_ch;
				__env->ReleaseStringChars(subEntityName_j, (const jchar *)subEntityName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setSubEntityAllRibbonTrailVisible(visible, subEntityName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setSubEntityAllRibbonTrailVisible_1bool_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jint subEntityIndex_j)
			{
				bool visible = (bool) visible_j;
				ev_int32 subEntityIndex = (ev_int32) subEntityIndex_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setSubEntityAllRibbonTrailVisible(visible, subEntityIndex);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getSubEntityRibbonTrailVisible_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring subEntityName_j, jstring ribbonAliasName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* subEntityName_ch = (const ev_char*)__env->GetStringUTFChars(subEntityName_j,JNI_FALSE);
				const EVString subEntityName = subEntityName_ch;
				__env->ReleaseStringUTFChars(subEntityName_j, (const char *)subEntityName_ch);
				#else
				const ev_wchar* subEntityName_ch = (const ev_wchar*)__env->GetStringChars(subEntityName_j,JNI_FALSE);
				const EVString subEntityName = subEntityName_ch;
				__env->ReleaseStringChars(subEntityName_j, (const jchar *)subEntityName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* ribbonAliasName_ch = (const ev_char*)__env->GetStringUTFChars(ribbonAliasName_j,JNI_FALSE);
				const EVString ribbonAliasName = ribbonAliasName_ch;
				__env->ReleaseStringUTFChars(ribbonAliasName_j, (const char *)ribbonAliasName_ch);
				#else
				const ev_wchar* ribbonAliasName_ch = (const ev_wchar*)__env->GetStringChars(ribbonAliasName_j,JNI_FALSE);
				const EVString ribbonAliasName = ribbonAliasName_ch;
				__env->ReleaseStringChars(ribbonAliasName_j, (const jchar *)ribbonAliasName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				bool __values1 = pObjectX->getSubEntityRibbonTrailVisible(subEntityName, ribbonAliasName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getSubEntityRibbonTrailVisible_1ev_1int32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint subEntityIndex_j, jstring ribbonAliasName_j)
			{
				ev_int32 subEntityIndex = (ev_int32) subEntityIndex_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* ribbonAliasName_ch = (const ev_char*)__env->GetStringUTFChars(ribbonAliasName_j,JNI_FALSE);
				const EVString ribbonAliasName = ribbonAliasName_ch;
				__env->ReleaseStringUTFChars(ribbonAliasName_j, (const char *)ribbonAliasName_ch);
				#else
				const ev_wchar* ribbonAliasName_ch = (const ev_wchar*)__env->GetStringChars(ribbonAliasName_j,JNI_FALSE);
				const EVString ribbonAliasName = ribbonAliasName_ch;
				__env->ReleaseStringChars(ribbonAliasName_j, (const jchar *)ribbonAliasName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				bool __values1 = pObjectX->getSubEntityRibbonTrailVisible(subEntityIndex, ribbonAliasName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getSubEntityRibbonTrailObjectMap_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint subEntityIndex_j)
			{
				ev_int32 subEntityIndex = (ev_int32) subEntityIndex_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap __values1 = pObjectX->getSubEntityRibbonTrailObjectMap(subEntityIndex);
				EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap *returnvalues = new EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getSubEntityParticleObjectMap_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint subEntityIndex_j)
			{
				ev_int32 subEntityIndex = (ev_int32) subEntityIndex_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Spatial3D::ModelManager::EffectObjectMap __values1 = pObjectX->getSubEntityParticleObjectMap(subEntityIndex);
				EarthView::World::Spatial3D::ModelManager::EffectObjectMap *returnvalues = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getSubEntityRibbonTrailObjectMap_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring subEntityName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* subEntityName_ch = (const ev_char*)__env->GetStringUTFChars(subEntityName_j,JNI_FALSE);
				const EVString subEntityName = subEntityName_ch;
				__env->ReleaseStringUTFChars(subEntityName_j, (const char *)subEntityName_ch);
				#else
				const ev_wchar* subEntityName_ch = (const ev_wchar*)__env->GetStringChars(subEntityName_j,JNI_FALSE);
				const EVString subEntityName = subEntityName_ch;
				__env->ReleaseStringChars(subEntityName_j, (const jchar *)subEntityName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap __values1 = pObjectX->getSubEntityRibbonTrailObjectMap(subEntityName);
				EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap *returnvalues = new EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getSubEntityParticleObjectMap_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring subEntityName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* subEntityName_ch = (const ev_char*)__env->GetStringUTFChars(subEntityName_j,JNI_FALSE);
				const EVString subEntityName = subEntityName_ch;
				__env->ReleaseStringUTFChars(subEntityName_j, (const char *)subEntityName_ch);
				#else
				const ev_wchar* subEntityName_ch = (const ev_wchar*)__env->GetStringChars(subEntityName_j,JNI_FALSE);
				const EVString subEntityName = subEntityName_ch;
				__env->ReleaseStringChars(subEntityName_j, (const jchar *)subEntityName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Spatial3D::ModelManager::EffectObjectMap __values1 = pObjectX->getSubEntityParticleObjectMap(subEntityName);
				EarthView::World::Spatial3D::ModelManager::EffectObjectMap *returnvalues = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getSubEntityCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getSubEntityCount();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getBindedParticleSubEntityIndexVector_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Core::IntVector __values1 = pObjectX->getBindedParticleSubEntityIndexVector();
				EarthView::World::Core::IntVector *returnvalues = new EarthView::World::Core::IntVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getBindedRibbonTrailSubEntityIndexVector_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Core::IntVector __values1 = pObjectX->getBindedRibbonTrailSubEntityIndexVector();
				EarthView::World::Core::IntVector *returnvalues = new EarthView::World::Core::IntVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_stopGlobeNodeTrack_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->stopGlobeNodeTrack();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_pauseGlobeNodeTrack_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->pauseGlobeNodeTrack();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_stopCameraNodeTrack_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->stopCameraNodeTrack();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_pauseCameraNodeTrack_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->pauseCameraNodeTrack();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_continueCameraNodeTrack_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->continueCameraNodeTrack();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_continueGlobeNodeTrack_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->continueGlobeNodeTrack();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setGlobeNodeTrackCurrentFrameTime_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble curKeyFrameTime_j)
			{
				const ev_real64 curKeyFrameTime = (const ev_real64) curKeyFrameTime_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setGlobeNodeTrackCurrentFrameTime(curKeyFrameTime);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getGlobeNodeTrackCurrentFrameTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getGlobeNodeTrackCurrentFrameTime();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setCameraNodeTrackCurrentFrameTime_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble curKeyFrameTime_j)
			{
				const ev_real64 curKeyFrameTime = (const ev_real64) curKeyFrameTime_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setCameraNodeTrackCurrentFrameTime(curKeyFrameTime);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getCameraNodeTrackCurrentFrameTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getCameraNodeTrackCurrentFrameTime();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getCameraNodeTrackTimeRatio_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getCameraNodeTrackTimeRatio();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setCameraNodeTrackTimeRatio_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timeRatio_j)
			{
				const ev_real64 timeRatio = (const ev_real64) timeRatio_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setCameraNodeTrackTimeRatio(timeRatio);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getGlobeNodeTrackTimeRatio_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getGlobeNodeTrackTimeRatio();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setGlobeNodeTrackTimeRatio_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timeRatio_j)
			{
				const ev_real64 timeRatio = (const ev_real64) timeRatio_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setGlobeNodeTrackTimeRatio(timeRatio);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setGlobeNodeTrackIsLoop_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean loop_j)
			{
				const ev_bool loop = (const ev_bool) loop_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setGlobeNodeTrackIsLoop(loop);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getGlobeNodeTrackIsLoop_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->getGlobeNodeTrackIsLoop();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setGlobeNodeTrackAltitudeMode_1AltitudeMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint altitudeMode_j)
			{
				EarthView::World::Spatial3D::CFLyParam::AltitudeMode altitudeMode = (EarthView::World::Spatial3D::CFLyParam::AltitudeMode) altitudeMode_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setGlobeNodeTrackAltitudeMode(altitudeMode);
				}
				else
				{
					pObjectX->setGlobeNodeTrackAltitudeMode(altitudeMode);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1setGlobeNodeTrackAltitudeMode_1AltitudeMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setGlobeNodeTrackAltitudeMode_AltitudeMode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setGlobeNodeTrackAltitudeMode_AltitudeMode_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setGlobeNodeTrackAltitudeMode_1AltitudeMode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint altitudeMode_j)
			{
				EarthView::World::Spatial3D::CFLyParam::AltitudeMode altitudeMode = (EarthView::World::Spatial3D::CFLyParam::AltitudeMode) altitudeMode_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setGlobeNodeTrackAltitudeMode(altitudeMode);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getGlobeNodeTrackAltitudeMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					EarthView::World::Spatial3D::CFLyParam::AltitudeMode __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getGlobeNodeTrackAltitudeMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial3D::CFLyParam::AltitudeMode __values1 = pObjectX->getGlobeNodeTrackAltitudeMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1getGlobeNodeTrackAltitudeMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getGlobeNodeTrackAltitudeMode_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getGlobeNodeTrackAltitudeMode_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getGlobeNodeTrackAltitudeMode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Spatial3D::CFLyParam::AltitudeMode __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getGlobeNodeTrackAltitudeMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setCameraNodeTrackIsLoop_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean loop_j)
			{
				const ev_bool loop = (const ev_bool) loop_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setCameraNodeTrackIsLoop(loop);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getCameraNodeTrackIsLoop_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->getCameraNodeTrackIsLoop();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setCameraNodeTrackInterpolationMode_1InterpolationMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint interpolationmode_j)
			{
				EarthView::World::Graphic::CAnimation::InterpolationMode interpolationmode = (EarthView::World::Graphic::CAnimation::InterpolationMode) interpolationmode_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setCameraNodeTrackInterpolationMode(interpolationmode);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getCameraNodeTrackInterpolationMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Graphic::CAnimation::InterpolationMode __values1 = pObjectX->getCameraNodeTrackInterpolationMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setCameraNodeTrackRotationInterpolationMode_1RotationInterpolationMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint rotationInterpolationMode_j)
			{
				EarthView::World::Graphic::CAnimation::RotationInterpolationMode rotationInterpolationMode = (EarthView::World::Graphic::CAnimation::RotationInterpolationMode) rotationInterpolationMode_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setCameraNodeTrackRotationInterpolationMode(rotationInterpolationMode);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getCameraNodeTrackRotationInterpolationMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Graphic::CAnimation::RotationInterpolationMode __values1 = pObjectX->getCameraNodeTrackRotationInterpolationMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getRibbonTrailVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->getRibbonTrailVisible();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setRibbonTrailVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
			{
				const ev_bool visible = (const ev_bool) visible_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setRibbonTrailVisible(visible);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_IsPositionChanged_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->IsPositionChanged();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getSceneNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->getSceneNode();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getModelAxisAlignedBox_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Spatial::Math::CAxisAlignedBox __values1 = pObjectX->getModelAxisAlignedBox();
				EarthView::World::Spatial::Math::CAxisAlignedBox *returnvalues = new EarthView::World::Spatial::Math::CAxisAlignedBox(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getModelLocalMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->getModelLocalMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getBoundingRadius_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getBoundingRadius();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getCameraNodeTrackLocalCenter_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getCameraNodeTrackLocalCenter();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setCameraNodeTrackLocalCenter_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong localCenter_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &localCenter = *(EarthView::World::Spatial::Math::CVector3*) localCenter_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setCameraNodeTrackLocalCenter(localCenter);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setReflectable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setReflectable(enable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getReflectable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->getReflectable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setRefractable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setRefractable(enable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getRefractable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->getRefractable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setGlobeNodeTrackAnimationListener_1CDynamicGlobeNodeTrackAnimationListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener *ref_listener = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) ref_listener_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setGlobeNodeTrackAnimationListener(ref_listener);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getGlobeNodeTrackAnimationListener_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* __values1 = pObjectX->getGlobeNodeTrackAnimationListener();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_addGlobeNodeTrackEvent_1CDynamicObjectEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_dynamicObjectEvent_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *ref_dynamicObjectEvent = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) ref_dynamicObjectEvent_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->addGlobeNodeTrackEvent(ref_dynamicObjectEvent);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_removeGlobeNodeTrackEvent_1CDynamicObjectEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dynamicObjectEvent_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *dynamicObjectEvent = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) dynamicObjectEvent_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->removeGlobeNodeTrackEvent(dynamicObjectEvent);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_resetGlobeNodeTrackEvents_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->resetGlobeNodeTrackEvents();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_addCameraNodeTrackEvent_1CDynamicObjectEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_dynamicObjectEvent_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *ref_dynamicObjectEvent = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) ref_dynamicObjectEvent_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->addCameraNodeTrackEvent(ref_dynamicObjectEvent);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_removeCameraNodeTrackEvent_1CDynamicObjectEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dynamicObjectEvent_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *dynamicObjectEvent = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) dynamicObjectEvent_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->removeCameraNodeTrackEvent(dynamicObjectEvent);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_resetCameraNodeTrackEvents_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->resetCameraNodeTrackEvents();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getModelBaseObject_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject* __values1 = pObjectX->getModelBaseObject();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_bindModelParam_1IDataSource_1EVString_1ModelType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_dataSource_j, jstring meshName_j, jint modelType_j)
			{
				EarthView::World::Spatial::GeoDataset::IDataSource *ref_dataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) ref_dataSource_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
				const EVString meshName = meshName_ch;
				__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
				#else
				const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
				const EVString meshName = meshName_ch;
				__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
				#endif
				EarthView::World::Spatial3D::ModelType modelType = (EarthView::World::Spatial3D::ModelType) modelType_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->bindModelParam(ref_dataSource, meshName, modelType);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_bindModelParam_1IDataSource_1ev_1int32_1ModelType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_dataSource_j, jint meshIndex_j, jint modelType_j)
			{
				EarthView::World::Spatial::GeoDataset::IDataSource *ref_dataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) ref_dataSource_j;
				const ev_int32 meshIndex = (const ev_int32) meshIndex_j;
				EarthView::World::Spatial3D::ModelType modelType = (EarthView::World::Spatial3D::ModelType) modelType_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->bindModelParam(ref_dataSource, meshIndex, modelType);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_bindModelBaseObject_1CModelBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_modelBaseObject_j)
			{
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject *ref_modelBaseObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) ref_modelBaseObject_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->bindModelBaseObject(ref_modelBaseObject);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_unBindModel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->unBindModel();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setNeedUpdate_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean needUpdate_j)
			{
				const ev_bool needUpdate = (const ev_bool) needUpdate_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setNeedUpdate(needUpdate);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getNeedUpdate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->getNeedUpdate();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getTrackTrailVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->getTrackTrailVisible();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setTrackTrailVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
			{
				const ev_bool visible = (const ev_bool) visible_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setTrackTrailVisible(visible);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setTrackTrailDisplayPointNum_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint number_j)
			{
				const ev_int32 number = (const ev_int32) number_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setTrackTrailDisplayPointNum(number);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getTrackTrailDisplayPointNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getTrackTrailDisplayPointNum();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setTrackTrailDisplayMode_1EVDisplayMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint displayMode_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode displayMode = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode) displayMode_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setTrackTrailDisplayMode(displayMode);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getTrackTrailDisplayMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode __values1 = pObjectX->getTrackTrailDisplayMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setTrackTrailSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lineSymbol_j)
			{
				EarthView::World::Spatial::Display::ISymbol *lineSymbol = (EarthView::World::Spatial::Display::ISymbol*) lineSymbol_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setTrackTrailSymbol(lineSymbol);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getTrackTrailSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getTrackTrailSymbol();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setIsTrackTrailHighLine_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isHighLine_j)
			{
				const ev_bool isHighLine = (const ev_bool) isHighLine_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setIsTrackTrailHighLine(isHighLine);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getIsTrackTrailHighLine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->getIsTrackTrailHighLine();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setHighLineColorInfo_1CRgbColor_1CRgbColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong staticHighLineColor_j, jlong dynamicHighLineColor_j)
			{
				EarthView::World::Spatial::Display::CRgbColor *staticHighLineColor = (EarthView::World::Spatial::Display::CRgbColor*) staticHighLineColor_j;
				EarthView::World::Spatial::Display::CRgbColor *dynamicHighLineColor = (EarthView::World::Spatial::Display::CRgbColor*) dynamicHighLineColor_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setHighLineColorInfo(staticHighLineColor, dynamicHighLineColor);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setHighLineDistance_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble highLineDistance_j)
			{
				const ev_real64 highLineDistance = (const ev_real64) highLineDistance_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setHighLineDistance(highLineDistance);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getHighLineDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				Real __values1 = pObjectX->getHighLineDistance();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setTrackTrailSpatialReference_1ISpatialReference(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_sr_j)
			{
				EarthView::World::Spatial::Geometry::ISpatialReference *ref_sr = (EarthView::World::Spatial::Geometry::ISpatialReference*) ref_sr_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->setTrackTrailSpatialReference(ref_sr);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getTrackTrailSpatialReference_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				const EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->getTrackTrailSpatialReference();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_removeAllTrackTrailPoint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::removeAllTrackTrailPoint();
				}
				else
				{
					pObjectX->removeAllTrackTrailPoint();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1removeAllTrackTrailPoint_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAllTrackTrailPoint_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAllTrackTrailPoint_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_removeAllTrackTrailPoint_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::removeAllTrackTrailPoint();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_addTrackTrailPoint_1CCoordinate(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong point_j)
			{
				const EarthView::World::Spatial::Geometry::CCoordinate &point = *(EarthView::World::Spatial::Geometry::CCoordinate*) point_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::addTrackTrailPoint(point);
				}
				else
				{
					pObjectX->addTrackTrailPoint(point);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1addTrackTrailPoint_1CCoordinate(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addTrackTrailPoint_CCoordinate_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addTrackTrailPoint_CCoordinate_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_addTrackTrailPoint_1CCoordinate_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong point_j)
			{
				const EarthView::World::Spatial::Geometry::CCoordinate &point = *(EarthView::World::Spatial::Geometry::CCoordinate*) point_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::addTrackTrailPoint(point);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getCurrentNodeScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getCurrentNodeScale();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getCurrentNodeScale();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1getCurrentNodeScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCurrentNodeScale_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCurrentNodeScale_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getCurrentNodeScale_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getCurrentNodeScale();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getCurrentNodePosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getCurrentNodePosition();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getCurrentNodePosition();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1getCurrentNodePosition_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCurrentNodePosition_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCurrentNodePosition_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getCurrentNodePosition_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getCurrentNodePosition();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getCurrentNodeQuaternion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getCurrentNodeQuaternion();
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->getCurrentNodeQuaternion();
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1getCurrentNodeQuaternion_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCurrentNodeQuaternion_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCurrentNodeQuaternion_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getCurrentNodeQuaternion_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getCurrentNodeQuaternion();
				EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setGlobeAnimationsetEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setGlobeAnimationsetEnabled(enable);
				}
				else
				{
					pObjectX->setGlobeAnimationsetEnabled(enable);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1setGlobeAnimationsetEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setGlobeAnimationsetEnabled_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setGlobeAnimationsetEnabled_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setGlobeAnimationsetEnabled_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setGlobeAnimationsetEnabled(enable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getGlobeAnimationsetEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getGlobeAnimationsetEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getGlobeAnimationsetEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1getGlobeAnimationsetEnabled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getGlobeAnimationsetEnabled_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getGlobeAnimationsetEnabled_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getGlobeAnimationsetEnabled_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getGlobeAnimationsetEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setGlobeAnimationsetArouseFrequency_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble frequency_j)
			{
				const ev_real64 frequency = (const ev_real64) frequency_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setGlobeAnimationsetArouseFrequency(frequency);
				}
				else
				{
					pObjectX->setGlobeAnimationsetArouseFrequency(frequency);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1setGlobeAnimationsetArouseFrequency_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setGlobeAnimationsetArouseFrequency_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setGlobeAnimationsetArouseFrequency_ev_real64_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setGlobeAnimationsetArouseFrequency_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble frequency_j)
			{
				const ev_real64 frequency = (const ev_real64) frequency_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setGlobeAnimationsetArouseFrequency(frequency);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getGlobeAnimationsetArouseFrequency_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					ev_real64 __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getGlobeAnimationsetArouseFrequency();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					ev_real64 __values1 = pObjectX->getGlobeAnimationsetArouseFrequency();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1getGlobeAnimationsetArouseFrequency_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getGlobeAnimationsetArouseFrequency_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getGlobeAnimationsetArouseFrequency_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getGlobeAnimationsetArouseFrequency_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_real64 __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getGlobeAnimationsetArouseFrequency();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_forceArouseGlobeAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::forceArouseGlobeAnimation();
				}
				else
				{
					pObjectX->forceArouseGlobeAnimation();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1forceArouseGlobeAnimation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_forceArouseGlobeAnimation_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"forceArouseGlobeAnimation_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_forceArouseGlobeAnimation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::forceArouseGlobeAnimation();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setModelEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setModelEnable(enable);
				}
				else
				{
					pObjectX->setModelEnable(enable);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1setModelEnable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setModelEnable_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setModelEnable_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setModelEnable_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setModelEnable(enable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getModelEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getModelEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getModelEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1getModelEnable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getModelEnable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getModelEnable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getModelEnable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getModelEnable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setParticleEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setParticleEnable(enable);
				}
				else
				{
					pObjectX->setParticleEnable(enable);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1setParticleEnable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParticleEnable_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParticleEnable_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setParticleEnable_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setParticleEnable(enable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getParticleEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getParticleEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getParticleEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1getParticleEnable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getParticleEnable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getParticleEnable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getParticleEnable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getParticleEnable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setRibbonTrailEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setRibbonTrailEnable(enable);
				}
				else
				{
					pObjectX->setRibbonTrailEnable(enable);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1setRibbonTrailEnable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setRibbonTrailEnable_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setRibbonTrailEnable_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setRibbonTrailEnable_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setRibbonTrailEnable(enable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getRibbonTrailEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getRibbonTrailEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getRibbonTrailEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1getRibbonTrailEnable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRibbonTrailEnable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRibbonTrailEnable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getRibbonTrailEnable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getRibbonTrailEnable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setScutcheonEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setScutcheonEnable(enable);
				}
				else
				{
					pObjectX->setScutcheonEnable(enable);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1setScutcheonEnable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setScutcheonEnable_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setScutcheonEnable_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setScutcheonEnable_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setScutcheonEnable(enable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getScutcheonEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getScutcheonEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getScutcheonEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1getScutcheonEnable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getScutcheonEnable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getScutcheonEnable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getScutcheonEnable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getScutcheonEnable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setTrackTrailEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setTrackTrailEnable(enable);
				}
				else
				{
					pObjectX->setTrackTrailEnable(enable);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1setTrackTrailEnable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setTrackTrailEnable_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setTrackTrailEnable_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setTrackTrailEnable_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setTrackTrailEnable(enable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getTrackTrailEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getTrackTrailEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getTrackTrailEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1getTrackTrailEnable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTrackTrailEnable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTrackTrailEnable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getTrackTrailEnable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getTrackTrailEnable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getPixelModeEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getPixelModeEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getPixelModeEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1getPixelModeEnable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPixelModeEnable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPixelModeEnable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getPixelModeEnable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getPixelModeEnable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setPixelModeEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setPixelModeEnable(enable);
				}
				else
				{
					pObjectX->setPixelModeEnable(enable);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1setPixelModeEnable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPixelModeEnable_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPixelModeEnable_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setPixelModeEnable_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setPixelModeEnable(enable);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getPixelModeScaleRatio_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					Real __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getPixelModeScaleRatio();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getPixelModeScaleRatio();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1getPixelModeScaleRatio_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPixelModeScaleRatio_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPixelModeScaleRatio_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getPixelModeScaleRatio_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getPixelModeScaleRatio();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setPixelModeScaleRatio_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scaleRatio_j)
			{
				const Real scaleRatio = (const Real) scaleRatio_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setPixelModeScaleRatio(scaleRatio);
				}
				else
				{
					pObjectX->setPixelModeScaleRatio(scaleRatio);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1setPixelModeScaleRatio_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPixelModeScaleRatio_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPixelModeScaleRatio_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setPixelModeScaleRatio_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scaleRatio_j)
			{
				const Real scaleRatio = (const Real) scaleRatio_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setPixelModeScaleRatio(scaleRatio);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setCameraNodeTrackOnLineMode_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setCameraNodeTrackOnLineMode(enable);
				}
				else
				{
					pObjectX->setCameraNodeTrackOnLineMode(enable);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1setCameraNodeTrackOnLineMode_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setCameraNodeTrackOnLineMode_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setCameraNodeTrackOnLineMode_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_setCameraNodeTrackOnLineMode_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setCameraNodeTrackOnLineMode(enable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getCameraNodeTrackOnLineMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getCameraNodeTrackOnLineMode();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getCameraNodeTrackOnLineMode();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_register_1getCameraNodeTrackOnLineMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectProxy *pObjectX = (JCDynamicModelObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCameraNodeTrackOnLineMode_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCameraNodeTrackOnLineMode_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObject_getCameraNodeTrackOnLineMode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getCameraNodeTrackOnLineMode();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
