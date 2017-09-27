/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/controlspace.h"
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
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace SystemUI
			{
			}
		}
	}
}
class JCControlSpaceProxy : public CControlSpace
{
 private:
	EarthView::World::Core::ev_string m_onEvent_CEvent_callback;
	EarthView::World::Core::ev_string m_onTimerEvent_CTimerEvent_callback;
	EarthView::World::Core::ev_string m_onCustomEvent_CEvent_callback;
public:
	JCControlSpaceProxy(EarthView::World::Core::CNameValuePairList *pList) : CControlSpace(pList)
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
			return this->CControlSpace::onEvent(e);
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
			return this->CControlSpace::onTimerEvent(e);
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
			return this->CControlSpace::onCustomEvent(e);
		}
	}
};
REGISTER_FACTORY_CLASS(JCControlSpaceProxy);
extern "C" JNIEXPORT jlong JNICALL Java_global_ControlSpace_getToolBarCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CControlSpace *pObjectX = (CControlSpace*) pObjXXXX;
	ev_uint32 __values1 = pObjectX->getToolBarCount();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ControlSpace_getToolBar_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
{
	ev_uint32 index = (ev_uint32) index_j;
	CControlSpace *pObjectX = (CControlSpace*) pObjXXXX;
	EarthView::World::Spatial::SystemUI::IToolBar* __values1 = pObjectX->getToolBar(index);
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ControlSpace_getToolBarForType_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
{
	ev_int32 type = (ev_int32) type_j;
	CControlSpace *pObjectX = (CControlSpace*) pObjXXXX;
	EarthView::World::Spatial::SystemUI::IToolBar* __values1 = pObjectX->getToolBarForType(type);
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ControlSpace_getMenuCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CControlSpace *pObjectX = (CControlSpace*) pObjXXXX;
	ev_uint32 __values1 = pObjectX->getMenuCount();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ControlSpace_getMenu_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
{
	ev_uint32 index = (ev_uint32) index_j;
	CControlSpace *pObjectX = (CControlSpace*) pObjXXXX;
	EarthView::World::Spatial::SystemUI::IMenu* __values1 = pObjectX->getMenu(index);
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ControlSpace_getControl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CControlSpace *pObjectX = (CControlSpace*) pObjXXXX;
	EarthView::World::Spatial::Atlas::ISpatialControl* __values1 = pObjectX->getControl();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_ControlSpace_initialize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CControlSpace *pObjectX = (CControlSpace*) pObjXXXX;
	pObjectX->initialize();
}
extern "C" JNIEXPORT void JNICALL Java_global_ControlSpace_initialize_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong toolbarEnabled_j)
{
	ev_uint32 toolbarEnabled = (ev_uint32) toolbarEnabled_j;
	CControlSpace *pObjectX = (CControlSpace*) pObjXXXX;
	pObjectX->initialize(toolbarEnabled);
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ControlSpace_getCommandPool_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CControlSpace *pObjectX = (CControlSpace*) pObjXXXX;
	CCommandPool* __values1 = pObjectX->getCommandPool();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_ControlSpace_onEvent_1CEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
{
	EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
	CControlSpace *pObjectX = (CControlSpace*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCControlSpaceProxy))
	{
		ev_bool __values1 = pObjectX->CControlSpace::onEvent(e);
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
	else
	{
		ev_bool __values1 = pObjectX->onEvent(e);
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_ControlSpace_register_1onEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCControlSpaceProxy *pObjectX = (JCControlSpaceProxy*) pObjXXXX;
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
extern "C" JNIEXPORT jboolean JNICALL Java_global_ControlSpace_onEvent_1CEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
{
	EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
	CControlSpace *pObjectX = (CControlSpace*) pObjXXXX;
	ev_bool __values1 = pObjectX->CControlSpace::onEvent(e);
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_ControlSpace_register_1onTimerEvent_1CTimerEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCControlSpaceProxy *pObjectX = (JCControlSpaceProxy*) pObjXXXX;
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
extern "C" JNIEXPORT void JNICALL Java_global_ControlSpace_register_1onCustomEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCControlSpaceProxy *pObjectX = (JCControlSpaceProxy*) pObjXXXX;
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
