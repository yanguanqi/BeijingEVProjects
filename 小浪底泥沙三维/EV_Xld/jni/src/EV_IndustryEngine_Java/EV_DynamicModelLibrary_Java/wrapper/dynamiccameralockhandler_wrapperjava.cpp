/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/dynamicmodellibrary/dynamiccameralockhandler.h"
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
			class JCDynamicCameraLockHandlerProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler
			{
			 private:
				EarthView::World::Core::ev_string m_handleEvent_CGUIEvent_callback;
			public:
				JCDynamicCameraLockHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicCameraLockHandler(pList)
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
				void register_handleEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_handleEvent_CGUIEvent_callback = __method;
				}
				virtual ev_bool handleEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
				{
					if (this->_gRef != NULL && this->m_handleEvent_CGUIEvent_callback != "" && this->isCustomExtend())
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
						jlong guiEvent_j = (jlong) guiEvent;
						jmethodID __method = __gr->getMethod("handleEvent_CGUIEvent_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , guiEvent_j);
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
						return this->CDynamicCameraLockHandler::handleEvent(guiEvent);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDynamicCameraLockHandlerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicCameraLockHandler_handleEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
			{
				EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicCameraLockHandlerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler::handleEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->handleEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicCameraLockHandler_register_1handleEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicCameraLockHandlerProxy *pObjectX = (JCDynamicCameraLockHandlerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_handleEvent_CGUIEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"handleEvent_CGUIEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicCameraLockHandler_handleEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
			{
				EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler::handleEvent(guiEvent);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicCameraLockHandler_handleMouseUpEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
			{
				EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler*) pObjXXXX;
				ev_bool __values1 = pObjectX->handleMouseUpEvent(guiEvent);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicCameraLockHandler_handleFrameEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
			{
				EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler*) pObjXXXX;
				ev_bool __values1 = pObjectX->handleFrameEvent(guiEvent);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicCameraLockHandler_handleMouseDownEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
			{
				EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler*) pObjXXXX;
				ev_bool __values1 = pObjectX->handleMouseDownEvent(guiEvent);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicCameraLockHandler_handleMouseMoveEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
			{
				EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler*) pObjXXXX;
				ev_bool __values1 = pObjectX->handleMouseMoveEvent(guiEvent);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicCameraLockHandler_handleMouseWheelEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
			{
				EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler*) pObjXXXX;
				ev_bool __values1 = pObjectX->handleMouseWheelEvent(guiEvent);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicCameraLockHandler_handleKeyEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
			{
				EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler*) pObjXXXX;
				ev_bool __values1 = pObjectX->handleKeyEvent(guiEvent);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
