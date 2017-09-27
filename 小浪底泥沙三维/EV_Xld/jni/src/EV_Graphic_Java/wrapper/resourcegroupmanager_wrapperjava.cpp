/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/resourcegroupmanager.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class JCResourceGroupListenerProxy : public EarthView::World::Graphic::CResourceGroupListener
			{
			 private:
				EarthView::World::Core::ev_string m_resourceGroupScriptingStarted_EVString_ev_size_t_callback;
				EarthView::World::Core::ev_string m_scriptParseStarted_EVString_ev_bool_callback;
				EarthView::World::Core::ev_string m_scriptParseEnded_EVString_ev_bool_callback;
				EarthView::World::Core::ev_string m_resourceGroupScriptingEnded_EVString_callback;
				EarthView::World::Core::ev_string m_resourceGroupPrepareStarted_EVString_ev_size_t_callback;
				EarthView::World::Core::ev_string m_resourcePrepareStarted_ResourcePtr_callback;
				EarthView::World::Core::ev_string m_resourcePrepareEnded_void_callback;
				EarthView::World::Core::ev_string m_worldGeometryPrepareStageStarted_EVString_callback;
				EarthView::World::Core::ev_string m_worldGeometryPrepareStageEnded_void_callback;
				EarthView::World::Core::ev_string m_resourceGroupPrepareEnded_EVString_callback;
				EarthView::World::Core::ev_string m_resourceGroupLoadStarted_EVString_ev_size_t_callback;
				EarthView::World::Core::ev_string m_resourceLoadStarted_ResourcePtr_callback;
				EarthView::World::Core::ev_string m_resourceLoadEnded_void_callback;
				EarthView::World::Core::ev_string m_worldGeometryStageStarted_EVString_callback;
				EarthView::World::Core::ev_string m_worldGeometryStageEnded_void_callback;
				EarthView::World::Core::ev_string m_resourceGroupLoadEnded_EVString_callback;
			public:
				JCResourceGroupListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CResourceGroupListener(pList)
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
				void register_resourceGroupScriptingStarted_EVString_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resourceGroupScriptingStarted_EVString_ev_size_t_callback = __method;
				}
				void register_scriptParseStarted_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_scriptParseStarted_EVString_ev_bool_callback = __method;
				}
				void register_scriptParseEnded_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_scriptParseEnded_EVString_ev_bool_callback = __method;
				}
				void register_resourceGroupScriptingEnded_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resourceGroupScriptingEnded_EVString_callback = __method;
				}
				void register_resourceGroupPrepareStarted_EVString_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resourceGroupPrepareStarted_EVString_ev_size_t_callback = __method;
				}
				void register_resourcePrepareStarted_ResourcePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resourcePrepareStarted_ResourcePtr_callback = __method;
				}
				void register_resourcePrepareEnded_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resourcePrepareEnded_void_callback = __method;
				}
				void register_worldGeometryPrepareStageStarted_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_worldGeometryPrepareStageStarted_EVString_callback = __method;
				}
				void register_worldGeometryPrepareStageEnded_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_worldGeometryPrepareStageEnded_void_callback = __method;
				}
				void register_resourceGroupPrepareEnded_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resourceGroupPrepareEnded_EVString_callback = __method;
				}
				void register_resourceGroupLoadStarted_EVString_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resourceGroupLoadStarted_EVString_ev_size_t_callback = __method;
				}
				void register_resourceLoadStarted_ResourcePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resourceLoadStarted_ResourcePtr_callback = __method;
				}
				void register_resourceLoadEnded_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resourceLoadEnded_void_callback = __method;
				}
				void register_worldGeometryStageStarted_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_worldGeometryStageStarted_EVString_callback = __method;
				}
				void register_worldGeometryStageEnded_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_worldGeometryStageEnded_void_callback = __method;
				}
				void register_resourceGroupLoadEnded_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resourceGroupLoadEnded_EVString_callback = __method;
				}
				virtual void resourceGroupScriptingStarted(const EVString& groupName, ev_size_t scriptCount)
				{
					if (this->_gRef != NULL && this->m_resourceGroupScriptingStarted_EVString_ev_size_t_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jlong scriptCount_j = (jlong) scriptCount;
						jmethodID __method = __gr->getMethod("resourceGroupScriptingStarted_EVString_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , groupName_j, scriptCount_j);
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
						return this->CResourceGroupListener::resourceGroupScriptingStarted(groupName, scriptCount);
					}
				}
				virtual void scriptParseStarted(const EVString& scriptName, ev_bool& skipThisScript)
				{
					if (this->_gRef != NULL && this->m_scriptParseStarted_EVString_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring scriptName_wch = scriptName;
						jstring scriptName_j = __env->NewString((const jchar*)scriptName_wch.getString(), scriptName_wch.size());
						jlong skipThisScript_j = (jlong) &skipThisScript;
						jmethodID __method = __gr->getMethod("scriptParseStarted_EVString_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , scriptName_j, skipThisScript_j);
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
						return this->CResourceGroupListener::scriptParseStarted(scriptName, skipThisScript);
					}
				}
				virtual void scriptParseEnded(const EVString& scriptName, ev_bool skipped)
				{
					if (this->_gRef != NULL && this->m_scriptParseEnded_EVString_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring scriptName_wch = scriptName;
						jstring scriptName_j = __env->NewString((const jchar*)scriptName_wch.getString(), scriptName_wch.size());
						jboolean skipped_j = (jboolean) skipped;
						jmethodID __method = __gr->getMethod("scriptParseEnded_EVString_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , scriptName_j, skipped_j);
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
						return this->CResourceGroupListener::scriptParseEnded(scriptName, skipped);
					}
				}
				virtual void resourceGroupScriptingEnded(const EVString& groupName)
				{
					if (this->_gRef != NULL && this->m_resourceGroupScriptingEnded_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jmethodID __method = __gr->getMethod("resourceGroupScriptingEnded_EVString_callback");
						__env->CallVoidMethod(__obj, __method , groupName_j);
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
						return this->CResourceGroupListener::resourceGroupScriptingEnded(groupName);
					}
				}
				virtual void resourceGroupPrepareStarted(const EVString& groupName, ev_size_t resourceCount)
				{
					if (this->_gRef != NULL && this->m_resourceGroupPrepareStarted_EVString_ev_size_t_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jlong resourceCount_j = (jlong) resourceCount;
						jmethodID __method = __gr->getMethod("resourceGroupPrepareStarted_EVString_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , groupName_j, resourceCount_j);
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
						return this->CResourceGroupListener::resourceGroupPrepareStarted(groupName, resourceCount);
					}
				}
				virtual void resourcePrepareStarted(const EarthView::World::Graphic::ResourcePtr& resource)
				{
					if (this->_gRef != NULL && this->m_resourcePrepareStarted_ResourcePtr_callback != "" && this->isCustomExtend())
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
						jlong resource_j = (jlong) &resource;
						jmethodID __method = __gr->getMethod("resourcePrepareStarted_ResourcePtr_callback");
						__env->CallVoidMethod(__obj, __method , resource_j);
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
						return this->CResourceGroupListener::resourcePrepareStarted(resource);
					}
				}
				virtual void resourcePrepareEnded()
				{
					if (this->_gRef != NULL && this->m_resourcePrepareEnded_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("resourcePrepareEnded_void_callback");
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
						return this->CResourceGroupListener::resourcePrepareEnded();
					}
				}
				virtual void worldGeometryPrepareStageStarted(const EVString& description)
				{
					if (this->_gRef != NULL && this->m_worldGeometryPrepareStageStarted_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring description_wch = description;
						jstring description_j = __env->NewString((const jchar*)description_wch.getString(), description_wch.size());
						jmethodID __method = __gr->getMethod("worldGeometryPrepareStageStarted_EVString_callback");
						__env->CallVoidMethod(__obj, __method , description_j);
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
						return this->CResourceGroupListener::worldGeometryPrepareStageStarted(description);
					}
				}
				virtual void worldGeometryPrepareStageEnded()
				{
					if (this->_gRef != NULL && this->m_worldGeometryPrepareStageEnded_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("worldGeometryPrepareStageEnded_void_callback");
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
						return this->CResourceGroupListener::worldGeometryPrepareStageEnded();
					}
				}
				virtual void resourceGroupPrepareEnded(const EVString& groupName)
				{
					if (this->_gRef != NULL && this->m_resourceGroupPrepareEnded_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jmethodID __method = __gr->getMethod("resourceGroupPrepareEnded_EVString_callback");
						__env->CallVoidMethod(__obj, __method , groupName_j);
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
						return this->CResourceGroupListener::resourceGroupPrepareEnded(groupName);
					}
				}
				virtual void resourceGroupLoadStarted(const EVString& groupName, ev_size_t resourceCount)
				{
					if (this->_gRef != NULL && this->m_resourceGroupLoadStarted_EVString_ev_size_t_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jlong resourceCount_j = (jlong) resourceCount;
						jmethodID __method = __gr->getMethod("resourceGroupLoadStarted_EVString_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , groupName_j, resourceCount_j);
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
						return this->CResourceGroupListener::resourceGroupLoadStarted(groupName, resourceCount);
					}
				}
				virtual void resourceLoadStarted(const EarthView::World::Graphic::ResourcePtr& resource)
				{
					if (this->_gRef != NULL && this->m_resourceLoadStarted_ResourcePtr_callback != "" && this->isCustomExtend())
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
						jlong resource_j = (jlong) &resource;
						jmethodID __method = __gr->getMethod("resourceLoadStarted_ResourcePtr_callback");
						__env->CallVoidMethod(__obj, __method , resource_j);
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
						return this->CResourceGroupListener::resourceLoadStarted(resource);
					}
				}
				virtual void resourceLoadEnded()
				{
					if (this->_gRef != NULL && this->m_resourceLoadEnded_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("resourceLoadEnded_void_callback");
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
						return this->CResourceGroupListener::resourceLoadEnded();
					}
				}
				virtual void worldGeometryStageStarted(const EVString& description)
				{
					if (this->_gRef != NULL && this->m_worldGeometryStageStarted_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring description_wch = description;
						jstring description_j = __env->NewString((const jchar*)description_wch.getString(), description_wch.size());
						jmethodID __method = __gr->getMethod("worldGeometryStageStarted_EVString_callback");
						__env->CallVoidMethod(__obj, __method , description_j);
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
						return this->CResourceGroupListener::worldGeometryStageStarted(description);
					}
				}
				virtual void worldGeometryStageEnded()
				{
					if (this->_gRef != NULL && this->m_worldGeometryStageEnded_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("worldGeometryStageEnded_void_callback");
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
						return this->CResourceGroupListener::worldGeometryStageEnded();
					}
				}
				virtual void resourceGroupLoadEnded(const EVString& groupName)
				{
					if (this->_gRef != NULL && this->m_resourceGroupLoadEnded_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jmethodID __method = __gr->getMethod("resourceGroupLoadEnded_EVString_callback");
						__env->CallVoidMethod(__obj, __method , groupName_j);
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
						return this->CResourceGroupListener::resourceGroupLoadEnded(groupName);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCResourceGroupListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_resourceGroupScriptingStarted_1EVString_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j, jlong scriptCount_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				ev_size_t scriptCount = (ev_size_t) scriptCount_j;
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceGroupListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceGroupListener::resourceGroupScriptingStarted(groupName, scriptCount);
				}
				else
				{
					pObjectX->resourceGroupScriptingStarted(groupName, scriptCount);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_register_1resourceGroupScriptingStarted_1EVString_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceGroupListenerProxy *pObjectX = (JCResourceGroupListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resourceGroupScriptingStarted_EVString_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resourceGroupScriptingStarted_EVString_ev_size_t_callback", "(Ljava/lang/String;J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_resourceGroupScriptingStarted_1EVString_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j, jlong scriptCount_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				ev_size_t scriptCount = (ev_size_t) scriptCount_j;
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceGroupListener::resourceGroupScriptingStarted(groupName, scriptCount);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_scriptParseStarted_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring scriptName_j, jlong skipThisScript_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* scriptName_ch = (const ev_char*)__env->GetStringUTFChars(scriptName_j,JNI_FALSE);
				const EVString scriptName = scriptName_ch;
				__env->ReleaseStringUTFChars(scriptName_j, (const char *)scriptName_ch);
				#else
				const ev_wchar* scriptName_ch = (const ev_wchar*)__env->GetStringChars(scriptName_j,JNI_FALSE);
				const EVString scriptName = scriptName_ch;
				__env->ReleaseStringChars(scriptName_j, (const jchar *)scriptName_ch);
				#endif
				ev_bool &skipThisScript = *(ev_bool*) skipThisScript_j;
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceGroupListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceGroupListener::scriptParseStarted(scriptName, skipThisScript);
				}
				else
				{
					pObjectX->scriptParseStarted(scriptName, skipThisScript);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_register_1scriptParseStarted_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceGroupListenerProxy *pObjectX = (JCResourceGroupListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_scriptParseStarted_EVString_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"scriptParseStarted_EVString_ev_bool_callback", "(Ljava/lang/String;J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_scriptParseStarted_1EVString_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring scriptName_j, jlong skipThisScript_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* scriptName_ch = (const ev_char*)__env->GetStringUTFChars(scriptName_j,JNI_FALSE);
				const EVString scriptName = scriptName_ch;
				__env->ReleaseStringUTFChars(scriptName_j, (const char *)scriptName_ch);
				#else
				const ev_wchar* scriptName_ch = (const ev_wchar*)__env->GetStringChars(scriptName_j,JNI_FALSE);
				const EVString scriptName = scriptName_ch;
				__env->ReleaseStringChars(scriptName_j, (const jchar *)scriptName_ch);
				#endif
				ev_bool &skipThisScript = *(ev_bool*) skipThisScript_j;
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceGroupListener::scriptParseStarted(scriptName, skipThisScript);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_scriptParseEnded_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring scriptName_j, jboolean skipped_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* scriptName_ch = (const ev_char*)__env->GetStringUTFChars(scriptName_j,JNI_FALSE);
				const EVString scriptName = scriptName_ch;
				__env->ReleaseStringUTFChars(scriptName_j, (const char *)scriptName_ch);
				#else
				const ev_wchar* scriptName_ch = (const ev_wchar*)__env->GetStringChars(scriptName_j,JNI_FALSE);
				const EVString scriptName = scriptName_ch;
				__env->ReleaseStringChars(scriptName_j, (const jchar *)scriptName_ch);
				#endif
				ev_bool skipped = (ev_bool) skipped_j;
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceGroupListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceGroupListener::scriptParseEnded(scriptName, skipped);
				}
				else
				{
					pObjectX->scriptParseEnded(scriptName, skipped);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_register_1scriptParseEnded_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceGroupListenerProxy *pObjectX = (JCResourceGroupListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_scriptParseEnded_EVString_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"scriptParseEnded_EVString_ev_bool_callback", "(Ljava/lang/String;Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_scriptParseEnded_1EVString_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring scriptName_j, jboolean skipped_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* scriptName_ch = (const ev_char*)__env->GetStringUTFChars(scriptName_j,JNI_FALSE);
				const EVString scriptName = scriptName_ch;
				__env->ReleaseStringUTFChars(scriptName_j, (const char *)scriptName_ch);
				#else
				const ev_wchar* scriptName_ch = (const ev_wchar*)__env->GetStringChars(scriptName_j,JNI_FALSE);
				const EVString scriptName = scriptName_ch;
				__env->ReleaseStringChars(scriptName_j, (const jchar *)scriptName_ch);
				#endif
				ev_bool skipped = (ev_bool) skipped_j;
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceGroupListener::scriptParseEnded(scriptName, skipped);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_resourceGroupScriptingEnded_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceGroupListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceGroupListener::resourceGroupScriptingEnded(groupName);
				}
				else
				{
					pObjectX->resourceGroupScriptingEnded(groupName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_register_1resourceGroupScriptingEnded_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceGroupListenerProxy *pObjectX = (JCResourceGroupListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resourceGroupScriptingEnded_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resourceGroupScriptingEnded_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_resourceGroupScriptingEnded_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceGroupListener::resourceGroupScriptingEnded(groupName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_resourceGroupPrepareStarted_1EVString_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j, jlong resourceCount_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				ev_size_t resourceCount = (ev_size_t) resourceCount_j;
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceGroupListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceGroupListener::resourceGroupPrepareStarted(groupName, resourceCount);
				}
				else
				{
					pObjectX->resourceGroupPrepareStarted(groupName, resourceCount);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_register_1resourceGroupPrepareStarted_1EVString_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceGroupListenerProxy *pObjectX = (JCResourceGroupListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resourceGroupPrepareStarted_EVString_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resourceGroupPrepareStarted_EVString_ev_size_t_callback", "(Ljava/lang/String;J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_resourceGroupPrepareStarted_1EVString_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j, jlong resourceCount_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				ev_size_t resourceCount = (ev_size_t) resourceCount_j;
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceGroupListener::resourceGroupPrepareStarted(groupName, resourceCount);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_resourcePrepareStarted_1ResourcePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong resource_j)
			{
				const EarthView::World::Graphic::ResourcePtr &resource = *(EarthView::World::Graphic::ResourcePtr*) resource_j;
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceGroupListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceGroupListener::resourcePrepareStarted(resource);
				}
				else
				{
					pObjectX->resourcePrepareStarted(resource);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_register_1resourcePrepareStarted_1ResourcePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceGroupListenerProxy *pObjectX = (JCResourceGroupListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resourcePrepareStarted_ResourcePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resourcePrepareStarted_ResourcePtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_resourcePrepareStarted_1ResourcePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong resource_j)
			{
				const EarthView::World::Graphic::ResourcePtr &resource = *(EarthView::World::Graphic::ResourcePtr*) resource_j;
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceGroupListener::resourcePrepareStarted(resource);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_resourcePrepareEnded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceGroupListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceGroupListener::resourcePrepareEnded();
				}
				else
				{
					pObjectX->resourcePrepareEnded();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_register_1resourcePrepareEnded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceGroupListenerProxy *pObjectX = (JCResourceGroupListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resourcePrepareEnded_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resourcePrepareEnded_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_resourcePrepareEnded_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceGroupListener::resourcePrepareEnded();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_worldGeometryPrepareStageStarted_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring description_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* description_ch = (const ev_char*)__env->GetStringUTFChars(description_j,JNI_FALSE);
				const EVString description = description_ch;
				__env->ReleaseStringUTFChars(description_j, (const char *)description_ch);
				#else
				const ev_wchar* description_ch = (const ev_wchar*)__env->GetStringChars(description_j,JNI_FALSE);
				const EVString description = description_ch;
				__env->ReleaseStringChars(description_j, (const jchar *)description_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceGroupListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceGroupListener::worldGeometryPrepareStageStarted(description);
				}
				else
				{
					pObjectX->worldGeometryPrepareStageStarted(description);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_register_1worldGeometryPrepareStageStarted_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceGroupListenerProxy *pObjectX = (JCResourceGroupListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_worldGeometryPrepareStageStarted_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"worldGeometryPrepareStageStarted_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_worldGeometryPrepareStageStarted_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring description_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* description_ch = (const ev_char*)__env->GetStringUTFChars(description_j,JNI_FALSE);
				const EVString description = description_ch;
				__env->ReleaseStringUTFChars(description_j, (const char *)description_ch);
				#else
				const ev_wchar* description_ch = (const ev_wchar*)__env->GetStringChars(description_j,JNI_FALSE);
				const EVString description = description_ch;
				__env->ReleaseStringChars(description_j, (const jchar *)description_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceGroupListener::worldGeometryPrepareStageStarted(description);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_worldGeometryPrepareStageEnded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceGroupListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceGroupListener::worldGeometryPrepareStageEnded();
				}
				else
				{
					pObjectX->worldGeometryPrepareStageEnded();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_register_1worldGeometryPrepareStageEnded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceGroupListenerProxy *pObjectX = (JCResourceGroupListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_worldGeometryPrepareStageEnded_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"worldGeometryPrepareStageEnded_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_worldGeometryPrepareStageEnded_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceGroupListener::worldGeometryPrepareStageEnded();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_resourceGroupPrepareEnded_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceGroupListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceGroupListener::resourceGroupPrepareEnded(groupName);
				}
				else
				{
					pObjectX->resourceGroupPrepareEnded(groupName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_register_1resourceGroupPrepareEnded_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceGroupListenerProxy *pObjectX = (JCResourceGroupListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resourceGroupPrepareEnded_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resourceGroupPrepareEnded_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_resourceGroupPrepareEnded_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceGroupListener::resourceGroupPrepareEnded(groupName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_resourceGroupLoadStarted_1EVString_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j, jlong resourceCount_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				ev_size_t resourceCount = (ev_size_t) resourceCount_j;
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceGroupListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceGroupListener::resourceGroupLoadStarted(groupName, resourceCount);
				}
				else
				{
					pObjectX->resourceGroupLoadStarted(groupName, resourceCount);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_register_1resourceGroupLoadStarted_1EVString_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceGroupListenerProxy *pObjectX = (JCResourceGroupListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resourceGroupLoadStarted_EVString_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resourceGroupLoadStarted_EVString_ev_size_t_callback", "(Ljava/lang/String;J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_resourceGroupLoadStarted_1EVString_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j, jlong resourceCount_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				ev_size_t resourceCount = (ev_size_t) resourceCount_j;
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceGroupListener::resourceGroupLoadStarted(groupName, resourceCount);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_resourceLoadStarted_1ResourcePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong resource_j)
			{
				const EarthView::World::Graphic::ResourcePtr &resource = *(EarthView::World::Graphic::ResourcePtr*) resource_j;
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceGroupListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceGroupListener::resourceLoadStarted(resource);
				}
				else
				{
					pObjectX->resourceLoadStarted(resource);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_register_1resourceLoadStarted_1ResourcePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceGroupListenerProxy *pObjectX = (JCResourceGroupListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resourceLoadStarted_ResourcePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resourceLoadStarted_ResourcePtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_resourceLoadStarted_1ResourcePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong resource_j)
			{
				const EarthView::World::Graphic::ResourcePtr &resource = *(EarthView::World::Graphic::ResourcePtr*) resource_j;
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceGroupListener::resourceLoadStarted(resource);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_resourceLoadEnded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceGroupListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceGroupListener::resourceLoadEnded();
				}
				else
				{
					pObjectX->resourceLoadEnded();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_register_1resourceLoadEnded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceGroupListenerProxy *pObjectX = (JCResourceGroupListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resourceLoadEnded_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resourceLoadEnded_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_resourceLoadEnded_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceGroupListener::resourceLoadEnded();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_worldGeometryStageStarted_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring description_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* description_ch = (const ev_char*)__env->GetStringUTFChars(description_j,JNI_FALSE);
				const EVString description = description_ch;
				__env->ReleaseStringUTFChars(description_j, (const char *)description_ch);
				#else
				const ev_wchar* description_ch = (const ev_wchar*)__env->GetStringChars(description_j,JNI_FALSE);
				const EVString description = description_ch;
				__env->ReleaseStringChars(description_j, (const jchar *)description_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceGroupListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceGroupListener::worldGeometryStageStarted(description);
				}
				else
				{
					pObjectX->worldGeometryStageStarted(description);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_register_1worldGeometryStageStarted_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceGroupListenerProxy *pObjectX = (JCResourceGroupListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_worldGeometryStageStarted_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"worldGeometryStageStarted_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_worldGeometryStageStarted_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring description_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* description_ch = (const ev_char*)__env->GetStringUTFChars(description_j,JNI_FALSE);
				const EVString description = description_ch;
				__env->ReleaseStringUTFChars(description_j, (const char *)description_ch);
				#else
				const ev_wchar* description_ch = (const ev_wchar*)__env->GetStringChars(description_j,JNI_FALSE);
				const EVString description = description_ch;
				__env->ReleaseStringChars(description_j, (const jchar *)description_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceGroupListener::worldGeometryStageStarted(description);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_worldGeometryStageEnded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceGroupListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceGroupListener::worldGeometryStageEnded();
				}
				else
				{
					pObjectX->worldGeometryStageEnded();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_register_1worldGeometryStageEnded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceGroupListenerProxy *pObjectX = (JCResourceGroupListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_worldGeometryStageEnded_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"worldGeometryStageEnded_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_worldGeometryStageEnded_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceGroupListener::worldGeometryStageEnded();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_resourceGroupLoadEnded_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceGroupListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceGroupListener::resourceGroupLoadEnded(groupName);
				}
				else
				{
					pObjectX->resourceGroupLoadEnded(groupName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_register_1resourceGroupLoadEnded_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceGroupListenerProxy *pObjectX = (JCResourceGroupListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resourceGroupLoadEnded_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resourceGroupLoadEnded_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupListener_resourceGroupLoadEnded_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupListener *pObjectX = (EarthView::World::Graphic::CResourceGroupListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceGroupListener::resourceGroupLoadEnded(groupName);
			}
			class JCResourceLoadingListenerProxy : public EarthView::World::Graphic::CResourceLoadingListener
			{
			 private:
				EarthView::World::Core::ev_string m_resourceLoading_EVString_EVString_CResource_callback;
				EarthView::World::Core::ev_string m_resourceStreamOpened_EVString_EVString_CResource_DataStreamPtr_callback;
				EarthView::World::Core::ev_string m_resourceCollision_CResource_CResourceManager_callback;
			public:
				JCResourceLoadingListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CResourceLoadingListener(pList)
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
				void register_resourceLoading_EVString_EVString_CResource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resourceLoading_EVString_EVString_CResource_callback = __method;
				}
				void register_resourceStreamOpened_EVString_EVString_CResource_DataStreamPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resourceStreamOpened_EVString_EVString_CResource_DataStreamPtr_callback = __method;
				}
				void register_resourceCollision_CResource_CResourceManager_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resourceCollision_CResource_CResourceManager_callback = __method;
				}
				virtual EarthView::World::Core::DataStreamPtr resourceLoading(const EVString& name, const EVString& group, EarthView::World::Graphic::CResource* resource)
				{
					if (this->_gRef != NULL && this->m_resourceLoading_EVString_EVString_CResource_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jlong resource_j = (jlong) resource;
						jmethodID __method = __gr->getMethod("resourceLoading_EVString_EVString_CResource_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, resource_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::DataStreamPtr __values1 = *(EarthView::World::Core::DataStreamPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CResourceLoadingListener::resourceLoading(name, group, resource);
					}
				}
				virtual void resourceStreamOpened(const EVString& name, const EVString& group, EarthView::World::Graphic::CResource* resource, EarthView::World::Core::DataStreamPtr& dataStream)
				{
					if (this->_gRef != NULL && this->m_resourceStreamOpened_EVString_EVString_CResource_DataStreamPtr_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jlong resource_j = (jlong) resource;
						jlong dataStream_j = (jlong) &dataStream;
						jmethodID __method = __gr->getMethod("resourceStreamOpened_EVString_EVString_CResource_DataStreamPtr_callback");
						__env->CallVoidMethod(__obj, __method , name_j, group_j, resource_j, dataStream_j);
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
						return this->CResourceLoadingListener::resourceStreamOpened(name, group, resource, dataStream);
					}
				}
				virtual ev_bool resourceCollision(EarthView::World::Graphic::CResource* resource, EarthView::World::Graphic::CResourceManager* resourceManager)
				{
					if (this->_gRef != NULL && this->m_resourceCollision_CResource_CResourceManager_callback != "" && this->isCustomExtend())
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
						jlong resource_j = (jlong) resource;
						jlong resourceManager_j = (jlong) resourceManager;
						jmethodID __method = __gr->getMethod("resourceCollision_CResource_CResourceManager_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , resource_j, resourceManager_j);
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
						return this->CResourceLoadingListener::resourceCollision(resource, resourceManager);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCResourceLoadingListenerProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceLoadingListener_resourceLoading_1EVString_1EVString_1CResource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jlong resource_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				EarthView::World::Graphic::CResource *resource = (EarthView::World::Graphic::CResource*) resource_j;
				EarthView::World::Graphic::CResourceLoadingListener *pObjectX = (EarthView::World::Graphic::CResourceLoadingListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceLoadingListenerProxy))
				{
					EarthView::World::Core::DataStreamPtr __values1 = pObjectX->EarthView::World::Graphic::CResourceLoadingListener::resourceLoading(name, group, resource);
					EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::DataStreamPtr __values1 = pObjectX->resourceLoading(name, group, resource);
					EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceLoadingListener_register_1resourceLoading_1EVString_1EVString_1CResource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceLoadingListenerProxy *pObjectX = (JCResourceLoadingListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resourceLoading_EVString_EVString_CResource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resourceLoading_EVString_EVString_CResource_callback", "(Ljava/lang/String;Ljava/lang/String;J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceLoadingListener_resourceLoading_1EVString_1EVString_1CResource_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jlong resource_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				EarthView::World::Graphic::CResource *resource = (EarthView::World::Graphic::CResource*) resource_j;
				EarthView::World::Graphic::CResourceLoadingListener *pObjectX = (EarthView::World::Graphic::CResourceLoadingListener*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->EarthView::World::Graphic::CResourceLoadingListener::resourceLoading(name, group, resource);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceLoadingListener_resourceStreamOpened_1EVString_1EVString_1CResource_1DataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jlong resource_j, jlong dataStream_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				EarthView::World::Graphic::CResource *resource = (EarthView::World::Graphic::CResource*) resource_j;
				EarthView::World::Core::DataStreamPtr &dataStream = *(EarthView::World::Core::DataStreamPtr*) dataStream_j;
				EarthView::World::Graphic::CResourceLoadingListener *pObjectX = (EarthView::World::Graphic::CResourceLoadingListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceLoadingListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceLoadingListener::resourceStreamOpened(name, group, resource, dataStream);
				}
				else
				{
					pObjectX->resourceStreamOpened(name, group, resource, dataStream);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceLoadingListener_register_1resourceStreamOpened_1EVString_1EVString_1CResource_1DataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceLoadingListenerProxy *pObjectX = (JCResourceLoadingListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resourceStreamOpened_EVString_EVString_CResource_DataStreamPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resourceStreamOpened_EVString_EVString_CResource_DataStreamPtr_callback", "(Ljava/lang/String;Ljava/lang/String;JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceLoadingListener_resourceStreamOpened_1EVString_1EVString_1CResource_1DataStreamPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jlong resource_j, jlong dataStream_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				EarthView::World::Graphic::CResource *resource = (EarthView::World::Graphic::CResource*) resource_j;
				EarthView::World::Core::DataStreamPtr &dataStream = *(EarthView::World::Core::DataStreamPtr*) dataStream_j;
				EarthView::World::Graphic::CResourceLoadingListener *pObjectX = (EarthView::World::Graphic::CResourceLoadingListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceLoadingListener::resourceStreamOpened(name, group, resource, dataStream);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceLoadingListener_resourceCollision_1CResource_1CResourceManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong resource_j, jlong resourceManager_j)
			{
				EarthView::World::Graphic::CResource *resource = (EarthView::World::Graphic::CResource*) resource_j;
				EarthView::World::Graphic::CResourceManager *resourceManager = (EarthView::World::Graphic::CResourceManager*) resourceManager_j;
				EarthView::World::Graphic::CResourceLoadingListener *pObjectX = (EarthView::World::Graphic::CResourceLoadingListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceLoadingListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CResourceLoadingListener::resourceCollision(resource, resourceManager);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->resourceCollision(resource, resourceManager);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceLoadingListener_register_1resourceCollision_1CResource_1CResourceManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceLoadingListenerProxy *pObjectX = (JCResourceLoadingListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resourceCollision_CResource_CResourceManager_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resourceCollision_CResource_CResourceManager_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceLoadingListener_resourceCollision_1CResource_1CResourceManager_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong resource_j, jlong resourceManager_j)
			{
				EarthView::World::Graphic::CResource *resource = (EarthView::World::Graphic::CResource*) resource_j;
				EarthView::World::Graphic::CResourceManager *resourceManager = (EarthView::World::Graphic::CResourceManager*) resourceManager_j;
				EarthView::World::Graphic::CResourceLoadingListener *pObjectX = (EarthView::World::Graphic::CResourceLoadingListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CResourceLoadingListener::resourceCollision(resource, resourceManager);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CResourceGroupManager& __values1 = EarthView::World::Graphic::CResourceGroupManager::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CResourceGroupManager* __values1 = EarthView::World::Graphic::CResourceGroupManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_get_1DEFAULT_1RESOURCE_1GROUP_1NAME_1void(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::CResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_set_1DEFAULT_1RESOURCE_1GROUP_1NAME_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
			{
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				EarthView::World::Graphic::CResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_get_1INTERNAL_1RESOURCE_1GROUP_1NAME_1void(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::CResourceGroupManager::INTERNAL_RESOURCE_GROUP_NAME;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_set_1INTERNAL_1RESOURCE_1GROUP_1NAME_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
			{
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				EarthView::World::Graphic::CResourceGroupManager::INTERNAL_RESOURCE_GROUP_NAME = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_get_1AUTODETECT_1RESOURCE_1GROUP_1NAME_1void(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::CResourceGroupManager::AUTODETECT_RESOURCE_GROUP_NAME;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_set_1AUTODETECT_1RESOURCE_1GROUP_1NAME_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
			{
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				EarthView::World::Graphic::CResourceGroupManager::AUTODETECT_RESOURCE_GROUP_NAME = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_get_1RESOURCE_1SYSTEM_1NUM_1REFERENCE_1COUNTS_1void(JNIEnv *__env, jclass __clazz)
			{
				jlong __values1_j = (jlong) (EarthView::World::Graphic::CResourceGroupManager::RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_set_1RESOURCE_1SYSTEM_1NUM_1REFERENCE_1COUNTS_1ev_1size_1t(JNIEnv *__env, jclass __clazz, jlong __values1_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceDeclaration_get_1resourceName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->resourceName;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceDeclaration_set_1resourceName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->resourceName = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceDeclaration_get_1resourceType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->resourceType;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceDeclaration_set_1resourceType_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->resourceType = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceDeclaration_get_1loader_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->loader);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceDeclaration_set_1loader_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration*)pObjXXXX;
				pObjectX->loader = (EarthView::World::Graphic::CManualResourceLoader*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceDeclaration_get_1parameters_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->parameters);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceDeclaration_set_1parameters_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration*)pObjXXXX;
				pObjectX->parameters = *(EarthView::World::Core::CommonStringPairList*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceDeclarationList_push_1back_1ResourceDeclaration(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration &t = *(EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration*) t_j;
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceDeclarationList_push_1front_1ResourceDeclaration(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration &t = *(EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration*) t_j;
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjXXXX;
				pObjectX->push_front(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceDeclarationList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceDeclarationList_pop_1front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjXXXX;
				pObjectX->pop_front();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceDeclarationList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjXXXX;
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceDeclarationList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjXXXX;
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceDeclarationList_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjXXXX;
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceDeclarationList_insert_1ev_1uint32_1ResourceDeclaration(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration &t = *(EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration*) t_j;
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceDeclarationList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceDeclarationList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceDeclarationList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceDeclarationList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceDeclarationList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceManagerMap_push_1EVString_1CResourceManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong ref_val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CResourceManager *&ref_val = *(EarthView::World::Graphic::CResourceManager**) ref_val_j;
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceManagerMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceManagerMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap& pObjectX = *(EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CResourceManager*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceManagerMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap*) pObjXXXX;
				EarthView::World::Graphic::CResourceManager*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceManagerMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceManagerMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceManagerMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceManagerMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceManagerMapPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->first;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceManagerMapPair_set_1first_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->first = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceManagerMapPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceManagerMapPair_set_1second_1CResourceManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::CResourceManager*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceManagerIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceManagerIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceManagerIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->nextKey();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceManagerIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator*) pObjXXXX;
				EarthView::World::Graphic::CResourceManager* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceManagerIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator*) pObjXXXX;
				EarthView::World::Graphic::CResourceManager** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceManagerIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator*) pObjXXXX;
				EarthView::World::Graphic::CResourceManager* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceManagerIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator*) pObjXXXX;
				const EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceManagerIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator*) pObjXXXX;
				const EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceManagerIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator*) pObjXXXX;
				const EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceLocation_get_1archive_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceLocation *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceLocation*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->archive);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceLocation_set_1archive_1CArchive(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceLocation *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceLocation*)pObjXXXX;
				pObjectX->archive = (EarthView::World::Core::CArchive*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceLocation_get_1recursive_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceLocation *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceLocation*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->recursive);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceLocation_set_1recursive_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceLocation *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceLocation*)pObjXXXX;
				pObjectX->recursive = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LocationList_push_1back_1CResourceLocation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceLocation *&ref_t = *(EarthView::World::Graphic::CResourceGroupManager::CResourceLocation**) ref_t_j;
				EarthView::World::Graphic::CResourceGroupManager::LocationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LocationList_push_1front_1CResourceLocation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceLocation *&ref_t = *(EarthView::World::Graphic::CResourceGroupManager::CResourceLocation**) ref_t_j;
				EarthView::World::Graphic::CResourceGroupManager::LocationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjXXXX;
				pObjectX->push_front(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LocationList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::LocationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LocationList_pop_1front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::LocationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjXXXX;
				pObjectX->pop_front();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LocationList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::LocationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjXXXX;
				EarthView::World::Graphic::CResourceGroupManager::CResourceLocation*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LocationList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::LocationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjXXXX;
				EarthView::World::Graphic::CResourceGroupManager::CResourceLocation*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LocationList_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CResourceGroupManager::LocationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjXXXX;
				EarthView::World::Graphic::CResourceGroupManager::CResourceLocation*& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LocationList_insert_1ev_1uint32_1CResourceLocation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CResourceGroupManager::CResourceLocation *&ref_t = *(EarthView::World::Graphic::CResourceGroupManager::CResourceLocation**) ref_t_j;
				EarthView::World::Graphic::CResourceGroupManager::LocationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjXXXX;
				pObjectX->insert(pos, ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LocationList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CResourceGroupManager::LocationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LocationList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceGroupManager::LocationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LocationList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceGroupManager::LocationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LocationList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CResourceGroupManager::LocationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LocationList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::LocationList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceLocationIndex_push_1EVString_1CArchive(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong ref_val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Core::CArchive *&ref_val = *(EarthView::World::Core::CArchive**) ref_val_j;
				EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceLocationIndex_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceLocationIndex_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex& pObjectX = *(EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Core::CArchive*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceLocationIndex_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex*) pObjXXXX;
				EarthView::World::Core::CArchive*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceLocationIndex_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceLocationIndex_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceLocationIndex_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceLocationIndex_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LoadUnloadResourceList_push_1back_1ResourcePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::ResourcePtr &t = *(EarthView::World::Graphic::ResourcePtr*) t_j;
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LoadUnloadResourceList_push_1front_1ResourcePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::ResourcePtr &t = *(EarthView::World::Graphic::ResourcePtr*) t_j;
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjXXXX;
				pObjectX->push_front(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LoadUnloadResourceList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LoadUnloadResourceList_pop_1front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjXXXX;
				pObjectX->pop_front();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LoadUnloadResourceList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LoadUnloadResourceList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LoadUnloadResourceList_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LoadUnloadResourceList_insert_1ev_1uint32_1ResourcePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::ResourcePtr &t = *(EarthView::World::Graphic::ResourcePtr*) t_j;
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LoadUnloadResourceList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LoadUnloadResourceList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LoadUnloadResourceList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LoadUnloadResourceList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024LoadUnloadResourceList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_00024StatusHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CResourceGroupManager::CResourceGroup::UNINITIALSED,
					CResourceGroupManager::CResourceGroup::INITIALISING,
					CResourceGroupManager::CResourceGroup::INITIALISED,
					CResourceGroupManager::CResourceGroup::LOADING,
					CResourceGroupManager::CResourceGroup::LOADED
				};
				jintArray array = __env->NewIntArray(5);
				__env->SetIntArrayRegion(array, 0, 5, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_get_1name_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->name;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_set_1name_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->name = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_get_1groupStatus_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->groupStatus);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_set_1groupStatus_1Status(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjXXXX;
				pObjectX->groupStatus = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::Status)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_get_1locationList_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->locationList);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_set_1locationList_1LocationList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjXXXX;
				pObjectX->locationList = *(EarthView::World::Graphic::CResourceGroupManager::LocationList*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_get_1resourceIndexCaseSensitive_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->resourceIndexCaseSensitive);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_set_1resourceIndexCaseSensitive_1ResourceLocationIndex(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjXXXX;
				pObjectX->resourceIndexCaseSensitive = *(EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_get_1resourceIndexCaseInsensitive_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->resourceIndexCaseInsensitive);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_set_1resourceIndexCaseInsensitive_1ResourceLocationIndex(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjXXXX;
				pObjectX->resourceIndexCaseInsensitive = *(EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_get_1resourceDeclarations_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->resourceDeclarations);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_set_1resourceDeclarations_1ResourceDeclarationList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjXXXX;
				pObjectX->resourceDeclarations = *(EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_00024LoadUnloadResourceOrderMap_push_1Real_1LoadUnloadResourceList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j, jlong ref_val_j)
			{
				const Real key = (const Real) key_j;
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList *&ref_val = *(EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList**) ref_val_j;
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_00024LoadUnloadResourceOrderMap_exist_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j)
			{
				const Real key = (const Real) key_j;
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_00024LoadUnloadResourceOrderMap_OperatorIndex_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble key_j )
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap& pObjectX = *(EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap*) pObjXXXX;
				const Real key = (const Real) key_j;
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_00024LoadUnloadResourceOrderMap_get_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j)
			{
				const Real key = (const Real) key_j;
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap*) pObjXXXX;
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_00024LoadUnloadResourceOrderMap_erase_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j)
			{
				const Real key = (const Real) key_j;
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_00024LoadUnloadResourceOrderMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_00024LoadUnloadResourceOrderMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_00024LoadUnloadResourceOrderMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_get_1loadResourceOrderMap_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->loadResourceOrderMap);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_set_1loadResourceOrderMap_1LoadUnloadResourceOrderMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjXXXX;
				pObjectX->loadResourceOrderMap = *(EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap*) __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_get_1worldGeometry_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->worldGeometry;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_set_1worldGeometry_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->worldGeometry = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_get_1worldGeometrySceneManager_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->worldGeometrySceneManager);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_set_1worldGeometrySceneManager_1CSceneManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjXXXX;
				pObjectX->worldGeometrySceneManager = (EarthView::World::Graphic::CSceneManager*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_get_1inGlobalPool_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->inGlobalPool);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_set_1inGlobalPool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjXXXX;
				pObjectX->inGlobalPool = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_addToIndex_1EVString_1CArchive(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jlong ref_arch_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Core::CArchive *ref_arch = (EarthView::World::Core::CArchive*) ref_arch_j;
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*) pObjXXXX;
				pObjectX->addToIndex(filename, ref_arch);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_removeFromIndex_1EVString_1CArchive(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jlong arch_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Core::CArchive *arch = (EarthView::World::Core::CArchive*) arch_j;
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*) pObjXXXX;
				pObjectX->removeFromIndex(filename, arch);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_removeFromIndex_1CArchive(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong arch_j)
			{
				EarthView::World::Core::CArchive *arch = (EarthView::World::Core::CArchive*) arch_j;
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*) pObjXXXX;
				pObjectX->removeFromIndex(arch);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_get_1mRefCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->mRefCount);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_00024ResourceGroup_set_1mRefCount_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *pObjectX = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjXXXX;
				pObjectX->mRefCount = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_createResourceGroup_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean inGlobalPool_j)
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
				const ev_bool inGlobalPool = (ev_bool) inGlobalPool_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->createResourceGroup(name, inGlobalPool);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_createResourceGroup_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->createResourceGroup(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_createResourceGroupWithRefCount_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean inGlobalPool_j)
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
				const ev_bool inGlobalPool = (ev_bool) inGlobalPool_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->createResourceGroupWithRefCount(name, inGlobalPool);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_createResourceGroupWithRefCount_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->createResourceGroupWithRefCount(name);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_getResourceGroup_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup* __values1 = pObjectX->getResourceGroup(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_initialiseResourceGroup_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->initialiseResourceGroup(name);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_parseScript_1DataStreamPtr_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jstring groupName_j)
			{
				EarthView::World::Core::DataStreamPtr stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->parseScript(stream, groupName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_initialiseAllResourceGroups_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->initialiseAllResourceGroups();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_prepareResourceGroup_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean prepareMainResources_j, jboolean prepareWorldGeom_j)
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
				ev_bool prepareMainResources = (ev_bool) prepareMainResources_j;
				ev_bool prepareWorldGeom = (ev_bool) prepareWorldGeom_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->prepareResourceGroup(name, prepareMainResources, prepareWorldGeom);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_prepareResourceGroup_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean prepareMainResources_j)
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
				ev_bool prepareMainResources = (ev_bool) prepareMainResources_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->prepareResourceGroup(name, prepareMainResources);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_prepareResourceGroup_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->prepareResourceGroup(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_loadResourceGroup_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean loadMainResources_j, jboolean loadWorldGeom_j)
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
				ev_bool loadMainResources = (ev_bool) loadMainResources_j;
				ev_bool loadWorldGeom = (ev_bool) loadWorldGeom_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->loadResourceGroup(name, loadMainResources, loadWorldGeom);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_loadResourceGroup_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean loadMainResources_j)
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
				ev_bool loadMainResources = (ev_bool) loadMainResources_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->loadResourceGroup(name, loadMainResources);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_loadResourceGroup_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->loadResourceGroup(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_unloadResourceGroup_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean reloadableOnly_j)
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
				ev_bool reloadableOnly = (ev_bool) reloadableOnly_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->unloadResourceGroup(name, reloadableOnly);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_unloadResourceGroup_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->unloadResourceGroup(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_unloadUnreferencedResourcesInGroup_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean reloadableOnly_j)
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
				ev_bool reloadableOnly = (ev_bool) reloadableOnly_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->unloadUnreferencedResourcesInGroup(name, reloadableOnly);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_unloadUnreferencedResourcesInGroup_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->unloadUnreferencedResourcesInGroup(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_clearResourceGroup_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->clearResourceGroup(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_destroyResourceGroup_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->destroyResourceGroup(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_destroyResourceGroupWithRefCount_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->destroyResourceGroupWithRefCount(name);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_isResourceGroupInitialised_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->isResourceGroupInitialised(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_isResourceGroupLoaded_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->isResourceGroupLoaded(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_resourceGroupExists_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->resourceGroupExists(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_addResourceLocation_1EVString_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring locType_j, jstring resGroup_j, jboolean recursive_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* locType_ch = (const ev_char*)__env->GetStringUTFChars(locType_j,JNI_FALSE);
				const EVString locType = locType_ch;
				__env->ReleaseStringUTFChars(locType_j, (const char *)locType_ch);
				#else
				const ev_wchar* locType_ch = (const ev_wchar*)__env->GetStringChars(locType_j,JNI_FALSE);
				const EVString locType = locType_ch;
				__env->ReleaseStringChars(locType_j, (const jchar *)locType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resGroup_ch = (const ev_char*)__env->GetStringUTFChars(resGroup_j,JNI_FALSE);
				const EVString resGroup = resGroup_ch;
				__env->ReleaseStringUTFChars(resGroup_j, (const char *)resGroup_ch);
				#else
				const ev_wchar* resGroup_ch = (const ev_wchar*)__env->GetStringChars(resGroup_j,JNI_FALSE);
				const EVString resGroup = resGroup_ch;
				__env->ReleaseStringChars(resGroup_j, (const jchar *)resGroup_ch);
				#endif
				ev_bool recursive = (ev_bool) recursive_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->addResourceLocation(name, locType, resGroup, recursive);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_addResourceLocation_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring locType_j, jstring resGroup_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* locType_ch = (const ev_char*)__env->GetStringUTFChars(locType_j,JNI_FALSE);
				const EVString locType = locType_ch;
				__env->ReleaseStringUTFChars(locType_j, (const char *)locType_ch);
				#else
				const ev_wchar* locType_ch = (const ev_wchar*)__env->GetStringChars(locType_j,JNI_FALSE);
				const EVString locType = locType_ch;
				__env->ReleaseStringChars(locType_j, (const jchar *)locType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resGroup_ch = (const ev_char*)__env->GetStringUTFChars(resGroup_j,JNI_FALSE);
				const EVString resGroup = resGroup_ch;
				__env->ReleaseStringUTFChars(resGroup_j, (const char *)resGroup_ch);
				#else
				const ev_wchar* resGroup_ch = (const ev_wchar*)__env->GetStringChars(resGroup_j,JNI_FALSE);
				const EVString resGroup = resGroup_ch;
				__env->ReleaseStringChars(resGroup_j, (const jchar *)resGroup_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->addResourceLocation(name, locType, resGroup);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_addResourceLocation_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring locType_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* locType_ch = (const ev_char*)__env->GetStringUTFChars(locType_j,JNI_FALSE);
				const EVString locType = locType_ch;
				__env->ReleaseStringUTFChars(locType_j, (const char *)locType_ch);
				#else
				const ev_wchar* locType_ch = (const ev_wchar*)__env->GetStringChars(locType_j,JNI_FALSE);
				const EVString locType = locType_ch;
				__env->ReleaseStringChars(locType_j, (const jchar *)locType_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->addResourceLocation(name, locType);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_removeResourceLocation_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring resGroup_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resGroup_ch = (const ev_char*)__env->GetStringUTFChars(resGroup_j,JNI_FALSE);
				const EVString resGroup = resGroup_ch;
				__env->ReleaseStringUTFChars(resGroup_j, (const char *)resGroup_ch);
				#else
				const ev_wchar* resGroup_ch = (const ev_wchar*)__env->GetStringChars(resGroup_j,JNI_FALSE);
				const EVString resGroup = resGroup_ch;
				__env->ReleaseStringChars(resGroup_j, (const jchar *)resGroup_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->removeResourceLocation(name, resGroup);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_removeResourceLocation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->removeResourceLocation(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_setResourceLocation_1EVString_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring locType_j, jstring resGroup_j, jboolean recursive_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* locType_ch = (const ev_char*)__env->GetStringUTFChars(locType_j,JNI_FALSE);
				const EVString locType = locType_ch;
				__env->ReleaseStringUTFChars(locType_j, (const char *)locType_ch);
				#else
				const ev_wchar* locType_ch = (const ev_wchar*)__env->GetStringChars(locType_j,JNI_FALSE);
				const EVString locType = locType_ch;
				__env->ReleaseStringChars(locType_j, (const jchar *)locType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resGroup_ch = (const ev_char*)__env->GetStringUTFChars(resGroup_j,JNI_FALSE);
				const EVString resGroup = resGroup_ch;
				__env->ReleaseStringUTFChars(resGroup_j, (const char *)resGroup_ch);
				#else
				const ev_wchar* resGroup_ch = (const ev_wchar*)__env->GetStringChars(resGroup_j,JNI_FALSE);
				const EVString resGroup = resGroup_ch;
				__env->ReleaseStringChars(resGroup_j, (const jchar *)resGroup_ch);
				#endif
				ev_bool recursive = (ev_bool) recursive_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->setResourceLocation(name, locType, resGroup, recursive);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_setResourceLocation_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring locType_j, jstring resGroup_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* locType_ch = (const ev_char*)__env->GetStringUTFChars(locType_j,JNI_FALSE);
				const EVString locType = locType_ch;
				__env->ReleaseStringUTFChars(locType_j, (const char *)locType_ch);
				#else
				const ev_wchar* locType_ch = (const ev_wchar*)__env->GetStringChars(locType_j,JNI_FALSE);
				const EVString locType = locType_ch;
				__env->ReleaseStringChars(locType_j, (const jchar *)locType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resGroup_ch = (const ev_char*)__env->GetStringUTFChars(resGroup_j,JNI_FALSE);
				const EVString resGroup = resGroup_ch;
				__env->ReleaseStringUTFChars(resGroup_j, (const char *)resGroup_ch);
				#else
				const ev_wchar* resGroup_ch = (const ev_wchar*)__env->GetStringChars(resGroup_j,JNI_FALSE);
				const EVString resGroup = resGroup_ch;
				__env->ReleaseStringChars(resGroup_j, (const jchar *)resGroup_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->setResourceLocation(name, locType, resGroup);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_setResourceLocation_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring locType_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* locType_ch = (const ev_char*)__env->GetStringUTFChars(locType_j,JNI_FALSE);
				const EVString locType = locType_ch;
				__env->ReleaseStringUTFChars(locType_j, (const char *)locType_ch);
				#else
				const ev_wchar* locType_ch = (const ev_wchar*)__env->GetStringChars(locType_j,JNI_FALSE);
				const EVString locType = locType_ch;
				__env->ReleaseStringChars(locType_j, (const jchar *)locType_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->setResourceLocation(name, locType);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_resourceLocationExists_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring resGroup_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resGroup_ch = (const ev_char*)__env->GetStringUTFChars(resGroup_j,JNI_FALSE);
				const EVString resGroup = resGroup_ch;
				__env->ReleaseStringUTFChars(resGroup_j, (const char *)resGroup_ch);
				#else
				const ev_wchar* resGroup_ch = (const ev_wchar*)__env->GetStringChars(resGroup_j,JNI_FALSE);
				const EVString resGroup = resGroup_ch;
				__env->ReleaseStringChars(resGroup_j, (const jchar *)resGroup_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->resourceLocationExists(name, resGroup);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_resourceLocationExists_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->resourceLocationExists(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_declareResource_1EVString_1EVString_1EVString_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring resourceType_j, jstring groupName_j, jlong loadParameters_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resourceType_ch = (const ev_char*)__env->GetStringUTFChars(resourceType_j,JNI_FALSE);
				const EVString resourceType = resourceType_ch;
				__env->ReleaseStringUTFChars(resourceType_j, (const char *)resourceType_ch);
				#else
				const ev_wchar* resourceType_ch = (const ev_wchar*)__env->GetStringChars(resourceType_j,JNI_FALSE);
				const EVString resourceType = resourceType_ch;
				__env->ReleaseStringChars(resourceType_j, (const jchar *)resourceType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				const EarthView::World::Core::CommonStringPairList &loadParameters = *(EarthView::World::Core::CommonStringPairList*) loadParameters_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->declareResource(name, resourceType, groupName, loadParameters);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_declareResource_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring resourceType_j, jstring groupName_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resourceType_ch = (const ev_char*)__env->GetStringUTFChars(resourceType_j,JNI_FALSE);
				const EVString resourceType = resourceType_ch;
				__env->ReleaseStringUTFChars(resourceType_j, (const char *)resourceType_ch);
				#else
				const ev_wchar* resourceType_ch = (const ev_wchar*)__env->GetStringChars(resourceType_j,JNI_FALSE);
				const EVString resourceType = resourceType_ch;
				__env->ReleaseStringChars(resourceType_j, (const jchar *)resourceType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->declareResource(name, resourceType, groupName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_declareResource_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring resourceType_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resourceType_ch = (const ev_char*)__env->GetStringUTFChars(resourceType_j,JNI_FALSE);
				const EVString resourceType = resourceType_ch;
				__env->ReleaseStringUTFChars(resourceType_j, (const char *)resourceType_ch);
				#else
				const ev_wchar* resourceType_ch = (const ev_wchar*)__env->GetStringChars(resourceType_j,JNI_FALSE);
				const EVString resourceType = resourceType_ch;
				__env->ReleaseStringChars(resourceType_j, (const jchar *)resourceType_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->declareResource(name, resourceType);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_declareResource_1EVString_1EVString_1EVString_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring resourceType_j, jstring groupName_j, jlong ref_loader_j, jlong loadParameters_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resourceType_ch = (const ev_char*)__env->GetStringUTFChars(resourceType_j,JNI_FALSE);
				const EVString resourceType = resourceType_ch;
				__env->ReleaseStringUTFChars(resourceType_j, (const char *)resourceType_ch);
				#else
				const ev_wchar* resourceType_ch = (const ev_wchar*)__env->GetStringChars(resourceType_j,JNI_FALSE);
				const EVString resourceType = resourceType_ch;
				__env->ReleaseStringChars(resourceType_j, (const jchar *)resourceType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList &loadParameters = *(EarthView::World::Core::CommonStringPairList*) loadParameters_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->declareResource(name, resourceType, groupName, ref_loader, loadParameters);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_declareResource_1EVString_1EVString_1EVString_1CManualResourceLoader(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring resourceType_j, jstring groupName_j, jlong ref_loader_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resourceType_ch = (const ev_char*)__env->GetStringUTFChars(resourceType_j,JNI_FALSE);
				const EVString resourceType = resourceType_ch;
				__env->ReleaseStringUTFChars(resourceType_j, (const char *)resourceType_ch);
				#else
				const ev_wchar* resourceType_ch = (const ev_wchar*)__env->GetStringChars(resourceType_j,JNI_FALSE);
				const EVString resourceType = resourceType_ch;
				__env->ReleaseStringChars(resourceType_j, (const jchar *)resourceType_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->declareResource(name, resourceType, groupName, ref_loader);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_undeclareResource_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->undeclareResource(name, groupName);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_openResource_1EVString_1EVString_1ev_1bool_1CResource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resourceName_j, jstring groupName_j, jboolean searchGroupsIfNotFound_j, jlong resourceBeingLoaded_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resourceName_ch = (const ev_char*)__env->GetStringUTFChars(resourceName_j,JNI_FALSE);
				const EVString resourceName = resourceName_ch;
				__env->ReleaseStringUTFChars(resourceName_j, (const char *)resourceName_ch);
				#else
				const ev_wchar* resourceName_ch = (const ev_wchar*)__env->GetStringChars(resourceName_j,JNI_FALSE);
				const EVString resourceName = resourceName_ch;
				__env->ReleaseStringChars(resourceName_j, (const jchar *)resourceName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				ev_bool searchGroupsIfNotFound = (ev_bool) searchGroupsIfNotFound_j;
				EarthView::World::Graphic::CResource *resourceBeingLoaded = (EarthView::World::Graphic::CResource*) resourceBeingLoaded_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->openResource(resourceName, groupName, searchGroupsIfNotFound, resourceBeingLoaded);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_openResource_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resourceName_j, jstring groupName_j, jboolean searchGroupsIfNotFound_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resourceName_ch = (const ev_char*)__env->GetStringUTFChars(resourceName_j,JNI_FALSE);
				const EVString resourceName = resourceName_ch;
				__env->ReleaseStringUTFChars(resourceName_j, (const char *)resourceName_ch);
				#else
				const ev_wchar* resourceName_ch = (const ev_wchar*)__env->GetStringChars(resourceName_j,JNI_FALSE);
				const EVString resourceName = resourceName_ch;
				__env->ReleaseStringChars(resourceName_j, (const jchar *)resourceName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				ev_bool searchGroupsIfNotFound = (ev_bool) searchGroupsIfNotFound_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->openResource(resourceName, groupName, searchGroupsIfNotFound);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_openResource_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resourceName_j, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resourceName_ch = (const ev_char*)__env->GetStringUTFChars(resourceName_j,JNI_FALSE);
				const EVString resourceName = resourceName_ch;
				__env->ReleaseStringUTFChars(resourceName_j, (const char *)resourceName_ch);
				#else
				const ev_wchar* resourceName_ch = (const ev_wchar*)__env->GetStringChars(resourceName_j,JNI_FALSE);
				const EVString resourceName = resourceName_ch;
				__env->ReleaseStringChars(resourceName_j, (const jchar *)resourceName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->openResource(resourceName, groupName);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_openResource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resourceName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resourceName_ch = (const ev_char*)__env->GetStringUTFChars(resourceName_j,JNI_FALSE);
				const EVString resourceName = resourceName_ch;
				__env->ReleaseStringUTFChars(resourceName_j, (const char *)resourceName_ch);
				#else
				const ev_wchar* resourceName_ch = (const ev_wchar*)__env->GetStringChars(resourceName_j,JNI_FALSE);
				const EVString resourceName = resourceName_ch;
				__env->ReleaseStringChars(resourceName_j, (const jchar *)resourceName_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->openResource(resourceName);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_openResources_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pattern_j, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Core::DataStreamListPtr __values1 = pObjectX->openResources(pattern, groupName);
				EarthView::World::Core::DataStreamListPtr *returnvalues = new EarthView::World::Core::DataStreamListPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_openResources_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pattern_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Core::DataStreamListPtr __values1 = pObjectX->openResources(pattern);
				EarthView::World::Core::DataStreamListPtr *returnvalues = new EarthView::World::Core::DataStreamListPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_listResourceNames_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j, jboolean dirs_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				ev_bool dirs = (ev_bool) dirs_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Core::StringVectorPtr __values1 = pObjectX->listResourceNames(groupName, dirs);
				EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_listResourceNames_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Core::StringVectorPtr __values1 = pObjectX->listResourceNames(groupName);
				EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_listResourceFileInfo_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j, jboolean dirs_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				ev_bool dirs = (ev_bool) dirs_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Core::FileInfoListPtr __values1 = pObjectX->listResourceFileInfo(groupName, dirs);
				EarthView::World::Core::FileInfoListPtr *returnvalues = new EarthView::World::Core::FileInfoListPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_listResourceFileInfo_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Core::FileInfoListPtr __values1 = pObjectX->listResourceFileInfo(groupName);
				EarthView::World::Core::FileInfoListPtr *returnvalues = new EarthView::World::Core::FileInfoListPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_findResourceNames_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j, jstring pattern_j, jboolean dirs_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				ev_bool dirs = (ev_bool) dirs_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Core::StringVectorPtr __values1 = pObjectX->findResourceNames(groupName, pattern, dirs);
				EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_findResourceNames_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j, jstring pattern_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Core::StringVectorPtr __values1 = pObjectX->findResourceNames(groupName, pattern);
				EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_resourceExists_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring group_j, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->resourceExists(group, filename);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_resourceExists_1CResourceGroup_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong group_j, jstring filename_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *group = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*) group_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->resourceExists(group, filename);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_resourceExistsInAnyGroup_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->resourceExistsInAnyGroup(filename);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_findGroupContainingResource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				const EVString& __values1 = pObjectX->findGroupContainingResource(filename);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_findResourceFileInfo_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring group_j, jstring pattern_j, jboolean dirs_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				ev_bool dirs = (ev_bool) dirs_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Core::FileInfoListPtr __values1 = pObjectX->findResourceFileInfo(group, pattern, dirs);
				EarthView::World::Core::FileInfoListPtr *returnvalues = new EarthView::World::Core::FileInfoListPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_findResourceFileInfo_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring group_j, jstring pattern_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Core::FileInfoListPtr __values1 = pObjectX->findResourceFileInfo(group, pattern);
				EarthView::World::Core::FileInfoListPtr *returnvalues = new EarthView::World::Core::FileInfoListPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_resourceModifiedTime_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring group_j, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				ev_int64 __values1 = pObjectX->resourceModifiedTime(group, filename);
				jlong __values1_j = (jlong)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_listResourceLocations_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Core::StringVectorPtr __values1 = pObjectX->listResourceLocations(groupName);
				EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_findResourceLocation_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j, jstring pattern_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Core::StringVectorPtr __values1 = pObjectX->findResourceLocation(groupName, pattern);
				EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_resourceModifiedTime_1CResourceGroup_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong group_j, jstring filename_j)
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *group = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*) group_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				ev_int64 __values1 = pObjectX->resourceModifiedTime(group, filename);
				jlong __values1_j = (jlong)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_createResource_1EVString_1EVString_1ev_1bool_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j, jboolean overwrite_j, jstring locationPattern_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				ev_bool overwrite = (ev_bool) overwrite_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* locationPattern_ch = (const ev_char*)__env->GetStringUTFChars(locationPattern_j,JNI_FALSE);
				const EVString locationPattern = locationPattern_ch;
				__env->ReleaseStringUTFChars(locationPattern_j, (const char *)locationPattern_ch);
				#else
				const ev_wchar* locationPattern_ch = (const ev_wchar*)__env->GetStringChars(locationPattern_j,JNI_FALSE);
				const EVString locationPattern = locationPattern_ch;
				__env->ReleaseStringChars(locationPattern_j, (const jchar *)locationPattern_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->createResource(filename, groupName, overwrite, locationPattern);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_createResource_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j, jboolean overwrite_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				ev_bool overwrite = (ev_bool) overwrite_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->createResource(filename, groupName, overwrite);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_createResource_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->createResource(filename, groupName);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_createResource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->createResource(filename);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_deleteResource_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j, jstring locationPattern_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* locationPattern_ch = (const ev_char*)__env->GetStringUTFChars(locationPattern_j,JNI_FALSE);
				const EVString locationPattern = locationPattern_ch;
				__env->ReleaseStringUTFChars(locationPattern_j, (const char *)locationPattern_ch);
				#else
				const ev_wchar* locationPattern_ch = (const ev_wchar*)__env->GetStringChars(locationPattern_j,JNI_FALSE);
				const EVString locationPattern = locationPattern_ch;
				__env->ReleaseStringChars(locationPattern_j, (const jchar *)locationPattern_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->deleteResource(filename, groupName, locationPattern);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_deleteResource_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->deleteResource(filename, groupName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_deleteResource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->deleteResource(filename);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_deleteMatchingResources_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filePattern_j, jstring groupName_j, jstring locationPattern_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filePattern_ch = (const ev_char*)__env->GetStringUTFChars(filePattern_j,JNI_FALSE);
				const EVString filePattern = filePattern_ch;
				__env->ReleaseStringUTFChars(filePattern_j, (const char *)filePattern_ch);
				#else
				const ev_wchar* filePattern_ch = (const ev_wchar*)__env->GetStringChars(filePattern_j,JNI_FALSE);
				const EVString filePattern = filePattern_ch;
				__env->ReleaseStringChars(filePattern_j, (const jchar *)filePattern_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* locationPattern_ch = (const ev_char*)__env->GetStringUTFChars(locationPattern_j,JNI_FALSE);
				const EVString locationPattern = locationPattern_ch;
				__env->ReleaseStringUTFChars(locationPattern_j, (const char *)locationPattern_ch);
				#else
				const ev_wchar* locationPattern_ch = (const ev_wchar*)__env->GetStringChars(locationPattern_j,JNI_FALSE);
				const EVString locationPattern = locationPattern_ch;
				__env->ReleaseStringChars(locationPattern_j, (const jchar *)locationPattern_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->deleteMatchingResources(filePattern, groupName, locationPattern);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_deleteMatchingResources_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filePattern_j, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filePattern_ch = (const ev_char*)__env->GetStringUTFChars(filePattern_j,JNI_FALSE);
				const EVString filePattern = filePattern_ch;
				__env->ReleaseStringUTFChars(filePattern_j, (const char *)filePattern_ch);
				#else
				const ev_wchar* filePattern_ch = (const ev_wchar*)__env->GetStringChars(filePattern_j,JNI_FALSE);
				const EVString filePattern = filePattern_ch;
				__env->ReleaseStringChars(filePattern_j, (const jchar *)filePattern_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->deleteMatchingResources(filePattern, groupName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_deleteMatchingResources_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filePattern_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filePattern_ch = (const ev_char*)__env->GetStringUTFChars(filePattern_j,JNI_FALSE);
				const EVString filePattern = filePattern_ch;
				__env->ReleaseStringUTFChars(filePattern_j, (const char *)filePattern_ch);
				#else
				const ev_wchar* filePattern_ch = (const ev_wchar*)__env->GetStringChars(filePattern_j,JNI_FALSE);
				const EVString filePattern = filePattern_ch;
				__env->ReleaseStringChars(filePattern_j, (const jchar *)filePattern_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->deleteMatchingResources(filePattern);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_addResourceGroupListener_1CResourceGroupListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_l_j)
			{
				EarthView::World::Graphic::CResourceGroupListener *ref_l = (EarthView::World::Graphic::CResourceGroupListener*) ref_l_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->addResourceGroupListener(ref_l);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_removeResourceGroupListener_1CResourceGroupListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong l_j)
			{
				EarthView::World::Graphic::CResourceGroupListener *l = (EarthView::World::Graphic::CResourceGroupListener*) l_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->removeResourceGroupListener(l);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_setWorldResourceGroupName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->setWorldResourceGroupName(groupName);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_getWorldResourceGroupName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				const EVString& __values1 = pObjectX->getWorldResourceGroupName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_linkWorldGeometryToResourceGroup_1EVString_1EVString_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring group_j, jstring worldGeometry_j, jlong ref_sceneManager_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* worldGeometry_ch = (const ev_char*)__env->GetStringUTFChars(worldGeometry_j,JNI_FALSE);
				const EVString worldGeometry = worldGeometry_ch;
				__env->ReleaseStringUTFChars(worldGeometry_j, (const char *)worldGeometry_ch);
				#else
				const ev_wchar* worldGeometry_ch = (const ev_wchar*)__env->GetStringChars(worldGeometry_j,JNI_FALSE);
				const EVString worldGeometry = worldGeometry_ch;
				__env->ReleaseStringChars(worldGeometry_j, (const jchar *)worldGeometry_ch);
				#endif
				EarthView::World::Graphic::CSceneManager *ref_sceneManager = (EarthView::World::Graphic::CSceneManager*) ref_sceneManager_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->linkWorldGeometryToResourceGroup(group, worldGeometry, ref_sceneManager);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_unlinkWorldGeometryFromResourceGroup_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring group_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->unlinkWorldGeometryFromResourceGroup(group);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_isResourceGroupInGlobalPool_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->isResourceGroupInGlobalPool(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_shutdownAll_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->shutdownAll();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager__1registerResourceManager_1EVString_1CResourceManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resourceType_j, jlong ref_rm_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resourceType_ch = (const ev_char*)__env->GetStringUTFChars(resourceType_j,JNI_FALSE);
				const EVString resourceType = resourceType_ch;
				__env->ReleaseStringUTFChars(resourceType_j, (const char *)resourceType_ch);
				#else
				const ev_wchar* resourceType_ch = (const ev_wchar*)__env->GetStringChars(resourceType_j,JNI_FALSE);
				const EVString resourceType = resourceType_ch;
				__env->ReleaseStringChars(resourceType_j, (const jchar *)resourceType_ch);
				#endif
				EarthView::World::Graphic::CResourceManager *ref_rm = (EarthView::World::Graphic::CResourceManager*) ref_rm_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->_registerResourceManager(resourceType, ref_rm);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager__1unregisterResourceManager_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resourceType_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resourceType_ch = (const ev_char*)__env->GetStringUTFChars(resourceType_j,JNI_FALSE);
				const EVString resourceType = resourceType_ch;
				__env->ReleaseStringUTFChars(resourceType_j, (const char *)resourceType_ch);
				#else
				const ev_wchar* resourceType_ch = (const ev_wchar*)__env->GetStringChars(resourceType_j,JNI_FALSE);
				const EVString resourceType = resourceType_ch;
				__env->ReleaseStringChars(resourceType_j, (const jchar *)resourceType_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->_unregisterResourceManager(resourceType);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_getResourceManagerIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator __values1 = pObjectX->getResourceManagerIterator();
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator *returnvalues = new EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager__1registerScriptLoader_1CScriptLoader(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_su_j)
			{
				EarthView::World::Graphic::CScriptLoader *ref_su = (EarthView::World::Graphic::CScriptLoader*) ref_su_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->_registerScriptLoader(ref_su);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager__1unregisterScriptLoader_1CScriptLoader(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong su_j)
			{
				EarthView::World::Graphic::CScriptLoader *su = (EarthView::World::Graphic::CScriptLoader*) su_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->_unregisterScriptLoader(su);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager__1findScriptLoader_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pattern_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Graphic::CScriptLoader* __values1 = pObjectX->_findScriptLoader(pattern);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager__1getResourceManager_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resourceType_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resourceType_ch = (const ev_char*)__env->GetStringUTFChars(resourceType_j,JNI_FALSE);
				const EVString resourceType = resourceType_ch;
				__env->ReleaseStringUTFChars(resourceType_j, (const char *)resourceType_ch);
				#else
				const ev_wchar* resourceType_ch = (const ev_wchar*)__env->GetStringChars(resourceType_j,JNI_FALSE);
				const EVString resourceType = resourceType_ch;
				__env->ReleaseStringChars(resourceType_j, (const jchar *)resourceType_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Graphic::CResourceManager* __values1 = pObjectX->_getResourceManager(resourceType);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager__1notifyResourceCreated_1ResourcePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j)
			{
				EarthView::World::Graphic::ResourcePtr &res = *(EarthView::World::Graphic::ResourcePtr*) res_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->_notifyResourceCreated(res);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager__1notifyResourceRemoved_1ResourcePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j)
			{
				EarthView::World::Graphic::ResourcePtr &res = *(EarthView::World::Graphic::ResourcePtr*) res_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->_notifyResourceRemoved(res);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager__1notifyResourceGroupChanged_1EVString_1CResource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring oldGroup_j, jlong res_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* oldGroup_ch = (const ev_char*)__env->GetStringUTFChars(oldGroup_j,JNI_FALSE);
				const EVString oldGroup = oldGroup_ch;
				__env->ReleaseStringUTFChars(oldGroup_j, (const char *)oldGroup_ch);
				#else
				const ev_wchar* oldGroup_ch = (const ev_wchar*)__env->GetStringChars(oldGroup_j,JNI_FALSE);
				const EVString oldGroup = oldGroup_ch;
				__env->ReleaseStringChars(oldGroup_j, (const jchar *)oldGroup_ch);
				#endif
				EarthView::World::Graphic::CResource *res = (EarthView::World::Graphic::CResource*) res_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->_notifyResourceGroupChanged(oldGroup, res);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager__1notifyAllResourcesRemoved_1CResourceManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong manager_j)
			{
				EarthView::World::Graphic::CResourceManager *manager = (EarthView::World::Graphic::CResourceManager*) manager_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->_notifyAllResourcesRemoved(manager);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager__1notifyWorldGeometryStageStarted_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring description_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* description_ch = (const ev_char*)__env->GetStringUTFChars(description_j,JNI_FALSE);
				const EVString description = description_ch;
				__env->ReleaseStringUTFChars(description_j, (const char *)description_ch);
				#else
				const ev_wchar* description_ch = (const ev_wchar*)__env->GetStringChars(description_j,JNI_FALSE);
				const EVString description = description_ch;
				__env->ReleaseStringChars(description_j, (const jchar *)description_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->_notifyWorldGeometryStageStarted(description);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager__1notifyWorldGeometryStageEnded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->_notifyWorldGeometryStageEnded();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_getResourceGroups_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Core::StringVector __values1 = pObjectX->getResourceGroups();
				EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_getResourceDeclarationList_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList __values1 = pObjectX->getResourceDeclarationList(groupName);
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList *returnvalues = new EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_getResourceLocationList_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				const EarthView::World::Graphic::CResourceGroupManager::LocationList& __values1 = pObjectX->getResourceLocationList(groupName);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_setLoadingListener_1CResourceLoadingListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
			{
				EarthView::World::Graphic::CResourceLoadingListener *ref_listener = (EarthView::World::Graphic::CResourceLoadingListener*) ref_listener_j;
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				pObjectX->setLoadingListener(ref_listener);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceGroupManager_getLoadingListener_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceGroupManager *pObjectX = (EarthView::World::Graphic::CResourceGroupManager*) pObjXXXX;
				EarthView::World::Graphic::CResourceLoadingListener* __values1 = pObjectX->getLoadingListener();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
