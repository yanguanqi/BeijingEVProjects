/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/resourcemanager.h"
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
			class JCResourceManagerProxy : public EarthView::World::Graphic::CResourceManager
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
				JCResourceManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CResourceManager(pList)
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
						return this->CResourceManager::create(name, group, isManual, ref_loader, createParams);
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
						return this->CResourceManager::create(name, group, isManual, ref_loader);
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
						return this->CResourceManager::create(name, group, isManual);
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
						return this->CResourceManager::create(name, group);
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
						return this->CResourceManager::createUnmanaged(name, isManual, ref_loader, createParams);
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
						return this->CResourceManager::createUnmanaged(name, isManual, ref_loader);
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
						return this->CResourceManager::createUnmanaged(name, isManual);
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
						return this->CResourceManager::createUnmanaged(name);
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
						return this->CResourceManager::createOrRetrieve(name, group, isManual, ref_loader, createParams);
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
						return this->CResourceManager::createOrRetrieve(name, group, isManual, ref_loader);
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
						return this->CResourceManager::createOrRetrieve(name, group, isManual);
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
						return this->CResourceManager::createOrRetrieve(name, group);
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
						return this->CResourceManager::setMemoryBudget(bytes);
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
						return this->CResourceManager::getMemoryBudget();
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
						return this->CResourceManager::getMemoryUsage();
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
						return this->CResourceManager::unload(name);
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
						return this->CResourceManager::unload(handle);
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
						return this->CResourceManager::unloadAll(reloadableOnly);
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
						return this->CResourceManager::unloadAll();
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
						return this->CResourceManager::reloadAll(reloadableOnly);
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
						return this->CResourceManager::reloadAll();
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
						return this->CResourceManager::unloadUnreferencedResources(reloadableOnly);
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
						return this->CResourceManager::unloadUnreferencedResources();
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
						return this->CResourceManager::reloadUnreferencedResources(reloadableOnly);
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
						return this->CResourceManager::reloadUnreferencedResources();
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
						return this->CResourceManager::remove(r);
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
						return this->CResourceManager::remove(name);
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
						return this->CResourceManager::remove(handle);
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
						return this->CResourceManager::remove(name, groupname);
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
						return this->CResourceManager::removeAll();
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
						return this->CResourceManager::removeUnreferencedResources(reloadableOnly);
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
						return this->CResourceManager::removeUnreferencedResources();
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
						return this->CResourceManager::removeUnreferencedResource(name);
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
						return this->CResourceManager::removeUnreferencedResource(name, groupName);
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
						return this->CResourceManager::unloadUnreferencedResource(name, groupName);
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
						return this->CResourceManager::unloadUnreferencedResource(name, groupName, useCount);
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
						return this->CResourceManager::getByName(name, groupName);
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
						return this->CResourceManager::getByName(name);
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
						return this->CResourceManager::getByHandle(handle);
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
						return this->CResourceManager::resourceExists(name);
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
						return this->CResourceManager::resourceExists(handle);
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
						return this->CResourceManager::_notifyResourceTouched(res);
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
						return this->CResourceManager::_notifyResourceLoaded(res);
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
						return this->CResourceManager::_notifyResourceUnloaded(res);
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
						return this->CResourceManager::prepare(name, group, isManual, ref_loader, loadParams, backgroundThread);
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
						return this->CResourceManager::prepare(name, group, isManual, ref_loader, loadParams);
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
						return this->CResourceManager::prepare(name, group, isManual, ref_loader);
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
						return this->CResourceManager::prepare(name, group, isManual);
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
						return this->CResourceManager::load(name, group, isManual, ref_loader, loadParams, backgroundThread);
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
						return this->CResourceManager::load(name, group, isManual, ref_loader, loadParams);
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
						return this->CResourceManager::load(name, group, isManual, ref_loader);
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
						return this->CResourceManager::load(name, group, isManual);
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
						return this->CResourceManager::load(name, group);
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
						return this->CResourceManager::getScriptPatterns();
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
						return this->CResourceManager::parseScript(stream, groupName);
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
						return this->CResourceManager::getLoadingOrder();
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
						return this->CResourceManager::setVerbose(v);
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
						return this->CResourceManager::getVerbose();
					}
				}
				virtual EarthView::World::Graphic::CResource* createImpl(const EVString& name, ev_uint64 handle, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* loader, const EarthView::World::Core::CommonStringPairList* createParams)
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
						jlong loader_j = (jlong) loader;
						jlong createParams_j = (jlong) createParams;
						jmethodID __method = __gr->getMethod("createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, handle_j, group_j, isManual_j, loader_j, createParams_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CResource *__values1 = (EarthView::World::Graphic::CResource*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CResourceManager::createImpl(name, handle, group, isManual, loader, createParams);
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
						return this->CResourceManager::addImpl(res);
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
						return this->CResourceManager::removeImpl(res);
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
						return this->CResourceManager::checkUsage();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCResourceManagerProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CResourceManager& __values1 = EarthView::World::Graphic::CResourceManager::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CResourceManager* __values1 = EarthView::World::Graphic::CResourceManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_create_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong createParams_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *createParams = (const EarthView::World::Core::CommonStringPairList*) createParams_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::create(name, group, isManual, ref_loader, createParams);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->create(name, group, isManual, ref_loader, createParams);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1create_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_create_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong createParams_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *createParams = (const EarthView::World::Core::CommonStringPairList*) createParams_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::create(name, group, isManual, ref_loader, createParams);
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_create_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::create(name, group, isManual, ref_loader);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->create(name, group, isManual, ref_loader);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1create_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_create_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::create(name, group, isManual, ref_loader);
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_create_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::create(name, group, isManual);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->create(name, group, isManual);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1create_1EVString_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_create_1EVString_1EVString_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::create(name, group, isManual);
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_create_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::create(name, group);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->create(name, group);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1create_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_create_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::create(name, group);
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_createUnmanaged_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean isManual_j, jlong ref_loader_j, jlong createParams_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *createParams = (const EarthView::World::Core::CommonStringPairList*) createParams_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::createUnmanaged(name, isManual, ref_loader, createParams);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->createUnmanaged(name, isManual, ref_loader, createParams);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1createUnmanaged_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_createUnmanaged_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean isManual_j, jlong ref_loader_j, jlong createParams_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *createParams = (const EarthView::World::Core::CommonStringPairList*) createParams_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::createUnmanaged(name, isManual, ref_loader, createParams);
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_createUnmanaged_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean isManual_j, jlong ref_loader_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::createUnmanaged(name, isManual, ref_loader);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->createUnmanaged(name, isManual, ref_loader);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1createUnmanaged_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_createUnmanaged_1EVString_1ev_1bool_1CManualResourceLoader_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean isManual_j, jlong ref_loader_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::createUnmanaged(name, isManual, ref_loader);
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_createUnmanaged_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean isManual_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::createUnmanaged(name, isManual);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->createUnmanaged(name, isManual);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1createUnmanaged_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_createUnmanaged_1EVString_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean isManual_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::createUnmanaged(name, isManual);
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_createUnmanaged_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::createUnmanaged(name);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->createUnmanaged(name);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1createUnmanaged_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_createUnmanaged_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::createUnmanaged(name);
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceCreateOrRetrieveResult_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->first);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceCreateOrRetrieveResult_set_1first_1ResourcePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*)pObjXXXX;
				pObjectX->first = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceCreateOrRetrieveResult_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceCreateOrRetrieveResult_set_1second_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*)pObjXXXX;
				pObjectX->second = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceCreateOrRetrieveResult_OperatorAssign_1ResourceCreateOrRetrieveResult(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
			{
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult& pObjectX = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*) pObjXXXX;
				const EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult &other = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*) other_j;
				pObjectX = other;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_createOrRetrieve_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong createParams_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *createParams = (const EarthView::World::Core::CommonStringPairList*) createParams_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::createOrRetrieve(name, group, isManual, ref_loader, createParams);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->createOrRetrieve(name, group, isManual, ref_loader, createParams);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1createOrRetrieve_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_createOrRetrieve_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong createParams_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *createParams = (const EarthView::World::Core::CommonStringPairList*) createParams_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::createOrRetrieve(name, group, isManual, ref_loader, createParams);
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_createOrRetrieve_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::createOrRetrieve(name, group, isManual, ref_loader);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->createOrRetrieve(name, group, isManual, ref_loader);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1createOrRetrieve_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_createOrRetrieve_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::createOrRetrieve(name, group, isManual, ref_loader);
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_createOrRetrieve_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::createOrRetrieve(name, group, isManual);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->createOrRetrieve(name, group, isManual);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1createOrRetrieve_1EVString_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_createOrRetrieve_1EVString_1EVString_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::createOrRetrieve(name, group, isManual);
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_createOrRetrieve_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::createOrRetrieve(name, group);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->createOrRetrieve(name, group);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1createOrRetrieve_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_createOrRetrieve_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::createOrRetrieve(name, group);
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_setMemoryBudget_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bytes_j)
			{
				ev_size_t bytes = (ev_size_t) bytes_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::setMemoryBudget(bytes);
				}
				else
				{
					pObjectX->setMemoryBudget(bytes);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1setMemoryBudget_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_setMemoryBudget_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bytes_j)
			{
				ev_size_t bytes = (ev_size_t) bytes_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::setMemoryBudget(bytes);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_getMemoryBudget_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::getMemoryBudget();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->getMemoryBudget();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1getMemoryBudget_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_getMemoryBudget_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::getMemoryBudget();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_getMemoryUsage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::getMemoryUsage();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->getMemoryUsage();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1getMemoryUsage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_getMemoryUsage_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::getMemoryUsage();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_unload_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::unload(name);
				}
				else
				{
					pObjectX->unload(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1unload_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_unload_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::unload(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_unload_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong handle_j)
			{
				ev_uint64 handle = *(ev_uint64*) handle_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::unload(handle);
				}
				else
				{
					pObjectX->unload(handle);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1unload_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_unload_1ev_1uint64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong handle_j)
			{
				ev_uint64 handle = *(ev_uint64*) handle_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::unload(handle);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_unloadAll_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean reloadableOnly_j)
			{
				ev_bool reloadableOnly = (ev_bool) reloadableOnly_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::unloadAll(reloadableOnly);
				}
				else
				{
					pObjectX->unloadAll(reloadableOnly);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1unloadAll_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_unloadAll_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean reloadableOnly_j)
			{
				ev_bool reloadableOnly = (ev_bool) reloadableOnly_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::unloadAll(reloadableOnly);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_unloadAll_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::unloadAll();
				}
				else
				{
					pObjectX->unloadAll();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1unloadAll_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_unloadAll_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::unloadAll();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_reloadAll_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean reloadableOnly_j)
			{
				ev_bool reloadableOnly = (ev_bool) reloadableOnly_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::reloadAll(reloadableOnly);
				}
				else
				{
					pObjectX->reloadAll(reloadableOnly);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1reloadAll_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_reloadAll_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean reloadableOnly_j)
			{
				ev_bool reloadableOnly = (ev_bool) reloadableOnly_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::reloadAll(reloadableOnly);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_reloadAll_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::reloadAll();
				}
				else
				{
					pObjectX->reloadAll();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1reloadAll_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_reloadAll_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::reloadAll();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_unloadUnreferencedResources_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean reloadableOnly_j)
			{
				ev_bool reloadableOnly = (ev_bool) reloadableOnly_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::unloadUnreferencedResources(reloadableOnly);
				}
				else
				{
					pObjectX->unloadUnreferencedResources(reloadableOnly);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1unloadUnreferencedResources_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_unloadUnreferencedResources_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean reloadableOnly_j)
			{
				ev_bool reloadableOnly = (ev_bool) reloadableOnly_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::unloadUnreferencedResources(reloadableOnly);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_unloadUnreferencedResources_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::unloadUnreferencedResources();
				}
				else
				{
					pObjectX->unloadUnreferencedResources();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1unloadUnreferencedResources_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_unloadUnreferencedResources_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::unloadUnreferencedResources();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_reloadUnreferencedResources_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean reloadableOnly_j)
			{
				ev_bool reloadableOnly = (ev_bool) reloadableOnly_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::reloadUnreferencedResources(reloadableOnly);
				}
				else
				{
					pObjectX->reloadUnreferencedResources(reloadableOnly);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1reloadUnreferencedResources_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_reloadUnreferencedResources_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean reloadableOnly_j)
			{
				ev_bool reloadableOnly = (ev_bool) reloadableOnly_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::reloadUnreferencedResources(reloadableOnly);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_reloadUnreferencedResources_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::reloadUnreferencedResources();
				}
				else
				{
					pObjectX->reloadUnreferencedResources();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1reloadUnreferencedResources_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_reloadUnreferencedResources_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::reloadUnreferencedResources();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_remove_1ResourcePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong r_j)
			{
				EarthView::World::Graphic::ResourcePtr &r = *(EarthView::World::Graphic::ResourcePtr*) r_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::remove(r);
				}
				else
				{
					pObjectX->remove(r);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1remove_1ResourcePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_remove_1ResourcePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong r_j)
			{
				EarthView::World::Graphic::ResourcePtr &r = *(EarthView::World::Graphic::ResourcePtr*) r_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::remove(r);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_remove_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::remove(name);
				}
				else
				{
					pObjectX->remove(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1remove_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_remove_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::remove(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_remove_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong handle_j)
			{
				ev_uint64 handle = *(ev_uint64*) handle_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::remove(handle);
				}
				else
				{
					pObjectX->remove(handle);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1remove_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_remove_1ev_1uint64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong handle_j)
			{
				ev_uint64 handle = *(ev_uint64*) handle_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::remove(handle);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_remove_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupname_j)
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
				const ev_char* groupname_ch = (const ev_char*)__env->GetStringUTFChars(groupname_j,JNI_FALSE);
				const EVString groupname = groupname_ch;
				__env->ReleaseStringUTFChars(groupname_j, (const char *)groupname_ch);
				#else
				const ev_wchar* groupname_ch = (const ev_wchar*)__env->GetStringChars(groupname_j,JNI_FALSE);
				const EVString groupname = groupname_ch;
				__env->ReleaseStringChars(groupname_j, (const jchar *)groupname_ch);
				#endif
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::remove(name, groupname);
				}
				else
				{
					pObjectX->remove(name, groupname);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1remove_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_remove_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupname_j)
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
				const ev_char* groupname_ch = (const ev_char*)__env->GetStringUTFChars(groupname_j,JNI_FALSE);
				const EVString groupname = groupname_ch;
				__env->ReleaseStringUTFChars(groupname_j, (const char *)groupname_ch);
				#else
				const ev_wchar* groupname_ch = (const ev_wchar*)__env->GetStringChars(groupname_j,JNI_FALSE);
				const EVString groupname = groupname_ch;
				__env->ReleaseStringChars(groupname_j, (const jchar *)groupname_ch);
				#endif
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::remove(name, groupname);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_removeAll_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::removeAll();
				}
				else
				{
					pObjectX->removeAll();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1removeAll_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_removeAll_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::removeAll();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_removeUnreferencedResources_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean reloadableOnly_j)
			{
				ev_bool reloadableOnly = (ev_bool) reloadableOnly_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::removeUnreferencedResources(reloadableOnly);
				}
				else
				{
					pObjectX->removeUnreferencedResources(reloadableOnly);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1removeUnreferencedResources_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_removeUnreferencedResources_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean reloadableOnly_j)
			{
				ev_bool reloadableOnly = (ev_bool) reloadableOnly_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::removeUnreferencedResources(reloadableOnly);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_removeUnreferencedResources_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::removeUnreferencedResources();
				}
				else
				{
					pObjectX->removeUnreferencedResources();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1removeUnreferencedResources_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_removeUnreferencedResources_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::removeUnreferencedResources();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_removeUnreferencedResource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::removeUnreferencedResource(name);
				}
				else
				{
					pObjectX->removeUnreferencedResource(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1removeUnreferencedResource_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_removeUnreferencedResource_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::removeUnreferencedResource(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_removeUnreferencedResource_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::removeUnreferencedResource(name, groupName);
				}
				else
				{
					pObjectX->removeUnreferencedResource(name, groupName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1removeUnreferencedResource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_removeUnreferencedResource_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::removeUnreferencedResource(name, groupName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_unloadUnreferencedResource_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::unloadUnreferencedResource(name, groupName);
				}
				else
				{
					pObjectX->unloadUnreferencedResource(name, groupName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1unloadUnreferencedResource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_unloadUnreferencedResource_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::unloadUnreferencedResource(name, groupName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_unloadUnreferencedResource_1EVString_1EVString_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jint useCount_j)
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
				ev_uint16 useCount = (ev_uint16) useCount_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::unloadUnreferencedResource(name, groupName, useCount);
				}
				else
				{
					pObjectX->unloadUnreferencedResource(name, groupName, useCount);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1unloadUnreferencedResource_1EVString_1EVString_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_unloadUnreferencedResource_1EVString_1EVString_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jint useCount_j)
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
				ev_uint16 useCount = (ev_uint16) useCount_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::unloadUnreferencedResource(name, groupName, useCount);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_getByName_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::getByName(name, groupName);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->getByName(name, groupName);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1getByName_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_getByName_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::getByName(name, groupName);
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_getByName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::getByName(name);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->getByName(name);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1getByName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_getByName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::getByName(name);
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_getByHandle_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong handle_j)
			{
				ev_uint64 handle = *(ev_uint64*) handle_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::getByHandle(handle);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->getByHandle(handle);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1getByHandle_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_getByHandle_1ev_1uint64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong handle_j)
			{
				ev_uint64 handle = *(ev_uint64*) handle_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::getByHandle(handle);
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceManager_resourceExists_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::resourceExists(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->resourceExists(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1resourceExists_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceManager_resourceExists_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::resourceExists(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceManager_resourceExists_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong handle_j)
			{
				ev_uint64 handle = *(ev_uint64*) handle_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::resourceExists(handle);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->resourceExists(handle);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1resourceExists_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceManager_resourceExists_1ev_1uint64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong handle_j)
			{
				ev_uint64 handle = *(ev_uint64*) handle_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::resourceExists(handle);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager__1notifyResourceTouched_1CResource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j)
			{
				EarthView::World::Graphic::CResource *res = (EarthView::World::Graphic::CResource*) res_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::_notifyResourceTouched(res);
				}
				else
				{
					pObjectX->_notifyResourceTouched(res);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1_1notifyResourceTouched_1CResource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager__1notifyResourceTouched_1CResource_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j)
			{
				EarthView::World::Graphic::CResource *res = (EarthView::World::Graphic::CResource*) res_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::_notifyResourceTouched(res);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager__1notifyResourceLoaded_1CResource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j)
			{
				EarthView::World::Graphic::CResource *res = (EarthView::World::Graphic::CResource*) res_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::_notifyResourceLoaded(res);
				}
				else
				{
					pObjectX->_notifyResourceLoaded(res);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1_1notifyResourceLoaded_1CResource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager__1notifyResourceLoaded_1CResource_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j)
			{
				EarthView::World::Graphic::CResource *res = (EarthView::World::Graphic::CResource*) res_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::_notifyResourceLoaded(res);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager__1notifyResourceUnloaded_1CResource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j)
			{
				EarthView::World::Graphic::CResource *res = (EarthView::World::Graphic::CResource*) res_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::_notifyResourceUnloaded(res);
				}
				else
				{
					pObjectX->_notifyResourceUnloaded(res);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1_1notifyResourceUnloaded_1CResource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager__1notifyResourceUnloaded_1CResource_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j)
			{
				EarthView::World::Graphic::CResource *res = (EarthView::World::Graphic::CResource*) res_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::_notifyResourceUnloaded(res);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_prepare_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong loadParams_j, jboolean backgroundThread_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *loadParams = (const EarthView::World::Core::CommonStringPairList*) loadParams_j;
				ev_bool backgroundThread = (ev_bool) backgroundThread_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::prepare(name, group, isManual, ref_loader, loadParams, backgroundThread);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->prepare(name, group, isManual, ref_loader, loadParams, backgroundThread);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1prepare_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_prepare_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong loadParams_j, jboolean backgroundThread_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *loadParams = (const EarthView::World::Core::CommonStringPairList*) loadParams_j;
				ev_bool backgroundThread = (ev_bool) backgroundThread_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::prepare(name, group, isManual, ref_loader, loadParams, backgroundThread);
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_prepare_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong loadParams_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *loadParams = (const EarthView::World::Core::CommonStringPairList*) loadParams_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::prepare(name, group, isManual, ref_loader, loadParams);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->prepare(name, group, isManual, ref_loader, loadParams);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1prepare_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_prepare_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong loadParams_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *loadParams = (const EarthView::World::Core::CommonStringPairList*) loadParams_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::prepare(name, group, isManual, ref_loader, loadParams);
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_prepare_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::prepare(name, group, isManual, ref_loader);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->prepare(name, group, isManual, ref_loader);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1prepare_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_prepare_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::prepare(name, group, isManual, ref_loader);
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_prepare_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::prepare(name, group, isManual);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->prepare(name, group, isManual);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1prepare_1EVString_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_prepare_1EVString_1EVString_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::prepare(name, group, isManual);
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_load_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong loadParams_j, jboolean backgroundThread_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *loadParams = (const EarthView::World::Core::CommonStringPairList*) loadParams_j;
				ev_bool backgroundThread = (ev_bool) backgroundThread_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::load(name, group, isManual, ref_loader, loadParams, backgroundThread);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->load(name, group, isManual, ref_loader, loadParams, backgroundThread);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1load_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_load_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong loadParams_j, jboolean backgroundThread_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *loadParams = (const EarthView::World::Core::CommonStringPairList*) loadParams_j;
				ev_bool backgroundThread = (ev_bool) backgroundThread_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::load(name, group, isManual, ref_loader, loadParams, backgroundThread);
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_load_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong loadParams_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *loadParams = (const EarthView::World::Core::CommonStringPairList*) loadParams_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::load(name, group, isManual, ref_loader, loadParams);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->load(name, group, isManual, ref_loader, loadParams);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1load_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_load_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong loadParams_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *loadParams = (const EarthView::World::Core::CommonStringPairList*) loadParams_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::load(name, group, isManual, ref_loader, loadParams);
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_load_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::load(name, group, isManual, ref_loader);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->load(name, group, isManual, ref_loader);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1load_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_load_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::load(name, group, isManual, ref_loader);
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_load_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::load(name, group, isManual);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->load(name, group, isManual);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1load_1EVString_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_load_1EVString_1EVString_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j)
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
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::load(name, group, isManual);
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_load_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::load(name, group);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->load(name, group);
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1load_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_load_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::load(name, group);
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_getScriptPatterns_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					const EarthView::World::Core::StringVector& __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::getScriptPatterns();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Core::StringVector& __values1 = pObjectX->getScriptPatterns();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1getScriptPatterns_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_getScriptPatterns_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				const EarthView::World::Core::StringVector& __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::getScriptPatterns();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_parseScript_1DataStreamPtr_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jstring groupName_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::parseScript(stream, groupName);
				}
				else
				{
					pObjectX->parseScript(stream, groupName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1parseScript_1DataStreamPtr_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_parseScript_1DataStreamPtr_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jstring groupName_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::parseScript(stream, groupName);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ResourceManager_getLoadingOrder_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::getLoadingOrder();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getLoadingOrder();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1getLoadingOrder_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ResourceManager_getLoadingOrder_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::getLoadingOrder();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_getResourceType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				const EVString& __values1 = pObjectX->getResourceType();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_setVerbose_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean v_j)
			{
				ev_bool v = (ev_bool) v_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::setVerbose(v);
				}
				else
				{
					pObjectX->setVerbose(v);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1setVerbose_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_setVerbose_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean v_j)
			{
				ev_bool v = (ev_bool) v_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::setVerbose(v);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceManager_getVerbose_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::getVerbose();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getVerbose();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1getVerbose_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceManager_getVerbose_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::getVerbose();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			class JCResourcePoolProxy : public EarthView::World::Graphic::CResourceManager::CResourcePool
			{
			 private:
				EarthView::World::Core::ev_string m_removeItem_void_callback;
				EarthView::World::Core::ev_string m_addItem_ResourcePtr_callback;
				EarthView::World::Core::ev_string m_clear_void_callback;
			public:
				JCResourcePoolProxy(EarthView::World::Core::CNameValuePairList *pList) : CResourcePool(pList)
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
				void register_removeItem_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeItem_void_callback = __method;
				}
				void register_addItem_ResourcePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addItem_ResourcePtr_callback = __method;
				}
				void register_clear_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_clear_void_callback = __method;
				}
				virtual EarthView::World::Graphic::ResourcePtr removeItem()
				{
					if (this->_gRef != NULL && this->m_removeItem_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeItem_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
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
						return this->CResourcePool::removeItem();
					}
				}
				virtual void addItem(const EarthView::World::Graphic::ResourcePtr& i)
				{
					if (this->_gRef != NULL && this->m_addItem_ResourcePtr_callback != "" && this->isCustomExtend())
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
						jlong i_j = (jlong) &i;
						jmethodID __method = __gr->getMethod("addItem_ResourcePtr_callback");
						__env->CallVoidMethod(__obj, __method , i_j);
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
						return this->CResourcePool::addItem(i);
					}
				}
				virtual void clear()
				{
					if (this->_gRef != NULL && this->m_clear_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("clear_void_callback");
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
						return this->CResourcePool::clear();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCResourcePoolProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourcePool_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceManager::CResourcePool *pObjectX = (EarthView::World::Graphic::CResourceManager::CResourcePool*) pObjXXXX;
				const EVString& __values1 = pObjectX->getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourcePool_removeItem_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager::CResourcePool *pObjectX = (EarthView::World::Graphic::CResourceManager::CResourcePool*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourcePoolProxy))
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::CResourcePool::removeItem();
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->removeItem();
					EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourcePool_register_1removeItem_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourcePoolProxy *pObjectX = (JCResourcePoolProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeItem_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeItem_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourcePool_removeItem_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager::CResourcePool *pObjectX = (EarthView::World::Graphic::CResourceManager::CResourcePool*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::CResourcePool::removeItem();
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourcePool_addItem_1ResourcePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong i_j)
			{
				const EarthView::World::Graphic::ResourcePtr &i = *(EarthView::World::Graphic::ResourcePtr*) i_j;
				EarthView::World::Graphic::CResourceManager::CResourcePool *pObjectX = (EarthView::World::Graphic::CResourceManager::CResourcePool*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourcePoolProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::CResourcePool::addItem(i);
				}
				else
				{
					pObjectX->addItem(i);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourcePool_register_1addItem_1ResourcePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourcePoolProxy *pObjectX = (JCResourcePoolProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addItem_ResourcePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addItem_ResourcePtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourcePool_addItem_1ResourcePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong i_j)
			{
				const EarthView::World::Graphic::ResourcePtr &i = *(EarthView::World::Graphic::ResourcePtr*) i_j;
				EarthView::World::Graphic::CResourceManager::CResourcePool *pObjectX = (EarthView::World::Graphic::CResourceManager::CResourcePool*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::CResourcePool::addItem(i);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourcePool_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager::CResourcePool *pObjectX = (EarthView::World::Graphic::CResourceManager::CResourcePool*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourcePoolProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::CResourcePool::clear();
				}
				else
				{
					pObjectX->clear();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourcePool_register_1clear_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourcePoolProxy *pObjectX = (JCResourcePoolProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_clear_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"clear_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourcePool_clear_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager::CResourcePool *pObjectX = (EarthView::World::Graphic::CResourceManager::CResourcePool*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::CResourcePool::clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_getResourcePool_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::CResourceManager::CResourcePool* __values1 = pObjectX->getResourcePool(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_destroyResourcePool_1CResourcePool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pool_j)
			{
				EarthView::World::Graphic::CResourceManager::CResourcePool *pool = (EarthView::World::Graphic::CResourceManager::CResourcePool*) pool_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->destroyResourcePool(pool);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_destroyResourcePool_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->destroyResourcePool(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_destroyAllResourcePools_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->destroyAllResourcePools();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_createImpl_1EVString_1ev_1uint64_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong handle_j, jstring group_j, jboolean isManual_j, jlong loader_j, jlong createParams_j)
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
				EarthView::World::Graphic::CManualResourceLoader *loader = (EarthView::World::Graphic::CManualResourceLoader*) loader_j;
				const EarthView::World::Core::CommonStringPairList *createParams = (const EarthView::World::Core::CommonStringPairList*) createParams_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					EarthView::World::Graphic::CResource* __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::createImpl(name, handle, group, isManual, loader, createParams);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CResource* __values1 = pObjectX->createImpl(name, handle, group, isManual, loader, createParams);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1createImpl_1EVString_1ev_1uint64_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_createImpl_1EVString_1ev_1uint64_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong handle_j, jstring group_j, jboolean isManual_j, jlong loader_j, jlong createParams_j)
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
				EarthView::World::Graphic::CManualResourceLoader *loader = (EarthView::World::Graphic::CManualResourceLoader*) loader_j;
				const EarthView::World::Core::CommonStringPairList *createParams = (const EarthView::World::Core::CommonStringPairList*) createParams_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::CResource* __values1 = pObjectX->EarthView::World::Graphic::CResourceManager::createImpl(name, handle, group, isManual, loader, createParams);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_addImpl_1ResourcePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j)
			{
				EarthView::World::Graphic::ResourcePtr &res = *(EarthView::World::Graphic::ResourcePtr*) res_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::addImpl(res);
				}
				else
				{
					pObjectX->addImpl(res);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1addImpl_1ResourcePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_addImpl_1ResourcePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j)
			{
				EarthView::World::Graphic::ResourcePtr &res = *(EarthView::World::Graphic::ResourcePtr*) res_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::addImpl(res);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_removeImpl_1ResourcePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j)
			{
				EarthView::World::Graphic::ResourcePtr &res = *(EarthView::World::Graphic::ResourcePtr*) res_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::removeImpl(res);
				}
				else
				{
					pObjectX->removeImpl(res);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1removeImpl_1ResourcePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_removeImpl_1ResourcePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j)
			{
				EarthView::World::Graphic::ResourcePtr &res = *(EarthView::World::Graphic::ResourcePtr*) res_j;
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::removeImpl(res);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_checkUsage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCResourceManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CResourceManager::checkUsage();
				}
				else
				{
					pObjectX->checkUsage();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_register_1checkUsage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCResourceManagerProxy *pObjectX = (JCResourceManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_checkUsage_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CResourceManager::checkUsage();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceMap_push_1EVString_1ResourcePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
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
				EarthView::World::Graphic::ResourcePtr &val = *(EarthView::World::Graphic::ResourcePtr*) val_j;
				EarthView::World::Graphic::CResourceManager::ResourceMap *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::CResourceManager::ResourceMap *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::CResourceManager::ResourceMap& pObjectX = *(EarthView::World::Graphic::CResourceManager::ResourceMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::ResourcePtr& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::CResourceManager::ResourceMap *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceMap*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::CResourceManager::ResourceMap *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceManager::ResourceMap *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager::ResourceMap *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceManager::ResourceMap *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceWithGroupMap_push_1EVString_1ResourceMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
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
				EarthView::World::Graphic::CResourceManager::ResourceMap &val = *(EarthView::World::Graphic::CResourceManager::ResourceMap*) val_j;
				EarthView::World::Graphic::CResourceManager::ResourceWithGroupMap *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceWithGroupMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceWithGroupMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::CResourceManager::ResourceWithGroupMap *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceWithGroupMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceWithGroupMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::CResourceManager::ResourceWithGroupMap& pObjectX = *(EarthView::World::Graphic::CResourceManager::ResourceWithGroupMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CResourceManager::ResourceMap& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceWithGroupMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::CResourceManager::ResourceWithGroupMap *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceWithGroupMap*) pObjXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceMap& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceWithGroupMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::CResourceManager::ResourceWithGroupMap *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceWithGroupMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceWithGroupMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceManager::ResourceWithGroupMap *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceWithGroupMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceWithGroupMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager::ResourceWithGroupMap *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceWithGroupMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceWithGroupMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceManager::ResourceWithGroupMap *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceWithGroupMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceHandleMap_push_1ev_1uint64_1ResourcePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j, jlong val_j)
			{
				const ev_uint64 &key = *(ev_uint64*) key_j;
				const EarthView::World::Graphic::ResourcePtr &val = *(EarthView::World::Graphic::ResourcePtr*) val_j;
				EarthView::World::Graphic::CResourceManager::ResourceHandleMap *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceHandleMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceHandleMap_exist_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
			{
				const ev_uint64 &key = *(ev_uint64*) key_j;
				EarthView::World::Graphic::CResourceManager::ResourceHandleMap *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceHandleMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceHandleMap_OperatorIndex_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong key_j )
			{
				EarthView::World::Graphic::CResourceManager::ResourceHandleMap& pObjectX = *(EarthView::World::Graphic::CResourceManager::ResourceHandleMap*) pObjXXXX;
				const ev_uint64 &key = *(ev_uint64*) key_j;
				EarthView::World::Graphic::ResourcePtr& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceHandleMap_get_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
			{
				const ev_uint64 &key = *(ev_uint64*) key_j;
				EarthView::World::Graphic::CResourceManager::ResourceHandleMap *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceHandleMap*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceHandleMap_erase_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
			{
				const ev_uint64 &key = *(ev_uint64*) key_j;
				EarthView::World::Graphic::CResourceManager::ResourceHandleMap *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceHandleMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceHandleMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceManager::ResourceHandleMap *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceHandleMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceHandleMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager::ResourceHandleMap *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceHandleMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceHandleMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceManager::ResourceHandleMap *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceHandleMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceHandlePair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager::ResourceHandlePair *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceHandlePair*)pObjXXXX;
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<(pObjectX->first);
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceHandlePair_set_1first_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CResourceManager::ResourceHandlePair *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceHandlePair*)pObjXXXX;
				pObjectX->first = *(ev_uint64*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceHandlePair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager::ResourceHandlePair *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceHandlePair*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceHandlePair_set_1second_1ResourcePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CResourceManager::ResourceHandlePair *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceHandlePair*)pObjXXXX;
				pObjectX->second = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceHandleIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceManager::ResourceHandleIterator *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceHandleIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceHandleIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager::ResourceHandleIterator *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceHandleIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceHandleIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceManager::ResourceHandleIterator *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceHandleIterator*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->nextKey();
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceHandleIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CResourceManager::ResourceHandleIterator *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceHandleIterator*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->nextValue();
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceHandleIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager::ResourceHandleIterator *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceHandleIterator*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr* __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceHandleIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager::ResourceHandleIterator *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceHandleIterator*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX->next();
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceHandleIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager::ResourceHandleIterator *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceHandleIterator*) pObjXXXX;
				const EarthView::World::Graphic::CResourceManager::ResourceHandlePair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceHandleIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager::ResourceHandleIterator *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceHandleIterator*) pObjXXXX;
				const EarthView::World::Graphic::CResourceManager::ResourceHandlePair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_00024ResourceHandleIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager::ResourceHandleIterator *pObjectX = (EarthView::World::Graphic::CResourceManager::ResourceHandleIterator*) pObjXXXX;
				const EarthView::World::Graphic::CResourceManager::ResourceHandlePair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ResourceManager_getResourceIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CResourceManager *pObjectX = (EarthView::World::Graphic::CResourceManager*) pObjXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceHandleIterator __values1 = pObjectX->getResourceIterator();
				EarthView::World::Graphic::CResourceManager::ResourceHandleIterator *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceHandleIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
		}
	}
}
