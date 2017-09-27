/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/renderobjectlistener.h"
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
			class JCRenderObjectListenerProxy : public EarthView::World::Graphic::CRenderObjectListener
			{
			 private:
				EarthView::World::Core::ev_string m_notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback;
				EarthView::World::Core::ev_string m_notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback;
			public:
				JCRenderObjectListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderObjectListener(pList)
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
				void register_notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback = __method;
				}
				void register_notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback = __method;
				}
				virtual void notifyRenderSingleObjectStarted(EarthView::World::Graphic::CRenderable* rend, const EarthView::World::Graphic::CPass* pass, const EarthView::World::Graphic::CAutoParamDataSource* source, const EarthView::World::Graphic::LightList* pLightList, ev_bool suppressRenderStateChanges)
				{
					if (this->_gRef != NULL && this->m_notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong rend_j = (jlong) rend;
						jlong pass_j = (jlong) pass;
						jlong source_j = (jlong) source;
						jlong pLightList_j = (jlong) pLightList;
						jboolean suppressRenderStateChanges_j = (jboolean) suppressRenderStateChanges;
						jmethodID __method = __gr->getMethod("notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , rend_j, pass_j, source_j, pLightList_j, suppressRenderStateChanges_j);
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
						return this->CRenderObjectListener::notifyRenderSingleObjectStarted(rend, pass, source, pLightList, suppressRenderStateChanges);
					}
				}
				virtual void notifyRenderSingleObjectEnd(EarthView::World::Graphic::CRenderable* rend, const EarthView::World::Graphic::CPass* pass, const EarthView::World::Graphic::CAutoParamDataSource* source, const EarthView::World::Graphic::LightList* pLightList, ev_bool suppressRenderStateChanges)
				{
					if (this->_gRef != NULL && this->m_notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong rend_j = (jlong) rend;
						jlong pass_j = (jlong) pass;
						jlong source_j = (jlong) source;
						jlong pLightList_j = (jlong) pLightList;
						jboolean suppressRenderStateChanges_j = (jboolean) suppressRenderStateChanges;
						jmethodID __method = __gr->getMethod("notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , rend_j, pass_j, source_j, pLightList_j, suppressRenderStateChanges_j);
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
						return this->CRenderObjectListener::notifyRenderSingleObjectEnd(rend, pass, source, pLightList, suppressRenderStateChanges);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCRenderObjectListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderObjectListener_notifyRenderSingleObjectStarted_1CRenderable_1CPass_1CAutoParamDataSource_1LightList_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rend_j, jlong pass_j, jlong source_j, jlong pLightList_j, jboolean suppressRenderStateChanges_j)
			{
				EarthView::World::Graphic::CRenderable *rend = (EarthView::World::Graphic::CRenderable*) rend_j;
				const EarthView::World::Graphic::CPass *pass = (const EarthView::World::Graphic::CPass*) pass_j;
				const EarthView::World::Graphic::CAutoParamDataSource *source = (const EarthView::World::Graphic::CAutoParamDataSource*) source_j;
				const EarthView::World::Graphic::LightList *pLightList = (const EarthView::World::Graphic::LightList*) pLightList_j;
				ev_bool suppressRenderStateChanges = (ev_bool) suppressRenderStateChanges_j;
				EarthView::World::Graphic::CRenderObjectListener *pObjectX = (EarthView::World::Graphic::CRenderObjectListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderObjectListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderObjectListener::notifyRenderSingleObjectStarted(rend, pass, source, pLightList, suppressRenderStateChanges);
				}
				else
				{
					pObjectX->notifyRenderSingleObjectStarted(rend, pass, source, pLightList, suppressRenderStateChanges);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderObjectListener_register_1notifyRenderSingleObjectStarted_1CRenderable_1CPass_1CAutoParamDataSource_1LightList_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderObjectListenerProxy *pObjectX = (JCRenderObjectListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback", "(JJJJZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderObjectListener_notifyRenderSingleObjectStarted_1CRenderable_1CPass_1CAutoParamDataSource_1LightList_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rend_j, jlong pass_j, jlong source_j, jlong pLightList_j, jboolean suppressRenderStateChanges_j)
			{
				EarthView::World::Graphic::CRenderable *rend = (EarthView::World::Graphic::CRenderable*) rend_j;
				const EarthView::World::Graphic::CPass *pass = (const EarthView::World::Graphic::CPass*) pass_j;
				const EarthView::World::Graphic::CAutoParamDataSource *source = (const EarthView::World::Graphic::CAutoParamDataSource*) source_j;
				const EarthView::World::Graphic::LightList *pLightList = (const EarthView::World::Graphic::LightList*) pLightList_j;
				ev_bool suppressRenderStateChanges = (ev_bool) suppressRenderStateChanges_j;
				EarthView::World::Graphic::CRenderObjectListener *pObjectX = (EarthView::World::Graphic::CRenderObjectListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderObjectListener::notifyRenderSingleObjectStarted(rend, pass, source, pLightList, suppressRenderStateChanges);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderObjectListener_notifyRenderSingleObjectEnd_1CRenderable_1CPass_1CAutoParamDataSource_1LightList_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rend_j, jlong pass_j, jlong source_j, jlong pLightList_j, jboolean suppressRenderStateChanges_j)
			{
				EarthView::World::Graphic::CRenderable *rend = (EarthView::World::Graphic::CRenderable*) rend_j;
				const EarthView::World::Graphic::CPass *pass = (const EarthView::World::Graphic::CPass*) pass_j;
				const EarthView::World::Graphic::CAutoParamDataSource *source = (const EarthView::World::Graphic::CAutoParamDataSource*) source_j;
				const EarthView::World::Graphic::LightList *pLightList = (const EarthView::World::Graphic::LightList*) pLightList_j;
				ev_bool suppressRenderStateChanges = (ev_bool) suppressRenderStateChanges_j;
				EarthView::World::Graphic::CRenderObjectListener *pObjectX = (EarthView::World::Graphic::CRenderObjectListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderObjectListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderObjectListener::notifyRenderSingleObjectEnd(rend, pass, source, pLightList, suppressRenderStateChanges);
				}
				else
				{
					pObjectX->notifyRenderSingleObjectEnd(rend, pass, source, pLightList, suppressRenderStateChanges);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderObjectListener_register_1notifyRenderSingleObjectEnd_1CRenderable_1CPass_1CAutoParamDataSource_1LightList_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderObjectListenerProxy *pObjectX = (JCRenderObjectListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback", "(JJJJZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderObjectListener_notifyRenderSingleObjectEnd_1CRenderable_1CPass_1CAutoParamDataSource_1LightList_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rend_j, jlong pass_j, jlong source_j, jlong pLightList_j, jboolean suppressRenderStateChanges_j)
			{
				EarthView::World::Graphic::CRenderable *rend = (EarthView::World::Graphic::CRenderable*) rend_j;
				const EarthView::World::Graphic::CPass *pass = (const EarthView::World::Graphic::CPass*) pass_j;
				const EarthView::World::Graphic::CAutoParamDataSource *source = (const EarthView::World::Graphic::CAutoParamDataSource*) source_j;
				const EarthView::World::Graphic::LightList *pLightList = (const EarthView::World::Graphic::LightList*) pLightList_j;
				ev_bool suppressRenderStateChanges = (ev_bool) suppressRenderStateChanges_j;
				EarthView::World::Graphic::CRenderObjectListener *pObjectX = (EarthView::World::Graphic::CRenderObjectListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderObjectListener::notifyRenderSingleObjectEnd(rend, pass, source, pLightList, suppressRenderStateChanges);
			}
		}
	}
}
