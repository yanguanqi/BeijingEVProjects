/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/globlecontrolspace.h"
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
			namespace Atlas
			{
			}
		}
	}
}
class JCGlobleControlSpaceProxy : public CGlobleControlSpace
{
 private:
	EarthView::World::Core::ev_string m_onEvent_CEvent_callback;
	EarthView::World::Core::ev_string m_onTimerEvent_CTimerEvent_callback;
	EarthView::World::Core::ev_string m_onCustomEvent_CEvent_callback;
public:
	JCGlobleControlSpaceProxy(EarthView::World::Core::CNameValuePairList *pList) : CGlobleControlSpace(pList)
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
	void register_onEvent_CEvent_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_onEvent_CEvent_callback = __method;
	}
	void register_onTimerEvent_CTimerEvent_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_onTimerEvent_CTimerEvent_callback = __method;
	}
	void register_onCustomEvent_CEvent_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_onCustomEvent_CEvent_callback = __method;
	}
	virtual ev_bool onEvent(EarthView::World::Core::CEvent* e)
	{
		if (this->_gRef != NULL && this->m_onEvent_CEvent_callback != "" && this->isCustomExtend())
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
			jlong e_j = (jlong) e;
			jmethodID __method = __gr->getMethod("onEvent_CEvent_callback");
			jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
			return this->CGlobleControlSpace::onEvent(e);
		}
	}
	virtual void onTimerEvent(EarthView::World::Core::CTimerEvent* e)
	{
		if (this->_gRef != NULL && this->m_onTimerEvent_CTimerEvent_callback != "" && this->isCustomExtend())
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
			jlong e_j = (jlong) e;
			jmethodID __method = __gr->getMethod("onTimerEvent_CTimerEvent_callback");
			__env->CallVoidMethod(__obj, __method , e_j);
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
			return this->CGlobleControlSpace::onTimerEvent(e);
		}
	}
	virtual void onCustomEvent(EarthView::World::Core::CEvent* e)
	{
		if (this->_gRef != NULL && this->m_onCustomEvent_CEvent_callback != "" && this->isCustomExtend())
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
			jlong e_j = (jlong) e;
			jmethodID __method = __gr->getMethod("onCustomEvent_CEvent_callback");
			__env->CallVoidMethod(__obj, __method , e_j);
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
			return this->CGlobleControlSpace::onCustomEvent(e);
		}
	}
};
REGISTER_FACTORY_CLASS(JCGlobleControlSpaceProxy);
extern "C" JNIEXPORT void JNICALL Java_global_GlobleControlSpace_register_1onEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCGlobleControlSpaceProxy *pObjectX = (JCGlobleControlSpaceProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_onEvent_CEvent_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"onEvent_CEvent_callback", "(J)Z");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_GlobleControlSpace_register_1onTimerEvent_1CTimerEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCGlobleControlSpaceProxy *pObjectX = (JCGlobleControlSpaceProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_onTimerEvent_CTimerEvent_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"onTimerEvent_CTimerEvent_callback", "(J)V");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_GlobleControlSpace_register_1onCustomEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCGlobleControlSpaceProxy *pObjectX = (JCGlobleControlSpaceProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_onCustomEvent_CEvent_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"onCustomEvent_CEvent_callback", "(J)V");
		__gr->setMethod(sMethod, __method);
	}
}
