/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/renderqueueinvocation.h"
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
			class JCRenderQueueInvocationProxy : public EarthView::World::Graphic::CRenderQueueInvocation
			{
			 private:
				EarthView::World::Core::ev_string m_getRenderQueueGroupID_void_callback;
				EarthView::World::Core::ev_string m_getInvocationName_void_callback;
				EarthView::World::Core::ev_string m_setSolidsOrganisation_OrganisationMode_callback;
				EarthView::World::Core::ev_string m_getSolidsOrganisation_void_callback;
				EarthView::World::Core::ev_string m_setSuppressShadows_ev_bool_callback;
				EarthView::World::Core::ev_string m_getSuppressShadows_void_callback;
				EarthView::World::Core::ev_string m_setSuppressRenderStateChanges_ev_bool_callback;
				EarthView::World::Core::ev_string m_getSuppressRenderStateChanges_void_callback;
				EarthView::World::Core::ev_string m_invoke_CRenderQueueGroup_CSceneManager_callback;
			public:
				JCRenderQueueInvocationProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderQueueInvocation(pList)
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
				void register_getRenderQueueGroupID_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRenderQueueGroupID_void_callback = __method;
				}
				void register_getInvocationName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInvocationName_void_callback = __method;
				}
				void register_setSolidsOrganisation_OrganisationMode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setSolidsOrganisation_OrganisationMode_callback = __method;
				}
				void register_getSolidsOrganisation_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSolidsOrganisation_void_callback = __method;
				}
				void register_setSuppressShadows_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setSuppressShadows_ev_bool_callback = __method;
				}
				void register_getSuppressShadows_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSuppressShadows_void_callback = __method;
				}
				void register_setSuppressRenderStateChanges_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setSuppressRenderStateChanges_ev_bool_callback = __method;
				}
				void register_getSuppressRenderStateChanges_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSuppressRenderStateChanges_void_callback = __method;
				}
				void register_invoke_CRenderQueueGroup_CSceneManager_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_invoke_CRenderQueueGroup_CSceneManager_callback = __method;
				}
				virtual ev_uint8 getRenderQueueGroupID() const
				{
					if (this->_gRef != NULL && this->m_getRenderQueueGroupID_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getRenderQueueGroupID_void_callback");
						jshort __values1_j = (jshort)__env->CallShortMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint8 __values1 = (ev_uint8) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderQueueInvocation::getRenderQueueGroupID();
					}
				}
				virtual EVString getInvocationName() const
				{
					if (this->_gRef != NULL && this->m_getInvocationName_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getInvocationName_void_callback");
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
						return this->CRenderQueueInvocation::getInvocationName();
					}
				}
				virtual void setSolidsOrganisation(EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode org)
				{
					if (this->_gRef != NULL && this->m_setSolidsOrganisation_OrganisationMode_callback != "" && this->isCustomExtend())
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
						jint org_j = (jint) org;
						jmethodID __method = __gr->getMethod("setSolidsOrganisation_OrganisationMode_callback");
						__env->CallVoidMethod(__obj, __method , org_j);
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
						return this->CRenderQueueInvocation::setSolidsOrganisation(org);
					}
				}
				virtual EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode getSolidsOrganisation() const
				{
					if (this->_gRef != NULL && this->m_getSolidsOrganisation_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSolidsOrganisation_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode __values1 = (EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderQueueInvocation::getSolidsOrganisation();
					}
				}
				virtual void setSuppressShadows(ev_bool suppress)
				{
					if (this->_gRef != NULL && this->m_setSuppressShadows_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean suppress_j = (jboolean) suppress;
						jmethodID __method = __gr->getMethod("setSuppressShadows_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , suppress_j);
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
						return this->CRenderQueueInvocation::setSuppressShadows(suppress);
					}
				}
				virtual ev_bool getSuppressShadows() const
				{
					if (this->_gRef != NULL && this->m_getSuppressShadows_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSuppressShadows_void_callback");
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
						return this->CRenderQueueInvocation::getSuppressShadows();
					}
				}
				virtual void setSuppressRenderStateChanges(ev_bool suppress)
				{
					if (this->_gRef != NULL && this->m_setSuppressRenderStateChanges_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean suppress_j = (jboolean) suppress;
						jmethodID __method = __gr->getMethod("setSuppressRenderStateChanges_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , suppress_j);
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
						return this->CRenderQueueInvocation::setSuppressRenderStateChanges(suppress);
					}
				}
				virtual ev_bool getSuppressRenderStateChanges() const
				{
					if (this->_gRef != NULL && this->m_getSuppressRenderStateChanges_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSuppressRenderStateChanges_void_callback");
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
						return this->CRenderQueueInvocation::getSuppressRenderStateChanges();
					}
				}
				virtual void invoke(EarthView::World::Graphic::CRenderQueueGroup* group, EarthView::World::Graphic::CSceneManager* targetSceneManager)
				{
					if (this->_gRef != NULL && this->m_invoke_CRenderQueueGroup_CSceneManager_callback != "" && this->isCustomExtend())
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
						jlong group_j = (jlong) group;
						jlong targetSceneManager_j = (jlong) targetSceneManager;
						jmethodID __method = __gr->getMethod("invoke_CRenderQueueGroup_CSceneManager_callback");
						__env->CallVoidMethod(__obj, __method , group_j, targetSceneManager_j);
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
						return this->CRenderQueueInvocation::invoke(group, targetSceneManager);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCRenderQueueInvocationProxy);
			extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_getRenderQueueGroupID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueueInvocation *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderQueueInvocationProxy))
				{
					ev_uint8 __values1 = pObjectX->EarthView::World::Graphic::CRenderQueueInvocation::getRenderQueueGroupID();
					jshort __values1_j = (jshort) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint8 __values1 = pObjectX->getRenderQueueGroupID();
					jshort __values1_j = (jshort) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_register_1getRenderQueueGroupID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderQueueInvocationProxy *pObjectX = (JCRenderQueueInvocationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRenderQueueGroupID_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRenderQueueGroupID_void_callback", "()S");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_getRenderQueueGroupID_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueueInvocation *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjXXXX;
				ev_uint8 __values1 = pObjectX->EarthView::World::Graphic::CRenderQueueInvocation::getRenderQueueGroupID();
				jshort __values1_j = (jshort) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_getInvocationName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueueInvocation *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderQueueInvocationProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CRenderQueueInvocation::getInvocationName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getInvocationName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_register_1getInvocationName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderQueueInvocationProxy *pObjectX = (JCRenderQueueInvocationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInvocationName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInvocationName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_getInvocationName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueueInvocation *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CRenderQueueInvocation::getInvocationName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_setSolidsOrganisation_1OrganisationMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint org_j)
			{
				EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode org = (EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode) org_j;
				EarthView::World::Graphic::CRenderQueueInvocation *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderQueueInvocationProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderQueueInvocation::setSolidsOrganisation(org);
				}
				else
				{
					pObjectX->setSolidsOrganisation(org);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_register_1setSolidsOrganisation_1OrganisationMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderQueueInvocationProxy *pObjectX = (JCRenderQueueInvocationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setSolidsOrganisation_OrganisationMode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setSolidsOrganisation_OrganisationMode_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_setSolidsOrganisation_1OrganisationMode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint org_j)
			{
				EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode org = (EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode) org_j;
				EarthView::World::Graphic::CRenderQueueInvocation *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderQueueInvocation::setSolidsOrganisation(org);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_getSolidsOrganisation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueueInvocation *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderQueueInvocationProxy))
				{
					EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode __values1 = pObjectX->EarthView::World::Graphic::CRenderQueueInvocation::getSolidsOrganisation();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode __values1 = pObjectX->getSolidsOrganisation();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_register_1getSolidsOrganisation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderQueueInvocationProxy *pObjectX = (JCRenderQueueInvocationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSolidsOrganisation_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSolidsOrganisation_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_getSolidsOrganisation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueueInvocation *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjXXXX;
				EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode __values1 = pObjectX->EarthView::World::Graphic::CRenderQueueInvocation::getSolidsOrganisation();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_setSuppressShadows_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean suppress_j)
			{
				ev_bool suppress = (ev_bool) suppress_j;
				EarthView::World::Graphic::CRenderQueueInvocation *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderQueueInvocationProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderQueueInvocation::setSuppressShadows(suppress);
				}
				else
				{
					pObjectX->setSuppressShadows(suppress);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_register_1setSuppressShadows_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderQueueInvocationProxy *pObjectX = (JCRenderQueueInvocationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setSuppressShadows_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setSuppressShadows_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_setSuppressShadows_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean suppress_j)
			{
				ev_bool suppress = (ev_bool) suppress_j;
				EarthView::World::Graphic::CRenderQueueInvocation *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderQueueInvocation::setSuppressShadows(suppress);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_getSuppressShadows_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueueInvocation *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderQueueInvocationProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderQueueInvocation::getSuppressShadows();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getSuppressShadows();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_register_1getSuppressShadows_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderQueueInvocationProxy *pObjectX = (JCRenderQueueInvocationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSuppressShadows_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSuppressShadows_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_getSuppressShadows_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueueInvocation *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderQueueInvocation::getSuppressShadows();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_setSuppressRenderStateChanges_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean suppress_j)
			{
				ev_bool suppress = (ev_bool) suppress_j;
				EarthView::World::Graphic::CRenderQueueInvocation *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderQueueInvocationProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderQueueInvocation::setSuppressRenderStateChanges(suppress);
				}
				else
				{
					pObjectX->setSuppressRenderStateChanges(suppress);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_register_1setSuppressRenderStateChanges_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderQueueInvocationProxy *pObjectX = (JCRenderQueueInvocationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setSuppressRenderStateChanges_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setSuppressRenderStateChanges_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_setSuppressRenderStateChanges_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean suppress_j)
			{
				ev_bool suppress = (ev_bool) suppress_j;
				EarthView::World::Graphic::CRenderQueueInvocation *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderQueueInvocation::setSuppressRenderStateChanges(suppress);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_getSuppressRenderStateChanges_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueueInvocation *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderQueueInvocationProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderQueueInvocation::getSuppressRenderStateChanges();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getSuppressRenderStateChanges();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_register_1getSuppressRenderStateChanges_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderQueueInvocationProxy *pObjectX = (JCRenderQueueInvocationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSuppressRenderStateChanges_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSuppressRenderStateChanges_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_getSuppressRenderStateChanges_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueueInvocation *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderQueueInvocation::getSuppressRenderStateChanges();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_invoke_1CRenderQueueGroup_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong group_j, jlong targetSceneManager_j)
			{
				EarthView::World::Graphic::CRenderQueueGroup *group = (EarthView::World::Graphic::CRenderQueueGroup*) group_j;
				EarthView::World::Graphic::CSceneManager *targetSceneManager = (EarthView::World::Graphic::CSceneManager*) targetSceneManager_j;
				EarthView::World::Graphic::CRenderQueueInvocation *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderQueueInvocationProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderQueueInvocation::invoke(group, targetSceneManager);
				}
				else
				{
					pObjectX->invoke(group, targetSceneManager);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_register_1invoke_1CRenderQueueGroup_1CSceneManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderQueueInvocationProxy *pObjectX = (JCRenderQueueInvocationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_invoke_CRenderQueueGroup_CSceneManager_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"invoke_CRenderQueueGroup_CSceneManager_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_invoke_1CRenderQueueGroup_1CSceneManager_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong group_j, jlong targetSceneManager_j)
			{
				EarthView::World::Graphic::CRenderQueueGroup *group = (EarthView::World::Graphic::CRenderQueueGroup*) group_j;
				EarthView::World::Graphic::CSceneManager *targetSceneManager = (EarthView::World::Graphic::CSceneManager*) targetSceneManager_j;
				EarthView::World::Graphic::CRenderQueueInvocation *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocation*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderQueueInvocation::invoke(group, targetSceneManager);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_get_1RENDER_1QUEUE_1INVOCATION_1SHADOWS_1void(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::CRenderQueueInvocation::RENDER_QUEUE_INVOCATION_SHADOWS;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocation_set_1RENDER_1QUEUE_1INVOCATION_1SHADOWS_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
			{
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				EarthView::World::Graphic::CRenderQueueInvocation::RENDER_QUEUE_INVOCATION_SHADOWS = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationList_push_1back_1CRenderQueueInvocation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CRenderQueueInvocation *&ref_t = *(EarthView::World::Graphic::CRenderQueueInvocation**) ref_t_j;
				EarthView::World::Graphic::RenderQueueInvocationList *pObjectX = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderQueueInvocationList *pObjectX = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderQueueInvocationList *pObjectX = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueueInvocation*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderQueueInvocationList *pObjectX = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueueInvocation*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationList_insert_1ev_1uint32_1CRenderQueueInvocation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CRenderQueueInvocation *&ref_t = *(EarthView::World::Graphic::CRenderQueueInvocation**) ref_t_j;
				EarthView::World::Graphic::RenderQueueInvocationList *pObjectX = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjXXXX;
				pObjectX->insert(pos, ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::RenderQueueInvocationList *pObjectX = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::RenderQueueInvocationList *pObjectX = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::RenderQueueInvocationList& pObjectX = *(EarthView::World::Graphic::RenderQueueInvocationList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CRenderQueueInvocation*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::RenderQueueInvocationList *pObjectX = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueueInvocation*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::RenderQueueInvocationList *pObjectX = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::RenderQueueInvocationList *pObjectX = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::RenderQueueInvocationList *pObjectX = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderQueueInvocationList *pObjectX = (EarthView::World::Graphic::RenderQueueInvocationList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::RenderQueueInvocationIterator *pObjectX = (EarthView::World::Graphic::RenderQueueInvocationIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderQueueInvocationIterator *pObjectX = (EarthView::World::Graphic::RenderQueueInvocationIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderQueueInvocationIterator *pObjectX = (EarthView::World::Graphic::RenderQueueInvocationIterator*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueueInvocation* __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderQueueInvocationIterator *pObjectX = (EarthView::World::Graphic::RenderQueueInvocationIterator*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueueInvocation* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderQueueInvocationIterator *pObjectX = (EarthView::World::Graphic::RenderQueueInvocationIterator*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueueInvocation* __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderQueueInvocationIterator *pObjectX = (EarthView::World::Graphic::RenderQueueInvocationIterator*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueueInvocation* __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationSequence_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueueInvocationSequence *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocationSequence*) pObjXXXX;
				const EVString& __values1 = pObjectX->getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationSequence_add_1ev_1uint8_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort renderQueueGroupID_j, jstring invocationName_j)
			{
				ev_uint8 renderQueueGroupID = (ev_uint8) renderQueueGroupID_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* invocationName_ch = (const ev_char*)__env->GetStringUTFChars(invocationName_j,JNI_FALSE);
				const EVString invocationName = invocationName_ch;
				__env->ReleaseStringUTFChars(invocationName_j, (const char *)invocationName_ch);
				#else
				const ev_wchar* invocationName_ch = (const ev_wchar*)__env->GetStringChars(invocationName_j,JNI_FALSE);
				const EVString invocationName = invocationName_ch;
				__env->ReleaseStringChars(invocationName_j, (const jchar *)invocationName_ch);
				#endif
				EarthView::World::Graphic::CRenderQueueInvocationSequence *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocationSequence*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueueInvocation* __values1 = pObjectX->add(renderQueueGroupID, invocationName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationSequence_add_1CRenderQueueInvocation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_i_j)
			{
				EarthView::World::Graphic::CRenderQueueInvocation *ref_i = (EarthView::World::Graphic::CRenderQueueInvocation*) ref_i_j;
				EarthView::World::Graphic::CRenderQueueInvocationSequence *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocationSequence*) pObjXXXX;
				pObjectX->add(ref_i);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationSequence_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueueInvocationSequence *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocationSequence*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationSequence_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueInvocationSequence *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocationSequence*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationSequence_get_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::CRenderQueueInvocationSequence *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocationSequence*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueueInvocation* __values1 = pObjectX->get(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationSequence_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::CRenderQueueInvocationSequence *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocationSequence*) pObjXXXX;
				pObjectX->remove(index);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueInvocationSequence_iterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueInvocationSequence *pObjectX = (EarthView::World::Graphic::CRenderQueueInvocationSequence*) pObjXXXX;
				EarthView::World::Graphic::RenderQueueInvocationIterator __values1 = pObjectX->iterator();
				EarthView::World::Graphic::RenderQueueInvocationIterator *returnvalues = new EarthView::World::Graphic::RenderQueueInvocationIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
		}
	}
}
