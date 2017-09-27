/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/customcompositionpass.h"
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
			class JCCustomCompositionPassProxy : public EarthView::World::Graphic::CCustomCompositionPass
			{
			 private:
				EarthView::World::Core::ev_string m_createOperation_CCompositorInstance_CCompositionPass_callback;
			public:
				JCCustomCompositionPassProxy(EarthView::World::Core::CNameValuePairList *pList) : CCustomCompositionPass(pList)
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
				void register_createOperation_CCompositorInstance_CCompositionPass_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createOperation_CCompositorInstance_CCompositionPass_callback = __method;
				}
				virtual EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation* createOperation(EarthView::World::Graphic::CCompositorInstance* instance, const EarthView::World::Graphic::CCompositionPass* pass)
				{
					if (this->_gRef != NULL && this->m_createOperation_CCompositorInstance_CCompositionPass_callback != "" && this->isCustomExtend())
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
						jlong instance_j = (jlong) instance;
						jlong pass_j = (jlong) pass;
						jmethodID __method = __gr->getMethod("createOperation_CCompositorInstance_CCompositionPass_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , instance_j, pass_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation *__values1 = (EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCustomCompositionPass::createOperation(instance, pass);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCCustomCompositionPassProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CustomCompositionPass_createOperation_1CCompositorInstance_1CCompositionPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong instance_j, jlong pass_j)
			{
				EarthView::World::Graphic::CCompositorInstance *instance = (EarthView::World::Graphic::CCompositorInstance*) instance_j;
				const EarthView::World::Graphic::CCompositionPass *pass = (const EarthView::World::Graphic::CCompositionPass*) pass_j;
				EarthView::World::Graphic::CCustomCompositionPass *pObjectX = (EarthView::World::Graphic::CCustomCompositionPass*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCustomCompositionPassProxy))
				{
					EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation* __values1 = pObjectX->EarthView::World::Graphic::CCustomCompositionPass::createOperation(instance, pass);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation* __values1 = pObjectX->createOperation(instance, pass);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CustomCompositionPass_register_1createOperation_1CCompositorInstance_1CCompositionPass(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCustomCompositionPassProxy *pObjectX = (JCCustomCompositionPassProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createOperation_CCompositorInstance_CCompositionPass_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createOperation_CCompositorInstance_CCompositionPass_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CustomCompositionPass_createOperation_1CCompositorInstance_1CCompositionPass_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong instance_j, jlong pass_j)
			{
				EarthView::World::Graphic::CCompositorInstance *instance = (EarthView::World::Graphic::CCompositorInstance*) instance_j;
				const EarthView::World::Graphic::CCompositionPass *pass = (const EarthView::World::Graphic::CCompositionPass*) pass_j;
				EarthView::World::Graphic::CCustomCompositionPass *pObjectX = (EarthView::World::Graphic::CCustomCompositionPass*) pObjXXXX;
				EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation* __values1 = pObjectX->EarthView::World::Graphic::CCustomCompositionPass::createOperation(instance, pass);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
