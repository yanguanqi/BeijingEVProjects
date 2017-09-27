/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/compositormanager.h"
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
			class JCCompositorManagerProxy : public EarthView::World::Graphic::CCompositorManager
			{
			 private:
				EarthView::World::Core::ev_string m_create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_create_EVString_EVString_ev_bool_CManualResourceLoader_callback;
				EarthView::World::Core::ev_string m_create_EVString_EVString_ev_bool_callback;
				EarthView::World::Core::ev_string m_create_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_createUnmanaged_EVString_ev_bool_CManualResourceLoader_callback;
				EarthView::World::Core::ev_string m_createUnmanaged_EVString_ev_bool_callback;
				EarthView::World::Core::ev_string m_createUnmanaged_EVString_callback;
				EarthView::World::Core::ev_string m_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_callback;
				EarthView::World::Core::ev_string m_createOrRetrieve_EVString_EVString_ev_bool_callback;
				EarthView::World::Core::ev_string m_createOrRetrieve_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_setMemoryBudget_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getMemoryBudget_void_callback;
				EarthView::World::Core::ev_string m_getMemoryUsage_void_callback;
				EarthView::World::Core::ev_string m_unload_EVString_callback;
				EarthView::World::Core::ev_string m_unload_ev_uint64_callback;
				EarthView::World::Core::ev_string m_unloadAll_ev_bool_callback;
				EarthView::World::Core::ev_string m_unloadAll_void_callback;
				EarthView::World::Core::ev_string m_reloadAll_ev_bool_callback;
				EarthView::World::Core::ev_string m_reloadAll_void_callback;
				EarthView::World::Core::ev_string m_unloadUnreferencedResources_ev_bool_callback;
				EarthView::World::Core::ev_string m_unloadUnreferencedResources_void_callback;
				EarthView::World::Core::ev_string m_reloadUnreferencedResources_ev_bool_callback;
				EarthView::World::Core::ev_string m_reloadUnreferencedResources_void_callback;
				EarthView::World::Core::ev_string m_remove_ResourcePtr_callback;
				EarthView::World::Core::ev_string m_remove_EVString_callback;
				EarthView::World::Core::ev_string m_remove_ev_uint64_callback;
				EarthView::World::Core::ev_string m_remove_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_removeAll_void_callback;
				EarthView::World::Core::ev_string m_removeUnreferencedResources_ev_bool_callback;
				EarthView::World::Core::ev_string m_removeUnreferencedResources_void_callback;
				EarthView::World::Core::ev_string m_removeUnreferencedResource_EVString_callback;
				EarthView::World::Core::ev_string m_removeUnreferencedResource_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_unloadUnreferencedResource_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_unloadUnreferencedResource_EVString_EVString_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getByName_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_getByName_EVString_callback;
				EarthView::World::Core::ev_string m_getByHandle_ev_uint64_callback;
				EarthView::World::Core::ev_string m_resourceExists_EVString_callback;
				EarthView::World::Core::ev_string m_resourceExists_ev_uint64_callback;
				EarthView::World::Core::ev_string m__notifyResourceTouched_CResource_callback;
				EarthView::World::Core::ev_string m__notifyResourceLoaded_CResource_callback;
				EarthView::World::Core::ev_string m__notifyResourceUnloaded_CResource_callback;
				EarthView::World::Core::ev_string m_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback;
				EarthView::World::Core::ev_string m_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_prepare_EVString_EVString_ev_bool_CManualResourceLoader_callback;
				EarthView::World::Core::ev_string m_prepare_EVString_EVString_ev_bool_callback;
				EarthView::World::Core::ev_string m_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback;
				EarthView::World::Core::ev_string m_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_load_EVString_EVString_ev_bool_CManualResourceLoader_callback;
				EarthView::World::Core::ev_string m_load_EVString_EVString_ev_bool_callback;
				EarthView::World::Core::ev_string m_load_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_setVerbose_ev_bool_callback;
				EarthView::World::Core::ev_string m_getVerbose_void_callback;
				EarthView::World::Core::ev_string m_createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_addImpl_ResourcePtr_callback;
				EarthView::World::Core::ev_string m_removeImpl_ResourcePtr_callback;
				EarthView::World::Core::ev_string m_checkUsage_void_callback;
				EarthView::World::Core::ev_string m_getScriptPatterns_void_callback;
				EarthView::World::Core::ev_string m_parseScript_DataStreamPtr_EVString_callback;
				EarthView::World::Core::ev_string m_getLoadingOrder_void_callback;
			public:
				JCCompositorManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompositorManager(pList)
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
				void register_create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback = __method;
				}
				void register_create_EVString_EVString_ev_bool_CManualResourceLoader_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_create_EVString_EVString_ev_bool_CManualResourceLoader_callback = __method;
				}
				void register_create_EVString_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_create_EVString_EVString_ev_bool_callback = __method;
				}
				void register_create_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_create_EVString_EVString_callback = __method;
				}
				void register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback = __method;
				}
				void register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createUnmanaged_EVString_ev_bool_CManualResourceLoader_callback = __method;
				}
				void register_createUnmanaged_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createUnmanaged_EVString_ev_bool_callback = __method;
				}
				void register_createUnmanaged_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createUnmanaged_EVString_callback = __method;
				}
				void register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback = __method;
				}
				void register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_callback = __method;
				}
				void register_createOrRetrieve_EVString_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createOrRetrieve_EVString_EVString_ev_bool_callback = __method;
				}
				void register_createOrRetrieve_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createOrRetrieve_EVString_EVString_callback = __method;
				}
				void register_setMemoryBudget_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setMemoryBudget_ev_size_t_callback = __method;
				}
				void register_getMemoryBudget_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMemoryBudget_void_callback = __method;
				}
				void register_getMemoryUsage_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMemoryUsage_void_callback = __method;
				}
				void register_unload_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unload_EVString_callback = __method;
				}
				void register_unload_ev_uint64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unload_ev_uint64_callback = __method;
				}
				void register_unloadAll_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unloadAll_ev_bool_callback = __method;
				}
				void register_unloadAll_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unloadAll_void_callback = __method;
				}
				void register_reloadAll_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_reloadAll_ev_bool_callback = __method;
				}
				void register_reloadAll_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_reloadAll_void_callback = __method;
				}
				void register_unloadUnreferencedResources_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unloadUnreferencedResources_ev_bool_callback = __method;
				}
				void register_unloadUnreferencedResources_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unloadUnreferencedResources_void_callback = __method;
				}
				void register_reloadUnreferencedResources_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_reloadUnreferencedResources_ev_bool_callback = __method;
				}
				void register_reloadUnreferencedResources_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_reloadUnreferencedResources_void_callback = __method;
				}
				void register_remove_ResourcePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_remove_ResourcePtr_callback = __method;
				}
				void register_remove_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_remove_EVString_callback = __method;
				}
				void register_remove_ev_uint64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_remove_ev_uint64_callback = __method;
				}
				void register_remove_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_remove_EVString_EVString_callback = __method;
				}
				void register_removeAll_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAll_void_callback = __method;
				}
				void register_removeUnreferencedResources_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeUnreferencedResources_ev_bool_callback = __method;
				}
				void register_removeUnreferencedResources_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeUnreferencedResources_void_callback = __method;
				}
				void register_removeUnreferencedResource_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeUnreferencedResource_EVString_callback = __method;
				}
				void register_removeUnreferencedResource_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeUnreferencedResource_EVString_EVString_callback = __method;
				}
				void register_unloadUnreferencedResource_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unloadUnreferencedResource_EVString_EVString_callback = __method;
				}
				void register_unloadUnreferencedResource_EVString_EVString_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unloadUnreferencedResource_EVString_EVString_ev_uint16_callback = __method;
				}
				void register_getByName_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getByName_EVString_EVString_callback = __method;
				}
				void register_getByName_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getByName_EVString_callback = __method;
				}
				void register_getByHandle_ev_uint64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getByHandle_ev_uint64_callback = __method;
				}
				void register_resourceExists_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resourceExists_EVString_callback = __method;
				}
				void register_resourceExists_ev_uint64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resourceExists_ev_uint64_callback = __method;
				}
				void register__notifyResourceTouched_CResource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyResourceTouched_CResource_callback = __method;
				}
				void register__notifyResourceLoaded_CResource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyResourceLoaded_CResource_callback = __method;
				}
				void register__notifyResourceUnloaded_CResource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyResourceUnloaded_CResource_callback = __method;
				}
				void register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback = __method;
				}
				void register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback = __method;
				}
				void register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepare_EVString_EVString_ev_bool_CManualResourceLoader_callback = __method;
				}
				void register_prepare_EVString_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepare_EVString_EVString_ev_bool_callback = __method;
				}
				void register_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback = __method;
				}
				void register_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback = __method;
				}
				void register_load_EVString_EVString_ev_bool_CManualResourceLoader_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_EVString_EVString_ev_bool_CManualResourceLoader_callback = __method;
				}
				void register_load_EVString_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_EVString_EVString_ev_bool_callback = __method;
				}
				void register_load_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_EVString_EVString_callback = __method;
				}
				void register_setVerbose_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setVerbose_ev_bool_callback = __method;
				}
				void register_getVerbose_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getVerbose_void_callback = __method;
				}
				void register_createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback = __method;
				}
				void register_addImpl_ResourcePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addImpl_ResourcePtr_callback = __method;
				}
				void register_removeImpl_ResourcePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeImpl_ResourcePtr_callback = __method;
				}
				void register_checkUsage_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_checkUsage_void_callback = __method;
				}
				void register_getScriptPatterns_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getScriptPatterns_void_callback = __method;
				}
				void register_parseScript_DataStreamPtr_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_parseScript_DataStreamPtr_EVString_callback = __method;
				}
				void register_getLoadingOrder_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLoadingOrder_void_callback = __method;
				}
				virtual EarthView::World::Graphic::CResource* createImpl(const EVString& name, ev_uint64 handle, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader, const EarthView::World::Core::CommonStringPairList* params)
				{
					if (this->_gRef != NULL && this->m_createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						jlong handle_j = (jlong) &handle;
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jlong params_j = (jlong) params;
						jmethodID __method = __gr->getMethod("createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, handle_j, group_j, isManual_j, ref_loader_j, params_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CResource *__values1 = (EarthView::World::Graphic::CResource*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CCompositorManager::createImpl(name, handle, group, isManual, ref_loader, params);
					}
				}
				virtual void parseScript(EarthView::World::Core::DataStreamPtr& stream, const EVString& groupName)
				{
					if (this->_gRef != NULL && this->m_parseScript_DataStreamPtr_EVString_callback != "" && this->isCustomExtend())
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
						jlong stream_j = (jlong) &stream;
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jmethodID __method = __gr->getMethod("parseScript_DataStreamPtr_EVString_callback");
						__env->CallVoidMethod(__obj, __method , stream_j, groupName_j);
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
						return this->CCompositorManager::parseScript(stream, groupName);
					}
				}
				virtual void removeAll()
				{
					if (this->_gRef != NULL && this->m_removeAll_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeAll_void_callback");
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
						return this->CCompositorManager::removeAll();
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr create(const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader, const EarthView::World::Core::CommonStringPairList* createParams)
				{
					if (this->_gRef != NULL && this->m_create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jlong createParams_j = (jlong) createParams;
						jmethodID __method = __gr->getMethod("create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j, ref_loader_j, createParams_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::create(name, group, isManual, ref_loader, createParams);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr create(const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader)
				{
					if (this->_gRef != NULL && this->m_create_EVString_EVString_ev_bool_CManualResourceLoader_callback != "" && this->isCustomExtend())
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
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jmethodID __method = __gr->getMethod("create_EVString_EVString_ev_bool_CManualResourceLoader_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j, ref_loader_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::create(name, group, isManual, ref_loader);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr create(const EVString& name, const EVString& group, ev_bool isManual)
				{
					if (this->_gRef != NULL && this->m_create_EVString_EVString_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean isManual_j = (jboolean) isManual;
						jmethodID __method = __gr->getMethod("create_EVString_EVString_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::create(name, group, isManual);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr create(const EVString& name, const EVString& group)
				{
					if (this->_gRef != NULL && this->m_create_EVString_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("create_EVString_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::create(name, group);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(const EVString& name, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader, const EarthView::World::Core::CommonStringPairList* createParams)
				{
					if (this->_gRef != NULL && this->m_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jlong createParams_j = (jlong) createParams;
						jmethodID __method = __gr->getMethod("createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, isManual_j, ref_loader_j, createParams_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::createUnmanaged(name, isManual, ref_loader, createParams);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(const EVString& name, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader)
				{
					if (this->_gRef != NULL && this->m_createUnmanaged_EVString_ev_bool_CManualResourceLoader_callback != "" && this->isCustomExtend())
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
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jmethodID __method = __gr->getMethod("createUnmanaged_EVString_ev_bool_CManualResourceLoader_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, isManual_j, ref_loader_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::createUnmanaged(name, isManual, ref_loader);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(const EVString& name, ev_bool isManual)
				{
					if (this->_gRef != NULL && this->m_createUnmanaged_EVString_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean isManual_j = (jboolean) isManual;
						jmethodID __method = __gr->getMethod("createUnmanaged_EVString_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, isManual_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::createUnmanaged(name, isManual);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_createUnmanaged_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("createUnmanaged_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::createUnmanaged(name);
					}
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader, const EarthView::World::Core::CommonStringPairList* createParams)
				{
					if (this->_gRef != NULL && this->m_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jlong createParams_j = (jlong) createParams;
						jmethodID __method = __gr->getMethod("createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j, ref_loader_j, createParams_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::createOrRetrieve(name, group, isManual, ref_loader, createParams);
					}
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader)
				{
					if (this->_gRef != NULL && this->m_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_callback != "" && this->isCustomExtend())
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
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jmethodID __method = __gr->getMethod("createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j, ref_loader_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::createOrRetrieve(name, group, isManual, ref_loader);
					}
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(const EVString& name, const EVString& group, ev_bool isManual)
				{
					if (this->_gRef != NULL && this->m_createOrRetrieve_EVString_EVString_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean isManual_j = (jboolean) isManual;
						jmethodID __method = __gr->getMethod("createOrRetrieve_EVString_EVString_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::createOrRetrieve(name, group, isManual);
					}
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(const EVString& name, const EVString& group)
				{
					if (this->_gRef != NULL && this->m_createOrRetrieve_EVString_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("createOrRetrieve_EVString_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::createOrRetrieve(name, group);
					}
				}
				virtual void setMemoryBudget(ev_size_t bytes)
				{
					if (this->_gRef != NULL && this->m_setMemoryBudget_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong bytes_j = (jlong) bytes;
						jmethodID __method = __gr->getMethod("setMemoryBudget_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , bytes_j);
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
						return this->CCompositorManager::setMemoryBudget(bytes);
					}
				}
				virtual ev_size_t getMemoryBudget() const
				{
					if (this->_gRef != NULL && this->m_getMemoryBudget_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getMemoryBudget_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::getMemoryBudget();
					}
				}
				virtual ev_size_t getMemoryUsage() const
				{
					if (this->_gRef != NULL && this->m_getMemoryUsage_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getMemoryUsage_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::getMemoryUsage();
					}
				}
				virtual void unload(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_unload_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("unload_EVString_callback");
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
						return this->CCompositorManager::unload(name);
					}
				}
				virtual void unload(ev_uint64 handle)
				{
					if (this->_gRef != NULL && this->m_unload_ev_uint64_callback != "" && this->isCustomExtend())
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
						jlong handle_j = (jlong) &handle;
						jmethodID __method = __gr->getMethod("unload_ev_uint64_callback");
						__env->CallVoidMethod(__obj, __method , handle_j);
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
						return this->CCompositorManager::unload(handle);
					}
				}
				virtual void unloadAll(ev_bool reloadableOnly)
				{
					if (this->_gRef != NULL && this->m_unloadAll_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean reloadableOnly_j = (jboolean) reloadableOnly;
						jmethodID __method = __gr->getMethod("unloadAll_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , reloadableOnly_j);
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
						return this->CCompositorManager::unloadAll(reloadableOnly);
					}
				}
				virtual void unloadAll()
				{
					if (this->_gRef != NULL && this->m_unloadAll_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("unloadAll_void_callback");
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
						return this->CCompositorManager::unloadAll();
					}
				}
				virtual void reloadAll(ev_bool reloadableOnly)
				{
					if (this->_gRef != NULL && this->m_reloadAll_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean reloadableOnly_j = (jboolean) reloadableOnly;
						jmethodID __method = __gr->getMethod("reloadAll_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , reloadableOnly_j);
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
						return this->CCompositorManager::reloadAll(reloadableOnly);
					}
				}
				virtual void reloadAll()
				{
					if (this->_gRef != NULL && this->m_reloadAll_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("reloadAll_void_callback");
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
						return this->CCompositorManager::reloadAll();
					}
				}
				virtual void unloadUnreferencedResources(ev_bool reloadableOnly)
				{
					if (this->_gRef != NULL && this->m_unloadUnreferencedResources_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean reloadableOnly_j = (jboolean) reloadableOnly;
						jmethodID __method = __gr->getMethod("unloadUnreferencedResources_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , reloadableOnly_j);
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
						return this->CCompositorManager::unloadUnreferencedResources(reloadableOnly);
					}
				}
				virtual void unloadUnreferencedResources()
				{
					if (this->_gRef != NULL && this->m_unloadUnreferencedResources_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("unloadUnreferencedResources_void_callback");
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
						return this->CCompositorManager::unloadUnreferencedResources();
					}
				}
				virtual void reloadUnreferencedResources(ev_bool reloadableOnly)
				{
					if (this->_gRef != NULL && this->m_reloadUnreferencedResources_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean reloadableOnly_j = (jboolean) reloadableOnly;
						jmethodID __method = __gr->getMethod("reloadUnreferencedResources_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , reloadableOnly_j);
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
						return this->CCompositorManager::reloadUnreferencedResources(reloadableOnly);
					}
				}
				virtual void reloadUnreferencedResources()
				{
					if (this->_gRef != NULL && this->m_reloadUnreferencedResources_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("reloadUnreferencedResources_void_callback");
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
						return this->CCompositorManager::reloadUnreferencedResources();
					}
				}
				virtual void remove(EarthView::World::Graphic::ResourcePtr& r)
				{
					if (this->_gRef != NULL && this->m_remove_ResourcePtr_callback != "" && this->isCustomExtend())
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
						jlong r_j = (jlong) &r;
						jmethodID __method = __gr->getMethod("remove_ResourcePtr_callback");
						__env->CallVoidMethod(__obj, __method , r_j);
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
						return this->CCompositorManager::remove(r);
					}
				}
				virtual void remove(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_remove_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("remove_EVString_callback");
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
						return this->CCompositorManager::remove(name);
					}
				}
				virtual void remove(ev_uint64 handle)
				{
					if (this->_gRef != NULL && this->m_remove_ev_uint64_callback != "" && this->isCustomExtend())
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
						jlong handle_j = (jlong) &handle;
						jmethodID __method = __gr->getMethod("remove_ev_uint64_callback");
						__env->CallVoidMethod(__obj, __method , handle_j);
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
						return this->CCompositorManager::remove(handle);
					}
				}
				virtual void remove(const EVString& name, const EVString& groupname)
				{
					if (this->_gRef != NULL && this->m_remove_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring groupname_wch = groupname;
						jstring groupname_j = __env->NewString((const jchar*)groupname_wch.getString(), groupname_wch.size());
						jmethodID __method = __gr->getMethod("remove_EVString_EVString_callback");
						__env->CallVoidMethod(__obj, __method , name_j, groupname_j);
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
						return this->CCompositorManager::remove(name, groupname);
					}
				}
				virtual void removeUnreferencedResources(ev_bool reloadableOnly)
				{
					if (this->_gRef != NULL && this->m_removeUnreferencedResources_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean reloadableOnly_j = (jboolean) reloadableOnly;
						jmethodID __method = __gr->getMethod("removeUnreferencedResources_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , reloadableOnly_j);
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
						return this->CCompositorManager::removeUnreferencedResources(reloadableOnly);
					}
				}
				virtual void removeUnreferencedResources()
				{
					if (this->_gRef != NULL && this->m_removeUnreferencedResources_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeUnreferencedResources_void_callback");
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
						return this->CCompositorManager::removeUnreferencedResources();
					}
				}
				virtual void removeUnreferencedResource(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_removeUnreferencedResource_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeUnreferencedResource_EVString_callback");
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
						return this->CCompositorManager::removeUnreferencedResource(name);
					}
				}
				virtual void removeUnreferencedResource(const EVString& name, const EVString& groupName)
				{
					if (this->_gRef != NULL && this->m_removeUnreferencedResource_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jmethodID __method = __gr->getMethod("removeUnreferencedResource_EVString_EVString_callback");
						__env->CallVoidMethod(__obj, __method , name_j, groupName_j);
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
						return this->CCompositorManager::removeUnreferencedResource(name, groupName);
					}
				}
				virtual void unloadUnreferencedResource(const EVString& name, const EVString& groupName)
				{
					if (this->_gRef != NULL && this->m_unloadUnreferencedResource_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jmethodID __method = __gr->getMethod("unloadUnreferencedResource_EVString_EVString_callback");
						__env->CallVoidMethod(__obj, __method , name_j, groupName_j);
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
						return this->CCompositorManager::unloadUnreferencedResource(name, groupName);
					}
				}
				virtual void unloadUnreferencedResource(const EVString& name, const EVString& groupName, ev_uint16 useCount)
				{
					if (this->_gRef != NULL && this->m_unloadUnreferencedResource_EVString_EVString_ev_uint16_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jint useCount_j = (jint) useCount;
						jmethodID __method = __gr->getMethod("unloadUnreferencedResource_EVString_EVString_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , name_j, groupName_j, useCount_j);
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
						return this->CCompositorManager::unloadUnreferencedResource(name, groupName, useCount);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr getByName(const EVString& name, const EVString& groupName)
				{
					if (this->_gRef != NULL && this->m_getByName_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jmethodID __method = __gr->getMethod("getByName_EVString_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, groupName_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::getByName(name, groupName);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr getByName(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_getByName_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getByName_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::getByName(name);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr getByHandle(ev_uint64 handle)
				{
					if (this->_gRef != NULL && this->m_getByHandle_ev_uint64_callback != "" && this->isCustomExtend())
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
						jlong handle_j = (jlong) &handle;
						jmethodID __method = __gr->getMethod("getByHandle_ev_uint64_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , handle_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::getByHandle(handle);
					}
				}
				virtual ev_bool resourceExists(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_resourceExists_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("resourceExists_EVString_callback");
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
						return this->CCompositorManager::resourceExists(name);
					}
				}
				virtual ev_bool resourceExists(ev_uint64 handle)
				{
					if (this->_gRef != NULL && this->m_resourceExists_ev_uint64_callback != "" && this->isCustomExtend())
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
						jlong handle_j = (jlong) &handle;
						jmethodID __method = __gr->getMethod("resourceExists_ev_uint64_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , handle_j);
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
						return this->CCompositorManager::resourceExists(handle);
					}
				}
				virtual void _notifyResourceTouched(EarthView::World::Graphic::CResource* res)
				{
					if (this->_gRef != NULL && this->m__notifyResourceTouched_CResource_callback != "" && this->isCustomExtend())
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
						jlong res_j = (jlong) res;
						jmethodID __method = __gr->getMethod("_notifyResourceTouched_CResource_callback");
						__env->CallVoidMethod(__obj, __method , res_j);
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
						return this->CCompositorManager::_notifyResourceTouched(res);
					}
				}
				virtual void _notifyResourceLoaded(EarthView::World::Graphic::CResource* res)
				{
					if (this->_gRef != NULL && this->m__notifyResourceLoaded_CResource_callback != "" && this->isCustomExtend())
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
						jlong res_j = (jlong) res;
						jmethodID __method = __gr->getMethod("_notifyResourceLoaded_CResource_callback");
						__env->CallVoidMethod(__obj, __method , res_j);
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
						return this->CCompositorManager::_notifyResourceLoaded(res);
					}
				}
				virtual void _notifyResourceUnloaded(EarthView::World::Graphic::CResource* res)
				{
					if (this->_gRef != NULL && this->m__notifyResourceUnloaded_CResource_callback != "" && this->isCustomExtend())
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
						jlong res_j = (jlong) res;
						jmethodID __method = __gr->getMethod("_notifyResourceUnloaded_CResource_callback");
						__env->CallVoidMethod(__obj, __method , res_j);
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
						return this->CCompositorManager::_notifyResourceUnloaded(res);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr prepare(const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader, const EarthView::World::Core::CommonStringPairList* loadParams, ev_bool backgroundThread)
				{
					if (this->_gRef != NULL && this->m_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jlong loadParams_j = (jlong) loadParams;
						jboolean backgroundThread_j = (jboolean) backgroundThread;
						jmethodID __method = __gr->getMethod("prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j, ref_loader_j, loadParams_j, backgroundThread_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::prepare(name, group, isManual, ref_loader, loadParams, backgroundThread);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr prepare(const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader, const EarthView::World::Core::CommonStringPairList* loadParams)
				{
					if (this->_gRef != NULL && this->m_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jlong loadParams_j = (jlong) loadParams;
						jmethodID __method = __gr->getMethod("prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j, ref_loader_j, loadParams_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::prepare(name, group, isManual, ref_loader, loadParams);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr prepare(const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader)
				{
					if (this->_gRef != NULL && this->m_prepare_EVString_EVString_ev_bool_CManualResourceLoader_callback != "" && this->isCustomExtend())
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
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jmethodID __method = __gr->getMethod("prepare_EVString_EVString_ev_bool_CManualResourceLoader_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j, ref_loader_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::prepare(name, group, isManual, ref_loader);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr prepare(const EVString& name, const EVString& group, ev_bool isManual)
				{
					if (this->_gRef != NULL && this->m_prepare_EVString_EVString_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean isManual_j = (jboolean) isManual;
						jmethodID __method = __gr->getMethod("prepare_EVString_EVString_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::prepare(name, group, isManual);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr load(const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader, const EarthView::World::Core::CommonStringPairList* loadParams, ev_bool backgroundThread)
				{
					if (this->_gRef != NULL && this->m_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jlong loadParams_j = (jlong) loadParams;
						jboolean backgroundThread_j = (jboolean) backgroundThread;
						jmethodID __method = __gr->getMethod("load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j, ref_loader_j, loadParams_j, backgroundThread_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::load(name, group, isManual, ref_loader, loadParams, backgroundThread);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr load(const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader, const EarthView::World::Core::CommonStringPairList* loadParams)
				{
					if (this->_gRef != NULL && this->m_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jlong loadParams_j = (jlong) loadParams;
						jmethodID __method = __gr->getMethod("load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j, ref_loader_j, loadParams_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::load(name, group, isManual, ref_loader, loadParams);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr load(const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader)
				{
					if (this->_gRef != NULL && this->m_load_EVString_EVString_ev_bool_CManualResourceLoader_callback != "" && this->isCustomExtend())
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
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jmethodID __method = __gr->getMethod("load_EVString_EVString_ev_bool_CManualResourceLoader_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j, ref_loader_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::load(name, group, isManual, ref_loader);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr load(const EVString& name, const EVString& group, ev_bool isManual)
				{
					if (this->_gRef != NULL && this->m_load_EVString_EVString_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean isManual_j = (jboolean) isManual;
						jmethodID __method = __gr->getMethod("load_EVString_EVString_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::load(name, group, isManual);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr load(const EVString& name, const EVString& group)
				{
					if (this->_gRef != NULL && this->m_load_EVString_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("load_EVString_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::load(name, group);
					}
				}
				virtual const EarthView::World::Core::StringVector& getScriptPatterns() const
				{
					if (this->_gRef != NULL && this->m_getScriptPatterns_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getScriptPatterns_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Core::StringVector &__values1 = *(const EarthView::World::Core::StringVector*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCompositorManager::getScriptPatterns();
					}
				}
				virtual Real getLoadingOrder() const
				{
					if (this->_gRef != NULL && this->m_getLoadingOrder_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLoadingOrder_void_callback");
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
						return this->CCompositorManager::getLoadingOrder();
					}
				}
				virtual void setVerbose(ev_bool v)
				{
					if (this->_gRef != NULL && this->m_setVerbose_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean v_j = (jboolean) v;
						jmethodID __method = __gr->getMethod("setVerbose_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , v_j);
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
						return this->CCompositorManager::setVerbose(v);
					}
				}
				virtual ev_bool getVerbose()
				{
					if (this->_gRef != NULL && this->m_getVerbose_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getVerbose_void_callback");
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
						return this->CCompositorManager::getVerbose();
					}
				}
				virtual void addImpl(EarthView::World::Graphic::ResourcePtr& res)
				{
					if (this->_gRef != NULL && this->m_addImpl_ResourcePtr_callback != "" && this->isCustomExtend())
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
						jlong res_j = (jlong) &res;
						jmethodID __method = __gr->getMethod("addImpl_ResourcePtr_callback");
						__env->CallVoidMethod(__obj, __method , res_j);
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
						return this->CCompositorManager::addImpl(res);
					}
				}
				virtual void removeImpl(EarthView::World::Graphic::ResourcePtr& res)
				{
					if (this->_gRef != NULL && this->m_removeImpl_ResourcePtr_callback != "" && this->isCustomExtend())
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
						jlong res_j = (jlong) &res;
						jmethodID __method = __gr->getMethod("removeImpl_ResourcePtr_callback");
						__env->CallVoidMethod(__obj, __method , res_j);
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
						return this->CCompositorManager::removeImpl(res);
					}
				}
				virtual void checkUsage()
				{
					if (this->_gRef != NULL && this->m_checkUsage_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("checkUsage_void_callback");
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
						return this->CCompositorManager::checkUsage();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCCompositorManagerProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorManager_createImpl_1EVString_1ev_1uint64_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong handle_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong params_j)
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
				ev_uint64 handle = *(ev_uint64*) handle_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *params = (const EarthView::World::Core::CommonStringPairList*) params_j;
				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositorManagerProxy))
				{
					EarthView::World::Graphic::CResource* __values1 = pObjectX->EarthView::World::Graphic::CCompositorManager::createImpl(name, handle, group, isManual, ref_loader, params);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CResource* __values1 = pObjectX->createImpl(name, handle, group, isManual, ref_loader, params);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1createImpl_1EVString_1ev_1uint64_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback", "(Ljava/lang/String;JLjava/lang/String;ZJJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorManager_createImpl_1EVString_1ev_1uint64_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong handle_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong params_j)
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
				ev_uint64 handle = *(ev_uint64*) handle_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *params = (const EarthView::World::Core::CommonStringPairList*) params_j;
				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				EarthView::World::Graphic::CResource* __values1 = pObjectX->EarthView::World::Graphic::CCompositorManager::createImpl(name, handle, group, isManual, ref_loader, params);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CCompositorManager& __values1 = EarthView::World::Graphic::CCompositorManager::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CCompositorManager* __values1 = EarthView::World::Graphic::CCompositorManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_initialise_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				pObjectX->initialise();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_parseScript_1DataStreamPtr_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jstring groupName_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositorManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositorManager::parseScript(stream, groupName);
				}
				else
				{
					pObjectX->parseScript(stream, groupName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1parseScript_1DataStreamPtr_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_parseScript_DataStreamPtr_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"parseScript_DataStreamPtr_EVString_callback", "(JLjava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_parseScript_1DataStreamPtr_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jstring groupName_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositorManager::parseScript(stream, groupName);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorManager_getCompositorChain_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vp_j)
			{
				EarthView::World::Graphic::CViewport *vp = (EarthView::World::Graphic::CViewport*) vp_j;
				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				EarthView::World::Graphic::CCompositorChain* __values1 = pObjectX->getCompositorChain(vp);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositorManager_hasCompositorChain_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vp_j)
			{
				EarthView::World::Graphic::CViewport *vp = (EarthView::World::Graphic::CViewport*) vp_j;
				const 				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasCompositorChain(vp);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_removeCompositorChain_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vp_j)
			{
				EarthView::World::Graphic::CViewport *vp = (EarthView::World::Graphic::CViewport*) vp_j;
				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				pObjectX->removeCompositorChain(vp);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorManager_addCompositor_1CViewport_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_vp_j, jstring compositor_j, jint addPosition_j)
			{
				EarthView::World::Graphic::CViewport *ref_vp = (EarthView::World::Graphic::CViewport*) ref_vp_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* compositor_ch = (const ev_char*)__env->GetStringUTFChars(compositor_j,JNI_FALSE);
				const EVString compositor = compositor_ch;
				__env->ReleaseStringUTFChars(compositor_j, (const char *)compositor_ch);
				#else
				const ev_wchar* compositor_ch = (const ev_wchar*)__env->GetStringChars(compositor_j,JNI_FALSE);
				const EVString compositor = compositor_ch;
				__env->ReleaseStringChars(compositor_j, (const jchar *)compositor_ch);
				#endif
				ev_int32 addPosition = (ev_int32) addPosition_j;
				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				EarthView::World::Graphic::CCompositorInstance* __values1 = pObjectX->addCompositor(ref_vp, compositor, addPosition);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorManager_addCompositor_1CViewport_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_vp_j, jstring compositor_j)
			{
				EarthView::World::Graphic::CViewport *ref_vp = (EarthView::World::Graphic::CViewport*) ref_vp_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* compositor_ch = (const ev_char*)__env->GetStringUTFChars(compositor_j,JNI_FALSE);
				const EVString compositor = compositor_ch;
				__env->ReleaseStringUTFChars(compositor_j, (const char *)compositor_ch);
				#else
				const ev_wchar* compositor_ch = (const ev_wchar*)__env->GetStringChars(compositor_j,JNI_FALSE);
				const EVString compositor = compositor_ch;
				__env->ReleaseStringChars(compositor_j, (const jchar *)compositor_ch);
				#endif
				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				EarthView::World::Graphic::CCompositorInstance* __values1 = pObjectX->addCompositor(ref_vp, compositor);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_removeCompositor_1CViewport_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vp_j, jstring compositor_j)
			{
				EarthView::World::Graphic::CViewport *vp = (EarthView::World::Graphic::CViewport*) vp_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* compositor_ch = (const ev_char*)__env->GetStringUTFChars(compositor_j,JNI_FALSE);
				const EVString compositor = compositor_ch;
				__env->ReleaseStringUTFChars(compositor_j, (const char *)compositor_ch);
				#else
				const ev_wchar* compositor_ch = (const ev_wchar*)__env->GetStringChars(compositor_j,JNI_FALSE);
				const EVString compositor = compositor_ch;
				__env->ReleaseStringChars(compositor_j, (const jchar *)compositor_ch);
				#endif
				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				pObjectX->removeCompositor(vp, compositor);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_setCompositorEnabled_1CViewport_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vp_j, jstring compositor_j, jboolean value_j)
			{
				EarthView::World::Graphic::CViewport *vp = (EarthView::World::Graphic::CViewport*) vp_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* compositor_ch = (const ev_char*)__env->GetStringUTFChars(compositor_j,JNI_FALSE);
				const EVString compositor = compositor_ch;
				__env->ReleaseStringUTFChars(compositor_j, (const char *)compositor_ch);
				#else
				const ev_wchar* compositor_ch = (const ev_wchar*)__env->GetStringChars(compositor_j,JNI_FALSE);
				const EVString compositor = compositor_ch;
				__env->ReleaseStringChars(compositor_j, (const jchar *)compositor_ch);
				#endif
				ev_bool value = (ev_bool) value_j;
				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				pObjectX->setCompositorEnabled(vp, compositor, value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorManager__1getTexturedRectangle2D_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				EarthView::World::Graphic::CRenderable* __values1 = pObjectX->_getTexturedRectangle2D();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_removeAll_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositorManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositorManager::removeAll();
				}
				else
				{
					pObjectX->removeAll();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1removeAll_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAll_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAll_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_removeAll_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositorManager::removeAll();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager__1reconstructAllCompositorResources_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				pObjectX->_reconstructAllCompositorResources();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_00024UniqueTextureSet_insert_1CTexture(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_val_j)
			{
				EarthView::World::Graphic::CTexture *&ref_val = *(EarthView::World::Graphic::CTexture**) ref_val_j;
				EarthView::World::Graphic::CCompositorManager::UniqueTextureSet *pObjectX = (EarthView::World::Graphic::CCompositorManager::UniqueTextureSet*) pObjXXXX;
				pObjectX->insert(ref_val);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorManager_00024UniqueTextureSet_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorManager::UniqueTextureSet *pObjectX = (EarthView::World::Graphic::CCompositorManager::UniqueTextureSet*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorManager_00024UniqueTextureSet_erase_1CTexture(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
			{
				EarthView::World::Graphic::CTexture *&key = *(EarthView::World::Graphic::CTexture**) key_j;
				EarthView::World::Graphic::CCompositorManager::UniqueTextureSet *pObjectX = (EarthView::World::Graphic::CCompositorManager::UniqueTextureSet*) pObjXXXX;
				ev_size_t __values1 = pObjectX->erase(key);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositorManager_00024UniqueTextureSet_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorManager::UniqueTextureSet *pObjectX = (EarthView::World::Graphic::CCompositorManager::UniqueTextureSet*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_00024UniqueTextureSet_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorManager::UniqueTextureSet *pObjectX = (EarthView::World::Graphic::CCompositorManager::UniqueTextureSet*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorManager_00024UniqueTextureSet_count_1CTexture(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
			{
				EarthView::World::Graphic::CTexture *&key = *(EarthView::World::Graphic::CTexture**) key_j;
				EarthView::World::Graphic::CCompositorManager::UniqueTextureSet *pObjectX = (EarthView::World::Graphic::CCompositorManager::UniqueTextureSet*) pObjXXXX;
				ev_size_t __values1 = pObjectX->count(key);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorManager_00024UniqueTextureSet_max_1size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorManager::UniqueTextureSet *pObjectX = (EarthView::World::Graphic::CCompositorManager::UniqueTextureSet*) pObjXXXX;
				ev_size_t __values1 = pObjectX->max_size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_00024UniqueTextureSet_swap_1UniqueTextureSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
			{
				EarthView::World::Graphic::CCompositorManager::UniqueTextureSet &other = *(EarthView::World::Graphic::CCompositorManager::UniqueTextureSet*) other_j;
				EarthView::World::Graphic::CCompositorManager::UniqueTextureSet *pObjectX = (EarthView::World::Graphic::CCompositorManager::UniqueTextureSet*) pObjXXXX;
				pObjectX->swap(other);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorManager_getPooledTexture_1EVString_1EVString_1ev_1size_1t_1ev_1size_1t_1PixelFormat_1ev_1uint32_1EVString_1ev_1bool_1UniqueTextureSet_1CCompositorInstance_1TextureScope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring localName_j, jlong w_j, jlong h_j, jint f_j, jlong aa_j, jstring aaHint_j, jboolean srgb_j, jlong texturesAlreadyAssigned_j, jlong inst_j, jint scope_j)
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
				const ev_char* localName_ch = (const ev_char*)__env->GetStringUTFChars(localName_j,JNI_FALSE);
				const EVString localName = localName_ch;
				__env->ReleaseStringUTFChars(localName_j, (const char *)localName_ch);
				#else
				const ev_wchar* localName_ch = (const ev_wchar*)__env->GetStringChars(localName_j,JNI_FALSE);
				const EVString localName = localName_ch;
				__env->ReleaseStringChars(localName_j, (const jchar *)localName_ch);
				#endif
				ev_size_t w = (ev_size_t) w_j;
				ev_size_t h = (ev_size_t) h_j;
				EarthView::World::Graphic::PixelFormat f = (EarthView::World::Graphic::PixelFormat) f_j;
				ev_uint32 aa = (ev_uint32) aa_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* aaHint_ch = (const ev_char*)__env->GetStringUTFChars(aaHint_j,JNI_FALSE);
				const EVString aaHint = aaHint_ch;
				__env->ReleaseStringUTFChars(aaHint_j, (const char *)aaHint_ch);
				#else
				const ev_wchar* aaHint_ch = (const ev_wchar*)__env->GetStringChars(aaHint_j,JNI_FALSE);
				const EVString aaHint = aaHint_ch;
				__env->ReleaseStringChars(aaHint_j, (const jchar *)aaHint_ch);
				#endif
				ev_bool srgb = (ev_bool) srgb_j;
				EarthView::World::Graphic::CCompositorManager::UniqueTextureSet &texturesAlreadyAssigned = *(EarthView::World::Graphic::CCompositorManager::UniqueTextureSet*) texturesAlreadyAssigned_j;
				EarthView::World::Graphic::CCompositorInstance *inst = (EarthView::World::Graphic::CCompositorInstance*) inst_j;
				EarthView::World::Graphic::CCompositionTechnique::TextureScope scope = (EarthView::World::Graphic::CCompositionTechnique::TextureScope) scope_j;
				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				EarthView::World::Graphic::CTexturePtr __values1 = pObjectX->getPooledTexture(name, localName, w, h, f, aa, aaHint, srgb, texturesAlreadyAssigned, inst, scope);
				EarthView::World::Graphic::CTexturePtr *returnvalues = new EarthView::World::Graphic::CTexturePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_freePooledTextures_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean onlyIfUnreferenced_j)
			{
				ev_bool onlyIfUnreferenced = (ev_bool) onlyIfUnreferenced_j;
				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				pObjectX->freePooledTextures(onlyIfUnreferenced);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_freePooledTextures_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				pObjectX->freePooledTextures();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_registerCompositorLogic_1EVString_1CCompositorLogic(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong ref_logic_j)
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
				EarthView::World::Graphic::CCompositorLogic *ref_logic = (EarthView::World::Graphic::CCompositorLogic*) ref_logic_j;
				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				pObjectX->registerCompositorLogic(name, ref_logic);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_unregisterCompositorLogic_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				pObjectX->unregisterCompositorLogic(name);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorManager_getCompositorLogic_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				EarthView::World::Graphic::CCompositorLogic* __values1 = pObjectX->getCompositorLogic(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_registerCustomCompositionPass_1EVString_1CCustomCompositionPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong ref_customPass_j)
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
				EarthView::World::Graphic::CCustomCompositionPass *ref_customPass = (EarthView::World::Graphic::CCustomCompositionPass*) ref_customPass_j;
				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				pObjectX->registerCustomCompositionPass(name, ref_customPass);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositorManager_getCustomCompositionPass_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CCompositorManager *pObjectX = (EarthView::World::Graphic::CCompositorManager*) pObjXXXX;
				EarthView::World::Graphic::CCustomCompositionPass* __values1 = pObjectX->getCustomCompositionPass(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1create_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback", "(Ljava/lang/String;Ljava/lang/String;ZJJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1create_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_create_EVString_EVString_ev_bool_CManualResourceLoader_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"create_EVString_EVString_ev_bool_CManualResourceLoader_callback", "(Ljava/lang/String;Ljava/lang/String;ZJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1create_1EVString_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_create_EVString_EVString_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"create_EVString_EVString_ev_bool_callback", "(Ljava/lang/String;Ljava/lang/String;Z)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1create_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_create_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"create_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1createUnmanaged_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback", "(Ljava/lang/String;ZJJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1createUnmanaged_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createUnmanaged_EVString_ev_bool_CManualResourceLoader_callback", "(Ljava/lang/String;ZJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1createUnmanaged_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createUnmanaged_EVString_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createUnmanaged_EVString_ev_bool_callback", "(Ljava/lang/String;Z)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1createUnmanaged_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createUnmanaged_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createUnmanaged_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1createOrRetrieve_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback", "(Ljava/lang/String;Ljava/lang/String;ZJJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1createOrRetrieve_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_callback", "(Ljava/lang/String;Ljava/lang/String;ZJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1createOrRetrieve_1EVString_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createOrRetrieve_EVString_EVString_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createOrRetrieve_EVString_EVString_ev_bool_callback", "(Ljava/lang/String;Ljava/lang/String;Z)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1createOrRetrieve_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createOrRetrieve_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createOrRetrieve_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1setMemoryBudget_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setMemoryBudget_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setMemoryBudget_ev_size_t_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1getMemoryBudget_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMemoryBudget_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMemoryBudget_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1getMemoryUsage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMemoryUsage_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMemoryUsage_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1unload_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unload_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unload_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1unload_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unload_ev_uint64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unload_ev_uint64_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1unloadAll_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unloadAll_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unloadAll_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1unloadAll_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unloadAll_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unloadAll_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1reloadAll_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_reloadAll_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"reloadAll_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1reloadAll_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_reloadAll_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"reloadAll_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1unloadUnreferencedResources_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unloadUnreferencedResources_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unloadUnreferencedResources_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1unloadUnreferencedResources_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unloadUnreferencedResources_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unloadUnreferencedResources_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1reloadUnreferencedResources_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_reloadUnreferencedResources_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"reloadUnreferencedResources_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1reloadUnreferencedResources_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_reloadUnreferencedResources_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"reloadUnreferencedResources_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1remove_1ResourcePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_remove_ResourcePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"remove_ResourcePtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1remove_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_remove_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"remove_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1remove_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_remove_ev_uint64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"remove_ev_uint64_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1remove_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_remove_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"remove_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1removeUnreferencedResources_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeUnreferencedResources_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeUnreferencedResources_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1removeUnreferencedResources_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeUnreferencedResources_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeUnreferencedResources_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1removeUnreferencedResource_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeUnreferencedResource_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeUnreferencedResource_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1removeUnreferencedResource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeUnreferencedResource_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeUnreferencedResource_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1unloadUnreferencedResource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unloadUnreferencedResource_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unloadUnreferencedResource_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1unloadUnreferencedResource_1EVString_1EVString_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unloadUnreferencedResource_EVString_EVString_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unloadUnreferencedResource_EVString_EVString_ev_uint16_callback", "(Ljava/lang/String;Ljava/lang/String;I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1getByName_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getByName_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getByName_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1getByName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getByName_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getByName_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1getByHandle_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getByHandle_ev_uint64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getByHandle_ev_uint64_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1resourceExists_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resourceExists_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resourceExists_EVString_callback", "(Ljava/lang/String;)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1resourceExists_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resourceExists_ev_uint64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resourceExists_ev_uint64_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1_1notifyResourceTouched_1CResource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyResourceTouched_CResource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyResourceTouched_CResource_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1_1notifyResourceLoaded_1CResource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyResourceLoaded_CResource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyResourceLoaded_CResource_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1_1notifyResourceUnloaded_1CResource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyResourceUnloaded_CResource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyResourceUnloaded_CResource_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1prepare_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback", "(Ljava/lang/String;Ljava/lang/String;ZJJZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1prepare_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback", "(Ljava/lang/String;Ljava/lang/String;ZJJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1prepare_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepare_EVString_EVString_ev_bool_CManualResourceLoader_callback", "(Ljava/lang/String;Ljava/lang/String;ZJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1prepare_1EVString_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepare_EVString_EVString_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepare_EVString_EVString_ev_bool_callback", "(Ljava/lang/String;Ljava/lang/String;Z)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1load_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback", "(Ljava/lang/String;Ljava/lang/String;ZJJZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1load_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback", "(Ljava/lang/String;Ljava/lang/String;ZJJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1load_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_EVString_EVString_ev_bool_CManualResourceLoader_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_EVString_EVString_ev_bool_CManualResourceLoader_callback", "(Ljava/lang/String;Ljava/lang/String;ZJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1load_1EVString_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_EVString_EVString_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_EVString_EVString_ev_bool_callback", "(Ljava/lang/String;Ljava/lang/String;Z)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1load_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1setVerbose_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setVerbose_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setVerbose_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1getVerbose_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getVerbose_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getVerbose_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1addImpl_1ResourcePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addImpl_ResourcePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addImpl_ResourcePtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1removeImpl_1ResourcePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeImpl_ResourcePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeImpl_ResourcePtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1checkUsage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_checkUsage_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"checkUsage_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1getScriptPatterns_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getScriptPatterns_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getScriptPatterns_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositorManager_register_1getLoadingOrder_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositorManagerProxy *pObjectX = (JCCompositorManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLoadingOrder_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLoadingOrder_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
