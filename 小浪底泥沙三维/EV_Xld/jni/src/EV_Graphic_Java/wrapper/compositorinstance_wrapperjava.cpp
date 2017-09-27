/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/compositorinstance.h"
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
			class JCCompositorInstanceProxy : public EarthView::World::Graphic::CCompositorInstance
			{
			 private:
				EarthView::World::Core::ev_string m__compileTargetOperations_CompiledState_callback;
				EarthView::World::Core::ev_string m__compileOutputOperation_CTargetOperation_callback;
			public:
				JCCompositorInstanceProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompositorInstance(pList)
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
				void register__compileTargetOperations_CompiledState_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__compileTargetOperations_CompiledState_callback = __method;
				}
				void register__compileOutputOperation_CTargetOperation_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__compileOutputOperation_CTargetOperation_callback = __method;
				}
				virtual void _compileTargetOperations(EarthView::World::Graphic::CCompositorInstance::CompiledState& compiledState)
				{
					if (this->_gRef != NULL && this->m__compileTargetOperations_CompiledState_callback != "" && this->isCustomExtend())
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
						jlong compiledState_j = (jlong) &compiledState;
						jmethodID __method = __gr->getMethod("_compileTargetOperations_CompiledState_callback");
						__env->CallVoidMethod(__obj, __method , compiledState_j);
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
						return this->CCompositorInstance::_compileTargetOperations(compiledState);
					}
				}
				virtual void _compileOutputOperation(EarthView::World::Graphic::CCompositorInstance::CTargetOperation& finalState)
				{
					if (this->_gRef != NULL && this->m__compileOutputOperation_CTargetOperation_callback != "" && this->isCustomExtend())
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
						jlong finalState_j = (jlong) &finalState;
						jmethodID __method = __gr->getMethod("_compileOutputOperation_CTargetOperation_callback");
						__env->CallVoidMethod(__obj, __method , finalState_j);
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
						return this->CCompositorInstance::_compileOutputOperation(finalState);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCCompositorInstanceProxy);
			class JCCompositorInstanceListenerProxy : public EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener
			{
			 private:
				EarthView::World::Core::ev_string m_notifyMaterialSetup_ev_uint32_CMaterialPtr_callback;
				EarthView::World::Core::ev_string m_notifyMaterialRender_ev_uint32_CMaterialPtr_callback;
				EarthView::World::Core::ev_string m_notifyResourcesCreated_ev_bool_callback;
			public:
				JCCompositorInstanceListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompositorInstanceListener(pList)
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
				void register_notifyMaterialSetup_ev_uint32_CMaterialPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_notifyMaterialSetup_ev_uint32_CMaterialPtr_callback = __method;
				}
				void register_notifyMaterialRender_ev_uint32_CMaterialPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_notifyMaterialRender_ev_uint32_CMaterialPtr_callback = __method;
				}
				void register_notifyResourcesCreated_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_notifyResourcesCreated_ev_bool_callback = __method;
				}
				virtual void notifyMaterialSetup(ev_uint32 pass_id, EarthView::World::Graphic::CMaterialPtr& mat)
				{
					if (this->_gRef != NULL && this->m_notifyMaterialSetup_ev_uint32_CMaterialPtr_callback != "" && this->isCustomExtend())
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
						jlong pass_id_j = (jlong) pass_id;
						jlong mat_j = (jlong) &mat;
						jmethodID __method = __gr->getMethod("notifyMaterialSetup_ev_uint32_CMaterialPtr_callback");
						__env->CallVoidMethod(__obj, __method , pass_id_j, mat_j);
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
						return this->CCompositorInstanceListener::notifyMaterialSetup(pass_id, mat);
					}
				}
				virtual void notifyMaterialRender(ev_uint32 pass_id, EarthView::World::Graphic::CMaterialPtr& mat)
				{
					if (this->_gRef != NULL && this->m_notifyMaterialRender_ev_uint32_CMaterialPtr_callback != "" && this->isCustomExtend())
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
						jlong pass_id_j = (jlong) pass_id;
						jlong mat_j = (jlong) &mat;
						jmethodID __method = __gr->getMethod("notifyMaterialRender_ev_uint32_CMaterialPtr_callback");
						__env->CallVoidMethod(__obj, __method , pass_id_j, mat_j);
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
						return this->CCompositorInstanceListener::notifyMaterialRender(pass_id, mat);
					}
				}
				virtual void notifyResourcesCreated(ev_bool forResizeOnly)
				{
					if (this->_gRef != NULL && this->m_notifyResourcesCreated_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean forResizeOnly_j = (jboolean) forResizeOnly;
						jmethodID __method = __gr->getMethod("notifyResourcesCreated_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , forResizeOnly_j);
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
						return this->CCompositorInstanceListener::notifyResourcesCreated(forResizeOnly);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCCompositorInstanceListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024CompositorInstanceListener_notifyMaterialSetup_1ev_1uint32_1CMaterialPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pass_id_j, jlong mat_j)
			{
				ev_uint32 pass_id = (ev_uint32) pass_id_j;
				EarthView::World::Graphic::CMaterialPtr &mat = *(EarthView::World::Graphic::CMaterialPtr*) mat_j;
				EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositorInstanceListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener::notifyMaterialSetup(pass_id, mat);
				}
				else
				{
					pObjectX->notifyMaterialSetup(pass_id, mat);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024CompositorInstanceListener_register_1notifyMaterialSetup_1ev_1uint32_1CMaterialPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorInstanceListenerProxy *pObjectX = (JCCompositorInstanceListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_notifyMaterialSetup_ev_uint32_CMaterialPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"notifyMaterialSetup_ev_uint32_CMaterialPtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024CompositorInstanceListener_notifyMaterialSetup_1ev_1uint32_1CMaterialPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pass_id_j, jlong mat_j)
			{
				ev_uint32 pass_id = (ev_uint32) pass_id_j;
				EarthView::World::Graphic::CMaterialPtr &mat = *(EarthView::World::Graphic::CMaterialPtr*) mat_j;
				EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener::notifyMaterialSetup(pass_id, mat);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024CompositorInstanceListener_notifyMaterialRender_1ev_1uint32_1CMaterialPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pass_id_j, jlong mat_j)
			{
				ev_uint32 pass_id = (ev_uint32) pass_id_j;
				EarthView::World::Graphic::CMaterialPtr &mat = *(EarthView::World::Graphic::CMaterialPtr*) mat_j;
				EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositorInstanceListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener::notifyMaterialRender(pass_id, mat);
				}
				else
				{
					pObjectX->notifyMaterialRender(pass_id, mat);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024CompositorInstanceListener_register_1notifyMaterialRender_1ev_1uint32_1CMaterialPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorInstanceListenerProxy *pObjectX = (JCCompositorInstanceListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_notifyMaterialRender_ev_uint32_CMaterialPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"notifyMaterialRender_ev_uint32_CMaterialPtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024CompositorInstanceListener_notifyMaterialRender_1ev_1uint32_1CMaterialPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pass_id_j, jlong mat_j)
			{
				ev_uint32 pass_id = (ev_uint32) pass_id_j;
				EarthView::World::Graphic::CMaterialPtr &mat = *(EarthView::World::Graphic::CMaterialPtr*) mat_j;
				EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener::notifyMaterialRender(pass_id, mat);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024CompositorInstanceListener_notifyResourcesCreated_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean forResizeOnly_j)
			{
				ev_bool forResizeOnly = (ev_bool) forResizeOnly_j;
				EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositorInstanceListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener::notifyResourcesCreated(forResizeOnly);
				}
				else
				{
					pObjectX->notifyResourcesCreated(forResizeOnly);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024CompositorInstanceListener_register_1notifyResourcesCreated_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorInstanceListenerProxy *pObjectX = (JCCompositorInstanceListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_notifyResourcesCreated_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"notifyResourcesCreated_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024CompositorInstanceListener_notifyResourcesCreated_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean forResizeOnly_j)
			{
				ev_bool forResizeOnly = (ev_bool) forResizeOnly_j;
				EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener::notifyResourcesCreated(forResizeOnly);
			}
			class JCRenderSystemOperationProxy : public EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation
			{
			 private:
				EarthView::World::Core::ev_string m_execute_CSceneManager_CRenderSystem_callback;
			public:
				JCRenderSystemOperationProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderSystemOperation(pList)
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
				void register_execute_CSceneManager_CRenderSystem_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_execute_CSceneManager_CRenderSystem_callback = __method;
				}
				virtual void execute(EarthView::World::Graphic::CSceneManager* sm, EarthView::World::Graphic::CRenderSystem* rs)
				{
					if (this->_gRef != NULL && this->m_execute_CSceneManager_CRenderSystem_callback != "" && this->isCustomExtend())
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
						jlong sm_j = (jlong) sm;
						jlong rs_j = (jlong) rs;
						jmethodID __method = __gr->getMethod("execute_CSceneManager_CRenderSystem_callback");
						__env->CallVoidMethod(__obj, __method , sm_j, rs_j);
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
						return this->CRenderSystemOperation::execute(sm, rs);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCRenderSystemOperationProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024RenderSystemOperation_execute_1CSceneManager_1CRenderSystem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong rs_j)
			{
				EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
				EarthView::World::Graphic::CRenderSystem *rs = (EarthView::World::Graphic::CRenderSystem*) rs_j;
				EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemOperationProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation::execute(sm, rs);
				}
				else
				{
					pObjectX->execute(sm, rs);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024RenderSystemOperation_register_1execute_1CSceneManager_1CRenderSystem(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemOperationProxy *pObjectX = (JCRenderSystemOperationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_execute_CSceneManager_CRenderSystem_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"execute_CSceneManager_CRenderSystem_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024RenderSystemOperation_execute_1CSceneManager_1CRenderSystem_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong rs_j)
			{
				EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
				EarthView::World::Graphic::CRenderSystem *rs = (EarthView::World::Graphic::CRenderSystem*) rs_j;
				EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation::execute(sm, rs);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024QuadMaterialMap_push_1ev_1int32_1CMaterialPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j, jlong val_j)
			{
				const ev_int32 key = (const ev_int32) key_j;
				const EarthView::World::Graphic::CMaterialPtr &val = *(EarthView::World::Graphic::CMaterialPtr*) val_j;
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap *pObjectX = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024QuadMaterialMap_exist_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_int32 key = (const ev_int32) key_j;
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap *pObjectX = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024QuadMaterialMap_OperatorIndex_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint key_j )
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap& pObjectX = *(EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap*) pObjXXXX;
				const ev_int32 key = (const ev_int32) key_j;
				EarthView::World::Graphic::CMaterialPtr& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024QuadMaterialMap_get_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_int32 key = (const ev_int32) key_j;
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap *pObjectX = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap*) pObjXXXX;
				EarthView::World::Graphic::CMaterialPtr& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024QuadMaterialMap_erase_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_int32 key = (const ev_int32) key_j;
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap *pObjectX = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024QuadMaterialMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap *pObjectX = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024QuadMaterialMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap *pObjectX = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024QuadMaterialMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap *pObjectX = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024QuadMaterialPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair *pObjectX = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->first);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024QuadMaterialPair_set_1first_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair *pObjectX = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair*)pObjXXXX;
				pObjectX->first = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024QuadMaterialPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair *pObjectX = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024QuadMaterialPair_set_1second_1CMaterialPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair *pObjectX = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair*)pObjXXXX;
				pObjectX->second = *(EarthView::World::Graphic::CMaterialPtr*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024QuadMaterialIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator *pObjectX = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024QuadMaterialIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator *pObjectX = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024QuadMaterialIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator *pObjectX = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator*) pObjXXXX;
				ev_int32 __values1 = pObjectX->nextKey();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024QuadMaterialIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator *pObjectX = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator*) pObjXXXX;
				EarthView::World::Graphic::CMaterialPtr __values1 = pObjectX->nextValue();
				EarthView::World::Graphic::CMaterialPtr *returnvalues = new EarthView::World::Graphic::CMaterialPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024QuadMaterialIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator *pObjectX = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator*) pObjXXXX;
				EarthView::World::Graphic::CMaterialPtr* __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024QuadMaterialIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator *pObjectX = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator*) pObjXXXX;
				EarthView::World::Graphic::CMaterialPtr __values1 = pObjectX->next();
				EarthView::World::Graphic::CMaterialPtr *returnvalues = new EarthView::World::Graphic::CMaterialPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024QuadMaterialIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator *pObjectX = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator*) pObjXXXX;
				const EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024QuadMaterialIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator *pObjectX = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator*) pObjXXXX;
				const EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024QuadMaterialIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator *pObjectX = (EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator*) pObjXXXX;
				const EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024RenderSystemOpPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair *pObjectX = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->first);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024RenderSystemOpPair_set_1first_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair *pObjectX = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair*)pObjXXXX;
				pObjectX->first = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024RenderSystemOpPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair *pObjectX = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024RenderSystemOpPair_set_1second_1CRenderSystemOperation(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair *pObjectX = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024RenderSystemOpPairs_push_1back_1RenderSystemOpPair(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				const EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair &t = *(EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair*) t_j;
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs *pObjectX = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024RenderSystemOpPairs_insert_1ev_1uint32_1RenderSystemOpPair(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				const EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair &t = *(EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair*) t_j;
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs *pObjectX = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024RenderSystemOpPairs_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs *pObjectX = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024RenderSystemOpPairs_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs *pObjectX = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024RenderSystemOpPairs_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs& pObjectX = *(EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024RenderSystemOpPairs_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs *pObjectX = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs*) pObjXXXX;
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024RenderSystemOpPairs_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs *pObjectX = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024RenderSystemOpPairs_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs *pObjectX = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024RenderSystemOpPairs_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs *pObjectX = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024RenderSystemOpPairs_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs *pObjectX = (EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_get_1target_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->target);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_set_1target_1CRenderTarget(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjXXXX;
				pObjectX->target = (EarthView::World::Graphic::CRenderTarget*) __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_get_1currentQueueGroupID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->currentQueueGroupID);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_set_1currentQueueGroupID_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjXXXX;
				pObjectX->currentQueueGroupID = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_get_1renderSystemOperations_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->renderSystemOperations);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_set_1renderSystemOperations_1RenderSystemOpPairs(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjXXXX;
				pObjectX->renderSystemOperations = *(EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_get_1visibilityMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->visibilityMask);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_set_1visibilityMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjXXXX;
				pObjectX->visibilityMask = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_get_1lodBias_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->lodBias);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_set_1lodBias_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjXXXX;
				pObjectX->lodBias = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_00024RenderQueueBitSet_any_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*) pObjXXXX;
				ev_bool __values1 = pObjectX->any();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_00024RenderQueueBitSet_none_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*) pObjXXXX;
				ev_bool __values1 = pObjectX->none();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_00024RenderQueueBitSet_count_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*) pObjXXXX;
				ev_int32 __values1 = pObjectX->count();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_00024RenderQueueBitSet_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*) pObjXXXX;
				ev_int32 __values1 = pObjectX->size();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_00024RenderQueueBitSet_test_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint pos_j)
			{
				ev_int32 pos = (ev_int32) pos_j;
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*) pObjXXXX;
				ev_bool __values1 = pObjectX->test(pos);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_00024RenderQueueBitSet_put_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*) pObjXXXX;
				pObjectX->put();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_00024RenderQueueBitSet_put_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint pos_j)
			{
				ev_int32 pos = (ev_int32) pos_j;
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*) pObjXXXX;
				pObjectX->put(pos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_00024RenderQueueBitSet_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*) pObjXXXX;
				pObjectX->reset();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_00024RenderQueueBitSet_reset_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint pos_j)
			{
				ev_int32 pos = (ev_int32) pos_j;
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*) pObjXXXX;
				pObjectX->reset(pos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_00024RenderQueueBitSet_flip_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*) pObjXXXX;
				pObjectX->flip();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_00024RenderQueueBitSet_flip_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint pos_j)
			{
				ev_int32 pos = (ev_int32) pos_j;
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*) pObjXXXX;
				pObjectX->flip(pos);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_get_1renderQueues_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->renderQueues);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_set_1renderQueues_1RenderQueueBitSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjXXXX;
				pObjectX->renderQueues = *(EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_get_1onlyInitial_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->onlyInitial);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_set_1onlyInitial_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjXXXX;
				pObjectX->onlyInitial = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_get_1hasBeenRendered_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->hasBeenRendered);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_set_1hasBeenRendered_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjXXXX;
				pObjectX->hasBeenRendered = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_get_1findVisibleObjects_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->findVisibleObjects);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_set_1findVisibleObjects_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjXXXX;
				pObjectX->findVisibleObjects = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_get_1materialScheme_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->materialScheme;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_set_1materialScheme_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->materialScheme = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_get_1shadowsEnabled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->shadowsEnabled);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024TargetOperation_set_1shadowsEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CTargetOperation*)pObjXXXX;
				pObjectX->shadowsEnabled = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024CompiledState_push_1back_1CTargetOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				const EarthView::World::Graphic::CCompositorInstance::CTargetOperation &t = *(EarthView::World::Graphic::CCompositorInstance::CTargetOperation*) t_j;
				EarthView::World::Graphic::CCompositorInstance::CompiledState *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CompiledState*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024CompiledState_insert_1ev_1uint32_1CTargetOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation &t = *(EarthView::World::Graphic::CCompositorInstance::CTargetOperation*) t_j;
				EarthView::World::Graphic::CCompositorInstance::CompiledState *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CompiledState*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024CompiledState_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CCompositorInstance::CompiledState *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CompiledState*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024CompiledState_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositorInstance::CompiledState *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CompiledState*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024CompiledState_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CCompositorInstance::CompiledState& pObjectX = *(EarthView::World::Graphic::CCompositorInstance::CompiledState*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024CompiledState_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CCompositorInstance::CompiledState *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CompiledState*) pObjXXXX;
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024CompiledState_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositorInstance::CompiledState *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CompiledState*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024CompiledState_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CCompositorInstance::CompiledState *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CompiledState*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024CompiledState_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CCompositorInstance::CompiledState *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CompiledState*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_00024CompiledState_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance::CompiledState *pObjectX = (EarthView::World::Graphic::CCompositorInstance::CompiledState*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_setEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				ev_bool value = (ev_bool) value_j;
				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				pObjectX->setEnabled(value);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositorInstance_getEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				ev_bool __values1 = pObjectX->getEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_setAlive_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				ev_bool value = (ev_bool) value_j;
				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				pObjectX->setAlive(value);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositorInstance_getAlive_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				ev_bool __values1 = pObjectX->getAlive();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CompositorInstance_getTextureInstanceName_1EVString_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong mrtIndex_j)
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
				ev_size_t mrtIndex = (ev_size_t) mrtIndex_j;
				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				EVString __values1 = pObjectX->getTextureInstanceName(name, mrtIndex);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_getTextureInstance_1EVString_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong mrtIndex_j)
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
				ev_size_t mrtIndex = (ev_size_t) mrtIndex_j;
				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				EarthView::World::Graphic::CTexturePtr __values1 = pObjectX->getTextureInstance(name, mrtIndex);
				EarthView::World::Graphic::CTexturePtr *returnvalues = new EarthView::World::Graphic::CTexturePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_getRenderTarget_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				EarthView::World::Graphic::CRenderTarget* __values1 = pObjectX->getRenderTarget(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance__1compileTargetOperations_1CompiledState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiledState_j)
			{
				EarthView::World::Graphic::CCompositorInstance::CompiledState &compiledState = *(EarthView::World::Graphic::CCompositorInstance::CompiledState*) compiledState_j;
				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositorInstanceProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositorInstance::_compileTargetOperations(compiledState);
				}
				else
				{
					pObjectX->_compileTargetOperations(compiledState);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_register_1_1compileTargetOperations_1CompiledState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorInstanceProxy *pObjectX = (JCCompositorInstanceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__compileTargetOperations_CompiledState_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_compileTargetOperations_CompiledState_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance__1compileTargetOperations_1CompiledState_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiledState_j)
			{
				EarthView::World::Graphic::CCompositorInstance::CompiledState &compiledState = *(EarthView::World::Graphic::CCompositorInstance::CompiledState*) compiledState_j;
				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositorInstance::_compileTargetOperations(compiledState);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance__1compileOutputOperation_1CTargetOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong finalState_j)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation &finalState = *(EarthView::World::Graphic::CCompositorInstance::CTargetOperation*) finalState_j;
				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositorInstanceProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositorInstance::_compileOutputOperation(finalState);
				}
				else
				{
					pObjectX->_compileOutputOperation(finalState);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_register_1_1compileOutputOperation_1CTargetOperation(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorInstanceProxy *pObjectX = (JCCompositorInstanceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__compileOutputOperation_CTargetOperation_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_compileOutputOperation_CTargetOperation_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance__1compileOutputOperation_1CTargetOperation_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong finalState_j)
			{
				EarthView::World::Graphic::CCompositorInstance::CTargetOperation &finalState = *(EarthView::World::Graphic::CCompositorInstance::CTargetOperation*) finalState_j;
				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositorInstance::_compileOutputOperation(finalState);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_getCompositor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				EarthView::World::Graphic::CCompositor* __values1 = pObjectX->getCompositor();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_getTechnique_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTechnique* __values1 = pObjectX->getTechnique();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_setTechnique_1CCompositionTechnique_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_tech_j, jboolean reuseTextures_j)
			{
				EarthView::World::Graphic::CCompositionTechnique *ref_tech = (EarthView::World::Graphic::CCompositionTechnique*) ref_tech_j;
				ev_bool reuseTextures = (ev_bool) reuseTextures_j;
				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				pObjectX->setTechnique(ref_tech, reuseTextures);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_setTechnique_1CCompositionTechnique(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_tech_j)
			{
				EarthView::World::Graphic::CCompositionTechnique *ref_tech = (EarthView::World::Graphic::CCompositionTechnique*) ref_tech_j;
				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				pObjectX->setTechnique(ref_tech);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_setScheme_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring schemeName_j, jboolean reuseTextures_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* schemeName_ch = (const ev_char*)__env->GetStringUTFChars(schemeName_j,JNI_FALSE);
				const EVString schemeName = schemeName_ch;
				__env->ReleaseStringUTFChars(schemeName_j, (const char *)schemeName_ch);
				#else
				const ev_wchar* schemeName_ch = (const ev_wchar*)__env->GetStringChars(schemeName_j,JNI_FALSE);
				const EVString schemeName = schemeName_ch;
				__env->ReleaseStringChars(schemeName_j, (const jchar *)schemeName_ch);
				#endif
				ev_bool reuseTextures = (ev_bool) reuseTextures_j;
				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				pObjectX->setScheme(schemeName, reuseTextures);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_setScheme_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring schemeName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* schemeName_ch = (const ev_char*)__env->GetStringUTFChars(schemeName_j,JNI_FALSE);
				const EVString schemeName = schemeName_ch;
				__env->ReleaseStringUTFChars(schemeName_j, (const char *)schemeName_ch);
				#else
				const ev_wchar* schemeName_ch = (const ev_wchar*)__env->GetStringChars(schemeName_j,JNI_FALSE);
				const EVString schemeName = schemeName_ch;
				__env->ReleaseStringChars(schemeName_j, (const jchar *)schemeName_ch);
				#endif
				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				pObjectX->setScheme(schemeName);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_getScheme_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				const EVString& __values1 = pObjectX->getScheme();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_notifyResized_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				pObjectX->notifyResized();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorInstance_getChain_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				EarthView::World::Graphic::CCompositorChain* __values1 = pObjectX->getChain();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_addListener_1CCompositorInstanceListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_l_j)
			{
				EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener *ref_l = (EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener*) ref_l_j;
				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				pObjectX->addListener(ref_l);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance_removeListener_1CCompositorInstanceListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong l_j)
			{
				EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener *l = (EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener*) l_j;
				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				pObjectX->removeListener(l);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance__1fireNotifyMaterialSetup_1ev_1uint32_1CMaterialPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pass_id_j, jlong mat_j)
			{
				ev_uint32 pass_id = (ev_uint32) pass_id_j;
				EarthView::World::Graphic::CMaterialPtr &mat = *(EarthView::World::Graphic::CMaterialPtr*) mat_j;
				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				pObjectX->_fireNotifyMaterialSetup(pass_id, mat);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance__1fireNotifyMaterialRender_1ev_1uint32_1CMaterialPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pass_id_j, jlong mat_j)
			{
				ev_uint32 pass_id = (ev_uint32) pass_id_j;
				EarthView::World::Graphic::CMaterialPtr &mat = *(EarthView::World::Graphic::CMaterialPtr*) mat_j;
				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				pObjectX->_fireNotifyMaterialRender(pass_id, mat);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorInstance__1fireNotifyResourcesCreated_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean forResizeOnly_j)
			{
				ev_bool forResizeOnly = (ev_bool) forResizeOnly_j;
				EarthView::World::Graphic::CCompositorInstance *pObjectX = (EarthView::World::Graphic::CCompositorInstance*) pObjXXXX;
				pObjectX->_fireNotifyResourcesCreated(forResizeOnly);
			}
		}
	}
}
